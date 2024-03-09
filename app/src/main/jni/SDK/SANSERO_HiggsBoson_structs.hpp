#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Enums
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Enum HiggsBoson.EGymOpType
enum class EGymOpType : uint8_t
{
	EGymOpType__None               = 0,
	EGymOpType__La                 = 1,
	EGymOpType__Sm                 = 2,
	EGymOpType__El                 = 3,
	EGymOpType__No                 = 4,
	EGymOpType__EGymOpType_MAX     = 5
};


// Enum HiggsBoson.EGaraType
enum class EGaraType : uint8_t
{
	EGaraType__Invalid             = 0,
	EGaraType__Alpha               = 1,
	EGaraType__Whale               = 2,
	EGaraType__EGaraType_MAX       = 3
};


// Enum HiggsBoson.EDarkerLionType
enum class EDarkerLionType : uint8_t
{
	EDarkerLionType__None          = 0,
	EDarkerLionType__DuckSize      = 1,
	EDarkerLionType__Blk           = 2,
	EDarkerLionType__Loki          = 3,
	EDarkerLionType__ABS           = 4,
	EDarkerLionType__DistanceXY    = 5,
	EDarkerLionType__DistanceZ     = 6,
	EDarkerLionType__Distance3D    = 7,
	EDarkerLionType__SourceSpeedZ  = 8,
	EDarkerLionType__SourceSpeedZBS = 9,
	EDarkerLionType__SourceSpeedXY = 10,
	EDarkerLionType__SourceSpeed3D = 11,
	EDarkerLionType__TargetSpeedZ  = 12,
	EDarkerLionType__TargetSpeedZBS = 13,
	EDarkerLionType__TargetSpeedXY = 14,
	EDarkerLionType__TargetSpeed3D = 15,
	EDarkerLionType__RelativeSpeedZ = 16,
	EDarkerLionType__RelativeSpeedZBS = 17,
	EDarkerLionType__RelativeSpeedXY = 18,
	EDarkerLionType__RelativeSpeed3D = 19,
	EDarkerLionType__RelativeTangentSpeed = 20,
	EDarkerLionType__RelativeAngleSpeed = 21,
	EDarkerLionType__BeAttachedToParentTime = 22,
	EDarkerLionType__HealthStatus  = 23,
	EDarkerLionType__PawnState     = 24,
	EDarkerLionType__MovementMode  = 25,
	EDarkerLionType__MovementBase  = 26,
	EDarkerLionType__BlkType       = 27,
	EDarkerLionType__CoolDown      = 28,
	EDarkerLionType__EGameModeType = 29,
	EDarkerLionType__EBackSwearType = 30,
	EDarkerLionType__Alpha         = 31,
	EDarkerLionType__FFAngle       = 32,
	EDarkerLionType__SACount       = 33,
	EDarkerLionType__FinalD2G      = 34,
	EDarkerLionType__EDarkerLionType_MAX = 35
};


// Enum HiggsBoson.ECharacterFitnessType
enum class ECharacterFitnessType : uint8_t
{
	ECharacterFitnessType__None    = 0,
	ECharacterFitnessType__DistanceXY = 1,
	ECharacterFitnessType__DistanceZ = 2,
	ECharacterFitnessType__Distance3D = 3,
	ECharacterFitnessType__ABS     = 4,
	ECharacterFitnessType__ContinuousID = 5,
	ECharacterFitnessType__ContinuousInterval = 6,
	ECharacterFitnessType__SourceSpeedZ = 7,
	ECharacterFitnessType__SourceSpeedZBS = 8,
	ECharacterFitnessType__SourceSpeedXY = 9,
	ECharacterFitnessType__SourceSpeed3D = 10,
	ECharacterFitnessType__TargetSpeedZ = 11,
	ECharacterFitnessType__TargetSpeedZBS = 12,
	ECharacterFitnessType__TargetSpeedXY = 13,
	ECharacterFitnessType__TargetSpeed3D = 14,
	ECharacterFitnessType__BeAttachedToParentTime = 15,
	ECharacterFitnessType__SourcePawnState = 16,
	ECharacterFitnessType__TargetPawnState = 17,
	ECharacterFitnessType__Weapon  = 18,
	ECharacterFitnessType__BBAngle = 19,
	ECharacterFitnessType__RelativeSpeedZ = 20,
	ECharacterFitnessType__RelativeSpeedZBS = 21,
	ECharacterFitnessType__RelativeSpeedXY = 22,
	ECharacterFitnessType__RelativeSpeed3D = 23,
	ECharacterFitnessType__SourceMovementMode = 24,
	ECharacterFitnessType__TargetMovementMode = 25,
	ECharacterFitnessType__SourceMovementBase = 26,
	ECharacterFitnessType__TargetMovementBase = 27,
	ECharacterFitnessType__Half    = 28,
	ECharacterFitnessType__Alpha   = 29,
	ECharacterFitnessType__HealthStatus = 30,
	ECharacterFitnessType__HiPart  = 31,
	ECharacterFitnessType__Accuse  = 32,
	ECharacterFitnessType__BullySpeed = 33,
	ECharacterFitnessType__EGameModeType = 34,
	ECharacterFitnessType__EParachuteState = 35,
	ECharacterFitnessType__RelativeTangentSpeed = 36,
	ECharacterFitnessType__RelativeAngleSpeed = 37,
	ECharacterFitnessType__SinceLastProne = 38,
	ECharacterFitnessType__Full    = 39,
	ECharacterFitnessType__FFAngle = 40,
	ECharacterFitnessType__CHAngle = 41,
	ECharacterFitnessType__CVAngle = 42,
	ECharacterFitnessType__SACount = 43,
	ECharacterFitnessType__MaxDev  = 44,
	ECharacterFitnessType__RandDev = 45,
	ECharacterFitnessType__WeedType = 46,
	ECharacterFitnessType__ECharacterFitnessType_MAX = 47
};


// Enum HiggsBoson.ECoronaClientData
enum class ECoronaClientData : uint8_t
{
	ECoronaClientData__Invalid     = 0,
	ECoronaClientData__BulletFireSpeed = 1,
	ECoronaClientData__CurrentWeaponID = 2,
	ECoronaClientData__GravityZ    = 3,
	ECoronaClientData__MinUndilatedFrameTime = 4,
	ECoronaClientData__ActorTimeDilation = 5,
	ECoronaClientData__ShootInterval = 6,
	ECoronaClientData__ExtraHitPerformScale = 7,
	ECoronaClientData__SwitchWeaponSpeedScale = 8,
	ECoronaClientData__AnimationKick = 9,
	ECoronaClientData__RecoilKickADS = 10,
	ECoronaClientData__AccessoriesVRecoilFactor = 11,
	ECoronaClientData__AccessoriesHRecoilFactor = 12,
	ECoronaClientData__AccessoriesRecoveryFactor = 13,
	ECoronaClientData__JumpMaxCount = 14,
	ECoronaClientData__JumpZVelocity = 15,
	ECoronaClientData__TimeDilation = 16,
	ECoronaClientData__MatineeTimeDilation = 17,
	ECoronaClientData__DemoPlayTimeDilation = 18,
	ECoronaClientData__MaxAcceleration = 19,
	ECoronaClientData__BulletTrackComponentUseTss = 20,
	ECoronaClientData__ECoronaClientData_MAX = 21
};


// Enum HiggsBoson.EBackSwearType
enum class EBackSwearType : uint8_t
{
	EBackSwearType__Invalid        = 0,
	EBackSwearType__Tick           = 1,
	EBackSwearType__Mark           = 2,
	EBackSwearType__EBackSwearType_MAX = 3
};



//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Script Structs
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// ScriptStruct HiggsBoson.PatchPoint
// 0x000C
struct FPatchPoint
{
	int                                                Offset;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Old;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           New;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HiggsBoson.MoveInput
// 0x0020
struct FMoveInput
{
	float                                              TimeSeconds;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ForwardInputRate;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RightInputRate;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	uint64_t                                           CurrentStates;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ZeroMoveInputCount;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

}

