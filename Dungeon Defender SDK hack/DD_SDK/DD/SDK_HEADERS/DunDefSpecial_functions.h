/*
#############################################################################################
# Dungeon Defender (8.7.1) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: DunDefSpecial_functions.h
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

// Function DunDefSpecial.DunDefPlayer_Summoner.DrawMiniMapIcon
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class ADunDefMiniMap*          MiniMap                        ( CPF_Parm )

void ADunDefPlayer_Summoner::DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap )
{
	static UFunction* pFnDrawMiniMapIcon = NULL;

	if ( ! pFnDrawMiniMapIcon )
		pFnDrawMiniMapIcon = (UFunction*) UObject::GObjObjects()->Data[ 85747 ];

	ADunDefPlayer_Summoner_execDrawMiniMapIcon_Parms DrawMiniMapIcon_Parms;
	DrawMiniMapIcon_Parms.Canvas = Canvas;
	DrawMiniMapIcon_Parms.MiniMap = MiniMap;

	this->ProcessEvent ( pFnDrawMiniMapIcon, &DrawMiniMapIcon_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetPhaseShiftMaterials
// [0x00020102] 
// Parameters infos:
// TArray< class UMaterialInstanceConstant* > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< class UMaterialInstanceConstant* > ADunDefPlayer_Summoner::GetPhaseShiftMaterials ( )
{
	static UFunction* pFnGetPhaseShiftMaterials = NULL;

	if ( ! pFnGetPhaseShiftMaterials )
		pFnGetPhaseShiftMaterials = (UFunction*) UObject::GObjObjects()->Data[ 85744 ];

	ADunDefPlayer_Summoner_execGetPhaseShiftMaterials_Parms GetPhaseShiftMaterials_Parms;

	this->ProcessEvent ( pFnGetPhaseShiftMaterials, &GetPhaseShiftMaterials_Parms, NULL );

	return GetPhaseShiftMaterials_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Summoner.IssuedCommand
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_Summoner::IssuedCommand ( )
{
	static UFunction* pFnIssuedCommand = NULL;

	if ( ! pFnIssuedCommand )
		pFnIssuedCommand = (UFunction*) UObject::GObjObjects()->Data[ 85742 ];

	ADunDefPlayer_Summoner_execIssuedCommand_Parms IssuedCommand_Parms;

	this->ProcessEvent ( pFnIssuedCommand, &IssuedCommand_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetSellTowerEmitter
// [0x00020102] 
// Parameters infos:
// class ADunDefEmitterSpawnable* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADunDefEmitterSpawnable* ADunDefPlayer_Summoner::GetSellTowerEmitter ( )
{
	static UFunction* pFnGetSellTowerEmitter = NULL;

	if ( ! pFnGetSellTowerEmitter )
		pFnGetSellTowerEmitter = (UFunction*) UObject::GObjObjects()->Data[ 85740 ];

	ADunDefPlayer_Summoner_execGetSellTowerEmitter_Parms GetSellTowerEmitter_Parms;

	this->ProcessEvent ( pFnGetSellTowerEmitter, &GetSellTowerEmitter_Parms, NULL );

	return GetSellTowerEmitter_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetTrapDetonationEmitter
// [0x00020102] 
// Parameters infos:
// class ADunDefEmitterSpawnable* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADunDefEmitterSpawnable* ADunDefPlayer_Summoner::GetTrapDetonationEmitter ( )
{
	static UFunction* pFnGetTrapDetonationEmitter = NULL;

	if ( ! pFnGetTrapDetonationEmitter )
		pFnGetTrapDetonationEmitter = (UFunction*) UObject::GObjObjects()->Data[ 85738 ];

	ADunDefPlayer_Summoner_execGetTrapDetonationEmitter_Parms GetTrapDetonationEmitter_Parms;

	this->ProcessEvent ( pFnGetTrapDetonationEmitter, &GetTrapDetonationEmitter_Parms, NULL );

	return GetTrapDetonationEmitter_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetUpgradingWeaponEmitter
// [0x00020102] 
// Parameters infos:
// class ADunDefEmitterSpawnable* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADunDefEmitterSpawnable* ADunDefPlayer_Summoner::GetUpgradingWeaponEmitter ( )
{
	static UFunction* pFnGetUpgradingWeaponEmitter = NULL;

	if ( ! pFnGetUpgradingWeaponEmitter )
		pFnGetUpgradingWeaponEmitter = (UFunction*) UObject::GObjObjects()->Data[ 85736 ];

	ADunDefPlayer_Summoner_execGetUpgradingWeaponEmitter_Parms GetUpgradingWeaponEmitter_Parms;

	this->ProcessEvent ( pFnGetUpgradingWeaponEmitter, &GetUpgradingWeaponEmitter_Parms, NULL );

	return GetUpgradingWeaponEmitter_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetWeaponRepairEmitter
// [0x00020102] 
// Parameters infos:
// class ADunDefEmitterSpawnable* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADunDefEmitterSpawnable* ADunDefPlayer_Summoner::GetWeaponRepairEmitter ( )
{
	static UFunction* pFnGetWeaponRepairEmitter = NULL;

	if ( ! pFnGetWeaponRepairEmitter )
		pFnGetWeaponRepairEmitter = (UFunction*) UObject::GObjObjects()->Data[ 85734 ];

	ADunDefPlayer_Summoner_execGetWeaponRepairEmitter_Parms GetWeaponRepairEmitter_Parms;

	this->ProcessEvent ( pFnGetWeaponRepairEmitter, &GetWeaponRepairEmitter_Parms, NULL );

	return GetWeaponRepairEmitter_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetHealingWeaponEmitter
// [0x00020102] 
// Parameters infos:
// class ADunDefEmitterSpawnable* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADunDefEmitterSpawnable* ADunDefPlayer_Summoner::GetHealingWeaponEmitter ( )
{
	static UFunction* pFnGetHealingWeaponEmitter = NULL;

	if ( ! pFnGetHealingWeaponEmitter )
		pFnGetHealingWeaponEmitter = (UFunction*) UObject::GObjObjects()->Data[ 85732 ];

	ADunDefPlayer_Summoner_execGetHealingWeaponEmitter_Parms GetHealingWeaponEmitter_Parms;

	this->ProcessEvent ( pFnGetHealingWeaponEmitter, &GetHealingWeaponEmitter_Parms, NULL );

	return GetHealingWeaponEmitter_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetSummoningTowerEmitter
// [0x00020102] 
// Parameters infos:
// class ADunDefEmitterSpawnable* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADunDefEmitterSpawnable* ADunDefPlayer_Summoner::GetSummoningTowerEmitter ( )
{
	static UFunction* pFnGetSummoningTowerEmitter = NULL;

	if ( ! pFnGetSummoningTowerEmitter )
		pFnGetSummoningTowerEmitter = (UFunction*) UObject::GObjObjects()->Data[ 85730 ];

	ADunDefPlayer_Summoner_execGetSummoningTowerEmitter_Parms GetSummoningTowerEmitter_Parms;

	this->ProcessEvent ( pFnGetSummoningTowerEmitter, &GetSummoningTowerEmitter_Parms, NULL );

	return GetSummoningTowerEmitter_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Summoner.StopSpellEmitter
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_Summoner::StopSpellEmitter ( )
{
	static UFunction* pFnStopSpellEmitter = NULL;

	if ( ! pFnStopSpellEmitter )
		pFnStopSpellEmitter = (UFunction*) UObject::GObjObjects()->Data[ 85729 ];

	ADunDefPlayer_Summoner_execStopSpellEmitter_Parms StopSpellEmitter_Parms;

	this->ProcessEvent ( pFnStopSpellEmitter, &StopSpellEmitter_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.StartSpellEmitter
// [0x00824102] 
// Parameters infos:
// class ADunDefEmitterSpawnable* Template                       ( CPF_Parm )
// unsigned long                  DontSetAsPrimaryEffect         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  IsSpawnEffect                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bForceSpawnOnWeapon            ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayer_Summoner::StartSpellEmitter ( class ADunDefEmitterSpawnable* Template, unsigned long DontSetAsPrimaryEffect, unsigned long IsSpawnEffect, unsigned long bForceSpawnOnWeapon )
{
	static UFunction* pFnStartSpellEmitter = NULL;

	if ( ! pFnStartSpellEmitter )
		pFnStartSpellEmitter = (UFunction*) UObject::GObjObjects()->Data[ 85721 ];

	ADunDefPlayer_Summoner_execStartSpellEmitter_Parms StartSpellEmitter_Parms;
	StartSpellEmitter_Parms.Template = Template;
	StartSpellEmitter_Parms.DontSetAsPrimaryEffect = DontSetAsPrimaryEffect;
	StartSpellEmitter_Parms.IsSpawnEffect = IsSpawnEffect;
	StartSpellEmitter_Parms.bForceSpawnOnWeapon = bForceSpawnOnWeapon;

	this->ProcessEvent ( pFnStartSpellEmitter, &StartSpellEmitter_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AllowDropPickups
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayer_Summoner::AllowDropPickups ( )
{
	static UFunction* pFnAllowDropPickups = NULL;

	if ( ! pFnAllowDropPickups )
		pFnAllowDropPickups = (UFunction*) UObject::GObjObjects()->Data[ 85719 ];

	ADunDefPlayer_Summoner_execAllowDropPickups_Parms AllowDropPickups_Parms;

	this->ProcessEvent ( pFnAllowDropPickups, &AllowDropPickups_Parms, NULL );

	return AllowDropPickups_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Summoner.SetOwnerNoSee
// [0x00024102] 
// Parameters infos:
// unsigned long                  ownerNoSee                     ( CPF_Parm )
// unsigned long                  ownerNoSeeWeapon               ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayer_Summoner::SetOwnerNoSee ( unsigned long ownerNoSee, unsigned long ownerNoSeeWeapon )
{
	static UFunction* pFnSetOwnerNoSee = NULL;

	if ( ! pFnSetOwnerNoSee )
		pFnSetOwnerNoSee = (UFunction*) UObject::GObjObjects()->Data[ 85716 ];

	ADunDefPlayer_Summoner_execSetOwnerNoSee_Parms SetOwnerNoSee_Parms;
	SetOwnerNoSee_Parms.ownerNoSee = ownerNoSee;
	SetOwnerNoSee_Parms.ownerNoSeeWeapon = ownerNoSeeWeapon;

	this->ProcessEvent ( pFnSetOwnerNoSee, &SetOwnerNoSee_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ADunDefPlayer_Summoner::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 85711 ];

	ADunDefPlayer_Summoner_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetEnemyTargetingDesirability
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AEngineNativeDunDefAIController* forController                  ( CPF_Parm )

float ADunDefPlayer_Summoner::eventGetEnemyTargetingDesirability ( class AEngineNativeDunDefAIController* forController )
{
	static UFunction* pFnGetEnemyTargetingDesirability = NULL;

	if ( ! pFnGetEnemyTargetingDesirability )
		pFnGetEnemyTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 85708 ];

	ADunDefPlayer_Summoner_eventGetEnemyTargetingDesirability_Parms GetEnemyTargetingDesirability_Parms;
	GetEnemyTargetingDesirability_Parms.forController = forController;

	this->ProcessEvent ( pFnGetEnemyTargetingDesirability, &GetEnemyTargetingDesirability_Parms, NULL );

	return GetEnemyTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Summoner.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayer_Summoner::eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 85700 ];

	ADunDefPlayer_Summoner_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.PhaseScaleDown
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayer_Summoner::eventPhaseScaleDown ( )
{
	static UFunction* pFnPhaseScaleDown = NULL;

	if ( ! pFnPhaseScaleDown )
		pFnPhaseScaleDown = (UFunction*) UObject::GObjObjects()->Data[ 85699 ];

	ADunDefPlayer_Summoner_eventPhaseScaleDown_Parms PhaseScaleDown_Parms;

	this->ProcessEvent ( pFnPhaseScaleDown, &PhaseScaleDown_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.UsedAbility
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayerAbility*    ability                        ( CPF_Parm )

void ADunDefPlayer_Summoner::UsedAbility ( class ADunDefPlayerAbility* ability )
{
	static UFunction* pFnUsedAbility = NULL;

	if ( ! pFnUsedAbility )
		pFnUsedAbility = (UFunction*) UObject::GObjObjects()->Data[ 85697 ];

	ADunDefPlayer_Summoner_execUsedAbility_Parms UsedAbility_Parms;
	UsedAbility_Parms.ability = ability;

	this->ProcessEvent ( pFnUsedAbility, &UsedAbility_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.CheckForTokens
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_Summoner::CheckForTokens ( )
{
	static UFunction* pFnCheckForTokens = NULL;

	if ( ! pFnCheckForTokens )
		pFnCheckForTokens = (UFunction*) UObject::GObjObjects()->Data[ 85696 ];

	ADunDefPlayer_Summoner_execCheckForTokens_Parms CheckForTokens_Parms;

	this->ProcessEvent ( pFnCheckForTokens, &CheckForTokens_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AllowFamiliarAbilities
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UHeroEquipment_Familiar* askingFamiliar                 ( CPF_Parm )

bool ADunDefPlayer_Summoner::AllowFamiliarAbilities ( class UHeroEquipment_Familiar* askingFamiliar )
{
	static UFunction* pFnAllowFamiliarAbilities = NULL;

	if ( ! pFnAllowFamiliarAbilities )
		pFnAllowFamiliarAbilities = (UFunction*) UObject::GObjObjects()->Data[ 85693 ];

	ADunDefPlayer_Summoner_execAllowFamiliarAbilities_Parms AllowFamiliarAbilities_Parms;
	AllowFamiliarAbilities_Parms.askingFamiliar = askingFamiliar;

	this->ProcessEvent ( pFnAllowFamiliarAbilities, &AllowFamiliarAbilities_Parms, NULL );

	return AllowFamiliarAbilities_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AttachAllEquipment
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_Summoner::AttachAllEquipment ( )
{
	static UFunction* pFnAttachAllEquipment = NULL;

	if ( ! pFnAttachAllEquipment )
		pFnAttachAllEquipment = (UFunction*) UObject::GObjObjects()->Data[ 85692 ];

	ADunDefPlayer_Summoner_execAttachAllEquipment_Parms AttachAllEquipment_Parms;

	this->ProcessEvent ( pFnAttachAllEquipment, &AttachAllEquipment_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.DetachAllEquipment
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_Summoner::DetachAllEquipment ( )
{
	static UFunction* pFnDetachAllEquipment = NULL;

	if ( ! pFnDetachAllEquipment )
		pFnDetachAllEquipment = (UFunction*) UObject::GObjObjects()->Data[ 85691 ];

	ADunDefPlayer_Summoner_execDetachAllEquipment_Parms DetachAllEquipment_Parms;

	this->ProcessEvent ( pFnDetachAllEquipment, &DetachAllEquipment_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.SetPhased
// [0x00020102] 
// Parameters infos:
// unsigned long                  bNewPhaseState                 ( CPF_Parm )

void ADunDefPlayer_Summoner::SetPhased ( unsigned long bNewPhaseState )
{
	static UFunction* pFnSetPhased = NULL;

	if ( ! pFnSetPhased )
		pFnSetPhased = (UFunction*) UObject::GObjObjects()->Data[ 85689 ];

	ADunDefPlayer_Summoner_execSetPhased_Parms SetPhased_Parms;
	SetPhased_Parms.bNewPhaseState = bNewPhaseState;

	this->ProcessEvent ( pFnSetPhased, &SetPhased_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AllowEquipmentAttachment
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayer_Summoner::AllowEquipmentAttachment ( )
{
	static UFunction* pFnAllowEquipmentAttachment = NULL;

	if ( ! pFnAllowEquipmentAttachment )
		pFnAllowEquipmentAttachment = (UFunction*) UObject::GObjObjects()->Data[ 85687 ];

	ADunDefPlayer_Summoner_execAllowEquipmentAttachment_Parms AllowEquipmentAttachment_Parms;

	this->ProcessEvent ( pFnAllowEquipmentAttachment, &AllowEquipmentAttachment_Parms, NULL );

	return AllowEquipmentAttachment_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Summoner.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayer_Summoner::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 85686 ];

	ADunDefPlayer_Summoner_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.StopFire
// [0x00020100] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ADunDefPlayer_Summoner::StopFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStopFire = NULL;

	if ( ! pFnStopFire )
		pFnStopFire = (UFunction*) UObject::GObjObjects()->Data[ 85684 ];

	ADunDefPlayer_Summoner_execStopFire_Parms StopFire_Parms;
	StopFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStopFire, &StopFire_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.StartFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ADunDefPlayer_Summoner::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 85680 ];

	ADunDefPlayer_Summoner_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetSelectedTowers
// [0x00020102] 
// Parameters infos:
// TArray< class ADunDefTower_SummonEnemy* > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< class ADunDefTower_SummonEnemy* > ADunDefPlayer_Summoner::GetSelectedTowers ( )
{
	static UFunction* pFnGetSelectedTowers = NULL;

	if ( ! pFnGetSelectedTowers )
		pFnGetSelectedTowers = (UFunction*) UObject::GObjObjects()->Data[ 85677 ];

	ADunDefPlayer_Summoner_execGetSelectedTowers_Parms GetSelectedTowers_Parms;

	this->ProcessEvent ( pFnGetSelectedTowers, &GetSelectedTowers_Parms, NULL );

	return GetSelectedTowers_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Summoner.RemoveSelectedTower
// [0x00020102] 
// Parameters infos:
// class ADunDefTower_SummonEnemy* RemoveTower                    ( CPF_Parm )

void ADunDefPlayer_Summoner::RemoveSelectedTower ( class ADunDefTower_SummonEnemy* RemoveTower )
{
	static UFunction* pFnRemoveSelectedTower = NULL;

	if ( ! pFnRemoveSelectedTower )
		pFnRemoveSelectedTower = (UFunction*) UObject::GObjObjects()->Data[ 85675 ];

	ADunDefPlayer_Summoner_execRemoveSelectedTower_Parms RemoveSelectedTower_Parms;
	RemoveSelectedTower_Parms.RemoveTower = RemoveTower;

	this->ProcessEvent ( pFnRemoveSelectedTower, &RemoveSelectedTower_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.ServerRemoveSelectedTower
// [0x002200C2] 
// Parameters infos:
// class ADunDefTower_SummonEnemy* RemoveTower                    ( CPF_Parm )

void ADunDefPlayer_Summoner::ServerRemoveSelectedTower ( class ADunDefTower_SummonEnemy* RemoveTower )
{
	static UFunction* pFnServerRemoveSelectedTower = NULL;

	if ( ! pFnServerRemoveSelectedTower )
		pFnServerRemoveSelectedTower = (UFunction*) UObject::GObjObjects()->Data[ 85673 ];

	ADunDefPlayer_Summoner_execServerRemoveSelectedTower_Parms ServerRemoveSelectedTower_Parms;
	ServerRemoveSelectedTower_Parms.RemoveTower = RemoveTower;

	this->ProcessEvent ( pFnServerRemoveSelectedTower, &ServerRemoveSelectedTower_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.RemoveAllSelectedTowers
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_Summoner::RemoveAllSelectedTowers ( )
{
	static UFunction* pFnRemoveAllSelectedTowers = NULL;

	if ( ! pFnRemoveAllSelectedTowers )
		pFnRemoveAllSelectedTowers = (UFunction*) UObject::GObjObjects()->Data[ 85671 ];

	ADunDefPlayer_Summoner_execRemoveAllSelectedTowers_Parms RemoveAllSelectedTowers_Parms;

	this->ProcessEvent ( pFnRemoveAllSelectedTowers, &RemoveAllSelectedTowers_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.HasSelectedTower
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower_SummonEnemy* chkTower                       ( CPF_Parm )

bool ADunDefPlayer_Summoner::HasSelectedTower ( class ADunDefTower_SummonEnemy* chkTower )
{
	static UFunction* pFnHasSelectedTower = NULL;

	if ( ! pFnHasSelectedTower )
		pFnHasSelectedTower = (UFunction*) UObject::GObjObjects()->Data[ 85668 ];

	ADunDefPlayer_Summoner_execHasSelectedTower_Parms HasSelectedTower_Parms;
	HasSelectedTower_Parms.chkTower = chkTower;

	this->ProcessEvent ( pFnHasSelectedTower, &HasSelectedTower_Parms, NULL );

	return HasSelectedTower_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AddSelectedTowerGroup
// [0x00020102] 
// Parameters infos:
// TArray< class ADunDefTower_SummonEnemy* > newTowers                      ( CPF_Parm | CPF_NeedCtorLink )

void ADunDefPlayer_Summoner::AddSelectedTowerGroup ( TArray< class ADunDefTower_SummonEnemy* > newTowers )
{
	static UFunction* pFnAddSelectedTowerGroup = NULL;

	if ( ! pFnAddSelectedTowerGroup )
		pFnAddSelectedTowerGroup = (UFunction*) UObject::GObjObjects()->Data[ 85664 ];

	ADunDefPlayer_Summoner_execAddSelectedTowerGroup_Parms AddSelectedTowerGroup_Parms;
	memcpy ( &AddSelectedTowerGroup_Parms.newTowers, &newTowers, 0xC );

	this->ProcessEvent ( pFnAddSelectedTowerGroup, &AddSelectedTowerGroup_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.ServerAddSelectedTower
// [0x002200C2] 
// Parameters infos:
// class ADunDefTower_SummonEnemy* newTower                       ( CPF_Parm )

void ADunDefPlayer_Summoner::ServerAddSelectedTower ( class ADunDefTower_SummonEnemy* newTower )
{
	static UFunction* pFnServerAddSelectedTower = NULL;

	if ( ! pFnServerAddSelectedTower )
		pFnServerAddSelectedTower = (UFunction*) UObject::GObjObjects()->Data[ 85662 ];

	ADunDefPlayer_Summoner_execServerAddSelectedTower_Parms ServerAddSelectedTower_Parms;
	ServerAddSelectedTower_Parms.newTower = newTower;

	this->ProcessEvent ( pFnServerAddSelectedTower, &ServerAddSelectedTower_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AddSelectedTower
// [0x00020102] 
// Parameters infos:
// class ADunDefTower_SummonEnemy* newTower                       ( CPF_Parm )

void ADunDefPlayer_Summoner::AddSelectedTower ( class ADunDefTower_SummonEnemy* newTower )
{
	static UFunction* pFnAddSelectedTower = NULL;

	if ( ! pFnAddSelectedTower )
		pFnAddSelectedTower = (UFunction*) UObject::GObjObjects()->Data[ 85660 ];

	ADunDefPlayer_Summoner_execAddSelectedTower_Parms AddSelectedTower_Parms;
	AddSelectedTower_Parms.newTower = newTower;

	this->ProcessEvent ( pFnAddSelectedTower, &AddSelectedTower_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.ClientSetupColors
// [0x00820102] 
// Parameters infos:

void ADunDefPlayer_Summoner::ClientSetupColors ( )
{
	static UFunction* pFnClientSetupColors = NULL;

	if ( ! pFnClientSetupColors )
		pFnClientSetupColors = (UFunction*) UObject::GObjObjects()->Data[ 85658 ];

	ADunDefPlayer_Summoner_execClientSetupColors_Parms ClientSetupColors_Parms;

	this->ProcessEvent ( pFnClientSetupColors, &ClientSetupColors_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.SetMyCustomColors
// [0x00820002] 
// Parameters infos:
// class ADunDefPlayerController* aController                    ( CPF_Parm )
// class UDunDefHero*             usingHero                      ( CPF_Parm )

void ADunDefPlayer_Summoner::SetMyCustomColors ( class ADunDefPlayerController* aController, class UDunDefHero* usingHero )
{
	static UFunction* pFnSetMyCustomColors = NULL;

	if ( ! pFnSetMyCustomColors )
		pFnSetMyCustomColors = (UFunction*) UObject::GObjObjects()->Data[ 85654 ];

	ADunDefPlayer_Summoner_execSetMyCustomColors_Parms SetMyCustomColors_Parms;
	SetMyCustomColors_Parms.aController = aController;
	SetMyCustomColors_Parms.usingHero = usingHero;

	this->ProcessEvent ( pFnSetMyCustomColors, &SetMyCustomColors_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayer_Summoner::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 85653 ];

	ADunDefPlayer_Summoner_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayer_Summoner::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 85636 ];

	ADunDefPlayer_Summoner_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Summoner.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefPlayer_Summoner::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 85634 ];

	ADunDefPlayer_Summoner_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Hovering.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_Hovering::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 85283 ];

	ADunDefPlayer_Hovering_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Hovering.StopHovering
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_Hovering::StopHovering ( )
{
	static UFunction* pFnStopHovering = NULL;

	if ( ! pFnStopHovering )
		pFnStopHovering = (UFunction*) UObject::GObjObjects()->Data[ 85282 ];

	ADunDefPlayer_Hovering_execStopHovering_Parms StopHovering_Parms;

	this->ProcessEvent ( pFnStopHovering, &StopHovering_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Hovering.StartHovering
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_Hovering::StartHovering ( )
{
	static UFunction* pFnStartHovering = NULL;

	if ( ! pFnStartHovering )
		pFnStartHovering = (UFunction*) UObject::GObjObjects()->Data[ 85281 ];

	ADunDefPlayer_Hovering_execStartHovering_Parms StartHovering_Parms;

	this->ProcessEvent ( pFnStartHovering, &StartHovering_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Hovering.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayer_Hovering::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 85264 ];

	ADunDefPlayer_Hovering_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.CTF_PlayerAbility_PickupFlag.RequestPickup
// [0x00020102] 
// Parameters infos:
// class ACTF_Flag*               newFlag                        ( CPF_Parm )

void ACTF_PlayerAbility_PickupFlag::RequestPickup ( class ACTF_Flag* newFlag )
{
	static UFunction* pFnRequestPickup = NULL;

	if ( ! pFnRequestPickup )
		pFnRequestPickup = (UFunction*) UObject::GObjObjects()->Data[ 82870 ];

	ACTF_PlayerAbility_PickupFlag_execRequestPickup_Parms RequestPickup_Parms;
	RequestPickup_Parms.newFlag = newFlag;

	this->ProcessEvent ( pFnRequestPickup, &RequestPickup_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.SetAtBase
// [0x00020102] 
// Parameters infos:
// unsigned long                  bIsAtBase                      ( CPF_Parm )

void ACTF_Flag::SetAtBase ( unsigned long bIsAtBase )
{
	static UFunction* pFnSetAtBase = NULL;

	if ( ! pFnSetAtBase )
		pFnSetAtBase = (UFunction*) UObject::GObjObjects()->Data[ 83516 ];

	ACTF_Flag_execSetAtBase_Parms SetAtBase_Parms;
	SetAtBase_Parms.bIsAtBase = bIsAtBase;

	this->ProcessEvent ( pFnSetAtBase, &SetAtBase_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.SetDroppedParticleColor
// [0x00820102] 
// Parameters infos:

void ACTF_Flag::SetDroppedParticleColor ( )
{
	static UFunction* pFnSetDroppedParticleColor = NULL;

	if ( ! pFnSetDroppedParticleColor )
		pFnSetDroppedParticleColor = (UFunction*) UObject::GObjObjects()->Data[ 83513 ];

	ACTF_Flag_execSetDroppedParticleColor_Parms SetDroppedParticleColor_Parms;

	this->ProcessEvent ( pFnSetDroppedParticleColor, &SetDroppedParticleColor_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.SetTeam
// [0x00020102] 
// Parameters infos:
// int                            NewTeam                        ( CPF_Parm )

void ACTF_Flag::SetTeam ( int NewTeam )
{
	static UFunction* pFnSetTeam = NULL;

	if ( ! pFnSetTeam )
		pFnSetTeam = (UFunction*) UObject::GObjObjects()->Data[ 83511 ];

	ACTF_Flag_execSetTeam_Parms SetTeam_Parms;
	SetTeam_Parms.NewTeam = NewTeam;

	this->ProcessEvent ( pFnSetTeam, &SetTeam_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.InitFlag
// [0x00020002] 
// Parameters infos:
// int                            NewTeam                        ( CPF_Parm )
// class ACTF_FlagBase*           NewBase                        ( CPF_Parm )

void ACTF_Flag::InitFlag ( int NewTeam, class ACTF_FlagBase* NewBase )
{
	static UFunction* pFnInitFlag = NULL;

	if ( ! pFnInitFlag )
		pFnInitFlag = (UFunction*) UObject::GObjObjects()->Data[ 83508 ];

	ACTF_Flag_execInitFlag_Parms InitFlag_Parms;
	InitFlag_Parms.NewTeam = NewTeam;
	InitFlag_Parms.NewBase = NewBase;

	this->ProcessEvent ( pFnInitFlag, &InitFlag_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.AutoTeleport
// [0x00020002] 
// Parameters infos:

void ACTF_Flag::AutoTeleport ( )
{
	static UFunction* pFnAutoTeleport = NULL;

	if ( ! pFnAutoTeleport )
		pFnAutoTeleport = (UFunction*) UObject::GObjObjects()->Data[ 83507 ];

	ACTF_Flag_execAutoTeleport_Parms AutoTeleport_Parms;

	this->ProcessEvent ( pFnAutoTeleport, &AutoTeleport_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.AdjustDamage
// [0x00420102] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm | CPF_OutParm )

void ACTF_Flag::AdjustDamage ( int* Damage )
{
	static UFunction* pFnAdjustDamage = NULL;

	if ( ! pFnAdjustDamage )
		pFnAdjustDamage = (UFunction*) UObject::GObjObjects()->Data[ 83505 ];

	ACTF_Flag_execAdjustDamage_Parms AdjustDamage_Parms;

	this->ProcessEvent ( pFnAdjustDamage, &AdjustDamage_Parms, NULL );

	if ( Damage )
		*Damage = AdjustDamage_Parms.Damage;
};

// Function DunDefSpecial.CTF_Flag.PreventTowerAtPoint
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// class ADunDefTower*            towerArch                      ( CPF_Parm )
// struct FVector                 Point                          ( CPF_Parm )
// float                          towerRadius                    ( CPF_Parm )

bool ACTF_Flag::PreventTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point, float towerRadius )
{
	static UFunction* pFnPreventTowerAtPoint = NULL;

	if ( ! pFnPreventTowerAtPoint )
		pFnPreventTowerAtPoint = (UFunction*) UObject::GObjObjects()->Data[ 83499 ];

	ACTF_Flag_execPreventTowerAtPoint_Parms PreventTowerAtPoint_Parms;
	PreventTowerAtPoint_Parms.PC = PC;
	PreventTowerAtPoint_Parms.towerArch = towerArch;
	memcpy ( &PreventTowerAtPoint_Parms.Point, &Point, 0xC );
	PreventTowerAtPoint_Parms.towerRadius = towerRadius;

	this->ProcessEvent ( pFnPreventTowerAtPoint, &PreventTowerAtPoint_Parms, NULL );

	return PreventTowerAtPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_Flag.AllowTowerAtPoint
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// class ADunDefTower*            towerArch                      ( CPF_Parm )
// struct FVector                 Point                          ( CPF_Parm )

bool ACTF_Flag::AllowTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point )
{
	static UFunction* pFnAllowTowerAtPoint = NULL;

	if ( ! pFnAllowTowerAtPoint )
		pFnAllowTowerAtPoint = (UFunction*) UObject::GObjObjects()->Data[ 83494 ];

	ACTF_Flag_execAllowTowerAtPoint_Parms AllowTowerAtPoint_Parms;
	AllowTowerAtPoint_Parms.PC = PC;
	AllowTowerAtPoint_Parms.towerArch = towerArch;
	memcpy ( &AllowTowerAtPoint_Parms.Point, &Point, 0xC );

	this->ProcessEvent ( pFnAllowTowerAtPoint, &AllowTowerAtPoint_Parms, NULL );

	return AllowTowerAtPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_Flag.CheckAllowance
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ACTF_Flag::CheckAllowance ( )
{
	static UFunction* pFnCheckAllowance = NULL;

	if ( ! pFnCheckAllowance )
		pFnCheckAllowance = (UFunction*) UObject::GObjObjects()->Data[ 83492 ];

	ACTF_Flag_execCheckAllowance_Parms CheckAllowance_Parms;

	this->ProcessEvent ( pFnCheckAllowance, &CheckAllowance_Parms, NULL );

	return CheckAllowance_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_Flag.PhysicsVolumeChange
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APhysicsVolume*          NewVolume                      ( CPF_Parm )

void ACTF_Flag::eventPhysicsVolumeChange ( class APhysicsVolume* NewVolume )
{
	static UFunction* pFnPhysicsVolumeChange = NULL;

	if ( ! pFnPhysicsVolumeChange )
		pFnPhysicsVolumeChange = (UFunction*) UObject::GObjObjects()->Data[ 83490 ];

	ACTF_Flag_eventPhysicsVolumeChange_Parms PhysicsVolumeChange_Parms;
	PhysicsVolumeChange_Parms.NewVolume = NewVolume;

	this->ProcessEvent ( pFnPhysicsVolumeChange, &PhysicsVolumeChange_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UClass*                  dmgType                        ( CPF_Parm )

void ACTF_Flag::eventFellOutOfWorld ( class UClass* dmgType )
{
	static UFunction* pFnFellOutOfWorld = NULL;

	if ( ! pFnFellOutOfWorld )
		pFnFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 83488 ];

	ACTF_Flag_eventFellOutOfWorld_Parms FellOutOfWorld_Parms;
	FellOutOfWorld_Parms.dmgType = dmgType;

	this->ProcessEvent ( pFnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.ResetCollision
// [0x00020102] 
// Parameters infos:

void ACTF_Flag::ResetCollision ( )
{
	static UFunction* pFnResetCollision = NULL;

	if ( ! pFnResetCollision )
		pFnResetCollision = (UFunction*) UObject::GObjObjects()->Data[ 83480 ];

	ACTF_Flag_execResetCollision_Parms ResetCollision_Parms;

	this->ProcessEvent ( pFnResetCollision, &ResetCollision_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.DisableCollision
// [0x00020102] 
// Parameters infos:

void ACTF_Flag::DisableCollision ( )
{
	static UFunction* pFnDisableCollision = NULL;

	if ( ! pFnDisableCollision )
		pFnDisableCollision = (UFunction*) UObject::GObjObjects()->Data[ 83479 ];

	ACTF_Flag_execDisableCollision_Parms DisableCollision_Parms;

	this->ProcessEvent ( pFnDisableCollision, &DisableCollision_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.IsInAuraOrTrap
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Loc                            ( CPF_OptionalParm | CPF_Parm )

bool ACTF_Flag::IsInAuraOrTrap ( struct FVector Loc )
{
	static UFunction* pFnIsInAuraOrTrap = NULL;

	if ( ! pFnIsInAuraOrTrap )
		pFnIsInAuraOrTrap = (UFunction*) UObject::GObjObjects()->Data[ 83474 ];

	ACTF_Flag_execIsInAuraOrTrap_Parms IsInAuraOrTrap_Parms;
	memcpy ( &IsInAuraOrTrap_Parms.Loc, &Loc, 0xC );

	this->ProcessEvent ( pFnIsInAuraOrTrap, &IsInAuraOrTrap_Parms, NULL );

	return IsInAuraOrTrap_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_Flag.CaptureFlag
// [0x00020102] 
// Parameters infos:

void ACTF_Flag::CaptureFlag ( )
{
	static UFunction* pFnCaptureFlag = NULL;

	if ( ! pFnCaptureFlag )
		pFnCaptureFlag = (UFunction*) UObject::GObjObjects()->Data[ 83473 ];

	ACTF_Flag_execCaptureFlag_Parms CaptureFlag_Parms;

	this->ProcessEvent ( pFnCaptureFlag, &CaptureFlag_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.ReturnToBase
// [0x00020102] 
// Parameters infos:

void ACTF_Flag::ReturnToBase ( )
{
	static UFunction* pFnReturnToBase = NULL;

	if ( ! pFnReturnToBase )
		pFnReturnToBase = (UFunction*) UObject::GObjObjects()->Data[ 83472 ];

	ACTF_Flag_execReturnToBase_Parms ReturnToBase_Parms;

	this->ProcessEvent ( pFnReturnToBase, &ReturnToBase_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.DropFlag
// [0x00024102] 
// Parameters infos:
// unsigned long                  bForceRandomizedPosition       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bForceDroppedMessage           ( CPF_OptionalParm | CPF_Parm )

void ACTF_Flag::DropFlag ( unsigned long bForceRandomizedPosition, unsigned long bForceDroppedMessage )
{
	static UFunction* pFnDropFlag = NULL;

	if ( ! pFnDropFlag )
		pFnDropFlag = (UFunction*) UObject::GObjObjects()->Data[ 83464 ];

	ACTF_Flag_execDropFlag_Parms DropFlag_Parms;
	DropFlag_Parms.bForceRandomizedPosition = bForceRandomizedPosition;
	DropFlag_Parms.bForceDroppedMessage = bForceDroppedMessage;

	this->ProcessEvent ( pFnDropFlag, &DropFlag_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.PickUpFlag
// [0x00820102] 
// Parameters infos:
// class ADunDefPlayer*           newHolder                      ( CPF_Parm )

void ACTF_Flag::PickUpFlag ( class ADunDefPlayer* newHolder )
{
	static UFunction* pFnPickUpFlag = NULL;

	if ( ! pFnPickUpFlag )
		pFnPickUpFlag = (UFunction*) UObject::GObjObjects()->Data[ 83460 ];

	ACTF_Flag_execPickUpFlag_Parms PickUpFlag_Parms;
	PickUpFlag_Parms.newHolder = newHolder;

	this->ProcessEvent ( pFnPickUpFlag, &PickUpFlag_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.BeginBeingPickedUp
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayerController* newHolder                      ( CPF_Parm )

void ACTF_Flag::BeginBeingPickedUp ( class ADunDefPlayerController* newHolder )
{
	static UFunction* pFnBeginBeingPickedUp = NULL;

	if ( ! pFnBeginBeingPickedUp )
		pFnBeginBeingPickedUp = (UFunction*) UObject::GObjObjects()->Data[ 83457 ];

	ACTF_Flag_execBeginBeingPickedUp_Parms BeginBeingPickedUp_Parms;
	BeginBeingPickedUp_Parms.newHolder = newHolder;

	this->ProcessEvent ( pFnBeginBeingPickedUp, &BeginBeingPickedUp_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.CanBePickedUp
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )

bool ACTF_Flag::CanBePickedUp ( class ADunDefPlayerController* PC )
{
	static UFunction* pFnCanBePickedUp = NULL;

	if ( ! pFnCanBePickedUp )
		pFnCanBePickedUp = (UFunction*) UObject::GObjObjects()->Data[ 82879 ];

	ACTF_Flag_execCanBePickedUp_Parms CanBePickedUp_Parms;
	CanBePickedUp_Parms.PC = PC;

	this->ProcessEvent ( pFnCanBePickedUp, &CanBePickedUp_Parms, NULL );

	return CanBePickedUp_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_Flag.DrawMiniMapIcon
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class ADunDefMiniMap*          MiniMap                        ( CPF_Parm )

void ACTF_Flag::DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap )
{
	static UFunction* pFnDrawMiniMapIcon = NULL;

	if ( ! pFnDrawMiniMapIcon )
		pFnDrawMiniMapIcon = (UFunction*) UObject::GObjObjects()->Data[ 83450 ];

	ACTF_Flag_execDrawMiniMapIcon_Parms DrawMiniMapIcon_Parms;
	DrawMiniMapIcon_Parms.Canvas = Canvas;
	DrawMiniMapIcon_Parms.MiniMap = MiniMap;

	this->ProcessEvent ( pFnDrawMiniMapIcon, &DrawMiniMapIcon_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.GetActivationOffset
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ACTF_Flag::GetActivationOffset ( )
{
	static UFunction* pFnGetActivationOffset = NULL;

	if ( ! pFnGetActivationOffset )
		pFnGetActivationOffset = (UFunction*) UObject::GObjObjects()->Data[ 83448 ];

	ACTF_Flag_execGetActivationOffset_Parms GetActivationOffset_Parms;

	this->ProcessEvent ( pFnGetActivationOffset, &GetActivationOffset_Parms, NULL );

	return GetActivationOffset_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_Flag.GetActivationWeighting
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ACTF_Flag::GetActivationWeighting ( )
{
	static UFunction* pFnGetActivationWeighting = NULL;

	if ( ! pFnGetActivationWeighting )
		pFnGetActivationWeighting = (UFunction*) UObject::GObjObjects()->Data[ 83446 ];

	ACTF_Flag_execGetActivationWeighting_Parms GetActivationWeighting_Parms;

	this->ProcessEvent ( pFnGetActivationWeighting, &GetActivationWeighting_Parms, NULL );

	return GetActivationWeighting_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_Flag.Client_Activate
// [0x00024102] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// int                            activationType                 ( CPF_OptionalParm | CPF_Parm )

void ACTF_Flag::Client_Activate ( class ADunDefPlayerController* PC, int activationType )
{
	static UFunction* pFnClient_Activate = NULL;

	if ( ! pFnClient_Activate )
		pFnClient_Activate = (UFunction*) UObject::GObjObjects()->Data[ 83443 ];

	ACTF_Flag_execClient_Activate_Parms Client_Activate_Parms;
	Client_Activate_Parms.PC = PC;
	Client_Activate_Parms.activationType = activationType;

	this->ProcessEvent ( pFnClient_Activate, &Client_Activate_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.Server_Activate
// [0x00024002] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// unsigned long                  forceActivation                ( CPF_OptionalParm | CPF_Parm )
// int                            activationType                 ( CPF_OptionalParm | CPF_Parm )

void ACTF_Flag::Server_Activate ( class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType )
{
	static UFunction* pFnServer_Activate = NULL;

	if ( ! pFnServer_Activate )
		pFnServer_Activate = (UFunction*) UObject::GObjObjects()->Data[ 83438 ];

	ACTF_Flag_execServer_Activate_Parms Server_Activate_Parms;
	Server_Activate_Parms.PC = PC;
	Server_Activate_Parms.forceActivation = forceActivation;
	Server_Activate_Parms.activationType = activationType;

	this->ProcessEvent ( pFnServer_Activate, &Server_Activate_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.AllowActivation
// [0x00024102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// int                            activationType                 ( CPF_OptionalParm | CPF_Parm )

int ACTF_Flag::AllowActivation ( class ADunDefPlayerController* PC, int activationType )
{
	static UFunction* pFnAllowActivation = NULL;

	if ( ! pFnAllowActivation )
		pFnAllowActivation = (UFunction*) UObject::GObjObjects()->Data[ 83434 ];

	ACTF_Flag_execAllowActivation_Parms AllowActivation_Parms;
	AllowActivation_Parms.PC = PC;
	AllowActivation_Parms.activationType = activationType;

	this->ProcessEvent ( pFnAllowActivation, &AllowActivation_Parms, NULL );

	return AllowActivation_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_Flag.GetToolTipPriority
// [0x00020100] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ACTF_Flag::GetToolTipPriority ( )
{
	static UFunction* pFnGetToolTipPriority = NULL;

	if ( ! pFnGetToolTipPriority )
		pFnGetToolTipPriority = (UFunction*) UObject::GObjObjects()->Data[ 83432 ];

	ACTF_Flag_execGetToolTipPriority_Parms GetToolTipPriority_Parms;

	this->ProcessEvent ( pFnGetToolTipPriority, &GetToolTipPriority_Parms, NULL );

	return GetToolTipPriority_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_Flag.TakesToolTipPriority
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UDunDefToolTipInterface* otherToolTip                   ( CPF_Parm )

bool ACTF_Flag::TakesToolTipPriority ( class UDunDefToolTipInterface* otherToolTip )
{
	static UFunction* pFnTakesToolTipPriority = NULL;

	if ( ! pFnTakesToolTipPriority )
		pFnTakesToolTipPriority = (UFunction*) UObject::GObjObjects()->Data[ 83429 ];

	ACTF_Flag_execTakesToolTipPriority_Parms TakesToolTipPriority_Parms;
	TakesToolTipPriority_Parms.otherToolTip = otherToolTip;

	this->ProcessEvent ( pFnTakesToolTipPriority, &TakesToolTipPriority_Parms, NULL );

	return TakesToolTipPriority_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_Flag.ContinueDrawingToolTip
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  ContinueDrawing                ( CPF_Parm )

bool ACTF_Flag::ContinueDrawingToolTip ( unsigned long ContinueDrawing )
{
	static UFunction* pFnContinueDrawingToolTip = NULL;

	if ( ! pFnContinueDrawingToolTip )
		pFnContinueDrawingToolTip = (UFunction*) UObject::GObjObjects()->Data[ 83426 ];

	ACTF_Flag_execContinueDrawingToolTip_Parms ContinueDrawingToolTip_Parms;
	ContinueDrawingToolTip_Parms.ContinueDrawing = ContinueDrawing;

	this->ProcessEvent ( pFnContinueDrawingToolTip, &ContinueDrawingToolTip_Parms, NULL );

	return ContinueDrawingToolTip_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_Flag.DrawToolTip
// [0x00824102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// int                            PosX                           ( CPF_Parm )
// int                            PosY                           ( CPF_Parm )
// class ULocalPlayer*            ForPlayer                      ( CPF_OptionalParm | CPF_Parm )

void ACTF_Flag::DrawToolTip ( class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer )
{
	static UFunction* pFnDrawToolTip = NULL;

	if ( ! pFnDrawToolTip )
		pFnDrawToolTip = (UFunction*) UObject::GObjObjects()->Data[ 83418 ];

	ACTF_Flag_execDrawToolTip_Parms DrawToolTip_Parms;
	DrawToolTip_Parms.C = C;
	DrawToolTip_Parms.PosX = PosX;
	DrawToolTip_Parms.PosY = PosY;
	DrawToolTip_Parms.ForPlayer = ForPlayer;

	this->ProcessEvent ( pFnDrawToolTip, &DrawToolTip_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ACTF_Flag::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 83417 ];

	ACTF_Flag_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ACTF_Flag::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 83416 ];

	ACTF_Flag_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.DrawMyHUD
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefHUD*              H                              ( CPF_Parm )

bool ACTF_Flag::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 83404 ];

	ACTF_Flag_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );

	return DrawMyHUD_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_Flag.OnlyDrawHUDForOwner
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ACTF_Flag::OnlyDrawHUDForOwner ( )
{
	static UFunction* pFnOnlyDrawHUDForOwner = NULL;

	if ( ! pFnOnlyDrawHUDForOwner )
		pFnOnlyDrawHUDForOwner = (UFunction*) UObject::GObjObjects()->Data[ 83402 ];

	ACTF_Flag_execOnlyDrawHUDForOwner_Parms OnlyDrawHUDForOwner_Parms;

	this->ProcessEvent ( pFnOnlyDrawHUDForOwner, &OnlyDrawHUDForOwner_Parms, NULL );

	return OnlyDrawHUDForOwner_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_Flag.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ACTF_Flag::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 83385 ];

	ACTF_Flag_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.CTF_Flag.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ACTF_Flag::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 83383 ];

	ACTF_Flag_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.CTF_UIGlobalHUD.GetUITeamLists
// [0x00420102] 
// Parameters infos:
// int                            TeamOnlyCheck                  ( CPF_Parm )
// struct FString                 tList                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 kList                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 sList                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UCTF_UIGlobalHUD::GetUITeamLists ( int TeamOnlyCheck, struct FString* tList, struct FString* kList, struct FString* sList )
{
	static UFunction* pFnGetUITeamLists = NULL;

	if ( ! pFnGetUITeamLists )
		pFnGetUITeamLists = (UFunction*) UObject::GObjObjects()->Data[ 82931 ];

	UCTF_UIGlobalHUD_execGetUITeamLists_Parms GetUITeamLists_Parms;
	GetUITeamLists_Parms.TeamOnlyCheck = TeamOnlyCheck;

	this->ProcessEvent ( pFnGetUITeamLists, &GetUITeamLists_Parms, NULL );

	if ( tList )
		memcpy ( tList, &GetUITeamLists_Parms.tList, 0xC );

	if ( kList )
		memcpy ( kList, &GetUITeamLists_Parms.kList, 0xC );

	if ( sList )
		memcpy ( sList, &GetUITeamLists_Parms.sList, 0xC );
};

// Function DunDefSpecial.CTF_UIGlobalHUD.GetColorString
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FColor                  aColor                         ( CPF_Parm )

struct FString UCTF_UIGlobalHUD::GetColorString ( struct FColor aColor )
{
	static UFunction* pFnGetColorString = NULL;

	if ( ! pFnGetColorString )
		pFnGetColorString = (UFunction*) UObject::GObjObjects()->Data[ 82928 ];

	UCTF_UIGlobalHUD_execGetColorString_Parms GetColorString_Parms;
	memcpy ( &GetColorString_Parms.aColor, &aColor, 0x4 );

	this->ProcessEvent ( pFnGetColorString, &GetColorString_Parms, NULL );

	return GetColorString_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_UIGlobalHUD.UpdateTeamPanels
// [0x00020102] 
// Parameters infos:

void UCTF_UIGlobalHUD::UpdateTeamPanels ( )
{
	static UFunction* pFnUpdateTeamPanels = NULL;

	if ( ! pFnUpdateTeamPanels )
		pFnUpdateTeamPanels = (UFunction*) UObject::GObjObjects()->Data[ 82919 ];

	UCTF_UIGlobalHUD_execUpdateTeamPanels_Parms UpdateTeamPanels_Parms;

	this->ProcessEvent ( pFnUpdateTeamPanels, &UpdateTeamPanels_Parms, NULL );
};

// Function DunDefSpecial.CTF_UIGlobalHUD.Update
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UCTF_UIGlobalHUD::eventUpdate ( float DeltaTime )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 82916 ];

	UCTF_UIGlobalHUD_eventUpdate_Parms Update_Parms;
	Update_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );
};

// Function DunDefSpecial.CTF_UIGlobalHUD.UpdateCompetitive
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UCTF_UIGlobalHUD::UpdateCompetitive ( float DeltaTime )
{
	static UFunction* pFnUpdateCompetitive = NULL;

	if ( ! pFnUpdateCompetitive )
		pFnUpdateCompetitive = (UFunction*) UObject::GObjObjects()->Data[ 82896 ];

	UCTF_UIGlobalHUD_execUpdateCompetitive_Parms UpdateCompetitive_Parms;
	UpdateCompetitive_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateCompetitive, &UpdateCompetitive_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDPRI.IsFriendlyToLocal
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ACTF_DDPRI::IsFriendlyToLocal ( )
{
	static UFunction* pFnIsFriendlyToLocal = NULL;

	if ( ! pFnIsFriendlyToLocal )
		pFnIsFriendlyToLocal = (UFunction*) UObject::GObjObjects()->Data[ 83340 ];

	ACTF_DDPRI_execIsFriendlyToLocal_Parms IsFriendlyToLocal_Parms;

	this->ProcessEvent ( pFnIsFriendlyToLocal, &IsFriendlyToLocal_Parms, NULL );

	return IsFriendlyToLocal_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDPRI.PrintHeroLevelUpMessage
// [0x00020102] 
// Parameters infos:

void ACTF_DDPRI::PrintHeroLevelUpMessage ( )
{
	static UFunction* pFnPrintHeroLevelUpMessage = NULL;

	if ( ! pFnPrintHeroLevelUpMessage )
		pFnPrintHeroLevelUpMessage = (UFunction*) UObject::GObjObjects()->Data[ 83339 ];

	ACTF_DDPRI_execPrintHeroLevelUpMessage_Parms PrintHeroLevelUpMessage_Parms;

	this->ProcessEvent ( pFnPrintHeroLevelUpMessage, &PrintHeroLevelUpMessage_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDPRI.PrintNewHeroMessage
// [0x00020102] 
// Parameters infos:

void ACTF_DDPRI::PrintNewHeroMessage ( )
{
	static UFunction* pFnPrintNewHeroMessage = NULL;

	if ( ! pFnPrintNewHeroMessage )
		pFnPrintNewHeroMessage = (UFunction*) UObject::GObjObjects()->Data[ 83338 ];

	ACTF_DDPRI_execPrintNewHeroMessage_Parms PrintNewHeroMessage_Parms;

	this->ProcessEvent ( pFnPrintNewHeroMessage, &PrintNewHeroMessage_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDPRI.SetReadyToSpawn
// [0x00020102] 
// Parameters infos:
// unsigned long                  bIsReady                       ( CPF_Parm )

void ACTF_DDPRI::SetReadyToSpawn ( unsigned long bIsReady )
{
	static UFunction* pFnSetReadyToSpawn = NULL;

	if ( ! pFnSetReadyToSpawn )
		pFnSetReadyToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 83336 ];

	ACTF_DDPRI_execSetReadyToSpawn_Parms SetReadyToSpawn_Parms;
	SetReadyToSpawn_Parms.bIsReady = bIsReady;

	this->ProcessEvent ( pFnSetReadyToSpawn, &SetReadyToSpawn_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDPRI.GetTeamName
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ACTF_DDPRI::GetTeamName ( )
{
	static UFunction* pFnGetTeamName = NULL;

	if ( ! pFnGetTeamName )
		pFnGetTeamName = (UFunction*) UObject::GObjObjects()->Data[ 82906 ];

	ACTF_DDPRI_execGetTeamName_Parms GetTeamName_Parms;

	this->ProcessEvent ( pFnGetTeamName, &GetTeamName_Parms, NULL );

	return GetTeamName_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDPRI.GetTeamColor
// [0x00020102] 
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FColor ACTF_DDPRI::GetTeamColor ( )
{
	static UFunction* pFnGetTeamColor = NULL;

	if ( ! pFnGetTeamColor )
		pFnGetTeamColor = (UFunction*) UObject::GObjObjects()->Data[ 82904 ];

	ACTF_DDPRI_execGetTeamColor_Parms GetTeamColor_Parms;

	this->ProcessEvent ( pFnGetTeamColor, &GetTeamColor_Parms, NULL );

	return GetTeamColor_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDPRI.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ACTF_DDPRI::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 83335 ];

	ACTF_DDPRI_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDPRI.AddToTeam
// [0x00024102] 
// Parameters infos:
// int                            TeamIndex                      ( CPF_OptionalParm | CPF_Parm )

void ACTF_DDPRI::AddToTeam ( int TeamIndex )
{
	static UFunction* pFnAddToTeam = NULL;

	if ( ! pFnAddToTeam )
		pFnAddToTeam = (UFunction*) UObject::GObjObjects()->Data[ 83333 ];

	ACTF_DDPRI_execAddToTeam_Parms AddToTeam_Parms;
	AddToTeam_Parms.TeamIndex = TeamIndex;

	this->ProcessEvent ( pFnAddToTeam, &AddToTeam_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDPRI.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ACTF_DDPRI::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 83331 ];

	ACTF_DDPRI_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.AllowedToTeleport
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   Teleportee                     ( CPF_Parm )

bool ACTF_DDGRI::AllowedToTeleport ( class APawn* Teleportee )
{
	static UFunction* pFnAllowedToTeleport = NULL;

	if ( ! pFnAllowedToTeleport )
		pFnAllowedToTeleport = (UFunction*) UObject::GObjObjects()->Data[ 83190 ];

	ACTF_DDGRI_execAllowedToTeleport_Parms AllowedToTeleport_Parms;
	AllowedToTeleport_Parms.Teleportee = Teleportee;

	this->ProcessEvent ( pFnAllowedToTeleport, &AllowedToTeleport_Parms, NULL );

	return AllowedToTeleport_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.DoDeathNotification
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayerReplicationInfo* Killer                         ( CPF_Parm )
// class ADunDefPlayerReplicationInfo* Victim                         ( CPF_Parm )
// int                            damageTypeIndex                ( CPF_Parm )

void ACTF_DDGRI::DoDeathNotification ( class ADunDefPlayerReplicationInfo* Killer, class ADunDefPlayerReplicationInfo* Victim, int damageTypeIndex )
{
	static UFunction* pFnDoDeathNotification = NULL;

	if ( ! pFnDoDeathNotification )
		pFnDoDeathNotification = (UFunction*) UObject::GObjObjects()->Data[ 83185 ];

	ACTF_DDGRI_execDoDeathNotification_Parms DoDeathNotification_Parms;
	DoDeathNotification_Parms.Killer = Killer;
	DoDeathNotification_Parms.Victim = Victim;
	DoDeathNotification_Parms.damageTypeIndex = damageTypeIndex;

	this->ProcessEvent ( pFnDoDeathNotification, &DoDeathNotification_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.GetJumpZMultiplier
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPawn*             aPawn                          ( CPF_Parm )

float ACTF_DDGRI::GetJumpZMultiplier ( class ADunDefPawn* aPawn )
{
	static UFunction* pFnGetJumpZMultiplier = NULL;

	if ( ! pFnGetJumpZMultiplier )
		pFnGetJumpZMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 83181 ];

	ACTF_DDGRI_execGetJumpZMultiplier_Parms GetJumpZMultiplier_Parms;
	GetJumpZMultiplier_Parms.aPawn = aPawn;

	this->ProcessEvent ( pFnGetJumpZMultiplier, &GetJumpZMultiplier_Parms, NULL );

	return GetJumpZMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.ExtraDrawHUDInterface
// [0x00820102] 
// Parameters infos:
// class ADunDefHUD*              H                              ( CPF_Parm )
// class UDunDefHUDInterface*     hudint                         ( CPF_Parm )

void ACTF_DDGRI::ExtraDrawHUDInterface ( class ADunDefHUD* H, class UDunDefHUDInterface* hudint )
{
	static UFunction* pFnExtraDrawHUDInterface = NULL;

	if ( ! pFnExtraDrawHUDInterface )
		pFnExtraDrawHUDInterface = (UFunction*) UObject::GObjObjects()->Data[ 83169 ];

	ACTF_DDGRI_execExtraDrawHUDInterface_Parms ExtraDrawHUDInterface_Parms;
	ExtraDrawHUDInterface_Parms.H = H;
	ExtraDrawHUDInterface_Parms.hudint = hudint;

	this->ProcessEvent ( pFnExtraDrawHUDInterface, &ExtraDrawHUDInterface_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.CustomUpdatePlayerScoreLabel
// [0x00020102] 
// Parameters infos:
// class ULocalPlayer*            ForPlayer                      ( CPF_Parm )
// class UUILabel_ScoreIndicator* ScoreLabel                     ( CPF_Parm )

void ACTF_DDGRI::CustomUpdatePlayerScoreLabel ( class ULocalPlayer* ForPlayer, class UUILabel_ScoreIndicator* ScoreLabel )
{
	static UFunction* pFnCustomUpdatePlayerScoreLabel = NULL;

	if ( ! pFnCustomUpdatePlayerScoreLabel )
		pFnCustomUpdatePlayerScoreLabel = (UFunction*) UObject::GObjObjects()->Data[ 83166 ];

	ACTF_DDGRI_execCustomUpdatePlayerScoreLabel_Parms CustomUpdatePlayerScoreLabel_Parms;
	CustomUpdatePlayerScoreLabel_Parms.ForPlayer = ForPlayer;
	CustomUpdatePlayerScoreLabel_Parms.ScoreLabel = ScoreLabel;

	this->ProcessEvent ( pFnCustomUpdatePlayerScoreLabel, &CustomUpdatePlayerScoreLabel_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.AllowDeathSpectatorMode
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )

bool ACTF_DDGRI::AllowDeathSpectatorMode ( class ADunDefPlayerController* PC )
{
	static UFunction* pFnAllowDeathSpectatorMode = NULL;

	if ( ! pFnAllowDeathSpectatorMode )
		pFnAllowDeathSpectatorMode = (UFunction*) UObject::GObjObjects()->Data[ 83163 ];

	ACTF_DDGRI_execAllowDeathSpectatorMode_Parms AllowDeathSpectatorMode_Parms;
	AllowDeathSpectatorMode_Parms.PC = PC;

	this->ProcessEvent ( pFnAllowDeathSpectatorMode, &AllowDeathSpectatorMode_Parms, NULL );

	return AllowDeathSpectatorMode_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.ModifyPlayerGroundSpeed
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayer*           aPlayer                        ( CPF_Parm )
// float                          theGroundSpeed                 ( CPF_Parm )

float ACTF_DDGRI::ModifyPlayerGroundSpeed ( class ADunDefPlayer* aPlayer, float theGroundSpeed )
{
	static UFunction* pFnModifyPlayerGroundSpeed = NULL;

	if ( ! pFnModifyPlayerGroundSpeed )
		pFnModifyPlayerGroundSpeed = (UFunction*) UObject::GObjObjects()->Data[ 83159 ];

	ACTF_DDGRI_execModifyPlayerGroundSpeed_Parms ModifyPlayerGroundSpeed_Parms;
	ModifyPlayerGroundSpeed_Parms.aPlayer = aPlayer;
	ModifyPlayerGroundSpeed_Parms.theGroundSpeed = theGroundSpeed;

	this->ProcessEvent ( pFnModifyPlayerGroundSpeed, &ModifyPlayerGroundSpeed_Parms, NULL );

	return ModifyPlayerGroundSpeed_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.GetGameOverLabelColor
// [0x00020102] 
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FColor ACTF_DDGRI::GetGameOverLabelColor ( )
{
	static UFunction* pFnGetGameOverLabelColor = NULL;

	if ( ! pFnGetGameOverLabelColor )
		pFnGetGameOverLabelColor = (UFunction*) UObject::GObjObjects()->Data[ 83157 ];

	ACTF_DDGRI_execGetGameOverLabelColor_Parms GetGameOverLabelColor_Parms;

	this->ProcessEvent ( pFnGetGameOverLabelColor, &GetGameOverLabelColor_Parms, NULL );

	return GetGameOverLabelColor_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.GetVictoryLabelColor
// [0x00020102] 
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FColor ACTF_DDGRI::GetVictoryLabelColor ( )
{
	static UFunction* pFnGetVictoryLabelColor = NULL;

	if ( ! pFnGetVictoryLabelColor )
		pFnGetVictoryLabelColor = (UFunction*) UObject::GObjObjects()->Data[ 83155 ];

	ACTF_DDGRI_execGetVictoryLabelColor_Parms GetVictoryLabelColor_Parms;

	this->ProcessEvent ( pFnGetVictoryLabelColor, &GetVictoryLabelColor_Parms, NULL );

	return GetVictoryLabelColor_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.GetGameOverLabelString
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class APlayerReplicationInfo*  myPlayer                       ( CPF_Parm )

struct FString ACTF_DDGRI::GetGameOverLabelString ( class APlayerReplicationInfo* myPlayer )
{
	static UFunction* pFnGetGameOverLabelString = NULL;

	if ( ! pFnGetGameOverLabelString )
		pFnGetGameOverLabelString = (UFunction*) UObject::GObjObjects()->Data[ 83152 ];

	ACTF_DDGRI_execGetGameOverLabelString_Parms GetGameOverLabelString_Parms;
	GetGameOverLabelString_Parms.myPlayer = myPlayer;

	this->ProcessEvent ( pFnGetGameOverLabelString, &GetGameOverLabelString_Parms, NULL );

	return GetGameOverLabelString_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.GetVictoryLabelString
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class APlayerReplicationInfo*  myPlayer                       ( CPF_Parm )

struct FString ACTF_DDGRI::GetVictoryLabelString ( class APlayerReplicationInfo* myPlayer )
{
	static UFunction* pFnGetVictoryLabelString = NULL;

	if ( ! pFnGetVictoryLabelString )
		pFnGetVictoryLabelString = (UFunction*) UObject::GObjObjects()->Data[ 83149 ];

	ACTF_DDGRI_execGetVictoryLabelString_Parms GetVictoryLabelString_Parms;
	GetVictoryLabelString_Parms.myPlayer = myPlayer;

	this->ProcessEvent ( pFnGetVictoryLabelString, &GetVictoryLabelString_Parms, NULL );

	return GetVictoryLabelString_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.OverrideEndGameLabel
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ACTF_DDGRI::OverrideEndGameLabel ( )
{
	static UFunction* pFnOverrideEndGameLabel = NULL;

	if ( ! pFnOverrideEndGameLabel )
		pFnOverrideEndGameLabel = (UFunction*) UObject::GObjObjects()->Data[ 83147 ];

	ACTF_DDGRI_execOverrideEndGameLabel_Parms OverrideEndGameLabel_Parms;

	this->ProcessEvent ( pFnOverrideEndGameLabel, &OverrideEndGameLabel_Parms, NULL );

	return OverrideEndGameLabel_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.GetWinningPRI
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayerReplicationInfo* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADunDefPlayerReplicationInfo* ACTF_DDGRI::GetWinningPRI ( )
{
	static UFunction* pFnGetWinningPRI = NULL;

	if ( ! pFnGetWinningPRI )
		pFnGetWinningPRI = (UFunction*) UObject::GObjObjects()->Data[ 83142 ];

	ACTF_DDGRI_execGetWinningPRI_Parms GetWinningPRI_Parms;

	this->ProcessEvent ( pFnGetWinningPRI, &GetWinningPRI_Parms, NULL );

	return GetWinningPRI_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.GetDataListEntries
// [0x00024102] 
// Parameters infos:
// TArray< class UDataListEntryInterface* > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            dataSetType                    ( CPF_OptionalParm | CPF_Parm )
// int                            PlayerIndex                    ( CPF_OptionalParm | CPF_Parm )
// int                            FolderID                       ( CPF_OptionalParm | CPF_Parm )

TArray< class UDataListEntryInterface* > ACTF_DDGRI::GetDataListEntries ( int dataSetType, int PlayerIndex, int FolderID )
{
	static UFunction* pFnGetDataListEntries = NULL;

	if ( ! pFnGetDataListEntries )
		pFnGetDataListEntries = (UFunction*) UObject::GObjObjects()->Data[ 83133 ];

	ACTF_DDGRI_execGetDataListEntries_Parms GetDataListEntries_Parms;
	GetDataListEntries_Parms.dataSetType = dataSetType;
	GetDataListEntries_Parms.PlayerIndex = PlayerIndex;
	GetDataListEntries_Parms.FolderID = FolderID;

	this->ProcessEvent ( pFnGetDataListEntries, &GetDataListEntries_Parms, NULL );

	return GetDataListEntries_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.GetTeamIcon
// [0x00424102] 
// Parameters infos:
// int                            TeamIndex                      ( CPF_Parm )
// class USurface*                theTeamIcon                    ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
// struct FColor                  theTeamColor                   ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

void ACTF_DDGRI::GetTeamIcon ( int TeamIndex, class USurface** theTeamIcon, struct FColor* theTeamColor )
{
	static UFunction* pFnGetTeamIcon = NULL;

	if ( ! pFnGetTeamIcon )
		pFnGetTeamIcon = (UFunction*) UObject::GObjObjects()->Data[ 83129 ];

	ACTF_DDGRI_execGetTeamIcon_Parms GetTeamIcon_Parms;
	GetTeamIcon_Parms.TeamIndex = TeamIndex;

	this->ProcessEvent ( pFnGetTeamIcon, &GetTeamIcon_Parms, NULL );

	if ( theTeamIcon )
		*theTeamIcon = GetTeamIcon_Parms.theTeamIcon;

	if ( theTeamColor )
		memcpy ( theTeamColor, &GetTeamIcon_Parms.theTeamColor, 0x4 );
};

// Function DunDefSpecial.CTF_DDGRI.IsTeamCompetitive
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ACTF_DDGRI::IsTeamCompetitive ( )
{
	static UFunction* pFnIsTeamCompetitive = NULL;

	if ( ! pFnIsTeamCompetitive )
		pFnIsTeamCompetitive = (UFunction*) UObject::GObjObjects()->Data[ 83127 ];

	ACTF_DDGRI_execIsTeamCompetitive_Parms IsTeamCompetitive_Parms;

	this->ProcessEvent ( pFnIsTeamCompetitive, &IsTeamCompetitive_Parms, NULL );

	return IsTeamCompetitive_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.AllowChatBetween
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerReplicationInfo*  myPlayer                       ( CPF_Parm )
// class APlayerReplicationInfo*  TheirPlayer                    ( CPF_Parm )

bool ACTF_DDGRI::AllowChatBetween ( class APlayerReplicationInfo* myPlayer, class APlayerReplicationInfo* TheirPlayer )
{
	static UFunction* pFnAllowChatBetween = NULL;

	if ( ! pFnAllowChatBetween )
		pFnAllowChatBetween = (UFunction*) UObject::GObjObjects()->Data[ 83123 ];

	ACTF_DDGRI_execAllowChatBetween_Parms AllowChatBetween_Parms;
	AllowChatBetween_Parms.myPlayer = myPlayer;
	AllowChatBetween_Parms.TheirPlayer = TheirPlayer;

	this->ProcessEvent ( pFnAllowChatBetween, &AllowChatBetween_Parms, NULL );

	return AllowChatBetween_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.GetTeamThatHasFlag
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ACTF_DDGRI::GetTeamThatHasFlag ( )
{
	static UFunction* pFnGetTeamThatHasFlag = NULL;

	if ( ! pFnGetTeamThatHasFlag )
		pFnGetTeamThatHasFlag = (UFunction*) UObject::GObjObjects()->Data[ 83120 ];

	ACTF_DDGRI_execGetTeamThatHasFlag_Parms GetTeamThatHasFlag_Parms;

	this->ProcessEvent ( pFnGetTeamThatHasFlag, &GetTeamThatHasFlag_Parms, NULL );

	return GetTeamThatHasFlag_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.DoLevelVictory
// [0x00020102] 
// Parameters infos:

void ACTF_DDGRI::DoLevelVictory ( )
{
	static UFunction* pFnDoLevelVictory = NULL;

	if ( ! pFnDoLevelVictory )
		pFnDoLevelVictory = (UFunction*) UObject::GObjObjects()->Data[ 83119 ];

	ACTF_DDGRI_execDoLevelVictory_Parms DoLevelVictory_Parms;

	this->ProcessEvent ( pFnDoLevelVictory, &DoLevelVictory_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.GiveWinningBonus
// [0x00020002] 
// Parameters infos:

void ACTF_DDGRI::GiveWinningBonus ( )
{
	static UFunction* pFnGiveWinningBonus = NULL;

	if ( ! pFnGiveWinningBonus )
		pFnGiveWinningBonus = (UFunction*) UObject::GObjObjects()->Data[ 83115 ];

	ACTF_DDGRI_execGiveWinningBonus_Parms GiveWinningBonus_Parms;

	this->ProcessEvent ( pFnGiveWinningBonus, &GiveWinningBonus_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.WonGame
// [0x00024102] 
// Parameters infos:
// class ADunDefPlayerReplicationInfo* theWinningPlayer               ( CPF_Parm )
// int                            WinningTeamIndex               ( CPF_OptionalParm | CPF_Parm )

void ACTF_DDGRI::WonGame ( class ADunDefPlayerReplicationInfo* theWinningPlayer, int WinningTeamIndex )
{
	static UFunction* pFnWonGame = NULL;

	if ( ! pFnWonGame )
		pFnWonGame = (UFunction*) UObject::GObjObjects()->Data[ 83111 ];

	ACTF_DDGRI_execWonGame_Parms WonGame_Parms;
	WonGame_Parms.theWinningPlayer = theWinningPlayer;
	WonGame_Parms.WinningTeamIndex = WinningTeamIndex;

	this->ProcessEvent ( pFnWonGame, &WonGame_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.CheckAllReady
// [0x00020002] 
// Parameters infos:

void ACTF_DDGRI::CheckAllReady ( )
{
	static UFunction* pFnCheckAllReady = NULL;

	if ( ! pFnCheckAllReady )
		pFnCheckAllReady = (UFunction*) UObject::GObjObjects()->Data[ 83109 ];

	ACTF_DDGRI_execCheckAllReady_Parms CheckAllReady_Parms;

	this->ProcessEvent ( pFnCheckAllReady, &CheckAllReady_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.CheckReadyPlayers
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ACTF_DDGRI::CheckReadyPlayers ( )
{
	static UFunction* pFnCheckReadyPlayers = NULL;

	if ( ! pFnCheckReadyPlayers )
		pFnCheckReadyPlayers = (UFunction*) UObject::GObjObjects()->Data[ 83104 ];

	ACTF_DDGRI_execCheckReadyPlayers_Parms CheckReadyPlayers_Parms;

	this->ProcessEvent ( pFnCheckReadyPlayers, &CheckReadyPlayers_Parms, NULL );

	return CheckReadyPlayers_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.SetAllowCountDown
// [0x00020002] 
// Parameters infos:
// unsigned long                  setAllow                       ( CPF_Parm )

void ACTF_DDGRI::SetAllowCountDown ( unsigned long setAllow )
{
	static UFunction* pFnSetAllowCountDown = NULL;

	if ( ! pFnSetAllowCountDown )
		pFnSetAllowCountDown = (UFunction*) UObject::GObjObjects()->Data[ 83102 ];

	ACTF_DDGRI_execSetAllowCountDown_Parms SetAllowCountDown_Parms;
	SetAllowCountDown_Parms.setAllow = setAllow;

	this->ProcessEvent ( pFnSetAllowCountDown, &SetAllowCountDown_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.AllowGameCountDown
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ACTF_DDGRI::AllowGameCountDown ( )
{
	static UFunction* pFnAllowGameCountDown = NULL;

	if ( ! pFnAllowGameCountDown )
		pFnAllowGameCountDown = (UFunction*) UObject::GObjObjects()->Data[ 83100 ];

	ACTF_DDGRI_execAllowGameCountDown_Parms AllowGameCountDown_Parms;

	this->ProcessEvent ( pFnAllowGameCountDown, &AllowGameCountDown_Parms, NULL );

	return AllowGameCountDown_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.SetGameReady
// [0x00020002] 
// Parameters infos:

void ACTF_DDGRI::SetGameReady ( )
{
	static UFunction* pFnSetGameReady = NULL;

	if ( ! pFnSetGameReady )
		pFnSetGameReady = (UFunction*) UObject::GObjObjects()->Data[ 83098 ];

	ACTF_DDGRI_execSetGameReady_Parms SetGameReady_Parms;

	this->ProcessEvent ( pFnSetGameReady, &SetGameReady_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.SetGameTime
// [0x00020002] 
// Parameters infos:
// float                          NewTime                        ( CPF_Parm )

void ACTF_DDGRI::SetGameTime ( float NewTime )
{
	static UFunction* pFnSetGameTime = NULL;

	if ( ! pFnSetGameTime )
		pFnSetGameTime = (UFunction*) UObject::GObjObjects()->Data[ 83096 ];

	ACTF_DDGRI_execSetGameTime_Parms SetGameTime_Parms;
	SetGameTime_Parms.NewTime = NewTime;

	this->ProcessEvent ( pFnSetGameTime, &SetGameTime_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.UpdateGameTime
// [0x00020102] 
// Parameters infos:

void ACTF_DDGRI::UpdateGameTime ( )
{
	static UFunction* pFnUpdateGameTime = NULL;

	if ( ! pFnUpdateGameTime )
		pFnUpdateGameTime = (UFunction*) UObject::GObjObjects()->Data[ 83095 ];

	ACTF_DDGRI_execUpdateGameTime_Parms UpdateGameTime_Parms;

	this->ProcessEvent ( pFnUpdateGameTime, &UpdateGameTime_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ACTF_DDGRI::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 83093 ];

	ACTF_DDGRI_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.FilloutTeams
// [0x00020102] 
// Parameters infos:

void ACTF_DDGRI::FilloutTeams ( )
{
	static UFunction* pFnFilloutTeams = NULL;

	if ( ! pFnFilloutTeams )
		pFnFilloutTeams = (UFunction*) UObject::GObjObjects()->Data[ 83090 ];

	ACTF_DDGRI_execFilloutTeams_Parms FilloutTeams_Parms;

	this->ProcessEvent ( pFnFilloutTeams, &FilloutTeams_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.FlushTeams
// [0x00020102] 
// Parameters infos:

void ACTF_DDGRI::FlushTeams ( )
{
	static UFunction* pFnFlushTeams = NULL;

	if ( ! pFnFlushTeams )
		pFnFlushTeams = (UFunction*) UObject::GObjObjects()->Data[ 83088 ];

	ACTF_DDGRI_execFlushTeams_Parms FlushTeams_Parms;

	this->ProcessEvent ( pFnFlushTeams, &FlushTeams_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.AutoBalanceTeams
// [0x00020102] 
// Parameters infos:

void ACTF_DDGRI::AutoBalanceTeams ( )
{
	static UFunction* pFnAutoBalanceTeams = NULL;

	if ( ! pFnAutoBalanceTeams )
		pFnAutoBalanceTeams = (UFunction*) UObject::GObjObjects()->Data[ 83079 ];

	ACTF_DDGRI_execAutoBalanceTeams_Parms AutoBalanceTeams_Parms;

	this->ProcessEvent ( pFnAutoBalanceTeams, &AutoBalanceTeams_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.AutoSortTeams
// [0x00020102] 
// Parameters infos:

void ACTF_DDGRI::AutoSortTeams ( )
{
	static UFunction* pFnAutoSortTeams = NULL;

	if ( ! pFnAutoSortTeams )
		pFnAutoSortTeams = (UFunction*) UObject::GObjObjects()->Data[ 83076 ];

	ACTF_DDGRI_execAutoSortTeams_Parms AutoSortTeams_Parms;

	this->ProcessEvent ( pFnAutoSortTeams, &AutoSortTeams_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.GetLowestBalancedTeam
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ACTF_DDGRI::GetLowestBalancedTeam ( )
{
	static UFunction* pFnGetLowestBalancedTeam = NULL;

	if ( ! pFnGetLowestBalancedTeam )
		pFnGetLowestBalancedTeam = (UFunction*) UObject::GObjObjects()->Data[ 83069 ];

	ACTF_DDGRI_execGetLowestBalancedTeam_Parms GetLowestBalancedTeam_Parms;

	this->ProcessEvent ( pFnGetLowestBalancedTeam, &GetLowestBalancedTeam_Parms, NULL );

	return GetLowestBalancedTeam_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.IncrementTeamScore
// [0x00020002] 
// Parameters infos:
// int                            ScoringTeam                    ( CPF_Parm )
// int                            Score                          ( CPF_Parm )

void ACTF_DDGRI::IncrementTeamScore ( int ScoringTeam, int Score )
{
	static UFunction* pFnIncrementTeamScore = NULL;

	if ( ! pFnIncrementTeamScore )
		pFnIncrementTeamScore = (UFunction*) UObject::GObjObjects()->Data[ 83065 ];

	ACTF_DDGRI_execIncrementTeamScore_Parms IncrementTeamScore_Parms;
	IncrementTeamScore_Parms.ScoringTeam = ScoringTeam;
	IncrementTeamScore_Parms.Score = Score;

	this->ProcessEvent ( pFnIncrementTeamScore, &IncrementTeamScore_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ACTF_DDGRI::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 83064 ];

	ACTF_DDGRI_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.ModifyCustomColors
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayerController* aController                    ( CPF_Parm )
// class ADunDefPlayer*           aPlayer                        ( CPF_Parm )

void ACTF_DDGRI::ModifyCustomColors ( class ADunDefPlayerController* aController, class ADunDefPlayer* aPlayer )
{
	static UFunction* pFnModifyCustomColors = NULL;

	if ( ! pFnModifyCustomColors )
		pFnModifyCustomColors = (UFunction*) UObject::GObjObjects()->Data[ 83061 ];

	ACTF_DDGRI_execModifyCustomColors_Parms ModifyCustomColors_Parms;
	ModifyCustomColors_Parms.aController = aController;
	ModifyCustomColors_Parms.aPlayer = aPlayer;

	this->ProcessEvent ( pFnModifyCustomColors, &ModifyCustomColors_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.DrawExtraPlayerFloatingHUD
// [0x00820102] 
// Parameters infos:
// class ADunDefPlayer*           aPlayer                        ( CPF_Parm )
// class ADunDefHUD*              H                              ( CPF_Parm )

void ACTF_DDGRI::DrawExtraPlayerFloatingHUD ( class ADunDefPlayer* aPlayer, class ADunDefHUD* H )
{
	static UFunction* pFnDrawExtraPlayerFloatingHUD = NULL;

	if ( ! pFnDrawExtraPlayerFloatingHUD )
		pFnDrawExtraPlayerFloatingHUD = (UFunction*) UObject::GObjObjects()->Data[ 83049 ];

	ACTF_DDGRI_execDrawExtraPlayerFloatingHUD_Parms DrawExtraPlayerFloatingHUD_Parms;
	DrawExtraPlayerFloatingHUD_Parms.aPlayer = aPlayer;
	DrawExtraPlayerFloatingHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawExtraPlayerFloatingHUD, &DrawExtraPlayerFloatingHUD_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.GetTeamScores
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ACTF_DDGRI::GetTeamScores ( )
{
	static UFunction* pFnGetTeamScores = NULL;

	if ( ! pFnGetTeamScores )
		pFnGetTeamScores = (UFunction*) UObject::GObjObjects()->Data[ 82914 ];

	ACTF_DDGRI_execGetTeamScores_Parms GetTeamScores_Parms;

	this->ProcessEvent ( pFnGetTeamScores, &GetTeamScores_Parms, NULL );

	return GetTeamScores_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.Server_AddGRIHeroAbilities
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )

void ACTF_DDGRI::Server_AddGRIHeroAbilities ( class ADunDefPlayerController* PC )
{
	static UFunction* pFnServer_AddGRIHeroAbilities = NULL;

	if ( ! pFnServer_AddGRIHeroAbilities )
		pFnServer_AddGRIHeroAbilities = (UFunction*) UObject::GObjObjects()->Data[ 83039 ];

	ACTF_DDGRI_execServer_AddGRIHeroAbilities_Parms Server_AddGRIHeroAbilities_Parms;
	Server_AddGRIHeroAbilities_Parms.PC = PC;

	this->ProcessEvent ( pFnServer_AddGRIHeroAbilities, &Server_AddGRIHeroAbilities_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.GetColorString
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FColor                  aColor                         ( CPF_Parm )

struct FString ACTF_DDGRI::GetColorString ( struct FColor aColor )
{
	static UFunction* pFnGetColorString = NULL;

	if ( ! pFnGetColorString )
		pFnGetColorString = (UFunction*) UObject::GObjObjects()->Data[ 83036 ];

	ACTF_DDGRI_execGetColorString_Parms GetColorString_Parms;
	memcpy ( &GetColorString_Parms.aColor, &aColor, 0x4 );

	this->ProcessEvent ( pFnGetColorString, &GetColorString_Parms, NULL );

	return GetColorString_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.GetTeamLists
// [0x00024102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            TeamOnlyCheck                  ( CPF_Parm )
// unsigned long                  bWantsReadyCheck               ( CPF_OptionalParm | CPF_Parm )

struct FString ACTF_DDGRI::GetTeamLists ( int TeamOnlyCheck, unsigned long bWantsReadyCheck )
{
	static UFunction* pFnGetTeamLists = NULL;

	if ( ! pFnGetTeamLists )
		pFnGetTeamLists = (UFunction*) UObject::GObjObjects()->Data[ 83029 ];

	ACTF_DDGRI_execGetTeamLists_Parms GetTeamLists_Parms;
	GetTeamLists_Parms.TeamOnlyCheck = TeamOnlyCheck;
	GetTeamLists_Parms.bWantsReadyCheck = bWantsReadyCheck;

	this->ProcessEvent ( pFnGetTeamLists, &GetTeamLists_Parms, NULL );

	return GetTeamLists_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.GetCompetitivePlayerList
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ACTF_DDGRI::GetCompetitivePlayerList ( )
{
	static UFunction* pFnGetCompetitivePlayerList = NULL;

	if ( ! pFnGetCompetitivePlayerList )
		pFnGetCompetitivePlayerList = (UFunction*) UObject::GObjObjects()->Data[ 83024 ];

	ACTF_DDGRI_execGetCompetitivePlayerList_Parms GetCompetitivePlayerList_Parms;

	this->ProcessEvent ( pFnGetCompetitivePlayerList, &GetCompetitivePlayerList_Parms, NULL );

	return GetCompetitivePlayerList_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.DestroyTowerOnOwnerLeft
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower*            aTower                         ( CPF_Parm )

bool ACTF_DDGRI::DestroyTowerOnOwnerLeft ( class ADunDefTower* aTower )
{
	static UFunction* pFnDestroyTowerOnOwnerLeft = NULL;

	if ( ! pFnDestroyTowerOnOwnerLeft )
		pFnDestroyTowerOnOwnerLeft = (UFunction*) UObject::GObjObjects()->Data[ 83021 ];

	ACTF_DDGRI_execDestroyTowerOnOwnerLeft_Parms DestroyTowerOnOwnerLeft_Parms;
	DestroyTowerOnOwnerLeft_Parms.aTower = aTower;

	this->ProcessEvent ( pFnDestroyTowerOnOwnerLeft, &DestroyTowerOnOwnerLeft_Parms, NULL );

	return DestroyTowerOnOwnerLeft_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.GetMaxTowerUnits
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerReplicationInfo* ddPRI                          ( CPF_Parm )

int ACTF_DDGRI::GetMaxTowerUnits ( class ADunDefPlayerReplicationInfo* ddPRI )
{
	static UFunction* pFnGetMaxTowerUnits = NULL;

	if ( ! pFnGetMaxTowerUnits )
		pFnGetMaxTowerUnits = (UFunction*) UObject::GObjObjects()->Data[ 82912 ];

	ACTF_DDGRI_execGetMaxTowerUnits_Parms GetMaxTowerUnits_Parms;
	GetMaxTowerUnits_Parms.ddPRI = ddPRI;

	this->ProcessEvent ( pFnGetMaxTowerUnits, &GetMaxTowerUnits_Parms, NULL );

	return GetMaxTowerUnits_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.GetAltCurrentTowerUnits
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerReplicationInfo* ddPRI                          ( CPF_Parm )

int ACTF_DDGRI::GetAltCurrentTowerUnits ( class ADunDefPlayerReplicationInfo* ddPRI )
{
	static UFunction* pFnGetAltCurrentTowerUnits = NULL;

	if ( ! pFnGetAltCurrentTowerUnits )
		pFnGetAltCurrentTowerUnits = (UFunction*) UObject::GObjObjects()->Data[ 82910 ];

	ACTF_DDGRI_execGetAltCurrentTowerUnits_Parms GetAltCurrentTowerUnits_Parms;
	GetAltCurrentTowerUnits_Parms.ddPRI = ddPRI;

	this->ProcessEvent ( pFnGetAltCurrentTowerUnits, &GetAltCurrentTowerUnits_Parms, NULL );

	return GetAltCurrentTowerUnits_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.GetCurrentTowerUnits
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerReplicationInfo* ddPRI                          ( CPF_Parm )

int ACTF_DDGRI::GetCurrentTowerUnits ( class ADunDefPlayerReplicationInfo* ddPRI )
{
	static UFunction* pFnGetCurrentTowerUnits = NULL;

	if ( ! pFnGetCurrentTowerUnits )
		pFnGetCurrentTowerUnits = (UFunction*) UObject::GObjObjects()->Data[ 82908 ];

	ACTF_DDGRI_execGetCurrentTowerUnits_Parms GetCurrentTowerUnits_Parms;
	GetCurrentTowerUnits_Parms.ddPRI = ddPRI;

	this->ProcessEvent ( pFnGetCurrentTowerUnits, &GetCurrentTowerUnits_Parms, NULL );

	return GetCurrentTowerUnits_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.CanPlaceTowerUnitCost
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Cost                           ( CPF_Parm )
// class ADunDefPlayerController* ForPlayer                      ( CPF_Parm )
// class ADunDefTower*            tower                          ( CPF_OptionalParm | CPF_Parm )

bool ACTF_DDGRI::CanPlaceTowerUnitCost ( int Cost, class ADunDefPlayerController* ForPlayer, class ADunDefTower* tower )
{
	static UFunction* pFnCanPlaceTowerUnitCost = NULL;

	if ( ! pFnCanPlaceTowerUnitCost )
		pFnCanPlaceTowerUnitCost = (UFunction*) UObject::GObjObjects()->Data[ 83012 ];

	ACTF_DDGRI_execCanPlaceTowerUnitCost_Parms CanPlaceTowerUnitCost_Parms;
	CanPlaceTowerUnitCost_Parms.Cost = Cost;
	CanPlaceTowerUnitCost_Parms.ForPlayer = ForPlayer;
	CanPlaceTowerUnitCost_Parms.tower = tower;

	this->ProcessEvent ( pFnCanPlaceTowerUnitCost, &CanPlaceTowerUnitCost_Parms, NULL );

	return CanPlaceTowerUnitCost_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.RemovedTower
// [0x00020002] 
// Parameters infos:
// class ADunDefTower*            tower                          ( CPF_Parm )

void ACTF_DDGRI::RemovedTower ( class ADunDefTower* tower )
{
	static UFunction* pFnRemovedTower = NULL;

	if ( ! pFnRemovedTower )
		pFnRemovedTower = (UFunction*) UObject::GObjObjects()->Data[ 83010 ];

	ACTF_DDGRI_execRemovedTower_Parms RemovedTower_Parms;
	RemovedTower_Parms.tower = tower;

	this->ProcessEvent ( pFnRemovedTower, &RemovedTower_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.AddedTower
// [0x00020002] 
// Parameters infos:
// class ADunDefTower*            tower                          ( CPF_Parm )

void ACTF_DDGRI::AddedTower ( class ADunDefTower* tower )
{
	static UFunction* pFnAddedTower = NULL;

	if ( ! pFnAddedTower )
		pFnAddedTower = (UFunction*) UObject::GObjObjects()->Data[ 83007 ];

	ACTF_DDGRI_execAddedTower_Parms AddedTower_Parms;
	AddedTower_Parms.tower = tower;

	this->ProcessEvent ( pFnAddedTower, &AddedTower_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.RemovePlayerFromTeam
// [0x00020102] 
// Parameters infos:
// class ACTF_DDPRI*              aPRI                           ( CPF_Parm )
// int                            TeamIndex                      ( CPF_Parm )

void ACTF_DDGRI::RemovePlayerFromTeam ( class ACTF_DDPRI* aPRI, int TeamIndex )
{
	static UFunction* pFnRemovePlayerFromTeam = NULL;

	if ( ! pFnRemovePlayerFromTeam )
		pFnRemovePlayerFromTeam = (UFunction*) UObject::GObjObjects()->Data[ 83004 ];

	ACTF_DDGRI_execRemovePlayerFromTeam_Parms RemovePlayerFromTeam_Parms;
	RemovePlayerFromTeam_Parms.aPRI = aPRI;
	RemovePlayerFromTeam_Parms.TeamIndex = TeamIndex;

	this->ProcessEvent ( pFnRemovePlayerFromTeam, &RemovePlayerFromTeam_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.AddPlayerToTeam
// [0x00020102] 
// Parameters infos:
// class ACTF_DDPRI*              aPRI                           ( CPF_Parm )
// int                            TeamIndex                      ( CPF_Parm )

void ACTF_DDGRI::AddPlayerToTeam ( class ACTF_DDPRI* aPRI, int TeamIndex )
{
	static UFunction* pFnAddPlayerToTeam = NULL;

	if ( ! pFnAddPlayerToTeam )
		pFnAddPlayerToTeam = (UFunction*) UObject::GObjObjects()->Data[ 83001 ];

	ACTF_DDGRI_execAddPlayerToTeam_Parms AddPlayerToTeam_Parms;
	AddPlayerToTeam_Parms.aPRI = aPRI;
	AddPlayerToTeam_Parms.TeamIndex = TeamIndex;

	this->ProcessEvent ( pFnAddPlayerToTeam, &AddPlayerToTeam_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.RemoveFromAnyTeams
// [0x00020102] 
// Parameters infos:
// class ACTF_DDPRI*              aPRI                           ( CPF_Parm )

void ACTF_DDGRI::RemoveFromAnyTeams ( class ACTF_DDPRI* aPRI )
{
	static UFunction* pFnRemoveFromAnyTeams = NULL;

	if ( ! pFnRemoveFromAnyTeams )
		pFnRemoveFromAnyTeams = (UFunction*) UObject::GObjObjects()->Data[ 82998 ];

	ACTF_DDGRI_execRemoveFromAnyTeams_Parms RemoveFromAnyTeams_Parms;
	RemoveFromAnyTeams_Parms.aPRI = aPRI;

	this->ProcessEvent ( pFnRemoveFromAnyTeams, &RemoveFromAnyTeams_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDGRI.GetSmallestTeam
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ACTF_DDGRI::GetSmallestTeam ( )
{
	static UFunction* pFnGetSmallestTeam = NULL;

	if ( ! pFnGetSmallestTeam )
		pFnGetSmallestTeam = (UFunction*) UObject::GObjObjects()->Data[ 82993 ];

	ACTF_DDGRI_execGetSmallestTeam_Parms GetSmallestTeam_Parms;

	this->ProcessEvent ( pFnGetSmallestTeam, &GetSmallestTeam_Parms, NULL );

	return GetSmallestTeam_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_DDGRI.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ACTF_DDGRI::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 82976 ];

	ACTF_DDGRI_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDPC.AdjustDamage
// [0x00424002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// int                            inDamage                       ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )

void ACTF_DDPC::AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, int* inDamage, struct FVector* Momentum )
{
	static UFunction* pFnAdjustDamage = NULL;

	if ( ! pFnAdjustDamage )
		pFnAdjustDamage = (UFunction*) UObject::GObjObjects()->Data[ 83250 ];

	ACTF_DDPC_execAdjustDamage_Parms AdjustDamage_Parms;
	AdjustDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &AdjustDamage_Parms.HitLocation, &HitLocation, 0xC );
	AdjustDamage_Parms.DamageType = DamageType;
	memcpy ( &AdjustDamage_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnAdjustDamage, &AdjustDamage_Parms, NULL );

	if ( inDamage )
		*inDamage = AdjustDamage_Parms.inDamage;

	if ( Momentum )
		memcpy ( Momentum, &AdjustDamage_Parms.Momentum, 0xC );
};

// Function DunDefSpecial.CTF_DDPC.PawnDied
// [0x00020002] 
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )

void ACTF_DDPC::PawnDied ( class APawn* inPawn )
{
	static UFunction* pFnPawnDied = NULL;

	if ( ! pFnPawnDied )
		pFnPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 83248 ];

	ACTF_DDPC_execPawnDied_Parms PawnDied_Parms;
	PawnDied_Parms.inPawn = inPawn;

	this->ProcessEvent ( pFnPawnDied, &PawnDied_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDPC.GiveFlag
// [0x00020102] 
// Parameters infos:
// class ACTF_Flag*               newFlag                        ( CPF_Parm )

void ACTF_DDPC::GiveFlag ( class ACTF_Flag* newFlag )
{
	static UFunction* pFnGiveFlag = NULL;

	if ( ! pFnGiveFlag )
		pFnGiveFlag = (UFunction*) UObject::GObjObjects()->Data[ 83246 ];

	ACTF_DDPC_execGiveFlag_Parms GiveFlag_Parms;
	GiveFlag_Parms.newFlag = newFlag;

	this->ProcessEvent ( pFnGiveFlag, &GiveFlag_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDPC.SetIsReady
// [0x002240C2] 
// Parameters infos:
// unsigned long                  bIsReady                       ( CPF_OptionalParm | CPF_Parm )

void ACTF_DDPC::SetIsReady ( unsigned long bIsReady )
{
	static UFunction* pFnSetIsReady = NULL;

	if ( ! pFnSetIsReady )
		pFnSetIsReady = (UFunction*) UObject::GObjObjects()->Data[ 83244 ];

	ACTF_DDPC_execSetIsReady_Parms SetIsReady_Parms;
	SetIsReady_Parms.bIsReady = bIsReady;

	this->ProcessEvent ( pFnSetIsReady, &SetIsReady_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDPC.SetDesiredTeam
// [0x002200C2] 
// Parameters infos:
// int                            desiredTeam                    ( CPF_Parm )

void ACTF_DDPC::SetDesiredTeam ( int desiredTeam )
{
	static UFunction* pFnSetDesiredTeam = NULL;

	if ( ! pFnSetDesiredTeam )
		pFnSetDesiredTeam = (UFunction*) UObject::GObjObjects()->Data[ 83242 ];

	ACTF_DDPC_execSetDesiredTeam_Parms SetDesiredTeam_Parms;
	SetDesiredTeam_Parms.desiredTeam = desiredTeam;

	this->ProcessEvent ( pFnSetDesiredTeam, &SetDesiredTeam_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDPC.CreateHUD
// [0x00020002] 
// Parameters infos:

void ACTF_DDPC::CreateHUD ( )
{
	static UFunction* pFnCreateHUD = NULL;

	if ( ! pFnCreateHUD )
		pFnCreateHUD = (UFunction*) UObject::GObjObjects()->Data[ 83239 ];

	ACTF_DDPC_execCreateHUD_Parms CreateHUD_Parms;

	this->ProcessEvent ( pFnCreateHUD, &CreateHUD_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDPC.LocalAttemptSpawn
// [0x00020102] 
// Parameters infos:

void ACTF_DDPC::LocalAttemptSpawn ( )
{
	static UFunction* pFnLocalAttemptSpawn = NULL;

	if ( ! pFnLocalAttemptSpawn )
		pFnLocalAttemptSpawn = (UFunction*) UObject::GObjObjects()->Data[ 83236 ];

	ACTF_DDPC_execLocalAttemptSpawn_Parms LocalAttemptSpawn_Parms;

	this->ProcessEvent ( pFnLocalAttemptSpawn, &LocalAttemptSpawn_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDPC.ServerRestartPlayer
// [0x002200C2] 
// Parameters infos:

void ACTF_DDPC::ServerRestartPlayer ( )
{
	static UFunction* pFnServerRestartPlayer = NULL;

	if ( ! pFnServerRestartPlayer )
		pFnServerRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 83235 ];

	ACTF_DDPC_execServerRestartPlayer_Parms ServerRestartPlayer_Parms;

	this->ProcessEvent ( pFnServerRestartPlayer, &ServerRestartPlayer_Parms, NULL );
};

// Function DunDefSpecial.CTF_DDPC.ShowTeamSelectionUI
// [0x00020000] 
// Parameters infos:

void ACTF_DDPC::ShowTeamSelectionUI ( )
{
	static UFunction* pFnShowTeamSelectionUI = NULL;

	if ( ! pFnShowTeamSelectionUI )
		pFnShowTeamSelectionUI = (UFunction*) UObject::GObjObjects()->Data[ 83228 ];

	ACTF_DDPC_execShowTeamSelectionUI_Parms ShowTeamSelectionUI_Parms;

	this->ProcessEvent ( pFnShowTeamSelectionUI, &ShowTeamSelectionUI_Parms, NULL );
};

// Function DunDefSpecial.CTD_DDGRI.AllowedToTeleport
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   Teleportee                     ( CPF_Parm )

bool ACTD_DDGRI::AllowedToTeleport ( class APawn* Teleportee )
{
	static UFunction* pFnAllowedToTeleport = NULL;

	if ( ! pFnAllowedToTeleport )
		pFnAllowedToTeleport = (UFunction*) UObject::GObjObjects()->Data[ 83221 ];

	ACTD_DDGRI_execAllowedToTeleport_Parms AllowedToTeleport_Parms;
	AllowedToTeleport_Parms.Teleportee = Teleportee;

	this->ProcessEvent ( pFnAllowedToTeleport, &AllowedToTeleport_Parms, NULL );

	return AllowedToTeleport_Parms.ReturnValue;
};

// Function DunDefSpecial.CTD_DDGRI.DoLevelVictory
// [0x00020102] 
// Parameters infos:

void ACTD_DDGRI::DoLevelVictory ( )
{
	static UFunction* pFnDoLevelVictory = NULL;

	if ( ! pFnDoLevelVictory )
		pFnDoLevelVictory = (UFunction*) UObject::GObjObjects()->Data[ 83220 ];

	ACTD_DDGRI_execDoLevelVictory_Parms DoLevelVictory_Parms;

	this->ProcessEvent ( pFnDoLevelVictory, &DoLevelVictory_Parms, NULL );
};

// Function DunDefSpecial.CTD_DDGRI.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ACTD_DDGRI::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 83218 ];

	ACTD_DDGRI_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.CTD_DDGRI.GetSkipBuildPhaseString
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ACTD_DDGRI::GetSkipBuildPhaseString ( )
{
	static UFunction* pFnGetSkipBuildPhaseString = NULL;

	if ( ! pFnGetSkipBuildPhaseString )
		pFnGetSkipBuildPhaseString = (UFunction*) UObject::GObjObjects()->Data[ 83212 ];

	ACTD_DDGRI_execGetSkipBuildPhaseString_Parms GetSkipBuildPhaseString_Parms;

	this->ProcessEvent ( pFnGetSkipBuildPhaseString, &GetSkipBuildPhaseString_Parms, NULL );

	return GetSkipBuildPhaseString_Parms.ReturnValue;
};

// Function DunDefSpecial.CTD_DDGRI.DrawExtraPlayerFloatingHUD
// [0x00020100] 
// Parameters infos:
// class ADunDefPlayer*           aPlayer                        ( CPF_Parm )
// class ADunDefHUD*              H                              ( CPF_Parm )

void ACTD_DDGRI::DrawExtraPlayerFloatingHUD ( class ADunDefPlayer* aPlayer, class ADunDefHUD* H )
{
	static UFunction* pFnDrawExtraPlayerFloatingHUD = NULL;

	if ( ! pFnDrawExtraPlayerFloatingHUD )
		pFnDrawExtraPlayerFloatingHUD = (UFunction*) UObject::GObjObjects()->Data[ 83209 ];

	ACTD_DDGRI_execDrawExtraPlayerFloatingHUD_Parms DrawExtraPlayerFloatingHUD_Parms;
	DrawExtraPlayerFloatingHUD_Parms.aPlayer = aPlayer;
	DrawExtraPlayerFloatingHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawExtraPlayerFloatingHUD, &DrawExtraPlayerFloatingHUD_Parms, NULL );
};

// Function DunDefSpecial.CTD_DDGRI.Server_AddGRIHeroAbilities
// [0x00020000] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )

void ACTD_DDGRI::Server_AddGRIHeroAbilities ( class ADunDefPlayerController* PC )
{
	static UFunction* pFnServer_AddGRIHeroAbilities = NULL;

	if ( ! pFnServer_AddGRIHeroAbilities )
		pFnServer_AddGRIHeroAbilities = (UFunction*) UObject::GObjObjects()->Data[ 83207 ];

	ACTD_DDGRI_execServer_AddGRIHeroAbilities_Parms Server_AddGRIHeroAbilities_Parms;
	Server_AddGRIHeroAbilities_Parms.PC = PC;

	this->ProcessEvent ( pFnServer_AddGRIHeroAbilities, &Server_AddGRIHeroAbilities_Parms, NULL );
};

// Function DunDefSpecial.CTD_DDGRI.DestroyTowerOnOwnerLeft
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower*            aTower                         ( CPF_Parm )

bool ACTD_DDGRI::DestroyTowerOnOwnerLeft ( class ADunDefTower* aTower )
{
	static UFunction* pFnDestroyTowerOnOwnerLeft = NULL;

	if ( ! pFnDestroyTowerOnOwnerLeft )
		pFnDestroyTowerOnOwnerLeft = (UFunction*) UObject::GObjObjects()->Data[ 83204 ];

	ACTD_DDGRI_execDestroyTowerOnOwnerLeft_Parms DestroyTowerOnOwnerLeft_Parms;
	DestroyTowerOnOwnerLeft_Parms.aTower = aTower;

	this->ProcessEvent ( pFnDestroyTowerOnOwnerLeft, &DestroyTowerOnOwnerLeft_Parms, NULL );

	return DestroyTowerOnOwnerLeft_Parms.ReturnValue;
};

// Function DunDefSpecial.CTD_DDGRI.AllowActivatingCrystal
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ACTD_DDGRI::AllowActivatingCrystal ( )
{
	static UFunction* pFnAllowActivatingCrystal = NULL;

	if ( ! pFnAllowActivatingCrystal )
		pFnAllowActivatingCrystal = (UFunction*) UObject::GObjObjects()->Data[ 83202 ];

	ACTD_DDGRI_execAllowActivatingCrystal_Parms AllowActivatingCrystal_Parms;

	this->ProcessEvent ( pFnAllowActivatingCrystal, &AllowActivatingCrystal_Parms, NULL );

	return AllowActivatingCrystal_Parms.ReturnValue;
};

// Function DunDefSpecial.CTD_DDGRI.SetGameReady
// [0x00020002] 
// Parameters infos:

void ACTD_DDGRI::SetGameReady ( )
{
	static UFunction* pFnSetGameReady = NULL;

	if ( ! pFnSetGameReady )
		pFnSetGameReady = (UFunction*) UObject::GObjObjects()->Data[ 83201 ];

	ACTD_DDGRI_execSetGameReady_Parms SetGameReady_Parms;

	this->ProcessEvent ( pFnSetGameReady, &SetGameReady_Parms, NULL );
};

// Function DunDefSpecial.UI_TeamSelect.OnInterceptedInputKey
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInputEventParameters   EventParms                     ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UUI_TeamSelect::OnInterceptedInputKey ( struct FInputEventParameters* EventParms )
{
	static UFunction* pFnOnInterceptedInputKey = NULL;

	if ( ! pFnOnInterceptedInputKey )
		pFnOnInterceptedInputKey = (UFunction*) UObject::GObjObjects()->Data[ 89415 ];

	UUI_TeamSelect_execOnInterceptedInputKey_Parms OnInterceptedInputKey_Parms;

	this->ProcessEvent ( pFnOnInterceptedInputKey, &OnInterceptedInputKey_Parms, NULL );

	if ( EventParms )
		memcpy ( EventParms, &OnInterceptedInputKey_Parms.EventParms, 0x20 );

	return OnInterceptedInputKey_Parms.ReturnValue;
};

// Function DunDefSpecial.UI_TeamSelect.NotifyWidgetClicked
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIObject*               Widget                         ( CPF_Parm )

bool UUI_TeamSelect::eventNotifyWidgetClicked ( class UUIObject* Widget )
{
	static UFunction* pFnNotifyWidgetClicked = NULL;

	if ( ! pFnNotifyWidgetClicked )
		pFnNotifyWidgetClicked = (UFunction*) UObject::GObjObjects()->Data[ 89409 ];

	UUI_TeamSelect_eventNotifyWidgetClicked_Parms NotifyWidgetClicked_Parms;
	NotifyWidgetClicked_Parms.Widget = Widget;

	this->ProcessEvent ( pFnNotifyWidgetClicked, &NotifyWidgetClicked_Parms, NULL );

	return NotifyWidgetClicked_Parms.ReturnValue;
};

// Function DunDefSpecial.UI_TeamSelect.Update
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UUI_TeamSelect::Update ( float DeltaTime )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 89405 ];

	UUI_TeamSelect_execUpdate_Parms Update_Parms;
	Update_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );
};

// Function DunDefSpecial.UI_TeamSelect.SceneActivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInitialActivation             ( CPF_Parm )

void UUI_TeamSelect::eventSceneActivated ( unsigned long bInitialActivation )
{
	static UFunction* pFnSceneActivated = NULL;

	if ( ! pFnSceneActivated )
		pFnSceneActivated = (UFunction*) UObject::GObjObjects()->Data[ 89403 ];

	UUI_TeamSelect_eventSceneActivated_Parms SceneActivated_Parms;
	SceneActivated_Parms.bInitialActivation = bInitialActivation;

	this->ProcessEvent ( pFnSceneActivated, &SceneActivated_Parms, NULL );
};

// Function DunDefSpecial.CTF_GameInfo.AdjustDTDamage
// [0x00424002] 
// Parameters infos:
// class ADunDefDamageableTarget* forDT                          ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// int                            inDamage                       ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )

void ACTF_GameInfo::AdjustDTDamage ( class ADunDefDamageableTarget* forDT, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, int* inDamage, struct FVector* Momentum )
{
	static UFunction* pFnAdjustDTDamage = NULL;

	if ( ! pFnAdjustDTDamage )
		pFnAdjustDTDamage = (UFunction*) UObject::GObjObjects()->Data[ 83300 ];

	ACTF_GameInfo_execAdjustDTDamage_Parms AdjustDTDamage_Parms;
	AdjustDTDamage_Parms.forDT = forDT;
	AdjustDTDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &AdjustDTDamage_Parms.HitLocation, &HitLocation, 0xC );
	AdjustDTDamage_Parms.DamageType = DamageType;
	memcpy ( &AdjustDTDamage_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnAdjustDTDamage, &AdjustDTDamage_Parms, NULL );

	if ( inDamage )
		*inDamage = AdjustDTDamage_Parms.inDamage;

	if ( Momentum )
		memcpy ( Momentum, &AdjustDTDamage_Parms.Momentum, 0xC );
};

// Function DunDefSpecial.CTF_GameInfo.AdjustPawnDamage
// [0x00424002] 
// Parameters infos:
// class ADunDefPawn*             forPawn                        ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// int                            inDamage                       ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )

void ACTF_GameInfo::AdjustPawnDamage ( class ADunDefPawn* forPawn, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, int* inDamage, struct FVector* Momentum )
{
	static UFunction* pFnAdjustPawnDamage = NULL;

	if ( ! pFnAdjustPawnDamage )
		pFnAdjustPawnDamage = (UFunction*) UObject::GObjObjects()->Data[ 83292 ];

	ACTF_GameInfo_execAdjustPawnDamage_Parms AdjustPawnDamage_Parms;
	AdjustPawnDamage_Parms.forPawn = forPawn;
	AdjustPawnDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &AdjustPawnDamage_Parms.HitLocation, &HitLocation, 0xC );
	AdjustPawnDamage_Parms.DamageType = DamageType;
	memcpy ( &AdjustPawnDamage_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnAdjustPawnDamage, &AdjustPawnDamage_Parms, NULL );

	if ( inDamage )
		*inDamage = AdjustPawnDamage_Parms.inDamage;

	if ( Momentum )
		memcpy ( Momentum, &AdjustPawnDamage_Parms.Momentum, 0xC );
};

// Function DunDefSpecial.CTF_GameInfo.GetPlayerTeamForStart
// [0x00024002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Player                         ( CPF_Parm )
// unsigned char                  InTeam                         ( CPF_OptionalParm | CPF_Parm )

unsigned char ACTF_GameInfo::GetPlayerTeamForStart ( class AController* Player, unsigned char InTeam )
{
	static UFunction* pFnGetPlayerTeamForStart = NULL;

	if ( ! pFnGetPlayerTeamForStart )
		pFnGetPlayerTeamForStart = (UFunction*) UObject::GObjObjects()->Data[ 83288 ];

	ACTF_GameInfo_execGetPlayerTeamForStart_Parms GetPlayerTeamForStart_Parms;
	GetPlayerTeamForStart_Parms.Player = Player;
	GetPlayerTeamForStart_Parms.InTeam = InTeam;

	this->ProcessEvent ( pFnGetPlayerTeamForStart, &GetPlayerTeamForStart_Parms, NULL );

	return GetPlayerTeamForStart_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_GameInfo.CheckScore
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerReplicationInfo*  Scorer                         ( CPF_Parm )

bool ACTF_GameInfo::CheckScore ( class APlayerReplicationInfo* Scorer )
{
	static UFunction* pFnCheckScore = NULL;

	if ( ! pFnCheckScore )
		pFnCheckScore = (UFunction*) UObject::GObjObjects()->Data[ 83285 ];

	ACTF_GameInfo_execCheckScore_Parms CheckScore_Parms;
	CheckScore_Parms.Scorer = Scorer;

	this->ProcessEvent ( pFnCheckScore, &CheckScore_Parms, NULL );

	return CheckScore_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_GameInfo.ScoreKill
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             Other                          ( CPF_Parm )

void ACTF_GameInfo::ScoreKill ( class AController* Killer, class AController* Other )
{
	static UFunction* pFnScoreKill = NULL;

	if ( ! pFnScoreKill )
		pFnScoreKill = (UFunction*) UObject::GObjObjects()->Data[ 83282 ];

	ACTF_GameInfo_execScoreKill_Parms ScoreKill_Parms;
	ScoreKill_Parms.Killer = Killer;
	ScoreKill_Parms.Other = Other;

	this->ProcessEvent ( pFnScoreKill, &ScoreKill_Parms, NULL );
};

// Function DunDefSpecial.CTF_GameInfo.ScoreObjective
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  Scorer                         ( CPF_Parm )
// int                            Score                          ( CPF_Parm )

void ACTF_GameInfo::ScoreObjective ( class APlayerReplicationInfo* Scorer, int Score )
{
	static UFunction* pFnScoreObjective = NULL;

	if ( ! pFnScoreObjective )
		pFnScoreObjective = (UFunction*) UObject::GObjObjects()->Data[ 83277 ];

	ACTF_GameInfo_execScoreObjective_Parms ScoreObjective_Parms;
	ScoreObjective_Parms.Scorer = Scorer;
	ScoreObjective_Parms.Score = Score;

	this->ProcessEvent ( pFnScoreObjective, &ScoreObjective_Parms, NULL );
};

// Function DunDefSpecial.CTF_GameInfo.AddObjectiveScore
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  Scorer                         ( CPF_Parm )
// int                            Score                          ( CPF_Parm )

void ACTF_GameInfo::AddObjectiveScore ( class APlayerReplicationInfo* Scorer, int Score )
{
	static UFunction* pFnAddObjectiveScore = NULL;

	if ( ! pFnAddObjectiveScore )
		pFnAddObjectiveScore = (UFunction*) UObject::GObjObjects()->Data[ 83274 ];

	ACTF_GameInfo_execAddObjectiveScore_Parms AddObjectiveScore_Parms;
	AddObjectiveScore_Parms.Scorer = Scorer;
	AddObjectiveScore_Parms.Score = Score;

	this->ProcessEvent ( pFnAddObjectiveScore, &AddObjectiveScore_Parms, NULL );
};

// Function DunDefSpecial.CTF_GameInfo.CalculatedNetSpeed
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ACTF_GameInfo::CalculatedNetSpeed ( )
{
	static UFunction* pFnCalculatedNetSpeed = NULL;

	if ( ! pFnCalculatedNetSpeed )
		pFnCalculatedNetSpeed = (UFunction*) UObject::GObjObjects()->Data[ 83272 ];

	ACTF_GameInfo_execCalculatedNetSpeed_Parms CalculatedNetSpeed_Parms;

	this->ProcessEvent ( pFnCalculatedNetSpeed, &CalculatedNetSpeed_Parms, NULL );

	return CalculatedNetSpeed_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_GameInfo.PlayerReplicationInfoInitialized
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )

void ACTF_GameInfo::PlayerReplicationInfoInitialized ( class ADunDefPlayerController* PC )
{
	static UFunction* pFnPlayerReplicationInfoInitialized = NULL;

	if ( ! pFnPlayerReplicationInfoInitialized )
		pFnPlayerReplicationInfoInitialized = (UFunction*) UObject::GObjObjects()->Data[ 83270 ];

	ACTF_GameInfo_execPlayerReplicationInfoInitialized_Parms PlayerReplicationInfoInitialized_Parms;
	PlayerReplicationInfoInitialized_Parms.PC = PC;

	this->ProcessEvent ( pFnPlayerReplicationInfoInitialized, &PlayerReplicationInfoInitialized_Parms, NULL );
};

// Function DunDefSpecial.CTF_GameInfo.DoPlayerLeaving
// [0x00024002] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// unsigned long                  bForceLocal                    ( CPF_OptionalParm | CPF_Parm )

void ACTF_GameInfo::DoPlayerLeaving ( class ADunDefPlayerController* PC, unsigned long bForceLocal )
{
	static UFunction* pFnDoPlayerLeaving = NULL;

	if ( ! pFnDoPlayerLeaving )
		pFnDoPlayerLeaving = (UFunction*) UObject::GObjObjects()->Data[ 83267 ];

	ACTF_GameInfo_execDoPlayerLeaving_Parms DoPlayerLeaving_Parms;
	DoPlayerLeaving_Parms.PC = PC;
	DoPlayerLeaving_Parms.bForceLocal = bForceLocal;

	this->ProcessEvent ( pFnDoPlayerLeaving, &DoPlayerLeaving_Parms, NULL );
};

// Function DunDefSpecial.CTF_GameInfo.SpawnPlayerController
// [0x00020002] 
// Parameters infos:
// class APlayerController*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 SpawnLocation                  ( CPF_Parm )
// struct FRotator                SpawnRotation                  ( CPF_Parm )

class APlayerController* ACTF_GameInfo::SpawnPlayerController ( struct FVector SpawnLocation, struct FRotator SpawnRotation )
{
	static UFunction* pFnSpawnPlayerController = NULL;

	if ( ! pFnSpawnPlayerController )
		pFnSpawnPlayerController = (UFunction*) UObject::GObjObjects()->Data[ 83263 ];

	ACTF_GameInfo_execSpawnPlayerController_Parms SpawnPlayerController_Parms;
	memcpy ( &SpawnPlayerController_Parms.SpawnLocation, &SpawnLocation, 0xC );
	memcpy ( &SpawnPlayerController_Parms.SpawnRotation, &SpawnRotation, 0xC );

	this->ProcessEvent ( pFnSpawnPlayerController, &SpawnPlayerController_Parms, NULL );

	return SpawnPlayerController_Parms.ReturnValue;
};

// Function DunDefSpecial.CTD_GameInfo.WaveSpawnerCreateEnemy
// [0x00020002] 
// Parameters infos:
// class ADunDefEnemy*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner                       ( CPF_Parm )
// class ADunDefEnemy*            EnemyTemplate                  ( CPF_Parm )
// struct FVector                 SpawnLocation                  ( CPF_Parm )
// struct FRotator                SpawnRotation                  ( CPF_Parm )

class ADunDefEnemy* ACTD_GameInfo::WaveSpawnerCreateEnemy ( class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner, class ADunDefEnemy* EnemyTemplate, struct FVector SpawnLocation, struct FRotator SpawnRotation )
{
	static UFunction* pFnWaveSpawnerCreateEnemy = NULL;

	if ( ! pFnWaveSpawnerCreateEnemy )
		pFnWaveSpawnerCreateEnemy = (UFunction*) UObject::GObjObjects()->Data[ 83323 ];

	ACTD_GameInfo_execWaveSpawnerCreateEnemy_Parms WaveSpawnerCreateEnemy_Parms;
	WaveSpawnerCreateEnemy_Parms.aSpawner = aSpawner;
	WaveSpawnerCreateEnemy_Parms.EnemyTemplate = EnemyTemplate;
	memcpy ( &WaveSpawnerCreateEnemy_Parms.SpawnLocation, &SpawnLocation, 0xC );
	memcpy ( &WaveSpawnerCreateEnemy_Parms.SpawnRotation, &SpawnRotation, 0xC );

	this->ProcessEvent ( pFnWaveSpawnerCreateEnemy, &WaveSpawnerCreateEnemy_Parms, NULL );

	return WaveSpawnerCreateEnemy_Parms.ReturnValue;
};

// Function DunDefSpecial.CTD_GameInfo.RatePlayerStart
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerStart*            P                              ( CPF_Parm )
// unsigned char                  Team                           ( CPF_Parm )
// class AController*             Player                         ( CPF_Parm )

float ACTD_GameInfo::RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player )
{
	static UFunction* pFnRatePlayerStart = NULL;

	if ( ! pFnRatePlayerStart )
		pFnRatePlayerStart = (UFunction*) UObject::GObjObjects()->Data[ 83316 ];

	ACTD_GameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
	RatePlayerStart_Parms.P = P;
	RatePlayerStart_Parms.Team = Team;
	RatePlayerStart_Parms.Player = Player;

	this->ProcessEvent ( pFnRatePlayerStart, &RatePlayerStart_Parms, NULL );

	return RatePlayerStart_Parms.ReturnValue;
};

// Function DunDefSpecial.CTD_GameInfo.CalculatedNetSpeed
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ACTD_GameInfo::CalculatedNetSpeed ( )
{
	static UFunction* pFnCalculatedNetSpeed = NULL;

	if ( ! pFnCalculatedNetSpeed )
		pFnCalculatedNetSpeed = (UFunction*) UObject::GObjObjects()->Data[ 83314 ];

	ACTD_GameInfo_execCalculatedNetSpeed_Parms CalculatedNetSpeed_Parms;

	this->ProcessEvent ( pFnCalculatedNetSpeed, &CalculatedNetSpeed_Parms, NULL );

	return CalculatedNetSpeed_Parms.ReturnValue;
};

// Function DunDefSpecial.CTD_GameInfo.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ACTD_GameInfo::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 83313 ];

	ACTD_GameInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.CTF_FlagBase.PreventTowerAtPoint
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// class ADunDefTower*            towerArch                      ( CPF_Parm )
// struct FVector                 Point                          ( CPF_Parm )
// float                          towerRadius                    ( CPF_Parm )

bool ACTF_FlagBase::PreventTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point, float towerRadius )
{
	static UFunction* pFnPreventTowerAtPoint = NULL;

	if ( ! pFnPreventTowerAtPoint )
		pFnPreventTowerAtPoint = (UFunction*) UObject::GObjObjects()->Data[ 83597 ];

	ACTF_FlagBase_execPreventTowerAtPoint_Parms PreventTowerAtPoint_Parms;
	PreventTowerAtPoint_Parms.PC = PC;
	PreventTowerAtPoint_Parms.towerArch = towerArch;
	memcpy ( &PreventTowerAtPoint_Parms.Point, &Point, 0xC );
	PreventTowerAtPoint_Parms.towerRadius = towerRadius;

	this->ProcessEvent ( pFnPreventTowerAtPoint, &PreventTowerAtPoint_Parms, NULL );

	return PreventTowerAtPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_FlagBase.AllowTowerAtPoint
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// class ADunDefTower*            towerArch                      ( CPF_Parm )
// struct FVector                 Point                          ( CPF_Parm )

bool ACTF_FlagBase::AllowTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point )
{
	static UFunction* pFnAllowTowerAtPoint = NULL;

	if ( ! pFnAllowTowerAtPoint )
		pFnAllowTowerAtPoint = (UFunction*) UObject::GObjObjects()->Data[ 83592 ];

	ACTF_FlagBase_execAllowTowerAtPoint_Parms AllowTowerAtPoint_Parms;
	AllowTowerAtPoint_Parms.PC = PC;
	AllowTowerAtPoint_Parms.towerArch = towerArch;
	memcpy ( &AllowTowerAtPoint_Parms.Point, &Point, 0xC );

	this->ProcessEvent ( pFnAllowTowerAtPoint, &AllowTowerAtPoint_Parms, NULL );

	return AllowTowerAtPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_FlagBase.CheckAllowance
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ACTF_FlagBase::CheckAllowance ( )
{
	static UFunction* pFnCheckAllowance = NULL;

	if ( ! pFnCheckAllowance )
		pFnCheckAllowance = (UFunction*) UObject::GObjObjects()->Data[ 83590 ];

	ACTF_FlagBase_execCheckAllowance_Parms CheckAllowance_Parms;

	this->ProcessEvent ( pFnCheckAllowance, &CheckAllowance_Parms, NULL );

	return CheckAllowance_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_FlagBase.DrawMiniMapIcon
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class ADunDefMiniMap*          MiniMap                        ( CPF_Parm )

void ACTF_FlagBase::DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap )
{
	static UFunction* pFnDrawMiniMapIcon = NULL;

	if ( ! pFnDrawMiniMapIcon )
		pFnDrawMiniMapIcon = (UFunction*) UObject::GObjObjects()->Data[ 83584 ];

	ACTF_FlagBase_execDrawMiniMapIcon_Parms DrawMiniMapIcon_Parms;
	DrawMiniMapIcon_Parms.Canvas = Canvas;
	DrawMiniMapIcon_Parms.MiniMap = MiniMap;

	this->ProcessEvent ( pFnDrawMiniMapIcon, &DrawMiniMapIcon_Parms, NULL );
};

// Function DunDefSpecial.CTF_FlagBase.SpawnFlag
// [0x00020002] 
// Parameters infos:

void ACTF_FlagBase::SpawnFlag ( )
{
	static UFunction* pFnSpawnFlag = NULL;

	if ( ! pFnSpawnFlag )
		pFnSpawnFlag = (UFunction*) UObject::GObjObjects()->Data[ 83583 ];

	ACTF_FlagBase_execSpawnFlag_Parms SpawnFlag_Parms;

	this->ProcessEvent ( pFnSpawnFlag, &SpawnFlag_Parms, NULL );
};

// Function DunDefSpecial.CTF_FlagBase.FlagTaken
// [0x00020102] 
// Parameters infos:

void ACTF_FlagBase::FlagTaken ( )
{
	static UFunction* pFnFlagTaken = NULL;

	if ( ! pFnFlagTaken )
		pFnFlagTaken = (UFunction*) UObject::GObjObjects()->Data[ 83582 ];

	ACTF_FlagBase_execFlagTaken_Parms FlagTaken_Parms;

	this->ProcessEvent ( pFnFlagTaken, &FlagTaken_Parms, NULL );
};

// Function DunDefSpecial.CTF_FlagBase.FlagReturned
// [0x00020002] 
// Parameters infos:

void ACTF_FlagBase::FlagReturned ( )
{
	static UFunction* pFnFlagReturned = NULL;

	if ( ! pFnFlagReturned )
		pFnFlagReturned = (UFunction*) UObject::GObjObjects()->Data[ 83581 ];

	ACTF_FlagBase_execFlagReturned_Parms FlagReturned_Parms;

	this->ProcessEvent ( pFnFlagReturned, &FlagReturned_Parms, NULL );
};

// Function DunDefSpecial.CTF_FlagBase.DoCaptureEffects
// [0x00020102] 
// Parameters infos:

void ACTF_FlagBase::DoCaptureEffects ( )
{
	static UFunction* pFnDoCaptureEffects = NULL;

	if ( ! pFnDoCaptureEffects )
		pFnDoCaptureEffects = (UFunction*) UObject::GObjObjects()->Data[ 83580 ];

	ACTF_FlagBase_execDoCaptureEffects_Parms DoCaptureEffects_Parms;

	this->ProcessEvent ( pFnDoCaptureEffects, &DoCaptureEffects_Parms, NULL );
};

// Function DunDefSpecial.CTF_FlagBase.ScoreFlag
// [0x00020002] 
// Parameters infos:
// class ACTF_Flag*               scoredFlag                     ( CPF_Parm )

void ACTF_FlagBase::ScoreFlag ( class ACTF_Flag* scoredFlag )
{
	static UFunction* pFnScoreFlag = NULL;

	if ( ! pFnScoreFlag )
		pFnScoreFlag = (UFunction*) UObject::GObjObjects()->Data[ 83578 ];

	ACTF_FlagBase_execScoreFlag_Parms ScoreFlag_Parms;
	ScoreFlag_Parms.scoredFlag = scoredFlag;

	this->ProcessEvent ( pFnScoreFlag, &ScoreFlag_Parms, NULL );
};

// Function DunDefSpecial.CTF_FlagBase.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ACTF_FlagBase::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 83571 ];

	ACTF_FlagBase_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function DunDefSpecial.CTF_FlagBase.InitBase
// [0x00820102] 
// Parameters infos:

void ACTF_FlagBase::InitBase ( )
{
	static UFunction* pFnInitBase = NULL;

	if ( ! pFnInitBase )
		pFnInitBase = (UFunction*) UObject::GObjObjects()->Data[ 83565 ];

	ACTF_FlagBase_execInitBase_Parms InitBase_Parms;

	this->ProcessEvent ( pFnInitBase, &InitBase_Parms, NULL );
};

// Function DunDefSpecial.CTF_FlagBase.SetTeamIndex
// [0x00020002] 
// Parameters infos:
// int                            NewTeam                        ( CPF_Parm )

void ACTF_FlagBase::SetTeamIndex ( int NewTeam )
{
	static UFunction* pFnSetTeamIndex = NULL;

	if ( ! pFnSetTeamIndex )
		pFnSetTeamIndex = (UFunction*) UObject::GObjObjects()->Data[ 83563 ];

	ACTF_FlagBase_execSetTeamIndex_Parms SetTeamIndex_Parms;
	SetTeamIndex_Parms.NewTeam = NewTeam;

	this->ProcessEvent ( pFnSetTeamIndex, &SetTeamIndex_Parms, NULL );
};

// Function DunDefSpecial.CTF_FlagBase.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ACTF_FlagBase::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 83562 ];

	ACTF_FlagBase_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.CTF_FlagBase.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ACTF_FlagBase::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 83545 ];

	ACTF_FlagBase_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.CTF_FlagBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ACTF_FlagBase::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 83543 ];

	ACTF_FlagBase_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.CTF_MultiFlag_GameInfo.RatePlayerStart
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerStart*            P                              ( CPF_Parm )
// unsigned char                  Team                           ( CPF_Parm )
// class AController*             Player                         ( CPF_Parm )

float ACTF_MultiFlag_GameInfo::RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player )
{
	static UFunction* pFnRatePlayerStart = NULL;

	if ( ! pFnRatePlayerStart )
		pFnRatePlayerStart = (UFunction*) UObject::GObjObjects()->Data[ 83613 ];

	ACTF_MultiFlag_GameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
	RatePlayerStart_Parms.P = P;
	RatePlayerStart_Parms.Team = Team;
	RatePlayerStart_Parms.Player = Player;

	this->ProcessEvent ( pFnRatePlayerStart, &RatePlayerStart_Parms, NULL );

	return RatePlayerStart_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_MultiFlag_GameInfo.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ACTF_MultiFlag_GameInfo::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 83607 ];

	ACTF_MultiFlag_GameInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefTeamTowerVolume.SetMyTeam
// [0x00020102] 
// Parameters infos:
// int                            NewTeam                        ( CPF_Parm )

void ADunDefTeamTowerVolume::SetMyTeam ( int NewTeam )
{
	static UFunction* pFnSetMyTeam = NULL;

	if ( ! pFnSetMyTeam )
		pFnSetMyTeam = (UFunction*) UObject::GObjObjects()->Data[ 87741 ];

	ADunDefTeamTowerVolume_execSetMyTeam_Parms SetMyTeam_Parms;
	SetMyTeam_Parms.NewTeam = NewTeam;

	this->ProcessEvent ( pFnSetMyTeam, &SetMyTeam_Parms, NULL );
};

// Function DunDefSpecial.DunDefTeamTowerVolume.Destroyed
// [0x00020102] 
// Parameters infos:

void ADunDefTeamTowerVolume::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 87740 ];

	ADunDefTeamTowerVolume_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.DunDefTeamTowerVolume.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADunDefTeamTowerVolume::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 87739 ];

	ADunDefTeamTowerVolume_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefTeamTowerVolume.AllowTowerAtPoint
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// class ADunDefTower*            towerArch                      ( CPF_Parm )
// struct FVector                 Point                          ( CPF_Parm )

bool ADunDefTeamTowerVolume::AllowTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point )
{
	static UFunction* pFnAllowTowerAtPoint = NULL;

	if ( ! pFnAllowTowerAtPoint )
		pFnAllowTowerAtPoint = (UFunction*) UObject::GObjObjects()->Data[ 87734 ];

	ADunDefTeamTowerVolume_execAllowTowerAtPoint_Parms AllowTowerAtPoint_Parms;
	AllowTowerAtPoint_Parms.PC = PC;
	AllowTowerAtPoint_Parms.towerArch = towerArch;
	memcpy ( &AllowTowerAtPoint_Parms.Point, &Point, 0xC );

	this->ProcessEvent ( pFnAllowTowerAtPoint, &AllowTowerAtPoint_Parms, NULL );

	return AllowTowerAtPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTeamTowerVolume.PreventTowerAtPoint
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// class ADunDefTower*            towerArch                      ( CPF_Parm )
// struct FVector                 Point                          ( CPF_Parm )
// float                          towerRadius                    ( CPF_Parm )

bool ADunDefTeamTowerVolume::PreventTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point, float towerRadius )
{
	static UFunction* pFnPreventTowerAtPoint = NULL;

	if ( ! pFnPreventTowerAtPoint )
		pFnPreventTowerAtPoint = (UFunction*) UObject::GObjObjects()->Data[ 87728 ];

	ADunDefTeamTowerVolume_execPreventTowerAtPoint_Parms PreventTowerAtPoint_Parms;
	PreventTowerAtPoint_Parms.PC = PC;
	PreventTowerAtPoint_Parms.towerArch = towerArch;
	memcpy ( &PreventTowerAtPoint_Parms.Point, &Point, 0xC );
	PreventTowerAtPoint_Parms.towerRadius = towerRadius;

	this->ProcessEvent ( pFnPreventTowerAtPoint, &PreventTowerAtPoint_Parms, NULL );

	return PreventTowerAtPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTeamTowerVolume.CheckAllowance
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefTeamTowerVolume::CheckAllowance ( )
{
	static UFunction* pFnCheckAllowance = NULL;

	if ( ! pFnCheckAllowance )
		pFnCheckAllowance = (UFunction*) UObject::GObjObjects()->Data[ 87726 ];

	ADunDefTeamTowerVolume_execCheckAllowance_Parms CheckAllowance_Parms;

	this->ProcessEvent ( pFnCheckAllowance, &CheckAllowance_Parms, NULL );

	return CheckAllowance_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTeamTowerVolume.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefTeamTowerVolume::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 87709 ];

	ADunDefTeamTowerVolume_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.CTF_UIGameStats.GetUITeamLists
// [0x00420102] 
// Parameters infos:
// int                            TeamOnlyCheck                  ( CPF_Parm )
// struct FString                 tList                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 kList                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 sList                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UCTF_UIGameStats::GetUITeamLists ( int TeamOnlyCheck, struct FString* tList, struct FString* kList, struct FString* sList )
{
	static UFunction* pFnGetUITeamLists = NULL;

	if ( ! pFnGetUITeamLists )
		pFnGetUITeamLists = (UFunction*) UObject::GObjObjects()->Data[ 83642 ];

	UCTF_UIGameStats_execGetUITeamLists_Parms GetUITeamLists_Parms;
	GetUITeamLists_Parms.TeamOnlyCheck = TeamOnlyCheck;

	this->ProcessEvent ( pFnGetUITeamLists, &GetUITeamLists_Parms, NULL );

	if ( tList )
		memcpy ( tList, &GetUITeamLists_Parms.tList, 0xC );

	if ( kList )
		memcpy ( kList, &GetUITeamLists_Parms.kList, 0xC );

	if ( sList )
		memcpy ( sList, &GetUITeamLists_Parms.sList, 0xC );
};

// Function DunDefSpecial.CTF_UIGameStats.GetColorString
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FColor                  aColor                         ( CPF_Parm )

struct FString UCTF_UIGameStats::GetColorString ( struct FColor aColor )
{
	static UFunction* pFnGetColorString = NULL;

	if ( ! pFnGetColorString )
		pFnGetColorString = (UFunction*) UObject::GObjObjects()->Data[ 83639 ];

	UCTF_UIGameStats_execGetColorString_Parms GetColorString_Parms;
	memcpy ( &GetColorString_Parms.aColor, &aColor, 0x4 );

	this->ProcessEvent ( pFnGetColorString, &GetColorString_Parms, NULL );

	return GetColorString_Parms.ReturnValue;
};

// Function DunDefSpecial.CTF_UIGameStats.UpdateTeamPanels
// [0x00020102] 
// Parameters infos:

void UCTF_UIGameStats::UpdateTeamPanels ( )
{
	static UFunction* pFnUpdateTeamPanels = NULL;

	if ( ! pFnUpdateTeamPanels )
		pFnUpdateTeamPanels = (UFunction*) UObject::GObjObjects()->Data[ 83634 ];

	UCTF_UIGameStats_execUpdateTeamPanels_Parms UpdateTeamPanels_Parms;

	this->ProcessEvent ( pFnUpdateTeamPanels, &UpdateTeamPanels_Parms, NULL );
};

// Function DunDefSpecial.CTF_UIGameStats.CustomInit
// [0x00024002] 
// Parameters infos:
// int                            CustomInitIndex                ( CPF_OptionalParm | CPF_Parm )

void UCTF_UIGameStats::CustomInit ( int CustomInitIndex )
{
	static UFunction* pFnCustomInit = NULL;

	if ( ! pFnCustomInit )
		pFnCustomInit = (UFunction*) UObject::GObjObjects()->Data[ 83632 ];

	UCTF_UIGameStats_execCustomInit_Parms CustomInit_Parms;
	CustomInit_Parms.CustomInitIndex = CustomInitIndex;

	this->ProcessEvent ( pFnCustomInit, &CustomInit_Parms, NULL );
};

// Function DunDefSpecial.DunDef_SeqAct_AddPlatformToVerticalTowerMover.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDunDef_SeqAct_AddPlatformToVerticalTowerMover::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 83663 ];

	UDunDef_SeqAct_AddPlatformToVerticalTowerMover_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function DunDefSpecial.DunDef_VerticalTowerMover.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDef_VerticalTowerMover::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 83746 ];

	ADunDef_VerticalTowerMover_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDef_VerticalTowerMover.MoveTowers
// [0x00A200C2] 
// Parameters infos:
// struct FPlatformInfo           Info                           ( CPF_Parm | CPF_NeedCtorLink )

void ADunDef_VerticalTowerMover::MoveTowers ( struct FPlatformInfo Info )
{
	static UFunction* pFnMoveTowers = NULL;

	if ( ! pFnMoveTowers )
		pFnMoveTowers = (UFunction*) UObject::GObjObjects()->Data[ 83731 ];

	ADunDef_VerticalTowerMover_execMoveTowers_Parms MoveTowers_Parms;
	memcpy ( &MoveTowers_Parms.Info, &Info, 0x14 );

	this->ProcessEvent ( pFnMoveTowers, &MoveTowers_Parms, NULL );
};

// Function DunDefSpecial.DunDef_VerticalTowerMover.RebuildTowerCache
// [0x00820002] 
// Parameters infos:
// TArray< struct FTowerInfo >    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FPlatformInfo           thePlatformInfo                ( CPF_Parm | CPF_NeedCtorLink )

TArray< struct FTowerInfo > ADunDef_VerticalTowerMover::RebuildTowerCache ( struct FPlatformInfo thePlatformInfo )
{
	static UFunction* pFnRebuildTowerCache = NULL;

	if ( ! pFnRebuildTowerCache )
		pFnRebuildTowerCache = (UFunction*) UObject::GObjObjects()->Data[ 83721 ];

	ADunDef_VerticalTowerMover_execRebuildTowerCache_Parms RebuildTowerCache_Parms;
	memcpy ( &RebuildTowerCache_Parms.thePlatformInfo, &thePlatformInfo, 0x14 );

	this->ProcessEvent ( pFnRebuildTowerCache, &RebuildTowerCache_Parms, NULL );

	return RebuildTowerCache_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDef_VerticalTowerMover.AddInterpActor
// [0x00820002] 
// Parameters infos:
// class AInterpActor*            TheActor                       ( CPF_Parm )

void ADunDef_VerticalTowerMover::AddInterpActor ( class AInterpActor* TheActor )
{
	static UFunction* pFnAddInterpActor = NULL;

	if ( ! pFnAddInterpActor )
		pFnAddInterpActor = (UFunction*) UObject::GObjObjects()->Data[ 83718 ];

	ADunDef_VerticalTowerMover_execAddInterpActor_Parms AddInterpActor_Parms;
	AddInterpActor_Parms.TheActor = TheActor;

	this->ProcessEvent ( pFnAddInterpActor, &AddInterpActor_Parms, NULL );
};

// Function DunDefSpecial.DunDef_SeqAct_CheckToUnlockAchievements.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDunDef_SeqAct_CheckToUnlockAchievements::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 83670 ];

	UDunDef_SeqAct_CheckToUnlockAchievements_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function DunDefSpecial.DunDef_SeqAct_CTDWinGameForTeam.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDunDef_SeqAct_CTDWinGameForTeam::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 83674 ];

	UDunDef_SeqAct_CTDWinGameForTeam_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function DunDefSpecial.DunDef_SeqAct_GetMVP.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDunDef_SeqAct_GetMVP::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 83677 ];

	UDunDef_SeqAct_GetMVP_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function DunDefSpecial.DunDef_SeqAct_HideGlobalUIScene.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDunDef_SeqAct_HideGlobalUIScene::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 83686 ];

	UDunDef_SeqAct_HideGlobalUIScene_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function DunDefSpecial.DunDef_TimedEffect_Harbinger_v2.EndEffects
// [0x00020102] 
// Parameters infos:

void ADunDef_TimedEffect_Harbinger_v2::EndEffects ( )
{
	static UFunction* pFnEndEffects = NULL;

	if ( ! pFnEndEffects )
		pFnEndEffects = (UFunction*) UObject::GObjObjects()->Data[ 83702 ];

	ADunDef_TimedEffect_Harbinger_v2_execEndEffects_Parms EndEffects_Parms;

	this->ProcessEvent ( pFnEndEffects, &EndEffects_Parms, NULL );
};

// Function DunDefSpecial.DunDef_TimedEffect_Harbinger_v2.TimedEffect
// [0x00020102] 
// Parameters infos:

void ADunDef_TimedEffect_Harbinger_v2::TimedEffect ( )
{
	static UFunction* pFnTimedEffect = NULL;

	if ( ! pFnTimedEffect )
		pFnTimedEffect = (UFunction*) UObject::GObjObjects()->Data[ 83701 ];

	ADunDef_TimedEffect_Harbinger_v2_execTimedEffect_Parms TimedEffect_Parms;

	this->ProcessEvent ( pFnTimedEffect, &TimedEffect_Parms, NULL );
};

// Function DunDefSpecial.DunDef_TimedEffect_Harbinger_v2.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDef_TimedEffect_Harbinger_v2::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 83699 ];

	ADunDef_TimedEffect_Harbinger_v2_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDef_TimedEffect_Harbinger_v2.Initialize
// [0x00020102] 
// Parameters infos:
// class UDunDefTimedEffectInterface* Target                         ( CPF_Parm )

void ADunDef_TimedEffect_Harbinger_v2::Initialize ( class UDunDefTimedEffectInterface* Target )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 83696 ];

	ADunDef_TimedEffect_Harbinger_v2_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.Target = Target;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function DunDefSpecial.DunDefHarbinger_v2.FireAttackShootRight
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefHarbinger_v2::eventFireAttackShootRight ( )
{
	static UFunction* pFnFireAttackShootRight = NULL;

	if ( ! pFnFireAttackShootRight )
		pFnFireAttackShootRight = (UFunction*) UObject::GObjObjects()->Data[ 84704 ];

	ADunDefHarbinger_v2_eventFireAttackShootRight_Parms FireAttackShootRight_Parms;

	this->ProcessEvent ( pFnFireAttackShootRight, &FireAttackShootRight_Parms, NULL );
};

// Function DunDefSpecial.DunDefHarbinger_v2.FireAttackShootLeft
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefHarbinger_v2::eventFireAttackShootLeft ( )
{
	static UFunction* pFnFireAttackShootLeft = NULL;

	if ( ! pFnFireAttackShootLeft )
		pFnFireAttackShootLeft = (UFunction*) UObject::GObjObjects()->Data[ 84702 ];

	ADunDefHarbinger_v2_eventFireAttackShootLeft_Parms FireAttackShootLeft_Parms;

	this->ProcessEvent ( pFnFireAttackShootLeft, &FireAttackShootLeft_Parms, NULL );
};

// Function DunDefSpecial.DunDefHarbinger_v2.FireAttackBegin
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefHarbinger_v2::eventFireAttackBegin ( )
{
	static UFunction* pFnFireAttackBegin = NULL;

	if ( ! pFnFireAttackBegin )
		pFnFireAttackBegin = (UFunction*) UObject::GObjObjects()->Data[ 84701 ];

	ADunDefHarbinger_v2_eventFireAttackBegin_Parms FireAttackBegin_Parms;

	this->ProcessEvent ( pFnFireAttackBegin, &FireAttackBegin_Parms, NULL );
};

// Function DunDefSpecial.DunDefHarbinger_v2.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefHarbinger_v2::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84700 ];

	ADunDefHarbinger_v2_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefHarbinger_v2.GetProjectileSpawnTransformation
// [0x00420102] 
// Parameters infos:
// struct FName                   socketToUse                    ( CPF_Parm )
// struct FVector                 Position                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                Orientation                    ( CPF_Parm | CPF_OutParm )

void ADunDefHarbinger_v2::GetProjectileSpawnTransformation ( struct FName socketToUse, struct FVector* Position, struct FRotator* Orientation )
{
	static UFunction* pFnGetProjectileSpawnTransformation = NULL;

	if ( ! pFnGetProjectileSpawnTransformation )
		pFnGetProjectileSpawnTransformation = (UFunction*) UObject::GObjObjects()->Data[ 84696 ];

	ADunDefHarbinger_v2_execGetProjectileSpawnTransformation_Parms GetProjectileSpawnTransformation_Parms;
	memcpy ( &GetProjectileSpawnTransformation_Parms.socketToUse, &socketToUse, 0x8 );

	this->ProcessEvent ( pFnGetProjectileSpawnTransformation, &GetProjectileSpawnTransformation_Parms, NULL );

	if ( Position )
		memcpy ( Position, &GetProjectileSpawnTransformation_Parms.Position, 0xC );

	if ( Orientation )
		memcpy ( Orientation, &GetProjectileSpawnTransformation_Parms.Orientation, 0xC );
};

// Function DunDefSpecial.DunDefHarbinger_v2.IsCurrentlyPlayingAttackAnimation
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefHarbinger_v2::IsCurrentlyPlayingAttackAnimation ( )
{
	static UFunction* pFnIsCurrentlyPlayingAttackAnimation = NULL;

	if ( ! pFnIsCurrentlyPlayingAttackAnimation )
		pFnIsCurrentlyPlayingAttackAnimation = (UFunction*) UObject::GObjObjects()->Data[ 84694 ];

	ADunDefHarbinger_v2_execIsCurrentlyPlayingAttackAnimation_Parms IsCurrentlyPlayingAttackAnimation_Parms;

	this->ProcessEvent ( pFnIsCurrentlyPlayingAttackAnimation, &IsCurrentlyPlayingAttackAnimation_Parms, NULL );

	return IsCurrentlyPlayingAttackAnimation_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefHarbinger_v2.PlayShootFireAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefHarbinger_v2::PlayShootFireAnimation ( )
{
	static UFunction* pFnPlayShootFireAnimation = NULL;

	if ( ! pFnPlayShootFireAnimation )
		pFnPlayShootFireAnimation = (UFunction*) UObject::GObjObjects()->Data[ 84692 ];

	ADunDefHarbinger_v2_execPlayShootFireAnimation_Parms PlayShootFireAnimation_Parms;

	this->ProcessEvent ( pFnPlayShootFireAnimation, &PlayShootFireAnimation_Parms, NULL );

	return PlayShootFireAnimation_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefHarbinger_v2.IsCurrentlyPlayingChargeAnimation
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefHarbinger_v2::IsCurrentlyPlayingChargeAnimation ( )
{
	static UFunction* pFnIsCurrentlyPlayingChargeAnimation = NULL;

	if ( ! pFnIsCurrentlyPlayingChargeAnimation )
		pFnIsCurrentlyPlayingChargeAnimation = (UFunction*) UObject::GObjObjects()->Data[ 84690 ];

	ADunDefHarbinger_v2_execIsCurrentlyPlayingChargeAnimation_Parms IsCurrentlyPlayingChargeAnimation_Parms;

	this->ProcessEvent ( pFnIsCurrentlyPlayingChargeAnimation, &IsCurrentlyPlayingChargeAnimation_Parms, NULL );

	return IsCurrentlyPlayingChargeAnimation_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefHarbinger_v2.PlayChargeFireAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefHarbinger_v2::PlayChargeFireAnimation ( )
{
	static UFunction* pFnPlayChargeFireAnimation = NULL;

	if ( ! pFnPlayChargeFireAnimation )
		pFnPlayChargeFireAnimation = (UFunction*) UObject::GObjObjects()->Data[ 84688 ];

	ADunDefHarbinger_v2_execPlayChargeFireAnimation_Parms PlayChargeFireAnimation_Parms;

	this->ProcessEvent ( pFnPlayChargeFireAnimation, &PlayChargeFireAnimation_Parms, NULL );

	return PlayChargeFireAnimation_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefHarbinger_v2.PlayHurtAnimation
// [0x00020100] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ADunDefHarbinger_v2::PlayHurtAnimation ( class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnPlayHurtAnimation = NULL;

	if ( ! pFnPlayHurtAnimation )
		pFnPlayHurtAnimation = (UFunction*) UObject::GObjObjects()->Data[ 84685 ];

	ADunDefHarbinger_v2_execPlayHurtAnimation_Parms PlayHurtAnimation_Parms;
	PlayHurtAnimation_Parms.DamageType = DamageType;
	memcpy ( &PlayHurtAnimation_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayHurtAnimation, &PlayHurtAnimation_Parms, NULL );
};

// Function DunDefSpecial.DunDefHarbinger_v2.PlayJumpAnimation
// [0x00020100] 
// Parameters infos:

void ADunDefHarbinger_v2::PlayJumpAnimation ( )
{
	static UFunction* pFnPlayJumpAnimation = NULL;

	if ( ! pFnPlayJumpAnimation )
		pFnPlayJumpAnimation = (UFunction*) UObject::GObjObjects()->Data[ 84684 ];

	ADunDefHarbinger_v2_execPlayJumpAnimation_Parms PlayJumpAnimation_Parms;

	this->ProcessEvent ( pFnPlayJumpAnimation, &PlayJumpAnimation_Parms, NULL );
};

// Function DunDefSpecial.DunDefHarbinger_v2.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefHarbinger_v2::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 84667 ];

	ADunDefHarbinger_v2_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ClientDisableMovementReplication
// [0x00020100] 
// Parameters infos:
// struct FVector                 endedLoc                       ( CPF_Parm )

void ADunDefTower_SummonEnemy::ClientDisableMovementReplication ( struct FVector endedLoc )
{
	static UFunction* pFnClientDisableMovementReplication = NULL;

	if ( ! pFnClientDisableMovementReplication )
		pFnClientDisableMovementReplication = (UFunction*) UObject::GObjObjects()->Data[ 88789 ];

	ADunDefTower_SummonEnemy_execClientDisableMovementReplication_Parms ClientDisableMovementReplication_Parms;
	memcpy ( &ClientDisableMovementReplication_Parms.endedLoc, &endedLoc, 0xC );

	this->ProcessEvent ( pFnClientDisableMovementReplication, &ClientDisableMovementReplication_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.AllowAbilityMove
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefTower_SummonEnemy::AllowAbilityMove ( )
{
	static UFunction* pFnAllowAbilityMove = NULL;

	if ( ! pFnAllowAbilityMove )
		pFnAllowAbilityMove = (UFunction*) UObject::GObjObjects()->Data[ 88787 ];

	ADunDefTower_SummonEnemy_execAllowAbilityMove_Parms AllowAbilityMove_Parms;

	this->ProcessEvent ( pFnAllowAbilityMove, &AllowAbilityMove_Parms, NULL );

	return AllowAbilityMove_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.TransferTowerOwnership
// [0x00020002] 
// Parameters infos:
// class APawn*                   toPawn                         ( CPF_Parm )

void ADunDefTower_SummonEnemy::TransferTowerOwnership ( class APawn* toPawn )
{
	static UFunction* pFnTransferTowerOwnership = NULL;

	if ( ! pFnTransferTowerOwnership )
		pFnTransferTowerOwnership = (UFunction*) UObject::GObjObjects()->Data[ 88785 ];

	ADunDefTower_SummonEnemy_execTransferTowerOwnership_Parms TransferTowerOwnership_Parms;
	TransferTowerOwnership_Parms.toPawn = toPawn;

	this->ProcessEvent ( pFnTransferTowerOwnership, &TransferTowerOwnership_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ForceMoveActor
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Mover                          ( CPF_Parm )
// struct FVector                 NewLoc                         ( CPF_Parm )

bool ADunDefTower_SummonEnemy::ForceMoveActor ( class AActor* Mover, struct FVector NewLoc )
{
	static UFunction* pFnForceMoveActor = NULL;

	if ( ! pFnForceMoveActor )
		pFnForceMoveActor = (UFunction*) UObject::GObjObjects()->Data[ 88781 ];

	ADunDefTower_SummonEnemy_execForceMoveActor_Parms ForceMoveActor_Parms;
	ForceMoveActor_Parms.Mover = Mover;
	memcpy ( &ForceMoveActor_Parms.NewLoc, &NewLoc, 0xC );

	this->ProcessEvent ( pFnForceMoveActor, &ForceMoveActor_Parms, NULL );

	return ForceMoveActor_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetAlternateAggroActor
// [0x00420002] 
// Parameters infos:
// class UDunDefTargetableInterface* AltActor                       ( CPF_Parm | CPF_OutParm )

void ADunDefTower_SummonEnemy::GetAlternateAggroActor ( class UDunDefTargetableInterface** AltActor )
{
	static UFunction* pFnGetAlternateAggroActor = NULL;

	if ( ! pFnGetAlternateAggroActor )
		pFnGetAlternateAggroActor = (UFunction*) UObject::GObjObjects()->Data[ 88779 ];

	ADunDefTower_SummonEnemy_execGetAlternateAggroActor_Parms GetAlternateAggroActor_Parms;

	this->ProcessEvent ( pFnGetAlternateAggroActor, &GetAlternateAggroActor_Parms, NULL );

	if ( AltActor )
		*AltActor = GetAlternateAggroActor_Parms.AltActor;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetPlayerTargetingDesirability
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* forController                  ( CPF_Parm )
// class ADunDefPlayer*           ForPlayer                      ( CPF_OptionalParm | CPF_Parm )

float ADunDefTower_SummonEnemy::GetPlayerTargetingDesirability ( class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer )
{
	static UFunction* pFnGetPlayerTargetingDesirability = NULL;

	if ( ! pFnGetPlayerTargetingDesirability )
		pFnGetPlayerTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 88775 ];

	ADunDefTower_SummonEnemy_execGetPlayerTargetingDesirability_Parms GetPlayerTargetingDesirability_Parms;
	GetPlayerTargetingDesirability_Parms.forController = forController;
	GetPlayerTargetingDesirability_Parms.ForPlayer = ForPlayer;

	this->ProcessEvent ( pFnGetPlayerTargetingDesirability, &GetPlayerTargetingDesirability_Parms, NULL );

	return GetPlayerTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetTowerTargetingDesirability
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower*            forTower                       ( CPF_Parm )

float ADunDefTower_SummonEnemy::GetTowerTargetingDesirability ( class ADunDefTower* forTower )
{
	static UFunction* pFnGetTowerTargetingDesirability = NULL;

	if ( ! pFnGetTowerTargetingDesirability )
		pFnGetTowerTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 88772 ];

	ADunDefTower_SummonEnemy_execGetTowerTargetingDesirability_Parms GetTowerTargetingDesirability_Parms;
	GetTowerTargetingDesirability_Parms.forTower = forTower;

	this->ProcessEvent ( pFnGetTowerTargetingDesirability, &GetTowerTargetingDesirability_Parms, NULL );

	return GetTowerTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetEnemyTargetingDesirability
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AEngineNativeDunDefAIController* forController                  ( CPF_Parm )

float ADunDefTower_SummonEnemy::eventGetEnemyTargetingDesirability ( class AEngineNativeDunDefAIController* forController )
{
	static UFunction* pFnGetEnemyTargetingDesirability = NULL;

	if ( ! pFnGetEnemyTargetingDesirability )
		pFnGetEnemyTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 88769 ];

	ADunDefTower_SummonEnemy_eventGetEnemyTargetingDesirability_Parms GetEnemyTargetingDesirability_Parms;
	GetEnemyTargetingDesirability_Parms.forController = forController;

	this->ProcessEvent ( pFnGetEnemyTargetingDesirability, &GetEnemyTargetingDesirability_Parms, NULL );

	return GetEnemyTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.DrawToolTip
// [0x00024102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// int                            PosX                           ( CPF_Parm )
// int                            PosY                           ( CPF_Parm )
// class ULocalPlayer*            ForPlayer                      ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_SummonEnemy::DrawToolTip ( class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer )
{
	static UFunction* pFnDrawToolTip = NULL;

	if ( ! pFnDrawToolTip )
		pFnDrawToolTip = (UFunction*) UObject::GObjObjects()->Data[ 88764 ];

	ADunDefTower_SummonEnemy_execDrawToolTip_Parms DrawToolTip_Parms;
	DrawToolTip_Parms.C = C;
	DrawToolTip_Parms.PosX = PosX;
	DrawToolTip_Parms.PosY = PosY;
	DrawToolTip_Parms.ForPlayer = ForPlayer;

	this->ProcessEvent ( pFnDrawToolTip, &DrawToolTip_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.DrawTowerToolTipStats
// [0x00420102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// float                          Opacity                        ( CPF_Parm )
// class ULocalPlayer*            ForPlayer                      ( CPF_Parm )
// float                          canvasScale                    ( CPF_Parm )
// float                          PosX                           ( CPF_Parm | CPF_OutParm )
// float                          PosY                           ( CPF_Parm | CPF_OutParm )

void ADunDefTower_SummonEnemy::DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY )
{
	static UFunction* pFnDrawTowerToolTipStats = NULL;

	if ( ! pFnDrawTowerToolTipStats )
		pFnDrawTowerToolTipStats = (UFunction*) UObject::GObjObjects()->Data[ 88756 ];

	ADunDefTower_SummonEnemy_execDrawTowerToolTipStats_Parms DrawTowerToolTipStats_Parms;
	DrawTowerToolTipStats_Parms.C = C;
	DrawTowerToolTipStats_Parms.Opacity = Opacity;
	DrawTowerToolTipStats_Parms.ForPlayer = ForPlayer;
	DrawTowerToolTipStats_Parms.canvasScale = canvasScale;

	this->ProcessEvent ( pFnDrawTowerToolTipStats, &DrawTowerToolTipStats_Parms, NULL );

	if ( PosX )
		*PosX = DrawTowerToolTipStats_Parms.PosX;

	if ( PosY )
		*PosY = DrawTowerToolTipStats_Parms.PosY;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetBoostString
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  boostType                      ( CPF_Parm )

struct FString ADunDefTower_SummonEnemy::GetBoostString ( unsigned char boostType )
{
	static UFunction* pFnGetBoostString = NULL;

	if ( ! pFnGetBoostString )
		pFnGetBoostString = (UFunction*) UObject::GObjObjects()->Data[ 88753 ];

	ADunDefTower_SummonEnemy_execGetBoostString_Parms GetBoostString_Parms;
	GetBoostString_Parms.boostType = boostType;

	this->ProcessEvent ( pFnGetBoostString, &GetBoostString_Parms, NULL );

	return GetBoostString_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetBoostedTargets
// [0x00420002] 
// Parameters infos:
// TArray< class APawn* >         boostedTargets                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ADunDefTower_SummonEnemy::GetBoostedTargets ( TArray< class APawn* >* boostedTargets )
{
	static UFunction* pFnGetBoostedTargets = NULL;

	if ( ! pFnGetBoostedTargets )
		pFnGetBoostedTargets = (UFunction*) UObject::GObjObjects()->Data[ 88750 ];

	ADunDefTower_SummonEnemy_execGetBoostedTargets_Parms GetBoostedTargets_Parms;

	this->ProcessEvent ( pFnGetBoostedTargets, &GetBoostedTargets_Parms, NULL );

	if ( boostedTargets )
		memcpy ( boostedTargets, &GetBoostedTargets_Parms.boostedTargets, 0xC );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.NotifyOfBoostedRemoval
// [0x00020002] 
// Parameters infos:
// class APawn*                   removedBoostee                 ( CPF_Parm )

void ADunDefTower_SummonEnemy::NotifyOfBoostedRemoval ( class APawn* removedBoostee )
{
	static UFunction* pFnNotifyOfBoostedRemoval = NULL;

	if ( ! pFnNotifyOfBoostedRemoval )
		pFnNotifyOfBoostedRemoval = (UFunction*) UObject::GObjObjects()->Data[ 88748 ];

	ADunDefTower_SummonEnemy_execNotifyOfBoostedRemoval_Parms NotifyOfBoostedRemoval_Parms;
	NotifyOfBoostedRemoval_Parms.removedBoostee = removedBoostee;

	this->ProcessEvent ( pFnNotifyOfBoostedRemoval, &NotifyOfBoostedRemoval_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetToolTipStatValue
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

float ADunDefTower_SummonEnemy::GetToolTipStatValue ( unsigned char boostType )
{
	static UFunction* pFnGetToolTipStatValue = NULL;

	if ( ! pFnGetToolTipStatValue )
		pFnGetToolTipStatValue = (UFunction*) UObject::GObjObjects()->Data[ 88745 ];

	ADunDefTower_SummonEnemy_execGetToolTipStatValue_Parms GetToolTipStatValue_Parms;
	GetToolTipStatValue_Parms.boostType = boostType;

	this->ProcessEvent ( pFnGetToolTipStatValue, &GetToolTipStatValue_Parms, NULL );

	return GetToolTipStatValue_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetPawnBoostAmount
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

float ADunDefTower_SummonEnemy::GetPawnBoostAmount ( unsigned char boostType )
{
	static UFunction* pFnGetPawnBoostAmount = NULL;

	if ( ! pFnGetPawnBoostAmount )
		pFnGetPawnBoostAmount = (UFunction*) UObject::GObjObjects()->Data[ 88742 ];

	ADunDefTower_SummonEnemy_execGetPawnBoostAmount_Parms GetPawnBoostAmount_Parms;
	GetPawnBoostAmount_Parms.boostType = boostType;

	this->ProcessEvent ( pFnGetPawnBoostAmount, &GetPawnBoostAmount_Parms, NULL );

	return GetPawnBoostAmount_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.HasPawnBoostingType
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

bool ADunDefTower_SummonEnemy::HasPawnBoostingType ( unsigned char boostType )
{
	static UFunction* pFnHasPawnBoostingType = NULL;

	if ( ! pFnHasPawnBoostingType )
		pFnHasPawnBoostingType = (UFunction*) UObject::GObjObjects()->Data[ 88739 ];

	ADunDefTower_SummonEnemy_execHasPawnBoostingType_Parms HasPawnBoostingType_Parms;
	HasPawnBoostingType_Parms.boostType = boostType;

	this->ProcessEvent ( pFnHasPawnBoostingType, &HasPawnBoostingType_Parms, NULL );

	return HasPawnBoostingType_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.TakeDamage
// [0x00024800] ( FUNC_Event )
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_SummonEnemy::eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 88731 ];

	ADunDefTower_SummonEnemy_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetAlternateActor
// [0x00020102] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* ADunDefTower_SummonEnemy::GetAlternateActor ( )
{
	static UFunction* pFnGetAlternateActor = NULL;

	if ( ! pFnGetAlternateActor )
		pFnGetAlternateActor = (UFunction*) UObject::GObjObjects()->Data[ 88729 ];

	ADunDefTower_SummonEnemy_execGetAlternateActor_Parms GetAlternateActor_Parms;

	this->ProcessEvent ( pFnGetAlternateActor, &GetAlternateActor_Parms, NULL );

	return GetAlternateActor_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetHealth
// [0x00024102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bGetMax                        ( CPF_OptionalParm | CPF_Parm )

int ADunDefTower_SummonEnemy::GetHealth ( unsigned long bGetMax )
{
	static UFunction* pFnGetHealth = NULL;

	if ( ! pFnGetHealth )
		pFnGetHealth = (UFunction*) UObject::GObjObjects()->Data[ 88726 ];

	ADunDefTower_SummonEnemy_execGetHealth_Parms GetHealth_Parms;
	GetHealth_Parms.bGetMax = bGetMax;

	this->ProcessEvent ( pFnGetHealth, &GetHealth_Parms, NULL );

	return GetHealth_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.HealDamage
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Amount                         ( CPF_Parm )
// class AController*             Healer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

bool ADunDefTower_SummonEnemy::eventHealDamage ( int Amount, class AController* Healer, class UClass* DamageType )
{
	static UFunction* pFnHealDamage = NULL;

	if ( ! pFnHealDamage )
		pFnHealDamage = (UFunction*) UObject::GObjObjects()->Data[ 88721 ];

	ADunDefTower_SummonEnemy_eventHealDamage_Parms HealDamage_Parms;
	HealDamage_Parms.Amount = Amount;
	HealDamage_Parms.Healer = Healer;
	HealDamage_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnHealDamage, &HealDamage_Parms, NULL );

	return HealDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.AddHealth
// [0x00024002] 
// Parameters infos:
// int                            howMuch                        ( CPF_Parm )
// unsigned long                  bDontDisplayFloatingNumber     ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_SummonEnemy::AddHealth ( int howMuch, unsigned long bDontDisplayFloatingNumber )
{
	static UFunction* pFnAddHealth = NULL;

	if ( ! pFnAddHealth )
		pFnAddHealth = (UFunction*) UObject::GObjObjects()->Data[ 88717 ];

	ADunDefTower_SummonEnemy_execAddHealth_Parms AddHealth_Parms;
	AddHealth_Parms.howMuch = howMuch;
	AddHealth_Parms.bDontDisplayFloatingNumber = bDontDisplayFloatingNumber;

	this->ProcessEvent ( pFnAddHealth, &AddHealth_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetHealthPercent
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_SummonEnemy::GetHealthPercent ( )
{
	static UFunction* pFnGetHealthPercent = NULL;

	if ( ! pFnGetHealthPercent )
		pFnGetHealthPercent = (UFunction*) UObject::GObjObjects()->Data[ 88715 ];

	ADunDefTower_SummonEnemy_execGetHealthPercent_Parms GetHealthPercent_Parms;

	this->ProcessEvent ( pFnGetHealthPercent, &GetHealthPercent_Parms, NULL );

	return GetHealthPercent_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.StartRepair
// [0x00020102] 
// Parameters infos:

void ADunDefTower_SummonEnemy::StartRepair ( )
{
	static UFunction* pFnStartRepair = NULL;

	if ( ! pFnStartRepair )
		pFnStartRepair = (UFunction*) UObject::GObjObjects()->Data[ 88714 ];

	ADunDefTower_SummonEnemy_execStartRepair_Parms StartRepair_Parms;

	this->ProcessEvent ( pFnStartRepair, &StartRepair_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetToolTipText
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ADunDefTower_SummonEnemy::GetToolTipText ( )
{
	static UFunction* pFnGetToolTipText = NULL;

	if ( ! pFnGetToolTipText )
		pFnGetToolTipText = (UFunction*) UObject::GObjObjects()->Data[ 88712 ];

	ADunDefTower_SummonEnemy_execGetToolTipText_Parms GetToolTipText_Parms;

	this->ProcessEvent ( pFnGetToolTipText, &GetToolTipText_Parms, NULL );

	return GetToolTipText_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ScaleForHeroModifiers
// [0x00020002] 
// Parameters infos:
// unsigned long                  IsFirstTime                    ( CPF_Parm )

void ADunDefTower_SummonEnemy::ScaleForHeroModifiers ( unsigned long IsFirstTime )
{
	static UFunction* pFnScaleForHeroModifiers = NULL;

	if ( ! pFnScaleForHeroModifiers )
		pFnScaleForHeroModifiers = (UFunction*) UObject::GObjObjects()->Data[ 88709 ];

	ADunDefTower_SummonEnemy_execScaleForHeroModifiers_Parms ScaleForHeroModifiers_Parms;
	ScaleForHeroModifiers_Parms.IsFirstTime = IsFirstTime;

	this->ProcessEvent ( pFnScaleForHeroModifiers, &ScaleForHeroModifiers_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.DrawMyHUD
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefHUD*              H                              ( CPF_Parm )

bool ADunDefTower_SummonEnemy::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 88697 ];

	ADunDefTower_SummonEnemy_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );

	return DrawMyHUD_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateCommand
// [0x00020102] 
// Parameters infos:

void ADunDefTower_SummonEnemy::UpdateCommand ( )
{
	static UFunction* pFnUpdateCommand = NULL;

	if ( ! pFnUpdateCommand )
		pFnUpdateCommand = (UFunction*) UObject::GObjObjects()->Data[ 88695 ];

	ADunDefTower_SummonEnemy_execUpdateCommand_Parms UpdateCommand_Parms;

	this->ProcessEvent ( pFnUpdateCommand, &UpdateCommand_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.HandleCommand
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// unsigned char                  NewCommand                     ( CPF_Parm )
// struct FVector                 commandPoint                   ( CPF_Parm )

bool ADunDefTower_SummonEnemy::HandleCommand ( class AActor* Target, unsigned char NewCommand, struct FVector commandPoint )
{
	static UFunction* pFnHandleCommand = NULL;

	if ( ! pFnHandleCommand )
		pFnHandleCommand = (UFunction*) UObject::GObjObjects()->Data[ 88689 ];

	ADunDefTower_SummonEnemy_execHandleCommand_Parms HandleCommand_Parms;
	HandleCommand_Parms.Target = Target;
	HandleCommand_Parms.NewCommand = NewCommand;
	memcpy ( &HandleCommand_Parms.commandPoint, &commandPoint, 0xC );

	this->ProcessEvent ( pFnHandleCommand, &HandleCommand_Parms, NULL );

	return HandleCommand_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SetCommand
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 commandPoint                   ( CPF_Parm )
// unsigned char                  NewCommand                     ( CPF_Parm )
// class AActor*                  commandInstigator              ( CPF_Parm )
// class AActor*                  targetedActor                  ( CPF_OptionalParm | CPF_Parm )

bool ADunDefTower_SummonEnemy::SetCommand ( struct FVector commandPoint, unsigned char NewCommand, class AActor* commandInstigator, class AActor* targetedActor )
{
	static UFunction* pFnSetCommand = NULL;

	if ( ! pFnSetCommand )
		pFnSetCommand = (UFunction*) UObject::GObjObjects()->Data[ 86762 ];

	ADunDefTower_SummonEnemy_execSetCommand_Parms SetCommand_Parms;
	memcpy ( &SetCommand_Parms.commandPoint, &commandPoint, 0xC );
	SetCommand_Parms.NewCommand = NewCommand;
	SetCommand_Parms.commandInstigator = commandInstigator;
	SetCommand_Parms.targetedActor = targetedActor;

	this->ProcessEvent ( pFnSetCommand, &SetCommand_Parms, NULL );

	return SetCommand_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SetSelected
// [0x00020102] 
// Parameters infos:
// unsigned long                  bWantsSelected                 ( CPF_Parm )
// class AActor*                  selectingActor                 ( CPF_Parm )

void ADunDefTower_SummonEnemy::SetSelected ( unsigned long bWantsSelected, class AActor* selectingActor )
{
	static UFunction* pFnSetSelected = NULL;

	if ( ! pFnSetSelected )
		pFnSetSelected = (UFunction*) UObject::GObjObjects()->Data[ 88680 ];

	ADunDefTower_SummonEnemy_execSetSelected_Parms SetSelected_Parms;
	SetSelected_Parms.bWantsSelected = bWantsSelected;
	SetSelected_Parms.selectingActor = selectingActor;

	this->ProcessEvent ( pFnSetSelected, &SetSelected_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SetPendingSelection
// [0x00020102] 
// Parameters infos:
// unsigned long                  bIsPending                     ( CPF_Parm )

void ADunDefTower_SummonEnemy::SetPendingSelection ( unsigned long bIsPending )
{
	static UFunction* pFnSetPendingSelection = NULL;

	if ( ! pFnSetPendingSelection )
		pFnSetPendingSelection = (UFunction*) UObject::GObjObjects()->Data[ 88678 ];

	ADunDefTower_SummonEnemy_execSetPendingSelection_Parms SetPendingSelection_Parms;
	SetPendingSelection_Parms.bIsPending = bIsPending;

	this->ProcessEvent ( pFnSetPendingSelection, &SetPendingSelection_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.CleanUpSummon
// [0x00020102] 
// Parameters infos:

void ADunDefTower_SummonEnemy::CleanUpSummon ( )
{
	static UFunction* pFnCleanUpSummon = NULL;

	if ( ! pFnCleanUpSummon )
		pFnCleanUpSummon = (UFunction*) UObject::GObjObjects()->Data[ 88675 ];

	ADunDefTower_SummonEnemy_execCleanUpSummon_Parms CleanUpSummon_Parms;

	this->ProcessEvent ( pFnCleanUpSummon, &CleanUpSummon_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_SummonEnemy::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 88674 ];

	ADunDefTower_SummonEnemy_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.BaseChange
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_SummonEnemy::eventBaseChange ( )
{
	static UFunction* pFnBaseChange = NULL;

	if ( ! pFnBaseChange )
		pFnBaseChange = (UFunction*) UObject::GObjObjects()->Data[ 88673 ];

	ADunDefTower_SummonEnemy_eventBaseChange_Parms BaseChange_Parms;

	this->ProcessEvent ( pFnBaseChange, &BaseChange_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SetUpEnemyValues
// [0x00024102] 
// Parameters infos:
// unsigned long                  bInitialSetup                  ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_SummonEnemy::SetUpEnemyValues ( unsigned long bInitialSetup )
{
	static UFunction* pFnSetUpEnemyValues = NULL;

	if ( ! pFnSetUpEnemyValues )
		pFnSetUpEnemyValues = (UFunction*) UObject::GObjObjects()->Data[ 88671 ];

	ADunDefTower_SummonEnemy_execSetUpEnemyValues_Parms SetUpEnemyValues_Parms;
	SetUpEnemyValues_Parms.bInitialSetup = bInitialSetup;

	this->ProcessEvent ( pFnSetUpEnemyValues, &SetUpEnemyValues_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SpawnMyEnemy
// [0x00020002] 
// Parameters infos:

void ADunDefTower_SummonEnemy::SpawnMyEnemy ( )
{
	static UFunction* pFnSpawnMyEnemy = NULL;

	if ( ! pFnSpawnMyEnemy )
		pFnSpawnMyEnemy = (UFunction*) UObject::GObjObjects()->Data[ 88670 ];

	ADunDefTower_SummonEnemy_execSpawnMyEnemy_Parms SpawnMyEnemy_Parms;

	this->ProcessEvent ( pFnSpawnMyEnemy, &SpawnMyEnemy_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.InitializeForInstigator
// [0x00020002] 
// Parameters infos:
// class APawn*                   Pawn                           ( CPF_Parm )

void ADunDefTower_SummonEnemy::InitializeForInstigator ( class APawn* Pawn )
{
	static UFunction* pFnInitializeForInstigator = NULL;

	if ( ! pFnInitializeForInstigator )
		pFnInitializeForInstigator = (UFunction*) UObject::GObjObjects()->Data[ 88668 ];

	ADunDefTower_SummonEnemy_execInitializeForInstigator_Parms InitializeForInstigator_Parms;
	InitializeForInstigator_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnInitializeForInstigator, &InitializeForInstigator_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetLastDamageTime
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_SummonEnemy::GetLastDamageTime ( )
{
	static UFunction* pFnGetLastDamageTime = NULL;

	if ( ! pFnGetLastDamageTime )
		pFnGetLastDamageTime = (UFunction*) UObject::GObjObjects()->Data[ 88666 ];

	ADunDefTower_SummonEnemy_execGetLastDamageTime_Parms GetLastDamageTime_Parms;

	this->ProcessEvent ( pFnGetLastDamageTime, &GetLastDamageTime_Parms, NULL );

	return GetLastDamageTime_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.HasBeenRendered
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefTower_SummonEnemy::HasBeenRendered ( )
{
	static UFunction* pFnHasBeenRendered = NULL;

	if ( ! pFnHasBeenRendered )
		pFnHasBeenRendered = (UFunction*) UObject::GObjObjects()->Data[ 88664 ];

	ADunDefTower_SummonEnemy_execHasBeenRendered_Parms HasBeenRendered_Parms;

	this->ProcessEvent ( pFnHasBeenRendered, &HasBeenRendered_Parms, NULL );

	return HasBeenRendered_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateEnemyCollisionValues
// [0x00020102] 
// Parameters infos:

void ADunDefTower_SummonEnemy::UpdateEnemyCollisionValues ( )
{
	static UFunction* pFnUpdateEnemyCollisionValues = NULL;

	if ( ! pFnUpdateEnemyCollisionValues )
		pFnUpdateEnemyCollisionValues = (UFunction*) UObject::GObjObjects()->Data[ 88663 ];

	ADunDefTower_SummonEnemy_execUpdateEnemyCollisionValues_Parms UpdateEnemyCollisionValues_Parms;

	this->ProcessEvent ( pFnUpdateEnemyCollisionValues, &UpdateEnemyCollisionValues_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateReplicatedStatValues
// [0x00020002] 
// Parameters infos:

void ADunDefTower_SummonEnemy::UpdateReplicatedStatValues ( )
{
	static UFunction* pFnUpdateReplicatedStatValues = NULL;

	if ( ! pFnUpdateReplicatedStatValues )
		pFnUpdateReplicatedStatValues = (UFunction*) UObject::GObjObjects()->Data[ 88662 ];

	ADunDefTower_SummonEnemy_execUpdateReplicatedStatValues_Parms UpdateReplicatedStatValues_Parms;

	this->ProcessEvent ( pFnUpdateReplicatedStatValues, &UpdateReplicatedStatValues_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_SummonEnemy::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 88638 ];

	ADunDefTower_SummonEnemy_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefTower_SummonEnemy::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 88636 ];

	ADunDefTower_SummonEnemy_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.StaticGetTowerScale
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UDunDefHero*             hero                           ( CPF_Parm )
// class ADunDefTower*            tower                          ( CPF_Parm )
// float                          TowerRangeScaler               ( CPF_Parm )

float ADunDefTower_TripWire::StaticGetTowerScale ( class UDunDefHero* hero, class ADunDefTower* tower, float TowerRangeScaler )
{
	static UFunction* pFnStaticGetTowerScale = NULL;

	if ( ! pFnStaticGetTowerScale )
		pFnStaticGetTowerScale = (UFunction*) UObject::GObjObjects()->Data[ 88263 ];

	ADunDefTower_TripWire_execStaticGetTowerScale_Parms StaticGetTowerScale_Parms;
	StaticGetTowerScale_Parms.hero = hero;
	StaticGetTowerScale_Parms.tower = tower;
	StaticGetTowerScale_Parms.TowerRangeScaler = TowerRangeScaler;

	this->ProcessEvent ( pFnStaticGetTowerScale, &StaticGetTowerScale_Parms, NULL );

	return StaticGetTowerScale_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.AllowAbilityMove
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefTower_TripWire::AllowAbilityMove ( )
{
	static UFunction* pFnAllowAbilityMove = NULL;

	if ( ! pFnAllowAbilityMove )
		pFnAllowAbilityMove = (UFunction*) UObject::GObjObjects()->Data[ 88261 ];

	ADunDefTower_TripWire_execAllowAbilityMove_Parms AllowAbilityMove_Parms;

	this->ProcessEvent ( pFnAllowAbilityMove, &AllowAbilityMove_Parms, NULL );

	return AllowAbilityMove_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.TransferTowerOwnership
// [0x00020002] 
// Parameters infos:
// class APawn*                   toPawn                         ( CPF_Parm )

void ADunDefTower_TripWire::TransferTowerOwnership ( class APawn* toPawn )
{
	static UFunction* pFnTransferTowerOwnership = NULL;

	if ( ! pFnTransferTowerOwnership )
		pFnTransferTowerOwnership = (UFunction*) UObject::GObjObjects()->Data[ 88259 ];

	ADunDefTower_TripWire_execTransferTowerOwnership_Parms TransferTowerOwnership_Parms;
	TransferTowerOwnership_Parms.toPawn = toPawn;

	this->ProcessEvent ( pFnTransferTowerOwnership, &TransferTowerOwnership_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.CheckAssociateWithHero
// [0x00020002] 
// Parameters infos:
// class UDunDefHero*             hero                           ( CPF_Parm )
// class ADunDefPawn*             pawnInstigator                 ( CPF_Parm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )

void ADunDefTower_TripWire::CheckAssociateWithHero ( class UDunDefHero* hero, class ADunDefPawn* pawnInstigator, class ADunDefPlayerController* PC )
{
	static UFunction* pFnCheckAssociateWithHero = NULL;

	if ( ! pFnCheckAssociateWithHero )
		pFnCheckAssociateWithHero = (UFunction*) UObject::GObjObjects()->Data[ 88255 ];

	ADunDefTower_TripWire_execCheckAssociateWithHero_Parms CheckAssociateWithHero_Parms;
	CheckAssociateWithHero_Parms.hero = hero;
	CheckAssociateWithHero_Parms.pawnInstigator = pawnInstigator;
	CheckAssociateWithHero_Parms.PC = PC;

	this->ProcessEvent ( pFnCheckAssociateWithHero, &CheckAssociateWithHero_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.CanDetonate
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefTower_TripWire::CanDetonate ( )
{
	static UFunction* pFnCanDetonate = NULL;

	if ( ! pFnCanDetonate )
		pFnCanDetonate = (UFunction*) UObject::GObjObjects()->Data[ 88253 ];

	ADunDefTower_TripWire_execCanDetonate_Parms CanDetonate_Parms;

	this->ProcessEvent ( pFnCanDetonate, &CanDetonate_Parms, NULL );

	return CanDetonate_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.HasCharges
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefTower_TripWire::HasCharges ( )
{
	static UFunction* pFnHasCharges = NULL;

	if ( ! pFnHasCharges )
		pFnHasCharges = (UFunction*) UObject::GObjObjects()->Data[ 88251 ];

	ADunDefTower_TripWire_execHasCharges_Parms HasCharges_Parms;

	this->ProcessEvent ( pFnHasCharges, &HasCharges_Parms, NULL );

	return HasCharges_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.GetSellWorth
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripWire::GetSellWorth ( )
{
	static UFunction* pFnGetSellWorth = NULL;

	if ( ! pFnGetSellWorth )
		pFnGetSellWorth = (UFunction*) UObject::GObjObjects()->Data[ 88249 ];

	ADunDefTower_TripWire_execGetSellWorth_Parms GetSellWorth_Parms;

	this->ProcessEvent ( pFnGetSellWorth, &GetSellWorth_Parms, NULL );

	return GetSellWorth_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.GetEnemyTargetingDesirability
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AEngineNativeDunDefAIController* forController                  ( CPF_Parm )

float ADunDefTower_TripWire::eventGetEnemyTargetingDesirability ( class AEngineNativeDunDefAIController* forController )
{
	static UFunction* pFnGetEnemyTargetingDesirability = NULL;

	if ( ! pFnGetEnemyTargetingDesirability )
		pFnGetEnemyTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 88246 ];

	ADunDefTower_TripWire_eventGetEnemyTargetingDesirability_Parms GetEnemyTargetingDesirability_Parms;
	GetEnemyTargetingDesirability_Parms.forController = forController;

	this->ProcessEvent ( pFnGetEnemyTargetingDesirability, &GetEnemyTargetingDesirability_Parms, NULL );

	return GetEnemyTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.DrawMiniMapIcon
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class ADunDefMiniMap*          MiniMap                        ( CPF_Parm )

void ADunDefTower_TripWire::DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap )
{
	static UFunction* pFnDrawMiniMapIcon = NULL;

	if ( ! pFnDrawMiniMapIcon )
		pFnDrawMiniMapIcon = (UFunction*) UObject::GObjObjects()->Data[ 88239 ];

	ADunDefTower_TripWire_execDrawMiniMapIcon_Parms DrawMiniMapIcon_Parms;
	DrawMiniMapIcon_Parms.Canvas = Canvas;
	DrawMiniMapIcon_Parms.MiniMap = MiniMap;

	this->ProcessEvent ( pFnDrawMiniMapIcon, &DrawMiniMapIcon_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.HealDetonationStyle
// [0x00024102] 
// Parameters infos:
// int                            HealAmt                        ( CPF_Parm )
// class AController*             Healer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// unsigned long                  bShowFloatingNumbers           ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_TripWire::HealDetonationStyle ( int HealAmt, class AController* Healer, class UClass* DamageType, unsigned long bShowFloatingNumbers )
{
	static UFunction* pFnHealDetonationStyle = NULL;

	if ( ! pFnHealDetonationStyle )
		pFnHealDetonationStyle = (UFunction*) UObject::GObjObjects()->Data[ 88234 ];

	ADunDefTower_TripWire_execHealDetonationStyle_Parms HealDetonationStyle_Parms;
	HealDetonationStyle_Parms.HealAmt = HealAmt;
	HealDetonationStyle_Parms.Healer = Healer;
	HealDetonationStyle_Parms.DamageType = DamageType;
	HealDetonationStyle_Parms.bShowFloatingNumbers = bShowFloatingNumbers;

	this->ProcessEvent ( pFnHealDetonationStyle, &HealDetonationStyle_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.GetAlternateActor
// [0x00020102] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* ADunDefTower_TripWire::GetAlternateActor ( )
{
	static UFunction* pFnGetAlternateActor = NULL;

	if ( ! pFnGetAlternateActor )
		pFnGetAlternateActor = (UFunction*) UObject::GObjObjects()->Data[ 88232 ];

	ADunDefTower_TripWire_execGetAlternateActor_Parms GetAlternateActor_Parms;

	this->ProcessEvent ( pFnGetAlternateActor, &GetAlternateActor_Parms, NULL );

	return GetAlternateActor_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.IsMultiActorTower
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefTower_TripWire::IsMultiActorTower ( )
{
	static UFunction* pFnIsMultiActorTower = NULL;

	if ( ! pFnIsMultiActorTower )
		pFnIsMultiActorTower = (UFunction*) UObject::GObjObjects()->Data[ 88230 ];

	ADunDefTower_TripWire_execIsMultiActorTower_Parms IsMultiActorTower_Parms;

	this->ProcessEvent ( pFnIsMultiActorTower, &IsMultiActorTower_Parms, NULL );

	return IsMultiActorTower_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.DrawUpgradeOverlay
// [0x00020102] 
// Parameters infos:
// class ADunDefHUD*              H                              ( CPF_Parm )
// float                          Opacity                        ( CPF_Parm )
// struct FColor                  upgradeOverlayColor            ( CPF_Parm )

void ADunDefTower_TripWire::DrawUpgradeOverlay ( class ADunDefHUD* H, float Opacity, struct FColor upgradeOverlayColor )
{
	static UFunction* pFnDrawUpgradeOverlay = NULL;

	if ( ! pFnDrawUpgradeOverlay )
		pFnDrawUpgradeOverlay = (UFunction*) UObject::GObjObjects()->Data[ 88226 ];

	ADunDefTower_TripWire_execDrawUpgradeOverlay_Parms DrawUpgradeOverlay_Parms;
	DrawUpgradeOverlay_Parms.H = H;
	DrawUpgradeOverlay_Parms.Opacity = Opacity;
	memcpy ( &DrawUpgradeOverlay_Parms.upgradeOverlayColor, &upgradeOverlayColor, 0x4 );

	this->ProcessEvent ( pFnDrawUpgradeOverlay, &DrawUpgradeOverlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.GetGlobalTowerHealthMultiplier
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripWire::GetGlobalTowerHealthMultiplier ( )
{
	static UFunction* pFnGetGlobalTowerHealthMultiplier = NULL;

	if ( ! pFnGetGlobalTowerHealthMultiplier )
		pFnGetGlobalTowerHealthMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 88224 ];

	ADunDefTower_TripWire_execGetGlobalTowerHealthMultiplier_Parms GetGlobalTowerHealthMultiplier_Parms;

	this->ProcessEvent ( pFnGetGlobalTowerHealthMultiplier, &GetGlobalTowerHealthMultiplier_Parms, NULL );

	return GetGlobalTowerHealthMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.PerformFullHeal
// [0x00020002] 
// Parameters infos:

void ADunDefTower_TripWire::PerformFullHeal ( )
{
	static UFunction* pFnPerformFullHeal = NULL;

	if ( ! pFnPerformFullHeal )
		pFnPerformFullHeal = (UFunction*) UObject::GObjObjects()->Data[ 88223 ];

	ADunDefTower_TripWire_execPerformFullHeal_Parms PerformFullHeal_Parms;

	this->ProcessEvent ( pFnPerformFullHeal, &PerformFullHeal_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.SetRadiusScale
// [0x00020100] 
// Parameters infos:
// float                          theRadiusScale                 ( CPF_Parm )

void ADunDefTower_TripWire::SetRadiusScale ( float theRadiusScale )
{
	static UFunction* pFnSetRadiusScale = NULL;

	if ( ! pFnSetRadiusScale )
		pFnSetRadiusScale = (UFunction*) UObject::GObjObjects()->Data[ 88221 ];

	ADunDefTower_TripWire_execSetRadiusScale_Parms SetRadiusScale_Parms;
	SetRadiusScale_Parms.theRadiusScale = theRadiusScale;

	this->ProcessEvent ( pFnSetRadiusScale, &SetRadiusScale_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.DrawTowerToolTipStats
// [0x00420102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// float                          Opacity                        ( CPF_Parm )
// class ULocalPlayer*            ForPlayer                      ( CPF_Parm )
// float                          canvasScale                    ( CPF_Parm )
// float                          PosX                           ( CPF_Parm | CPF_OutParm )
// float                          PosY                           ( CPF_Parm | CPF_OutParm )

void ADunDefTower_TripWire::DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY )
{
	static UFunction* pFnDrawTowerToolTipStats = NULL;

	if ( ! pFnDrawTowerToolTipStats )
		pFnDrawTowerToolTipStats = (UFunction*) UObject::GObjObjects()->Data[ 88214 ];

	ADunDefTower_TripWire_execDrawTowerToolTipStats_Parms DrawTowerToolTipStats_Parms;
	DrawTowerToolTipStats_Parms.C = C;
	DrawTowerToolTipStats_Parms.Opacity = Opacity;
	DrawTowerToolTipStats_Parms.ForPlayer = ForPlayer;
	DrawTowerToolTipStats_Parms.canvasScale = canvasScale;

	this->ProcessEvent ( pFnDrawTowerToolTipStats, &DrawTowerToolTipStats_Parms, NULL );

	if ( PosX )
		*PosX = DrawTowerToolTipStats_Parms.PosX;

	if ( PosY )
		*PosY = DrawTowerToolTipStats_Parms.PosY;
};

// Function DunDefSpecial.DunDefTower_TripWire.GetToolTipText
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ADunDefTower_TripWire::GetToolTipText ( )
{
	static UFunction* pFnGetToolTipText = NULL;

	if ( ! pFnGetToolTipText )
		pFnGetToolTipText = (UFunction*) UObject::GObjObjects()->Data[ 88212 ];

	ADunDefTower_TripWire_execGetToolTipText_Parms GetToolTipText_Parms;

	this->ProcessEvent ( pFnGetToolTipText, &GetToolTipText_Parms, NULL );

	return GetToolTipText_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.ScaleForHeroModifiers
// [0x00020002] 
// Parameters infos:
// unsigned long                  IsFirstTime                    ( CPF_Parm )

void ADunDefTower_TripWire::ScaleForHeroModifiers ( unsigned long IsFirstTime )
{
	static UFunction* pFnScaleForHeroModifiers = NULL;

	if ( ! pFnScaleForHeroModifiers )
		pFnScaleForHeroModifiers = (UFunction*) UObject::GObjObjects()->Data[ 88208 ];

	ADunDefTower_TripWire_execScaleForHeroModifiers_Parms ScaleForHeroModifiers_Parms;
	ScaleForHeroModifiers_Parms.IsFirstTime = IsFirstTime;

	this->ProcessEvent ( pFnScaleForHeroModifiers, &ScaleForHeroModifiers_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.ScaleHealthMultiplier
// [0x00020002] 
// Parameters infos:

void ADunDefTower_TripWire::ScaleHealthMultiplier ( )
{
	static UFunction* pFnScaleHealthMultiplier = NULL;

	if ( ! pFnScaleHealthMultiplier )
		pFnScaleHealthMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 88206 ];

	ADunDefTower_TripWire_execScaleHealthMultiplier_Parms ScaleHealthMultiplier_Parms;

	this->ProcessEvent ( pFnScaleHealthMultiplier, &ScaleHealthMultiplier_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.ReportSummoned
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::ReportSummoned ( )
{
	static UFunction* pFnReportSummoned = NULL;

	if ( ! pFnReportSummoned )
		pFnReportSummoned = (UFunction*) UObject::GObjObjects()->Data[ 88205 ];

	ADunDefTower_TripWire_execReportSummoned_Parms ReportSummoned_Parms;

	this->ProcessEvent ( pFnReportSummoned, &ReportSummoned_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.UpdateTowerRatingMaterial
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::UpdateTowerRatingMaterial ( )
{
	static UFunction* pFnUpdateTowerRatingMaterial = NULL;

	if ( ! pFnUpdateTowerRatingMaterial )
		pFnUpdateTowerRatingMaterial = (UFunction*) UObject::GObjObjects()->Data[ 88204 ];

	ADunDefTower_TripWire_execUpdateTowerRatingMaterial_Parms UpdateTowerRatingMaterial_Parms;

	this->ProcessEvent ( pFnUpdateTowerRatingMaterial, &UpdateTowerRatingMaterial_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.NeedsRepair
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  requireFullHealth              ( CPF_OptionalParm | CPF_Parm )

bool ADunDefTower_TripWire::NeedsRepair ( unsigned long requireFullHealth )
{
	static UFunction* pFnNeedsRepair = NULL;

	if ( ! pFnNeedsRepair )
		pFnNeedsRepair = (UFunction*) UObject::GObjObjects()->Data[ 88201 ];

	ADunDefTower_TripWire_execNeedsRepair_Parms NeedsRepair_Parms;
	NeedsRepair_Parms.requireFullHealth = requireFullHealth;

	this->ProcessEvent ( pFnNeedsRepair, &NeedsRepair_Parms, NULL );

	return NeedsRepair_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.GetHealthPercent
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripWire::GetHealthPercent ( )
{
	static UFunction* pFnGetHealthPercent = NULL;

	if ( ! pFnGetHealthPercent )
		pFnGetHealthPercent = (UFunction*) UObject::GObjObjects()->Data[ 88199 ];

	ADunDefTower_TripWire_execGetHealthPercent_Parms GetHealthPercent_Parms;

	this->ProcessEvent ( pFnGetHealthPercent, &GetHealthPercent_Parms, NULL );

	return GetHealthPercent_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.HealDamage
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Amount                         ( CPF_Parm )
// class AController*             Healer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

bool ADunDefTower_TripWire::eventHealDamage ( int Amount, class AController* Healer, class UClass* DamageType )
{
	static UFunction* pFnHealDamage = NULL;

	if ( ! pFnHealDamage )
		pFnHealDamage = (UFunction*) UObject::GObjObjects()->Data[ 88193 ];

	ADunDefTower_TripWire_eventHealDamage_Parms HealDamage_Parms;
	HealDamage_Parms.Amount = Amount;
	HealDamage_Parms.Healer = Healer;
	HealDamage_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnHealDamage, &HealDamage_Parms, NULL );

	return HealDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.HealPctOfMaxHealth
// [0x00024002] 
// Parameters infos:
// float                          HealPct                        ( CPF_Parm )
// class AController*             Healer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// unsigned long                  bShowFloatingNumbers           ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_TripWire::HealPctOfMaxHealth ( float HealPct, class AController* Healer, class UClass* DamageType, unsigned long bShowFloatingNumbers )
{
	static UFunction* pFnHealPctOfMaxHealth = NULL;

	if ( ! pFnHealPctOfMaxHealth )
		pFnHealPctOfMaxHealth = (UFunction*) UObject::GObjObjects()->Data[ 88185 ];

	ADunDefTower_TripWire_execHealPctOfMaxHealth_Parms HealPctOfMaxHealth_Parms;
	HealPctOfMaxHealth_Parms.HealPct = HealPct;
	HealPctOfMaxHealth_Parms.Healer = Healer;
	HealPctOfMaxHealth_Parms.DamageType = DamageType;
	HealPctOfMaxHealth_Parms.bShowFloatingNumbers = bShowFloatingNumbers;

	this->ProcessEvent ( pFnHealPctOfMaxHealth, &HealPctOfMaxHealth_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.GetHealth
// [0x00024102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bGetMax                        ( CPF_OptionalParm | CPF_Parm )

int ADunDefTower_TripWire::GetHealth ( unsigned long bGetMax )
{
	static UFunction* pFnGetHealth = NULL;

	if ( ! pFnGetHealth )
		pFnGetHealth = (UFunction*) UObject::GObjObjects()->Data[ 88182 ];

	ADunDefTower_TripWire_execGetHealth_Parms GetHealth_Parms;
	GetHealth_Parms.bGetMax = bGetMax;

	this->ProcessEvent ( pFnGetHealth, &GetHealth_Parms, NULL );

	return GetHealth_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.IncrementRepair
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          CurrentMana                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

float ADunDefTower_TripWire::IncrementRepair ( float CurrentMana, float DeltaTime )
{
	static UFunction* pFnIncrementRepair = NULL;

	if ( ! pFnIncrementRepair )
		pFnIncrementRepair = (UFunction*) UObject::GObjObjects()->Data[ 88174 ];

	ADunDefTower_TripWire_execIncrementRepair_Parms IncrementRepair_Parms;
	IncrementRepair_Parms.CurrentMana = CurrentMana;
	IncrementRepair_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnIncrementRepair, &IncrementRepair_Parms, NULL );

	return IncrementRepair_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.IncrementDetonationRepair
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          CurrentMana                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

float ADunDefTower_TripWire::IncrementDetonationRepair ( float CurrentMana, float DeltaTime )
{
	static UFunction* pFnIncrementDetonationRepair = NULL;

	if ( ! pFnIncrementDetonationRepair )
		pFnIncrementDetonationRepair = (UFunction*) UObject::GObjObjects()->Data[ 88166 ];

	ADunDefTower_TripWire_execIncrementDetonationRepair_Parms IncrementDetonationRepair_Parms;
	IncrementDetonationRepair_Parms.CurrentMana = CurrentMana;
	IncrementDetonationRepair_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnIncrementDetonationRepair, &IncrementDetonationRepair_Parms, NULL );

	return IncrementDetonationRepair_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.GetCurrentRepairPercentage
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          StartRepairTime                ( CPF_OptionalParm | CPF_Parm )
// float                          RepairSpeed                    ( CPF_OptionalParm | CPF_Parm )

float ADunDefTower_TripWire::GetCurrentRepairPercentage ( float StartRepairTime, float RepairSpeed )
{
	static UFunction* pFnGetCurrentRepairPercentage = NULL;

	if ( ! pFnGetCurrentRepairPercentage )
		pFnGetCurrentRepairPercentage = (UFunction*) UObject::GObjObjects()->Data[ 88162 ];

	ADunDefTower_TripWire_execGetCurrentRepairPercentage_Parms GetCurrentRepairPercentage_Parms;
	GetCurrentRepairPercentage_Parms.StartRepairTime = StartRepairTime;
	GetCurrentRepairPercentage_Parms.RepairSpeed = RepairSpeed;

	this->ProcessEvent ( pFnGetCurrentRepairPercentage, &GetCurrentRepairPercentage_Parms, NULL );

	return GetCurrentRepairPercentage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.StartRepair
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::StartRepair ( )
{
	static UFunction* pFnStartRepair = NULL;

	if ( ! pFnStartRepair )
		pFnStartRepair = (UFunction*) UObject::GObjObjects()->Data[ 88161 ];

	ADunDefTower_TripWire_execStartRepair_Parms StartRepair_Parms;

	this->ProcessEvent ( pFnStartRepair, &StartRepair_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.GetTimeToRepair
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripWire::GetTimeToRepair ( )
{
	static UFunction* pFnGetTimeToRepair = NULL;

	if ( ! pFnGetTimeToRepair )
		pFnGetTimeToRepair = (UFunction*) UObject::GObjObjects()->Data[ 88159 ];

	ADunDefTower_TripWire_execGetTimeToRepair_Parms GetTimeToRepair_Parms;

	this->ProcessEvent ( pFnGetTimeToRepair, &GetTimeToRepair_Parms, NULL );

	return GetTimeToRepair_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.GetCostToRepair
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripWire::GetCostToRepair ( )
{
	static UFunction* pFnGetCostToRepair = NULL;

	if ( ! pFnGetCostToRepair )
		pFnGetCostToRepair = (UFunction*) UObject::GObjObjects()->Data[ 88157 ];

	ADunDefTower_TripWire_execGetCostToRepair_Parms GetCostToRepair_Parms;

	this->ProcessEvent ( pFnGetCostToRepair, &GetCostToRepair_Parms, NULL );

	return GetCostToRepair_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.GetTimeOfTotalRepair
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripWire::GetTimeOfTotalRepair ( )
{
	static UFunction* pFnGetTimeOfTotalRepair = NULL;

	if ( ! pFnGetTimeOfTotalRepair )
		pFnGetTimeOfTotalRepair = (UFunction*) UObject::GObjObjects()->Data[ 88155 ];

	ADunDefTower_TripWire_execGetTimeOfTotalRepair_Parms GetTimeOfTotalRepair_Parms;

	this->ProcessEvent ( pFnGetTimeOfTotalRepair, &GetTimeOfTotalRepair_Parms, NULL );

	return GetTimeOfTotalRepair_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.Died
// [0x00020002] 
// Parameters infos:
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void ADunDefTower_TripWire::Died ( class AController* EventInstigator, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 88150 ];

	ADunDefTower_TripWire_execDied_Parms Died_Parms;
	Died_Parms.EventInstigator = EventInstigator;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );
	Died_Parms.DamageType = DamageType;
	Died_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.ReportedDeath
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::ReportedDeath ( )
{
	static UFunction* pFnReportedDeath = NULL;

	if ( ! pFnReportedDeath )
		pFnReportedDeath = (UFunction*) UObject::GObjObjects()->Data[ 88149 ];

	ADunDefTower_TripWire_execReportedDeath_Parms ReportedDeath_Parms;

	this->ProcessEvent ( pFnReportedDeath, &ReportedDeath_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.ReportDeath
// [0x00020002] 
// Parameters infos:

void ADunDefTower_TripWire::ReportDeath ( )
{
	static UFunction* pFnReportDeath = NULL;

	if ( ! pFnReportDeath )
		pFnReportDeath = (UFunction*) UObject::GObjObjects()->Data[ 88147 ];

	ADunDefTower_TripWire_execReportDeath_Parms ReportDeath_Parms;

	this->ProcessEvent ( pFnReportDeath, &ReportDeath_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.DecreaseLifeEnergy
// [0x00020102] 
// Parameters infos:
// float                          X                              ( CPF_Parm )

void ADunDefTower_TripWire::DecreaseLifeEnergy ( float X )
{
	static UFunction* pFnDecreaseLifeEnergy = NULL;

	if ( ! pFnDecreaseLifeEnergy )
		pFnDecreaseLifeEnergy = (UFunction*) UObject::GObjObjects()->Data[ 88144 ];

	ADunDefTower_TripWire_execDecreaseLifeEnergy_Parms DecreaseLifeEnergy_Parms;
	DecreaseLifeEnergy_Parms.X = X;

	this->ProcessEvent ( pFnDecreaseLifeEnergy, &DecreaseLifeEnergy_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.ContinueDrawingToolTip
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  ContinueDrawing                ( CPF_Parm )

bool ADunDefTower_TripWire::ContinueDrawingToolTip ( unsigned long ContinueDrawing )
{
	static UFunction* pFnContinueDrawingToolTip = NULL;

	if ( ! pFnContinueDrawingToolTip )
		pFnContinueDrawingToolTip = (UFunction*) UObject::GObjObjects()->Data[ 88141 ];

	ADunDefTower_TripWire_execContinueDrawingToolTip_Parms ContinueDrawingToolTip_Parms;
	ContinueDrawingToolTip_Parms.ContinueDrawing = ContinueDrawing;

	this->ProcessEvent ( pFnContinueDrawingToolTip, &ContinueDrawingToolTip_Parms, NULL );

	return ContinueDrawingToolTip_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.DrawToolTip
// [0x00824102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// int                            PosX                           ( CPF_Parm )
// int                            PosY                           ( CPF_Parm )
// class ULocalPlayer*            ForPlayer                      ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_TripWire::DrawToolTip ( class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer )
{
	static UFunction* pFnDrawToolTip = NULL;

	if ( ! pFnDrawToolTip )
		pFnDrawToolTip = (UFunction*) UObject::GObjObjects()->Data[ 88135 ];

	ADunDefTower_TripWire_execDrawToolTip_Parms DrawToolTip_Parms;
	DrawToolTip_Parms.C = C;
	DrawToolTip_Parms.PosX = PosX;
	DrawToolTip_Parms.PosY = PosY;
	DrawToolTip_Parms.ForPlayer = ForPlayer;

	this->ProcessEvent ( pFnDrawToolTip, &DrawToolTip_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.Sell
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )

bool ADunDefTower_TripWire::Sell ( class ADunDefPlayerController* PC )
{
	static UFunction* pFnSell = NULL;

	if ( ! pFnSell )
		pFnSell = (UFunction*) UObject::GObjObjects()->Data[ 88132 ];

	ADunDefTower_TripWire_execSell_Parms Sell_Parms;
	Sell_Parms.PC = PC;

	this->ProcessEvent ( pFnSell, &Sell_Parms, NULL );

	return Sell_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_TripWire::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 88131 ];

	ADunDefTower_TripWire_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.PlaySellFX
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::PlaySellFX ( )
{
	static UFunction* pFnPlaySellFX = NULL;

	if ( ! pFnPlaySellFX )
		pFnPlaySellFX = (UFunction*) UObject::GObjObjects()->Data[ 88130 ];

	ADunDefTower_TripWire_execPlaySellFX_Parms PlaySellFX_Parms;

	this->ProcessEvent ( pFnPlaySellFX, &PlaySellFX_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.Detonate
// [0x00024102] 
// Parameters infos:
// int                            SetDetonationsNumber           ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_TripWire::Detonate ( int SetDetonationsNumber )
{
	static UFunction* pFnDetonate = NULL;

	if ( ! pFnDetonate )
		pFnDetonate = (UFunction*) UObject::GObjObjects()->Data[ 88128 ];

	ADunDefTower_TripWire_execDetonate_Parms Detonate_Parms;
	Detonate_Parms.SetDetonationsNumber = SetDetonationsNumber;

	this->ProcessEvent ( pFnDetonate, &Detonate_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.ChildEndDetonate
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::ChildEndDetonate ( )
{
	static UFunction* pFnChildEndDetonate = NULL;

	if ( ! pFnChildEndDetonate )
		pFnChildEndDetonate = (UFunction*) UObject::GObjObjects()->Data[ 88114 ];

	ADunDefTower_TripWire_execChildEndDetonate_Parms ChildEndDetonate_Parms;

	this->ProcessEvent ( pFnChildEndDetonate, &ChildEndDetonate_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.ChildDetonate
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::ChildDetonate ( )
{
	static UFunction* pFnChildDetonate = NULL;

	if ( ! pFnChildDetonate )
		pFnChildDetonate = (UFunction*) UObject::GObjObjects()->Data[ 88113 ];

	ADunDefTower_TripWire_execChildDetonate_Parms ChildDetonate_Parms;

	this->ProcessEvent ( pFnChildDetonate, &ChildDetonate_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.RemoveStunnedActor
// [0x00024102] 
// Parameters infos:
// class AActor*                  stunRemoval                    ( CPF_Parm )
// int                            removalIndex                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bDontReplicate                 ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_TripWire::RemoveStunnedActor ( class AActor* stunRemoval, int removalIndex, unsigned long bDontReplicate )
{
	static UFunction* pFnRemoveStunnedActor = NULL;

	if ( ! pFnRemoveStunnedActor )
		pFnRemoveStunnedActor = (UFunction*) UObject::GObjObjects()->Data[ 88102 ];

	ADunDefTower_TripWire_execRemoveStunnedActor_Parms RemoveStunnedActor_Parms;
	RemoveStunnedActor_Parms.stunRemoval = stunRemoval;
	RemoveStunnedActor_Parms.removalIndex = removalIndex;
	RemoveStunnedActor_Parms.bDontReplicate = bDontReplicate;

	this->ProcessEvent ( pFnRemoveStunnedActor, &RemoveStunnedActor_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.CanStun
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefEnemy*            stunTest                       ( CPF_Parm )

bool ADunDefTower_TripWire::CanStun ( class ADunDefEnemy* stunTest )
{
	static UFunction* pFnCanStun = NULL;

	if ( ! pFnCanStun )
		pFnCanStun = (UFunction*) UObject::GObjObjects()->Data[ 88099 ];

	ADunDefTower_TripWire_execCanStun_Parms CanStun_Parms;
	CanStun_Parms.stunTest = stunTest;

	this->ProcessEvent ( pFnCanStun, &CanStun_Parms, NULL );

	return CanStun_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.AddStunnedActor
// [0x00820102] 
// Parameters infos:
// struct FBeamTrippers           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefEnemy*            newStun                        ( CPF_Parm )

struct FBeamTrippers ADunDefTower_TripWire::AddStunnedActor ( class ADunDefEnemy* newStun )
{
	static UFunction* pFnAddStunnedActor = NULL;

	if ( ! pFnAddStunnedActor )
		pFnAddStunnedActor = (UFunction*) UObject::GObjObjects()->Data[ 88092 ];

	ADunDefTower_TripWire_execAddStunnedActor_Parms AddStunnedActor_Parms;
	AddStunnedActor_Parms.newStun = newStun;

	this->ProcessEvent ( pFnAddStunnedActor, &AddStunnedActor_Parms, NULL );

	return AddStunnedActor_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.ClearBeamTrippers
// [0x00020102] 
// Parameters infos:
// unsigned long                  bFullClear                     ( CPF_Parm )

void ADunDefTower_TripWire::ClearBeamTrippers ( unsigned long bFullClear )
{
	static UFunction* pFnClearBeamTrippers = NULL;

	if ( ! pFnClearBeamTrippers )
		pFnClearBeamTrippers = (UFunction*) UObject::GObjObjects()->Data[ 88089 ];

	ADunDefTower_TripWire_execClearBeamTrippers_Parms ClearBeamTrippers_Parms;
	ClearBeamTrippers_Parms.bFullClear = bFullClear;

	this->ProcessEvent ( pFnClearBeamTrippers, &ClearBeamTrippers_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.GetAttackDuration
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripWire::GetAttackDuration ( )
{
	static UFunction* pFnGetAttackDuration = NULL;

	if ( ! pFnGetAttackDuration )
		pFnGetAttackDuration = (UFunction*) UObject::GObjObjects()->Data[ 88087 ];

	ADunDefTower_TripWire_execGetAttackDuration_Parms GetAttackDuration_Parms;

	this->ProcessEvent ( pFnGetAttackDuration, &GetAttackDuration_Parms, NULL );

	return GetAttackDuration_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.ResetTrip
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::ResetTrip ( )
{
	static UFunction* pFnResetTrip = NULL;

	if ( ! pFnResetTrip )
		pFnResetTrip = (UFunction*) UObject::GObjObjects()->Data[ 88086 ];

	ADunDefTower_TripWire_execResetTrip_Parms ResetTrip_Parms;

	this->ProcessEvent ( pFnResetTrip, &ResetTrip_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.DeactivateTrip
// [0x00024102] 
// Parameters infos:
// unsigned long                  bShutDownEffects               ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_TripWire::DeactivateTrip ( unsigned long bShutDownEffects )
{
	static UFunction* pFnDeactivateTrip = NULL;

	if ( ! pFnDeactivateTrip )
		pFnDeactivateTrip = (UFunction*) UObject::GObjObjects()->Data[ 88084 ];

	ADunDefTower_TripWire_execDeactivateTrip_Parms DeactivateTrip_Parms;
	DeactivateTrip_Parms.bShutDownEffects = bShutDownEffects;

	this->ProcessEvent ( pFnDeactivateTrip, &DeactivateTrip_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.ActivateTrip
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::ActivateTrip ( )
{
	static UFunction* pFnActivateTrip = NULL;

	if ( ! pFnActivateTrip )
		pFnActivateTrip = (UFunction*) UObject::GObjObjects()->Data[ 88083 ];

	ADunDefTower_TripWire_execActivateTrip_Parms ActivateTrip_Parms;

	this->ProcessEvent ( pFnActivateTrip, &ActivateTrip_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.DrawMyHUD
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefHUD*              H                              ( CPF_Parm )

bool ADunDefTower_TripWire::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 88080 ];

	ADunDefTower_TripWire_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );

	return DrawMyHUD_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.GetTrapDamageMultiplier
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripWire::GetTrapDamageMultiplier ( )
{
	static UFunction* pFnGetTrapDamageMultiplier = NULL;

	if ( ! pFnGetTrapDamageMultiplier )
		pFnGetTrapDamageMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 88078 ];

	ADunDefTower_TripWire_execGetTrapDamageMultiplier_Parms GetTrapDamageMultiplier_Parms;

	this->ProcessEvent ( pFnGetTrapDamageMultiplier, &GetTrapDamageMultiplier_Parms, NULL );

	return GetTrapDamageMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.GetDamageMultiplier
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripWire::GetDamageMultiplier ( )
{
	static UFunction* pFnGetDamageMultiplier = NULL;

	if ( ! pFnGetDamageMultiplier )
		pFnGetDamageMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 88076 ];

	ADunDefTower_TripWire_execGetDamageMultiplier_Parms GetDamageMultiplier_Parms;

	this->ProcessEvent ( pFnGetDamageMultiplier, &GetDamageMultiplier_Parms, NULL );

	return GetDamageMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.GetAttackDamage
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripWire::GetAttackDamage ( )
{
	static UFunction* pFnGetAttackDamage = NULL;

	if ( ! pFnGetAttackDamage )
		pFnGetAttackDamage = (UFunction*) UObject::GObjObjects()->Data[ 88074 ];

	ADunDefTower_TripWire_execGetAttackDamage_Parms GetAttackDamage_Parms;

	this->ProcessEvent ( pFnGetAttackDamage, &GetAttackDamage_Parms, NULL );

	return GetAttackDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.GetStunTime
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripWire::GetStunTime ( )
{
	static UFunction* pFnGetStunTime = NULL;

	if ( ! pFnGetStunTime )
		pFnGetStunTime = (UFunction*) UObject::GObjObjects()->Data[ 88072 ];

	ADunDefTower_TripWire_execGetStunTime_Parms GetStunTime_Parms;

	this->ProcessEvent ( pFnGetStunTime, &GetStunTime_Parms, NULL );

	return GetStunTime_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.RemoveTowerBooster
// [0x00024102] 
// Parameters infos:
// class UTowerBoosterInterface*  aBooster                       ( CPF_Parm )
// int                            indexOverride                  ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_TripWire::RemoveTowerBooster ( class UTowerBoosterInterface* aBooster, int indexOverride )
{
	static UFunction* pFnRemoveTowerBooster = NULL;

	if ( ! pFnRemoveTowerBooster )
		pFnRemoveTowerBooster = (UFunction*) UObject::GObjObjects()->Data[ 88069 ];

	ADunDefTower_TripWire_execRemoveTowerBooster_Parms RemoveTowerBooster_Parms;
	RemoveTowerBooster_Parms.aBooster = aBooster;
	RemoveTowerBooster_Parms.indexOverride = indexOverride;

	this->ProcessEvent ( pFnRemoveTowerBooster, &RemoveTowerBooster_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.AddTowerBooster
// [0x00020102] 
// Parameters infos:
// class UTowerBoosterInterface*  aBooster                       ( CPF_Parm )

void ADunDefTower_TripWire::AddTowerBooster ( class UTowerBoosterInterface* aBooster )
{
	static UFunction* pFnAddTowerBooster = NULL;

	if ( ! pFnAddTowerBooster )
		pFnAddTowerBooster = (UFunction*) UObject::GObjObjects()->Data[ 88067 ];

	ADunDefTower_TripWire_execAddTowerBooster_Parms AddTowerBooster_Parms;
	AddTowerBooster_Parms.aBooster = aBooster;

	this->ProcessEvent ( pFnAddTowerBooster, &AddTowerBooster_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.UpdateStuns
// [0x00020002] 
// Parameters infos:

void ADunDefTower_TripWire::UpdateStuns ( )
{
	static UFunction* pFnUpdateStuns = NULL;

	if ( ! pFnUpdateStuns )
		pFnUpdateStuns = (UFunction*) UObject::GObjObjects()->Data[ 88064 ];

	ADunDefTower_TripWire_execUpdateStuns_Parms UpdateStuns_Parms;

	this->ProcessEvent ( pFnUpdateStuns, &UpdateStuns_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.GetAttackRate
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripWire::GetAttackRate ( )
{
	static UFunction* pFnGetAttackRate = NULL;

	if ( ! pFnGetAttackRate )
		pFnGetAttackRate = (UFunction*) UObject::GObjObjects()->Data[ 88062 ];

	ADunDefTower_TripWire_execGetAttackRate_Parms GetAttackRate_Parms;

	this->ProcessEvent ( pFnGetAttackRate, &GetAttackRate_Parms, NULL );

	return GetAttackRate_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.DoTracing
// [0x00824102] 
// Parameters infos:
// float                          dt                             ( CPF_Parm )
// unsigned long                  bForceDamage                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_TripWire::DoTracing ( float dt, unsigned long bForceDamage )
{
	static UFunction* pFnDoTracing = NULL;

	if ( ! pFnDoTracing )
		pFnDoTracing = (UFunction*) UObject::GObjObjects()->Data[ 88049 ];

	ADunDefTower_TripWire_execDoTracing_Parms DoTracing_Parms;
	DoTracing_Parms.dt = dt;
	DoTracing_Parms.bForceDamage = bForceDamage;

	this->ProcessEvent ( pFnDoTracing, &DoTracing_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.UnTouch
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void ADunDefTower_TripWire::eventUnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 88047 ];

	ADunDefTower_TripWire_eventUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.Touch
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefTower_TripWire::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 88042 ];

	ADunDefTower_TripWire_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.SetDetonateTimer
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::SetDetonateTimer ( )
{
	static UFunction* pFnSetDetonateTimer = NULL;

	if ( ! pFnSetDetonateTimer )
		pFnSetDetonateTimer = (UFunction*) UObject::GObjObjects()->Data[ 88041 ];

	ADunDefTower_TripWire_execSetDetonateTimer_Parms SetDetonateTimer_Parms;

	this->ProcessEvent ( pFnSetDetonateTimer, &SetDetonateTimer_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.GetEndPoint
// [0x00020102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ADunDefTower_TripWire::GetEndPoint ( )
{
	static UFunction* pFnGetEndPoint = NULL;

	if ( ! pFnGetEndPoint )
		pFnGetEndPoint = (UFunction*) UObject::GObjObjects()->Data[ 85888 ];

	ADunDefTower_TripWire_execGetEndPoint_Parms GetEndPoint_Parms;

	this->ProcessEvent ( pFnGetEndPoint, &GetEndPoint_Parms, NULL );

	return GetEndPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.GetBeamStartLoc
// [0x00020102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ADunDefTower_TripWire::GetBeamStartLoc ( )
{
	static UFunction* pFnGetBeamStartLoc = NULL;

	if ( ! pFnGetBeamStartLoc )
		pFnGetBeamStartLoc = (UFunction*) UObject::GObjObjects()->Data[ 85886 ];

	ADunDefTower_TripWire_execGetBeamStartLoc_Parms GetBeamStartLoc_Parms;

	this->ProcessEvent ( pFnGetBeamStartLoc, &GetBeamStartLoc_Parms, NULL );

	return GetBeamStartLoc_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.UpdateMovementBeams
// [0x00820102] 
// Parameters infos:

void ADunDefTower_TripWire::UpdateMovementBeams ( )
{
	static UFunction* pFnUpdateMovementBeams = NULL;

	if ( ! pFnUpdateMovementBeams )
		pFnUpdateMovementBeams = (UFunction*) UObject::GObjObjects()->Data[ 88036 ];

	ADunDefTower_TripWire_execUpdateMovementBeams_Parms UpdateMovementBeams_Parms;

	this->ProcessEvent ( pFnUpdateMovementBeams, &UpdateMovementBeams_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefTower_TripWire::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 88034 ];

	ADunDefTower_TripWire_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.ClientSingleSetMovement
// [0x00024102] 
// Parameters infos:
// struct FVector                 endLoc                         ( CPF_Parm )
// struct FRotator                endRot                         ( CPF_Parm )
// unsigned long                  bShouldCollideWorld            ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_TripWire::ClientSingleSetMovement ( struct FVector endLoc, struct FRotator endRot, unsigned long bShouldCollideWorld )
{
	static UFunction* pFnClientSingleSetMovement = NULL;

	if ( ! pFnClientSingleSetMovement )
		pFnClientSingleSetMovement = (UFunction*) UObject::GObjObjects()->Data[ 88030 ];

	ADunDefTower_TripWire_execClientSingleSetMovement_Parms ClientSingleSetMovement_Parms;
	memcpy ( &ClientSingleSetMovement_Parms.endLoc, &endLoc, 0xC );
	memcpy ( &ClientSingleSetMovement_Parms.endRot, &endRot, 0xC );
	ClientSingleSetMovement_Parms.bShouldCollideWorld = bShouldCollideWorld;

	this->ProcessEvent ( pFnClientSingleSetMovement, &ClientSingleSetMovement_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.ForceSingleMove
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 NewLoc                         ( CPF_Parm )
// struct FRotator                NewRot                         ( CPF_Parm )
// unsigned long                  bShouldCollideWorld            ( CPF_OptionalParm | CPF_Parm )

bool ADunDefTower_TripWire::ForceSingleMove ( struct FVector NewLoc, struct FRotator NewRot, unsigned long bShouldCollideWorld )
{
	static UFunction* pFnForceSingleMove = NULL;

	if ( ! pFnForceSingleMove )
		pFnForceSingleMove = (UFunction*) UObject::GObjObjects()->Data[ 83744 ];

	ADunDefTower_TripWire_execForceSingleMove_Parms ForceSingleMove_Parms;
	memcpy ( &ForceSingleMove_Parms.NewLoc, &NewLoc, 0xC );
	memcpy ( &ForceSingleMove_Parms.NewRot, &NewRot, 0xC );
	ForceSingleMove_Parms.bShouldCollideWorld = bShouldCollideWorld;

	this->ProcessEvent ( pFnForceSingleMove, &ForceSingleMove_Parms, NULL );

	return ForceSingleMove_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.DisableSingleMovementReplication
// [0x00020002] 
// Parameters infos:

void ADunDefTower_TripWire::DisableSingleMovementReplication ( )
{
	static UFunction* pFnDisableSingleMovementReplication = NULL;

	if ( ! pFnDisableSingleMovementReplication )
		pFnDisableSingleMovementReplication = (UFunction*) UObject::GObjObjects()->Data[ 88025 ];

	ADunDefTower_TripWire_execDisableSingleMovementReplication_Parms DisableSingleMovementReplication_Parms;

	this->ProcessEvent ( pFnDisableSingleMovementReplication, &DisableSingleMovementReplication_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.EnableSingleMovementReplicationTimer
// [0x00020002] 
// Parameters infos:
// float                          Time                           ( CPF_Parm )

void ADunDefTower_TripWire::EnableSingleMovementReplicationTimer ( float Time )
{
	static UFunction* pFnEnableSingleMovementReplicationTimer = NULL;

	if ( ! pFnEnableSingleMovementReplicationTimer )
		pFnEnableSingleMovementReplicationTimer = (UFunction*) UObject::GObjObjects()->Data[ 88023 ];

	ADunDefTower_TripWire_execEnableSingleMovementReplicationTimer_Parms EnableSingleMovementReplicationTimer_Parms;
	EnableSingleMovementReplicationTimer_Parms.Time = Time;

	this->ProcessEvent ( pFnEnableSingleMovementReplicationTimer, &EnableSingleMovementReplicationTimer_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.DisableMovementReplication
// [0x00020002] 
// Parameters infos:

void ADunDefTower_TripWire::DisableMovementReplication ( )
{
	static UFunction* pFnDisableMovementReplication = NULL;

	if ( ! pFnDisableMovementReplication )
		pFnDisableMovementReplication = (UFunction*) UObject::GObjObjects()->Data[ 88022 ];

	ADunDefTower_TripWire_execDisableMovementReplication_Parms DisableMovementReplication_Parms;

	this->ProcessEvent ( pFnDisableMovementReplication, &DisableMovementReplication_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.EnableMovementReplicationTimer
// [0x00020002] 
// Parameters infos:
// float                          Time                           ( CPF_Parm )

void ADunDefTower_TripWire::EnableMovementReplicationTimer ( float Time )
{
	static UFunction* pFnEnableMovementReplicationTimer = NULL;

	if ( ! pFnEnableMovementReplicationTimer )
		pFnEnableMovementReplicationTimer = (UFunction*) UObject::GObjObjects()->Data[ 88020 ];

	ADunDefTower_TripWire_execEnableMovementReplicationTimer_Parms EnableMovementReplicationTimer_Parms;
	EnableMovementReplicationTimer_Parms.Time = Time;

	this->ProcessEvent ( pFnEnableMovementReplicationTimer, &EnableMovementReplicationTimer_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.SetDUCost
// [0x00020102] 
// Parameters infos:
// int                            newDUCost                      ( CPF_Parm )

void ADunDefTower_TripWire::SetDUCost ( int newDUCost )
{
	static UFunction* pFnSetDUCost = NULL;

	if ( ! pFnSetDUCost )
		pFnSetDUCost = (UFunction*) UObject::GObjObjects()->Data[ 88018 ];

	ADunDefTower_TripWire_execSetDUCost_Parms SetDUCost_Parms;
	SetDUCost_Parms.newDUCost = newDUCost;

	this->ProcessEvent ( pFnSetDUCost, &SetDUCost_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.GetNextUpgradeLevel
// [0x00024102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bForceBeyondMaxUpgrade         ( CPF_OptionalParm | CPF_Parm )

int ADunDefTower_TripWire::GetNextUpgradeLevel ( unsigned long bForceBeyondMaxUpgrade )
{
	static UFunction* pFnGetNextUpgradeLevel = NULL;

	if ( ! pFnGetNextUpgradeLevel )
		pFnGetNextUpgradeLevel = (UFunction*) UObject::GObjObjects()->Data[ 88015 ];

	ADunDefTower_TripWire_execGetNextUpgradeLevel_Parms GetNextUpgradeLevel_Parms;
	GetNextUpgradeLevel_Parms.bForceBeyondMaxUpgrade = bForceBeyondMaxUpgrade;

	this->ProcessEvent ( pFnGetNextUpgradeLevel, &GetNextUpgradeLevel_Parms, NULL );

	return GetNextUpgradeLevel_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.GetTimeToUpgradeTower
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefTower_TripWire::GetTimeToUpgradeTower ( )
{
	static UFunction* pFnGetTimeToUpgradeTower = NULL;

	if ( ! pFnGetTimeToUpgradeTower )
		pFnGetTimeToUpgradeTower = (UFunction*) UObject::GObjObjects()->Data[ 88013 ];

	ADunDefTower_TripWire_execGetTimeToUpgradeTower_Parms GetTimeToUpgradeTower_Parms;

	this->ProcessEvent ( pFnGetTimeToUpgradeTower, &GetTimeToUpgradeTower_Parms, NULL );

	return GetTimeToUpgradeTower_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.GetCostToUpgradeTower
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefTower_TripWire::GetCostToUpgradeTower ( )
{
	static UFunction* pFnGetCostToUpgradeTower = NULL;

	if ( ! pFnGetCostToUpgradeTower )
		pFnGetCostToUpgradeTower = (UFunction*) UObject::GObjObjects()->Data[ 88011 ];

	ADunDefTower_TripWire_execGetCostToUpgradeTower_Parms GetCostToUpgradeTower_Parms;

	this->ProcessEvent ( pFnGetCostToUpgradeTower, &GetCostToUpgradeTower_Parms, NULL );

	return GetCostToUpgradeTower_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.GetTowerUpgradeLevelStatModifier
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  valueType                      ( CPF_Parm )

int ADunDefTower_TripWire::GetTowerUpgradeLevelStatModifier ( unsigned char valueType )
{
	static UFunction* pFnGetTowerUpgradeLevelStatModifier = NULL;

	if ( ! pFnGetTowerUpgradeLevelStatModifier )
		pFnGetTowerUpgradeLevelStatModifier = (UFunction*) UObject::GObjObjects()->Data[ 88008 ];

	ADunDefTower_TripWire_execGetTowerUpgradeLevelStatModifier_Parms GetTowerUpgradeLevelStatModifier_Parms;
	GetTowerUpgradeLevelStatModifier_Parms.valueType = valueType;

	this->ProcessEvent ( pFnGetTowerUpgradeLevelStatModifier, &GetTowerUpgradeLevelStatModifier_Parms, NULL );

	return GetTowerUpgradeLevelStatModifier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.ChildDoUpgrade
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::ChildDoUpgrade ( )
{
	static UFunction* pFnChildDoUpgrade = NULL;

	if ( ! pFnChildDoUpgrade )
		pFnChildDoUpgrade = (UFunction*) UObject::GObjObjects()->Data[ 88007 ];

	ADunDefTower_TripWire_execChildDoUpgrade_Parms ChildDoUpgrade_Parms;

	this->ProcessEvent ( pFnChildDoUpgrade, &ChildDoUpgrade_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.ChildDoDowngrade
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::ChildDoDowngrade ( )
{
	static UFunction* pFnChildDoDowngrade = NULL;

	if ( ! pFnChildDoDowngrade )
		pFnChildDoDowngrade = (UFunction*) UObject::GObjObjects()->Data[ 88006 ];

	ADunDefTower_TripWire_execChildDoDowngrade_Parms ChildDoDowngrade_Parms;

	this->ProcessEvent ( pFnChildDoDowngrade, &ChildDoDowngrade_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.DoDowngrade
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::DoDowngrade ( )
{
	static UFunction* pFnDoDowngrade = NULL;

	if ( ! pFnDoDowngrade )
		pFnDoDowngrade = (UFunction*) UObject::GObjObjects()->Data[ 88005 ];

	ADunDefTower_TripWire_execDoDowngrade_Parms DoDowngrade_Parms;

	this->ProcessEvent ( pFnDoDowngrade, &DoDowngrade_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.DoUpgrade
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::DoUpgrade ( )
{
	static UFunction* pFnDoUpgrade = NULL;

	if ( ! pFnDoUpgrade )
		pFnDoUpgrade = (UFunction*) UObject::GObjObjects()->Data[ 88004 ];

	ADunDefTower_TripWire_execDoUpgrade_Parms DoUpgrade_Parms;

	this->ProcessEvent ( pFnDoUpgrade, &DoUpgrade_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.CanBeUpgraded
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefTower_TripWire::CanBeUpgraded ( )
{
	static UFunction* pFnCanBeUpgraded = NULL;

	if ( ! pFnCanBeUpgraded )
		pFnCanBeUpgraded = (UFunction*) UObject::GObjObjects()->Data[ 88002 ];

	ADunDefTower_TripWire_execCanBeUpgraded_Parms CanBeUpgraded_Parms;

	this->ProcessEvent ( pFnCanBeUpgraded, &CanBeUpgraded_Parms, NULL );

	return CanBeUpgraded_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.ShutDownBeamEffects
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::ShutDownBeamEffects ( )
{
	static UFunction* pFnShutDownBeamEffects = NULL;

	if ( ! pFnShutDownBeamEffects )
		pFnShutDownBeamEffects = (UFunction*) UObject::GObjObjects()->Data[ 88001 ];

	ADunDefTower_TripWire_execShutDownBeamEffects_Parms ShutDownBeamEffects_Parms;

	this->ProcessEvent ( pFnShutDownBeamEffects, &ShutDownBeamEffects_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.ActivateBeamEffects
// [0x00020102] 
// Parameters infos:
// unsigned long                  bActive                        ( CPF_Parm )

void ADunDefTower_TripWire::ActivateBeamEffects ( unsigned long bActive )
{
	static UFunction* pFnActivateBeamEffects = NULL;

	if ( ! pFnActivateBeamEffects )
		pFnActivateBeamEffects = (UFunction*) UObject::GObjObjects()->Data[ 87999 ];

	ADunDefTower_TripWire_execActivateBeamEffects_Parms ActivateBeamEffects_Parms;
	ActivateBeamEffects_Parms.bActive = bActive;

	this->ProcessEvent ( pFnActivateBeamEffects, &ActivateBeamEffects_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.ActivateBeam
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::ActivateBeam ( )
{
	static UFunction* pFnActivateBeam = NULL;

	if ( ! pFnActivateBeam )
		pFnActivateBeam = (UFunction*) UObject::GObjObjects()->Data[ 87998 ];

	ADunDefTower_TripWire_execActivateBeam_Parms ActivateBeam_Parms;

	this->ProcessEvent ( pFnActivateBeam, &ActivateBeam_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.GetBeamPoint
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ADunDefTower_TripWire::GetBeamPoint ( )
{
	static UFunction* pFnGetBeamPoint = NULL;

	if ( ! pFnGetBeamPoint )
		pFnGetBeamPoint = (UFunction*) UObject::GObjObjects()->Data[ 87994 ];

	ADunDefTower_TripWire_execGetBeamPoint_Parms GetBeamPoint_Parms;

	this->ProcessEvent ( pFnGetBeamPoint, &GetBeamPoint_Parms, NULL );

	return GetBeamPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.GetCollisionPoint
// [0x00020100] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ADunDefTower_TripWire::GetCollisionPoint ( )
{
	static UFunction* pFnGetCollisionPoint = NULL;

	if ( ! pFnGetCollisionPoint )
		pFnGetCollisionPoint = (UFunction*) UObject::GObjObjects()->Data[ 87992 ];

	ADunDefTower_TripWire_execGetCollisionPoint_Parms GetCollisionPoint_Parms;

	this->ProcessEvent ( pFnGetCollisionPoint, &GetCollisionPoint_Parms, NULL );

	return GetCollisionPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripWire.SetPlacementPoints
// [0x00820002] 
// Parameters infos:
// TArray< struct FVector >       SpawnPoints                    ( CPF_Parm | CPF_NeedCtorLink )
// class ADunDefTower*            NodeTemplate                   ( CPF_Parm )

void ADunDefTower_TripWire::SetPlacementPoints ( TArray< struct FVector > SpawnPoints, class ADunDefTower* NodeTemplate )
{
	static UFunction* pFnSetPlacementPoints = NULL;

	if ( ! pFnSetPlacementPoints )
		pFnSetPlacementPoints = (UFunction*) UObject::GObjObjects()->Data[ 87985 ];

	ADunDefTower_TripWire_execSetPlacementPoints_Parms SetPlacementPoints_Parms;
	memcpy ( &SetPlacementPoints_Parms.SpawnPoints, &SpawnPoints, 0xC );
	SetPlacementPoints_Parms.NodeTemplate = NodeTemplate;

	this->ProcessEvent ( pFnSetPlacementPoints, &SetPlacementPoints_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.InitializeForInstigator
// [0x00020002] 
// Parameters infos:
// class APawn*                   Pawn                           ( CPF_Parm )

void ADunDefTower_TripWire::InitializeForInstigator ( class APawn* Pawn )
{
	static UFunction* pFnInitializeForInstigator = NULL;

	if ( ! pFnInitializeForInstigator )
		pFnInitializeForInstigator = (UFunction*) UObject::GObjObjects()->Data[ 87983 ];

	ADunDefTower_TripWire_execInitializeForInstigator_Parms InitializeForInstigator_Parms;
	InitializeForInstigator_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnInitializeForInstigator, &InitializeForInstigator_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.SetUpCollisionMesh
// [0x00020100] 
// Parameters infos:

void ADunDefTower_TripWire::SetUpCollisionMesh ( )
{
	static UFunction* pFnSetUpCollisionMesh = NULL;

	if ( ! pFnSetUpCollisionMesh )
		pFnSetUpCollisionMesh = (UFunction*) UObject::GObjObjects()->Data[ 87982 ];

	ADunDefTower_TripWire_execSetUpCollisionMesh_Parms SetUpCollisionMesh_Parms;

	this->ProcessEvent ( pFnSetUpCollisionMesh, &SetUpCollisionMesh_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.OnDestroy_RemoveFromTargetableList
// [0x00020002] 
// Parameters infos:

void ADunDefTower_TripWire::OnDestroy_RemoveFromTargetableList ( )
{
	static UFunction* pFnOnDestroy_RemoveFromTargetableList = NULL;

	if ( ! pFnOnDestroy_RemoveFromTargetableList )
		pFnOnDestroy_RemoveFromTargetableList = (UFunction*) UObject::GObjObjects()->Data[ 87976 ];

	ADunDefTower_TripWire_execOnDestroy_RemoveFromTargetableList_Parms OnDestroy_RemoveFromTargetableList_Parms;

	this->ProcessEvent ( pFnOnDestroy_RemoveFromTargetableList, &OnDestroy_RemoveFromTargetableList_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.OnPostBeginPlay_AddToTargetableList
// [0x00020002] 
// Parameters infos:

void ADunDefTower_TripWire::OnPostBeginPlay_AddToTargetableList ( )
{
	static UFunction* pFnOnPostBeginPlay_AddToTargetableList = NULL;

	if ( ! pFnOnPostBeginPlay_AddToTargetableList )
		pFnOnPostBeginPlay_AddToTargetableList = (UFunction*) UObject::GObjObjects()->Data[ 87975 ];

	ADunDefTower_TripWire_execOnPostBeginPlay_AddToTargetableList_Parms OnPostBeginPlay_AddToTargetableList_Parms;

	this->ProcessEvent ( pFnOnPostBeginPlay_AddToTargetableList, &OnPostBeginPlay_AddToTargetableList_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_TripWire::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 87974 ];

	ADunDefTower_TripWire_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.SetUseHealthBarMat
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripWire::SetUseHealthBarMat ( )
{
	static UFunction* pFnSetUseHealthBarMat = NULL;

	if ( ! pFnSetUseHealthBarMat )
		pFnSetUseHealthBarMat = (UFunction*) UObject::GObjObjects()->Data[ 87973 ];

	ADunDefTower_TripWire_execSetUseHealthBarMat_Parms SetUseHealthBarMat_Parms;

	this->ProcessEvent ( pFnSetUseHealthBarMat, &SetUseHealthBarMat_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_TripWire::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 87956 ];

	ADunDefTower_TripWire_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripWire.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefTower_TripWire::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 87954 ];

	ADunDefTower_TripWire_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.DisableAbilityMove
// [0x002200C2] 
// Parameters infos:

void ADunDefTower_TripPhysical::DisableAbilityMove ( )
{
	static UFunction* pFnDisableAbilityMove = NULL;

	if ( ! pFnDisableAbilityMove )
		pFnDisableAbilityMove = (UFunction*) UObject::GObjObjects()->Data[ 88501 ];

	ADunDefTower_TripPhysical_execDisableAbilityMove_Parms DisableAbilityMove_Parms;

	this->ProcessEvent ( pFnDisableAbilityMove, &DisableAbilityMove_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.AllowAbilityMove
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefTower_TripPhysical::AllowAbilityMove ( )
{
	static UFunction* pFnAllowAbilityMove = NULL;

	if ( ! pFnAllowAbilityMove )
		pFnAllowAbilityMove = (UFunction*) UObject::GObjObjects()->Data[ 88499 ];

	ADunDefTower_TripPhysical_execAllowAbilityMove_Parms AllowAbilityMove_Parms;

	this->ProcessEvent ( pFnAllowAbilityMove, &AllowAbilityMove_Parms, NULL );

	return AllowAbilityMove_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ClientDisableMovementReplication
// [0x00020102] 
// Parameters infos:
// struct FVector                 endedLoc                       ( CPF_Parm )

void ADunDefTower_TripPhysical::ClientDisableMovementReplication ( struct FVector endedLoc )
{
	static UFunction* pFnClientDisableMovementReplication = NULL;

	if ( ! pFnClientDisableMovementReplication )
		pFnClientDisableMovementReplication = (UFunction*) UObject::GObjObjects()->Data[ 88497 ];

	ADunDefTower_TripPhysical_execClientDisableMovementReplication_Parms ClientDisableMovementReplication_Parms;
	memcpy ( &ClientDisableMovementReplication_Parms.endedLoc, &endedLoc, 0xC );

	this->ProcessEvent ( pFnClientDisableMovementReplication, &ClientDisableMovementReplication_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.BaseChange
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_TripPhysical::eventBaseChange ( )
{
	static UFunction* pFnBaseChange = NULL;

	if ( ! pFnBaseChange )
		pFnBaseChange = (UFunction*) UObject::GObjObjects()->Data[ 88496 ];

	ADunDefTower_TripPhysical_eventBaseChange_Parms BaseChange_Parms;

	this->ProcessEvent ( pFnBaseChange, &BaseChange_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ForceMoveActor
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Mover                          ( CPF_Parm )
// struct FVector                 NewLoc                         ( CPF_Parm )

bool ADunDefTower_TripPhysical::ForceMoveActor ( class AActor* Mover, struct FVector NewLoc )
{
	static UFunction* pFnForceMoveActor = NULL;

	if ( ! pFnForceMoveActor )
		pFnForceMoveActor = (UFunction*) UObject::GObjObjects()->Data[ 88485 ];

	ADunDefTower_TripPhysical_execForceMoveActor_Parms ForceMoveActor_Parms;
	ForceMoveActor_Parms.Mover = Mover;
	memcpy ( &ForceMoveActor_Parms.NewLoc, &NewLoc, 0xC );

	this->ProcessEvent ( pFnForceMoveActor, &ForceMoveActor_Parms, NULL );

	return ForceMoveActor_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetSelectionLocation
// [0x00C20102] 
// Parameters infos:
// class AActor*                  wantsLocation                  ( CPF_Parm )
// struct FVector                 bestLoc                        ( CPF_Parm | CPF_OutParm )

void ADunDefTower_TripPhysical::GetSelectionLocation ( class AActor* wantsLocation, struct FVector* bestLoc )
{
	static UFunction* pFnGetSelectionLocation = NULL;

	if ( ! pFnGetSelectionLocation )
		pFnGetSelectionLocation = (UFunction*) UObject::GObjObjects()->Data[ 88478 ];

	ADunDefTower_TripPhysical_execGetSelectionLocation_Parms GetSelectionLocation_Parms;
	GetSelectionLocation_Parms.wantsLocation = wantsLocation;

	this->ProcessEvent ( pFnGetSelectionLocation, &GetSelectionLocation_Parms, NULL );

	if ( bestLoc )
		memcpy ( bestLoc, &GetSelectionLocation_Parms.bestLoc, 0xC );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.IsPhysicalTower
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefTower_TripPhysical::IsPhysicalTower ( )
{
	static UFunction* pFnIsPhysicalTower = NULL;

	if ( ! pFnIsPhysicalTower )
		pFnIsPhysicalTower = (UFunction*) UObject::GObjObjects()->Data[ 88476 ];

	ADunDefTower_TripPhysical_execIsPhysicalTower_Parms IsPhysicalTower_Parms;

	this->ProcessEvent ( pFnIsPhysicalTower, &IsPhysicalTower_Parms, NULL );

	return IsPhysicalTower_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.DrawMiniMapIcon
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class ADunDefMiniMap*          MiniMap                        ( CPF_Parm )

void ADunDefTower_TripPhysical::DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap )
{
	static UFunction* pFnDrawMiniMapIcon = NULL;

	if ( ! pFnDrawMiniMapIcon )
		pFnDrawMiniMapIcon = (UFunction*) UObject::GObjObjects()->Data[ 88466 ];

	ADunDefTower_TripPhysical_execDrawMiniMapIcon_Parms DrawMiniMapIcon_Parms;
	DrawMiniMapIcon_Parms.Canvas = Canvas;
	DrawMiniMapIcon_Parms.MiniMap = MiniMap;

	this->ProcessEvent ( pFnDrawMiniMapIcon, &DrawMiniMapIcon_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.UpdateMovementBeams
// [0x00820102] 
// Parameters infos:

void ADunDefTower_TripPhysical::UpdateMovementBeams ( )
{
	static UFunction* pFnUpdateMovementBeams = NULL;

	if ( ! pFnUpdateMovementBeams )
		pFnUpdateMovementBeams = (UFunction*) UObject::GObjObjects()->Data[ 88459 ];

	ADunDefTower_TripPhysical_execUpdateMovementBeams_Parms UpdateMovementBeams_Parms;

	this->ProcessEvent ( pFnUpdateMovementBeams, &UpdateMovementBeams_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.IsPreviousToolTipActor
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* ownerCheck                     ( CPF_Parm )

bool ADunDefTower_TripPhysical::IsPreviousToolTipActor ( class ADunDefPlayerController* ownerCheck )
{
	static UFunction* pFnIsPreviousToolTipActor = NULL;

	if ( ! pFnIsPreviousToolTipActor )
		pFnIsPreviousToolTipActor = (UFunction*) UObject::GObjObjects()->Data[ 88456 ];

	ADunDefTower_TripPhysical_execIsPreviousToolTipActor_Parms IsPreviousToolTipActor_Parms;
	IsPreviousToolTipActor_Parms.ownerCheck = ownerCheck;

	this->ProcessEvent ( pFnIsPreviousToolTipActor, &IsPreviousToolTipActor_Parms, NULL );

	return IsPreviousToolTipActor_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.UpdateDamageFlashing
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripPhysical::UpdateDamageFlashing ( )
{
	static UFunction* pFnUpdateDamageFlashing = NULL;

	if ( ! pFnUpdateDamageFlashing )
		pFnUpdateDamageFlashing = (UFunction*) UObject::GObjObjects()->Data[ 88454 ];

	ADunDefTower_TripPhysical_execUpdateDamageFlashing_Parms UpdateDamageFlashing_Parms;

	this->ProcessEvent ( pFnUpdateDamageFlashing, &UpdateDamageFlashing_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.PerformFullHeal
// [0x00020002] 
// Parameters infos:

void ADunDefTower_TripPhysical::PerformFullHeal ( )
{
	static UFunction* pFnPerformFullHeal = NULL;

	if ( ! pFnPerformFullHeal )
		pFnPerformFullHeal = (UFunction*) UObject::GObjObjects()->Data[ 88453 ];

	ADunDefTower_TripPhysical_execPerformFullHeal_Parms PerformFullHeal_Parms;

	this->ProcessEvent ( pFnPerformFullHeal, &PerformFullHeal_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.HealDamage
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Amount                         ( CPF_Parm )
// class AController*             Healer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

bool ADunDefTower_TripPhysical::eventHealDamage ( int Amount, class AController* Healer, class UClass* DamageType )
{
	static UFunction* pFnHealDamage = NULL;

	if ( ! pFnHealDamage )
		pFnHealDamage = (UFunction*) UObject::GObjObjects()->Data[ 88448 ];

	ADunDefTower_TripPhysical_eventHealDamage_Parms HealDamage_Parms;
	HealDamage_Parms.Amount = Amount;
	HealDamage_Parms.Healer = Healer;
	HealDamage_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnHealDamage, &HealDamage_Parms, NULL );

	return HealDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.IncrementRepair
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          CurrentMana                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

float ADunDefTower_TripPhysical::IncrementRepair ( float CurrentMana, float DeltaTime )
{
	static UFunction* pFnIncrementRepair = NULL;

	if ( ! pFnIncrementRepair )
		pFnIncrementRepair = (UFunction*) UObject::GObjObjects()->Data[ 88444 ];

	ADunDefTower_TripPhysical_execIncrementRepair_Parms IncrementRepair_Parms;
	IncrementRepair_Parms.CurrentMana = CurrentMana;
	IncrementRepair_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnIncrementRepair, &IncrementRepair_Parms, NULL );

	return IncrementRepair_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetCurrentRepairPercentage
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          StartRepairTime                ( CPF_OptionalParm | CPF_Parm )
// float                          RepairSpeed                    ( CPF_OptionalParm | CPF_Parm )

float ADunDefTower_TripPhysical::GetCurrentRepairPercentage ( float StartRepairTime, float RepairSpeed )
{
	static UFunction* pFnGetCurrentRepairPercentage = NULL;

	if ( ! pFnGetCurrentRepairPercentage )
		pFnGetCurrentRepairPercentage = (UFunction*) UObject::GObjObjects()->Data[ 88440 ];

	ADunDefTower_TripPhysical_execGetCurrentRepairPercentage_Parms GetCurrentRepairPercentage_Parms;
	GetCurrentRepairPercentage_Parms.StartRepairTime = StartRepairTime;
	GetCurrentRepairPercentage_Parms.RepairSpeed = RepairSpeed;

	this->ProcessEvent ( pFnGetCurrentRepairPercentage, &GetCurrentRepairPercentage_Parms, NULL );

	return GetCurrentRepairPercentage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.StartRepair
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripPhysical::StartRepair ( )
{
	static UFunction* pFnStartRepair = NULL;

	if ( ! pFnStartRepair )
		pFnStartRepair = (UFunction*) UObject::GObjObjects()->Data[ 88439 ];

	ADunDefTower_TripPhysical_execStartRepair_Parms StartRepair_Parms;

	this->ProcessEvent ( pFnStartRepair, &StartRepair_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetTimeToRepair
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripPhysical::GetTimeToRepair ( )
{
	static UFunction* pFnGetTimeToRepair = NULL;

	if ( ! pFnGetTimeToRepair )
		pFnGetTimeToRepair = (UFunction*) UObject::GObjObjects()->Data[ 88437 ];

	ADunDefTower_TripPhysical_execGetTimeToRepair_Parms GetTimeToRepair_Parms;

	this->ProcessEvent ( pFnGetTimeToRepair, &GetTimeToRepair_Parms, NULL );

	return GetTimeToRepair_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetCostToRepair
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripPhysical::GetCostToRepair ( )
{
	static UFunction* pFnGetCostToRepair = NULL;

	if ( ! pFnGetCostToRepair )
		pFnGetCostToRepair = (UFunction*) UObject::GObjObjects()->Data[ 88435 ];

	ADunDefTower_TripPhysical_execGetCostToRepair_Parms GetCostToRepair_Parms;

	this->ProcessEvent ( pFnGetCostToRepair, &GetCostToRepair_Parms, NULL );

	return GetCostToRepair_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetTimeOfTotalRepair
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripPhysical::GetTimeOfTotalRepair ( )
{
	static UFunction* pFnGetTimeOfTotalRepair = NULL;

	if ( ! pFnGetTimeOfTotalRepair )
		pFnGetTimeOfTotalRepair = (UFunction*) UObject::GObjObjects()->Data[ 88433 ];

	ADunDefTower_TripPhysical_execGetTimeOfTotalRepair_Parms GetTimeOfTotalRepair_Parms;

	this->ProcessEvent ( pFnGetTimeOfTotalRepair, &GetTimeOfTotalRepair_Parms, NULL );

	return GetTimeOfTotalRepair_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetToolTipText
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ADunDefTower_TripPhysical::GetToolTipText ( )
{
	static UFunction* pFnGetToolTipText = NULL;

	if ( ! pFnGetToolTipText )
		pFnGetToolTipText = (UFunction*) UObject::GObjObjects()->Data[ 88431 ];

	ADunDefTower_TripPhysical_execGetToolTipText_Parms GetToolTipText_Parms;

	this->ProcessEvent ( pFnGetToolTipText, &GetToolTipText_Parms, NULL );

	return GetToolTipText_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetGlobalTowerHealthMultiplier
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripPhysical::GetGlobalTowerHealthMultiplier ( )
{
	static UFunction* pFnGetGlobalTowerHealthMultiplier = NULL;

	if ( ! pFnGetGlobalTowerHealthMultiplier )
		pFnGetGlobalTowerHealthMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 88429 ];

	ADunDefTower_TripPhysical_execGetGlobalTowerHealthMultiplier_Parms GetGlobalTowerHealthMultiplier_Parms;

	this->ProcessEvent ( pFnGetGlobalTowerHealthMultiplier, &GetGlobalTowerHealthMultiplier_Parms, NULL );

	return GetGlobalTowerHealthMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.Bump
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefTower_TripPhysical::eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal )
{
	static UFunction* pFnBump = NULL;

	if ( ! pFnBump )
		pFnBump = (UFunction*) UObject::GObjObjects()->Data[ 88425 ];

	ADunDefTower_TripPhysical_eventBump_Parms Bump_Parms;
	Bump_Parms.Other = Other;
	Bump_Parms.OtherComp = OtherComp;
	memcpy ( &Bump_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnBump, &Bump_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetOverrideTargetComponent
// [0x00020102] 
// Parameters infos:
// class UPrimitiveComponent*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class UPrimitiveComponent* ADunDefTower_TripPhysical::GetOverrideTargetComponent ( )
{
	static UFunction* pFnGetOverrideTargetComponent = NULL;

	if ( ! pFnGetOverrideTargetComponent )
		pFnGetOverrideTargetComponent = (UFunction*) UObject::GObjObjects()->Data[ 88423 ];

	ADunDefTower_TripPhysical_execGetOverrideTargetComponent_Parms GetOverrideTargetComponent_Parms;

	this->ProcessEvent ( pFnGetOverrideTargetComponent, &GetOverrideTargetComponent_Parms, NULL );

	return GetOverrideTargetComponent_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.DrawToolTip
// [0x00024102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// int                            PosX                           ( CPF_Parm )
// int                            PosY                           ( CPF_Parm )
// class ULocalPlayer*            ForPlayer                      ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_TripPhysical::DrawToolTip ( class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer )
{
	static UFunction* pFnDrawToolTip = NULL;

	if ( ! pFnDrawToolTip )
		pFnDrawToolTip = (UFunction*) UObject::GObjObjects()->Data[ 88418 ];

	ADunDefTower_TripPhysical_execDrawToolTip_Parms DrawToolTip_Parms;
	DrawToolTip_Parms.C = C;
	DrawToolTip_Parms.PosX = PosX;
	DrawToolTip_Parms.PosY = PosY;
	DrawToolTip_Parms.ForPlayer = ForPlayer;

	this->ProcessEvent ( pFnDrawToolTip, &DrawToolTip_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetHealthPercent
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripPhysical::GetHealthPercent ( )
{
	static UFunction* pFnGetHealthPercent = NULL;

	if ( ! pFnGetHealthPercent )
		pFnGetHealthPercent = (UFunction*) UObject::GObjObjects()->Data[ 88416 ];

	ADunDefTower_TripPhysical_execGetHealthPercent_Parms GetHealthPercent_Parms;

	this->ProcessEvent ( pFnGetHealthPercent, &GetHealthPercent_Parms, NULL );

	return GetHealthPercent_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetHealth
// [0x00024102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bGetMax                        ( CPF_OptionalParm | CPF_Parm )

int ADunDefTower_TripPhysical::GetHealth ( unsigned long bGetMax )
{
	static UFunction* pFnGetHealth = NULL;

	if ( ! pFnGetHealth )
		pFnGetHealth = (UFunction*) UObject::GObjObjects()->Data[ 88413 ];

	ADunDefTower_TripPhysical_execGetHealth_Parms GetHealth_Parms;
	GetHealth_Parms.bGetMax = bGetMax;

	this->ProcessEvent ( pFnGetHealth, &GetHealth_Parms, NULL );

	return GetHealth_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.AddHealth
// [0x00024002] 
// Parameters infos:
// int                            howMuch                        ( CPF_Parm )
// unsigned long                  bDontDisplayFloatingNumber     ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_TripPhysical::AddHealth ( int howMuch, unsigned long bDontDisplayFloatingNumber )
{
	static UFunction* pFnAddHealth = NULL;

	if ( ! pFnAddHealth )
		pFnAddHealth = (UFunction*) UObject::GObjObjects()->Data[ 88409 ];

	ADunDefTower_TripPhysical_execAddHealth_Parms AddHealth_Parms;
	AddHealth_Parms.howMuch = howMuch;
	AddHealth_Parms.bDontDisplayFloatingNumber = bDontDisplayFloatingNumber;

	this->ProcessEvent ( pFnAddHealth, &AddHealth_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ActivateBeamEffects
// [0x00020102] 
// Parameters infos:
// unsigned long                  bActive                        ( CPF_Parm )

void ADunDefTower_TripPhysical::ActivateBeamEffects ( unsigned long bActive )
{
	static UFunction* pFnActivateBeamEffects = NULL;

	if ( ! pFnActivateBeamEffects )
		pFnActivateBeamEffects = (UFunction*) UObject::GObjObjects()->Data[ 88407 ];

	ADunDefTower_TripPhysical_execActivateBeamEffects_Parms ActivateBeamEffects_Parms;
	ActivateBeamEffects_Parms.bActive = bActive;

	this->ProcessEvent ( pFnActivateBeamEffects, &ActivateBeamEffects_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ShutDownBeamEffects
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripPhysical::ShutDownBeamEffects ( )
{
	static UFunction* pFnShutDownBeamEffects = NULL;

	if ( ! pFnShutDownBeamEffects )
		pFnShutDownBeamEffects = (UFunction*) UObject::GObjObjects()->Data[ 88406 ];

	ADunDefTower_TripPhysical_execShutDownBeamEffects_Parms ShutDownBeamEffects_Parms;

	this->ProcessEvent ( pFnShutDownBeamEffects, &ShutDownBeamEffects_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ActivateTrip
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripPhysical::ActivateTrip ( )
{
	static UFunction* pFnActivateTrip = NULL;

	if ( ! pFnActivateTrip )
		pFnActivateTrip = (UFunction*) UObject::GObjObjects()->Data[ 88405 ];

	ADunDefTower_TripPhysical_execActivateTrip_Parms ActivateTrip_Parms;

	this->ProcessEvent ( pFnActivateTrip, &ActivateTrip_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.DrawMyHUD
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefHUD*              H                              ( CPF_Parm )

bool ADunDefTower_TripPhysical::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 88402 ];

	ADunDefTower_TripPhysical_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );

	return DrawMyHUD_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.NeedsRepair
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  requireFullHealth              ( CPF_OptionalParm | CPF_Parm )

bool ADunDefTower_TripPhysical::NeedsRepair ( unsigned long requireFullHealth )
{
	static UFunction* pFnNeedsRepair = NULL;

	if ( ! pFnNeedsRepair )
		pFnNeedsRepair = (UFunction*) UObject::GObjObjects()->Data[ 88399 ];

	ADunDefTower_TripPhysical_execNeedsRepair_Parms NeedsRepair_Parms;
	NeedsRepair_Parms.requireFullHealth = requireFullHealth;

	this->ProcessEvent ( pFnNeedsRepair, &NeedsRepair_Parms, NULL );

	return NeedsRepair_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.SubtractHealth
// [0x00020002] 
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )

void ADunDefTower_TripPhysical::SubtractHealth ( int DamageAmount )
{
	static UFunction* pFnSubtractHealth = NULL;

	if ( ! pFnSubtractHealth )
		pFnSubtractHealth = (UFunction*) UObject::GObjObjects()->Data[ 88397 ];

	ADunDefTower_TripPhysical_execSubtractHealth_Parms SubtractHealth_Parms;
	SubtractHealth_Parms.DamageAmount = DamageAmount;

	this->ProcessEvent ( pFnSubtractHealth, &SubtractHealth_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_TripPhysical::eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 88389 ];

	ADunDefTower_TripPhysical_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetAttackRangeOffset
// [0x00820002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripPhysical::GetAttackRangeOffset ( )
{
	static UFunction* pFnGetAttackRangeOffset = NULL;

	if ( ! pFnGetAttackRangeOffset )
		pFnGetAttackRangeOffset = (UFunction*) UObject::GObjObjects()->Data[ 88384 ];

	ADunDefTower_TripPhysical_execGetAttackRangeOffset_Parms GetAttackRangeOffset_Parms;

	this->ProcessEvent ( pFnGetAttackRangeOffset, &GetAttackRangeOffset_Parms, NULL );

	return GetAttackRangeOffset_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetTargetingLocation
// [0x00024102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  RequestedBy                    ( CPF_OptionalParm | CPF_Parm )

struct FVector ADunDefTower_TripPhysical::GetTargetingLocation ( class AActor* RequestedBy )
{
	static UFunction* pFnGetTargetingLocation = NULL;

	if ( ! pFnGetTargetingLocation )
		pFnGetTargetingLocation = (UFunction*) UObject::GObjObjects()->Data[ 88381 ];

	ADunDefTower_TripPhysical_execGetTargetingLocation_Parms GetTargetingLocation_Parms;
	GetTargetingLocation_Parms.RequestedBy = RequestedBy;

	this->ProcessEvent ( pFnGetTargetingLocation, &GetTargetingLocation_Parms, NULL );

	return GetTargetingLocation_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetPhysicalTowerDamageMultiplier
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripPhysical::GetPhysicalTowerDamageMultiplier ( )
{
	static UFunction* pFnGetPhysicalTowerDamageMultiplier = NULL;

	if ( ! pFnGetPhysicalTowerDamageMultiplier )
		pFnGetPhysicalTowerDamageMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 88379 ];

	ADunDefTower_TripPhysical_execGetPhysicalTowerDamageMultiplier_Parms GetPhysicalTowerDamageMultiplier_Parms;

	this->ProcessEvent ( pFnGetPhysicalTowerDamageMultiplier, &GetPhysicalTowerDamageMultiplier_Parms, NULL );

	return GetPhysicalTowerDamageMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetPhysicalTowerHealthMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripPhysical::GetPhysicalTowerHealthMultiplier ( )
{
	static UFunction* pFnGetPhysicalTowerHealthMultiplier = NULL;

	if ( ! pFnGetPhysicalTowerHealthMultiplier )
		pFnGetPhysicalTowerHealthMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 88377 ];

	ADunDefTower_TripPhysical_execGetPhysicalTowerHealthMultiplier_Parms GetPhysicalTowerHealthMultiplier_Parms;

	this->ProcessEvent ( pFnGetPhysicalTowerHealthMultiplier, &GetPhysicalTowerHealthMultiplier_Parms, NULL );

	return GetPhysicalTowerHealthMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetAuraDamageMultiplier
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_TripPhysical::GetAuraDamageMultiplier ( )
{
	static UFunction* pFnGetAuraDamageMultiplier = NULL;

	if ( ! pFnGetAuraDamageMultiplier )
		pFnGetAuraDamageMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 88375 ];

	ADunDefTower_TripPhysical_execGetAuraDamageMultiplier_Parms GetAuraDamageMultiplier_Parms;

	this->ProcessEvent ( pFnGetAuraDamageMultiplier, &GetAuraDamageMultiplier_Parms, NULL );

	return GetAuraDamageMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.UseForTowerSelectionPassThrough
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefTower_TripPhysical::UseForTowerSelectionPassThrough ( )
{
	static UFunction* pFnUseForTowerSelectionPassThrough = NULL;

	if ( ! pFnUseForTowerSelectionPassThrough )
		pFnUseForTowerSelectionPassThrough = (UFunction*) UObject::GObjObjects()->Data[ 88373 ];

	ADunDefTower_TripPhysical_execUseForTowerSelectionPassThrough_Parms UseForTowerSelectionPassThrough_Parms;

	this->ProcessEvent ( pFnUseForTowerSelectionPassThrough, &UseForTowerSelectionPassThrough_Parms, NULL );

	return UseForTowerSelectionPassThrough_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetTowerTargetingDesirability
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower*            forTower                       ( CPF_Parm )

float ADunDefTower_TripPhysical::GetTowerTargetingDesirability ( class ADunDefTower* forTower )
{
	static UFunction* pFnGetTowerTargetingDesirability = NULL;

	if ( ! pFnGetTowerTargetingDesirability )
		pFnGetTowerTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 88370 ];

	ADunDefTower_TripPhysical_execGetTowerTargetingDesirability_Parms GetTowerTargetingDesirability_Parms;
	GetTowerTargetingDesirability_Parms.forTower = forTower;

	this->ProcessEvent ( pFnGetTowerTargetingDesirability, &GetTowerTargetingDesirability_Parms, NULL );

	return GetTowerTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetPlayerTargetingDesirability
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* forController                  ( CPF_Parm )
// class ADunDefPlayer*           ForPlayer                      ( CPF_OptionalParm | CPF_Parm )

float ADunDefTower_TripPhysical::GetPlayerTargetingDesirability ( class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer )
{
	static UFunction* pFnGetPlayerTargetingDesirability = NULL;

	if ( ! pFnGetPlayerTargetingDesirability )
		pFnGetPlayerTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 88365 ];

	ADunDefTower_TripPhysical_execGetPlayerTargetingDesirability_Parms GetPlayerTargetingDesirability_Parms;
	GetPlayerTargetingDesirability_Parms.forController = forController;
	GetPlayerTargetingDesirability_Parms.ForPlayer = ForPlayer;

	this->ProcessEvent ( pFnGetPlayerTargetingDesirability, &GetPlayerTargetingDesirability_Parms, NULL );

	return GetPlayerTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ActivatePlaneBeam
// [0x00820102] 
// Parameters infos:

void ADunDefTower_TripPhysical::ActivatePlaneBeam ( )
{
	static UFunction* pFnActivatePlaneBeam = NULL;

	if ( ! pFnActivatePlaneBeam )
		pFnActivatePlaneBeam = (UFunction*) UObject::GObjObjects()->Data[ 88363 ];

	ADunDefTower_TripPhysical_execActivatePlaneBeam_Parms ActivatePlaneBeam_Parms;

	this->ProcessEvent ( pFnActivatePlaneBeam, &ActivatePlaneBeam_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ActivateBeam
// [0x00020100] 
// Parameters infos:

void ADunDefTower_TripPhysical::ActivateBeam ( )
{
	static UFunction* pFnActivateBeam = NULL;

	if ( ! pFnActivateBeam )
		pFnActivateBeam = (UFunction*) UObject::GObjObjects()->Data[ 88362 ];

	ADunDefTower_TripPhysical_execActivateBeam_Parms ActivateBeam_Parms;

	this->ProcessEvent ( pFnActivateBeam, &ActivateBeam_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ModifyTranslation
// [0x00820102] 
// Parameters infos:

void ADunDefTower_TripPhysical::ModifyTranslation ( )
{
	static UFunction* pFnModifyTranslation = NULL;

	if ( ! pFnModifyTranslation )
		pFnModifyTranslation = (UFunction*) UObject::GObjObjects()->Data[ 88358 ];

	ADunDefTower_TripPhysical_execModifyTranslation_Parms ModifyTranslation_Parms;

	this->ProcessEvent ( pFnModifyTranslation, &ModifyTranslation_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.SetUpCollisionMesh
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripPhysical::SetUpCollisionMesh ( )
{
	static UFunction* pFnSetUpCollisionMesh = NULL;

	if ( ! pFnSetUpCollisionMesh )
		pFnSetUpCollisionMesh = (UFunction*) UObject::GObjObjects()->Data[ 88357 ];

	ADunDefTower_TripPhysical_execSetUpCollisionMesh_Parms SetUpCollisionMesh_Parms;

	this->ProcessEvent ( pFnSetUpCollisionMesh, &SetUpCollisionMesh_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetCollisionPoint
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ADunDefTower_TripPhysical::GetCollisionPoint ( )
{
	static UFunction* pFnGetCollisionPoint = NULL;

	if ( ! pFnGetCollisionPoint )
		pFnGetCollisionPoint = (UFunction*) UObject::GObjObjects()->Data[ 88329 ];

	ADunDefTower_TripPhysical_execGetCollisionPoint_Parms GetCollisionPoint_Parms;

	this->ProcessEvent ( pFnGetCollisionPoint, &GetCollisionPoint_Parms, NULL );

	return GetCollisionPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetSecondBeamPoint
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ADunDefTower_TripPhysical::GetSecondBeamPoint ( )
{
	static UFunction* pFnGetSecondBeamPoint = NULL;

	if ( ! pFnGetSecondBeamPoint )
		pFnGetSecondBeamPoint = (UFunction*) UObject::GObjObjects()->Data[ 88325 ];

	ADunDefTower_TripPhysical_execGetSecondBeamPoint_Parms GetSecondBeamPoint_Parms;

	this->ProcessEvent ( pFnGetSecondBeamPoint, &GetSecondBeamPoint_Parms, NULL );

	return GetSecondBeamPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ScaleInBeams
// [0x00020100] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefTower_TripPhysical::ScaleInBeams ( float DeltaTime )
{
	static UFunction* pFnScaleInBeams = NULL;

	if ( ! pFnScaleInBeams )
		pFnScaleInBeams = (UFunction*) UObject::GObjObjects()->Data[ 88323 ];

	ADunDefTower_TripPhysical_execScaleInBeams_Parms ScaleInBeams_Parms;
	ScaleInBeams_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnScaleInBeams, &ScaleInBeams_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.StartBeams
// [0x00020100] 
// Parameters infos:

void ADunDefTower_TripPhysical::StartBeams ( )
{
	static UFunction* pFnStartBeams = NULL;

	if ( ! pFnStartBeams )
		pFnStartBeams = (UFunction*) UObject::GObjObjects()->Data[ 88322 ];

	ADunDefTower_TripPhysical_execStartBeams_Parms StartBeams_Parms;

	this->ProcessEvent ( pFnStartBeams, &StartBeams_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_TripPhysical::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 88321 ];

	ADunDefTower_TripPhysical_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.SetPlacementPoints
// [0x00020002] 
// Parameters infos:
// TArray< struct FVector >       SpawnPoints                    ( CPF_Parm | CPF_NeedCtorLink )
// class ADunDefTower*            NodeTemplate                   ( CPF_Parm )

void ADunDefTower_TripPhysical::SetPlacementPoints ( TArray< struct FVector > SpawnPoints, class ADunDefTower* NodeTemplate )
{
	static UFunction* pFnSetPlacementPoints = NULL;

	if ( ! pFnSetPlacementPoints )
		pFnSetPlacementPoints = (UFunction*) UObject::GObjObjects()->Data[ 88317 ];

	ADunDefTower_TripPhysical_execSetPlacementPoints_Parms SetPlacementPoints_Parms;
	memcpy ( &SetPlacementPoints_Parms.SpawnPoints, &SpawnPoints, 0xC );
	SetPlacementPoints_Parms.NodeTemplate = NodeTemplate;

	this->ProcessEvent ( pFnSetPlacementPoints, &SetPlacementPoints_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefTower_TripPhysical::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 88315 ];

	ADunDefTower_TripPhysical_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.DunDefDecoyTarget.DTGetEnemyTargetingDesirability
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefEnemyController*  forController                  ( CPF_Parm )

float ADunDefDecoyTarget::DTGetEnemyTargetingDesirability ( class ADunDefEnemyController* forController )
{
	static UFunction* pFnDTGetEnemyTargetingDesirability = NULL;

	if ( ! pFnDTGetEnemyTargetingDesirability )
		pFnDTGetEnemyTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 83820 ];

	ADunDefDecoyTarget_execDTGetEnemyTargetingDesirability_Parms DTGetEnemyTargetingDesirability_Parms;
	DTGetEnemyTargetingDesirability_Parms.forController = forController;

	this->ProcessEvent ( pFnDTGetEnemyTargetingDesirability, &DTGetEnemyTargetingDesirability_Parms, NULL );

	return DTGetEnemyTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefDecoyTarget.DrawMyHUD
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefHUD*              H                              ( CPF_Parm )

bool ADunDefDecoyTarget::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 83817 ];

	ADunDefDecoyTarget_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );

	return DrawMyHUD_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefDecoyTarget.PlayDeath
// [0x00020102] 
// Parameters infos:

void ADunDefDecoyTarget::PlayDeath ( )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 83816 ];

	ADunDefDecoyTarget_execPlayDeath_Parms PlayDeath_Parms;

	this->ProcessEvent ( pFnPlayDeath, &PlayDeath_Parms, NULL );
};

// Function DunDefSpecial.DunDefDecoyTarget.AllowHeroGUID
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            GUID1                          ( CPF_Parm )
// int                            GUID2                          ( CPF_Parm )
// int                            GUID3                          ( CPF_Parm )
// int                            GUID4                          ( CPF_Parm )

bool ADunDefDecoyTarget::AllowHeroGUID ( int GUID1, int GUID2, int GUID3, int GUID4 )
{
	static UFunction* pFnAllowHeroGUID = NULL;

	if ( ! pFnAllowHeroGUID )
		pFnAllowHeroGUID = (UFunction*) UObject::GObjObjects()->Data[ 83810 ];

	ADunDefDecoyTarget_execAllowHeroGUID_Parms AllowHeroGUID_Parms;
	AllowHeroGUID_Parms.GUID1 = GUID1;
	AllowHeroGUID_Parms.GUID2 = GUID2;
	AllowHeroGUID_Parms.GUID3 = GUID3;
	AllowHeroGUID_Parms.GUID4 = GUID4;

	this->ProcessEvent ( pFnAllowHeroGUID, &AllowHeroGUID_Parms, NULL );

	return AllowHeroGUID_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefDecoyTarget.CanDetonate
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefDecoyTarget::CanDetonate ( )
{
	static UFunction* pFnCanDetonate = NULL;

	if ( ! pFnCanDetonate )
		pFnCanDetonate = (UFunction*) UObject::GObjObjects()->Data[ 83808 ];

	ADunDefDecoyTarget_execCanDetonate_Parms CanDetonate_Parms;

	this->ProcessEvent ( pFnCanDetonate, &CanDetonate_Parms, NULL );

	return CanDetonate_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefDecoyTarget.Detonate
// [0x00024102] 
// Parameters infos:
// int                            SetDetonationsNumber           ( CPF_OptionalParm | CPF_Parm )

void ADunDefDecoyTarget::Detonate ( int SetDetonationsNumber )
{
	static UFunction* pFnDetonate = NULL;

	if ( ! pFnDetonate )
		pFnDetonate = (UFunction*) UObject::GObjObjects()->Data[ 83806 ];

	ADunDefDecoyTarget_execDetonate_Parms Detonate_Parms;
	Detonate_Parms.SetDetonationsNumber = SetDetonationsNumber;

	this->ProcessEvent ( pFnDetonate, &Detonate_Parms, NULL );
};

// Function DunDefSpecial.DunDefDecoyTarget.SelfDestruct
// [0x00020002] 
// Parameters infos:

void ADunDefDecoyTarget::SelfDestruct ( )
{
	static UFunction* pFnSelfDestruct = NULL;

	if ( ! pFnSelfDestruct )
		pFnSelfDestruct = (UFunction*) UObject::GObjObjects()->Data[ 83805 ];

	ADunDefDecoyTarget_execSelfDestruct_Parms SelfDestruct_Parms;

	this->ProcessEvent ( pFnSelfDestruct, &SelfDestruct_Parms, NULL );
};

// Function DunDefSpecial.DunDefDecoyTarget.ScaleForHeroModifiers
// [0x00020002] 
// Parameters infos:
// unsigned long                  IsFirstTime                    ( CPF_Parm )

void ADunDefDecoyTarget::ScaleForHeroModifiers ( unsigned long IsFirstTime )
{
	static UFunction* pFnScaleForHeroModifiers = NULL;

	if ( ! pFnScaleForHeroModifiers )
		pFnScaleForHeroModifiers = (UFunction*) UObject::GObjObjects()->Data[ 83803 ];

	ADunDefDecoyTarget_execScaleForHeroModifiers_Parms ScaleForHeroModifiers_Parms;
	ScaleForHeroModifiers_Parms.IsFirstTime = IsFirstTime;

	this->ProcessEvent ( pFnScaleForHeroModifiers, &ScaleForHeroModifiers_Parms, NULL );
};

// Function DunDefSpecial.DunDefDecoyTarget.IsClassOnIgnoreList
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  ActorClass                     ( CPF_Parm )

bool ADunDefDecoyTarget::IsClassOnIgnoreList ( class UClass* ActorClass )
{
	static UFunction* pFnIsClassOnIgnoreList = NULL;

	if ( ! pFnIsClassOnIgnoreList )
		pFnIsClassOnIgnoreList = (UFunction*) UObject::GObjObjects()->Data[ 83799 ];

	ADunDefDecoyTarget_execIsClassOnIgnoreList_Parms IsClassOnIgnoreList_Parms;
	IsClassOnIgnoreList_Parms.ActorClass = ActorClass;

	this->ProcessEvent ( pFnIsClassOnIgnoreList, &IsClassOnIgnoreList_Parms, NULL );

	return IsClassOnIgnoreList_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefDecoyTarget.SetMaxNumberOfAttackers
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefDecoyTarget::SetMaxNumberOfAttackers ( )
{
	static UFunction* pFnSetMaxNumberOfAttackers = NULL;

	if ( ! pFnSetMaxNumberOfAttackers )
		pFnSetMaxNumberOfAttackers = (UFunction*) UObject::GObjObjects()->Data[ 83797 ];

	ADunDefDecoyTarget_execSetMaxNumberOfAttackers_Parms SetMaxNumberOfAttackers_Parms;

	this->ProcessEvent ( pFnSetMaxNumberOfAttackers, &SetMaxNumberOfAttackers_Parms, NULL );

	return SetMaxNumberOfAttackers_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefDecoyTarget.SetActiveTime
// [0x00020002] 
// Parameters infos:

void ADunDefDecoyTarget::SetActiveTime ( )
{
	static UFunction* pFnSetActiveTime = NULL;

	if ( ! pFnSetActiveTime )
		pFnSetActiveTime = (UFunction*) UObject::GObjObjects()->Data[ 83795 ];

	ADunDefDecoyTarget_execSetActiveTime_Parms SetActiveTime_Parms;

	this->ProcessEvent ( pFnSetActiveTime, &SetActiveTime_Parms, NULL );
};

// Function DunDefSpecial.DunDefDecoyTarget.DoPoke
// [0x00020002] 
// Parameters infos:

void ADunDefDecoyTarget::DoPoke ( )
{
	static UFunction* pFnDoPoke = NULL;

	if ( ! pFnDoPoke )
		pFnDoPoke = (UFunction*) UObject::GObjObjects()->Data[ 83792 ];

	ADunDefDecoyTarget_execDoPoke_Parms DoPoke_Parms;

	this->ProcessEvent ( pFnDoPoke, &DoPoke_Parms, NULL );
};

// Function DunDefSpecial.DunDefDecoyTarget.SetDesirability
// [0x00020102] 
// Parameters infos:

void ADunDefDecoyTarget::SetDesirability ( )
{
	static UFunction* pFnSetDesirability = NULL;

	if ( ! pFnSetDesirability )
		pFnSetDesirability = (UFunction*) UObject::GObjObjects()->Data[ 83790 ];

	ADunDefDecoyTarget_execSetDesirability_Parms SetDesirability_Parms;

	this->ProcessEvent ( pFnSetDesirability, &SetDesirability_Parms, NULL );
};

// Function DunDefSpecial.DunDefDecoyTarget.SetHealth
// [0x00020102] 
// Parameters infos:

void ADunDefDecoyTarget::SetHealth ( )
{
	static UFunction* pFnSetHealth = NULL;

	if ( ! pFnSetHealth )
		pFnSetHealth = (UFunction*) UObject::GObjObjects()->Data[ 83788 ];

	ADunDefDecoyTarget_execSetHealth_Parms SetHealth_Parms;

	this->ProcessEvent ( pFnSetHealth, &SetHealth_Parms, NULL );
};

// Function DunDefSpecial.DunDefDecoyTarget.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefDecoyTarget::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 83785 ];

	ADunDefDecoyTarget_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDefDecoyTarget.DrawMiniMapIcon
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class ADunDefMiniMap*          MiniMap                        ( CPF_Parm )

void ADunDefDecoyTarget::DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap )
{
	static UFunction* pFnDrawMiniMapIcon = NULL;

	if ( ! pFnDrawMiniMapIcon )
		pFnDrawMiniMapIcon = (UFunction*) UObject::GObjObjects()->Data[ 83780 ];

	ADunDefDecoyTarget_execDrawMiniMapIcon_Parms DrawMiniMapIcon_Parms;
	DrawMiniMapIcon_Parms.Canvas = Canvas;
	DrawMiniMapIcon_Parms.MiniMap = MiniMap;

	this->ProcessEvent ( pFnDrawMiniMapIcon, &DrawMiniMapIcon_Parms, NULL );
};

// Function DunDefSpecial.DunDefDecoyTarget.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefDecoyTarget::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 83779 ];

	ADunDefDecoyTarget_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.DunDefDecoyTarget.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADunDefDecoyTarget::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 83778 ];

	ADunDefDecoyTarget_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.PreventTowerAtPoint
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// class ADunDefTower*            towerArch                      ( CPF_Parm )
// struct FVector                 Point                          ( CPF_Parm )
// float                          towerRadius                    ( CPF_Parm )

bool ADunDefDropOffPoint::PreventTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point, float towerRadius )
{
	static UFunction* pFnPreventTowerAtPoint = NULL;

	if ( ! pFnPreventTowerAtPoint )
		pFnPreventTowerAtPoint = (UFunction*) UObject::GObjObjects()->Data[ 84054 ];

	ADunDefDropOffPoint_execPreventTowerAtPoint_Parms PreventTowerAtPoint_Parms;
	PreventTowerAtPoint_Parms.PC = PC;
	PreventTowerAtPoint_Parms.towerArch = towerArch;
	memcpy ( &PreventTowerAtPoint_Parms.Point, &Point, 0xC );
	PreventTowerAtPoint_Parms.towerRadius = towerRadius;

	this->ProcessEvent ( pFnPreventTowerAtPoint, &PreventTowerAtPoint_Parms, NULL );

	return PreventTowerAtPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefDropOffPoint.AllowTowerAtPoint
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// class ADunDefTower*            towerArch                      ( CPF_Parm )
// struct FVector                 Point                          ( CPF_Parm )

bool ADunDefDropOffPoint::AllowTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point )
{
	static UFunction* pFnAllowTowerAtPoint = NULL;

	if ( ! pFnAllowTowerAtPoint )
		pFnAllowTowerAtPoint = (UFunction*) UObject::GObjObjects()->Data[ 84049 ];

	ADunDefDropOffPoint_execAllowTowerAtPoint_Parms AllowTowerAtPoint_Parms;
	AllowTowerAtPoint_Parms.PC = PC;
	AllowTowerAtPoint_Parms.towerArch = towerArch;
	memcpy ( &AllowTowerAtPoint_Parms.Point, &Point, 0xC );

	this->ProcessEvent ( pFnAllowTowerAtPoint, &AllowTowerAtPoint_Parms, NULL );

	return AllowTowerAtPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefDropOffPoint.CheckAllowance
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefDropOffPoint::CheckAllowance ( )
{
	static UFunction* pFnCheckAllowance = NULL;

	if ( ! pFnCheckAllowance )
		pFnCheckAllowance = (UFunction*) UObject::GObjObjects()->Data[ 84047 ];

	ADunDefDropOffPoint_execCheckAllowance_Parms CheckAllowance_Parms;

	this->ProcessEvent ( pFnCheckAllowance, &CheckAllowance_Parms, NULL );

	return CheckAllowance_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefDropOffPoint.DTGetEnemyTargetingDesirability
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefEnemyController*  forController                  ( CPF_Parm )

float ADunDefDropOffPoint::DTGetEnemyTargetingDesirability ( class ADunDefEnemyController* forController )
{
	static UFunction* pFnDTGetEnemyTargetingDesirability = NULL;

	if ( ! pFnDTGetEnemyTargetingDesirability )
		pFnDTGetEnemyTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 84044 ];

	ADunDefDropOffPoint_execDTGetEnemyTargetingDesirability_Parms DTGetEnemyTargetingDesirability_Parms;
	DTGetEnemyTargetingDesirability_Parms.forController = forController;

	this->ProcessEvent ( pFnDTGetEnemyTargetingDesirability, &DTGetEnemyTargetingDesirability_Parms, NULL );

	return DTGetEnemyTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefDropOffPoint.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefDropOffPoint::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84042 ];

	ADunDefDropOffPoint_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.NotifyPackageDestroyed
// [0x00020102] 
// Parameters infos:

void ADunDefDropOffPoint::NotifyPackageDestroyed ( )
{
	static UFunction* pFnNotifyPackageDestroyed = NULL;

	if ( ! pFnNotifyPackageDestroyed )
		pFnNotifyPackageDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 84041 ];

	ADunDefDropOffPoint_execNotifyPackageDestroyed_Parms NotifyPackageDestroyed_Parms;

	this->ProcessEvent ( pFnNotifyPackageDestroyed, &NotifyPackageDestroyed_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.Died
// [0x00020002] 
// Parameters infos:
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void ADunDefDropOffPoint::Died ( class AController* EventInstigator, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 84035 ];

	ADunDefDropOffPoint_execDied_Parms Died_Parms;
	Died_Parms.EventInstigator = EventInstigator;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );
	Died_Parms.DamageType = DamageType;
	Died_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.NotifyHealthChange
// [0x00020102] 
// Parameters infos:

void ADunDefDropOffPoint::NotifyHealthChange ( )
{
	static UFunction* pFnNotifyHealthChange = NULL;

	if ( ! pFnNotifyHealthChange )
		pFnNotifyHealthChange = (UFunction*) UObject::GObjObjects()->Data[ 84034 ];

	ADunDefDropOffPoint_execNotifyHealthChange_Parms NotifyHealthChange_Parms;

	this->ProcessEvent ( pFnNotifyHealthChange, &NotifyHealthChange_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.PlayHitEffect
// [0x00020102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ADunDefDropOffPoint::PlayHitEffect ( class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnPlayHitEffect = NULL;

	if ( ! pFnPlayHitEffect )
		pFnPlayHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 84031 ];

	ADunDefDropOffPoint_execPlayHitEffect_Parms PlayHitEffect_Parms;
	PlayHitEffect_Parms.DamageType = DamageType;
	memcpy ( &PlayHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayHitEffect, &PlayHitEffect_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.AdjustDamage
// [0x00424002] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// int                            DamageAmount                   ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )

void ADunDefDropOffPoint::AdjustDamage ( class UClass* DamageType, class AController* InstigatedBy, struct FVector HitLocation, struct FTraceHitInfo HitInfo, int* DamageAmount, struct FVector* Momentum )
{
	static UFunction* pFnAdjustDamage = NULL;

	if ( ! pFnAdjustDamage )
		pFnAdjustDamage = (UFunction*) UObject::GObjObjects()->Data[ 84024 ];

	ADunDefDropOffPoint_execAdjustDamage_Parms AdjustDamage_Parms;
	AdjustDamage_Parms.DamageType = DamageType;
	AdjustDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &AdjustDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &AdjustDamage_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnAdjustDamage, &AdjustDamage_Parms, NULL );

	if ( DamageAmount )
		*DamageAmount = AdjustDamage_Parms.DamageAmount;

	if ( Momentum )
		memcpy ( Momentum, &AdjustDamage_Parms.Momentum, 0xC );
};

// Function DunDefSpecial.DunDefDropOffPoint.OnlyDrawHUDForOwner
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefDropOffPoint::OnlyDrawHUDForOwner ( )
{
	static UFunction* pFnOnlyDrawHUDForOwner = NULL;

	if ( ! pFnOnlyDrawHUDForOwner )
		pFnOnlyDrawHUDForOwner = (UFunction*) UObject::GObjObjects()->Data[ 84022 ];

	ADunDefDropOffPoint_execOnlyDrawHUDForOwner_Parms OnlyDrawHUDForOwner_Parms;

	this->ProcessEvent ( pFnOnlyDrawHUDForOwner, &OnlyDrawHUDForOwner_Parms, NULL );

	return OnlyDrawHUDForOwner_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefDropOffPoint.DrawMiniMapIcon
// [0x00020102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class ADunDefMiniMap*          MiniMap                        ( CPF_Parm )

void ADunDefDropOffPoint::DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap )
{
	static UFunction* pFnDrawMiniMapIcon = NULL;

	if ( ! pFnDrawMiniMapIcon )
		pFnDrawMiniMapIcon = (UFunction*) UObject::GObjObjects()->Data[ 84019 ];

	ADunDefDropOffPoint_execDrawMiniMapIcon_Parms DrawMiniMapIcon_Parms;
	DrawMiniMapIcon_Parms.Canvas = Canvas;
	DrawMiniMapIcon_Parms.MiniMap = MiniMap;

	this->ProcessEvent ( pFnDrawMiniMapIcon, &DrawMiniMapIcon_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.DrawActiveDisplay
// [0x00824102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// struct FVector                 ScreenPos                      ( CPF_Parm )
// float                          Scale                          ( CPF_Parm )
// float                          Opacity                        ( CPF_Parm )
// unsigned long                  bIsMiniMap                     ( CPF_OptionalParm | CPF_Parm )

void ADunDefDropOffPoint::DrawActiveDisplay ( class UCanvas* C, struct FVector ScreenPos, float Scale, float Opacity, unsigned long bIsMiniMap )
{
	static UFunction* pFnDrawActiveDisplay = NULL;

	if ( ! pFnDrawActiveDisplay )
		pFnDrawActiveDisplay = (UFunction*) UObject::GObjObjects()->Data[ 84008 ];

	ADunDefDropOffPoint_execDrawActiveDisplay_Parms DrawActiveDisplay_Parms;
	DrawActiveDisplay_Parms.C = C;
	memcpy ( &DrawActiveDisplay_Parms.ScreenPos, &ScreenPos, 0xC );
	DrawActiveDisplay_Parms.Scale = Scale;
	DrawActiveDisplay_Parms.Opacity = Opacity;
	DrawActiveDisplay_Parms.bIsMiniMap = bIsMiniMap;

	this->ProcessEvent ( pFnDrawActiveDisplay, &DrawActiveDisplay_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.DrawMyHUD
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefHUD*              H                              ( CPF_Parm )

bool ADunDefDropOffPoint::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 83987 ];

	ADunDefDropOffPoint_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );

	return DrawMyHUD_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefDropOffPoint.DeactivatePoint
// [0x00020002] 
// Parameters infos:

void ADunDefDropOffPoint::DeactivatePoint ( )
{
	static UFunction* pFnDeactivatePoint = NULL;

	if ( ! pFnDeactivatePoint )
		pFnDeactivatePoint = (UFunction*) UObject::GObjObjects()->Data[ 83984 ];

	ADunDefDropOffPoint_execDeactivatePoint_Parms DeactivatePoint_Parms;

	this->ProcessEvent ( pFnDeactivatePoint, &DeactivatePoint_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.TurnOffActiveEffects
// [0x00020102] 
// Parameters infos:

void ADunDefDropOffPoint::TurnOffActiveEffects ( )
{
	static UFunction* pFnTurnOffActiveEffects = NULL;

	if ( ! pFnTurnOffActiveEffects )
		pFnTurnOffActiveEffects = (UFunction*) UObject::GObjObjects()->Data[ 83983 ];

	ADunDefDropOffPoint_execTurnOffActiveEffects_Parms TurnOffActiveEffects_Parms;

	this->ProcessEvent ( pFnTurnOffActiveEffects, &TurnOffActiveEffects_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.TurnOnActiveEffects
// [0x00020102] 
// Parameters infos:

void ADunDefDropOffPoint::TurnOnActiveEffects ( )
{
	static UFunction* pFnTurnOnActiveEffects = NULL;

	if ( ! pFnTurnOnActiveEffects )
		pFnTurnOnActiveEffects = (UFunction*) UObject::GObjObjects()->Data[ 83982 ];

	ADunDefDropOffPoint_execTurnOnActiveEffects_Parms TurnOnActiveEffects_Parms;

	this->ProcessEvent ( pFnTurnOnActiveEffects, &TurnOnActiveEffects_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.ActivatePoint
// [0x00020002] 
// Parameters infos:
// int                            maxDropOffs                    ( CPF_Parm )

void ADunDefDropOffPoint::ActivatePoint ( int maxDropOffs )
{
	static UFunction* pFnActivatePoint = NULL;

	if ( ! pFnActivatePoint )
		pFnActivatePoint = (UFunction*) UObject::GObjObjects()->Data[ 83980 ];

	ADunDefDropOffPoint_execActivatePoint_Parms ActivatePoint_Parms;
	ActivatePoint_Parms.maxDropOffs = maxDropOffs;

	this->ProcessEvent ( pFnActivatePoint, &ActivatePoint_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.ClearDropOffActor
// [0x00020102] 
// Parameters infos:

void ADunDefDropOffPoint::ClearDropOffActor ( )
{
	static UFunction* pFnClearDropOffActor = NULL;

	if ( ! pFnClearDropOffActor )
		pFnClearDropOffActor = (UFunction*) UObject::GObjObjects()->Data[ 83978 ];

	ADunDefDropOffPoint_execClearDropOffActor_Parms ClearDropOffActor_Parms;

	this->ProcessEvent ( pFnClearDropOffActor, &ClearDropOffActor_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.SetDropOffActor
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayer*           DoA                            ( CPF_Parm )

void ADunDefDropOffPoint::SetDropOffActor ( class ADunDefPlayer* DoA )
{
	static UFunction* pFnSetDropOffActor = NULL;

	if ( ! pFnSetDropOffActor )
		pFnSetDropOffActor = (UFunction*) UObject::GObjObjects()->Data[ 83975 ];

	ADunDefDropOffPoint_execSetDropOffActor_Parms SetDropOffActor_Parms;
	SetDropOffActor_Parms.DoA = DoA;

	this->ProcessEvent ( pFnSetDropOffActor, &SetDropOffActor_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.NotifyPackageDropOff
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayer*           theDropper                     ( CPF_Parm )

void ADunDefDropOffPoint::NotifyPackageDropOff ( class ADunDefPlayer* theDropper )
{
	static UFunction* pFnNotifyPackageDropOff = NULL;

	if ( ! pFnNotifyPackageDropOff )
		pFnNotifyPackageDropOff = (UFunction*) UObject::GObjObjects()->Data[ 83973 ];

	ADunDefDropOffPoint_execNotifyPackageDropOff_Parms NotifyPackageDropOff_Parms;
	NotifyPackageDropOff_Parms.theDropper = theDropper;

	this->ProcessEvent ( pFnNotifyPackageDropOff, &NotifyPackageDropOff_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.PlaceNewItem
// [0x00820102] 
// Parameters infos:
// class ADunDefPickupableItem*   NewItem                        ( CPF_Parm )

void ADunDefDropOffPoint::PlaceNewItem ( class ADunDefPickupableItem* NewItem )
{
	static UFunction* pFnPlaceNewItem = NULL;

	if ( ! pFnPlaceNewItem )
		pFnPlaceNewItem = (UFunction*) UObject::GObjObjects()->Data[ 83969 ];

	ADunDefDropOffPoint_execPlaceNewItem_Parms PlaceNewItem_Parms;
	PlaceNewItem_Parms.NewItem = NewItem;

	this->ProcessEvent ( pFnPlaceNewItem, &PlaceNewItem_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.IsFull
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefDropOffPoint::IsFull ( )
{
	static UFunction* pFnIsFull = NULL;

	if ( ! pFnIsFull )
		pFnIsFull = (UFunction*) UObject::GObjObjects()->Data[ 83967 ];

	ADunDefDropOffPoint_execIsFull_Parms IsFull_Parms;

	this->ProcessEvent ( pFnIsFull, &IsFull_Parms, NULL );

	return IsFull_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefDropOffPoint.RemoveDropOffItem
// [0x00020002] 
// Parameters infos:
// class ADunDefPickupableItem*   RemoveItem                     ( CPF_Parm )

void ADunDefDropOffPoint::RemoveDropOffItem ( class ADunDefPickupableItem* RemoveItem )
{
	static UFunction* pFnRemoveDropOffItem = NULL;

	if ( ! pFnRemoveDropOffItem )
		pFnRemoveDropOffItem = (UFunction*) UObject::GObjObjects()->Data[ 83964 ];

	ADunDefDropOffPoint_execRemoveDropOffItem_Parms RemoveDropOffItem_Parms;
	RemoveDropOffItem_Parms.RemoveItem = RemoveItem;

	this->ProcessEvent ( pFnRemoveDropOffItem, &RemoveDropOffItem_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.DropOffUnFilled
// [0x00020102] 
// Parameters infos:

void ADunDefDropOffPoint::DropOffUnFilled ( )
{
	static UFunction* pFnDropOffUnFilled = NULL;

	if ( ! pFnDropOffUnFilled )
		pFnDropOffUnFilled = (UFunction*) UObject::GObjObjects()->Data[ 83963 ];

	ADunDefDropOffPoint_execDropOffUnFilled_Parms DropOffUnFilled_Parms;

	this->ProcessEvent ( pFnDropOffUnFilled, &DropOffUnFilled_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.DropOffFilled
// [0x00020102] 
// Parameters infos:

void ADunDefDropOffPoint::DropOffFilled ( )
{
	static UFunction* pFnDropOffFilled = NULL;

	if ( ! pFnDropOffFilled )
		pFnDropOffFilled = (UFunction*) UObject::GObjObjects()->Data[ 83962 ];

	ADunDefDropOffPoint_execDropOffFilled_Parms DropOffFilled_Parms;

	this->ProcessEvent ( pFnDropOffFilled, &DropOffFilled_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.AddDropOffItem
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayer*           droppedOffActor                ( CPF_Parm )

void ADunDefDropOffPoint::AddDropOffItem ( class ADunDefPlayer* droppedOffActor )
{
	static UFunction* pFnAddDropOffItem = NULL;

	if ( ! pFnAddDropOffItem )
		pFnAddDropOffItem = (UFunction*) UObject::GObjObjects()->Data[ 83956 ];

	ADunDefDropOffPoint_execAddDropOffItem_Parms AddDropOffItem_Parms;
	AddDropOffItem_Parms.droppedOffActor = droppedOffActor;

	this->ProcessEvent ( pFnAddDropOffItem, &AddDropOffItem_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.UpdateDropOff
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefDropOffPoint::UpdateDropOff ( float DeltaTime )
{
	static UFunction* pFnUpdateDropOff = NULL;

	if ( ! pFnUpdateDropOff )
		pFnUpdateDropOff = (UFunction*) UObject::GObjObjects()->Data[ 83953 ];

	ADunDefDropOffPoint_execUpdateDropOff_Parms UpdateDropOff_Parms;
	UpdateDropOff_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateDropOff, &UpdateDropOff_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefDropOffPoint::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 83951 ];

	ADunDefDropOffPoint_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.UnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void ADunDefDropOffPoint::eventUnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 83948 ];

	ADunDefDropOffPoint_eventUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefDropOffPoint::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 83939 ];

	ADunDefDropOffPoint_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefDropOffPoint::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 83922 ];

	ADunDefDropOffPoint_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefDropOffPoint.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefDropOffPoint::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 83920 ];

	ADunDefDropOffPoint_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.SetDroppingOff
// [0x00020102] 
// Parameters infos:
// unsigned long                  IsDroppingOff                  ( CPF_Parm )
// class ADunDefDropOffPoint*     newDP                          ( CPF_Parm )

void ADunDefPickupableItem::SetDroppingOff ( unsigned long IsDroppingOff, class ADunDefDropOffPoint* newDP )
{
	static UFunction* pFnSetDroppingOff = NULL;

	if ( ! pFnSetDroppingOff )
		pFnSetDroppingOff = (UFunction*) UObject::GObjObjects()->Data[ 84951 ];

	ADunDefPickupableItem_execSetDroppingOff_Parms SetDroppingOff_Parms;
	SetDroppingOff_Parms.IsDroppingOff = IsDroppingOff;
	SetDroppingOff_Parms.newDP = newDP;

	this->ProcessEvent ( pFnSetDroppingOff, &SetDroppingOff_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPickupableItem::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 84950 ];

	ADunDefPickupableItem_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.NotifyHolderLost
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayer*           lostHolder                     ( CPF_Parm )

void ADunDefPickupableItem::NotifyHolderLost ( class ADunDefPlayer* lostHolder )
{
	static UFunction* pFnNotifyHolderLost = NULL;

	if ( ! pFnNotifyHolderLost )
		pFnNotifyHolderLost = (UFunction*) UObject::GObjObjects()->Data[ 84948 ];

	ADunDefPickupableItem_execNotifyHolderLost_Parms NotifyHolderLost_Parms;
	NotifyHolderLost_Parms.lostHolder = lostHolder;

	this->ProcessEvent ( pFnNotifyHolderLost, &NotifyHolderLost_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.DoDestroyEffects
// [0x00020102] 
// Parameters infos:

void ADunDefPickupableItem::DoDestroyEffects ( )
{
	static UFunction* pFnDoDestroyEffects = NULL;

	if ( ! pFnDoDestroyEffects )
		pFnDoDestroyEffects = (UFunction*) UObject::GObjObjects()->Data[ 84947 ];

	ADunDefPickupableItem_execDoDestroyEffects_Parms DoDestroyEffects_Parms;

	this->ProcessEvent ( pFnDoDestroyEffects, &DoDestroyEffects_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.DestroyPickUp
// [0x00024002] 
// Parameters infos:
// unsigned long                  bFromDamage                    ( CPF_OptionalParm | CPF_Parm )

void ADunDefPickupableItem::DestroyPickUp ( unsigned long bFromDamage )
{
	static UFunction* pFnDestroyPickUp = NULL;

	if ( ! pFnDestroyPickUp )
		pFnDestroyPickUp = (UFunction*) UObject::GObjObjects()->Data[ 84945 ];

	ADunDefPickupableItem_execDestroyPickUp_Parms DestroyPickUp_Parms;
	DestroyPickUp_Parms.bFromDamage = bFromDamage;

	this->ProcessEvent ( pFnDestroyPickUp, &DestroyPickUp_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.PlaceAtPoint
// [0x00020102] 
// Parameters infos:
// struct FVector                 NewLoc                         ( CPF_Parm )

void ADunDefPickupableItem::PlaceAtPoint ( struct FVector NewLoc )
{
	static UFunction* pFnPlaceAtPoint = NULL;

	if ( ! pFnPlaceAtPoint )
		pFnPlaceAtPoint = (UFunction*) UObject::GObjObjects()->Data[ 84943 ];

	ADunDefPickupableItem_execPlaceAtPoint_Parms PlaceAtPoint_Parms;
	memcpy ( &PlaceAtPoint_Parms.NewLoc, &NewLoc, 0xC );

	this->ProcessEvent ( pFnPlaceAtPoint, &PlaceAtPoint_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.DropOffItem
// [0x00024102] 
// Parameters infos:
// class ADunDefDropOffPoint*     DropOffPoint                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefPickupableItem::DropOffItem ( class ADunDefDropOffPoint* DropOffPoint )
{
	static UFunction* pFnDropOffItem = NULL;

	if ( ! pFnDropOffItem )
		pFnDropOffItem = (UFunction*) UObject::GObjObjects()->Data[ 84941 ];

	ADunDefPickupableItem_execDropOffItem_Parms DropOffItem_Parms;
	DropOffItem_Parms.DropOffPoint = DropOffPoint;

	this->ProcessEvent ( pFnDropOffItem, &DropOffItem_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.DrawWaypointToMe
// [0x00020100] 
// Parameters infos:
// class ADunDefHUD*              H                              ( CPF_Parm )

void ADunDefPickupableItem::DrawWaypointToMe ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawWaypointToMe = NULL;

	if ( ! pFnDrawWaypointToMe )
		pFnDrawWaypointToMe = (UFunction*) UObject::GObjObjects()->Data[ 84906 ];

	ADunDefPickupableItem_execDrawWaypointToMe_Parms DrawWaypointToMe_Parms;
	DrawWaypointToMe_Parms.H = H;

	this->ProcessEvent ( pFnDrawWaypointToMe, &DrawWaypointToMe_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.GetDropOffWayPt
// [0x00020000] 
// Parameters infos:

void ADunDefPickupableItem::GetDropOffWayPt ( )
{
	static UFunction* pFnGetDropOffWayPt = NULL;

	if ( ! pFnGetDropOffWayPt )
		pFnGetDropOffWayPt = (UFunction*) UObject::GObjObjects()->Data[ 84905 ];

	ADunDefPickupableItem_execGetDropOffWayPt_Parms GetDropOffWayPt_Parms;

	this->ProcessEvent ( pFnGetDropOffWayPt, &GetDropOffWayPt_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.OnlyDrawHUDForOwner
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPickupableItem::OnlyDrawHUDForOwner ( )
{
	static UFunction* pFnOnlyDrawHUDForOwner = NULL;

	if ( ! pFnOnlyDrawHUDForOwner )
		pFnOnlyDrawHUDForOwner = (UFunction*) UObject::GObjObjects()->Data[ 84903 ];

	ADunDefPickupableItem_execOnlyDrawHUDForOwner_Parms OnlyDrawHUDForOwner_Parms;

	this->ProcessEvent ( pFnOnlyDrawHUDForOwner, &OnlyDrawHUDForOwner_Parms, NULL );

	return OnlyDrawHUDForOwner_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableItem.DrawMyHUD
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefHUD*              H                              ( CPF_Parm )

bool ADunDefPickupableItem::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 84900 ];

	ADunDefPickupableItem_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );

	return DrawMyHUD_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableItem.CanBePickedUp
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )

bool ADunDefPickupableItem::CanBePickedUp ( class ADunDefPlayerController* PC )
{
	static UFunction* pFnCanBePickedUp = NULL;

	if ( ! pFnCanBePickedUp )
		pFnCanBePickedUp = (UFunction*) UObject::GObjObjects()->Data[ 84339 ];

	ADunDefPickupableItem_execCanBePickedUp_Parms CanBePickedUp_Parms;
	CanBePickedUp_Parms.PC = PC;

	this->ProcessEvent ( pFnCanBePickedUp, &CanBePickedUp_Parms, NULL );

	return CanBePickedUp_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableItem.PickupItem
// [0x00820102] 
// Parameters infos:
// class ADunDefPlayer*           newHolder                      ( CPF_Parm )

void ADunDefPickupableItem::PickupItem ( class ADunDefPlayer* newHolder )
{
	static UFunction* pFnPickupItem = NULL;

	if ( ! pFnPickupItem )
		pFnPickupItem = (UFunction*) UObject::GObjObjects()->Data[ 84895 ];

	ADunDefPickupableItem_execPickupItem_Parms PickupItem_Parms;
	PickupItem_Parms.newHolder = newHolder;

	this->ProcessEvent ( pFnPickupItem, &PickupItem_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.BeginBeingPickedUp
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayerController* newHolder                      ( CPF_Parm )

void ADunDefPickupableItem::BeginBeingPickedUp ( class ADunDefPlayerController* newHolder )
{
	static UFunction* pFnBeginBeingPickedUp = NULL;

	if ( ! pFnBeginBeingPickedUp )
		pFnBeginBeingPickedUp = (UFunction*) UObject::GObjObjects()->Data[ 84892 ];

	ADunDefPickupableItem_execBeginBeingPickedUp_Parms BeginBeingPickedUp_Parms;
	BeginBeingPickedUp_Parms.newHolder = newHolder;

	this->ProcessEvent ( pFnBeginBeingPickedUp, &BeginBeingPickedUp_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.AttachToSpawner
// [0x00820102] 
// Parameters infos:

void ADunDefPickupableItem::AttachToSpawner ( )
{
	static UFunction* pFnAttachToSpawner = NULL;

	if ( ! pFnAttachToSpawner )
		pFnAttachToSpawner = (UFunction*) UObject::GObjObjects()->Data[ 84886 ];

	ADunDefPickupableItem_execAttachToSpawner_Parms AttachToSpawner_Parms;

	this->ProcessEvent ( pFnAttachToSpawner, &AttachToSpawner_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.InitMesh
// [0x00020102] 
// Parameters infos:
// class ADunDefPickupableSpawner* MySpawner                      ( CPF_Parm )

void ADunDefPickupableItem::InitMesh ( class ADunDefPickupableSpawner* MySpawner )
{
	static UFunction* pFnInitMesh = NULL;

	if ( ! pFnInitMesh )
		pFnInitMesh = (UFunction*) UObject::GObjObjects()->Data[ 84884 ];

	ADunDefPickupableItem_execInitMesh_Parms InitMesh_Parms;
	InitMesh_Parms.MySpawner = MySpawner;

	this->ProcessEvent ( pFnInitMesh, &InitMesh_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.GetToolTipPriority
// [0x00020100] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefPickupableItem::GetToolTipPriority ( )
{
	static UFunction* pFnGetToolTipPriority = NULL;

	if ( ! pFnGetToolTipPriority )
		pFnGetToolTipPriority = (UFunction*) UObject::GObjObjects()->Data[ 84882 ];

	ADunDefPickupableItem_execGetToolTipPriority_Parms GetToolTipPriority_Parms;

	this->ProcessEvent ( pFnGetToolTipPriority, &GetToolTipPriority_Parms, NULL );

	return GetToolTipPriority_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableItem.TakesToolTipPriority
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UDunDefToolTipInterface* otherToolTip                   ( CPF_Parm )

bool ADunDefPickupableItem::TakesToolTipPriority ( class UDunDefToolTipInterface* otherToolTip )
{
	static UFunction* pFnTakesToolTipPriority = NULL;

	if ( ! pFnTakesToolTipPriority )
		pFnTakesToolTipPriority = (UFunction*) UObject::GObjObjects()->Data[ 84879 ];

	ADunDefPickupableItem_execTakesToolTipPriority_Parms TakesToolTipPriority_Parms;
	TakesToolTipPriority_Parms.otherToolTip = otherToolTip;

	this->ProcessEvent ( pFnTakesToolTipPriority, &TakesToolTipPriority_Parms, NULL );

	return TakesToolTipPriority_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableItem.ContinueDrawingToolTip
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  ContinueDrawing                ( CPF_Parm )

bool ADunDefPickupableItem::ContinueDrawingToolTip ( unsigned long ContinueDrawing )
{
	static UFunction* pFnContinueDrawingToolTip = NULL;

	if ( ! pFnContinueDrawingToolTip )
		pFnContinueDrawingToolTip = (UFunction*) UObject::GObjObjects()->Data[ 84876 ];

	ADunDefPickupableItem_execContinueDrawingToolTip_Parms ContinueDrawingToolTip_Parms;
	ContinueDrawingToolTip_Parms.ContinueDrawing = ContinueDrawing;

	this->ProcessEvent ( pFnContinueDrawingToolTip, &ContinueDrawingToolTip_Parms, NULL );

	return ContinueDrawingToolTip_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableItem.DrawToolTip
// [0x00824102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// int                            PosX                           ( CPF_Parm )
// int                            PosY                           ( CPF_Parm )
// class ULocalPlayer*            ForPlayer                      ( CPF_OptionalParm | CPF_Parm )

void ADunDefPickupableItem::DrawToolTip ( class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer )
{
	static UFunction* pFnDrawToolTip = NULL;

	if ( ! pFnDrawToolTip )
		pFnDrawToolTip = (UFunction*) UObject::GObjObjects()->Data[ 84868 ];

	ADunDefPickupableItem_execDrawToolTip_Parms DrawToolTip_Parms;
	DrawToolTip_Parms.C = C;
	DrawToolTip_Parms.PosX = PosX;
	DrawToolTip_Parms.PosY = PosY;
	DrawToolTip_Parms.ForPlayer = ForPlayer;

	this->ProcessEvent ( pFnDrawToolTip, &DrawToolTip_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.AllowTowerAtPoint
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// class ADunDefTower*            towerArch                      ( CPF_Parm )
// struct FVector                 Point                          ( CPF_Parm )

bool ADunDefPickupableItem::AllowTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point )
{
	static UFunction* pFnAllowTowerAtPoint = NULL;

	if ( ! pFnAllowTowerAtPoint )
		pFnAllowTowerAtPoint = (UFunction*) UObject::GObjObjects()->Data[ 84863 ];

	ADunDefPickupableItem_execAllowTowerAtPoint_Parms AllowTowerAtPoint_Parms;
	AllowTowerAtPoint_Parms.PC = PC;
	AllowTowerAtPoint_Parms.towerArch = towerArch;
	memcpy ( &AllowTowerAtPoint_Parms.Point, &Point, 0xC );

	this->ProcessEvent ( pFnAllowTowerAtPoint, &AllowTowerAtPoint_Parms, NULL );

	return AllowTowerAtPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableItem.CheckAllowance
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPickupableItem::CheckAllowance ( )
{
	static UFunction* pFnCheckAllowance = NULL;

	if ( ! pFnCheckAllowance )
		pFnCheckAllowance = (UFunction*) UObject::GObjObjects()->Data[ 84861 ];

	ADunDefPickupableItem_execCheckAllowance_Parms CheckAllowance_Parms;

	this->ProcessEvent ( pFnCheckAllowance, &CheckAllowance_Parms, NULL );

	return CheckAllowance_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableItem.PreventTowerAtPoint
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// class ADunDefTower*            towerArch                      ( CPF_Parm )
// struct FVector                 Point                          ( CPF_Parm )
// float                          towerRadius                    ( CPF_Parm )

bool ADunDefPickupableItem::PreventTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point, float towerRadius )
{
	static UFunction* pFnPreventTowerAtPoint = NULL;

	if ( ! pFnPreventTowerAtPoint )
		pFnPreventTowerAtPoint = (UFunction*) UObject::GObjObjects()->Data[ 84855 ];

	ADunDefPickupableItem_execPreventTowerAtPoint_Parms PreventTowerAtPoint_Parms;
	PreventTowerAtPoint_Parms.PC = PC;
	PreventTowerAtPoint_Parms.towerArch = towerArch;
	memcpy ( &PreventTowerAtPoint_Parms.Point, &Point, 0xC );
	PreventTowerAtPoint_Parms.towerRadius = towerRadius;

	this->ProcessEvent ( pFnPreventTowerAtPoint, &PreventTowerAtPoint_Parms, NULL );

	return PreventTowerAtPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableItem.DrawMiniMapIcon
// [0x00020100] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class ADunDefMiniMap*          MiniMap                        ( CPF_Parm )

void ADunDefPickupableItem::DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap )
{
	static UFunction* pFnDrawMiniMapIcon = NULL;

	if ( ! pFnDrawMiniMapIcon )
		pFnDrawMiniMapIcon = (UFunction*) UObject::GObjObjects()->Data[ 84852 ];

	ADunDefPickupableItem_execDrawMiniMapIcon_Parms DrawMiniMapIcon_Parms;
	DrawMiniMapIcon_Parms.Canvas = Canvas;
	DrawMiniMapIcon_Parms.MiniMap = MiniMap;

	this->ProcessEvent ( pFnDrawMiniMapIcon, &DrawMiniMapIcon_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.GetActivationOffset
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPickupableItem::GetActivationOffset ( )
{
	static UFunction* pFnGetActivationOffset = NULL;

	if ( ! pFnGetActivationOffset )
		pFnGetActivationOffset = (UFunction*) UObject::GObjObjects()->Data[ 84850 ];

	ADunDefPickupableItem_execGetActivationOffset_Parms GetActivationOffset_Parms;

	this->ProcessEvent ( pFnGetActivationOffset, &GetActivationOffset_Parms, NULL );

	return GetActivationOffset_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableItem.GetActivationWeighting
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPickupableItem::GetActivationWeighting ( )
{
	static UFunction* pFnGetActivationWeighting = NULL;

	if ( ! pFnGetActivationWeighting )
		pFnGetActivationWeighting = (UFunction*) UObject::GObjObjects()->Data[ 84848 ];

	ADunDefPickupableItem_execGetActivationWeighting_Parms GetActivationWeighting_Parms;

	this->ProcessEvent ( pFnGetActivationWeighting, &GetActivationWeighting_Parms, NULL );

	return GetActivationWeighting_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableItem.Client_Activate
// [0x00024102] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// int                            activationType                 ( CPF_OptionalParm | CPF_Parm )

void ADunDefPickupableItem::Client_Activate ( class ADunDefPlayerController* PC, int activationType )
{
	static UFunction* pFnClient_Activate = NULL;

	if ( ! pFnClient_Activate )
		pFnClient_Activate = (UFunction*) UObject::GObjObjects()->Data[ 84845 ];

	ADunDefPickupableItem_execClient_Activate_Parms Client_Activate_Parms;
	Client_Activate_Parms.PC = PC;
	Client_Activate_Parms.activationType = activationType;

	this->ProcessEvent ( pFnClient_Activate, &Client_Activate_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.Server_Activate
// [0x00024002] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// unsigned long                  forceActivation                ( CPF_OptionalParm | CPF_Parm )
// int                            activationType                 ( CPF_OptionalParm | CPF_Parm )

void ADunDefPickupableItem::Server_Activate ( class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType )
{
	static UFunction* pFnServer_Activate = NULL;

	if ( ! pFnServer_Activate )
		pFnServer_Activate = (UFunction*) UObject::GObjObjects()->Data[ 84841 ];

	ADunDefPickupableItem_execServer_Activate_Parms Server_Activate_Parms;
	Server_Activate_Parms.PC = PC;
	Server_Activate_Parms.forceActivation = forceActivation;
	Server_Activate_Parms.activationType = activationType;

	this->ProcessEvent ( pFnServer_Activate, &Server_Activate_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.AllowActivation
// [0x00024102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// int                            activationType                 ( CPF_OptionalParm | CPF_Parm )

int ADunDefPickupableItem::AllowActivation ( class ADunDefPlayerController* PC, int activationType )
{
	static UFunction* pFnAllowActivation = NULL;

	if ( ! pFnAllowActivation )
		pFnAllowActivation = (UFunction*) UObject::GObjObjects()->Data[ 84837 ];

	ADunDefPickupableItem_execAllowActivation_Parms AllowActivation_Parms;
	AllowActivation_Parms.PC = PC;
	AllowActivation_Parms.activationType = activationType;

	this->ProcessEvent ( pFnAllowActivation, &AllowActivation_Parms, NULL );

	return AllowActivation_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableItem.SetMyActiveMesh
// [0x00020102] 
// Parameters infos:
// int                            MeshIndex                      ( CPF_Parm )

void ADunDefPickupableItem::SetMyActiveMesh ( int MeshIndex )
{
	static UFunction* pFnSetMyActiveMesh = NULL;

	if ( ! pFnSetMyActiveMesh )
		pFnSetMyActiveMesh = (UFunction*) UObject::GObjObjects()->Data[ 84835 ];

	ADunDefPickupableItem_execSetMyActiveMesh_Parms SetMyActiveMesh_Parms;
	SetMyActiveMesh_Parms.MeshIndex = MeshIndex;

	this->ProcessEvent ( pFnSetMyActiveMesh, &SetMyActiveMesh_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPickupableItem::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84834 ];

	ADunDefPickupableItem_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefPickupableItem::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 84817 ];

	ADunDefPickupableItem_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableItem.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefPickupableItem::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 84815 ];

	ADunDefPickupableItem_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.DunDefTouchForwardingActor.UnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void ADunDefTouchForwardingActor::eventUnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 87754 ];

	ADunDefTouchForwardingActor_eventUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function DunDefSpecial.DunDefTouchForwardingActor.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefTouchForwardingActor::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 87749 ];

	ADunDefTouchForwardingActor_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function DunDefSpecial.DunDefTouchForwardingActor.SetTouchParent
// [0x00020002] 
// Parameters infos:
// class AActor*                  NewParent                      ( CPF_Parm )

void ADunDefTouchForwardingActor::SetTouchParent ( class AActor* NewParent )
{
	static UFunction* pFnSetTouchParent = NULL;

	if ( ! pFnSetTouchParent )
		pFnSetTouchParent = (UFunction*) UObject::GObjObjects()->Data[ 87747 ];

	ADunDefTouchForwardingActor_execSetTouchParent_Parms SetTouchParent_Parms;
	SetTouchParent_Parms.NewParent = NewParent;

	this->ProcessEvent ( pFnSetTouchParent, &SetTouchParent_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerController_Delivery.PawnDied
// [0x00020002] 
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )

void ADunDefPlayerController_Delivery::PawnDied ( class APawn* inPawn )
{
	static UFunction* pFnPawnDied = NULL;

	if ( ! pFnPawnDied )
		pFnPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 87678 ];

	ADunDefPlayerController_Delivery_execPawnDied_Parms PawnDied_Parms;
	PawnDied_Parms.inPawn = inPawn;

	this->ProcessEvent ( pFnPawnDied, &PawnDied_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerController_Delivery.NotifyTakeHit
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )

void ADunDefPlayerController_Delivery::NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 87672 ];

	ADunDefPlayerController_Delivery_execNotifyTakeHit_Parms NotifyTakeHit_Parms;
	NotifyTakeHit_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHit_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHit_Parms.Damage = Damage;
	NotifyTakeHit_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHit_Parms.Momentum, &Momentum, 0xC );

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerController_Delivery.DropCurrentItem
// [0x00020002] 
// Parameters infos:

void ADunDefPlayerController_Delivery::DropCurrentItem ( )
{
	static UFunction* pFnDropCurrentItem = NULL;

	if ( ! pFnDropCurrentItem )
		pFnDropCurrentItem = (UFunction*) UObject::GObjObjects()->Data[ 87671 ];

	ADunDefPlayerController_Delivery_execDropCurrentItem_Parms DropCurrentItem_Parms;

	this->ProcessEvent ( pFnDropCurrentItem, &DropCurrentItem_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerController_Delivery.PickupItem
// [0x00020002] 
// Parameters infos:
// class ADunDefPickupableItem*   newPickup                      ( CPF_Parm )

void ADunDefPlayerController_Delivery::PickupItem ( class ADunDefPickupableItem* newPickup )
{
	static UFunction* pFnPickupItem = NULL;

	if ( ! pFnPickupItem )
		pFnPickupItem = (UFunction*) UObject::GObjObjects()->Data[ 87669 ];

	ADunDefPlayerController_Delivery_execPickupItem_Parms PickupItem_Parms;
	PickupItem_Parms.newPickup = newPickup;

	this->ProcessEvent ( pFnPickupItem, &PickupItem_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Delivery.AllowedToTeleport
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   Teleportee                     ( CPF_Parm )

bool ADunDefGRI_Delivery::AllowedToTeleport ( class APawn* Teleportee )
{
	static UFunction* pFnAllowedToTeleport = NULL;

	if ( ! pFnAllowedToTeleport )
		pFnAllowedToTeleport = (UFunction*) UObject::GObjObjects()->Data[ 84417 ];

	ADunDefGRI_Delivery_execAllowedToTeleport_Parms AllowedToTeleport_Parms;
	AllowedToTeleport_Parms.Teleportee = Teleportee;

	this->ProcessEvent ( pFnAllowedToTeleport, &AllowedToTeleport_Parms, NULL );

	return AllowedToTeleport_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Delivery.SetCurrentDeliveryItem
// [0x00020002] 
// Parameters infos:
// class ADunDefPickupableItem*   NewItem                        ( CPF_Parm )

void ADunDefGRI_Delivery::SetCurrentDeliveryItem ( class ADunDefPickupableItem* NewItem )
{
	static UFunction* pFnSetCurrentDeliveryItem = NULL;

	if ( ! pFnSetCurrentDeliveryItem )
		pFnSetCurrentDeliveryItem = (UFunction*) UObject::GObjObjects()->Data[ 84415 ];

	ADunDefGRI_Delivery_execSetCurrentDeliveryItem_Parms SetCurrentDeliveryItem_Parms;
	SetCurrentDeliveryItem_Parms.NewItem = NewItem;

	this->ProcessEvent ( pFnSetCurrentDeliveryItem, &SetCurrentDeliveryItem_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Delivery.RemovePackageHolder
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayer*           aPlayer                        ( CPF_Parm )

void ADunDefGRI_Delivery::RemovePackageHolder ( class ADunDefPlayer* aPlayer )
{
	static UFunction* pFnRemovePackageHolder = NULL;

	if ( ! pFnRemovePackageHolder )
		pFnRemovePackageHolder = (UFunction*) UObject::GObjObjects()->Data[ 84413 ];

	ADunDefGRI_Delivery_execRemovePackageHolder_Parms RemovePackageHolder_Parms;
	RemovePackageHolder_Parms.aPlayer = aPlayer;

	this->ProcessEvent ( pFnRemovePackageHolder, &RemovePackageHolder_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Delivery.AddPackageHolder
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayer*           aPlayer                        ( CPF_Parm )

void ADunDefGRI_Delivery::AddPackageHolder ( class ADunDefPlayer* aPlayer )
{
	static UFunction* pFnAddPackageHolder = NULL;

	if ( ! pFnAddPackageHolder )
		pFnAddPackageHolder = (UFunction*) UObject::GObjObjects()->Data[ 84411 ];

	ADunDefGRI_Delivery_execAddPackageHolder_Parms AddPackageHolder_Parms;
	AddPackageHolder_Parms.aPlayer = aPlayer;

	this->ProcessEvent ( pFnAddPackageHolder, &AddPackageHolder_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Delivery.ModifyPlayerGroundSpeed
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayer*           aPlayer                        ( CPF_Parm )
// float                          theGroundSpeed                 ( CPF_Parm )

float ADunDefGRI_Delivery::ModifyPlayerGroundSpeed ( class ADunDefPlayer* aPlayer, float theGroundSpeed )
{
	static UFunction* pFnModifyPlayerGroundSpeed = NULL;

	if ( ! pFnModifyPlayerGroundSpeed )
		pFnModifyPlayerGroundSpeed = (UFunction*) UObject::GObjObjects()->Data[ 84407 ];

	ADunDefGRI_Delivery_execModifyPlayerGroundSpeed_Parms ModifyPlayerGroundSpeed_Parms;
	ModifyPlayerGroundSpeed_Parms.aPlayer = aPlayer;
	ModifyPlayerGroundSpeed_Parms.theGroundSpeed = theGroundSpeed;

	this->ProcessEvent ( pFnModifyPlayerGroundSpeed, &ModifyPlayerGroundSpeed_Parms, NULL );

	return ModifyPlayerGroundSpeed_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Delivery.AllowPackageSpawn
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefGRI_Delivery::AllowPackageSpawn ( )
{
	static UFunction* pFnAllowPackageSpawn = NULL;

	if ( ! pFnAllowPackageSpawn )
		pFnAllowPackageSpawn = (UFunction*) UObject::GObjObjects()->Data[ 84405 ];

	ADunDefGRI_Delivery_execAllowPackageSpawn_Parms AllowPackageSpawn_Parms;

	this->ProcessEvent ( pFnAllowPackageSpawn, &AllowPackageSpawn_Parms, NULL );

	return AllowPackageSpawn_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Delivery.SetInCombatPhase
// [0x00020102] 
// Parameters infos:
// unsigned long                  inCombatPhase                  ( CPF_Parm )

void ADunDefGRI_Delivery::SetInCombatPhase ( unsigned long inCombatPhase )
{
	static UFunction* pFnSetInCombatPhase = NULL;

	if ( ! pFnSetInCombatPhase )
		pFnSetInCombatPhase = (UFunction*) UObject::GObjObjects()->Data[ 84399 ];

	ADunDefGRI_Delivery_execSetInCombatPhase_Parms SetInCombatPhase_Parms;
	SetInCombatPhase_Parms.inCombatPhase = inCombatPhase;

	this->ProcessEvent ( pFnSetInCombatPhase, &SetInCombatPhase_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Delivery.DrawMyHUD
// [0x00020102] 
// Parameters infos:
// class ADunDefHUD*              H                              ( CPF_Parm )

void ADunDefGRI_Delivery::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 84391 ];

	ADunDefGRI_Delivery_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Delivery.ClearDropPoints
// [0x00020002] 
// Parameters infos:

void ADunDefGRI_Delivery::ClearDropPoints ( )
{
	static UFunction* pFnClearDropPoints = NULL;

	if ( ! pFnClearDropPoints )
		pFnClearDropPoints = (UFunction*) UObject::GObjObjects()->Data[ 84389 ];

	ADunDefGRI_Delivery_execClearDropPoints_Parms ClearDropPoints_Parms;

	this->ProcessEvent ( pFnClearDropPoints, &ClearDropPoints_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Delivery.NotifyLostDropOffPoint
// [0x00020002] 
// Parameters infos:
// class ADunDefDropOffPoint*     lostPoint                      ( CPF_Parm )

void ADunDefGRI_Delivery::NotifyLostDropOffPoint ( class ADunDefDropOffPoint* lostPoint )
{
	static UFunction* pFnNotifyLostDropOffPoint = NULL;

	if ( ! pFnNotifyLostDropOffPoint )
		pFnNotifyLostDropOffPoint = (UFunction*) UObject::GObjObjects()->Data[ 84387 ];

	ADunDefGRI_Delivery_execNotifyLostDropOffPoint_Parms NotifyLostDropOffPoint_Parms;
	NotifyLostDropOffPoint_Parms.lostPoint = lostPoint;

	this->ProcessEvent ( pFnNotifyLostDropOffPoint, &NotifyLostDropOffPoint_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Delivery.NotifyFilledDropOffPoint
// [0x00020002] 
// Parameters infos:
// class ADunDefDropOffPoint*     filledPoint                    ( CPF_Parm )

void ADunDefGRI_Delivery::NotifyFilledDropOffPoint ( class ADunDefDropOffPoint* filledPoint )
{
	static UFunction* pFnNotifyFilledDropOffPoint = NULL;

	if ( ! pFnNotifyFilledDropOffPoint )
		pFnNotifyFilledDropOffPoint = (UFunction*) UObject::GObjObjects()->Data[ 84380 ];

	ADunDefGRI_Delivery_execNotifyFilledDropOffPoint_Parms NotifyFilledDropOffPoint_Parms;
	NotifyFilledDropOffPoint_Parms.filledPoint = filledPoint;

	this->ProcessEvent ( pFnNotifyFilledDropOffPoint, &NotifyFilledDropOffPoint_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Delivery.SelectNewDropOffPoint
// [0x00020002] 
// Parameters infos:

void ADunDefGRI_Delivery::SelectNewDropOffPoint ( )
{
	static UFunction* pFnSelectNewDropOffPoint = NULL;

	if ( ! pFnSelectNewDropOffPoint )
		pFnSelectNewDropOffPoint = (UFunction*) UObject::GObjObjects()->Data[ 84374 ];

	ADunDefGRI_Delivery_execSelectNewDropOffPoint_Parms SelectNewDropOffPoint_Parms;

	this->ProcessEvent ( pFnSelectNewDropOffPoint, &SelectNewDropOffPoint_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Delivery.Server_AddGRIHeroAbilities
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )

void ADunDefGRI_Delivery::Server_AddGRIHeroAbilities ( class ADunDefPlayerController* PC )
{
	static UFunction* pFnServer_AddGRIHeroAbilities = NULL;

	if ( ! pFnServer_AddGRIHeroAbilities )
		pFnServer_AddGRIHeroAbilities = (UFunction*) UObject::GObjObjects()->Data[ 84371 ];

	ADunDefGRI_Delivery_execServer_AddGRIHeroAbilities_Parms Server_AddGRIHeroAbilities_Parms;
	Server_AddGRIHeroAbilities_Parms.PC = PC;

	this->ProcessEvent ( pFnServer_AddGRIHeroAbilities, &Server_AddGRIHeroAbilities_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Delivery.EndBuildPhase
// [0x00020002] 
// Parameters infos:

void ADunDefGRI_Delivery::EndBuildPhase ( )
{
	static UFunction* pFnEndBuildPhase = NULL;

	if ( ! pFnEndBuildPhase )
		pFnEndBuildPhase = (UFunction*) UObject::GObjObjects()->Data[ 84369 ];

	ADunDefGRI_Delivery_execEndBuildPhase_Parms EndBuildPhase_Parms;

	this->ProcessEvent ( pFnEndBuildPhase, &EndBuildPhase_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Delivery.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefGRI_Delivery::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 84367 ];

	ADunDefGRI_Delivery_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Delivery.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefGRI_Delivery::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84365 ];

	ADunDefGRI_Delivery_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefEmitterDamage.AllowSpawn
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  theArchetype                   ( CPF_Parm )
// struct FVector                 theLoc                         ( CPF_Parm )
// struct FRotator                theRot                         ( CPF_Parm )

bool ADunDefEmitterDamage::eventAllowSpawn ( class AActor* theArchetype, struct FVector theLoc, struct FRotator theRot )
{
	static UFunction* pFnAllowSpawn = NULL;

	if ( ! pFnAllowSpawn )
		pFnAllowSpawn = (UFunction*) UObject::GObjObjects()->Data[ 84100 ];

	ADunDefEmitterDamage_eventAllowSpawn_Parms AllowSpawn_Parms;
	AllowSpawn_Parms.theArchetype = theArchetype;
	memcpy ( &AllowSpawn_Parms.theLoc, &theLoc, 0xC );
	memcpy ( &AllowSpawn_Parms.theRot, &theRot, 0xC );

	this->ProcessEvent ( pFnAllowSpawn, &AllowSpawn_Parms, NULL );

	return AllowSpawn_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefEmitterDamage.HurtRadius
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          BaseDamage                     ( CPF_Parm )
// float                          DamageRadius                   ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// class AActor*                  IgnoredActor                   ( CPF_OptionalParm | CPF_Parm )
// class AController*             InstigatedByController         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bDoFullDamage                  ( CPF_OptionalParm | CPF_Parm )

bool ADunDefEmitterDamage::HurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage )
{
	static UFunction* pFnHurtRadius = NULL;

	if ( ! pFnHurtRadius )
		pFnHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 84087 ];

	ADunDefEmitterDamage_execHurtRadius_Parms HurtRadius_Parms;
	HurtRadius_Parms.BaseDamage = BaseDamage;
	HurtRadius_Parms.DamageRadius = DamageRadius;
	HurtRadius_Parms.DamageType = DamageType;
	HurtRadius_Parms.Momentum = Momentum;
	memcpy ( &HurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	HurtRadius_Parms.IgnoredActor = IgnoredActor;
	HurtRadius_Parms.InstigatedByController = InstigatedByController;
	HurtRadius_Parms.bDoFullDamage = bDoFullDamage;

	this->ProcessEvent ( pFnHurtRadius, &HurtRadius_Parms, NULL );

	return HurtRadius_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefEmitterDamage.DoDamage
// [0x00020002] 
// Parameters infos:

void ADunDefEmitterDamage::DoDamage ( )
{
	static UFunction* pFnDoDamage = NULL;

	if ( ! pFnDoDamage )
		pFnDoDamage = (UFunction*) UObject::GObjObjects()->Data[ 84086 ];

	ADunDefEmitterDamage_execDoDamage_Parms DoDamage_Parms;

	this->ProcessEvent ( pFnDoDamage, &DoDamage_Parms, NULL );
};

// Function DunDefSpecial.DunDefEmitterDamage.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefEmitterDamage::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84085 ];

	ADunDefEmitterDamage_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefEnemyCrystalCore.DrawMiniMapIcon
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class ADunDefMiniMap*          MiniMap                        ( CPF_Parm )

void ADunDefEnemyCrystalCore::DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap )
{
	static UFunction* pFnDrawMiniMapIcon = NULL;

	if ( ! pFnDrawMiniMapIcon )
		pFnDrawMiniMapIcon = (UFunction*) UObject::GObjObjects()->Data[ 84121 ];

	ADunDefEnemyCrystalCore_execDrawMiniMapIcon_Parms DrawMiniMapIcon_Parms;
	DrawMiniMapIcon_Parms.Canvas = Canvas;
	DrawMiniMapIcon_Parms.MiniMap = MiniMap;

	this->ProcessEvent ( pFnDrawMiniMapIcon, &DrawMiniMapIcon_Parms, NULL );
};

// Function DunDefSpecial.DunDefEnemyCrystalCore.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefEnemyCrystalCore::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 84120 ];

	ADunDefEnemyCrystalCore_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.DunDefEnemyCrystalCore.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefEnemyCrystalCore::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84119 ];

	ADunDefEnemyCrystalCore_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefFlashHeal.SpawnHealEmitter
// [0x00020102] 
// Parameters infos:
// class AActor*                  HealedActor                    ( CPF_Parm )

void ADunDefFlashHeal::SpawnHealEmitter ( class AActor* HealedActor )
{
	static UFunction* pFnSpawnHealEmitter = NULL;

	if ( ! pFnSpawnHealEmitter )
		pFnSpawnHealEmitter = (UFunction*) UObject::GObjObjects()->Data[ 84166 ];

	ADunDefFlashHeal_execSpawnHealEmitter_Parms SpawnHealEmitter_Parms;
	SpawnHealEmitter_Parms.HealedActor = HealedActor;

	this->ProcessEvent ( pFnSpawnHealEmitter, &SpawnHealEmitter_Parms, NULL );
};

// Function DunDefSpecial.DunDefFlashHeal.AllowSpawn
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  theArchetype                   ( CPF_Parm )
// struct FVector                 theLoc                         ( CPF_Parm )
// struct FRotator                theRot                         ( CPF_Parm )

bool ADunDefFlashHeal::eventAllowSpawn ( class AActor* theArchetype, struct FVector theLoc, struct FRotator theRot )
{
	static UFunction* pFnAllowSpawn = NULL;

	if ( ! pFnAllowSpawn )
		pFnAllowSpawn = (UFunction*) UObject::GObjObjects()->Data[ 84161 ];

	ADunDefFlashHeal_eventAllowSpawn_Parms AllowSpawn_Parms;
	AllowSpawn_Parms.theArchetype = theArchetype;
	memcpy ( &AllowSpawn_Parms.theLoc, &theLoc, 0xC );
	memcpy ( &AllowSpawn_Parms.theRot, &theRot, 0xC );

	this->ProcessEvent ( pFnAllowSpawn, &AllowSpawn_Parms, NULL );

	return AllowSpawn_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefFlashHeal.FlashHeal
// [0x00020102] 
// Parameters infos:

void ADunDefFlashHeal::FlashHeal ( )
{
	static UFunction* pFnFlashHeal = NULL;

	if ( ! pFnFlashHeal )
		pFnFlashHeal = (UFunction*) UObject::GObjObjects()->Data[ 84151 ];

	ADunDefFlashHeal_execFlashHeal_Parms FlashHeal_Parms;

	this->ProcessEvent ( pFnFlashHeal, &FlashHeal_Parms, NULL );
};

// Function DunDefSpecial.DunDefFlashHeal.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefFlashHeal::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84149 ];

	ADunDefFlashHeal_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Assault.AllowedToTeleport
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   Teleportee                     ( CPF_Parm )

bool ADunDefGRI_Assault::AllowedToTeleport ( class APawn* Teleportee )
{
	static UFunction* pFnAllowedToTeleport = NULL;

	if ( ! pFnAllowedToTeleport )
		pFnAllowedToTeleport = (UFunction*) UObject::GObjObjects()->Data[ 84238 ];

	ADunDefGRI_Assault_execAllowedToTeleport_Parms AllowedToTeleport_Parms;
	AllowedToTeleport_Parms.Teleportee = Teleportee;

	this->ProcessEvent ( pFnAllowedToTeleport, &AllowedToTeleport_Parms, NULL );

	return AllowedToTeleport_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Assault.GetEnemyLifeSpanMultiplier
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefEnemy*            anEnemy                        ( CPF_Parm )

float ADunDefGRI_Assault::GetEnemyLifeSpanMultiplier ( class ADunDefEnemy* anEnemy )
{
	static UFunction* pFnGetEnemyLifeSpanMultiplier = NULL;

	if ( ! pFnGetEnemyLifeSpanMultiplier )
		pFnGetEnemyLifeSpanMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 84235 ];

	ADunDefGRI_Assault_execGetEnemyLifeSpanMultiplier_Parms GetEnemyLifeSpanMultiplier_Parms;
	GetEnemyLifeSpanMultiplier_Parms.anEnemy = anEnemy;

	this->ProcessEvent ( pFnGetEnemyLifeSpanMultiplier, &GetEnemyLifeSpanMultiplier_Parms, NULL );

	return GetEnemyLifeSpanMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Assault.ModifyPlayerGroundSpeed
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayer*           aPlayer                        ( CPF_Parm )
// float                          theGroundSpeed                 ( CPF_Parm )

float ADunDefGRI_Assault::ModifyPlayerGroundSpeed ( class ADunDefPlayer* aPlayer, float theGroundSpeed )
{
	static UFunction* pFnModifyPlayerGroundSpeed = NULL;

	if ( ! pFnModifyPlayerGroundSpeed )
		pFnModifyPlayerGroundSpeed = (UFunction*) UObject::GObjObjects()->Data[ 84231 ];

	ADunDefGRI_Assault_execModifyPlayerGroundSpeed_Parms ModifyPlayerGroundSpeed_Parms;
	ModifyPlayerGroundSpeed_Parms.aPlayer = aPlayer;
	ModifyPlayerGroundSpeed_Parms.theGroundSpeed = theGroundSpeed;

	this->ProcessEvent ( pFnModifyPlayerGroundSpeed, &ModifyPlayerGroundSpeed_Parms, NULL );

	return ModifyPlayerGroundSpeed_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Assault.GetTrapRangeMultiplier
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower_DetonationType* aTrap                          ( CPF_OptionalParm | CPF_Parm )

float ADunDefGRI_Assault::GetTrapRangeMultiplier ( class ADunDefTower_DetonationType* aTrap )
{
	static UFunction* pFnGetTrapRangeMultiplier = NULL;

	if ( ! pFnGetTrapRangeMultiplier )
		pFnGetTrapRangeMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 84228 ];

	ADunDefGRI_Assault_execGetTrapRangeMultiplier_Parms GetTrapRangeMultiplier_Parms;
	GetTrapRangeMultiplier_Parms.aTrap = aTrap;

	this->ProcessEvent ( pFnGetTrapRangeMultiplier, &GetTrapRangeMultiplier_Parms, NULL );

	return GetTrapRangeMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Assault.GetAuraRangeMultiplier
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower_Aura*       anAura                         ( CPF_OptionalParm | CPF_Parm )

float ADunDefGRI_Assault::GetAuraRangeMultiplier ( class ADunDefTower_Aura* anAura )
{
	static UFunction* pFnGetAuraRangeMultiplier = NULL;

	if ( ! pFnGetAuraRangeMultiplier )
		pFnGetAuraRangeMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 84225 ];

	ADunDefGRI_Assault_execGetAuraRangeMultiplier_Parms GetAuraRangeMultiplier_Parms;
	GetAuraRangeMultiplier_Parms.anAura = anAura;

	this->ProcessEvent ( pFnGetAuraRangeMultiplier, &GetAuraRangeMultiplier_Parms, NULL );

	return GetAuraRangeMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Assault.GetTrapDamageMultiplier
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower_DetonationType* aTrap                          ( CPF_OptionalParm | CPF_Parm )

float ADunDefGRI_Assault::GetTrapDamageMultiplier ( class ADunDefTower_DetonationType* aTrap )
{
	static UFunction* pFnGetTrapDamageMultiplier = NULL;

	if ( ! pFnGetTrapDamageMultiplier )
		pFnGetTrapDamageMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 84222 ];

	ADunDefGRI_Assault_execGetTrapDamageMultiplier_Parms GetTrapDamageMultiplier_Parms;
	GetTrapDamageMultiplier_Parms.aTrap = aTrap;

	this->ProcessEvent ( pFnGetTrapDamageMultiplier, &GetTrapDamageMultiplier_Parms, NULL );

	return GetTrapDamageMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Assault.GetTrapHealthMultiplier
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower_DetonationType* aTrap                          ( CPF_OptionalParm | CPF_Parm )

float ADunDefGRI_Assault::GetTrapHealthMultiplier ( class ADunDefTower_DetonationType* aTrap )
{
	static UFunction* pFnGetTrapHealthMultiplier = NULL;

	if ( ! pFnGetTrapHealthMultiplier )
		pFnGetTrapHealthMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 84219 ];

	ADunDefGRI_Assault_execGetTrapHealthMultiplier_Parms GetTrapHealthMultiplier_Parms;
	GetTrapHealthMultiplier_Parms.aTrap = aTrap;

	this->ProcessEvent ( pFnGetTrapHealthMultiplier, &GetTrapHealthMultiplier_Parms, NULL );

	return GetTrapHealthMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Assault.GetStrengthDrainAuraMultiplier
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower_AuraStrengthDrain* anAura                         ( CPF_OptionalParm | CPF_Parm )

float ADunDefGRI_Assault::GetStrengthDrainAuraMultiplier ( class ADunDefTower_AuraStrengthDrain* anAura )
{
	static UFunction* pFnGetStrengthDrainAuraMultiplier = NULL;

	if ( ! pFnGetStrengthDrainAuraMultiplier )
		pFnGetStrengthDrainAuraMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 84216 ];

	ADunDefGRI_Assault_execGetStrengthDrainAuraMultiplier_Parms GetStrengthDrainAuraMultiplier_Parms;
	GetStrengthDrainAuraMultiplier_Parms.anAura = anAura;

	this->ProcessEvent ( pFnGetStrengthDrainAuraMultiplier, &GetStrengthDrainAuraMultiplier_Parms, NULL );

	return GetStrengthDrainAuraMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Assault.GetAuraDamageMultiplier
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower_Aura*       anAura                         ( CPF_OptionalParm | CPF_Parm )

float ADunDefGRI_Assault::GetAuraDamageMultiplier ( class ADunDefTower_Aura* anAura )
{
	static UFunction* pFnGetAuraDamageMultiplier = NULL;

	if ( ! pFnGetAuraDamageMultiplier )
		pFnGetAuraDamageMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 84213 ];

	ADunDefGRI_Assault_execGetAuraDamageMultiplier_Parms GetAuraDamageMultiplier_Parms;
	GetAuraDamageMultiplier_Parms.anAura = anAura;

	this->ProcessEvent ( pFnGetAuraDamageMultiplier, &GetAuraDamageMultiplier_Parms, NULL );

	return GetAuraDamageMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Assault.GetAuraHealthMultiplier
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower_Aura*       anAura                         ( CPF_OptionalParm | CPF_Parm )

float ADunDefGRI_Assault::GetAuraHealthMultiplier ( class ADunDefTower_Aura* anAura )
{
	static UFunction* pFnGetAuraHealthMultiplier = NULL;

	if ( ! pFnGetAuraHealthMultiplier )
		pFnGetAuraHealthMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 84210 ];

	ADunDefGRI_Assault_execGetAuraHealthMultiplier_Parms GetAuraHealthMultiplier_Parms;
	GetAuraHealthMultiplier_Parms.anAura = anAura;

	this->ProcessEvent ( pFnGetAuraHealthMultiplier, &GetAuraHealthMultiplier_Parms, NULL );

	return GetAuraHealthMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Assault.GetProjectileLimitDistance
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  anInstigator                   ( CPF_Parm )
// float                          originalLimit                  ( CPF_Parm )

float ADunDefGRI_Assault::GetProjectileLimitDistance ( class AActor* anInstigator, float originalLimit )
{
	static UFunction* pFnGetProjectileLimitDistance = NULL;

	if ( ! pFnGetProjectileLimitDistance )
		pFnGetProjectileLimitDistance = (UFunction*) UObject::GObjObjects()->Data[ 84206 ];

	ADunDefGRI_Assault_execGetProjectileLimitDistance_Parms GetProjectileLimitDistance_Parms;
	GetProjectileLimitDistance_Parms.anInstigator = anInstigator;
	GetProjectileLimitDistance_Parms.originalLimit = originalLimit;

	this->ProcessEvent ( pFnGetProjectileLimitDistance, &GetProjectileLimitDistance_Parms, NULL );

	return GetProjectileLimitDistance_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Assault.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADunDefGRI_Assault::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84205 ];

	ADunDefGRI_Assault_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Assault.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefGRI_Assault::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 84203 ];

	ADunDefGRI_Assault_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Assault.GetNumberOfEnemyCoresRemaining
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefGRI_Assault::GetNumberOfEnemyCoresRemaining ( )
{
	static UFunction* pFnGetNumberOfEnemyCoresRemaining = NULL;

	if ( ! pFnGetNumberOfEnemyCoresRemaining )
		pFnGetNumberOfEnemyCoresRemaining = (UFunction*) UObject::GObjObjects()->Data[ 84199 ];

	ADunDefGRI_Assault_execGetNumberOfEnemyCoresRemaining_Parms GetNumberOfEnemyCoresRemaining_Parms;

	this->ProcessEvent ( pFnGetNumberOfEnemyCoresRemaining, &GetNumberOfEnemyCoresRemaining_Parms, NULL );

	return GetNumberOfEnemyCoresRemaining_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Assault.DrawMyHUD
// [0x00020102] 
// Parameters infos:
// class ADunDefHUD*              H                              ( CPF_Parm )

void ADunDefGRI_Assault::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 84195 ];

	ADunDefGRI_Assault_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Assault.RestartedPlayer
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayerController* NewPlayer                      ( CPF_Parm )

void ADunDefGRI_Assault::RestartedPlayer ( class ADunDefPlayerController* NewPlayer )
{
	static UFunction* pFnRestartedPlayer = NULL;

	if ( ! pFnRestartedPlayer )
		pFnRestartedPlayer = (UFunction*) UObject::GObjObjects()->Data[ 84193 ];

	ADunDefGRI_Assault_execRestartedPlayer_Parms RestartedPlayer_Parms;
	RestartedPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartedPlayer, &RestartedPlayer_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Assault.CanEnterSpectatorMode
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* thePlayerController            ( CPF_Parm )

bool ADunDefGRI_Assault::CanEnterSpectatorMode ( class ADunDefPlayerController* thePlayerController )
{
	static UFunction* pFnCanEnterSpectatorMode = NULL;

	if ( ! pFnCanEnterSpectatorMode )
		pFnCanEnterSpectatorMode = (UFunction*) UObject::GObjObjects()->Data[ 84190 ];

	ADunDefGRI_Assault_execCanEnterSpectatorMode_Parms CanEnterSpectatorMode_Parms;
	CanEnterSpectatorMode_Parms.thePlayerController = thePlayerController;

	this->ProcessEvent ( pFnCanEnterSpectatorMode, &CanEnterSpectatorMode_Parms, NULL );

	return CanEnterSpectatorMode_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Assault.CanRespawnPlayer
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* thePlayerController            ( CPF_Parm )

bool ADunDefGRI_Assault::CanRespawnPlayer ( class ADunDefPlayerController* thePlayerController )
{
	static UFunction* pFnCanRespawnPlayer = NULL;

	if ( ! pFnCanRespawnPlayer )
		pFnCanRespawnPlayer = (UFunction*) UObject::GObjObjects()->Data[ 84187 ];

	ADunDefGRI_Assault_execCanRespawnPlayer_Parms CanRespawnPlayer_Parms;
	CanRespawnPlayer_Parms.thePlayerController = thePlayerController;

	this->ProcessEvent ( pFnCanRespawnPlayer, &CanRespawnPlayer_Parms, NULL );

	return CanRespawnPlayer_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Chicken.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADunDefGRI_Chicken::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84323 ];

	ADunDefGRI_Chicken_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Chicken.GetSpectatorWaitString
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ADunDefGRI_Chicken::GetSpectatorWaitString ( )
{
	static UFunction* pFnGetSpectatorWaitString = NULL;

	if ( ! pFnGetSpectatorWaitString )
		pFnGetSpectatorWaitString = (UFunction*) UObject::GObjObjects()->Data[ 84321 ];

	ADunDefGRI_Chicken_execGetSpectatorWaitString_Parms GetSpectatorWaitString_Parms;

	this->ProcessEvent ( pFnGetSpectatorWaitString, &GetSpectatorWaitString_Parms, NULL );

	return GetSpectatorWaitString_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Chicken.RestartedPlayer
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayerController* NewPlayer                      ( CPF_Parm )

void ADunDefGRI_Chicken::RestartedPlayer ( class ADunDefPlayerController* NewPlayer )
{
	static UFunction* pFnRestartedPlayer = NULL;

	if ( ! pFnRestartedPlayer )
		pFnRestartedPlayer = (UFunction*) UObject::GObjObjects()->Data[ 84319 ];

	ADunDefGRI_Chicken_execRestartedPlayer_Parms RestartedPlayer_Parms;
	RestartedPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartedPlayer, &RestartedPlayer_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Chicken.CanEnterSpectatorMode
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* thePlayerController            ( CPF_Parm )

bool ADunDefGRI_Chicken::CanEnterSpectatorMode ( class ADunDefPlayerController* thePlayerController )
{
	static UFunction* pFnCanEnterSpectatorMode = NULL;

	if ( ! pFnCanEnterSpectatorMode )
		pFnCanEnterSpectatorMode = (UFunction*) UObject::GObjObjects()->Data[ 84316 ];

	ADunDefGRI_Chicken_execCanEnterSpectatorMode_Parms CanEnterSpectatorMode_Parms;
	CanEnterSpectatorMode_Parms.thePlayerController = thePlayerController;

	this->ProcessEvent ( pFnCanEnterSpectatorMode, &CanEnterSpectatorMode_Parms, NULL );

	return CanEnterSpectatorMode_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Chicken.CanRespawnPlayer
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* thePlayerController            ( CPF_Parm )

bool ADunDefGRI_Chicken::CanRespawnPlayer ( class ADunDefPlayerController* thePlayerController )
{
	static UFunction* pFnCanRespawnPlayer = NULL;

	if ( ! pFnCanRespawnPlayer )
		pFnCanRespawnPlayer = (UFunction*) UObject::GObjObjects()->Data[ 84313 ];

	ADunDefGRI_Chicken_execCanRespawnPlayer_Parms CanRespawnPlayer_Parms;
	CanRespawnPlayer_Parms.thePlayerController = thePlayerController;

	this->ProcessEvent ( pFnCanRespawnPlayer, &CanRespawnPlayer_Parms, NULL );

	return CanRespawnPlayer_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Chicken.DrawMyHUD
// [0x00820102] 
// Parameters infos:
// class ADunDefHUD*              H                              ( CPF_Parm )

void ADunDefGRI_Chicken::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 84303 ];

	ADunDefGRI_Chicken_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Chicken.BeganCombatPhase
// [0x00020002] 
// Parameters infos:

void ADunDefGRI_Chicken::BeganCombatPhase ( )
{
	static UFunction* pFnBeganCombatPhase = NULL;

	if ( ! pFnBeganCombatPhase )
		pFnBeganCombatPhase = (UFunction*) UObject::GObjObjects()->Data[ 84302 ];

	ADunDefGRI_Chicken_execBeganCombatPhase_Parms BeganCombatPhase_Parms;

	this->ProcessEvent ( pFnBeganCombatPhase, &BeganCombatPhase_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Chicken.SetChickenPlayer
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayer*           theNewChickenPlayer            ( CPF_Parm )

void ADunDefGRI_Chicken::SetChickenPlayer ( class ADunDefPlayer* theNewChickenPlayer )
{
	static UFunction* pFnSetChickenPlayer = NULL;

	if ( ! pFnSetChickenPlayer )
		pFnSetChickenPlayer = (UFunction*) UObject::GObjObjects()->Data[ 84299 ];

	ADunDefGRI_Chicken_execSetChickenPlayer_Parms SetChickenPlayer_Parms;
	SetChickenPlayer_Parms.theNewChickenPlayer = theNewChickenPlayer;

	this->ProcessEvent ( pFnSetChickenPlayer, &SetChickenPlayer_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Chicken.GetRandomPlayer
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADunDefPlayer* ADunDefGRI_Chicken::GetRandomPlayer ( )
{
	static UFunction* pFnGetRandomPlayer = NULL;

	if ( ! pFnGetRandomPlayer )
		pFnGetRandomPlayer = (UFunction*) UObject::GObjObjects()->Data[ 84294 ];

	ADunDefGRI_Chicken_execGetRandomPlayer_Parms GetRandomPlayer_Parms;

	this->ProcessEvent ( pFnGetRandomPlayer, &GetRandomPlayer_Parms, NULL );

	return GetRandomPlayer_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_Chicken.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefGRI_Chicken::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 84292 ];

	ADunDefGRI_Chicken_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Chicken.SetInCombatPhase
// [0x00020102] 
// Parameters infos:
// unsigned long                  inCombatPhase                  ( CPF_Parm )

void ADunDefGRI_Chicken::SetInCombatPhase ( unsigned long inCombatPhase )
{
	static UFunction* pFnSetInCombatPhase = NULL;

	if ( ! pFnSetInCombatPhase )
		pFnSetInCombatPhase = (UFunction*) UObject::GObjObjects()->Data[ 84290 ];

	ADunDefGRI_Chicken_execSetInCombatPhase_Parms SetInCombatPhase_Parms;
	SetInCombatPhase_Parms.inCombatPhase = inCombatPhase;

	this->ProcessEvent ( pFnSetInCombatPhase, &SetInCombatPhase_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Chicken.NotifyOfChicken
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )

void ADunDefGRI_Chicken::NotifyOfChicken ( class ADunDefPlayerController* PC )
{
	static UFunction* pFnNotifyOfChicken = NULL;

	if ( ! pFnNotifyOfChicken )
		pFnNotifyOfChicken = (UFunction*) UObject::GObjObjects()->Data[ 84288 ];

	ADunDefGRI_Chicken_execNotifyOfChicken_Parms NotifyOfChicken_Parms;
	NotifyOfChicken_Parms.PC = PC;

	this->ProcessEvent ( pFnNotifyOfChicken, &NotifyOfChicken_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Chicken.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefGRI_Chicken::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 84271 ];

	ADunDefGRI_Chicken_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_Chicken.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefGRI_Chicken::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 84269 ];

	ADunDefGRI_Chicken_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PickUpItem.RequestPickup
// [0x00020102] 
// Parameters infos:
// class ADunDefPickupableItem*   NewItem                        ( CPF_Parm )

void ADunDefPlayerAbility_PickUpItem::RequestPickup ( class ADunDefPickupableItem* NewItem )
{
	static UFunction* pFnRequestPickup = NULL;

	if ( ! pFnRequestPickup )
		pFnRequestPickup = (UFunction*) UObject::GObjObjects()->Data[ 84330 ];

	ADunDefPlayerAbility_PickUpItem_execRequestPickup_Parms RequestPickup_Parms;
	RequestPickup_Parms.NewItem = NewItem;

	this->ProcessEvent ( pFnRequestPickup, &RequestPickup_Parms, NULL );
};

// Function DunDefSpecial.DunDefMapInfo_Delivery.GetPointDropOffCount
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UDunDefMapInfo_Delivery::GetPointDropOffCount ( )
{
	static UFunction* pFnGetPointDropOffCount = NULL;

	if ( ! pFnGetPointDropOffCount )
		pFnGetPointDropOffCount = (UFunction*) UObject::GObjObjects()->Data[ 84378 ];

	UDunDefMapInfo_Delivery_execGetPointDropOffCount_Parms GetPointDropOffCount_Parms;

	this->ProcessEvent ( pFnGetPointDropOffCount, &GetPointDropOffCount_Parms, NULL );

	return GetPointDropOffCount_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefMapInfo_Delivery.GetDUForWave
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            waveNumber                     ( CPF_Parm )

int UDunDefMapInfo_Delivery::GetDUForWave ( int waveNumber )
{
	static UFunction* pFnGetDUForWave = NULL;

	if ( ! pFnGetDUForWave )
		pFnGetDUForWave = (UFunction*) UObject::GObjObjects()->Data[ 84401 ];

	UDunDefMapInfo_Delivery_execGetDUForWave_Parms GetDUForWave_Parms;
	GetDUForWave_Parms.waveNumber = waveNumber;

	this->ProcessEvent ( pFnGetDUForWave, &GetDUForWave_Parms, NULL );

	return GetDUForWave_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefMapInfo_Delivery.GetTimeLimit
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            waveNumber                     ( CPF_Parm )
// int                            difficulty                     ( CPF_Parm )
// int                            NumPlayers                     ( CPF_Parm )

float UDunDefMapInfo_Delivery::GetTimeLimit ( int waveNumber, int difficulty, int NumPlayers )
{
	static UFunction* pFnGetTimeLimit = NULL;

	if ( ! pFnGetTimeLimit )
		pFnGetTimeLimit = (UFunction*) UObject::GObjObjects()->Data[ 84403 ];

	UDunDefMapInfo_Delivery_execGetTimeLimit_Parms GetTimeLimit_Parms;
	GetTimeLimit_Parms.waveNumber = waveNumber;
	GetTimeLimit_Parms.difficulty = difficulty;
	GetTimeLimit_Parms.NumPlayers = NumPlayers;

	this->ProcessEvent ( pFnGetTimeLimit, &GetTimeLimit_Parms, NULL );

	return GetTimeLimit_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefMapInfo_Delivery.GetWaveDropOffCount
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            waveNumber                     ( CPF_Parm )

int UDunDefMapInfo_Delivery::GetWaveDropOffCount ( int waveNumber )
{
	static UFunction* pFnGetWaveDropOffCount = NULL;

	if ( ! pFnGetWaveDropOffCount )
		pFnGetWaveDropOffCount = (UFunction*) UObject::GObjObjects()->Data[ 84385 ];

	UDunDefMapInfo_Delivery_execGetWaveDropOffCount_Parms GetWaveDropOffCount_Parms;
	GetWaveDropOffCount_Parms.waveNumber = waveNumber;

	this->ProcessEvent ( pFnGetWaveDropOffCount, &GetWaveDropOffCount_Parms, NULL );

	return GetWaveDropOffCount_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefManaToken_Golden.Collected
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           byPlayer                       ( CPF_Parm )

void ADunDefManaToken_Golden::Collected ( class ADunDefPlayer* byPlayer )
{
	static UFunction* pFnCollected = NULL;

	if ( ! pFnCollected )
		pFnCollected = (UFunction*) UObject::GObjObjects()->Data[ 84424 ];

	ADunDefManaToken_Golden_execCollected_Parms Collected_Parms;
	Collected_Parms.byPlayer = byPlayer;

	this->ProcessEvent ( pFnCollected, &Collected_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.DrawMyHUD
// [0x00020102] 
// Parameters infos:
// class ADunDefHUD*              H                              ( CPF_Parm )

void ADunDefGRI_GoldenTokens::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 84469 ];

	ADunDefGRI_GoldenTokens_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.SetInCombatPhase
// [0x00020102] 
// Parameters infos:
// unsigned long                  inCombatPhase                  ( CPF_Parm )

void ADunDefGRI_GoldenTokens::SetInCombatPhase ( unsigned long inCombatPhase )
{
	static UFunction* pFnSetInCombatPhase = NULL;

	if ( ! pFnSetInCombatPhase )
		pFnSetInCombatPhase = (UFunction*) UObject::GObjObjects()->Data[ 84466 ];

	ADunDefGRI_GoldenTokens_execSetInCombatPhase_Parms SetInCombatPhase_Parms;
	SetInCombatPhase_Parms.inCombatPhase = inCombatPhase;

	this->ProcessEvent ( pFnSetInCombatPhase, &SetInCombatPhase_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.CollectedGoldenToken
// [0x00020102] 
// Parameters infos:

void ADunDefGRI_GoldenTokens::CollectedGoldenToken ( )
{
	static UFunction* pFnCollectedGoldenToken = NULL;

	if ( ! pFnCollectedGoldenToken )
		pFnCollectedGoldenToken = (UFunction*) UObject::GObjObjects()->Data[ 84465 ];

	ADunDefGRI_GoldenTokens_execCollectedGoldenToken_Parms CollectedGoldenToken_Parms;

	this->ProcessEvent ( pFnCollectedGoldenToken, &CollectedGoldenToken_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.PawnDied
// [0x00020002] 
// Parameters infos:
// class APawn*                   KilledPawn                     ( CPF_Parm )

void ADunDefGRI_GoldenTokens::PawnDied ( class APawn* KilledPawn )
{
	static UFunction* pFnPawnDied = NULL;

	if ( ! pFnPawnDied )
		pFnPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 84463 ];

	ADunDefGRI_GoldenTokens_execPawnDied_Parms PawnDied_Parms;
	PawnDied_Parms.KilledPawn = KilledPawn;

	this->ProcessEvent ( pFnPawnDied, &PawnDied_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.SetGoldenEnemy
// [0x00020102] 
// Parameters infos:
// class ADunDefEnemy*            Enemy                          ( CPF_Parm )

void ADunDefGRI_GoldenTokens::SetGoldenEnemy ( class ADunDefEnemy* Enemy )
{
	static UFunction* pFnSetGoldenEnemy = NULL;

	if ( ! pFnSetGoldenEnemy )
		pFnSetGoldenEnemy = (UFunction*) UObject::GObjObjects()->Data[ 84460 ];

	ADunDefGRI_GoldenTokens_execSetGoldenEnemy_Parms SetGoldenEnemy_Parms;
	SetGoldenEnemy_Parms.Enemy = Enemy;

	this->ProcessEvent ( pFnSetGoldenEnemy, &SetGoldenEnemy_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefGRI_GoldenTokens::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84459 ];

	ADunDefGRI_GoldenTokens_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefGRI_GoldenTokens::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 84453 ];

	ADunDefGRI_GoldenTokens_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefGRI_GoldenTokens::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 84451 ];

	ADunDefGRI_GoldenTokens_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.GetSpectatorWaitString
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ADunDefGRI_KillEnemiesTimeLimit::GetSpectatorWaitString ( )
{
	static UFunction* pFnGetSpectatorWaitString = NULL;

	if ( ! pFnGetSpectatorWaitString )
		pFnGetSpectatorWaitString = (UFunction*) UObject::GObjObjects()->Data[ 84515 ];

	ADunDefGRI_KillEnemiesTimeLimit_execGetSpectatorWaitString_Parms GetSpectatorWaitString_Parms;

	this->ProcessEvent ( pFnGetSpectatorWaitString, &GetSpectatorWaitString_Parms, NULL );

	return GetSpectatorWaitString_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.RestartedPlayer
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayerController* NewPlayer                      ( CPF_Parm )

void ADunDefGRI_KillEnemiesTimeLimit::RestartedPlayer ( class ADunDefPlayerController* NewPlayer )
{
	static UFunction* pFnRestartedPlayer = NULL;

	if ( ! pFnRestartedPlayer )
		pFnRestartedPlayer = (UFunction*) UObject::GObjObjects()->Data[ 84513 ];

	ADunDefGRI_KillEnemiesTimeLimit_execRestartedPlayer_Parms RestartedPlayer_Parms;
	RestartedPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartedPlayer, &RestartedPlayer_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.CanEnterSpectatorMode
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* thePlayerController            ( CPF_Parm )

bool ADunDefGRI_KillEnemiesTimeLimit::CanEnterSpectatorMode ( class ADunDefPlayerController* thePlayerController )
{
	static UFunction* pFnCanEnterSpectatorMode = NULL;

	if ( ! pFnCanEnterSpectatorMode )
		pFnCanEnterSpectatorMode = (UFunction*) UObject::GObjObjects()->Data[ 84510 ];

	ADunDefGRI_KillEnemiesTimeLimit_execCanEnterSpectatorMode_Parms CanEnterSpectatorMode_Parms;
	CanEnterSpectatorMode_Parms.thePlayerController = thePlayerController;

	this->ProcessEvent ( pFnCanEnterSpectatorMode, &CanEnterSpectatorMode_Parms, NULL );

	return CanEnterSpectatorMode_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.CanRespawnPlayer
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* thePlayerController            ( CPF_Parm )

bool ADunDefGRI_KillEnemiesTimeLimit::CanRespawnPlayer ( class ADunDefPlayerController* thePlayerController )
{
	static UFunction* pFnCanRespawnPlayer = NULL;

	if ( ! pFnCanRespawnPlayer )
		pFnCanRespawnPlayer = (UFunction*) UObject::GObjObjects()->Data[ 84507 ];

	ADunDefGRI_KillEnemiesTimeLimit_execCanRespawnPlayer_Parms CanRespawnPlayer_Parms;
	CanRespawnPlayer_Parms.thePlayerController = thePlayerController;

	this->ProcessEvent ( pFnCanRespawnPlayer, &CanRespawnPlayer_Parms, NULL );

	return CanRespawnPlayer_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.DrawMyHUD
// [0x00020102] 
// Parameters infos:
// class ADunDefHUD*              H                              ( CPF_Parm )

void ADunDefGRI_KillEnemiesTimeLimit::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 84503 ];

	ADunDefGRI_KillEnemiesTimeLimit_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.ReceivedGameClass
// [0x00020102] 
// Parameters infos:

void ADunDefGRI_KillEnemiesTimeLimit::ReceivedGameClass ( )
{
	static UFunction* pFnReceivedGameClass = NULL;

	if ( ! pFnReceivedGameClass )
		pFnReceivedGameClass = (UFunction*) UObject::GObjObjects()->Data[ 84502 ];

	ADunDefGRI_KillEnemiesTimeLimit_execReceivedGameClass_Parms ReceivedGameClass_Parms;

	this->ProcessEvent ( pFnReceivedGameClass, &ReceivedGameClass_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.SetInCombatPhase
// [0x00020102] 
// Parameters infos:
// unsigned long                  inCombatPhase                  ( CPF_Parm )

void ADunDefGRI_KillEnemiesTimeLimit::SetInCombatPhase ( unsigned long inCombatPhase )
{
	static UFunction* pFnSetInCombatPhase = NULL;

	if ( ! pFnSetInCombatPhase )
		pFnSetInCombatPhase = (UFunction*) UObject::GObjObjects()->Data[ 84492 ];

	ADunDefGRI_KillEnemiesTimeLimit_execSetInCombatPhase_Parms SetInCombatPhase_Parms;
	SetInCombatPhase_Parms.inCombatPhase = inCombatPhase;

	this->ProcessEvent ( pFnSetInCombatPhase, &SetInCombatPhase_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefGRI_KillEnemiesTimeLimit::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84489 ];

	ADunDefGRI_KillEnemiesTimeLimit_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefGRI_KillEnemiesTimeLimit::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 84487 ];

	ADunDefGRI_KillEnemiesTimeLimit_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDefMapInfo_KillEnemiesTimeLimit.GetTimeLimit
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            waveNumber                     ( CPF_Parm )

float UDunDefMapInfo_KillEnemiesTimeLimit::GetTimeLimit ( int waveNumber )
{
	static UFunction* pFnGetTimeLimit = NULL;

	if ( ! pFnGetTimeLimit )
		pFnGetTimeLimit = (UFunction*) UObject::GObjObjects()->Data[ 84500 ];

	UDunDefMapInfo_KillEnemiesTimeLimit_execGetTimeLimit_Parms GetTimeLimit_Parms;
	GetTimeLimit_Parms.waveNumber = waveNumber;

	this->ProcessEvent ( pFnGetTimeLimit, &GetTimeLimit_Parms, NULL );

	return GetTimeLimit_Parms.ReturnValue;
};

// Function DunDefSpecial.UI_GlobalHUDUberMF.GetPlayerList
// [0x00420102] 
// Parameters infos:
// struct FString                 pList                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 sList                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UUI_GlobalHUDUberMF::GetPlayerList ( struct FString* pList, struct FString* sList )
{
	static UFunction* pFnGetPlayerList = NULL;

	if ( ! pFnGetPlayerList )
		pFnGetPlayerList = (UFunction*) UObject::GObjObjects()->Data[ 84535 ];

	UUI_GlobalHUDUberMF_execGetPlayerList_Parms GetPlayerList_Parms;

	this->ProcessEvent ( pFnGetPlayerList, &GetPlayerList_Parms, NULL );

	if ( pList )
		memcpy ( pList, &GetPlayerList_Parms.pList, 0xC );

	if ( sList )
		memcpy ( sList, &GetPlayerList_Parms.sList, 0xC );
};

// Function DunDefSpecial.UI_GlobalHUDUberMF.GetColorString
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FColor                  aColor                         ( CPF_Parm )

struct FString UUI_GlobalHUDUberMF::GetColorString ( struct FColor aColor )
{
	static UFunction* pFnGetColorString = NULL;

	if ( ! pFnGetColorString )
		pFnGetColorString = (UFunction*) UObject::GObjObjects()->Data[ 84532 ];

	UUI_GlobalHUDUberMF_execGetColorString_Parms GetColorString_Parms;
	memcpy ( &GetColorString_Parms.aColor, &aColor, 0x4 );

	this->ProcessEvent ( pFnGetColorString, &GetColorString_Parms, NULL );

	return GetColorString_Parms.ReturnValue;
};

// Function DunDefSpecial.UI_GlobalHUDUberMF.UpdateScorePanel
// [0x00020102] 
// Parameters infos:

void UUI_GlobalHUDUberMF::UpdateScorePanel ( )
{
	static UFunction* pFnUpdateScorePanel = NULL;

	if ( ! pFnUpdateScorePanel )
		pFnUpdateScorePanel = (UFunction*) UObject::GObjObjects()->Data[ 84529 ];

	UUI_GlobalHUDUberMF_execUpdateScorePanel_Parms UpdateScorePanel_Parms;

	this->ProcessEvent ( pFnUpdateScorePanel, &UpdateScorePanel_Parms, NULL );
};

// Function DunDefSpecial.UI_GlobalHUDUberMF.Update
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UUI_GlobalHUDUberMF::eventUpdate ( float DeltaTime )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 84525 ];

	UUI_GlobalHUDUberMF_eventUpdate_Parms Update_Parms;
	Update_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefGRI_KillEnemiesTimeLimit_Uber::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 84576 ];

	ADunDefGRI_KillEnemiesTimeLimit_Uber_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.ReadToShowStats
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefGRI_KillEnemiesTimeLimit_Uber::ReadToShowStats ( )
{
	static UFunction* pFnReadToShowStats = NULL;

	if ( ! pFnReadToShowStats )
		pFnReadToShowStats = (UFunction*) UObject::GObjObjects()->Data[ 84574 ];

	ADunDefGRI_KillEnemiesTimeLimit_Uber_execReadToShowStats_Parms ReadToShowStats_Parms;

	this->ProcessEvent ( pFnReadToShowStats, &ReadToShowStats_Parms, NULL );

	return ReadToShowStats_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetGameOverLabelColor
// [0x00020102] 
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FColor ADunDefGRI_KillEnemiesTimeLimit_Uber::GetGameOverLabelColor ( )
{
	static UFunction* pFnGetGameOverLabelColor = NULL;

	if ( ! pFnGetGameOverLabelColor )
		pFnGetGameOverLabelColor = (UFunction*) UObject::GObjObjects()->Data[ 84572 ];

	ADunDefGRI_KillEnemiesTimeLimit_Uber_execGetGameOverLabelColor_Parms GetGameOverLabelColor_Parms;

	this->ProcessEvent ( pFnGetGameOverLabelColor, &GetGameOverLabelColor_Parms, NULL );

	return GetGameOverLabelColor_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetVictoryLabelColor
// [0x00020102] 
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FColor ADunDefGRI_KillEnemiesTimeLimit_Uber::GetVictoryLabelColor ( )
{
	static UFunction* pFnGetVictoryLabelColor = NULL;

	if ( ! pFnGetVictoryLabelColor )
		pFnGetVictoryLabelColor = (UFunction*) UObject::GObjObjects()->Data[ 84570 ];

	ADunDefGRI_KillEnemiesTimeLimit_Uber_execGetVictoryLabelColor_Parms GetVictoryLabelColor_Parms;

	this->ProcessEvent ( pFnGetVictoryLabelColor, &GetVictoryLabelColor_Parms, NULL );

	return GetVictoryLabelColor_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetGameOverLabelString
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class APlayerReplicationInfo*  myPlayer                       ( CPF_Parm )

struct FString ADunDefGRI_KillEnemiesTimeLimit_Uber::GetGameOverLabelString ( class APlayerReplicationInfo* myPlayer )
{
	static UFunction* pFnGetGameOverLabelString = NULL;

	if ( ! pFnGetGameOverLabelString )
		pFnGetGameOverLabelString = (UFunction*) UObject::GObjObjects()->Data[ 84567 ];

	ADunDefGRI_KillEnemiesTimeLimit_Uber_execGetGameOverLabelString_Parms GetGameOverLabelString_Parms;
	GetGameOverLabelString_Parms.myPlayer = myPlayer;

	this->ProcessEvent ( pFnGetGameOverLabelString, &GetGameOverLabelString_Parms, NULL );

	return GetGameOverLabelString_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetVictoryLabelString
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class APlayerReplicationInfo*  myPlayer                       ( CPF_Parm )

struct FString ADunDefGRI_KillEnemiesTimeLimit_Uber::GetVictoryLabelString ( class APlayerReplicationInfo* myPlayer )
{
	static UFunction* pFnGetVictoryLabelString = NULL;

	if ( ! pFnGetVictoryLabelString )
		pFnGetVictoryLabelString = (UFunction*) UObject::GObjObjects()->Data[ 84564 ];

	ADunDefGRI_KillEnemiesTimeLimit_Uber_execGetVictoryLabelString_Parms GetVictoryLabelString_Parms;
	GetVictoryLabelString_Parms.myPlayer = myPlayer;

	this->ProcessEvent ( pFnGetVictoryLabelString, &GetVictoryLabelString_Parms, NULL );

	return GetVictoryLabelString_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.OverrideEndGameLabel
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefGRI_KillEnemiesTimeLimit_Uber::OverrideEndGameLabel ( )
{
	static UFunction* pFnOverrideEndGameLabel = NULL;

	if ( ! pFnOverrideEndGameLabel )
		pFnOverrideEndGameLabel = (UFunction*) UObject::GObjObjects()->Data[ 84562 ];

	ADunDefGRI_KillEnemiesTimeLimit_Uber_execOverrideEndGameLabel_Parms OverrideEndGameLabel_Parms;

	this->ProcessEvent ( pFnOverrideEndGameLabel, &OverrideEndGameLabel_Parms, NULL );

	return OverrideEndGameLabel_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetMVP
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayerReplicationInfo* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADunDefPlayerReplicationInfo* ADunDefGRI_KillEnemiesTimeLimit_Uber::GetMVP ( )
{
	static UFunction* pFnGetMVP = NULL;

	if ( ! pFnGetMVP )
		pFnGetMVP = (UFunction*) UObject::GObjObjects()->Data[ 84557 ];

	ADunDefGRI_KillEnemiesTimeLimit_Uber_execGetMVP_Parms GetMVP_Parms;

	this->ProcessEvent ( pFnGetMVP, &GetMVP_Parms, NULL );

	return GetMVP_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.DoLevelVictory
// [0x00020102] 
// Parameters infos:

void ADunDefGRI_KillEnemiesTimeLimit_Uber::DoLevelVictory ( )
{
	static UFunction* pFnDoLevelVictory = NULL;

	if ( ! pFnDoLevelVictory )
		pFnDoLevelVictory = (UFunction*) UObject::GObjObjects()->Data[ 84555 ];

	ADunDefGRI_KillEnemiesTimeLimit_Uber_execDoLevelVictory_Parms DoLevelVictory_Parms;

	this->ProcessEvent ( pFnDoLevelVictory, &DoLevelVictory_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_OgreAlly.ReceivedGameClass
// [0x00020102] 
// Parameters infos:

void ADunDefGRI_OgreAlly::ReceivedGameClass ( )
{
	static UFunction* pFnReceivedGameClass = NULL;

	if ( ! pFnReceivedGameClass )
		pFnReceivedGameClass = (UFunction*) UObject::GObjObjects()->Data[ 84584 ];

	ADunDefGRI_OgreAlly_execReceivedGameClass_Parms ReceivedGameClass_Parms;

	this->ProcessEvent ( pFnReceivedGameClass, &ReceivedGameClass_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_OgreAlly.SetInCombatPhase
// [0x00020102] 
// Parameters infos:
// unsigned long                  inCombatPhase                  ( CPF_Parm )

void ADunDefGRI_OgreAlly::SetInCombatPhase ( unsigned long inCombatPhase )
{
	static UFunction* pFnSetInCombatPhase = NULL;

	if ( ! pFnSetInCombatPhase )
		pFnSetInCombatPhase = (UFunction*) UObject::GObjObjects()->Data[ 84582 ];

	ADunDefGRI_OgreAlly_execSetInCombatPhase_Parms SetInCombatPhase_Parms;
	SetInCombatPhase_Parms.inCombatPhase = inCombatPhase;

	this->ProcessEvent ( pFnSetInCombatPhase, &SetInCombatPhase_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_OgreAlly.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefGRI_OgreAlly::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84581 ];

	ADunDefGRI_OgreAlly_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_UberAssault.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefGRI_UberAssault::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 84589 ];

	ADunDefGRI_UberAssault_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_UberDefense.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefGRI_UberDefense::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 84595 ];

	ADunDefGRI_UberDefense_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_VDay2.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADunDefGRI_VDay2::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84655 ];

	ADunDefGRI_VDay2_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_VDay2.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefGRI_VDay2::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 84653 ];

	ADunDefGRI_VDay2_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_VDay2.DrawMyHUD
// [0x00020102] 
// Parameters infos:
// class ADunDefHUD*              H                              ( CPF_Parm )

void ADunDefGRI_VDay2::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 84649 ];

	ADunDefGRI_VDay2_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_VDay2.GetGameOverString
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            GameOverType                   ( CPF_Parm )
// int                            gameOverNumberAppend           ( CPF_Parm )

struct FString ADunDefGRI_VDay2::GetGameOverString ( int GameOverType, int gameOverNumberAppend )
{
	static UFunction* pFnGetGameOverString = NULL;

	if ( ! pFnGetGameOverString )
		pFnGetGameOverString = (UFunction*) UObject::GObjObjects()->Data[ 84645 ];

	ADunDefGRI_VDay2_execGetGameOverString_Parms GetGameOverString_Parms;
	GetGameOverString_Parms.GameOverType = GameOverType;
	GetGameOverString_Parms.gameOverNumberAppend = gameOverNumberAppend;

	this->ProcessEvent ( pFnGetGameOverString, &GetGameOverString_Parms, NULL );

	return GetGameOverString_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefGRI_VDay2.DrawExtraEnemyMinimapIcon
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class ADunDefMiniMap*          MiniMap                        ( CPF_Parm )
// class ADunDefEnemy*            Enemy                          ( CPF_Parm )

void ADunDefGRI_VDay2::DrawExtraEnemyMinimapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap, class ADunDefEnemy* Enemy )
{
	static UFunction* pFnDrawExtraEnemyMinimapIcon = NULL;

	if ( ! pFnDrawExtraEnemyMinimapIcon )
		pFnDrawExtraEnemyMinimapIcon = (UFunction*) UObject::GObjObjects()->Data[ 84629 ];

	ADunDefGRI_VDay2_execDrawExtraEnemyMinimapIcon_Parms DrawExtraEnemyMinimapIcon_Parms;
	DrawExtraEnemyMinimapIcon_Parms.Canvas = Canvas;
	DrawExtraEnemyMinimapIcon_Parms.MiniMap = MiniMap;
	DrawExtraEnemyMinimapIcon_Parms.Enemy = Enemy;

	this->ProcessEvent ( pFnDrawExtraEnemyMinimapIcon, &DrawExtraEnemyMinimapIcon_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_VDay2.PrintPairMatch
// [0x00020102] 
// Parameters infos:
// class ADunDefEnemy*            aPairMatch1                    ( CPF_Parm )
// class ADunDefEnemy*            aPairMatch2                    ( CPF_Parm )

void ADunDefGRI_VDay2::PrintPairMatch ( class ADunDefEnemy* aPairMatch1, class ADunDefEnemy* aPairMatch2 )
{
	static UFunction* pFnPrintPairMatch = NULL;

	if ( ! pFnPrintPairMatch )
		pFnPrintPairMatch = (UFunction*) UObject::GObjObjects()->Data[ 84622 ];

	ADunDefGRI_VDay2_execPrintPairMatch_Parms PrintPairMatch_Parms;
	PrintPairMatch_Parms.aPairMatch1 = aPairMatch1;
	PrintPairMatch_Parms.aPairMatch2 = aPairMatch2;

	this->ProcessEvent ( pFnPrintPairMatch, &PrintPairMatch_Parms, NULL );
};

// Function DunDefSpecial.DunDefGRI_VDay2.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefGRI_VDay2::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 84605 ];

	ADunDefGRI_VDay2_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefHarbingerController_v2.PawnDied
// [0x00020002] 
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )

void ADunDefHarbingerController_v2::PawnDied ( class APawn* inPawn )
{
	static UFunction* pFnPawnDied = NULL;

	if ( ! pFnPawnDied )
		pFnPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 84742 ];

	ADunDefHarbingerController_v2_execPawnDied_Parms PawnDied_Parms;
	PawnDied_Parms.inPawn = inPawn;

	this->ProcessEvent ( pFnPawnDied, &PawnDied_Parms, NULL );
};

// Function DunDefSpecial.DunDefHarbingerController_v2.CheckPlayer
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           aPlayer                        ( CPF_Parm )

void ADunDefHarbingerController_v2::CheckPlayer ( class ADunDefPlayer* aPlayer )
{
	static UFunction* pFnCheckPlayer = NULL;

	if ( ! pFnCheckPlayer )
		pFnCheckPlayer = (UFunction*) UObject::GObjObjects()->Data[ 84738 ];

	ADunDefHarbingerController_v2_execCheckPlayer_Parms CheckPlayer_Parms;
	CheckPlayer_Parms.aPlayer = aPlayer;

	this->ProcessEvent ( pFnCheckPlayer, &CheckPlayer_Parms, NULL );
};

// Function DunDefSpecial.DunDefHarbingerController_v2.CheckForNearbyPlayers
// [0x00020002] 
// Parameters infos:

void ADunDefHarbingerController_v2::CheckForNearbyPlayers ( )
{
	static UFunction* pFnCheckForNearbyPlayers = NULL;

	if ( ! pFnCheckForNearbyPlayers )
		pFnCheckForNearbyPlayers = (UFunction*) UObject::GObjObjects()->Data[ 84736 ];

	ADunDefHarbingerController_v2_execCheckForNearbyPlayers_Parms CheckForNearbyPlayers_Parms;

	this->ProcessEvent ( pFnCheckForNearbyPlayers, &CheckForNearbyPlayers_Parms, NULL );
};

// Function DunDefSpecial.DunDefHarbingerController_v2.ObstructionJump
// [0x00020000] 
// Parameters infos:
// struct FVector                 jumpForwardDir                 ( CPF_Parm )
// struct FVector                 jumpSideDir                    ( CPF_Parm )

void ADunDefHarbingerController_v2::ObstructionJump ( struct FVector jumpForwardDir, struct FVector jumpSideDir )
{
	static UFunction* pFnObstructionJump = NULL;

	if ( ! pFnObstructionJump )
		pFnObstructionJump = (UFunction*) UObject::GObjObjects()->Data[ 84733 ];

	ADunDefHarbingerController_v2_execObstructionJump_Parms ObstructionJump_Parms;
	memcpy ( &ObstructionJump_Parms.jumpForwardDir, &jumpForwardDir, 0xC );
	memcpy ( &ObstructionJump_Parms.jumpSideDir, &jumpSideDir, 0xC );

	this->ProcessEvent ( pFnObstructionJump, &ObstructionJump_Parms, NULL );
};

// Function DunDefSpecial.DunDefHarbingerController_v2.NotifyTakeHitEX
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void ADunDefHarbingerController_v2::NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser )
{
	static UFunction* pFnNotifyTakeHitEX = NULL;

	if ( ! pFnNotifyTakeHitEX )
		pFnNotifyTakeHitEX = (UFunction*) UObject::GObjObjects()->Data[ 84719 ];

	ADunDefHarbingerController_v2_execNotifyTakeHitEX_Parms NotifyTakeHitEX_Parms;
	NotifyTakeHitEX_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHitEX_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHitEX_Parms.Damage = Damage;
	NotifyTakeHitEX_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHitEX_Parms.Momentum, &Momentum, 0xC );
	NotifyTakeHitEX_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnNotifyTakeHitEX, &NotifyTakeHitEX_Parms, NULL );
};

// Function DunDefSpecial.DunDefHarbingerController_v2.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefHarbingerController_v2::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84718 ];

	ADunDefHarbingerController_v2_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefHarbingerController_v2.FireProjectiles
// [0x00020000] 
// Parameters infos:
// struct FName                   socketToUse                    ( CPF_Parm )

void ADunDefHarbingerController_v2::FireProjectiles ( struct FName socketToUse )
{
	static UFunction* pFnFireProjectiles = NULL;

	if ( ! pFnFireProjectiles )
		pFnFireProjectiles = (UFunction*) UObject::GObjObjects()->Data[ 84716 ];

	ADunDefHarbingerController_v2_execFireProjectiles_Parms FireProjectiles_Parms;
	memcpy ( &FireProjectiles_Parms.socketToUse, &socketToUse, 0x8 );

	this->ProcessEvent ( pFnFireProjectiles, &FireProjectiles_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableSpawner.AdjustDamage
// [0x00424002] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// int                            DamageAmount                   ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )

void ADunDefPickupableSpawner::AdjustDamage ( class UClass* DamageType, class AController* InstigatedBy, struct FVector HitLocation, struct FTraceHitInfo HitInfo, int* DamageAmount, struct FVector* Momentum )
{
	static UFunction* pFnAdjustDamage = NULL;

	if ( ! pFnAdjustDamage )
		pFnAdjustDamage = (UFunction*) UObject::GObjObjects()->Data[ 85075 ];

	ADunDefPickupableSpawner_execAdjustDamage_Parms AdjustDamage_Parms;
	AdjustDamage_Parms.DamageType = DamageType;
	AdjustDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &AdjustDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &AdjustDamage_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnAdjustDamage, &AdjustDamage_Parms, NULL );

	if ( DamageAmount )
		*DamageAmount = AdjustDamage_Parms.DamageAmount;

	if ( Momentum )
		memcpy ( Momentum, &AdjustDamage_Parms.Momentum, 0xC );
};

// Function DunDefSpecial.DunDefPickupableSpawner.OnlyDrawHUDForOwner
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPickupableSpawner::OnlyDrawHUDForOwner ( )
{
	static UFunction* pFnOnlyDrawHUDForOwner = NULL;

	if ( ! pFnOnlyDrawHUDForOwner )
		pFnOnlyDrawHUDForOwner = (UFunction*) UObject::GObjObjects()->Data[ 85073 ];

	ADunDefPickupableSpawner_execOnlyDrawHUDForOwner_Parms OnlyDrawHUDForOwner_Parms;

	this->ProcessEvent ( pFnOnlyDrawHUDForOwner, &OnlyDrawHUDForOwner_Parms, NULL );

	return OnlyDrawHUDForOwner_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableSpawner.DrawMyHUD
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefHUD*              H                              ( CPF_Parm )

bool ADunDefPickupableSpawner::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 85061 ];

	ADunDefPickupableSpawner_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );

	return DrawMyHUD_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableSpawner.DrawToolTip
// [0x00824102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// int                            PosX                           ( CPF_Parm )
// int                            PosY                           ( CPF_Parm )
// class ULocalPlayer*            ForPlayer                      ( CPF_OptionalParm | CPF_Parm )

void ADunDefPickupableSpawner::DrawToolTip ( class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer )
{
	static UFunction* pFnDrawToolTip = NULL;

	if ( ! pFnDrawToolTip )
		pFnDrawToolTip = (UFunction*) UObject::GObjObjects()->Data[ 85053 ];

	ADunDefPickupableSpawner_execDrawToolTip_Parms DrawToolTip_Parms;
	DrawToolTip_Parms.C = C;
	DrawToolTip_Parms.PosX = PosX;
	DrawToolTip_Parms.PosY = PosY;
	DrawToolTip_Parms.ForPlayer = ForPlayer;

	this->ProcessEvent ( pFnDrawToolTip, &DrawToolTip_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableSpawner.ChangedGamePhases
// [0x00020102] 
// Parameters infos:
// unsigned long                  IsCombatPhase                  ( CPF_Parm )

void ADunDefPickupableSpawner::ChangedGamePhases ( unsigned long IsCombatPhase )
{
	static UFunction* pFnChangedGamePhases = NULL;

	if ( ! pFnChangedGamePhases )
		pFnChangedGamePhases = (UFunction*) UObject::GObjObjects()->Data[ 85051 ];

	ADunDefPickupableSpawner_execChangedGamePhases_Parms ChangedGamePhases_Parms;
	ChangedGamePhases_Parms.IsCombatPhase = IsCombatPhase;

	this->ProcessEvent ( pFnChangedGamePhases, &ChangedGamePhases_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableSpawner.NotifyPickUp
// [0x00020002] 
// Parameters infos:
// class ADunDefPickupableItem*   pickedupItem                   ( CPF_Parm )
// class ADunDefPlayer*           playerPickUp                   ( CPF_Parm )

void ADunDefPickupableSpawner::NotifyPickUp ( class ADunDefPickupableItem* pickedupItem, class ADunDefPlayer* playerPickUp )
{
	static UFunction* pFnNotifyPickUp = NULL;

	if ( ! pFnNotifyPickUp )
		pFnNotifyPickUp = (UFunction*) UObject::GObjObjects()->Data[ 85047 ];

	ADunDefPickupableSpawner_execNotifyPickUp_Parms NotifyPickUp_Parms;
	NotifyPickUp_Parms.pickedupItem = pickedupItem;
	NotifyPickUp_Parms.playerPickUp = playerPickUp;

	this->ProcessEvent ( pFnNotifyPickUp, &NotifyPickUp_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableSpawner.NotifyDestroyed
// [0x00020002] 
// Parameters infos:
// class ADunDefPickupableItem*   droppedItem                    ( CPF_Parm )

void ADunDefPickupableSpawner::NotifyDestroyed ( class ADunDefPickupableItem* droppedItem )
{
	static UFunction* pFnNotifyDestroyed = NULL;

	if ( ! pFnNotifyDestroyed )
		pFnNotifyDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 85044 ];

	ADunDefPickupableSpawner_execNotifyDestroyed_Parms NotifyDestroyed_Parms;
	NotifyDestroyed_Parms.droppedItem = droppedItem;

	this->ProcessEvent ( pFnNotifyDestroyed, &NotifyDestroyed_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableSpawner.NotifyDrop
// [0x00020002] 
// Parameters infos:
// class ADunDefPickupableItem*   droppedItem                    ( CPF_Parm )

void ADunDefPickupableSpawner::NotifyDrop ( class ADunDefPickupableItem* droppedItem )
{
	static UFunction* pFnNotifyDrop = NULL;

	if ( ! pFnNotifyDrop )
		pFnNotifyDrop = (UFunction*) UObject::GObjObjects()->Data[ 85041 ];

	ADunDefPickupableSpawner_execNotifyDrop_Parms NotifyDrop_Parms;
	NotifyDrop_Parms.droppedItem = droppedItem;

	this->ProcessEvent ( pFnNotifyDrop, &NotifyDrop_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableSpawner.GetSpawnLocandRot
// [0x00420002] 
// Parameters infos:
// struct FVector                 sLoc                           ( CPF_Parm | CPF_OutParm )
// struct FRotator                sRot                           ( CPF_Parm | CPF_OutParm )

void ADunDefPickupableSpawner::GetSpawnLocandRot ( struct FVector* sLoc, struct FRotator* sRot )
{
	static UFunction* pFnGetSpawnLocandRot = NULL;

	if ( ! pFnGetSpawnLocandRot )
		pFnGetSpawnLocandRot = (UFunction*) UObject::GObjObjects()->Data[ 85038 ];

	ADunDefPickupableSpawner_execGetSpawnLocandRot_Parms GetSpawnLocandRot_Parms;

	this->ProcessEvent ( pFnGetSpawnLocandRot, &GetSpawnLocandRot_Parms, NULL );

	if ( sLoc )
		memcpy ( sLoc, &GetSpawnLocandRot_Parms.sLoc, 0xC );

	if ( sRot )
		memcpy ( sRot, &GetSpawnLocandRot_Parms.sRot, 0xC );
};

// Function DunDefSpecial.DunDefPickupableSpawner.ActivateEffects
// [0x00820102] 
// Parameters infos:
// unsigned long                  bTurnOn                        ( CPF_Parm )

void ADunDefPickupableSpawner::ActivateEffects ( unsigned long bTurnOn )
{
	static UFunction* pFnActivateEffects = NULL;

	if ( ! pFnActivateEffects )
		pFnActivateEffects = (UFunction*) UObject::GObjObjects()->Data[ 85034 ];

	ADunDefPickupableSpawner_execActivateEffects_Parms ActivateEffects_Parms;
	ActivateEffects_Parms.bTurnOn = bTurnOn;

	this->ProcessEvent ( pFnActivateEffects, &ActivateEffects_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableSpawner.SpawnPickUpItem
// [0x00824002] 
// Parameters infos:
// unsigned long                  bForceSpawn                    ( CPF_OptionalParm | CPF_Parm )

void ADunDefPickupableSpawner::SpawnPickUpItem ( unsigned long bForceSpawn )
{
	static UFunction* pFnSpawnPickUpItem = NULL;

	if ( ! pFnSpawnPickUpItem )
		pFnSpawnPickUpItem = (UFunction*) UObject::GObjObjects()->Data[ 85028 ];

	ADunDefPickupableSpawner_execSpawnPickUpItem_Parms SpawnPickUpItem_Parms;
	SpawnPickUpItem_Parms.bForceSpawn = bForceSpawn;

	this->ProcessEvent ( pFnSpawnPickUpItem, &SpawnPickUpItem_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableSpawner.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPickupableSpawner::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 85027 ];

	ADunDefPickupableSpawner_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableSpawner.AllowTowerAtPoint
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// class ADunDefTower*            towerArch                      ( CPF_Parm )
// struct FVector                 Point                          ( CPF_Parm )

bool ADunDefPickupableSpawner::AllowTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point )
{
	static UFunction* pFnAllowTowerAtPoint = NULL;

	if ( ! pFnAllowTowerAtPoint )
		pFnAllowTowerAtPoint = (UFunction*) UObject::GObjObjects()->Data[ 85022 ];

	ADunDefPickupableSpawner_execAllowTowerAtPoint_Parms AllowTowerAtPoint_Parms;
	AllowTowerAtPoint_Parms.PC = PC;
	AllowTowerAtPoint_Parms.towerArch = towerArch;
	memcpy ( &AllowTowerAtPoint_Parms.Point, &Point, 0xC );

	this->ProcessEvent ( pFnAllowTowerAtPoint, &AllowTowerAtPoint_Parms, NULL );

	return AllowTowerAtPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableSpawner.CheckAllowance
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPickupableSpawner::CheckAllowance ( )
{
	static UFunction* pFnCheckAllowance = NULL;

	if ( ! pFnCheckAllowance )
		pFnCheckAllowance = (UFunction*) UObject::GObjObjects()->Data[ 85020 ];

	ADunDefPickupableSpawner_execCheckAllowance_Parms CheckAllowance_Parms;

	this->ProcessEvent ( pFnCheckAllowance, &CheckAllowance_Parms, NULL );

	return CheckAllowance_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableSpawner.PreventTowerAtPoint
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// class ADunDefTower*            towerArch                      ( CPF_Parm )
// struct FVector                 Point                          ( CPF_Parm )
// float                          towerRadius                    ( CPF_Parm )

bool ADunDefPickupableSpawner::PreventTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point, float towerRadius )
{
	static UFunction* pFnPreventTowerAtPoint = NULL;

	if ( ! pFnPreventTowerAtPoint )
		pFnPreventTowerAtPoint = (UFunction*) UObject::GObjObjects()->Data[ 85014 ];

	ADunDefPickupableSpawner_execPreventTowerAtPoint_Parms PreventTowerAtPoint_Parms;
	PreventTowerAtPoint_Parms.PC = PC;
	PreventTowerAtPoint_Parms.towerArch = towerArch;
	memcpy ( &PreventTowerAtPoint_Parms.Point, &Point, 0xC );
	PreventTowerAtPoint_Parms.towerRadius = towerRadius;

	this->ProcessEvent ( pFnPreventTowerAtPoint, &PreventTowerAtPoint_Parms, NULL );

	return PreventTowerAtPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableSpawner.DrawMiniMapIcon
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class ADunDefMiniMap*          MiniMap                        ( CPF_Parm )

void ADunDefPickupableSpawner::DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap )
{
	static UFunction* pFnDrawMiniMapIcon = NULL;

	if ( ! pFnDrawMiniMapIcon )
		pFnDrawMiniMapIcon = (UFunction*) UObject::GObjObjects()->Data[ 85009 ];

	ADunDefPickupableSpawner_execDrawMiniMapIcon_Parms DrawMiniMapIcon_Parms;
	DrawMiniMapIcon_Parms.Canvas = Canvas;
	DrawMiniMapIcon_Parms.MiniMap = MiniMap;

	this->ProcessEvent ( pFnDrawMiniMapIcon, &DrawMiniMapIcon_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableSpawner.Client_Activate
// [0x00024100] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// int                            activationType                 ( CPF_OptionalParm | CPF_Parm )

void ADunDefPickupableSpawner::Client_Activate ( class ADunDefPlayerController* PC, int activationType )
{
	static UFunction* pFnClient_Activate = NULL;

	if ( ! pFnClient_Activate )
		pFnClient_Activate = (UFunction*) UObject::GObjObjects()->Data[ 85006 ];

	ADunDefPickupableSpawner_execClient_Activate_Parms Client_Activate_Parms;
	Client_Activate_Parms.PC = PC;
	Client_Activate_Parms.activationType = activationType;

	this->ProcessEvent ( pFnClient_Activate, &Client_Activate_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableSpawner.GetActivationOffset
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPickupableSpawner::GetActivationOffset ( )
{
	static UFunction* pFnGetActivationOffset = NULL;

	if ( ! pFnGetActivationOffset )
		pFnGetActivationOffset = (UFunction*) UObject::GObjObjects()->Data[ 85004 ];

	ADunDefPickupableSpawner_execGetActivationOffset_Parms GetActivationOffset_Parms;

	this->ProcessEvent ( pFnGetActivationOffset, &GetActivationOffset_Parms, NULL );

	return GetActivationOffset_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableSpawner.GetActivationWeighting
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPickupableSpawner::GetActivationWeighting ( )
{
	static UFunction* pFnGetActivationWeighting = NULL;

	if ( ! pFnGetActivationWeighting )
		pFnGetActivationWeighting = (UFunction*) UObject::GObjObjects()->Data[ 85002 ];

	ADunDefPickupableSpawner_execGetActivationWeighting_Parms GetActivationWeighting_Parms;

	this->ProcessEvent ( pFnGetActivationWeighting, &GetActivationWeighting_Parms, NULL );

	return GetActivationWeighting_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableSpawner.Server_Activate
// [0x00024002] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// unsigned long                  forceActivation                ( CPF_OptionalParm | CPF_Parm )
// int                            activationType                 ( CPF_OptionalParm | CPF_Parm )

void ADunDefPickupableSpawner::Server_Activate ( class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType )
{
	static UFunction* pFnServer_Activate = NULL;

	if ( ! pFnServer_Activate )
		pFnServer_Activate = (UFunction*) UObject::GObjObjects()->Data[ 84997 ];

	ADunDefPickupableSpawner_execServer_Activate_Parms Server_Activate_Parms;
	Server_Activate_Parms.PC = PC;
	Server_Activate_Parms.forceActivation = forceActivation;
	Server_Activate_Parms.activationType = activationType;

	this->ProcessEvent ( pFnServer_Activate, &Server_Activate_Parms, NULL );
};

// Function DunDefSpecial.DunDefPickupableSpawner.AllowActivation
// [0x00024102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// int                            activationType                 ( CPF_OptionalParm | CPF_Parm )

int ADunDefPickupableSpawner::AllowActivation ( class ADunDefPlayerController* PC, int activationType )
{
	static UFunction* pFnAllowActivation = NULL;

	if ( ! pFnAllowActivation )
		pFnAllowActivation = (UFunction*) UObject::GObjObjects()->Data[ 84993 ];

	ADunDefPickupableSpawner_execAllowActivation_Parms AllowActivation_Parms;
	AllowActivation_Parms.PC = PC;
	AllowActivation_Parms.activationType = activationType;

	this->ProcessEvent ( pFnAllowActivation, &AllowActivation_Parms, NULL );

	return AllowActivation_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPickupableSpawner.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefPickupableSpawner::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 84991 ];

	ADunDefPickupableSpawner_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SetOwnerNoSee
// [0x00024102] 
// Parameters infos:
// unsigned long                  ownerNoSee                     ( CPF_Parm )
// unsigned long                  ownerNoSeeWeapon               ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayer_DualMelee::SetOwnerNoSee ( unsigned long ownerNoSee, unsigned long ownerNoSeeWeapon )
{
	static UFunction* pFnSetOwnerNoSee = NULL;

	if ( ! pFnSetOwnerNoSee )
		pFnSetOwnerNoSee = (UFunction*) UObject::GObjObjects()->Data[ 85245 ];

	ADunDefPlayer_DualMelee_execSetOwnerNoSee_Parms SetOwnerNoSee_Parms;
	SetOwnerNoSee_Parms.ownerNoSee = ownerNoSee;
	SetOwnerNoSee_Parms.ownerNoSeeWeapon = ownerNoSeeWeapon;

	this->ProcessEvent ( pFnSetOwnerNoSee, &SetOwnerNoSee_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AutoActivateSecondaryWeapon
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayer_DualMelee::AutoActivateSecondaryWeapon ( )
{
	static UFunction* pFnAutoActivateSecondaryWeapon = NULL;

	if ( ! pFnAutoActivateSecondaryWeapon )
		pFnAutoActivateSecondaryWeapon = (UFunction*) UObject::GObjObjects()->Data[ 85243 ];

	ADunDefPlayer_DualMelee_execAutoActivateSecondaryWeapon_Parms AutoActivateSecondaryWeapon_Parms;

	this->ProcessEvent ( pFnAutoActivateSecondaryWeapon, &AutoActivateSecondaryWeapon_Parms, NULL );

	return AutoActivateSecondaryWeapon_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AllowNegativeStatusAffecting
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayer_DualMelee::AllowNegativeStatusAffecting ( )
{
	static UFunction* pFnAllowNegativeStatusAffecting = NULL;

	if ( ! pFnAllowNegativeStatusAffecting )
		pFnAllowNegativeStatusAffecting = (UFunction*) UObject::GObjObjects()->Data[ 85239 ];

	ADunDefPlayer_DualMelee_execAllowNegativeStatusAffecting_Parms AllowNegativeStatusAffecting_Parms;

	this->ProcessEvent ( pFnAllowNegativeStatusAffecting, &AllowNegativeStatusAffecting_Parms, NULL );

	return AllowNegativeStatusAffecting_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.GetAlternateStance
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayerAbility_StanceBase* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerAbility_StanceBase* askingStance                   ( CPF_Parm )

class ADunDefPlayerAbility_StanceBase* ADunDefPlayer_DualMelee::GetAlternateStance ( class ADunDefPlayerAbility_StanceBase* askingStance )
{
	static UFunction* pFnGetAlternateStance = NULL;

	if ( ! pFnGetAlternateStance )
		pFnGetAlternateStance = (UFunction*) UObject::GObjObjects()->Data[ 85236 ];

	ADunDefPlayer_DualMelee_execGetAlternateStance_Parms GetAlternateStance_Parms;
	GetAlternateStance_Parms.askingStance = askingStance;

	this->ProcessEvent ( pFnGetAlternateStance, &GetAlternateStance_Parms, NULL );

	return GetAlternateStance_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SetWeaponSpeedMultiplier
// [0x00020002] 
// Parameters infos:
// float                          newMult                        ( CPF_Parm )

void ADunDefPlayer_DualMelee::SetWeaponSpeedMultiplier ( float newMult )
{
	static UFunction* pFnSetWeaponSpeedMultiplier = NULL;

	if ( ! pFnSetWeaponSpeedMultiplier )
		pFnSetWeaponSpeedMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 85234 ];

	ADunDefPlayer_DualMelee_execSetWeaponSpeedMultiplier_Parms SetWeaponSpeedMultiplier_Parms;
	SetWeaponSpeedMultiplier_Parms.newMult = newMult;

	this->ProcessEvent ( pFnSetWeaponSpeedMultiplier, &SetWeaponSpeedMultiplier_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.GetOverrideSocketName
// [0x00020102] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefWeapon*           theWeapon                      ( CPF_Parm )

struct FName ADunDefPlayer_DualMelee::GetOverrideSocketName ( class ADunDefWeapon* theWeapon )
{
	static UFunction* pFnGetOverrideSocketName = NULL;

	if ( ! pFnGetOverrideSocketName )
		pFnGetOverrideSocketName = (UFunction*) UObject::GObjObjects()->Data[ 85231 ];

	ADunDefPlayer_DualMelee_execGetOverrideSocketName_Parms GetOverrideSocketName_Parms;
	GetOverrideSocketName_Parms.theWeapon = theWeapon;

	this->ProcessEvent ( pFnGetOverrideSocketName, &GetOverrideSocketName_Parms, NULL );

	return GetOverrideSocketName_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.JumpOffPawn
// [0x00020002] 
// Parameters infos:

void ADunDefPlayer_DualMelee::JumpOffPawn ( )
{
	static UFunction* pFnJumpOffPawn = NULL;

	if ( ! pFnJumpOffPawn )
		pFnJumpOffPawn = (UFunction*) UObject::GObjObjects()->Data[ 85228 ];

	ADunDefPlayer_DualMelee_execJumpOffPawn_Parms JumpOffPawn_Parms;

	this->ProcessEvent ( pFnJumpOffPawn, &JumpOffPawn_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.ShouldPlayHurtAnimation
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// int                            Result                         ( CPF_Parm | CPF_OutParm )

bool ADunDefPlayer_DualMelee::ShouldPlayHurtAnimation ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, int* Result )
{
	static UFunction* pFnShouldPlayHurtAnimation = NULL;

	if ( ! pFnShouldPlayHurtAnimation )
		pFnShouldPlayHurtAnimation = (UFunction*) UObject::GObjObjects()->Data[ 85221 ];

	ADunDefPlayer_DualMelee_execShouldPlayHurtAnimation_Parms ShouldPlayHurtAnimation_Parms;
	ShouldPlayHurtAnimation_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &ShouldPlayHurtAnimation_Parms.HitLocation, &HitLocation, 0xC );
	ShouldPlayHurtAnimation_Parms.Damage = Damage;
	ShouldPlayHurtAnimation_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnShouldPlayHurtAnimation, &ShouldPlayHurtAnimation_Parms, NULL );

	if ( Result )
		*Result = ShouldPlayHurtAnimation_Parms.Result;

	return ShouldPlayHurtAnimation_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_ResetOffhandWeaponSwingDamage
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayer_DualMelee::eventAnimNotify_ResetOffhandWeaponSwingDamage ( )
{
	static UFunction* pFnAnimNotify_ResetOffhandWeaponSwingDamage = NULL;

	if ( ! pFnAnimNotify_ResetOffhandWeaponSwingDamage )
		pFnAnimNotify_ResetOffhandWeaponSwingDamage = (UFunction*) UObject::GObjObjects()->Data[ 85220 ];

	ADunDefPlayer_DualMelee_eventAnimNotify_ResetOffhandWeaponSwingDamage_Parms AnimNotify_ResetOffhandWeaponSwingDamage_Parms;

	this->ProcessEvent ( pFnAnimNotify_ResetOffhandWeaponSwingDamage, &AnimNotify_ResetOffhandWeaponSwingDamage_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StopOffhandWeaponSwingDamage
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayer_DualMelee::eventAnimNotify_StopOffhandWeaponSwingDamage ( )
{
	static UFunction* pFnAnimNotify_StopOffhandWeaponSwingDamage = NULL;

	if ( ! pFnAnimNotify_StopOffhandWeaponSwingDamage )
		pFnAnimNotify_StopOffhandWeaponSwingDamage = (UFunction*) UObject::GObjObjects()->Data[ 85216 ];

	ADunDefPlayer_DualMelee_eventAnimNotify_StopOffhandWeaponSwingDamage_Parms AnimNotify_StopOffhandWeaponSwingDamage_Parms;

	this->ProcessEvent ( pFnAnimNotify_StopOffhandWeaponSwingDamage, &AnimNotify_StopOffhandWeaponSwingDamage_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StartOffhandWeaponSwingDamage
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayer_DualMelee::eventAnimNotify_StartOffhandWeaponSwingDamage ( )
{
	static UFunction* pFnAnimNotify_StartOffhandWeaponSwingDamage = NULL;

	if ( ! pFnAnimNotify_StartOffhandWeaponSwingDamage )
		pFnAnimNotify_StartOffhandWeaponSwingDamage = (UFunction*) UObject::GObjObjects()->Data[ 85212 ];

	ADunDefPlayer_DualMelee_eventAnimNotify_StartOffhandWeaponSwingDamage_Parms AnimNotify_StartOffhandWeaponSwingDamage_Parms;

	this->ProcessEvent ( pFnAnimNotify_StartOffhandWeaponSwingDamage, &AnimNotify_StartOffhandWeaponSwingDamage_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_ResetWeaponSwingDamage
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayer_DualMelee::eventAnimNotify_ResetWeaponSwingDamage ( )
{
	static UFunction* pFnAnimNotify_ResetWeaponSwingDamage = NULL;

	if ( ! pFnAnimNotify_ResetWeaponSwingDamage )
		pFnAnimNotify_ResetWeaponSwingDamage = (UFunction*) UObject::GObjObjects()->Data[ 85211 ];

	ADunDefPlayer_DualMelee_eventAnimNotify_ResetWeaponSwingDamage_Parms AnimNotify_ResetWeaponSwingDamage_Parms;

	this->ProcessEvent ( pFnAnimNotify_ResetWeaponSwingDamage, &AnimNotify_ResetWeaponSwingDamage_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StopWeaponSwingDamage
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayer_DualMelee::eventAnimNotify_StopWeaponSwingDamage ( )
{
	static UFunction* pFnAnimNotify_StopWeaponSwingDamage = NULL;

	if ( ! pFnAnimNotify_StopWeaponSwingDamage )
		pFnAnimNotify_StopWeaponSwingDamage = (UFunction*) UObject::GObjObjects()->Data[ 85207 ];

	ADunDefPlayer_DualMelee_eventAnimNotify_StopWeaponSwingDamage_Parms AnimNotify_StopWeaponSwingDamage_Parms;

	this->ProcessEvent ( pFnAnimNotify_StopWeaponSwingDamage, &AnimNotify_StopWeaponSwingDamage_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StartWeaponSwingDamage
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayer_DualMelee::eventAnimNotify_StartWeaponSwingDamage ( )
{
	static UFunction* pFnAnimNotify_StartWeaponSwingDamage = NULL;

	if ( ! pFnAnimNotify_StartWeaponSwingDamage )
		pFnAnimNotify_StartWeaponSwingDamage = (UFunction*) UObject::GObjObjects()->Data[ 85203 ];

	ADunDefPlayer_DualMelee_eventAnimNotify_StartWeaponSwingDamage_Parms AnimNotify_StartWeaponSwingDamage_Parms;

	this->ProcessEvent ( pFnAnimNotify_StartWeaponSwingDamage, &AnimNotify_StartWeaponSwingDamage_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayer_DualMelee::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 85202 ];

	ADunDefPlayer_DualMelee_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AdjustDamage
// [0x00424002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// int                            inDamage                       ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )

void ADunDefPlayer_DualMelee::AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, int* inDamage, struct FVector* Momentum )
{
	static UFunction* pFnAdjustDamage = NULL;

	if ( ! pFnAdjustDamage )
		pFnAdjustDamage = (UFunction*) UObject::GObjObjects()->Data[ 85193 ];

	ADunDefPlayer_DualMelee_execAdjustDamage_Parms AdjustDamage_Parms;
	AdjustDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &AdjustDamage_Parms.HitLocation, &HitLocation, 0xC );
	AdjustDamage_Parms.DamageType = DamageType;
	memcpy ( &AdjustDamage_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnAdjustDamage, &AdjustDamage_Parms, NULL );

	if ( inDamage )
		*inDamage = AdjustDamage_Parms.inDamage;

	if ( Momentum )
		memcpy ( Momentum, &AdjustDamage_Parms.Momentum, 0xC );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.GivePlayerHitInfo
// [0x00420002] 
// Parameters infos:
// class AActor*                  HitActor                       ( CPF_Parm )
// int                            dealtDamage                    ( CPF_Parm )
// unsigned long                  bAllowMomentumOverride         ( CPF_Parm )
// struct FVector                 appliedMomentum                ( CPF_Parm | CPF_OutParm )

void ADunDefPlayer_DualMelee::GivePlayerHitInfo ( class AActor* HitActor, int dealtDamage, unsigned long bAllowMomentumOverride, struct FVector* appliedMomentum )
{
	static UFunction* pFnGivePlayerHitInfo = NULL;

	if ( ! pFnGivePlayerHitInfo )
		pFnGivePlayerHitInfo = (UFunction*) UObject::GObjObjects()->Data[ 85188 ];

	ADunDefPlayer_DualMelee_execGivePlayerHitInfo_Parms GivePlayerHitInfo_Parms;
	GivePlayerHitInfo_Parms.HitActor = HitActor;
	GivePlayerHitInfo_Parms.dealtDamage = dealtDamage;
	GivePlayerHitInfo_Parms.bAllowMomentumOverride = bAllowMomentumOverride;

	this->ProcessEvent ( pFnGivePlayerHitInfo, &GivePlayerHitInfo_Parms, NULL );

	if ( appliedMomentum )
		memcpy ( appliedMomentum, &GivePlayerHitInfo_Parms.appliedMomentum, 0xC );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefPlayer_DualMelee::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 85186 ];

	ADunDefPlayer_DualMelee_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_CurrentAbility_Off
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_DualMelee::AnimNotify_CurrentAbility_Off ( )
{
	static UFunction* pFnAnimNotify_CurrentAbility_Off = NULL;

	if ( ! pFnAnimNotify_CurrentAbility_Off )
		pFnAnimNotify_CurrentAbility_Off = (UFunction*) UObject::GObjObjects()->Data[ 85185 ];

	ADunDefPlayer_DualMelee_execAnimNotify_CurrentAbility_Off_Parms AnimNotify_CurrentAbility_Off_Parms;

	this->ProcessEvent ( pFnAnimNotify_CurrentAbility_Off, &AnimNotify_CurrentAbility_Off_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_CurrentAbility_On
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_DualMelee::AnimNotify_CurrentAbility_On ( )
{
	static UFunction* pFnAnimNotify_CurrentAbility_On = NULL;

	if ( ! pFnAnimNotify_CurrentAbility_On )
		pFnAnimNotify_CurrentAbility_On = (UFunction*) UObject::GObjObjects()->Data[ 85184 ];

	ADunDefPlayer_DualMelee_execAnimNotify_CurrentAbility_On_Parms AnimNotify_CurrentAbility_On_Parms;

	this->ProcessEvent ( pFnAnimNotify_CurrentAbility_On, &AnimNotify_CurrentAbility_On_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.DoStanceBlend
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_DualMelee::DoStanceBlend ( )
{
	static UFunction* pFnDoStanceBlend = NULL;

	if ( ! pFnDoStanceBlend )
		pFnDoStanceBlend = (UFunction*) UObject::GObjObjects()->Data[ 85182 ];

	ADunDefPlayer_DualMelee_execDoStanceBlend_Parms DoStanceBlend_Parms;

	this->ProcessEvent ( pFnDoStanceBlend, &DoStanceBlend_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.DeActivateStance
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayerAbility_StanceBase* oldStance                      ( CPF_Parm )

void ADunDefPlayer_DualMelee::DeActivateStance ( class ADunDefPlayerAbility_StanceBase* oldStance )
{
	static UFunction* pFnDeActivateStance = NULL;

	if ( ! pFnDeActivateStance )
		pFnDeActivateStance = (UFunction*) UObject::GObjObjects()->Data[ 85180 ];

	ADunDefPlayer_DualMelee_execDeActivateStance_Parms DeActivateStance_Parms;
	DeActivateStance_Parms.oldStance = oldStance;

	this->ProcessEvent ( pFnDeActivateStance, &DeActivateStance_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.ActivateStance
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayerAbility_StanceBase* newStance                      ( CPF_Parm )

void ADunDefPlayer_DualMelee::ActivateStance ( class ADunDefPlayerAbility_StanceBase* newStance )
{
	static UFunction* pFnActivateStance = NULL;

	if ( ! pFnActivateStance )
		pFnActivateStance = (UFunction*) UObject::GObjObjects()->Data[ 85178 ];

	ADunDefPlayer_DualMelee_execActivateStance_Parms ActivateStance_Parms;
	ActivateStance_Parms.newStance = newStance;

	this->ProcessEvent ( pFnActivateStance, &ActivateStance_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.GetMeleeSwingInfoOverride
// [0x00C20002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefWeapon_MeleeSword* overrideForWeap                ( CPF_Parm )
// int                            currentMeleeSwingIndex         ( CPF_Parm | CPF_OutParm )
// struct FMeleeSwingInfo         OverrideInfo                   ( CPF_Parm | CPF_OutParm )

bool ADunDefPlayer_DualMelee::GetMeleeSwingInfoOverride ( class ADunDefWeapon_MeleeSword* overrideForWeap, int* currentMeleeSwingIndex, struct FMeleeSwingInfo* OverrideInfo )
{
	static UFunction* pFnGetMeleeSwingInfoOverride = NULL;

	if ( ! pFnGetMeleeSwingInfoOverride )
		pFnGetMeleeSwingInfoOverride = (UFunction*) UObject::GObjObjects()->Data[ 85168 ];

	ADunDefPlayer_DualMelee_execGetMeleeSwingInfoOverride_Parms GetMeleeSwingInfoOverride_Parms;
	GetMeleeSwingInfoOverride_Parms.overrideForWeap = overrideForWeap;

	this->ProcessEvent ( pFnGetMeleeSwingInfoOverride, &GetMeleeSwingInfoOverride_Parms, NULL );

	if ( currentMeleeSwingIndex )
		*currentMeleeSwingIndex = GetMeleeSwingInfoOverride_Parms.currentMeleeSwingIndex;

	if ( OverrideInfo )
		memcpy ( OverrideInfo, &GetMeleeSwingInfoOverride_Parms.OverrideInfo, 0x2C );

	return GetMeleeSwingInfoOverride_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.OverrideMeleeSwingInfo
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefWeapon_MeleeSword* askingWeapon                   ( CPF_Parm )

bool ADunDefPlayer_DualMelee::OverrideMeleeSwingInfo ( class ADunDefWeapon_MeleeSword* askingWeapon )
{
	static UFunction* pFnOverrideMeleeSwingInfo = NULL;

	if ( ! pFnOverrideMeleeSwingInfo )
		pFnOverrideMeleeSwingInfo = (UFunction*) UObject::GObjObjects()->Data[ 85165 ];

	ADunDefPlayer_DualMelee_execOverrideMeleeSwingInfo_Parms OverrideMeleeSwingInfo_Parms;
	OverrideMeleeSwingInfo_Parms.askingWeapon = askingWeapon;

	this->ProcessEvent ( pFnOverrideMeleeSwingInfo, &OverrideMeleeSwingInfo_Parms, NULL );

	return OverrideMeleeSwingInfo_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.CheckAllowMelee
// [0x00824102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefWeapon_MeleeSword* weaponCheck                    ( CPF_Parm )
// unsigned long                  checkAnimDuration              ( CPF_OptionalParm | CPF_Parm )

bool ADunDefPlayer_DualMelee::CheckAllowMelee ( class ADunDefWeapon_MeleeSword* weaponCheck, unsigned long checkAnimDuration )
{
	static UFunction* pFnCheckAllowMelee = NULL;

	if ( ! pFnCheckAllowMelee )
		pFnCheckAllowMelee = (UFunction*) UObject::GObjObjects()->Data[ 85160 ];

	ADunDefPlayer_DualMelee_execCheckAllowMelee_Parms CheckAllowMelee_Parms;
	CheckAllowMelee_Parms.weaponCheck = weaponCheck;
	CheckAllowMelee_Parms.checkAnimDuration = checkAnimDuration;

	this->ProcessEvent ( pFnCheckAllowMelee, &CheckAllowMelee_Parms, NULL );

	return CheckAllowMelee_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.CheckPlayingCustomAnim
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   inAnim                         ( CPF_Parm )
// float                          TimeFromEndToConsiderFinished  ( CPF_OptionalParm | CPF_Parm )

bool ADunDefPlayer_DualMelee::CheckPlayingCustomAnim ( struct FName inAnim, float TimeFromEndToConsiderFinished )
{
	static UFunction* pFnCheckPlayingCustomAnim = NULL;

	if ( ! pFnCheckPlayingCustomAnim )
		pFnCheckPlayingCustomAnim = (UFunction*) UObject::GObjObjects()->Data[ 85154 ];

	ADunDefPlayer_DualMelee_execCheckPlayingCustomAnim_Parms CheckPlayingCustomAnim_Parms;
	memcpy ( &CheckPlayingCustomAnim_Parms.inAnim, &inAnim, 0x8 );
	CheckPlayingCustomAnim_Parms.TimeFromEndToConsiderFinished = TimeFromEndToConsiderFinished;

	this->ProcessEvent ( pFnCheckPlayingCustomAnim, &CheckPlayingCustomAnim_Parms, NULL );

	return CheckPlayingCustomAnim_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.StopFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ADunDefPlayer_DualMelee::StopFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStopFire = NULL;

	if ( ! pFnStopFire )
		pFnStopFire = (UFunction*) UObject::GObjObjects()->Data[ 85151 ];

	ADunDefPlayer_DualMelee_execStopFire_Parms StopFire_Parms;
	StopFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStopFire, &StopFire_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.ServerStopFire
// [0x002200C2] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ADunDefPlayer_DualMelee::ServerStopFire ( unsigned char FireModeNum )
{
	static UFunction* pFnServerStopFire = NULL;

	if ( ! pFnServerStopFire )
		pFnServerStopFire = (UFunction*) UObject::GObjObjects()->Data[ 85149 ];

	ADunDefPlayer_DualMelee_execServerStopFire_Parms ServerStopFire_Parms;
	ServerStopFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnServerStopFire, &ServerStopFire_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SetComboInfo
// [0x00820102] 
// Parameters infos:
// class ADunDefWeapon_MeleeSword* comboWeapon                    ( CPF_Parm )
// unsigned long                  bMainHand                      ( CPF_Parm )

void ADunDefPlayer_DualMelee::SetComboInfo ( class ADunDefWeapon_MeleeSword* comboWeapon, unsigned long bMainHand )
{
	static UFunction* pFnSetComboInfo = NULL;

	if ( ! pFnSetComboInfo )
		pFnSetComboInfo = (UFunction*) UObject::GObjObjects()->Data[ 85145 ];

	ADunDefPlayer_DualMelee_execSetComboInfo_Parms SetComboInfo_Parms;
	SetComboInfo_Parms.comboWeapon = comboWeapon;
	SetComboInfo_Parms.bMainHand = bMainHand;

	this->ProcessEvent ( pFnSetComboInfo, &SetComboInfo_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.DoStanceCheck
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayer_DualMelee::DoStanceCheck ( )
{
	static UFunction* pFnDoStanceCheck = NULL;

	if ( ! pFnDoStanceCheck )
		pFnDoStanceCheck = (UFunction*) UObject::GObjObjects()->Data[ 85141 ];

	ADunDefPlayer_DualMelee_execDoStanceCheck_Parms DoStanceCheck_Parms;

	this->ProcessEvent ( pFnDoStanceCheck, &DoStanceCheck_Parms, NULL );

	return DoStanceCheck_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.StartFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ADunDefPlayer_DualMelee::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 85138 ];

	ADunDefPlayer_DualMelee_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.ServerStartFire
// [0x002200C2] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ADunDefPlayer_DualMelee::ServerStartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnServerStartFire = NULL;

	if ( ! pFnServerStartFire )
		pFnServerStartFire = (UFunction*) UObject::GObjObjects()->Data[ 85136 ];

	ADunDefPlayer_DualMelee_execServerStartFire_Parms ServerStartFire_Parms;
	ServerStartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnServerStartFire, &ServerStartFire_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.GetOffHandSocketName
// [0x00022002] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName ADunDefPlayer_DualMelee::GetOffHandSocketName ( )
{
	static UFunction* pFnGetOffHandSocketName = NULL;

	if ( ! pFnGetOffHandSocketName )
		pFnGetOffHandSocketName = (UFunction*) UObject::GObjObjects()->Data[ 85134 ];

	ADunDefPlayer_DualMelee_execGetOffHandSocketName_Parms GetOffHandSocketName_Parms;

	this->ProcessEvent ( pFnGetOffHandSocketName, &GetOffHandSocketName_Parms, NULL );

	return GetOffHandSocketName_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AllowDualWeapon
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayer_DualMelee::AllowDualWeapon ( )
{
	static UFunction* pFnAllowDualWeapon = NULL;

	if ( ! pFnAllowDualWeapon )
		pFnAllowDualWeapon = (UFunction*) UObject::GObjObjects()->Data[ 85132 ];

	ADunDefPlayer_DualMelee_execAllowDualWeapon_Parms AllowDualWeapon_Parms;

	this->ProcessEvent ( pFnAllowDualWeapon, &AllowDualWeapon_Parms, NULL );

	return AllowDualWeapon_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.CreateContainedInventoryFromTemplate
// [0x00024102] 
// Parameters infos:
// class AInventory*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  InventoryActorTemplate         ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

class AInventory* ADunDefPlayer_DualMelee::CreateContainedInventoryFromTemplate ( class AActor* InventoryActorTemplate, unsigned long bDoNotActivate )
{
	static UFunction* pFnCreateContainedInventoryFromTemplate = NULL;

	if ( ! pFnCreateContainedInventoryFromTemplate )
		pFnCreateContainedInventoryFromTemplate = (UFunction*) UObject::GObjObjects()->Data[ 85127 ];

	ADunDefPlayer_DualMelee_execCreateContainedInventoryFromTemplate_Parms CreateContainedInventoryFromTemplate_Parms;
	CreateContainedInventoryFromTemplate_Parms.InventoryActorTemplate = InventoryActorTemplate;
	CreateContainedInventoryFromTemplate_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnCreateContainedInventoryFromTemplate, &CreateContainedInventoryFromTemplate_Parms, NULL );

	return CreateContainedInventoryFromTemplate_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SetOffHandWeapon
// [0x00020102] 
// Parameters infos:
// class ADunDefWeapon_MeleeSword* newOffHandWeap                 ( CPF_Parm )

void ADunDefPlayer_DualMelee::SetOffHandWeapon ( class ADunDefWeapon_MeleeSword* newOffHandWeap )
{
	static UFunction* pFnSetOffHandWeapon = NULL;

	if ( ! pFnSetOffHandWeapon )
		pFnSetOffHandWeapon = (UFunction*) UObject::GObjObjects()->Data[ 85125 ];

	ADunDefPlayer_DualMelee_execSetOffHandWeapon_Parms SetOffHandWeapon_Parms;
	SetOffHandWeapon_Parms.newOffHandWeap = newOffHandWeap;

	this->ProcessEvent ( pFnSetOffHandWeapon, &SetOffHandWeapon_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SwapOffHandWeaponFor
// [0x00020002] 
// Parameters infos:
// class ADunDefWeapon*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefWeapon*           weaponTemplate                 ( CPF_Parm )
// class UHeroEquipment*          equipmentRef                   ( CPF_Parm )

class ADunDefWeapon* ADunDefPlayer_DualMelee::SwapOffHandWeaponFor ( class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef )
{
	static UFunction* pFnSwapOffHandWeaponFor = NULL;

	if ( ! pFnSwapOffHandWeaponFor )
		pFnSwapOffHandWeaponFor = (UFunction*) UObject::GObjObjects()->Data[ 85120 ];

	ADunDefPlayer_DualMelee_execSwapOffHandWeaponFor_Parms SwapOffHandWeaponFor_Parms;
	SwapOffHandWeaponFor_Parms.weaponTemplate = weaponTemplate;
	SwapOffHandWeaponFor_Parms.equipmentRef = equipmentRef;

	this->ProcessEvent ( pFnSwapOffHandWeaponFor, &SwapOffHandWeaponFor_Parms, NULL );

	return SwapOffHandWeaponFor_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SwapWeaponFor
// [0x00020002] 
// Parameters infos:
// class ADunDefWeapon*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefWeapon*           weaponTemplate                 ( CPF_Parm )
// class UHeroEquipment*          equipmentRef                   ( CPF_Parm )

class ADunDefWeapon* ADunDefPlayer_DualMelee::SwapWeaponFor ( class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef )
{
	static UFunction* pFnSwapWeaponFor = NULL;

	if ( ! pFnSwapWeaponFor )
		pFnSwapWeaponFor = (UFunction*) UObject::GObjObjects()->Data[ 85115 ];

	ADunDefPlayer_DualMelee_execSwapWeaponFor_Parms SwapWeaponFor_Parms;
	SwapWeaponFor_Parms.weaponTemplate = weaponTemplate;
	SwapWeaponFor_Parms.equipmentRef = equipmentRef;

	this->ProcessEvent ( pFnSwapWeaponFor, &SwapWeaponFor_Parms, NULL );

	return SwapWeaponFor_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayer_DualMelee::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 85114 ];

	ADunDefPlayer_DualMelee_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AllowNegativeStatusAffecting
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceBase::AllowNegativeStatusAffecting ( )
{
	static UFunction* pFnAllowNegativeStatusAffecting = NULL;

	if ( ! pFnAllowNegativeStatusAffecting )
		pFnAllowNegativeStatusAffecting = (UFunction*) UObject::GObjObjects()->Data[ 85241 ];

	ADunDefPlayerAbility_StanceBase_execAllowNegativeStatusAffecting_Parms AllowNegativeStatusAffecting_Parms;

	this->ProcessEvent ( pFnAllowNegativeStatusAffecting, &AllowNegativeStatusAffecting_Parms, NULL );

	return AllowNegativeStatusAffecting_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.ResetWeaponDamage
// [0x00020100] 
// Parameters infos:

void ADunDefPlayerAbility_StanceBase::ResetWeaponDamage ( )
{
	static UFunction* pFnResetWeaponDamage = NULL;

	if ( ! pFnResetWeaponDamage )
		pFnResetWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 87174 ];

	ADunDefPlayerAbility_StanceBase_execResetWeaponDamage_Parms ResetWeaponDamage_Parms;

	this->ProcessEvent ( pFnResetWeaponDamage, &ResetWeaponDamage_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StopOffHandWeaponDamage
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceBase::StopOffHandWeaponDamage ( )
{
	static UFunction* pFnStopOffHandWeaponDamage = NULL;

	if ( ! pFnStopOffHandWeaponDamage )
		pFnStopOffHandWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 85218 ];

	ADunDefPlayerAbility_StanceBase_execStopOffHandWeaponDamage_Parms StopOffHandWeaponDamage_Parms;

	this->ProcessEvent ( pFnStopOffHandWeaponDamage, &StopOffHandWeaponDamage_Parms, NULL );

	return StopOffHandWeaponDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StopWeaponDamage
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceBase::StopWeaponDamage ( )
{
	static UFunction* pFnStopWeaponDamage = NULL;

	if ( ! pFnStopWeaponDamage )
		pFnStopWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 85209 ];

	ADunDefPlayerAbility_StanceBase_execStopWeaponDamage_Parms StopWeaponDamage_Parms;

	this->ProcessEvent ( pFnStopWeaponDamage, &StopWeaponDamage_Parms, NULL );

	return StopWeaponDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StartOffHandWeaponDamage
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceBase::StartOffHandWeaponDamage ( )
{
	static UFunction* pFnStartOffHandWeaponDamage = NULL;

	if ( ! pFnStartOffHandWeaponDamage )
		pFnStartOffHandWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 85214 ];

	ADunDefPlayerAbility_StanceBase_execStartOffHandWeaponDamage_Parms StartOffHandWeaponDamage_Parms;

	this->ProcessEvent ( pFnStartOffHandWeaponDamage, &StartOffHandWeaponDamage_Parms, NULL );

	return StartOffHandWeaponDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StartWeaponDamage
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceBase::StartWeaponDamage ( )
{
	static UFunction* pFnStartWeaponDamage = NULL;

	if ( ! pFnStartWeaponDamage )
		pFnStartWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 85205 ];

	ADunDefPlayerAbility_StanceBase_execStartWeaponDamage_Parms StartWeaponDamage_Parms;

	this->ProcessEvent ( pFnStartWeaponDamage, &StartWeaponDamage_Parms, NULL );

	return StartWeaponDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GivePlayerHitInfo
// [0x00420100] 
// Parameters infos:
// class AActor*                  HitActor                       ( CPF_Parm )
// int                            dealtDamage                    ( CPF_Parm )
// unsigned long                  bAllowMomentumOverride         ( CPF_Parm )
// struct FVector                 appliedMomentum                ( CPF_Parm | CPF_OutParm )

void ADunDefPlayerAbility_StanceBase::GivePlayerHitInfo ( class AActor* HitActor, int dealtDamage, unsigned long bAllowMomentumOverride, struct FVector* appliedMomentum )
{
	static UFunction* pFnGivePlayerHitInfo = NULL;

	if ( ! pFnGivePlayerHitInfo )
		pFnGivePlayerHitInfo = (UFunction*) UObject::GObjObjects()->Data[ 87169 ];

	ADunDefPlayerAbility_StanceBase_execGivePlayerHitInfo_Parms GivePlayerHitInfo_Parms;
	GivePlayerHitInfo_Parms.HitActor = HitActor;
	GivePlayerHitInfo_Parms.dealtDamage = dealtDamage;
	GivePlayerHitInfo_Parms.bAllowMomentumOverride = bAllowMomentumOverride;

	this->ProcessEvent ( pFnGivePlayerHitInfo, &GivePlayerHitInfo_Parms, NULL );

	if ( appliedMomentum )
		memcpy ( appliedMomentum, &GivePlayerHitInfo_Parms.appliedMomentum, 0xC );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AnimNotify_CurrentAbility_Off
// [0x00020100] 
// Parameters infos:

void ADunDefPlayerAbility_StanceBase::AnimNotify_CurrentAbility_Off ( )
{
	static UFunction* pFnAnimNotify_CurrentAbility_Off = NULL;

	if ( ! pFnAnimNotify_CurrentAbility_Off )
		pFnAnimNotify_CurrentAbility_Off = (UFunction*) UObject::GObjObjects()->Data[ 87168 ];

	ADunDefPlayerAbility_StanceBase_execAnimNotify_CurrentAbility_Off_Parms AnimNotify_CurrentAbility_Off_Parms;

	this->ProcessEvent ( pFnAnimNotify_CurrentAbility_Off, &AnimNotify_CurrentAbility_Off_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AnimNotify_CurrentAbility_On
// [0x00020100] 
// Parameters infos:

void ADunDefPlayerAbility_StanceBase::AnimNotify_CurrentAbility_On ( )
{
	static UFunction* pFnAnimNotify_CurrentAbility_On = NULL;

	if ( ! pFnAnimNotify_CurrentAbility_On )
		pFnAnimNotify_CurrentAbility_On = (UFunction*) UObject::GObjObjects()->Data[ 87167 ];

	ADunDefPlayerAbility_StanceBase_execAnimNotify_CurrentAbility_On_Parms AnimNotify_CurrentAbility_On_Parms;

	this->ProcessEvent ( pFnAnimNotify_CurrentAbility_On, &AnimNotify_CurrentAbility_On_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AllowStanceCancel
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceBase::AllowStanceCancel ( )
{
	static UFunction* pFnAllowStanceCancel = NULL;

	if ( ! pFnAllowStanceCancel )
		pFnAllowStanceCancel = (UFunction*) UObject::GObjObjects()->Data[ 87157 ];

	ADunDefPlayerAbility_StanceBase_execAllowStanceCancel_Parms AllowStanceCancel_Parms;

	this->ProcessEvent ( pFnAllowStanceCancel, &AllowStanceCancel_Parms, NULL );

	return AllowStanceCancel_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.CheckDoStanceAttack
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceBase::CheckDoStanceAttack ( )
{
	static UFunction* pFnCheckDoStanceAttack = NULL;

	if ( ! pFnCheckDoStanceAttack )
		pFnCheckDoStanceAttack = (UFunction*) UObject::GObjObjects()->Data[ 85143 ];

	ADunDefPlayerAbility_StanceBase_execCheckDoStanceAttack_Parms CheckDoStanceAttack_Parms;

	this->ProcessEvent ( pFnCheckDoStanceAttack, &CheckDoStanceAttack_Parms, NULL );

	return CheckDoStanceAttack_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetMultiplierValue
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FStatMultipliers        multiplierCheck                ( CPF_Parm )
// unsigned long                  bDoLog                         ( CPF_OptionalParm | CPF_Parm )

float ADunDefPlayerAbility_StanceBase::GetMultiplierValue ( struct FStatMultipliers multiplierCheck, unsigned long bDoLog )
{
	static UFunction* pFnGetMultiplierValue = NULL;

	if ( ! pFnGetMultiplierValue )
		pFnGetMultiplierValue = (UFunction*) UObject::GObjObjects()->Data[ 87161 ];

	ADunDefPlayerAbility_StanceBase_execGetMultiplierValue_Parms GetMultiplierValue_Parms;
	memcpy ( &GetMultiplierValue_Parms.multiplierCheck, &multiplierCheck, 0x10 );
	GetMultiplierValue_Parms.bDoLog = bDoLog;

	this->ProcessEvent ( pFnGetMultiplierValue, &GetMultiplierValue_Parms, NULL );

	return GetMultiplierValue_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.CheckStatus
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceBase::CheckStatus ( )
{
	static UFunction* pFnCheckStatus = NULL;

	if ( ! pFnCheckStatus )
		pFnCheckStatus = (UFunction*) UObject::GObjObjects()->Data[ 87159 ];

	ADunDefPlayerAbility_StanceBase_execCheckStatus_Parms CheckStatus_Parms;

	this->ProcessEvent ( pFnCheckStatus, &CheckStatus_Parms, NULL );

	return CheckStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_StanceBase::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 87153 ];

	ADunDefPlayerAbility_StanceBase_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.OnActivate
// [0x00820102] 
// Parameters infos:

void ADunDefPlayerAbility_StanceBase::OnActivate ( )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 87148 ];

	ADunDefPlayerAbility_StanceBase_execOnActivate_Parms OnActivate_Parms;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AllowStepTowards
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceBase::AllowStepTowards ( )
{
	static UFunction* pFnAllowStepTowards = NULL;

	if ( ! pFnAllowStepTowards )
		pFnAllowStepTowards = (UFunction*) UObject::GObjObjects()->Data[ 85176 ];

	ADunDefPlayerAbility_StanceBase_execAllowStepTowards_Parms AllowStepTowards_Parms;

	this->ProcessEvent ( pFnAllowStepTowards, &AllowStepTowards_Parms, NULL );

	return AllowStepTowards_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetPlayerMomentumMultiplier
// [0x00020100] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayerAbility_StanceBase::GetPlayerMomentumMultiplier ( )
{
	static UFunction* pFnGetPlayerMomentumMultiplier = NULL;

	if ( ! pFnGetPlayerMomentumMultiplier )
		pFnGetPlayerMomentumMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 85200 ];

	ADunDefPlayerAbility_StanceBase_execGetPlayerMomentumMultiplier_Parms GetPlayerMomentumMultiplier_Parms;

	this->ProcessEvent ( pFnGetPlayerMomentumMultiplier, &GetPlayerMomentumMultiplier_Parms, NULL );

	return GetPlayerMomentumMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetPlayerAttackKnockbackMultiplier
// [0x00020100] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayerAbility_StanceBase::GetPlayerAttackKnockbackMultiplier ( )
{
	static UFunction* pFnGetPlayerAttackKnockbackMultiplier = NULL;

	if ( ! pFnGetPlayerAttackKnockbackMultiplier )
		pFnGetPlayerAttackKnockbackMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 87146 ];

	ADunDefPlayerAbility_StanceBase_execGetPlayerAttackKnockbackMultiplier_Parms GetPlayerAttackKnockbackMultiplier_Parms;

	this->ProcessEvent ( pFnGetPlayerAttackKnockbackMultiplier, &GetPlayerAttackKnockbackMultiplier_Parms, NULL );

	return GetPlayerAttackKnockbackMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetPlayerAttackSpeedMultiplier
// [0x00020100] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayerAbility_StanceBase::GetPlayerAttackSpeedMultiplier ( )
{
	static UFunction* pFnGetPlayerAttackSpeedMultiplier = NULL;

	if ( ! pFnGetPlayerAttackSpeedMultiplier )
		pFnGetPlayerAttackSpeedMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 85174 ];

	ADunDefPlayerAbility_StanceBase_execGetPlayerAttackSpeedMultiplier_Parms GetPlayerAttackSpeedMultiplier_Parms;

	this->ProcessEvent ( pFnGetPlayerAttackSpeedMultiplier, &GetPlayerAttackSpeedMultiplier_Parms, NULL );

	return GetPlayerAttackSpeedMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.PlayActivationAnimation
// [0x00020100] 
// Parameters infos:

void ADunDefPlayerAbility_StanceBase::PlayActivationAnimation ( )
{
	static UFunction* pFnPlayActivationAnimation = NULL;

	if ( ! pFnPlayActivationAnimation )
		pFnPlayActivationAnimation = (UFunction*) UObject::GObjObjects()->Data[ 87101 ];

	ADunDefPlayerAbility_StanceBase_execPlayActivationAnimation_Parms PlayActivationAnimation_Parms;

	this->ProcessEvent ( pFnPlayActivationAnimation, &PlayActivationAnimation_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.OnActivate
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_LeapSlam::OnActivate ( )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 86208 ];

	ADunDefPlayerAbility_LeapSlam_execOnActivate_Parms OnActivate_Parms;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetCostToActivate
// [0x00024102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  returnTrueValue                ( CPF_OptionalParm | CPF_Parm )

int ADunDefPlayerAbility_LeapSlam::GetCostToActivate ( unsigned long returnTrueValue )
{
	static UFunction* pFnGetCostToActivate = NULL;

	if ( ! pFnGetCostToActivate )
		pFnGetCostToActivate = (UFunction*) UObject::GObjObjects()->Data[ 86205 ];

	ADunDefPlayerAbility_LeapSlam_execGetCostToActivate_Parms GetCostToActivate_Parms;
	GetCostToActivate_Parms.returnTrueValue = returnTrueValue;

	this->ProcessEvent ( pFnGetCostToActivate, &GetCostToActivate_Parms, NULL );

	return GetCostToActivate_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.RequestActivation
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_LeapSlam::RequestActivation ( )
{
	static UFunction* pFnRequestActivation = NULL;

	if ( ! pFnRequestActivation )
		pFnRequestActivation = (UFunction*) UObject::GObjObjects()->Data[ 86202 ];

	ADunDefPlayerAbility_LeapSlam_execRequestActivation_Parms RequestActivation_Parms;

	this->ProcessEvent ( pFnRequestActivation, &RequestActivation_Parms, NULL );

	return RequestActivation_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.HasNoAutoAim
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_LeapSlam::HasNoAutoAim ( )
{
	static UFunction* pFnHasNoAutoAim = NULL;

	if ( ! pFnHasNoAutoAim )
		pFnHasNoAutoAim = (UFunction*) UObject::GObjObjects()->Data[ 86200 ];

	ADunDefPlayerAbility_LeapSlam_execHasNoAutoAim_Parms HasNoAutoAim_Parms;

	this->ProcessEvent ( pFnHasNoAutoAim, &HasNoAutoAim_Parms, NULL );

	return HasNoAutoAim_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_LeapSlam::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 86196 ];

	ADunDefPlayerAbility_LeapSlam_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetMomentum
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayerAbility_LeapSlam::GetMomentum ( )
{
	static UFunction* pFnGetMomentum = NULL;

	if ( ! pFnGetMomentum )
		pFnGetMomentum = (UFunction*) UObject::GObjObjects()->Data[ 86194 ];

	ADunDefPlayerAbility_LeapSlam_execGetMomentum_Parms GetMomentum_Parms;

	this->ProcessEvent ( pFnGetMomentum, &GetMomentum_Parms, NULL );

	return GetMomentum_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetElementalDamage
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayerAbility_LeapSlam::GetElementalDamage ( )
{
	static UFunction* pFnGetElementalDamage = NULL;

	if ( ! pFnGetElementalDamage )
		pFnGetElementalDamage = (UFunction*) UObject::GObjObjects()->Data[ 86192 ];

	ADunDefPlayerAbility_LeapSlam_execGetElementalDamage_Parms GetElementalDamage_Parms;

	this->ProcessEvent ( pFnGetElementalDamage, &GetElementalDamage_Parms, NULL );

	return GetElementalDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetDamage
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefWeapon_MeleeSword* weaponCheck                    ( CPF_Parm )

float ADunDefPlayerAbility_LeapSlam::GetDamage ( class ADunDefWeapon_MeleeSword* weaponCheck )
{
	static UFunction* pFnGetDamage = NULL;

	if ( ! pFnGetDamage )
		pFnGetDamage = (UFunction*) UObject::GObjObjects()->Data[ 86189 ];

	ADunDefPlayerAbility_LeapSlam_execGetDamage_Parms GetDamage_Parms;
	GetDamage_Parms.weaponCheck = weaponCheck;

	this->ProcessEvent ( pFnGetDamage, &GetDamage_Parms, NULL );

	return GetDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.AnimNotify_CurrentAbility_Off
// [0x00820102] 
// Parameters infos:

void ADunDefPlayerAbility_LeapSlam::AnimNotify_CurrentAbility_Off ( )
{
	static UFunction* pFnAnimNotify_CurrentAbility_Off = NULL;

	if ( ! pFnAnimNotify_CurrentAbility_Off )
		pFnAnimNotify_CurrentAbility_Off = (UFunction*) UObject::GObjObjects()->Data[ 86182 ];

	ADunDefPlayerAbility_LeapSlam_execAnimNotify_CurrentAbility_Off_Parms AnimNotify_CurrentAbility_Off_Parms;

	this->ProcessEvent ( pFnAnimNotify_CurrentAbility_Off, &AnimNotify_CurrentAbility_Off_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.AnimNotify_CurrentAbility_On
// [0x00820102] 
// Parameters infos:

void ADunDefPlayerAbility_LeapSlam::AnimNotify_CurrentAbility_On ( )
{
	static UFunction* pFnAnimNotify_CurrentAbility_On = NULL;

	if ( ! pFnAnimNotify_CurrentAbility_On )
		pFnAnimNotify_CurrentAbility_On = (UFunction*) UObject::GObjObjects()->Data[ 86178 ];

	ADunDefPlayerAbility_LeapSlam_execAnimNotify_CurrentAbility_On_Parms AnimNotify_CurrentAbility_On_Parms;

	this->ProcessEvent ( pFnAnimNotify_CurrentAbility_On, &AnimNotify_CurrentAbility_On_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ConsumesInputWhenActive
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_LeapSlam::ConsumesInputWhenActive ( )
{
	static UFunction* pFnConsumesInputWhenActive = NULL;

	if ( ! pFnConsumesInputWhenActive )
		pFnConsumesInputWhenActive = (UFunction*) UObject::GObjObjects()->Data[ 86176 ];

	ADunDefPlayerAbility_LeapSlam_execConsumesInputWhenActive_Parms ConsumesInputWhenActive_Parms;

	this->ProcessEvent ( pFnConsumesInputWhenActive, &ConsumesInputWhenActive_Parms, NULL );

	return ConsumesInputWhenActive_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.DoTimeOut
// [0x00020002] 
// Parameters infos:

void ADunDefPlayerAbility_LeapSlam::DoTimeOut ( )
{
	static UFunction* pFnDoTimeOut = NULL;

	if ( ! pFnDoTimeOut )
		pFnDoTimeOut = (UFunction*) UObject::GObjObjects()->Data[ 86175 ];

	ADunDefPlayerAbility_LeapSlam_execDoTimeOut_Parms DoTimeOut_Parms;

	this->ProcessEvent ( pFnDoTimeOut, &DoTimeOut_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetLeapVelocity
// [0x00C20002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 End                            ( CPF_Parm )
// struct FVector                 Start                          ( CPF_Parm )
// struct FVector                 JumpVelocity                   ( CPF_Parm | CPF_OutParm )

bool ADunDefPlayerAbility_LeapSlam::GetLeapVelocity ( struct FVector End, struct FVector Start, struct FVector* JumpVelocity )
{
	static UFunction* pFnGetLeapVelocity = NULL;

	if ( ! pFnGetLeapVelocity )
		pFnGetLeapVelocity = (UFunction*) UObject::GObjObjects()->Data[ 86159 ];

	ADunDefPlayerAbility_LeapSlam_execGetLeapVelocity_Parms GetLeapVelocity_Parms;
	memcpy ( &GetLeapVelocity_Parms.End, &End, 0xC );
	memcpy ( &GetLeapVelocity_Parms.Start, &Start, 0xC );

	this->ProcessEvent ( pFnGetLeapVelocity, &GetLeapVelocity_Parms, NULL );

	if ( JumpVelocity )
		memcpy ( JumpVelocity, &GetLeapVelocity_Parms.JumpVelocity, 0xC );

	return GetLeapVelocity_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.CancelAbility
// [0x00020100] 
// Parameters infos:

void ADunDefPlayerAbility_LeapSlam::CancelAbility ( )
{
	static UFunction* pFnCancelAbility = NULL;

	if ( ! pFnCancelAbility )
		pFnCancelAbility = (UFunction*) UObject::GObjObjects()->Data[ 86143 ];

	ADunDefPlayerAbility_LeapSlam_execCancelAbility_Parms CancelAbility_Parms;

	this->ProcessEvent ( pFnCancelAbility, &CancelAbility_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.PlayStopAnim
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_LeapSlam::PlayStopAnim ( )
{
	static UFunction* pFnPlayStopAnim = NULL;

	if ( ! pFnPlayStopAnim )
		pFnPlayStopAnim = (UFunction*) UObject::GObjObjects()->Data[ 86142 ];

	ADunDefPlayerAbility_LeapSlam_execPlayStopAnim_Parms PlayStopAnim_Parms;

	this->ProcessEvent ( pFnPlayStopAnim, &PlayStopAnim_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ShutOffVFX
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_LeapSlam::ShutOffVFX ( )
{
	static UFunction* pFnShutOffVFX = NULL;

	if ( ! pFnShutOffVFX )
		pFnShutOffVFX = (UFunction*) UObject::GObjObjects()->Data[ 86141 ];

	ADunDefPlayerAbility_LeapSlam_execShutOffVFX_Parms ShutOffVFX_Parms;

	this->ProcessEvent ( pFnShutOffVFX, &ShutOffVFX_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ActivateHandVFX
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_LeapSlam::ActivateHandVFX ( )
{
	static UFunction* pFnActivateHandVFX = NULL;

	if ( ! pFnActivateHandVFX )
		pFnActivateHandVFX = (UFunction*) UObject::GObjObjects()->Data[ 86140 ];

	ADunDefPlayerAbility_LeapSlam_execActivateHandVFX_Parms ActivateHandVFX_Parms;

	this->ProcessEvent ( pFnActivateHandVFX, &ActivateHandVFX_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.PushCheck
// [0x00020000] 
// Parameters infos:

void ADunDefPlayerAbility_LeapSlam::PushCheck ( )
{
	static UFunction* pFnPushCheck = NULL;

	if ( ! pFnPushCheck )
		pFnPushCheck = (UFunction*) UObject::GObjObjects()->Data[ 86139 ];

	ADunDefPlayerAbility_LeapSlam_execPushCheck_Parms PushCheck_Parms;

	this->ProcessEvent ( pFnPushCheck, &PushCheck_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayerAbility_LeapSlam::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 86122 ];

	ADunDefPlayerAbility_LeapSlam_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefPlayerAbility_LeapSlam::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 86120 ];

	ADunDefPlayerAbility_LeapSlam_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Jester.StaticGetOverrideSocketName
// [0x00022002] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UDunDefHero*             aHero                          ( CPF_Parm )

struct FName ADunDefPlayer_Jester::StaticGetOverrideSocketName ( class UDunDefHero* aHero )
{
	static UFunction* pFnStaticGetOverrideSocketName = NULL;

	if ( ! pFnStaticGetOverrideSocketName )
		pFnStaticGetOverrideSocketName = (UFunction*) UObject::GObjObjects()->Data[ 85415 ];

	ADunDefPlayer_Jester_execStaticGetOverrideSocketName_Parms StaticGetOverrideSocketName_Parms;
	StaticGetOverrideSocketName_Parms.aHero = aHero;

	this->ProcessEvent ( pFnStaticGetOverrideSocketName, &StaticGetOverrideSocketName_Parms, NULL );

	return StaticGetOverrideSocketName_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Jester.GetOverrideSocketName
// [0x00020102] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefWeapon*           theWeapon                      ( CPF_Parm )

struct FName ADunDefPlayer_Jester::GetOverrideSocketName ( class ADunDefWeapon* theWeapon )
{
	static UFunction* pFnGetOverrideSocketName = NULL;

	if ( ! pFnGetOverrideSocketName )
		pFnGetOverrideSocketName = (UFunction*) UObject::GObjObjects()->Data[ 85412 ];

	ADunDefPlayer_Jester_execGetOverrideSocketName_Parms GetOverrideSocketName_Parms;
	GetOverrideSocketName_Parms.theWeapon = theWeapon;

	this->ProcessEvent ( pFnGetOverrideSocketName, &GetOverrideSocketName_Parms, NULL );

	return GetOverrideSocketName_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Jester.SwapAnimSets
// [0x00020102] 
// Parameters infos:
// class ADunDefWeapon*           NewWeapon                      ( CPF_Parm )

void ADunDefPlayer_Jester::SwapAnimSets ( class ADunDefWeapon* NewWeapon )
{
	static UFunction* pFnSwapAnimSets = NULL;

	if ( ! pFnSwapAnimSets )
		pFnSwapAnimSets = (UFunction*) UObject::GObjObjects()->Data[ 85409 ];

	ADunDefPlayer_Jester_execSwapAnimSets_Parms SwapAnimSets_Parms;
	SwapAnimSets_Parms.NewWeapon = NewWeapon;

	this->ProcessEvent ( pFnSwapAnimSets, &SwapAnimSets_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Jester.WeaponSet
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 NewWeapon                      ( CPF_Parm )

void ADunDefPlayer_Jester::WeaponSet ( class AWeapon* NewWeapon )
{
	static UFunction* pFnWeaponSet = NULL;

	if ( ! pFnWeaponSet )
		pFnWeaponSet = (UFunction*) UObject::GObjObjects()->Data[ 85407 ];

	ADunDefPlayer_Jester_execWeaponSet_Parms WeaponSet_Parms;
	WeaponSet_Parms.NewWeapon = NewWeapon;

	this->ProcessEvent ( pFnWeaponSet, &WeaponSet_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Jester.DrawMyHUD
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefHUD*              H                              ( CPF_Parm )

bool ADunDefPlayer_Jester::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 85402 ];

	ADunDefPlayer_Jester_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );

	return DrawMyHUD_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Jester.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefPlayer_Jester::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 85400 ];

	ADunDefPlayer_Jester_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Jester.GetWeaponIcon
// [0x00020102] 
// Parameters infos:
// class UMaterialInstanceConstant* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bOffHand                       ( CPF_Parm )

class UMaterialInstanceConstant* ADunDefPlayer_Jester::GetWeaponIcon ( unsigned long bOffHand )
{
	static UFunction* pFnGetWeaponIcon = NULL;

	if ( ! pFnGetWeaponIcon )
		pFnGetWeaponIcon = (UFunction*) UObject::GObjObjects()->Data[ 85395 ];

	ADunDefPlayer_Jester_execGetWeaponIcon_Parms GetWeaponIcon_Parms;
	GetWeaponIcon_Parms.bOffHand = bOffHand;

	this->ProcessEvent ( pFnGetWeaponIcon, &GetWeaponIcon_Parms, NULL );

	return GetWeaponIcon_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Jester.DrawWeaponIcons
// [0x00020102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// class ADunDefWeapon*           weapDraw                       ( CPF_Parm )
// float                          weapOpacity                    ( CPF_Parm )
// int                            paddingIndex                   ( CPF_Parm )
// unsigned long                  bSelected                      ( CPF_Parm )
// float                          hudScale                       ( CPF_Parm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )

void ADunDefPlayer_Jester::DrawWeaponIcons ( class UCanvas* C, class ADunDefWeapon* weapDraw, float weapOpacity, int paddingIndex, unsigned long bSelected, float hudScale, class ADunDefPlayerController* PC )
{
	static UFunction* pFnDrawWeaponIcons = NULL;

	if ( ! pFnDrawWeaponIcons )
		pFnDrawWeaponIcons = (UFunction*) UObject::GObjObjects()->Data[ 85382 ];

	ADunDefPlayer_Jester_execDrawWeaponIcons_Parms DrawWeaponIcons_Parms;
	DrawWeaponIcons_Parms.C = C;
	DrawWeaponIcons_Parms.weapDraw = weapDraw;
	DrawWeaponIcons_Parms.weapOpacity = weapOpacity;
	DrawWeaponIcons_Parms.paddingIndex = paddingIndex;
	DrawWeaponIcons_Parms.bSelected = bSelected;
	DrawWeaponIcons_Parms.hudScale = hudScale;
	DrawWeaponIcons_Parms.PC = PC;

	this->ProcessEvent ( pFnDrawWeaponIcons, &DrawWeaponIcons_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Jester.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayer_Jester::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 85381 ];

	ADunDefPlayer_Jester_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Jester.CreateContainedInventoryFromTemplate
// [0x00024102] 
// Parameters infos:
// class AInventory*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  InventoryActorTemplate         ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

class AInventory* ADunDefPlayer_Jester::CreateContainedInventoryFromTemplate ( class AActor* InventoryActorTemplate, unsigned long bDoNotActivate )
{
	static UFunction* pFnCreateContainedInventoryFromTemplate = NULL;

	if ( ! pFnCreateContainedInventoryFromTemplate )
		pFnCreateContainedInventoryFromTemplate = (UFunction*) UObject::GObjObjects()->Data[ 85376 ];

	ADunDefPlayer_Jester_execCreateContainedInventoryFromTemplate_Parms CreateContainedInventoryFromTemplate_Parms;
	CreateContainedInventoryFromTemplate_Parms.InventoryActorTemplate = InventoryActorTemplate;
	CreateContainedInventoryFromTemplate_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnCreateContainedInventoryFromTemplate, &CreateContainedInventoryFromTemplate_Parms, NULL );

	return CreateContainedInventoryFromTemplate_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Jester.SwapOffHandWeaponFor
// [0x00020002] 
// Parameters infos:
// class ADunDefWeapon*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefWeapon*           weaponTemplate                 ( CPF_Parm )
// class UHeroEquipment*          equipmentRef                   ( CPF_Parm )

class ADunDefWeapon* ADunDefPlayer_Jester::SwapOffHandWeaponFor ( class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef )
{
	static UFunction* pFnSwapOffHandWeaponFor = NULL;

	if ( ! pFnSwapOffHandWeaponFor )
		pFnSwapOffHandWeaponFor = (UFunction*) UObject::GObjObjects()->Data[ 85370 ];

	ADunDefPlayer_Jester_execSwapOffHandWeaponFor_Parms SwapOffHandWeaponFor_Parms;
	SwapOffHandWeaponFor_Parms.weaponTemplate = weaponTemplate;
	SwapOffHandWeaponFor_Parms.equipmentRef = equipmentRef;

	this->ProcessEvent ( pFnSwapOffHandWeaponFor, &SwapOffHandWeaponFor_Parms, NULL );

	return SwapOffHandWeaponFor_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Jester.DoWeaponSwap
// [0x00024102] 
// Parameters infos:
// unsigned long                  bForceSwap                     ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayer_Jester::DoWeaponSwap ( unsigned long bForceSwap )
{
	static UFunction* pFnDoWeaponSwap = NULL;

	if ( ! pFnDoWeaponSwap )
		pFnDoWeaponSwap = (UFunction*) UObject::GObjObjects()->Data[ 85364 ];

	ADunDefPlayer_Jester_execDoWeaponSwap_Parms DoWeaponSwap_Parms;
	DoWeaponSwap_Parms.bForceSwap = bForceSwap;

	this->ProcessEvent ( pFnDoWeaponSwap, &DoWeaponSwap_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Jester.ServerDoSwap
// [0x002240C2] 
// Parameters infos:
// unsigned long                  bForceSwap                     ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayer_Jester::ServerDoSwap ( unsigned long bForceSwap )
{
	static UFunction* pFnServerDoSwap = NULL;

	if ( ! pFnServerDoSwap )
		pFnServerDoSwap = (UFunction*) UObject::GObjObjects()->Data[ 85362 ];

	ADunDefPlayer_Jester_execServerDoSwap_Parms ServerDoSwap_Parms;
	ServerDoSwap_Parms.bForceSwap = bForceSwap;

	this->ProcessEvent ( pFnServerDoSwap, &ServerDoSwap_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Jester.SetNewMainWeapon
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 theNewWeapon                   ( CPF_Parm )
// unsigned long                  bRemoveExisting                ( CPF_Parm )
// class UHeroEquipment*          equipRef                       ( CPF_Parm )

void ADunDefPlayer_Jester::SetNewMainWeapon ( class AWeapon* theNewWeapon, unsigned long bRemoveExisting, class UHeroEquipment* equipRef )
{
	static UFunction* pFnSetNewMainWeapon = NULL;

	if ( ! pFnSetNewMainWeapon )
		pFnSetNewMainWeapon = (UFunction*) UObject::GObjObjects()->Data[ 85356 ];

	ADunDefPlayer_Jester_execSetNewMainWeapon_Parms SetNewMainWeapon_Parms;
	SetNewMainWeapon_Parms.theNewWeapon = theNewWeapon;
	SetNewMainWeapon_Parms.bRemoveExisting = bRemoveExisting;
	SetNewMainWeapon_Parms.equipRef = equipRef;

	this->ProcessEvent ( pFnSetNewMainWeapon, &SetNewMainWeapon_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Jester.SetStoredWeapon
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 newStoredWeapon                ( CPF_Parm )
// class UHeroEquipment*          equipRef                       ( CPF_Parm )

void ADunDefPlayer_Jester::SetStoredWeapon ( class AWeapon* newStoredWeapon, class UHeroEquipment* equipRef )
{
	static UFunction* pFnSetStoredWeapon = NULL;

	if ( ! pFnSetStoredWeapon )
		pFnSetStoredWeapon = (UFunction*) UObject::GObjObjects()->Data[ 85352 ];

	ADunDefPlayer_Jester_execSetStoredWeapon_Parms SetStoredWeapon_Parms;
	SetStoredWeapon_Parms.newStoredWeapon = newStoredWeapon;
	SetStoredWeapon_Parms.equipRef = equipRef;

	this->ProcessEvent ( pFnSetStoredWeapon, &SetStoredWeapon_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_Jester.GetShootAnim
// [0x00020102] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName ADunDefPlayer_Jester::GetShootAnim ( )
{
	static UFunction* pFnGetShootAnim = NULL;

	if ( ! pFnGetShootAnim )
		pFnGetShootAnim = (UFunction*) UObject::GObjObjects()->Data[ 85350 ];

	ADunDefPlayer_Jester_execGetShootAnim_Parms GetShootAnim_Parms;

	this->ProcessEvent ( pFnGetShootAnim, &GetShootAnim_Parms, NULL );

	return GetShootAnim_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Jester.ForceWeaponActivationOverride
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayer_Jester::ForceWeaponActivationOverride ( )
{
	static UFunction* pFnForceWeaponActivationOverride = NULL;

	if ( ! pFnForceWeaponActivationOverride )
		pFnForceWeaponActivationOverride = (UFunction*) UObject::GObjObjects()->Data[ 85348 ];

	ADunDefPlayer_Jester_execForceWeaponActivationOverride_Parms ForceWeaponActivationOverride_Parms;

	this->ProcessEvent ( pFnForceWeaponActivationOverride, &ForceWeaponActivationOverride_Parms, NULL );

	return ForceWeaponActivationOverride_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Jester.SwapWeaponFor
// [0x00020002] 
// Parameters infos:
// class ADunDefWeapon*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefWeapon*           weaponTemplate                 ( CPF_Parm )
// class UHeroEquipment*          equipmentRef                   ( CPF_Parm )

class ADunDefWeapon* ADunDefPlayer_Jester::SwapWeaponFor ( class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef )
{
	static UFunction* pFnSwapWeaponFor = NULL;

	if ( ! pFnSwapWeaponFor )
		pFnSwapWeaponFor = (UFunction*) UObject::GObjObjects()->Data[ 85341 ];

	ADunDefPlayer_Jester_execSwapWeaponFor_Parms SwapWeaponFor_Parms;
	SwapWeaponFor_Parms.weaponTemplate = weaponTemplate;
	SwapWeaponFor_Parms.equipmentRef = equipmentRef;

	this->ProcessEvent ( pFnSwapWeaponFor, &SwapWeaponFor_Parms, NULL );

	return SwapWeaponFor_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Jester.AllowDualWeapon
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayer_Jester::AllowDualWeapon ( )
{
	static UFunction* pFnAllowDualWeapon = NULL;

	if ( ! pFnAllowDualWeapon )
		pFnAllowDualWeapon = (UFunction*) UObject::GObjObjects()->Data[ 85339 ];

	ADunDefPlayer_Jester_execAllowDualWeapon_Parms AllowDualWeapon_Parms;

	this->ProcessEvent ( pFnAllowDualWeapon, &AllowDualWeapon_Parms, NULL );

	return AllowDualWeapon_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_Jester.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayer_Jester::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 85322 ];

	ADunDefPlayer_Jester_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_SeriesEv::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 85596 ];

	ADunDefPlayer_SeriesEv_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.StopHovering
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_SeriesEv::StopHovering ( )
{
	static UFunction* pFnStopHovering = NULL;

	if ( ! pFnStopHovering )
		pFnStopHovering = (UFunction*) UObject::GObjObjects()->Data[ 85595 ];

	ADunDefPlayer_SeriesEv_execStopHovering_Parms StopHovering_Parms;

	this->ProcessEvent ( pFnStopHovering, &StopHovering_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.StartHovering
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_SeriesEv::StartHovering ( )
{
	static UFunction* pFnStartHovering = NULL;

	if ( ! pFnStartHovering )
		pFnStartHovering = (UFunction*) UObject::GObjObjects()->Data[ 85594 ];

	ADunDefPlayer_SeriesEv_execStartHovering_Parms StartHovering_Parms;

	this->ProcessEvent ( pFnStartHovering, &StartHovering_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefPlayer_SeriesEv::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 85592 ];

	ADunDefPlayer_SeriesEv_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.UsedAbility
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayerAbility*    ability                        ( CPF_Parm )

void ADunDefPlayer_SeriesEv::UsedAbility ( class ADunDefPlayerAbility* ability )
{
	static UFunction* pFnUsedAbility = NULL;

	if ( ! pFnUsedAbility )
		pFnUsedAbility = (UFunction*) UObject::GObjObjects()->Data[ 85590 ];

	ADunDefPlayer_SeriesEv_execUsedAbility_Parms UsedAbility_Parms;
	UsedAbility_Parms.ability = ability;

	this->ProcessEvent ( pFnUsedAbility, &UsedAbility_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.SetActiveChargeAbility
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayerAbility_ManaCharge* newCharge                      ( CPF_Parm )

void ADunDefPlayer_SeriesEv::SetActiveChargeAbility ( class ADunDefPlayerAbility_ManaCharge* newCharge )
{
	static UFunction* pFnSetActiveChargeAbility = NULL;

	if ( ! pFnSetActiveChargeAbility )
		pFnSetActiveChargeAbility = (UFunction*) UObject::GObjObjects()->Data[ 85588 ];

	ADunDefPlayer_SeriesEv_execSetActiveChargeAbility_Parms SetActiveChargeAbility_Parms;
	SetActiveChargeAbility_Parms.newCharge = newCharge;

	this->ProcessEvent ( pFnSetActiveChargeAbility, &SetActiveChargeAbility_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.GetManaTokenAttractionRadius
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayer_SeriesEv::GetManaTokenAttractionRadius ( )
{
	static UFunction* pFnGetManaTokenAttractionRadius = NULL;

	if ( ! pFnGetManaTokenAttractionRadius )
		pFnGetManaTokenAttractionRadius = (UFunction*) UObject::GObjObjects()->Data[ 85586 ];

	ADunDefPlayer_SeriesEv_execGetManaTokenAttractionRadius_Parms GetManaTokenAttractionRadius_Parms;

	this->ProcessEvent ( pFnGetManaTokenAttractionRadius, &GetManaTokenAttractionRadius_Parms, NULL );

	return GetManaTokenAttractionRadius_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.HasMaxManaPower
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayer_SeriesEv::HasMaxManaPower ( )
{
	static UFunction* pFnHasMaxManaPower = NULL;

	if ( ! pFnHasMaxManaPower )
		pFnHasMaxManaPower = (UFunction*) UObject::GObjObjects()->Data[ 85584 ];

	ADunDefPlayer_SeriesEv_execHasMaxManaPower_Parms HasMaxManaPower_Parms;

	this->ProcessEvent ( pFnHasMaxManaPower, &HasMaxManaPower_Parms, NULL );

	return HasMaxManaPower_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.TryTokenCollection
// [0x00020102] 
// Parameters infos:
// class ADunDefManaToken*        Token                          ( CPF_Parm )

void ADunDefPlayer_SeriesEv::TryTokenCollection ( class ADunDefManaToken* Token )
{
	static UFunction* pFnTryTokenCollection = NULL;

	if ( ! pFnTryTokenCollection )
		pFnTryTokenCollection = (UFunction*) UObject::GObjObjects()->Data[ 85580 ];

	ADunDefPlayer_SeriesEv_execTryTokenCollection_Parms TryTokenCollection_Parms;
	TryTokenCollection_Parms.Token = Token;

	this->ProcessEvent ( pFnTryTokenCollection, &TryTokenCollection_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.IsCurrentlyPlayingHurtAnimation
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayer_SeriesEv::IsCurrentlyPlayingHurtAnimation ( )
{
	static UFunction* pFnIsCurrentlyPlayingHurtAnimation = NULL;

	if ( ! pFnIsCurrentlyPlayingHurtAnimation )
		pFnIsCurrentlyPlayingHurtAnimation = (UFunction*) UObject::GObjObjects()->Data[ 85577 ];

	ADunDefPlayer_SeriesEv_execIsCurrentlyPlayingHurtAnimation_Parms IsCurrentlyPlayingHurtAnimation_Parms;

	this->ProcessEvent ( pFnIsCurrentlyPlayingHurtAnimation, &IsCurrentlyPlayingHurtAnimation_Parms, NULL );

	return IsCurrentlyPlayingHurtAnimation_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.PlayHurtAnimation
// [0x00020102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ADunDefPlayer_SeriesEv::PlayHurtAnimation ( class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnPlayHurtAnimation = NULL;

	if ( ! pFnPlayHurtAnimation )
		pFnPlayHurtAnimation = (UFunction*) UObject::GObjObjects()->Data[ 85574 ];

	ADunDefPlayer_SeriesEv_execPlayHurtAnimation_Parms PlayHurtAnimation_Parms;
	PlayHurtAnimation_Parms.DamageType = DamageType;
	memcpy ( &PlayHurtAnimation_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayHurtAnimation, &PlayHurtAnimation_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.ShouldOverrideWeaponElementalEffects
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefWeapon*           weaponCheck                    ( CPF_Parm )

bool ADunDefPlayer_SeriesEv::ShouldOverrideWeaponElementalEffects ( class ADunDefWeapon* weaponCheck )
{
	static UFunction* pFnShouldOverrideWeaponElementalEffects = NULL;

	if ( ! pFnShouldOverrideWeaponElementalEffects )
		pFnShouldOverrideWeaponElementalEffects = (UFunction*) UObject::GObjObjects()->Data[ 85570 ];

	ADunDefPlayer_SeriesEv_execShouldOverrideWeaponElementalEffects_Parms ShouldOverrideWeaponElementalEffects_Parms;
	ShouldOverrideWeaponElementalEffects_Parms.weaponCheck = weaponCheck;

	this->ProcessEvent ( pFnShouldOverrideWeaponElementalEffects, &ShouldOverrideWeaponElementalEffects_Parms, NULL );

	return ShouldOverrideWeaponElementalEffects_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.StopFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ADunDefPlayer_SeriesEv::StopFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStopFire = NULL;

	if ( ! pFnStopFire )
		pFnStopFire = (UFunction*) UObject::GObjObjects()->Data[ 85568 ];

	ADunDefPlayer_SeriesEv_execStopFire_Parms StopFire_Parms;
	StopFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStopFire, &StopFire_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.PlayJumpAnimation
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_SeriesEv::PlayJumpAnimation ( )
{
	static UFunction* pFnPlayJumpAnimation = NULL;

	if ( ! pFnPlayJumpAnimation )
		pFnPlayJumpAnimation = (UFunction*) UObject::GObjObjects()->Data[ 85567 ];

	ADunDefPlayer_SeriesEv_execPlayJumpAnimation_Parms PlayJumpAnimation_Parms;

	this->ProcessEvent ( pFnPlayJumpAnimation, &PlayJumpAnimation_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.StartFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ADunDefPlayer_SeriesEv::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 85565 ];

	ADunDefPlayer_SeriesEv_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.PutArmDown
// [0x00020102] 
// Parameters infos:

void ADunDefPlayer_SeriesEv::PutArmDown ( )
{
	static UFunction* pFnPutArmDown = NULL;

	if ( ! pFnPutArmDown )
		pFnPutArmDown = (UFunction*) UObject::GObjObjects()->Data[ 85564 ];

	ADunDefPlayer_SeriesEv_execPutArmDown_Parms PutArmDown_Parms;

	this->ProcessEvent ( pFnPutArmDown, &PutArmDown_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.PlayShootAnimation
// [0x00024102] 
// Parameters infos:
// unsigned long                  isBigShoot                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  Replicate                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bDontPlayAnim                  ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayer_SeriesEv::PlayShootAnimation ( unsigned long isBigShoot, unsigned long Replicate, unsigned long bDontPlayAnim )
{
	static UFunction* pFnPlayShootAnimation = NULL;

	if ( ! pFnPlayShootAnimation )
		pFnPlayShootAnimation = (UFunction*) UObject::GObjObjects()->Data[ 85560 ];

	ADunDefPlayer_SeriesEv_execPlayShootAnimation_Parms PlayShootAnimation_Parms;
	PlayShootAnimation_Parms.isBigShoot = isBigShoot;
	PlayShootAnimation_Parms.Replicate = Replicate;
	PlayShootAnimation_Parms.bDontPlayAnim = bDontPlayAnim;

	this->ProcessEvent ( pFnPlayShootAnimation, &PlayShootAnimation_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.ForceUseInstigatorForMuzzle
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayer_SeriesEv::ForceUseInstigatorForMuzzle ( )
{
	static UFunction* pFnForceUseInstigatorForMuzzle = NULL;

	if ( ! pFnForceUseInstigatorForMuzzle )
		pFnForceUseInstigatorForMuzzle = (UFunction*) UObject::GObjObjects()->Data[ 85558 ];

	ADunDefPlayer_SeriesEv_execForceUseInstigatorForMuzzle_Parms ForceUseInstigatorForMuzzle_Parms;

	this->ProcessEvent ( pFnForceUseInstigatorForMuzzle, &ForceUseInstigatorForMuzzle_Parms, NULL );

	return ForceUseInstigatorForMuzzle_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.CanReload
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayer_SeriesEv::CanReload ( )
{
	static UFunction* pFnCanReload = NULL;

	if ( ! pFnCanReload )
		pFnCanReload = (UFunction*) UObject::GObjObjects()->Data[ 85556 ];

	ADunDefPlayer_SeriesEv_execCanReload_Parms CanReload_Parms;

	this->ProcessEvent ( pFnCanReload, &CanReload_Parms, NULL );

	return CanReload_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.GetWeaponIcon
// [0x00020102] 
// Parameters infos:
// class UMaterialInstanceConstant* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bOffHand                       ( CPF_Parm )

class UMaterialInstanceConstant* ADunDefPlayer_SeriesEv::GetWeaponIcon ( unsigned long bOffHand )
{
	static UFunction* pFnGetWeaponIcon = NULL;

	if ( ! pFnGetWeaponIcon )
		pFnGetWeaponIcon = (UFunction*) UObject::GObjObjects()->Data[ 85551 ];

	ADunDefPlayer_SeriesEv_execGetWeaponIcon_Parms GetWeaponIcon_Parms;
	GetWeaponIcon_Parms.bOffHand = bOffHand;

	this->ProcessEvent ( pFnGetWeaponIcon, &GetWeaponIcon_Parms, NULL );

	return GetWeaponIcon_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.DrawWeaponIcons
// [0x00020102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// class ADunDefWeapon*           weapDraw                       ( CPF_Parm )
// float                          weapOpacity                    ( CPF_Parm )
// int                            paddingIndex                   ( CPF_Parm )
// unsigned long                  bSelected                      ( CPF_Parm )
// float                          hudScale                       ( CPF_Parm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )

void ADunDefPlayer_SeriesEv::DrawWeaponIcons ( class UCanvas* C, class ADunDefWeapon* weapDraw, float weapOpacity, int paddingIndex, unsigned long bSelected, float hudScale, class ADunDefPlayerController* PC )
{
	static UFunction* pFnDrawWeaponIcons = NULL;

	if ( ! pFnDrawWeaponIcons )
		pFnDrawWeaponIcons = (UFunction*) UObject::GObjObjects()->Data[ 85538 ];

	ADunDefPlayer_SeriesEv_execDrawWeaponIcons_Parms DrawWeaponIcons_Parms;
	DrawWeaponIcons_Parms.C = C;
	DrawWeaponIcons_Parms.weapDraw = weapDraw;
	DrawWeaponIcons_Parms.weapOpacity = weapOpacity;
	DrawWeaponIcons_Parms.paddingIndex = paddingIndex;
	DrawWeaponIcons_Parms.bSelected = bSelected;
	DrawWeaponIcons_Parms.hudScale = hudScale;
	DrawWeaponIcons_Parms.PC = PC;

	this->ProcessEvent ( pFnDrawWeaponIcons, &DrawWeaponIcons_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.DrawMyHUD
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefHUD*              H                              ( CPF_Parm )

bool ADunDefPlayer_SeriesEv::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 85533 ];

	ADunDefPlayer_SeriesEv_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );

	return DrawMyHUD_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayer_SeriesEv::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 85532 ];

	ADunDefPlayer_SeriesEv_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.CreateContainedInventoryFromTemplate
// [0x00024102] 
// Parameters infos:
// class AInventory*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  InventoryActorTemplate         ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

class AInventory* ADunDefPlayer_SeriesEv::CreateContainedInventoryFromTemplate ( class AActor* InventoryActorTemplate, unsigned long bDoNotActivate )
{
	static UFunction* pFnCreateContainedInventoryFromTemplate = NULL;

	if ( ! pFnCreateContainedInventoryFromTemplate )
		pFnCreateContainedInventoryFromTemplate = (UFunction*) UObject::GObjObjects()->Data[ 85527 ];

	ADunDefPlayer_SeriesEv_execCreateContainedInventoryFromTemplate_Parms CreateContainedInventoryFromTemplate_Parms;
	CreateContainedInventoryFromTemplate_Parms.InventoryActorTemplate = InventoryActorTemplate;
	CreateContainedInventoryFromTemplate_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnCreateContainedInventoryFromTemplate, &CreateContainedInventoryFromTemplate_Parms, NULL );

	return CreateContainedInventoryFromTemplate_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.SwapOffHandWeaponFor
// [0x00020002] 
// Parameters infos:
// class ADunDefWeapon*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefWeapon*           weaponTemplate                 ( CPF_Parm )
// class UHeroEquipment*          equipmentRef                   ( CPF_Parm )

class ADunDefWeapon* ADunDefPlayer_SeriesEv::SwapOffHandWeaponFor ( class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef )
{
	static UFunction* pFnSwapOffHandWeaponFor = NULL;

	if ( ! pFnSwapOffHandWeaponFor )
		pFnSwapOffHandWeaponFor = (UFunction*) UObject::GObjObjects()->Data[ 85521 ];

	ADunDefPlayer_SeriesEv_execSwapOffHandWeaponFor_Parms SwapOffHandWeaponFor_Parms;
	SwapOffHandWeaponFor_Parms.weaponTemplate = weaponTemplate;
	SwapOffHandWeaponFor_Parms.equipmentRef = equipmentRef;

	this->ProcessEvent ( pFnSwapOffHandWeaponFor, &SwapOffHandWeaponFor_Parms, NULL );

	return SwapOffHandWeaponFor_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.DoWeaponSwap
// [0x00024102] 
// Parameters infos:
// unsigned long                  bForceSwap                     ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayer_SeriesEv::DoWeaponSwap ( unsigned long bForceSwap )
{
	static UFunction* pFnDoWeaponSwap = NULL;

	if ( ! pFnDoWeaponSwap )
		pFnDoWeaponSwap = (UFunction*) UObject::GObjObjects()->Data[ 85516 ];

	ADunDefPlayer_SeriesEv_execDoWeaponSwap_Parms DoWeaponSwap_Parms;
	DoWeaponSwap_Parms.bForceSwap = bForceSwap;

	this->ProcessEvent ( pFnDoWeaponSwap, &DoWeaponSwap_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.ServerDoSwap
// [0x002240C2] 
// Parameters infos:
// unsigned long                  bForceSwap                     ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayer_SeriesEv::ServerDoSwap ( unsigned long bForceSwap )
{
	static UFunction* pFnServerDoSwap = NULL;

	if ( ! pFnServerDoSwap )
		pFnServerDoSwap = (UFunction*) UObject::GObjObjects()->Data[ 85514 ];

	ADunDefPlayer_SeriesEv_execServerDoSwap_Parms ServerDoSwap_Parms;
	ServerDoSwap_Parms.bForceSwap = bForceSwap;

	this->ProcessEvent ( pFnServerDoSwap, &ServerDoSwap_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.SetNewMainWeapon
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 theNewWeapon                   ( CPF_Parm )
// unsigned long                  bRemoveExisting                ( CPF_Parm )
// class UHeroEquipment*          equipRef                       ( CPF_Parm )

void ADunDefPlayer_SeriesEv::SetNewMainWeapon ( class AWeapon* theNewWeapon, unsigned long bRemoveExisting, class UHeroEquipment* equipRef )
{
	static UFunction* pFnSetNewMainWeapon = NULL;

	if ( ! pFnSetNewMainWeapon )
		pFnSetNewMainWeapon = (UFunction*) UObject::GObjObjects()->Data[ 85508 ];

	ADunDefPlayer_SeriesEv_execSetNewMainWeapon_Parms SetNewMainWeapon_Parms;
	SetNewMainWeapon_Parms.theNewWeapon = theNewWeapon;
	SetNewMainWeapon_Parms.bRemoveExisting = bRemoveExisting;
	SetNewMainWeapon_Parms.equipRef = equipRef;

	this->ProcessEvent ( pFnSetNewMainWeapon, &SetNewMainWeapon_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.SetStoredWeapon
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 newStoredWeapon                ( CPF_Parm )
// class UHeroEquipment*          equipRef                       ( CPF_Parm )

void ADunDefPlayer_SeriesEv::SetStoredWeapon ( class AWeapon* newStoredWeapon, class UHeroEquipment* equipRef )
{
	static UFunction* pFnSetStoredWeapon = NULL;

	if ( ! pFnSetStoredWeapon )
		pFnSetStoredWeapon = (UFunction*) UObject::GObjObjects()->Data[ 85504 ];

	ADunDefPlayer_SeriesEv_execSetStoredWeapon_Parms SetStoredWeapon_Parms;
	SetStoredWeapon_Parms.newStoredWeapon = newStoredWeapon;
	SetStoredWeapon_Parms.equipRef = equipRef;

	this->ProcessEvent ( pFnSetStoredWeapon, &SetStoredWeapon_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.SwapWeaponFor
// [0x00020002] 
// Parameters infos:
// class ADunDefWeapon*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefWeapon*           weaponTemplate                 ( CPF_Parm )
// class UHeroEquipment*          equipmentRef                   ( CPF_Parm )

class ADunDefWeapon* ADunDefPlayer_SeriesEv::SwapWeaponFor ( class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef )
{
	static UFunction* pFnSwapWeaponFor = NULL;

	if ( ! pFnSwapWeaponFor )
		pFnSwapWeaponFor = (UFunction*) UObject::GObjObjects()->Data[ 85497 ];

	ADunDefPlayer_SeriesEv_execSwapWeaponFor_Parms SwapWeaponFor_Parms;
	SwapWeaponFor_Parms.weaponTemplate = weaponTemplate;
	SwapWeaponFor_Parms.equipmentRef = equipmentRef;

	this->ProcessEvent ( pFnSwapWeaponFor, &SwapWeaponFor_Parms, NULL );

	return SwapWeaponFor_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.GetOffHandSocketName
// [0x00022002] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName ADunDefPlayer_SeriesEv::GetOffHandSocketName ( )
{
	static UFunction* pFnGetOffHandSocketName = NULL;

	if ( ! pFnGetOffHandSocketName )
		pFnGetOffHandSocketName = (UFunction*) UObject::GObjObjects()->Data[ 85495 ];

	ADunDefPlayer_SeriesEv_execGetOffHandSocketName_Parms GetOffHandSocketName_Parms;

	this->ProcessEvent ( pFnGetOffHandSocketName, &GetOffHandSocketName_Parms, NULL );

	return GetOffHandSocketName_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.OverrideWeaponAttach
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefWeapon*           weaponCheck                    ( CPF_Parm )

bool ADunDefPlayer_SeriesEv::OverrideWeaponAttach ( class ADunDefWeapon* weaponCheck )
{
	static UFunction* pFnOverrideWeaponAttach = NULL;

	if ( ! pFnOverrideWeaponAttach )
		pFnOverrideWeaponAttach = (UFunction*) UObject::GObjObjects()->Data[ 85492 ];

	ADunDefPlayer_SeriesEv_execOverrideWeaponAttach_Parms OverrideWeaponAttach_Parms;
	OverrideWeaponAttach_Parms.weaponCheck = weaponCheck;

	this->ProcessEvent ( pFnOverrideWeaponAttach, &OverrideWeaponAttach_Parms, NULL );

	return OverrideWeaponAttach_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.AllowDualWeapon
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayer_SeriesEv::AllowDualWeapon ( )
{
	static UFunction* pFnAllowDualWeapon = NULL;

	if ( ! pFnAllowDualWeapon )
		pFnAllowDualWeapon = (UFunction*) UObject::GObjObjects()->Data[ 85490 ];

	ADunDefPlayer_SeriesEv_execAllowDualWeapon_Parms AllowDualWeapon_Parms;

	this->ProcessEvent ( pFnAllowDualWeapon, &AllowDualWeapon_Parms, NULL );

	return AllowDualWeapon_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayer_SeriesEv::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 85473 ];

	ADunDefPlayer_SeriesEv_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_ManaCharge::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 86349 ];

	ADunDefPlayerAbility_ManaCharge_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.AllowUsageDuringCastingStates
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_ManaCharge::AllowUsageDuringCastingStates ( )
{
	static UFunction* pFnAllowUsageDuringCastingStates = NULL;

	if ( ! pFnAllowUsageDuringCastingStates )
		pFnAllowUsageDuringCastingStates = (UFunction*) UObject::GObjObjects()->Data[ 86347 ];

	ADunDefPlayerAbility_ManaCharge_execAllowUsageDuringCastingStates_Parms AllowUsageDuringCastingStates_Parms;

	this->ProcessEvent ( pFnAllowUsageDuringCastingStates, &AllowUsageDuringCastingStates_Parms, NULL );

	return AllowUsageDuringCastingStates_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.DrawChargeBar
// [0x00820102] 
// Parameters infos:
// class ADunDefHUD*              H                              ( CPF_Parm )

void ADunDefPlayerAbility_ManaCharge::DrawChargeBar ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawChargeBar = NULL;

	if ( ! pFnDrawChargeBar )
		pFnDrawChargeBar = (UFunction*) UObject::GObjObjects()->Data[ 86338 ];

	ADunDefPlayerAbility_ManaCharge_execDrawChargeBar_Parms DrawChargeBar_Parms;
	DrawChargeBar_Parms.H = H;

	this->ProcessEvent ( pFnDrawChargeBar, &DrawChargeBar_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetCooldownStartTime
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayerAbility_ManaCharge::GetCooldownStartTime ( )
{
	static UFunction* pFnGetCooldownStartTime = NULL;

	if ( ! pFnGetCooldownStartTime )
		pFnGetCooldownStartTime = (UFunction*) UObject::GObjObjects()->Data[ 86336 ];

	ADunDefPlayerAbility_ManaCharge_execGetCooldownStartTime_Parms GetCooldownStartTime_Parms;

	this->ProcessEvent ( pFnGetCooldownStartTime, &GetCooldownStartTime_Parms, NULL );

	return GetCooldownStartTime_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ShouldDrawManaBar
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_ManaCharge::ShouldDrawManaBar ( )
{
	static UFunction* pFnShouldDrawManaBar = NULL;

	if ( ! pFnShouldDrawManaBar )
		pFnShouldDrawManaBar = (UFunction*) UObject::GObjObjects()->Data[ 86334 ];

	ADunDefPlayerAbility_ManaCharge_execShouldDrawManaBar_Parms ShouldDrawManaBar_Parms;

	this->ProcessEvent ( pFnShouldDrawManaBar, &ShouldDrawManaBar_Parms, NULL );

	return ShouldDrawManaBar_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.StopEffects
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_ManaCharge::StopEffects ( )
{
	static UFunction* pFnStopEffects = NULL;

	if ( ! pFnStopEffects )
		pFnStopEffects = (UFunction*) UObject::GObjObjects()->Data[ 86333 ];

	ADunDefPlayerAbility_ManaCharge_execStopEffects_Parms StopEffects_Parms;

	this->ProcessEvent ( pFnStopEffects, &StopEffects_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.NotifyStopFire
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_ManaCharge::NotifyStopFire ( )
{
	static UFunction* pFnNotifyStopFire = NULL;

	if ( ! pFnNotifyStopFire )
		pFnNotifyStopFire = (UFunction*) UObject::GObjObjects()->Data[ 86332 ];

	ADunDefPlayerAbility_ManaCharge_execNotifyStopFire_Parms NotifyStopFire_Parms;

	this->ProcessEvent ( pFnNotifyStopFire, &NotifyStopFire_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ServerStartDamage
// [0x002200C2] 
// Parameters infos:

void ADunDefPlayerAbility_ManaCharge::ServerStartDamage ( )
{
	static UFunction* pFnServerStartDamage = NULL;

	if ( ! pFnServerStartDamage )
		pFnServerStartDamage = (UFunction*) UObject::GObjObjects()->Data[ 86331 ];

	ADunDefPlayerAbility_ManaCharge_execServerStartDamage_Parms ServerStartDamage_Parms;

	this->ProcessEvent ( pFnServerStartDamage, &ServerStartDamage_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.NotifyStartFire
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_ManaCharge::NotifyStartFire ( )
{
	static UFunction* pFnNotifyStartFire = NULL;

	if ( ! pFnNotifyStartFire )
		pFnNotifyStartFire = (UFunction*) UObject::GObjObjects()->Data[ 86330 ];

	ADunDefPlayerAbility_ManaCharge_execNotifyStartFire_Parms NotifyStartFire_Parms;

	this->ProcessEvent ( pFnNotifyStartFire, &NotifyStartFire_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ActivateEffects
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_ManaCharge::ActivateEffects ( )
{
	static UFunction* pFnActivateEffects = NULL;

	if ( ! pFnActivateEffects )
		pFnActivateEffects = (UFunction*) UObject::GObjObjects()->Data[ 86329 ];

	ADunDefPlayerAbility_ManaCharge_execActivateEffects_Parms ActivateEffects_Parms;

	this->ProcessEvent ( pFnActivateEffects, &ActivateEffects_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetSocketName
// [0x00020102] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName ADunDefPlayerAbility_ManaCharge::GetSocketName ( )
{
	static UFunction* pFnGetSocketName = NULL;

	if ( ! pFnGetSocketName )
		pFnGetSocketName = (UFunction*) UObject::GObjObjects()->Data[ 86327 ];

	ADunDefPlayerAbility_ManaCharge_execGetSocketName_Parms GetSocketName_Parms;

	this->ProcessEvent ( pFnGetSocketName, &GetSocketName_Parms, NULL );

	return GetSocketName_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.AttachParticles
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_ManaCharge::AttachParticles ( )
{
	static UFunction* pFnAttachParticles = NULL;

	if ( ! pFnAttachParticles )
		pFnAttachParticles = (UFunction*) UObject::GObjObjects()->Data[ 86325 ];

	ADunDefPlayerAbility_ManaCharge_execAttachParticles_Parms AttachParticles_Parms;

	this->ProcessEvent ( pFnAttachParticles, &AttachParticles_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetDamage
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefPlayerAbility_ManaCharge::GetDamage ( )
{
	static UFunction* pFnGetDamage = NULL;

	if ( ! pFnGetDamage )
		pFnGetDamage = (UFunction*) UObject::GObjObjects()->Data[ 86323 ];

	ADunDefPlayerAbility_ManaCharge_execGetDamage_Parms GetDamage_Parms;

	this->ProcessEvent ( pFnGetDamage, &GetDamage_Parms, NULL );

	return GetDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ResetManaCharge
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_ManaCharge::ResetManaCharge ( )
{
	static UFunction* pFnResetManaCharge = NULL;

	if ( ! pFnResetManaCharge )
		pFnResetManaCharge = (UFunction*) UObject::GObjObjects()->Data[ 86322 ];

	ADunDefPlayerAbility_ManaCharge_execResetManaCharge_Parms ResetManaCharge_Parms;

	this->ProcessEvent ( pFnResetManaCharge, &ResetManaCharge_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.AddManaCharge
// [0x00020102] 
// Parameters infos:
// int                            addedMana                      ( CPF_Parm )

void ADunDefPlayerAbility_ManaCharge::AddManaCharge ( int addedMana )
{
	static UFunction* pFnAddManaCharge = NULL;

	if ( ! pFnAddManaCharge )
		pFnAddManaCharge = (UFunction*) UObject::GObjObjects()->Data[ 86320 ];

	ADunDefPlayerAbility_ManaCharge_execAddManaCharge_Parms AddManaCharge_Parms;
	AddManaCharge_Parms.addedMana = addedMana;

	this->ProcessEvent ( pFnAddManaCharge, &AddManaCharge_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.SpawnManaEffect
// [0x00820102] 
// Parameters infos:

void ADunDefPlayerAbility_ManaCharge::SpawnManaEffect ( )
{
	static UFunction* pFnSpawnManaEffect = NULL;

	if ( ! pFnSpawnManaEffect )
		pFnSpawnManaEffect = (UFunction*) UObject::GObjObjects()->Data[ 86317 ];

	ADunDefPlayerAbility_ManaCharge_execSpawnManaEffect_Parms SpawnManaEffect_Parms;

	this->ProcessEvent ( pFnSpawnManaEffect, &SpawnManaEffect_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ServerCollectManaToken
// [0x002200C2] 
// Parameters infos:
// class ADunDefManaToken*        Token                          ( CPF_Parm )

void ADunDefPlayerAbility_ManaCharge::ServerCollectManaToken ( class ADunDefManaToken* Token )
{
	static UFunction* pFnServerCollectManaToken = NULL;

	if ( ! pFnServerCollectManaToken )
		pFnServerCollectManaToken = (UFunction*) UObject::GObjObjects()->Data[ 86315 ];

	ADunDefPlayerAbility_ManaCharge_execServerCollectManaToken_Parms ServerCollectManaToken_Parms;
	ServerCollectManaToken_Parms.Token = Token;

	this->ProcessEvent ( pFnServerCollectManaToken, &ServerCollectManaToken_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.InCylinderFwd
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Origin                         ( CPF_Parm )
// struct FVector                 VDir                           ( CPF_Parm )
// float                          RadiusSq                       ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm )

bool ADunDefPlayerAbility_ManaCharge::InCylinderFwd ( struct FVector Origin, struct FVector VDir, float RadiusSq, struct FVector A )
{
	static UFunction* pFnInCylinderFwd = NULL;

	if ( ! pFnInCylinderFwd )
		pFnInCylinderFwd = (UFunction*) UObject::GObjObjects()->Data[ 86308 ];

	ADunDefPlayerAbility_ManaCharge_execInCylinderFwd_Parms InCylinderFwd_Parms;
	memcpy ( &InCylinderFwd_Parms.Origin, &Origin, 0xC );
	memcpy ( &InCylinderFwd_Parms.VDir, &VDir, 0xC );
	InCylinderFwd_Parms.RadiusSq = RadiusSq;
	memcpy ( &InCylinderFwd_Parms.A, &A, 0xC );

	this->ProcessEvent ( pFnInCylinderFwd, &InCylinderFwd_Parms, NULL );

	return InCylinderFwd_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.DoDamage
// [0x00820002] 
// Parameters infos:

void ADunDefPlayerAbility_ManaCharge::DoDamage ( )
{
	static UFunction* pFnDoDamage = NULL;

	if ( ! pFnDoDamage )
		pFnDoDamage = (UFunction*) UObject::GObjObjects()->Data[ 86303 ];

	ADunDefPlayerAbility_ManaCharge_execDoDamage_Parms DoDamage_Parms;

	this->ProcessEvent ( pFnDoDamage, &DoDamage_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.CheckForFire
// [0x00020100] 
// Parameters infos:

void ADunDefPlayerAbility_ManaCharge::CheckForFire ( )
{
	static UFunction* pFnCheckForFire = NULL;

	if ( ! pFnCheckForFire )
		pFnCheckForFire = (UFunction*) UObject::GObjObjects()->Data[ 86302 ];

	ADunDefPlayerAbility_ManaCharge_execCheckForFire_Parms CheckForFire_Parms;

	this->ProcessEvent ( pFnCheckForFire, &CheckForFire_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetTimeBasedOnCharge
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayerAbility_ManaCharge::GetTimeBasedOnCharge ( )
{
	static UFunction* pFnGetTimeBasedOnCharge = NULL;

	if ( ! pFnGetTimeBasedOnCharge )
		pFnGetTimeBasedOnCharge = (UFunction*) UObject::GObjObjects()->Data[ 86299 ];

	ADunDefPlayerAbility_ManaCharge_execGetTimeBasedOnCharge_Parms GetTimeBasedOnCharge_Parms;

	this->ProcessEvent ( pFnGetTimeBasedOnCharge, &GetTimeBasedOnCharge_Parms, NULL );

	return GetTimeBasedOnCharge_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.StartDamage
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_ManaCharge::StartDamage ( )
{
	static UFunction* pFnStartDamage = NULL;

	if ( ! pFnStartDamage )
		pFnStartDamage = (UFunction*) UObject::GObjObjects()->Data[ 86298 ];

	ADunDefPlayerAbility_ManaCharge_execStartDamage_Parms StartDamage_Parms;

	this->ProcessEvent ( pFnStartDamage, &StartDamage_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.StartDamageEffects
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_ManaCharge::StartDamageEffects ( )
{
	static UFunction* pFnStartDamageEffects = NULL;

	if ( ! pFnStartDamageEffects )
		pFnStartDamageEffects = (UFunction*) UObject::GObjObjects()->Data[ 86297 ];

	ADunDefPlayerAbility_ManaCharge_execStartDamageEffects_Parms StartDamageEffects_Parms;

	this->ProcessEvent ( pFnStartDamageEffects, &StartDamageEffects_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.CanHoldMoreCharge
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_ManaCharge::CanHoldMoreCharge ( )
{
	static UFunction* pFnCanHoldMoreCharge = NULL;

	if ( ! pFnCanHoldMoreCharge )
		pFnCanHoldMoreCharge = (UFunction*) UObject::GObjObjects()->Data[ 85582 ];

	ADunDefPlayerAbility_ManaCharge_execCanHoldMoreCharge_Parms CanHoldMoreCharge_Parms;

	this->ProcessEvent ( pFnCanHoldMoreCharge, &CanHoldMoreCharge_Parms, NULL );

	return CanHoldMoreCharge_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.CancelAbility
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_ManaCharge::CancelAbility ( )
{
	static UFunction* pFnCancelAbility = NULL;

	if ( ! pFnCancelAbility )
		pFnCancelAbility = (UFunction*) UObject::GObjObjects()->Data[ 86286 ];

	ADunDefPlayerAbility_ManaCharge_execCancelAbility_Parms CancelAbility_Parms;

	this->ProcessEvent ( pFnCancelAbility, &CancelAbility_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.OnActivate
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_ManaCharge::OnActivate ( )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 86284 ];

	ADunDefPlayerAbility_ManaCharge_execOnActivate_Parms OnActivate_Parms;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayerAbility_ManaCharge::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 86283 ];

	ADunDefPlayerAbility_ManaCharge_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayerAbility_ManaCharge::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 86266 ];

	ADunDefPlayerAbility_ManaCharge_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.AllowUsageDuringCastingStates
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_PhaseShift::AllowUsageDuringCastingStates ( )
{
	static UFunction* pFnAllowUsageDuringCastingStates = NULL;

	if ( ! pFnAllowUsageDuringCastingStates )
		pFnAllowUsageDuringCastingStates = (UFunction*) UObject::GObjObjects()->Data[ 86671 ];

	ADunDefPlayerAbility_PhaseShift_execAllowUsageDuringCastingStates_Parms AllowUsageDuringCastingStates_Parms;

	this->ProcessEvent ( pFnAllowUsageDuringCastingStates, &AllowUsageDuringCastingStates_Parms, NULL );

	return AllowUsageDuringCastingStates_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.GetCastingStateNamePC
// [0x00020102] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName ADunDefPlayerAbility_PhaseShift::GetCastingStateNamePC ( )
{
	static UFunction* pFnGetCastingStateNamePC = NULL;

	if ( ! pFnGetCastingStateNamePC )
		pFnGetCastingStateNamePC = (UFunction*) UObject::GObjObjects()->Data[ 86669 ];

	ADunDefPlayerAbility_PhaseShift_execGetCastingStateNamePC_Parms GetCastingStateNamePC_Parms;

	this->ProcessEvent ( pFnGetCastingStateNamePC, &GetCastingStateNamePC_Parms, NULL );

	return GetCastingStateNamePC_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.CancelAbility
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_PhaseShift::CancelAbility ( )
{
	static UFunction* pFnCancelAbility = NULL;

	if ( ! pFnCancelAbility )
		pFnCancelAbility = (UFunction*) UObject::GObjObjects()->Data[ 86668 ];

	ADunDefPlayerAbility_PhaseShift_execCancelAbility_Parms CancelAbility_Parms;

	this->ProcessEvent ( pFnCancelAbility, &CancelAbility_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ClientForceCancel
// [0x010201C2] 
// Parameters infos:

void ADunDefPlayerAbility_PhaseShift::ClientForceCancel ( )
{
	static UFunction* pFnClientForceCancel = NULL;

	if ( ! pFnClientForceCancel )
		pFnClientForceCancel = (UFunction*) UObject::GObjObjects()->Data[ 86667 ];

	ADunDefPlayerAbility_PhaseShift_execClientForceCancel_Parms ClientForceCancel_Parms;

	this->ProcessEvent ( pFnClientForceCancel, &ClientForceCancel_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ForceCancel
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_PhaseShift::ForceCancel ( )
{
	static UFunction* pFnForceCancel = NULL;

	if ( ! pFnForceCancel )
		pFnForceCancel = (UFunction*) UObject::GObjObjects()->Data[ 86666 ];

	ADunDefPlayerAbility_PhaseShift_execForceCancel_Parms ForceCancel_Parms;

	this->ProcessEvent ( pFnForceCancel, &ForceCancel_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetPhaseMaterials
// [0x00020102] 
// Parameters infos:
// unsigned long                  bPhasedMaterials               ( CPF_Parm )

void ADunDefPlayerAbility_PhaseShift::SetPhaseMaterials ( unsigned long bPhasedMaterials )
{
	static UFunction* pFnSetPhaseMaterials = NULL;

	if ( ! pFnSetPhaseMaterials )
		pFnSetPhaseMaterials = (UFunction*) UObject::GObjObjects()->Data[ 86663 ];

	ADunDefPlayerAbility_PhaseShift_execSetPhaseMaterials_Parms SetPhaseMaterials_Parms;
	SetPhaseMaterials_Parms.bPhasedMaterials = bPhasedMaterials;

	this->ProcessEvent ( pFnSetPhaseMaterials, &SetPhaseMaterials_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.StartScaleUp
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_PhaseShift::StartScaleUp ( )
{
	static UFunction* pFnStartScaleUp = NULL;

	if ( ! pFnStartScaleUp )
		pFnStartScaleUp = (UFunction*) UObject::GObjObjects()->Data[ 86661 ];

	ADunDefPlayerAbility_PhaseShift_execStartScaleUp_Parms StartScaleUp_Parms;

	this->ProcessEvent ( pFnStartScaleUp, &StartScaleUp_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetMaterialColors
// [0x00020102] 
// Parameters infos:
// struct FLinearColor            C1                             ( CPF_Parm )
// struct FLinearColor            c2                             ( CPF_Parm )
// struct FLinearColor            C3                             ( CPF_Parm )

void ADunDefPlayerAbility_PhaseShift::SetMaterialColors ( struct FLinearColor C1, struct FLinearColor c2, struct FLinearColor C3 )
{
	static UFunction* pFnSetMaterialColors = NULL;

	if ( ! pFnSetMaterialColors )
		pFnSetMaterialColors = (UFunction*) UObject::GObjObjects()->Data[ 86656 ];

	ADunDefPlayerAbility_PhaseShift_execSetMaterialColors_Parms SetMaterialColors_Parms;
	memcpy ( &SetMaterialColors_Parms.C1, &C1, 0x10 );
	memcpy ( &SetMaterialColors_Parms.c2, &c2, 0x10 );
	memcpy ( &SetMaterialColors_Parms.C3, &C3, 0x10 );

	this->ProcessEvent ( pFnSetMaterialColors, &SetMaterialColors_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.OnActivate
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_PhaseShift::OnActivate ( )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 86652 ];

	ADunDefPlayerAbility_PhaseShift_execOnActivate_Parms OnActivate_Parms;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetDefaultValues
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_PhaseShift::SetDefaultValues ( )
{
	static UFunction* pFnSetDefaultValues = NULL;

	if ( ! pFnSetDefaultValues )
		pFnSetDefaultValues = (UFunction*) UObject::GObjObjects()->Data[ 86649 ];

	ADunDefPlayerAbility_PhaseShift_execSetDefaultValues_Parms SetDefaultValues_Parms;

	this->ProcessEvent ( pFnSetDefaultValues, &SetDefaultValues_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetPhaseShiftValue
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_PhaseShift::SetPhaseShiftValue ( )
{
	static UFunction* pFnSetPhaseShiftValue = NULL;

	if ( ! pFnSetPhaseShiftValue )
		pFnSetPhaseShiftValue = (UFunction*) UObject::GObjObjects()->Data[ 86647 ];

	ADunDefPlayerAbility_PhaseShift_execSetPhaseShiftValue_Parms SetPhaseShiftValue_Parms;

	this->ProcessEvent ( pFnSetPhaseShiftValue, &SetPhaseShiftValue_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.PhaseScaleDown
// [0x00020100] 
// Parameters infos:

void ADunDefPlayerAbility_PhaseShift::PhaseScaleDown ( )
{
	static UFunction* pFnPhaseScaleDown = NULL;

	if ( ! pFnPhaseScaleDown )
		pFnPhaseScaleDown = (UFunction*) UObject::GObjObjects()->Data[ 86646 ];

	ADunDefPlayerAbility_PhaseShift_execPhaseScaleDown_Parms PhaseScaleDown_Parms;

	this->ProcessEvent ( pFnPhaseScaleDown, &PhaseScaleDown_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_PhaseShift::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 86642 ];

	ADunDefPlayerAbility_PhaseShift_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.FinishScaleUp
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_PhaseShift::FinishScaleUp ( )
{
	static UFunction* pFnFinishScaleUp = NULL;

	if ( ! pFnFinishScaleUp )
		pFnFinishScaleUp = (UFunction*) UObject::GObjObjects()->Data[ 86641 ];

	ADunDefPlayerAbility_PhaseShift_execFinishScaleUp_Parms FinishScaleUp_Parms;

	this->ProcessEvent ( pFnFinishScaleUp, &FinishScaleUp_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.InitializeForPlayer
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayer*           myPlayer                       ( CPF_Parm )

void ADunDefPlayerAbility_PhaseShift::InitializeForPlayer ( class ADunDefPlayer* myPlayer )
{
	static UFunction* pFnInitializeForPlayer = NULL;

	if ( ! pFnInitializeForPlayer )
		pFnInitializeForPlayer = (UFunction*) UObject::GObjObjects()->Data[ 86623 ];

	ADunDefPlayerAbility_PhaseShift_execInitializeForPlayer_Parms InitializeForPlayer_Parms;
	InitializeForPlayer_Parms.myPlayer = myPlayer;

	this->ProcessEvent ( pFnInitializeForPlayer, &InitializeForPlayer_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayerAbility_PhaseShift::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 86622 ];

	ADunDefPlayerAbility_PhaseShift_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayerAbility_PhaseShift::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 86605 ];

	ADunDefPlayerAbility_PhaseShift_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefPlayerAbility_PhaseShift::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 86603 ];

	ADunDefPlayerAbility_PhaseShift_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayerAbility_BuilTripWire::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 85891 ];

	ADunDefPlayerAbility_BuilTripWire_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.CancelAbility
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_BuilTripWire::CancelAbility ( )
{
	static UFunction* pFnCancelAbility = NULL;

	if ( ! pFnCancelAbility )
		pFnCancelAbility = (UFunction*) UObject::GObjObjects()->Data[ 85890 ];

	ADunDefPlayerAbility_BuilTripWire_execCancelAbility_Parms CancelAbility_Parms;

	this->ProcessEvent ( pFnCancelAbility, &CancelAbility_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.AllowTowerPlacementPosition
// [0x00C24102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 placementPos                   ( CPF_Parm )
// unsigned long                  bOnlyCheckVolumes              ( CPF_OptionalParm | CPF_Parm )
// int                            PlacementDeniedReason          ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

bool ADunDefPlayerAbility_BuilTripWire::AllowTowerPlacementPosition ( struct FVector placementPos, unsigned long bOnlyCheckVolumes, int* PlacementDeniedReason )
{
	static UFunction* pFnAllowTowerPlacementPosition = NULL;

	if ( ! pFnAllowTowerPlacementPosition )
		pFnAllowTowerPlacementPosition = (UFunction*) UObject::GObjObjects()->Data[ 85875 ];

	ADunDefPlayerAbility_BuilTripWire_execAllowTowerPlacementPosition_Parms AllowTowerPlacementPosition_Parms;
	memcpy ( &AllowTowerPlacementPosition_Parms.placementPos, &placementPos, 0xC );
	AllowTowerPlacementPosition_Parms.bOnlyCheckVolumes = bOnlyCheckVolumes;

	this->ProcessEvent ( pFnAllowTowerPlacementPosition, &AllowTowerPlacementPosition_Parms, NULL );

	if ( PlacementDeniedReason )
		*PlacementDeniedReason = AllowTowerPlacementPosition_Parms.PlacementDeniedReason;

	return AllowTowerPlacementPosition_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.GetCenterLocation
// [0x00020102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ADunDefPlayerAbility_BuilTripWire::GetCenterLocation ( )
{
	static UFunction* pFnGetCenterLocation = NULL;

	if ( ! pFnGetCenterLocation )
		pFnGetCenterLocation = (UFunction*) UObject::GObjObjects()->Data[ 85873 ];

	ADunDefPlayerAbility_BuilTripWire_execGetCenterLocation_Parms GetCenterLocation_Parms;

	this->ProcessEvent ( pFnGetCenterLocation, &GetCenterLocation_Parms, NULL );

	return GetCenterLocation_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.CanPlaceTowerUnitCost
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_BuilTripWire::CanPlaceTowerUnitCost ( )
{
	static UFunction* pFnCanPlaceTowerUnitCost = NULL;

	if ( ! pFnCanPlaceTowerUnitCost )
		pFnCanPlaceTowerUnitCost = (UFunction*) UObject::GObjObjects()->Data[ 85871 ];

	ADunDefPlayerAbility_BuilTripWire_execCanPlaceTowerUnitCost_Parms CanPlaceTowerUnitCost_Parms;

	this->ProcessEvent ( pFnCanPlaceTowerUnitCost, &CanPlaceTowerUnitCost_Parms, NULL );

	return CanPlaceTowerUnitCost_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.GetDUCost
// [0x00820102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefPlayerAbility_BuilTripWire::GetDUCost ( )
{
	static UFunction* pFnGetDUCost = NULL;

	if ( ! pFnGetDUCost )
		pFnGetDUCost = (UFunction*) UObject::GObjObjects()->Data[ 85860 ];

	ADunDefPlayerAbility_BuilTripWire_execGetDUCost_Parms GetDUCost_Parms;

	this->ProcessEvent ( pFnGetDUCost, &GetDUCost_Parms, NULL );

	return GetDUCost_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.DrawCastingHUD
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefHUD*              H                              ( CPF_Parm )

bool ADunDefPlayerAbility_BuilTripWire::DrawCastingHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawCastingHUD = NULL;

	if ( ! pFnDrawCastingHUD )
		pFnDrawCastingHUD = (UFunction*) UObject::GObjObjects()->Data[ 85856 ];

	ADunDefPlayerAbility_BuilTripWire_execDrawCastingHUD_Parms DrawCastingHUD_Parms;
	DrawCastingHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawCastingHUD, &DrawCastingHUD_Parms, NULL );

	return DrawCastingHUD_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.CreateNewPreviewPoint
// [0x00820102] 
// Parameters infos:
// struct FVector                 previewLoc                     ( CPF_Parm )

void ADunDefPlayerAbility_BuilTripWire::CreateNewPreviewPoint ( struct FVector previewLoc )
{
	static UFunction* pFnCreateNewPreviewPoint = NULL;

	if ( ! pFnCreateNewPreviewPoint )
		pFnCreateNewPreviewPoint = (UFunction*) UObject::GObjObjects()->Data[ 85852 ];

	ADunDefPlayerAbility_BuilTripWire_execCreateNewPreviewPoint_Parms CreateNewPreviewPoint_Parms;
	memcpy ( &CreateNewPreviewPoint_Parms.previewLoc, &previewLoc, 0xC );

	this->ProcessEvent ( pFnCreateNewPreviewPoint, &CreateNewPreviewPoint_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ClearPreviewPoints
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_BuilTripWire::ClearPreviewPoints ( )
{
	static UFunction* pFnClearPreviewPoints = NULL;

	if ( ! pFnClearPreviewPoints )
		pFnClearPreviewPoints = (UFunction*) UObject::GObjObjects()->Data[ 85850 ];

	ADunDefPlayerAbility_BuilTripWire_execClearPreviewPoints_Parms ClearPreviewPoints_Parms;

	this->ProcessEvent ( pFnClearPreviewPoints, &ClearPreviewPoints_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ServerAddPlacementPoint
// [0x002200C2] 
// Parameters infos:
// struct FVector                 tPlacementLocation             ( CPF_Parm )

void ADunDefPlayerAbility_BuilTripWire::ServerAddPlacementPoint ( struct FVector tPlacementLocation )
{
	static UFunction* pFnServerAddPlacementPoint = NULL;

	if ( ! pFnServerAddPlacementPoint )
		pFnServerAddPlacementPoint = (UFunction*) UObject::GObjObjects()->Data[ 85848 ];

	ADunDefPlayerAbility_BuilTripWire_execServerAddPlacementPoint_Parms ServerAddPlacementPoint_Parms;
	memcpy ( &ServerAddPlacementPoint_Parms.tPlacementLocation, &tPlacementLocation, 0xC );

	this->ProcessEvent ( pFnServerAddPlacementPoint, &ServerAddPlacementPoint_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.PostPlacementUpdate
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefPlayerAbility_BuilTripWire::PostPlacementUpdate ( float DeltaTime )
{
	static UFunction* pFnPostPlacementUpdate = NULL;

	if ( ! pFnPostPlacementUpdate )
		pFnPostPlacementUpdate = (UFunction*) UObject::GObjObjects()->Data[ 85844 ];

	ADunDefPlayerAbility_BuilTripWire_execPostPlacementUpdate_Parms PostPlacementUpdate_Parms;
	PostPlacementUpdate_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPostPlacementUpdate, &PostPlacementUpdate_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ServerRequestBuildTower
// [0x002200C2] 
// Parameters infos:
// struct FVector                 towerPlacementLocation         ( CPF_Parm )
// struct FRotator                towerPlacementRotation         ( CPF_Parm )

void ADunDefPlayerAbility_BuilTripWire::ServerRequestBuildTower ( struct FVector towerPlacementLocation, struct FRotator towerPlacementRotation )
{
	static UFunction* pFnServerRequestBuildTower = NULL;

	if ( ! pFnServerRequestBuildTower )
		pFnServerRequestBuildTower = (UFunction*) UObject::GObjObjects()->Data[ 85840 ];

	ADunDefPlayerAbility_BuilTripWire_execServerRequestBuildTower_Parms ServerRequestBuildTower_Parms;
	memcpy ( &ServerRequestBuildTower_Parms.towerPlacementLocation, &towerPlacementLocation, 0xC );
	memcpy ( &ServerRequestBuildTower_Parms.towerPlacementRotation, &towerPlacementRotation, 0xC );

	this->ProcessEvent ( pFnServerRequestBuildTower, &ServerRequestBuildTower_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.AbilityTick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefPlayerAbility_BuilTripWire::eventAbilityTick ( float DeltaTime )
{
	static UFunction* pFnAbilityTick = NULL;

	if ( ! pFnAbilityTick )
		pFnAbilityTick = (UFunction*) UObject::GObjObjects()->Data[ 85821 ];

	ADunDefPlayerAbility_BuilTripWire_eventAbilityTick_Parms AbilityTick_Parms;
	AbilityTick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnAbilityTick, &AbilityTick_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.HidePreviewPoints
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_BuilTripWire::HidePreviewPoints ( )
{
	static UFunction* pFnHidePreviewPoints = NULL;

	if ( ! pFnHidePreviewPoints )
		pFnHidePreviewPoints = (UFunction*) UObject::GObjObjects()->Data[ 85820 ];

	ADunDefPlayerAbility_BuilTripWire_execHidePreviewPoints_Parms HidePreviewPoints_Parms;

	this->ProcessEvent ( pFnHidePreviewPoints, &HidePreviewPoints_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.StopAltSummonTowerFXCompleted
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_BuilTripWire::StopAltSummonTowerFXCompleted ( )
{
	static UFunction* pFnStopAltSummonTowerFXCompleted = NULL;

	if ( ! pFnStopAltSummonTowerFXCompleted )
		pFnStopAltSummonTowerFXCompleted = (UFunction*) UObject::GObjObjects()->Data[ 85819 ];

	ADunDefPlayerAbility_BuilTripWire_execStopAltSummonTowerFXCompleted_Parms StopAltSummonTowerFXCompleted_Parms;

	this->ProcessEvent ( pFnStopAltSummonTowerFXCompleted, &StopAltSummonTowerFXCompleted_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.StopAltSummonTowerFX
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_BuilTripWire::StopAltSummonTowerFX ( )
{
	static UFunction* pFnStopAltSummonTowerFX = NULL;

	if ( ! pFnStopAltSummonTowerFX )
		pFnStopAltSummonTowerFX = (UFunction*) UObject::GObjObjects()->Data[ 85818 ];

	ADunDefPlayerAbility_BuilTripWire_execStopAltSummonTowerFX_Parms StopAltSummonTowerFX_Parms;

	this->ProcessEvent ( pFnStopAltSummonTowerFX, &StopAltSummonTowerFX_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.UpdateAltSummonTowerFX
// [0x00020102] 
// Parameters infos:
// float                          Percent                        ( CPF_Parm )

void ADunDefPlayerAbility_BuilTripWire::UpdateAltSummonTowerFX ( float Percent )
{
	static UFunction* pFnUpdateAltSummonTowerFX = NULL;

	if ( ! pFnUpdateAltSummonTowerFX )
		pFnUpdateAltSummonTowerFX = (UFunction*) UObject::GObjObjects()->Data[ 85816 ];

	ADunDefPlayerAbility_BuilTripWire_execUpdateAltSummonTowerFX_Parms UpdateAltSummonTowerFX_Parms;
	UpdateAltSummonTowerFX_Parms.Percent = Percent;

	this->ProcessEvent ( pFnUpdateAltSummonTowerFX, &UpdateAltSummonTowerFX_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.BeginAltSummonTowerFX
// [0x00024102] 
// Parameters infos:
// class ADunDefEmitterSpawnable* spellEffect                    ( CPF_Parm )
// struct FVector                 thePlacementLocation           ( CPF_Parm )
// struct FRotator                thePlacementRotation           ( CPF_Parm )
// float                          scaleMult                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bUsesDecal                     ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayerAbility_BuilTripWire::BeginAltSummonTowerFX ( class ADunDefEmitterSpawnable* spellEffect, struct FVector thePlacementLocation, struct FRotator thePlacementRotation, float scaleMult, unsigned long bUsesDecal )
{
	static UFunction* pFnBeginAltSummonTowerFX = NULL;

	if ( ! pFnBeginAltSummonTowerFX )
		pFnBeginAltSummonTowerFX = (UFunction*) UObject::GObjObjects()->Data[ 85810 ];

	ADunDefPlayerAbility_BuilTripWire_execBeginAltSummonTowerFX_Parms BeginAltSummonTowerFX_Parms;
	BeginAltSummonTowerFX_Parms.spellEffect = spellEffect;
	memcpy ( &BeginAltSummonTowerFX_Parms.thePlacementLocation, &thePlacementLocation, 0xC );
	memcpy ( &BeginAltSummonTowerFX_Parms.thePlacementRotation, &thePlacementRotation, 0xC );
	BeginAltSummonTowerFX_Parms.scaleMult = scaleMult;
	BeginAltSummonTowerFX_Parms.bUsesDecal = bUsesDecal;

	this->ProcessEvent ( pFnBeginAltSummonTowerFX, &BeginAltSummonTowerFX_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayerAbility_BuilTripWire::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 85785 ];

	ADunDefPlayerAbility_BuilTripWire_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_DefenseBoost::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 85947 ];

	ADunDefPlayerAbility_DefenseBoost_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveTower
// [0x00020102] 
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void ADunDefPlayerAbility_DefenseBoost::RemoveTower ( int Index )
{
	static UFunction* pFnRemoveTower = NULL;

	if ( ! pFnRemoveTower )
		pFnRemoveTower = (UFunction*) UObject::GObjObjects()->Data[ 85945 ];

	ADunDefPlayerAbility_DefenseBoost_execRemoveTower_Parms RemoveTower_Parms;
	RemoveTower_Parms.Index = Index;

	this->ProcessEvent ( pFnRemoveTower, &RemoveTower_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.AddTower
// [0x00820102] 
// Parameters infos:
// class AActor*                  theAct                         ( CPF_Parm )

void ADunDefPlayerAbility_DefenseBoost::AddTower ( class AActor* theAct )
{
	static UFunction* pFnAddTower = NULL;

	if ( ! pFnAddTower )
		pFnAddTower = (UFunction*) UObject::GObjObjects()->Data[ 85942 ];

	ADunDefPlayerAbility_DefenseBoost_execAddTower_Parms AddTower_Parms;
	AddTower_Parms.theAct = theAct;

	this->ProcessEvent ( pFnAddTower, &AddTower_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayerAbility_DefenseBoost::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 85936 ];

	ADunDefPlayerAbility_DefenseBoost_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveAllTowers
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_DefenseBoost::RemoveAllTowers ( )
{
	static UFunction* pFnRemoveAllTowers = NULL;

	if ( ! pFnRemoveAllTowers )
		pFnRemoveAllTowers = (UFunction*) UObject::GObjObjects()->Data[ 85934 ];

	ADunDefPlayerAbility_DefenseBoost_execRemoveAllTowers_Parms RemoveAllTowers_Parms;

	this->ProcessEvent ( pFnRemoveAllTowers, &RemoveAllTowers_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.CheckAllTowers
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_DefenseBoost::CheckAllTowers ( )
{
	static UFunction* pFnCheckAllTowers = NULL;

	if ( ! pFnCheckAllTowers )
		pFnCheckAllTowers = (UFunction*) UObject::GObjObjects()->Data[ 85932 ];

	ADunDefPlayerAbility_DefenseBoost_execCheckAllTowers_Parms CheckAllTowers_Parms;

	this->ProcessEvent ( pFnCheckAllTowers, &CheckAllTowers_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveAllTowersFor
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayer*           aPlayer                        ( CPF_Parm )

void ADunDefPlayerAbility_DefenseBoost::RemoveAllTowersFor ( class ADunDefPlayer* aPlayer )
{
	static UFunction* pFnRemoveAllTowersFor = NULL;

	if ( ! pFnRemoveAllTowersFor )
		pFnRemoveAllTowersFor = (UFunction*) UObject::GObjObjects()->Data[ 85929 ];

	ADunDefPlayerAbility_DefenseBoost_execRemoveAllTowersFor_Parms RemoveAllTowersFor_Parms;
	RemoveAllTowersFor_Parms.aPlayer = aPlayer;

	this->ProcessEvent ( pFnRemoveAllTowersFor, &RemoveAllTowersFor_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.AddAllTowersFor
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayer*           aPlayer                        ( CPF_Parm )

void ADunDefPlayerAbility_DefenseBoost::AddAllTowersFor ( class ADunDefPlayer* aPlayer )
{
	static UFunction* pFnAddAllTowersFor = NULL;

	if ( ! pFnAddAllTowersFor )
		pFnAddAllTowersFor = (UFunction*) UObject::GObjObjects()->Data[ 85926 ];

	ADunDefPlayerAbility_DefenseBoost_execAddAllTowersFor_Parms AddAllTowersFor_Parms;
	AddAllTowersFor_Parms.aPlayer = aPlayer;

	this->ProcessEvent ( pFnAddAllTowersFor, &AddAllTowersFor_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.AddEffect
// [0x00020102] 
// Parameters infos:
// class AActor*                  theAct                         ( CPF_Parm )

void ADunDefPlayerAbility_DefenseBoost::AddEffect ( class AActor* theAct )
{
	static UFunction* pFnAddEffect = NULL;

	if ( ! pFnAddEffect )
		pFnAddEffect = (UFunction*) UObject::GObjObjects()->Data[ 85924 ];

	ADunDefPlayerAbility_DefenseBoost_execAddEffect_Parms AddEffect_Parms;
	AddEffect_Parms.theAct = theAct;

	this->ProcessEvent ( pFnAddEffect, &AddEffect_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveEffect
// [0x00020102] 
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void ADunDefPlayerAbility_DefenseBoost::RemoveEffect ( int Index )
{
	static UFunction* pFnRemoveEffect = NULL;

	if ( ! pFnRemoveEffect )
		pFnRemoveEffect = (UFunction*) UObject::GObjObjects()->Data[ 85922 ];

	ADunDefPlayerAbility_DefenseBoost_execRemoveEffect_Parms RemoveEffect_Parms;
	RemoveEffect_Parms.Index = Index;

	this->ProcessEvent ( pFnRemoveEffect, &RemoveEffect_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.GetTowerBoostAmount
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

float ADunDefPlayerAbility_DefenseBoost::GetTowerBoostAmount ( unsigned char boostType )
{
	static UFunction* pFnGetTowerBoostAmount = NULL;

	if ( ! pFnGetTowerBoostAmount )
		pFnGetTowerBoostAmount = (UFunction*) UObject::GObjObjects()->Data[ 85918 ];

	ADunDefPlayerAbility_DefenseBoost_execGetTowerBoostAmount_Parms GetTowerBoostAmount_Parms;
	GetTowerBoostAmount_Parms.boostType = boostType;

	this->ProcessEvent ( pFnGetTowerBoostAmount, &GetTowerBoostAmount_Parms, NULL );

	return GetTowerBoostAmount_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.HasTowerBoostingType
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

bool ADunDefPlayerAbility_DefenseBoost::HasTowerBoostingType ( unsigned char boostType )
{
	static UFunction* pFnHasTowerBoostingType = NULL;

	if ( ! pFnHasTowerBoostingType )
		pFnHasTowerBoostingType = (UFunction*) UObject::GObjObjects()->Data[ 85915 ];

	ADunDefPlayerAbility_DefenseBoost_execHasTowerBoostingType_Parms HasTowerBoostingType_Parms;
	HasTowerBoostingType_Parms.boostType = boostType;

	this->ProcessEvent ( pFnHasTowerBoostingType, &HasTowerBoostingType_Parms, NULL );

	return HasTowerBoostingType_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.GetTowerBoostingTarget
// [0x00020000] 
// Parameters infos:
// class UDunDefTargetableInterface* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UDunDefTargetableInterface* ADunDefPlayerAbility_DefenseBoost::GetTowerBoostingTarget ( )
{
	static UFunction* pFnGetTowerBoostingTarget = NULL;

	if ( ! pFnGetTowerBoostingTarget )
		pFnGetTowerBoostingTarget = (UFunction*) UObject::GObjObjects()->Data[ 85913 ];

	ADunDefPlayerAbility_DefenseBoost_execGetTowerBoostingTarget_Parms GetTowerBoostingTarget_Parms;

	this->ProcessEvent ( pFnGetTowerBoostingTarget, &GetTowerBoostingTarget_Parms, NULL );

	return GetTowerBoostingTarget_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_EnemyDrain::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 85975 ];

	ADunDefPlayerAbility_EnemyDrain_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetPawnResistanceMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayerAbility_EnemyDrain::GetPawnResistanceMultiplier ( )
{
	static UFunction* pFnGetPawnResistanceMultiplier = NULL;

	if ( ! pFnGetPawnResistanceMultiplier )
		pFnGetPawnResistanceMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 85973 ];

	ADunDefPlayerAbility_EnemyDrain_execGetPawnResistanceMultiplier_Parms GetPawnResistanceMultiplier_Parms;

	this->ProcessEvent ( pFnGetPawnResistanceMultiplier, &GetPawnResistanceMultiplier_Parms, NULL );

	return GetPawnResistanceMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetSpeedMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayerAbility_EnemyDrain::GetSpeedMultiplier ( )
{
	static UFunction* pFnGetSpeedMultiplier = NULL;

	if ( ! pFnGetSpeedMultiplier )
		pFnGetSpeedMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 85970 ];

	ADunDefPlayerAbility_EnemyDrain_execGetSpeedMultiplier_Parms GetSpeedMultiplier_Parms;

	this->ProcessEvent ( pFnGetSpeedMultiplier, &GetSpeedMultiplier_Parms, NULL );

	return GetSpeedMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetDamageMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayerAbility_EnemyDrain::GetDamageMultiplier ( )
{
	static UFunction* pFnGetDamageMultiplier = NULL;

	if ( ! pFnGetDamageMultiplier )
		pFnGetDamageMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 85967 ];

	ADunDefPlayerAbility_EnemyDrain_execGetDamageMultiplier_Parms GetDamageMultiplier_Parms;

	this->ProcessEvent ( pFnGetDamageMultiplier, &GetDamageMultiplier_Parms, NULL );

	return GetDamageMultiplier_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.CanAffect
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  theAct                         ( CPF_Parm )

bool ADunDefPlayerAbility_EnemyDrain::CanAffect ( class AActor* theAct )
{
	static UFunction* pFnCanAffect = NULL;

	if ( ! pFnCanAffect )
		pFnCanAffect = (UFunction*) UObject::GObjObjects()->Data[ 85964 ];

	ADunDefPlayerAbility_EnemyDrain_execCanAffect_Parms CanAffect_Parms;
	CanAffect_Parms.theAct = theAct;

	this->ProcessEvent ( pFnCanAffect, &CanAffect_Parms, NULL );

	return CanAffect_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.AddEffect
// [0x00020102] 
// Parameters infos:
// class AActor*                  theAct                         ( CPF_Parm )

void ADunDefPlayerAbility_EnemyDrain::AddEffect ( class AActor* theAct )
{
	static UFunction* pFnAddEffect = NULL;

	if ( ! pFnAddEffect )
		pFnAddEffect = (UFunction*) UObject::GObjObjects()->Data[ 85962 ];

	ADunDefPlayerAbility_EnemyDrain_execAddEffect_Parms AddEffect_Parms;
	AddEffect_Parms.theAct = theAct;

	this->ProcessEvent ( pFnAddEffect, &AddEffect_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.RemoveEffect
// [0x00020102] 
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void ADunDefPlayerAbility_EnemyDrain::RemoveEffect ( int Index )
{
	static UFunction* pFnRemoveEffect = NULL;

	if ( ! pFnRemoveEffect )
		pFnRemoveEffect = (UFunction*) UObject::GObjObjects()->Data[ 85960 ];

	ADunDefPlayerAbility_EnemyDrain_execRemoveEffect_Parms RemoveEffect_Parms;
	RemoveEffect_Parms.Index = Index;

	this->ProcessEvent ( pFnRemoveEffect, &RemoveEffect_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner.DoMultiActorSpawn
// [0x00820002] 
// Parameters infos:

void ADunDefPlayerAbility_GenericMultiActorSpawner::DoMultiActorSpawn ( )
{
	static UFunction* pFnDoMultiActorSpawn = NULL;

	if ( ! pFnDoMultiActorSpawn )
		pFnDoMultiActorSpawn = (UFunction*) UObject::GObjObjects()->Data[ 85989 ];

	ADunDefPlayerAbility_GenericMultiActorSpawner_execDoMultiActorSpawn_Parms DoMultiActorSpawn_Parms;

	this->ProcessEvent ( pFnDoMultiActorSpawn, &DoMultiActorSpawn_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner.SetUpActorSpawn
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_GenericMultiActorSpawner::SetUpActorSpawn ( )
{
	static UFunction* pFnSetUpActorSpawn = NULL;

	if ( ! pFnSetUpActorSpawn )
		pFnSetUpActorSpawn = (UFunction*) UObject::GObjObjects()->Data[ 85988 ];

	ADunDefPlayerAbility_GenericMultiActorSpawner_execSetUpActorSpawn_Parms SetUpActorSpawn_Parms;

	this->ProcessEvent ( pFnSetUpActorSpawn, &SetUpActorSpawn_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_InstantUpgradeTower::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 86051 ];

	ADunDefPlayerAbility_InstantUpgradeTower_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.SortTracedActors
// [0x00420102] 
// Parameters infos:
// TArray< struct FActorHitInfo > TracedActors                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ADunDefPlayerAbility_InstantUpgradeTower::SortTracedActors ( TArray< struct FActorHitInfo >* TracedActors )
{
	static UFunction* pFnSortTracedActors = NULL;

	if ( ! pFnSortTracedActors )
		pFnSortTracedActors = (UFunction*) UObject::GObjObjects()->Data[ 86034 ];

	ADunDefPlayerAbility_InstantUpgradeTower_execSortTracedActors_Parms SortTracedActors_Parms;

	this->ProcessEvent ( pFnSortTracedActors, &SortTracedActors_Parms, NULL );

	if ( TracedActors )
		memcpy ( TracedActors, &SortTracedActors_Parms.TracedActors, 0xC );
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.DrawUpgradeOverlay
// [0x00820102] 
// Parameters infos:
// class ADunDefHUD*              H                              ( CPF_Parm )
// float                          Opacity                        ( CPF_Parm )
// struct FColor                  upgradeOverlayColor            ( CPF_Parm )

void ADunDefPlayerAbility_InstantUpgradeTower::DrawUpgradeOverlay ( class ADunDefHUD* H, float Opacity, struct FColor upgradeOverlayColor )
{
	static UFunction* pFnDrawUpgradeOverlay = NULL;

	if ( ! pFnDrawUpgradeOverlay )
		pFnDrawUpgradeOverlay = (UFunction*) UObject::GObjObjects()->Data[ 86028 ];

	ADunDefPlayerAbility_InstantUpgradeTower_execDrawUpgradeOverlay_Parms DrawUpgradeOverlay_Parms;
	DrawUpgradeOverlay_Parms.H = H;
	DrawUpgradeOverlay_Parms.Opacity = Opacity;
	memcpy ( &DrawUpgradeOverlay_Parms.upgradeOverlayColor, &upgradeOverlayColor, 0x4 );

	this->ProcessEvent ( pFnDrawUpgradeOverlay, &DrawUpgradeOverlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.PreCursorDrawHUD
// [0x00020102] 
// Parameters infos:
// class ADunDefHUD*              H                              ( CPF_Parm )
// struct FVector                 CursorPos                      ( CPF_Parm )

void ADunDefPlayerAbility_InstantUpgradeTower::PreCursorDrawHUD ( class ADunDefHUD* H, struct FVector CursorPos )
{
	static UFunction* pFnPreCursorDrawHUD = NULL;

	if ( ! pFnPreCursorDrawHUD )
		pFnPreCursorDrawHUD = (UFunction*) UObject::GObjObjects()->Data[ 86025 ];

	ADunDefPlayerAbility_InstantUpgradeTower_execPreCursorDrawHUD_Parms PreCursorDrawHUD_Parms;
	PreCursorDrawHUD_Parms.H = H;
	memcpy ( &PreCursorDrawHUD_Parms.CursorPos, &CursorPos, 0xC );

	this->ProcessEvent ( pFnPreCursorDrawHUD, &PreCursorDrawHUD_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.GetTowerCost
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefPlayerAbility_InstantUpgradeTower::GetTowerCost ( )
{
	static UFunction* pFnGetTowerCost = NULL;

	if ( ! pFnGetTowerCost )
		pFnGetTowerCost = (UFunction*) UObject::GObjObjects()->Data[ 86020 ];

	ADunDefPlayerAbility_InstantUpgradeTower_execGetTowerCost_Parms GetTowerCost_Parms;

	this->ProcessEvent ( pFnGetTowerCost, &GetTowerCost_Parms, NULL );

	return GetTowerCost_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.IsValidUpgradeTower
// [0x00424102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower*            tower                          ( CPF_Parm )
// unsigned long                  bDontCountMana                 ( CPF_OptionalParm | CPF_Parm )
// int                            theNextUpgradeLevel            ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

bool ADunDefPlayerAbility_InstantUpgradeTower::IsValidUpgradeTower ( class ADunDefTower* tower, unsigned long bDontCountMana, int* theNextUpgradeLevel )
{
	static UFunction* pFnIsValidUpgradeTower = NULL;

	if ( ! pFnIsValidUpgradeTower )
		pFnIsValidUpgradeTower = (UFunction*) UObject::GObjObjects()->Data[ 86008 ];

	ADunDefPlayerAbility_InstantUpgradeTower_execIsValidUpgradeTower_Parms IsValidUpgradeTower_Parms;
	IsValidUpgradeTower_Parms.tower = tower;
	IsValidUpgradeTower_Parms.bDontCountMana = bDontCountMana;

	this->ProcessEvent ( pFnIsValidUpgradeTower, &IsValidUpgradeTower_Parms, NULL );

	if ( theNextUpgradeLevel )
		*theNextUpgradeLevel = IsValidUpgradeTower_Parms.theNextUpgradeLevel;

	return IsValidUpgradeTower_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.GetDisplayCost
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefPlayerAbility_InstantUpgradeTower::GetDisplayCost ( )
{
	static UFunction* pFnGetDisplayCost = NULL;

	if ( ! pFnGetDisplayCost )
		pFnGetDisplayCost = (UFunction*) UObject::GObjObjects()->Data[ 86006 ];

	ADunDefPlayerAbility_InstantUpgradeTower_execGetDisplayCost_Parms GetDisplayCost_Parms;

	this->ProcessEvent ( pFnGetDisplayCost, &GetDisplayCost_Parms, NULL );

	return GetDisplayCost_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.GetCostToActivate
// [0x00024102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  returnTrueValue                ( CPF_OptionalParm | CPF_Parm )

int ADunDefPlayerAbility_InstantUpgradeTower::GetCostToActivate ( unsigned long returnTrueValue )
{
	static UFunction* pFnGetCostToActivate = NULL;

	if ( ! pFnGetCostToActivate )
		pFnGetCostToActivate = (UFunction*) UObject::GObjObjects()->Data[ 86003 ];

	ADunDefPlayerAbility_InstantUpgradeTower_execGetCostToActivate_Parms GetCostToActivate_Parms;
	GetCostToActivate_Parms.returnTrueValue = returnTrueValue;

	this->ProcessEvent ( pFnGetCostToActivate, &GetCostToActivate_Parms, NULL );

	return GetCostToActivate_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.RemovedTower
// [0x00020002] 
// Parameters infos:
// class ADunDefTower*            affectedTower                  ( CPF_Parm )

void ADunDefPlayerAbility_InvisibilityAOE::RemovedTower ( class ADunDefTower* affectedTower )
{
	static UFunction* pFnRemovedTower = NULL;

	if ( ! pFnRemovedTower )
		pFnRemovedTower = (UFunction*) UObject::GObjObjects()->Data[ 86076 ];

	ADunDefPlayerAbility_InvisibilityAOE_execRemovedTower_Parms RemovedTower_Parms;
	RemovedTower_Parms.affectedTower = affectedTower;

	this->ProcessEvent ( pFnRemovedTower, &RemovedTower_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.AddedTower
// [0x00020002] 
// Parameters infos:
// class ADunDefTower*            affectedTower                  ( CPF_Parm )

void ADunDefPlayerAbility_InvisibilityAOE::AddedTower ( class ADunDefTower* affectedTower )
{
	static UFunction* pFnAddedTower = NULL;

	if ( ! pFnAddedTower )
		pFnAddedTower = (UFunction*) UObject::GObjObjects()->Data[ 86074 ];

	ADunDefPlayerAbility_InvisibilityAOE_execAddedTower_Parms AddedTower_Parms;
	AddedTower_Parms.affectedTower = affectedTower;

	this->ProcessEvent ( pFnAddedTower, &AddedTower_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.RemovedPawn
// [0x00020002] 
// Parameters infos:
// class ADunDefPawn*             affectedPawn                   ( CPF_Parm )

void ADunDefPlayerAbility_InvisibilityAOE::RemovedPawn ( class ADunDefPawn* affectedPawn )
{
	static UFunction* pFnRemovedPawn = NULL;

	if ( ! pFnRemovedPawn )
		pFnRemovedPawn = (UFunction*) UObject::GObjObjects()->Data[ 86072 ];

	ADunDefPlayerAbility_InvisibilityAOE_execRemovedPawn_Parms RemovedPawn_Parms;
	RemovedPawn_Parms.affectedPawn = affectedPawn;

	this->ProcessEvent ( pFnRemovedPawn, &RemovedPawn_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.AddedPawn
// [0x00020002] 
// Parameters infos:
// class ADunDefPawn*             affectedPawn                   ( CPF_Parm )

void ADunDefPlayerAbility_InvisibilityAOE::AddedPawn ( class ADunDefPawn* affectedPawn )
{
	static UFunction* pFnAddedPawn = NULL;

	if ( ! pFnAddedPawn )
		pFnAddedPawn = (UFunction*) UObject::GObjObjects()->Data[ 86070 ];

	ADunDefPlayerAbility_InvisibilityAOE_execAddedPawn_Parms AddedPawn_Parms;
	AddedPawn_Parms.affectedPawn = affectedPawn;

	this->ProcessEvent ( pFnAddedPawn, &AddedPawn_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_InvisibilityAOE::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 86067 ];

	ADunDefPlayerAbility_InvisibilityAOE_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.AddEffect
// [0x00020102] 
// Parameters infos:
// class AActor*                  theAct                         ( CPF_Parm )

void ADunDefPlayerAbility_InvisibilityAOE::AddEffect ( class AActor* theAct )
{
	static UFunction* pFnAddEffect = NULL;

	if ( ! pFnAddEffect )
		pFnAddEffect = (UFunction*) UObject::GObjObjects()->Data[ 86064 ];

	ADunDefPlayerAbility_InvisibilityAOE_execAddEffect_Parms AddEffect_Parms;
	AddEffect_Parms.theAct = theAct;

	this->ProcessEvent ( pFnAddEffect, &AddEffect_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.RemoveEffect
// [0x00020102] 
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void ADunDefPlayerAbility_InvisibilityAOE::RemoveEffect ( int Index )
{
	static UFunction* pFnRemoveEffect = NULL;

	if ( ! pFnRemoveEffect )
		pFnRemoveEffect = (UFunction*) UObject::GObjObjects()->Data[ 86061 ];

	ADunDefPlayerAbility_InvisibilityAOE_execRemoveEffect_Parms RemoveEffect_Parms;
	RemoveEffect_Parms.Index = Index;

	this->ProcessEvent ( pFnRemoveEffect, &RemoveEffect_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetCostToActivate
// [0x00024102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  returnTrueValue                ( CPF_OptionalParm | CPF_Parm )

int ADunDefPlayerAbility_MoveTower::GetCostToActivate ( unsigned long returnTrueValue )
{
	static UFunction* pFnGetCostToActivate = NULL;

	if ( ! pFnGetCostToActivate )
		pFnGetCostToActivate = (UFunction*) UObject::GObjObjects()->Data[ 86566 ];

	ADunDefPlayerAbility_MoveTower_execGetCostToActivate_Parms GetCostToActivate_Parms;
	GetCostToActivate_Parms.returnTrueValue = returnTrueValue;

	this->ProcessEvent ( pFnGetCostToActivate, &GetCostToActivate_Parms, NULL );

	return GetCostToActivate_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_MoveTower::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 86563 ];

	ADunDefPlayerAbility_MoveTower_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ClientReset
// [0x010201C2] 
// Parameters infos:

void ADunDefPlayerAbility_MoveTower::ClientReset ( )
{
	static UFunction* pFnClientReset = NULL;

	if ( ! pFnClientReset )
		pFnClientReset = (UFunction*) UObject::GObjObjects()->Data[ 86543 ];

	ADunDefPlayerAbility_MoveTower_execClientReset_Parms ClientReset_Parms;

	this->ProcessEvent ( pFnClientReset, &ClientReset_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerMoveTower
// [0x002200C2] 
// Parameters infos:
// struct FVector                 towerPlacementLocation         ( CPF_Parm )
// struct FRotator                towerPlacementRotation         ( CPF_Parm )

void ADunDefPlayerAbility_MoveTower::ServerMoveTower ( struct FVector towerPlacementLocation, struct FRotator towerPlacementRotation )
{
	static UFunction* pFnServerMoveTower = NULL;

	if ( ! pFnServerMoveTower )
		pFnServerMoveTower = (UFunction*) UObject::GObjObjects()->Data[ 86538 ];

	ADunDefPlayerAbility_MoveTower_execServerMoveTower_Parms ServerMoveTower_Parms;
	memcpy ( &ServerMoveTower_Parms.towerPlacementLocation, &towerPlacementLocation, 0xC );
	memcpy ( &ServerMoveTower_Parms.towerPlacementRotation, &towerPlacementRotation, 0xC );

	this->ProcessEvent ( pFnServerMoveTower, &ServerMoveTower_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.SetUpTowerMesh
// [0x00020102] 
// Parameters infos:
// class ADunDefTower*            theTower                       ( CPF_Parm )

void ADunDefPlayerAbility_MoveTower::SetUpTowerMesh ( class ADunDefTower* theTower )
{
	static UFunction* pFnSetUpTowerMesh = NULL;

	if ( ! pFnSetUpTowerMesh )
		pFnSetUpTowerMesh = (UFunction*) UObject::GObjObjects()->Data[ 86508 ];

	ADunDefPlayerAbility_MoveTower_execSetUpTowerMesh_Parms SetUpTowerMesh_Parms;
	SetUpTowerMesh_Parms.theTower = theTower;

	this->ProcessEvent ( pFnSetUpTowerMesh, &SetUpTowerMesh_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerRequestGrabTower
// [0x002200C2] 
// Parameters infos:
// class ADunDefTower*            tower                          ( CPF_Parm )

void ADunDefPlayerAbility_MoveTower::ServerRequestGrabTower ( class ADunDefTower* tower )
{
	static UFunction* pFnServerRequestGrabTower = NULL;

	if ( ! pFnServerRequestGrabTower )
		pFnServerRequestGrabTower = (UFunction*) UObject::GObjObjects()->Data[ 86506 ];

	ADunDefPlayerAbility_MoveTower_execServerRequestGrabTower_Parms ServerRequestGrabTower_Parms;
	ServerRequestGrabTower_Parms.tower = tower;

	this->ProcessEvent ( pFnServerRequestGrabTower, &ServerRequestGrabTower_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.StartMovingState
// [0x00020102] 
// Parameters infos:
// class ADunDefTower*            tower                          ( CPF_Parm )

void ADunDefPlayerAbility_MoveTower::StartMovingState ( class ADunDefTower* tower )
{
	static UFunction* pFnStartMovingState = NULL;

	if ( ! pFnStartMovingState )
		pFnStartMovingState = (UFunction*) UObject::GObjObjects()->Data[ 86504 ];

	ADunDefPlayerAbility_MoveTower_execStartMovingState_Parms StartMovingState_Parms;
	StartMovingState_Parms.tower = tower;

	this->ProcessEvent ( pFnStartMovingState, &StartMovingState_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ClientStartMovingState
// [0x010201C2] 
// Parameters infos:
// class ADunDefTower*            tower                          ( CPF_Parm )

void ADunDefPlayerAbility_MoveTower::ClientStartMovingState ( class ADunDefTower* tower )
{
	static UFunction* pFnClientStartMovingState = NULL;

	if ( ! pFnClientStartMovingState )
		pFnClientStartMovingState = (UFunction*) UObject::GObjObjects()->Data[ 86502 ];

	ADunDefPlayerAbility_MoveTower_execClientStartMovingState_Parms ClientStartMovingState_Parms;
	ClientStartMovingState_Parms.tower = tower;

	this->ProcessEvent ( pFnClientStartMovingState, &ClientStartMovingState_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerReceivePlacementState
// [0x00220042] 
// Parameters infos:
// unsigned long                  bIsValidPlacement              ( CPF_Parm )
// struct FVector                 tPlacementLocation             ( CPF_Parm )
// struct FRotator                tPlacementRotation             ( CPF_Parm )

void ADunDefPlayerAbility_MoveTower::ServerReceivePlacementState ( unsigned long bIsValidPlacement, struct FVector tPlacementLocation, struct FRotator tPlacementRotation )
{
	static UFunction* pFnServerReceivePlacementState = NULL;

	if ( ! pFnServerReceivePlacementState )
		pFnServerReceivePlacementState = (UFunction*) UObject::GObjObjects()->Data[ 86498 ];

	ADunDefPlayerAbility_MoveTower_execServerReceivePlacementState_Parms ServerReceivePlacementState_Parms;
	ServerReceivePlacementState_Parms.bIsValidPlacement = bIsValidPlacement;
	memcpy ( &ServerReceivePlacementState_Parms.tPlacementLocation, &tPlacementLocation, 0xC );
	memcpy ( &ServerReceivePlacementState_Parms.tPlacementRotation, &tPlacementRotation, 0xC );

	this->ProcessEvent ( pFnServerReceivePlacementState, &ServerReceivePlacementState_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.PostPlacementUpdate
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefPlayerAbility_MoveTower::PostPlacementUpdate ( float DeltaTime )
{
	static UFunction* pFnPostPlacementUpdate = NULL;

	if ( ! pFnPostPlacementUpdate )
		pFnPostPlacementUpdate = (UFunction*) UObject::GObjObjects()->Data[ 86496 ];

	ADunDefPlayerAbility_MoveTower_execPostPlacementUpdate_Parms PostPlacementUpdate_Parms;
	PostPlacementUpdate_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPostPlacementUpdate, &PostPlacementUpdate_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.UpdateDecalPlacement
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefPlayerAbility_MoveTower::UpdateDecalPlacement ( float DeltaTime )
{
	static UFunction* pFnUpdateDecalPlacement = NULL;

	if ( ! pFnUpdateDecalPlacement )
		pFnUpdateDecalPlacement = (UFunction*) UObject::GObjObjects()->Data[ 86493 ];

	ADunDefPlayerAbility_MoveTower_execUpdateDecalPlacement_Parms UpdateDecalPlacement_Parms;
	UpdateDecalPlacement_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateDecalPlacement, &UpdateDecalPlacement_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.AllowTowerPlacementPosition
// [0x00424102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 placementPos                   ( CPF_Parm )
// unsigned long                  bOnlyCheckVolumes              ( CPF_OptionalParm | CPF_Parm )
// int                            PlacementDeniedReason          ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

bool ADunDefPlayerAbility_MoveTower::AllowTowerPlacementPosition ( struct FVector placementPos, unsigned long bOnlyCheckVolumes, int* PlacementDeniedReason )
{
	static UFunction* pFnAllowTowerPlacementPosition = NULL;

	if ( ! pFnAllowTowerPlacementPosition )
		pFnAllowTowerPlacementPosition = (UFunction*) UObject::GObjObjects()->Data[ 86479 ];

	ADunDefPlayerAbility_MoveTower_execAllowTowerPlacementPosition_Parms AllowTowerPlacementPosition_Parms;
	memcpy ( &AllowTowerPlacementPosition_Parms.placementPos, &placementPos, 0xC );
	AllowTowerPlacementPosition_Parms.bOnlyCheckVolumes = bOnlyCheckVolumes;

	this->ProcessEvent ( pFnAllowTowerPlacementPosition, &AllowTowerPlacementPosition_Parms, NULL );

	if ( PlacementDeniedReason )
		*PlacementDeniedReason = AllowTowerPlacementPosition_Parms.PlacementDeniedReason;

	return AllowTowerPlacementPosition_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetOtherMoveAbilityTowerRadius
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayerAbility_MoveTower::GetOtherMoveAbilityTowerRadius ( )
{
	static UFunction* pFnGetOtherMoveAbilityTowerRadius = NULL;

	if ( ! pFnGetOtherMoveAbilityTowerRadius )
		pFnGetOtherMoveAbilityTowerRadius = (UFunction*) UObject::GObjObjects()->Data[ 86476 ];

	ADunDefPlayerAbility_MoveTower_execGetOtherMoveAbilityTowerRadius_Parms GetOtherMoveAbilityTowerRadius_Parms;

	this->ProcessEvent ( pFnGetOtherMoveAbilityTowerRadius, &GetOtherMoveAbilityTowerRadius_Parms, NULL );

	return GetOtherMoveAbilityTowerRadius_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.IsInPlacingTowerState
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_MoveTower::IsInPlacingTowerState ( )
{
	static UFunction* pFnIsInPlacingTowerState = NULL;

	if ( ! pFnIsInPlacingTowerState )
		pFnIsInPlacingTowerState = (UFunction*) UObject::GObjObjects()->Data[ 86474 ];

	ADunDefPlayerAbility_MoveTower_execIsInPlacingTowerState_Parms IsInPlacingTowerState_Parms;

	this->ProcessEvent ( pFnIsInPlacingTowerState, &IsInPlacingTowerState_Parms, NULL );

	return IsInPlacingTowerState_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.IsTowerPhysical
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_MoveTower::IsTowerPhysical ( )
{
	static UFunction* pFnIsTowerPhysical = NULL;

	if ( ! pFnIsTowerPhysical )
		pFnIsTowerPhysical = (UFunction*) UObject::GObjObjects()->Data[ 86472 ];

	ADunDefPlayerAbility_MoveTower_execIsTowerPhysical_Parms IsTowerPhysical_Parms;

	this->ProcessEvent ( pFnIsTowerPhysical, &IsTowerPhysical_Parms, NULL );

	return IsTowerPhysical_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.OnActivate
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_MoveTower::OnActivate ( )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 86452 ];

	ADunDefPlayerAbility_MoveTower_execOnActivate_Parms OnActivate_Parms;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.UpdateClientInterpolations
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefPlayerAbility_MoveTower::UpdateClientInterpolations ( float DeltaTime )
{
	static UFunction* pFnUpdateClientInterpolations = NULL;

	if ( ! pFnUpdateClientInterpolations )
		pFnUpdateClientInterpolations = (UFunction*) UObject::GObjObjects()->Data[ 86450 ];

	ADunDefPlayerAbility_MoveTower_execUpdateClientInterpolations_Parms UpdateClientInterpolations_Parms;
	UpdateClientInterpolations_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateClientInterpolations, &UpdateClientInterpolations_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerGotoRotationState
// [0x002200C0] 
// Parameters infos:

void ADunDefPlayerAbility_MoveTower::ServerGotoRotationState ( )
{
	static UFunction* pFnServerGotoRotationState = NULL;

	if ( ! pFnServerGotoRotationState )
		pFnServerGotoRotationState = (UFunction*) UObject::GObjObjects()->Data[ 86449 ];

	ADunDefPlayerAbility_MoveTower_execServerGotoRotationState_Parms ServerGotoRotationState_Parms;

	this->ProcessEvent ( pFnServerGotoRotationState, &ServerGotoRotationState_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetPlacementWeaponEffect
// [0x00020102] 
// Parameters infos:
// class ADunDefEmitterSpawnable* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADunDefEmitterSpawnable* ADunDefPlayerAbility_MoveTower::GetPlacementWeaponEffect ( )
{
	static UFunction* pFnGetPlacementWeaponEffect = NULL;

	if ( ! pFnGetPlacementWeaponEffect )
		pFnGetPlacementWeaponEffect = (UFunction*) UObject::GObjObjects()->Data[ 86447 ];

	ADunDefPlayerAbility_MoveTower_execGetPlacementWeaponEffect_Parms GetPlacementWeaponEffect_Parms;

	this->ProcessEvent ( pFnGetPlacementWeaponEffect, &GetPlacementWeaponEffect_Parms, NULL );

	return GetPlacementWeaponEffect_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayerAbility_MoveTower::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 86446 ];

	ADunDefPlayerAbility_MoveTower_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayerAbility_MoveTower::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 86429 ];

	ADunDefPlayerAbility_MoveTower_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefPlayerAbility_MoveTower::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 86427 ];

	ADunDefPlayerAbility_MoveTower_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_SummonCommand::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 86775 ];

	ADunDefPlayerAbility_SummonCommand_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.RequestActivation
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_SummonCommand::RequestActivation ( )
{
	static UFunction* pFnRequestActivation = NULL;

	if ( ! pFnRequestActivation )
		pFnRequestActivation = (UFunction*) UObject::GObjObjects()->Data[ 86772 ];

	ADunDefPlayerAbility_SummonCommand_execRequestActivation_Parms RequestActivation_Parms;

	this->ProcessEvent ( pFnRequestActivation, &RequestActivation_Parms, NULL );

	return RequestActivation_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.StopTowerPlacingAnimation
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_SummonCommand::StopTowerPlacingAnimation ( )
{
	static UFunction* pFnStopTowerPlacingAnimation = NULL;

	if ( ! pFnStopTowerPlacingAnimation )
		pFnStopTowerPlacingAnimation = (UFunction*) UObject::GObjObjects()->Data[ 86771 ];

	ADunDefPlayerAbility_SummonCommand_execStopTowerPlacingAnimation_Parms StopTowerPlacingAnimation_Parms;

	this->ProcessEvent ( pFnStopTowerPlacingAnimation, &StopTowerPlacingAnimation_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.StartTowerPlacingAnimation
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_SummonCommand::StartTowerPlacingAnimation ( )
{
	static UFunction* pFnStartTowerPlacingAnimation = NULL;

	if ( ! pFnStartTowerPlacingAnimation )
		pFnStartTowerPlacingAnimation = (UFunction*) UObject::GObjObjects()->Data[ 86770 ];

	ADunDefPlayerAbility_SummonCommand_execStartTowerPlacingAnimation_Parms StartTowerPlacingAnimation_Parms;

	this->ProcessEvent ( pFnStartTowerPlacingAnimation, &StartTowerPlacingAnimation_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.AllowCastingCancelOnDamage
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_SummonCommand::AllowCastingCancelOnDamage ( )
{
	static UFunction* pFnAllowCastingCancelOnDamage = NULL;

	if ( ! pFnAllowCastingCancelOnDamage )
		pFnAllowCastingCancelOnDamage = (UFunction*) UObject::GObjObjects()->Data[ 86768 ];

	ADunDefPlayerAbility_SummonCommand_execAllowCastingCancelOnDamage_Parms AllowCastingCancelOnDamage_Parms;

	this->ProcessEvent ( pFnAllowCastingCancelOnDamage, &AllowCastingCancelOnDamage_Parms, NULL );

	return AllowCastingCancelOnDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.PostPlacementUpdate
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefPlayerAbility_SummonCommand::PostPlacementUpdate ( float DeltaTime )
{
	static UFunction* pFnPostPlacementUpdate = NULL;

	if ( ! pFnPostPlacementUpdate )
		pFnPostPlacementUpdate = (UFunction*) UObject::GObjObjects()->Data[ 86766 ];

	ADunDefPlayerAbility_SummonCommand_execPostPlacementUpdate_Parms PostPlacementUpdate_Parms;
	PostPlacementUpdate_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPostPlacementUpdate, &PostPlacementUpdate_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.UpdateDecalPlacement
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefPlayerAbility_SummonCommand::UpdateDecalPlacement ( float DeltaTime )
{
	static UFunction* pFnUpdateDecalPlacement = NULL;

	if ( ! pFnUpdateDecalPlacement )
		pFnUpdateDecalPlacement = (UFunction*) UObject::GObjObjects()->Data[ 86764 ];

	ADunDefPlayerAbility_SummonCommand_execUpdateDecalPlacement_Parms UpdateDecalPlacement_Parms;
	UpdateDecalPlacement_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateDecalPlacement, &UpdateDecalPlacement_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.ServerRequestSetCommand
// [0x00A200C2] 
// Parameters infos:
// struct FVector                 pLoc                           ( CPF_Parm )
// class AActor*                  targActor                      ( CPF_Parm )

void ADunDefPlayerAbility_SummonCommand::ServerRequestSetCommand ( struct FVector pLoc, class AActor* targActor )
{
	static UFunction* pFnServerRequestSetCommand = NULL;

	if ( ! pFnServerRequestSetCommand )
		pFnServerRequestSetCommand = (UFunction*) UObject::GObjObjects()->Data[ 86749 ];

	ADunDefPlayerAbility_SummonCommand_execServerRequestSetCommand_Parms ServerRequestSetCommand_Parms;
	memcpy ( &ServerRequestSetCommand_Parms.pLoc, &pLoc, 0xC );
	ServerRequestSetCommand_Parms.targActor = targActor;

	this->ProcessEvent ( pFnServerRequestSetCommand, &ServerRequestSetCommand_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.HandleInstantCommand
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_SummonCommand::HandleInstantCommand ( )
{
	static UFunction* pFnHandleInstantCommand = NULL;

	if ( ! pFnHandleInstantCommand )
		pFnHandleInstantCommand = (UFunction*) UObject::GObjObjects()->Data[ 86718 ];

	ADunDefPlayerAbility_SummonCommand_execHandleInstantCommand_Parms HandleInstantCommand_Parms;

	this->ProcessEvent ( pFnHandleInstantCommand, &HandleInstantCommand_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.OnActivate
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_SummonCommand::OnActivate ( )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 86717 ];

	ADunDefPlayerAbility_SummonCommand_execOnActivate_Parms OnActivate_Parms;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.GetCastingStateNamePC
// [0x00020102] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName ADunDefPlayerAbility_SummonCommand::GetCastingStateNamePC ( )
{
	static UFunction* pFnGetCastingStateNamePC = NULL;

	if ( ! pFnGetCastingStateNamePC )
		pFnGetCastingStateNamePC = (UFunction*) UObject::GObjObjects()->Data[ 86715 ];

	ADunDefPlayerAbility_SummonCommand_execGetCastingStateNamePC_Parms GetCastingStateNamePC_Parms;

	this->ProcessEvent ( pFnGetCastingStateNamePC, &GetCastingStateNamePC_Parms, NULL );

	return GetCastingStateNamePC_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayerAbility_SummonCommand::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 86714 ];

	ADunDefPlayerAbility_SummonCommand_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.IncreasePlacementTowerRadius
// [0x00020100] 
// Parameters infos:

void ADunDefPlayerAbility_SummonCommand::IncreasePlacementTowerRadius ( )
{
	static UFunction* pFnIncreasePlacementTowerRadius = NULL;

	if ( ! pFnIncreasePlacementTowerRadius )
		pFnIncreasePlacementTowerRadius = (UFunction*) UObject::GObjObjects()->Data[ 86713 ];

	ADunDefPlayerAbility_SummonCommand_execIncreasePlacementTowerRadius_Parms IncreasePlacementTowerRadius_Parms;

	this->ProcessEvent ( pFnIncreasePlacementTowerRadius, &IncreasePlacementTowerRadius_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.DecreasePlacementTowerRadius
// [0x00020100] 
// Parameters infos:

void ADunDefPlayerAbility_SummonCommand::DecreasePlacementTowerRadius ( )
{
	static UFunction* pFnDecreasePlacementTowerRadius = NULL;

	if ( ! pFnDecreasePlacementTowerRadius )
		pFnDecreasePlacementTowerRadius = (UFunction*) UObject::GObjObjects()->Data[ 86712 ];

	ADunDefPlayerAbility_SummonCommand_execDecreasePlacementTowerRadius_Parms DecreasePlacementTowerRadius_Parms;

	this->ProcessEvent ( pFnDecreasePlacementTowerRadius, &DecreasePlacementTowerRadius_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.GetCastingStateNamePC
// [0x00020102] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName ADunDefPlayerAbility_PhaseShiftOverlord::GetCastingStateNamePC ( )
{
	static UFunction* pFnGetCastingStateNamePC = NULL;

	if ( ! pFnGetCastingStateNamePC )
		pFnGetCastingStateNamePC = (UFunction*) UObject::GObjObjects()->Data[ 86899 ];

	ADunDefPlayerAbility_PhaseShiftOverlord_execGetCastingStateNamePC_Parms GetCastingStateNamePC_Parms;

	this->ProcessEvent ( pFnGetCastingStateNamePC, &GetCastingStateNamePC_Parms, NULL );

	return GetCastingStateNamePC_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.ServerRequestSetCommand
// [0x002200C2] 
// Parameters infos:
// struct FVector                 pLoc                           ( CPF_Parm )
// class AActor*                  targActor                      ( CPF_Parm )
// unsigned char                  myCommand                      ( CPF_Parm )

void ADunDefPlayerAbility_PhaseShiftOverlord::ServerRequestSetCommand ( struct FVector pLoc, class AActor* targActor, unsigned char myCommand )
{
	static UFunction* pFnServerRequestSetCommand = NULL;

	if ( ! pFnServerRequestSetCommand )
		pFnServerRequestSetCommand = (UFunction*) UObject::GObjObjects()->Data[ 86891 ];

	ADunDefPlayerAbility_PhaseShiftOverlord_execServerRequestSetCommand_Parms ServerRequestSetCommand_Parms;
	memcpy ( &ServerRequestSetCommand_Parms.pLoc, &pLoc, 0xC );
	ServerRequestSetCommand_Parms.targActor = targActor;
	ServerRequestSetCommand_Parms.myCommand = myCommand;

	this->ProcessEvent ( pFnServerRequestSetCommand, &ServerRequestSetCommand_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.DoMovementCommand
// [0x00820002] 
// Parameters infos:
// TArray< class ADunDefTower_SummonEnemy* > selectedTowers                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FVector                 pLoc                           ( CPF_Parm )
// unsigned char                  myCommand                      ( CPF_Parm )

void ADunDefPlayerAbility_PhaseShiftOverlord::DoMovementCommand ( TArray< class ADunDefTower_SummonEnemy* > selectedTowers, struct FVector pLoc, unsigned char myCommand )
{
	static UFunction* pFnDoMovementCommand = NULL;

	if ( ! pFnDoMovementCommand )
		pFnDoMovementCommand = (UFunction*) UObject::GObjObjects()->Data[ 86878 ];

	ADunDefPlayerAbility_PhaseShiftOverlord_execDoMovementCommand_Parms DoMovementCommand_Parms;
	memcpy ( &DoMovementCommand_Parms.selectedTowers, &selectedTowers, 0xC );
	memcpy ( &DoMovementCommand_Parms.pLoc, &pLoc, 0xC );
	DoMovementCommand_Parms.myCommand = myCommand;

	this->ProcessEvent ( pFnDoMovementCommand, &DoMovementCommand_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.DrawCastingHUD
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefHUD*              H                              ( CPF_Parm )

bool ADunDefPlayerAbility_PhaseShiftOverlord::DrawCastingHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawCastingHUD = NULL;

	if ( ! pFnDrawCastingHUD )
		pFnDrawCastingHUD = (UFunction*) UObject::GObjObjects()->Data[ 86860 ];

	ADunDefPlayerAbility_PhaseShiftOverlord_execDrawCastingHUD_Parms DrawCastingHUD_Parms;
	DrawCastingHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawCastingHUD, &DrawCastingHUD_Parms, NULL );

	return DrawCastingHUD_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.RequestActivation
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_PhaseShiftOverlord::RequestActivation ( )
{
	static UFunction* pFnRequestActivation = NULL;

	if ( ! pFnRequestActivation )
		pFnRequestActivation = (UFunction*) UObject::GObjObjects()->Data[ 86857 ];

	ADunDefPlayerAbility_PhaseShiftOverlord_execRequestActivation_Parms RequestActivation_Parms;

	this->ProcessEvent ( pFnRequestActivation, &RequestActivation_Parms, NULL );

	return RequestActivation_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_PhaseShiftOverlord::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 86854 ];

	ADunDefPlayerAbility_PhaseShiftOverlord_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.RequestCancellation
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bForce                         ( CPF_OptionalParm | CPF_Parm )

bool ADunDefPlayerAbility_PhaseShiftOverlord::RequestCancellation ( unsigned long bForce )
{
	static UFunction* pFnRequestCancellation = NULL;

	if ( ! pFnRequestCancellation )
		pFnRequestCancellation = (UFunction*) UObject::GObjObjects()->Data[ 86850 ];

	ADunDefPlayerAbility_PhaseShiftOverlord_execRequestCancellation_Parms RequestCancellation_Parms;
	RequestCancellation_Parms.bForce = bForce;

	this->ProcessEvent ( pFnRequestCancellation, &RequestCancellation_Parms, NULL );

	return RequestCancellation_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.HandleConfirmation
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_PhaseShiftOverlord::HandleConfirmation ( )
{
	static UFunction* pFnHandleConfirmation = NULL;

	if ( ! pFnHandleConfirmation )
		pFnHandleConfirmation = (UFunction*) UObject::GObjObjects()->Data[ 86847 ];

	ADunDefPlayerAbility_PhaseShiftOverlord_execHandleConfirmation_Parms HandleConfirmation_Parms;

	this->ProcessEvent ( pFnHandleConfirmation, &HandleConfirmation_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.HandleAltCancellation
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_PhaseShiftOverlord::HandleAltCancellation ( )
{
	static UFunction* pFnHandleAltCancellation = NULL;

	if ( ! pFnHandleAltCancellation )
		pFnHandleAltCancellation = (UFunction*) UObject::GObjObjects()->Data[ 86845 ];

	ADunDefPlayerAbility_PhaseShiftOverlord_execHandleAltCancellation_Parms HandleAltCancellation_Parms;

	this->ProcessEvent ( pFnHandleAltCancellation, &HandleAltCancellation_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.HandleAltConfirmation
// [0x00820102] 
// Parameters infos:

void ADunDefPlayerAbility_PhaseShiftOverlord::HandleAltConfirmation ( )
{
	static UFunction* pFnHandleAltConfirmation = NULL;

	if ( ! pFnHandleAltConfirmation )
		pFnHandleAltConfirmation = (UFunction*) UObject::GObjObjects()->Data[ 86834 ];

	ADunDefPlayerAbility_PhaseShiftOverlord_execHandleAltConfirmation_Parms HandleAltConfirmation_Parms;

	this->ProcessEvent ( pFnHandleAltConfirmation, &HandleAltConfirmation_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.StopTowerPlacingAnimation
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_SelectSummonUnits::StopTowerPlacingAnimation ( )
{
	static UFunction* pFnStopTowerPlacingAnimation = NULL;

	if ( ! pFnStopTowerPlacingAnimation )
		pFnStopTowerPlacingAnimation = (UFunction*) UObject::GObjObjects()->Data[ 86969 ];

	ADunDefPlayerAbility_SelectSummonUnits_execStopTowerPlacingAnimation_Parms StopTowerPlacingAnimation_Parms;

	this->ProcessEvent ( pFnStopTowerPlacingAnimation, &StopTowerPlacingAnimation_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.StartTowerPlacingAnimation
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_SelectSummonUnits::StartTowerPlacingAnimation ( )
{
	static UFunction* pFnStartTowerPlacingAnimation = NULL;

	if ( ! pFnStartTowerPlacingAnimation )
		pFnStartTowerPlacingAnimation = (UFunction*) UObject::GObjObjects()->Data[ 86968 ];

	ADunDefPlayerAbility_SelectSummonUnits_execStartTowerPlacingAnimation_Parms StartTowerPlacingAnimation_Parms;

	this->ProcessEvent ( pFnStartTowerPlacingAnimation, &StartTowerPlacingAnimation_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.AllowCastingCancelOnDamage
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_SelectSummonUnits::AllowCastingCancelOnDamage ( )
{
	static UFunction* pFnAllowCastingCancelOnDamage = NULL;

	if ( ! pFnAllowCastingCancelOnDamage )
		pFnAllowCastingCancelOnDamage = (UFunction*) UObject::GObjObjects()->Data[ 86966 ];

	ADunDefPlayerAbility_SelectSummonUnits_execAllowCastingCancelOnDamage_Parms AllowCastingCancelOnDamage_Parms;

	this->ProcessEvent ( pFnAllowCastingCancelOnDamage, &AllowCastingCancelOnDamage_Parms, NULL );

	return AllowCastingCancelOnDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.DeSelectUnits
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_SelectSummonUnits::DeSelectUnits ( )
{
	static UFunction* pFnDeSelectUnits = NULL;

	if ( ! pFnDeSelectUnits )
		pFnDeSelectUnits = (UFunction*) UObject::GObjObjects()->Data[ 86964 ];

	ADunDefPlayerAbility_SelectSummonUnits_execDeSelectUnits_Parms DeSelectUnits_Parms;

	this->ProcessEvent ( pFnDeSelectUnits, &DeSelectUnits_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.SelectAllTowers
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_SelectSummonUnits::SelectAllTowers ( )
{
	static UFunction* pFnSelectAllTowers = NULL;

	if ( ! pFnSelectAllTowers )
		pFnSelectAllTowers = (UFunction*) UObject::GObjObjects()->Data[ 86959 ];

	ADunDefPlayerAbility_SelectSummonUnits_execSelectAllTowers_Parms SelectAllTowers_Parms;

	this->ProcessEvent ( pFnSelectAllTowers, &SelectAllTowers_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.OnActivate
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_SelectSummonUnits::OnActivate ( )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 86958 ];

	ADunDefPlayerAbility_SelectSummonUnits_execOnActivate_Parms OnActivate_Parms;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.PostPlacementUpdate
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefPlayerAbility_SelectSummonUnits::PostPlacementUpdate ( float DeltaTime )
{
	static UFunction* pFnPostPlacementUpdate = NULL;

	if ( ! pFnPostPlacementUpdate )
		pFnPostPlacementUpdate = (UFunction*) UObject::GObjObjects()->Data[ 86956 ];

	ADunDefPlayerAbility_SelectSummonUnits_execPostPlacementUpdate_Parms PostPlacementUpdate_Parms;
	PostPlacementUpdate_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPostPlacementUpdate, &PostPlacementUpdate_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.UpdateDecalPlacement
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefPlayerAbility_SelectSummonUnits::UpdateDecalPlacement ( float DeltaTime )
{
	static UFunction* pFnUpdateDecalPlacement = NULL;

	if ( ! pFnUpdateDecalPlacement )
		pFnUpdateDecalPlacement = (UFunction*) UObject::GObjObjects()->Data[ 86954 ];

	ADunDefPlayerAbility_SelectSummonUnits_execUpdateDecalPlacement_Parms UpdateDecalPlacement_Parms;
	UpdateDecalPlacement_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateDecalPlacement, &UpdateDecalPlacement_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.CancelAbility
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_SelectSummonUnits::CancelAbility ( )
{
	static UFunction* pFnCancelAbility = NULL;

	if ( ! pFnCancelAbility )
		pFnCancelAbility = (UFunction*) UObject::GObjObjects()->Data[ 86952 ];

	ADunDefPlayerAbility_SelectSummonUnits_execCancelAbility_Parms CancelAbility_Parms;

	this->ProcessEvent ( pFnCancelAbility, &CancelAbility_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.AbilityTick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefPlayerAbility_SelectSummonUnits::eventAbilityTick ( float DeltaTime )
{
	static UFunction* pFnAbilityTick = NULL;

	if ( ! pFnAbilityTick )
		pFnAbilityTick = (UFunction*) UObject::GObjObjects()->Data[ 86928 ];

	ADunDefPlayerAbility_SelectSummonUnits_eventAbilityTick_Parms AbilityTick_Parms;
	AbilityTick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnAbilityTick, &AbilityTick_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayerAbility_SelectSummonUnits::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 86927 ];

	ADunDefPlayerAbility_SelectSummonUnits_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.IncreasePlacementTowerRadius
// [0x00020100] 
// Parameters infos:

void ADunDefPlayerAbility_SelectSummonUnits::IncreasePlacementTowerRadius ( )
{
	static UFunction* pFnIncreasePlacementTowerRadius = NULL;

	if ( ! pFnIncreasePlacementTowerRadius )
		pFnIncreasePlacementTowerRadius = (UFunction*) UObject::GObjObjects()->Data[ 86926 ];

	ADunDefPlayerAbility_SelectSummonUnits_execIncreasePlacementTowerRadius_Parms IncreasePlacementTowerRadius_Parms;

	this->ProcessEvent ( pFnIncreasePlacementTowerRadius, &IncreasePlacementTowerRadius_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.DecreasePlacementTowerRadius
// [0x00020100] 
// Parameters infos:

void ADunDefPlayerAbility_SelectSummonUnits::DecreasePlacementTowerRadius ( )
{
	static UFunction* pFnDecreasePlacementTowerRadius = NULL;

	if ( ! pFnDecreasePlacementTowerRadius )
		pFnDecreasePlacementTowerRadius = (UFunction*) UObject::GObjObjects()->Data[ 86925 ];

	ADunDefPlayerAbility_SelectSummonUnits_execDecreasePlacementTowerRadius_Parms DecreasePlacementTowerRadius_Parms;

	this->ProcessEvent ( pFnDecreasePlacementTowerRadius, &DecreasePlacementTowerRadius_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_SlamDash::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 87069 ];

	ADunDefPlayerAbility_SlamDash_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ConsumesInputWhenActive
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_SlamDash::ConsumesInputWhenActive ( )
{
	static UFunction* pFnConsumesInputWhenActive = NULL;

	if ( ! pFnConsumesInputWhenActive )
		pFnConsumesInputWhenActive = (UFunction*) UObject::GObjObjects()->Data[ 87067 ];

	ADunDefPlayerAbility_SlamDash_execConsumesInputWhenActive_Parms ConsumesInputWhenActive_Parms;

	this->ProcessEvent ( pFnConsumesInputWhenActive, &ConsumesInputWhenActive_Parms, NULL );

	return ConsumesInputWhenActive_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.AllowUsageDuringCastingStates
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_SlamDash::AllowUsageDuringCastingStates ( )
{
	static UFunction* pFnAllowUsageDuringCastingStates = NULL;

	if ( ! pFnAllowUsageDuringCastingStates )
		pFnAllowUsageDuringCastingStates = (UFunction*) UObject::GObjObjects()->Data[ 87065 ];

	ADunDefPlayerAbility_SlamDash_execAllowUsageDuringCastingStates_Parms AllowUsageDuringCastingStates_Parms;

	this->ProcessEvent ( pFnAllowUsageDuringCastingStates, &AllowUsageDuringCastingStates_Parms, NULL );

	return AllowUsageDuringCastingStates_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.CheckStuck
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_SlamDash::CheckStuck ( )
{
	static UFunction* pFnCheckStuck = NULL;

	if ( ! pFnCheckStuck )
		pFnCheckStuck = (UFunction*) UObject::GObjObjects()->Data[ 87034 ];

	ADunDefPlayerAbility_SlamDash_execCheckStuck_Parms CheckStuck_Parms;

	this->ProcessEvent ( pFnCheckStuck, &CheckStuck_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.PlayStopAnim
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_SlamDash::PlayStopAnim ( )
{
	static UFunction* pFnPlayStopAnim = NULL;

	if ( ! pFnPlayStopAnim )
		pFnPlayStopAnim = (UFunction*) UObject::GObjObjects()->Data[ 87033 ];

	ADunDefPlayerAbility_SlamDash_execPlayStopAnim_Parms PlayStopAnim_Parms;

	this->ProcessEvent ( pFnPlayStopAnim, &PlayStopAnim_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ShutOffVFX
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_SlamDash::ShutOffVFX ( )
{
	static UFunction* pFnShutOffVFX = NULL;

	if ( ! pFnShutOffVFX )
		pFnShutOffVFX = (UFunction*) UObject::GObjObjects()->Data[ 87032 ];

	ADunDefPlayerAbility_SlamDash_execShutOffVFX_Parms ShutOffVFX_Parms;

	this->ProcessEvent ( pFnShutOffVFX, &ShutOffVFX_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ActivateHandVFX
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_SlamDash::ActivateHandVFX ( )
{
	static UFunction* pFnActivateHandVFX = NULL;

	if ( ! pFnActivateHandVFX )
		pFnActivateHandVFX = (UFunction*) UObject::GObjObjects()->Data[ 87031 ];

	ADunDefPlayerAbility_SlamDash_execActivateHandVFX_Parms ActivateHandVFX_Parms;

	this->ProcessEvent ( pFnActivateHandVFX, &ActivateHandVFX_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.PushCheck
// [0x00020000] 
// Parameters infos:

void ADunDefPlayerAbility_SlamDash::PushCheck ( )
{
	static UFunction* pFnPushCheck = NULL;

	if ( ! pFnPushCheck )
		pFnPushCheck = (UFunction*) UObject::GObjObjects()->Data[ 87030 ];

	ADunDefPlayerAbility_SlamDash_execPushCheck_Parms PushCheck_Parms;

	this->ProcessEvent ( pFnPushCheck, &PushCheck_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayerAbility_SlamDash::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 87013 ];

	ADunDefPlayerAbility_SlamDash_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefPlayerAbility_SlamDash::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 87011 ];

	ADunDefPlayerAbility_SlamDash_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_StanceOnDmgEffect::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 87217 ];

	ADunDefPlayerAbility_StanceOnDmgEffect_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.SetMaxHealAmountPerAttack
// [0x00020002] 
// Parameters infos:

void ADunDefPlayerAbility_StanceOnDmgEffect::SetMaxHealAmountPerAttack ( )
{
	static UFunction* pFnSetMaxHealAmountPerAttack = NULL;

	if ( ! pFnSetMaxHealAmountPerAttack )
		pFnSetMaxHealAmountPerAttack = (UFunction*) UObject::GObjObjects()->Data[ 87216 ];

	ADunDefPlayerAbility_StanceOnDmgEffect_execSetMaxHealAmountPerAttack_Parms SetMaxHealAmountPerAttack_Parms;

	this->ProcessEvent ( pFnSetMaxHealAmountPerAttack, &SetMaxHealAmountPerAttack_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.ResetWeaponDamage
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_StanceOnDmgEffect::ResetWeaponDamage ( )
{
	static UFunction* pFnResetWeaponDamage = NULL;

	if ( ! pFnResetWeaponDamage )
		pFnResetWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 87215 ];

	ADunDefPlayerAbility_StanceOnDmgEffect_execResetWeaponDamage_Parms ResetWeaponDamage_Parms;

	this->ProcessEvent ( pFnResetWeaponDamage, &ResetWeaponDamage_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StopOffHandWeaponDamage
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceOnDmgEffect::StopOffHandWeaponDamage ( )
{
	static UFunction* pFnStopOffHandWeaponDamage = NULL;

	if ( ! pFnStopOffHandWeaponDamage )
		pFnStopOffHandWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 87213 ];

	ADunDefPlayerAbility_StanceOnDmgEffect_execStopOffHandWeaponDamage_Parms StopOffHandWeaponDamage_Parms;

	this->ProcessEvent ( pFnStopOffHandWeaponDamage, &StopOffHandWeaponDamage_Parms, NULL );

	return StopOffHandWeaponDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StopWeaponDamage
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceOnDmgEffect::StopWeaponDamage ( )
{
	static UFunction* pFnStopWeaponDamage = NULL;

	if ( ! pFnStopWeaponDamage )
		pFnStopWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 87211 ];

	ADunDefPlayerAbility_StanceOnDmgEffect_execStopWeaponDamage_Parms StopWeaponDamage_Parms;

	this->ProcessEvent ( pFnStopWeaponDamage, &StopWeaponDamage_Parms, NULL );

	return StopWeaponDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StartOffHandWeaponDamage
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceOnDmgEffect::StartOffHandWeaponDamage ( )
{
	static UFunction* pFnStartOffHandWeaponDamage = NULL;

	if ( ! pFnStartOffHandWeaponDamage )
		pFnStartOffHandWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 87209 ];

	ADunDefPlayerAbility_StanceOnDmgEffect_execStartOffHandWeaponDamage_Parms StartOffHandWeaponDamage_Parms;

	this->ProcessEvent ( pFnStartOffHandWeaponDamage, &StartOffHandWeaponDamage_Parms, NULL );

	return StartOffHandWeaponDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StartWeaponDamage
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceOnDmgEffect::StartWeaponDamage ( )
{
	static UFunction* pFnStartWeaponDamage = NULL;

	if ( ! pFnStartWeaponDamage )
		pFnStartWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 87207 ];

	ADunDefPlayerAbility_StanceOnDmgEffect_execStartWeaponDamage_Parms StartWeaponDamage_Parms;

	this->ProcessEvent ( pFnStartWeaponDamage, &StartWeaponDamage_Parms, NULL );

	return StartWeaponDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.DoAddHealth
// [0x00020102] 
// Parameters infos:
// int                            dmgAmount                      ( CPF_Parm )

void ADunDefPlayerAbility_StanceOnDmgEffect::DoAddHealth ( int dmgAmount )
{
	static UFunction* pFnDoAddHealth = NULL;

	if ( ! pFnDoAddHealth )
		pFnDoAddHealth = (UFunction*) UObject::GObjObjects()->Data[ 87201 ];

	ADunDefPlayerAbility_StanceOnDmgEffect_execDoAddHealth_Parms DoAddHealth_Parms;
	DoAddHealth_Parms.dmgAmount = dmgAmount;

	this->ProcessEvent ( pFnDoAddHealth, &DoAddHealth_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_StanceLightning::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 87288 ];

	ADunDefPlayerAbility_StanceLightning_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetStunTime
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayerAbility_StanceLightning::GetStunTime ( )
{
	static UFunction* pFnGetStunTime = NULL;

	if ( ! pFnGetStunTime )
		pFnGetStunTime = (UFunction*) UObject::GObjObjects()->Data[ 87284 ];

	ADunDefPlayerAbility_StanceLightning_execGetStunTime_Parms GetStunTime_Parms;

	this->ProcessEvent ( pFnGetStunTime, &GetStunTime_Parms, NULL );

	return GetStunTime_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.ClearStunnedList
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_StanceLightning::ClearStunnedList ( )
{
	static UFunction* pFnClearStunnedList = NULL;

	if ( ! pFnClearStunnedList )
		pFnClearStunnedList = (UFunction*) UObject::GObjObjects()->Data[ 87282 ];

	ADunDefPlayerAbility_StanceLightning_execClearStunnedList_Parms ClearStunnedList_Parms;

	this->ProcessEvent ( pFnClearStunnedList, &ClearStunnedList_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.RemoveStunnedActor
// [0x00024102] 
// Parameters infos:
// class ADunDefEnemy*            stunRemoval                    ( CPF_Parm )
// unsigned long                  bDontReplicate                 ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayerAbility_StanceLightning::RemoveStunnedActor ( class ADunDefEnemy* stunRemoval, unsigned long bDontReplicate )
{
	static UFunction* pFnRemoveStunnedActor = NULL;

	if ( ! pFnRemoveStunnedActor )
		pFnRemoveStunnedActor = (UFunction*) UObject::GObjObjects()->Data[ 87278 ];

	ADunDefPlayerAbility_StanceLightning_execRemoveStunnedActor_Parms RemoveStunnedActor_Parms;
	RemoveStunnedActor_Parms.stunRemoval = stunRemoval;
	RemoveStunnedActor_Parms.bDontReplicate = bDontReplicate;

	this->ProcessEvent ( pFnRemoveStunnedActor, &RemoveStunnedActor_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.AddStunnedActor
// [0x00820102] 
// Parameters infos:
// class ADunDefEnemy*            newStun                        ( CPF_Parm )

void ADunDefPlayerAbility_StanceLightning::AddStunnedActor ( class ADunDefEnemy* newStun )
{
	static UFunction* pFnAddStunnedActor = NULL;

	if ( ! pFnAddStunnedActor )
		pFnAddStunnedActor = (UFunction*) UObject::GObjObjects()->Data[ 87272 ];

	ADunDefPlayerAbility_StanceLightning_execAddStunnedActor_Parms AddStunnedActor_Parms;
	AddStunnedActor_Parms.newStun = newStun;

	this->ProcessEvent ( pFnAddStunnedActor, &AddStunnedActor_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.CanStun
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefEnemy*            stunTest                       ( CPF_Parm )

bool ADunDefPlayerAbility_StanceLightning::CanStun ( class ADunDefEnemy* stunTest )
{
	static UFunction* pFnCanStun = NULL;

	if ( ! pFnCanStun )
		pFnCanStun = (UFunction*) UObject::GObjObjects()->Data[ 87269 ];

	ADunDefPlayerAbility_StanceLightning_execCanStun_Parms CanStun_Parms;
	CanStun_Parms.stunTest = stunTest;

	this->ProcessEvent ( pFnCanStun, &CanStun_Parms, NULL );

	return CanStun_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayerAbility_StanceLightning::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 87239 ];

	ADunDefPlayerAbility_StanceLightning_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_StanceSpecialAttack::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 87365 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StopOffHandWeaponDamage
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceSpecialAttack::StopOffHandWeaponDamage ( )
{
	static UFunction* pFnStopOffHandWeaponDamage = NULL;

	if ( ! pFnStopOffHandWeaponDamage )
		pFnStopOffHandWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 87363 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execStopOffHandWeaponDamage_Parms StopOffHandWeaponDamage_Parms;

	this->ProcessEvent ( pFnStopOffHandWeaponDamage, &StopOffHandWeaponDamage_Parms, NULL );

	return StopOffHandWeaponDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StopWeaponDamage
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceSpecialAttack::StopWeaponDamage ( )
{
	static UFunction* pFnStopWeaponDamage = NULL;

	if ( ! pFnStopWeaponDamage )
		pFnStopWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 87361 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execStopWeaponDamage_Parms StopWeaponDamage_Parms;

	this->ProcessEvent ( pFnStopWeaponDamage, &StopWeaponDamage_Parms, NULL );

	return StopWeaponDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StartOffHandWeaponDamage
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceSpecialAttack::StartOffHandWeaponDamage ( )
{
	static UFunction* pFnStartOffHandWeaponDamage = NULL;

	if ( ! pFnStartOffHandWeaponDamage )
		pFnStartOffHandWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 87359 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execStartOffHandWeaponDamage_Parms StartOffHandWeaponDamage_Parms;

	this->ProcessEvent ( pFnStartOffHandWeaponDamage, &StartOffHandWeaponDamage_Parms, NULL );

	return StartOffHandWeaponDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StartWeaponDamage
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefPlayerAbility_StanceSpecialAttack::StartWeaponDamage ( )
{
	static UFunction* pFnStartWeaponDamage = NULL;

	if ( ! pFnStartWeaponDamage )
		pFnStartWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 87357 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execStartWeaponDamage_Parms StartWeaponDamage_Parms;

	this->ProcessEvent ( pFnStartWeaponDamage, &StartWeaponDamage_Parms, NULL );

	return StartWeaponDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.GetMomentum
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefPlayerAbility_StanceSpecialAttack::GetMomentum ( )
{
	static UFunction* pFnGetMomentum = NULL;

	if ( ! pFnGetMomentum )
		pFnGetMomentum = (UFunction*) UObject::GObjObjects()->Data[ 87355 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execGetMomentum_Parms GetMomentum_Parms;

	this->ProcessEvent ( pFnGetMomentum, &GetMomentum_Parms, NULL );

	return GetMomentum_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.GetDamage
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefWeapon_MeleeSword* dmgWeapon                      ( CPF_Parm )

float ADunDefPlayerAbility_StanceSpecialAttack::GetDamage ( class ADunDefWeapon_MeleeSword* dmgWeapon )
{
	static UFunction* pFnGetDamage = NULL;

	if ( ! pFnGetDamage )
		pFnGetDamage = (UFunction*) UObject::GObjObjects()->Data[ 87352 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execGetDamage_Parms GetDamage_Parms;
	GetDamage_Parms.dmgWeapon = dmgWeapon;

	this->ProcessEvent ( pFnGetDamage, &GetDamage_Parms, NULL );

	return GetDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ClearStanceStun
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_StanceSpecialAttack::ClearStanceStun ( )
{
	static UFunction* pFnClearStanceStun = NULL;

	if ( ! pFnClearStanceStun )
		pFnClearStanceStun = (UFunction*) UObject::GObjObjects()->Data[ 87351 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execClearStanceStun_Parms ClearStanceStun_Parms;

	this->ProcessEvent ( pFnClearStanceStun, &ClearStanceStun_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.CancelAbility
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_StanceSpecialAttack::CancelAbility ( )
{
	static UFunction* pFnCancelAbility = NULL;

	if ( ! pFnCancelAbility )
		pFnCancelAbility = (UFunction*) UObject::GObjObjects()->Data[ 87350 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execCancelAbility_Parms CancelAbility_Parms;

	this->ProcessEvent ( pFnCancelAbility, &CancelAbility_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.CompletedSpecial
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_StanceSpecialAttack::CompletedSpecial ( )
{
	static UFunction* pFnCompletedSpecial = NULL;

	if ( ! pFnCompletedSpecial )
		pFnCompletedSpecial = (UFunction*) UObject::GObjObjects()->Data[ 87349 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execCompletedSpecial_Parms CompletedSpecial_Parms;

	this->ProcessEvent ( pFnCompletedSpecial, &CompletedSpecial_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ClientCompletedSpecial
// [0x010201C2] 
// Parameters infos:

void ADunDefPlayerAbility_StanceSpecialAttack::ClientCompletedSpecial ( )
{
	static UFunction* pFnClientCompletedSpecial = NULL;

	if ( ! pFnClientCompletedSpecial )
		pFnClientCompletedSpecial = (UFunction*) UObject::GObjObjects()->Data[ 87348 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execClientCompletedSpecial_Parms ClientCompletedSpecial_Parms;

	this->ProcessEvent ( pFnClientCompletedSpecial, &ClientCompletedSpecial_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.SpawnFinishEmitter
// [0x00820102] 
// Parameters infos:

void ADunDefPlayerAbility_StanceSpecialAttack::SpawnFinishEmitter ( )
{
	static UFunction* pFnSpawnFinishEmitter = NULL;

	if ( ! pFnSpawnFinishEmitter )
		pFnSpawnFinishEmitter = (UFunction*) UObject::GObjObjects()->Data[ 87341 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execSpawnFinishEmitter_Parms SpawnFinishEmitter_Parms;

	this->ProcessEvent ( pFnSpawnFinishEmitter, &SpawnFinishEmitter_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.AnimNotify_CurrentAbility_Off
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_StanceSpecialAttack::AnimNotify_CurrentAbility_Off ( )
{
	static UFunction* pFnAnimNotify_CurrentAbility_Off = NULL;

	if ( ! pFnAnimNotify_CurrentAbility_Off )
		pFnAnimNotify_CurrentAbility_Off = (UFunction*) UObject::GObjObjects()->Data[ 87340 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execAnimNotify_CurrentAbility_Off_Parms AnimNotify_CurrentAbility_Off_Parms;

	this->ProcessEvent ( pFnAnimNotify_CurrentAbility_Off, &AnimNotify_CurrentAbility_Off_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.AnimNotify_CurrentAbility_On
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_StanceSpecialAttack::AnimNotify_CurrentAbility_On ( )
{
	static UFunction* pFnAnimNotify_CurrentAbility_On = NULL;

	if ( ! pFnAnimNotify_CurrentAbility_On )
		pFnAnimNotify_CurrentAbility_On = (UFunction*) UObject::GObjObjects()->Data[ 87339 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execAnimNotify_CurrentAbility_On_Parms AnimNotify_CurrentAbility_On_Parms;

	this->ProcessEvent ( pFnAnimNotify_CurrentAbility_On, &AnimNotify_CurrentAbility_On_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.DoSpecialAttack
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_StanceSpecialAttack::DoSpecialAttack ( )
{
	static UFunction* pFnDoSpecialAttack = NULL;

	if ( ! pFnDoSpecialAttack )
		pFnDoSpecialAttack = (UFunction*) UObject::GObjObjects()->Data[ 87338 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execDoSpecialAttack_Parms DoSpecialAttack_Parms;

	this->ProcessEvent ( pFnDoSpecialAttack, &DoSpecialAttack_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ClearHitList
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_StanceSpecialAttack::ClearHitList ( )
{
	static UFunction* pFnClearHitList = NULL;

	if ( ! pFnClearHitList )
		pFnClearHitList = (UFunction*) UObject::GObjObjects()->Data[ 87337 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execClearHitList_Parms ClearHitList_Parms;

	this->ProcessEvent ( pFnClearHitList, &ClearHitList_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.DoSwinging
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_StanceSpecialAttack::DoSwinging ( )
{
	static UFunction* pFnDoSwinging = NULL;

	if ( ! pFnDoSwinging )
		pFnDoSwinging = (UFunction*) UObject::GObjObjects()->Data[ 87336 ];

	ADunDefPlayerAbility_StanceSpecialAttack_execDoSwinging_Parms DoSwinging_Parms;

	this->ProcessEvent ( pFnDoSwinging, &DoSwinging_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefPlayerAbility_StanceSpecialAttack::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 87320 ];

	ADunDefPlayerAbility_StanceSpecialAttack_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetAbilityStatus
// [0x00424102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ExtraStatusFlag                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

unsigned char ADunDefPlayerAbility_WheeloFortuna::GetAbilityStatus ( int* ExtraStatusFlag )
{
	static UFunction* pFnGetAbilityStatus = NULL;

	if ( ! pFnGetAbilityStatus )
		pFnGetAbilityStatus = (UFunction*) UObject::GObjObjects()->Data[ 87661 ];

	ADunDefPlayerAbility_WheeloFortuna_execGetAbilityStatus_Parms GetAbilityStatus_Parms;

	this->ProcessEvent ( pFnGetAbilityStatus, &GetAbilityStatus_Parms, NULL );

	if ( ExtraStatusFlag )
		*ExtraStatusFlag = GetAbilityStatus_Parms.ExtraStatusFlag;

	return GetAbilityStatus_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetCostToActivate
// [0x00024102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  returnTrueValue                ( CPF_OptionalParm | CPF_Parm )

int ADunDefPlayerAbility_WheeloFortuna::GetCostToActivate ( unsigned long returnTrueValue )
{
	static UFunction* pFnGetCostToActivate = NULL;

	if ( ! pFnGetCostToActivate )
		pFnGetCostToActivate = (UFunction*) UObject::GObjObjects()->Data[ 87658 ];

	ADunDefPlayerAbility_WheeloFortuna_execGetCostToActivate_Parms GetCostToActivate_Parms;
	GetCostToActivate_Parms.returnTrueValue = returnTrueValue;

	this->ProcessEvent ( pFnGetCostToActivate, &GetCostToActivate_Parms, NULL );

	return GetCostToActivate_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.StopLoopingAnims
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_WheeloFortuna::StopLoopingAnims ( )
{
	static UFunction* pFnStopLoopingAnims = NULL;

	if ( ! pFnStopLoopingAnims )
		pFnStopLoopingAnims = (UFunction*) UObject::GObjObjects()->Data[ 87657 ];

	ADunDefPlayerAbility_WheeloFortuna_execStopLoopingAnims_Parms StopLoopingAnims_Parms;

	this->ProcessEvent ( pFnStopLoopingAnims, &StopLoopingAnims_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetCastingCharacterAnimation
// [0x00020102] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName ADunDefPlayerAbility_WheeloFortuna::GetCastingCharacterAnimation ( )
{
	static UFunction* pFnGetCastingCharacterAnimation = NULL;

	if ( ! pFnGetCastingCharacterAnimation )
		pFnGetCastingCharacterAnimation = (UFunction*) UObject::GObjObjects()->Data[ 87655 ];

	ADunDefPlayerAbility_WheeloFortuna_execGetCastingCharacterAnimation_Parms GetCastingCharacterAnimation_Parms;

	this->ProcessEvent ( pFnGetCastingCharacterAnimation, &GetCastingCharacterAnimation_Parms, NULL );

	return GetCastingCharacterAnimation_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayerAbility_WheeloFortuna::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 87654 ];

	ADunDefPlayerAbility_WheeloFortuna_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ResetTimeDilation
// [0x00020002] 
// Parameters infos:

void ADunDefPlayerAbility_WheeloFortuna::ResetTimeDilation ( )
{
	static UFunction* pFnResetTimeDilation = NULL;

	if ( ! pFnResetTimeDilation )
		pFnResetTimeDilation = (UFunction*) UObject::GObjObjects()->Data[ 87651 ];

	ADunDefPlayerAbility_WheeloFortuna_execResetTimeDilation_Parms ResetTimeDilation_Parms;

	this->ProcessEvent ( pFnResetTimeDilation, &ResetTimeDilation_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.DoTimeDilation
// [0x00020002] 
// Parameters infos:
// struct FGlyphPattern           thePattern                     ( CPF_Parm | CPF_NeedCtorLink )

void ADunDefPlayerAbility_WheeloFortuna::DoTimeDilation ( struct FGlyphPattern thePattern )
{
	static UFunction* pFnDoTimeDilation = NULL;

	if ( ! pFnDoTimeDilation )
		pFnDoTimeDilation = (UFunction*) UObject::GObjObjects()->Data[ 87649 ];

	ADunDefPlayerAbility_WheeloFortuna_execDoTimeDilation_Parms DoTimeDilation_Parms;
	memcpy ( &DoTimeDilation_Parms.thePattern, &thePattern, 0x80 );

	this->ProcessEvent ( pFnDoTimeDilation, &DoTimeDilation_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.SpawnManaTokens
// [0x00020002] 
// Parameters infos:

void ADunDefPlayerAbility_WheeloFortuna::SpawnManaTokens ( )
{
	static UFunction* pFnSpawnManaTokens = NULL;

	if ( ! pFnSpawnManaTokens )
		pFnSpawnManaTokens = (UFunction*) UObject::GObjObjects()->Data[ 87640 ];

	ADunDefPlayerAbility_WheeloFortuna_execSpawnManaTokens_Parms SpawnManaTokens_Parms;

	this->ProcessEvent ( pFnSpawnManaTokens, &SpawnManaTokens_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GoldEnemy
// [0x00020102] 
// Parameters infos:
// class ADunDefEnemy*            Enemy                          ( CPF_Parm )

void ADunDefPlayerAbility_WheeloFortuna::GoldEnemy ( class ADunDefEnemy* Enemy )
{
	static UFunction* pFnGoldEnemy = NULL;

	if ( ! pFnGoldEnemy )
		pFnGoldEnemy = (UFunction*) UObject::GObjObjects()->Data[ 87637 ];

	ADunDefPlayerAbility_WheeloFortuna_execGoldEnemy_Parms GoldEnemy_Parms;
	GoldEnemy_Parms.Enemy = Enemy;

	this->ProcessEvent ( pFnGoldEnemy, &GoldEnemy_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.DoGolding
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGlyphPattern           thePattern                     ( CPF_Parm | CPF_NeedCtorLink )

bool ADunDefPlayerAbility_WheeloFortuna::DoGolding ( struct FGlyphPattern thePattern )
{
	static UFunction* pFnDoGolding = NULL;

	if ( ! pFnDoGolding )
		pFnDoGolding = (UFunction*) UObject::GObjObjects()->Data[ 87626 ];

	ADunDefPlayerAbility_WheeloFortuna_execDoGolding_Parms DoGolding_Parms;
	memcpy ( &DoGolding_Parms.thePattern, &thePattern, 0x80 );

	this->ProcessEvent ( pFnDoGolding, &DoGolding_Parms, NULL );

	return DoGolding_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.EndEffect
// [0x00020002] 
// Parameters infos:

void ADunDefPlayerAbility_WheeloFortuna::EndEffect ( )
{
	static UFunction* pFnEndEffect = NULL;

	if ( ! pFnEndEffect )
		pFnEndEffect = (UFunction*) UObject::GObjObjects()->Data[ 87625 ];

	ADunDefPlayerAbility_WheeloFortuna_execEndEffect_Parms EndEffect_Parms;

	this->ProcessEvent ( pFnEndEffect, &EndEffect_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ClearOutBoosters
// [0x00020002] 
// Parameters infos:

void ADunDefPlayerAbility_WheeloFortuna::ClearOutBoosters ( )
{
	static UFunction* pFnClearOutBoosters = NULL;

	if ( ! pFnClearOutBoosters )
		pFnClearOutBoosters = (UFunction*) UObject::GObjObjects()->Data[ 87619 ];

	ADunDefPlayerAbility_WheeloFortuna_execClearOutBoosters_Parms ClearOutBoosters_Parms;

	this->ProcessEvent ( pFnClearOutBoosters, &ClearOutBoosters_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HandleEnemyAffects
// [0x00020002] 
// Parameters infos:
// struct FGlyphPattern           thePattern                     ( CPF_Parm | CPF_NeedCtorLink )

void ADunDefPlayerAbility_WheeloFortuna::HandleEnemyAffects ( struct FGlyphPattern thePattern )
{
	static UFunction* pFnHandleEnemyAffects = NULL;

	if ( ! pFnHandleEnemyAffects )
		pFnHandleEnemyAffects = (UFunction*) UObject::GObjObjects()->Data[ 87606 ];

	ADunDefPlayerAbility_WheeloFortuna_execHandleEnemyAffects_Parms HandleEnemyAffects_Parms;
	memcpy ( &HandleEnemyAffects_Parms.thePattern, &thePattern, 0x80 );

	this->ProcessEvent ( pFnHandleEnemyAffects, &HandleEnemyAffects_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HandleTowerAffects
// [0x00020002] 
// Parameters infos:
// struct FGlyphPattern           thePattern                     ( CPF_Parm | CPF_NeedCtorLink )

void ADunDefPlayerAbility_WheeloFortuna::HandleTowerAffects ( struct FGlyphPattern thePattern )
{
	static UFunction* pFnHandleTowerAffects = NULL;

	if ( ! pFnHandleTowerAffects )
		pFnHandleTowerAffects = (UFunction*) UObject::GObjObjects()->Data[ 87596 ];

	ADunDefPlayerAbility_WheeloFortuna_execHandleTowerAffects_Parms HandleTowerAffects_Parms;
	memcpy ( &HandleTowerAffects_Parms.thePattern, &thePattern, 0x80 );

	this->ProcessEvent ( pFnHandleTowerAffects, &HandleTowerAffects_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HandlePlayerAffects
// [0x00020002] 
// Parameters infos:
// struct FGlyphPattern           thePattern                     ( CPF_Parm | CPF_NeedCtorLink )

void ADunDefPlayerAbility_WheeloFortuna::HandlePlayerAffects ( struct FGlyphPattern thePattern )
{
	static UFunction* pFnHandlePlayerAffects = NULL;

	if ( ! pFnHandlePlayerAffects )
		pFnHandlePlayerAffects = (UFunction*) UObject::GObjObjects()->Data[ 87579 ];

	ADunDefPlayerAbility_WheeloFortuna_execHandlePlayerAffects_Parms HandlePlayerAffects_Parms;
	memcpy ( &HandlePlayerAffects_Parms.thePattern, &thePattern, 0x80 );

	this->ProcessEvent ( pFnHandlePlayerAffects, &HandlePlayerAffects_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.DoTowerUpgrades
// [0x00020002] 
// Parameters infos:
// struct FGlyphPattern           thePattern                     ( CPF_Parm | CPF_NeedCtorLink )

void ADunDefPlayerAbility_WheeloFortuna::DoTowerUpgrades ( struct FGlyphPattern thePattern )
{
	static UFunction* pFnDoTowerUpgrades = NULL;

	if ( ! pFnDoTowerUpgrades )
		pFnDoTowerUpgrades = (UFunction*) UObject::GObjObjects()->Data[ 87565 ];

	ADunDefPlayerAbility_WheeloFortuna_execDoTowerUpgrades_Parms DoTowerUpgrades_Parms;
	memcpy ( &DoTowerUpgrades_Parms.thePattern, &thePattern, 0x80 );

	this->ProcessEvent ( pFnDoTowerUpgrades, &DoTowerUpgrades_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ServerHandleSuccess
// [0x00A200C2] 
// Parameters infos:
// int                            patternIdx                     ( CPF_Parm )

void ADunDefPlayerAbility_WheeloFortuna::ServerHandleSuccess ( int patternIdx )
{
	static UFunction* pFnServerHandleSuccess = NULL;

	if ( ! pFnServerHandleSuccess )
		pFnServerHandleSuccess = (UFunction*) UObject::GObjObjects()->Data[ 87562 ];

	ADunDefPlayerAbility_WheeloFortuna_execServerHandleSuccess_Parms ServerHandleSuccess_Parms;
	ServerHandleSuccess_Parms.patternIdx = patternIdx;

	this->ProcessEvent ( pFnServerHandleSuccess, &ServerHandleSuccess_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ServerHandleDefault
// [0x002200C2] 
// Parameters infos:

void ADunDefPlayerAbility_WheeloFortuna::ServerHandleDefault ( )
{
	static UFunction* pFnServerHandleDefault = NULL;

	if ( ! pFnServerHandleDefault )
		pFnServerHandleDefault = (UFunction*) UObject::GObjObjects()->Data[ 87561 ];

	ADunDefPlayerAbility_WheeloFortuna_execServerHandleDefault_Parms ServerHandleDefault_Parms;

	this->ProcessEvent ( pFnServerHandleDefault, &ServerHandleDefault_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.CancelAbility
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_WheeloFortuna::CancelAbility ( )
{
	static UFunction* pFnCancelAbility = NULL;

	if ( ! pFnCancelAbility )
		pFnCancelAbility = (UFunction*) UObject::GObjObjects()->Data[ 87560 ];

	ADunDefPlayerAbility_WheeloFortuna_execCancelAbility_Parms CancelAbility_Parms;

	this->ProcessEvent ( pFnCancelAbility, &CancelAbility_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.SetDoFadeOut
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_WheeloFortuna::SetDoFadeOut ( )
{
	static UFunction* pFnSetDoFadeOut = NULL;

	if ( ! pFnSetDoFadeOut )
		pFnSetDoFadeOut = (UFunction*) UObject::GObjObjects()->Data[ 87559 ];

	ADunDefPlayerAbility_WheeloFortuna_execSetDoFadeOut_Parms SetDoFadeOut_Parms;

	this->ProcessEvent ( pFnSetDoFadeOut, &SetDoFadeOut_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.FinishSelection
// [0x00820102] 
// Parameters infos:

void ADunDefPlayerAbility_WheeloFortuna::FinishSelection ( )
{
	static UFunction* pFnFinishSelection = NULL;

	if ( ! pFnFinishSelection )
		pFnFinishSelection = (UFunction*) UObject::GObjObjects()->Data[ 87556 ];

	ADunDefPlayerAbility_WheeloFortuna_execFinishSelection_Parms FinishSelection_Parms;

	this->ProcessEvent ( pFnFinishSelection, &FinishSelection_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.CheckPattern
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGlyphPattern           CheckPattern                   ( CPF_Parm | CPF_NeedCtorLink )

bool ADunDefPlayerAbility_WheeloFortuna::CheckPattern ( struct FGlyphPattern CheckPattern )
{
	static UFunction* pFnCheckPattern = NULL;

	if ( ! pFnCheckPattern )
		pFnCheckPattern = (UFunction*) UObject::GObjObjects()->Data[ 87544 ];

	ADunDefPlayerAbility_WheeloFortuna_execCheckPattern_Parms CheckPattern_Parms;
	memcpy ( &CheckPattern_Parms.CheckPattern, &CheckPattern, 0x80 );

	this->ProcessEvent ( pFnCheckPattern, &CheckPattern_Parms, NULL );

	return CheckPattern_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetBoostedTargets
// [0x00420002] 
// Parameters infos:
// TArray< class APawn* >         boostedTargets                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ADunDefPlayerAbility_WheeloFortuna::GetBoostedTargets ( TArray< class APawn* >* boostedTargets )
{
	static UFunction* pFnGetBoostedTargets = NULL;

	if ( ! pFnGetBoostedTargets )
		pFnGetBoostedTargets = (UFunction*) UObject::GObjObjects()->Data[ 87541 ];

	ADunDefPlayerAbility_WheeloFortuna_execGetBoostedTargets_Parms GetBoostedTargets_Parms;

	this->ProcessEvent ( pFnGetBoostedTargets, &GetBoostedTargets_Parms, NULL );

	if ( boostedTargets )
		memcpy ( boostedTargets, &GetBoostedTargets_Parms.boostedTargets, 0xC );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.NotifyOfBoostedRemoval
// [0x00020002] 
// Parameters infos:
// class APawn*                   removedBoostee                 ( CPF_Parm )

void ADunDefPlayerAbility_WheeloFortuna::NotifyOfBoostedRemoval ( class APawn* removedBoostee )
{
	static UFunction* pFnNotifyOfBoostedRemoval = NULL;

	if ( ! pFnNotifyOfBoostedRemoval )
		pFnNotifyOfBoostedRemoval = (UFunction*) UObject::GObjObjects()->Data[ 87539 ];

	ADunDefPlayerAbility_WheeloFortuna_execNotifyOfBoostedRemoval_Parms NotifyOfBoostedRemoval_Parms;
	NotifyOfBoostedRemoval_Parms.removedBoostee = removedBoostee;

	this->ProcessEvent ( pFnNotifyOfBoostedRemoval, &NotifyOfBoostedRemoval_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetPawnBoostAmount
// [0x00820002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

float ADunDefPlayerAbility_WheeloFortuna::GetPawnBoostAmount ( unsigned char boostType )
{
	static UFunction* pFnGetPawnBoostAmount = NULL;

	if ( ! pFnGetPawnBoostAmount )
		pFnGetPawnBoostAmount = (UFunction*) UObject::GObjObjects()->Data[ 87533 ];

	ADunDefPlayerAbility_WheeloFortuna_execGetPawnBoostAmount_Parms GetPawnBoostAmount_Parms;
	GetPawnBoostAmount_Parms.boostType = boostType;

	this->ProcessEvent ( pFnGetPawnBoostAmount, &GetPawnBoostAmount_Parms, NULL );

	return GetPawnBoostAmount_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HasPawnBoostingType
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

bool ADunDefPlayerAbility_WheeloFortuna::HasPawnBoostingType ( unsigned char boostType )
{
	static UFunction* pFnHasPawnBoostingType = NULL;

	if ( ! pFnHasPawnBoostingType )
		pFnHasPawnBoostingType = (UFunction*) UObject::GObjObjects()->Data[ 87529 ];

	ADunDefPlayerAbility_WheeloFortuna_execHasPawnBoostingType_Parms HasPawnBoostingType_Parms;
	HasPawnBoostingType_Parms.boostType = boostType;

	this->ProcessEvent ( pFnHasPawnBoostingType, &HasPawnBoostingType_Parms, NULL );

	return HasPawnBoostingType_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.UpdateStuns
// [0x00020002] 
// Parameters infos:

void ADunDefPlayerAbility_WheeloFortuna::UpdateStuns ( )
{
	static UFunction* pFnUpdateStuns = NULL;

	if ( ! pFnUpdateStuns )
		pFnUpdateStuns = (UFunction*) UObject::GObjObjects()->Data[ 87526 ];

	ADunDefPlayerAbility_WheeloFortuna_execUpdateStuns_Parms UpdateStuns_Parms;

	this->ProcessEvent ( pFnUpdateStuns, &UpdateStuns_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.AbilityTick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefPlayerAbility_WheeloFortuna::eventAbilityTick ( float DeltaTime )
{
	static UFunction* pFnAbilityTick = NULL;

	if ( ! pFnAbilityTick )
		pFnAbilityTick = (UFunction*) UObject::GObjObjects()->Data[ 87524 ];

	ADunDefPlayerAbility_WheeloFortuna_eventAbilityTick_Parms AbilityTick_Parms;
	AbilityTick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnAbilityTick, &AbilityTick_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ForceSelections
// [0x00020102] 
// Parameters infos:

void ADunDefPlayerAbility_WheeloFortuna::ForceSelections ( )
{
	static UFunction* pFnForceSelections = NULL;

	if ( ! pFnForceSelections )
		pFnForceSelections = (UFunction*) UObject::GObjObjects()->Data[ 87522 ];

	ADunDefPlayerAbility_WheeloFortuna_execForceSelections_Parms ForceSelections_Parms;

	this->ProcessEvent ( pFnForceSelections, &ForceSelections_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPlayerAbility_WheeloFortuna::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 87498 ];

	ADunDefPlayerAbility_WheeloFortuna_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefPlayerAbility_WheeloFortuna::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 87481 ];

	ADunDefPlayerAbility_WheeloFortuna_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefPurifyingBomb.HurtRadius
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          BaseDamage                     ( CPF_Parm )
// float                          DamageRadius                   ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// class AActor*                  IgnoredActor                   ( CPF_OptionalParm | CPF_Parm )
// class AController*             InstigatedByController         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bDoFullDamage                  ( CPF_OptionalParm | CPF_Parm )

bool ADunDefPurifyingBomb::HurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage )
{
	static UFunction* pFnHurtRadius = NULL;

	if ( ! pFnHurtRadius )
		pFnHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 87689 ];

	ADunDefPurifyingBomb_execHurtRadius_Parms HurtRadius_Parms;
	HurtRadius_Parms.BaseDamage = BaseDamage;
	HurtRadius_Parms.DamageRadius = DamageRadius;
	HurtRadius_Parms.DamageType = DamageType;
	HurtRadius_Parms.Momentum = Momentum;
	memcpy ( &HurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	HurtRadius_Parms.IgnoredActor = IgnoredActor;
	HurtRadius_Parms.InstigatedByController = InstigatedByController;
	HurtRadius_Parms.bDoFullDamage = bDoFullDamage;

	this->ProcessEvent ( pFnHurtRadius, &HurtRadius_Parms, NULL );

	return HurtRadius_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_Present.UpdateTowerRatingMaterial
// [0x00020100] 
// Parameters infos:

void ADunDefTower_Present::UpdateTowerRatingMaterial ( )
{
	static UFunction* pFnUpdateTowerRatingMaterial = NULL;

	if ( ! pFnUpdateTowerRatingMaterial )
		pFnUpdateTowerRatingMaterial = (UFunction*) UObject::GObjObjects()->Data[ 87878 ];

	ADunDefTower_Present_execUpdateTowerRatingMaterial_Parms UpdateTowerRatingMaterial_Parms;

	this->ProcessEvent ( pFnUpdateTowerRatingMaterial, &UpdateTowerRatingMaterial_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_Present.SpawnDroppedEquipment
// [0x00020002] 
// Parameters infos:

void ADunDefTower_Present::SpawnDroppedEquipment ( )
{
	static UFunction* pFnSpawnDroppedEquipment = NULL;

	if ( ! pFnSpawnDroppedEquipment )
		pFnSpawnDroppedEquipment = (UFunction*) UObject::GObjObjects()->Data[ 87873 ];

	ADunDefTower_Present_execSpawnDroppedEquipment_Parms SpawnDroppedEquipment_Parms;

	this->ProcessEvent ( pFnSpawnDroppedEquipment, &SpawnDroppedEquipment_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_Present.SpawnManaTokens
// [0x00020002] 
// Parameters infos:

void ADunDefTower_Present::SpawnManaTokens ( )
{
	static UFunction* pFnSpawnManaTokens = NULL;

	if ( ! pFnSpawnManaTokens )
		pFnSpawnManaTokens = (UFunction*) UObject::GObjObjects()->Data[ 87865 ];

	ADunDefTower_Present_execSpawnManaTokens_Parms SpawnManaTokens_Parms;

	this->ProcessEvent ( pFnSpawnManaTokens, &SpawnManaTokens_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_Present.DrawTowerToolTipStats
// [0x00420102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// float                          Opacity                        ( CPF_Parm )
// class ULocalPlayer*            ForPlayer                      ( CPF_Parm )
// float                          canvasScale                    ( CPF_Parm )
// float                          PosX                           ( CPF_Parm | CPF_OutParm )
// float                          PosY                           ( CPF_Parm | CPF_OutParm )

void ADunDefTower_Present::DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY )
{
	static UFunction* pFnDrawTowerToolTipStats = NULL;

	if ( ! pFnDrawTowerToolTipStats )
		pFnDrawTowerToolTipStats = (UFunction*) UObject::GObjObjects()->Data[ 87856 ];

	ADunDefTower_Present_execDrawTowerToolTipStats_Parms DrawTowerToolTipStats_Parms;
	DrawTowerToolTipStats_Parms.C = C;
	DrawTowerToolTipStats_Parms.Opacity = Opacity;
	DrawTowerToolTipStats_Parms.ForPlayer = ForPlayer;
	DrawTowerToolTipStats_Parms.canvasScale = canvasScale;

	this->ProcessEvent ( pFnDrawTowerToolTipStats, &DrawTowerToolTipStats_Parms, NULL );

	if ( PosX )
		*PosX = DrawTowerToolTipStats_Parms.PosX;

	if ( PosY )
		*PosY = DrawTowerToolTipStats_Parms.PosY;
};

// Function DunDefSpecial.DunDefTower_Present.AllowTowerSpawnAtLoc
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower*            TowerArchetype                 ( CPF_Parm )
// struct FVector                 placementPos                   ( CPF_Parm )
// unsigned long                  bOnlyCheckVolumes              ( CPF_OptionalParm | CPF_Parm )

bool ADunDefTower_Present::AllowTowerSpawnAtLoc ( class ADunDefTower* TowerArchetype, struct FVector placementPos, unsigned long bOnlyCheckVolumes )
{
	static UFunction* pFnAllowTowerSpawnAtLoc = NULL;

	if ( ! pFnAllowTowerSpawnAtLoc )
		pFnAllowTowerSpawnAtLoc = (UFunction*) UObject::GObjObjects()->Data[ 87844 ];

	ADunDefTower_Present_execAllowTowerSpawnAtLoc_Parms AllowTowerSpawnAtLoc_Parms;
	AllowTowerSpawnAtLoc_Parms.TowerArchetype = TowerArchetype;
	memcpy ( &AllowTowerSpawnAtLoc_Parms.placementPos, &placementPos, 0xC );
	AllowTowerSpawnAtLoc_Parms.bOnlyCheckVolumes = bOnlyCheckVolumes;

	this->ProcessEvent ( pFnAllowTowerSpawnAtLoc, &AllowTowerSpawnAtLoc_Parms, NULL );

	return AllowTowerSpawnAtLoc_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_Present.DoActorSpawn
// [0x00020002] 
// Parameters infos:
// struct FspawnChances           spawnChance                    ( CPF_Parm )

void ADunDefTower_Present::DoActorSpawn ( struct FspawnChances spawnChance )
{
	static UFunction* pFnDoActorSpawn = NULL;

	if ( ! pFnDoActorSpawn )
		pFnDoActorSpawn = (UFunction*) UObject::GObjObjects()->Data[ 87841 ];

	ADunDefTower_Present_execDoActorSpawn_Parms DoActorSpawn_Parms;
	memcpy ( &DoActorSpawn_Parms.spawnChance, &spawnChance, 0x14 );

	this->ProcessEvent ( pFnDoActorSpawn, &DoActorSpawn_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_Present.DoEnemySpawn
// [0x00820002] 
// Parameters infos:
// struct FspawnChances           spawnChance                    ( CPF_Parm )

void ADunDefTower_Present::DoEnemySpawn ( struct FspawnChances spawnChance )
{
	static UFunction* pFnDoEnemySpawn = NULL;

	if ( ! pFnDoEnemySpawn )
		pFnDoEnemySpawn = (UFunction*) UObject::GObjObjects()->Data[ 87834 ];

	ADunDefTower_Present_execDoEnemySpawn_Parms DoEnemySpawn_Parms;
	memcpy ( &DoEnemySpawn_Parms.spawnChance, &spawnChance, 0x14 );

	this->ProcessEvent ( pFnDoEnemySpawn, &DoEnemySpawn_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_Present.DoTowerSpawn
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FspawnChances           spawnChance                    ( CPF_Parm )
// struct FVector                 HitLoc                         ( CPF_Parm )

bool ADunDefTower_Present::DoTowerSpawn ( struct FspawnChances spawnChance, struct FVector HitLoc )
{
	static UFunction* pFnDoTowerSpawn = NULL;

	if ( ! pFnDoTowerSpawn )
		pFnDoTowerSpawn = (UFunction*) UObject::GObjObjects()->Data[ 87828 ];

	ADunDefTower_Present_execDoTowerSpawn_Parms DoTowerSpawn_Parms;
	memcpy ( &DoTowerSpawn_Parms.spawnChance, &spawnChance, 0x14 );
	memcpy ( &DoTowerSpawn_Parms.HitLoc, &HitLoc, 0xC );

	this->ProcessEvent ( pFnDoTowerSpawn, &DoTowerSpawn_Parms, NULL );

	return DoTowerSpawn_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_Present.DoPresentSpawn
// [0x00820002] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// unsigned long                  bSpawnOgresInLobby             ( CPF_Parm )

void ADunDefTower_Present::DoPresentSpawn ( struct FVector HitLocation, unsigned long bSpawnOgresInLobby )
{
	static UFunction* pFnDoPresentSpawn = NULL;

	if ( ! pFnDoPresentSpawn )
		pFnDoPresentSpawn = (UFunction*) UObject::GObjObjects()->Data[ 87824 ];

	ADunDefTower_Present_execDoPresentSpawn_Parms DoPresentSpawn_Parms;
	memcpy ( &DoPresentSpawn_Parms.HitLocation, &HitLocation, 0xC );
	DoPresentSpawn_Parms.bSpawnOgresInLobby = bSpawnOgresInLobby;

	this->ProcessEvent ( pFnDoPresentSpawn, &DoPresentSpawn_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_Present.PickActor
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Idx                            ( CPF_Parm )
// struct FspawnChances           spawnChance                    ( CPF_Parm | CPF_OutParm )

bool ADunDefTower_Present::PickActor ( int Idx, struct FspawnChances* spawnChance )
{
	static UFunction* pFnPickActor = NULL;

	if ( ! pFnPickActor )
		pFnPickActor = (UFunction*) UObject::GObjObjects()->Data[ 87815 ];

	ADunDefTower_Present_execPickActor_Parms PickActor_Parms;
	PickActor_Parms.Idx = Idx;

	this->ProcessEvent ( pFnPickActor, &PickActor_Parms, NULL );

	if ( spawnChance )
		memcpy ( spawnChance, &PickActor_Parms.spawnChance, 0x14 );

	return PickActor_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_Present.PickSpawnGroup
// [0x00020002] 
// Parameters infos:

void ADunDefTower_Present::PickSpawnGroup ( )
{
	static UFunction* pFnPickSpawnGroup = NULL;

	if ( ! pFnPickSpawnGroup )
		pFnPickSpawnGroup = (UFunction*) UObject::GObjObjects()->Data[ 87810 ];

	ADunDefTower_Present_execPickSpawnGroup_Parms PickSpawnGroup_Parms;

	this->ProcessEvent ( pFnPickSpawnGroup, &PickSpawnGroup_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_Present.Died
// [0x00020002] 
// Parameters infos:
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void ADunDefTower_Present::Died ( class AController* EventInstigator, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 87804 ];

	ADunDefTower_Present_execDied_Parms Died_Parms;
	Died_Parms.EventInstigator = EventInstigator;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );
	Died_Parms.DamageType = DamageType;
	Died_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_Present.ChangedGamePhases
// [0x00020102] 
// Parameters infos:
// unsigned long                  IsCombatPhase                  ( CPF_Parm )

void ADunDefTower_Present::ChangedGamePhases ( unsigned long IsCombatPhase )
{
	static UFunction* pFnChangedGamePhases = NULL;

	if ( ! pFnChangedGamePhases )
		pFnChangedGamePhases = (UFunction*) UObject::GObjObjects()->Data[ 87802 ];

	ADunDefTower_Present_execChangedGamePhases_Parms ChangedGamePhases_Parms;
	ChangedGamePhases_Parms.IsCombatPhase = IsCombatPhase;

	this->ProcessEvent ( pFnChangedGamePhases, &ChangedGamePhases_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.IsPhysicalTower
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefTower_ProjectileReflect::IsPhysicalTower ( )
{
	static UFunction* pFnIsPhysicalTower = NULL;

	if ( ! pFnIsPhysicalTower )
		pFnIsPhysicalTower = (UFunction*) UObject::GObjObjects()->Data[ 88557 ];

	ADunDefTower_ProjectileReflect_execIsPhysicalTower_Parms IsPhysicalTower_Parms;

	this->ProcessEvent ( pFnIsPhysicalTower, &IsPhysicalTower_Parms, NULL );

	return IsPhysicalTower_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.GetCostPerReflect
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefTower_ProjectileReflect::GetCostPerReflect ( )
{
	static UFunction* pFnGetCostPerReflect = NULL;

	if ( ! pFnGetCostPerReflect )
		pFnGetCostPerReflect = (UFunction*) UObject::GObjObjects()->Data[ 88555 ];

	ADunDefTower_ProjectileReflect_execGetCostPerReflect_Parms GetCostPerReflect_Parms;

	this->ProcessEvent ( pFnGetCostPerReflect, &GetCostPerReflect_Parms, NULL );

	return GetCostPerReflect_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_ProjectileReflect::eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 88547 ];

	ADunDefTower_ProjectileReflect_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.GetAttackDamage
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefTower_ProjectileReflect::GetAttackDamage ( )
{
	static UFunction* pFnGetAttackDamage = NULL;

	if ( ! pFnGetAttackDamage )
		pFnGetAttackDamage = (UFunction*) UObject::GObjObjects()->Data[ 88545 ];

	ADunDefTower_ProjectileReflect_execGetAttackDamage_Parms GetAttackDamage_Parms;

	this->ProcessEvent ( pFnGetAttackDamage, &GetAttackDamage_Parms, NULL );

	return GetAttackDamage_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.DoReflection
// [0x00020102] 
// Parameters infos:
// class ADunDefProjectile*       reflectedProj                  ( CPF_Parm )
// struct FVector                 NewDir                         ( CPF_Parm )

void ADunDefTower_ProjectileReflect::DoReflection ( class ADunDefProjectile* reflectedProj, struct FVector NewDir )
{
	static UFunction* pFnDoReflection = NULL;

	if ( ! pFnDoReflection )
		pFnDoReflection = (UFunction*) UObject::GObjObjects()->Data[ 88542 ];

	ADunDefTower_ProjectileReflect_execDoReflection_Parms DoReflection_Parms;
	DoReflection_Parms.reflectedProj = reflectedProj;
	memcpy ( &DoReflection_Parms.NewDir, &NewDir, 0xC );

	this->ProcessEvent ( pFnDoReflection, &DoReflection_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.KilledTarget
// [0x00020002] 
// Parameters infos:
// class UDunDefTargetableInterface* aTarget                        ( CPF_Parm )

void ADunDefTower_ProjectileReflect::KilledTarget ( class UDunDefTargetableInterface* aTarget )
{
	static UFunction* pFnKilledTarget = NULL;

	if ( ! pFnKilledTarget )
		pFnKilledTarget = (UFunction*) UObject::GObjObjects()->Data[ 88540 ];

	ADunDefTower_ProjectileReflect_execKilledTarget_Parms KilledTarget_Parms;
	KilledTarget_Parms.aTarget = aTarget;

	this->ProcessEvent ( pFnKilledTarget, &KilledTarget_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.Touch
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefTower_ProjectileReflect::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 88530 ];

	ADunDefTower_ProjectileReflect_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.SetBoostMultiplier
// [0x00020002] 
// Parameters infos:
// int                            Idx                            ( CPF_Parm )

void ADunDefTower_TripTowerBuff::SetBoostMultiplier ( int Idx )
{
	static UFunction* pFnSetBoostMultiplier = NULL;

	if ( ! pFnSetBoostMultiplier )
		pFnSetBoostMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 88905 ];

	ADunDefTower_TripTowerBuff_execSetBoostMultiplier_Parms SetBoostMultiplier_Parms;
	SetBoostMultiplier_Parms.Idx = Idx;

	this->ProcessEvent ( pFnSetBoostMultiplier, &SetBoostMultiplier_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.RefreshBoosts
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripTowerBuff::RefreshBoosts ( )
{
	static UFunction* pFnRefreshBoosts = NULL;

	if ( ! pFnRefreshBoosts )
		pFnRefreshBoosts = (UFunction*) UObject::GObjObjects()->Data[ 88903 ];

	ADunDefTower_TripTowerBuff_execRefreshBoosts_Parms RefreshBoosts_Parms;

	this->ProcessEvent ( pFnRefreshBoosts, &RefreshBoosts_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.ScaleForHeroModifiers
// [0x00020002] 
// Parameters infos:
// unsigned long                  IsFirstTime                    ( CPF_Parm )

void ADunDefTower_TripTowerBuff::ScaleForHeroModifiers ( unsigned long IsFirstTime )
{
	static UFunction* pFnScaleForHeroModifiers = NULL;

	if ( ! pFnScaleForHeroModifiers )
		pFnScaleForHeroModifiers = (UFunction*) UObject::GObjObjects()->Data[ 88900 ];

	ADunDefTower_TripTowerBuff_execScaleForHeroModifiers_Parms ScaleForHeroModifiers_Parms;
	ScaleForHeroModifiers_Parms.IsFirstTime = IsFirstTime;

	this->ProcessEvent ( pFnScaleForHeroModifiers, &ScaleForHeroModifiers_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.DrawTowerToolTipStats
// [0x00C20102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// float                          Opacity                        ( CPF_Parm )
// class ULocalPlayer*            ForPlayer                      ( CPF_Parm )
// float                          canvasScale                    ( CPF_Parm )
// float                          PosX                           ( CPF_Parm | CPF_OutParm )
// float                          PosY                           ( CPF_Parm | CPF_OutParm )

void ADunDefTower_TripTowerBuff::DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY )
{
	static UFunction* pFnDrawTowerToolTipStats = NULL;

	if ( ! pFnDrawTowerToolTipStats )
		pFnDrawTowerToolTipStats = (UFunction*) UObject::GObjObjects()->Data[ 88892 ];

	ADunDefTower_TripTowerBuff_execDrawTowerToolTipStats_Parms DrawTowerToolTipStats_Parms;
	DrawTowerToolTipStats_Parms.C = C;
	DrawTowerToolTipStats_Parms.Opacity = Opacity;
	DrawTowerToolTipStats_Parms.ForPlayer = ForPlayer;
	DrawTowerToolTipStats_Parms.canvasScale = canvasScale;

	this->ProcessEvent ( pFnDrawTowerToolTipStats, &DrawTowerToolTipStats_Parms, NULL );

	if ( PosX )
		*PosX = DrawTowerToolTipStats_Parms.PosX;

	if ( PosY )
		*PosY = DrawTowerToolTipStats_Parms.PosY;
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.SetUseHealthBarMat
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripTowerBuff::SetUseHealthBarMat ( )
{
	static UFunction* pFnSetUseHealthBarMat = NULL;

	if ( ! pFnSetUseHealthBarMat )
		pFnSetUseHealthBarMat = (UFunction*) UObject::GObjObjects()->Data[ 88891 ];

	ADunDefTower_TripTowerBuff_execSetUseHealthBarMat_Parms SetUseHealthBarMat_Parms;

	this->ProcessEvent ( pFnSetUseHealthBarMat, &SetUseHealthBarMat_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.GetToolTipText
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ADunDefTower_TripTowerBuff::GetToolTipText ( )
{
	static UFunction* pFnGetToolTipText = NULL;

	if ( ! pFnGetToolTipText )
		pFnGetToolTipText = (UFunction*) UObject::GObjObjects()->Data[ 88889 ];

	ADunDefTower_TripTowerBuff_execGetToolTipText_Parms GetToolTipText_Parms;

	this->ProcessEvent ( pFnGetToolTipText, &GetToolTipText_Parms, NULL );

	return GetToolTipText_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.NeedsRepair
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  requireFullHealth              ( CPF_OptionalParm | CPF_Parm )

bool ADunDefTower_TripTowerBuff::NeedsRepair ( unsigned long requireFullHealth )
{
	static UFunction* pFnNeedsRepair = NULL;

	if ( ! pFnNeedsRepair )
		pFnNeedsRepair = (UFunction*) UObject::GObjObjects()->Data[ 88886 ];

	ADunDefTower_TripTowerBuff_execNeedsRepair_Parms NeedsRepair_Parms;
	NeedsRepair_Parms.requireFullHealth = requireFullHealth;

	this->ProcessEvent ( pFnNeedsRepair, &NeedsRepair_Parms, NULL );

	return NeedsRepair_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.RemoveTowerEffectIndex
// [0x00020102] 
// Parameters infos:
// int                            Idx                            ( CPF_Parm )

void ADunDefTower_TripTowerBuff::RemoveTowerEffectIndex ( int Idx )
{
	static UFunction* pFnRemoveTowerEffectIndex = NULL;

	if ( ! pFnRemoveTowerEffectIndex )
		pFnRemoveTowerEffectIndex = (UFunction*) UObject::GObjObjects()->Data[ 88884 ];

	ADunDefTower_TripTowerBuff_execRemoveTowerEffectIndex_Parms RemoveTowerEffectIndex_Parms;
	RemoveTowerEffectIndex_Parms.Idx = Idx;

	this->ProcessEvent ( pFnRemoveTowerEffectIndex, &RemoveTowerEffectIndex_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.RemoveTowerEffect
// [0x00020102] 
// Parameters infos:
// class ADunDefTower*            theTower                       ( CPF_Parm )

void ADunDefTower_TripTowerBuff::RemoveTowerEffect ( class ADunDefTower* theTower )
{
	static UFunction* pFnRemoveTowerEffect = NULL;

	if ( ! pFnRemoveTowerEffect )
		pFnRemoveTowerEffect = (UFunction*) UObject::GObjObjects()->Data[ 88881 ];

	ADunDefTower_TripTowerBuff_execRemoveTowerEffect_Parms RemoveTowerEffect_Parms;
	RemoveTowerEffect_Parms.theTower = theTower;

	this->ProcessEvent ( pFnRemoveTowerEffect, &RemoveTowerEffect_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.AddTowerEffect
// [0x00820102] 
// Parameters infos:
// class ADunDefTower*            theTower                       ( CPF_Parm )

void ADunDefTower_TripTowerBuff::AddTowerEffect ( class ADunDefTower* theTower )
{
	static UFunction* pFnAddTowerEffect = NULL;

	if ( ! pFnAddTowerEffect )
		pFnAddTowerEffect = (UFunction*) UObject::GObjObjects()->Data[ 88877 ];

	ADunDefTower_TripTowerBuff_execAddTowerEffect_Parms AddTowerEffect_Parms;
	AddTowerEffect_Parms.theTower = theTower;

	this->ProcessEvent ( pFnAddTowerEffect, &AddTowerEffect_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.GetMaxDetonations
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefTower_TripTowerBuff::GetMaxDetonations ( )
{
	static UFunction* pFnGetMaxDetonations = NULL;

	if ( ! pFnGetMaxDetonations )
		pFnGetMaxDetonations = (UFunction*) UObject::GObjObjects()->Data[ 88875 ];

	ADunDefTower_TripTowerBuff_execGetMaxDetonations_Parms GetMaxDetonations_Parms;

	this->ProcessEvent ( pFnGetMaxDetonations, &GetMaxDetonations_Parms, NULL );

	return GetMaxDetonations_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_TripTowerBuff::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 88874 ];

	ADunDefTower_TripTowerBuff_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.RemoveAllBoosts
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripTowerBuff::RemoveAllBoosts ( )
{
	static UFunction* pFnRemoveAllBoosts = NULL;

	if ( ! pFnRemoveAllBoosts )
		pFnRemoveAllBoosts = (UFunction*) UObject::GObjObjects()->Data[ 88871 ];

	ADunDefTower_TripTowerBuff_execRemoveAllBoosts_Parms RemoveAllBoosts_Parms;

	this->ProcessEvent ( pFnRemoveAllBoosts, &RemoveAllBoosts_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefTower_TripTowerBuff::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 88870 ];

	ADunDefTower_TripTowerBuff_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.ClearDeletedTowers
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripTowerBuff::ClearDeletedTowers ( )
{
	static UFunction* pFnClearDeletedTowers = NULL;

	if ( ! pFnClearDeletedTowers )
		pFnClearDeletedTowers = (UFunction*) UObject::GObjObjects()->Data[ 88867 ];

	ADunDefTower_TripTowerBuff_execClearDeletedTowers_Parms ClearDeletedTowers_Parms;

	this->ProcessEvent ( pFnClearDeletedTowers, &ClearDeletedTowers_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.CheckTowers
// [0x00020102] 
// Parameters infos:

void ADunDefTower_TripTowerBuff::CheckTowers ( )
{
	static UFunction* pFnCheckTowers = NULL;

	if ( ! pFnCheckTowers )
		pFnCheckTowers = (UFunction*) UObject::GObjObjects()->Data[ 88864 ];

	ADunDefTower_TripTowerBuff_execCheckTowers_Parms CheckTowers_Parms;

	this->ProcessEvent ( pFnCheckTowers, &CheckTowers_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.CanAffectTower
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower*            towerCheck                     ( CPF_Parm )

bool ADunDefTower_TripTowerBuff::CanAffectTower ( class ADunDefTower* towerCheck )
{
	static UFunction* pFnCanAffectTower = NULL;

	if ( ! pFnCanAffectTower )
		pFnCanAffectTower = (UFunction*) UObject::GObjObjects()->Data[ 88861 ];

	ADunDefTower_TripTowerBuff_execCanAffectTower_Parms CanAffectTower_Parms;
	CanAffectTower_Parms.towerCheck = towerCheck;

	this->ProcessEvent ( pFnCanAffectTower, &CanAffectTower_Parms, NULL );

	return CanAffectTower_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.DoTracing
// [0x00824102] 
// Parameters infos:
// float                          dt                             ( CPF_Parm )
// unsigned long                  bForceDamage                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_TripTowerBuff::DoTracing ( float dt, unsigned long bForceDamage )
{
	static UFunction* pFnDoTracing = NULL;

	if ( ! pFnDoTracing )
		pFnDoTracing = (UFunction*) UObject::GObjObjects()->Data[ 88852 ];

	ADunDefTower_TripTowerBuff_execDoTracing_Parms DoTracing_Parms;
	DoTracing_Parms.dt = dt;
	DoTracing_Parms.bForceDamage = bForceDamage;

	this->ProcessEvent ( pFnDoTracing, &DoTracing_Parms, NULL );
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.GetTowerBoostAmount
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

float ADunDefTower_TripTowerBuff::GetTowerBoostAmount ( unsigned char boostType )
{
	static UFunction* pFnGetTowerBoostAmount = NULL;

	if ( ! pFnGetTowerBoostAmount )
		pFnGetTowerBoostAmount = (UFunction*) UObject::GObjObjects()->Data[ 88848 ];

	ADunDefTower_TripTowerBuff_execGetTowerBoostAmount_Parms GetTowerBoostAmount_Parms;
	GetTowerBoostAmount_Parms.boostType = boostType;

	this->ProcessEvent ( pFnGetTowerBoostAmount, &GetTowerBoostAmount_Parms, NULL );

	return GetTowerBoostAmount_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.HasTowerBoostingType
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

bool ADunDefTower_TripTowerBuff::HasTowerBoostingType ( unsigned char boostType )
{
	static UFunction* pFnHasTowerBoostingType = NULL;

	if ( ! pFnHasTowerBoostingType )
		pFnHasTowerBoostingType = (UFunction*) UObject::GObjObjects()->Data[ 88845 ];

	ADunDefTower_TripTowerBuff_execHasTowerBoostingType_Parms HasTowerBoostingType_Parms;
	HasTowerBoostingType_Parms.boostType = boostType;

	this->ProcessEvent ( pFnHasTowerBoostingType, &HasTowerBoostingType_Parms, NULL );

	return HasTowerBoostingType_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.GetTowerBoostingTarget
// [0x00020000] 
// Parameters infos:
// class UDunDefTargetableInterface* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UDunDefTargetableInterface* ADunDefTower_TripTowerBuff::GetTowerBoostingTarget ( )
{
	static UFunction* pFnGetTowerBoostingTarget = NULL;

	if ( ! pFnGetTowerBoostingTarget )
		pFnGetTowerBoostingTarget = (UFunction*) UObject::GObjObjects()->Data[ 88843 ];

	ADunDefTower_TripTowerBuff_execGetTowerBoostingTarget_Parms GetTowerBoostingTarget_Parms;

	this->ProcessEvent ( pFnGetTowerBoostingTarget, &GetTowerBoostingTarget_Parms, NULL );

	return GetTowerBoostingTarget_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefTower_TripTowerBuff::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 88826 ];

	ADunDefTower_TripTowerBuff_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefSpecial.DunDefTurkey.UpdateDifficultyValues
// [0x00024002] 
// Parameters infos:
// unsigned long                  UpdateMaterial                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  onlyDynamicValues              ( CPF_OptionalParm | CPF_Parm )

void ADunDefTurkey::UpdateDifficultyValues ( unsigned long UpdateMaterial, unsigned long onlyDynamicValues )
{
	static UFunction* pFnUpdateDifficultyValues = NULL;

	if ( ! pFnUpdateDifficultyValues )
		pFnUpdateDifficultyValues = (UFunction*) UObject::GObjObjects()->Data[ 88948 ];

	ADunDefTurkey_execUpdateDifficultyValues_Parms UpdateDifficultyValues_Parms;
	UpdateDifficultyValues_Parms.UpdateMaterial = UpdateMaterial;
	UpdateDifficultyValues_Parms.onlyDynamicValues = onlyDynamicValues;

	this->ProcessEvent ( pFnUpdateDifficultyValues, &UpdateDifficultyValues_Parms, NULL );
};

// Function DunDefSpecial.DunDefTurkey.Bump
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefTurkey::eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal )
{
	static UFunction* pFnBump = NULL;

	if ( ! pFnBump )
		pFnBump = (UFunction*) UObject::GObjObjects()->Data[ 88940 ];

	ADunDefTurkey_eventBump_Parms Bump_Parms;
	Bump_Parms.Other = Other;
	Bump_Parms.OtherComp = OtherComp;
	memcpy ( &Bump_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnBump, &Bump_Parms, NULL );
};

// Function DunDefSpecial.DunDefTurkey.StopFlee
// [0x00020002] 
// Parameters infos:

void ADunDefTurkey::StopFlee ( )
{
	static UFunction* pFnStopFlee = NULL;

	if ( ! pFnStopFlee )
		pFnStopFlee = (UFunction*) UObject::GObjObjects()->Data[ 88939 ];

	ADunDefTurkey_execStopFlee_Parms StopFlee_Parms;

	this->ProcessEvent ( pFnStopFlee, &StopFlee_Parms, NULL );
};

// Function DunDefSpecial.DunDefTurkey.PlayFleeSound
// [0x00020102] 
// Parameters infos:

void ADunDefTurkey::PlayFleeSound ( )
{
	static UFunction* pFnPlayFleeSound = NULL;

	if ( ! pFnPlayFleeSound )
		pFnPlayFleeSound = (UFunction*) UObject::GObjObjects()->Data[ 88938 ];

	ADunDefTurkey_execPlayFleeSound_Parms PlayFleeSound_Parms;

	this->ProcessEvent ( pFnPlayFleeSound, &PlayFleeSound_Parms, NULL );
};

// Function DunDefSpecial.DunDefTurkey.StartFlee
// [0x00020002] 
// Parameters infos:

void ADunDefTurkey::StartFlee ( )
{
	static UFunction* pFnStartFlee = NULL;

	if ( ! pFnStartFlee )
		pFnStartFlee = (UFunction*) UObject::GObjObjects()->Data[ 88937 ];

	ADunDefTurkey_execStartFlee_Parms StartFlee_Parms;

	this->ProcessEvent ( pFnStartFlee, &StartFlee_Parms, NULL );
};

// Function DunDefSpecial.DunDefTurkey.SetGroundSpeed
// [0x00024002] 
// Parameters infos:
// float                          NewSpeed                       ( CPF_Parm )
// unsigned long                  bUseDifficultyMult             ( CPF_OptionalParm | CPF_Parm )

void ADunDefTurkey::SetGroundSpeed ( float NewSpeed, unsigned long bUseDifficultyMult )
{
	static UFunction* pFnSetGroundSpeed = NULL;

	if ( ! pFnSetGroundSpeed )
		pFnSetGroundSpeed = (UFunction*) UObject::GObjObjects()->Data[ 88934 ];

	ADunDefTurkey_execSetGroundSpeed_Parms SetGroundSpeed_Parms;
	SetGroundSpeed_Parms.NewSpeed = NewSpeed;
	SetGroundSpeed_Parms.bUseDifficultyMult = bUseDifficultyMult;

	this->ProcessEvent ( pFnSetGroundSpeed, &SetGroundSpeed_Parms, NULL );
};

// Function DunDefSpecial.DunDefTurkey.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ADunDefTurkey::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 88929 ];

	ADunDefTurkey_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTurkey.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefTurkey::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 88928 ];

	ADunDefTurkey_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.DunDefTurkey.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefTurkey::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 88926 ];

	ADunDefTurkey_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpecial.DunDefTurkeyController.WantsHurtAnimation
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefTurkeyController::WantsHurtAnimation ( )
{
	static UFunction* pFnWantsHurtAnimation = NULL;

	if ( ! pFnWantsHurtAnimation )
		pFnWantsHurtAnimation = (UFunction*) UObject::GObjObjects()->Data[ 88991 ];

	ADunDefTurkeyController_execWantsHurtAnimation_Parms WantsHurtAnimation_Parms;

	this->ProcessEvent ( pFnWantsHurtAnimation, &WantsHurtAnimation_Parms, NULL );

	return WantsHurtAnimation_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTurkeyController.NotifyTakeHitEX
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void ADunDefTurkeyController::NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser )
{
	static UFunction* pFnNotifyTakeHitEX = NULL;

	if ( ! pFnNotifyTakeHitEX )
		pFnNotifyTakeHitEX = (UFunction*) UObject::GObjObjects()->Data[ 88984 ];

	ADunDefTurkeyController_execNotifyTakeHitEX_Parms NotifyTakeHitEX_Parms;
	NotifyTakeHitEX_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHitEX_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHitEX_Parms.Damage = Damage;
	NotifyTakeHitEX_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHitEX_Parms.Momentum, &Momentum, 0xC );
	NotifyTakeHitEX_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnNotifyTakeHitEX, &NotifyTakeHitEX_Parms, NULL );
};

// Function DunDefSpecial.DunDefTurkeyController.GetWanderPoint
// [0x00820002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ADunDefTurkeyController::GetWanderPoint ( )
{
	static UFunction* pFnGetWanderPoint = NULL;

	if ( ! pFnGetWanderPoint )
		pFnGetWanderPoint = (UFunction*) UObject::GObjObjects()->Data[ 88980 ];

	ADunDefTurkeyController_execGetWanderPoint_Parms GetWanderPoint_Parms;

	this->ProcessEvent ( pFnGetWanderPoint, &GetWanderPoint_Parms, NULL );

	return GetWanderPoint_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTurkeyController.DoFlee
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayer*           fleeFrom                       ( CPF_Parm )

bool ADunDefTurkeyController::DoFlee ( class ADunDefPlayer* fleeFrom )
{
	static UFunction* pFnDoFlee = NULL;

	if ( ! pFnDoFlee )
		pFnDoFlee = (UFunction*) UObject::GObjObjects()->Data[ 88945 ];

	ADunDefTurkeyController_execDoFlee_Parms DoFlee_Parms;
	DoFlee_Parms.fleeFrom = fleeFrom;

	this->ProcessEvent ( pFnDoFlee, &DoFlee_Parms, NULL );

	return DoFlee_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTurkeyController.CheckPlayers
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefTurkeyController::CheckPlayers ( )
{
	static UFunction* pFnCheckPlayers = NULL;

	if ( ! pFnCheckPlayers )
		pFnCheckPlayers = (UFunction*) UObject::GObjObjects()->Data[ 88972 ];

	ADunDefTurkeyController_execCheckPlayers_Parms CheckPlayers_Parms;

	this->ProcessEvent ( pFnCheckPlayers, &CheckPlayers_Parms, NULL );

	return CheckPlayers_Parms.ReturnValue;
};

// Function DunDefSpecial.DunDefTurkeyController.TimeOutFlee
// [0x00020002] 
// Parameters infos:

void ADunDefTurkeyController::TimeOutFlee ( )
{
	static UFunction* pFnTimeOutFlee = NULL;

	if ( ! pFnTimeOutFlee )
		pFnTimeOutFlee = (UFunction*) UObject::GObjObjects()->Data[ 88971 ];

	ADunDefTurkeyController_execTimeOutFlee_Parms TimeOutFlee_Parms;

	this->ProcessEvent ( pFnTimeOutFlee, &TimeOutFlee_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_AroundTheWorld.InitGameReplicationInfo
// [0x00020002] 
// Parameters infos:

void AGameInfo_AroundTheWorld::InitGameReplicationInfo ( )
{
	static UFunction* pFnInitGameReplicationInfo = NULL;

	if ( ! pFnInitGameReplicationInfo )
		pFnInitGameReplicationInfo = (UFunction*) UObject::GObjObjects()->Data[ 88997 ];

	AGameInfo_AroundTheWorld_execInitGameReplicationInfo_Parms InitGameReplicationInfo_Parms;

	this->ProcessEvent ( pFnInitGameReplicationInfo, &InitGameReplicationInfo_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_AroundTheWorld.DoWaveSkipping
// [0x00024002] 
// Parameters infos:
// unsigned long                  bAllowArbritraryWaveSkipping   ( CPF_OptionalParm | CPF_Parm )

void AGameInfo_AroundTheWorld::DoWaveSkipping ( unsigned long bAllowArbritraryWaveSkipping )
{
	static UFunction* pFnDoWaveSkipping = NULL;

	if ( ! pFnDoWaveSkipping )
		pFnDoWaveSkipping = (UFunction*) UObject::GObjObjects()->Data[ 88995 ];

	AGameInfo_AroundTheWorld_execDoWaveSkipping_Parms DoWaveSkipping_Parms;
	DoWaveSkipping_Parms.bAllowArbritraryWaveSkipping = bAllowArbritraryWaveSkipping;

	this->ProcessEvent ( pFnDoWaveSkipping, &DoWaveSkipping_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_Assault.InitGameReplicationInfo
// [0x00020002] 
// Parameters infos:

void AGameInfo_Assault::InitGameReplicationInfo ( )
{
	static UFunction* pFnInitGameReplicationInfo = NULL;

	if ( ! pFnInitGameReplicationInfo )
		pFnInitGameReplicationInfo = (UFunction*) UObject::GObjObjects()->Data[ 89005 ];

	AGameInfo_Assault_execInitGameReplicationInfo_Parms InitGameReplicationInfo_Parms;

	this->ProcessEvent ( pFnInitGameReplicationInfo, &InitGameReplicationInfo_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_Assault.DoWaveSkipping
// [0x00024002] 
// Parameters infos:
// unsigned long                  bAllowArbritraryWaveSkipping   ( CPF_OptionalParm | CPF_Parm )

void AGameInfo_Assault::DoWaveSkipping ( unsigned long bAllowArbritraryWaveSkipping )
{
	static UFunction* pFnDoWaveSkipping = NULL;

	if ( ! pFnDoWaveSkipping )
		pFnDoWaveSkipping = (UFunction*) UObject::GObjObjects()->Data[ 89003 ];

	AGameInfo_Assault_execDoWaveSkipping_Parms DoWaveSkipping_Parms;
	DoWaveSkipping_Parms.bAllowArbritraryWaveSkipping = bAllowArbritraryWaveSkipping;

	this->ProcessEvent ( pFnDoWaveSkipping, &DoWaveSkipping_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_Assault.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameInfo_Assault::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 89002 ];

	AGameInfo_Assault_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_Assault.RestartPlayer
// [0x00020002] 
// Parameters infos:
// class AController*             NewPlayer                      ( CPF_Parm )

void AGameInfo_Assault::RestartPlayer ( class AController* NewPlayer )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 89000 ];

	AGameInfo_Assault_execRestartPlayer_Parms RestartPlayer_Parms;
	RestartPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_Chicken.RestartPlayer
// [0x00020002] 
// Parameters infos:
// class AController*             NewPlayer                      ( CPF_Parm )

void AGameInfo_Chicken::RestartPlayer ( class AController* NewPlayer )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 89008 ];

	AGameInfo_Chicken_execRestartPlayer_Parms RestartPlayer_Parms;
	RestartPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_GoldenTokens.Killed
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             KilledPlayer                   ( CPF_Parm )
// class APawn*                   KilledPawn                     ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void AGameInfo_GoldenTokens::Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType )
{
	static UFunction* pFnKilled = NULL;

	if ( ! pFnKilled )
		pFnKilled = (UFunction*) UObject::GObjObjects()->Data[ 89016 ];

	AGameInfo_GoldenTokens_execKilled_Parms Killed_Parms;
	Killed_Parms.Killer = Killer;
	Killed_Parms.KilledPlayer = KilledPlayer;
	Killed_Parms.KilledPawn = KilledPawn;
	Killed_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnKilled, &Killed_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit.RestartPlayer
// [0x00020002] 
// Parameters infos:
// class AController*             NewPlayer                      ( CPF_Parm )

void AGameInfo_KillEnemiesTimeLimit::RestartPlayer ( class AController* NewPlayer )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 89025 ];

	AGameInfo_KillEnemiesTimeLimit_execRestartPlayer_Parms RestartPlayer_Parms;
	RestartPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit.DoWaveSkipping
// [0x00024002] 
// Parameters infos:
// unsigned long                  bAllowArbritraryWaveSkipping   ( CPF_OptionalParm | CPF_Parm )

void AGameInfo_KillEnemiesTimeLimit::DoWaveSkipping ( unsigned long bAllowArbritraryWaveSkipping )
{
	static UFunction* pFnDoWaveSkipping = NULL;

	if ( ! pFnDoWaveSkipping )
		pFnDoWaveSkipping = (UFunction*) UObject::GObjObjects()->Data[ 89023 ];

	AGameInfo_KillEnemiesTimeLimit_execDoWaveSkipping_Parms DoWaveSkipping_Parms;
	DoWaveSkipping_Parms.bAllowArbritraryWaveSkipping = bAllowArbritraryWaveSkipping;

	this->ProcessEvent ( pFnDoWaveSkipping, &DoWaveSkipping_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber.AddObjectiveScore
// [0x00020000] 
// Parameters infos:
// class APlayerReplicationInfo*  Scorer                         ( CPF_Parm )
// int                            Score                          ( CPF_Parm )

void AGameInfo_KillEnemiesTimeLimit_Uber::AddObjectiveScore ( class APlayerReplicationInfo* Scorer, int Score )
{
	static UFunction* pFnAddObjectiveScore = NULL;

	if ( ! pFnAddObjectiveScore )
		pFnAddObjectiveScore = (UFunction*) UObject::GObjObjects()->Data[ 89040 ];

	AGameInfo_KillEnemiesTimeLimit_Uber_execAddObjectiveScore_Parms AddObjectiveScore_Parms;
	AddObjectiveScore_Parms.Scorer = Scorer;
	AddObjectiveScore_Parms.Score = Score;

	this->ProcessEvent ( pFnAddObjectiveScore, &AddObjectiveScore_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber.ScoreKill
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             Other                          ( CPF_Parm )

void AGameInfo_KillEnemiesTimeLimit_Uber::ScoreKill ( class AController* Killer, class AController* Other )
{
	static UFunction* pFnScoreKill = NULL;

	if ( ! pFnScoreKill )
		pFnScoreKill = (UFunction*) UObject::GObjObjects()->Data[ 89036 ];

	AGameInfo_KillEnemiesTimeLimit_Uber_execScoreKill_Parms ScoreKill_Parms;
	ScoreKill_Parms.Killer = Killer;
	ScoreKill_Parms.Other = Other;

	this->ProcessEvent ( pFnScoreKill, &ScoreKill_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber.Killed
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             KilledPlayer                   ( CPF_Parm )
// class APawn*                   KilledPawn                     ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void AGameInfo_KillEnemiesTimeLimit_Uber::Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType )
{
	static UFunction* pFnKilled = NULL;

	if ( ! pFnKilled )
		pFnKilled = (UFunction*) UObject::GObjObjects()->Data[ 89031 ];

	AGameInfo_KillEnemiesTimeLimit_Uber_execKilled_Parms Killed_Parms;
	Killed_Parms.Killer = Killer;
	Killed_Parms.KilledPlayer = KilledPlayer;
	Killed_Parms.KilledPawn = KilledPawn;
	Killed_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnKilled, &Killed_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber.CalculatedNetSpeed
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AGameInfo_KillEnemiesTimeLimit_Uber::CalculatedNetSpeed ( )
{
	static UFunction* pFnCalculatedNetSpeed = NULL;

	if ( ! pFnCalculatedNetSpeed )
		pFnCalculatedNetSpeed = (UFunction*) UObject::GObjObjects()->Data[ 89029 ];

	AGameInfo_KillEnemiesTimeLimit_Uber_execCalculatedNetSpeed_Parms CalculatedNetSpeed_Parms;

	this->ProcessEvent ( pFnCalculatedNetSpeed, &CalculatedNetSpeed_Parms, NULL );

	return CalculatedNetSpeed_Parms.ReturnValue;
};

// Function DunDefSpecial.GameInfo_NoTowers.InitGameReplicationInfo
// [0x00020002] 
// Parameters infos:

void AGameInfo_NoTowers::InitGameReplicationInfo ( )
{
	static UFunction* pFnInitGameReplicationInfo = NULL;

	if ( ! pFnInitGameReplicationInfo )
		pFnInitGameReplicationInfo = (UFunction*) UObject::GObjObjects()->Data[ 89047 ];

	AGameInfo_NoTowers_execInitGameReplicationInfo_Parms InitGameReplicationInfo_Parms;

	this->ProcessEvent ( pFnInitGameReplicationInfo, &InitGameReplicationInfo_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_OgreAlly.InitGameReplicationInfo
// [0x00020002] 
// Parameters infos:

void AGameInfo_OgreAlly::InitGameReplicationInfo ( )
{
	static UFunction* pFnInitGameReplicationInfo = NULL;

	if ( ! pFnInitGameReplicationInfo )
		pFnInitGameReplicationInfo = (UFunction*) UObject::GObjObjects()->Data[ 89051 ];

	AGameInfo_OgreAlly_execInitGameReplicationInfo_Parms InitGameReplicationInfo_Parms;

	this->ProcessEvent ( pFnInitGameReplicationInfo, &InitGameReplicationInfo_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_RainingGoblins.InitGameReplicationInfo
// [0x00020002] 
// Parameters infos:

void AGameInfo_RainingGoblins::InitGameReplicationInfo ( )
{
	static UFunction* pFnInitGameReplicationInfo = NULL;

	if ( ! pFnInitGameReplicationInfo )
		pFnInitGameReplicationInfo = (UFunction*) UObject::GObjObjects()->Data[ 89054 ];

	AGameInfo_RainingGoblins_execInitGameReplicationInfo_Parms InitGameReplicationInfo_Parms;

	this->ProcessEvent ( pFnInitGameReplicationInfo, &InitGameReplicationInfo_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_UberAssault.CalculatedNetSpeed
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AGameInfo_UberAssault::CalculatedNetSpeed ( )
{
	static UFunction* pFnCalculatedNetSpeed = NULL;

	if ( ! pFnCalculatedNetSpeed )
		pFnCalculatedNetSpeed = (UFunction*) UObject::GObjObjects()->Data[ 89057 ];

	AGameInfo_UberAssault_execCalculatedNetSpeed_Parms CalculatedNetSpeed_Parms;

	this->ProcessEvent ( pFnCalculatedNetSpeed, &CalculatedNetSpeed_Parms, NULL );

	return CalculatedNetSpeed_Parms.ReturnValue;
};

// Function DunDefSpecial.GameInfo_UberDefense.CalculatedNetSpeed
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AGameInfo_UberDefense::CalculatedNetSpeed ( )
{
	static UFunction* pFnCalculatedNetSpeed = NULL;

	if ( ! pFnCalculatedNetSpeed )
		pFnCalculatedNetSpeed = (UFunction*) UObject::GObjObjects()->Data[ 89061 ];

	AGameInfo_UberDefense_execCalculatedNetSpeed_Parms CalculatedNetSpeed_Parms;

	this->ProcessEvent ( pFnCalculatedNetSpeed, &CalculatedNetSpeed_Parms, NULL );

	return CalculatedNetSpeed_Parms.ReturnValue;
};

// Function DunDefSpecial.GameInfo_VDay2.CalculatedNetSpeed
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AGameInfo_VDay2::CalculatedNetSpeed ( )
{
	static UFunction* pFnCalculatedNetSpeed = NULL;

	if ( ! pFnCalculatedNetSpeed )
		pFnCalculatedNetSpeed = (UFunction*) UObject::GObjObjects()->Data[ 89088 ];

	AGameInfo_VDay2_execCalculatedNetSpeed_Parms CalculatedNetSpeed_Parms;

	this->ProcessEvent ( pFnCalculatedNetSpeed, &CalculatedNetSpeed_Parms, NULL );

	return CalculatedNetSpeed_Parms.ReturnValue;
};

// Function DunDefSpecial.GameInfo_VDay2.PairMatched
// [0x00020002] 
// Parameters infos:
// class ADunDefEnemy*            Boy                            ( CPF_Parm )
// class ADunDefEnemy*            Girl                           ( CPF_Parm )

void AGameInfo_VDay2::PairMatched ( class ADunDefEnemy* Boy, class ADunDefEnemy* Girl )
{
	static UFunction* pFnPairMatched = NULL;

	if ( ! pFnPairMatched )
		pFnPairMatched = (UFunction*) UObject::GObjObjects()->Data[ 89085 ];

	AGameInfo_VDay2_execPairMatched_Parms PairMatched_Parms;
	PairMatched_Parms.Boy = Boy;
	PairMatched_Parms.Girl = Girl;

	this->ProcessEvent ( pFnPairMatched, &PairMatched_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_VDay2.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AGameInfo_VDay2::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 89079 ];

	AGameInfo_VDay2_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_VDay2.EnemyDied
// [0x00020002] 
// Parameters infos:
// class ADunDefEnemy*            anEnemy                        ( CPF_Parm )

void AGameInfo_VDay2::EnemyDied ( class ADunDefEnemy* anEnemy )
{
	static UFunction* pFnEnemyDied = NULL;

	if ( ! pFnEnemyDied )
		pFnEnemyDied = (UFunction*) UObject::GObjObjects()->Data[ 89077 ];

	AGameInfo_VDay2_execEnemyDied_Parms EnemyDied_Parms;
	EnemyDied_Parms.anEnemy = anEnemy;

	this->ProcessEvent ( pFnEnemyDied, &EnemyDied_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_VDay2.WaveSpawnerCreateEnemy
// [0x00020002] 
// Parameters infos:
// class ADunDefEnemy*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner                       ( CPF_Parm )
// class ADunDefEnemy*            EnemyTemplate                  ( CPF_Parm )
// struct FVector                 SpawnLocation                  ( CPF_Parm )
// struct FRotator                SpawnRotation                  ( CPF_Parm )

class ADunDefEnemy* AGameInfo_VDay2::WaveSpawnerCreateEnemy ( class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner, class ADunDefEnemy* EnemyTemplate, struct FVector SpawnLocation, struct FRotator SpawnRotation )
{
	static UFunction* pFnWaveSpawnerCreateEnemy = NULL;

	if ( ! pFnWaveSpawnerCreateEnemy )
		pFnWaveSpawnerCreateEnemy = (UFunction*) UObject::GObjObjects()->Data[ 89069 ];

	AGameInfo_VDay2_execWaveSpawnerCreateEnemy_Parms WaveSpawnerCreateEnemy_Parms;
	WaveSpawnerCreateEnemy_Parms.aSpawner = aSpawner;
	WaveSpawnerCreateEnemy_Parms.EnemyTemplate = EnemyTemplate;
	memcpy ( &WaveSpawnerCreateEnemy_Parms.SpawnLocation, &SpawnLocation, 0xC );
	memcpy ( &WaveSpawnerCreateEnemy_Parms.SpawnRotation, &SpawnRotation, 0xC );

	this->ProcessEvent ( pFnWaveSpawnerCreateEnemy, &WaveSpawnerCreateEnemy_Parms, NULL );

	return WaveSpawnerCreateEnemy_Parms.ReturnValue;
};

// Function DunDefSpecial.GameInfo_Wizardry.MageCheck
// [0x00020002] 
// Parameters infos:

void AGameInfo_Wizardry::MageCheck ( )
{
	static UFunction* pFnMageCheck = NULL;

	if ( ! pFnMageCheck )
		pFnMageCheck = (UFunction*) UObject::GObjObjects()->Data[ 89096 ];

	AGameInfo_Wizardry_execMageCheck_Parms MageCheck_Parms;

	this->ProcessEvent ( pFnMageCheck, &MageCheck_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_Wizardry.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameInfo_Wizardry::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 89094 ];

	AGameInfo_Wizardry_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.GameInfo_ZippyTerror.InitGameReplicationInfo
// [0x00020002] 
// Parameters infos:

void AGameInfo_ZippyTerror::InitGameReplicationInfo ( )
{
	static UFunction* pFnInitGameReplicationInfo = NULL;

	if ( ! pFnInitGameReplicationInfo )
		pFnInitGameReplicationInfo = (UFunction*) UObject::GObjObjects()->Data[ 89102 ];

	AGameInfo_ZippyTerror_execInitGameReplicationInfo_Parms InitGameReplicationInfo_Parms;

	this->ProcessEvent ( pFnInitGameReplicationInfo, &InitGameReplicationInfo_Parms, NULL );
};

// Function DunDefSpecial.SnowManBoss.StartMovement
// [0x00020102] 
// Parameters infos:

void ASnowManBoss::StartMovement ( )
{
	static UFunction* pFnStartMovement = NULL;

	if ( ! pFnStartMovement )
		pFnStartMovement = (UFunction*) UObject::GObjObjects()->Data[ 89156 ];

	ASnowManBoss_execStartMovement_Parms StartMovement_Parms;

	this->ProcessEvent ( pFnStartMovement, &StartMovement_Parms, NULL );
};

// Function DunDefSpecial.SnowManBoss.StopMovement
// [0x00020102] 
// Parameters infos:

void ASnowManBoss::StopMovement ( )
{
	static UFunction* pFnStopMovement = NULL;

	if ( ! pFnStopMovement )
		pFnStopMovement = (UFunction*) UObject::GObjObjects()->Data[ 89155 ];

	ASnowManBoss_execStopMovement_Parms StopMovement_Parms;

	this->ProcessEvent ( pFnStopMovement, &StopMovement_Parms, NULL );
};

// Function DunDefSpecial.SnowManBoss.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ASnowManBoss::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 89150 ];

	ASnowManBoss_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function DunDefSpecial.SnowManBoss.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ASnowManBoss::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 89149 ];

	ASnowManBoss_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.SnowManBoss.DoStompDamage
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ASnowManBoss::eventDoStompDamage ( )
{
	static UFunction* pFnDoStompDamage = NULL;

	if ( ! pFnDoStompDamage )
		pFnDoStompDamage = (UFunction*) UObject::GObjObjects()->Data[ 89148 ];

	ASnowManBoss_eventDoStompDamage_Parms DoStompDamage_Parms;

	this->ProcessEvent ( pFnDoStompDamage, &DoStompDamage_Parms, NULL );
};

// Function DunDefSpecial.SnowManBoss.DoStomp
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void ASnowManBoss::eventDoStomp ( )
{
	static UFunction* pFnDoStomp = NULL;

	if ( ! pFnDoStomp )
		pFnDoStomp = (UFunction*) UObject::GObjObjects()->Data[ 89143 ];

	ASnowManBoss_eventDoStomp_Parms DoStomp_Parms;

	this->ProcessEvent ( pFnDoStomp, &DoStomp_Parms, NULL );
};

// Function DunDefSpecial.SnowManBoss.DoPeck
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void ASnowManBoss::eventDoPeck ( )
{
	static UFunction* pFnDoPeck = NULL;

	if ( ! pFnDoPeck )
		pFnDoPeck = (UFunction*) UObject::GObjObjects()->Data[ 89138 ];

	ASnowManBoss_eventDoPeck_Parms DoPeck_Parms;

	this->ProcessEvent ( pFnDoPeck, &DoPeck_Parms, NULL );
};

// Function DunDefSpecial.SnowManBoss.GetPeckLoc
// [0x00C20102] 
// Parameters infos:
// struct FVector                 Loc                            ( CPF_Parm | CPF_OutParm )

void ASnowManBoss::GetPeckLoc ( struct FVector* Loc )
{
	static UFunction* pFnGetPeckLoc = NULL;

	if ( ! pFnGetPeckLoc )
		pFnGetPeckLoc = (UFunction*) UObject::GObjObjects()->Data[ 89135 ];

	ASnowManBoss_execGetPeckLoc_Parms GetPeckLoc_Parms;

	this->ProcessEvent ( pFnGetPeckLoc, &GetPeckLoc_Parms, NULL );

	if ( Loc )
		memcpy ( Loc, &GetPeckLoc_Parms.Loc, 0xC );
};

// Function DunDefSpecial.SnowManBoss.SnowBallRight
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ASnowManBoss::eventSnowBallRight ( )
{
	static UFunction* pFnSnowBallRight = NULL;

	if ( ! pFnSnowBallRight )
		pFnSnowBallRight = (UFunction*) UObject::GObjObjects()->Data[ 89134 ];

	ASnowManBoss_eventSnowBallRight_Parms SnowBallRight_Parms;

	this->ProcessEvent ( pFnSnowBallRight, &SnowBallRight_Parms, NULL );
};

// Function DunDefSpecial.SnowManBoss.SnowBallLeft
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ASnowManBoss::eventSnowBallLeft ( )
{
	static UFunction* pFnSnowBallLeft = NULL;

	if ( ! pFnSnowBallLeft )
		pFnSnowBallLeft = (UFunction*) UObject::GObjObjects()->Data[ 89132 ];

	ASnowManBoss_eventSnowBallLeft_Parms SnowBallLeft_Parms;

	this->ProcessEvent ( pFnSnowBallLeft, &SnowBallLeft_Parms, NULL );
};

// Function DunDefSpecial.SnowManBoss.SpawnSnowShootEffect
// [0x00020102] 
// Parameters infos:
// struct FVector                 SpawnLoc                       ( CPF_Parm )
// struct FRotator                SpawnRot                       ( CPF_Parm )

void ASnowManBoss::SpawnSnowShootEffect ( struct FVector SpawnLoc, struct FRotator SpawnRot )
{
	static UFunction* pFnSpawnSnowShootEffect = NULL;

	if ( ! pFnSpawnSnowShootEffect )
		pFnSpawnSnowShootEffect = (UFunction*) UObject::GObjObjects()->Data[ 89129 ];

	ASnowManBoss_execSpawnSnowShootEffect_Parms SpawnSnowShootEffect_Parms;
	memcpy ( &SpawnSnowShootEffect_Parms.SpawnLoc, &SpawnLoc, 0xC );
	memcpy ( &SpawnSnowShootEffect_Parms.SpawnRot, &SpawnRot, 0xC );

	this->ProcessEvent ( pFnSpawnSnowShootEffect, &SpawnSnowShootEffect_Parms, NULL );
};

// Function DunDefSpecial.SnowManBoss.GetProjectileSpawnLoc
// [0x00420102] 
// Parameters infos:
// unsigned long                  bIsLeftSocket                  ( CPF_Parm )
// struct FVector                 Loc                            ( CPF_Parm | CPF_OutParm )
// struct FRotator                Rot                            ( CPF_Parm | CPF_OutParm )

void ASnowManBoss::GetProjectileSpawnLoc ( unsigned long bIsLeftSocket, struct FVector* Loc, struct FRotator* Rot )
{
	static UFunction* pFnGetProjectileSpawnLoc = NULL;

	if ( ! pFnGetProjectileSpawnLoc )
		pFnGetProjectileSpawnLoc = (UFunction*) UObject::GObjObjects()->Data[ 89125 ];

	ASnowManBoss_execGetProjectileSpawnLoc_Parms GetProjectileSpawnLoc_Parms;
	GetProjectileSpawnLoc_Parms.bIsLeftSocket = bIsLeftSocket;

	this->ProcessEvent ( pFnGetProjectileSpawnLoc, &GetProjectileSpawnLoc_Parms, NULL );

	if ( Loc )
		memcpy ( Loc, &GetProjectileSpawnLoc_Parms.Loc, 0xC );

	if ( Rot )
		memcpy ( Rot, &GetProjectileSpawnLoc_Parms.Rot, 0xC );
};

// Function DunDefSpecial.SnowManBoss.PlayStomp
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ASnowManBoss::PlayStomp ( )
{
	static UFunction* pFnPlayStomp = NULL;

	if ( ! pFnPlayStomp )
		pFnPlayStomp = (UFunction*) UObject::GObjObjects()->Data[ 89123 ];

	ASnowManBoss_execPlayStomp_Parms PlayStomp_Parms;

	this->ProcessEvent ( pFnPlayStomp, &PlayStomp_Parms, NULL );

	return PlayStomp_Parms.ReturnValue;
};

// Function DunDefSpecial.SnowManBoss.PlaySnowShoot
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ASnowManBoss::PlaySnowShoot ( )
{
	static UFunction* pFnPlaySnowShoot = NULL;

	if ( ! pFnPlaySnowShoot )
		pFnPlaySnowShoot = (UFunction*) UObject::GObjObjects()->Data[ 89121 ];

	ASnowManBoss_execPlaySnowShoot_Parms PlaySnowShoot_Parms;

	this->ProcessEvent ( pFnPlaySnowShoot, &PlaySnowShoot_Parms, NULL );

	return PlaySnowShoot_Parms.ReturnValue;
};

// Function DunDefSpecial.SnowManBoss.PlayPeckAttack
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ASnowManBoss::PlayPeckAttack ( )
{
	static UFunction* pFnPlayPeckAttack = NULL;

	if ( ! pFnPlayPeckAttack )
		pFnPlayPeckAttack = (UFunction*) UObject::GObjObjects()->Data[ 89119 ];

	ASnowManBoss_execPlayPeckAttack_Parms PlayPeckAttack_Parms;

	this->ProcessEvent ( pFnPlayPeckAttack, &PlayPeckAttack_Parms, NULL );

	return PlayPeckAttack_Parms.ReturnValue;
};

// Function DunDefSpecial.SnowManBoss.PlaySpawnIn
// [0x00020102] 
// Parameters infos:

void ASnowManBoss::PlaySpawnIn ( )
{
	static UFunction* pFnPlaySpawnIn = NULL;

	if ( ! pFnPlaySpawnIn )
		pFnPlaySpawnIn = (UFunction*) UObject::GObjObjects()->Data[ 89118 ];

	ASnowManBoss_execPlaySpawnIn_Parms PlaySpawnIn_Parms;

	this->ProcessEvent ( pFnPlaySpawnIn, &PlaySpawnIn_Parms, NULL );
};

// Function DunDefSpecial.SnowManBoss.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ASnowManBoss::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 89117 ];

	ASnowManBoss_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpecial.SnowManBossController.CheckForCustomAttacks
// [0x00020002] 
// Parameters infos:

void ASnowManBossController::CheckForCustomAttacks ( )
{
	static UFunction* pFnCheckForCustomAttacks = NULL;

	if ( ! pFnCheckForCustomAttacks )
		pFnCheckForCustomAttacks = (UFunction*) UObject::GObjObjects()->Data[ 89235 ];

	ASnowManBossController_execCheckForCustomAttacks_Parms CheckForCustomAttacks_Parms;

	this->ProcessEvent ( pFnCheckForCustomAttacks, &CheckForCustomAttacks_Parms, NULL );
};

// Function DunDefSpecial.SnowManBossController.WantsHurtAnimation
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASnowManBossController::WantsHurtAnimation ( )
{
	static UFunction* pFnWantsHurtAnimation = NULL;

	if ( ! pFnWantsHurtAnimation )
		pFnWantsHurtAnimation = (UFunction*) UObject::GObjObjects()->Data[ 89233 ];

	ASnowManBossController_execWantsHurtAnimation_Parms WantsHurtAnimation_Parms;

	this->ProcessEvent ( pFnWantsHurtAnimation, &WantsHurtAnimation_Parms, NULL );

	return WantsHurtAnimation_Parms.ReturnValue;
};

// Function DunDefSpecial.SnowManBossController.NotifyTakeHitEX
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void ASnowManBossController::NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser )
{
	static UFunction* pFnNotifyTakeHitEX = NULL;

	if ( ! pFnNotifyTakeHitEX )
		pFnNotifyTakeHitEX = (UFunction*) UObject::GObjObjects()->Data[ 89226 ];

	ASnowManBossController_execNotifyTakeHitEX_Parms NotifyTakeHitEX_Parms;
	NotifyTakeHitEX_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHitEX_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHitEX_Parms.Damage = Damage;
	NotifyTakeHitEX_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHitEX_Parms.Momentum, &Momentum, 0xC );
	NotifyTakeHitEX_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnNotifyTakeHitEX, &NotifyTakeHitEX_Parms, NULL );
};

// Function DunDefSpecial.SnowManBossController.CheckStomp
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASnowManBossController::CheckStomp ( )
{
	static UFunction* pFnCheckStomp = NULL;

	if ( ! pFnCheckStomp )
		pFnCheckStomp = (UFunction*) UObject::GObjObjects()->Data[ 89221 ];

	ASnowManBossController_execCheckStomp_Parms CheckStomp_Parms;

	this->ProcessEvent ( pFnCheckStomp, &CheckStomp_Parms, NULL );

	return CheckStomp_Parms.ReturnValue;
};

// Function DunDefSpecial.SnowManBossController.ChooseAttack
// [0x00020002] 
// Parameters infos:

void ASnowManBossController::ChooseAttack ( )
{
	static UFunction* pFnChooseAttack = NULL;

	if ( ! pFnChooseAttack )
		pFnChooseAttack = (UFunction*) UObject::GObjObjects()->Data[ 89219 ];

	ASnowManBossController_execChooseAttack_Parms ChooseAttack_Parms;

	this->ProcessEvent ( pFnChooseAttack, &ChooseAttack_Parms, NULL );
};

// Function DunDefSpecial.SnowManBossController.DoPeck
// [0x00820002] 
// Parameters infos:

void ASnowManBossController::DoPeck ( )
{
	static UFunction* pFnDoPeck = NULL;

	if ( ! pFnDoPeck )
		pFnDoPeck = (UFunction*) UObject::GObjObjects()->Data[ 89214 ];

	ASnowManBossController_execDoPeck_Parms DoPeck_Parms;

	this->ProcessEvent ( pFnDoPeck, &DoPeck_Parms, NULL );
};

// Function DunDefSpecial.SnowManBossController.DoStomp
// [0x00820002] 
// Parameters infos:

void ASnowManBossController::DoStomp ( )
{
	static UFunction* pFnDoStomp = NULL;

	if ( ! pFnDoStomp )
		pFnDoStomp = (UFunction*) UObject::GObjObjects()->Data[ 89209 ];

	ASnowManBossController_execDoStomp_Parms DoStomp_Parms;

	this->ProcessEvent ( pFnDoStomp, &DoStomp_Parms, NULL );
};

// Function DunDefSpecial.SnowManBossController.SpawnSnowProjectile
// [0x00824002] 
// Parameters infos:
// unsigned long                  bIsLeftSocket                  ( CPF_OptionalParm | CPF_Parm )

void ASnowManBossController::SpawnSnowProjectile ( unsigned long bIsLeftSocket )
{
	static UFunction* pFnSpawnSnowProjectile = NULL;

	if ( ! pFnSpawnSnowProjectile )
		pFnSpawnSnowProjectile = (UFunction*) UObject::GObjObjects()->Data[ 89203 ];

	ASnowManBossController_execSpawnSnowProjectile_Parms SpawnSnowProjectile_Parms;
	SpawnSnowProjectile_Parms.bIsLeftSocket = bIsLeftSocket;

	this->ProcessEvent ( pFnSpawnSnowProjectile, &SpawnSnowProjectile_Parms, NULL );
};

// Function DunDefSpecial.TurkeyBoss.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ATurkeyBoss::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 89277 ];

	ATurkeyBoss_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function DunDefSpecial.TurkeyBoss.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATurkeyBoss::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 89276 ];

	ATurkeyBoss_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpecial.TurkeyBoss.DoStompDamage
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATurkeyBoss::eventDoStompDamage ( )
{
	static UFunction* pFnDoStompDamage = NULL;

	if ( ! pFnDoStompDamage )
		pFnDoStompDamage = (UFunction*) UObject::GObjObjects()->Data[ 89275 ];

	ATurkeyBoss_eventDoStompDamage_Parms DoStompDamage_Parms;

	this->ProcessEvent ( pFnDoStompDamage, &DoStompDamage_Parms, NULL );
};

// Function DunDefSpecial.TurkeyBoss.DoStomp
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void ATurkeyBoss::eventDoStomp ( )
{
	static UFunction* pFnDoStomp = NULL;

	if ( ! pFnDoStomp )
		pFnDoStomp = (UFunction*) UObject::GObjObjects()->Data[ 89270 ];

	ATurkeyBoss_eventDoStomp_Parms DoStomp_Parms;

	this->ProcessEvent ( pFnDoStomp, &DoStomp_Parms, NULL );
};

// Function DunDefSpecial.TurkeyBoss.DoPeck
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void ATurkeyBoss::eventDoPeck ( )
{
	static UFunction* pFnDoPeck = NULL;

	if ( ! pFnDoPeck )
		pFnDoPeck = (UFunction*) UObject::GObjObjects()->Data[ 89265 ];

	ATurkeyBoss_eventDoPeck_Parms DoPeck_Parms;

	this->ProcessEvent ( pFnDoPeck, &DoPeck_Parms, NULL );
};

// Function DunDefSpecial.TurkeyBoss.GetPeckLoc
// [0x00C20102] 
// Parameters infos:
// struct FVector                 Loc                            ( CPF_Parm | CPF_OutParm )

void ATurkeyBoss::GetPeckLoc ( struct FVector* Loc )
{
	static UFunction* pFnGetPeckLoc = NULL;

	if ( ! pFnGetPeckLoc )
		pFnGetPeckLoc = (UFunction*) UObject::GObjObjects()->Data[ 89262 ];

	ATurkeyBoss_execGetPeckLoc_Parms GetPeckLoc_Parms;

	this->ProcessEvent ( pFnGetPeckLoc, &GetPeckLoc_Parms, NULL );

	if ( Loc )
		memcpy ( Loc, &GetPeckLoc_Parms.Loc, 0xC );
};

// Function DunDefSpecial.TurkeyBoss.ShootEgg
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATurkeyBoss::eventShootEgg ( )
{
	static UFunction* pFnShootEgg = NULL;

	if ( ! pFnShootEgg )
		pFnShootEgg = (UFunction*) UObject::GObjObjects()->Data[ 89260 ];

	ATurkeyBoss_eventShootEgg_Parms ShootEgg_Parms;

	this->ProcessEvent ( pFnShootEgg, &ShootEgg_Parms, NULL );
};

// Function DunDefSpecial.TurkeyBoss.SpawnEggShootEffect
// [0x00020102] 
// Parameters infos:
// struct FVector                 SpawnLoc                       ( CPF_Parm )
// struct FRotator                SpawnRot                       ( CPF_Parm )

void ATurkeyBoss::SpawnEggShootEffect ( struct FVector SpawnLoc, struct FRotator SpawnRot )
{
	static UFunction* pFnSpawnEggShootEffect = NULL;

	if ( ! pFnSpawnEggShootEffect )
		pFnSpawnEggShootEffect = (UFunction*) UObject::GObjObjects()->Data[ 89257 ];

	ATurkeyBoss_execSpawnEggShootEffect_Parms SpawnEggShootEffect_Parms;
	memcpy ( &SpawnEggShootEffect_Parms.SpawnLoc, &SpawnLoc, 0xC );
	memcpy ( &SpawnEggShootEffect_Parms.SpawnRot, &SpawnRot, 0xC );

	this->ProcessEvent ( pFnSpawnEggShootEffect, &SpawnEggShootEffect_Parms, NULL );
};

// Function DunDefSpecial.TurkeyBoss.GetProjectileSpawnLoc
// [0x00420102] 
// Parameters infos:
// struct FVector                 Loc                            ( CPF_Parm | CPF_OutParm )
// struct FRotator                Rot                            ( CPF_Parm | CPF_OutParm )

void ATurkeyBoss::GetProjectileSpawnLoc ( struct FVector* Loc, struct FRotator* Rot )
{
	static UFunction* pFnGetProjectileSpawnLoc = NULL;

	if ( ! pFnGetProjectileSpawnLoc )
		pFnGetProjectileSpawnLoc = (UFunction*) UObject::GObjObjects()->Data[ 89254 ];

	ATurkeyBoss_execGetProjectileSpawnLoc_Parms GetProjectileSpawnLoc_Parms;

	this->ProcessEvent ( pFnGetProjectileSpawnLoc, &GetProjectileSpawnLoc_Parms, NULL );

	if ( Loc )
		memcpy ( Loc, &GetProjectileSpawnLoc_Parms.Loc, 0xC );

	if ( Rot )
		memcpy ( Rot, &GetProjectileSpawnLoc_Parms.Rot, 0xC );
};

// Function DunDefSpecial.TurkeyBoss.PlayStomp
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATurkeyBoss::PlayStomp ( )
{
	static UFunction* pFnPlayStomp = NULL;

	if ( ! pFnPlayStomp )
		pFnPlayStomp = (UFunction*) UObject::GObjObjects()->Data[ 89252 ];

	ATurkeyBoss_execPlayStomp_Parms PlayStomp_Parms;

	this->ProcessEvent ( pFnPlayStomp, &PlayStomp_Parms, NULL );

	return PlayStomp_Parms.ReturnValue;
};

// Function DunDefSpecial.TurkeyBoss.PlayEggShoot
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATurkeyBoss::PlayEggShoot ( )
{
	static UFunction* pFnPlayEggShoot = NULL;

	if ( ! pFnPlayEggShoot )
		pFnPlayEggShoot = (UFunction*) UObject::GObjObjects()->Data[ 89250 ];

	ATurkeyBoss_execPlayEggShoot_Parms PlayEggShoot_Parms;

	this->ProcessEvent ( pFnPlayEggShoot, &PlayEggShoot_Parms, NULL );

	return PlayEggShoot_Parms.ReturnValue;
};

// Function DunDefSpecial.TurkeyBoss.PlayPeckAttack
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATurkeyBoss::PlayPeckAttack ( )
{
	static UFunction* pFnPlayPeckAttack = NULL;

	if ( ! pFnPlayPeckAttack )
		pFnPlayPeckAttack = (UFunction*) UObject::GObjObjects()->Data[ 89248 ];

	ATurkeyBoss_execPlayPeckAttack_Parms PlayPeckAttack_Parms;

	this->ProcessEvent ( pFnPlayPeckAttack, &PlayPeckAttack_Parms, NULL );

	return PlayPeckAttack_Parms.ReturnValue;
};

// Function DunDefSpecial.TurkeyBossController.WantsHurtAnimation
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATurkeyBossController::WantsHurtAnimation ( )
{
	static UFunction* pFnWantsHurtAnimation = NULL;

	if ( ! pFnWantsHurtAnimation )
		pFnWantsHurtAnimation = (UFunction*) UObject::GObjObjects()->Data[ 89360 ];

	ATurkeyBossController_execWantsHurtAnimation_Parms WantsHurtAnimation_Parms;

	this->ProcessEvent ( pFnWantsHurtAnimation, &WantsHurtAnimation_Parms, NULL );

	return WantsHurtAnimation_Parms.ReturnValue;
};

// Function DunDefSpecial.TurkeyBossController.NotifyTakeHitEX
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void ATurkeyBossController::NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser )
{
	static UFunction* pFnNotifyTakeHitEX = NULL;

	if ( ! pFnNotifyTakeHitEX )
		pFnNotifyTakeHitEX = (UFunction*) UObject::GObjObjects()->Data[ 89353 ];

	ATurkeyBossController_execNotifyTakeHitEX_Parms NotifyTakeHitEX_Parms;
	NotifyTakeHitEX_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHitEX_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHitEX_Parms.Damage = Damage;
	NotifyTakeHitEX_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHitEX_Parms.Momentum, &Momentum, 0xC );
	NotifyTakeHitEX_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnNotifyTakeHitEX, &NotifyTakeHitEX_Parms, NULL );
};

// Function DunDefSpecial.TurkeyBossController.CheckStomp
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATurkeyBossController::CheckStomp ( )
{
	static UFunction* pFnCheckStomp = NULL;

	if ( ! pFnCheckStomp )
		pFnCheckStomp = (UFunction*) UObject::GObjObjects()->Data[ 89348 ];

	ATurkeyBossController_execCheckStomp_Parms CheckStomp_Parms;

	this->ProcessEvent ( pFnCheckStomp, &CheckStomp_Parms, NULL );

	return CheckStomp_Parms.ReturnValue;
};

// Function DunDefSpecial.TurkeyBossController.ChooseAttack
// [0x00020002] 
// Parameters infos:

void ATurkeyBossController::ChooseAttack ( )
{
	static UFunction* pFnChooseAttack = NULL;

	if ( ! pFnChooseAttack )
		pFnChooseAttack = (UFunction*) UObject::GObjObjects()->Data[ 89346 ];

	ATurkeyBossController_execChooseAttack_Parms ChooseAttack_Parms;

	this->ProcessEvent ( pFnChooseAttack, &ChooseAttack_Parms, NULL );
};

// Function DunDefSpecial.TurkeyBossController.DoPeck
// [0x00820002] 
// Parameters infos:

void ATurkeyBossController::DoPeck ( )
{
	static UFunction* pFnDoPeck = NULL;

	if ( ! pFnDoPeck )
		pFnDoPeck = (UFunction*) UObject::GObjObjects()->Data[ 89343 ];

	ATurkeyBossController_execDoPeck_Parms DoPeck_Parms;

	this->ProcessEvent ( pFnDoPeck, &DoPeck_Parms, NULL );
};

// Function DunDefSpecial.TurkeyBossController.DoStomp
// [0x00820002] 
// Parameters infos:

void ATurkeyBossController::DoStomp ( )
{
	static UFunction* pFnDoStomp = NULL;

	if ( ! pFnDoStomp )
		pFnDoStomp = (UFunction*) UObject::GObjObjects()->Data[ 89340 ];

	ATurkeyBossController_execDoStomp_Parms DoStomp_Parms;

	this->ProcessEvent ( pFnDoStomp, &DoStomp_Parms, NULL );
};

// Function DunDefSpecial.TurkeyBossController.SpawnEggProjectile
// [0x00820002] 
// Parameters infos:

void ATurkeyBossController::SpawnEggProjectile ( )
{
	static UFunction* pFnSpawnEggProjectile = NULL;

	if ( ! pFnSpawnEggProjectile )
		pFnSpawnEggProjectile = (UFunction*) UObject::GObjObjects()->Data[ 89335 ];

	ATurkeyBossController_execSpawnEggProjectile_Parms SpawnEggProjectile_Parms;

	this->ProcessEvent ( pFnSpawnEggProjectile, &SpawnEggProjectile_Parms, NULL );
};

// Function DunDefSpecial.UI_GameStatsUberMF.GetPlayerList
// [0x00420102] 
// Parameters infos:
// struct FString                 pList                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 sList                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UUI_GameStatsUberMF::GetPlayerList ( struct FString* pList, struct FString* sList )
{
	static UFunction* pFnGetPlayerList = NULL;

	if ( ! pFnGetPlayerList )
		pFnGetPlayerList = (UFunction*) UObject::GObjObjects()->Data[ 89376 ];

	UUI_GameStatsUberMF_execGetPlayerList_Parms GetPlayerList_Parms;

	this->ProcessEvent ( pFnGetPlayerList, &GetPlayerList_Parms, NULL );

	if ( pList )
		memcpy ( pList, &GetPlayerList_Parms.pList, 0xC );

	if ( sList )
		memcpy ( sList, &GetPlayerList_Parms.sList, 0xC );
};

// Function DunDefSpecial.UI_GameStatsUberMF.GetColorString
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FColor                  aColor                         ( CPF_Parm )

struct FString UUI_GameStatsUberMF::GetColorString ( struct FColor aColor )
{
	static UFunction* pFnGetColorString = NULL;

	if ( ! pFnGetColorString )
		pFnGetColorString = (UFunction*) UObject::GObjObjects()->Data[ 89373 ];

	UUI_GameStatsUberMF_execGetColorString_Parms GetColorString_Parms;
	memcpy ( &GetColorString_Parms.aColor, &aColor, 0x4 );

	this->ProcessEvent ( pFnGetColorString, &GetColorString_Parms, NULL );

	return GetColorString_Parms.ReturnValue;
};

// Function DunDefSpecial.UI_GameStatsUberMF.UpdateTeamPanels
// [0x00020102] 
// Parameters infos:

void UUI_GameStatsUberMF::UpdateTeamPanels ( )
{
	static UFunction* pFnUpdateTeamPanels = NULL;

	if ( ! pFnUpdateTeamPanels )
		pFnUpdateTeamPanels = (UFunction*) UObject::GObjObjects()->Data[ 89370 ];

	UUI_GameStatsUberMF_execUpdateTeamPanels_Parms UpdateTeamPanels_Parms;

	this->ProcessEvent ( pFnUpdateTeamPanels, &UpdateTeamPanels_Parms, NULL );
};

// Function DunDefSpecial.UI_GameStatsUberMF.CustomInit
// [0x00024002] 
// Parameters infos:
// int                            CustomInitIndex                ( CPF_OptionalParm | CPF_Parm )

void UUI_GameStatsUberMF::CustomInit ( int CustomInitIndex )
{
	static UFunction* pFnCustomInit = NULL;

	if ( ! pFnCustomInit )
		pFnCustomInit = (UFunction*) UObject::GObjObjects()->Data[ 89368 ];

	UUI_GameStatsUberMF_execCustomInit_Parms CustomInit_Parms;
	CustomInit_Parms.CustomInitIndex = CustomInitIndex;

	this->ProcessEvent ( pFnCustomInit, &CustomInit_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif