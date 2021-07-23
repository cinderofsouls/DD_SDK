/*
#############################################################################################
# Dungeon Defender (8.7.1) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: DunDefSkyCity_classes.h
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

// Enum DunDefSkyCity.DunDef_OldOne.Phase
/*enum Phase
{
	PHASE_ONE                                          = 0,
	PHASE_TWO                                          = 1,
	PHASE_Three                                        = 2,
	PHASE_MAX                                          = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class DunDefSkyCity.DunDefProjectile_Meteor
// 0x0034 (0x0354 - 0x0320)
class ADunDefProjectile_Meteor : public ADunDefProjectile
{
public:
	class ADunDefEmitterSpawnable*                     DamagingFireEmitters;                             		// 0x0320 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxNumberofFires;                                 		// 0x0324 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinDecalSize;                                     		// 0x0328 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDecalSize;                                     		// 0x032C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinDecalHeight;                                   		// 0x0330 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDecalHeight;                                   		// 0x0334 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinFireSpreadRadius;                              		// 0x0338 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxFireSpreadRadius;                              		// 0x033C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              decalZOffset;                                     		// 0x0340 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADecalActorMovableSpawnable*                 DecalActorTemplate;                               		// 0x0344 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseShadow : 1;                                   		// 0x0348 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseHoming : 1;                                   		// 0x0348 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	class UStaticMeshComponent*                        MyShadow;                                         		// 0x034C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ADecalActorMovableSpawnable*                 myDecal;                                          		// 0x0350 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77997 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void SpawnFires ( struct FVector HitLocation, struct FVector HitNormal );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void UpdateDecal ( float DeltaTime );
	void UpdateShadow ( float DeltaTime );
	void DoHoming ( float DeltaTime );
	void eventTick ( float DeltaTime );
	void eventPostBeginPlay ( );
};

UClass* ADunDefProjectile_Meteor::pClassPointer = NULL;

// Class DunDefSkyCity.DropOffPoint
// 0x0004 (0x0310 - 0x030C)
class ADropOffPoint : public AFlightPathNode
{
public:
	unsigned long                                      bIsBeingUsed : 1;                                 		// 0x030C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81381 ];

		return pClassPointer;
	};

	bool GetIsBeingUsed ( );
	void SetBeingUsed ( unsigned long bNowBeingUsed );
};

UClass* ADropOffPoint::pClassPointer = NULL;

// Class DunDefSkyCity.DunDef_DamagingInterpActor
// 0x0024 (0x0298 - 0x0274)
class ADunDef_DamagingInterpActor : public AInterpActor
{
public:
	TArray< struct Fdamagee >                          currentDmgTargets;                                		// 0x0274 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bAlwaysDamage : 1;                                		// 0x0280 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bKillonDmgEncroach : 1;                           		// 0x0280 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDoingDamage : 1;                                 		// 0x0280 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	float                                              dmgInterval;                                      		// 0x0284 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KnockbackMomentum;                                		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MyDamageType;                                     		// 0x028C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                dmgAmount;                                        		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageMultiplier;                                 		// 0x0294 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81389 ];

		return pClassPointer;
	};

	bool StopsProjectile ( class AProjectile* P );
	int GetDamageAmount ( );
	void eventRanInto ( class AActor* Other );
	bool eventEncroachingOn ( class AActor* Other );
	void ClearDamageList ( );
	void SetDoDamage ( unsigned long bSetDamage, unsigned long bToggleCollision );
};

UClass* ADunDef_DamagingInterpActor::pClassPointer = NULL;

// Class DunDefSkyCity.DunDef_OldOne
// 0x060C (0x084C - 0x0240)
class ADunDef_OldOne : public ASkeletalMeshActor
{
public:
	TArray< struct FCrystals >                         PhaseOneCrystals;                                 		// 0x0240 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              PhaseOneDirectedSmashReach;                       		// 0x024C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PhaseOneMeteorCustomNodeID;                       		// 0x0250 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSmashAnims >                       PhaseOneSmashLeftAnims;                           		// 0x0254 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSmashAnims >                       PhaseOneSmashRightAnims;                          		// 0x0260 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FSmashAnims                                 PhaseOneSmashDoubleAnim;                          		// 0x026C (0x0020) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       DoubleSocketName;                                 		// 0x028C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseOneSmashCD;                                  		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseOneSmashDoubleCD;                            		// 0x0298 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseOneChanceToForceDblSmash;                    		// 0x029C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastPhaseOneSmashTime;                            		// 0x02A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastDoublePhaseOneSmashTime;                      		// 0x02A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DoubleStombZOffset;                               		// 0x02A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseOneProjectileAnim;                           		// 0x02AC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseOneProjectileLargeChance;                    		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseOneProjectileCD;                             		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumSmallMeteors;                                  		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastPhaseOneProjectileTime;                       		// 0x02C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      projectileTarget;                                 		// 0x02C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PhaseOneTauntCD;                                  		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseOneTauntAnim;                                		// 0x02CC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastPhaseOneTauntTime;                            		// 0x02D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastPhaseOneMeteorTime;                           		// 0x02D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       PhaseOneEnterEventName;                           		// 0x02DC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseOneMinAttackDelay;                           		// 0x02E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseOneMaxAttackDelay;                           		// 0x02E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterShockwave*                     SingleHitShockwave;                               		// 0x02EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterShockwave*                     DoubleHitShockwave;                               		// 0x02F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PhaseOneNumMeteors;                               		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseOneMeteorCD;                                 		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCrystals >                         PhaseTwoCrystals;                                 		// 0x02FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              PhaseTwoDirectedSmashReach;                       		// 0x0308 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSmashAnims >                       PhaseTwoSmashLeftAnims;                           		// 0x030C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSmashAnims >                       PhaseTwoSmashRightAnims;                          		// 0x0318 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FSmashAnims                                 PhaseTwoSmashDoubleAnim;                          		// 0x0324 (0x0020) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              PhaseTwoSmashCD;                                  		// 0x0344 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseTwoSmashDoubleCD;                            		// 0x0348 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseTwoProjectileCD;                             		// 0x034C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseTwoChanceToForceDblSmash;                    		// 0x0350 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseTwoProjectileAnim_L;                         		// 0x0354 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseTwoProjectileAnim_R;                         		// 0x035C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseTwoMeteorStrikeAnim;                         		// 0x0364 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterShockwave*                     DoubleHandHitShockwave;                           		// 0x036C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefHomingProjectile*                     PhaseTwoSingleProjectile;                         		// 0x0370 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefProjectile*                           PhaseTwoMeteors;                                  		// 0x0374 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseTwoMeteorSpawnHeight;                        		// 0x0378 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PhaseTwoNumMeteors;                               		// 0x037C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PhaseTwoMeteorCustomNodeID;                       		// 0x0380 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseTwoBeamAttackAnim;                           		// 0x0384 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseTwoBeamLoopAnim;                             		// 0x038C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseTwoBeamSocket;                               		// 0x0394 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseTwoBeamCrazyAttackAnim;                      		// 0x039C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseTwoBeamCD;                                   		// 0x03A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseTwoChanceForCrazyBeam;                       		// 0x03A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseTwoLazerTime;                                		// 0x03AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     BellyImpactEmitterTemplate;                       		// 0x03B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     BellyImpactCrazyEmitterTemplate;                  		// 0x03B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    BellyBeamStart;                                   		// 0x03B8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    BellyBeam;                                        		// 0x03BC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             BellyBeamCrazyTemplate;                           		// 0x03C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             BellyBeamStartCrazyTemplate;                      		// 0x03C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             BellyBeamStartTemplate;                           		// 0x03C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             BellyBeamNormalTemplate;                          		// 0x03CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      BellyBeamDmgType;                                 		// 0x03D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      CrazyBellyBeamDmgType;                            		// 0x03D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BellyDamageMomentum;                              		// 0x03D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BellyDmgAmount;                                   		// 0x03DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BellyDmgAmountCrazy;                              		// 0x03E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BellyDmgFrequency;                                		// 0x03E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BellyTrackingSpeed;                               		// 0x03E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BellyCrazyTrackingSpeed;                          		// 0x03EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCrazyBellyLazers >                 BellyLazersCrazy;                                 		// 0x03F0 (0x000C) [0x0000000000482000]              ( CPF_Transient | CPF_Component | CPF_NeedCtorLink )
	TArray< struct FCrazyBellyLazers >                 BellyLazersNormal;                                		// 0x03FC (0x000C) [0x0000000000482000]              ( CPF_Transient | CPF_Component | CPF_NeedCtorLink )
	class ADunDefCustomNode*                           PhaseTwoLazerStartPoint;                          		// 0x0408 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseTwoTauntCD;                                  		// 0x040C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseTwoTauntAnim;                                		// 0x0410 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseTwoMinAttackDelay;                           		// 0x0418 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseTwoMaxAttackDelay;                           		// 0x041C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastPhaseTwoTauntTime;                            		// 0x0420 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FDmgActors >                        BellyBeamHitActors;                               		// 0x0424 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              PhaseTwoMeteorCD;                                 		// 0x0430 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     currentLeftEyeImpactEmitter;                      		// 0x0434 (0x0004) [0x0000000000000000]              
	class ADunDefEmitterSpawnable*                     currentRightEyeImpactEmitter;                     		// 0x0438 (0x0004) [0x0000000000000000]              
	class ADunDefEmitterSpawnable*                     currentBellyImpactEmitter;                        		// 0x043C (0x0004) [0x0000000000000000]              
	float                                              LastPhaseTwoSmashTime;                            		// 0x0440 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastDoublePhaseTwoSmashTime;                      		// 0x0444 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastPhaseTwoProjectileTime;                       		// 0x0448 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastBeamAttackTime;                               		// 0x044C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastPhaseTwoMeteorTime;                           		// 0x0450 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bDoCrazyBellyLazers : 1;                          		// 0x0454 (0x0004) [0x0000000000002020] [0x00000001] ( CPF_Net | CPF_Transient )
	unsigned long                                      bAllowHurtAnim : 1;                               		// 0x0454 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bDoCrazyEyeLazers : 1;                            		// 0x0454 (0x0004) [0x0000000000002020] [0x00000004] ( CPF_Net | CPF_Transient )
	unsigned long                                      bDoingLazers : 1;                                 		// 0x0454 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bClampDifficultyToInsane : 1;                     		// 0x0454 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bAllowSuction : 1;                                		// 0x0454 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bDoDamageFlashing : 1;                            		// 0x0454 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bDamageFlashOldOne : 1;                           		// 0x0454 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bAllowPhaseShiftFinish : 1;                       		// 0x0454 (0x0004) [0x0000000000002000] [0x00000100] ( CPF_Transient )
	unsigned long                                      bCrazyLazerEyes : 1;                              		// 0x0454 (0x0004) [0x0000000000002000] [0x00000200] ( CPF_Transient )
	unsigned long                                      bUsingTimeLimit : 1;                              		// 0x0454 (0x0004) [0x0000000000002000] [0x00000400] ( CPF_Transient )
	unsigned long                                      bTriggeredLowHealthEvent : 1;                     		// 0x0454 (0x0004) [0x0000000000002000] [0x00000800] ( CPF_Transient )
	unsigned long                                      bChainIgnore : 1;                                 		// 0x0454 (0x0004) [0x0000000000002000] [0x00001000] ( CPF_Transient )
	unsigned long                                      bIsWebbed : 1;                                    		// 0x0454 (0x0004) [0x0000000000002000] [0x00002000] ( CPF_Transient )
	struct FName                                       PhaseTwoEnterEventName;                           		// 0x0458 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              DoubleHandStompZOffset;                           		// 0x0460 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSmashAnims >                       PhaseThreeSmashLeftAnims;                         		// 0x0464 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSmashAnims >                       PhaseThreeSmashRightAnims;                        		// 0x0470 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ADunDefOldOneBreath*                         PhaseThreeFlameBreath;                            		// 0x047C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefOldOneBreath*                         PhaseThreeFlameSweep;                             		// 0x0480 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseThreeFlameSweepStartAnim;                    		// 0x0484 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseThreeFlameBreathSocket;                      		// 0x048C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseThreeFlameBreathSweepAnim;                   		// 0x0494 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseThreeFlameBreathBurstAnim;                   		// 0x049C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FSmashAnims                                 PhaseThreeSweepAnimLeft;                          		// 0x04A4 (0x0020) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FSmashAnims                                 PhaseThreeSweepAnimRight;                         		// 0x04C4 (0x0020) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FSmashAnims                                 PhaseThreeSmashDoubleAnim;                        		// 0x04E4 (0x0020) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FCrystals                                   PhaseThreeCrystal;                                		// 0x0504 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseThreeEnterEventName;                         		// 0x0518 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseThreeLazerDirectedAnim;                      		// 0x0520 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseThreeLazerCrazyAnim;                         		// 0x0528 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseThreeLazerLoop;                              		// 0x0530 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseThreeSmashCD;                                		// 0x0538 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseThreeSmashDoubleCD;                          		// 0x053C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseThreeLazerCD;                                		// 0x0540 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseThreeChanceToForceDblSmash;                  		// 0x0544 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseThreeDirectedSmashReach;                     		// 0x0548 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseThreeSweepCD;                                		// 0x054C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseThreeFlameCD;                                		// 0x0550 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseThreeLazerTime;                              		// 0x0554 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LazerDmgAmount;                                   		// 0x0558 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LazerDamageMomentum;                              		// 0x055C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LazerDmgFrequency;                                		// 0x0560 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LazerDmgAmountCrazy;                              		// 0x0564 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EyeTrackingSpeed;                                 		// 0x0568 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      LazerEyeDmgType;                                  		// 0x056C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      CrazyLazerEyeDmgType;                             		// 0x0570 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     ImpactEmitterTemplate;                            		// 0x0574 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     ImpactEmitterCrazyEyeTemplate;                    		// 0x0578 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseThreeMinAttackDelay;                         		// 0x057C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseThreeMaxAttackDelay;                         		// 0x0580 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PhaseThreeMeteorCustomNodeID;                     		// 0x0584 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PhaseThreeNumMeteors;                             		// 0x0588 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseThreeProjectileAnim_L;                       		// 0x058C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseThreeProjectileAnim_R;                       		// 0x0594 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FDmgActors >                        LeftEyeHitActors;                                 		// 0x059C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FDmgActors >                        RightEyeHitActors;                                		// 0x05A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              LastPhaseThreeSmashTime;                          		// 0x05B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastDoublePhaseThreeSmashTime;                    		// 0x05B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastPhaseThreeSweepTime;                          		// 0x05BC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastPhaseThreeFlameTime;                          		// 0x05C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastPhaseThreeLazerTime;                          		// 0x05C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     prevLeftEyeLoc;                                   		// 0x05C8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     prevRightEyeLoc;                                  		// 0x05D4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class ADunDefOldOneBreath*                         currentFlame;                                     		// 0x05E0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      currentLazerTarget;                               		// 0x05E4 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	struct FName                                       LeftEyeSocket;                                    		// 0x05E8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RightEyeSocket;                                   		// 0x05F0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LeftEyeTopSocket;                                 		// 0x05F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RightTopEyeSocket;                                		// 0x0600 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    LeftEyeBeam;                                      		// 0x0608 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    RightEyeBeam;                                     		// 0x060C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    LeftEyeBeamStart;                                 		// 0x0610 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    RightEyeBeamStart;                                		// 0x0614 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    LeftEyeTopBeam;                                   		// 0x0618 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    RightEyeTopBeam;                                  		// 0x061C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    LeftEyeTopBeamStart;                              		// 0x0620 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    RightEyeTopBeamStart;                             		// 0x0624 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              PhaseThreeMaxFlameBreathAngle;                    		// 0x0628 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefGasCloud*                             LazerFires;                                       		// 0x062C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LazerFireFrequency;                               		// 0x0630 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefCustomNode*                           PhaseThreeLazerStartPoint;                        		// 0x0634 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastLazerFireTime;                                		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PhaseThreeMaxSwipeRadius;                         		// 0x063C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseThreeTauntCD;                                		// 0x0640 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseThreeTauntAnim;                              		// 0x0644 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    PhaseThreeTimeLimit;                              		// 0x064C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              LastPhaseThreeTauntTime;                          		// 0x0658 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FCrazyBellyLazers >                 PhaseThreeMultiLazer;                             		// 0x065C (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	float                                              PhaseThreeLazerCrazyChance;                       		// 0x0668 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhaseThreeChanceForFlameSweep;                    		// 0x066C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             EyeBeamCrazyStartTemplate;                        		// 0x0670 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             EyeBeamCrazyTemplate;                             		// 0x0674 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCollisionBoxes >                   myCollisionBoxes;                                 		// 0x0678 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ADunDefProjectile*                           LargeFireBallProjectile;                          		// 0x0684 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefProjectile*                           SmallFireBallProjectile;                          		// 0x0688 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LeftHandSocketName;                               		// 0x068C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RightHandSocketName;                              		// 0x0694 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LeftHandSmashSocketName;                          		// 0x069C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RightHandSmashSocketName;                         		// 0x06A4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DoubleHandSmashSocketName;                        		// 0x06AC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LeftFootSocketName;                               		// 0x06B4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RightFootSocketName;                              		// 0x06BC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DoubleFootSocketName;                             		// 0x06C4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TransitionToPhaseOne;                             		// 0x06CC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TransitionToPhaseTwo;                             		// 0x06D4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TransitionToPhaseThree;                           		// 0x06DC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DeathEventName;                                   		// 0x06E4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      myCurrentPhase;                                   		// 0x06EC (0x0001) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FName >                             CustomAnimNodeNames;                              		// 0x06F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       CustomAnimBlenderName;                            		// 0x06FC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeBlend*                              CustomAnimBlender;                                		// 0x0704 (0x0004) [0x0000000000000000]              
	int                                                LastCustomAnimNodePlayIndex;                      		// 0x0708 (0x0004) [0x0000000000000000]              
	TArray< class UAnimNodePlayCustomAnim* >           CustomAnimNodes;                                  		// 0x070C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    DifficultyHealthMultipliers;                      		// 0x0718 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    DifficultyDamageMultipliers;                      		// 0x0724 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    NumPlayerHealthMultipliers;                       		// 0x0730 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              NightmareDamageMultiplier;                        		// 0x073C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExtraNightmareHealthMultiplier;                   		// 0x0740 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxDifficultySets;                                		// 0x0744 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MyTargetingTeam;                                  		// 0x0748 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       HeadLookAtName;                                   		// 0x074C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       HealthEventName;                                  		// 0x0754 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     HandMuzzleEffect;                                 		// 0x075C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             LazerCastingSoundComponent;                       		// 0x0760 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              LastFlashingDamageTime;                           		// 0x0764 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DamageFlashingDuration;                           		// 0x0768 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageFlashingFadeExponent;                       		// 0x076C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageFlashingIntensity;                          		// 0x0770 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DamageFlashingScalarParamName;                    		// 0x0774 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      DamageMatInstanceIndices;                         		// 0x077C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         MyDamageMatInstances;                             		// 0x0788 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UAnimNodePlayCustomAnim*                     CustomAnimNode;                                   		// 0x0794 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      currentSmashTarget;                               		// 0x0798 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              currentAttackTime;                                		// 0x079C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FSmashAnims                                 currentSmashAnim;                                 		// 0x07A0 (0x0020) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FName                                       currentPhaseShiftAnim;                            		// 0x07C0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       currentHurtAnim;                                  		// 0x07C8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                crystalsDestroyedThisPhase;                       		// 0x07D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                difficultyIndex;                                  		// 0x07D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DifficultyHealthMultiplier;                       		// 0x07D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DifficultyDamageMultiplier;                       		// 0x07DC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class ADunDefCustomNode* >                 meteorPoints_P1;                                  		// 0x07E0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class ADunDefCustomNode* >                 meteorPoints_P2;                                  		// 0x07EC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class ADunDefCustomNode* >                 meteorPoints_P3;                                  		// 0x07F8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FVector                                     prevLazerLoc;                                     		// 0x0804 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class USkelControlLookAt*                          HeadLookAt;                                       		// 0x0810 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              currentTimeLimit;                                 		// 0x0814 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              currentPhaseStart;                                		// 0x0818 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              tauntChance;                                      		// 0x081C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              projectileChance;                                 		// 0x0820 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              smashChance;                                      		// 0x0824 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              lazerChance;                                      		// 0x0828 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              meteorChance;                                     		// 0x082C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              swipeChance;                                      		// 0x0830 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              flameChance;                                      		// 0x0834 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              sweepChance;                                      		// 0x0838 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ADunDef_OldOneCrystals*                      primaryCrystal;                                   		// 0x083C (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	TArray< class ADunDefTower_ChainLightning* >       ChainingTowers;                                   		// 0x0840 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81422 ];

		return pClassPointer;
	};

	float GetLightningTowerDamagePercent ( );
	void setIsWebbed ( unsigned long isWebbed );
	bool isWebbed ( );
	bool GetChainIgnore ( );
	void SetChainIgnore ( unsigned long ignore );
	bool IsBeingChainedBy ( class ADunDefTower_ChainLightning* tower );
	void RemoveFromChainingTowers ( class ADunDefTower_ChainLightning* tower );
	void AddToChainingTowers ( class ADunDefTower_ChainLightning* tower );
	bool AllowSuction ( );
	bool IsPlayingCustomAnim ( struct FName inAnim, float TimeFromEndToConsiderFinished );
	void SetupDamageFlashing ( );
	void UpdateDamageFlashing ( );
	void LocalTookDamage ( int DamageAmount, struct FVector atPosition, class UClass* fromDamageType );
	void NotifyHealthLevel ( class ADunDef_OldOneCrystals* healthCrystal );
	void HealPctOfMaxHealth ( float HealPct, class AController* Healer, class UClass* DamageType, unsigned long bShowFloatingNumbers );
	float GetHealthPercent ( );
	int GetHealth ( unsigned long bGetMax );
	bool ForceMoveActor ( class AActor* Mover, struct FVector NewLoc );
	class UPrimitiveComponent* GetOverrideTargetComponent ( );
	float GetMass ( );
	bool AllowDarknessIgnorance ( );
	bool ForceFriendlyFire ( class AActor* Target );
	struct FVector GetInterpolatedTargetingLocation ( class AActor* RequestedBy );
	struct FVector GetTargetingLocation ( class AActor* RequestedBy );
	void OnDestroy_RemoveFromTargetableList ( );
	void OnPostBeginPlay_AddToTargetableList ( );
	void UnregisterAttacker ( class ADunDefEnemyController* forController );
	void RegisterAttacker ( class ADunDefEnemyController* forController );
	float GetAttackRangeOffset ( );
	bool IgnoreFriendlyFireDamage ( class UDunDefTargetableInterface* instigatorActor, class AController* OptionalController );
	int GetTargetingTeam ( );
	float GetTowerTargetingDesirability ( class ADunDefTower* forTower );
	float GetPlayerTargetingDesirability ( class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer );
	void TraceEyeMultiBeamDmg ( int beamIdx, struct FVector beamStartLoc, struct FVector BeamEndLoc );
	void SetMultiEyeBeamLocation ( int beamIdx, struct FVector beamStartLoc, struct FVector BeamEndLoc, struct FVector BeamNormal );
	void TraceMultiEyeBeam ( float DeltaTime );
	void SpawnFire ( class ADunDefGasCloud* fireTemplate, struct FVector SpawnLoc );
	void TraceRightEyeDmg ( struct FVector beamStartLoc, struct FVector BeamEndLoc );
	void SetRightEyeBeamLocation ( struct FVector beamStartLoc, struct FVector BeamEndLoc, struct FVector BeamNormal );
	void TraceLeftEyeDmg ( struct FVector beamStartLoc, struct FVector BeamEndLoc );
	void SetLeftEyeBeamLocation ( struct FVector beamStartLoc, struct FVector BeamEndLoc, struct FVector BeamNormal );
	void TraceRightEye ( float DeltaTime );
	void TraceLeftEye ( float DeltaTime );
	void TraceBellyMultiBeamDmg ( int beamIdx, struct FVector beamStartLoc, struct FVector BeamEndLoc );
	void TraceBellyBeamDmg ( int Idx, struct FVector beamStartLoc, struct FVector BeamEndLoc );
	void SetBellyBeamLocation ( int Idx, struct FVector beamStartLoc, struct FVector BeamEndLoc, struct FVector BeamNormal );
	void SetMultiBellyBeamLocation ( int beamIdx, struct FVector beamStartLoc, struct FVector BeamEndLoc, struct FVector BeamNormal );
	void TraceMultiBellyBeam ( float DeltaTime );
	void SetRandomLazerPoint ( int lazerIdx, struct FVector lazerPoint );
	void TraceBellyBeam ( float DeltaTime );
	void SetNormalBellyTarget ( int Idx );
	void InitNormalBeams ( );
	class AActor* ChooseTarget ( );
	void eventStartLazers ( );
	void eventStopFlameBreath ( );
	void eventStartFlameSweep ( );
	void eventStartFlameburst ( );
	void eventActivateChestCrystal ( );
	void eventActivateRightHandCrystal ( );
	void eventActivateLeftHandCrystal ( );
	void eventDeactivateChestCrystal ( );
	void eventDeactivateRightHandCrystal ( );
	void eventDeactivateLeftHandCrystal ( );
	void SpawnDoubleSlamEmitter ( struct FVector SpawnLoc, class ADunDefEmitterShockwave* EmitterTemplate );
	void SpawnSingleSlamEmitter ( struct FVector SpawnLoc );
	void eventDoubleStomp ( );
	void eventRightFootStomp ( );
	void eventLeftFootStomp ( );
	void UpdateDifficultyValues ( );
	void eventDeActivateCollisionDamage ( );
	void eventActivateCollisionDamage ( );
	int GetNumCrystalsThisPhase ( );
	void DoPhaseShift ( );
	bool ArePlayersWithinRange ( struct FVector LocCheck, float distCheck );
	void DoDeath ( );
	bool CheckCrystalDeaths ( );
	void NotifyCrystalDeath ( class ADunDef_OldOneCrystals* diedCrystal );
	void eventDoubleFootStomp ( );
	void eventLeftHandProjectile ( );
	void eventRightHandProjectile ( );
	bool PickSmashAttack ( );
	void DoProjectileAttack ( );
	bool CheckProjectileAttack ( );
	bool CheckForTaunt ( );
	bool CheckForBeamAttack ( );
	void DoTaunt ( );
	struct FName GetTauntAnim ( );
	void PlayHurtAnim ( struct FName theHurtAnim );
	void FinishTaunt ( );
	void SpawnMeteor ( class ADunDefCustomNode* theNode );
	void eventStartMeteorAttack ( );
	bool CheckForMeteorAttack ( );
	bool CheckForFlame ( );
	bool CheckForLazer ( );
	bool CheckForSweep ( );
	void EndAttack ( unsigned long bDontEndState );
	void ShutDownLazers ( );
	void SetInitalEyeLazerTarget ( class AActor* newLazerTarget );
	void StartBellyLazer ( );
	void StartEyeLazer ( );
	void eventBeginFlameSweepAnim ( );
	void DoFlameSweep ( );
	void eventDoubleHandStomp ( );
	void eventLeftHandStomp ( );
	void eventRightHandStomp ( );
	float GetAttackDelay ( );
	void SetPhase ( unsigned char newPhase );
	void OnToggle ( class USeqAct_Toggle* Action );
	void StartAttack ( );
	void PickAttack ( );
	bool StopCustomAnim ( float blendTimeOut, struct FName CustomAnimationToStop, unsigned long bReplicate, unsigned long bForceReplication );
	float PlayCustomAnim ( struct FName inAnim, float blendTimeIn, unsigned long Looping, float Speed, float BlendOutTime, unsigned long bOverride, unsigned long Replicate, unsigned long bUninterruptable, unsigned long bReplicateToOwners );
	void InitCrystals ( );
	void ClearCrystalsRefs ( );
	void PopulateCustomNode ( );
	void eventPostBeginPlay ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDef_OldOne::pClassPointer = NULL;

// Class DunDefSkyCity.DunDef_OldOneCrystals
// 0x0098 (0x0458 - 0x03C0)
class ADunDef_OldOneCrystals : public ADunDefDamageableTarget
{
public:
	struct FName                                       SocketBaseName;                                   		// 0x03C0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMeshComponent*                        MyMesh;                                           		// 0x03C8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        CollisionMesh;                                    		// 0x03CC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ActiveParticle;                                   		// 0x03D0 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x03D4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned char                                      myPhase;                                          		// 0x03D8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLimitDamageOnActivation : 1;                     		// 0x03DC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bFullHealOnDeath : 1;                             		// 0x03DC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bPrimaryCrystal : 1;                              		// 0x03DC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bDoDamageFlashing : 1;                            		// 0x03DC (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bDamageFlashOldOne : 1;                           		// 0x03DC (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bShutDown : 1;                                    		// 0x03DC (0x0004) [0x0000000000002020] [0x00000020] ( CPF_Net | CPF_Transient )
	unsigned long                                      bInPlay : 1;                                      		// 0x03DC (0x0004) [0x0000000000002020] [0x00000040] ( CPF_Net | CPF_Transient )
	float                                              MaxAllowedDmgPct;                                 		// 0x03E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MeshActiveColorParamName;                         		// 0x03E4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DissolveParamName;                                		// 0x03EC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ActiveColor;                                      		// 0x03F4 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                InActiveColor;                                    		// 0x0404 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       HurtAnimName;                                     		// 0x0414 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              NotifyAtHealthPct;                                		// 0x041C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActivateTime;                                     		// 0x0420 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DissolveTime;                                     		// 0x0424 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastFlashingDamageTime;                           		// 0x0428 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DamageFlashingDuration;                           		// 0x042C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageFlashingFadeExponent;                       		// 0x0430 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageFlashingIntensity;                          		// 0x0434 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DamageFlashingScalarParamName;                    		// 0x0438 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     CrystalHurtEffectTemplate;                        		// 0x0440 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                currentDamageAmt;                                 		// 0x0444 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ADunDef_OldOne*                              myOldOne;                                         		// 0x0448 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	class UMaterialInstanceConstant*                   myMIC;                                            		// 0x044C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ActivateStartTime;                                		// 0x0450 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DissolveStartTime;                                		// 0x0454 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81494 ];

		return pClassPointer;
	};

	float DTGetPlayerTargetingDesirability ( class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer );
	float DTGetTowerTargetingDesirability ( class ADunDefTower* forTower );
	bool IgnoreFriendlyFireDamage ( class UDunDefTargetableInterface* instigatorActor, class AController* OptionalController );
	bool DrawMyHUD ( class ADunDefHUD* H );
	void PlayHitEffect ( class UClass* DamageType, struct FVector HitLocation );
	void UpdateDamageFlashing ( );
	void LocalTookDamage ( int DamageAmount, struct FVector atPosition, class UClass* fromDamageType );
	void SubtractHealth ( int DamageAmount );
	void SetInPlay ( );
	void RepairCrystal ( );
	bool StopsProjectile ( class AProjectile* P );
	void UpdateHealthColor ( );
	void NotifyHealthChange ( );
	void UpdateActivate ( );
	void Deactivate ( );
	void Activate ( );
	void eventBaseChange ( );
	void ShutDownCrystal ( );
	void UpdateDissolve ( );
	void DissolveCrystal ( );
	void PlayDeath ( );
	void Died ( class AController* EventInstigator, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser );
	void InitCrystal ( class ADunDef_OldOne* owningOldOne );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDef_OldOneCrystals::pClassPointer = NULL;

// Class DunDefSkyCity.DunDefOldOneBreath
// 0x000C (0x0344 - 0x0338)
class ADunDefOldOneBreath : public ADunDefGasCloud
{
public:
	float                                              MaxTargetDeltaPitch;                              		// 0x0338 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxTargetDeltaYaw;                                		// 0x033C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCheckPlayerInvincibility : 1;                    		// 0x0340 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81588 ];

		return pClassPointer;
	};

	bool HurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage );
};

UClass* ADunDefOldOneBreath::pClassPointer = NULL;

// Class DunDefSkyCity.DunDefEmitterShockwave
// 0x0058 (0x0320 - 0x02C8)
class ADunDefEmitterShockwave : public ADunDefEmitterSpawnable
{
public:
	float                                              MaximumMassMomentumScale;                         		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MassMomentumBaseScale;                            		// 0x02CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MassMomentumScaleExponent;                        		// 0x02D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Damage;                                           		// 0x02D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Radius;                                           		// 0x02D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EffectRadius;                                     		// 0x02DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MyDamageType;                                     		// 0x02E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MyMomentum;                                       		// 0x02E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageDelay;                                      		// 0x02E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageFalloffExponent;                            		// 0x02EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bExpandingShockwave : 1;                          		// 0x02F0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bExpandAsRing : 1;                                		// 0x02F0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bCheckPlayerInvincibility : 1;                    		// 0x02F0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FName                                       ScaleParamName;                                   		// 0x02F4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              RingWidth;                                        		// 0x02FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InitialRadius;                                    		// 0x0300 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RingHeight;                                       		// 0x0304 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExpansionTime;                                    		// 0x0308 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              currentExpansionTime;                             		// 0x030C (0x0004) [0x0000000000000000]              
	float                                              currentRadius;                                    		// 0x0310 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            hitActors;                                        		// 0x0314 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81693 ];

		return pClassPointer;
	};

	bool RingHurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage );
	void eventTick ( float DeltaTime );
	bool eventAllowSpawn ( class AActor* theArchetype, struct FVector theLoc, struct FRotator theRot );
	bool HurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage );
	void DoDamage ( );
	void eventPostBeginPlay ( );
};

UClass* ADunDefEmitterShockwave::pClassPointer = NULL;

// Class DunDefSkyCity.DunDefGoblinCopter
// 0x00DC (0x0CA8 - 0x0BCC)
class ADunDefGoblinCopter : public ADunDefEnemy
{
public:
	TArray< struct FHoldAI >                           HoldableTemplates;                                		// 0x0BCC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       DropOffAnimName;                                  		// 0x0BD8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ShootLeftAnimName;                                		// 0x0BE0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ShootRightAnimName;                               		// 0x0BE8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ShootDoubleAnimName;                              		// 0x0BF0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             SpawnInAnimName;                                  		// 0x0BF8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       ShootLeftSocketName;                              		// 0x0C04 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ShootRightSocketName;                             		// 0x0C0C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeathVelocityForce;                               		// 0x0C14 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeathSpinRotRate;                                 		// 0x0C18 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MiniMapHoldOffset;                                		// 0x0C1C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MiniMapHoldIconSize;                              		// 0x0C20 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeldMiniMapIconSize;                              		// 0x0C24 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< class ADunDefEmitterSpawnable* >           DestructionEffects;                               		// 0x0C28 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ADunDefEmitterSpawnable*                     FlareTemplate;                                    		// 0x0C34 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RightFlareSocketName;                             		// 0x0C38 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LeftFlareSocketName;                              		// 0x0C40 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              FlareVelocity;                                    		// 0x0C48 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FlareFallSpeed;                                   		// 0x0C4C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FlareLifeSpan;                                    		// 0x0C50 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FlareLifeSpanOffset;                              		// 0x0C54 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    FlareRotOffset;                                   		// 0x0C58 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FHeldPawnDifficultyOffset >         HeldPawnDifficultyOffsets;                        		// 0x0C64 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UClass* >                            IgnoreDmgTypesWithFlare;                          		// 0x0C70 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              PctDmgtoDroppedPawnOnDrop;                        		// 0x0C7C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     myCurrentFlare;                                   		// 0x0C80 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ADunDefEnemy*                                currentHeldPawn;                                  		// 0x0C84 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                currentHeldIndex;                                 		// 0x0C88 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     currentHoldOffset;                                		// 0x0C8C (0x000C) [0x0000000000000000]              
	unsigned long                                      bPawnUsedLocInterp : 1;                           		// 0x0C98 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bPawnUsedClientRotInterp : 1;                     		// 0x0C98 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bStartFalling : 1;                                		// 0x0C98 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDamagePawnOnDrop : 1;                            		// 0x0C98 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                GCopterNumber;                                    		// 0x0C9C (0x0004) [0x0000000000000000]              
	float                                              CopterPushForce;                                  		// 0x0CA0 (0x0004) [0x0000000000000000]              
	float                                              CopterProxDistance;                               		// 0x0CA4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 82542 ];

		return pClassPointer;
	};

	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	struct FVector GetTargetingLocation ( class AActor* RequestedBy );
	void SpawnFlare ( struct FVector flareLoc, struct FRotator flareRot );
	void GetFlareSpawnLocAndRot ( struct FVector* flareLoc, struct FRotator* flareRot );
	void CheckGCopterProximity ( );
	void UpdateDifficultyValues ( unsigned long UpdateMaterial, unsigned long onlyDynamicValues );
	void DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap );
	void eventPauseAnimationAfterDeath ( );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void eventDoDoubleShoot ( );
	void eventDoRightShoot ( );
	void eventDoLeftShoot ( );
	float PlayDoubleShootAnim ( );
	float PlayRightShootAnim ( float shootPlayRate );
	float PlayLeftShootAnim ( float shootPlayRate );
	void ResetHeldPawnValues ( class ADunDefEnemy* thePawn );
	void eventDropPawn ( );
	float PlayDropOffAnim ( );
	void SetMovementPhysics ( );
	bool CanBeBaseForPawn ( class APawn* aPawn );
	void InitNewHeldPawn ( );
	void SetUpHoldingPawn ( class ADunDefEnemy* newHeldPawn );
	void SpawnHoldingPawn ( );
	float GetHeldPawnExtraDifficultyOffset ( );
	void eventTick ( float DeltaTime );
	void TurnOnVFX ( );
	int UpdateDifficultyMaterial ( );
	void eventPostBeginPlay ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefGoblinCopter::pClassPointer = NULL;

// Class DunDefSkyCity.DunDefGoblinCopterController
// 0x006C (0x066C - 0x0600)
class ADunDefGoblinCopterController : public ADunDefEnemyController
{
public:
	class AActor*                                      TargetActor;                                      		// 0x0600 (0x0004) [0x0000000000000000]              
	struct FVector                                     TargetLocation;                                   		// 0x0604 (0x000C) [0x0000000000000000]              
	float                                              LastNavCheck;                                     		// 0x0610 (0x0004) [0x0000000000000000]              
	class ADunDefGoblinCopter*                         myPawn;                                           		// 0x0614 (0x0004) [0x0000000000000000]              
	float                                              DropOffPointSearchRadius;                         		// 0x0618 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FloatHeight;                                      		// 0x061C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RangeFromTarget;                                  		// 0x0620 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DropOffRange;                                     		// 0x0624 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefHomingProjectile*                     HomingProjectileTemplate;                         		// 0x0628 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DropOffSearchTimeOutTime;                         		// 0x062C (0x0004) [0x0000000000000000]              
	float                                              DropOffSearchStart;                               		// 0x0630 (0x0004) [0x0000000000000000]              
	float                                              BarrageChance;                                    		// 0x0634 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BarrageAnimPlayRate;                              		// 0x0638 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BarrageMissileCount;                              		// 0x063C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDoingBarrage : 1;                                		// 0x0640 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasPayLoad : 1;                                  		// 0x0640 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWantsDropOff : 1;                                		// 0x0640 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bForceDropOffPoint : 1;                           		// 0x0640 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	int                                                BarrageCount;                                     		// 0x0644 (0x0004) [0x0000000000000000]              
	TArray< class ADropOffPoint* >                     DropOffPoints;                                    		// 0x0648 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ADropOffPoint*                               currentDropOffPoint;                              		// 0x0654 (0x0004) [0x0000000000000000]              
	float                                              FlareRefireTime;                                  		// 0x0658 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxForcePathRange;                                		// 0x065C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     CheckDropOffLoSExtent;                            		// 0x0660 (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 82655 ];

		return pClassPointer;
	};

	void SpawnRocket ( struct FVector SpawnLoc );
	float PlayMissileShootAnim ( );
	bool IsWithinDropRange ( );
	bool CheckDropOffLoS ( class AActor* Other );
	void ShootFlare ( );
	void CheckForDropOffRange ( );
	void CheckAttackSight ( );
	bool IsWithinAttackRange ( class AActor* Other, float AttackRangeOffset, unsigned long bCheckDeltaZ );
	void DoAttack ( );
	void FindDropOffPoint ( );
	void GetTargetMoveToPoint ( class AActor* moveToActor );
	float GetZDifference ( class AActor* zActor );
	void CheckDirectReachability ( );
	void CheckIndirectReachability ( );
	struct FVector eventGeneratePathToActor ( class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath );
	bool NavActorReachable ( class AActor* A );
	class ANavigationPoint* FindNearestNavPointTo ( class AActor* A, unsigned long bCheckVisible );
	void SetMyPawn ( );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* ADunDefGoblinCopterController::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif