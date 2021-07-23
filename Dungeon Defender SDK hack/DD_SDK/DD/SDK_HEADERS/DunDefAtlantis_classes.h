/*
#############################################################################################
# Dungeon Defender (8.7.1) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: DunDefAtlantis_classes.h
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

// Enum DunDefAtlantis.DunDefSharkMan.EFist
/*enum EFist
{
	Fist_Left                                          = 0,
	Fist_Right                                         = 1,
	Fist_MAX                                           = 2
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class DunDefAtlantis.DunDef_SeqAct_PickNewPuzzleSolver
// 0x0004 (0x00EC - 0x00E8)
class UDunDef_SeqAct_PickNewPuzzleSolver : public USequenceAction
{
public:
	class ADunDefPlayer*                               newPuzzleSolver;                                  		// 0x00E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79859 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDunDef_SeqAct_PickNewPuzzleSolver::pClassPointer = NULL;

// Class DunDefAtlantis.DunDefGRI_RisingWater
// 0x0070 (0x0758 - 0x06E8)
class ADunDefGRI_RisingWater : public ADunDefGameReplicationInfo
{
public:
	class ADunDefPlayer*                               PuzzleSolver;                                     		// 0x06E8 (0x0004) [0x0000000000000000]              
	struct FString                                     BecamePuzzleSolverString;                         		// 0x06EC (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NewPuzzleSolverString;                            		// 0x06F8 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouSolvedThePuzzleString;                         		// 0x0704 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TheySolvedThePuzzleString;                        		// 0x0710 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FColor                                      BecamePuzzleSolverMessageColor;                   		// 0x071C (0x0004) [0x0000000000000000]              
	struct FColor                                      NewPuzzleSolverMessageColor;                      		// 0x0720 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   NewPuzzleSolverSoundEffect;                       		// 0x0724 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   PuzzleSolvedSound;                                		// 0x0728 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  PuzzleIcon;                                       		// 0x072C (0x0004) [0x0000000000000000]              
	struct FVector                                     PuzzleIconPositionOffset;                         		// 0x0730 (0x000C) [0x0000000000000000]              
	float                                              PuzzleIconPositionHeightScale;                    		// 0x073C (0x0004) [0x0000000000000000]              
	float                                              PuzzleIconSize;                                   		// 0x0740 (0x0004) [0x0000000000000000]              
	int                                                lastPRIIndex;                                     		// 0x0744 (0x0004) [0x0000000000000000]              
	TArray< class ADunDefPlayer* >                     PlayersInWater;                                   		// 0x0748 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              WaterCastingMultiplier;                           		// 0x0754 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79864 ];

		return pClassPointer;
	};

	void AddPlayerToWaterList ( class ADunDefPlayer* waterPlayer );
	void RemovePlayerToWaterList ( class ADunDefPlayer* waterPlayer );
	void SetWaterCastingMultiplier ( float newCastingMultiplier );
	float GetCastRateMultiplier ( class ADunDefPlayerAbility* ability );
	void PuzzleComplete ( );
	class ADunDefPlayer* GetRandomPlayer ( );
	void DrawMyHUD ( class ADunDefHUD* H );
	void SetNewSolver ( class ADunDefPlayer* newSolver, unsigned long bIgnoreGameInfoNotification );
	void NotifyPuzzleSolverDeath ( );
	void ClearPuzzleSolver ( );
	class ADunDefPlayer* PickNewSolver ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefGRI_RisingWater::pClassPointer = NULL;

// Class DunDefAtlantis.DunDef_SeqAct_SetUpPuzzle
// 0x000C (0x00F4 - 0x00E8)
class UDunDef_SeqAct_SetUpPuzzle : public USequenceAction
{
public:
	class APuzzleRoomActor*                            PuzzleTemplate;                                   		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      SpawnPoint;                                       		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      TeleportPoint;                                    		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79868 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDunDef_SeqAct_SetUpPuzzle::pClassPointer = NULL;

// Class DunDefAtlantis.PuzzleRoomActor
// 0x0080 (0x0290 - 0x0210)
class APuzzleRoomActor : public AActor
{
public:
	TArray< struct FPuzzlePiece >                      PuzzleGrid;                                       		// 0x0210 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPuzzlePiece >                      ValidPath;                                        		// 0x021C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class APuzzlePieceActor* >                 CurrentPath;                                      		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector2D >                         thePath;                                          		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector2D                                   PuzzleSize;                                       		// 0x0240 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class APuzzlePieceActor*                           PieceTemplate;                                    		// 0x0248 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PieceBufferSpace;                                 		// 0x024C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      ResetPoint;                                       		// 0x0250 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	class ADunDefEmitterSpawnable*                     TeleportVFX;                                      		// 0x0254 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DemoPuzzleDelay;                                  		// 0x0258 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FailedPathBaseFadeOutScale;                       		// 0x025C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FailedPathFadeOutExp;                             		// 0x0260 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FailedTeleportDelay;                              		// 0x0264 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxVerticalSpaces;                                		// 0x0268 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxHorizontalSpaces;                              		// 0x026C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReShowPathTime;                                   		// 0x0270 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   PuzzleFinishedSound;                              		// 0x0274 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastPathShowTime;                                 		// 0x0278 (0x0004) [0x0000000000000000]              
	int                                                currentPathPoint;                                 		// 0x027C (0x0004) [0x0000000000000000]              
	int                                                DemoingPuzzlePoint;                               		// 0x0280 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPuzzleFinished : 1;                              		// 0x0284 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDebugFailedPath : 1;                             		// 0x0284 (0x0004) [0x0000000000000000] [0x00000002] 
	class AActor*                                      FailedActor;                                      		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                totalFailCount;                                   		// 0x028C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79872 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void FlashPuzzlePiece ( int pieceIndex );
	void ShowPuzzlePath ( );
	void PlayFailedPathVFX ( struct FVector actorLoc );
	void PlayInitalFailVFX ( int failedIndex );
	void FailedPath ( );
	void SuccessfulMove ( int moveIndex );
	void SuccessfulFinish ( int finalIndex );
	void FinishedPuzzle ( int finalIndex );
	void NotifyPieceTouched ( class APuzzlePieceActor* touchedPiece, class AActor* TouchingActor );
	void ResetPuzzle ( );
	void DrawDebugPathLines ( );
	void StartEffect ( int pieceIndex );
	void AddValidPathPiece ( int newPieceIndex, int newValidIndex );
	void MakePuzzle ( );
	int CalculatePieceIndex ( int X_loc, int Y_loc );
	void InitGrid ( );
	void eventPostBeginPlay ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* APuzzleRoomActor::pClassPointer = NULL;

// Class DunDefAtlantis.DunDef_SeqEvent_PuzzleFinished
// 0x0000 (0x0100 - 0x0100)
class UDunDef_SeqEvent_PuzzleFinished : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79878 ];

		return pClassPointer;
	};

};

UClass* UDunDef_SeqEvent_PuzzleFinished::pClassPointer = NULL;

// Class DunDefAtlantis.DunDef_SeqEvent_PuzzleSolverLeft
// 0x0000 (0x0100 - 0x0100)
class UDunDef_SeqEvent_PuzzleSolverLeft : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79880 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDunDef_SeqEvent_PuzzleSolverLeft::pClassPointer = NULL;

// Class DunDefAtlantis.GameInfo_RisingWater
// 0x0004 (0x053C - 0x0538)
class AGameInfo_RisingWater : public AGameInfo_Special
{
public:
	class AController*                                 PuzzleSolver;                                     		// 0x0538 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79924 ];

		return pClassPointer;
	};

	void Logout ( class AController* Exiting );
	void SetCurrentPuzzleSolver ( class ADunDefPlayer* newPuzzleSolver );
	void SetGRIPuzzleSolver ( );
	void RestartPlayer ( class AController* NewPlayer );
	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
};

UClass* AGameInfo_RisingWater::pClassPointer = NULL;

// Class DunDefAtlantis.DunDefInkCloud
// 0x0018 (0x0350 - 0x0338)
class ADunDefInkCloud : public ADunDefGasCloud
{
public:
	float                                              Speed;                                            		// 0x0338 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InkHurtDelay;                                     		// 0x033C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MovementSpeedMultiplier;                          		// 0x0340 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ADunDefPawn* >                       MovementAffectedPawns;                            		// 0x0344 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79954 ];

		return pClassPointer;
	};

	void ResetCurrentMoveActors ( );
	bool HurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage );
	void FadeOut ( float theLightFadeOutTime );
	void Init ( struct FVector Direction );
};

UClass* ADunDefInkCloud::pClassPointer = NULL;

// Class DunDefAtlantis.DunDefKraken
// 0x010C (0x0D00 - 0x0BF4)
class ADunDefKraken : public ADunDefBoss
{
public:
	float                                              TentacleBlendOutTime;                             		// 0x0BF4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FTentacle >                         Tentacles;                                        		// 0x0BF8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTentacle >                         LeftTentacles;                                    		// 0x0C04 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTentacle >                         RightTentacles;                                   		// 0x0C10 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       OpenMouthAnim;                                    		// 0x0C1C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CloseMouthAnim;                                   		// 0x0C24 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WithDrawAnim;                                     		// 0x0C2C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ProjectileAttack_Left;                            		// 0x0C34 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ProjectileAttack_Right;                           		// 0x0C3C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ProjectileAttack_Giant;                           		// 0x0C44 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ProjectileAttack_GiantSocket;                     		// 0x0C4C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BiteAttackAnim;                                   		// 0x0C54 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BiteSocketName;                                   		// 0x0C5C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TentacleAttackName;                               		// 0x0C64 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       InkSocketName;                                    		// 0x0C6C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       InkAnimName;                                      		// 0x0C74 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DashWindUpAnim;                                   		// 0x0C7C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CrystalSocketName;                                		// 0x0C84 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinimumAngleDotForCrystalHit;                     		// 0x0C8C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TentacleProjectileAnimSpeed;                      		// 0x0C90 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TentacleRegrowTime[ 0x4 ];                        		// 0x0C94 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              PauseAfterAttackTime[ 0x4 ];                      		// 0x0CA4 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     CrystalHurtEffectTemplate;                        		// 0x0CB4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     TentacleRetreatEffectTemplate;                    		// 0x0CB8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    FloatingEffect;                                   		// 0x0CBC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       FloatingEffectSocket;                             		// 0x0CC0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMeshComponent*                        CrystalMesh;                                      		// 0x0CC8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class AActor* >                            LeftSwingHurtList;                                		// 0x0CCC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AActor* >                            RightSwingHurtList;                               		// 0x0CD8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bMouthOpen : 1;                                   		// 0x0CE4 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bIsCharging : 1;                                  		// 0x0CE4 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bCheckForPawnEnchroachers : 1;                    		// 0x0CE4 (0x0004) [0x0000000000000000] [0x00000004] 
	class UAnimNode_MultiBlendPerBone*                 TentacleBlender;                                  		// 0x0CE8 (0x0004) [0x0000000000000000]              
	class UAnimNodePlayCustomAnim*                     TentacleCustomAnimNode;                           		// 0x0CEC (0x0004) [0x0000000000000000]              
	float                                              TimeOfDeath;                                      		// 0x0CF0 (0x0004) [0x0000000000000000]              
	float                                              DeathTranslation;                                 		// 0x0CF4 (0x0004) [0x0000000000000000]              
	float                                              DeathTranslationTime;                             		// 0x0CF8 (0x0004) [0x0000000000000000]              
	float                                              LastTentactleTakeDamageTime;                      		// 0x0CFC (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79982 ];

		return pClassPointer;
	};

	void CheckKrakenProximity ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void DestroyTentacles ( );
	float GetPlayerTargetingDesirability ( class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer );
	void eventBiteStop ( );
	void eventBiteStart ( );
	float PlayTentacleAttackAnimation ( );
	float PlayBiteAttackAnimation ( );
	void eventStopSpit ( );
	void eventStartSpit ( );
	void GetSocketLocAndRot ( struct FName SocketName, struct FVector* socLoc, struct FRotator* socRot );
	void eventShootGiantProjectile ( );
	void eventShootRight ( );
	void eventShootLeft ( );
	void ResetMovementSettings ( );
	void SetDashMovementSettings ( float DashAirSpeedScalar, float DashRotationRateScalar );
	float PlayDashWindUp ( );
	float PlayInkCloudAttack ( );
	float PlayGiantProjectileAttack ( );
	float PlayRightTentacleAttack ( );
	float GetTowerTargetingDesirability ( class ADunDefTower* forTower );
	float PlayLeftTentacleAttack ( );
	bool IsValidRightSwingTarget ( class AActor* checkTarg );
	bool IsValidLeftSwingTarget ( class AActor* checkTarg );
	void AddToRightSwingHurtList ( class AActor* newHitTarg, struct FVector HitLocation, struct FVector HitNormal );
	void AddToLeftSwingHurtList ( class AActor* newHitTarg, struct FVector HitLocation, struct FVector HitNormal );
	void StopMelee ( );
	void eventStartMelee ( );
	float CloseMouth ( );
	void OpenMouth ( );
	void PlayMouthOpen ( );
	void DoSingleWithdraw ( int tentacleIndex );
	void ForceWithDraw ( class AKrakenTentacle* withdrawTentacle );
	float BringOutAllTentacles ( );
	void PlayWithDrawTentacle ( int tentacleIndex );
	bool NotifyTentacleWithdraw ( class AKrakenTentacle* damagedTentacle );
	bool CheckSpecialCoreDmg ( struct FVector HitLocation );
	void AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, int* inDamage, struct FVector* Momentum );
	void PlayRealHurtEffect ( class UClass* DamageType, struct FVector HitLocation );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void UpdateDifficultyValues ( unsigned long UpdateMaterial, unsigned long onlyDynamicValues );
	void SetMovementPhysics ( );
	float GetAttackPauseRate ( );
	void InitTentacles ( );
	void eventPostBeginPlay ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefKraken::pClassPointer = NULL;

// Class DunDefAtlantis.KrakenTentacle
// 0x0068 (0x0278 - 0x0210)
class AKrakenTentacle : public AActor
{
public:
	class USkeletalMeshComponent*                      TentacleMesh;                                     		// 0x0210 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       TargetingSocket;                                  		// 0x0214 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Health;                                           		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HealthMax;                                        		// 0x0220 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsLeftSide : 1;                                  		// 0x0224 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bWithDrawn : 1;                                   		// 0x0224 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDoDamageChecks : 1;                              		// 0x0224 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDoDamageFlashing : 1;                            		// 0x0224 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bAllowSuction : 1;                                		// 0x0224 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bChainIgnore : 1;                                 		// 0x0224 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bIsWebbed : 1;                                    		// 0x0224 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	int                                                TowerTargetingDesirability;                       		// 0x0228 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastFloatingTakeDamageTime;                       		// 0x022C (0x0004) [0x0000000000000000]              
	float                                              ForceWithdrawTime;                                		// 0x0230 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FName                                       myBasedSocket;                                    		// 0x0234 (0x0008) [0x0000000000000020]              ( CPF_Net )
	class ADunDefKraken*                               myKraken;                                         		// 0x023C (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              LastFlashingDamageTime;                           		// 0x0240 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DamageFlashingDuration;                           		// 0x0244 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageFlashingFadeExponent;                       		// 0x0248 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageFlashingIntensity;                          		// 0x024C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DamageFlashingScalarParamName;                    		// 0x0250 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                flashMatIndex;                                    		// 0x0258 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    NumPlayerHealthMultipliers;                       		// 0x025C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UMaterialInstanceConstant*                   tentacleMIC;                                      		// 0x0268 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class ADunDefTower_ChainLightning* >       ChainingTowers;                                   		// 0x026C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80002 ];

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
	void ClientTakeRadiusDamage ( class APawn* InstigatorPawn, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent );
	void ClientTakeDamage ( int DamageAmount, class APawn* InstigatorPawn, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	float GetHealthPercent ( );
	void UpdateDamageFlashing ( );
	void LocalTookDamage ( int DamageAmount, struct FVector atPosition, class UClass* fromDamageType );
	void HealPctOfMaxHealth ( float HealPct, class AController* Healer, class UClass* DamageType, unsigned long bShowFloatingNumbers );
	bool ForceMoveActor ( class AActor* Mover, struct FVector NewLoc );
	class UPrimitiveComponent* GetOverrideTargetComponent ( );
	bool eventEncroachingOn ( class AActor* Other );
	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void SetDoDamageChecks ( unsigned long bAllowDamage );
	int GetHealth ( unsigned long bGetMax );
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
	void DecreaseHealth ( int Amount );
	void ForceWithDraw ( );
	void LeaveShell ( );
	void WithdrawIntoShell ( );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void SetWithDrawTime ( float ForceWithDraw );
	void SetUpMesh ( );
	void InitTentacle ( class ADunDefKraken* theKraken, struct FName BaseSocketName, float DifficultyHealthMultiplier );
	void eventPostBeginPlay ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* AKrakenTentacle::pClassPointer = NULL;

// Class DunDefAtlantis.DunDefKrakenController
// 0x010C (0x070C - 0x0600)
class ADunDefKrakenController : public ADunDefEnemyController
{
public:
	TArray< struct FChargeHit >                        DashHitTargets;                                   		// 0x0600 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AActor* >                            BiteHurtList;                                     		// 0x060C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              BiteDamageAmount;                                 		// 0x0618 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BiteDamageMomentum;                               		// 0x061C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BiteHitRadius;                                    		// 0x0620 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      BiteDamageType;                                   		// 0x0624 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BiteAttackStateName;                              		// 0x0628 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TentacleAttackStateName;                          		// 0x0630 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              PushDamageMomentum;                               		// 0x0638 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PushDamageAmount;                                 		// 0x063C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PushHitRadius;                                    		// 0x0640 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DashHitRate;                                      		// 0x0644 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DashStopDistance;                                 		// 0x0648 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      PushDamageType;                                   		// 0x064C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      TargetActor;                                      		// 0x0650 (0x0004) [0x0000000000000000]              
	class ADunDefKraken*                               myPawn;                                           		// 0x0654 (0x0004) [0x0000000000000000]              
	int                                                TentaclesInShell;                                 		// 0x0658 (0x0004) [0x0000000000000000]              
	int                                                TentaclesToOpenMouth;                             		// 0x065C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TentacleRetreatTime;                              		// 0x0660 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TentacleDamageAmount;                             		// 0x0664 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TentacleMomentum;                                 		// 0x0668 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      TentacleDamageType;                               		// 0x066C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefHomingProjectile*                     TentacleProjectile;                               		// 0x0670 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TetacleProjectileCD;                              		// 0x0674 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GiantBombAttackChancePct;                         		// 0x0678 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TetacleProjectileMaxRange;                        		// 0x067C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TetacleProjectileMinRange;                        		// 0x0680 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TentacleProjectileBurst;                          		// 0x0684 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CurrentTentacleProjectileBurst;                   		// 0x0688 (0x0004) [0x0000000000000000]              
	float                                              LastTentacleProjAttack;                           		// 0x068C (0x0004) [0x0000000000000000]              
	class ADunDefHomingProjectile*                     GiantProjectile;                                  		// 0x0690 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GiantProjectileCD;                                		// 0x0694 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GiantProjectileMaxRange;                          		// 0x0698 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GiantProjectileMinRange;                          		// 0x069C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastGiantProjAttack;                              		// 0x06A0 (0x0004) [0x0000000000000000]              
	float                                              DashCD;                                           		// 0x06A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DashMaxRange;                                     		// 0x06A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DashMinRange;                                     		// 0x06AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DashRotationRateScalar;                           		// 0x06B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DashAirSpeedScalar;                               		// 0x06B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DashTime;                                         		// 0x06B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastDashTime;                                     		// 0x06BC (0x0004) [0x0000000000000000]              
	struct FVector                                     DashPoint;                                        		// 0x06C0 (0x000C) [0x0000000000000000]              
	class ADunDefInkCloud*                             InkCloudTemplate;                                 		// 0x06CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InkCloudCD;                                       		// 0x06D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InkProjectileMaxRange;                            		// 0x06D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InkProjectileMinRange;                            		// 0x06D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InkCloudSpawnRate;                                		// 0x06DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InkCloudAllowedZDifference;                       		// 0x06E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastInkCloudTime;                                 		// 0x06E4 (0x0004) [0x0000000000000000]              
	float                                              MouthCloseHealthPct;                              		// 0x06E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthPctAtMouthClose;                            		// 0x06EC (0x0004) [0x0000000000000000]              
	float                                              BiteAttackRange;                                  		// 0x06F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TentacleMeleeAttackRange;                         		// 0x06F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bMouthOpen : 1;                                   		// 0x06F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsBiting : 1;                                    		// 0x06F8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDoDashDamage : 1;                                		// 0x06F8 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     GiantProjectileShootLoc;                          		// 0x06FC (0x000C) [0x0000000000000000]              
	float                                              LastTentacleAttackTime;                           		// 0x0708 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80099 ];

		return pClassPointer;
	};

	void StopInkCloud ( );
	void SpawnInkCloud ( );
	void SpawnGiantProjectile ( );
	void SpawnRightTentacleProjectiles ( );
	void SpawnLeftTentacleProjectiles ( );
	void GetValidShootTargets ( float MinRange, float MaxRange, float angleCheck, TArray< class AActor* >* ActorList );
	void CheckCustomOpenMouthAttacks ( );
	void CheckForCustomClosedMouthAttacks ( );
	void CheckForCustomAttacks ( );
	void CloseMouth ( );
	void NotifyTentacleBroughtOut ( );
	void NotifyTentecaleWithDrawn ( );
	void HandleTentacleDamage ( class AActor* newHitTarg, struct FVector HitLocation, struct FVector HitNormal );
	void EndDash ( );
	void UpdateDashPoint ( );
	bool AddToDashHurtList ( class AActor* DashedActor );
	void EndMeleeSwing ( );
	void BiteStart ( );
	void EndBite ( );
	void DoBiting ( );
	bool AddToSwingHurtList ( class AActor* newEntry );
	bool ShouldDamage ( class AActor* act );
	void DoAttack ( );
	struct FVector eventGeneratePathToActor ( class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath );
	bool MoveAroundBlockade ( class AActor* blockadeActor, float BlockadeWidth, struct FVector HitNormal, unsigned long SkipBlockingCheck );
	bool NavActorReachable ( class AActor* A );
	class ANavigationPoint* FindNearestNavPointTo ( class AActor* A, unsigned long bCheckVisible );
	float GetAttackRange ( );
	bool ForceTentacleAttack ( );
	bool WantsHurtAnimation ( );
	void NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
};

UClass* ADunDefKrakenController::pClassPointer = NULL;

// Class DunDefAtlantis.DunDefSharkMan
// 0x00E8 (0x0CB4 - 0x0BCC)
class ADunDefSharkMan : public ADunDefEnemy
{
public:
	struct FName                                       LeftFistSocketName;                               		// 0x0BCC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RightFistSocketName;                              		// 0x0BD4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LeftElbowSocketName;                              		// 0x0BDC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RightElbowSocketName;                             		// 0x0BE4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ChargeWindupAnimName;                             		// 0x0BEC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ChargingAnimName;                                 		// 0x0BF4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       HitWallAnimName;                                  		// 0x0BFC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ChargeFailAnimName;                               		// 0x0C04 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ChargeAbortAnimName;                              		// 0x0C0C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DizzyAnimName;                                    		// 0x0C14 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChargePushSize;                                   		// 0x0C1C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PawnPushBackSpeed;                                		// 0x0C20 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TowerPushBackSpeed;                               		// 0x0C24 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChargingNetUpdateFrequency;                       		// 0x0C28 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TowerCollideDamageMultiplier;                     		// 0x0C2C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayerCollideDamageMultiplier;                    		// 0x0C30 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChanceForImmediatePoundTheGround;                 		// 0x0C34 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WindupTimeScale;                                  		// 0x0C38 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ADunDefPlayer* >                     ChargeHurtList;                                   		// 0x0C3C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              GroundPoundDamage;                                		// 0x0C48 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GroundPoundRadius;                                		// 0x0C4C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      GroundPoundDamageType;                            		// 0x0C50 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChargeAnimationSpeed;                             		// 0x0C54 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     GroundStrikeEffect;                               		// 0x0C58 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     GroundStrikeEffectOffset;                         		// 0x0C5C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              GroundStrikeKnockback;                            		// 0x0C68 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TowerTargetingDesirability_Charging;              		// 0x0C6C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TowerTargetingDesirability_WindUp;                		// 0x0C70 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             UpperBodyCustomAnimNodeNames;                     		// 0x0C74 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       UpperBodyCustomAnimBlenderName;                   		// 0x0C80 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    ChargeSpeeds;                                     		// 0x0C88 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimNodeBlend*                              UpperBodyCustomAnimBlender;                       		// 0x0C94 (0x0004) [0x0000000000000000]              
	int                                                LastUpperBodyCustomAnimNodePlayIndex;             		// 0x0C98 (0x0004) [0x0000000000000000]              
	struct FName                                       ArmBlenderName;                                   		// 0x0C9C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             ScreamLoopSound;                                  		// 0x0CA4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    DashEffectComponent;                              		// 0x0CA8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AActor*                                      ChargeTarget;                                     		// 0x0CAC (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bWindingUp : 1;                                   		// 0x0CB0 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80428 ];

		return pClassPointer;
	};

	bool IsCurrentlyPlayingAttackAnimation ( );
	void NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void ClearChargeHurtList ( );
	bool AddToChargeHurtList ( class ADunDefPlayer* Player );
	void EndCharging ( );
	void SetChargingSpeed ( );
	void CheckForEncroachers ( float DeltaTime );
	float PlaySharkManChargeAbortAnimation ( );
	float PlaySharkManHitWallAnimation ( );
	float PlaySharkManChargeFailAnimation ( );
	bool StopSharkManDizzyAnimation ( );
	float PlaySharkManDizzyAnimation ( );
	float PlaySharkManChargeAnimation ( );
	float PlaySharkManWindupAnimation ( );
	void eventTick ( float DeltaTime );
	void HandleMomentum ( struct FVector Momentum, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo );
	void SetSharkManArmBlend ( int animAmount );
	float PlaySharkManAttackAnimation ( int AnimationIndex );
	void PlayHurtAnimation ( class UClass* DamageType, struct FVector HitLocation );
	float PlayAttackAnimation ( );
	float eventGetEnemyTargetingDesirability ( class AEngineNativeDunDefAIController* forController );
	float GetTowerTargetingDesirability ( class ADunDefTower* forTower );
	struct FVector GetMeleeSwingLocation ( );
	struct FVector GetMeleeElbowLocation ( unsigned char fist );
	struct FVector GetMeleeFistLocation ( unsigned char fist );
	void eventGroundStrike ( );
	void eventMeleeBothEnd ( );
	void eventMeleeBothStart ( );
	void eventMeleeRightEnd ( );
	void eventMeleeRightStart ( );
	void eventMeleeLeftEnd ( );
	void eventMeleeLeftStart ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventPostBeginPlay ( );
};

UClass* ADunDefSharkMan::pClassPointer = NULL;

// Class DunDefAtlantis.DunDefSharkmanController
// 0x00CC (0x06CC - 0x0600)
class ADunDefSharkmanController : public ADunDefEnemyController
{
public:
	unsigned long                                      IsInLeftMeleeSwing : 1;                           		// 0x0600 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsInRightMeleeSwing : 1;                          		// 0x0600 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      ChargeStopDamageWhileWinding : 1;                 		// 0x0600 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      DrawDebugShapes : 1;                              		// 0x0600 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      PainInterruptsCombo : 1;                          		// 0x0600 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      HasPassedChargeTarget : 1;                        		// 0x0600 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	struct FVector                                     PreviousLeftSwingLocation;                        		// 0x0604 (0x000C) [0x0000000000000000]              
	struct FVector                                     PreviousRightSwingLocation;                       		// 0x0610 (0x000C) [0x0000000000000000]              
	int                                                AttackNumber;                                     		// 0x061C (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            SwingHurtList;                                    		// 0x0620 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MeleeDamageAmount;                                		// 0x062C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeDamageMomentum;                              		// 0x0630 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MeleeSwingExtent;                                 		// 0x0634 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MeleeDamageType;                                  		// 0x0640 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    MeleeAttackMultipliers;                           		// 0x0644 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              ComboExpiryTime;                                  		// 0x0650 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChargeMinDistance;                                		// 0x0654 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChargeMaxDistance;                                		// 0x0658 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChargeStopDamagePercent;                          		// 0x065C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ChargeStopDamage;                                 		// 0x0660 (0x0004) [0x0000000000000000]              
	float                                              ChargeTargetJitterSize;                           		// 0x0664 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DizzyTime;                                        		// 0x0668 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChargeDelay;                                      		// 0x066C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayerDontChargeRadius;                           		// 0x0670 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TowerDontChargeRadius;                            		// 0x0674 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CoreTargetDistractionDistance;                    		// 0x0678 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinChargeDistancePerCheck;                        		// 0x067C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChargeDistanceCheckInterval;                      		// 0x0680 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastChargeCheck;                                  		// 0x0684 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              ChargeAbortTime;                                  		// 0x0690 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ArmBlendNormal;                                   		// 0x0694 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ArmBlendCharging;                                 		// 0x0698 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ArmBlendDizzy;                                    		// 0x069C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ChargingHitWallForwardTraceOffset;                		// 0x06A0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ChargeOrigin;                                     		// 0x06AC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              PreviousBaseGroundSpeed;                          		// 0x06B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ChargeTarget;                                     		// 0x06BC (0x000C) [0x0000000000000000]              
	float                                              LastDizzyTime;                                    		// 0x06C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80490 ];

		return pClassPointer;
	};

	void NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser );
	void AbortCharge ( );
	float CheckTowerViability ( class ADunDefTower* tower );
	void CheckForCustomAttacks ( );
	float GetReachCheckDuration ( );
	void DoPositionPoll ( );
	bool IsWinding ( );
	bool IsDistractedByCore ( );
	bool IsCloseToTowers ( float Radius );
	bool IsCloseToPlayers ( float Radius );
	bool AddToSwingHurtList ( class AActor* newEntry );
	void EndMeleeSwing ( unsigned char fist );
	void StartMeleeSwing ( unsigned char fist );
};

UClass* ADunDefSharkmanController::pClassPointer = NULL;

// Class DunDefAtlantis.PuzzlePieceActor
// 0x00B0 (0x02C0 - 0x0210)
class APuzzlePieceActor : public AActor
{
public:
	class UStaticMeshComponent*                        MyMesh;                                           		// 0x0210 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          CylinderComponent;                                		// 0x0214 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             ValidTouchingTemplate;                            		// 0x0218 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ValidTouchedTemplate;                             		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             StartParticleTemplate;                            		// 0x0220 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     DemoEmitter;                                      		// 0x0224 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     FailedVFX;                                        		// 0x0228 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     PuzzleCompletedVFX;                               		// 0x022C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DemoEmitterOffset;                                		// 0x0230 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ValidTouchingColor;                               		// 0x023C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ValidTouchedColor;                                		// 0x024C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                DefaultColor;                                     		// 0x025C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                FailedColor;                                      		// 0x026C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SuccessfulMoveSound;                              		// 0x027C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x0280 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FLinearColor                                startColorLerp;                                   		// 0x0284 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                currentColorLerp;                                 		// 0x0294 (0x0010) [0x0000000000000000]              
	float                                              ColorLerpTime;                                    		// 0x02A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ColorLerpBegin;                                   		// 0x02A8 (0x0004) [0x0000000000000000]              
	float                                              LerpScalar;                                       		// 0x02AC (0x0004) [0x0000000000000000]              
	class APuzzleRoomActor*                            MyPuzzleRoom;                                     		// 0x02B0 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    StatusComponent;                                  		// 0x02B4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   myMIC;                                            		// 0x02B8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bScaleBackToDefault : 1;                          		// 0x02BC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80950 ];

		return pClassPointer;
	};

	bool ScaleColor ( float DeltaTime );
	void TurnOnStartEmitter ( );
	void PlayDemoEmitter ( );
	void ShutOffVFX ( float lerpScale );
	void SetColorLerp ( struct FLinearColor NewColor, unsigned long bShouldScaleBack, float lerpScale );
	void PlayPuzzleCompletedVFX ( );
	void PlayFailedVFX ( );
	void SetValidDeactivation ( );
	void SetValidTouching ( );
	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void SetMyPuzzleRoom ( class APuzzleRoomActor* newPuzzleRoom );
	void eventPostBeginPlay ( );
};

UClass* APuzzlePieceActor::pClassPointer = NULL;

// Class DunDefAtlantis.RaisingWaterVolume
// 0x0040 (0x028C - 0x024C)
class ARaisingWaterVolume : public AVolume
{
public:
	TArray< class ADunDefPawn* >                       TouchingPawns;                                    		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAirControlPawn >                   FallingOutPawns;                                  		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MovementMultiplier;                               		// 0x0264 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PlayerAttackRateMultiplier;                       		// 0x0268 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PlayerCastingRateMultiplier;                      		// 0x026C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              AirControlTime;                                   		// 0x0270 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AirControlScalar;                                 		// 0x0274 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   OverridePawnFootStepSound;                        		// 0x0278 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             OverridePawnFootStepParticle;                     		// 0x027C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpeedToUseFootsetpOverrides;                      		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UpdateWeaponAttackValueInterval;                  		// 0x0284 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              currentWeaponUpdateTime;                          		// 0x0288 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81135 ];

		return pClassPointer;
	};

	void OnModifyProperty ( class USeqAct_ModifyProperty* Action );
	void ClearPawnFXOverrides ( class ADunDefPawn* thePawn );
	void SetPawnFXOverrides ( class ADunDefPawn* thePawn );
	void eventTick ( float DeltaTime );
	void ClearAirControl ( );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ARaisingWaterVolume::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif