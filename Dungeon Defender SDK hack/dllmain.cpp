/*----------------------------------------------------------------------------------------------------
TODO:
	ADD HEALTH ESP FOR BOTH ENEMY AND PLAYER

	FIX UP MENU









----------------------------------------------------------------------------------------------------*/





#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NON_CONFORMING_SWPRINTFS
#include "Header.h"
#include "Menu.h"
#include "DD_SDK/DD/SdkHeaders.h"

#include <d3d9.h>
#include <d3dx9.h>
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")

#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_win32.h"
#include "ImGui/imgui_impl_dx9.h"


HWND t = FindWindow(NULL, TEXT("Dungeon Defenders"));



DWORD dllBase = (DWORD)GetModuleHandleA(NULL);
DWORD BaseProcessEventAddress = 0x090BB0;
DWORD ProcessEventAddress = (dllBase + BaseProcessEventAddress);
typedef void(__thiscall* tProcessEvent)(class UObject*, class UFunction*, void*, void*);
tProcessEvent ProcessEvent = (tProcessEvent)ProcessEventAddress;







HMODULE threadmodule;
bool Logging = false;
bool bFilter = false;

FILE* fp = fopen("DDFunctionsF1.txt", "w+");
FILE* ffp = fopen("DDCheck.txt", "w+");


//BGRA
FColor fRed = { 0, 0, 255, 255 };
FColor fBlue = { 255, 0, 0, 255 };
FColor fCyan = { 255, 255, 0, 255 };
FColor fGreen = { 0, 255, 0, 255 };
FColor fWhite = { 255, 255, 255, 255 };





ADunDefPlayerAbility_GenericActorSpawner* spawner;

UGameEngine* gameEngine;					  //EntityList
APlayerController* controller;				  //player controller/hero
ADunDefGameReplicationInfo* plevel;			  //level up
UDunDef_SeqAct_SetWaveNumber* waveNum;		  //wavNum
UDunDefHeroManager* heroManager;			  //Add items to box
ADunDefPlayer* player;						  //might not be needed
ADunDefPlayerCamera* playerCam;			      //cam
AMain* main;								  //Enemys Left for wave


FVector							Loc;
FRotator						Rot;
FVector							TeleportLocation;



//--------------------------------[MENU]--------------------------------------//
wchar_t buffer[255];
bool showMenu = false;



bool EspMenu = false;
bool LobbyMenu = false;




bool BoxEsp = false;
bool HealthEsp = false;
bool TraceLine = false;

bool EBoxEsp = false;
bool EHealthEsp = false;
bool ETraceLine = false;

bool LineToTeleport = false;

bool lootshowerMenu = false;




MenuChoice ESP(std::string("ESP"));
MenuChoice GodMode(std::string("GodMode"));
MenuChoice Vaccume(std::string("Vaccume"));
MenuChoice lastwave(std::string("lastwave"));
MenuChoice autolevel(std::string("autolevel"));
MenuChoice InstantKill(std::string("InstantKill"));
MenuChoice lootshower(std::string("lootshower"));
MenuChoice OnlyKill1(std::string("OnlyKill1"));


int HHealth = 0;
int HSpeed = 0;
int HDamage = 0;
int HCast = 0;
int Ability1 = 0;
int Ability2 = 0;
int THealth = 30;
int TSpeed = 0;
int TDamage = 0;
int TRange = 0;

int ItemsAdded = 0;
int ItemsAddedTotal = 0;


float gravity = .5;
float jumpz = 1300;
float Scale = 1;




bool addcheats = false;


UObject* GetInstanceOf(UClass* Class)
{
	if (!UObject::GObjObjects())
		return 0;

	static UObject* ObjectInstance = NULL;

	for (int i = 0; i < UObject::GObjObjects()->Count; ++i)
	{

		UObject* CheckObject = UObject::GObjObjects()->Data[i];
		if (CheckObject && CheckObject->IsA(Class))
		{
			if (!strstr(CheckObject->GetFullName(), "Default"))
				ObjectInstance = CheckObject;
		}
	}
	return ObjectInstance;
};

//fun funcs -----------------------------------------------------------
void CastBird() {


	if (spawner && spawner->ActorToSpawnUponCompletion && controller && controller->AcknowledgedPawn) {

		FVector t = controller->AcknowledgedPawn->Location;
		t.X += 50;
		spawner->ServerActivateWithLocation(t);
	}
}


//dx9 hook-------------------------------------------------------------
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wPAram, LPARAM lParam);

typedef HRESULT(APIENTRY* tEndScene)(LPDIRECT3DDEVICE9 pDevice);
tEndScene oScene;

typedef LRESULT(CALLBACK* WNDPROC)(const HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lparam);
WNDPROC oWndProc;



void* d3d9Device[119];
LPDIRECT3DDEVICE9 d3Device;



bool Hook(char* src, char* dst, int len)
{
	if (len < 5) return false;

	DWORD curProtection;

	VirtualProtect(src, len, PAGE_EXECUTE_READWRITE, &curProtection);

	memset(src, 0x90, len);

	uintptr_t relativeAddress = (uintptr_t)(dst - src - 5);

	*src = (char)0xE9;
	*(uintptr_t*)(src + 1) = (uintptr_t)relativeAddress;

	DWORD temp;
	VirtualProtect(src, len, curProtection, &temp);

	return true;
}
char* TrampHook(char* src, char* dst, unsigned int len)
{
	if (len < 5) return 0;

	// Create the gateway (len + 5 for the overwritten bytes + the jmp)
	char* gateway = (char*)VirtualAlloc(0, len + 5, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

	// Put the bytes that will be overwritten in the gateway
	memcpy(gateway, src, len);

	// Get the gateway to destination addy
	uintptr_t gateJmpAddy = (uintptr_t)(src - gateway - 5);

	// Add the jmp opcode to the end of the gateway
	*(gateway + len) = (char)0xE9;

	// Add the address to the jmp
	*(uintptr_t*)(gateway + len + 1) = gateJmpAddy;

	// Place the hook at the destination
	if (Hook(src, dst, len))
	{
		return gateway;
	}
	else return nullptr;
}



LRESULT __stdcall WndProc(const HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lparam) {

	if (showMenu)
		ImGui_ImplWin32_WndProcHandler(hwnd, uMsg, wParam, lparam);


	return CallWindowProc(oWndProc, hwnd, uMsg, wParam, lparam);
}






bool GetDevicePointer(void** pTable, size_t size) {

	if (!pTable)
		return false;

	IDirect3D9* pD3D = Direct3DCreate9(D3D_SDK_VERSION);

	if (!pD3D)
		return false;

	IDirect3DDevice9* pDummyDevice = NULL;

	// options to create dummy device
	D3DPRESENT_PARAMETERS d3dpp = {};
	d3dpp.Windowed = true;
	d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;


	d3dpp.hDeviceWindow = t;

	HRESULT dummyDeviceCreated = pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, d3dpp.hDeviceWindow, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &pDummyDevice);

	if (dummyDeviceCreated != S_OK)
	{
		// may fail in windowed fullscreen mode, trying again with windowed mode
		d3dpp.Windowed = !d3dpp.Windowed;

		dummyDeviceCreated = pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, d3dpp.hDeviceWindow, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &pDummyDevice);

		if (dummyDeviceCreated != S_OK)
		{
			pD3D->Release();
			return false;
		}
	}

	memcpy(pTable, *reinterpret_cast<void***>(pDummyDevice), size);

	pDummyDevice->Release();
	pD3D->Release();
	return true;



}

HRESULT APIENTRY hkEndScene(LPDIRECT3DDEVICE9 pDevice) {
	static bool init = false;
	if (!init) {
		d3Device = pDevice;
		init = true;

		IMGUI_CHECKVERSION();
		ImGui::CreateContext();

		ImGuiIO& io = ImGui::GetIO();
		ImGui_ImplWin32_Init(t);
		ImGui_ImplDX9_Init(pDevice);




	}


	if (showMenu) {
		ImGui_ImplDX9_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();


		if (!ImGui::Begin("BUTTER 2.1")) {

			ImGui::End();

		}
		else {


			ImGui::Checkbox("ESP MENU", &EspMenu);
			ImGui::Checkbox("LOBBY MENU", &LobbyMenu);
			ImGui::Checkbox("LOOTSHOWER MENU", &lootshowerMenu);
			ImGui::SliderFloat("Damage", &plevel->NightmareModeHeroDamageMultiplier, 0, 9999);

			if(ImGui::Button("Damage")) {
				



				

				//if (plevel && spawner && player) {
				//	
				//	

				//	//for (int i = 0; i < player->PlayerAbilities.Count; i++)
				//	//{
				//	//	player->PlayerAbilities.Data[i]->ActivationInterval = 0;
				//	//	player->PlayerAbilities.Data[i]->MinimumReactivationInterval = 0;
				//	//	player->PlayerAbilities.Data[i]->LobbyActivationInterval = 0;
				//	//}


				//	

				//}
			}
			//ImGui::Checkbox("Logging", &Logging);




			ImGui::End();
		}


		if (LobbyMenu) {
			ImGui::Begin("LOBBY MENU");


			ImGui::SliderFloat("Gravity", &gravity, 0, 5);
			ImGui::SliderFloat("Jump Height", &jumpz, 1200, 30000);
			ImGui::SliderFloat("Scale", &Scale, -10, 10);


			
			ImGui::BeginChild("Child1", ImVec2(ImGui::GetWindowContentRegionWidth() * 0.5f, 260), false);
			ImGui::Checkbox(GodMode.Name.c_str(), &GodMode.bIsOn);
			ImGui::Checkbox(lastwave.Name.c_str(), &lastwave.bIsOn);
			ImGui::Checkbox(InstantKill.Name.c_str(), &InstantKill.bIsOn);
			ImGui::EndChild(); ImGui::SameLine();

			ImGui::BeginChild("Child2", ImVec2(ImGui::GetWindowContentRegionWidth() * 0.5f, 260), false);

			ImGui::Checkbox(OnlyKill1.Name.c_str(), &OnlyKill1.bIsOn);
			ImGui::Checkbox(autolevel.Name.c_str(), &autolevel.bIsOn);
			ImGui::Checkbox(Vaccume.Name.c_str(), &Vaccume.bIsOn);
			ImGui::EndChild();

			ImGui::End();
		}
		if (EspMenu) {
			ImGui::Begin("ESP MENU");

			ImGui::BeginChild("Child1", ImVec2(ImGui::GetWindowContentRegionWidth() * 0.5f, 80), false);
			ImGui::Checkbox("Player ESP Box", &BoxEsp);
			ImGui::Checkbox("Player ESP Health", &HealthEsp);
			ImGui::Checkbox("Player TraceLine", &TraceLine);
			ImGui::EndChild(); ImGui::SameLine();

			ImGui::BeginChild("Child2", ImVec2(ImGui::GetWindowContentRegionWidth() * 0.5f, 80), false);
			ImGui::Checkbox("Enemy ESP Box", &EBoxEsp);
			ImGui::Checkbox("Enemy ESP Health", &EHealthEsp);
			ImGui::Checkbox("Enemy TraceLine", &ETraceLine);
			ImGui::EndChild();

			ImGui::Checkbox("LineToTeleport", &LineToTeleport);
			

			ImGui::End();
		}

		if (lootshowerMenu) {
			ImGui::Begin("LOOTSHOWER MENU");

			ImGui::SliderInt("Hero Health", &HHealth, 0, 500);
			ImGui::SliderInt("Hero Speed", &HSpeed, 0, 500);
			ImGui::SliderInt("Hero Damage", &HDamage, 0, 500);
			ImGui::SliderInt("Hero Cast", &HCast, 0, 500);
			ImGui::SliderInt("Ability1", &Ability1, 0, 500);
			ImGui::SliderInt("Ability2", &Ability2, 0, 500);
			ImGui::SliderInt("Tower Health", &THealth, 0, 500);
			ImGui::SliderInt("Tower Speed", &TSpeed, 0, 500);
			ImGui::SliderInt("Tower Damage", &TDamage, 0, 500);
			ImGui::SliderInt("Tower Range", &TRange, 0, 500);
			ImGui::Text("ItemsAdded : %d   |  Items Filtered : %d", ItemsAdded, ItemsAddedTotal); ImGui::SameLine();
			if (ImGui::Button("Reset")) {
				ItemsAdded = 0;
				ItemsAddedTotal = 0;
			}

			ImGui::Checkbox("Enable/Disable", &lootshower.bIsOn);
			ImGui::End();
		}



		ImGui::EndFrame();
		ImGui::Render();
		ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
	}

	return oScene(pDevice);
}





//Menu
FVector WorldToScreen(UCanvas* pCanvas, FVector Location)
{

	FVector Return = { 0,0,0 };

	FVector AxisX, AxisY, AxisZ, Delta, Transformed;

	pCanvas->GetAxes(Rot, &AxisX, &AxisY, &AxisZ);


	Delta = controller->Subtract_VectorVector(Location, Loc);
	Transformed.X = controller->Dot_VectorVector(Delta, AxisY);
	Transformed.Y = controller->Dot_VectorVector(Delta, AxisZ);
	Transformed.Z = controller->Dot_VectorVector(Delta, AxisX);

	if (Transformed.Z < 1.00f)
		Transformed.Z = 1.00f;

	if (controller && controller->PlayerCamera) {
		float FOVAngle = controller->PlayerCamera->GetFOVAngle();

		Return.X = (pCanvas->ClipX / 2.0f) + Transformed.X * ((pCanvas->ClipX / 2.0f) / controller->Tan(FOVAngle * CONST_Pi / 360.0f)) / Transformed.Z;
		Return.Y = (pCanvas->ClipY / 2.0f) + -Transformed.Y * ((pCanvas->ClipX / 2.0f) / controller->Tan(FOVAngle * CONST_Pi / 360.0f)) / Transformed.Z;
		Return.Z = 0;
	}

	return Return;

}
void GetPoints(ADunDefPawn* Target, UCanvas* canvas, FVector* arrayin) {


	FBoxSphereBounds PlayerBounds = Target->Mesh->Bounds;
	FVector Top = {
		PlayerBounds.Origin.X,
			PlayerBounds.Origin.Y,
			PlayerBounds.Origin.Z + PlayerBounds.BoxExtent.Z };
	FVector Left = {
		PlayerBounds.Origin.X,
			PlayerBounds.Origin.Y + PlayerBounds.BoxExtent.Y,
			PlayerBounds.Origin.Z - PlayerBounds.BoxExtent.Z };
	FVector Right = {
		PlayerBounds.Origin.X,
			PlayerBounds.Origin.Y - PlayerBounds.BoxExtent.Y,
			PlayerBounds.Origin.Z - PlayerBounds.BoxExtent.Z };
	FVector Front = {
		PlayerBounds.Origin.X + PlayerBounds.BoxExtent.X,
			PlayerBounds.Origin.Y,
			PlayerBounds.Origin.Z - PlayerBounds.BoxExtent.Z };
	FVector Back = {
		PlayerBounds.Origin.X - PlayerBounds.BoxExtent.X,
			PlayerBounds.Origin.Y,
			PlayerBounds.Origin.Z - PlayerBounds.BoxExtent.Z };


	FVector screencordTop = WorldToScreen(canvas, Top);
	FVector screencordLeft = WorldToScreen(canvas, Left);
	FVector screencordRight = WorldToScreen(canvas, Right);
	FVector screencordFront = WorldToScreen(canvas, Front);
	FVector screencordBack = WorldToScreen(canvas, Back);



	FVector screenarray[] = {
	screencordTop,
	screencordLeft,
	screencordRight,
	screencordFront,
	screencordBack };


	FVector TopLeft = screencordTop;
	FVector BottomRight = screencordRight;




	for (int i = 0; i < 5; i++)
	{
		if (TopLeft.X > screenarray[i].X)
			TopLeft.X = screenarray[i].X;

		if (BottomRight.X < screenarray[i].X)
			BottomRight.X = screenarray[i].X;

		if (TopLeft.Y > screenarray[i].Y)
			TopLeft.Y = screenarray[i].Y;

		if (BottomRight.Y < screenarray[i].Y)
			BottomRight.Y = screenarray[i].Y;

	}


	BottomRight.X -= TopLeft.X;
	BottomRight.Y -= TopLeft.Y;

	//canvas->SetPos(TopLeft.X, TopLeft.Y);
	//canvas->DrawBox(BottomRight.X, BottomRight.Y);


	FVector ret[] = { TopLeft,BottomRight };
	//arrayin
	arrayin[0] = ret[0];
	arrayin[1] = ret[1];

}
void DrawEspBox(ADunDefPawn* Target, UCanvas* canvas, FVector arrayin[]) {

	canvas->SetPos(arrayin[0].X, arrayin[0].Y);
	canvas->DrawBox(arrayin[1].X, arrayin[1].Y);


}
void PostRender(UCanvas* canvas)
{
	if (!canvas) return;
	FColor tempc = canvas->DrawColor;
	plevel = ((ADunDefBasePlayerController*)(controller))->GetGRI();
	if (plevel && (plevel->IsLobbyLevel || plevel->bNextLevelIsRestartLevel)) {
		playerCam = nullptr;
	}
	//level && 
	//level->IsGameplayLevel && 
	if (controller) {
		if (gameEngine != nullptr && controller != nullptr)
			if (controller->Pawn) {
				if (controller->Pawn->WorldInfo && controller->Pawn->WorldInfo->PawnList) {
					FVector PlayerCord = WorldToScreen(canvas, controller->Pawn->Location);
					ADunDefPawn* Target = (ADunDefPawn*)controller->Pawn->WorldInfo->PawnList;

					
					
					while (Target != NULL)
					{
						if (Target != NULL && !Target->bDeleteMe && Target != controller->Pawn && Target->IsAliveAndWell())
						{
							FVector TargetPoints[2];
							GetPoints(Target, canvas, TargetPoints);
							//CastBird();
							if (Target && Target->Controller && Target->Controller->bIsPlayer)
							{
								canvas->DrawColor = fGreen;
								if (TargetPoints[0].X <= canvas->ClipX || TargetPoints[0].Y <= canvas->ClipY) {
									//PLAYER HOOKING AND CHANGING
									ADunDefPlayer* playertemp = (ADunDefPlayer*)Target;
									playertemp->GravityZMultiplier = gravity;
									playertemp->JumpZ = jumpz;
									playertemp->DrawScale = Scale;



									canvas->DrawColor = fBlue;
									if (BoxEsp)
										DrawEspBox(Target, canvas, TargetPoints);
									if (HealthEsp) {
										canvas->SetPos(TargetPoints[0].X, TargetPoints[0].Y);
										swprintf_s(buffer, L"%d", playertemp->Health);
										canvas->DrawText(buffer, false, 1.0f, 1.0f, NULL, 100, 100, 100, 100, NULL, NULL);
									}

									if (TraceLine) {
										canvas->Draw2DLine(TargetPoints[0].X, TargetPoints[0].Y, PlayerCord.X, PlayerCord.Y, fGreen);
									}


									if (GodMode.bIsOn) {
										playertemp->Controller->bGodMode = 1;
									}
									else {
										playertemp->Controller->bGodMode = 0;
									}


								}


							}
							else
							{
								//ENEMY HOOKIN AND CHANGING
								ADunDefEnemy* enemy = ((ADunDefEnemy*)(Target));
								canvas->DrawColor = fRed;
								if (EBoxEsp)
									DrawEspBox(Target, canvas, TargetPoints);
								if (EHealthEsp) {
									canvas->SetPos(TargetPoints[0].X, TargetPoints[0].Y);
									swprintf_s(buffer, L"%d", enemy->Health);
									canvas->DrawText(buffer, false, 1.0f, 1.0f, NULL, 100, 100, 100, 100, NULL, NULL);
								}

								if (ETraceLine) {
									canvas->Draw2DLine(TargetPoints[0].X, TargetPoints[0].Y, PlayerCord.X, PlayerCord.Y, fRed);
								}



								if (Vaccume.bIsOn)
									enemy->Location = TeleportLocation;

								if (InstantKill.bIsOn) {
									FVector tempVec = FVector();
									FTraceHitInfo tempHit = FTraceHitInfo();
									enemy->eventTakeDamage(enemy->HealthMax, NULL, tempVec, tempVec, NULL, tempHit, NULL);
								}
								if (lootshower.bIsOn) {
									enemy->SpawnDroppedEquipment();
								}

						}

					}
					Target = (ADunDefPawn*)Target->NextPawn;
				}

				//DRAW TELEPORT LOCATION ENEMY
				if (controller && controller->Pawn) {
					canvas->DrawColor = fCyan;
					FVector TeleCord = WorldToScreen(canvas, TeleportLocation);
					
					canvas->SetPos(TeleCord.X, TeleCord.Y);
					wchar_t test1[] = L"T";
					canvas->DrawText(test1, false, 1.0f, 1.0f, NULL, 100, 100, 100, 100, NULL, NULL);
					if (LineToTeleport)
						canvas->Draw2DLine(TeleCord.X, TeleCord.Y, PlayerCord.X, PlayerCord.Y, fGreen);

				}
			}
	}
}
canvas->DrawColor = tempc;
}






//Logging and hooking
void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult)
{


	char* szName = pFunction->GetFullName();
	//LOGGING
	//
	if (Logging) {
		bool in = false;
		for (int i = 0; i < filterint; i++) {
			if (strcmp(szName, filter[i]) == 0) {
				if (bFilter)
					in = true;
			}
		}//0x%p, &pObject
		if (!in)fprintf(fp, "%s || %s  \n", pObject->Name.GetName(), szName);
	}

	//std::cout
	//	<< std::hex << szName << " "
	//	<< " c = " << pFunction->Class->Name.GetName()
	//	<< " oo = " << pFunction->Outer->Outer->Name.GetName()
	//	<< " o = " << pFunction->Outer->Name.GetName()
	//	<< " n = " << pFunction->Name.GetName()
	//	<< std::dec << std::endl;


	if (szName) {
		if (gameEngine) {
			if (gameEngine->GamePlayers.Count != 0) {
				if (gameEngine->GamePlayers.Data[0] != NULL)
					controller = gameEngine->GamePlayers.Data[0]->Actor;



				if (controller && controller->Pawn) {
					controller->Pawn->GravityZMultiplier = gravity;
					controller->Pawn->JumpZ = jumpz;

					controller->Pawn->DrawScale = Scale;

					if (GodMode.bIsOn) {
						controller->bGodMode = 1;
					}
					else
					{
						controller->bGodMode = 0;
					}
				}



				//kill 1 to advance wave
				if (strcmp(szName, "Function UDKGame.Main.Tick") == 0) {
					main = ((AMain*)(pObject));
					if (OnlyKill1.bIsOn && main && main->CurrentKillCountUI) {
						if (main->CurrentKillCountUI->KillCountRemaining > 1)
							main->CurrentKillCountUI->KillCountRemaining = 1;

					}
					if (main && GodMode.bIsOn) {
						main->bCrystalCoreInvincible = 1;
					}
				}





				/*		if (strcmp(szName, "Function DunDefPlayerAbility_GenericActorSpawner.CastingAbility.BeginState") == 0) {
							ADunDefPlayerAbility_GenericActorSpawner* temp = ((ADunDefPlayerAbility_GenericActorSpawner*)(pObject));
							spawner = temp;

						}*/


						//if (strcmp(szName, "Function UDKGame.DunDef_SeqAct_LockContent.Activated") == 0) {
						//	UDunDef_SeqAct_LockContent* temp = ((UDunDef_SeqAct_LockContent*)(pObject));
						//	temp->bLockLevel = 0;
						//}



						//if (strcmp(szName, "Function UDKGame.DunDef_SeqCond_IsAchievementUnlocked.Activated") == 0) {
						//	UDunDef_SeqCond_IsAchievementUnlocked* temp = ((UDunDef_SeqCond_IsAchievementUnlocked*)(pObject));
						//	temp->IsUnlockedByAnyLocalPlayer = 1;
						//}



					//nightmare unlock
				if (strcmp(szName, "Function UDKGame.DunDef_SeqAct_SetNightmareUnlocked.Activated") == 0) {
					UDunDef_SeqAct_SetNightmareUnlocked* temp = ((UDunDef_SeqAct_SetNightmareUnlocked*)(pObject));
					if (temp) {
						temp->bSetUnlocked = 1;
						temp->bActuallyDoSet = 1;
					}
				}


				//Wave number
				if (strcmp(szName, "Function UDKGame.DunDef_SeqAct_SetWaveNumber.Activated") == 0) {
					waveNum = ((UDunDef_SeqAct_SetWaveNumber*)(pObject));
					if (lastwave.bIsOn) {
						waveNum->waveNumber = 45;
						lastwave.bIsOn = false;
					}
				}

				////god mode
				//if (strcmp(szName, "Function UDKGame.DunDefPlayer.Tick") == 0)
				//{
				//	if (pObject && ((ADunDefPlayer*)(pObject))->bIsHostPlayer) {
				//		player = (ADunDefPlayer*)pObject;

				//	}
				//	if (GodMode.bIsOn && ((ADunDefPlayer*)(pObject)) && ((ADunDefPlayer*)(pObject))->Controller) {
				//		((ADunDefPlayer*)(pObject))->Controller->bGodMode = 1;
				//	}

				//}

				////god mode backup
				//if (strcmp(szName, "Function UDKGame.DunDefPlayerController.GetPlayerViewPoint ") == 0)
				//{

				//	if (pObject && ((ADunDefPlayer*)(pObject))->bIsHostPlayer) {
				//		player = (ADunDefPlayer*)pObject;

				//	}
				//	if (GodMode.bIsOn && ((ADunDefPlayer*)(pObject)) && ((ADunDefPlayer*)(pObject))->Controller)
				//		((ADunDefPlayer*)(pObject))->Controller->bGodMode = 1;
				//}

				////god mode crystal core
				//if (strcmp(szName, "Function UDKGame.DunDefCrystalCore.Tick") == 0) {
				//	if (GodMode.bIsOn)
				//		((ADunDefCrystalCore*)(pObject))->Health = 999999999;
				//}

				//wave skip
				if (strcmp(szName, "Function UDKGame.DunDefGameReplicationInfo.Tick") == 0) {
					plevel = ((ADunDefGameReplicationInfo*)(pObject));
					if (autolevel.bIsOn && plevel)
						plevel->AwardWaveCompletion(145);

					//local text only
					//if (level) {
					//	//FLinearColor f = { 255,0,0,255 };
					//	//level->AddCustomFloatingText((wchar_t*)L"Can u see this?", TeleportLocation, 50, 1, 1, 0, f);
					//}
				}

				//get rot pos for w2s
				if (strcmp(szName, "Function Engine.Camera.UpdateCamera") == 0) {


					playerCam = (ADunDefPlayerCamera*)(pObject);
					if (playerCam) {
						Loc = playerCam->LastCameraLocation;
						Rot = playerCam->LastCameraRotation;
					}
					else {
						playerCam = nullptr;
					}
				}

				//crash check
				if (strcmp(szName, "Function UDKGame.DunDefGameReplicationInfo.IsAtLobbyLevel") == 0) {
					playerCam = nullptr;
					player = nullptr;
				}

				//loot shower
				if (strcmp(szName, "Function UDKGame.DunDefDroppedEquipment.ReportEquipmentToStats") == 0) {
					if (heroManager) {
						UHeroEquipment* tempweap = ((ADunDefDroppedEquipment*)(pObject))->MyEquipmentObject;
						//-- HACKED LOBBY MENU WORK IN PROGRESS --//
						FLinearColor r = { 0,0,10000,10000 };
						FLinearColor r1 = { 0,10000,0,10000 };
						FLinearColor r2 = { 10000,0,0,10000 };
						FLinearColor r3 = { 0,10000,10000,10000 };
						FLinearColor r4 = { 10000,0,10000,10000 };
						FLinearColor r5 = { 10000,10000,0,10000 };
						FLinearColor r6 = { 0,0,0,10000 };
						FLinearColor r7 = { 10000,10000,10000,10000 };
						FLinearColor r8 = { 10000,.5,.5,10000 };
						FLinearColor r9 = { .5,10000,.5,10000 };
						FLinearColor r10 = { .5,.5,10000,10000 };

						FLinearColor ra[] = {
							r,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10
						};


						static int ColorMod = 0;
						static int ColorMod2 = 5;
						if (ColorMod == 10)
							ColorMod = 0;
						if (ColorMod2 == 10)
							ColorMod2 = 0;
						
						//tempweap->StatModifiers[statHHealth] = 90000;
						//tempweap->StatModifiers[statHSpeed] = 90000;
						//tempweap->StatModifiers[statHDamage] = 90000;
						//tempweap->StatModifiers[statHCast ]= 90000;
						//tempweap->StatModifiers[statAbility1 ]= 90000;
						//tempweap->StatModifiers[statAbility2 ]= 90000;
						//tempweap->StatModifiers[statTHealth ]= 90000;
						//tempweap->StatModifiers[statTSpeed] = 90000;
						//tempweap->StatModifiers[statTDamage] = 90000;
						//tempweap->StatModifiers[statTRange] = 90000;

						tempweap->PrimaryColorOverride = ra[ColorMod];
						tempweap->SecondaryColorOverride = ra[ColorMod];


						ColorMod++;
						ColorMod2++;


						if (tempweap && lootshower.bIsOn) {
							bool PutItemIn = false;


							if (HHealth > 1)
								if (tempweap->StatModifiers[statHHealth] <= HHealth)
									PutItemIn = false;
							if (HSpeed > 1)
								if (tempweap->StatModifiers[statHSpeed] <= HSpeed)
									PutItemIn = false;
							if (HDamage > 1)
								if (tempweap->StatModifiers[statHDamage] <= HDamage)
									PutItemIn = false;
							if (HCast > 1)
								if (tempweap->StatModifiers[statHCast] <= HCast)
									PutItemIn = false;
							if (Ability1 > 1)
								if (tempweap->StatModifiers[statAbility1] <= Ability1)
									PutItemIn = false;
							if (Ability2 > 1)
								if (tempweap->StatModifiers[statAbility2] <= Ability2)
									PutItemIn = false;
							if (THealth > 1)
								if (tempweap->StatModifiers[statTHealth] <= THealth)
									PutItemIn = false;
							if (TSpeed > 1)
								if (tempweap->StatModifiers[statTSpeed] <= TSpeed)
									PutItemIn = false;
							if (TDamage > 1)
								if (tempweap->StatModifiers[statTDamage] <= TDamage)
									PutItemIn = false;
							if (TRange > 1)
								if (tempweap->StatModifiers[statTRange] <= TRange)
									PutItemIn = false;




							//player->MyPlayerHero;

							if (PutItemIn) {
								heroManager->AddEquipmentObjectToItemBox(((ADunDefPlayer*)(controller->Pawn))->MyPlayerHero, tempweap, 1);
								ItemsAdded++;
							}
							ItemsAddedTotal++;

						}



					}
				}


				
			}

		}

		if (strcmp(szName, "Function Engine.Interaction.PostRender") == 0)
		{
			PostRender(((UGameViewportClient_eventPostRender_Parms*)(pParms))->Canvas);
		}

	}
	ProcessEvent(pObject, pFunction, pParms, pResult);
}



//main
void OnAttach()
{
	/*AllocConsole();
	freopen("CONIN$", "r", stdin);
	freopen("CONOUT$", "w", stdout);

	std::cout << "[+] Successfully attached to process.\n";
	std::cout << std::hex << "GObjects : " << GObjects << " GNames : " << GNames << std::endl;*/








	while (gameEngine == NULL || controller == NULL) {
		//std::cout << "Waiting" << std::endl;

		heroManager = (UDunDefHeroManager*)GetInstanceOf(UDunDefHeroManager::StaticClass());
		gameEngine = (UGameEngine*)GetInstanceOf(UGameEngine::StaticClass());
		if (gameEngine)
			if (gameEngine->GamePlayers.Count != 0)
				if (gameEngine->GamePlayers.Data[0] != NULL)
					controller = gameEngine->GamePlayers.Data[0]->Actor;

		Sleep(1000);
	}







	if (GetDevicePointer(d3d9Device, sizeof(d3d9Device))) {
		oScene = (tEndScene)d3d9Device[42];
	}




	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(&(PVOID&)oScene, hkEndScene);
	DetourAttach(&(PVOID&)ProcessEvent, HookedPE);
	DetourTransactionCommit();








	if (t) {
		oWndProc = (WNDPROC)SetWindowLongPtr(t, GWL_WNDPROC, (LONG_PTR)WndProc);
	}












	bool end = true;

	while (end) {



		
		



		if (GetAsyncKeyState(VK_INSERT))
		{
			showMenu = !showMenu;
		}

		if (GetAsyncKeyState(VK_DELETE))
		{
			if (controller && controller->AcknowledgedPawn)
				TeleportLocation = controller->AcknowledgedPawn->Location;
		}


		if (GetAsyncKeyState(VK_END))
		{
			end = false;
		}

		Sleep(100);
	}






	(WNDPROC)SetWindowLongPtr(t, GWL_WNDPROC, (LONG_PTR)oWndProc);



	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourDetach(&(PVOID&)ProcessEvent, HookedPE);
	DetourDetach(&(PVOID&)oScene, hkEndScene);
	DetourTransactionCommit();





	FreeLibraryAndExitThread(threadmodule, NULL);
}


BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpvReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		threadmodule = hInstance;
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)OnAttach, NULL, NULL, NULL);
	}

	return TRUE;
}
