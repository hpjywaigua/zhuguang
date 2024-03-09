#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Enums
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Enum AI.EAISoundCollectType
enum class EAISoundCollectType : uint8_t
{
	EAISoundCollectType__AISoundCollectType_Step = 0,
	EAISoundCollectType__AISoundCollectType_Weapon = 1,
	EAISoundCollectType__AISoundCollectType_Vehicle = 2,
	EAISoundCollectType__AISoundCollectType_Horn = 3,
	EAISoundCollectType__AISoundCollectType_Grenade = 4,
	EAISoundCollectType__AISoundCollectType_MAX = 5
};


// Enum AI.EObstacleDetectionSpace
enum class EObstacleDetectionSpace : uint8_t
{
	EObstacleDetectionSpace__ObstacleDetection_Box = 0,
	EObstacleDetectionSpace__ObstacleDetection_CapsuleSweep = 1,
	EObstacleDetectionSpace__ObstacleDetection_MAX = 2
};


// Enum AI.EAICheckFlyingStatusType
enum class EAICheckFlyingStatusType : uint8_t
{
	EAICheckFlyingStatusType__FlyingStatus_HasNavigationSystem = 0,
	EAICheckFlyingStatusType__FlyingStatus_NavigationVoxelDataDone = 1,
	EAICheckFlyingStatusType__FlyingStatus_MAX = 2
};


// Enum AI.EAICheckShootingPoseType
enum class EAICheckShootingPoseType : uint8_t
{
	EAICheckShootingPoseType__ShootingPose_Normal = 0,
	EAICheckShootingPoseType__ShootingPose_Stand = 1,
	EAICheckShootingPoseType__ShootingPose_Peek = 2,
	EAICheckShootingPoseType__ShootingPose_WaitVisibilityCheck = 3,
	EAICheckShootingPoseType__ShootingPose_MAX = 4
};


// Enum AI.ECompareLengthType
enum class ECompareLengthType : uint8_t
{
	ELengthGreater                 = 0,
	ELengthLess                    = 1,
	ELengthEequal                  = 2,
	ECompareLengthType_MAX         = 3
};


// Enum AI.EAIDecoratorGeneralLineTraceType
enum class EAIDecoratorGeneralLineTraceType : uint8_t
{
	EAIDecoratorGeneralLineTraceType__LineTraceType_Forward = 0,
	EAIDecoratorGeneralLineTraceType__LineTraceType_MAX = 1
};


// Enum AI.EInSafetyCircleType
enum class EInSafetyCircleType : uint8_t
{
	EInSafetyCircleType__EInSafetyCircleType_None = 0,
	EInSafetyCircleType__EInSafetyCircleType_BlueCircle = 1,
	EInSafetyCircleType__EInSafetyCircleType_WhiteCircle = 2,
	EInSafetyCircleType__EInSafetyCircleType_MAX = 3
};


// Enum AI.EItemNumCheckType
enum class EItemNumCheckType : uint8_t
{
	ItemNumGreater                 = 0,
	ItemNumLess                    = 1,
	ItemNumEequal                  = 2,
	EItemNumCheckType_MAX          = 3
};


// Enum AI.EChooseEnemySearchMethod
enum class EChooseEnemySearchMethod : uint8_t
{
	EChooseEnemySearchMethod__SearchMethod_Nearest = 0,
	EChooseEnemySearchMethod__SearchMethod_MostHP = 1,
	EChooseEnemySearchMethod__SearchMethod_LeastHP = 2,
	EChooseEnemySearchMethod__SearchMethod_ByBlackboardValue = 3,
	EChooseEnemySearchMethod__SearchMethod_MAX = 4
};


// Enum AI.EChooseEnemyType
enum class EChooseEnemyType : uint8_t
{
	EChooseEnemyType__EnemyType_Player = 0,
	EChooseEnemyType__EnemyType_Animal = 1,
	EChooseEnemyType__EnemyType_Zombie = 2,
	EChooseEnemyType__EnemyType_UAV = 3,
	EChooseEnemyType__EnemyType_MAX = 4
};


// Enum AI.EMobAddHPServiceType
enum class EMobAddHPServiceType : uint8_t
{
	EMobAddHPServiceType__LoseTarget = 0,
	EMobAddHPServiceType__EMobAddHPServiceType_MAX = 1
};


// Enum AI.EAISearchEnemyType
enum class EAISearchEnemyType : uint8_t
{
	EAISearchEnemyType__Nearest    = 0,
	EAISearchEnemyType__Random     = 1,
	EAISearchEnemyType__EAISearchEnemyType_MAX = 2
};


// Enum AI.EAISearchEnemySingleRule
enum class EAISearchEnemySingleRule : uint8_t
{
	EAISearchEnemySingleRule__SingleRule_Hatred = 0,
	EAISearchEnemySingleRule__SingleRule_Random = 1,
	EAISearchEnemySingleRule__SingleRule_Nearest = 2,
	EAISearchEnemySingleRule__SingleRule_MostHP = 3,
	EAISearchEnemySingleRule__SingleRule_PoorHP = 4,
	EAISearchEnemySingleRule__SingleRule_BlackboardValue = 5,
	EAISearchEnemySingleRule__SingleRule_MAX = 6
};


// Enum AI.EAISenseGrenadeType
enum class EAISenseGrenadeType : uint8_t
{
	EAISenseGrenadeType__ExplosionGrenade = 0,
	EAISenseGrenadeType__BurningGrenade = 1,
	EAISenseGrenadeType__SmokingGrenade = 2,
	EAISenseGrenadeType__FlashBomb = 3,
	EAISenseGrenadeType__Grenade_MaxNum = 4,
	EAISenseGrenadeType__EAISenseGrenadeType_MAX = 5
};


// Enum AI.ETargetAngleCheck
enum class ETargetAngleCheck : uint8_t
{
	TargetAngleCheckFocus          = 0,
	TargetAngleCheckFocusFail      = 1,
	TargetAngleCheckFocusSuccess   = 2,
	ETargetAngleCheck_MAX          = 3
};


// Enum AI.EVHQueryEnemyRule
enum class EVHQueryEnemyRule : uint8_t
{
	EVHQueryEnemyRule__Nearest     = 0,
	EVHQueryEnemyRule__Random      = 1,
	EVHQueryEnemyRule__EVHQueryEnemyRule_MAX = 2
};


// Enum AI.EVHEnemyType
enum class EVHEnemyType : uint8_t
{
	EVHEnemyType__EVHEnemyType_Player = 0,
	EVHEnemyType__EVHEnemyType_Car = 1,
	EVHEnemyType__EVHEnemyType_Mob = 2,
	EVHEnemyType__EVHEnemyType_FakePlayer = 3,
	EVHEnemyType__EVHEnemyType_MAX = 4
};


// Enum AI.EAIAdvFindOcclusionPointSearchBestOcclusionMethod
enum class EAIAdvFindOcclusionPointSearchBestOcclusionMethod : uint8_t
{
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_Normal = 0,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_NearToTarget = 1,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_FarToTarget = 2,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_NearToSelf = 3,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_RandomOfSelf = 4,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_MAX = 5
};


// Enum AI.EAIAdvFindOcclusionPointPoseType
enum class EAIAdvFindOcclusionPointPoseType : uint8_t
{
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseProne = 0,
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseCrouch = 1,
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseStand = 2,
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseBush = 3,
	EAIAdvFindOcclusionPointPoseType__Occlusion_MAX = 4
};


// Enum AI.EFindFlyingHoverPointOneSideShapeOType
enum class EFindFlyingHoverPointOneSideShapeOType : uint8_t
{
	EFindFlyingHoverPointOneSideShapeOType__OT_RandomSide = 0,
	EFindFlyingHoverPointOneSideShapeOType__OT_LeftSide = 1,
	EFindFlyingHoverPointOneSideShapeOType__OT_RightSide = 2,
	EFindFlyingHoverPointOneSideShapeOType__OT_MAX = 3
};


// Enum AI.EFindFlyingHoverPointHoverType
enum class EFindFlyingHoverPointHoverType : uint8_t
{
	EFindFlyingHoverPointHoverType__HT_OneSideShapeO = 0,
	EFindFlyingHoverPointHoverType__HT_MAX = 1
};


// Enum AI.EFlyToPathfindingThread
enum class EFlyToPathfindingThread : uint8_t
{
	EFlyToPathfindingThread__Sync  = 0,
	EFlyToPathfindingThread__ASync = 1,
	EFlyToPathfindingThread__EFlyToPathfindingThread_MAX = 2
};


// Enum AI.EMobFindAttackablePositionLineTraceType
enum class EMobFindAttackablePositionLineTraceType : uint8_t
{
	EMobFindAttackablePositionLineTraceType__Normal = 0,
	EMobFindAttackablePositionLineTraceType__HalfHeightOffset = 1,
	EMobFindAttackablePositionLineTraceType__CustomHeightOffset = 2,
	EMobFindAttackablePositionLineTraceType__EMobFindAttackablePositionLineTraceType_MAX = 3
};


// Enum AI.ESearchType
enum class ESearchType : uint8_t
{
	ESearchType__CenterInSelfLocation = 0,
	ESearchType__CenterInSpecificLocation = 1,
	ESearchType__ESearchType_MAX   = 2
};


// Enum AI.EAIMoveToOcclusionFinishMovePoseType
enum class EAIMoveToOcclusionFinishMovePoseType : uint8_t
{
	EAIMoveToOcclusionFinishMovePoseType__FinishMovePoseType_Normal = 0,
	EAIMoveToOcclusionFinishMovePoseType__FinishMovePoseType_CrouchIfACrouchOcclusion = 1,
	EAIMoveToOcclusionFinishMovePoseType__FinishMovePoseType_MAX = 2
};


// Enum AI.EAIMoveToOcclusionMovingPoseType
enum class EAIMoveToOcclusionMovingPoseType : uint8_t
{
	EAIMoveToOcclusionMovingPoseType__MovingPoseType_Normal = 0,
	EAIMoveToOcclusionMovingPoseType__MovingPoseType_CrouchSprintIfAlreadyCrouched = 1,
	EAIMoveToOcclusionMovingPoseType__MovingPoseType_MAX = 2
};


// Enum AI.EAIMoveToOcclusionSearchBestOcclusionMethod
enum class EAIMoveToOcclusionSearchBestOcclusionMethod : uint8_t
{
	EAIMoveToOcclusionSearchBestOcclusionMethod__Normal = 0,
	EAIMoveToOcclusionSearchBestOcclusionMethod__NearToTarget = 1,
	EAIMoveToOcclusionSearchBestOcclusionMethod__FarToTarget = 2,
	EAIMoveToOcclusionSearchBestOcclusionMethod__NearToSelf = 3,
	EAIMoveToOcclusionSearchBestOcclusionMethod__RandomOfSelf = 4,
	EAIMoveToOcclusionSearchBestOcclusionMethod__EAIMoveToOcclusionSearchBestOcclusionMethod_MAX = 5
};


// Enum AI.EAIMoveToOcclusionPoseType
enum class EAIMoveToOcclusionPoseType : uint8_t
{
	EAIMoveToOcclusionPoseType__PoseProne = 0,
	EAIMoveToOcclusionPoseType__PoseCrouch = 1,
	EAIMoveToOcclusionPoseType__PoseStand = 2,
	EAIMoveToOcclusionPoseType__PoseBush = 3,
	EAIMoveToOcclusionPoseType__EAIMoveToOcclusionPoseType_MAX = 4
};


// Enum AI.ESeekFlyPointHorizontalAngleType
enum class ESeekFlyPointHorizontalAngleType : uint8_t
{
	ESeekFlyPointHorizontalAngleType__TargetView = 0,
	ESeekFlyPointHorizontalAngleType__TargetToSelf = 1,
	ESeekFlyPointHorizontalAngleType__BornLocationView = 2,
	ESeekFlyPointHorizontalAngleType__ESeekFlyPointHorizontalAngleType_MAX = 3
};


// Enum AI.ESeekFlyPointCenterLocType
enum class ESeekFlyPointCenterLocType : uint8_t
{
	ESeekFlyPointCenterLocType__Target = 0,
	ESeekFlyPointCenterLocType__Self = 1,
	ESeekFlyPointCenterLocType__BornLocation = 2,
	ESeekFlyPointCenterLocType__ESeekFlyPointCenterLocType_MAX = 3
};


// Enum AI.ELocateType
enum class ELocateType : uint8_t
{
	ELocateType__ELocateType_Random = 0,
	ELocateType__ELocateType_Strategy = 1,
	ELocateType__ELocateType_Escape = 2,
	ELocateType__ELocateType_MAX   = 3
};


// Enum AI.EAIVHMoveType
enum class EAIVHMoveType : uint8_t
{
	EAIVHMoveType__ELocateType_Normal = 0,
	EAIVHMoveType__ELocateType_Strategy = 1,
	EAIVHMoveType__ELocateType_Directly = 2,
	EAIVHMoveType__ELocateType_Toward = 3,
	EAIVHMoveType__ELocateType_MAX = 4
};


// Enum AI.EAITaskNodeThrowGrenadeMethod
enum class EAITaskNodeThrowGrenadeMethod : uint8_t
{
	EAITaskNodeThrowGrenadeMethod__ThrowGrenadeMethod_Normal = 0,
	EAITaskNodeThrowGrenadeMethod__ThrowGrenadeMethod_Advanced = 1,
	EAITaskNodeThrowGrenadeMethod__ThrowGrenadeMethod_MAX = 2
};


// Enum AI.ECustomDamageEventReactionType
enum class ECustomDamageEventReactionType : uint8_t
{
	ECustomDamageEventReactionType__SpawnActor = 0,
	ECustomDamageEventReactionType__ActiveParticles = 1,
	ECustomDamageEventReactionType__DetactiveParticles = 2,
	ECustomDamageEventReactionType__HideMesh = 3,
	ECustomDamageEventReactionType__HideMeshInstance = 4,
	ECustomDamageEventReactionType__HideBone = 5,
	ECustomDamageEventReactionType__ApplyPhysicalAnimationProfile = 6,
	ECustomDamageEventReactionType__SetCollisionEnabled = 7,
	ECustomDamageEventReactionType__ECustomDamageEventReactionType_MAX = 8
};


// Enum AI.ECustomDamageEventTriggerType
enum class ECustomDamageEventTriggerType : uint8_t
{
	ECustomDamageEventTriggerType__OnPassedDamageThreshold = 0,
	ECustomDamageEventTriggerType__OnAnyDamage = 1,
	ECustomDamageEventTriggerType__ECustomDamageEventTriggerType_MAX = 2
};


// Enum AI.EMLAIJumpingPhase
enum class EMLAIJumpingPhase : uint8_t
{
	EMLAIJumpingPhase__Before      = 0,
	EMLAIJumpingPhase__FreeFalling = 1,
	EMLAIJumpingPhase__OpenParachute = 2,
	EMLAIJumpingPhase__Landing     = 3,
	EMLAIJumpingPhase__EMLAIJumpingPhase_MAX = 4
};


// Enum AI.ENearItemType
enum class ENearItemType : uint8_t
{
	ENearItemType__Box             = 0,
	ENearItemType__Item            = 1,
	ENearItemType__AirDropBox      = 2,
	ENearItemType__TreasureChest   = 3,
	ENearItemType__Weed            = 4,
	ENearItemType__ENearItemType_MAX = 5
};



//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Script Structs
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// ScriptStruct AI.TLogAIShootInfo
// 0x000C
struct FTLogAIShootInfo
{
	int                                                TargetDistance;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TargetType;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WeaponId;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BehaviorRegion
// 0x0028
struct FBehaviorRegion
{
	struct FVector                                     BasePosition;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SphereRadius;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct AI.ChildDynamicItem
// 0x0020
struct FChildDynamicItem
{
	int                                                Category;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     ChildName;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct AI.AIStateInfoBase
// 0x0010
struct FAIStateInfoBase
{
	TArray<struct FString>                             IgnoreNames;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIStateXYZ
// 0x0010 (0x0020 - 0x0010)
struct FAIStateXYZ : public FAIStateInfoBase
{
	float                                              X;                                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.SoundState
// 0x0030 (0x0040 - 0x0010)
struct FSoundState : public FAIStateInfoBase
{
	int                                                Type;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FAIStateXYZ                                 Location;                                                 // 0x0018(0x0020)
	uint32_t                                           ID;                                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.CacheSoundState
// 0x0048
struct FCacheSoundState
{
	struct FSoundState                                 SoundState;                                               // 0x0000(0x0040)
	float                                              Time;                                                     // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct AI.UniqueStateInfo
// 0x0008 (0x0018 - 0x0010)
struct FUniqueStateInfo : public FAIStateInfoBase
{
	uint64_t                                           diff_mark_id;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIAttribute
// 0x0008 (0x0020 - 0x0018)
struct FAIAttribute : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIPlayerState
// 0x0148 (0x0158 - 0x0010)
struct FAIPlayerState : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	uint64_t                                           unique_id;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                expect_delivery_num;                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                remain_delivery_num;                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           actor_id;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_id;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0030(0x0020)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0050(0x0020)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0070(0x0020)
	float                                              HP;                                                       // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              dying_hp;                                                 // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              oxygen;                                                   // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                active_weapon_slot;                                       // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                weapon_status;                                            // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_switching;                                             // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	int                                                alive_state;                                              // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_count;                                               // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                assist_count;                                             // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                death_count;                                              // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damages;                                                  // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           pawn_states;                                              // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               is_running;                                               // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_aiming;                                                // 0x00C9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_left_probe;                                            // 0x00CA(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_right_probe;                                           // 0x00CB(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_floating;                                              // 0x00CC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_diving;                                                // 0x00CD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_vehicle_probe;                                         // 0x00CE(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_in_vehicle;                                            // 0x00CF(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_firing;                                                // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_using_skill;                                           // 0x00D1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00D2(0x0002) MISSED OFFSET
	int                                                using_skill_id;                                           // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skill_phase_index;                                        // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_holding;                                               // 0x00DC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_stun;                                                  // 0x00DD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_pose_acting;                                           // 0x00DE(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_picking;                                               // 0x00DF(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_weapon_near_wall;                                      // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	int                                                body_state;                                               // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                location_state;                                           // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_smoke;                                                // 0x00EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	int                                                vehicle_role;                                             // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                player_type;                                              // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_delivery_pool;                                         // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	int                                                ai_level;                                                 // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_move_has_collision;                                    // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_lost_connection;                                       // 0x0101(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0102(0x0002) MISSED OFFSET
	int                                                revival_count;                                            // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              rating_score;                                             // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              real_hidden_score;                                        // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                zone_id;                                                  // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_invincible;                                            // 0x0114(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	TArray<struct FAIAttribute>                        Attributes;                                               // 0x0118(0x0010) (ZeroConstructor)
	int                                                ai_kill_count;                                            // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_shoveling;                                             // 0x012C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x012D(0x0003) MISSED OFFSET
	uint32_t                                           parachute_state;                                          // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           plane_id;                                                 // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                parallel_world_id;                                        // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_be_spectated;                                          // 0x013C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	int                                                gender;                                                   // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           related_id;                                               // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_gone;                                                 // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_afk;                                                   // 0x0149(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x014A(0x0002) MISSED OFFSET
	int                                                emote_id;                                                 // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               can_parachute_jump;                                       // 0x0150(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
};

// ScriptStruct AI.AIHeardSound
// 0x0010
struct FAIHeardSound
{
	TArray<struct FSoundState>                         heard_sound;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIDamageSources
// 0x0030 (0x0040 - 0x0010)
struct FAIDamageSources : public FAIStateInfoBase
{
	TArray<struct FAIStateXYZ>                         damage_source;                                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        damage_type;                                              // 0x0020(0x0010) (ZeroConstructor)
	TArray<int>                                        damage_weapon_type;                                       // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIDamageInfo
// 0x0018 (0x0028 - 0x0010)
struct FAIDamageInfo : public FAIStateInfoBase
{
	uint32_t                                           PlayerKey;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_type;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_weapon_type;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           damage_part;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              damage_before_cal_armor;                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIPlayerInteractInfo
// 0x0040 (0x0050 - 0x0010)
struct FAIPlayerInteractInfo : public FAIStateInfoBase
{
	TArray<struct FAIDamageInfo>                       active_damage;                                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FAIDamageInfo>                       passive_damage;                                           // 0x0020(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   kill_list;                                                // 0x0030(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   knock_down_list;                                          // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.CameraState
// 0x0060 (0x0070 - 0x0010)
struct FCameraState : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 Position;                                                 // 0x0010(0x0020)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0030(0x0020)
	struct FAIStateXYZ                                 view_position;                                            // 0x0050(0x0020)
};

// ScriptStruct AI.AIWeaponStateInfo
// 0x0028 (0x0040 - 0x0018)
struct FAIWeaponStateInfo : public FUniqueStateInfo
{
	int                                                slot_id;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Bullet;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bullet_in_backpak;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              remain_reloading;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        attachments;                                              // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIPlayerWeapon
// 0x0010
struct FAIPlayerWeapon
{
	TArray<struct FAIWeaponStateInfo>                  player_weapon;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIBackpackItem
// 0x0010 (0x0028 - 0x0018)
struct FAIBackpackItem : public FUniqueStateInfo
{
	int                                                Category;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIPlayerBackpack
// 0x0010
struct FAIPlayerBackpack
{
	TArray<struct FAIBackpackItem>                     backpack_item;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIGameModePlayerWeaponSchemeSlotInfo
// 0x0020 (0x0030 - 0x0010)
struct FAIGameModePlayerWeaponSchemeSlotInfo : public FAIStateInfoBase
{
	int                                                slot_index;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<int>                                        attach_list;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIGameModePlayerWeaponSchemeInfo
// 0x0018 (0x0028 - 0x0010)
struct FAIGameModePlayerWeaponSchemeInfo : public FAIStateInfoBase
{
	int                                                scheme_index;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_locked;                                                // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	TArray<struct FAIGameModePlayerWeaponSchemeSlotInfo> slot_list;                                                // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DeathMatchAIPlayerEquipment
// 0x0018 (0x0028 - 0x0010)
struct FDeathMatchAIPlayerEquipment : public FAIStateInfoBase
{
	TArray<struct FAIGameModePlayerWeaponSchemeInfo>   weapon_scheme_info_list;                                  // 0x0010(0x0010) (ZeroConstructor)
	int                                                cur_weapon_scheme_index;                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIEquipmentInfo
// 0x0010 (0x0028 - 0x0018)
struct FAIEquipmentInfo : public FUniqueStateInfo
{
	int                                                Category;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Durability;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIPlayerEquipment
// 0x0010
struct FAIPlayerEquipment
{
	TArray<struct FAIEquipmentInfo>                    equipment_item;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffStateInfoBase
// 0x0010
struct FDiffStateInfoBase
{
	TArray<struct FString>                             IgnoreNames;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.ProgressBarState
// 0x0010 (0x0020 - 0x0010)
struct FProgressBarState : public FDiffStateInfoBase
{
	int                                                Type;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              remain_time;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           targetid;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AINearbyPlayer
// 0x0178 (0x0190 - 0x0018)
struct FAINearbyPlayer : public FUniqueStateInfo
{
	struct FAIPlayerState                              State;                                                    // 0x0018(0x0158)
	struct FAIPlayerWeapon                             Weapon;                                                   // 0x0170(0x0010)
	struct FAIPlayerEquipment                          equipment;                                                // 0x0180(0x0010)
};

// ScriptStruct AI.ItemStateData
// 0x0048 (0x0060 - 0x0018)
struct FItemStateData : public FUniqueStateInfo
{
	int                                                Type;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UID;                                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Durability;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FAIStateXYZ                                 Position;                                                 // 0x0030(0x0020)
	uint32_t                                           player_id;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	uint64_t                                           unique_id;                                                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.ObstacleState
// 0x0058 (0x0070 - 0x0018)
struct FObstacleState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HP;                                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              max_hp;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FAIStateXYZ                                 Position;                                                 // 0x0030(0x0020)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0050(0x0020)
};

// ScriptStruct AI.AINearbyThrown
// 0x0040 (0x0058 - 0x0018)
struct FAINearbyThrown : public FUniqueStateInfo
{
	int                                                Type;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FAIStateXYZ                                 Position;                                                 // 0x0020(0x0020)
	float                                              remain_time;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              explode_time;                                             // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_own;                                                   // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_held;                                                  // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	uint32_t                                           actorid;                                                  // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           sourceid;                                                 // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DoorState
// 0x0048 (0x0060 - 0x0018)
struct FDoorState : public FUniqueStateInfo
{
	struct FAIStateXYZ                                 Position;                                                 // 0x0018(0x0020)
	int                                                State;                                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID;                                                       // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0040(0x0020)
};

// ScriptStruct AI.AIPlayerHitInfo
// 0x0018 (0x0028 - 0x0010)
struct FAIPlayerHitInfo : public FAIStateInfoBase
{
	int                                                fire_count;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_count;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_head_count;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_count_filter;                                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_head_filter;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AI.SafetyAreaState
// 0x0060 (0x0070 - 0x0010)
struct FSafetyAreaState : public FAIStateInfoBase
{
	int                                                State;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FAIStateXYZ                                 Center;                                                   // 0x0018(0x0020)
	float                                              Radius;                                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FAIStateXYZ                                 next_center;                                              // 0x0040(0x0020)
	float                                              next_radius;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_time;                                               // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                circle_index;                                             // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.RedZoneState
// 0x0030 (0x0040 - 0x0010)
struct FRedZoneState : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 Center;                                                   // 0x0010(0x0020)
	float                                              Radius;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              remain_time;                                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              start_time;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.TeamScoreData
// 0x0008 (0x0020 - 0x0018)
struct FTeamScoreData : public FUniqueStateInfo
{
	int                                                team_id;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_score;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIGameState
// 0x0050 (0x0060 - 0x0010)
struct FAIGameState : public FAIStateInfoBase
{
	bool                                               is_over;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                alive_player_count;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_map;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_type;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     game_ds_version;                                          // 0x0028(0x0010) (ZeroConstructor)
	int                                                zone_id;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	uint64_t                                           left_time;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           stage_time;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTeamScoreData>                      team_score_datas;                                         // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.VehicleDamageInfo
// 0x0018 (0x0028 - 0x0010)
struct FVehicleDamageInfo : public FAIStateInfoBase
{
	uint32_t                                           vehicle_id;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_type;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_kill;                                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct AI.VehicleState
// 0x0120 (0x0138 - 0x0018)
struct FVehicleState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FAIStateXYZ                                 Position;                                                 // 0x0020(0x0020)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0040(0x0020)
	float                                              HP;                                                       // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              gas;                                                      // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0068(0x0020)
	uint32_t                                           damaged_num;                                              // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Category;                                                 // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_reverse;                                               // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               has_player;                                               // 0x0091(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_full;                                                  // 0x0092(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0093(0x0005) MISSED OFFSET
	struct FCameraState                                Camera;                                                   // 0x0098(0x0070)
	int                                                location_state;                                           // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	TArray<float>                                      wheels_hp;                                                // 0x0110(0x0010) (ZeroConstructor)
	TArray<struct FVehicleDamageInfo>                  damage_info;                                              // 0x0120(0x0010) (ZeroConstructor)
	bool                                               is_has_collision;                                         // 0x0130(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_using_horn;                                            // 0x0131(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_attached;                                              // 0x0132(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0133(0x0001) MISSED OFFSET
	uint32_t                                           born_island_owner_id;                                     // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIBulletHoles
// 0x0020 (0x0030 - 0x0010)
struct FAIBulletHoles : public FAIStateInfoBase
{
	TArray<struct FAIStateXYZ>                         hole_pos;                                                 // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FAIStateXYZ>                         hole_source_pos;                                          // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIRecipients
// 0x0030 (0x0040 - 0x0010)
struct FAIRecipients : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           team_id;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0018(0x0020)
	float                                              HP;                                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Type;                                                     // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.SpecialZoneState
// 0x0078 (0x0090 - 0x0018)
struct FSpecialZoneState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FAIStateXYZ                                 Center;                                                   // 0x0020(0x0020)
	float                                              Radius;                                                   // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Type;                                                     // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                custom_state;                                             // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FAIStateXYZ                                 Position;                                                 // 0x0050(0x0020)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0070(0x0020)
};

// ScriptStruct AI.DynamicItem
// 0x0050 (0x0068 - 0x0018)
struct FDynamicItem : public FUniqueStateInfo
{
	int                                                Category;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID;                                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Center;                                                   // 0x0020(0x0020)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0040(0x0020)
	float                                              Durability;                                               // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIStateConfig
// 0x0008 (0x0018 - 0x0010)
struct FAIStateConfig : public FAIStateInfoBase
{
	int                                                Level;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Style;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.MonsterState
// 0x0078 (0x0090 - 0x0018)
struct FMonsterState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0020(0x0020)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0040(0x0020)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0060(0x0020)
	float                                              HP;                                                       // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              hp_max;                                                   // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                using_skill_id;                                           // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.ChatMsgInfo
// 0x0038 (0x0048 - 0x0010)
struct FChatMsgInfo : public FAIStateInfoBase
{
	struct FString                                     msg_content;                                              // 0x0010(0x0010) (ZeroConstructor)
	uint32_t                                           item_id;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FAIStateXYZ                                 hit_position;                                             // 0x0028(0x0020)
};

// ScriptStruct AI.SignMsgInfo
// 0x0028 (0x0038 - 0x0010)
struct FSignMsgInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 hit_pos;                                                  // 0x0010(0x0020)
	uint32_t                                           item_id;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           msg_type;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.MapMarkInfo
// 0x0030 (0x0040 - 0x0010)
struct FMapMarkInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 mapmark_loc;                                              // 0x0010(0x0020)
	TArray<struct FAIStateXYZ>                         mapmultimark_list;                                        // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIStateInfo
// 0x0708 (0x0720 - 0x0018)
struct FAIStateInfo : public FUniqueStateInfo
{
	struct FAIPlayerState                              State;                                                    // 0x0018(0x0158)
	struct FAIHeardSound                               Sound;                                                    // 0x0170(0x0010)
	struct FAIDamageSources                            damage_sources;                                           // 0x0180(0x0040)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x01C0(0x0050)
	struct FCameraState                                Camera;                                                   // 0x0210(0x0070)
	struct FAIPlayerWeapon                             Weapon;                                                   // 0x0280(0x0010)
	struct FAIPlayerBackpack                           BackPack;                                                 // 0x0290(0x0010)
	struct FDeathMatchAIPlayerEquipment                deathmatch_backpack;                                      // 0x02A0(0x0028)
	struct FAIPlayerEquipment                          equipment;                                                // 0x02C8(0x0010)
	struct FProgressBarState                           progress_bar;                                             // 0x02D8(0x0020)
	TArray<struct FAINearbyPlayer>                     nearby_player;                                            // 0x02F8(0x0010) (ZeroConstructor)
	TArray<struct FItemStateData>                      nearby_item;                                              // 0x0308(0x0010) (ZeroConstructor)
	TArray<struct FObstacleState>                      nearby_obstacle;                                          // 0x0318(0x0010) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0328(0x0010) (ZeroConstructor)
	TArray<struct FDoorState>                          nearby_door;                                              // 0x0338(0x0010) (ZeroConstructor)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x0348(0x0028)
	struct FSafetyAreaState                            safety_area;                                              // 0x0370(0x0070)
	struct FRedZoneState                               red_zone;                                                 // 0x03E0(0x0040)
	struct FAIGameState                                Game;                                                     // 0x0420(0x0060)
	uint32_t                                           Key;                                                      // 0x0480(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           deliver_target_id;                                        // 0x0484(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVehicleState                               vehicle_state;                                            // 0x0488(0x0138)
	TArray<struct FVehicleState>                       nearby_vehicles;                                          // 0x05C0(0x0010) (ZeroConstructor)
	struct FAIBulletHoles                              bullet_holes;                                             // 0x05D0(0x0030)
	TArray<struct FAIRecipients>                       recipients;                                               // 0x0600(0x0010) (ZeroConstructor)
	TArray<struct FSpecialZoneState>                   special_zones;                                            // 0x0610(0x0010) (ZeroConstructor)
	TArray<struct FDynamicItem>                        dynamic_items;                                            // 0x0620(0x0010) (ZeroConstructor)
	uint32_t                                           ai_style;                                                 // 0x0630(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0634(0x0004) MISSED OFFSET
	struct FAIStateConfig                              Config;                                                   // 0x0638(0x0018)
	TArray<struct FMonsterState>                       monster_states;                                           // 0x0650(0x0010) (ZeroConstructor)
	struct FChatMsgInfo                                chatmsg_info;                                             // 0x0660(0x0048)
	struct FSignMsgInfo                                signmsg_info;                                             // 0x06A8(0x0038)
	struct FMapMarkInfo                                mapmark_info;                                             // 0x06E0(0x0040)
};

// ScriptStruct AI.DiffStateInfoInt32
// 0x0004
struct FDiffStateInfoInt32
{
	int                                                Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffStateInfoFloat
// 0x0004
struct FDiffStateInfoFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffStateInfoVector
// 0x000C
struct FDiffStateInfoVector
{
	struct FDiffStateInfoFloat                         X;                                                        // 0x0000(0x0004)
	struct FDiffStateInfoFloat                         Y;                                                        // 0x0004(0x0004)
	struct FDiffStateInfoFloat                         Z;                                                        // 0x0008(0x0004)
};

// ScriptStruct AI.DiffStateInfoBool
// 0x0001
struct FDiffStateInfoBool
{
	bool                                               Value;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffAttribute
// 0x0008 (0x0018 - 0x0010)
struct FDiffAttribute : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoFloat                         Value;                                                    // 0x0014(0x0004)
};

// ScriptStruct AI.DiffAIAttributes
// 0x0020 (0x0030 - 0x0010)
struct FDiffAIAttributes : public FDiffStateInfoBase
{
	TArray<struct FDiffAttribute>                      attribute_state;                                          // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffStateInfoUInt64
// 0x0008
struct FDiffStateInfoUInt64
{
	uint64_t                                           Value;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffStateInfoUInt32
// 0x0004
struct FDiffStateInfoUInt32
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffAIPlayerState
// 0x00E0 (0x00F0 - 0x0010)
struct FDiffAIPlayerState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoInt32                         actor_id;                                                 // 0x0014(0x0004)
	struct FDiffStateInfoInt32                         team_id;                                                  // 0x0018(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x001C(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0028(0x000C)
	struct FDiffStateInfoVector                        Speed;                                                    // 0x0034(0x000C)
	struct FDiffStateInfoFloat                         HP;                                                       // 0x0040(0x0004)
	struct FDiffStateInfoFloat                         Energy;                                                   // 0x0044(0x0004)
	struct FDiffStateInfoFloat                         dying_hp;                                                 // 0x0048(0x0004)
	struct FDiffStateInfoFloat                         oxygen;                                                   // 0x004C(0x0004)
	struct FDiffStateInfoInt32                         active_weapon_slot;                                       // 0x0050(0x0004)
	struct FDiffStateInfoInt32                         weapon_status;                                            // 0x0054(0x0004)
	struct FDiffStateInfoBool                          is_switching;                                             // 0x0058(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         alive_state;                                              // 0x005C(0x0004)
	struct FDiffStateInfoInt32                         kill_count;                                               // 0x0060(0x0004)
	struct FDiffStateInfoInt32                         Damages;                                                  // 0x0064(0x0004)
	struct FDiffStateInfoBool                          is_running;                                               // 0x0068(0x0001)
	struct FDiffStateInfoBool                          is_aiming;                                                // 0x0069(0x0001)
	struct FDiffStateInfoBool                          is_left_probe;                                            // 0x006A(0x0001)
	struct FDiffStateInfoBool                          is_right_probe;                                           // 0x006B(0x0001)
	struct FDiffStateInfoBool                          is_floating;                                              // 0x006C(0x0001)
	struct FDiffStateInfoBool                          is_diving;                                                // 0x006D(0x0001)
	struct FDiffStateInfoBool                          is_vehicle_probe;                                         // 0x006E(0x0001)
	struct FDiffStateInfoBool                          is_in_vehicle;                                            // 0x006F(0x0001)
	struct FDiffStateInfoBool                          is_firing;                                                // 0x0070(0x0001)
	struct FDiffStateInfoBool                          is_using_skill;                                           // 0x0071(0x0001)
	struct FDiffStateInfoBool                          is_holding;                                               // 0x0072(0x0001)
	struct FDiffStateInfoBool                          is_stun;                                                  // 0x0073(0x0001)
	struct FDiffStateInfoBool                          is_pose_acting;                                           // 0x0074(0x0001)
	struct FDiffStateInfoBool                          is_picking;                                               // 0x0075(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
	struct FDiffStateInfoInt32                         body_state;                                               // 0x0078(0x0004)
	struct FDiffStateInfoInt32                         location_state;                                           // 0x007C(0x0004)
	struct FDiffStateInfoBool                          has_smoke;                                                // 0x0080(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         vehicle_role;                                             // 0x0084(0x0004)
	struct FDiffStateInfoInt32                         player_type;                                              // 0x0088(0x0004)
	struct FDiffStateInfoInt32                         revival_count;                                            // 0x008C(0x0004)
	struct FDiffAIAttributes                           Attributes;                                               // 0x0090(0x0030)
	struct FDiffStateInfoInt32                         using_skill_id;                                           // 0x00C0(0x0004)
	struct FDiffStateInfoBool                          is_lost_connection;                                       // 0x00C4(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         ai_kill_count;                                            // 0x00C8(0x0004)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FDiffStateInfoUInt64                        pawn_states;                                              // 0x00D0(0x0008)
	struct FDiffStateInfoInt32                         assist_count;                                             // 0x00D8(0x0004)
	struct FDiffStateInfoBool                          is_be_spectated;                                          // 0x00DC(0x0001)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         parallel_world_id;                                        // 0x00E0(0x0004)
	struct FDiffStateInfoUInt32                        related_id;                                               // 0x00E4(0x0004)
	struct FDiffStateInfoBool                          has_gone;                                                 // 0x00E8(0x0001)
	struct FDiffStateInfoBool                          in_afk;                                                   // 0x00E9(0x0001)
	unsigned char                                      UnknownData06[0x2];                                       // 0x00EA(0x0002) MISSED OFFSET
	struct FDiffStateInfoInt32                         emote_id;                                                 // 0x00EC(0x0004)
};

// ScriptStruct AI.DiffCameraState
// 0x0028 (0x0038 - 0x0010)
struct FDiffCameraState : public FDiffStateInfoBase
{
	struct FDiffStateInfoVector                        Position;                                                 // 0x0010(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x001C(0x000C)
	struct FDiffStateInfoVector                        view_position;                                            // 0x0028(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIWeaponStateInfo
// 0x0028 (0x0038 - 0x0010)
struct FDiffAIWeaponStateInfo : public FDiffStateInfoBase
{
	uint32_t                                           slot_id;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoInt32                         Category;                                                 // 0x0014(0x0004)
	struct FDiffStateInfoInt32                         Type;                                                     // 0x0018(0x0004)
	struct FDiffStateInfoInt32                         Bullet;                                                   // 0x001C(0x0004)
	struct FDiffStateInfoFloat                         remain_reloading;                                         // 0x0020(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<int>                                        attachments;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerWeapon
// 0x0020 (0x0030 - 0x0010)
struct FDiffAIPlayerWeapon : public FDiffStateInfoBase
{
	TArray<struct FDiffAIWeaponStateInfo>              player_weapon;                                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIBackpackItem
// 0x0010 (0x0020 - 0x0010)
struct FDiffAIBackpackItem : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Category;                                                 // 0x0010(0x0004)
	uint32_t                                           ID;                                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoUInt32                        Count;                                                    // 0x0018(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffPlayerBackpack
// 0x0020 (0x0030 - 0x0010)
struct FDiffPlayerBackpack : public FDiffStateInfoBase
{
	TArray<struct FDiffAIBackpackItem>                 backpack_item;                                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIEquipmentInfo
// 0x0010 (0x0020 - 0x0010)
struct FDiffAIEquipmentInfo : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Category;                                                 // 0x0010(0x0004)
	uint32_t                                           ID;                                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoFloat                         Durability;                                               // 0x0018(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIPlayerEquipment
// 0x0020 (0x0030 - 0x0010)
struct FDiffAIPlayerEquipment : public FDiffStateInfoBase
{
	TArray<struct FDiffAIEquipmentInfo>                equipment_item;                                           // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffProgressBarState
// 0x0008 (0x0018 - 0x0010)
struct FDiffProgressBarState : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Type;                                                     // 0x0010(0x0004)
	struct FDiffStateInfoFloat                         remain_time;                                              // 0x0014(0x0004)
};

// ScriptStruct AI.DiffAINearbyPlayer
// 0x0150 (0x0160 - 0x0010)
struct FDiffAINearbyPlayer : public FDiffStateInfoBase
{
	struct FDiffAIPlayerState                          State;                                                    // 0x0010(0x00F0)
	struct FDiffAIPlayerWeapon                         Weapon;                                                   // 0x0100(0x0030)
	struct FDiffAIPlayerEquipment                      equipment;                                                // 0x0130(0x0030)
};

// ScriptStruct AI.DiffAINearbyPlayers
// 0x0020 (0x0030 - 0x0010)
struct FDiffAINearbyPlayers : public FDiffStateInfoBase
{
	TArray<struct FDiffAINearbyPlayer>                 Players;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffItemStateData
// 0x0030 (0x0040 - 0x0010)
struct FDiffItemStateData : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Type;                                                     // 0x0010(0x0004)
	struct FDiffStateInfoInt32                         Category;                                                 // 0x0014(0x0004)
	struct FDiffStateInfoUInt32                        ID;                                                       // 0x0018(0x0004)
	int                                                UID;                                                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0020(0x000C)
	struct FDiffStateInfoFloat                         Durability;                                               // 0x002C(0x0004)
	struct FDiffStateInfoUInt32                        player_id;                                                // 0x0030(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FDiffStateInfoUInt64                        unique_id;                                                // 0x0038(0x0008)
};

// ScriptStruct AI.DiffItemStateDatas
// 0x0020 (0x0030 - 0x0010)
struct FDiffItemStateDatas : public FDiffStateInfoBase
{
	TArray<struct FDiffItemStateData>                  Items;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffSafetyAreaState
// 0x0030 (0x0040 - 0x0010)
struct FDiffSafetyAreaState : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         State;                                                    // 0x0010(0x0004)
	struct FDiffStateInfoVector                        Center;                                                   // 0x0014(0x000C)
	struct FDiffStateInfoFloat                         Radius;                                                   // 0x0020(0x0004)
	struct FDiffStateInfoVector                        next_center;                                              // 0x0024(0x000C)
	struct FDiffStateInfoFloat                         next_radius;                                              // 0x0030(0x0004)
	struct FDiffStateInfoInt32                         Time;                                                     // 0x0034(0x0004)
	struct FDiffStateInfoInt32                         total_time;                                               // 0x0038(0x0004)
	struct FDiffStateInfoInt32                         circle_index;                                             // 0x003C(0x0004)
};

// ScriptStruct AI.DiffAIGameState
// 0x0040 (0x0050 - 0x0010)
struct FDiffAIGameState : public FDiffStateInfoBase
{
	struct FDiffStateInfoBool                          is_over;                                                  // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         alive_player_count;                                       // 0x0014(0x0004)
	struct FDiffStateInfoInt32                         Stage;                                                    // 0x0018(0x0004)
	struct FDiffStateInfoUInt32                        mode_type;                                                // 0x001C(0x0004)
	struct FDiffStateInfoUInt32                        mode_map;                                                 // 0x0020(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     game_ds_version;                                          // 0x0028(0x0010) (ZeroConstructor)
	struct FDiffStateInfoInt32                         zone_id;                                                  // 0x0038(0x0004)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FDiffStateInfoUInt64                        left_time;                                                // 0x0040(0x0008)
	struct FDiffStateInfoUInt64                        stage_time;                                               // 0x0048(0x0008)
};

// ScriptStruct AI.DiffRedZoneState
// 0x0018 (0x0028 - 0x0010)
struct FDiffRedZoneState : public FDiffStateInfoBase
{
	struct FDiffStateInfoVector                        Center;                                                   // 0x0010(0x000C)
	struct FDiffStateInfoFloat                         Radius;                                                   // 0x001C(0x0004)
	struct FDiffStateInfoFloat                         remain_time;                                              // 0x0020(0x0004)
	struct FDiffStateInfoFloat                         start_time;                                               // 0x0024(0x0004)
};

// ScriptStruct AI.DiffVehicleState
// 0x0080 (0x0090 - 0x0010)
struct FDiffVehicleState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0014(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0020(0x000C)
	struct FDiffStateInfoFloat                         HP;                                                       // 0x002C(0x0004)
	struct FDiffStateInfoFloat                         gas;                                                      // 0x0030(0x0004)
	struct FDiffStateInfoVector                        Speed;                                                    // 0x0034(0x000C)
	struct FDiffStateInfoUInt32                        damaged_num;                                              // 0x0040(0x0004)
	struct FDiffStateInfoUInt32                        Category;                                                 // 0x0044(0x0004)
	struct FDiffStateInfoBool                          is_reverse;                                               // 0x0048(0x0001)
	struct FDiffStateInfoBool                          has_player;                                               // 0x0049(0x0001)
	struct FDiffStateInfoBool                          is_full;                                                  // 0x004A(0x0001)
	unsigned char                                      UnknownData00[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FDiffCameraState                            Camera;                                                   // 0x0050(0x0038)
	struct FDiffStateInfoInt32                         location_state;                                           // 0x0088(0x0004)
	struct FDiffStateInfoBool                          is_attached;                                              // 0x008C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
};

// ScriptStruct AI.DiffVehicleStates
// 0x0020 (0x0030 - 0x0010)
struct FDiffVehicleStates : public FDiffStateInfoBase
{
	TArray<struct FDiffVehicleState>                   vehicle_states;                                           // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffSpecialZoneState
// 0x0038 (0x0048 - 0x0010)
struct FDiffSpecialZoneState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoVector                        Center;                                                   // 0x0014(0x000C)
	struct FDiffStateInfoFloat                         Radius;                                                   // 0x0020(0x0004)
	struct FDiffStateInfoUInt32                        Type;                                                     // 0x0024(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0028(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0034(0x000C)
	struct FDiffStateInfoInt32                         custom_state;                                             // 0x0040(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffSpecialZone
// 0x0020 (0x0030 - 0x0010)
struct FDiffSpecialZone : public FDiffStateInfoBase
{
	TArray<struct FDiffSpecialZoneState>               State;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffDynamicItem
// 0x0028 (0x0038 - 0x0010)
struct FDiffDynamicItem : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Category;                                                 // 0x0010(0x0004)
	uint32_t                                           ID;                                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoVector                        Center;                                                   // 0x0018(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0024(0x000C)
	struct FDiffStateInfoFloat                         Durability;                                               // 0x0030(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffDynamicItemStates
// 0x0020 (0x0030 - 0x0010)
struct FDiffDynamicItemStates : public FDiffStateInfoBase
{
	TArray<struct FDiffDynamicItem>                    dynamic_items;                                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIConfig
// 0x0008
struct FDiffAIConfig
{
	struct FDiffStateInfoInt32                         Level;                                                    // 0x0000(0x0004)
	struct FDiffStateInfoInt32                         Style;                                                    // 0x0004(0x0004)
};

// ScriptStruct AI.DiffMonsterState
// 0x0038 (0x0048 - 0x0010)
struct FDiffMonsterState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoUInt32                        Category;                                                 // 0x0014(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0018(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0024(0x000C)
	struct FDiffStateInfoVector                        Speed;                                                    // 0x0030(0x000C)
	struct FDiffStateInfoFloat                         HP;                                                       // 0x003C(0x0004)
	struct FDiffStateInfoFloat                         hp_max;                                                   // 0x0040(0x0004)
	struct FDiffStateInfoInt32                         using_skill_id;                                           // 0x0044(0x0004)
};

// ScriptStruct AI.DiffMonsterStates
// 0x0020 (0x0030 - 0x0010)
struct FDiffMonsterStates : public FDiffStateInfoBase
{
	TArray<struct FDiffMonsterState>                   States;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfo
// 0x0598 (0x05A8 - 0x0010)
struct FDiffAIStateInfo : public FDiffStateInfoBase
{
	struct FDiffAIPlayerState                          State;                                                    // 0x0010(0x00F0)
	struct FAIHeardSound                               Sound;                                                    // 0x0100(0x0010)
	struct FDiffCameraState                            Camera;                                                   // 0x0110(0x0038)
	struct FDiffAIPlayerWeapon                         Weapon;                                                   // 0x0148(0x0030)
	struct FDiffPlayerBackpack                         BackPack;                                                 // 0x0178(0x0030)
	struct FDiffAIPlayerEquipment                      equipment;                                                // 0x01A8(0x0030)
	struct FDiffProgressBarState                       progress_bar;                                             // 0x01D8(0x0018)
	struct FDiffAINearbyPlayers                        nearby_player;                                            // 0x01F0(0x0030)
	struct FDiffItemStateDatas                         nearby_item;                                              // 0x0220(0x0030)
	TArray<struct FObstacleState>                      nearby_obstacle;                                          // 0x0250(0x0010) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0260(0x0010) (ZeroConstructor)
	struct FDiffSafetyAreaState                        safety_area;                                              // 0x0270(0x0040)
	struct FDiffAIGameState                            Game;                                                     // 0x02B0(0x0050)
	TArray<struct FDoorState>                          nearby_door;                                              // 0x0300(0x0010) (ZeroConstructor)
	struct FDiffRedZoneState                           red_zone;                                                 // 0x0310(0x0028)
	struct FAIDamageSources                            damage_sources;                                           // 0x0338(0x0040)
	uint32_t                                           Key;                                                      // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	TArray<struct FItemStateData>                      nearby_box_item;                                          // 0x0380(0x0010) (ZeroConstructor)
	struct FDiffVehicleState                           vehicle_state;                                            // 0x0390(0x0090)
	struct FDiffVehicleStates                          nearby_vehicles;                                          // 0x0420(0x0030)
	TArray<struct FAIRecipients>                       recipients;                                               // 0x0450(0x0010) (ZeroConstructor)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x0460(0x0028)
	struct FAIBulletHoles                              bullet_holes;                                             // 0x0488(0x0030)
	struct FDiffSpecialZone                            special_zone;                                             // 0x04B8(0x0030)
	struct FDiffDynamicItemStates                      dynamic_item_states;                                      // 0x04E8(0x0030)
	uint32_t                                           ai_style;                                                 // 0x0518(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffAIConfig                               Config;                                                   // 0x051C(0x0008)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	struct FDiffMonsterStates                          monster_states;                                           // 0x0528(0x0030)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x0558(0x0050)
};

// ScriptStruct AI.CacheNearbyItemState
// 0x0020
struct FCacheNearbyItemState
{
	TArray<struct FItemStateData>                      States;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     Position;                                                 // 0x0010(0x000C) (IsPlainOldData)
	bool                                               IsDirty;                                                  // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AI.FlightInfo
// 0x0080 (0x0090 - 0x0010)
struct FFlightInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 start_loc;                                                // 0x0010(0x0020)
	struct FAIStateXYZ                                 end_loc;                                                  // 0x0030(0x0020)
	struct FAIStateXYZ                                 can_jump_loc;                                             // 0x0050(0x0020)
	struct FAIStateXYZ                                 force_jump_loc;                                           // 0x0070(0x0020)
};

// ScriptStruct AI.AirDropBoxState
// 0x0028 (0x0040 - 0x0018)
struct FAirDropBoxState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0020(0x0020)
};

// ScriptStruct AI.PlaneInfo
// 0x0028 (0x0040 - 0x0018)
struct FPlaneInfo : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0020(0x0020)
};

// ScriptStruct AI.GlobalGameState
// 0x01D0 (0x01E0 - 0x0010)
struct FGlobalGameState : public FAIStateInfoBase
{
	struct FFlightInfo                                 flight_info;                                              // 0x0010(0x0090)
	TArray<struct FAirDropBoxState>                    air_drop_box_states;                                      // 0x00A0(0x0010) (ZeroConstructor)
	TArray<struct FSpecialZoneState>                   special_zones;                                            // 0x00B0(0x0010) (ZeroConstructor)
	struct FAIGameState                                Game;                                                     // 0x00C0(0x0060)
	struct FRedZoneState                               red_zone;                                                 // 0x0120(0x0040)
	struct FSafetyAreaState                            safety_area;                                              // 0x0160(0x0070)
	TArray<struct FPlaneInfo>                          airplane_list;                                            // 0x01D0(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAirDropBoxStatesGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffAirDropBoxStatesGeneral : public FDiffStateInfoBase
{
	TArray<struct FAirDropBoxState>                    Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffSpecialZoneGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffSpecialZoneGeneral : public FDiffStateInfoBase
{
	TArray<struct FSpecialZoneState>                   Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffGameScoreDatas
// 0x0020
struct FDiffGameScoreDatas
{
	TArray<struct FTeamScoreData>                      Values;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIGameStateGeneral
// 0x0058 (0x0068 - 0x0010)
struct FDiffAIGameStateGeneral : public FDiffStateInfoBase
{
	bool                                               is_over;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                alive_player_count;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_map;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_type;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     game_ds_version;                                          // 0x0028(0x0010) (ZeroConstructor)
	int                                                zone_id;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	uint64_t                                           left_time;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDiffGameScoreDatas                         team_score_datas;                                         // 0x0048(0x0020)
};

// ScriptStruct AI.DiffPlaneInfoGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffPlaneInfoGeneral : public FDiffStateInfoBase
{
	TArray<struct FPlaneInfo>                          Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalGameStateGeneral
// 0x0238 (0x0248 - 0x0010)
struct FDiffGlobalGameStateGeneral : public FAIStateInfoBase
{
	struct FFlightInfo                                 flight_info;                                              // 0x0010(0x0090)
	struct FDiffAirDropBoxStatesGeneral                air_drop_box_states;                                      // 0x00A0(0x0030)
	struct FDiffSpecialZoneGeneral                     special_zones;                                            // 0x00D0(0x0030)
	struct FDiffAIGameStateGeneral                     Game;                                                     // 0x0100(0x0068)
	struct FRedZoneState                               red_zone;                                                 // 0x0168(0x0040)
	struct FSafetyAreaState                            safety_area;                                              // 0x01A8(0x0070)
	struct FDiffPlaneInfoGeneral                       airplane_list;                                            // 0x0218(0x0030)
};

// ScriptStruct AI.DiffFlightInfo
// 0x0030 (0x0040 - 0x0010)
struct FDiffFlightInfo : public FDiffStateInfoBase
{
	struct FDiffStateInfoVector                        start_loc;                                                // 0x0010(0x000C)
	struct FDiffStateInfoVector                        end_loc;                                                  // 0x001C(0x000C)
	struct FDiffStateInfoVector                        can_jump_loc;                                             // 0x0028(0x000C)
	struct FDiffStateInfoVector                        force_jump_loc;                                           // 0x0034(0x000C)
};

// ScriptStruct AI.DiffAirDropBoxState
// 0x0018 (0x0028 - 0x0010)
struct FDiffAirDropBoxState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoInt32                         Type;                                                     // 0x0014(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0018(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAirDropBoxStates
// 0x0020 (0x0030 - 0x0010)
struct FDiffAirDropBoxStates : public FDiffStateInfoBase
{
	TArray<struct FDiffAirDropBoxState>                States;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalGameState
// 0x0158 (0x0168 - 0x0010)
struct FDiffGlobalGameState : public FAIStateInfoBase
{
	struct FDiffFlightInfo                             flight_info;                                              // 0x0010(0x0040)
	struct FDiffAirDropBoxStates                       air_drop_box_states;                                      // 0x0050(0x0030)
	struct FDiffSpecialZone                            special_zones;                                            // 0x0080(0x0030)
	struct FDiffAIGameState                            Game;                                                     // 0x00B0(0x0050)
	struct FDiffRedZoneState                           red_zone;                                                 // 0x0100(0x0028)
	struct FDiffSafetyAreaState                        safety_area;                                              // 0x0128(0x0040)
};

// ScriptStruct AI.DiffUniqueStateInfo
// 0x0008 (0x0018 - 0x0010)
struct FDiffUniqueStateInfo : public FDiffStateInfoBase
{
	uint64_t                                           diff_mark_id;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffAIAttributesGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffAIAttributesGeneral : public FDiffStateInfoBase
{
	TArray<struct FAIAttribute>                        Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerStateGeneral
// 0x0168 (0x0178 - 0x0010)
struct FDiffAIPlayerStateGeneral : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	uint64_t                                           unique_id;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                expect_delivery_num;                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                remain_delivery_num;                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           actor_id;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_id;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0030(0x0020)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0050(0x0020)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0070(0x0020)
	float                                              HP;                                                       // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              dying_hp;                                                 // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              oxygen;                                                   // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                active_weapon_slot;                                       // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                weapon_status;                                            // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_switching;                                             // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	int                                                alive_state;                                              // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_count;                                               // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                assist_count;                                             // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                death_count;                                              // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damages;                                                  // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           pawn_states;                                              // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               is_running;                                               // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_aiming;                                                // 0x00C9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_left_probe;                                            // 0x00CA(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_right_probe;                                           // 0x00CB(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_floating;                                              // 0x00CC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_diving;                                                // 0x00CD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_vehicle_probe;                                         // 0x00CE(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_in_vehicle;                                            // 0x00CF(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_firing;                                                // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_using_skill;                                           // 0x00D1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00D2(0x0002) MISSED OFFSET
	int                                                using_skill_id;                                           // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skill_phase_index;                                        // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_holding;                                               // 0x00DC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_stun;                                                  // 0x00DD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_pose_acting;                                           // 0x00DE(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_picking;                                               // 0x00DF(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_weapon_near_wall;                                      // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	int                                                body_state;                                               // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                location_state;                                           // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_smoke;                                                // 0x00EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	int                                                vehicle_role;                                             // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                player_type;                                              // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_delivery_pool;                                         // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	int                                                ai_level;                                                 // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_move_has_collision;                                    // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_lost_connection;                                       // 0x0101(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0102(0x0002) MISSED OFFSET
	int                                                revival_count;                                            // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              rating_score;                                             // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              real_hidden_score;                                        // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                zone_id;                                                  // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_invincible;                                            // 0x0114(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	struct FDiffAIAttributesGeneral                    Attributes;                                               // 0x0118(0x0030)
	int                                                ai_kill_count;                                            // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_shoveling;                                             // 0x014C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x014D(0x0003) MISSED OFFSET
	uint32_t                                           parachute_state;                                          // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           plane_id;                                                 // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                parallel_world_id;                                        // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_be_spectated;                                          // 0x015C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x015D(0x0003) MISSED OFFSET
	int                                                gender;                                                   // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           related_id;                                               // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_gone;                                                 // 0x0168(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_afk;                                                   // 0x0169(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x016A(0x0002) MISSED OFFSET
	int                                                emote_id;                                                 // 0x016C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               can_parachute_jump;                                       // 0x0170(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
};

// ScriptStruct AI.DiffAIWeaponStateInfoGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffAIWeaponStateInfoGeneral : public FDiffStateInfoBase
{
	TArray<struct FAIWeaponStateInfo>                  Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerWeaponGeneral
// 0x0030 (0x0040 - 0x0010)
struct FDiffAIPlayerWeaponGeneral : public FDiffStateInfoBase
{
	struct FDiffAIWeaponStateInfoGeneral               player_weapon;                                            // 0x0010(0x0030)
};

// ScriptStruct AI.DiffAIBackpackItemGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffAIBackpackItemGeneral : public FDiffStateInfoBase
{
	TArray<struct FAIBackpackItem>                     Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerBackpackGeneral
// 0x0030 (0x0040 - 0x0010)
struct FDiffAIPlayerBackpackGeneral : public FDiffStateInfoBase
{
	struct FDiffAIBackpackItemGeneral                  backpack_item;                                            // 0x0010(0x0030)
};

// ScriptStruct AI.DiffAIEquipmentInfoGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffAIEquipmentInfoGeneral : public FDiffStateInfoBase
{
	TArray<struct FAIEquipmentInfo>                    Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerEquipmentGeneral
// 0x0030 (0x0040 - 0x0010)
struct FDiffAIPlayerEquipmentGeneral : public FDiffStateInfoBase
{
	struct FDiffAIEquipmentInfoGeneral                 equipment_item;                                           // 0x0010(0x0030)
};

// ScriptStruct AI.DiffAINearbyPlayerGeneral
// 0x01D8 (0x01F0 - 0x0018)
struct FDiffAINearbyPlayerGeneral : public FDiffUniqueStateInfo
{
	struct FAIPlayerState                              State;                                                    // 0x0018(0x0158)
	struct FDiffAIPlayerWeaponGeneral                  Weapon;                                                   // 0x0170(0x0040)
	struct FDiffAIPlayerEquipmentGeneral               equipment;                                                // 0x01B0(0x0040)
};

// ScriptStruct AI.DiffAINearbyPlayersGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffAINearbyPlayersGeneral : public FDiffStateInfoBase
{
	TArray<struct FDiffAINearbyPlayerGeneral>          Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffItemStateDatasGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffItemStateDatasGeneral : public FDiffStateInfoBase
{
	TArray<struct FItemStateData>                      Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffDoorStateGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffDoorStateGeneral : public FDiffStateInfoBase
{
	TArray<struct FDoorState>                          Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffVehicleStatesGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffVehicleStatesGeneral : public FDiffStateInfoBase
{
	TArray<struct FVehicleState>                       Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffDynamicItemStatesGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffDynamicItemStatesGeneral : public FDiffStateInfoBase
{
	TArray<struct FDynamicItem>                        Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffMonsterStatesGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffMonsterStatesGeneral : public FDiffStateInfoBase
{
	TArray<struct FMonsterState>                       Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfoGeneral
// 0x0898 (0x08B0 - 0x0018)
struct FDiffAIStateInfoGeneral : public FDiffUniqueStateInfo
{
	struct FDiffAIPlayerStateGeneral                   State;                                                    // 0x0018(0x0178)
	struct FAIHeardSound                               Sound;                                                    // 0x0190(0x0010)
	struct FAIDamageSources                            damage_sources;                                           // 0x01A0(0x0040)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x01E0(0x0050)
	struct FCameraState                                Camera;                                                   // 0x0230(0x0070)
	struct FDiffAIPlayerWeaponGeneral                  Weapon;                                                   // 0x02A0(0x0040)
	struct FDiffAIPlayerBackpackGeneral                BackPack;                                                 // 0x02E0(0x0040)
	struct FDeathMatchAIPlayerEquipment                deathmatch_backpack;                                      // 0x0320(0x0028)
	struct FDiffAIPlayerEquipmentGeneral               equipment;                                                // 0x0348(0x0040)
	struct FProgressBarState                           progress_bar;                                             // 0x0388(0x0020)
	struct FDiffAINearbyPlayersGeneral                 nearby_player;                                            // 0x03A8(0x0030)
	struct FDiffItemStateDatasGeneral                  nearby_item;                                              // 0x03D8(0x0030)
	TArray<struct FObstacleState>                      nearby_obstacle;                                          // 0x0408(0x0010) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0418(0x0010) (ZeroConstructor)
	struct FDiffDoorStateGeneral                       nearby_door;                                              // 0x0428(0x0030)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x0458(0x0028)
	struct FSafetyAreaState                            safety_area;                                              // 0x0480(0x0070)
	struct FRedZoneState                               red_zone;                                                 // 0x04F0(0x0040)
	struct FAIGameState                                Game;                                                     // 0x0530(0x0060)
	uint32_t                                           Key;                                                      // 0x0590(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           deliver_target_id;                                        // 0x0594(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVehicleState                               vehicle_state;                                            // 0x0598(0x0138)
	struct FDiffVehicleStatesGeneral                   nearby_vehicles;                                          // 0x06D0(0x0030)
	struct FAIBulletHoles                              bullet_holes;                                             // 0x0700(0x0030)
	TArray<struct FAIRecipients>                       recipients;                                               // 0x0730(0x0010) (ZeroConstructor)
	struct FDiffSpecialZoneGeneral                     special_zones;                                            // 0x0740(0x0030)
	struct FDiffDynamicItemStatesGeneral               dynamic_items;                                            // 0x0770(0x0030)
	uint32_t                                           ai_style;                                                 // 0x07A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07A4(0x0004) MISSED OFFSET
	struct FAIStateConfig                              Config;                                                   // 0x07A8(0x0018)
	struct FDiffMonsterStatesGeneral                   monster_states;                                           // 0x07C0(0x0030)
	struct FChatMsgInfo                                chatmsg_info;                                             // 0x07F0(0x0048)
	struct FSignMsgInfo                                signmsg_info;                                             // 0x0838(0x0038)
	struct FMapMarkInfo                                mapmark_info;                                             // 0x0870(0x0040)
};

// ScriptStruct AI.DiffAllPlayerInfoGeneral
// 0x0048 (0x0058 - 0x0010)
struct FDiffAllPlayerInfoGeneral : public FAIStateInfoBase
{
	uint32_t                                           Key;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FAIStateInfo>                        AllAIStateInfo;                                           // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FDiffAIStateInfoGeneral>             AllDiffAIStateInfo;                                       // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FAIStateInfo>                        DebugAllAIStateInfo;                                      // 0x0038(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllPlayerInfo
// 0x03A8 (0x03B8 - 0x0010)
struct FDiffAllPlayerInfo : public FAIStateInfoBase
{
	TArray<struct FDiffAIStateInfo>                    diff_states;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FAIStateInfo>                        State;                                                    // 0x0020(0x0010) (ZeroConstructor)
	struct FGlobalGameState                            global_state;                                             // 0x0030(0x01E0)
	struct FDiffGlobalGameState                        diff_global_state;                                        // 0x0210(0x0168)
	TArray<struct FAIStateInfo>                        global_player_states;                                     // 0x0378(0x0010) (ZeroConstructor)
	TArray<struct FDiffAIStateInfo>                    global_player_diff_states;                                // 0x0388(0x0010) (ZeroConstructor)
	TArray<struct FAIStateInfo>                        in_pool_states;                                           // 0x0398(0x0010) (ZeroConstructor)
	TArray<struct FDiffAIStateInfo>                    in_pool_diff_states;                                      // 0x03A8(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIPlayerStateBaseMod
// 0x0110 (0x0120 - 0x0010)
struct FAIPlayerStateBaseMod : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	uint64_t                                           unique_id;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           actor_id;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_id;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0028(0x0020)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0048(0x0020)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0068(0x0020)
	float                                              HP;                                                       // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              dying_hp;                                                 // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              oxygen;                                                   // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                active_weapon_slot;                                       // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                weapon_status;                                            // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_switching;                                             // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                alive_state;                                              // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_count;                                               // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                assist_count;                                             // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damages;                                                  // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	uint64_t                                           pawn_states;                                              // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               is_running;                                               // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_aiming;                                                // 0x00C1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_left_probe;                                            // 0x00C2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_right_probe;                                           // 0x00C3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_floating;                                              // 0x00C4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_firing;                                                // 0x00C5(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_using_skill;                                           // 0x00C6(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00C7(0x0001) MISSED OFFSET
	int                                                using_skill_id;                                           // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skill_phase_index;                                        // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_holding;                                               // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_stun;                                                  // 0x00D1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_pose_acting;                                           // 0x00D2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_picking;                                               // 0x00D3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_weapon_near_wall;                                      // 0x00D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	int                                                body_state;                                               // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                location_state;                                           // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_smoke;                                                // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	int                                                player_type;                                              // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ai_level;                                                 // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_move_has_collision;                                    // 0x00EC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_lost_connection;                                       // 0x00ED(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x00EE(0x0002) MISSED OFFSET
	float                                              rating_score;                                             // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              real_hidden_score;                                        // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                zone_id;                                                  // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_delivery_pool;                                         // 0x00FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	TArray<struct FAIAttribute>                        Attributes;                                               // 0x0100(0x0010) (ZeroConstructor)
	int                                                ai_kill_count;                                            // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                gender;                                                   // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_gone;                                                 // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_afk;                                                   // 0x0119(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x011A(0x0002) MISSED OFFSET
	int                                                emote_id;                                                 // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AINearbyPlayerBaseMod
// 0x0140 (0x0158 - 0x0018)
struct FAINearbyPlayerBaseMod : public FUniqueStateInfo
{
	struct FAIPlayerStateBaseMod                       State;                                                    // 0x0018(0x0120)
	struct FAIPlayerWeapon                             Weapon;                                                   // 0x0138(0x0010)
	struct FAIPlayerEquipment                          equipment;                                                // 0x0148(0x0010)
};

// ScriptStruct AI.AIGameStateBaseMod
// 0x0040 (0x0050 - 0x0010)
struct FAIGameStateBaseMod : public FAIStateInfoBase
{
	bool                                               is_over;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                alive_player_count;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_map;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_type;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     game_ds_version;                                          // 0x0028(0x0010) (ZeroConstructor)
	int                                                zone_id;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	uint64_t                                           left_time;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           stage_time;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DamageRate
// 0x0008 (0x0018 - 0x0010)
struct FDamageRate : public FAIStateInfoBase
{
	float                                              HP;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              rate;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DamageRateInfo
// 0x0028 (0x0038 - 0x0010)
struct FDamageRateInfo : public FAIStateInfoBase
{
	TArray<struct FDamageRate>                         damage_rate_map;                                          // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FDamageRate>                         revive_damage_rate_map;                                   // 0x0020(0x0010) (ZeroConstructor)
	float                                              near_death_damage_rate;                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIStateInfoBaseMod
// 0x04B8 (0x04D0 - 0x0018)
struct FAIStateInfoBaseMod : public FUniqueStateInfo
{
	struct FAIPlayerStateBaseMod                       State;                                                    // 0x0018(0x0120)
	struct FAIHeardSound                               Sound;                                                    // 0x0138(0x0010)
	struct FAIDamageSources                            damage_sources;                                           // 0x0148(0x0040)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x0188(0x0050)
	struct FCameraState                                Camera;                                                   // 0x01D8(0x0070)
	struct FAIPlayerWeapon                             Weapon;                                                   // 0x0248(0x0010)
	struct FAIPlayerBackpack                           BackPack;                                                 // 0x0258(0x0010)
	struct FAIPlayerEquipment                          equipment;                                                // 0x0268(0x0010)
	struct FProgressBarState                           progress_bar;                                             // 0x0278(0x0020)
	TArray<struct FAINearbyPlayerBaseMod>              nearby_player;                                            // 0x0298(0x0010) (ZeroConstructor)
	TArray<struct FItemStateData>                      nearby_item;                                              // 0x02A8(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_item_index;                                        // 0x02B8(0x0010) (ZeroConstructor)
	TArray<struct FObstacleState>                      nearby_obstacle;                                          // 0x02C8(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_obstacle_index;                                    // 0x02D8(0x0010) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x02E8(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_thrown_index;                                      // 0x02F8(0x0010) (ZeroConstructor)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x0308(0x0028)
	struct FAIGameStateBaseMod                         Game;                                                     // 0x0330(0x0050)
	uint32_t                                           Key;                                                      // 0x0380(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	struct FAIBulletHoles                              bullet_holes;                                             // 0x0388(0x0030)
	uint32_t                                           ai_style;                                                 // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	struct FAIStateConfig                              Config;                                                   // 0x03C0(0x0018)
	struct FDamageRateInfo                             damage_rate_info;                                         // 0x03D8(0x0038)
	struct FChatMsgInfo                                chatmsg_info;                                             // 0x0410(0x0048)
	struct FSignMsgInfo                                signmsg_info;                                             // 0x0458(0x0038)
	struct FMapMarkInfo                                mapmark_info;                                             // 0x0490(0x0040)
};

// ScriptStruct AI.DiffAIPlayerStateBaseModGeneral
// 0x0130 (0x0140 - 0x0010)
struct FDiffAIPlayerStateBaseModGeneral : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	uint64_t                                           unique_id;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           actor_id;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_id;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0028(0x0020)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0048(0x0020)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0068(0x0020)
	float                                              HP;                                                       // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              dying_hp;                                                 // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              oxygen;                                                   // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                active_weapon_slot;                                       // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                weapon_status;                                            // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_switching;                                             // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                alive_state;                                              // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_count;                                               // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                assist_count;                                             // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damages;                                                  // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	uint64_t                                           pawn_states;                                              // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               is_running;                                               // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_aiming;                                                // 0x00C1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_left_probe;                                            // 0x00C2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_right_probe;                                           // 0x00C3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_floating;                                              // 0x00C4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_firing;                                                // 0x00C5(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_using_skill;                                           // 0x00C6(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00C7(0x0001) MISSED OFFSET
	int                                                using_skill_id;                                           // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skill_phase_index;                                        // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_holding;                                               // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_stun;                                                  // 0x00D1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_pose_acting;                                           // 0x00D2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_picking;                                               // 0x00D3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_weapon_near_wall;                                      // 0x00D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	int                                                body_state;                                               // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                location_state;                                           // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_smoke;                                                // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	int                                                player_type;                                              // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ai_level;                                                 // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_move_has_collision;                                    // 0x00EC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_lost_connection;                                       // 0x00ED(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x00EE(0x0002) MISSED OFFSET
	float                                              rating_score;                                             // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              real_hidden_score;                                        // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                zone_id;                                                  // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_delivery_pool;                                         // 0x00FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	struct FDiffAIAttributesGeneral                    Attributes;                                               // 0x0100(0x0030)
	int                                                ai_kill_count;                                            // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                gender;                                                   // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_gone;                                                 // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_afk;                                                   // 0x0139(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x013A(0x0002) MISSED OFFSET
	int                                                emote_id;                                                 // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffAINearbyPlayerBaseModGeneral
// 0x01C0 (0x01D8 - 0x0018)
struct FDiffAINearbyPlayerBaseModGeneral : public FDiffUniqueStateInfo
{
	struct FDiffAIPlayerStateBaseModGeneral            State;                                                    // 0x0018(0x0140)
	struct FDiffAIPlayerWeaponGeneral                  Weapon;                                                   // 0x0158(0x0040)
	struct FDiffAIPlayerEquipmentGeneral               equipment;                                                // 0x0198(0x0040)
};

// ScriptStruct AI.DiffAINearbyPlayersBaseModGeneral
// 0x0060 (0x0070 - 0x0010)
struct FDiffAINearbyPlayersBaseModGeneral : public FDiffStateInfoBase
{
	TMap<uint32_t, struct FDiffAINearbyPlayerBaseModGeneral> Values;                                                   // 0x0010(0x0050) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffObstacleStateGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffObstacleStateGeneral : public FDiffStateInfoBase
{
	TArray<struct FObstacleState>                      Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAINearbyThrownGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffAINearbyThrownGeneral : public FDiffStateInfoBase
{
	TArray<struct FAINearbyThrown>                     Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfoBaseModGeneral
// 0x0628 (0x0640 - 0x0018)
struct FDiffAIStateInfoBaseModGeneral : public FDiffUniqueStateInfo
{
	struct FDiffAIPlayerStateBaseModGeneral            State;                                                    // 0x0018(0x0140)
	struct FAIHeardSound                               Sound;                                                    // 0x0158(0x0010)
	struct FAIDamageSources                            damage_sources;                                           // 0x0168(0x0040)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x01A8(0x0050)
	struct FCameraState                                Camera;                                                   // 0x01F8(0x0070)
	struct FDiffAIPlayerWeaponGeneral                  Weapon;                                                   // 0x0268(0x0040)
	struct FDiffAIPlayerBackpackGeneral                BackPack;                                                 // 0x02A8(0x0040)
	struct FDiffAIPlayerEquipmentGeneral               equipment;                                                // 0x02E8(0x0040)
	struct FProgressBarState                           progress_bar;                                             // 0x0328(0x0020)
	struct FDiffAINearbyPlayersBaseModGeneral          nearby_player;                                            // 0x0348(0x0070)
	struct FDiffItemStateDatasGeneral                  nearby_item;                                              // 0x03B8(0x0030)
	TArray<uint64_t>                                   nearby_item_index;                                        // 0x03E8(0x0010) (ZeroConstructor)
	struct FDiffObstacleStateGeneral                   nearby_obstacle;                                          // 0x03F8(0x0030)
	TArray<uint64_t>                                   nearby_obstacle_index;                                    // 0x0428(0x0010) (ZeroConstructor)
	struct FDiffAINearbyThrownGeneral                  nearby_thrown;                                            // 0x0438(0x0030)
	TArray<uint64_t>                                   nearby_thrown_index;                                      // 0x0468(0x0010) (ZeroConstructor)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x0478(0x0028)
	struct FAIGameStateBaseMod                         Game;                                                     // 0x04A0(0x0050)
	uint32_t                                           Key;                                                      // 0x04F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	struct FAIBulletHoles                              bullet_holes;                                             // 0x04F8(0x0030)
	uint32_t                                           ai_style;                                                 // 0x0528(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x052C(0x0004) MISSED OFFSET
	struct FAIStateConfig                              Config;                                                   // 0x0530(0x0018)
	struct FDamageRateInfo                             damage_rate_info;                                         // 0x0548(0x0038)
	struct FChatMsgInfo                                chatmsg_info;                                             // 0x0580(0x0048)
	struct FSignMsgInfo                                signmsg_info;                                             // 0x05C8(0x0038)
	struct FMapMarkInfo                                mapmark_info;                                             // 0x0600(0x0040)
};

// ScriptStruct AI.DiffAIPlayerStateBaseMod
// 0x00C8 (0x00D8 - 0x0010)
struct FDiffAIPlayerStateBaseMod : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoInt32                         actor_id;                                                 // 0x0014(0x0004)
	struct FDiffStateInfoInt32                         team_id;                                                  // 0x0018(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x001C(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0028(0x000C)
	struct FDiffStateInfoVector                        Speed;                                                    // 0x0034(0x000C)
	struct FDiffStateInfoFloat                         HP;                                                       // 0x0040(0x0004)
	struct FDiffStateInfoFloat                         Energy;                                                   // 0x0044(0x0004)
	struct FDiffStateInfoFloat                         dying_hp;                                                 // 0x0048(0x0004)
	struct FDiffStateInfoFloat                         oxygen;                                                   // 0x004C(0x0004)
	struct FDiffStateInfoInt32                         active_weapon_slot;                                       // 0x0050(0x0004)
	struct FDiffStateInfoInt32                         weapon_status;                                            // 0x0054(0x0004)
	struct FDiffStateInfoBool                          is_switching;                                             // 0x0058(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         alive_state;                                              // 0x005C(0x0004)
	struct FDiffStateInfoInt32                         kill_count;                                               // 0x0060(0x0004)
	struct FDiffStateInfoInt32                         Damages;                                                  // 0x0064(0x0004)
	struct FDiffStateInfoBool                          is_running;                                               // 0x0068(0x0001)
	struct FDiffStateInfoBool                          is_aiming;                                                // 0x0069(0x0001)
	struct FDiffStateInfoBool                          is_left_probe;                                            // 0x006A(0x0001)
	struct FDiffStateInfoBool                          is_right_probe;                                           // 0x006B(0x0001)
	struct FDiffStateInfoBool                          is_floating;                                              // 0x006C(0x0001)
	struct FDiffStateInfoBool                          is_firing;                                                // 0x006D(0x0001)
	struct FDiffStateInfoBool                          is_using_skill;                                           // 0x006E(0x0001)
	struct FDiffStateInfoBool                          is_holding;                                               // 0x006F(0x0001)
	struct FDiffStateInfoBool                          is_stun;                                                  // 0x0070(0x0001)
	struct FDiffStateInfoBool                          is_pose_acting;                                           // 0x0071(0x0001)
	struct FDiffStateInfoBool                          is_picking;                                               // 0x0072(0x0001)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0073(0x0001) MISSED OFFSET
	struct FDiffStateInfoInt32                         body_state;                                               // 0x0074(0x0004)
	struct FDiffStateInfoInt32                         location_state;                                           // 0x0078(0x0004)
	struct FDiffStateInfoBool                          has_smoke;                                                // 0x007C(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         player_type;                                              // 0x0080(0x0004)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FDiffAIAttributes                           Attributes;                                               // 0x0088(0x0030)
	struct FDiffStateInfoInt32                         using_skill_id;                                           // 0x00B8(0x0004)
	struct FDiffStateInfoBool                          is_lost_connection;                                       // 0x00BC(0x0001)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         ai_kill_count;                                            // 0x00C0(0x0004)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FDiffStateInfoUInt64                        pawn_states;                                              // 0x00C8(0x0008)
	struct FDiffStateInfoInt32                         assist_count;                                             // 0x00D0(0x0004)
	struct FDiffStateInfoBool                          in_delivery_pool;                                         // 0x00D4(0x0001)
	struct FDiffStateInfoBool                          has_gone;                                                 // 0x00D5(0x0001)
	struct FDiffStateInfoBool                          in_afk;                                                   // 0x00D6(0x0001)
	unsigned char                                      UnknownData06[0x1];                                       // 0x00D7(0x0001) MISSED OFFSET
};

// ScriptStruct AI.DiffAINearbyPlayerBaseMod
// 0x0138 (0x0150 - 0x0018)
struct FDiffAINearbyPlayerBaseMod : public FDiffUniqueStateInfo
{
	struct FDiffAIPlayerStateBaseMod                   State;                                                    // 0x0018(0x00D8)
	struct FDiffAIPlayerWeapon                         Weapon;                                                   // 0x00F0(0x0030)
	struct FDiffAIPlayerEquipment                      equipment;                                                // 0x0120(0x0030)
};

// ScriptStruct AI.DiffAINearbyPlayersBaseMod
// 0x0060 (0x0070 - 0x0010)
struct FDiffAINearbyPlayersBaseMod : public FDiffStateInfoBase
{
	TMap<uint32_t, struct FDiffAINearbyPlayerBaseMod>  Players;                                                  // 0x0010(0x0050) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfoBaseMod
// 0x0418 (0x0428 - 0x0010)
struct FDiffAIStateInfoBaseMod : public FDiffStateInfoBase
{
	struct FDiffAIPlayerStateBaseMod                   State;                                                    // 0x0010(0x00D8)
	struct FAIHeardSound                               Sound;                                                    // 0x00E8(0x0010)
	struct FDiffCameraState                            Camera;                                                   // 0x00F8(0x0038)
	struct FDiffAIPlayerWeapon                         Weapon;                                                   // 0x0130(0x0030)
	struct FDiffPlayerBackpack                         BackPack;                                                 // 0x0160(0x0030)
	struct FDiffAIPlayerEquipment                      equipment;                                                // 0x0190(0x0030)
	struct FDiffProgressBarState                       progress_bar;                                             // 0x01C0(0x0018)
	struct FDiffAINearbyPlayersBaseMod                 nearby_player;                                            // 0x01D8(0x0070)
	struct FDiffItemStateDatas                         nearby_item;                                              // 0x0248(0x0030)
	TArray<uint64_t>                                   nearby_item_index;                                        // 0x0278(0x0010) (ZeroConstructor)
	TArray<struct FObstacleState>                      nearby_obstacle;                                          // 0x0288(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_obstacle_index;                                    // 0x0298(0x0010) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x02A8(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_thrown_index;                                      // 0x02B8(0x0010) (ZeroConstructor)
	struct FDiffAIGameState                            Game;                                                     // 0x02C8(0x0050)
	struct FAIDamageSources                            damage_sources;                                           // 0x0318(0x0040)
	uint32_t                                           Key;                                                      // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	TArray<struct FItemStateData>                      nearby_box_item;                                          // 0x0360(0x0010) (ZeroConstructor)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x0370(0x0028)
	struct FAIBulletHoles                              bullet_holes;                                             // 0x0398(0x0030)
	uint32_t                                           ai_style;                                                 // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffAIConfig                               Config;                                                   // 0x03CC(0x0008)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x03D8(0x0050)
};

// ScriptStruct AI.AIPlayerStateBRBase
// 0x0030 (0x0040 - 0x0010)
struct FAIPlayerStateBRBase : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                expect_delivery_num;                                      // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                remain_delivery_num;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_diving;                                                // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_vehicle_probe;                                         // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_in_vehicle;                                            // 0x001E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	int                                                vehicle_role;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                revival_count;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           parachute_state;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           plane_id;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                parallel_world_id;                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_be_spectated;                                          // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	uint32_t                                           related_id;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               can_parachute_jump;                                       // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct AI.AINearbyPlayerBRBase
// 0x0040 (0x0058 - 0x0018)
struct FAINearbyPlayerBRBase : public FUniqueStateInfo
{
	struct FAIPlayerStateBRBase                        State;                                                    // 0x0018(0x0040)
};

// ScriptStruct AI.AIStateInfoBRBase
// 0x02E0 (0x02F8 - 0x0018)
struct FAIStateInfoBRBase : public FUniqueStateInfo
{
	struct FAIPlayerStateBRBase                        State;                                                    // 0x0018(0x0040)
	TArray<struct FAINearbyPlayerBRBase>               nearby_player;                                            // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FDoorState>                          nearby_door;                                              // 0x0068(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_door_index;                                        // 0x0078(0x0010) (ZeroConstructor)
	struct FSafetyAreaState                            safety_area;                                              // 0x0088(0x0070)
	struct FRedZoneState                               red_zone;                                                 // 0x00F8(0x0040)
	uint32_t                                           deliver_target_id;                                        // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	struct FVehicleState                               vehicle_state;                                            // 0x0140(0x0138)
	TArray<struct FVehicleState>                       nearby_vehicles;                                          // 0x0278(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_vehicles_index;                                    // 0x0288(0x0010) (ZeroConstructor)
	TArray<struct FAIRecipients>                       recipients;                                               // 0x0298(0x0010) (ZeroConstructor)
	TArray<struct FSpecialZoneState>                   special_zones;                                            // 0x02A8(0x0010) (ZeroConstructor)
	TArray<struct FDynamicItem>                        dynamic_items;                                            // 0x02B8(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   dynamic_items_index;                                      // 0x02C8(0x0010) (ZeroConstructor)
	TArray<struct FMonsterState>                       monster_states;                                           // 0x02D8(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   monster_states_index;                                     // 0x02E8(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAINearbyPlayerBRBaseGeneral
// 0x0040 (0x0058 - 0x0018)
struct FDiffAINearbyPlayerBRBaseGeneral : public FDiffUniqueStateInfo
{
	struct FAIPlayerStateBRBase                        State;                                                    // 0x0018(0x0040)
};

// ScriptStruct AI.DiffAINearbyPlayersBRBaseGeneral
// 0x0060 (0x0070 - 0x0010)
struct FDiffAINearbyPlayersBRBaseGeneral : public FDiffStateInfoBase
{
	TMap<uint32_t, struct FDiffAINearbyPlayerBRBaseGeneral> Values;                                                   // 0x0010(0x0050) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfoBRBaseGeneral
// 0x03E0 (0x03F8 - 0x0018)
struct FDiffAIStateInfoBRBaseGeneral : public FDiffUniqueStateInfo
{
	struct FAIPlayerStateBRBase                        State;                                                    // 0x0018(0x0040)
	struct FDiffAINearbyPlayersBRBaseGeneral           nearby_player;                                            // 0x0058(0x0070)
	struct FDiffDoorStateGeneral                       nearby_door;                                              // 0x00C8(0x0030)
	TArray<uint64_t>                                   nearby_door_index;                                        // 0x00F8(0x0010) (ZeroConstructor)
	struct FSafetyAreaState                            safety_area;                                              // 0x0108(0x0070)
	struct FRedZoneState                               red_zone;                                                 // 0x0178(0x0040)
	struct FVehicleState                               vehicle_state;                                            // 0x01B8(0x0138)
	struct FDiffVehicleStatesGeneral                   nearby_vehicles;                                          // 0x02F0(0x0030)
	TArray<uint64_t>                                   nearby_vehicles_index;                                    // 0x0320(0x0010) (ZeroConstructor)
	uint32_t                                           deliver_target_id;                                        // 0x0330(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	TArray<struct FAIRecipients>                       recipients;                                               // 0x0338(0x0010) (ZeroConstructor)
	struct FDiffSpecialZoneGeneral                     special_zones;                                            // 0x0348(0x0030)
	struct FDiffDynamicItemStatesGeneral               dynamic_items;                                            // 0x0378(0x0030)
	TArray<uint64_t>                                   dynamic_items_index;                                      // 0x03A8(0x0010) (ZeroConstructor)
	struct FDiffMonsterStatesGeneral                   monster_states;                                           // 0x03B8(0x0030)
	TArray<uint64_t>                                   monster_states_index;                                     // 0x03E8(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerStateBRBase
// 0x0020 (0x0030 - 0x0010)
struct FDiffAIPlayerStateBRBase : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoBool                          is_diving;                                                // 0x0014(0x0001)
	struct FDiffStateInfoBool                          is_vehicle_probe;                                         // 0x0015(0x0001)
	struct FDiffStateInfoBool                          is_in_vehicle;                                            // 0x0016(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	struct FDiffStateInfoInt32                         vehicle_role;                                             // 0x0018(0x0004)
	struct FDiffStateInfoInt32                         revival_count;                                            // 0x001C(0x0004)
	struct FDiffStateInfoBool                          is_be_spectated;                                          // 0x0020(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         parallel_world_id;                                        // 0x0024(0x0004)
	struct FDiffStateInfoUInt32                        related_id;                                               // 0x0028(0x0004)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAINearbyPlayerBRBase
// 0x0030 (0x0048 - 0x0018)
struct FDiffAINearbyPlayerBRBase : public FDiffUniqueStateInfo
{
	struct FDiffAIPlayerStateBRBase                    State;                                                    // 0x0018(0x0030)
};

// ScriptStruct AI.DiffAINearbyPlayersBRBase
// 0x0060 (0x0070 - 0x0010)
struct FDiffAINearbyPlayersBRBase : public FDiffStateInfoBase
{
	TMap<uint32_t, struct FDiffAINearbyPlayerBRBase>   Players;                                                  // 0x0010(0x0050) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfoBRBase
// 0x0278 (0x0288 - 0x0010)
struct FDiffAIStateInfoBRBase : public FDiffStateInfoBase
{
	struct FDiffAIPlayerStateBRBase                    State;                                                    // 0x0010(0x0030)
	struct FDiffAINearbyPlayersBRBase                  nearby_player;                                            // 0x0040(0x0070)
	struct FDiffSafetyAreaState                        safety_area;                                              // 0x00B0(0x0040)
	TArray<struct FDoorState>                          nearby_door;                                              // 0x00F0(0x0010) (ZeroConstructor)
	struct FDiffRedZoneState                           red_zone;                                                 // 0x0100(0x0028)
	struct FDiffVehicleState                           vehicle_state;                                            // 0x0128(0x0090)
	struct FDiffVehicleStates                          nearby_vehicles;                                          // 0x01B8(0x0030)
	TArray<struct FAIRecipients>                       recipients;                                               // 0x01E8(0x0010) (ZeroConstructor)
	struct FDiffSpecialZone                            special_zone;                                             // 0x01F8(0x0030)
	struct FDiffDynamicItemStates                      dynamic_item_states;                                      // 0x0228(0x0030)
	struct FDiffMonsterStates                          monster_states;                                           // 0x0258(0x0030)
};

// ScriptStruct AI.AIPlayerStateMPBase
// 0x0020 (0x0030 - 0x0010)
struct FAIPlayerStateMPBase : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_invincible;                                            // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_shoveling;                                             // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	int                                                death_count;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              survive_time;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              kd_ratio;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                continue_kill;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                revenge;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                top_spot_end;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIGameStateMPBase
// 0x0010 (0x0020 - 0x0010)
struct FAIGameStateMPBase : public FAIStateInfoBase
{
	TArray<struct FTeamScoreData>                      team_score_datas;                                         // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIStateInfoMPBase
// 0x0050 (0x0068 - 0x0018)
struct FAIStateInfoMPBase : public FUniqueStateInfo
{
	struct FAIPlayerStateMPBase                        State;                                                    // 0x0018(0x0030)
	struct FAIGameStateMPBase                          Game;                                                     // 0x0048(0x0020)
};

// ScriptStruct AI.DiffAIGameStateMPBaseGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffAIGameStateMPBaseGeneral : public FDiffStateInfoBase
{
	struct FDiffGameScoreDatas                         team_score_datas;                                         // 0x0010(0x0020)
};

// ScriptStruct AI.DiffAIStateInfoMPBaseGeneral
// 0x0060 (0x0078 - 0x0018)
struct FDiffAIStateInfoMPBaseGeneral : public FDiffUniqueStateInfo
{
	struct FAIPlayerStateMPBase                        State;                                                    // 0x0018(0x0030)
	struct FDiffAIGameStateMPBaseGeneral               Game;                                                     // 0x0048(0x0030)
};

// ScriptStruct AI.AIStateInfoTeamDeath
// 0x0028 (0x0040 - 0x0018)
struct FAIStateInfoTeamDeath : public FUniqueStateInfo
{
	struct FDeathMatchAIPlayerEquipment                deathmatch_backpack;                                      // 0x0018(0x0028)
};

// ScriptStruct AI.DiffAIStateInfoTeamDeathGeneral
// 0x0028 (0x0040 - 0x0018)
struct FDiffAIStateInfoTeamDeathGeneral : public FDiffUniqueStateInfo
{
	struct FDeathMatchAIPlayerEquipment                deathmatch_backpack;                                      // 0x0018(0x0028)
};

// ScriptStruct AI.WeaponType2Range
// 0x000C
struct FWeaponType2Range
{
	TEnumAsByte<EWeaponTypeNew>                        WeaponType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Range;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NightRange;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.WeaponTypeToRange
// 0x0008
struct FWeaponTypeToRange
{
	TEnumAsByte<EWeaponTypeNew>                        WeaponType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Range;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.WeatherToRange
// 0x0010
struct FWeatherToRange
{
	TArray<struct FWeaponTypeToRange>                  Ranges;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AI.ShapeRangeParam
// 0x000C
struct FShapeRangeParam
{
	float                                              CircleR;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SectorR;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SectorDegree;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.WeaponTypeToRangeWithPawnState
// 0x0058
struct FWeaponTypeToRangeWithPawnState
{
	TEnumAsByte<EWeaponTypeNew>                        WeaponType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TMap<EPawnState, struct FShapeRangeParam>          StateRange;                                               // 0x0008(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct AI.SightFanInfo
// 0x0008
struct FSightFanInfo
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.InTroubleTeleportConfig
// 0x0010
struct FInTroubleTeleportConfig
{
	float                                              SrcCheckRadius;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DstCheckRadius;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           TryFindDstLocNum;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTeleportToLand;                                       // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct AI.AIDistantJudgeNoftify
// 0x0030
struct FAIDistantJudgeNoftify
{
	float                                              RightValue;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SetBBValue;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      NotifyBlackBoardKey;                                      // 0x0008(0x0028) (Edit)
};

// ScriptStruct AI.BPAISenseGrenadeDistanceConfig
// 0x0008
struct FBPAISenseGrenadeDistanceConfig
{
	EAISenseGrenadeType                                GrenadeType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              GrenadeSenseDistance;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AISenseGrenadeClassConfig
// 0x0010
struct FAISenseGrenadeClassConfig
{
	TArray<class UClass*>                              IncludeClassArray;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AI.AISenseGrenadeBBKeyInfo
// 0x0030
struct FAISenseGrenadeBBKeyInfo
{
	EAISenseGrenadeType                                GrenadeType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BBKeyGrenadeActor;                                        // 0x0008(0x0028) (Edit)
};

// ScriptStruct AI.TaskAddItem
// 0x0008
struct FTaskAddItem
{
	int                                                ItemId;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DifficultyTimeConfig
// 0x0008
struct FDifficultyTimeConfig
{
	float                                              WaitTime;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.GeneralRandLocationRetryRule
// 0x000C
struct FGeneralRandLocationRetryRule
{
	float                                              AngleRangeMin;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleRangeMax;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScanStep;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.MobRandLocationRetryRule
// 0x000C
struct FMobRandLocationRetryRule
{
	float                                              AngleRangeMin;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleRangeMax;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RetryTimes;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.LocationRetryRule
// 0x000C
struct FLocationRetryRule
{
	float                                              AngleRangeMin;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleRangeMax;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScanStep;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AITaskNodeThrowGrenadeTargetLocRandomableConfig
// 0x0008
struct FAITaskNodeThrowGrenadeTargetLocRandomableConfig
{
	float                                              RandomRange;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RandomTimes;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.FindBuildingRatingConfig
// 0x0008
struct FFindBuildingRatingConfig
{
	int                                                Rating;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SearchRadius;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.CustomDamageEventRow
// 0x00E0 (0x00E8 - 0x0008)
struct FCustomDamageEventRow : public FTableRowBase
{
	bool                                               bProcessedLocally;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FGuid                                       EventID;                                                  // 0x000C(0x0010) (Edit, EditConst, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClientOnly;                                              // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicate;                                               // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyReplicateWhenRelevant;                               // 0x001F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EventTriggerType;                                         // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              TriggerCooldown;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HealthPercentageThreshold;                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerWhenDead;                                         // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EventReactionType;                                        // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	unsigned char                                      UnknownData03[0x28];                                      // 0x002E(0x0028) UNKNOWN PROPERTY: SoftClassProperty AI.CustomDamageEventRow.ActorClassToSpawn
	bool                                               bTriggersGlobalCooldown;                                  // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLockedByGlobalCooldown;                                  // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData05[0x28];                                      // 0x005A(0x0028) UNKNOWN PROPERTY: SoftClassProperty AI.CustomDamageEventRow.OnCooldownActorClassToSpawn
	bool                                               bDestroySpawnedParticlesWithOwner;                        // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FName                                       AttachComponentTag;                                       // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpawnSocketName;                                          // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CustomSpawnTransformTag;                                  // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnAtRandomPointInBoundingBox;                         // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomSpawnRotation;                                  // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MinToSpawn;                                               // 0x00AA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxToSpawn;                                               // 0x00AB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FName                                       ActorSpawnTag;                                            // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       MeshComponentTag;                                         // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MeshInstanceIndex;                                        // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PhysicsAssetProfileName;                                  // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollisionPrimitiveTag;                                    // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
};

// ScriptStruct AI.TriggeredCustomDamageEvent
// 0x00F0
struct FTriggeredCustomDamageEvent
{
	struct FCustomDamageEventRow                       Event;                                                    // 0x0000(0x00E8)
	float                                              TimeTriggered;                                            // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct AI.VehicleDamageInfoContainer
// 0x0010
struct FVehicleDamageInfoContainer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AI.BulletHole
// 0x0018
struct FBulletHole
{
	struct FVector                                     ImpactPoint;                                              // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     SourcePoint;                                              // 0x000C(0x000C) (IsPlainOldData)
};

// ScriptStruct AI.BulletHoleRecordInfo
// 0x0008 (0x0020 - 0x0018)
struct FBulletHoleRecordInfo : public FBulletHole
{
	class APawn*                                       ShootPawn;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.GlobalNearbyInfoBaseMod
// 0x0030 (0x0040 - 0x0010)
struct FGlobalNearbyInfoBaseMod : public FAIStateInfoBase
{
	TArray<struct FItemStateData>                      nearby_item;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FObstacleState>                      nearby_obstacle;                                          // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.GlobalGameStateBaseMod
// 0x0090 (0x00A0 - 0x0010)
struct FGlobalGameStateBaseMod : public FAIStateInfoBase
{
	struct FAIGameStateBaseMod                         Game;                                                     // 0x0010(0x0050)
	struct FGlobalNearbyInfoBaseMod                    global_nearby_info;                                       // 0x0060(0x0040)
};

// ScriptStruct AI.DiffGlobalNearbyInfoBaseMod
// 0x0050 (0x0060 - 0x0010)
struct FDiffGlobalNearbyInfoBaseMod : public FAIStateInfoBase
{
	struct FDiffItemStateDatas                         nearby_item;                                              // 0x0010(0x0030)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FObstacleState>                      nearby_obstacle;                                          // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalGameStateBaseMod
// 0x00B0 (0x00C0 - 0x0010)
struct FDiffGlobalGameStateBaseMod : public FAIStateInfoBase
{
	struct FDiffAIGameState                            Game;                                                     // 0x0010(0x0050)
	struct FDiffGlobalNearbyInfoBaseMod                global_nearby_info;                                       // 0x0060(0x0060)
};

// ScriptStruct AI.DiffAIGameStateBaseModGeneral
// 0x0040 (0x0050 - 0x0010)
struct FDiffAIGameStateBaseModGeneral : public FDiffStateInfoBase
{
	bool                                               is_over;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                alive_player_count;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_map;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_type;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     game_ds_version;                                          // 0x0028(0x0010) (ZeroConstructor)
	int                                                zone_id;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	uint64_t                                           left_time;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           stage_time;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffGlobalNearbyInfoBaseModGeneral
// 0x0090 (0x00A0 - 0x0010)
struct FDiffGlobalNearbyInfoBaseModGeneral : public FAIStateInfoBase
{
	struct FDiffItemStateDatasGeneral                  nearby_item;                                              // 0x0010(0x0030)
	struct FDiffAINearbyThrownGeneral                  nearby_thrown;                                            // 0x0040(0x0030)
	struct FDiffObstacleStateGeneral                   nearby_obstacle;                                          // 0x0070(0x0030)
};

// ScriptStruct AI.DiffGlobalGameStateBaseModGeneral
// 0x00F0 (0x0100 - 0x0010)
struct FDiffGlobalGameStateBaseModGeneral : public FAIStateInfoBase
{
	struct FDiffAIGameStateBaseModGeneral              Game;                                                     // 0x0010(0x0050)
	struct FDiffGlobalNearbyInfoBaseModGeneral         global_nearby_info;                                       // 0x0060(0x00A0)
};

// ScriptStruct AI.DiffListIDMap
// 0x0050
struct FDiffListIDMap
{
	TMap<uint64_t, uint32_t>                           ListIDMap;                                                // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.PropertyNameListIDMap
// 0x0050
struct FPropertyNameListIDMap
{
	TMap<struct FString, struct FDiffListIDMap>        PropertyNameListIDMap;                                    // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllPlayerInfoBaseModGeneral
// 0x0088 (0x0098 - 0x0010)
struct FDiffAllPlayerInfoBaseModGeneral : public FAIStateInfoBase
{
	uint32_t                                           Key;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FAIStateInfoBaseMod>                 AllAIStateInfo;                                           // 0x0018(0x0010) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIStateInfoBaseModGeneral> AllDiffAIStateInfo;                                       // 0x0028(0x0050) (ZeroConstructor)
	TArray<struct FAIStateInfoBaseMod>                 DebugAllAIStateInfo;                                      // 0x0078(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0088(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllPlayerInfoBaseMod
// 0x01C0 (0x01D0 - 0x0010)
struct FDiffAllPlayerInfoBaseMod : public FAIStateInfoBase
{
	TArray<struct FDiffAIStateInfoBaseMod>             diff_states;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FAIStateInfoBaseMod>                 State;                                                    // 0x0020(0x0010) (ZeroConstructor)
	struct FGlobalGameStateBaseMod                     global_state;                                             // 0x0030(0x00A0)
	struct FDiffGlobalGameStateBaseMod                 diff_global_state;                                        // 0x00D0(0x00C0)
	TArray<struct FAIStateInfoBaseMod>                 global_player_states;                                     // 0x0190(0x0010) (ZeroConstructor)
	TArray<struct FDiffAIStateInfoBaseMod>             global_player_diff_states;                                // 0x01A0(0x0010) (ZeroConstructor)
	TArray<struct FAIStateInfoBaseMod>                 in_pool_states;                                           // 0x01B0(0x0010) (ZeroConstructor)
	TArray<struct FDiffAIStateInfoBaseMod>             in_pool_diff_states;                                      // 0x01C0(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.GlobalNearbyInfoBRBase
// 0x0040 (0x0050 - 0x0010)
struct FGlobalNearbyInfoBRBase : public FAIStateInfoBase
{
	TArray<struct FDoorState>                          nearby_door;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FVehicleState>                       nearby_vehicles;                                          // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FDynamicItem>                        dynamic_items;                                            // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FMonsterState>                       monster_states;                                           // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.GlobalGameStateBRBase
// 0x01C0 (0x01D0 - 0x0010)
struct FGlobalGameStateBRBase : public FAIStateInfoBase
{
	struct FFlightInfo                                 flight_info;                                              // 0x0010(0x0090)
	TArray<struct FAirDropBoxState>                    air_drop_box_states;                                      // 0x00A0(0x0010) (ZeroConstructor)
	TArray<struct FSpecialZoneState>                   special_zones;                                            // 0x00B0(0x0010) (ZeroConstructor)
	struct FRedZoneState                               red_zone;                                                 // 0x00C0(0x0040)
	struct FSafetyAreaState                            safety_area;                                              // 0x0100(0x0070)
	TArray<struct FPlaneInfo>                          airplane_list;                                            // 0x0170(0x0010) (ZeroConstructor)
	struct FGlobalNearbyInfoBRBase                     global_nearby_info;                                       // 0x0180(0x0050)
};

// ScriptStruct AI.DiffGlobalGameStateBRBase
// 0x0108 (0x0118 - 0x0010)
struct FDiffGlobalGameStateBRBase : public FAIStateInfoBase
{
	struct FDiffFlightInfo                             flight_info;                                              // 0x0010(0x0040)
	struct FDiffAirDropBoxStates                       air_drop_box_states;                                      // 0x0050(0x0030)
	struct FDiffSpecialZone                            special_zones;                                            // 0x0080(0x0030)
	struct FDiffRedZoneState                           red_zone;                                                 // 0x00B0(0x0028)
	struct FDiffSafetyAreaState                        safety_area;                                              // 0x00D8(0x0040)
};

// ScriptStruct AI.DiffGlobalNearbyInfoBRBaseGeneral
// 0x00C0 (0x00D0 - 0x0010)
struct FDiffGlobalNearbyInfoBRBaseGeneral : public FAIStateInfoBase
{
	struct FDiffDoorStateGeneral                       nearby_door;                                              // 0x0010(0x0030)
	struct FDiffVehicleStatesGeneral                   nearby_vehicles;                                          // 0x0040(0x0030)
	struct FDiffDynamicItemStatesGeneral               dynamic_items;                                            // 0x0070(0x0030)
	struct FDiffMonsterStatesGeneral                   monster_states;                                           // 0x00A0(0x0030)
};

// ScriptStruct AI.DiffGlobalGameStateBRBaseGeneral
// 0x02A0 (0x02B0 - 0x0010)
struct FDiffGlobalGameStateBRBaseGeneral : public FAIStateInfoBase
{
	struct FFlightInfo                                 flight_info;                                              // 0x0010(0x0090)
	struct FDiffAirDropBoxStatesGeneral                air_drop_box_states;                                      // 0x00A0(0x0030)
	struct FDiffSpecialZoneGeneral                     special_zones;                                            // 0x00D0(0x0030)
	struct FRedZoneState                               red_zone;                                                 // 0x0100(0x0040)
	struct FSafetyAreaState                            safety_area;                                              // 0x0140(0x0070)
	struct FDiffPlaneInfoGeneral                       airplane_list;                                            // 0x01B0(0x0030)
	struct FDiffGlobalNearbyInfoBRBaseGeneral          global_nearby_info;                                       // 0x01E0(0x00D0)
};

// ScriptStruct AI.DiffAllPlayerInfoBRBaseGeneral
// 0x0080 (0x0090 - 0x0010)
struct FDiffAllPlayerInfoBRBaseGeneral : public FAIStateInfoBase
{
	TArray<struct FAIStateInfoBRBase>                  AllAIStateInfo;                                           // 0x0010(0x0010) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIStateInfoBRBaseGeneral> AllDiffAIStateInfo;                                       // 0x0020(0x0050) (ZeroConstructor)
	TArray<struct FAIStateInfoBRBase>                  DebugAllAIStateInfo;                                      // 0x0070(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0080(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllPlayerInfoBRBase
// 0x0348 (0x0358 - 0x0010)
struct FDiffAllPlayerInfoBRBase : public FAIStateInfoBase
{
	TArray<struct FDiffAIStateInfoBRBase>              diff_states;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FAIStateInfoBRBase>                  State;                                                    // 0x0020(0x0010) (ZeroConstructor)
	struct FGlobalGameStateBRBase                      global_state;                                             // 0x0030(0x01D0)
	struct FDiffGlobalGameStateBRBase                  diff_global_state;                                        // 0x0200(0x0118)
	TArray<struct FAIStateInfoBRBase>                  global_player_states;                                     // 0x0318(0x0010) (ZeroConstructor)
	TArray<struct FDiffAIStateInfoBRBase>              global_player_diff_states;                                // 0x0328(0x0010) (ZeroConstructor)
	TArray<struct FAIStateInfoBRBase>                  in_pool_states;                                           // 0x0338(0x0010) (ZeroConstructor)
	TArray<struct FDiffAIStateInfoBRBase>              in_pool_diff_states;                                      // 0x0348(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.GlobalGameStateMPBase
// 0x0020 (0x0030 - 0x0010)
struct FGlobalGameStateMPBase : public FDiffStateInfoBase
{
	struct FAIGameStateMPBase                          Game;                                                     // 0x0010(0x0020)
};

// ScriptStruct AI.DiffGlobalGameStateMPBaseGeneral
// 0x0030 (0x0040 - 0x0010)
struct FDiffGlobalGameStateMPBaseGeneral : public FAIStateInfoBase
{
	struct FDiffAIGameStateMPBaseGeneral               Game;                                                     // 0x0010(0x0030)
};

// ScriptStruct AI.DiffAllPlayerInfoMPBaseGeneral
// 0x0080 (0x0090 - 0x0010)
struct FDiffAllPlayerInfoMPBaseGeneral : public FAIStateInfoBase
{
	TArray<struct FAIStateInfoMPBase>                  AllAIStateInfo;                                           // 0x0010(0x0010) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIStateInfoMPBaseGeneral> AllDiffAIStateInfo;                                       // 0x0020(0x0050) (ZeroConstructor)
	TArray<struct FAIStateInfoMPBase>                  DebugAllAIStateInfo;                                      // 0x0070(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0080(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIVehicleStateData
// 0x0080
struct FAIVehicleStateData
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct AI.AIVehicleHatredInfo
// 0x000C
struct FAIVehicleHatredInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTTaskMobOnceMemory
// 0x0004
struct FBTTaskMobOnceMemory
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct AI.ShootingAimConfig
// 0x0014
struct FShootingAimConfig
{
	EAIWeaponShootType                                 WeaponShotType;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AimDeviationScale;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinAimDeviationScale;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RandomShootFreqRange;                                     // 0x000C(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct AI.ShootingAimConfigContainer
// 0x0050
struct FShootingAimConfigContainer
{
	TMap<float, struct FShootingAimConfig>             AimConfig;                                                // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct AI.DifficultyShootingConfig
// 0x0010
struct FDifficultyShootingConfig
{
	EAIWeaponShootType                                 WeaponShotType;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DeviationScale;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RandomShootFreqRange;                                     // 0x0008(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct AI.BTAICheckMaxDistanceFromSpawnPointMemory
// 0x002C
struct FBTAICheckMaxDistanceFromSpawnPointMemory
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FVector                                     SpawnLocation;                                            // 0x0004(0x000C) (IsPlainOldData)
	struct FBox                                        MaxMoveDistanceVolumeBox;                                 // 0x0010(0x001C) (IsPlainOldData)
};

// ScriptStruct AI.BTFlyingChooseEnemyMemory
// 0x000C
struct FBTFlyingChooseEnemyMemory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTMobAddHpMemory
// 0x0001
struct FBTMobAddHpMemory
{
	bool                                               HPBuffAdded;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTMobCheckLoseTargetMemory
// 0x0008
struct FBTMobCheckLoseTargetMemory
{
	bool                                               LastLoseTarget;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LoseTargetElapsedTime;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTMobHearingMemory
// 0x0028
struct FBTMobHearingMemory
{
	struct FNoiseInfo                                  LastChosenNoiseInfo;                                      // 0x0000(0x0024)
	float                                              LockNoiseElapsedTime;                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTMobMoveBlockTimerMemory
// 0x0004
struct FBTMobMoveBlockTimerMemory
{
	float                                              BlockElapsedTime;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTAISenseGrenadeMemory
// 0x0260
struct FBTAISenseGrenadeMemory
{
	TMap<EAISenseGrenadeType, float>                   GrenadeSensedDistance;                                    // 0x0000(0x0050) (ZeroConstructor)
	TMap<EAISenseGrenadeType, float>                   GrenadeSensedDistanceSquared;                             // 0x0050(0x0050) (ZeroConstructor)
	float                                              fMaxSenseDistance;                                        // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x11C];                                     // 0x00A4(0x011C) MISSED OFFSET
	TMap<EAISenseGrenadeType, struct FAISenseGrenadeBBKeyInfo> GrenadeBBKeyInfo;                                         // 0x01C0(0x0050) (ZeroConstructor)
	TMap<class UClass*, EAISenseGrenadeType>           GrenadeClassesMap;                                        // 0x0210(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.BTTaskCrowdMoveMemory
// 0x0078
struct FBTTaskCrowdMoveMemory
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct AI.BTTaskForceIdleMemory
// 0x000C
struct FBTTaskForceIdleMemory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTLaunchMoveSpeedCurve
// 0x0004
struct FBTLaunchMoveSpeedCurve
{
	float                                              DistanceThreshold;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTTaskMobExplodeMemory
// 0x0001
struct FBTTaskMobExplodeMemory
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AI.BTTaskGetNearDeathCharNearbyMemory
// 0x000C
struct FBTTaskGetNearDeathCharNearbyMemory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTTaskMobGetRandomAttackTargetInRadius
// 0x0008
struct FBTTaskMobGetRandomAttackTargetInRadius
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AI.BTTaskGetVehicleNearbyMemory
// 0x000C
struct FBTTaskGetVehicleNearbyMemory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTTaskMoveAroundMemory
// 0x00A0
struct FBTTaskMoveAroundMemory
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
	class AActor*                                      FocusActor;                                               // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0070(0x0030) MISSED OFFSET
};

// ScriptStruct AI.BTTaskRotateToTargetMemory
// 0x0008
struct FBTTaskRotateToTargetMemory
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AI.BTAICharacterCastSkillMemory
// 0x0034
struct FBTAICharacterCastSkillMemory
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FVector                                     FocusLocation;                                            // 0x0004(0x000C) (IsPlainOldData)
	TWeakObjectPtr<class AActor>                       FocusActor;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TossTargetLoc;                                            // 0x0018(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FVector                                     GrenadeThrowStartLoc;                                     // 0x0028(0x000C) (IsPlainOldData)
};

// ScriptStruct AI.BTTaskParachuteJumpBaseMemory
// 0x001C
struct FBTTaskParachuteJumpBaseMemory
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct AI.DebugAIParamConfig
// 0x0018
struct FDebugAIParamConfig
{
	int                                                DistMin;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DistMax;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     NameAndDegree;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIWinnerState
// 0x0008 (0x0018 - 0x0010)
struct FAIWinnerState : public FDiffStateInfoBase
{
	int                                                team_id;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                player_id;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffAINearbyPlayersMPBaseGeneral
// 0x0020 (0x0030 - 0x0010)
struct FDiffAINearbyPlayersMPBaseGeneral : public FDiffStateInfoBase
{
	TArray<struct FAIStateInfoBRBase>                  Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalNearbyInfoBRBase
// 0x00A0 (0x00B0 - 0x0010)
struct FDiffGlobalNearbyInfoBRBase : public FAIStateInfoBase
{
	TArray<struct FDoorState>                          nearby_door;                                              // 0x0010(0x0010) (ZeroConstructor)
	struct FDiffVehicleStates                          nearby_vehicles;                                          // 0x0020(0x0030)
	struct FDiffDynamicItemStates                      dynamic_item_states;                                      // 0x0050(0x0030)
	struct FDiffMonsterStates                          monster_states;                                           // 0x0080(0x0030)
};

}

