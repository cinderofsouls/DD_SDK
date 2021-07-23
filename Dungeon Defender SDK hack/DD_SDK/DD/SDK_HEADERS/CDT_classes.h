/*
#############################################################################################
# Dungeon Defender (8.7.1) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: CDT_classes.h
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

// Class CDT.DunDef_TimedEffect_Harbinger
// 0x001C (0x025C - 0x0240)
class ADunDef_TimedEffect_Harbinger : public ADunDef_TimedEffectDamage
{
public:
	TArray< float >                                    DifficultyTickDamageMultiplierArray;              		// 0x0240 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              HarbingerTimeoutRange;                            		// 0x024C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TickDamageMultiplier;                             		// 0x0250 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UParticleSystem*                             BeamEmitterTemplate;                              		// 0x0254 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    beamInstance;                                     		// 0x0258 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77892 ];

		return pClassPointer;
	};

	void EndEffects ( );
	void TimedEffect ( );
	void eventTick ( float DeltaTime );
	void Initialize ( class UDunDefTimedEffectInterface* Target );
};

UClass* ADunDef_TimedEffect_Harbinger::pClassPointer = NULL;

// Class CDT.DunDefHarbinger
// 0x0034 (0x0C00 - 0x0BCC)
class ADunDefHarbinger : public ADunDefEnemy
{
public:
	struct FName                                       ShootFireAnimation;                               		// 0x0BCC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ChargeAnimationName;                              		// 0x0BD4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ProjectileSpawnSocketNameLeft;                    		// 0x0BDC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ProjectileSpawnSocketNameRight;                   		// 0x0BE4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GloveEffectSocketName;                            		// 0x0BEC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    FireGloveEffectComponent;                         		// 0x0BF4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    AuraEffectComponent;                              		// 0x0BF8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    FiringAuraEffect;                                 		// 0x0BFC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77901 ];

		return pClassPointer;
	};

	void eventFireAttackShootRight ( );
	void eventFireAttackShootLeft ( );
	void eventFireAttackBegin ( );
	void eventPostBeginPlay ( );
	void GetProjectileSpawnTransformation ( struct FName socketToUse, struct FVector* Position, struct FRotator* Orientation );
	bool IsCurrentlyPlayingAttackAnimation ( );
	float PlayShootFireAnimation ( );
	bool IsCurrentlyPlayingChargeAnimation ( );
	float PlayChargeFireAnimation ( );
	void PlayHurtAnimation ( class UClass* DamageType, struct FVector HitLocation );
	void PlayJumpAnimation ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefHarbinger::pClassPointer = NULL;

// Class CDT.DunDefHarbingerController
// 0x000C (0x0638 - 0x062C)
class ADunDefHarbingerController : public ADunDefDarkElfController
{
public:
	float                                              AimRandomSpreadYaw;                               		// 0x062C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AimRandomSpreadPitch;                             		// 0x0630 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDef_TimedEffect_Harbinger*               TimedEffectTemplate;                              		// 0x0634 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77954 ];

		return pClassPointer;
	};

	void PawnDied ( class APawn* inPawn );
	void CheckPlayer ( class ADunDefPlayer* aPlayer );
	void CheckForNearbyPlayers ( );
	void ObstructionJump ( struct FVector jumpForwardDir, struct FVector jumpSideDir );
	void NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser );
	void eventPostBeginPlay ( );
	void FireProjectiles ( struct FName socketToUse );
};

UClass* ADunDefHarbingerController::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif