/*
#############################################################################################
# Dungeon Defender (8.7.1) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: CDT4_classes.h
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
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class CDT4.HeroEquipment_Familiar_CoreHealer
// 0x008C (0x0AFC - 0x0A70)
class UHeroEquipment_Familiar_CoreHealer : public UHeroEquipment_Familiar
{
public:
	float                                              ManaCostStatBase;                                 		// 0x0A70 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ManaCostMultiplier;                               		// 0x0A74 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ManaCostExponent;                                 		// 0x0A78 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ManaCostMin;                                      		// 0x0A7C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ManaCostMax;                                      		// 0x0A80 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealAmountBase;                                   		// 0x0A84 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealAmountMultiplier;                             		// 0x0A88 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealAmountExtraMultiplier;                        		// 0x0A8C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealAmountMaxPercent;                             		// 0x0A90 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinimumCoreHealthPercent;                         		// 0x0A94 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealInterval;                                     		// 0x0A98 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealRangeBase;                                    		// 0x0A9C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealRangeStatBase;                                		// 0x0AA0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealRangeStatMultiplier;                          		// 0x0AA4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealRangeStatExponent;                            		// 0x0AA8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealRangeMaxEffectiveStat;                        		// 0x0AAC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NightmareHealingMultiplier;                       		// 0x0AB0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotationSpeed;                                    		// 0x0AB4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     CoreHealEffect;                                   		// 0x0AB8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHealInCombatPhaseOnly : 1;                       		// 0x0ABC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDebug : 1;                                       		// 0x0ABC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FString                                     StringHealAmount;                                 		// 0x0AC0 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StringHealSpeed;                                  		// 0x0ACC (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StringHealRange;                                  		// 0x0AD8 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	float                                              LastHealTime;                                     		// 0x0AE4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UDunDefTargetableInterface*                  BestTargetRef;                                    		// 0x0AE8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0AEC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FRotator                                    CurrentRotation;                                  		// 0x0AF0 (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78057 ];

		return pClassPointer;
	};

	void AddRandomizeValues ( float equipmentQuality, unsigned long doResetStatsToTemplate, unsigned long bDontUseMissionRandomizerMultiplier, float RandomizerMultiplierOverride, unsigned long bIsForShop, unsigned long bAllowTranscendentGear );
	int GetStatLevelUpAmountIterations ( unsigned char EQS, int Value, int statSubIndex );
	int GetNextStatLevelUpValue ( unsigned char EQS, int statSubIndex, unsigned long SetAsValue );
	void InitFromNetInfo ( struct FEquipmentNetInfo Info, class UObject* fromDroppedEquipment );
	bool CheckStatLevelUpIterations ( unsigned char EQS, int statSubIndex, int EquipmentLevelToCheck, float Value );
	bool AllowStatLevelUp ( unsigned char EQS, int statSubIndex, unsigned long IsInForgeUI, unsigned long bIgnoreManaRequirement );
	int GetWeaponDamage ( );
	void ApplyPrimaryDamageMultiplierDisplay ( int* StatValue );
	float GetEquipmentStatValue ( unsigned char equipmentStatType, unsigned long returnFinalAddedValue, unsigned long includeStatLevelUp );
	void NotifyEquipment_PawnAttacked ( int FireMode );
	struct FRotator GetDesiredSphereRotationalPlacement ( class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer, unsigned char* HasTarget );
	struct FRotator GetDesiredDirection ( class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer );
	float GetAttackInterval ( );
	float GetHealAmount ( );
	float GetManaCost ( );
	float GetHealRangeSq ( );
	struct FString GetEquipmentStatName ( unsigned char equipmentStatType );
	void UpdateAI ( class ADunDefPlayer* PlayerOwner, float DeltaTime );
	void TickedByPawn ( class ADunDefPlayer* PlayerOwner, float DeltaTime );
	void UpdateRotation ( float DeltaTime );
	void ShutDown ( unsigned long isDestruction );
	void AttachedComponent ( class UPrimitiveComponent* aComp );
};

UClass* UHeroEquipment_Familiar_CoreHealer::pClassPointer = NULL;

// Class CDT4.HeroEquipment_Familiar_MiniQueen
// 0x0008 (0x0BD4 - 0x0BCC)
class UHeroEquipment_Familiar_MiniQueen : public UHeroEquipment_Familiar_Melee
{
public:
	float                                              WebOverrideRange;                                 		// 0x0BCC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNextAttackRanged : 1;                            		// 0x0BD0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78170 ];

		return pClassPointer;
	};

	class UDunDefTargetableInterface* GetBestTarget ( );
	void BeginRangedAttack ( );
	void BeginMeleeAttack ( );
	bool CanWebTarget ( class UDunDefTargetableInterface* Target );
	void UpdateAI ( class ADunDefPlayer* PlayerOwner, float DeltaTime );
};

UClass* UHeroEquipment_Familiar_MiniQueen::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif