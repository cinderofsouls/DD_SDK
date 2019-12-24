#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NON_CONFORMING_SWPRINTFS
#include "Header.h"
#include "DD_SDK/DD/SdkHeaders.h"





DWORD dllBase = (DWORD)GetModuleHandleA(NULL);
DWORD BaseProcessEventAddress = 0x090BB0;
DWORD ProcessEventAddress = (dllBase + BaseProcessEventAddress);
typedef void(__thiscall* tProcessEvent)(class UObject*, class UFunction*, void*, void*);
tProcessEvent ProcessEvent = (tProcessEvent)ProcessEventAddress;

HMODULE threadmodule;

bool bFilter = false;

FILE* fp = fopen("DDFunctionsF1.txt", "w+");
FILE* ffp = fopen("DDCheck.txt", "w+");


//BGRA
FColor fRed		= { 0, 0, 255, 255 };
FColor fBlue	= { 255, 0, 0, 255 };
FColor fCyan	= { 255, 255, 0, 255 };
FColor fGreen	= { 0, 255, 0, 255 };
FColor fWhite	= { 255, 255, 255, 255 };







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



//--------------------------------[MENU]--------------------------------------//
wchar_t buffer[255];

Pos MenuTextStart = { 160,90 };
Pos subMenuTextStart = { MenuTextStart.x + 110 , MenuTextStart.y };

int weaponsadded = 0;

bool ShowMenu = false;
Menu MainMenu(MenuTextStart);


MenuChoice ESP			(std::wstring(L"ESP"), 0);
MenuChoice GodMode		(std::wstring(L"GodMode"), 0);
MenuChoice Vaccume		(std::wstring(L"Vaccume"), 0);
MenuChoice lastwave		(std::wstring(L"lastwave"), 0);
MenuChoice autolevel	(std::wstring(L"autolevel"), 0);
MenuChoice InstantKill	(std::wstring(L"InstantKill"), 0);
MenuChoice lootshower	(std::wstring(L"lootshower"), 0);




Menu FilterMenu(subMenuTextStart);

MenuChoice HHealth		(std::wstring(L"HHealth"), 0);
MenuChoice HDamage		(std::wstring(L"HDamage"), 0);
MenuChoice HSpeed		(std::wstring(L"HSpeed"), 0);
MenuChoice HCast		(std::wstring(L"HCast"), 0);
MenuChoice Ability1		(std::wstring(L"Ability1"), 0);
MenuChoice Ability2		(std::wstring(L"Ability2"), 0);
MenuChoice THealth		(std::wstring(L"THealth"), 0);
MenuChoice TDamage		(std::wstring(L"TDamage"), 0);
MenuChoice TRange		(std::wstring(L"TRange"), 0);
MenuChoice TCast		(std::wstring(L"TCast"), 0);
MenuChoice TotalItems(std::wstring(L"TotalItems"), 0);

void SetUpMenu(){

	MainMenu.bIsActive = true;
	ESP.bIsSelected = true;
	MainMenu.AddItem(&ESP);
	MainMenu.AddItem(&GodMode);
	MainMenu.AddItem(&Vaccume);
	MainMenu.AddItem(&lastwave);
	MainMenu.AddItem(&autolevel);
	MainMenu.AddItem(&InstantKill);
	MainMenu.AddItem(&lootshower);

	MainMenu.CalcBoxMaxY();
	HHealth.bIsSelected = true;
	FilterMenu.AddItem(&HHealth);
	FilterMenu.AddItem(&HDamage);
	FilterMenu.AddItem(&HSpeed);
	FilterMenu.AddItem(&HCast);
	FilterMenu.AddItem(&Ability1);
	FilterMenu.AddItem(&Ability2);
	FilterMenu.AddItem(&THealth);
	FilterMenu.AddItem(&TDamage);
	FilterMenu.AddItem(&TRange);
	FilterMenu.AddItem(&TCast);

	TotalItems.bChangeDisplayNum = false;

	FilterMenu.AddItem(&TotalItems);


	FilterMenu.CalcBoxMaxY();

}

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

void DisplayChoice(UCanvas* canvas,MenuChoice choice,bool bDisplayStats) {

	FColor tempc = canvas->DrawColor;
	std::wstring temp = L"";
	if (choice.bIsSelected)
		temp = std::wstring(L"[") + choice.Name.c_str() + std::wstring(L"]");
	else
		temp = choice.Name.c_str();


	if (bDisplayStats)
		temp += std::wstring(L" : ") + std::to_wstring(choice.StatToDisplay);


	canvas->SetPos(choice.Position.x, choice.Position.y);
	if (choice.bIsOn) {
		canvas->DrawColor = fGreen;
	}
	else if (choice.bIsSelected) {
		canvas->DrawColor = fCyan;
	}
	else {
		canvas->DrawColor = fRed;

	}

	canvas->DrawText((wchar_t*)temp.c_str(), false, 1.0f, 1.0f, NULL, 100, 200, 200, 200, NULL, NULL);
	canvas->DrawColor = tempc;
}

void DrawMenu(UCanvas* pcanvas, Menu pMenu,FColor color,FColor color2,bool bDisplayStats,float pMenuOffset) {


	FColor tempcolor = pcanvas->DrawColor;
	pcanvas->DrawColor = color;

	pcanvas->SetPos(pMenu.Position.x-5, pMenu.Position.y-5);
	pcanvas->DrawRect(pMenuOffset, pMenu.TotalY+5, pcanvas->DefaultTexture);

	pcanvas->DrawColor = color2;
	pcanvas->SetPos(pMenu.Position.x-5, pMenu.Position.y-5);
	pcanvas->DrawBox(pMenuOffset, pMenu.TotalY+5);


	for (int i = 0; i < pMenu.Items.size(); i++) {
		DisplayChoice(pcanvas, *pMenu.Items[i], bDisplayStats);
	}

	pcanvas->DrawColor = tempcolor;
}
bool DebugMenu;
void PostRender(UCanvas* canvas)
{
	if (!canvas) return;


	
	if (DebugMenu) {
		int Posy = 20;
		if (!gameEngine) {
			std::wstring gameEngineDebugString = L"gameEngine not found";
			Posy += 20;
			canvas->SetPos(10, Posy);
			canvas->DrawText((wchar_t*)gameEngineDebugString.c_str(), false, 1.0f, 1.0f, NULL, 100, 200, 200, 200, NULL, NULL);
		}
		if (!controller) {
			std::wstring controllerDebugString = L"controller not found";
			Posy += 20;
			canvas->SetPos(10, Posy);
			canvas->DrawText((wchar_t*)controllerDebugString.c_str(), false, 1.0f, 1.0f, NULL, 100, 200, 200, 200, NULL, NULL);
		}
		if (!level) {
			std::wstring levelDebugString = L"level not found";
			Posy += 20;
			canvas->SetPos(10, Posy);
			canvas->DrawText((wchar_t*)levelDebugString.c_str(), false, 1.0f, 1.0f, NULL, 100, 200, 200, 200, NULL, NULL);
		}
		if (!waveNum) {
			std::wstring waveNumDebugString = L"waveNum not found";
			Posy += 20;
			canvas->SetPos(10, Posy);
			canvas->DrawText((wchar_t*)waveNumDebugString.c_str(), false, 1.0f, 1.0f, NULL, 100, 200, 200, 200, NULL, NULL);
		}
		if (!heroManager) {
			std::wstring heroManagerDebugString = L"heroManager not found";
			Posy += 20;
			canvas->SetPos(10, Posy);
			canvas->DrawText((wchar_t*)heroManagerDebugString.c_str(), false, 1.0f, 1.0f, NULL, 100, 200, 200, 200, NULL, NULL);
		}
		if (!player) {
			std::wstring playerDebugString = L"player not found";
			Posy += 20;
			canvas->SetPos(10, Posy);
			canvas->DrawText((wchar_t*)playerDebugString.c_str(), false, 1.0f, 1.0f, NULL, 100, 200, 200, 200, NULL, NULL);
		}
		if (!playerCam) {
			std::wstring playerCamDebugString = L"playerCam not found";
			Posy += 20;
			canvas->SetPos(10, Posy);
			canvas->DrawText((wchar_t*)playerCamDebugString.c_str(), false, 1.0f, 1.0f, NULL, 100, 200, 200, 200, NULL, NULL);
		}
	}








	if (ShowMenu) {
		if (!lootshower.bIsOn)
			weaponsadded = 0;


		
		DrawMenu(canvas, MainMenu, fWhite, fBlue, false,110);
		if (FilterMenu.bIsActive)
		DrawMenu(canvas, FilterMenu, fWhite, fBlue, true, 160);

		
/*
		if (lootshower.bSubMenu) {
			

			std::wstring tempstring = std::wstring(L"Items Added : ") + std::to_wstring(weaponsadded);
			canvas->SetDrawColor(100, 100, 100, 200);
			canvas->SetPos(subMenuTextStart.X, SubMenu::TotalY + 20);
			canvas->DrawText((wchar_t*)tempstring.c_str(), false, 1.0f, 1.0f, NULL, 100, 200, 200, 200, NULL, NULL);
		}*/
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
	//level && 
	//level->IsGameplayLevel && 
	if (controller) {
		
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

void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult)
{


	char* szName = pFunction->GetFullName();
	//LOGGING
	//
	bool in = false;
	for (int i = 0; i < filterint; i++) {
		if (strcmp(szName, filter[i]) == 0) {
			if (bFilter)
				in = true;
		}
	}//0x%p, &pObject
	if (!in)fprintf(fp, "%s || %s  \n", pObject->Name.GetName(), szName);


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





							if(HHealth.StatToDisplay > 0)
							if (tempweap->StatModifiers[statHHealth] <= HHealth.StatToDisplay)
								PutItemIn = false;


							if (HDamage.StatToDisplay > 0)
							if (tempweap->StatModifiers[statHSpeed] <= HDamage.StatToDisplay)
								PutItemIn = false;



							if (HSpeed.StatToDisplay > 0)
							if (tempweap->StatModifiers[statHDamage] <= HSpeed.StatToDisplay)
								PutItemIn = false;



							if (HCast.StatToDisplay > 0)
							if (tempweap->StatModifiers[statHCast] <= HCast.StatToDisplay)
								PutItemIn = false;



							if (Ability1.StatToDisplay > 0)
							if (tempweap->StatModifiers[statAbility1] <= Ability1.StatToDisplay)
								PutItemIn = false;



							if (Ability2.StatToDisplay > 0)
							if (tempweap->StatModifiers[statAbility2] <= Ability2.StatToDisplay)
								PutItemIn = false;



							if (THealth.StatToDisplay > 0)
							if (tempweap->StatModifiers[statTHealth] <= THealth.StatToDisplay)
								PutItemIn = false;



							if (TCast.StatToDisplay > 0)
							if (tempweap->StatModifiers[statTSpeed] <= TCast.StatToDisplay)
								PutItemIn = false;



							if (TDamage.StatToDisplay > 0)
							if (tempweap->StatModifiers[statTDamage] <= TDamage.StatToDisplay)
								PutItemIn = false;



							if (TRange.StatToDisplay > 0)
							if (tempweap->StatModifiers[statTRange] <= TRange.StatToDisplay)
								PutItemIn = false;



							if (PutItemIn) {
								heroManager->AddEquipmentObjectToItemBox(player->MyPlayerHero, tempweap, 1);
								TotalItems.StatToDisplay++;
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




	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(&(PVOID&)ProcessEvent, HookedPE);
	DetourTransactionCommit();

	bool bInMainMenu = true;
	bool bChangingFilter = false;
	bool end = true;
	SetUpMenu();
	while (end) {





	/*	system("CLS");
		std::cout << "---------------------------------------------------" << std::endl;
		std::cout << "|             Dungeon Defender Hack               |" << std::endl;
		std::cout << "---------------------------------------------------" << std::endl;
		std::cout << "Current Menu Selection : "<< MainMenu.cSelected << std::endl;*/

		if (GetAsyncKeyState(VK_INSERT)) {
			ShowMenu = !ShowMenu;
		}


		if (ShowMenu) {
			if (GetAsyncKeyState(VK_UP))
			{
				if (MainMenu.bIsActive)
					MainMenu.Up();
				if (FilterMenu.bIsActive && FilterMenu.bLockCurrentSelection)
					FilterMenu.IncMenuChoice(10);
				else if (FilterMenu.bIsActive)
					FilterMenu.Up();
			}
			if (GetAsyncKeyState(VK_DOWN))
			{
				if (MainMenu.bIsActive)
					MainMenu.Down();
				if (FilterMenu.bIsActive && FilterMenu.bLockCurrentSelection)
					FilterMenu.DecMenuChoice(10);
				else if (FilterMenu.bIsActive && FilterMenu.cSelected < TotalItems.num - 1)
					FilterMenu.Down();

			}




			if (GetAsyncKeyState(VK_RIGHT))
			{
				if (MainMenu.bIsActive && MainMenu.Items[MainMenu.cSelected]->num == lootshower.num) {
					MainMenu.bIsActive = false;
					FilterMenu.bIsActive = true;
				}
				else if (FilterMenu.bIsActive && FilterMenu.cSelected != TotalItems.num) {
					FilterMenu.Toggle();
					FilterMenu.bLockCurrentSelection = !FilterMenu.bLockCurrentSelection;
				}
			}

			if (GetAsyncKeyState(VK_LEFT))
			{
				if (MainMenu.bIsActive)
					MainMenu.Toggle();
				if (!MainMenu.bIsActive && FilterMenu.bIsActive) {
					MainMenu.bIsActive = true;
					FilterMenu.bIsActive = false;
					FilterMenu.bLockCurrentSelection = false;
					FilterMenu.AllOff();
				}
			}




			//	if (ESP.bIsOn) {
			//		std::cout << "ESP         : ON" << std::endl;
			//	}
			//	else {
			//		std::cout << "ESP         : OFF" << std::endl;
			//	}

			//	if (GodMode.bIsOn) {
			//		std::cout << "godmode     : ON" << std::endl;
			//	}
			//	else {
			//		std::cout << "godmode     : OFF" << std::endl;
			//	}




			//	if (InstantKill.bIsOn) {
			//		std::cout << "InstantKill : ON" << std::endl;
			//	}
			//	else {
			//		std::cout << "InstantKill : OFF" << std::endl;
			//	}


			//	if (Vaccume.bIsOn) {
			//		std::cout << "Vacuume     : ON" << std::endl;
			//	}
			//	else {
			//		std::cout << "Vacuume     : OFF" << std::endl;
			//	}


			//	if (autolevel.bIsOn) {
			//		std::cout << "autolevel   : ON" << std::endl;
			//	}
			//	else {
			//		std::cout << "autolevel   : OFF" << std::endl;
			//	}







			//	if (lastwave.bIsOn) {
			//		std::cout << "lastwave    : ON" << std::endl;
			//	}
			//	else {
			//		std::cout << "lastwave    : OFF" << std::endl;
			//	}


			//	if (lootshower.bIsOn) {
			//		std::cout << "lootshower  : ON" << std::endl;
			//		std::cout << "Weapons Added : " << weaponsadded << std::endl;
			//	}
			//	else {
			//		std::cout << "lootshower  : OFF" << std::endl;
			//		weaponsadded = 0;

			//	}



			//}



		}



		


			if (GetAsyncKeyState(VK_DELETE))
			{
				if (controller && controller->AcknowledgedPawn)
					TeleportLocation = controller->AcknowledgedPawn->Location;
			}

			if (GetAsyncKeyState(VK_HOME))
			{
				DebugMenu = !DebugMenu;
			}
			if (GetAsyncKeyState(VK_END))
			{
				end = false;
			}

			Sleep(100);
		}
		//system("CLS");

		//std::cout << "Now safe to close this window." << std::endl;
		//FreeConsole();


		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourDetach(&(PVOID&)ProcessEvent, HookedPE);
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
