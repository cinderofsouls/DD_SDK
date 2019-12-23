


#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NON_CONFORMING_SWPRINTFS
// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <string>
#include <windows.h>
#include <iostream>
#include <fstream>
#include "Detours\detours.h"
#include "DD_SDK\DD\SdkHeaders.h"
#include "Filter.h"
#include <string>
#include <string>



#pragma comment(lib, "detours.lib")





FColor fRed = { 0,0,255,200 };
FColor fGreen = { 0,255,0,200 };
FColor fCyan = { 255,255,0,200 };
FColor fWhite = { 255,255,255,200 };
FColor fBlue = { 255,0,0,255 };



#define statHHealth 1
#define statHSpeed 2
#define statHDamage  3
#define statHCast 4
#define statAbility1 5
#define statAbility2 6
#define statTHealth 7
#define statTSpeed 8
#define statTDamage 9
#define statTRange 10


DWORD dllBase = (DWORD)GetModuleHandleA(NULL);
DWORD BaseProcessEventAddress = 0x090BB0;
DWORD ProcessEventAddress = (dllBase + BaseProcessEventAddress);
typedef void(__thiscall* tProcessEvent)(class UObject*, class UFunction*, void*, void*);
tProcessEvent ProcessEvent = (tProcessEvent)ProcessEventAddress;

HMODULE threadmodule;

//
//FILE* fp = fopen("DDFunctionsF1.txt", "w+");
//FILE* ffp = fopen("DDCheck.txt", "w+");












UGameEngine*					gameEngine;		  //EntityList
APlayerController*				controller;		  //
ADunDefGameReplicationInfo*		level;			  //
UDunDef_SeqAct_SetWaveNumber*	waveNum;		  //
UDunDefHeroManager*				heroManager;	  //
ADunDefPlayer*					player;			  //
ADunDefPlayerCamera*			playerCam;		  //

FVector							Loc;
FRotator						Rot;
FVector							TeleportLocation;

wchar_t buffer[255];

FVector2D MenuTextStart = { 160,90 };
FVector2D subMenuTextStart = { MenuTextStart.X + 120 , MenuTextStart.Y };

int weaponsadded = 0;




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

FVector WorldToScreen(UCanvas* pCanvas, FVector Location)
{

	FVector Return;

	FVector AxisX, AxisY, AxisZ, Delta, Transformed;

	pCanvas->GetAxes(Rot, &AxisX, &AxisY, &AxisZ);


	Delta = controller->Subtract_VectorVector(Location, Loc);
	Transformed.X = controller->Dot_VectorVector(Delta, AxisY);
	Transformed.Y = controller->Dot_VectorVector(Delta, AxisZ);
	Transformed.Z = controller->Dot_VectorVector(Delta, AxisX);

	if (Transformed.Z < 1.00f)
		Transformed.Z = 1.00f;

	//controller->playerCamera->GetFOVAngle;
	float FOVAngle = controller->PlayerCamera->GetFOVAngle();

	Return.X = (pCanvas->ClipX / 2.0f) + Transformed.X * ((pCanvas->ClipX / 2.0f) / controller->Tan(FOVAngle * CONST_Pi / 360.0f)) / Transformed.Z;
	Return.Y = (pCanvas->ClipY / 2.0f) + -Transformed.Y * ((pCanvas->ClipX / 2.0f) / controller->Tan(FOVAngle * CONST_Pi / 360.0f)) / Transformed.Z;
	Return.Z = 0;

	return Return;

}

void DrawRect(UCanvas* pCanvas, float X, float Y, float Width, float Height, UTexture2D* Texture, FColor DesiredColor)
{
	float OldCurX = pCanvas->CurX;
	float OldCurY = pCanvas->CurY;

	FColor OldColor = pCanvas->DrawColor;

	pCanvas->CurX = X;
	pCanvas->CurY = Y;
	pCanvas->DrawColor = DesiredColor;

	pCanvas->DrawRect(Width, Height, Texture);

	pCanvas->CurX = OldCurX;
	pCanvas->CurY = OldCurY;

	pCanvas->DrawColor = OldColor;
}

void DrawBox(UCanvas* pCanvas, float X, float Y, float Width, float Height, FColor DesiredColor)
{
	float OldCurX = pCanvas->CurX;
	float OldCurY = pCanvas->CurY;

	FColor OldColor = pCanvas->DrawColor;

	pCanvas->CurX = X;
	pCanvas->CurY = Y;
	pCanvas->DrawColor = DesiredColor;

	pCanvas->DrawBox(Width, Height);

	pCanvas->CurX = OldCurX;
	pCanvas->CurY = OldCurY;

	pCanvas->DrawColor = OldColor;



}

bool Hook(void* toHook, void* ourFunc, int len) {

	if (len < 5)
		return false;

	DWORD curProtect;
	VirtualProtect(toHook, len, PAGE_EXECUTE_READWRITE, &curProtect);

	memset(toHook, 0x90, len);

	DWORD reletive = ((DWORD)ourFunc - (DWORD)toHook) - 5;

	*(BYTE*)toHook = 0xE9;
	*(DWORD*)((DWORD)toHook + 1) = reletive;
	DWORD temp;
	VirtualProtect(toHook, len, curProtect, &temp);


	return true;
}
bool WriteToMemory(void* toHook, BYTE* write, int len) {

	DWORD curProtect;
	VirtualProtect(toHook, len, PAGE_EXECUTE_READWRITE, &curProtect);

	memcpy(toHook, write, len);

	DWORD temp;
	VirtualProtect(toHook, len, curProtect, &temp);


	return true;
}







void DrawMenu(UCanvas* canvas, float xpos, float ypos, float x, float y, FColor color, FColor color2) {


	FColor tempcolor = canvas->DrawColor;
	canvas->DrawColor = color;


	canvas->SetPos(xpos, ypos);
	canvas->DrawRect(x, y, canvas->DefaultTexture);

	canvas->DrawColor = color2;

	canvas->SetPos(xpos, ypos);
	canvas->DrawBox(x, y);


	canvas->DrawColor = tempcolor;

}

void PostRender(UCanvas* canvas)
{
	if (!canvas) return;




	if (ShowMenu) {
		if (!lootshower.bIsOn)
			weaponsadded = 0;



		DrawMenu(canvas, MenuTextStart.X - 5, MenuTextStart.Y - 5, MenuTextStart.X - 40, Menu::TotalY - 55, fWhite, fBlue);


		ESP.Display(canvas);
		GodMode.Display(canvas);
		Vaccume.Display(canvas);
		lastwave.Display(canvas);
		autolevel.Display(canvas);
		InstantKill.Display(canvas);
		lootshower.Display(canvas);

		if (lootshower.bSubMenu) {
			DrawMenu(canvas, subMenuTextStart.X - 5, MenuTextStart.Y - 5, subMenuTextStart.X - 100, SubMenu::TotalY - 45, fWhite, fBlue);


			HHealth.Render(canvas);
			HDamage.Render(canvas);
			HSpeed.Render(canvas);
			HCast.Render(canvas);
			Ability1.Render(canvas);
			Ability2.Render(canvas);
			THealth.Render(canvas);
			TDamage.Render(canvas);
			TRange.Render(canvas);
			TCast.Render(canvas);
			

			std::wstring tempstring = std::wstring(L"Items Added : ") + std::to_wstring(weaponsadded);
			canvas->SetDrawColor(100, 100, 100, 200);
			canvas->SetPos(subMenuTextStart.X, SubMenu::TotalY + 20);
			canvas->DrawText((wchar_t*)tempstring.c_str(), false, 1.0f, 1.0f, NULL, 100, 200, 200, 200, NULL, NULL);
		}
	}
	else {

		canvas->SetDrawColor(100, 100, 100, 200);
		canvas->SetPos(20, 20);
		canvas->DrawText((wchar_t*)L"Butter_2.0", false, 1.0f, 1.0f, NULL, 100, 200, 200, 200, NULL, NULL);
	}

	

	//if (heroManager) {
	//	heroManager->UnlockAllLevels = 1;
	//	heroManager->UnlockInclusive = 1;
	//	heroManager->bNightmareUnlocked = 1;
	//}




	if (level && (level->IsLobbyLevel || level->bNextLevelIsRestartLevel)) {
		playerCam = nullptr;
	}


	if (level && controller) {
		if (level->IsGameplayLevel && playerCam) {
			if (gameEngine != nullptr && controller != nullptr)
				if (controller->Pawn)
					if (controller->Pawn->WorldInfo && controller->Pawn->WorldInfo->PawnList) {

						APawn* Target = controller->Pawn->WorldInfo->PawnList;
						while (Target != NULL)
						{
							if (Target != NULL && !Target->bDeleteMe && Target != controller->Pawn && Target->IsAliveAndWell())
							{
								FBoxSphereBounds PlayerBounds = Target->Mesh->Bounds;
								if (Target->IsPlayerOwned())
								{


								}
								else
								{
									ADunDefEnemy* enemy = ((ADunDefEnemy*)(Target));
									if (ESP.bIsOn) {

										FColor tempc = canvas->DrawColor;
										canvas->DrawColor = fRed;
										FVector screencord = WorldToScreen(canvas, enemy->Location);
										if (screencord.X <= canvas->ClipX || screencord.Y <= canvas->ClipY) {
											canvas->SetPos(screencord.X, screencord.Y);

											swprintf_s(buffer, L"%d", enemy->Health);
											canvas->DrawText(buffer, false, 1.0f, 1.0f, NULL, 100, 100, 100, 100, NULL, NULL);
										}

										canvas->DrawColor = tempc;
									}


									if (Target && Target->Controller && !Target->Controller->bIsPlayer) {

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

							}
							Target = (APawn*)Target->NextPawn;
						}
					}


			FColor tempc = canvas->DrawColor;
			canvas->DrawColor = fCyan;

			FVector screencord = WorldToScreen(canvas, TeleportLocation);
			canvas->SetPos(screencord.X, screencord.Y);
			wchar_t test1[] = L"T";
			canvas->DrawText(test1, false, 1.0f, 1.0f, NULL, 100, 100, 100, 100, NULL, NULL);

			canvas->DrawColor = tempc;
		}
	}
}

void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult)
{


	char* szName = pFunction->GetFullName();
	//LOGGING
	//
	//bool in = false;
	//for (int i = 0; i < filterint; i++) {
	//	if (strcmp(szName, filter[i]) == 0) {
	//		if (bFilter)
	//			in = true;
	//	}
	//}//0x%p, &pObject
	//if (!in)fprintf(fp, "%s || %s  \n", pObject->Name.GetName(), szName);


	//std::cout
	//	<< std::hex << szName << " "
	//	<< " c = " << pFunction->Class->Name.GetName()
	//	<< " oo = " << pFunction->Outer->Outer->Name.GetName()
	//	<< " o = " << pFunction->Outer->Name.GetName()
	//	<< " n = " << pFunction->Name.GetName()
	//	<< std::dec << std::endl;


	if (szName) {
		if (gameEngine)
			if (gameEngine->GamePlayers.Count != 0) {
				if (gameEngine->GamePlayers.Data[0] != NULL)
					controller = gameEngine->GamePlayers.Data[0]->Actor;



				if (strcmp(szName, "Function UDKGame.DunDef_SeqAct_SetWaveNumber.Activated") == 0) {
					waveNum = ((UDunDef_SeqAct_SetWaveNumber*)(pObject));
					if (lastwave.bIsOn) {
						waveNum->waveNumber = 45;
						lastwave.bIsOn = false;
					}
				}






				if (strcmp(szName, "Function UDKGame.DunDefPlayer.Tick") == 0)
				{
					if (pObject && ((ADunDefPlayer*)(pObject))->bIsHostPlayer) {
						player = (ADunDefPlayer*)pObject;

					}
					if (GodMode.bIsOn && ((ADunDefPlayer*)(pObject)) && ((ADunDefPlayer*)(pObject))->Controller) {
						((ADunDefPlayer*)(pObject))->Controller->bGodMode = 1;
					}
				
				}



				if (strcmp(szName, "Function UDKGame.DunDefPlayerController.GetPlayerViewPoint ") == 0)
				{


					if (pObject && ((ADunDefPlayer*)(pObject))->bIsHostPlayer) {
						player = (ADunDefPlayer*)pObject;

					}
					if (GodMode.bIsOn && ((ADunDefPlayer*)(pObject)) && ((ADunDefPlayer*)(pObject))->Controller)
						((ADunDefPlayer*)(pObject))->Controller->bGodMode = 1;
				}



				if (strcmp(szName, "Function UDKGame.DunDefCrystalCore.Tick") == 0) {
					if (GodMode.bIsOn)
						((ADunDefCrystalCore*)(pObject))->Health = 999999999;
				}


				if (strcmp(szName, "Function UDKGame.DunDefGameReplicationInfo.Tick") == 0) {
					level = ((ADunDefGameReplicationInfo*)(pObject));
					if (autolevel.bIsOn && level)
							level->AwardWaveCompletion(145);
						
				}





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

				if (strcmp(szName, "Function UDKGame.DunDefGameReplicationInfo.IsAtLobbyLevel") == 0) {
					playerCam = nullptr;
					player = nullptr;
				}

				if (strcmp(szName, "Function UDKGame.DunDefDroppedEquipment.ReportEquipmentToStats") == 0) {
					if (heroManager) {
						UHeroEquipment* tempweap = ((ADunDefDroppedEquipment*)(pObject))->MyEquipmentObject;
						

						if (tempweap && player && lootshower.bIsOn) {
							bool PutItemIn = true;





							if(HHealth.Stat > 0)
							if (tempweap->StatModifiers[statHHealth] <= HHealth.Stat)
								PutItemIn = false;


							if (HDamage.Stat > 0)
							if (tempweap->StatModifiers[statHSpeed] <= HDamage.Stat)
								PutItemIn = false;



							if (HSpeed.Stat > 0)
							if (tempweap->StatModifiers[statHDamage] <= HSpeed.Stat)
								PutItemIn = false;



							if (HCast.Stat > 0)
							if (tempweap->StatModifiers[statHCast] <= HCast.Stat)
								PutItemIn = false;



							if (Ability1.Stat > 0)
							if (tempweap->StatModifiers[statAbility1] <= Ability1.Stat)
								PutItemIn = false;



							if (Ability2.Stat > 0)
							if (tempweap->StatModifiers[statAbility2] <= Ability2.Stat)
								PutItemIn = false;



							if (THealth.Stat > 0)
							if (tempweap->StatModifiers[statTHealth] <= THealth.Stat)
								PutItemIn = false;



							if (TCast.Stat > 0)
							if (tempweap->StatModifiers[statTSpeed] <= TCast.Stat)
								PutItemIn = false;



							if (TDamage.Stat > 0)
							if (tempweap->StatModifiers[statTDamage] <= TDamage.Stat)
								PutItemIn = false;



							if (TRange.Stat > 0)
							if (tempweap->StatModifiers[statTRange] <= TRange.Stat)
								PutItemIn = false;



							if (PutItemIn) {
								heroManager->AddEquipmentObjectToItemBox(player->MyPlayerHero, tempweap, 1);
								weaponsadded++;
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

void OnAttach()
{
	AllocConsole();
	freopen("CONIN$", "r", stdin);
	freopen("CONOUT$", "w", stdout);

	std::cout << "[+] Successfully attached to process.\n";
	std::cout << std::hex << "GObjects : " << GObjects << " GNames : " << GNames << std::endl;

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




	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(&(PVOID&)ProcessEvent, HookedPE);
	DetourTransactionCommit();

	bool bInMainMenu = true;
	bool bChangingFilter = false;
	bool end = true;
	
	while (end) {

		

		

		system("CLS");
		std::cout << "---------------------------------------------------" << std::endl;
		std::cout << "|             Dungeon Defender Hack               |" << std::endl;
		std::cout << "---------------------------------------------------" << std::endl;


		if (GetAsyncKeyState(VK_INSERT)) {
			ShowMenu = !ShowMenu;
		}
		if (ShowMenu) {
			if (GetAsyncKeyState(VK_UP))
			{
				if (bChangingFilter) {
					SubMenu::bIncrease = true;
				}
				else if (bInMainMenu) {
					if (Menu::Selected > 1)
						Menu::Selected -= 1;
				}
				else if (SubMenu::Selected > 1)
					SubMenu::Selected -= 1;
			}
			if (GetAsyncKeyState(VK_DOWN))
			{
				if (bChangingFilter) {
					SubMenu::bDecrease = true;
				}
				else if (bInMainMenu) {
					if (Menu::Selected < Menu::Total - 1)
						Menu::Selected += 1;
				}
				else if (SubMenu::Selected < SubMenu::Total - 1)
					SubMenu::Selected += 1;
			}




			if (GetAsyncKeyState(VK_RIGHT))
			{
				if (!bInMainMenu) {
					SubMenu::LockCurrent = true;
					bChangingFilter = true;
				}
				else if (Menu::Selected == lootshower.curNum && bInMainMenu) {
					bInMainMenu = false;
					lootshower.bSubMenu = true;
				}


			}

			if (GetAsyncKeyState(VK_LEFT))
			{

				if (bInMainMenu) {
					Menu::change = true;
				}
				else if (bChangingFilter) {
					bChangingFilter = false;
					SubMenu::LockCurrent = false;
				}
				else {
					bInMainMenu = true;
					lootshower.bSubMenu = false;
				}

			}

		}




		if (ESP.bIsOn) {
			std::cout << "ESP         : ON" << std::endl;
		}
		else {
			std::cout << "ESP         : OFF" << std::endl;
		}

		if (GodMode.bIsOn) {
			std::cout << "godmode     : ON" << std::endl;
		}
		else {
			std::cout << "godmode     : OFF" << std::endl;
		}




		if (InstantKill.bIsOn) {
			std::cout << "InstantKill : ON" << std::endl;
		}
		else {
			std::cout << "InstantKill : OFF" << std::endl;
		}


		if (Vaccume.bIsOn) {
			std::cout << "Vacuume     : ON" << std::endl;
		}
		else {
			std::cout << "Vacuume     : OFF" << std::endl;
		}


		if (autolevel.bIsOn) {
			std::cout << "autolevel   : ON" << std::endl;
		}
		else {
			std::cout << "autolevel   : OFF" << std::endl;
		}







		if (lastwave.bIsOn) {
			std::cout << "lastwave    : ON" << std::endl;
		}
		else {
			std::cout << "lastwave    : OFF" << std::endl;
		}


		if (lootshower.bIsOn) {
			std::cout << "lootshower  : ON" << std::endl;
			std::cout << "Weapons Added : " << weaponsadded << std::endl;
		}
		else {
			std::cout << "lootshower  : OFF" << std::endl;
			weaponsadded = 0;
			
		}











		std::cout << "---------------------------------------------------" << std::endl;
		


		if (!gameEngine)  std::cout << "gameEngine not found\n";
		if (!controller)  std::cout << "controller not found\n";
		if (!level)       std::cout << "level not found\n";
		if (!waveNum)     std::cout << "waveNum not found\n";
		if (!heroManager) std::cout << "heroManager not found\n";
		if (!player)      std::cout << "player not found\n";
		if (!playerCam)   std::cout << "playerCam not found\n";












		if (controller && controller->AcknowledgedPawn && &controller->AcknowledgedPawn->Location != nullptr) {
			std::cout << "Controller xyz : " << controller->AcknowledgedPawn->Location.X << " " << controller->AcknowledgedPawn->Location.Y << " " << controller->AcknowledgedPawn->Location.Z << std::endl;
		}


		if(player)
			std::cout << "Player xyz : " << player->Location.X << " " << player->Location.Y << " " << player->Location.Z << std::endl;

		if (GetAsyncKeyState(VK_DELETE))
		{
			std::cout << "DELETE KEY PRESSED\n";
			if (controller && controller->AcknowledgedPawn)
				TeleportLocation = controller->AcknowledgedPawn->Location;

		}


		if (GetAsyncKeyState(VK_END))
		{
			end = false;
		}

		Sleep(100);
	}
	system("CLS");

	std::cout << "Now safe to close this window." << std::endl;
	FreeConsole();


	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourDetach(&(PVOID&)ProcessEvent, HookedPE);
	DetourTransactionCommit();

	//BYTE undo[] = { 0x55,0x8B,0xEC,0x6A,0xFF };
	//WriteToMemory((void*)ProcessEventAddress, undo, sizeof(undo));



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
