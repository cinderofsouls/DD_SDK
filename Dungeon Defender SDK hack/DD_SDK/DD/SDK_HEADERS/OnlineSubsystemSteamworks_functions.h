/*
#############################################################################################
# Dungeon Defender (8.7.1) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_functions.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CreateOnlineGameFailureID
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineGameInterfaceSteamworks::CreateOnlineGameFailureID ( )
{
	static UFunction* pFnCreateOnlineGameFailureID = NULL;

	if ( ! pFnCreateOnlineGameFailureID )
		pFnCreateOnlineGameFailureID = (UFunction*) UObject::GObjObjects()->Data[ 76790 ];

	UOnlineGameInterfaceSteamworks_execCreateOnlineGameFailureID_Parms CreateOnlineGameFailureID_Parms;

	this->ProcessEvent ( pFnCreateOnlineGameFailureID, &CreateOnlineGameFailureID_Parms, NULL );

	return CreateOnlineGameFailureID_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetResolvedConnectString
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FString                 ConnectInfo                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::GetResolvedConnectString ( struct FName SessionName, struct FString* ConnectInfo )
{
	static UFunction* pFnGetResolvedConnectString = NULL;

	if ( ! pFnGetResolvedConnectString )
		pFnGetResolvedConnectString = (UFunction*) UObject::GObjObjects()->Data[ 76786 ];

	UOnlineGameInterfaceSteamworks_execGetResolvedConnectString_Parms GetResolvedConnectString_Parms;
	memcpy ( &GetResolvedConnectString_Parms.SessionName, &SessionName, 0x8 );

	pFnGetResolvedConnectString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetResolvedConnectString, &GetResolvedConnectString_Parms, NULL );

	pFnGetResolvedConnectString->FunctionFlags |= 0x400;

	if ( ConnectInfo )
		memcpy ( ConnectInfo, &GetResolvedConnectString_Parms.ConnectInfo, 0xC );

	return GetResolvedConnectString_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            StartAt                        ( CPF_Parm )
// int                            NumberToQuery                  ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::QueryNonAdvertisedData ( int StartAt, int NumberToQuery )
{
	static UFunction* pFnQueryNonAdvertisedData = NULL;

	if ( ! pFnQueryNonAdvertisedData )
		pFnQueryNonAdvertisedData = (UFunction*) UObject::GObjObjects()->Data[ 76782 ];

	UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	QueryNonAdvertisedData_Parms.StartAt = StartAt;
	QueryNonAdvertisedData_Parms.NumberToQuery = NumberToQuery;

	pFnQueryNonAdvertisedData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, NULL );

	pFnQueryNonAdvertisedData->FunctionFlags |= 0x400;

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterPlayerCompleteDelegate )
		pFnClearUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76779 ];

	UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterPlayerCompleteDelegate )
		pFnAddUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76777 ];

	UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceSteamworks::OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnregisterPlayerComplete = NULL;

	if ( ! pFnOnUnregisterPlayerComplete )
		pFnOnUnregisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 76721 ];

	UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy ( &OnUnregisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnUnregisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterPlayer = NULL;

	if ( ! pFnUnregisterPlayer )
		pFnUnregisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 76770 ];

	UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy ( &UnregisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &UnregisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );

	pFnUnregisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterPlayer, &UnregisterPlayer_Parms, NULL );

	pFnUnregisterPlayer->FunctionFlags |= 0x400;

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearRegisterPlayerCompleteDelegate )
		pFnClearRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76767 ];

	UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddRegisterPlayerCompleteDelegate )
		pFnAddRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76765 ];

	UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceSteamworks::OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterPlayerComplete = NULL;

	if ( ! pFnOnRegisterPlayerComplete )
		pFnOnRegisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 76718 ];

	UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy ( &OnRegisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnRegisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasInvited                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited )
{
	static UFunction* pFnRegisterPlayer = NULL;

	if ( ! pFnRegisterPlayer )
		pFnRegisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 76757 ];

	UOnlineGameInterfaceSteamworks_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy ( &RegisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &RegisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	pFnRegisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterPlayer, &RegisterPlayer_Parms, NULL );

	pFnRegisterPlayer->FunctionFlags |= 0x400;

	return RegisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< int >                  participatingPlayerControllerIds ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName, TArray< int > participatingPlayerControllerIds )
{
	static UFunction* pFnAcceptGameInvite = NULL;

	if ( ! pFnAcceptGameInvite )
		pFnAcceptGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 76751 ];

	UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptGameInvite_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &AcceptGameInvite_Parms.participatingPlayerControllerIds, &participatingPlayerControllerIds, 0xC );

	pFnAcceptGameInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptGameInvite, &AcceptGameInvite_Parms, NULL );

	pFnAcceptGameInvite->FunctionFlags |= 0x400;

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// [0x00520000] 
// Parameters infos:
// struct FOnlineGameSearchResult InviteResult                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineGameInterfaceSteamworks::OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult )
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if ( ! pFnOnGameInviteAccepted )
		pFnOnGameInviteAccepted = (UFunction*) UObject::GObjObjects()->Data[ 76715 ];

	UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;

	this->ProcessEvent ( pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL );

	if ( InviteResult )
		memcpy ( InviteResult, &OnGameInviteAccepted_Parms.InviteResult, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnClearGameInviteAcceptedDelegate = NULL;

	if ( ! pFnClearGameInviteAcceptedDelegate )
		pFnClearGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76746 ];

	UOnlineGameInterfaceSteamworks_execClearGameInviteAcceptedDelegate_Parms ClearGameInviteAcceptedDelegate_Parms;
	ClearGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC );

	this->ProcessEvent ( pFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnAddGameInviteAcceptedDelegate = NULL;

	if ( ! pFnAddGameInviteAcceptedDelegate )
		pFnAddGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76743 ];

	UOnlineGameInterfaceSteamworks_execAddGameInviteAcceptedDelegate_Parms AddGameInviteAcceptedDelegate_Parms;
	AddGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC );

	this->ProcessEvent ( pFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     UpdatedGameSettings            ( CPF_Parm )
// unsigned long                  bShouldRefreshOnlineData       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineGameInterfaceSteamworks::UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData )
{
	static UFunction* pFnUpdateOnlineGame = NULL;

	if ( ! pFnUpdateOnlineGame )
		pFnUpdateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 76738 ];

	UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy ( &UpdateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	UpdateOnlineGame_Parms.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	pFnUpdateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, NULL );

	pFnUpdateOnlineGame->FunctionFlags |= 0x400;

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQuerySubscribedDownloadsComplete
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         QueryDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearQuerySubscribedDownloadsComplete ( struct FScriptDelegate QueryDelegate )
{
	static UFunction* pFnClearQuerySubscribedDownloadsComplete = NULL;

	if ( ! pFnClearQuerySubscribedDownloadsComplete )
		pFnClearQuerySubscribedDownloadsComplete = (UFunction*) UObject::GObjObjects()->Data[ 77708 ];

	UOnlineSubsystemSteamworks_execClearQuerySubscribedDownloadsComplete_Parms ClearQuerySubscribedDownloadsComplete_Parms;
	memcpy ( &ClearQuerySubscribedDownloadsComplete_Parms.QueryDelegate, &QueryDelegate, 0xC );

	this->ProcessEvent ( pFnClearQuerySubscribedDownloadsComplete, &ClearQuerySubscribedDownloadsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQuerySubscribedDownloadsComplete
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         QueryDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddQuerySubscribedDownloadsComplete ( struct FScriptDelegate QueryDelegate )
{
	static UFunction* pFnAddQuerySubscribedDownloadsComplete = NULL;

	if ( ! pFnAddQuerySubscribedDownloadsComplete )
		pFnAddQuerySubscribedDownloadsComplete = (UFunction*) UObject::GObjObjects()->Data[ 77705 ];

	UOnlineSubsystemSteamworks_execAddQuerySubscribedDownloadsComplete_Parms AddQuerySubscribedDownloadsComplete_Parms;
	memcpy ( &AddQuerySubscribedDownloadsComplete_Parms.QueryDelegate, &QueryDelegate, 0xC );

	this->ProcessEvent ( pFnAddQuerySubscribedDownloadsComplete, &AddQuerySubscribedDownloadsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQuerySubscribedDownloadsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnQuerySubscribedDownloadsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQuerySubscribedDownloadsComplete = NULL;

	if ( ! pFnOnQuerySubscribedDownloadsComplete )
		pFnOnQuerySubscribedDownloadsComplete = (UFunction*) UObject::GObjObjects()->Data[ 77703 ];

	UOnlineSubsystemSteamworks_execOnQuerySubscribedDownloadsComplete_Parms OnQuerySubscribedDownloadsComplete_Parms;
	OnQuerySubscribedDownloadsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQuerySubscribedDownloadsComplete, &OnQuerySubscribedDownloadsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SubscribedDownloadsInformation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemSteamworks::SubscribedDownloadsInformation ( )
{
	static UFunction* pFnSubscribedDownloadsInformation = NULL;

	if ( ! pFnSubscribedDownloadsInformation )
		pFnSubscribedDownloadsInformation = (UFunction*) UObject::GObjObjects()->Data[ 77701 ];

	UOnlineSubsystemSteamworks_execSubscribedDownloadsInformation_Parms SubscribedDownloadsInformation_Parms;

	pFnSubscribedDownloadsInformation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubscribedDownloadsInformation, &SubscribedDownloadsInformation_Parms, NULL );

	pFnSubscribedDownloadsInformation->FunctionFlags |= 0x400;

	return SubscribedDownloadsInformation_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QuerySubscribedDownloads
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::QuerySubscribedDownloads ( )
{
	static UFunction* pFnQuerySubscribedDownloads = NULL;

	if ( ! pFnQuerySubscribedDownloads )
		pFnQuerySubscribedDownloads = (UFunction*) UObject::GObjObjects()->Data[ 77699 ];

	UOnlineSubsystemSteamworks_execQuerySubscribedDownloads_Parms QuerySubscribedDownloads_Parms;

	pFnQuerySubscribedDownloads->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQuerySubscribedDownloads, &QuerySubscribedDownloads_Parms, NULL );

	pFnQuerySubscribedDownloads->FunctionFlags |= 0x400;

	return QuerySubscribedDownloads_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAvailableDownloadCounts
// [0x00420000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            NewDownloads                   ( CPF_Parm | CPF_OutParm )
// int                            TotalDownloads                 ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemSteamworks::GetAvailableDownloadCounts ( unsigned char LocalUserNum, int* NewDownloads, int* TotalDownloads )
{
	static UFunction* pFnGetAvailableDownloadCounts = NULL;

	if ( ! pFnGetAvailableDownloadCounts )
		pFnGetAvailableDownloadCounts = (UFunction*) UObject::GObjObjects()->Data[ 77695 ];

	UOnlineSubsystemSteamworks_execGetAvailableDownloadCounts_Parms GetAvailableDownloadCounts_Parms;
	GetAvailableDownloadCounts_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetAvailableDownloadCounts, &GetAvailableDownloadCounts_Parms, NULL );

	if ( NewDownloads )
		*NewDownloads = GetAvailableDownloadCounts_Parms.NewDownloads;

	if ( TotalDownloads )
		*TotalDownloads = GetAvailableDownloadCounts_Parms.TotalDownloads;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryAvailableDownloadsComplete
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         QueryDownloadsDelegate         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearQueryAvailableDownloadsComplete ( unsigned char LocalUserNum, struct FScriptDelegate QueryDownloadsDelegate )
{
	static UFunction* pFnClearQueryAvailableDownloadsComplete = NULL;

	if ( ! pFnClearQueryAvailableDownloadsComplete )
		pFnClearQueryAvailableDownloadsComplete = (UFunction*) UObject::GObjObjects()->Data[ 77692 ];

	UOnlineSubsystemSteamworks_execClearQueryAvailableDownloadsComplete_Parms ClearQueryAvailableDownloadsComplete_Parms;
	ClearQueryAvailableDownloadsComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearQueryAvailableDownloadsComplete_Parms.QueryDownloadsDelegate, &QueryDownloadsDelegate, 0xC );

	this->ProcessEvent ( pFnClearQueryAvailableDownloadsComplete, &ClearQueryAvailableDownloadsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryAvailableDownloadsComplete
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         QueryDownloadsDelegate         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddQueryAvailableDownloadsComplete ( unsigned char LocalUserNum, struct FScriptDelegate QueryDownloadsDelegate )
{
	static UFunction* pFnAddQueryAvailableDownloadsComplete = NULL;

	if ( ! pFnAddQueryAvailableDownloadsComplete )
		pFnAddQueryAvailableDownloadsComplete = (UFunction*) UObject::GObjObjects()->Data[ 77689 ];

	UOnlineSubsystemSteamworks_execAddQueryAvailableDownloadsComplete_Parms AddQueryAvailableDownloadsComplete_Parms;
	AddQueryAvailableDownloadsComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddQueryAvailableDownloadsComplete_Parms.QueryDownloadsDelegate, &QueryDownloadsDelegate, 0xC );

	this->ProcessEvent ( pFnAddQueryAvailableDownloadsComplete, &AddQueryAvailableDownloadsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryAvailableDownloadsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnQueryAvailableDownloadsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryAvailableDownloadsComplete = NULL;

	if ( ! pFnOnQueryAvailableDownloadsComplete )
		pFnOnQueryAvailableDownloadsComplete = (UFunction*) UObject::GObjObjects()->Data[ 77687 ];

	UOnlineSubsystemSteamworks_execOnQueryAvailableDownloadsComplete_Parms OnQueryAvailableDownloadsComplete_Parms;
	OnQueryAvailableDownloadsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryAvailableDownloadsComplete, &OnQueryAvailableDownloadsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryAvailableDownloads
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            CategoryMask                   ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::QueryAvailableDownloads ( unsigned char LocalUserNum, int CategoryMask )
{
	static UFunction* pFnQueryAvailableDownloads = NULL;

	if ( ! pFnQueryAvailableDownloads )
		pFnQueryAvailableDownloads = (UFunction*) UObject::GObjObjects()->Data[ 77683 ];

	UOnlineSubsystemSteamworks_execQueryAvailableDownloads_Parms QueryAvailableDownloads_Parms;
	QueryAvailableDownloads_Parms.LocalUserNum = LocalUserNum;
	QueryAvailableDownloads_Parms.CategoryMask = CategoryMask;

	this->ProcessEvent ( pFnQueryAvailableDownloads, &QueryAvailableDownloads_Parms, NULL );

	return QueryAvailableDownloads_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetContentList
// [0x00420000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FOnlineContent > ContentList                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetContentList ( unsigned char LocalUserNum, TArray< struct FOnlineContent >* ContentList )
{
	static UFunction* pFnGetContentList = NULL;

	if ( ! pFnGetContentList )
		pFnGetContentList = (UFunction*) UObject::GObjObjects()->Data[ 77678 ];

	UOnlineSubsystemSteamworks_execGetContentList_Parms GetContentList_Parms;
	GetContentList_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetContentList, &GetContentList_Parms, NULL );

	if ( ContentList )
		memcpy ( ContentList, &GetContentList_Parms.ContentList, 0xC );

	return GetContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadContentList
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadContentList ( unsigned char LocalUserNum )
{
	static UFunction* pFnReadContentList = NULL;

	if ( ! pFnReadContentList )
		pFnReadContentList = (UFunction*) UObject::GObjObjects()->Data[ 77675 ];

	UOnlineSubsystemSteamworks_execReadContentList_Parms ReadContentList_Parms;
	ReadContentList_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnReadContentList, &ReadContentList_Parms, NULL );

	return ReadContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadContentComplete
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadContentCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadContentComplete ( unsigned char LocalUserNum, struct FScriptDelegate ReadContentCompleteDelegate )
{
	static UFunction* pFnClearReadContentComplete = NULL;

	if ( ! pFnClearReadContentComplete )
		pFnClearReadContentComplete = (UFunction*) UObject::GObjObjects()->Data[ 77672 ];

	UOnlineSubsystemSteamworks_execClearReadContentComplete_Parms ClearReadContentComplete_Parms;
	ClearReadContentComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadContentComplete_Parms.ReadContentCompleteDelegate, &ReadContentCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadContentComplete, &ClearReadContentComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadContentComplete
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadContentCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadContentComplete ( unsigned char LocalUserNum, struct FScriptDelegate ReadContentCompleteDelegate )
{
	static UFunction* pFnAddReadContentComplete = NULL;

	if ( ! pFnAddReadContentComplete )
		pFnAddReadContentComplete = (UFunction*) UObject::GObjObjects()->Data[ 77669 ];

	UOnlineSubsystemSteamworks_execAddReadContentComplete_Parms AddReadContentComplete_Parms;
	AddReadContentComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadContentComplete_Parms.ReadContentCompleteDelegate, &ReadContentCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadContentComplete, &AddReadContentComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadContentComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadContentComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadContentComplete = NULL;

	if ( ! pFnOnReadContentComplete )
		pFnOnReadContentComplete = (UFunction*) UObject::GObjObjects()->Data[ 77667 ];

	UOnlineSubsystemSteamworks_execOnReadContentComplete_Parms OnReadContentComplete_Parms;
	OnReadContentComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadContentComplete, &OnReadContentComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentChangeDelegate
// [0x00024000] 
// Parameters infos:
// struct FScriptDelegate         ContentDelegate                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_OptionalParm | CPF_Parm )

void UOnlineSubsystemSteamworks::ClearContentChangeDelegate ( struct FScriptDelegate ContentDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnClearContentChangeDelegate = NULL;

	if ( ! pFnClearContentChangeDelegate )
		pFnClearContentChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77664 ];

	UOnlineSubsystemSteamworks_execClearContentChangeDelegate_Parms ClearContentChangeDelegate_Parms;
	memcpy ( &ClearContentChangeDelegate_Parms.ContentDelegate, &ContentDelegate, 0xC );
	ClearContentChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnClearContentChangeDelegate, &ClearContentChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentChangeDelegate
// [0x00024000] 
// Parameters infos:
// struct FScriptDelegate         ContentDelegate                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_OptionalParm | CPF_Parm )

void UOnlineSubsystemSteamworks::AddContentChangeDelegate ( struct FScriptDelegate ContentDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnAddContentChangeDelegate = NULL;

	if ( ! pFnAddContentChangeDelegate )
		pFnAddContentChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77661 ];

	UOnlineSubsystemSteamworks_execAddContentChangeDelegate_Parms AddContentChangeDelegate_Parms;
	memcpy ( &AddContentChangeDelegate_Parms.ContentDelegate, &ContentDelegate, 0xC );
	AddContentChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnAddContentChangeDelegate, &AddContentChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnContentChange ( )
{
	static UFunction* pFnOnContentChange = NULL;

	if ( ! pFnOnContentChange )
		pFnOnContentChange = (UFunction*) UObject::GObjObjects()->Data[ 77660 ];

	UOnlineSubsystemSteamworks_execOnContentChange_Parms OnContentChange_Parms;

	this->ProcessEvent ( pFnOnContentChange, &OnContentChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::eventExit ( )
{
	static UFunction* pFnExit = NULL;

	if ( ! pFnExit )
		pFnExit = (UFunction*) UObject::GObjObjects()->Data[ 77659 ];

	UOnlineSubsystemSteamworks_eventExit_Parms Exit_Parms;

	pFnExit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnExit, &Exit_Parms, NULL );

	pFnExit->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VerifyStrings
// [0x00020000] 
// Parameters infos:
// TArray< struct FStringVerificationEntry > stringEntries                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::VerifyStrings ( TArray< struct FStringVerificationEntry > stringEntries )
{
	static UFunction* pFnVerifyStrings = NULL;

	if ( ! pFnVerifyStrings )
		pFnVerifyStrings = (UFunction*) UObject::GObjObjects()->Data[ 77656 ];

	UOnlineSubsystemSteamworks_execVerifyStrings_Parms VerifyStrings_Parms;
	memcpy ( &VerifyStrings_Parms.stringEntries, &stringEntries, 0xC );

	this->ProcessEvent ( pFnVerifyStrings, &VerifyStrings_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStringVerificationDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         stringVerificationComplete     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearStringVerificationDelegate ( struct FScriptDelegate stringVerificationComplete )
{
	static UFunction* pFnClearStringVerificationDelegate = NULL;

	if ( ! pFnClearStringVerificationDelegate )
		pFnClearStringVerificationDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77654 ];

	UOnlineSubsystemSteamworks_execClearStringVerificationDelegate_Parms ClearStringVerificationDelegate_Parms;
	memcpy ( &ClearStringVerificationDelegate_Parms.stringVerificationComplete, &stringVerificationComplete, 0xC );

	this->ProcessEvent ( pFnClearStringVerificationDelegate, &ClearStringVerificationDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStringVerificationDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         stringVerificationComplete     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddStringVerificationDelegate ( struct FScriptDelegate stringVerificationComplete )
{
	static UFunction* pFnAddStringVerificationDelegate = NULL;

	if ( ! pFnAddStringVerificationDelegate )
		pFnAddStringVerificationDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77652 ];

	UOnlineSubsystemSteamworks_execAddStringVerificationDelegate_Parms AddStringVerificationDelegate_Parms;
	memcpy ( &AddStringVerificationDelegate_Parms.stringVerificationComplete, &stringVerificationComplete, 0xC );

	this->ProcessEvent ( pFnAddStringVerificationDelegate, &AddStringVerificationDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStringVerificationComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bVerifiedSuccessfully          ( CPF_Parm )
// int                            StringID                       ( CPF_Parm )
// unsigned char                  StringType                     ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnStringVerificationComplete ( unsigned long bVerifiedSuccessfully, int StringID, unsigned char StringType )
{
	static UFunction* pFnOnStringVerificationComplete = NULL;

	if ( ! pFnOnStringVerificationComplete )
		pFnOnStringVerificationComplete = (UFunction*) UObject::GObjObjects()->Data[ 77648 ];

	UOnlineSubsystemSteamworks_execOnStringVerificationComplete_Parms OnStringVerificationComplete_Parms;
	OnStringVerificationComplete_Parms.bVerifiedSuccessfully = bVerifiedSuccessfully;
	OnStringVerificationComplete_Parms.StringID = StringID;
	OnStringVerificationComplete_Parms.StringType = StringType;

	this->ProcessEvent ( pFnOnStringVerificationComplete, &OnStringVerificationComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDLCStorageDeviceRemovedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         DLCStorageDeviceRemovedDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearDLCStorageDeviceRemovedDelegate ( struct FScriptDelegate DLCStorageDeviceRemovedDelegate )
{
	static UFunction* pFnClearDLCStorageDeviceRemovedDelegate = NULL;

	if ( ! pFnClearDLCStorageDeviceRemovedDelegate )
		pFnClearDLCStorageDeviceRemovedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77646 ];

	UOnlineSubsystemSteamworks_execClearDLCStorageDeviceRemovedDelegate_Parms ClearDLCStorageDeviceRemovedDelegate_Parms;
	memcpy ( &ClearDLCStorageDeviceRemovedDelegate_Parms.DLCStorageDeviceRemovedDelegate, &DLCStorageDeviceRemovedDelegate, 0xC );

	this->ProcessEvent ( pFnClearDLCStorageDeviceRemovedDelegate, &ClearDLCStorageDeviceRemovedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDLCStorageDeviceRemovedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         DLCStorageDeviceRemovedDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddDLCStorageDeviceRemovedDelegate ( struct FScriptDelegate DLCStorageDeviceRemovedDelegate )
{
	static UFunction* pFnAddDLCStorageDeviceRemovedDelegate = NULL;

	if ( ! pFnAddDLCStorageDeviceRemovedDelegate )
		pFnAddDLCStorageDeviceRemovedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77644 ];

	UOnlineSubsystemSteamworks_execAddDLCStorageDeviceRemovedDelegate_Parms AddDLCStorageDeviceRemovedDelegate_Parms;
	memcpy ( &AddDLCStorageDeviceRemovedDelegate_Parms.DLCStorageDeviceRemovedDelegate, &DLCStorageDeviceRemovedDelegate, 0xC );

	this->ProcessEvent ( pFnAddDLCStorageDeviceRemovedDelegate, &AddDLCStorageDeviceRemovedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDLCStorageDeviceRemoved
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnDLCStorageDeviceRemoved ( )
{
	static UFunction* pFnOnDLCStorageDeviceRemoved = NULL;

	if ( ! pFnOnDLCStorageDeviceRemoved )
		pFnOnDLCStorageDeviceRemoved = (UFunction*) UObject::GObjObjects()->Data[ 77643 ];

	UOnlineSubsystemSteamworks_execOnDLCStorageDeviceRemoved_Parms OnDLCStorageDeviceRemoved_Parms;

	this->ProcessEvent ( pFnOnDLCStorageDeviceRemoved, &OnDLCStorageDeviceRemoved_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllFlushOnlineStatsCompleteDelegates
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearAllFlushOnlineStatsCompleteDelegates ( )
{
	static UFunction* pFnClearAllFlushOnlineStatsCompleteDelegates = NULL;

	if ( ! pFnClearAllFlushOnlineStatsCompleteDelegates )
		pFnClearAllFlushOnlineStatsCompleteDelegates = (UFunction*) UObject::GObjObjects()->Data[ 77642 ];

	UOnlineSubsystemSteamworks_execClearAllFlushOnlineStatsCompleteDelegates_Parms ClearAllFlushOnlineStatsCompleteDelegates_Parms;

	this->ProcessEvent ( pFnClearAllFlushOnlineStatsCompleteDelegates, &ClearAllFlushOnlineStatsCompleteDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceFoundDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         deviceFoundDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearDeviceFoundDelegate ( struct FScriptDelegate deviceFoundDelegate )
{
	static UFunction* pFnClearDeviceFoundDelegate = NULL;

	if ( ! pFnClearDeviceFoundDelegate )
		pFnClearDeviceFoundDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77640 ];

	UOnlineSubsystemSteamworks_execClearDeviceFoundDelegate_Parms ClearDeviceFoundDelegate_Parms;
	memcpy ( &ClearDeviceFoundDelegate_Parms.deviceFoundDelegate, &deviceFoundDelegate, 0xC );

	this->ProcessEvent ( pFnClearDeviceFoundDelegate, &ClearDeviceFoundDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceFoundDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         deviceFoundDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddDeviceFoundDelegate ( struct FScriptDelegate deviceFoundDelegate )
{
	static UFunction* pFnAddDeviceFoundDelegate = NULL;

	if ( ! pFnAddDeviceFoundDelegate )
		pFnAddDeviceFoundDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77638 ];

	UOnlineSubsystemSteamworks_execAddDeviceFoundDelegate_Parms AddDeviceFoundDelegate_Parms;
	memcpy ( &AddDeviceFoundDelegate_Parms.deviceFoundDelegate, &deviceFoundDelegate, 0xC );

	this->ProcessEvent ( pFnAddDeviceFoundDelegate, &AddDeviceFoundDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceFound
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnDeviceFound ( )
{
	static UFunction* pFnOnDeviceFound = NULL;

	if ( ! pFnOnDeviceFound )
		pFnOnDeviceFound = (UFunction*) UObject::GObjObjects()->Data[ 77637 ];

	UOnlineSubsystemSteamworks_execOnDeviceFound_Parms OnDeviceFound_Parms;

	this->ProcessEvent ( pFnOnDeviceFound, &OnDeviceFound_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasBeenRegistered
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::HasBeenRegistered ( )
{
	static UFunction* pFnHasBeenRegistered = NULL;

	if ( ! pFnHasBeenRegistered )
		pFnHasBeenRegistered = (UFunction*) UObject::GObjObjects()->Data[ 77635 ];

	UOnlineSubsystemSteamworks_execHasBeenRegistered_Parms HasBeenRegistered_Parms;

	this->ProcessEvent ( pFnHasBeenRegistered, &HasBeenRegistered_Parms, NULL );

	return HasBeenRegistered_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetCaptureVolume
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// float                          NewVolume                      ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SetCaptureVolume ( unsigned char LocalUserNum, float NewVolume )
{
	static UFunction* pFnSetCaptureVolume = NULL;

	if ( ! pFnSetCaptureVolume )
		pFnSetCaptureVolume = (UFunction*) UObject::GObjObjects()->Data[ 77631 ];

	UOnlineSubsystemSteamworks_execSetCaptureVolume_Parms SetCaptureVolume_Parms;
	SetCaptureVolume_Parms.LocalUserNum = LocalUserNum;
	SetCaptureVolume_Parms.NewVolume = NewVolume;

	pFnSetCaptureVolume->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCaptureVolume, &SetCaptureVolume_Parms, NULL );

	pFnSetCaptureVolume->FunctionFlags |= 0x400;

	return SetCaptureVolume_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPlaybackVolume
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// float                          NewVolume                      ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SetPlaybackVolume ( unsigned char LocalUserNum, float NewVolume )
{
	static UFunction* pFnSetPlaybackVolume = NULL;

	if ( ! pFnSetPlaybackVolume )
		pFnSetPlaybackVolume = (UFunction*) UObject::GObjObjects()->Data[ 77627 ];

	UOnlineSubsystemSteamworks_execSetPlaybackVolume_Parms SetPlaybackVolume_Parms;
	SetPlaybackVolume_Parms.LocalUserNum = LocalUserNum;
	SetPlaybackVolume_Parms.NewVolume = NewVolume;

	pFnSetPlaybackVolume->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPlaybackVolume, &SetPlaybackVolume_Parms, NULL );

	pFnSetPlaybackVolume->FunctionFlags |= 0x400;

	return SetPlaybackVolume_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CancelLogin
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CancelLogin ( )
{
	static UFunction* pFnCancelLogin = NULL;

	if ( ! pFnCancelLogin )
		pFnCancelLogin = (UFunction*) UObject::GObjObjects()->Data[ 77626 ];

	UOnlineSubsystemSteamworks_execCancelLogin_Parms CancelLogin_Parms;

	this->ProcessEvent ( pFnCancelLogin, &CancelLogin_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ManageInvites
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ManageInvites ( )
{
	static UFunction* pFnManageInvites = NULL;

	if ( ! pFnManageInvites )
		pFnManageInvites = (UFunction*) UObject::GObjObjects()->Data[ 77625 ];

	UOnlineSubsystemSteamworks_execManageInvites_Parms ManageInvites_Parms;

	pFnManageInvites->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnManageInvites, &ManageInvites_Parms, NULL );

	pFnManageInvites->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FindUniqueNetIdForPlayer
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::FindUniqueNetIdForPlayer ( struct FString PlayerName )
{
	static UFunction* pFnFindUniqueNetIdForPlayer = NULL;

	if ( ! pFnFindUniqueNetIdForPlayer )
		pFnFindUniqueNetIdForPlayer = (UFunction*) UObject::GObjObjects()->Data[ 77622 ];

	UOnlineSubsystemSteamworks_execFindUniqueNetIdForPlayer_Parms FindUniqueNetIdForPlayer_Parms;
	memcpy ( &FindUniqueNetIdForPlayer_Parms.PlayerName, &PlayerName, 0xC );

	this->ProcessEvent ( pFnFindUniqueNetIdForPlayer, &FindUniqueNetIdForPlayer_Parms, NULL );

	return FindUniqueNetIdForPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFindUniqueNetIdForPlayerDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FindDelegate                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFindUniqueNetIdForPlayerDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FindDelegate )
{
	static UFunction* pFnClearFindUniqueNetIdForPlayerDelegate = NULL;

	if ( ! pFnClearFindUniqueNetIdForPlayerDelegate )
		pFnClearFindUniqueNetIdForPlayerDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77619 ];

	UOnlineSubsystemSteamworks_execClearFindUniqueNetIdForPlayerDelegate_Parms ClearFindUniqueNetIdForPlayerDelegate_Parms;
	ClearFindUniqueNetIdForPlayerDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFindUniqueNetIdForPlayerDelegate_Parms.FindDelegate, &FindDelegate, 0xC );

	this->ProcessEvent ( pFnClearFindUniqueNetIdForPlayerDelegate, &ClearFindUniqueNetIdForPlayerDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFindUniqueNetIdForPlayerDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FindDelegate                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFindUniqueNetIdForPlayerDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FindDelegate )
{
	static UFunction* pFnAddFindUniqueNetIdForPlayerDelegate = NULL;

	if ( ! pFnAddFindUniqueNetIdForPlayerDelegate )
		pFnAddFindUniqueNetIdForPlayerDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77616 ];

	UOnlineSubsystemSteamworks_execAddFindUniqueNetIdForPlayerDelegate_Parms AddFindUniqueNetIdForPlayerDelegate_Parms;
	AddFindUniqueNetIdForPlayerDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFindUniqueNetIdForPlayerDelegate_Parms.FindDelegate, &FindDelegate, 0xC );

	this->ProcessEvent ( pFnAddFindUniqueNetIdForPlayerDelegate, &AddFindUniqueNetIdForPlayerDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFindUniqueNetIdForPlayerComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  Found                          ( CPF_Parm )
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            Id                             ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnFindUniqueNetIdForPlayerComplete ( unsigned long Found, struct FString PlayerName, int Id )
{
	static UFunction* pFnOnFindUniqueNetIdForPlayerComplete = NULL;

	if ( ! pFnOnFindUniqueNetIdForPlayerComplete )
		pFnOnFindUniqueNetIdForPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 77612 ];

	UOnlineSubsystemSteamworks_execOnFindUniqueNetIdForPlayerComplete_Parms OnFindUniqueNetIdForPlayerComplete_Parms;
	OnFindUniqueNetIdForPlayerComplete_Parms.Found = Found;
	memcpy ( &OnFindUniqueNetIdForPlayerComplete_Parms.PlayerName, &PlayerName, 0xC );
	OnFindUniqueNetIdForPlayerComplete_Parms.Id = Id;

	this->ProcessEvent ( pFnOnFindUniqueNetIdForPlayerComplete, &OnFindUniqueNetIdForPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddToPlayersMetList
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerIdToAdd                  ( CPF_Parm )
// struct FString                 PlayerName                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AddToPlayersMetList ( struct FUniqueNetId PlayerIdToAdd, struct FString PlayerName )
{
	static UFunction* pFnAddToPlayersMetList = NULL;

	if ( ! pFnAddToPlayersMetList )
		pFnAddToPlayersMetList = (UFunction*) UObject::GObjObjects()->Data[ 77608 ];

	UOnlineSubsystemSteamworks_execAddToPlayersMetList_Parms AddToPlayersMetList_Parms;
	memcpy ( &AddToPlayersMetList_Parms.PlayerIdToAdd, &PlayerIdToAdd, 0x8 );
	memcpy ( &AddToPlayersMetList_Parms.PlayerName, &PlayerName, 0xC );

	this->ProcessEvent ( pFnAddToPlayersMetList, &AddToPlayersMetList_Parms, NULL );

	return AddToPlayersMetList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 LeaderboardName                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  SortType                       ( CPF_Parm )
// unsigned char                  DisplayFormat                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::CreateLeaderboard ( struct FString LeaderboardName, unsigned char SortType, unsigned char DisplayFormat )
{
	static UFunction* pFnCreateLeaderboard = NULL;

	if ( ! pFnCreateLeaderboard )
		pFnCreateLeaderboard = (UFunction*) UObject::GObjObjects()->Data[ 77603 ];

	UOnlineSubsystemSteamworks_execCreateLeaderboard_Parms CreateLeaderboard_Parms;
	memcpy ( &CreateLeaderboard_Parms.LeaderboardName, &LeaderboardName, 0xC );
	CreateLeaderboard_Parms.SortType = SortType;
	CreateLeaderboard_Parms.DisplayFormat = DisplayFormat;

	pFnCreateLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateLeaderboard, &CreateLeaderboard_Parms, NULL );

	pFnCreateLeaderboard->FunctionFlags |= 0x400;

	return CreateLeaderboard_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate )
{
	static UFunction* pFnClearGetNumberOfCurrentPlayersCompleteDelegate = NULL;

	if ( ! pFnClearGetNumberOfCurrentPlayersCompleteDelegate )
		pFnClearGetNumberOfCurrentPlayersCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77600 ];

	UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Parms ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms;
	memcpy ( &ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms.GetNumberOfCurrentPlayersCompleteDelegate, &GetNumberOfCurrentPlayersCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearGetNumberOfCurrentPlayersCompleteDelegate, &ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate )
{
	static UFunction* pFnAddGetNumberOfCurrentPlayersCompleteDelegate = NULL;

	if ( ! pFnAddGetNumberOfCurrentPlayersCompleteDelegate )
		pFnAddGetNumberOfCurrentPlayersCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77597 ];

	UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Parms AddGetNumberOfCurrentPlayersCompleteDelegate_Parms;
	memcpy ( &AddGetNumberOfCurrentPlayersCompleteDelegate_Parms.GetNumberOfCurrentPlayersCompleteDelegate, &GetNumberOfCurrentPlayersCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddGetNumberOfCurrentPlayersCompleteDelegate, &AddGetNumberOfCurrentPlayersCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// [0x00120000] 
// Parameters infos:
// int                            TotalPlayers                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnGetNumberOfCurrentPlayersComplete ( int TotalPlayers )
{
	static UFunction* pFnOnGetNumberOfCurrentPlayersComplete = NULL;

	if ( ! pFnOnGetNumberOfCurrentPlayersComplete )
		pFnOnGetNumberOfCurrentPlayersComplete = (UFunction*) UObject::GObjObjects()->Data[ 77595 ];

	UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Parms OnGetNumberOfCurrentPlayersComplete_Parms;
	OnGetNumberOfCurrentPlayersComplete_Parms.TotalPlayers = TotalPlayers;

	this->ProcessEvent ( pFnOnGetNumberOfCurrentPlayersComplete, &OnGetNumberOfCurrentPlayersComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::GetNumberOfCurrentPlayers ( )
{
	static UFunction* pFnGetNumberOfCurrentPlayers = NULL;

	if ( ! pFnGetNumberOfCurrentPlayers )
		pFnGetNumberOfCurrentPlayers = (UFunction*) UObject::GObjObjects()->Data[ 77593 ];

	UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Parms GetNumberOfCurrentPlayers_Parms;

	pFnGetNumberOfCurrentPlayers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNumberOfCurrentPlayers, &GetNumberOfCurrentPlayers_Parms, NULL );

	pFnGetNumberOfCurrentPlayers->FunctionFlags |= 0x400;

	return GetNumberOfCurrentPlayers_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Const | CPF_Parm )
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ReadOnlineAvatar ( struct FUniqueNetId PlayerNetId, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate )
{
	static UFunction* pFnReadOnlineAvatar = NULL;

	if ( ! pFnReadOnlineAvatar )
		pFnReadOnlineAvatar = (UFunction*) UObject::GObjObjects()->Data[ 77590 ];

	UOnlineSubsystemSteamworks_execReadOnlineAvatar_Parms ReadOnlineAvatar_Parms;
	memcpy ( &ReadOnlineAvatar_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	memcpy ( &ReadOnlineAvatar_Parms.ReadOnlineAvatarCompleteDelegate, &ReadOnlineAvatarCompleteDelegate, 0xC );

	pFnReadOnlineAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineAvatar, &ReadOnlineAvatar_Parms, NULL );

	pFnReadOnlineAvatar->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Const | CPF_Parm )
// class UTexture2D*              Avatar                         ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadOnlineAvatarComplete ( struct FUniqueNetId PlayerNetId, class UTexture2D* Avatar )
{
	static UFunction* pFnOnReadOnlineAvatarComplete = NULL;

	if ( ! pFnOnReadOnlineAvatarComplete )
		pFnOnReadOnlineAvatarComplete = (UFunction*) UObject::GObjObjects()->Data[ 77587 ];

	UOnlineSubsystemSteamworks_execOnReadOnlineAvatarComplete_Parms OnReadOnlineAvatarComplete_Parms;
	memcpy ( &OnReadOnlineAvatarComplete_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	OnReadOnlineAvatarComplete_Parms.Avatar = Avatar;

	this->ProcessEvent ( pFnOnReadOnlineAvatarComplete, &OnReadOnlineAvatarComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 Title                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Description                    ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowCustomPlayersUI ( unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnShowCustomPlayersUI = NULL;

	if ( ! pFnShowCustomPlayersUI )
		pFnShowCustomPlayersUI = (UFunction*) UObject::GObjObjects()->Data[ 77580 ];

	UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Parms ShowCustomPlayersUI_Parms;
	ShowCustomPlayersUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowCustomPlayersUI_Parms.Title, &Title, 0xC );
	memcpy ( &ShowCustomPlayersUI_Parms.Description, &Description, 0xC );

	pFnShowCustomPlayersUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowCustomPlayersUI, &ShowCustomPlayersUI_Parms, NULL );

	pFnShowCustomPlayersUI->FunctionFlags |= 0x400;

	if ( Players )
		memcpy ( Players, &ShowCustomPlayersUI_Parms.Players, 0xC );

	return ShowCustomPlayersUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FAchievementDetails > Achievements                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements )
{
	static UFunction* pFnGetAchievements = NULL;

	if ( ! pFnGetAchievements )
		pFnGetAchievements = (UFunction*) UObject::GObjObjects()->Data[ 77574 ];

	UOnlineSubsystemSteamworks_execGetAchievements_Parms GetAchievements_Parms;
	GetAchievements_Parms.LocalUserNum = LocalUserNum;
	GetAchievements_Parms.TitleId = TitleId;

	pFnGetAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAchievements, &GetAchievements_Parms, NULL );

	pFnGetAchievements->FunctionFlags |= 0x400;

	if ( Achievements )
		memcpy ( Achievements, &GetAchievements_Parms.Achievements, 0xC );

	return GetAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnClearReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnClearReadAchievementsCompleteDelegate )
		pFnClearReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77570 ];

	UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Parms ClearReadAchievementsCompleteDelegate_Parms;
	ClearReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnAddReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnAddReadAchievementsCompleteDelegate )
		pFnAddReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77566 ];

	UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Parms AddReadAchievementsCompleteDelegate_Parms;
	AddReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120000] 
// Parameters infos:
// int                            TitleId                        ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadAchievementsComplete ( int TitleId )
{
	static UFunction* pFnOnReadAchievementsComplete = NULL;

	if ( ! pFnOnReadAchievementsComplete )
		pFnOnReadAchievementsComplete = (UFunction*) UObject::GObjObjects()->Data[ 77564 ];

	UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Parms OnReadAchievementsComplete_Parms;
	OnReadAchievementsComplete_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadText                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadImages              ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages )
{
	static UFunction* pFnReadAchievements = NULL;

	if ( ! pFnReadAchievements )
		pFnReadAchievements = (UFunction*) UObject::GObjObjects()->Data[ 77558 ];

	UOnlineSubsystemSteamworks_execReadAchievements_Parms ReadAchievements_Parms;
	ReadAchievements_Parms.LocalUserNum = LocalUserNum;
	ReadAchievements_Parms.TitleId = TitleId;
	ReadAchievements_Parms.bShouldReadText = bShouldReadText;
	ReadAchievements_Parms.bShouldReadImages = bShouldReadImages;

	pFnReadAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadAchievements, &ReadAchievements_Parms, NULL );

	pFnReadAchievements->FunctionFlags |= 0x400;

	return ReadAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowPlayersUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowPlayersUI = NULL;

	if ( ! pFnShowPlayersUI )
		pFnShowPlayersUI = (UFunction*) UObject::GObjObjects()->Data[ 77555 ];

	UOnlineSubsystemSteamworks_execShowPlayersUI_Parms ShowPlayersUI_Parms;
	ShowPlayersUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowPlayersUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowPlayersUI, &ShowPlayersUI_Parms, NULL );

	pFnShowPlayersUI->FunctionFlags |= 0x400;

	return ShowPlayersUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowFriendsInviteUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnShowFriendsInviteUI = NULL;

	if ( ! pFnShowFriendsInviteUI )
		pFnShowFriendsInviteUI = (UFunction*) UObject::GObjObjects()->Data[ 77551 ];

	UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Parms ShowFriendsInviteUI_Parms;
	ShowFriendsInviteUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowFriendsInviteUI_Parms.PlayerID, &PlayerID, 0x8 );

	pFnShowFriendsInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsInviteUI, &ShowFriendsInviteUI_Parms, NULL );

	pFnShowFriendsInviteUI->FunctionFlags |= 0x400;

	return ShowFriendsInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowFriendsUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowFriendsUI = NULL;

	if ( ! pFnShowFriendsUI )
		pFnShowFriendsUI = (UFunction*) UObject::GObjObjects()->Data[ 77548 ];

	UOnlineSubsystemSteamworks_execShowFriendsUI_Parms ShowFriendsUI_Parms;
	ShowFriendsUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowFriendsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsUI, &ShowFriendsUI_Parms, NULL );

	pFnShowFriendsUI->FunctionFlags |= 0x400;

	return ShowFriendsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ProfileDataChangedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate )
{
	static UFunction* pFnClearProfileDataChangedDelegate = NULL;

	if ( ! pFnClearProfileDataChangedDelegate )
		pFnClearProfileDataChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77544 ];

	UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Parms ClearProfileDataChangedDelegate_Parms;
	ClearProfileDataChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearProfileDataChangedDelegate_Parms.ProfileDataChangedDelegate, &ProfileDataChangedDelegate, 0xC );

	this->ProcessEvent ( pFnClearProfileDataChangedDelegate, &ClearProfileDataChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ProfileDataChangedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate )
{
	static UFunction* pFnAddProfileDataChangedDelegate = NULL;

	if ( ! pFnAddProfileDataChangedDelegate )
		pFnAddProfileDataChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77540 ];

	UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Parms AddProfileDataChangedDelegate_Parms;
	AddProfileDataChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddProfileDataChangedDelegate_Parms.ProfileDataChangedDelegate, &ProfileDataChangedDelegate, 0xC );

	this->ProcessEvent ( pFnAddProfileDataChangedDelegate, &AddProfileDataChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnProfileDataChanged ( )
{
	static UFunction* pFnOnProfileDataChanged = NULL;

	if ( ! pFnOnProfileDataChanged )
		pFnOnProfileDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 77539 ];

	UOnlineSubsystemSteamworks_execOnProfileDataChanged_Parms OnProfileDataChanged_Parms;

	this->ProcessEvent ( pFnOnProfileDataChanged, &OnProfileDataChanged_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            PictureId                      ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnlockGamerPicture ( unsigned char LocalUserNum, int PictureId )
{
	static UFunction* pFnUnlockGamerPicture = NULL;

	if ( ! pFnUnlockGamerPicture )
		pFnUnlockGamerPicture = (UFunction*) UObject::GObjObjects()->Data[ 77535 ];

	UOnlineSubsystemSteamworks_execUnlockGamerPicture_Parms UnlockGamerPicture_Parms;
	UnlockGamerPicture_Parms.LocalUserNum = LocalUserNum;
	UnlockGamerPicture_Parms.PictureId = PictureId;

	pFnUnlockGamerPicture->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnlockGamerPicture, &UnlockGamerPicture_Parms, NULL );

	pFnUnlockGamerPicture->FunctionFlags |= 0x400;

	return UnlockGamerPicture_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnClearUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnClearUnlockAchievementCompleteDelegate )
		pFnClearUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77531 ];

	UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Parms ClearUnlockAchievementCompleteDelegate_Parms;
	ClearUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnAddUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnAddUnlockAchievementCompleteDelegate )
		pFnAddUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77527 ];

	UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Parms AddUnlockAchievementCompleteDelegate_Parms;
	AddUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnUnlockAchievementComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnlockAchievementComplete = NULL;

	if ( ! pFnOnUnlockAchievementComplete )
		pFnOnUnlockAchievementComplete = (UFunction*) UObject::GObjObjects()->Data[ 77525 ];

	UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Parms OnUnlockAchievementComplete_Parms;
	OnUnlockAchievementComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AchievementId                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnlockAchievement ( unsigned char LocalUserNum, int AchievementId )
{
	static UFunction* pFnUnlockAchievement = NULL;

	if ( ! pFnUnlockAchievement )
		pFnUnlockAchievement = (UFunction*) UObject::GObjObjects()->Data[ 77521 ];

	UOnlineSubsystemSteamworks_execUnlockAchievement_Parms UnlockAchievement_Parms;
	UnlockAchievement_Parms.LocalUserNum = LocalUserNum;
	UnlockAchievement_Parms.AchievementId = AchievementId;

	pFnUnlockAchievement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnlockAchievement, &UnlockAchievement_Parms, NULL );

	pFnUnlockAchievement->FunctionFlags |= 0x400;

	return UnlockAchievement_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            DeviceID                       ( CPF_Parm )
// int                            SizeNeeded                     ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::IsDeviceValid ( int DeviceID, int SizeNeeded )
{
	static UFunction* pFnIsDeviceValid = NULL;

	if ( ! pFnIsDeviceValid )
		pFnIsDeviceValid = (UFunction*) UObject::GObjObjects()->Data[ 77517 ];

	UOnlineSubsystemSteamworks_execIsDeviceValid_Parms IsDeviceValid_Parms;
	IsDeviceValid_Parms.DeviceID = DeviceID;
	IsDeviceValid_Parms.SizeNeeded = SizeNeeded;

	pFnIsDeviceValid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsDeviceValid, &IsDeviceValid_Parms, NULL );

	pFnIsDeviceValid->FunctionFlags |= 0x400;

	return IsDeviceValid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 DeviceName                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int UOnlineSubsystemSteamworks::GetDeviceSelectionResults ( unsigned char LocalUserNum, struct FString* DeviceName )
{
	static UFunction* pFnGetDeviceSelectionResults = NULL;

	if ( ! pFnGetDeviceSelectionResults )
		pFnGetDeviceSelectionResults = (UFunction*) UObject::GObjObjects()->Data[ 77513 ];

	UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Parms GetDeviceSelectionResults_Parms;
	GetDeviceSelectionResults_Parms.LocalUserNum = LocalUserNum;

	pFnGetDeviceSelectionResults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDeviceSelectionResults, &GetDeviceSelectionResults_Parms, NULL );

	pFnGetDeviceSelectionResults->FunctionFlags |= 0x400;

	if ( DeviceName )
		memcpy ( DeviceName, &GetDeviceSelectionResults_Parms.DeviceName, 0xC );

	return GetDeviceSelectionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         DeviceDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate )
{
	static UFunction* pFnClearDeviceSelectionDoneDelegate = NULL;

	if ( ! pFnClearDeviceSelectionDoneDelegate )
		pFnClearDeviceSelectionDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77509 ];

	UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Parms ClearDeviceSelectionDoneDelegate_Parms;
	ClearDeviceSelectionDoneDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearDeviceSelectionDoneDelegate_Parms.DeviceDelegate, &DeviceDelegate, 0xC );

	this->ProcessEvent ( pFnClearDeviceSelectionDoneDelegate, &ClearDeviceSelectionDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         DeviceDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate )
{
	static UFunction* pFnAddDeviceSelectionDoneDelegate = NULL;

	if ( ! pFnAddDeviceSelectionDoneDelegate )
		pFnAddDeviceSelectionDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77502 ];

	UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Parms AddDeviceSelectionDoneDelegate_Parms;
	AddDeviceSelectionDoneDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddDeviceSelectionDoneDelegate_Parms.DeviceDelegate, &DeviceDelegate, 0xC );

	this->ProcessEvent ( pFnAddDeviceSelectionDoneDelegate, &AddDeviceSelectionDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnDeviceSelectionComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDeviceSelectionComplete = NULL;

	if ( ! pFnOnDeviceSelectionComplete )
		pFnOnDeviceSelectionComplete = (UFunction*) UObject::GObjObjects()->Data[ 77500 ];

	UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Parms OnDeviceSelectionComplete_Parms;
	OnDeviceSelectionComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            SizeNeeded                     ( CPF_Parm )
// unsigned long                  bForceShowUI                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bManageStorage                 ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowDeviceSelectionUI ( unsigned char LocalUserNum, int SizeNeeded, unsigned long bForceShowUI, unsigned long bManageStorage )
{
	static UFunction* pFnShowDeviceSelectionUI = NULL;

	if ( ! pFnShowDeviceSelectionUI )
		pFnShowDeviceSelectionUI = (UFunction*) UObject::GObjObjects()->Data[ 77494 ];

	UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Parms ShowDeviceSelectionUI_Parms;
	ShowDeviceSelectionUI_Parms.LocalUserNum = LocalUserNum;
	ShowDeviceSelectionUI_Parms.SizeNeeded = SizeNeeded;
	ShowDeviceSelectionUI_Parms.bForceShowUI = bForceShowUI;
	ShowDeviceSelectionUI_Parms.bManageStorage = bManageStorage;

	pFnShowDeviceSelectionUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowDeviceSelectionUI, &ShowDeviceSelectionUI_Parms, NULL );

	pFnShowDeviceSelectionUI->FunctionFlags |= 0x400;

	return ShowDeviceSelectionUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowMembershipMarketplaceUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowMembershipMarketplaceUI = NULL;

	if ( ! pFnShowMembershipMarketplaceUI )
		pFnShowMembershipMarketplaceUI = (UFunction*) UObject::GObjObjects()->Data[ 77491 ];

	UOnlineSubsystemSteamworks_execShowMembershipMarketplaceUI_Parms ShowMembershipMarketplaceUI_Parms;
	ShowMembershipMarketplaceUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowMembershipMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowMembershipMarketplaceUI, &ShowMembershipMarketplaceUI_Parms, NULL );

	pFnShowMembershipMarketplaceUI->FunctionFlags |= 0x400;

	return ShowMembershipMarketplaceUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            CategoryMask                   ( CPF_OptionalParm | CPF_Parm )
// int                            OfferId                        ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowContentMarketplaceUI ( unsigned char LocalUserNum, int CategoryMask, int OfferId )
{
	static UFunction* pFnShowContentMarketplaceUI = NULL;

	if ( ! pFnShowContentMarketplaceUI )
		pFnShowContentMarketplaceUI = (UFunction*) UObject::GObjObjects()->Data[ 77486 ];

	UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Parms ShowContentMarketplaceUI_Parms;
	ShowContentMarketplaceUI_Parms.LocalUserNum = LocalUserNum;
	ShowContentMarketplaceUI_Parms.CategoryMask = CategoryMask;
	ShowContentMarketplaceUI_Parms.OfferId = OfferId;

	pFnShowContentMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowContentMarketplaceUI, &ShowContentMarketplaceUI_Parms, NULL );

	pFnShowContentMarketplaceUI->FunctionFlags |= 0x400;

	return ShowContentMarketplaceUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 InviteText                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText )
{
	static UFunction* pFnShowInviteUI = NULL;

	if ( ! pFnShowInviteUI )
		pFnShowInviteUI = (UFunction*) UObject::GObjObjects()->Data[ 77482 ];

	UOnlineSubsystemSteamworks_execShowInviteUI_Parms ShowInviteUI_Parms;
	ShowInviteUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowInviteUI_Parms.InviteText, &InviteText, 0xC );

	pFnShowInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowInviteUI, &ShowInviteUI_Parms, NULL );

	pFnShowInviteUI->FunctionFlags |= 0x400;

	return ShowInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowAchievementsUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowAchievementsUI = NULL;

	if ( ! pFnShowAchievementsUI )
		pFnShowAchievementsUI = (UFunction*) UObject::GObjObjects()->Data[ 77479 ];

	UOnlineSubsystemSteamworks_execShowAchievementsUI_Parms ShowAchievementsUI_Parms;
	ShowAchievementsUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowAchievementsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowAchievementsUI, &ShowAchievementsUI_Parms, NULL );

	pFnShowAchievementsUI->FunctionFlags |= 0x400;

	return ShowAchievementsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowMessagesUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowMessagesUI = NULL;

	if ( ! pFnShowMessagesUI )
		pFnShowMessagesUI = (UFunction*) UObject::GObjObjects()->Data[ 77476 ];

	UOnlineSubsystemSteamworks_execShowMessagesUI_Parms ShowMessagesUI_Parms;
	ShowMessagesUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowMessagesUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowMessagesUI, &ShowMessagesUI_Parms, NULL );

	pFnShowMessagesUI->FunctionFlags |= 0x400;

	return ShowMessagesUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FString                 PlayerName                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowGamerCardUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, struct FString PlayerName )
{
	static UFunction* pFnShowGamerCardUI = NULL;

	if ( ! pFnShowGamerCardUI )
		pFnShowGamerCardUI = (UFunction*) UObject::GObjObjects()->Data[ 77471 ];

	UOnlineSubsystemSteamworks_execShowGamerCardUI_Parms ShowGamerCardUI_Parms;
	ShowGamerCardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowGamerCardUI_Parms.PlayerID, &PlayerID, 0x8 );
	memcpy ( &ShowGamerCardUI_Parms.PlayerName, &PlayerName, 0xC );

	pFnShowGamerCardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowGamerCardUI, &ShowGamerCardUI_Parms, NULL );

	pFnShowGamerCardUI->FunctionFlags |= 0x400;

	return ShowGamerCardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowFeedbackUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnShowFeedbackUI = NULL;

	if ( ! pFnShowFeedbackUI )
		pFnShowFeedbackUI = (UFunction*) UObject::GObjObjects()->Data[ 77467 ];

	UOnlineSubsystemSteamworks_execShowFeedbackUI_Parms ShowFeedbackUI_Parms;
	ShowFeedbackUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowFeedbackUI_Parms.PlayerID, &PlayerID, 0x8 );

	pFnShowFeedbackUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFeedbackUI, &ShowFeedbackUI_Parms, NULL );

	pFnShowFeedbackUI->FunctionFlags |= 0x400;

	return ShowFeedbackUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            MessageIndex                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DeleteMessage ( unsigned char LocalUserNum, int MessageIndex )
{
	static UFunction* pFnDeleteMessage = NULL;

	if ( ! pFnDeleteMessage )
		pFnDeleteMessage = (UFunction*) UObject::GObjObjects()->Data[ 77463 ];

	UOnlineSubsystemSteamworks_execDeleteMessage_Parms DeleteMessage_Parms;
	DeleteMessage_Parms.LocalUserNum = LocalUserNum;
	DeleteMessage_Parms.MessageIndex = MessageIndex;

	this->ProcessEvent ( pFnDeleteMessage, &DeleteMessage_Parms, NULL );

	return DeleteMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnmuteAll ( unsigned char LocalUserNum )
{
	static UFunction* pFnUnmuteAll = NULL;

	if ( ! pFnUnmuteAll )
		pFnUnmuteAll = (UFunction*) UObject::GObjObjects()->Data[ 77460 ];

	UOnlineSubsystemSteamworks_execUnmuteAll_Parms UnmuteAll_Parms;
	UnmuteAll_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnUnmuteAll, &UnmuteAll_Parms, NULL );

	return UnmuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAllowFriends                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends )
{
	static UFunction* pFnMuteAll = NULL;

	if ( ! pFnMuteAll )
		pFnMuteAll = (UFunction*) UObject::GObjObjects()->Data[ 77453 ];

	UOnlineSubsystemSteamworks_execMuteAll_Parms MuteAll_Parms;
	MuteAll_Parms.LocalUserNum = LocalUserNum;
	MuteAll_Parms.bAllowFriends = bAllowFriends;

	this->ProcessEvent ( pFnMuteAll, &MuteAll_Parms, NULL );

	return MuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FString                 ClientStatGuid                 ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::RegisterStatGuid ( struct FUniqueNetId PlayerID, struct FString* ClientStatGuid )
{
	static UFunction* pFnRegisterStatGuid = NULL;

	if ( ! pFnRegisterStatGuid )
		pFnRegisterStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 77449 ];

	UOnlineSubsystemSteamworks_execRegisterStatGuid_Parms RegisterStatGuid_Parms;
	memcpy ( &RegisterStatGuid_Parms.PlayerID, &PlayerID, 0x8 );

	pFnRegisterStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterStatGuid, &RegisterStatGuid_Parms, NULL );

	pFnRegisterStatGuid->FunctionFlags |= 0x400;

	if ( ClientStatGuid )
		memcpy ( ClientStatGuid, &RegisterStatGuid_Parms.ClientStatGuid, 0xC );

	return RegisterStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemSteamworks::GetClientStatGuid ( )
{
	static UFunction* pFnGetClientStatGuid = NULL;

	if ( ! pFnGetClientStatGuid )
		pFnGetClientStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 77447 ];

	UOnlineSubsystemSteamworks_execGetClientStatGuid_Parms GetClientStatGuid_Parms;

	pFnGetClientStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetClientStatGuid, &GetClientStatGuid_Parms, NULL );

	pFnGetClientStatGuid->FunctionFlags |= 0x400;

	return GetClientStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearRegisterHostStatGuidCompleteDelegateDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate )
{
	static UFunction* pFnClearRegisterHostStatGuidCompleteDelegateDelegate = NULL;

	if ( ! pFnClearRegisterHostStatGuidCompleteDelegateDelegate )
		pFnClearRegisterHostStatGuidCompleteDelegateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77444 ];

	UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms;
	memcpy ( &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms.RegisterHostStatGuidCompleteDelegate, &RegisterHostStatGuidCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddRegisterHostStatGuidCompleteDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate )
{
	static UFunction* pFnAddRegisterHostStatGuidCompleteDelegate = NULL;

	if ( ! pFnAddRegisterHostStatGuidCompleteDelegate )
		pFnAddRegisterHostStatGuidCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77441 ];

	UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Parms AddRegisterHostStatGuidCompleteDelegate_Parms;
	memcpy ( &AddRegisterHostStatGuidCompleteDelegate_Parms.RegisterHostStatGuidCompleteDelegate, &RegisterHostStatGuidCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterHostStatGuidComplete = NULL;

	if ( ! pFnOnRegisterHostStatGuidComplete )
		pFnOnRegisterHostStatGuidComplete = (UFunction*) UObject::GObjObjects()->Data[ 77439 ];

	UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Parms OnRegisterHostStatGuidComplete_Parms;
	OnRegisterHostStatGuidComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 HostStatGuid                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::RegisterHostStatGuid ( struct FString* HostStatGuid )
{
	static UFunction* pFnRegisterHostStatGuid = NULL;

	if ( ! pFnRegisterHostStatGuid )
		pFnRegisterHostStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 77436 ];

	UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Parms RegisterHostStatGuid_Parms;

	pFnRegisterHostStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterHostStatGuid, &RegisterHostStatGuid_Parms, NULL );

	pFnRegisterHostStatGuid->FunctionFlags |= 0x400;

	if ( HostStatGuid )
		memcpy ( HostStatGuid, &RegisterHostStatGuid_Parms.HostStatGuid, 0xC );

	return RegisterHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemSteamworks::GetHostStatGuid ( )
{
	static UFunction* pFnGetHostStatGuid = NULL;

	if ( ! pFnGetHostStatGuid )
		pFnGetHostStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 77434 ];

	UOnlineSubsystemSteamworks_execGetHostStatGuid_Parms GetHostStatGuid_Parms;

	pFnGetHostStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHostStatGuid, &GetHostStatGuid_Parms, NULL );

	pFnGetHostStatGuid->FunctionFlags |= 0x400;

	return GetHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnClearFriendMessageReceivedDelegate = NULL;

	if ( ! pFnClearFriendMessageReceivedDelegate )
		pFnClearFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77430 ];

	UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Parms ClearFriendMessageReceivedDelegate_Parms;
	ClearFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnAddFriendMessageReceivedDelegate = NULL;

	if ( ! pFnAddFriendMessageReceivedDelegate )
		pFnAddFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77426 ];

	UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Parms AddFriendMessageReceivedDelegate_Parms;
	AddFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            SendingPlayer                  ( CPF_Parm )
// struct FString                 SendingNick                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message )
{
	static UFunction* pFnOnFriendMessageReceived = NULL;

	if ( ! pFnOnFriendMessageReceived )
		pFnOnFriendMessageReceived = (UFunction*) UObject::GObjObjects()->Data[ 77421 ];

	UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Parms OnFriendMessageReceived_Parms;
	OnFriendMessageReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendMessageReceived_Parms.SendingPlayer, &SendingPlayer, 0x8 );
	memcpy ( &OnFriendMessageReceived_Parms.SendingNick, &SendingNick, 0xC );
	memcpy ( &OnFriendMessageReceived_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnFriendMessageReceived, &OnFriendMessageReceived_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// [0x00420002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FOnlineFriendMessage > FriendMessages                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::GetFriendMessages ( unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages )
{
	static UFunction* pFnGetFriendMessages = NULL;

	if ( ! pFnGetFriendMessages )
		pFnGetFriendMessages = (UFunction*) UObject::GObjObjects()->Data[ 77416 ];

	UOnlineSubsystemSteamworks_execGetFriendMessages_Parms GetFriendMessages_Parms;
	GetFriendMessages_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetFriendMessages, &GetFriendMessages_Parms, NULL );

	if ( FriendMessages )
		memcpy ( FriendMessages, &GetFriendMessages_Parms.FriendMessages, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnClearJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinFriendGameCompleteDelegate )
		pFnClearJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77413 ];

	UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Parms ClearJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnAddJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinFriendGameCompleteDelegate )
		pFnAddJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77410 ];

	UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Parms AddJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &AddJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnJoinFriendGameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinFriendGameComplete = NULL;

	if ( ! pFnOnJoinFriendGameComplete )
		pFnOnJoinFriendGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 77408 ];

	UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Parms OnJoinFriendGameComplete_Parms;
	OnJoinFriendGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )

bool UOnlineSubsystemSteamworks::JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend )
{
	static UFunction* pFnJoinFriendGame = NULL;

	if ( ! pFnJoinFriendGame )
		pFnJoinFriendGame = (UFunction*) UObject::GObjObjects()->Data[ 77404 ];

	UOnlineSubsystemSteamworks_execJoinFriendGame_Parms JoinFriendGame_Parms;
	JoinFriendGame_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &JoinFriendGame_Parms.Friend, &Friend, 0x8 );

	pFnJoinFriendGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinFriendGame, &JoinFriendGame_Parms, NULL );

	pFnJoinFriendGame->FunctionFlags |= 0x400;

	return JoinFriendGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate )
{
	static UFunction* pFnClearReceivedGameInviteDelegate = NULL;

	if ( ! pFnClearReceivedGameInviteDelegate )
		pFnClearReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77400 ];

	UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Parms ClearReceivedGameInviteDelegate_Parms;
	ClearReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate )
{
	static UFunction* pFnAddReceivedGameInviteDelegate = NULL;

	if ( ! pFnAddReceivedGameInviteDelegate )
		pFnAddReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77396 ];

	UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Parms AddReceivedGameInviteDelegate_Parms;
	AddReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 InviterName                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName )
{
	static UFunction* pFnOnReceivedGameInvite = NULL;

	if ( ! pFnOnReceivedGameInvite )
		pFnOnReceivedGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 77393 ];

	UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Parms OnReceivedGameInvite_Parms;
	OnReceivedGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnReceivedGameInvite_Parms.InviterName, &InviterName, 0xC );

	this->ProcessEvent ( pFnOnReceivedGameInvite, &OnReceivedGameInvite_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FUniqueNetId >  Friends                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendGameInviteToFriends ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Friends, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriends = NULL;

	if ( ! pFnSendGameInviteToFriends )
		pFnSendGameInviteToFriends = (UFunction*) UObject::GObjObjects()->Data[ 77387 ];

	UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Parms SendGameInviteToFriends_Parms;
	SendGameInviteToFriends_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriends_Parms.Friends, &Friends, 0xC );
	memcpy ( &SendGameInviteToFriends_Parms.Text, &Text, 0xC );

	pFnSendGameInviteToFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameInviteToFriends, &SendGameInviteToFriends_Parms, NULL );

	pFnSendGameInviteToFriends->FunctionFlags |= 0x400;

	return SendGameInviteToFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendGameInviteToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriend = NULL;

	if ( ! pFnSendGameInviteToFriend )
		pFnSendGameInviteToFriend = (UFunction*) UObject::GObjObjects()->Data[ 77382 ];

	UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Parms SendGameInviteToFriend_Parms;
	SendGameInviteToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriend_Parms.Friend, &Friend, 0x8 );
	memcpy ( &SendGameInviteToFriend_Parms.Text, &Text, 0xC );

	pFnSendGameInviteToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameInviteToFriend, &SendGameInviteToFriend_Parms, NULL );

	pFnSendGameInviteToFriend->FunctionFlags |= 0x400;

	return SendGameInviteToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message )
{
	static UFunction* pFnSendMessageToFriend = NULL;

	if ( ! pFnSendMessageToFriend )
		pFnSendMessageToFriend = (UFunction*) UObject::GObjObjects()->Data[ 77377 ];

	UOnlineSubsystemSteamworks_execSendMessageToFriend_Parms SendMessageToFriend_Parms;
	SendMessageToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendMessageToFriend_Parms.Friend, &Friend, 0x8 );
	memcpy ( &SendMessageToFriend_Parms.Message, &Message, 0xC );

	pFnSendMessageToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendMessageToFriend, &SendMessageToFriend_Parms, NULL );

	pFnSendMessageToFriend->FunctionFlags |= 0x400;

	return SendMessageToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate )
{
	static UFunction* pFnClearFriendInviteReceivedDelegate = NULL;

	if ( ! pFnClearFriendInviteReceivedDelegate )
		pFnClearFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77373 ];

	UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Parms ClearFriendInviteReceivedDelegate_Parms;
	ClearFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate )
{
	static UFunction* pFnAddFriendInviteReceivedDelegate = NULL;

	if ( ! pFnAddFriendInviteReceivedDelegate )
		pFnAddFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77369 ];

	UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Parms AddFriendInviteReceivedDelegate_Parms;
	AddFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )
// struct FString                 RequestingNick                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message )
{
	static UFunction* pFnOnFriendInviteReceived = NULL;

	if ( ! pFnOnFriendInviteReceived )
		pFnOnFriendInviteReceived = (UFunction*) UObject::GObjObjects()->Data[ 77364 ];

	UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Parms OnFriendInviteReceived_Parms;
	OnFriendInviteReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendInviteReceived_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );
	memcpy ( &OnFriendInviteReceived_Parms.RequestingNick, &RequestingNick, 0xC );
	memcpy ( &OnFriendInviteReceived_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnFriendInviteReceived, &OnFriendInviteReceived_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnDenyFriendInvite = NULL;

	if ( ! pFnDenyFriendInvite )
		pFnDenyFriendInvite = (UFunction*) UObject::GObjObjects()->Data[ 77360 ];

	UOnlineSubsystemSteamworks_execDenyFriendInvite_Parms DenyFriendInvite_Parms;
	DenyFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &DenyFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );

	pFnDenyFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDenyFriendInvite, &DenyFriendInvite_Parms, NULL );

	pFnDenyFriendInvite->FunctionFlags |= 0x400;

	return DenyFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemSteamworks::AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnAcceptFriendInvite = NULL;

	if ( ! pFnAcceptFriendInvite )
		pFnAcceptFriendInvite = (UFunction*) UObject::GObjObjects()->Data[ 77356 ];

	UOnlineSubsystemSteamworks_execAcceptFriendInvite_Parms AcceptFriendInvite_Parms;
	AcceptFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );

	pFnAcceptFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptFriendInvite, &AcceptFriendInvite_Parms, NULL );

	pFnAcceptFriendInvite->FunctionFlags |= 0x400;

	return AcceptFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            FormerFriend                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend )
{
	static UFunction* pFnRemoveFriend = NULL;

	if ( ! pFnRemoveFriend )
		pFnRemoveFriend = (UFunction*) UObject::GObjObjects()->Data[ 77352 ];

	UOnlineSubsystemSteamworks_execRemoveFriend_Parms RemoveFriend_Parms;
	RemoveFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &RemoveFriend_Parms.FormerFriend, &FormerFriend, 0x8 );

	pFnRemoveFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveFriend, &RemoveFriend_Parms, NULL );

	pFnRemoveFriend->FunctionFlags |= 0x400;

	return RemoveFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate )
{
	static UFunction* pFnClearAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnClearAddFriendByNameCompleteDelegate )
		pFnClearAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77348 ];

	UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Parms ClearAddFriendByNameCompleteDelegate_Parms;
	ClearAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0xC );

	this->ProcessEvent ( pFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate )
{
	static UFunction* pFnAddAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnAddAddFriendByNameCompleteDelegate )
		pFnAddAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77343 ];

	UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Parms AddAddFriendByNameCompleteDelegate_Parms;
	AddAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0xC );

	this->ProcessEvent ( pFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnAddFriendByNameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnAddFriendByNameComplete = NULL;

	if ( ! pFnOnAddFriendByNameComplete )
		pFnOnAddFriendByNameComplete = (UFunction*) UObject::GObjObjects()->Data[ 77341 ];

	UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Parms OnAddFriendByNameComplete_Parms;
	OnAddFriendByNameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 FriendName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message )
{
	static UFunction* pFnAddFriendByName = NULL;

	if ( ! pFnAddFriendByName )
		pFnAddFriendByName = (UFunction*) UObject::GObjObjects()->Data[ 77336 ];

	UOnlineSubsystemSteamworks_execAddFriendByName_Parms AddFriendByName_Parms;
	AddFriendByName_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendByName_Parms.FriendName, &FriendName, 0xC );
	memcpy ( &AddFriendByName_Parms.Message, &Message, 0xC );

	pFnAddFriendByName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFriendByName, &AddFriendByName_Parms, NULL );

	pFnAddFriendByName->FunctionFlags |= 0x400;

	return AddFriendByName_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NewFriend                      ( CPF_Parm )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message )
{
	static UFunction* pFnAddFriend = NULL;

	if ( ! pFnAddFriend )
		pFnAddFriend = (UFunction*) UObject::GObjObjects()->Data[ 77331 ];

	UOnlineSubsystemSteamworks_execAddFriend_Parms AddFriend_Parms;
	AddFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriend_Parms.NewFriend, &NewFriend, 0x8 );
	memcpy ( &AddFriend_Parms.Message, &Message, 0xC );

	pFnAddFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFriend, &AddFriend_Parms, NULL );

	pFnAddFriend->FunctionFlags |= 0x400;

	return AddFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  bWasCanceled                   ( CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemSteamworks::GetKeyboardInputResults ( unsigned char* bWasCanceled )
{
	static UFunction* pFnGetKeyboardInputResults = NULL;

	if ( ! pFnGetKeyboardInputResults )
		pFnGetKeyboardInputResults = (UFunction*) UObject::GObjObjects()->Data[ 77326 ];

	UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Parms GetKeyboardInputResults_Parms;

	this->ProcessEvent ( pFnGetKeyboardInputResults, &GetKeyboardInputResults_Parms, NULL );

	if ( bWasCanceled )
		*bWasCanceled = GetKeyboardInputResults_Parms.bWasCanceled;

	return GetKeyboardInputResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnClearKeyboardInputDoneDelegate = NULL;

	if ( ! pFnClearKeyboardInputDoneDelegate )
		pFnClearKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77323 ];

	UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Parms ClearKeyboardInputDoneDelegate_Parms;
	memcpy ( &ClearKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0xC );

	this->ProcessEvent ( pFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnAddKeyboardInputDoneDelegate = NULL;

	if ( ! pFnAddKeyboardInputDoneDelegate )
		pFnAddKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77320 ];

	UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Parms AddKeyboardInputDoneDelegate_Parms;
	memcpy ( &AddKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0xC );

	this->ProcessEvent ( pFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnKeyboardInputComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnKeyboardInputComplete = NULL;

	if ( ! pFnOnKeyboardInputComplete )
		pFnOnKeyboardInputComplete = (UFunction*) UObject::GObjObjects()->Data[ 77318 ];

	UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Parms OnKeyboardInputComplete_Parms;
	OnKeyboardInputComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 TitleText                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DescriptionText                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsPassword                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldValidate                ( CPF_OptionalParm | CPF_Parm )
// struct FString                 DefaultText                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            MaxResultLength                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowSpaces                   ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength, unsigned long bAllowSpaces )
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if ( ! pFnShowKeyboardUI )
		pFnShowKeyboardUI = (UFunction*) UObject::GObjObjects()->Data[ 77308 ];

	UOnlineSubsystemSteamworks_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowKeyboardUI_Parms.TitleText, &TitleText, 0xC );
	memcpy ( &ShowKeyboardUI_Parms.DescriptionText, &DescriptionText, 0xC );
	ShowKeyboardUI_Parms.bIsPassword = bIsPassword;
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	memcpy ( &ShowKeyboardUI_Parms.DefaultText, &DefaultText, 0xC );
	ShowKeyboardUI_Parms.MaxResultLength = MaxResultLength;
	ShowKeyboardUI_Parms.bAllowSpaces = bAllowSpaces;

	pFnShowKeyboardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL );

	pFnShowKeyboardUI->FunctionFlags |= 0x400;

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            StatusId                       ( CPF_Parm )
// TArray< struct FLocalizedStringSetting > LocalizedStringSettings        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FSettingsProperty > Properties                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::SetOnlineStatus ( unsigned char LocalUserNum, int StatusId, TArray< struct FLocalizedStringSetting >* LocalizedStringSettings, TArray< struct FSettingsProperty >* Properties )
{
	static UFunction* pFnSetOnlineStatus = NULL;

	if ( ! pFnSetOnlineStatus )
		pFnSetOnlineStatus = (UFunction*) UObject::GObjObjects()->Data[ 77301 ];

	UOnlineSubsystemSteamworks_execSetOnlineStatus_Parms SetOnlineStatus_Parms;
	SetOnlineStatus_Parms.LocalUserNum = LocalUserNum;
	SetOnlineStatus_Parms.StatusId = StatusId;

	pFnSetOnlineStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOnlineStatus, &SetOnlineStatus_Parms, NULL );

	pFnSetOnlineStatus->FunctionFlags |= 0x400;

	if ( LocalizedStringSettings )
		memcpy ( LocalizedStringSettings, &SetOnlineStatus_Parms.LocalizedStringSettings, 0xC );

	if ( Properties )
		memcpy ( Properties, &SetOnlineStatus_Parms.Properties, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FString >       Accounts                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetLocalAccountNames ( TArray< struct FString >* Accounts )
{
	static UFunction* pFnGetLocalAccountNames = NULL;

	if ( ! pFnGetLocalAccountNames )
		pFnGetLocalAccountNames = (UFunction*) UObject::GObjObjects()->Data[ 77297 ];

	UOnlineSubsystemSteamworks_execGetLocalAccountNames_Parms GetLocalAccountNames_Parms;

	this->ProcessEvent ( pFnGetLocalAccountNames, &GetLocalAccountNames_Parms, NULL );

	if ( Accounts )
		memcpy ( Accounts, &GetLocalAccountNames_Parms.Accounts, 0xC );

	return GetLocalAccountNames_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::DeleteLocalAccount ( struct FString UserName, struct FString Password )
{
	static UFunction* pFnDeleteLocalAccount = NULL;

	if ( ! pFnDeleteLocalAccount )
		pFnDeleteLocalAccount = (UFunction*) UObject::GObjObjects()->Data[ 77293 ];

	UOnlineSubsystemSteamworks_execDeleteLocalAccount_Parms DeleteLocalAccount_Parms;
	memcpy ( &DeleteLocalAccount_Parms.UserName, &UserName, 0xC );
	memcpy ( &DeleteLocalAccount_Parms.Password, &Password, 0xC );

	this->ProcessEvent ( pFnDeleteLocalAccount, &DeleteLocalAccount_Parms, NULL );

	return DeleteLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 NewUserName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 OldUserName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::RenameLocalAccount ( struct FString NewUserName, struct FString OldUserName, struct FString Password )
{
	static UFunction* pFnRenameLocalAccount = NULL;

	if ( ! pFnRenameLocalAccount )
		pFnRenameLocalAccount = (UFunction*) UObject::GObjObjects()->Data[ 77288 ];

	UOnlineSubsystemSteamworks_execRenameLocalAccount_Parms RenameLocalAccount_Parms;
	memcpy ( &RenameLocalAccount_Parms.NewUserName, &NewUserName, 0xC );
	memcpy ( &RenameLocalAccount_Parms.OldUserName, &OldUserName, 0xC );
	memcpy ( &RenameLocalAccount_Parms.Password, &Password, 0xC );

	this->ProcessEvent ( pFnRenameLocalAccount, &RenameLocalAccount_Parms, NULL );

	return RenameLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::CreateLocalAccount ( struct FString UserName, struct FString Password )
{
	static UFunction* pFnCreateLocalAccount = NULL;

	if ( ! pFnCreateLocalAccount )
		pFnCreateLocalAccount = (UFunction*) UObject::GObjObjects()->Data[ 77284 ];

	UOnlineSubsystemSteamworks_execCreateLocalAccount_Parms CreateLocalAccount_Parms;
	memcpy ( &CreateLocalAccount_Parms.UserName, &UserName, 0xC );
	memcpy ( &CreateLocalAccount_Parms.Password, &Password, 0xC );

	this->ProcessEvent ( pFnCreateLocalAccount, &CreateLocalAccount_Parms, NULL );

	return CreateLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         AccountCreateDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearCreateOnlineAccountCompletedDelegate ( struct FScriptDelegate AccountCreateDelegate )
{
	static UFunction* pFnClearCreateOnlineAccountCompletedDelegate = NULL;

	if ( ! pFnClearCreateOnlineAccountCompletedDelegate )
		pFnClearCreateOnlineAccountCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77281 ];

	UOnlineSubsystemSteamworks_execClearCreateOnlineAccountCompletedDelegate_Parms ClearCreateOnlineAccountCompletedDelegate_Parms;
	memcpy ( &ClearCreateOnlineAccountCompletedDelegate_Parms.AccountCreateDelegate, &AccountCreateDelegate, 0xC );

	this->ProcessEvent ( pFnClearCreateOnlineAccountCompletedDelegate, &ClearCreateOnlineAccountCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         AccountCreateDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddCreateOnlineAccountCompletedDelegate ( struct FScriptDelegate AccountCreateDelegate )
{
	static UFunction* pFnAddCreateOnlineAccountCompletedDelegate = NULL;

	if ( ! pFnAddCreateOnlineAccountCompletedDelegate )
		pFnAddCreateOnlineAccountCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77278 ];

	UOnlineSubsystemSteamworks_execAddCreateOnlineAccountCompletedDelegate_Parms AddCreateOnlineAccountCompletedDelegate_Parms;
	memcpy ( &AddCreateOnlineAccountCompletedDelegate_Parms.AccountCreateDelegate, &AccountCreateDelegate, 0xC );

	this->ProcessEvent ( pFnAddCreateOnlineAccountCompletedDelegate, &AddCreateOnlineAccountCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted
// [0x00120000] 
// Parameters infos:
// unsigned char                  ErrorStatus                    ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnCreateOnlineAccountCompleted ( unsigned char ErrorStatus )
{
	static UFunction* pFnOnCreateOnlineAccountCompleted = NULL;

	if ( ! pFnOnCreateOnlineAccountCompleted )
		pFnOnCreateOnlineAccountCompleted = (UFunction*) UObject::GObjObjects()->Data[ 77276 ];

	UOnlineSubsystemSteamworks_execOnCreateOnlineAccountCompleted_Parms OnCreateOnlineAccountCompleted_Parms;
	OnCreateOnlineAccountCompleted_Parms.ErrorStatus = ErrorStatus;

	this->ProcessEvent ( pFnOnCreateOnlineAccountCompleted, &OnCreateOnlineAccountCompleted_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 EmailAddress                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ProductKey                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::CreateOnlineAccount ( struct FString UserName, struct FString Password, struct FString EmailAddress, struct FString ProductKey )
{
	static UFunction* pFnCreateOnlineAccount = NULL;

	if ( ! pFnCreateOnlineAccount )
		pFnCreateOnlineAccount = (UFunction*) UObject::GObjObjects()->Data[ 77270 ];

	UOnlineSubsystemSteamworks_execCreateOnlineAccount_Parms CreateOnlineAccount_Parms;
	memcpy ( &CreateOnlineAccount_Parms.UserName, &UserName, 0xC );
	memcpy ( &CreateOnlineAccount_Parms.Password, &Password, 0xC );
	memcpy ( &CreateOnlineAccount_Parms.EmailAddress, &EmailAddress, 0xC );
	memcpy ( &CreateOnlineAccount_Parms.ProductKey, &ProductKey, 0xC );

	pFnCreateOnlineAccount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateOnlineAccount, &CreateOnlineAccount_Parms, NULL );

	pFnCreateOnlineAccount->FunctionFlags |= 0x400;

	return CreateOnlineAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetTitleFileState ( struct FString Filename )
{
	static UFunction* pFnGetTitleFileState = NULL;

	if ( ! pFnGetTitleFileState )
		pFnGetTitleFileState = (UFunction*) UObject::GObjObjects()->Data[ 77267 ];

	UOnlineSubsystemSteamworks_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy ( &GetTitleFileState_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnGetTitleFileState, &GetTitleFileState_Parms, NULL );

	return GetTitleFileState_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if ( ! pFnGetTitleFileContents )
		pFnGetTitleFileContents = (UFunction*) UObject::GObjObjects()->Data[ 77262 ];

	UOnlineSubsystemSteamworks_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy ( &GetTitleFileContents_Parms.Filename, &Filename, 0xC );

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL );

	pFnGetTitleFileContents->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetTitleFileContents_Parms.FileContents, 0xC );

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnClearReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnClearReadTitleFileCompleteDelegate )
		pFnClearReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77259 ];

	UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Parms ClearReadTitleFileCompleteDelegate_Parms;
	memcpy ( &ClearReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnAddReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnAddReadTitleFileCompleteDelegate )
		pFnAddReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77256 ];

	UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Parms AddReadTitleFileCompleteDelegate_Parms;
	memcpy ( &AddReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileToRead                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadTitleFile ( struct FString FileToRead )
{
	static UFunction* pFnReadTitleFile = NULL;

	if ( ! pFnReadTitleFile )
		pFnReadTitleFile = (UFunction*) UObject::GObjObjects()->Data[ 77253 ];

	UOnlineSubsystemSteamworks_execReadTitleFile_Parms ReadTitleFile_Parms;
	memcpy ( &ReadTitleFile_Parms.FileToRead, &FileToRead, 0xC );

	pFnReadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadTitleFile, &ReadTitleFile_Parms, NULL );

	pFnReadTitleFile->FunctionFlags |= 0x400;

	return ReadTitleFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename )
{
	static UFunction* pFnOnReadTitleFileComplete = NULL;

	if ( ! pFnOnReadTitleFileComplete )
		pFnOnReadTitleFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 77250 ];

	UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadTitleFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate )
{
	static UFunction* pFnClearStorageDeviceChangeDelegate = NULL;

	if ( ! pFnClearStorageDeviceChangeDelegate )
		pFnClearStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77248 ];

	UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Parms ClearStorageDeviceChangeDelegate_Parms;
	memcpy ( &ClearStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0xC );

	this->ProcessEvent ( pFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate )
{
	static UFunction* pFnAddStorageDeviceChangeDelegate = NULL;

	if ( ! pFnAddStorageDeviceChangeDelegate )
		pFnAddStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77246 ];

	UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Parms AddStorageDeviceChangeDelegate_Parms;
	memcpy ( &AddStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0xC );

	this->ProcessEvent ( pFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnStorageDeviceChange ( )
{
	static UFunction* pFnOnStorageDeviceChange = NULL;

	if ( ! pFnOnStorageDeviceChange )
		pFnOnStorageDeviceChange = (UFunction*) UObject::GObjObjects()->Data[ 77245 ];

	UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Parms OnStorageDeviceChange_Parms;

	this->ProcessEvent ( pFnOnStorageDeviceChange, &OnStorageDeviceChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemSteamworks::GetNATType ( )
{
	static UFunction* pFnGetNATType = NULL;

	if ( ! pFnGetNATType )
		pFnGetNATType = (UFunction*) UObject::GObjObjects()->Data[ 77243 ];

	UOnlineSubsystemSteamworks_execGetNATType_Parms GetNATType_Parms;

	pFnGetNATType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNATType, &GetNATType_Parms, NULL );

	pFnGetNATType->FunctionFlags |= 0x400;

	return GetNATType_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate )
{
	static UFunction* pFnClearConnectionStatusChangeDelegate = NULL;

	if ( ! pFnClearConnectionStatusChangeDelegate )
		pFnClearConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77240 ];

	UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Parms ClearConnectionStatusChangeDelegate_Parms;
	memcpy ( &ClearConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0xC );

	this->ProcessEvent ( pFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate )
{
	static UFunction* pFnAddConnectionStatusChangeDelegate = NULL;

	if ( ! pFnAddConnectionStatusChangeDelegate )
		pFnAddConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77237 ];

	UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Parms AddConnectionStatusChangeDelegate_Parms;
	memcpy ( &AddConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0xC );

	this->ProcessEvent ( pFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  ConnectionStatus               ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnConnectionStatusChange ( unsigned char ConnectionStatus )
{
	static UFunction* pFnOnConnectionStatusChange = NULL;

	if ( ! pFnOnConnectionStatusChange )
		pFnOnConnectionStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 77235 ];

	UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Parms OnConnectionStatusChange_Parms;
	OnConnectionStatusChange_Parms.ConnectionStatus = ConnectionStatus;

	this->ProcessEvent ( pFnOnConnectionStatusChange, &OnConnectionStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsControllerConnected ( int ControllerId )
{
	static UFunction* pFnIsControllerConnected = NULL;

	if ( ! pFnIsControllerConnected )
		pFnIsControllerConnected = (UFunction*) UObject::GObjObjects()->Data[ 77232 ];

	UOnlineSubsystemSteamworks_execIsControllerConnected_Parms IsControllerConnected_Parms;
	IsControllerConnected_Parms.ControllerId = ControllerId;

	pFnIsControllerConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsControllerConnected, &IsControllerConnected_Parms, NULL );

	pFnIsControllerConnected->FunctionFlags |= 0x400;

	return IsControllerConnected_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate )
{
	static UFunction* pFnClearControllerChangeDelegate = NULL;

	if ( ! pFnClearControllerChangeDelegate )
		pFnClearControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77229 ];

	UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Parms ClearControllerChangeDelegate_Parms;
	memcpy ( &ClearControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0xC );

	this->ProcessEvent ( pFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate )
{
	static UFunction* pFnAddControllerChangeDelegate = NULL;

	if ( ! pFnAddControllerChangeDelegate )
		pFnAddControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77226 ];

	UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Parms AddControllerChangeDelegate_Parms;
	memcpy ( &AddControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0xC );

	this->ProcessEvent ( pFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120000] 
// Parameters infos:
// int                            ControllerId                   ( CPF_Parm )
// unsigned long                  bIsConnected                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnControllerChange ( int ControllerId, unsigned long bIsConnected )
{
	static UFunction* pFnOnControllerChange = NULL;

	if ( ! pFnOnControllerChange )
		pFnOnControllerChange = (UFunction*) UObject::GObjObjects()->Data[ 77223 ];

	UOnlineSubsystemSteamworks_execOnControllerChange_Parms OnControllerChange_Parms;
	OnControllerChange_Parms.ControllerId = ControllerId;
	OnControllerChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent ( pFnOnControllerChange, &OnControllerChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  NewPos                         ( CPF_Parm )

void UOnlineSubsystemSteamworks::SetNetworkNotificationPosition ( unsigned char NewPos )
{
	static UFunction* pFnSetNetworkNotificationPosition = NULL;

	if ( ! pFnSetNetworkNotificationPosition )
		pFnSetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->Data[ 77221 ];

	UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Parms SetNetworkNotificationPosition_Parms;
	SetNetworkNotificationPosition_Parms.NewPos = NewPos;

	pFnSetNetworkNotificationPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Parms, NULL );

	pFnSetNetworkNotificationPosition->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemSteamworks::GetNetworkNotificationPosition ( )
{
	static UFunction* pFnGetNetworkNotificationPosition = NULL;

	if ( ! pFnGetNetworkNotificationPosition )
		pFnGetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->Data[ 77218 ];

	UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Parms GetNetworkNotificationPosition_Parms;

	this->ProcessEvent ( pFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Parms, NULL );

	return GetNetworkNotificationPosition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate )
{
	static UFunction* pFnClearExternalUIChangeDelegate = NULL;

	if ( ! pFnClearExternalUIChangeDelegate )
		pFnClearExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77216 ];

	UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Parms ClearExternalUIChangeDelegate_Parms;
	memcpy ( &ClearExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0xC );

	this->ProcessEvent ( pFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate )
{
	static UFunction* pFnAddExternalUIChangeDelegate = NULL;

	if ( ! pFnAddExternalUIChangeDelegate )
		pFnAddExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77214 ];

	UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Parms AddExternalUIChangeDelegate_Parms;
	memcpy ( &AddExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0xC );

	this->ProcessEvent ( pFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsOpening                     ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnExternalUIChange ( unsigned long bIsOpening )
{
	static UFunction* pFnOnExternalUIChange = NULL;

	if ( ! pFnOnExternalUIChange )
		pFnOnExternalUIChange = (UFunction*) UObject::GObjObjects()->Data[ 77212 ];

	UOnlineSubsystemSteamworks_execOnExternalUIChange_Parms OnExternalUIChange_Parms;
	OnExternalUIChange_Parms.bIsOpening = bIsOpening;

	this->ProcessEvent ( pFnOnExternalUIChange, &OnExternalUIChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate )
{
	static UFunction* pFnClearLinkStatusChangeDelegate = NULL;

	if ( ! pFnClearLinkStatusChangeDelegate )
		pFnClearLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77209 ];

	UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Parms ClearLinkStatusChangeDelegate_Parms;
	memcpy ( &ClearLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0xC );

	this->ProcessEvent ( pFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate )
{
	static UFunction* pFnAddLinkStatusChangeDelegate = NULL;

	if ( ! pFnAddLinkStatusChangeDelegate )
		pFnAddLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77206 ];

	UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Parms AddLinkStatusChangeDelegate_Parms;
	memcpy ( &AddLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0xC );

	this->ProcessEvent ( pFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsConnected                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLinkStatusChange ( unsigned long bIsConnected )
{
	static UFunction* pFnOnLinkStatusChange = NULL;

	if ( ! pFnOnLinkStatusChange )
		pFnOnLinkStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 77204 ];

	UOnlineSubsystemSteamworks_execOnLinkStatusChange_Parms OnLinkStatusChange_Parms;
	OnLinkStatusChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent ( pFnOnLinkStatusChange, &OnLinkStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::HasLinkConnection ( )
{
	static UFunction* pFnHasLinkConnection = NULL;

	if ( ! pFnHasLinkConnection )
		pFnHasLinkConnection = (UFunction*) UObject::GObjObjects()->Data[ 77202 ];

	UOnlineSubsystemSteamworks_execHasLinkConnection_Parms HasLinkConnection_Parms;

	pFnHasLinkConnection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasLinkConnection, &HasLinkConnection_Parms, NULL );

	pFnHasLinkConnection->FunctionFlags |= 0x400;

	return HasLinkConnection_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerUniqueNetIdFromIndex
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// struct FUniqueNetId            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            UserIndex                      ( CPF_Parm )

struct FUniqueNetId UOnlineSubsystemSteamworks::eventGetPlayerUniqueNetIdFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerUniqueNetIdFromIndex = NULL;

	if ( ! pFnGetPlayerUniqueNetIdFromIndex )
		pFnGetPlayerUniqueNetIdFromIndex = (UFunction*) UObject::GObjObjects()->Data[ 77198 ];

	UOnlineSubsystemSteamworks_eventGetPlayerUniqueNetIdFromIndex_Parms GetPlayerUniqueNetIdFromIndex_Parms;
	GetPlayerUniqueNetIdFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerUniqueNetIdFromIndex, &GetPlayerUniqueNetIdFromIndex_Parms, NULL );

	return GetPlayerUniqueNetIdFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            UserIndex                      ( CPF_Parm )

struct FString UOnlineSubsystemSteamworks::eventGetPlayerNicknameFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerNicknameFromIndex = NULL;

	if ( ! pFnGetPlayerNicknameFromIndex )
		pFnGetPlayerNicknameFromIndex = (UFunction*) UObject::GObjObjects()->Data[ 77195 ];

	UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	GetPlayerNicknameFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL );

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// int                            LeaderboardId                  ( CPF_Parm )
// TArray< struct FOnlinePlayerScore > PlayerScores                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteOnlinePlayerScores ( struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores )
{
	static UFunction* pFnWriteOnlinePlayerScores = NULL;

	if ( ! pFnWriteOnlinePlayerScores )
		pFnWriteOnlinePlayerScores = (UFunction*) UObject::GObjObjects()->Data[ 77189 ];

	UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Parms WriteOnlinePlayerScores_Parms;
	memcpy ( &WriteOnlinePlayerScores_Parms.SessionName, &SessionName, 0x8 );
	WriteOnlinePlayerScores_Parms.LeaderboardId = LeaderboardId;

	pFnWriteOnlinePlayerScores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Parms, NULL );

	pFnWriteOnlinePlayerScores->FunctionFlags |= 0x400;

	if ( PlayerScores )
		memcpy ( PlayerScores, &WriteOnlinePlayerScores_Parms.PlayerScores, 0xC );

	return WriteOnlinePlayerScores_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate )
{
	static UFunction* pFnClearFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearFlushOnlineStatsCompleteDelegate )
		pFnClearFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77186 ];

	UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Parms ClearFlushOnlineStatsCompleteDelegate_Parms;
	memcpy ( &ClearFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, &FlushOnlineStatsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate )
{
	static UFunction* pFnAddFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddFlushOnlineStatsCompleteDelegate )
		pFnAddFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77183 ];

	UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Parms AddFlushOnlineStatsCompleteDelegate_Parms;
	memcpy ( &AddFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, &FlushOnlineStatsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnFlushOnlineStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnFlushOnlineStatsComplete = NULL;

	if ( ! pFnOnFlushOnlineStatsComplete )
		pFnOnFlushOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->Data[ 77180 ];

	UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Parms OnFlushOnlineStatsComplete_Parms;
	memcpy ( &OnFlushOnlineStatsComplete_Parms.SessionName, &SessionName, 0x8 );
	OnFlushOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemSteamworks::FlushOnlineStats ( struct FName SessionName )
{
	static UFunction* pFnFlushOnlineStats = NULL;

	if ( ! pFnFlushOnlineStats )
		pFnFlushOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 77177 ];

	UOnlineSubsystemSteamworks_execFlushOnlineStats_Parms FlushOnlineStats_Parms;
	memcpy ( &FlushOnlineStats_Parms.SessionName, &SessionName, 0x8 );

	pFnFlushOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushOnlineStats, &FlushOnlineStats_Parms, NULL );

	pFnFlushOnlineStats->FunctionFlags |= 0x400;

	return FlushOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            Player                         ( CPF_Parm )
// class UOnlineStatsWrite*       StatsWrite                     ( CPF_Parm )

bool UOnlineSubsystemSteamworks::WriteOnlineStats ( struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite )
{
	static UFunction* pFnWriteOnlineStats = NULL;

	if ( ! pFnWriteOnlineStats )
		pFnWriteOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 77172 ];

	UOnlineSubsystemSteamworks_execWriteOnlineStats_Parms WriteOnlineStats_Parms;
	memcpy ( &WriteOnlineStats_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &WriteOnlineStats_Parms.Player, &Player, 0x8 );
	WriteOnlineStats_Parms.StatsWrite = StatsWrite;

	pFnWriteOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteOnlineStats, &WriteOnlineStats_Parms, NULL );

	pFnWriteOnlineStats->FunctionFlags |= 0x400;

	return WriteOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

void UOnlineSubsystemSteamworks::FreeStats ( class UOnlineStatsRead* StatsRead )
{
	static UFunction* pFnFreeStats = NULL;

	if ( ! pFnFreeStats )
		pFnFreeStats = (UFunction*) UObject::GObjObjects()->Data[ 77170 ];

	UOnlineSubsystemSteamworks_execFreeStats_Parms FreeStats_Parms;
	FreeStats_Parms.StatsRead = StatsRead;

	pFnFreeStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFreeStats, &FreeStats_Parms, NULL );

	pFnFreeStats->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate )
{
	static UFunction* pFnClearReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearReadOnlineStatsCompleteDelegate )
		pFnClearReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77167 ];

	UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Parms ClearReadOnlineStatsCompleteDelegate_Parms;
	memcpy ( &ClearReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, &ReadOnlineStatsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate )
{
	static UFunction* pFnAddReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddReadOnlineStatsCompleteDelegate )
		pFnAddReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77164 ];

	UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Parms AddReadOnlineStatsCompleteDelegate_Parms;
	memcpy ( &AddReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, &ReadOnlineStatsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadOnlineStatsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadOnlineStatsComplete = NULL;

	if ( ! pFnOnReadOnlineStatsComplete )
		pFnOnReadOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->Data[ 77162 ];

	UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Parms OnReadOnlineStatsComplete_Parms;
	OnReadOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// int                            NumRows                        ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRankAroundPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows )
{
	static UFunction* pFnReadOnlineStatsByRankAroundPlayer = NULL;

	if ( ! pFnReadOnlineStatsByRankAroundPlayer )
		pFnReadOnlineStatsByRankAroundPlayer = (UFunction*) UObject::GObjObjects()->Data[ 77157 ];

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Parms ReadOnlineStatsByRankAroundPlayer_Parms;
	ReadOnlineStatsByRankAroundPlayer_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsByRankAroundPlayer_Parms.StatsRead = StatsRead;
	ReadOnlineStatsByRankAroundPlayer_Parms.NumRows = NumRows;

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Parms, NULL );

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRankAroundPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// int                            StartIndex                     ( CPF_OptionalParm | CPF_Parm )
// int                            NumToRead                      ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRank ( class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead )
{
	static UFunction* pFnReadOnlineStatsByRank = NULL;

	if ( ! pFnReadOnlineStatsByRank )
		pFnReadOnlineStatsByRank = (UFunction*) UObject::GObjObjects()->Data[ 77152 ];

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Parms ReadOnlineStatsByRank_Parms;
	ReadOnlineStatsByRank_Parms.StatsRead = StatsRead;
	ReadOnlineStatsByRank_Parms.StartIndex = StartIndex;
	ReadOnlineStatsByRank_Parms.NumToRead = NumToRead;

	pFnReadOnlineStatsByRank->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Parms, NULL );

	pFnReadOnlineStatsByRank->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRank_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatsForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead )
{
	static UFunction* pFnReadOnlineStatsForFriends = NULL;

	if ( ! pFnReadOnlineStatsForFriends )
		pFnReadOnlineStatsForFriends = (UFunction*) UObject::GObjObjects()->Data[ 77148 ];

	UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Parms ReadOnlineStatsForFriends_Parms;
	ReadOnlineStatsForFriends_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsForFriends_Parms.StatsRead = StatsRead;

	pFnReadOnlineStatsForFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Parms, NULL );

	pFnReadOnlineStatsForFriends->FunctionFlags |= 0x400;

	return ReadOnlineStatsForFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadOnlineStats ( class UOnlineStatsRead* StatsRead, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnReadOnlineStats = NULL;

	if ( ! pFnReadOnlineStats )
		pFnReadOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 77143 ];

	UOnlineSubsystemSteamworks_execReadOnlineStats_Parms ReadOnlineStats_Parms;
	ReadOnlineStats_Parms.StatsRead = StatsRead;

	pFnReadOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStats, &ReadOnlineStats_Parms, NULL );

	pFnReadOnlineStats->FunctionFlags |= 0x400;

	if ( Players )
		memcpy ( Players, &ReadOnlineStats_Parms.Players, 0xC );

	return ReadOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class USpeechRecognition*      SpeechRecogObj                 ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SetSpeechRecognitionObject ( unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj )
{
	static UFunction* pFnSetSpeechRecognitionObject = NULL;

	if ( ! pFnSetSpeechRecognitionObject )
		pFnSetSpeechRecognitionObject = (UFunction*) UObject::GObjObjects()->Data[ 77139 ];

	UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Parms SetSpeechRecognitionObject_Parms;
	SetSpeechRecognitionObject_Parms.LocalUserNum = LocalUserNum;
	SetSpeechRecognitionObject_Parms.SpeechRecogObj = SpeechRecogObj;

	pFnSetSpeechRecognitionObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Parms, NULL );

	pFnSetSpeechRecognitionObject->FunctionFlags |= 0x400;

	return SetSpeechRecognitionObject_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            VocabularyId                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SelectVocabulary ( unsigned char LocalUserNum, int VocabularyId )
{
	static UFunction* pFnSelectVocabulary = NULL;

	if ( ! pFnSelectVocabulary )
		pFnSelectVocabulary = (UFunction*) UObject::GObjObjects()->Data[ 77135 ];

	UOnlineSubsystemSteamworks_execSelectVocabulary_Parms SelectVocabulary_Parms;
	SelectVocabulary_Parms.LocalUserNum = LocalUserNum;
	SelectVocabulary_Parms.VocabularyId = VocabularyId;

	pFnSelectVocabulary->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectVocabulary, &SelectVocabulary_Parms, NULL );

	pFnSelectVocabulary->FunctionFlags |= 0x400;

	return SelectVocabulary_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate )
{
	static UFunction* pFnClearRecognitionCompleteDelegate = NULL;

	if ( ! pFnClearRecognitionCompleteDelegate )
		pFnClearRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77131 ];

	UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Parms ClearRecognitionCompleteDelegate_Parms;
	ClearRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0xC );

	this->ProcessEvent ( pFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate )
{
	static UFunction* pFnAddRecognitionCompleteDelegate = NULL;

	if ( ! pFnAddRecognitionCompleteDelegate )
		pFnAddRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77127 ];

	UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Parms AddRecognitionCompleteDelegate_Parms;
	AddRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0xC );

	this->ProcessEvent ( pFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnRecognitionComplete ( )
{
	static UFunction* pFnOnRecognitionComplete = NULL;

	if ( ! pFnOnRecognitionComplete )
		pFnOnRecognitionComplete = (UFunction*) UObject::GObjObjects()->Data[ 77126 ];

	UOnlineSubsystemSteamworks_execOnRecognitionComplete_Parms OnRecognitionComplete_Parms;

	this->ProcessEvent ( pFnOnRecognitionComplete, &OnRecognitionComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FSpeechRecognizedWord > Words                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetRecognitionResults ( unsigned char LocalUserNum, TArray< struct FSpeechRecognizedWord >* Words )
{
	static UFunction* pFnGetRecognitionResults = NULL;

	if ( ! pFnGetRecognitionResults )
		pFnGetRecognitionResults = (UFunction*) UObject::GObjObjects()->Data[ 77121 ];

	UOnlineSubsystemSteamworks_execGetRecognitionResults_Parms GetRecognitionResults_Parms;
	GetRecognitionResults_Parms.LocalUserNum = LocalUserNum;

	pFnGetRecognitionResults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetRecognitionResults, &GetRecognitionResults_Parms, NULL );

	pFnGetRecognitionResults->FunctionFlags |= 0x400;

	if ( Words )
		memcpy ( Words, &GetRecognitionResults_Parms.Words, 0xC );

	return GetRecognitionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::StopSpeechRecognition ( unsigned char LocalUserNum )
{
	static UFunction* pFnStopSpeechRecognition = NULL;

	if ( ! pFnStopSpeechRecognition )
		pFnStopSpeechRecognition = (UFunction*) UObject::GObjObjects()->Data[ 77118 ];

	UOnlineSubsystemSteamworks_execStopSpeechRecognition_Parms StopSpeechRecognition_Parms;
	StopSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStopSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopSpeechRecognition, &StopSpeechRecognition_Parms, NULL );

	pFnStopSpeechRecognition->FunctionFlags |= 0x400;

	return StopSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::StartSpeechRecognition ( unsigned char LocalUserNum )
{
	static UFunction* pFnStartSpeechRecognition = NULL;

	if ( ! pFnStartSpeechRecognition )
		pFnStartSpeechRecognition = (UFunction*) UObject::GObjObjects()->Data[ 77115 ];

	UOnlineSubsystemSteamworks_execStartSpeechRecognition_Parms StartSpeechRecognition_Parms;
	StartSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStartSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartSpeechRecognition, &StartSpeechRecognition_Parms, NULL );

	pFnStartSpeechRecognition->FunctionFlags |= 0x400;

	return StartSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::StopNetworkedVoice ( unsigned char LocalUserNum )
{
	static UFunction* pFnStopNetworkedVoice = NULL;

	if ( ! pFnStopNetworkedVoice )
		pFnStopNetworkedVoice = (UFunction*) UObject::GObjObjects()->Data[ 77113 ];

	UOnlineSubsystemSteamworks_execStopNetworkedVoice_Parms StopNetworkedVoice_Parms;
	StopNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStopNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopNetworkedVoice, &StopNetworkedVoice_Parms, NULL );

	pFnStopNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::StartNetworkedVoice ( unsigned char LocalUserNum )
{
	static UFunction* pFnStartNetworkedVoice = NULL;

	if ( ! pFnStartNetworkedVoice )
		pFnStartNetworkedVoice = (UFunction*) UObject::GObjObjects()->Data[ 77111 ];

	UOnlineSubsystemSteamworks_execStartNetworkedVoice_Parms StartNetworkedVoice_Parms;
	StartNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStartNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartNetworkedVoice, &StartNetworkedVoice_Parms, NULL );

	pFnStartNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegates
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearPlayerTalkingDelegates ( )
{
	static UFunction* pFnClearPlayerTalkingDelegates = NULL;

	if ( ! pFnClearPlayerTalkingDelegates )
		pFnClearPlayerTalkingDelegates = (UFunction*) UObject::GObjObjects()->Data[ 77110 ];

	UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegates_Parms ClearPlayerTalkingDelegates_Parms;

	this->ProcessEvent ( pFnClearPlayerTalkingDelegates, &ClearPlayerTalkingDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerStoppedTalkingDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearPlayerStoppedTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnClearPlayerStoppedTalkingDelegate = NULL;

	if ( ! pFnClearPlayerStoppedTalkingDelegate )
		pFnClearPlayerStoppedTalkingDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77107 ];

	UOnlineSubsystemSteamworks_execClearPlayerStoppedTalkingDelegate_Parms ClearPlayerStoppedTalkingDelegate_Parms;
	memcpy ( &ClearPlayerStoppedTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0xC );

	this->ProcessEvent ( pFnClearPlayerStoppedTalkingDelegate, &ClearPlayerStoppedTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerStartedTalkingDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearPlayerStartedTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnClearPlayerStartedTalkingDelegate = NULL;

	if ( ! pFnClearPlayerStartedTalkingDelegate )
		pFnClearPlayerStartedTalkingDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77104 ];

	UOnlineSubsystemSteamworks_execClearPlayerStartedTalkingDelegate_Parms ClearPlayerStartedTalkingDelegate_Parms;
	memcpy ( &ClearPlayerStartedTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0xC );

	this->ProcessEvent ( pFnClearPlayerStartedTalkingDelegate, &ClearPlayerStartedTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerStoppedTalkingDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddPlayerStoppedTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnAddPlayerStoppedTalkingDelegate = NULL;

	if ( ! pFnAddPlayerStoppedTalkingDelegate )
		pFnAddPlayerStoppedTalkingDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77101 ];

	UOnlineSubsystemSteamworks_execAddPlayerStoppedTalkingDelegate_Parms AddPlayerStoppedTalkingDelegate_Parms;
	memcpy ( &AddPlayerStoppedTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0xC );

	this->ProcessEvent ( pFnAddPlayerStoppedTalkingDelegate, &AddPlayerStoppedTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerStartedTalkingDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddPlayerStartedTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnAddPlayerStartedTalkingDelegate = NULL;

	if ( ! pFnAddPlayerStartedTalkingDelegate )
		pFnAddPlayerStartedTalkingDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77098 ];

	UOnlineSubsystemSteamworks_execAddPlayerStartedTalkingDelegate_Parms AddPlayerStartedTalkingDelegate_Parms;
	memcpy ( &AddPlayerStartedTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0xC );

	this->ProcessEvent ( pFnAddPlayerStartedTalkingDelegate, &AddPlayerStartedTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerStopTalking
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            Player                         ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnPlayerStopTalking ( struct FUniqueNetId Player )
{
	static UFunction* pFnOnPlayerStopTalking = NULL;

	if ( ! pFnOnPlayerStopTalking )
		pFnOnPlayerStopTalking = (UFunction*) UObject::GObjObjects()->Data[ 77096 ];

	UOnlineSubsystemSteamworks_execOnPlayerStopTalking_Parms OnPlayerStopTalking_Parms;
	memcpy ( &OnPlayerStopTalking_Parms.Player, &Player, 0x8 );

	this->ProcessEvent ( pFnOnPlayerStopTalking, &OnPlayerStopTalking_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerBeginTalking
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            Player                         ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnPlayerBeginTalking ( struct FUniqueNetId Player )
{
	static UFunction* pFnOnPlayerBeginTalking = NULL;

	if ( ! pFnOnPlayerBeginTalking )
		pFnOnPlayerBeginTalking = (UFunction*) UObject::GObjObjects()->Data[ 77094 ];

	UOnlineSubsystemSteamworks_execOnPlayerBeginTalking_Parms OnPlayerBeginTalking_Parms;
	memcpy ( &OnPlayerBeginTalking_Parms.Player, &Player, 0x8 );

	this->ProcessEvent ( pFnOnPlayerBeginTalking, &OnPlayerBeginTalking_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnmuteRemoteTalker = NULL;

	if ( ! pFnUnmuteRemoteTalker )
		pFnUnmuteRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 77090 ];

	UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Parms UnmuteRemoteTalker_Parms;
	UnmuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &UnmuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );

	pFnUnmuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Parms, NULL );

	pFnUnmuteRemoteTalker->FunctionFlags |= 0x400;

	return UnmuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnMuteRemoteTalker = NULL;

	if ( ! pFnMuteRemoteTalker )
		pFnMuteRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 77086 ];

	UOnlineSubsystemSteamworks_execMuteRemoteTalker_Parms MuteRemoteTalker_Parms;
	MuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &MuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );

	pFnMuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMuteRemoteTalker, &MuteRemoteTalker_Parms, NULL );

	pFnMuteRemoteTalker->FunctionFlags |= 0x400;

	return MuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// int                            Priority                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SetRemoteTalkerPriority ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority )
{
	static UFunction* pFnSetRemoteTalkerPriority = NULL;

	if ( ! pFnSetRemoteTalkerPriority )
		pFnSetRemoteTalkerPriority = (UFunction*) UObject::GObjObjects()->Data[ 77081 ];

	UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Parms SetRemoteTalkerPriority_Parms;
	SetRemoteTalkerPriority_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SetRemoteTalkerPriority_Parms.PlayerID, &PlayerID, 0x8 );
	SetRemoteTalkerPriority_Parms.Priority = Priority;

	pFnSetRemoteTalkerPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Parms, NULL );

	pFnSetRemoteTalkerPriority->FunctionFlags |= 0x400;

	return SetRemoteTalkerPriority_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsHeadsetPresent ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsHeadsetPresent = NULL;

	if ( ! pFnIsHeadsetPresent )
		pFnIsHeadsetPresent = (UFunction*) UObject::GObjObjects()->Data[ 77078 ];

	UOnlineSubsystemSteamworks_execIsHeadsetPresent_Parms IsHeadsetPresent_Parms;
	IsHeadsetPresent_Parms.LocalUserNum = LocalUserNum;

	pFnIsHeadsetPresent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsHeadsetPresent, &IsHeadsetPresent_Parms, NULL );

	pFnIsHeadsetPresent->FunctionFlags |= 0x400;

	return IsHeadsetPresent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsRemotePlayerTalking ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsRemotePlayerTalking = NULL;

	if ( ! pFnIsRemotePlayerTalking )
		pFnIsRemotePlayerTalking = (UFunction*) UObject::GObjObjects()->Data[ 77075 ];

	UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Parms IsRemotePlayerTalking_Parms;
	memcpy ( &IsRemotePlayerTalking_Parms.PlayerID, &PlayerID, 0x8 );

	pFnIsRemotePlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Parms, NULL );

	pFnIsRemotePlayerTalking->FunctionFlags |= 0x400;

	return IsRemotePlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsLocalPlayerTalking ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalPlayerTalking = NULL;

	if ( ! pFnIsLocalPlayerTalking )
		pFnIsLocalPlayerTalking = (UFunction*) UObject::GObjObjects()->Data[ 77072 ];

	UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Parms IsLocalPlayerTalking_Parms;
	IsLocalPlayerTalking_Parms.LocalUserNum = LocalUserNum;

	pFnIsLocalPlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Parms, NULL );

	pFnIsLocalPlayerTalking->FunctionFlags |= 0x400;

	return IsLocalPlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnregisterRemoteTalker ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterRemoteTalker = NULL;

	if ( ! pFnUnregisterRemoteTalker )
		pFnUnregisterRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 77069 ];

	UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Parms UnregisterRemoteTalker_Parms;
	memcpy ( &UnregisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );

	pFnUnregisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Parms, NULL );

	pFnUnregisterRemoteTalker->FunctionFlags |= 0x400;

	return UnregisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::RegisterRemoteTalker ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnRegisterRemoteTalker = NULL;

	if ( ! pFnRegisterRemoteTalker )
		pFnRegisterRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 77066 ];

	UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Parms RegisterRemoteTalker_Parms;
	memcpy ( &RegisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );

	pFnRegisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterRemoteTalker, &RegisterRemoteTalker_Parms, NULL );

	pFnRegisterRemoteTalker->FunctionFlags |= 0x400;

	return RegisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnregisterLocalTalker ( unsigned char LocalUserNum )
{
	static UFunction* pFnUnregisterLocalTalker = NULL;

	if ( ! pFnUnregisterLocalTalker )
		pFnUnregisterLocalTalker = (UFunction*) UObject::GObjObjects()->Data[ 77063 ];

	UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Parms UnregisterLocalTalker_Parms;
	UnregisterLocalTalker_Parms.LocalUserNum = LocalUserNum;

	pFnUnregisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterLocalTalker, &UnregisterLocalTalker_Parms, NULL );

	pFnUnregisterLocalTalker->FunctionFlags |= 0x400;

	return UnregisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::RegisterLocalTalker ( unsigned char LocalUserNum )
{
	static UFunction* pFnRegisterLocalTalker = NULL;

	if ( ! pFnRegisterLocalTalker )
		pFnRegisterLocalTalker = (UFunction*) UObject::GObjObjects()->Data[ 77060 ];

	UOnlineSubsystemSteamworks_execRegisterLocalTalker_Parms RegisterLocalTalker_Parms;
	RegisterLocalTalker_Parms.LocalUserNum = LocalUserNum;

	pFnRegisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterLocalTalker, &RegisterLocalTalker_Parms, NULL );

	pFnRegisterLocalTalker->FunctionFlags |= 0x400;

	return RegisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FOnlineFriend > Friends                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends )
{
	static UFunction* pFnGetFriendsList = NULL;

	if ( ! pFnGetFriendsList )
		pFnGetFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 77053 ];

	UOnlineSubsystemSteamworks_execGetFriendsList_Parms GetFriendsList_Parms;
	GetFriendsList_Parms.LocalUserNum = LocalUserNum;
	GetFriendsList_Parms.Count = Count;
	GetFriendsList_Parms.StartingAt = StartingAt;

	pFnGetFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFriendsList, &GetFriendsList_Parms, NULL );

	pFnGetFriendsList->FunctionFlags |= 0x400;

	if ( Friends )
		memcpy ( Friends, &GetFriendsList_Parms.Friends, 0xC );

	return GetFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate )
{
	static UFunction* pFnClearReadFriendsCompleteDelegate = NULL;

	if ( ! pFnClearReadFriendsCompleteDelegate )
		pFnClearReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77049 ];

	UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Parms ClearReadFriendsCompleteDelegate_Parms;
	ClearReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate )
{
	static UFunction* pFnAddReadFriendsCompleteDelegate = NULL;

	if ( ! pFnAddReadFriendsCompleteDelegate )
		pFnAddReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77045 ];

	UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Parms AddReadFriendsCompleteDelegate_Parms;
	AddReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadFriendsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadFriendsComplete = NULL;

	if ( ! pFnOnReadFriendsComplete )
		pFnOnReadFriendsComplete = (UFunction*) UObject::GObjObjects()->Data[ 77043 ];

	UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Parms OnReadFriendsComplete_Parms;
	OnReadFriendsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadFriendsComplete, &OnReadFriendsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt )
{
	static UFunction* pFnReadFriendsList = NULL;

	if ( ! pFnReadFriendsList )
		pFnReadFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 77038 ];

	UOnlineSubsystemSteamworks_execReadFriendsList_Parms ReadFriendsList_Parms;
	ReadFriendsList_Parms.LocalUserNum = LocalUserNum;
	ReadFriendsList_Parms.Count = Count;
	ReadFriendsList_Parms.StartingAt = StartingAt;

	pFnReadFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadFriendsList, &ReadFriendsList_Parms, NULL );

	pFnReadFriendsList->FunctionFlags |= 0x400;

	return ReadFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearWritePlayerStorageCompleteDelegate )
		pFnClearWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77034 ];

	UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Parms ClearWritePlayerStorageCompleteDelegate_Parms;
	ClearWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddWritePlayerStorageCompleteDelegate )
		pFnAddWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77030 ];

	UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Parms AddWritePlayerStorageCompleteDelegate_Parms;
	AddWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWritePlayerStorageComplete = NULL;

	if ( ! pFnOnWritePlayerStorageComplete )
		pFnOnWritePlayerStorageComplete = (UFunction*) UObject::GObjObjects()->Data[ 77027 ];

	UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Parms OnWritePlayerStorageComplete_Parms;
	OnWritePlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnWritePlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage )
{
	static UFunction* pFnWritePlayerStorage = NULL;

	if ( ! pFnWritePlayerStorage )
		pFnWritePlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 77023 ];

	UOnlineSubsystemSteamworks_execWritePlayerStorage_Parms WritePlayerStorage_Parms;
	WritePlayerStorage_Parms.LocalUserNum = LocalUserNum;
	WritePlayerStorage_Parms.PlayerStorage = PlayerStorage;

	pFnWritePlayerStorage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWritePlayerStorage, &WritePlayerStorage_Parms, NULL );

	pFnWritePlayerStorage->FunctionFlags |= 0x400;

	return WritePlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020002] 
// Parameters infos:
// class UOnlinePlayerStorage*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlinePlayerStorage* UOnlineSubsystemSteamworks::GetPlayerStorage ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerStorage = NULL;

	if ( ! pFnGetPlayerStorage )
		pFnGetPlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 77019 ];

	UOnlineSubsystemSteamworks_execGetPlayerStorage_Parms GetPlayerStorage_Parms;
	GetPlayerStorage_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerStorage, &GetPlayerStorage_Parms, NULL );

	return GetPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageForNetIdCompleteDelegate )
		pFnClearReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77015 ];

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms ClearReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x8 );
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageForNetIdCompleteDelegate )
		pFnAddReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77011 ];

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms AddReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x8 );
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageForNetIdComplete = NULL;

	if ( ! pFnOnReadPlayerStorageForNetIdComplete )
		pFnOnReadPlayerStorageForNetIdComplete = (UFunction*) UObject::GObjObjects()->Data[ 77008 ];

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Parms OnReadPlayerStorageForNetIdComplete_Parms;
	memcpy ( &OnReadPlayerStorageForNetIdComplete_Parms.NetId, &NetId, 0x8 );
	OnReadPlayerStorageForNetIdComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadPlayerStorageForNetId ( struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage )
{
	static UFunction* pFnReadPlayerStorageForNetId = NULL;

	if ( ! pFnReadPlayerStorageForNetId )
		pFnReadPlayerStorageForNetId = (UFunction*) UObject::GObjObjects()->Data[ 77004 ];

	UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Parms ReadPlayerStorageForNetId_Parms;
	memcpy ( &ReadPlayerStorageForNetId_Parms.NetId, &NetId, 0x8 );
	ReadPlayerStorageForNetId_Parms.PlayerStorage = PlayerStorage;

	pFnReadPlayerStorageForNetId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Parms, NULL );

	pFnReadPlayerStorageForNetId->FunctionFlags |= 0x400;

	return ReadPlayerStorageForNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageCompleteDelegate )
		pFnClearReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 77000 ];

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Parms ClearReadPlayerStorageCompleteDelegate_Parms;
	ClearReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageCompleteDelegate )
		pFnAddReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76996 ];

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Parms AddReadPlayerStorageCompleteDelegate_Parms;
	AddReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageComplete = NULL;

	if ( ! pFnOnReadPlayerStorageComplete )
		pFnOnReadPlayerStorageComplete = (UFunction*) UObject::GObjObjects()->Data[ 76993 ];

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Parms OnReadPlayerStorageComplete_Parms;
	OnReadPlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadPlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage )
{
	static UFunction* pFnReadPlayerStorage = NULL;

	if ( ! pFnReadPlayerStorage )
		pFnReadPlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 76989 ];

	UOnlineSubsystemSteamworks_execReadPlayerStorage_Parms ReadPlayerStorage_Parms;
	ReadPlayerStorage_Parms.LocalUserNum = LocalUserNum;
	ReadPlayerStorage_Parms.PlayerStorage = PlayerStorage;

	pFnReadPlayerStorage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadPlayerStorage, &ReadPlayerStorage_Parms, NULL );

	pFnReadPlayerStorage->FunctionFlags |= 0x400;

	return ReadPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearWriteProfileSettingsCompleteDelegate )
		pFnClearWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76985 ];

	UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Parms ClearWriteProfileSettingsCompleteDelegate_Parms;
	ClearWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddWriteProfileSettingsCompleteDelegate )
		pFnAddWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76981 ];

	UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Parms AddWriteProfileSettingsCompleteDelegate_Parms;
	AddWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWriteProfileSettingsComplete = NULL;

	if ( ! pFnOnWriteProfileSettingsComplete )
		pFnOnWriteProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 76978 ];

	UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Parms OnWriteProfileSettingsComplete_Parms;
	OnWriteProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnWriteProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemSteamworks::WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnWriteProfileSettings = NULL;

	if ( ! pFnWriteProfileSettings )
		pFnWriteProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 76974 ];

	UOnlineSubsystemSteamworks_execWriteProfileSettings_Parms WriteProfileSettings_Parms;
	WriteProfileSettings_Parms.LocalUserNum = LocalUserNum;
	WriteProfileSettings_Parms.ProfileSettings = ProfileSettings;

	pFnWriteProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteProfileSettings, &WriteProfileSettings_Parms, NULL );

	pFnWriteProfileSettings->FunctionFlags |= 0x400;

	return WriteProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020002] 
// Parameters infos:
// class UOnlineProfileSettings*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetProfileSettings ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetProfileSettings = NULL;

	if ( ! pFnGetProfileSettings )
		pFnGetProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 76970 ];

	UOnlineSubsystemSteamworks_execGetProfileSettings_Parms GetProfileSettings_Parms;
	GetProfileSettings_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetProfileSettings, &GetProfileSettings_Parms, NULL );

	return GetProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearReadProfileSettingsCompleteDelegate )
		pFnClearReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76966 ];

	UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Parms ClearReadProfileSettingsCompleteDelegate_Parms;
	ClearReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddReadProfileSettingsCompleteDelegate )
		pFnAddReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76960 ];

	UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Parms AddReadProfileSettingsCompleteDelegate_Parms;
	AddReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadProfileSettingsComplete = NULL;

	if ( ! pFnOnReadProfileSettingsComplete )
		pFnOnReadProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 76957 ];

	UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Parms OnReadProfileSettingsComplete_Parms;
	OnReadProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnReadProfileSettings = NULL;

	if ( ! pFnReadProfileSettings )
		pFnReadProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 76953 ];

	UOnlineSubsystemSteamworks_execReadProfileSettings_Parms ReadProfileSettings_Parms;
	ReadProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ReadProfileSettings_Parms.ProfileSettings = ProfileSettings;

	pFnReadProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadProfileSettings, &ReadProfileSettings_Parms, NULL );

	pFnReadProfileSettings->FunctionFlags |= 0x400;

	return ReadProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate )
{
	static UFunction* pFnClearFriendsChangeDelegate = NULL;

	if ( ! pFnClearFriendsChangeDelegate )
		pFnClearFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76949 ];

	UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Parms ClearFriendsChangeDelegate_Parms;
	ClearFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate )
{
	static UFunction* pFnAddFriendsChangeDelegate = NULL;

	if ( ! pFnAddFriendsChangeDelegate )
		pFnAddFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76945 ];

	UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Parms AddFriendsChangeDelegate_Parms;
	AddFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnClearMutingChangeDelegate = NULL;

	if ( ! pFnClearMutingChangeDelegate )
		pFnClearMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76942 ];

	UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Parms ClearMutingChangeDelegate_Parms;
	memcpy ( &ClearMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0xC );

	this->ProcessEvent ( pFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnAddMutingChangeDelegate = NULL;

	if ( ! pFnAddMutingChangeDelegate )
		pFnAddMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76939 ];

	UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Parms AddMutingChangeDelegate_Parms;
	memcpy ( &AddMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0xC );

	this->ProcessEvent ( pFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnClearLoginCancelledDelegate = NULL;

	if ( ! pFnClearLoginCancelledDelegate )
		pFnClearLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76937 ];

	UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Parms ClearLoginCancelledDelegate_Parms;
	memcpy ( &ClearLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnAddLoginCancelledDelegate = NULL;

	if ( ! pFnAddLoginCancelledDelegate )
		pFnAddLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76935 ];

	UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Parms AddLoginCancelledDelegate_Parms;
	memcpy ( &AddLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnClearLoginStatusChangeDelegate = NULL;

	if ( ! pFnClearLoginStatusChangeDelegate )
		pFnClearLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76932 ];

	UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Parms ClearLoginStatusChangeDelegate_Parms;
	memcpy ( &ClearLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0xC );
	ClearLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnAddLoginStatusChangeDelegate = NULL;

	if ( ! pFnAddLoginStatusChangeDelegate )
		pFnAddLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76929 ];

	UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Parms AddLoginStatusChangeDelegate_Parms;
	memcpy ( &AddLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0xC );
	AddLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  NewStatus                      ( CPF_Parm )
// struct FUniqueNetId            NewId                          ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId )
{
	static UFunction* pFnOnLoginStatusChange = NULL;

	if ( ! pFnOnLoginStatusChange )
		pFnOnLoginStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 76926 ];

	UOnlineSubsystemSteamworks_execOnLoginStatusChange_Parms OnLoginStatusChange_Parms;
	OnLoginStatusChange_Parms.NewStatus = NewStatus;
	memcpy ( &OnLoginStatusChange_Parms.NewId, &NewId, 0x8 );

	this->ProcessEvent ( pFnOnLoginStatusChange, &OnLoginStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnClearLoginChangeDelegate = NULL;

	if ( ! pFnClearLoginChangeDelegate )
		pFnClearLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76923 ];

	UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Parms ClearLoginChangeDelegate_Parms;
	memcpy ( &ClearLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnAddLoginChangeDelegate = NULL;

	if ( ! pFnAddLoginChangeDelegate )
		pFnAddLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76920 ];

	UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Parms AddLoginChangeDelegate_Parms;
	memcpy ( &AddLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsMuted = NULL;

	if ( ! pFnIsMuted )
		pFnIsMuted = (UFunction*) UObject::GObjObjects()->Data[ 76916 ];

	UOnlineSubsystemSteamworks_execIsMuted_Parms IsMuted_Parms;
	IsMuted_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsMuted_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnIsMuted, &IsMuted_Parms, NULL );

	return IsMuted_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FFriendsQuery > Query                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AreAnyFriends ( unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query )
{
	static UFunction* pFnAreAnyFriends = NULL;

	if ( ! pFnAreAnyFriends )
		pFnAreAnyFriends = (UFunction*) UObject::GObjObjects()->Data[ 76911 ];

	UOnlineSubsystemSteamworks_execAreAnyFriends_Parms AreAnyFriends_Parms;
	AreAnyFriends_Parms.LocalUserNum = LocalUserNum;

	pFnAreAnyFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAreAnyFriends, &AreAnyFriends_Parms, NULL );

	pFnAreAnyFriends->FunctionFlags |= 0x400;

	if ( Query )
		memcpy ( Query, &AreAnyFriends_Parms.Query, 0xC );

	return AreAnyFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsFriend = NULL;

	if ( ! pFnIsFriend )
		pFnIsFriend = (UFunction*) UObject::GObjObjects()->Data[ 76907 ];

	UOnlineSubsystemSteamworks_execIsFriend_Parms IsFriend_Parms;
	IsFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsFriend_Parms.PlayerID, &PlayerID, 0x8 );

	pFnIsFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsFriend, &IsFriend_Parms, NULL );

	pFnIsFriend->FunctionFlags |= 0x400;

	return IsFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanShowPresenceInformation ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->Data[ 76904 ];

	UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanViewPlayerProfiles ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->Data[ 76901 ];

	UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanPurchaseContent ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->Data[ 76898 ];

	UOnlineSubsystemSteamworks_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanDownloadUserContent ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanDownloadUserContent = NULL;

	if ( ! pFnCanDownloadUserContent )
		pFnCanDownloadUserContent = (UFunction*) UObject::GObjObjects()->Data[ 76895 ];

	UOnlineSubsystemSteamworks_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;
	CanDownloadUserContent_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, NULL );

	return CanDownloadUserContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanCommunicate ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanCommunicate = NULL;

	if ( ! pFnCanCommunicate )
		pFnCanCommunicate = (UFunction*) UObject::GObjObjects()->Data[ 76892 ];

	UOnlineSubsystemSteamworks_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.LocalUserNum = LocalUserNum;

	pFnCanCommunicate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicate, &CanCommunicate_Parms, NULL );

	pFnCanCommunicate->FunctionFlags |= 0x400;

	return CanCommunicate_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanPlayOnline ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->Data[ 76889 ];

	UOnlineSubsystemSteamworks_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.LocalUserNum = LocalUserNum;

	pFnCanPlayOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );

	pFnCanPlayOnline->FunctionFlags |= 0x400;

	return CanPlayOnline_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

struct FString UOnlineSubsystemSteamworks::GetPlayerNickname ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerNickname = NULL;

	if ( ! pFnGetPlayerNickname )
		pFnGetPlayerNickname = (UFunction*) UObject::GObjObjects()->Data[ 76885 ];

	UOnlineSubsystemSteamworks_execGetPlayerNickname_Parms GetPlayerNickname_Parms;
	GetPlayerNickname_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerNickname, &GetPlayerNickname_Parms, NULL );

	return GetPlayerNickname_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID )
{
	static UFunction* pFnGetUniquePlayerId = NULL;

	if ( ! pFnGetUniquePlayerId )
		pFnGetUniquePlayerId = (UFunction*) UObject::GObjObjects()->Data[ 76880 ];

	UOnlineSubsystemSteamworks_execGetUniquePlayerId_Parms GetUniquePlayerId_Parms;
	GetUniquePlayerId_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetUniquePlayerId, &GetUniquePlayerId_Parms, NULL );

	if ( PlayerID )
		memcpy ( PlayerID, &GetUniquePlayerId_Parms.PlayerID, 0x8 );

	return GetUniquePlayerId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsLocalLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalLogin = NULL;

	if ( ! pFnIsLocalLogin )
		pFnIsLocalLogin = (UFunction*) UObject::GObjObjects()->Data[ 76877 ];

	UOnlineSubsystemSteamworks_execIsLocalLogin_Parms IsLocalLogin_Parms;
	IsLocalLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsLocalLogin, &IsLocalLogin_Parms, NULL );

	return IsLocalLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsGuestLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsGuestLogin = NULL;

	if ( ! pFnIsGuestLogin )
		pFnIsGuestLogin = (UFunction*) UObject::GObjObjects()->Data[ 76874 ];

	UOnlineSubsystemSteamworks_execIsGuestLogin_Parms IsGuestLogin_Parms;
	IsGuestLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsGuestLogin, &IsGuestLogin_Parms, NULL );

	return IsGuestLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::GetLoginStatus ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->Data[ 76871 ];

	UOnlineSubsystemSteamworks_execGetLoginStatus_Parms GetLoginStatus_Parms;
	GetLoginStatus_Parms.LocalUserNum = LocalUserNum;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );

	pFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate )
{
	static UFunction* pFnClearLogoutCompletedDelegate = NULL;

	if ( ! pFnClearLogoutCompletedDelegate )
		pFnClearLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76867 ];

	UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Parms ClearLogoutCompletedDelegate_Parms;
	ClearLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0xC );

	this->ProcessEvent ( pFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate )
{
	static UFunction* pFnAddLogoutCompletedDelegate = NULL;

	if ( ! pFnAddLogoutCompletedDelegate )
		pFnAddLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76863 ];

	UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Parms AddLogoutCompletedDelegate_Parms;
	AddLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0xC );

	this->ProcessEvent ( pFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLogoutCompleted ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnLogoutCompleted = NULL;

	if ( ! pFnOnLogoutCompleted )
		pFnOnLogoutCompleted = (UFunction*) UObject::GObjObjects()->Data[ 76861 ];

	UOnlineSubsystemSteamworks_execOnLogoutCompleted_Parms OnLogoutCompleted_Parms;
	OnLogoutCompleted_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnLogoutCompleted, &OnLogoutCompleted_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::Logout ( unsigned char LocalUserNum )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = (UFunction*) UObject::GObjObjects()->Data[ 76858 ];

	UOnlineSubsystemSteamworks_execLogout_Parms Logout_Parms;
	Logout_Parms.LocalUserNum = LocalUserNum;

	pFnLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );

	pFnLogout->FunctionFlags |= 0x400;

	return Logout_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginFailedDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate )
{
	static UFunction* pFnClearLoginFailedDelegate = NULL;

	if ( ! pFnClearLoginFailedDelegate )
		pFnClearLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76854 ];

	UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Parms ClearLoginFailedDelegate_Parms;
	ClearLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLoginFailedDelegate_Parms.LoginFailedDelegate, &LoginFailedDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginFailedDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate )
{
	static UFunction* pFnAddLoginFailedDelegate = NULL;

	if ( ! pFnAddLoginFailedDelegate )
		pFnAddLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 76850 ];

	UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Parms AddLoginFailedDelegate_Parms;
	AddLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLoginFailedDelegate_Parms.LoginFailedDelegate, &LoginFailedDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ErrorCode                      ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode )
{
	static UFunction* pFnOnLoginFailed = NULL;

	if ( ! pFnOnLoginFailed )
		pFnOnLoginFailed = (UFunction*) UObject::GObjObjects()->Data[ 76847 ];

	UOnlineSubsystemSteamworks_execOnLoginFailed_Parms OnLoginFailed_Parms;
	OnLoginFailed_Parms.LocalUserNum = LocalUserNum;
	OnLoginFailed_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnLoginFailed, &OnLoginFailed_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::AutoLogin ( )
{
	static UFunction* pFnAutoLogin = NULL;

	if ( ! pFnAutoLogin )
		pFnAutoLogin = (UFunction*) UObject::GObjObjects()->Data[ 76845 ];

	UOnlineSubsystemSteamworks_execAutoLogin_Parms AutoLogin_Parms;

	pFnAutoLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAutoLogin, &AutoLogin_Parms, NULL );

	pFnAutoLogin->FunctionFlags |= 0x400;

	return AutoLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 LoginName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWantsLocalOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = (UFunction*) UObject::GObjObjects()->Data[ 76839 ];

	UOnlineSubsystemSteamworks_execLogin_Parms Login_Parms;
	Login_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &Login_Parms.LoginName, &LoginName, 0xC );
	memcpy ( &Login_Parms.Password, &Password, 0xC );
	Login_Parms.bWantsLocalOnly = bWantsLocalOnly;

	pFnLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );

	pFnLogin->FunctionFlags |= 0x400;

	return Login_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bShowOnlineOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowLoginUI ( unsigned long bShowOnlineOnly )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->Data[ 76836 ];

	UOnlineSubsystemSteamworks_execShowLoginUI_Parms ShowLoginUI_Parms;
	ShowLoginUI_Parms.bShowOnlineOnly = bShowOnlineOnly;

	pFnShowLoginUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );

	pFnShowLoginUI->FunctionFlags |= 0x400;

	return ShowLoginUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnFriendsChange ( )
{
	static UFunction* pFnOnFriendsChange = NULL;

	if ( ! pFnOnFriendsChange )
		pFnOnFriendsChange = (UFunction*) UObject::GObjObjects()->Data[ 76835 ];

	UOnlineSubsystemSteamworks_execOnFriendsChange_Parms OnFriendsChange_Parms;

	this->ProcessEvent ( pFnOnFriendsChange, &OnFriendsChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnMutingChange ( )
{
	static UFunction* pFnOnMutingChange = NULL;

	if ( ! pFnOnMutingChange )
		pFnOnMutingChange = (UFunction*) UObject::GObjObjects()->Data[ 76834 ];

	UOnlineSubsystemSteamworks_execOnMutingChange_Parms OnMutingChange_Parms;

	this->ProcessEvent ( pFnOnMutingChange, &OnMutingChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnLoginCancelled ( )
{
	static UFunction* pFnOnLoginCancelled = NULL;

	if ( ! pFnOnLoginCancelled )
		pFnOnLoginCancelled = (UFunction*) UObject::GObjObjects()->Data[ 76833 ];

	UOnlineSubsystemSteamworks_execOnLoginCancelled_Parms OnLoginCancelled_Parms;

	this->ProcessEvent ( pFnOnLoginCancelled, &OnLoginCancelled_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLoginChange ( unsigned char LocalUserNum )
{
	static UFunction* pFnOnLoginChange = NULL;

	if ( ! pFnOnLoginChange )
		pFnOnLoginChange = (UFunction*) UObject::GObjObjects()->Data[ 76831 ];

	UOnlineSubsystemSteamworks_execOnLoginChange_Parms OnLoginChange_Parms;
	OnLoginChange_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnOnLoginChange, &OnLoginChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::eventInit ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 76829 ];

	UOnlineSubsystemSteamworks_eventInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;

	return Init_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif