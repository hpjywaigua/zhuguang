#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Parameters
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function Addons.AmphibiousSlidingVehicle.OnRep_WaterState
struct AAmphibiousSlidingVehicle_OnRep_WaterState_Params
{
};

// Function Addons.AmphibiousSlidingVehicle.OnRep_UseSyncatClient
struct AAmphibiousSlidingVehicle_OnRep_UseSyncatClient_Params
{
};

// Function Addons.AmphibiousSlidingVehicle.HandleContactWater
struct AAmphibiousSlidingVehicle_HandleContactWater_Params
{
	bool                                               bInContactingWater;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AmphibiousSlidingVehicle.GetFloatingVehicleMovement
struct AAmphibiousSlidingVehicle_GetFloatingVehicleMovement_Params
{
	class UFloatingVehicleVehicleMovementComponent2*   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.UnpackAccelerationToInput
struct UBioVehicleMovementComponent_UnpackAccelerationToInput_Params
{
	struct FVector                                     InAccel;                                                  // (Parm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ShouldRecordPosition
struct UBioVehicleMovementComponent_ShouldRecordPosition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetWalkableFloorZ
struct UBioVehicleMovementComponent_SetWalkableFloorZ_Params
{
	float                                              InWalkableFloorZ;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetWalkableFloorAngle
struct UBioVehicleMovementComponent_SetWalkableFloorAngle_Params
{
	float                                              InWalkableFloorAngle;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetThrottleInput
struct UBioVehicleMovementComponent_SetThrottleInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetSteeringInput
struct UBioVehicleMovementComponent_SetSteeringInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetRisingInput
struct UBioVehicleMovementComponent_SetRisingInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetMovementMode
struct UBioVehicleMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetGroupsToIgnoreMask
struct UBioVehicleMovementComponent_SetGroupsToIgnoreMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetGroupsToIgnore
struct UBioVehicleMovementComponent_SetGroupsToIgnore_Params
{
	int                                                GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetGroupsToAvoidMask
struct UBioVehicleMovementComponent_SetGroupsToAvoidMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetGroupsToAvoid
struct UBioVehicleMovementComponent_SetGroupsToAvoid_Params
{
	int                                                GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetAvoidanceGroupMask
struct UBioVehicleMovementComponent_SetAvoidanceGroupMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetAvoidanceGroup
struct UBioVehicleMovementComponent_SetAvoidanceGroup_Params
{
	int                                                GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetAvoidanceEnabled
struct UBioVehicleMovementComponent_SetAvoidanceEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetAcceptInput
struct UBioVehicleMovementComponent_SetAcceptInput_Params
{
	bool                                               bIsAccept;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerSetThrottleInput
struct UBioVehicleMovementComponent_ServerSetThrottleInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerSetSteeringInput
struct UBioVehicleMovementComponent_ServerSetSteeringInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerSetRisingInput
struct UBioVehicleMovementComponent_ServerSetRisingInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerMoveOld
struct UBioVehicleMovementComponent_ServerMoveOld_Params
{
	float                                              OldTimeStamp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       OldAccel;                                                 // (Parm)
	unsigned char                                      OldMoveFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerMoveDualHybridRootMotion
struct UBioVehicleMovementComponent_ServerMoveDualHybridRootMotion_Params
{
	float                                              TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel0;                                                 // (Parm)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	unsigned char                                      NewFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerMoveDual
struct UBioVehicleMovementComponent_ServerMoveDual_Params
{
	float                                              TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel0;                                                 // (Parm)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	unsigned char                                      NewFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerMove
struct UBioVehicleMovementComponent_ServerMove_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	unsigned char                                      CompressedMoveFlags;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.PackInputToAcceleration
struct UBioVehicleMovementComponent_PackInputToAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.K2_GetWalkableFloorZ
struct UBioVehicleMovementComponent_K2_GetWalkableFloorZ_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.K2_GetWalkableFloorAngle
struct UBioVehicleMovementComponent_K2_GetWalkableFloorAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.K2_GetModifiedMaxAcceleration
struct UBioVehicleMovementComponent_K2_GetModifiedMaxAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.K2_FindFloor
struct UBioVehicleMovementComponent_K2_FindFloor_Params
{
	struct FVector                                     CapsuleLocation;                                          // (Parm, IsPlainOldData)
	struct FFindFloorResult                            FloorResult;                                              // (Parm, OutParm)
};

// Function Addons.BioVehicleMovementComponent.K2_ComputeFloorDist
struct UBioVehicleMovementComponent_K2_ComputeFloorDist_Params
{
	struct FVector                                     CapsuleLocation;                                          // (Parm, IsPlainOldData)
	float                                              LineDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SweepDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SweepRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFindFloorResult                            FloorResult;                                              // (Parm, OutParm)
};

// Function Addons.BioVehicleMovementComponent.IsWalking
struct UBioVehicleMovementComponent_IsWalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.IsWalkable
struct UBioVehicleMovementComponent_IsWalkable_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.IsSwimming
struct UBioVehicleMovementComponent_IsSwimming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.IsSeriousInjuriedAllowJumping
struct UBioVehicleMovementComponent_IsSeriousInjuriedAllowJumping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.HandleOnSeatDetached
struct UBioVehicleMovementComponent_HandleOnSeatDetached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.HandleOnSeatChanged
struct UBioVehicleMovementComponent_HandleOnSeatChanged_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            LastSeatType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LastSeatIdx;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            NewSeatType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewSeatIdx;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.HandleOnSeatAttached
struct UBioVehicleMovementComponent_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.HandleOnExitVehicleAnim
struct UBioVehicleMovementComponent_HandleOnExitVehicleAnim_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatInx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetWalkingDecResistance
struct UBioVehicleMovementComponent_GetWalkingDecResistance_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetWalkingAccResistance
struct UBioVehicleMovementComponent_GetWalkingAccResistance_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetValidPerchRadius
struct UBioVehicleMovementComponent_GetValidPerchRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetThrottleInput
struct UBioVehicleMovementComponent_GetThrottleInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetSteeringInput
struct UBioVehicleMovementComponent_GetSteeringInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetSlopeSpeedFactor
struct UBioVehicleMovementComponent_GetSlopeSpeedFactor_Params
{
	float                                              Slope;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetRisingInput
struct UBioVehicleMovementComponent_GetRisingInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetPredictVelocity
struct UBioVehicleMovementComponent_GetPredictVelocity_Params
{
	float                                              PredictTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetPerchRadiusThreshold
struct UBioVehicleMovementComponent_GetPerchRadiusThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMovementBase
struct UBioVehicleMovementComponent_GetMovementBase_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMinAnalogSpeed
struct UBioVehicleMovementComponent_GetMinAnalogSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMaxJumpHeightWithJumpTime
struct UBioVehicleMovementComponent_GetMaxJumpHeightWithJumpTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMaxJumpHeight
struct UBioVehicleMovementComponent_GetMaxJumpHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMaxBrakingDeceleration
struct UBioVehicleMovementComponent_GetMaxBrakingDeceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMaxAcceleration
struct UBioVehicleMovementComponent_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetJumpVelocityZ
struct UBioVehicleMovementComponent_GetJumpVelocityZ_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetJumpingHeightBySpeed
struct UBioVehicleMovementComponent_GetJumpingHeightBySpeed_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetJumpingHeightByObsHeight
struct UBioVehicleMovementComponent_GetJumpingHeightByObsHeight_Params
{
	float                                              ObsHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetImpartedMovementBaseVelocity
struct UBioVehicleMovementComponent_GetImpartedMovementBaseVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetDesireAcceleration
struct UBioVehicleMovementComponent_GetDesireAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetCurrentSecuritySpeedRatio
struct UBioVehicleMovementComponent_GetCurrentSecuritySpeedRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetCurrentMaxAllowedSpeed
struct UBioVehicleMovementComponent_GetCurrentMaxAllowedSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetCurrentAcceleration
struct UBioVehicleMovementComponent_GetCurrentAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetBreakAcceleration
struct UBioVehicleMovementComponent_GetBreakAcceleration_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetAngularVelocityByCurve
struct UBioVehicleMovementComponent_GetAngularVelocityByCurve_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AsForce;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetAnalogInputModifier
struct UBioVehicleMovementComponent_GetAnalogInputModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.DisableMovement
struct UBioVehicleMovementComponent_DisableMovement_Params
{
};

// Function Addons.BioVehicleMovementComponent.DealWithCustomAction
struct UBioVehicleMovementComponent_DealWithCustomAction_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientVeryShortAdjustPosition
struct UBioVehicleMovementComponent_ClientVeryShortAdjustPosition_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientAdjustRootMotionSourcePosition
struct UBioVehicleMovementComponent_ClientAdjustRootMotionSourcePosition_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRootMotionSourceGroup                      ServerRootMotion;                                         // (Parm)
	bool                                               bHasAnimRootMotion;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ServerMontageTrackPosition;                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ServerLoc;                                                // (Parm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ServerRotation;                                           // (Parm)
	float                                              ServerVelZ;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ServerBase;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ServerBoneName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientAdjustRootMotionPosition
struct UBioVehicleMovementComponent_ClientAdjustRootMotionPosition_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ServerMontageTrackPosition;                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ServerLoc;                                                // (Parm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ServerRotation;                                           // (Parm)
	float                                              ServerVelZ;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ServerBase;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ServerBoneName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientAdjustPositionAndRotation
struct UBioVehicleMovementComponent_ClientAdjustPositionAndRotation_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	struct FRotator                                    NewRot;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     NewVel;                                                   // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientAdjustPosition
struct UBioVehicleMovementComponent_ClientAdjustPosition_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     NewVel;                                                   // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientAckGoodMove
struct UBioVehicleMovementComponent_ClientAckGoodMove_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClearAccumulatedForces
struct UBioVehicleMovementComponent_ClearAccumulatedForces_Params
{
};

// Function Addons.BioVehicleMovementComponent.CapsuleTouched
struct UBioVehicleMovementComponent_CapsuleTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.CalcVelocity
struct UBioVehicleMovementComponent_CalcVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFluid;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDeceleration;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.CalculateVelocityWithResistance
struct UBioVehicleMovementComponent_CalculateVelocityWithResistance_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFluid;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.CalculateCurrentForwardSpeed
struct UBioVehicleMovementComponent_CalculateCurrentForwardSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.AddImpulse
struct UBioVehicleMovementComponent_AddImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, IsPlainOldData)
	bool                                               bVelocityChange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.AddForce
struct UBioVehicleMovementComponent_AddForce_Params
{
	struct FVector                                     force;                                                    // (Parm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.AddDirectionalBrakingAcceleration
struct UBioVehicleMovementComponent_AddDirectionalBrakingAcceleration_Params
{
	struct FVector                                     BrakingAcceleration;                                      // (Parm, IsPlainOldData)
};

// Function Addons.BioFlyMovementComponentBase.UpdateVerticalHeight
struct UBioFlyMovementComponentBase_UpdateVerticalHeight_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioFlyMovementComponentBase.StartTakingOff
struct UBioFlyMovementComponentBase_StartTakingOff_Params
{
};

// Function Addons.BioFlyMovementComponentBase.SetMovementMode
struct UBioFlyMovementComponentBase_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioFlyMovementComponentBase.IsTakingOff
struct UBioFlyMovementComponentBase_IsTakingOff_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioFlyMovementComponentBase.IsCurveMoving
struct UBioFlyMovementComponentBase_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioFlyMovementComponentBase.GetMoveState
struct UBioFlyMovementComponentBase_GetMoveState_Params
{
	EFlyBioVehicleMoveMode                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioFlyMovementComponentBase.GetDistanceToLand
struct UBioFlyMovementComponentBase_GetDistanceToLand_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioFlyMovementComponentBase.EndTakingOff
struct UBioFlyMovementComponentBase_EndTakingOff_Params
{
};

// Function Addons.BioFlyMovementComponentBase.CalculateFlyingVelocity
struct UBioFlyMovementComponentBase_CalculateFlyingVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioFlyMovementComponentBase.CalculateFlyingAcceleration
struct UBioFlyMovementComponentBase_CalculateFlyingAcceleration_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleAnimInstanceBase.LuaOnAnimLodChanged
struct UBioVehicleAnimInstanceBase_LuaOnAnimLodChanged_Params
{
	int                                                NewAnimLod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleAnimInstanceBase.LuaInitializeWithDeviceLevel
struct UBioVehicleAnimInstanceBase_LuaInitializeWithDeviceLevel_Params
{
	int                                                DeviceLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleAnimInstanceBase.LuaInitializeAnimation
struct UBioVehicleAnimInstanceBase_LuaInitializeAnimation_Params
{
};

// Function Addons.BioVehicleBase.StopJumping
struct ABioVehicleBase_StopJumping_Params
{
};

// Function Addons.BioVehicleBase.SetSimulatePhysics
struct ABioVehicleBase_SetSimulatePhysics_Params
{
	bool                                               bSimulate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.SetReplicateMovement
struct ABioVehicleBase_SetReplicateMovement_Params
{
	bool                                               bInReplicateMovement;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.SetHandBrake
struct ABioVehicleBase_SetHandBrake_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.ServerResetToPosition
struct ABioVehicleBase_ServerResetToPosition_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnWalkingOffLedge
struct ABioVehicleBase_OnWalkingOffLedge_Params
{
	struct FVector                                     PreviousFloorImpactNormal;                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     PreviousFloorContactNormal;                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     PreviousLocation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              TimeDelta;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnTakingDamage
struct ABioVehicleBase_OnTakingDamage_Params
{
	class AActor*                                      HitActor;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitInstigator;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnRep_ReplicatedBasedMovement
struct ABioVehicleBase_OnRep_ReplicatedBasedMovement_Params
{
};

// Function Addons.BioVehicleBase.OnRep_HasBeenTamed
struct ABioVehicleBase_OnRep_HasBeenTamed_Params
{
};

// Function Addons.BioVehicleBase.OnRep_FuelExhausted
struct ABioVehicleBase_OnRep_FuelExhausted_Params
{
	bool                                               bPrevFuelExhausted;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnLaunched
struct ABioVehicleBase_OnLaunched_Params
{
	struct FVector                                     LaunchVelocity;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bXYOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bZOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnLanded
struct ABioVehicleBase_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnJumped
struct ABioVehicleBase_OnJumped_Params
{
};

// Function Addons.BioVehicleBase.OnExitingVehicleOnServer
struct ABioVehicleBase_OnExitingVehicleOnServer_Params
{
};

// Function Addons.BioVehicleBase.OnEnteringVehicleOnServer
struct ABioVehicleBase_OnEnteringVehicleOnServer_Params
{
	bool                                               IsSucc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.MoveUp
struct ABioVehicleBase_MoveUp_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.LaunchCharacter
struct ABioVehicleBase_LaunchCharacter_Params
{
	struct FVector                                     LaunchVelocity;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bXYOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bZOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.K2_UpdateCustomMovement
struct ABioVehicleBase_K2_UpdateCustomMovement_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.K2_OnMovementModeChanged
struct ABioVehicleBase_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.Jump
struct ABioVehicleBase_Jump_Params
{
};

// Function Addons.BioVehicleBase.IsPlayingRootMotion
struct ABioVehicleBase_IsPlayingRootMotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.IsJumpProvidingForce
struct ABioVehicleBase_IsJumpProvidingForce_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.HandleOnRiderAnimInstanceActive
struct ABioVehicleBase_HandleOnRiderAnimInstanceActive_Params
{
	class UAnimInstance*                               ActivedAnimInstance;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.HandleOnClientBeenTamed
struct ABioVehicleBase_HandleOnClientBeenTamed_Params
{
};

// Function Addons.BioVehicleBase.GetVehicleOriginToLand
struct ABioVehicleBase_GetVehicleOriginToLand_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetVehicleBreakOutState
struct ABioVehicleBase_GetVehicleBreakOutState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetRotationInputDir
struct ABioVehicleBase_GetRotationInputDir_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetPlayerLookAtRotation
struct ABioVehicleBase_GetPlayerLookAtRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetConsumeFuelRate
struct ABioVehicleBase_GetConsumeFuelRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetBodyShapeComponent
struct ABioVehicleBase_GetBodyShapeComponent_Params
{
	class UBoxComponent*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetBioVehicleMovement
struct ABioVehicleBase_GetBioVehicleMovement_Params
{
	class UBioVehicleMovementComponent*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetBaseTranslationOffset
struct ABioVehicleBase_GetBaseTranslationOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetAnimListComponent
struct ABioVehicleBase_GetAnimListComponent_Params
{
	class UBioVehicleAnimListComponent*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleBase.ExitVehicle
struct ABioVehicleBase_ExitVehicle_Params
{
};

// Function Addons.BioVehicleBase.EnterVehicle
struct ABioVehicleBase_EnterVehicle_Params
{
	bool                                               IsSucc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.ClientEnterVehicle
struct ABioVehicleBase_ClientEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.CanJumpInternal
struct ABioVehicleBase_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.CanJump
struct ABioVehicleBase_CanJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.CanConsumeFuel
struct ABioVehicleBase_CanConsumeFuel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.CacheInitialMeshOffset
struct ABioVehicleBase_CacheInitialMeshOffset_Params
{
	struct FVector                                     MeshRelativeLocation;                                     // (Parm, IsPlainOldData)
	struct FRotator                                    MeshRelativeRotation;                                     // (Parm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.BroadCastPlayingRandomIdleAnim
struct ABioVehicleBase_BroadCastPlayingRandomIdleAnim_Params
{
	int                                                RandomIdleAnim;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.ActiveFootParticleEffect
struct ABioVehicleBase_ActiveFootParticleEffect_Params
{
	struct FName                                       EffectName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActivedLocation;                                          // (Parm, IsPlainOldData)
};

// Function Addons.DistanceMatchingComponent.ServerOnDistanceMatchSuccess
struct UDistanceMatchingComponent_ServerOnDistanceMatchSuccess_Params
{
	struct FVector                                     PredictedStopLocation;                                    // (Parm, IsPlainOldData)
};

// Function Addons.DistanceMatchingComponent.PredictStopLocation
struct UDistanceMatchingComponent_PredictStopLocation_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.DistanceMatchingComponent.OnEndAccelerating
struct UDistanceMatchingComponent_OnEndAccelerating_Params
{
};

// Function Addons.DistanceMatchingComponent.GetBioVehicleAnimInstance
struct UDistanceMatchingComponent_GetBioVehicleAnimInstance_Params
{
	class UAnimInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.DistanceMatchingComponent.BroadCastOnDistanceMatchSuccess
struct UDistanceMatchingComponent_BroadCastOnDistanceMatchSuccess_Params
{
	struct FVector                                     PredictedStopLocation;                                    // (Parm, IsPlainOldData)
};

// Function Addons.DistanceMatchingInterface.OnDistanceMatchingSuccess
struct UDistanceMatchingInterface_OnDistanceMatchingSuccess_Params
{
	struct FVector                                     PredictedStopLocation;                                    // (Parm, IsPlainOldData)
};

// Function Addons.EventDataCollectionKeys.GetTimestamp
struct UEventDataCollectionKeys_GetTimestamp_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys.GetTeammatePositions
struct UEventDataCollectionKeys_GetTeammatePositions_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys.GetSelfPosition
struct UEventDataCollectionKeys_GetSelfPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues.GetTeammatePositionsFromContext
struct UEventDataCollectionValues_GetTeammatePositionsFromContext_Params
{
	class AActor*                                      ActorContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.EventDataCollectionValues.GetTeammatePositions
struct UEventDataCollectionValues_GetTeammatePositions_Params
{
	class ASTExtraPlayerState*                         STExtraPlayerState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.EventDataCollectionValues.GetTeammateOpenIds
struct UEventDataCollectionValues_GetTeammateOpenIds_Params
{
	class ASTExtraPlayerState*                         STExtraPlayerState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetViewType
struct UEventDataCollectionKeys_RankingScore_GetViewType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetTreatment
struct UEventDataCollectionKeys_RankingScore_GetTreatment_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetTime
struct UEventDataCollectionKeys_RankingScore_GetTime_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetTeammates
struct UEventDataCollectionKeys_RankingScore_GetTeammates_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetSurvivalTime
struct UEventDataCollectionKeys_RankingScore_GetSurvivalTime_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetRescureCount
struct UEventDataCollectionKeys_RankingScore_GetRescureCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetRescueTimes
struct UEventDataCollectionKeys_RankingScore_GetRescueTimes_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetRank
struct UEventDataCollectionKeys_RankingScore_GetRank_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetPlayerName
struct UEventDataCollectionKeys_RankingScore_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetMaxKillDistance
struct UEventDataCollectionKeys_RankingScore_GetMaxKillDistance_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetMarchDistance
struct UEventDataCollectionKeys_RankingScore_GetMarchDistance_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetMapId
struct UEventDataCollectionKeys_RankingScore_GetMapId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetKnockouts
struct UEventDataCollectionKeys_RankingScore_GetKnockouts_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetKillNumInVehicle
struct UEventDataCollectionKeys_RankingScore_GetKillNumInVehicle_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetKillNumByGrenade
struct UEventDataCollectionKeys_RankingScore_GetKillNumByGrenade_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetKillNum
struct UEventDataCollectionKeys_RankingScore_GetKillNum_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetKill
struct UEventDataCollectionKeys_RankingScore_GetKill_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetInDamage
struct UEventDataCollectionKeys_RankingScore_GetInDamage_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetHurt
struct UEventDataCollectionKeys_RankingScore_GetHurt_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetHeal
struct UEventDataCollectionKeys_RankingScore_GetHeal_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetHeadShotNum
struct UEventDataCollectionKeys_RankingScore_GetHeadShotNum_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetGotAirDropNum
struct UEventDataCollectionKeys_RankingScore_GetGotAirDropNum_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetGameID
struct UEventDataCollectionKeys_RankingScore_GetGameID_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetDriveDistance
struct UEventDataCollectionKeys_RankingScore_GetDriveDistance_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetDamage
struct UEventDataCollectionKeys_RankingScore_GetDamage_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetAssists
struct UEventDataCollectionKeys_RankingScore_GetAssists_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetAliveTeamNum
struct UEventDataCollectionKeys_RankingScore_GetAliveTeamNum_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankingScore.GetAlivePlayerNum
struct UEventDataCollectionKeys_RankingScore_GetAlivePlayerNum_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetWorldLocation
struct UEventDataCollectionKeys_GameStatus_GetWorldLocation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetWeather
struct UEventDataCollectionKeys_GameStatus_GetWeather_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetTotalPlayerCount
struct UEventDataCollectionKeys_GameStatus_GetTotalPlayerCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetToPlaneCarryLeftTime
struct UEventDataCollectionKeys_GameStatus_GetToPlaneCarryLeftTime_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetTeamId
struct UEventDataCollectionKeys_GameStatus_GetTeamId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetPlaneRouteStop
struct UEventDataCollectionKeys_GameStatus_GetPlaneRouteStop_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetPlaneRouteStart
struct UEventDataCollectionKeys_GameStatus_GetPlaneRouteStart_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetOpenId
struct UEventDataCollectionKeys_GameStatus_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetGameStatus
struct UEventDataCollectionKeys_GameStatus_GetGameStatus_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_GameStatus.GetAlivePlayerCount
struct UEventDataCollectionKeys_GameStatus_GetAlivePlayerCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetWin
struct UEventDataCollectionValues_GameStatus_GameStatus_GetWin_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetWaitingOnLobby
struct UEventDataCollectionValues_GameStatus_GameStatus_GetWaitingOnLobby_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetQualityPlaza
struct UEventDataCollectionValues_GameStatus_GameStatus_GetQualityPlaza_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetPlaneCarrying
struct UEventDataCollectionValues_GameStatus_GameStatus_GetPlaneCarrying_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetParachuteOpen
struct UEventDataCollectionValues_GameStatus_GameStatus_GetParachuteOpen_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetParachuteJumping
struct UEventDataCollectionValues_GameStatus_GameStatus_GetParachuteJumping_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetMatching
struct UEventDataCollectionValues_GameStatus_GameStatus_GetMatching_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetLanding
struct UEventDataCollectionValues_GameStatus_GameStatus_GetLanding_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetFireWorking
struct UEventDataCollectionValues_GameStatus_GameStatus_GetFireWorking_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetFighting
struct UEventDataCollectionValues_GameStatus_GameStatus_GetFighting_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_GameStatus_GameStatus.GetCake
struct UEventDataCollectionValues_GameStatus_GameStatus_GetCake_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_StartMatching.GetViewType
struct UEventDataCollectionKeys_StartMatching_GetViewType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_StartMatching.GetTeamCount
struct UEventDataCollectionKeys_StartMatching_GetTeamCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_StartMatching.GetPlayerCountInGameMode
struct UEventDataCollectionKeys_StartMatching_GetPlayerCountInGameMode_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_StartMatching.GetMapId
struct UEventDataCollectionKeys_StartMatching_GetMapId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_StartMatching.GetGameMode
struct UEventDataCollectionKeys_StartMatching_GetGameMode_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_StartMatching.GetFullTeamCount
struct UEventDataCollectionKeys_StartMatching_GetFullTeamCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PlaneCarrying.GetStartPosition
struct UEventDataCollectionKeys_PlaneCarrying_GetStartPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PlaneCarrying.GetEndPosition
struct UEventDataCollectionKeys_PlaneCarrying_GetEndPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PuttingDownCakeFireWorks.GetFireWorksOpenId
struct UEventDataCollectionKeys_PuttingDownCakeFireWorks_GetFireWorksOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PuttingDownCakeFireWorks.GetCakeOpenId
struct UEventDataCollectionKeys_PuttingDownCakeFireWorks_GetCakeOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetType
struct UEventDataCollectionKeys_TakeDropItem_GetType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetReason
struct UEventDataCollectionKeys_TakeDropItem_GetReason_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetPlayerName
struct UEventDataCollectionKeys_TakeDropItem_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetOpenId
struct UEventDataCollectionKeys_TakeDropItem_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetItemInstanceId
struct UEventDataCollectionKeys_TakeDropItem_GetItemInstanceId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetItemId
struct UEventDataCollectionKeys_TakeDropItem_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetItemCount
struct UEventDataCollectionKeys_TakeDropItem_GetItemCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetHoldingCount
struct UEventDataCollectionKeys_TakeDropItem_GetHoldingCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetBulletCount
struct UEventDataCollectionKeys_TakeDropItem_GetBulletCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakeDropItem.GetBackpackAvatarItemDurability
struct UEventDataCollectionKeys_TakeDropItem_GetBackpackAvatarItemDurability_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakeDropItem_Type.GetTaking
struct UEventDataCollectionValues_TakeDropItem_Type_GetTaking_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakeDropItem_Type.GetDropping
struct UEventDataCollectionValues_TakeDropItem_Type_GetDropping_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UsingItem.GetStatus
struct UEventDataCollectionKeys_UsingItem_GetStatus_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UsingItem.GetPredictLine
struct UEventDataCollectionKeys_UsingItem_GetPredictLine_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UsingItem.GetPlayerName
struct UEventDataCollectionKeys_UsingItem_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UsingItem.GetOpenId
struct UEventDataCollectionKeys_UsingItem_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UsingItem.GetItemLeftCount
struct UEventDataCollectionKeys_UsingItem_GetItemLeftCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UsingItem.GetItemId
struct UEventDataCollectionKeys_UsingItem_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UsingItem_Status.GetLeading
struct UEventDataCollectionValues_UsingItem_Status_GetLeading_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UsingItem_Status.GetInteruption
struct UEventDataCollectionValues_UsingItem_Status_GetInteruption_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UsingItem_Status.GetCompletion
struct UEventDataCollectionValues_UsingItem_Status_GetCompletion_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Falling.GetType
struct UEventDataCollectionKeys_Falling_GetType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Falling.GetStatus
struct UEventDataCollectionKeys_Falling_GetStatus_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Falling_Type.GetStart
struct UEventDataCollectionValues_Falling_Type_GetStart_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Falling_Type.GetEnd
struct UEventDataCollectionValues_Falling_Type_GetEnd_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Falling_Status.GetNonDriving
struct UEventDataCollectionValues_Falling_Status_GetNonDriving_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Falling_Status.GetDriving
struct UEventDataCollectionValues_Falling_Status_GetDriving_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_InFieldOfView.GetUniqueIdentifier
struct UEventDataCollectionKeys_InFieldOfView_GetUniqueIdentifier_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_InFieldOfView.GetTargetWorldLocation
struct UEventDataCollectionKeys_InFieldOfView_GetTargetWorldLocation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_InFieldOfView.GetOldFieldOfViewNotificationStatus
struct UEventDataCollectionKeys_InFieldOfView_GetOldFieldOfViewNotificationStatus_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_InFieldOfView.GetMyWorldLocation
struct UEventDataCollectionKeys_InFieldOfView_GetMyWorldLocation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_InFieldOfView.GetMinimalScreenLocation
struct UEventDataCollectionKeys_InFieldOfView_GetMinimalScreenLocation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_InFieldOfView.GetMaximumScreenLocation
struct UEventDataCollectionKeys_InFieldOfView_GetMaximumScreenLocation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_InFieldOfView.GetFieldOfViewTargetCategory
struct UEventDataCollectionKeys_InFieldOfView_GetFieldOfViewTargetCategory_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_InFieldOfView.GetCurrentFieldOfViewNotificationStatus
struct UEventDataCollectionKeys_InFieldOfView_GetCurrentFieldOfViewNotificationStatus_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetTombBox
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetTombBox_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetTeammateVehicle
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetTeammateVehicle_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetTeammate
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetTeammate_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetSmog
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetSmog_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetFireWorks
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetFireWorks_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetEnemyVehicle
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetEnemyVehicle_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetEnemy
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetEnemy_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetCake
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetCake_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetBombing
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetBombing_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_InFieldOfView_FieldOfView.GetAirDroping
struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetAirDroping_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetValue
struct UEventDataCollectionKeys_UnderEnermyAttack_GetValue_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetTargetPart
struct UEventDataCollectionKeys_UnderEnermyAttack_GetTargetPart_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetResult2
struct UEventDataCollectionKeys_UnderEnermyAttack_GetResult2_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetResult
struct UEventDataCollectionKeys_UnderEnermyAttack_GetResult_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetReason
struct UEventDataCollectionKeys_UnderEnermyAttack_GetReason_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtUniqueIdentifier
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtUniqueIdentifier_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtUid
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtUid_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtPosture
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtPosture_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtPosition
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtPlayerTeamId
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtPlayerTeamId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtPlayerName
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtOpenId
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtMaxBulletCountInClip
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtMaxBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtIsInHouse
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtIsInHouse_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtHealth
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtHealth_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtEquipId
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtEquipId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtDirection
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtDirection_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtCarForwardSpeed
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtCarForwardSpeed_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtBulletCountInClip
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtBulletCountInBarrel
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtBulletCountInBarrel_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetHurtAim
struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtAim_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetDph
struct UEventDataCollectionKeys_UnderEnermyAttack_GetDph_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetDistance
struct UEventDataCollectionKeys_UnderEnermyAttack_GetDistance_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetCarValue
struct UEventDataCollectionKeys_UnderEnermyAttack_GetCarValue_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetCarHealth
struct UEventDataCollectionKeys_UnderEnermyAttack_GetCarHealth_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtUniqueIdentifier
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtUniqueIdentifier_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtUid
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtUid_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtPosture
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtPosture_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtPosition
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtPlayerTeamId
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtPlayerTeamId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtPlayerName
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtOpenId
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtLastHealth
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtLastHealth_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtJacketDurabilityReduction
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtJacketDurabilityReduction_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtJacketDurability
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtJacketDurability_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtJacket
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtJacket_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtIsInHouse
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtIsInHouse_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtHelmetDurabilityReduction
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtHelmetDurabilityReduction_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtHelmetDurability
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtHelmetDurability_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtHelmet
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtHelmet_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtHealth
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtHealth_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtEquipId
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtEquipId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtDirection
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtDirection_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetBeHurtCarForwardSpeed
struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtCarForwardSpeed_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_UnderEnermyAttack.GetAce
struct UEventDataCollectionKeys_UnderEnermyAttack_GetAce_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result.GetWeedingOut
struct UEventDataCollectionValues_UnderEnermyAttack_Result_GetWeedingOut_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result.GetReducingHealth
struct UEventDataCollectionValues_UnderEnermyAttack_Result_GetReducingHealth_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result.GetKnockingOutReducingHealth
struct UEventDataCollectionValues_UnderEnermyAttack_Result_GetKnockingOutReducingHealth_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result.GetKnockingOut
struct UEventDataCollectionValues_UnderEnermyAttack_Result_GetKnockingOut_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Result2.GetWeedingOut2
struct UEventDataCollectionValues_UnderEnermyAttack_Result2_GetWeedingOut2_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetVehicleColliding
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetVehicleColliding_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetVehicleBombing
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetVehicleBombing_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetPoison
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetPoison_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetLastBreathWithoutRescue
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetLastBreathWithoutRescue_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetFalling
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetFalling_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetDrowning
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetDrowning_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetBombing
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetBombing_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.GetAirAttacking
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetAirAttacking_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_Reason.FromDamageEvent
struct UEventDataCollectionValues_UnderEnermyAttack_Reason_FromDamageEvent_Params
{
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetWalking
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetWalking_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetTurningHead
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetTurningHead_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetStanding
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetStanding_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetRunning
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetRunning_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetProning
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetProning_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetJumping
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetJumping_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetDying
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetDying_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetDriving
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetDriving_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetCrouching
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetCrouching_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.GetCarriging
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetCarriging_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.FromPawnStates
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_FromPawnStates_Params
{
	int64_t                                            PawnStates;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture.FromPawnState
struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_FromPawnState_Params
{
	EPawnState                                         PawnState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_UnderEnermyAttack_HurtAim.Get
struct UEventDataCollectionValues_UnderEnermyAttack_HurtAim_Get_Params
{
	class ASTExtraBaseCharacter*                       AttackerSTExtraBaseCharacter;                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.EventDataCollectionKeys_TakingDamage.GetResult
struct UEventDataCollectionKeys_TakingDamage_GetResult_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakingDamage.GetReason
struct UEventDataCollectionKeys_TakingDamage_GetReason_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakingDamage.GetPlayerName
struct UEventDataCollectionKeys_TakingDamage_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakingDamage.GetOpenId
struct UEventDataCollectionKeys_TakingDamage_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TakingDamage.GetLeftHealth
struct UEventDataCollectionKeys_TakingDamage_GetLeftHealth_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetVehicleColliding
struct UEventDataCollectionValues_TakingDamage_Reason_GetVehicleColliding_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetVehicleBombing
struct UEventDataCollectionValues_TakingDamage_Reason_GetVehicleBombing_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetPoison
struct UEventDataCollectionValues_TakingDamage_Reason_GetPoison_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetLastBreathWithoutRescue
struct UEventDataCollectionValues_TakingDamage_Reason_GetLastBreathWithoutRescue_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetFalling
struct UEventDataCollectionValues_TakingDamage_Reason_GetFalling_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetDrowning
struct UEventDataCollectionValues_TakingDamage_Reason_GetDrowning_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetBombing
struct UEventDataCollectionValues_TakingDamage_Reason_GetBombing_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.GetAirAttacking
struct UEventDataCollectionValues_TakingDamage_Reason_GetAirAttacking_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_TakingDamage_Reason.FromDamageEvent
struct UEventDataCollectionValues_TakingDamage_Reason_FromDamageEvent_Params
{
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CircleReducing.GetOpenId
struct UEventDataCollectionKeys_CircleReducing_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CircleChange.GetWorldLocation
struct UEventDataCollectionKeys_CircleChange_GetWorldLocation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CircleChange.GetOldCircleRadius
struct UEventDataCollectionKeys_CircleChange_GetOldCircleRadius_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CircleChange.GetOldCircleCenter
struct UEventDataCollectionKeys_CircleChange_GetOldCircleCenter_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CircleChange.GetNewCircleRadius
struct UEventDataCollectionKeys_CircleChange_GetNewCircleRadius_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CircleChange.GetNewCircleCenter
struct UEventDataCollectionKeys_CircleChange_GetNewCircleCenter_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Rescue.GetStatus
struct UEventDataCollectionKeys_Rescue_GetStatus_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Rescue.GetRescuePlayerName
struct UEventDataCollectionKeys_Rescue_GetRescuePlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Rescue.GetRescueOpenId
struct UEventDataCollectionKeys_Rescue_GetRescueOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Rescue.GetBeRescuePlayerName
struct UEventDataCollectionKeys_Rescue_GetBeRescuePlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Rescue.GetBeRescueOpenId
struct UEventDataCollectionKeys_Rescue_GetBeRescueOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetVehicleId
struct UEventDataCollectionKeys_DrivingVehicle_GetVehicleId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetTire
struct UEventDataCollectionKeys_DrivingVehicle_GetTire_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetStatus
struct UEventDataCollectionKeys_DrivingVehicle_GetStatus_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetSpeed
struct UEventDataCollectionKeys_DrivingVehicle_GetSpeed_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetPassengerOpenId
struct UEventDataCollectionKeys_DrivingVehicle_GetPassengerOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetOil
struct UEventDataCollectionKeys_DrivingVehicle_GetOil_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetDrivingType
struct UEventDataCollectionKeys_DrivingVehicle_GetDrivingType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetDriverUId
struct UEventDataCollectionKeys_DrivingVehicle_GetDriverUId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetDriverPlayerName
struct UEventDataCollectionKeys_DrivingVehicle_GetDriverPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_DrivingVehicle.GetDriverOpenId
struct UEventDataCollectionKeys_DrivingVehicle_GetDriverOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_DrivingVehicle_DrivingType.GetPassanger
struct UEventDataCollectionValues_DrivingVehicle_DrivingType_GetPassanger_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_DrivingVehicle_DrivingType.GetDriver
struct UEventDataCollectionValues_DrivingVehicle_DrivingType_GetDriver_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_DrivingVehicle_Status.GetOn
struct UEventDataCollectionValues_DrivingVehicle_Status_GetOn_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_DrivingVehicle_Status.GetOff
struct UEventDataCollectionValues_DrivingVehicle_Status_GetOff_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_ReloadingBullet.GetMaxBulletCountInClip
struct UEventDataCollectionKeys_ReloadingBullet_GetMaxBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_ReloadingBullet.GetBulletCountInClip
struct UEventDataCollectionKeys_ReloadingBullet_GetBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_ReloadingBullet.GetBulletCountInBarrel
struct UEventDataCollectionKeys_ReloadingBullet_GetBulletCountInBarrel_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_AirDrop.GetType
struct UEventDataCollectionKeys_AirDrop_GetType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_AirDrop.GetPosition
struct UEventDataCollectionKeys_AirDrop_GetPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_AirDrop.GetLandedPosition
struct UEventDataCollectionKeys_AirDrop_GetLandedPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_AirDrop_Type.GetSuper
struct UEventDataCollectionValues_AirDrop_Type_GetSuper_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_AirDrop_Type.GetNormal
struct UEventDataCollectionValues_AirDrop_Type_GetNormal_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_ItemAttach.GetState
struct UEventDataCollectionKeys_ItemAttach_GetState_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_ItemAttach.GetOpenId
struct UEventDataCollectionKeys_ItemAttach_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_ItemAttach.GetItemId
struct UEventDataCollectionKeys_ItemAttach_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_ItemAttach.GetAttachmentId
struct UEventDataCollectionKeys_ItemAttach_GetAttachmentId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_ItemAttach_State.GetDetaching
struct UEventDataCollectionValues_ItemAttach_State_GetDetaching_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_ItemAttach_State.GetAttaching
struct UEventDataCollectionValues_ItemAttach_State_GetAttaching_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PlayerInfo.GetSex
struct UEventDataCollectionKeys_PlayerInfo_GetSex_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PlayerInfo.GetPlayerName
struct UEventDataCollectionKeys_PlayerInfo_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PlayerInfo.GetAvatars
struct UEventDataCollectionKeys_PlayerInfo_GetAvatars_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_PlayerInfo_Sex.GetMale
struct UEventDataCollectionValues_PlayerInfo_Sex_GetMale_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_PlayerInfo_Sex.GetFemale
struct UEventDataCollectionValues_PlayerInfo_Sex_GetFemale_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_MiniMapShowInfo.GetVoiceCheck
struct UEventDataCollectionKeys_MiniMapShowInfo_GetVoiceCheck_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_MiniMapShowInfo.GetPosition
struct UEventDataCollectionKeys_MiniMapShowInfo_GetPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetWeapon
struct UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetWeapon_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetTyre
struct UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetTyre_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetSilentWeapon
struct UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetSilentWeapon_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetGlass
struct UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetGlass_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck.GetFootPrint
struct UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetFootPrint_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Following.GetFollowType
struct UEventDataCollectionKeys_Following_GetFollowType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Following.GetFollowerOpenId
struct UEventDataCollectionKeys_Following_GetFollowerOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Following.GetFolloweeOpenId
struct UEventDataCollectionKeys_Following_GetFolloweeOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Following_FollowType.GetRefuse
struct UEventDataCollectionValues_Following_FollowType_GetRefuse_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Following_FollowType.GetInvitation
struct UEventDataCollectionValues_Following_FollowType_GetInvitation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Following_FollowType.GetFollowing
struct UEventDataCollectionValues_Following_FollowType_GetFollowing_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Following_FollowType.GetCancellation
struct UEventDataCollectionValues_Following_FollowType_GetCancellation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Following_FollowType.GetAcception
struct UEventDataCollectionValues_Following_FollowType_GetAcception_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_MiniMapPinning.GetType
struct UEventDataCollectionKeys_MiniMapPinning_GetType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_MiniMapPinning.GetPinPosition
struct UEventDataCollectionKeys_MiniMapPinning_GetPinPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_MiniMapPinning.GetOpenId
struct UEventDataCollectionKeys_MiniMapPinning_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_MiniMapPinning_Type.GetPinning
struct UEventDataCollectionValues_MiniMapPinning_Type_GetPinning_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_MiniMapPinning_Type.GetNonPinning
struct UEventDataCollectionValues_MiniMapPinning_Type_GetNonPinning_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Blocking.GetType
struct UEventDataCollectionKeys_Blocking_GetType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Blocking.GetBlockerOpenId
struct UEventDataCollectionKeys_Blocking_GetBlockerOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Blocking.GetBlockerIndex
struct UEventDataCollectionKeys_Blocking_GetBlockerIndex_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Blocking.GetBlockeeOpenId
struct UEventDataCollectionKeys_Blocking_GetBlockeeOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Blocking.GetBlockeeIndex
struct UEventDataCollectionKeys_Blocking_GetBlockeeIndex_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Blocking_Type.GetNonBlocking
struct UEventDataCollectionValues_Blocking_Type_GetNonBlocking_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_Blocking_Type.GetBlocking
struct UEventDataCollectionValues_Blocking_Type_GetBlocking_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Dancing.GetDancerOpenId
struct UEventDataCollectionKeys_Dancing_GetDancerOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_Dancing.GetDanceId
struct UEventDataCollectionKeys_Dancing_GetDanceId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetOpenId
struct UEventDataCollectionKeys_PickingupTombBox_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetItemIDs
struct UEventDataCollectionKeys_PickingupTombBox_GetItemIDs_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetItemId
struct UEventDataCollectionKeys_PickingupTombBox_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetItemCounts
struct UEventDataCollectionKeys_PickingupTombBox_GetItemCounts_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetItemCount
struct UEventDataCollectionKeys_PickingupTombBox_GetItemCount_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PickingupTombBox.GetBoxName
struct UEventDataCollectionKeys_PickingupTombBox_GetBoxName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_AirAttacking.GetWorldLocation
struct UEventDataCollectionKeys_AirAttacking_GetWorldLocation_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_AirAttacking.GetCenter
struct UEventDataCollectionKeys_AirAttacking_GetCenter_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CurrentWeapon.GetMaxBulletCountInClip
struct UEventDataCollectionKeys_CurrentWeapon_GetMaxBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CurrentWeapon.GetItemId
struct UEventDataCollectionKeys_CurrentWeapon_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CurrentWeapon.GetBulletCountInClip
struct UEventDataCollectionKeys_CurrentWeapon_GetBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_CurrentWeapon.GetBulletCountInBarrel
struct UEventDataCollectionKeys_CurrentWeapon_GetBulletCountInBarrel_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_SceneInfo.GetIsInHouse
struct UEventDataCollectionKeys_SceneInfo_GetIsInHouse_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_SceneInfo_IsInHouse.GetYes
struct UEventDataCollectionValues_SceneInfo_IsInHouse_GetYes_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_SceneInfo_IsInHouse.GetNo
struct UEventDataCollectionValues_SceneInfo_IsInHouse_GetNo_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TeamInfo.GetTeammateUIds
struct UEventDataCollectionKeys_TeamInfo_GetTeammateUIds_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TeamInfo.GetTeammateOpenIds
struct UEventDataCollectionKeys_TeamInfo_GetTeammateOpenIds_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TeamInfo.GetTeamId
struct UEventDataCollectionKeys_TeamInfo_GetTeamId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_EnteringLeavingTeam.GetTeamId
struct UEventDataCollectionKeys_EnteringLeavingTeam_GetTeamId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_EnteringLeavingTeam.GetOpenId
struct UEventDataCollectionKeys_EnteringLeavingTeam_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_EnteringLeavingTeam.GetAction
struct UEventDataCollectionKeys_EnteringLeavingTeam_GetAction_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_EnteringLeavingTeam_Action.GetLeaving
struct UEventDataCollectionValues_EnteringLeavingTeam_Action_GetLeaving_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_EnteringLeavingTeam_Action.GetEntering
struct UEventDataCollectionValues_EnteringLeavingTeam_Action_GetEntering_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_OnOffline.GetType
struct UEventDataCollectionKeys_OnOffline_GetType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_OnOffline.GetOpenId
struct UEventDataCollectionKeys_OnOffline_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_OnOffline_Type.GetOnline
struct UEventDataCollectionValues_OnOffline_Type_GetOnline_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_OnOffline_Type.GetOffline
struct UEventDataCollectionValues_OnOffline_Type_GetOffline_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankList.GetType
struct UEventDataCollectionKeys_RankList_GetType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankList.GetState
struct UEventDataCollectionKeys_RankList_GetState_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_RankList.GetOpenId
struct UEventDataCollectionKeys_RankList_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_RankList_State.GetOn
struct UEventDataCollectionValues_RankList_State_GetOn_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_RankList_State.GetOff
struct UEventDataCollectionValues_RankList_State_GetOff_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TextMessage.GetText
struct UEventDataCollectionKeys_TextMessage_GetText_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TextMessage.GetOpenId
struct UEventDataCollectionKeys_TextMessage_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TextMessage.GetItemPosition
struct UEventDataCollectionKeys_TextMessage_GetItemPosition_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_TextMessage.GetItemId
struct UEventDataCollectionKeys_TextMessage_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PawnState.IsInterestedPawnStates
struct UEventDataCollectionKeys_PawnState_IsInterestedPawnStates_Params
{
	EPawnState                                         PawnState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.EventDataCollectionKeys_PawnState.GetType
struct UEventDataCollectionKeys_PawnState_GetType_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PawnState.GetStates
struct UEventDataCollectionKeys_PawnState_GetStates_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PawnState.GetOpenId
struct UEventDataCollectionKeys_PawnState_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_PawnState.GetChangedState
struct UEventDataCollectionKeys_PawnState_GetChangedState_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_PawnState_State.GetLeaving
struct UEventDataCollectionValues_PawnState_State_GetLeaving_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_PawnState_State.GetEntering
struct UEventDataCollectionValues_PawnState_State_GetEntering_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_OpenCloseDoor.GetRightState
struct UEventDataCollectionKeys_OpenCloseDoor_GetRightState_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_OpenCloseDoor.GetOpenId
struct UEventDataCollectionKeys_OpenCloseDoor_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_OpenCloseDoor.GetLeftState
struct UEventDataCollectionKeys_OpenCloseDoor_GetLeftState_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_OpenCloseDoor_RightState.GetOpen
struct UEventDataCollectionValues_OpenCloseDoor_RightState_GetOpen_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_OpenCloseDoor_RightState.GetClose
struct UEventDataCollectionValues_OpenCloseDoor_RightState_GetClose_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionValues_OpenCloseDoor_RightState.GetBroken
struct UEventDataCollectionValues_OpenCloseDoor_RightState_GetBroken_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_MicSpeakerState.GetSpeaker
struct UEventDataCollectionKeys_MicSpeakerState_GetSpeaker_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_MicSpeakerState.GetOpenId
struct UEventDataCollectionKeys_MicSpeakerState_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_MicSpeakerState.GetMic
struct UEventDataCollectionKeys_MicSpeakerState_GetMic_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_VehicleState.GetWheelStates
struct UEventDataCollectionKeys_VehicleState_GetWheelStates_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_VehicleState.GetHp
struct UEventDataCollectionKeys_VehicleState_GetHp_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_VehicleState.GetFuel
struct UEventDataCollectionKeys_VehicleState_GetFuel_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.EventDataCollectionKeys_VehicleState.GetForwardSpeed
struct UEventDataCollectionKeys_VehicleState_GetForwardSpeed_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Addons.FloatingCapsuleVehicle.VehicleBreakOutVelocity
struct AFloatingCapsuleVehicle_VehicleBreakOutVelocity_Params
{
	struct FVector                                     ApplyVelocity;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bAddVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.SetTargetFloatState
struct AFloatingCapsuleVehicle_SetTargetFloatState_Params
{
	bool                                               bUpState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.SetServerPrecentPenetratingEnabled
struct AFloatingCapsuleVehicle_SetServerPrecentPenetratingEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.SetEnterDistanceSq
struct AFloatingCapsuleVehicle_SetEnterDistanceSq_Params
{
	float                                              InEnterDistance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSq;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.ServerBreakOut
struct AFloatingCapsuleVehicle_ServerBreakOut_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.OnRep_BreakOutState
struct AFloatingCapsuleVehicle_OnRep_BreakOutState_Params
{
	bool                                               bPrevState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.MoveWheelHeight
struct AFloatingCapsuleVehicle_MoveWheelHeight_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.GetFloatingVehicleMovement
struct AFloatingCapsuleVehicle_GetFloatingVehicleMovement_Params
{
	class USTExtraFloatingVehicleMovementComponentBase* ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.GetEnterDistanceSq
struct AFloatingCapsuleVehicle_GetEnterDistanceSq_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.DoBreakOut
struct AFloatingCapsuleVehicle_DoBreakOut_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.BreakOut
struct AFloatingCapsuleVehicle_BreakOut_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FloatingCapsuleVehicle.BPTryCheckSimulatePhysics
struct AFloatingCapsuleVehicle_BPTryCheckSimulatePhysics_Params
{
};

// Function Addons.FloatingVehicleVehicleMovementComponent2.UpdateEnabled
struct UFloatingVehicleVehicleMovementComponent2_UpdateEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.FloatingVehicleVehicleMovementComponent2.EnableUpdate
struct UFloatingVehicleVehicleMovementComponent2_EnableUpdate_Params
{
	bool                                               InEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FreeViewPawn.UnbindPlayerInputDelegate
struct AFreeViewPawn_UnbindPlayerInputDelegate_Params
{
};

// Function Addons.FreeViewPawn.SetController
struct AFreeViewPawn_SetController_Params
{
	class ASTExtraPlayerController*                    InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FreeViewPawn.MoveUp
struct AFreeViewPawn_MoveUp_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FreeViewPawn.MoveRight
struct AFreeViewPawn_MoveRight_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FreeViewPawn.MoveForward
struct AFreeViewPawn_MoveForward_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.FreeViewPawn.GetFreeViewOrigin
struct AFreeViewPawn_GetFreeViewOrigin_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.FreeViewPawn.BindPlayerInputDelegate
struct AFreeViewPawn_BindPlayerInputDelegate_Params
{
};

// Function Addons.HoveringVehicle.OnClientExit
struct AHoveringVehicle_OnClientExit_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicle.InitHoveringSpots
struct AHoveringVehicle_InitHoveringSpots_Params
{
};

// Function Addons.HoveringVehicle.HandleOnSeatDetached
struct AHoveringVehicle_HandleOnSeatDetached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicle.HandleOnSeatAttached
struct AHoveringVehicle_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicle.DeactivateHoveringSimulate
struct AHoveringVehicle_DeactivateHoveringSimulate_Params
{
};

// Function Addons.HoveringVehicle.ActivateHoveringSimulate
struct AHoveringVehicle_ActivateHoveringSimulate_Params
{
};

// Function Addons.HoveringVehicleMovementComponent.UpdateMovement
struct UHoveringVehicleMovementComponent_UpdateMovement_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.UpdateHoverSimulation
struct UHoveringVehicleMovementComponent_UpdateHoverSimulation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.SetThrottleInput
struct UHoveringVehicleMovementComponent_SetThrottleInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.SetSteeringInput
struct UHoveringVehicleMovementComponent_SetSteeringInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.ServerUpdateInput
struct UHoveringVehicleMovementComponent_ServerUpdateInput_Params
{
	float                                              InSteeringInput;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InThrottleInput;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.HoveringVehicleMovementComponent.Reset
struct UHoveringVehicleMovementComponent_Reset_Params
{
};

// Function Addons.LadderMovementComponent.StartPhaseMoving
struct ULadderMovementComponent_StartPhaseMoving_Params
{
};

// Function Addons.LadderMovementComponent.ShowDebugInformation
struct ULadderMovementComponent_ShowDebugInformation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.ServerMove
struct ULadderMovementComponent_ServerMove_Params
{
	struct FLadderMoveData                             LadderMoveData;                                           // (Parm)
	int                                                MoveDirection;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EnterOrLeave;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.ServerCheckClientError
struct ULadderMovementComponent_ServerCheckClientError_Params
{
	struct FLadderMoveData                             LadderMoveData;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.RequestCurrentLadderState
struct ULadderMovementComponent_RequestCurrentLadderState_Params
{
};

// Function Addons.LadderMovementComponent.ReceiveExitLadder
struct ULadderMovementComponent_ReceiveExitLadder_Params
{
};

// Function Addons.LadderMovementComponent.ReceiveEnterLadder
struct ULadderMovementComponent_ReceiveEnterLadder_Params
{
};

// Function Addons.LadderMovementComponent.PushBackSimAction
struct ULadderMovementComponent_PushBackSimAction_Params
{
	struct FLadderMoveData                             InData;                                                   // (Parm)
};

// Function Addons.LadderMovementComponent.PopFirstSimAction
struct ULadderMovementComponent_PopFirstSimAction_Params
{
};

// Function Addons.LadderMovementComponent.OnRep_NetLadderMoveState
struct ULadderMovementComponent_OnRep_NetLadderMoveState_Params
{
};

// Function Addons.LadderMovementComponent.OnCharacterExitLadder
struct ULadderMovementComponent_OnCharacterExitLadder_Params
{
};

// Function Addons.LadderMovementComponent.OnCharacterEnterLadder
struct ULadderMovementComponent_OnCharacterEnterLadder_Params
{
	class ALadderActor*                                Ladder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.LadderMoveInput
struct ULadderMovementComponent_LadderMoveInput_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.IsLeaving
struct ULadderMovementComponent_IsLeaving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.IsEntering
struct ULadderMovementComponent_IsEntering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.InitLadderParams
struct ULadderMovementComponent_InitLadderParams_Params
{
	class ALadderActor*                                Ladder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.HandleJump
struct ULadderMovementComponent_HandleJump_Params
{
};

// Function Addons.LadderMovementComponent.HandleInput
struct ULadderMovementComponent_HandleInput_Params
{
};

// Function Addons.LadderMovementComponent.GetStateName
struct ULadderMovementComponent_GetStateName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Addons.LadderMovementComponent.GetNextMoveData
struct ULadderMovementComponent_GetNextMoveData_Params
{
	struct FLadderMoveData                             Cur;                                                      // (Parm)
	int8_t                                             movedir;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLadderMoveData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Addons.LadderMovementComponent.GetLadderAnimSequence
struct ULadderMovementComponent_GetLadderAnimSequence_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.GatherCurrentLadderState
struct ULadderMovementComponent_GatherCurrentLadderState_Params
{
};

// Function Addons.LadderMovementComponent.ExitLadder
struct ULadderMovementComponent_ExitLadder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.EnterLadder
struct ULadderMovementComponent_EnterLadder_Params
{
	class ALadderActor*                                Ladder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTop;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.EndPhaseMoving
struct ULadderMovementComponent_EndPhaseMoving_Params
{
};

// Function Addons.LadderMovementComponent.EnableCharacterMovement
struct ULadderMovementComponent_EnableCharacterMovement_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.ClimbUpOneStepInternal
struct ULadderMovementComponent_ClimbUpOneStepInternal_Params
{
};

// Function Addons.LadderMovementComponent.ClimbDownOneStepInternal
struct ULadderMovementComponent_ClimbDownOneStepInternal_Params
{
};

// Function Addons.LadderMovementComponent.CheckValidPositionOnLadder
struct ULadderMovementComponent_CheckValidPositionOnLadder_Params
{
	class AActor*                                      Ladder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StepNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.CheckValidPosition
struct ULadderMovementComponent_CheckValidPosition_Params
{
	struct FVector                                     Pos;                                                      // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.CheckEnterOrExitLadder
struct ULadderMovementComponent_CheckEnterOrExitLadder_Params
{
};

// Function Addons.LadderMovementComponent.CheckAutoEnterLadder
struct ULadderMovementComponent_CheckAutoEnterLadder_Params
{
};

// Function Addons.LadderMovementComponent.CatchUp
struct ULadderMovementComponent_CatchUp_Params
{
	struct FLadderMoveData                             LadderMoveData;                                           // (Parm)
};

// Function Addons.LadderMovementComponent.CalcLocationOnLadder
struct ULadderMovementComponent_CalcLocationOnLadder_Params
{
	class AActor*                                      Ladder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StepNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.BuildActionQueue
struct ULadderMovementComponent_BuildActionQueue_Params
{
	struct FLadderMoveData                             Target;                                                   // (Parm)
};

// Function Addons.LadderMovementComponent.BindPlayerMoveInput
struct ULadderMovementComponent_BindPlayerMoveInput_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LadderMovementComponent.AdjustClient
struct ULadderMovementComponent_AdjustClient_Params
{
	struct FLadderMoveData                             LadderMoveData;                                           // (Parm)
};

// Function Addons.LandingCreatureAnimInstance.SetJump
struct ULandingCreatureAnimInstance_SetJump_Params
{
};

// Function Addons.LandingCreatureAnimInstance.ResetStop
struct ULandingCreatureAnimInstance_ResetStop_Params
{
};

// Function Addons.LandingCreatureAnimInstance.ResetJump
struct ULandingCreatureAnimInstance_ResetJump_Params
{
};

// Function Addons.LandingCreatureAnimInstance.ResetDoRandomIdle
struct ULandingCreatureAnimInstance_ResetDoRandomIdle_Params
{
};

// Function Addons.LandingCreatureAnimInstance.DoRandomIdle
struct ULandingCreatureAnimInstance_DoRandomIdle_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.LandingCreatureDriverAnimInstance.OnCreatureJumped
struct ULandingCreatureDriverAnimInstance_OnCreatureJumped_Params
{
};

// Function Addons.MonsterRaptorAnimInstance.OnResetPlayedIdleIndex
struct UMonsterRaptorAnimInstance_OnResetPlayedIdleIndex_Params
{
	int                                                NewIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OBHttpComponent.ServerGetBackPackInfo
struct UOBHttpComponent_ServerGetBackPackInfo_Params
{
	int                                                TeamID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OBHttpComponent.ServerGetAllPlayerThrowInfo
struct UOBHttpComponent_ServerGetAllPlayerThrowInfo_Params
{
};

// Function Addons.OBHttpComponent.ServerCollectTeammateItemList
struct UOBHttpComponent_ServerCollectTeammateItemList_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OBHttpComponent.PostTeamWeaponInfo
struct UOBHttpComponent_PostTeamWeaponInfo_Params
{
	struct FString                                     TeamWeaponInfoJsonStr;                                    // (Parm, ZeroConstructor)
};

// Function Addons.OBHttpComponent.PostTeamBackPackInfoByTeamID
struct UOBHttpComponent_PostTeamBackPackInfoByTeamID_Params
{
	int                                                TeamID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.OBHttpComponent.PostTDMResultInfo
struct UOBHttpComponent_PostTDMResultInfo_Params
{
	struct FString                                     TDMResultInfoJsonStr;                                     // (Parm, ZeroConstructor)
};

// Function Addons.OBHttpComponent.PostPlayersAMInfo
struct UOBHttpComponent_PostPlayersAMInfo_Params
{
	struct FString                                     PlayerAMInfoJsonStr;                                      // (Parm, ZeroConstructor)
};

// Function Addons.OBHttpComponent.OnRep_RealTimeAPIList
struct UOBHttpComponent_OnRep_RealTimeAPIList_Params
{
};

// Function Addons.OBHttpComponent.OnRep_AfterMatchAPIList
struct UOBHttpComponent_OnRep_AfterMatchAPIList_Params
{
};

// Function Addons.OBHttpComponent.ClientUpdateTeammateItemList
struct UOBHttpComponent_ClientUpdateTeammateItemList_Params
{
};

// Function Addons.OBHttpComponent.ClientGetPlayerUseSightInfo
struct UOBHttpComponent_ClientGetPlayerUseSightInfo_Params
{
	TArray<struct FPlayerSightUsageInfoCompress>       PlayerSightUsageInfoCompress;                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Addons.OBHttpComponent.ClientGetBackPackInfo
struct UOBHttpComponent_ClientGetBackPackInfo_Params
{
	TArray<struct FPlayerBackPackInfo>                 TeamBackPackInfo;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Addons.OBHttpComponent.ClientGetAllPlayerThrowInfo
struct UOBHttpComponent_ClientGetAllPlayerThrowInfo_Params
{
	TArray<struct FPlayerThrowInfo>                    AllPlayerThrowInfo;                                       // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Addons.OBHttpComponent.ClientGetAirDropBoxInfo
struct UOBHttpComponent_ClientGetAirDropBoxInfo_Params
{
	unsigned char                                      AirDropId;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAirDropBoxDataItem>                 AirDropBoxDataList;                                       // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Addons.ObserverProbeComponent.PostInfoAfterMatch
struct UObserverProbeComponent_PostInfoAfterMatch_Params
{
};

// Function Addons.ObserverProbeComponent.OnTerminatorEndGame
struct UObserverProbeComponent_OnTerminatorEndGame_Params
{
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExtraParam;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ObserverProbeComponent.CollectSightUseTime
struct UObserverProbeComponent_CollectSightUseTime_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SightId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUse;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PCOBCommonComponent.TrackingEnd
struct UPCOBCommonComponent_TrackingEnd_Params
{
};

// Function Addons.PCOBCommonComponent.PCOBTerminator
struct UPCOBCommonComponent_PCOBTerminator_Params
{
	class ASTExtraBaseCharacter*                       Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurAnimInstance.ResetStartFlying
struct UPterosaurAnimInstance_ResetStartFlying_Params
{
};

// Function Addons.PterosaurAnimInstance.OnStartFlying
struct UPterosaurAnimInstance_OnStartFlying_Params
{
};

// Function Addons.PterosaurMovementComponent.UpdateVerticalHeight
struct UPterosaurMovementComponent_UpdateVerticalHeight_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.StartTakingOff
struct UPterosaurMovementComponent_StartTakingOff_Params
{
};

// Function Addons.PterosaurMovementComponent.StartSwoopDown
struct UPterosaurMovementComponent_StartSwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.StartLanding
struct UPterosaurMovementComponent_StartLanding_Params
{
};

// Function Addons.PterosaurMovementComponent.StartFlyingDive
struct UPterosaurMovementComponent_StartFlyingDive_Params
{
};

// Function Addons.PterosaurMovementComponent.SetServerDiveDirection
struct UPterosaurMovementComponent_SetServerDiveDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.SetMovementMode
struct UPterosaurMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.SetAutoLanding
struct UPterosaurMovementComponent_SetAutoLanding_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsTakingOff
struct UPterosaurMovementComponent_IsTakingOff_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsSwoopDown
struct UPterosaurMovementComponent_IsSwoopDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsSwoopCatching
struct UPterosaurMovementComponent_IsSwoopCatching_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsStrugglingToLand
struct UPterosaurMovementComponent_IsStrugglingToLand_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsLocalSwoopingDown
struct UPterosaurMovementComponent_IsLocalSwoopingDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsLandingWalking
struct UPterosaurMovementComponent_IsLandingWalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsLanding
struct UPterosaurMovementComponent_IsLanding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsDiving
struct UPterosaurMovementComponent_IsDiving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsCurveMoving
struct UPterosaurMovementComponent_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.GetMoveState
struct UPterosaurMovementComponent_GetMoveState_Params
{
	EPterosaurMoveMode                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.GetDistanceToLand
struct UPterosaurMovementComponent_GetDistanceToLand_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.ExitSwoopDown
struct UPterosaurMovementComponent_ExitSwoopDown_Params
{
};

// Function Addons.PterosaurMovementComponent.ExitLanding
struct UPterosaurMovementComponent_ExitLanding_Params
{
};

// Function Addons.PterosaurMovementComponent.EndTakingOff
struct UPterosaurMovementComponent_EndTakingOff_Params
{
};

// Function Addons.PterosaurMovementComponent.EndSwoopDown
struct UPterosaurMovementComponent_EndSwoopDown_Params
{
	bool                                               bRestVelocity;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.EndLanding
struct UPterosaurMovementComponent_EndLanding_Params
{
};

// Function Addons.PterosaurMovementComponent.EndFlyingDive
struct UPterosaurMovementComponent_EndFlyingDive_Params
{
};

// Function Addons.PterosaurMovementComponent.DealWithCustomAction
struct UPterosaurMovementComponent_DealWithCustomAction_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.CheckCanStartFlyingDive
struct UPterosaurMovementComponent_CheckCanStartFlyingDive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.CalculateFlyingVelocity
struct UPterosaurMovementComponent_CalculateFlyingVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.CalculateFlyingAcceleration
struct UPterosaurMovementComponent_CalculateFlyingAcceleration_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.CalculateDivingVelocity
struct UPterosaurMovementComponent_CalculateDivingVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.TryFlyingDive
struct APterosaurVehicle_TryFlyingDive_Params
{
	bool                                               bTry;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.TryCancelSwoopDown
struct APterosaurVehicle_TryCancelSwoopDown_Params
{
};

// Function Addons.PterosaurVehicle.ServerSwoopDown
struct APterosaurVehicle_ServerSwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
	bool                                               IsForceEnd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.ServerReleaseCharacter
struct APterosaurVehicle_ServerReleaseCharacter_Params
{
	class ASTExtraBaseCharacter*                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.OnRep_SyncSwoopCatchState
struct APterosaurVehicle_OnRep_SyncSwoopCatchState_Params
{
};

// Function Addons.PterosaurVehicle.OnPterosaurSwoopStateChanged
struct APterosaurVehicle_OnPterosaurSwoopStateChanged_Params
{
	EPterosaurSwoopStage                               NewStage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.OnPterosaurPrepareCatch
struct APterosaurVehicle_OnPterosaurPrepareCatch_Params
{
};

// Function Addons.PterosaurVehicle.OnClientExitFromPterosaur
struct APterosaurVehicle_OnClientExitFromPterosaur_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.MultiCast_SwoopDown
struct APterosaurVehicle_MultiCast_SwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.MultiCast_SplineCorrect
struct APterosaurVehicle_MultiCast_SplineCorrect_Params
{
	struct FVector                                     SyncLocation;                                             // (Parm, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
	TArray<struct FVector>                             SplinePoints;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Addons.PterosaurVehicle.IsSwoopDown
struct APterosaurVehicle_IsSwoopDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.IsSwoopCoolDown
struct APterosaurVehicle_IsSwoopCoolDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.IsSwoopCatching
struct APterosaurVehicle_IsSwoopCatching_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.HandleOnSeatDetached
struct APterosaurVehicle_HandleOnSeatDetached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.HandleOnSeatAttached
struct APterosaurVehicle_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.GetPterosaurMovementComponent
struct APterosaurVehicle_GetPterosaurMovementComponent_Params
{
	class UPterosaurMovementComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.GetConsumeFuelRate
struct APterosaurVehicle_GetConsumeFuelRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.ForceCatchCharacter
struct APterosaurVehicle_ForceCatchCharacter_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.DoSwoopDown
struct APterosaurVehicle_DoSwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.CanConsumeFuel
struct APterosaurVehicle_CanConsumeFuel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.BroadCastOnPterosaurPrepareCatch
struct APterosaurVehicle_BroadCastOnPterosaurPrepareCatch_Params
{
};

// Function Addons.PterosaurVehicle.BPOnPterosaurSwoopStateChanged
struct APterosaurVehicle_BPOnPterosaurSwoopStateChanged_Params
{
	unsigned char                                      NewStage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.RaptorMovementComponent.GetWalkingAccResistance
struct URaptorMovementComponent_GetWalkingAccResistance_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.RaptorMovementComponent.GetMaxAcceleration
struct URaptorMovementComponent_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.RaptorVehicle.SetHandBrake
struct ARaptorVehicle_SetHandBrake_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.RaptorVehicle.ServerSetHandBrake
struct ARaptorVehicle_ServerSetHandBrake_Params
{
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.RaptorVehicle.MulticastDoJump
struct ARaptorVehicle_MulticastDoJump_Params
{
};

// Function Addons.RaptorVehicle.GetRaptorMovementComponent
struct ARaptorVehicle_GetRaptorMovementComponent_Params
{
	class URaptorMovementComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.RaptorVehicle.DoJump
struct ARaptorVehicle_DoJump_Params
{
};

// Function Addons.ReindeerBioVehicle.TryAttachToOtherVehicle
struct AReindeerBioVehicle_TryAttachToOtherVehicle_Params
{
};

// Function Addons.ReindeerBioVehicle.OnClientExitFromAttachedVehicle
struct AReindeerBioVehicle_OnClientExitFromAttachedVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerBioVehicle.MulticastDoJump
struct AReindeerBioVehicle_MulticastDoJump_Params
{
};

// Function Addons.ReindeerBioVehicle.K2_OnClientAttachWithReindeerCart
struct AReindeerBioVehicle_K2_OnClientAttachWithReindeerCart_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerBioVehicle.HandleVehicleHealthDestroy
struct AReindeerBioVehicle_HandleVehicleHealthDestroy_Params
{
};

// Function Addons.ReindeerBioVehicle.GetVehicleAttachState
struct AReindeerBioVehicle_GetVehicleAttachState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.ReindeerBioVehicle.GetVehicleAttachComp
struct AReindeerBioVehicle_GetVehicleAttachComp_Params
{
	class UVehicleAttachmentComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.ReindeerBioVehicle.GetBioFlyMovementComponent
struct AReindeerBioVehicle_GetBioFlyMovementComponent_Params
{
	class UBioFlyMovementComponentBase*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.ReindeerBioVehicle.GetAttachedVehicle
struct AReindeerBioVehicle_GetAttachedVehicle_Params
{
	class ASTExtraVehicleBase*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.ReindeerBioVehicle.DoJump
struct AReindeerBioVehicle_DoJump_Params
{
};

// Function Addons.ReindeerBioVehicle.DoAttachLogic
struct AReindeerBioVehicle_DoAttachLogic_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerBioVehicle.ConsumeNeedPlayMountMontage
struct AReindeerBioVehicle_ConsumeNeedPlayMountMontage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.ReindeerBioVehicle.BroadCastPlayMountMontage
struct AReindeerBioVehicle_BroadCastPlayMountMontage_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerBioVehicle.ActiveRagDoll
struct AReindeerBioVehicle_ActiveRagDoll_Params
{
};

// Function Addons.ReindeerCartVehicle.UpdateParticleState
struct AReindeerCartVehicle_UpdateParticleState_Params
{
};

// Function Addons.ReindeerCartVehicle.TryAttachToOtherVehicle
struct AReindeerCartVehicle_TryAttachToOtherVehicle_Params
{
};

// Function Addons.ReindeerCartVehicle.SetMovingParticleActived
struct AReindeerCartVehicle_SetMovingParticleActived_Params
{
	bool                                               Inactive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.SetFloatingParticleActived
struct AReindeerCartVehicle_SetFloatingParticleActived_Params
{
	bool                                               Inactive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.OnParticleEffectLoadingFinished
struct AReindeerCartVehicle_OnParticleEffectLoadingFinished_Params
{
};

// Function Addons.ReindeerCartVehicle.OnClientExitFromAttachedVehicle
struct AReindeerCartVehicle_OnClientExitFromAttachedVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.LoadParticleEffect
struct AReindeerCartVehicle_LoadParticleEffect_Params
{
};

// Function Addons.ReindeerCartVehicle.K2_OnClientAttachToReindeer
struct AReindeerCartVehicle_K2_OnClientAttachToReindeer_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.HandleVehicleHealthDestroy
struct AReindeerCartVehicle_HandleVehicleHealthDestroy_Params
{
};

// Function Addons.ReindeerCartVehicle.HandleOnSeatAttached
struct AReindeerCartVehicle_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.GetVehicleAttachState
struct AReindeerCartVehicle_GetVehicleAttachState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.GetVehicleAttachComp
struct AReindeerCartVehicle_GetVehicleAttachComp_Params
{
	class UVehicleAttachmentComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.GetForwardSpeed
struct AReindeerCartVehicle_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.GetAttachedVehicle
struct AReindeerCartVehicle_GetAttachedVehicle_Params
{
	class ASTExtraVehicleBase*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.DoAttachLogic
struct AReindeerCartVehicle_DoAttachLogic_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.ReindeerCartVehicle.DestroyAllCachedParticleEffect
struct AReindeerCartVehicle_DestroyAllCachedParticleEffect_Params
{
};

// Function Addons.ReindeerCartVehicle.CloseWheelsCollision
struct AReindeerCartVehicle_CloseWheelsCollision_Params
{
};

// Function Addons.ReindeerSeatComponent.GetTotalSeatsNum
struct UReindeerSeatComponent_GetTotalSeatsNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.UpdateTuring
struct USplineMoveObj_UpdateTuring_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.UpdateSplineMoveTurning
struct USplineMoveObj_UpdateSplineMoveTurning_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.UpdateMoveSound
struct USplineMoveObj_UpdateMoveSound_Params
{
};

// Function Addons.SplineMoveObj.UpdateFocusRotation
struct USplineMoveObj_UpdateFocusRotation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.UpdateCameraLag
struct USplineMoveObj_UpdateCameraLag_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.TryEnterSpline
struct USplineMoveObj_TryEnterSpline_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.StopMoveSound
struct USplineMoveObj_StopMoveSound_Params
{
};

// Function Addons.SplineMoveObj.StartSplineMoveCameraLag
struct USplineMoveObj_StartSplineMoveCameraLag_Params
{
};

// Function Addons.SplineMoveObj.SplineMoveTurningEnd
struct USplineMoveObj_SplineMoveTurningEnd_Params
{
};

// Function Addons.SplineMoveObj.SplineMoveTurningBegin
struct USplineMoveObj_SplineMoveTurningBegin_Params
{
	struct FVector                                     InTargetDir;                                              // (Parm, IsPlainOldData)
	bool                                               bIsLeft;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.SetSplineMoveState
struct USplineMoveObj_SetSplineMoveState_Params
{
	TEnumAsByte<ECustomMovmentMode>                    InMoveState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.SetSpline
struct USplineMoveObj_SetSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.SplineMoveObj.ServerPlayerTryEnterSpline
struct USplineMoveObj_ServerPlayerTryEnterSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     EnterLocation;                                            // (Parm, IsPlainOldData)
	struct FRotator                                    EnterRot;                                                 // (Parm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.PlayMoveSound
struct USplineMoveObj_PlayMoveSound_Params
{
};

// Function Addons.SplineMoveObj.PlayerLeaveSpline
struct USplineMoveObj_PlayerLeaveSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         InMovementMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.PlayerEnterSpline
struct USplineMoveObj_PlayerEnterSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     EnterLoc;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    EnterRot;                                                 // (Parm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.OwnerJump
struct USplineMoveObj_OwnerJump_Params
{
};

// Function Addons.SplineMoveObj.OwnerHasWeapon
struct USplineMoveObj_OwnerHasWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.OnSplineMoveHit
struct USplineMoveObj_OnSplineMoveHit_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.OnSpecialMoveCharacterJump
struct USplineMoveObj_OnSpecialMoveCharacterJump_Params
{
};

// Function Addons.SplineMoveObj.OnSimulateCharStateChanged
struct USplineMoveObj_OnSimulateCharStateChanged_Params
{
	uint64_t                                           InCurrentStates;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           InPrevStates;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.OnPlayerRespawn
struct USplineMoveObj_OnPlayerRespawn_Params
{
	class AUAEPlayerController*                        PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.OnPawnStateInterrupted
struct USplineMoveObj_OnPawnStateInterrupted_Params
{
	EPawnState                                         State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPawnState                                         InterruptedBy;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.OnPawnLeaveState
struct USplineMoveObj_OnPawnLeaveState_Params
{
	EPawnState                                         LeaveState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.OnPawnEnterState
struct USplineMoveObj_OnPawnEnterState_Params
{
	EPawnState                                         EnterState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.MoveAlongSplineError
struct USplineMoveObj_MoveAlongSplineError_Params
{
};

// Function Addons.SplineMoveObj.InteractEnterSpline
struct USplineMoveObj_InteractEnterSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.SplineMoveObj.InSplineMoveState
struct USplineMoveObj_InSplineMoveState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.HandleBeginTouchScreen
struct USplineMoveObj_HandleBeginTouchScreen_Params
{
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.GetSplineMoveState
struct USplineMoveObj_GetSplineMoveState_Params
{
	TEnumAsByte<ECustomMovmentMode>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.GetProjectionLocationOnSpline
struct USplineMoveObj_GetProjectionLocationOnSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     InLocation;                                               // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.GetPlayerEnterSplineRotation
struct USplineMoveObj_GetPlayerEnterSplineRotation_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.GetPlayerEnterSplineLocation
struct USplineMoveObj_GetPlayerEnterSplineLocation_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.GetDistanceAlongSplineAtWorldLocation
struct USplineMoveObj_GetDistanceAlongSplineAtWorldLocation_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     InLoc;                                                    // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.GetCurrentTime
struct USplineMoveObj_GetCurrentTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.GetCharacterOwner
struct USplineMoveObj_GetCharacterOwner_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.ForceLeaveSpline
struct USplineMoveObj_ForceLeaveSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.SplineMoveObj.EndSplineMoveCameraLag
struct USplineMoveObj_EndSplineMoveCameraLag_Params
{
};

// Function Addons.SplineMoveObj.EnableFocusRotation
struct USplineMoveObj_EnableFocusRotation_Params
{
	bool                                               InEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.SplineMoveObj.CustomModeIsSplineMove
struct USplineMoveObj_CustomModeIsSplineMove_Params
{
	unsigned char                                      InCustomMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.SplineMoveObj.ClientPlayerLeaveSpline
struct USplineMoveObj_ClientPlayerLeaveSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.SplineMoveObj.AsyncLoadSoundResourceFinish
struct USplineMoveObj_AsyncLoadSoundResourceFinish_Params
{
};

// Function Addons.SplineMoveObj.AsyncLoadSoundResource
struct USplineMoveObj_AsyncLoadSoundResource_Params
{
};

// Function Addons.SplineMoveObj.AllowTryEnterSpline
struct USplineMoveObj_AllowTryEnterSpline_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.TRexVehicleDamageComponent.HandleFootOverlapVehicle
struct UTRexVehicleDamageComponent_HandleFootOverlapVehicle_Params
{
	class ASTExtraVehicleBase*                         OverlappedVehicle;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             DamageCollision;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FOverlapResult                              OverlapResult;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function Addons.TRexVehicleDamageComponent.HandleFootOverlapCharacter
struct UTRexVehicleDamageComponent_HandleFootOverlapCharacter_Params
{
	class ASTExtraBaseCharacter*                       OverlappedCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             DamageCollision;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FOverlapResult                              OverlapResult;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexAnimInstance.ResetStartMoving
struct UTyrannosaurusRexAnimInstance_ResetStartMoving_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.ShowRoarOverSpeedTips
struct ATyrannosaurusRexVehicle_ShowRoarOverSpeedTips_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.ShakeNearbyPlayerCamera
struct ATyrannosaurusRexVehicle_ShakeNearbyPlayerCamera_Params
{
	class UClass*                                      CameraShakeClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.ServerStopRoar
struct ATyrannosaurusRexVehicle_ServerStopRoar_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.ServerRoar
struct ATyrannosaurusRexVehicle_ServerRoar_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.ServerBreakOut
struct ATyrannosaurusRexVehicle_ServerBreakOut_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.PrepareApplyRoarAttack
struct ATyrannosaurusRexVehicle_PrepareApplyRoarAttack_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.OnTRexHPCHanged
struct ATyrannosaurusRexVehicle_OnTRexHPCHanged_Params
{
	float                                              NewHP;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HPMax;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.OnRoarFinished
struct ATyrannosaurusRexVehicle_OnRoarFinished_Params
{
	TEnumAsByte<EBioVehicleSkillStopReason>            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.OnRep_bIsRoaring
struct ATyrannosaurusRexVehicle_OnRep_bIsRoaring_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.GetVehicleMovement
struct ATyrannosaurusRexVehicle_GetVehicleMovement_Params
{
	class URaptorMovementComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.GetVehicleBreakOutState
struct ATyrannosaurusRexVehicle_GetVehicleBreakOutState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.GetNearlyPlayers
struct ATyrannosaurusRexVehicle_GetNearlyPlayers_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ASTExtraBaseCharacter*>               Results;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.EndRoarAttack
struct ATyrannosaurusRexVehicle_EndRoarAttack_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.ClientHandleVehicleDead
struct ATyrannosaurusRexVehicle_ClientHandleVehicleDead_Params
{
	bool                                               VehicleDeadDirection;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.CheckCanApplyDamageTo
struct ATyrannosaurusRexVehicle_CheckCanApplyDamageTo_Params
{
	class ASTExtraBaseCharacter*                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.CallClientDrawDebugSphere
struct ATyrannosaurusRexVehicle_CallClientDrawDebugSphere_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.BroadCastStopMontage
struct ATyrannosaurusRexVehicle_BroadCastStopMontage_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.BroadCastPlayRoarMontage
struct ATyrannosaurusRexVehicle_BroadCastPlayRoarMontage_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.BroadCastClientDrawSphere
struct ATyrannosaurusRexVehicle_BroadCastClientDrawSphere_Params
{
	struct FVector                                     Center;                                                   // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.BreakOut
struct ATyrannosaurusRexVehicle_BreakOut_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.ApplyRoarAttackToSpecifiedCharacter
struct ATyrannosaurusRexVehicle_ApplyRoarAttackToSpecifiedCharacter_Params
{
	class ASTExtraBaseCharacter*                       TargetCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.ApplyRoarAttack
struct ATyrannosaurusRexVehicle_ApplyRoarAttack_Params
{
};

// Function Addons.VehicleAttachmentComponent.TryToAttachOtherVehicle
struct UVehicleAttachmentComponent_TryToAttachOtherVehicle_Params
{
};

// Function Addons.VehicleAttachmentComponent.SetAttachState
struct UVehicleAttachmentComponent_SetAttachState_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.ServerDoAttachVehicle
struct UVehicleAttachmentComponent_ServerDoAttachVehicle_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.OnRep_AttachedVehicle
struct UVehicleAttachmentComponent_OnRep_AttachedVehicle_Params
{
	class ASTExtraVehicleBase*                         PrevVehicle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.GetAttachState
struct UVehicleAttachmentComponent_GetAttachState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.GetAttachedVehicle
struct UVehicleAttachmentComponent_GetAttachedVehicle_Params
{
	class ASTExtraVehicleBase*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.DoAttachVehicle
struct UVehicleAttachmentComponent_DoAttachVehicle_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.CheckSurroundingVehicle
struct UVehicleAttachmentComponent_CheckSurroundingVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.CanInteractedByOther
struct UVehicleAttachmentComponent_CanInteractedByOther_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.CanAttachVehicle
struct UVehicleAttachmentComponent_CanAttachVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.VehicleAttachmentComponent.CallServerToAttach
struct UVehicleAttachmentComponent_CallServerToAttach_Params
{
};

// Function Addons.VehicleAttachmentComponent.BroadcastClientVehicleAttachment
struct UVehicleAttachmentComponent_BroadcastClientVehicleAttachment_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.VehicleRubberDuck.GetVehicleMovement
struct AVehicleRubberDuck_GetVehicleMovement_Params
{
	class UFloatingVehicleVehicleMovementComponent2*   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.VehicleRubberDuck.GetForwardSpeed
struct AVehicleRubberDuck_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

