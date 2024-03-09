#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Enums
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Enum Addons.ESnowMoveType
enum class ESnowMoveType : uint8_t
{
	ESnowMoveType__None            = 0,
	ESnowMoveType__Idel            = 1,
	ESnowMoveType__Move            = 2,
	ESnowMoveType__Jump            = 3,
	ESnowMoveType__ESnowMoveType_MAX = 4
};


// Enum Addons.EPterosaurSwoopStage
enum class EPterosaurSwoopStage : uint8_t
{
	EPterosaurSwoopStage__ESwoopStage_None = 0,
	EPterosaurSwoopStage__ESwoopStage_Ready = 1,
	EPterosaurSwoopStage__ESwoopStage_DirectionCorrect = 2,
	EPterosaurSwoopStage__ESwoopStage_SwoopMove = 3,
	EPterosaurSwoopStage__ESwoopStage_PreCatch = 4,
	EPterosaurSwoopStage__ESwoopStage_Catch = 5,
	EPterosaurSwoopStage__ESwoopStage_Finish = 6,
	EPterosaurSwoopStage__ESwoopStage_FinishNoCatch = 7,
	EPterosaurSwoopStage__ESwoopStage_FinishNoCatchWithHit = 8,
	EPterosaurSwoopStage__ESwoopStage_MAX = 9
};


// Enum Addons.EInertializationSpace
enum class EInertializationSpace : uint8_t
{
	EInertializationSpace__Default = 0,
	EInertializationSpace__WorldSpace = 1,
	EInertializationSpace__WorldRotation = 2,
	EInertializationSpace__EInertializationSpace_MAX = 3
};


// Enum Addons.EInertializationBoneState
enum class EInertializationBoneState : uint8_t
{
	EInertializationBoneState__Invalid = 0,
	EInertializationBoneState__Valid = 1,
	EInertializationBoneState__Excluded = 2,
	EInertializationBoneState__EInertializationBoneState_MAX = 3
};


// Enum Addons.EInertializationState
enum class EInertializationState : uint8_t
{
	EInertializationState__Inactive = 0,
	EInertializationState__Pending = 1,
	EInertializationState__Active  = 2,
	EInertializationState__EInertializationState_MAX = 3
};


// Enum Addons.EFlyBioVehicleMoveMode
enum class EFlyBioVehicleMoveMode : uint8_t
{
	EFlyBioVehicleMoveMode__EMove_TakingOff = 0,
	EFlyBioVehicleMoveMode__EMove_RegularFlying = 1,
	EFlyBioVehicleMoveMode__EMove_MAX = 2
};


// Enum Addons.ECollectedEventDataEventId
enum class ECollectedEventDataEventId : uint8_t
{
	ECollectedEventDataEventId__GameStatus = 0,
	ECollectedEventDataEventId__StartMatching = 1,
	ECollectedEventDataEventId__PlaneCarrying = 2,
	ECollectedEventDataEventId__PuttingDownCakeFireWorks = 3,
	ECollectedEventDataEventId__RankingScore = 4,
	ECollectedEventDataEventId__TakeDropItem = 5,
	ECollectedEventDataEventId__UsingItem = 6,
	ECollectedEventDataEventId__Falling = 7,
	ECollectedEventDataEventId__Climbing = 8,
	ECollectedEventDataEventId__InFieldOfView = 9,
	ECollectedEventDataEventId__UnderEnermyAttack = 10,
	ECollectedEventDataEventId__TakingDamage = 11,
	ECollectedEventDataEventId__ReducingSignalValue = 12,
	ECollectedEventDataEventId__CircleReducing = 13,
	ECollectedEventDataEventId__CircleChange = 14,
	ECollectedEventDataEventId__Rescue = 15,
	ECollectedEventDataEventId__DrivingVehicle = 16,
	ECollectedEventDataEventId__ReloadingBullet = 17,
	ECollectedEventDataEventId__AirDrop = 18,
	ECollectedEventDataEventId__PlayerPos = 19,
	ECollectedEventDataEventId__WeaponUsage = 20,
	ECollectedEventDataEventId__ItemPackageCreate = 21,
	ECollectedEventDataEventId__ItemAttach = 22,
	ECollectedEventDataEventId__ItemDetach = 23,
	ECollectedEventDataEventId__PlayerInfo = 24,
	ECollectedEventDataEventId__MiniMapShowInfo = 25,
	ECollectedEventDataEventId__Following = 26,
	ECollectedEventDataEventId__MiniMapPinning = 27,
	ECollectedEventDataEventId__Blocking = 28,
	ECollectedEventDataEventId__Dancing = 29,
	ECollectedEventDataEventId__PickingupTombBox = 30,
	ECollectedEventDataEventId__AirAttacking = 31,
	ECollectedEventDataEventId__CurrentWeapon = 32,
	ECollectedEventDataEventId__SceneInfo = 33,
	ECollectedEventDataEventId__TeamInfo = 34,
	ECollectedEventDataEventId__EnteringLeavingTeam = 35,
	ECollectedEventDataEventId__OnOffline = 36,
	ECollectedEventDataEventId__RankList = 37,
	ECollectedEventDataEventId__TextMessage = 38,
	ECollectedEventDataEventId__PawnState = 39,
	ECollectedEventDataEventId__OpenCloseDoor = 40,
	ECollectedEventDataEventId__MicSpeakerState = 41,
	ECollectedEventDataEventId__VehicleState = 42,
	ECollectedEventDataEventId__EnumMax = 43,
	ECollectedEventDataEventId__ECollectedEventDataEventId_MAX = 44
};


// Enum Addons.EDancingState
enum class EDancingState : uint8_t
{
	DancingState_Default           = 0,
	DancingState_PrepareMove       = 1,
	DancingState_DanceMoving       = 2,
	DancingState_EndMove           = 3,
	DancingState_Dancing           = 4,
	DancingState_Battle            = 5,
	DancingState_MAX               = 6
};


// Enum Addons.EEventDataCollectionValues_MicSpeakerState_Speaker
enum class EEventDataCollectionValues_MicSpeakerState_Speaker : uint8_t
{
	EEventDataCollectionValues_MicSpeakerState_Speaker__None = 0,
	EEventDataCollectionValues_MicSpeakerState_Speaker__Lbs = 1,
	EEventDataCollectionValues_MicSpeakerState_Speaker__Team = 2,
	EEventDataCollectionValues_MicSpeakerState_Speaker__EEventDataCollectionValues_MicSpeakerState_MAX = 3
};


// Enum Addons.EEventDataCollectionValues_MicSpeakerState_Mic
enum class EEventDataCollectionValues_MicSpeakerState_Mic : uint8_t
{
	EEventDataCollectionValues_MicSpeakerState_Mic__None = 0,
	EEventDataCollectionValues_MicSpeakerState_Mic__Lbs = 1,
	EEventDataCollectionValues_MicSpeakerState_Mic__Team = 2,
	EEventDataCollectionValues_MicSpeakerState_Mic__KeyLbs = 3,
	EEventDataCollectionValues_MicSpeakerState_Mic__KeyTeam = 4,
	EEventDataCollectionValues_MicSpeakerState_Mic__EEventDataCollectionValues_MicSpeakerState_MAX = 5
};


// Enum Addons.EEventDataCollectionValues_RankList_Type
enum class EEventDataCollectionValues_RankList_Type : uint8_t
{
	EEventDataCollectionValues_RankList_Type__None = 0,
	EEventDataCollectionValues_RankList_Type__Hot = 1,
	EEventDataCollectionValues_RankList_Type__Lucky = 2,
	EEventDataCollectionValues_RankList_Type__EEventDataCollectionValues_RankList_MAX = 3
};


// Enum Addons.EHoverSimulateState
enum class EHoverSimulateState : uint8_t
{
	EHoverSimulateState__Idle      = 0,
	EHoverSimulateState__Simple    = 1,
	EHoverSimulateState__Complex   = 2,
	EHoverSimulateState__EHoverSimulateState_MAX = 3
};


// Enum Addons.ELadderMoveType
enum class ELadderMoveType : uint8_t
{
	ELadderMove_None               = 0,
	ELadderMove_Idle               = 1,
	ELadderMove_Up                 = 2,
	ELadderMove_Down               = 3,
	ELadderMove_JumpToTop          = 4,
	ELadderMove_ExitFromBottom     = 5,
	ELadderMove_EnterFromTop       = 6,
	ELadderMove_EnterFromBottom    = 7,
	ELadderMove_MAX                = 8
};


// Enum Addons.EPterosaurMoveMode
enum class EPterosaurMoveMode : uint8_t
{
	EPterosaurMoveMode__EMove_Idle = 0,
	EPterosaurMoveMode__EMove_TakingOff = 1,
	EPterosaurMoveMode__EMove_RegularFlying = 2,
	EPterosaurMoveMode__EMove_Diving = 3,
	EPterosaurMoveMode__EMove_Landing = 4,
	EPterosaurMoveMode__EMove_SwoopDown = 5,
	EPterosaurMoveMode__EMove_MAX  = 6
};


// Enum Addons.EBioVehicleSkillStopReason
enum class EBioVehicleSkillStopReason : uint8_t
{
	StopReason_FINISH              = 0,
	StopReason_INTERRUPT           = 1,
	StopReason_MAX                 = 2
};


// Enum Addons.ETyranState
enum class ETyranState : uint8_t
{
	ETyranState__None              = 0,
	ETyranState__Normal            = 1,
	ETyranState__BreakOut          = 2,
	ETyranState__ETyranState_MAX   = 3
};



//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Script Structs
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// ScriptStruct Addons.BioVehicleMovementPostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FBioVehicleMovementPostPhysicsTickFunction : public FTickFunction
{
	class UBioVehicleMovementComponent*                Target;                                                   // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Addons.FlyBioVehicleUpdateDistanceToLandConfig
// 0x000C
struct FFlyBioVehicleUpdateDistanceToLandConfig
{
	float                                              Height;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Interval;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSweep;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Addons.FootStepEffect
// 0x0030
struct FFootStepEffect
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.FootStepEffect.ParticleTemplate
	int                                                EnableDeviceLevel;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Addons.HoveringSimulateData
// 0x001C
struct FHoveringSimulateData
{
	float                                              HoverDelta;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HoverDelta_Old;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CacheForce;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInAir;                                                   // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUnderground;                                             // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	struct FVector                                     TraceHitLocation;                                         // 0x0010(0x000C) (IsPlainOldData)
};

// ScriptStruct Addons.LadderMoveData
// 0x0018
struct FLadderMoveData
{
	bool                                               bOnLadder;                                                // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class ALadderActor*                                Ladder;                                                   // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELadderMoveType>                       LadderMoveType;                                           // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LadderStep;                                               // 0x0011(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct Addons.ViewPoint
// 0x001C
struct FViewPoint
{
	bool                                               bHasSaved;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0010(0x000C) (IsPlainOldData)
};

// ScriptStruct Addons.PterosaurUpdateDistanceToLandConfig
// 0x000C
struct FPterosaurUpdateDistanceToLandConfig
{
	float                                              Height;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Interval;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSweep;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Addons.PterosaurLandingConfig
// 0x0018
struct FPterosaurLandingConfig
{
	float                                              MaxAllowedFlyingSpeed;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLandingTime;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LandingToGroundTime;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceToGroundInFixedTime;                                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	class UCurveVector*                                LandingCurve;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.AnimNode_DistanceMatching
// 0x00B8 (0x0128 - 0x0070)
struct FAnimNode_DistanceMatching : public FAnimNode_SequencePlayer
{
	float                                              Distance;                                                 // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FName                                       RootBoneName;                                             // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AcceptedDistanceError;                                    // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FFloatCurve                                 DistanceCurve;                                            // 0x0088(0x0090)
	bool                                               bHasValidDistanceCurve;                                   // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0119(0x000F) MISSED OFFSET
};

// ScriptStruct Addons.BoneDeclare
// 0x0060
struct FBoneDeclare
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	struct FVector                                     ForwardAxis;                                              // 0x0018(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightAxis;                                                // 0x0024(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     UpAxis;                                                   // 0x0030(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PitchAxis;                                                // 0x003C(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    YawAxis;                                                  // 0x0048(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RollAxis;                                                 // 0x0054(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Addons.AnimNode_FourLeggedIK
// 0x0A98 (0x0B10 - 0x0078)
struct FAnimNode_FourLeggedIK : public FAnimNode_SkeletalControlBase
{
	bool                                               bEnableSlopeAdapt;                                        // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableLegAdapt;                                          // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x007A(0x0006) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             ObjectTypesToTrace;                                       // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              TraceUpOffset;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceDownOffset;                                          // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceSphereRadius;                                        // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlopeAdaptionMaxPitch;                                    // 0x009C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlopeAdaptionMaxZ;                                        // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlopeAdaptLerpSpeed;                                      // 0x00A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootIKAdaptMaxZ;                                          // 0x00A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootIKLerpSpeed;                                          // 0x00AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBoneDeclare                                AdaptBone;                                                // 0x00B0(0x0060) (Edit, DisableEditOnInstance)
	struct FBoneDeclare                                NeckBone;                                                 // 0x0110(0x0060) (Edit, DisableEditOnInstance)
	struct FBoneDeclare                                LClavicleBone;                                            // 0x0170(0x0060) (Edit, DisableEditOnInstance)
	struct FBoneDeclare                                RClavicleBone;                                            // 0x01D0(0x0060) (Edit, DisableEditOnInstance)
	struct FBoneDeclare                                LThighBone;                                               // 0x0230(0x0060) (Edit, DisableEditOnInstance)
	struct FBoneDeclare                                RThighBone;                                               // 0x0290(0x0060) (Edit, DisableEditOnInstance)
	struct FBoneReference                              LeftHandBone;                                             // 0x02F0(0x0018) (Edit, DisableEditOnInstance)
	struct FBoneReference                              RightHandBone;                                            // 0x0308(0x0018) (Edit, DisableEditOnInstance)
	struct FBoneReference                              LeftFootBone;                                             // 0x0320(0x0018) (Edit, DisableEditOnInstance)
	struct FBoneReference                              RightFootBone;                                            // 0x0338(0x0018) (Edit, DisableEditOnInstance)
	struct FAnimNode_TwoBoneIK                         LeftHandIK;                                               // 0x0350(0x01C0) (Edit, DisableEditOnInstance)
	struct FAnimNode_TwoBoneIK                         RightHandIK;                                              // 0x0510(0x01C0) (Edit, DisableEditOnInstance)
	struct FAnimNode_TwoBoneIK                         LeftFootIK;                                               // 0x06D0(0x01C0) (Edit, DisableEditOnInstance)
	struct FAnimNode_TwoBoneIK                         RightFootIK;                                              // 0x0890(0x01C0) (Edit, DisableEditOnInstance)
	float                                              DebugSphereRadius;                                        // 0x0A50(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugLineWidth;                                           // 0x0A54(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugArrowSize;                                           // 0x0A58(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      DebugNegativeColor;                                       // 0x0A5C(0x0004) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      DebugPositiveColor;                                       // 0x0A60(0x0004) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      DebugInfoColor;                                           // 0x0A64(0x0004) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DebugTextSize;                                            // 0x0A68(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0A70(0x00A0) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_Inertialization
// 0x0070 (0x00A8 - 0x0038)
struct FAnimNode_Inertialization : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0038(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0050(0x0058) MISSED OFFSET
};

// ScriptStruct Addons.InertializationPoseDiff
// 0x0028
struct FInertializationPoseDiff
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Addons.InertializationCurveDiff
// 0x0008
struct FInertializationCurveDiff
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Addons.InertializationBoneDiff
// 0x003C
struct FInertializationBoneDiff
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct Addons.InertializationPose
// 0x0090
struct FInertializationPose
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct Addons.MyVectorCurve
// 0x01B0
struct FMyVectorCurve
{
	struct FFloatCurve                                 FloatCurves[0x3];                                         // 0x0000(0x0090)
};

// ScriptStruct Addons.JointCurveData
// 0x0368
struct FJointCurveData
{
	struct FName                                       JointName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMyVectorCurve                              PositionCurve;                                            // 0x0008(0x01B0)
	struct FMyVectorCurve                              VelocityCurve;                                            // 0x01B8(0x01B0)
};

// ScriptStruct Addons.AnimJointData
// 0x00F0
struct FAnimJointData
{
	int                                                AnimID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<int, struct FJointCurveData>                  JointCurveDatas;                                          // 0x0008(0x0050) (ZeroConstructor)
	bool                                               bHasValidDistanceCurve;                                   // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FFloatCurve                                 DistanceCurve;                                            // 0x0060(0x0090)
};

// ScriptStruct Addons.AnimNode_MultiPoseDistanceMatching
// 0x0050 (0x0178 - 0x0128)
struct FAnimNode_MultiPoseDistanceMatching : public FAnimNode_DistanceMatching
{
	TArray<class UAnimSequence*>                       CandidateSequences;                                       // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBoneReference>                      ConsideredBones;                                          // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              PositionWeight;                                           // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityWeight;                                           // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PoseInterval;                                             // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	class UAnimPoseRecorder*                           PoseRecorder;                                             // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimJointData>                      AnimJointDatas;                                           // 0x0160(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0170(0x0008) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_PoseRecorder
// 0x0030 (0x0068 - 0x0038)
struct FAnimNode_PoseRecorder : public FAnimNode_Base
{
	class UAnimPoseRecorder*                           AnimPoseRecorder;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBoneReference>                      RecordedBones;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FPoseLink                                   Source;                                                   // 0x0050(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Addons.AnimNode_SyncBlendSpacePlayer
// 0x0018 (0x0140 - 0x0128)
struct FAnimNode_SyncBlendSpacePlayer : public FAnimNode_BlendSpacePlayer
{
	class UAssetPlayerSyncNode*                        BlendSpaceSyncNode;                                       // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SyncGroupName;                                            // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeader;                                                // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_SyncBlendSpacePlayerSafety
// 0x0010 (0x0138 - 0x0128)
struct FAnimNode_SyncBlendSpacePlayerSafety : public FAnimNode_BlendSpacePlayer
{
	struct FName                                       SyncGroupName;                                            // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeader;                                                // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_SyncSequencePlayer
// 0x0018 (0x0088 - 0x0070)
struct FAnimNode_SyncSequencePlayer : public FAnimNode_SequencePlayer
{
	class UAssetPlayerSyncNode*                        SyncNode;                                                 // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SyncGroupName;                                            // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeader;                                                // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_SyncSequencePlayerSafety
// 0x0010 (0x0080 - 0x0070)
struct FAnimNode_SyncSequencePlayerSafety : public FAnimNode_SequencePlayer
{
	struct FName                                       SyncGroupName;                                            // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeader;                                                // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_TwoLeggedIK
// 0x0628 (0x06A0 - 0x0078)
struct FAnimNode_TwoLeggedIK : public FAnimNode_SkeletalControlBase
{
	bool                                               bEnableRootAdaption;                                      // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FBoneReference                              Root;                                                     // 0x0080(0x0018) (Edit)
	float                                              RootTraceUpOffset;                                        // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RootTraceDownOffset;                                      // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RootTraceSphereRadius;                                    // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RootPositionLerpSpeed;                                    // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RootMaxHeightOffset;                                      // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             SlopeAdaption_ObjectTypesToQuery;                         // 0x00B0(0x0010) (Edit, ZeroConstructor)
	bool                                               bEnableSlopeAdaption;                                     // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FBoneReference                              SpineRoot;                                                // 0x00C8(0x0018) (Edit)
	struct FBoneReference                              TailRoot;                                                 // 0x00E0(0x0018) (Edit)
	float                                              SlopeMaxPitchOffset;                                      // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlopeRotationLerpSpeed;                                   // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             FootAdaption_ObjectTypesToQuery;                          // 0x0100(0x0010) (Edit, ZeroConstructor)
	bool                                               bEnableFootPositionAdaption;                              // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableFootRotationAdaption;                              // 0x0111(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0112(0x0006) MISSED OFFSET
	struct FBoneReference                              IKBone_L;                                                 // 0x0118(0x0018) (Edit)
	struct FBoneReference                              FootBone_L;                                               // 0x0130(0x0018) (Edit)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
	struct FBoneSocketTarget                           JointTarget_L;                                            // 0x0150(0x0060) (Edit)
	struct FVector                                     JointTargetLocation_L;                                    // 0x01B0(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET
	struct FBoneReference                              IKBone_R;                                                 // 0x01C0(0x0018) (Edit)
	struct FBoneReference                              FootBone_R;                                               // 0x01D8(0x0018) (Edit)
	struct FBoneSocketTarget                           JointTarget_R;                                            // 0x01F0(0x0060) (Edit)
	struct FVector                                     JointTargetLocation_R;                                    // 0x0250(0x000C) (Edit, IsPlainOldData)
	float                                              FootTraceUpOffset;                                        // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootTraceDownOffset;                                      // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootTraceSphereRadius;                                    // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootPositionLerpSpeed;                                    // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootRotationLerpSpeed;                                    // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootMaxPitchOffset;                                       // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootMaxRollOffset;                                        // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootMaxHeightOffset;                                      // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SkipEvaluateTimes;                                        // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAnimNode_TwoBoneIK                         LegAdapting_L;                                            // 0x0280(0x01C0)
	struct FAnimNode_TwoBoneIK                         LegAdapting_R;                                            // 0x0440(0x01C0)
	unsigned char                                      UnknownData06[0xA0];                                      // 0x0600(0x00A0) MISSED OFFSET
};

// ScriptStruct Addons.CachedPoseMotionData
// 0x00A8
struct FCachedPoseMotionData
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct Addons.CachedBoneMotionData
// 0x0070
struct FCachedBoneMotionData
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct Addons.CollectedEventKeysValues
// 0x0020
struct FCollectedEventKeysValues
{
	TArray<struct FString>                             Keys;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             Values;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Addons.CollectedEventData
// 0x0050
struct FCollectedEventData
{
	TMap<struct FString, struct FString>               KeyValueMap;                                              // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

}

