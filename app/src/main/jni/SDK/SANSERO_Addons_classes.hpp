#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class Addons.AmphibiousSlidingVehicle
// 0x0010 (0x1A80 - 0x1A70)
class AAmphibiousSlidingVehicle : public ASTExtraSimulatedSlidingVehicle
{
public:
	bool                                               RepWaterState;                                            // 0x1A70(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1A71(0x0007) MISSED OFFSET
	class UFloatingVehicleVehicleMovementComponent2*   VehicleFloatingMovement;                                  // 0x1A78(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AmphibiousSlidingVehicle");
		return pStaticClass;
	}


	void OnRep_WaterState();
	void OnRep_UseSyncatClient();
	void HandleContactWater(bool bInContactingWater);
	class UFloatingVehicleVehicleMovementComponent2* GetFloatingVehicleMovement();
};


// Class Addons.AnimInstanceSlidingTrack
// 0x00D0 (0x0AC0 - 0x09F0)
class UAnimInstanceSlidingTrack : public UCharacterAnimStateBase
{
public:
	class UBlendSpace*                                 BS_SplineMoveBase;                                        // 0x09F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 BS_MovementStand;                                         // 0x09F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 BS_MovementCrouch;                                        // 0x0A00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_TurningLeft;                                            // 0x0A08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_TurningRight;                                           // 0x0A10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_DecelerationBreak;                                      // 0x0A18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Idle;                                                   // 0x0A20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         C_MovementMode;                                           // 0x0A28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECustomMovmentMode>                    C_CustomMovementMode;                                     // 0x0A29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasWeapon;                                               // 0x0A2A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x0A2B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurnLeft;                                              // 0x0A2C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurningLeft;                                           // 0x0A2D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurningRight;                                          // 0x0A2E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0A2F(0x0001) MISSED OFFSET
	struct FVector2D                                   SplineVelocity;                                           // 0x0A30(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bEnableDecelerating;                                      // 0x0A38(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A39(0x0003) MISSED OFFSET
	float                                              MaxAngleOfDeltaDeceleration;                              // 0x0A3C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 IdleBlendCurve;                                           // 0x0A40(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleAlpha;                                                // 0x0A48(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocomotionPlayRate;                                       // 0x0A4C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultSpeed;                                             // 0x0A50(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDecelerateThreshold;                                   // 0x0A54(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnPlayStartPos;                                         // 0x0A58(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnPlayRate;                                             // 0x0A5C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTurnLoop;                                          // 0x0A60(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTurningDetect;                                     // 0x0A61(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0A62(0x0002) MISSED OFFSET
	float                                              TurnAngleThresholdEnableTriggerLoop;                      // 0x0A64(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnAngleThresholdDisableTriggerLoop;                     // 0x0A68(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A6C(0x0004) MISSED OFFSET
	class UAnimSequence*                               C_JumpStart;                                              // 0x0A70(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_JumpFalling;                                            // 0x0A78(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_JumpLanding;                                            // 0x0A80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_JumpLandingHard;                                        // 0x0A88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_JumpLandingLight;                                       // 0x0A90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableJumpStart;                                         // 0x0A98(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableJumpStartEx;                                       // 0x0A99(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFallingToLanding;                                        // 0x0A9A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFallingToSpline;                                         // 0x0A9B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFallingToLandingHard;                                    // 0x0A9C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0A9D(0x0003) MISSED OFFSET
	float                                              MaxFallingSpeedThresholdToLandingHard;                    // 0x0AA0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLandingToIdle;                                           // 0x0AA4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0AA5(0x0003) MISSED OFFSET
	float                                              FootIKAlpha;                                              // 0x0AA8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FootIKLODDefaultLevel;                                    // 0x0AAC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x10];                                      // 0x0AB0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AnimInstanceSlidingTrack");
		return pStaticClass;
	}

};


// Class Addons.AnimInstanceVerticalZipline
// 0x0010 (0x0A00 - 0x09F0)
class UAnimInstanceVerticalZipline : public UCharacterAnimStateBase
{
public:
	class UAnimSequence*                               PrepareAnim;                                              // 0x09F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleAnim;                                                 // 0x09F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AnimInstanceVerticalZipline");
		return pStaticClass;
	}

};


// Class Addons.AnimNodeHelper
// 0x0000 (0x0028 - 0x0028)
class UAnimNodeHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AnimNodeHelper");
		return pStaticClass;
	}

};


// Class Addons.AnimPoseRecorder
// 0x00C0 (0x00E8 - 0x0028)
class UAnimPoseRecorder : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AnimPoseRecorder");
		return pStaticClass;
	}

};


// Class Addons.BioVehicleMovementComponent
// 0x0988 (0x0B20 - 0x0198)
class UBioVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0198(0x0010) MISSED OFFSET
	unsigned char                                      bHasRequestedVelocity : 1;                                // 0x01A8(0x0001) (Transient)
	unsigned char                                      bNeedSLerpRequestedVelocity : 1;                          // 0x01A8(0x0001) (Transient)
	unsigned char                                      bRequestedMoveWithMaxSpeed : 1;                           // 0x01A8(0x0001) (Transient)
	unsigned char                                      bWasAvoidanceUpdated : 1;                                 // 0x01A8(0x0001) (Transient)
	unsigned char                                      UnknownData01 : 2;                                        // 0x01A8(0x0001)
	unsigned char                                      bProjectNavMeshWalking : 1;                               // 0x01A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bProjectNavMeshOnBothWorldChannels : 1;                   // 0x01A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bNeedSlowDownRequestedVelocity : 1;                       // 0x01A9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x2];                                       // 0x01AA(0x0002) MISSED OFFSET
	float                                              SlowDownRequestedVelocityFactor;                          // 0x01AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET
	float                                              GravityScale;                                             // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x01C4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CustomMovementMode;                                       // 0x01C5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2A];                                      // 0x01C6(0x002A) MISSED OFFSET
	float                                              MaxStepHeight;                                            // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkableFloorAngle;                                       // 0x01F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkableFloorZ;                                           // 0x01F8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              WalkableHeadHitZ;                                         // 0x01FC(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              StepForwardMinDelta;                                      // 0x0200(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GroundFriction;                                           // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeed;                                             // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeedCrouched;                                     // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStandOnOthervehicle;                                  // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0211(0x0003) MISSED OFFSET
	float                                              MaxSwimSpeed;                                             // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlySpeed;                                              // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyBackSpeed;                                          // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxCustomMovementSpeed;                                   // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinAnalogWalkSpeed;                                       // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingFrictionFactor;                                    // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingFriction;                                          // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationWalking;                               // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFalling;                               // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationSwimming;                              // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwimFriction;                                             // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFlying;                                // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAirControl;                                        // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CurveAirControl;                                          // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirControl;                                               // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirControlBoostMultiplier;                                // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirControlBoostVelocityThreshold;                         // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingLateralFriction;                                   // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrouchedHalfHeight;                                       // 0x0268(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Buoyancy;                                                 // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwimVelocityZLimitScale;                                  // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatingUpZ;                                              // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PerchRadiusThreshold;                                     // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PerchAdditionalHeight;                                    // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationRate;                                             // 0x0280(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SmoothRotationLerpFactor;                                 // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotateToCameraLerpSpeed;                                  // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DeltaRotated;                                             // 0x0294(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      bUseControllerDesiredRotation : 1;                        // 0x02A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOrientRotationToMovement : 1;                            // 0x02A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bNeedBackward : 1;                                        // 0x02A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSweepWhileNavWalking : 1;                                // 0x02A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAutoFloatingUp : 1;                                      // 0x02A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSeriousInjuried : 1;                                     // 0x02A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bJumpAllowedWhenSeriousInjuried : 1;                      // 0x02A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData07 : 1;                                        // 0x02A0(0x0001)
	unsigned char                                      bMovementInProgress : 1;                                  // 0x02A1(0x0001)
	unsigned char                                      bEnableScopedMovementUpdates : 1;                         // 0x02A1(0x0001) (Edit)
	unsigned char                                      bForceMaxAccel : 1;                                       // 0x02A1(0x0001)
	unsigned char                                      bRunPhysicsWithNoController : 1;                          // 0x02A1(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bForceNextFloorCheck : 1;                                 // 0x02A1(0x0001) (Edit, BlueprintVisible, DisableEditOnTemplate, EditConst)
	unsigned char                                      bShrinkProxyCapsule : 1;                                  // 0x02A1(0x0001)
	unsigned char                                      bCanWalkOffLedges : 1;                                    // 0x02A1(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanWalkOffLedgesWhenCrouching : 1;                       // 0x02A1(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData08[0x2];                                       // 0x02A2(0x0002) MISSED OFFSET
	float                                              HeadCollisionScaleOnDS;                                   // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWalkingBlockHeadSlide;                                   // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWalkingDoubleCheckWhenPenetrate;                         // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x02AA(0x0002) MISSED OFFSET
	float                                              WalkingHeadPenetrateCheckRadius;                          // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkingHeadPenetrateCheckHeight;                          // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFallingBlockHeadSlide;                                   // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoubleCheckSlide;                                        // 0x02B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x02B6(0x0002) MISSED OFFSET
	float                                              HeadSlideCollisionScaleHeight;                            // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadSlideCollisionScaleRadius;                            // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadSlideFallingCollisionScale;                           // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHeadCheckSlope;                                          // 0x02C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowBodySlideSurface;                                    // 0x02C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEableHeadBlockVelocityLimit;                             // 0x02C6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x02C7(0x0001) MISSED OFFSET
	float                                              HeadBlockLimitVelocity;                                   // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEableHeadBlockLimitThrottle;                             // 0x02CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLastHeadWalkingCheck;                                    // 0x02CD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bClientResolveServerPenetration;                          // 0x02CE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12 : 1;                                        // 0x02CF(0x0001)
	unsigned char                                      bNetworkSkipProxyPredictionOnNetUpdate : 1;               // 0x02CF(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bForceNoSimulatePrediction : 1;                           // 0x02CF(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDeferUpdateMoveComponent : 1;                            // 0x02CF(0x0001)
	class USceneComponent*                             DeferredUpdatedMoveComponent;                             // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MaxOutOfWaterStepHeight;                                  // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutofWaterZ;                                              // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnablePhysicsInteraction;                                // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTouchForceScaledToMass;                                  // 0x02E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPushForceScaledToMass;                                   // 0x02E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPushForceUsingZOffset;                                   // 0x02E7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePushForceToVelocity;                                // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	float                                              StandingDownwardForceScale;                               // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialPushForceFactor;                                   // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PushForceFactor;                                          // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PushForcePointZOffsetFactor;                              // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TouchForceFactor;                                         // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTouchForce;                                            // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTouchForce;                                            // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepulsionForce;                                           // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	struct FVector                                     Acceleration;                                             // 0x0310(0x000C) (Net, IsPlainOldData)
	struct FVector                                     PendingDirectionalBrakingAccelerationToApply;             // 0x031C(0x000C) (Net, IsPlainOldData)
	struct FVector                                     LastUpdateLocation;                                       // 0x0328(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData15[0xC];                                       // 0x0334(0x000C) MISSED OFFSET
	struct FQuat                                       LastUpdateRotation;                                       // 0x0340(0x0010) (IsPlainOldData)
	struct FVector                                     LastUpdateVelocity;                                       // 0x0350(0x000C) (IsPlainOldData)
	float                                              ServerLastTransformUpdateTimeStamp;                       // 0x035C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     PendingImpulseToApply;                                    // 0x0360(0x000C) (IsPlainOldData)
	struct FVector                                     PendingForceToApply;                                      // 0x036C(0x000C) (IsPlainOldData)
	float                                              AnalogInputModifier;                                      // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x8];                                       // 0x037C(0x0008) MISSED OFFSET
	float                                              MaxSimulationTimeStep;                                    // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxSimulationIterations;                                  // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationWithGeometry;                             // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationWithGeometryAsProxy;                      // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationWithPawn;                                 // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationWithPawnAsProxy;                          // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NetworkSimulatedSmoothLocationTime;                       // 0x039C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkSimulatedSmoothRotationTime;                       // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ListenServerNetworkSimulatedSmoothLocationTime;           // 0x03A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ListenServerNetworkSimulatedSmoothRotationTime;           // 0x03A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetProxyShrinkRadius;                                     // 0x03AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetProxyShrinkHalfHeight;                                 // 0x03B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkMaxSmoothUpdateDistance;                           // 0x03B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkMaxSmoothScale;                                    // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkNoSmoothUpdateDistance;                            // 0x03BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReplaySmoothUseInterp;                                   // 0x03C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ENetworkSmoothingMode                              NetworkSmoothingMode;                                     // 0x03C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x03C2(0x0002) MISSED OFFSET
	float                                              LedgeCheckThreshold;                                      // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpOutOfWaterPitch;                                      // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	struct FFindFloorResult                            CurrentFloor;                                             // 0x03D0(0x00A8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	TEnumAsByte<EMovementMode>                         DefaultLandMovementMode;                                  // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         DefaultWaterMovementMode;                                 // 0x0479(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         GroundMovementMode;                                       // 0x047A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bMaintainHorizontalGroundVelocity : 1;                    // 0x047B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseVelocityX : 1;                                 // 0x047B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseVelocityY : 1;                                 // 0x047B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseVelocityZ : 1;                                 // 0x047B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseAngularVelocity : 1;                           // 0x047B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bJustTeleported : 1;                                      // 0x047B(0x0001) (Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst)
	unsigned char                                      bNetworkUpdateReceived : 1;                               // 0x047B(0x0001) (Transient)
	unsigned char                                      bNetworkMovementModeChanged : 1;                          // 0x047B(0x0001) (Transient)
	unsigned char                                      bIgnoreClientMovementErrorChecksAndCorrection : 1;        // 0x047C(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      bNotifyApex : 1;                                          // 0x047C(0x0001) (Edit, BlueprintVisible, EditConst)
	unsigned char                                      bCheatFlying : 1;                                         // 0x047C(0x0001)
	unsigned char                                      bWantsToCrouch : 1;                                       // 0x047C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bCustomAction0 : 1;                                       // 0x047C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bCrouchMaintainsBaseLocation : 1;                         // 0x047C(0x0001) (Edit, BlueprintVisible, DisableEditOnTemplate, EditConst)
	unsigned char                                      bIgnoreBaseRotation : 1;                                  // 0x047C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFastAttachedMove : 1;                                    // 0x047C(0x0001)
	unsigned char                                      bAlwaysCheckFloor : 1;                                    // 0x047D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseFlatBaseForFloorChecks : 1;                           // 0x047D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPerformingJumpOff : 1;                                   // 0x047D(0x0001)
	unsigned char                                      bWantsToLeaveNavWalking : 1;                              // 0x047D(0x0001)
	unsigned char                                      bUseRVOAvoidance : 1;                                     // 0x047D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bRequestedMoveUseAcceleration : 1;                        // 0x047D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData19[0x2];                                       // 0x047E(0x0002) MISSED OFFSET
	float                                              AvoidanceConsiderationRadius;                             // 0x0480(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RequestedVelocity;                                        // 0x0484(0x000C) (Transient, IsPlainOldData)
	int                                                AvoidanceUID;                                             // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x0494(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x0498(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x049C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              AvoidanceWeight;                                          // 0x04A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PendingLaunchVelocity;                                    // 0x04A4(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData20[0xB0];                                      // 0x04B0(0x00B0) MISSED OFFSET
	float                                              NavMeshProjectionInterval;                                // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionTimer;                                   // 0x0564(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              NavMeshProjectionInterpSpeed;                             // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionHeightScaleUp;                           // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionHeightScaleDown;                         // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavWalkingFloorDistTolerance;                             // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavRotationFactor;                                        // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavWantedSpeed;                                           // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForceBraking : 1;                                        // 0x0580(0x0001) (Deprecated)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0581(0x0003) MISSED OFFSET
	float                                              CrouchedSpeedMultiplier;                                  // 0x0584(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              UpperImpactNormalScale;                                   // 0x0588(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	struct FBioVehicleMovementPostPhysicsTickFunction  PostPhysicsTickFunction;                                  // 0x0590(0x0058)
	bool                                               bEnableSimulatedVelocity;                                 // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpectatorSmoothVelocity;                                 // 0x05E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x05EA(0x0002) MISSED OFFSET
	float                                              ClientServerVelocitySizeSquareThreshold;                  // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDSSmoothVelocity;                                        // 0x05F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAdjustClientWithRotation;                                // 0x05F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x12];                                      // 0x05F2(0x0012) MISSED OFFSET
	bool                                               EnabledResetPredictionData;                               // 0x0604(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x13];                                      // 0x0605(0x0013) MISSED OFFSET
	float                                              MinTimeBetweenTimeStampResets;                            // 0x0618(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x4];                                       // 0x061C(0x0004) MISSED OFFSET
	struct FRootMotionSourceGroup                      CurrentRootMotion;                                        // 0x0620(0x0100) (Transient)
	unsigned char                                      UnknownData27[0x90];                                      // 0x0720(0x0090) MISSED OFFSET
	struct FRootMotionMovementParams                   RootMotionParams;                                         // 0x07B0(0x0040) (Transient)
	struct FVector                                     AnimRootMotionVelocity;                                   // 0x07F0(0x000C) (Transient, IsPlainOldData)
	bool                                               bWasSimulatingRootMotion;                                 // 0x07FC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bAllowPhysicsRotationDuringAnimRootMotion : 1;            // 0x07FD(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData28[0x2];                                       // 0x07FE(0x0002) MISSED OFFSET
	class ABioVehicleBase*                             VehicleOwner;                                             // 0x0800(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x10];                                      // 0x0808(0x0010) MISSED OFFSET
	bool                                               bIsAcceptInput;                                           // 0x0818(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x0819(0x0003) MISSED OFFSET
	float                                              NetThrottleInput;                                         // 0x081C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              NetSteeringInput;                                         // 0x0820(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              NetRisingInput;                                           // 0x0824(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0xC];                                       // 0x0828(0x000C) MISSED OFFSET
	float                                              ForwardSpeed;                                             // 0x0834(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpeed;                                             // 0x0838(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              HandBrakeRate;                                            // 0x083C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenCustomBodyBox;                                       // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenCustomHeadCapsule;                                   // 0x0841(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotationCheckHeadCapsule;                                // 0x0842(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockRevertTransfrom;                                    // 0x0843(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloorCheckXReduce;                                        // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowBasedVehicle;                                      // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanWalkOnBioVehicle;                                     // 0x0849(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData32[0x6];                                       // 0x084A(0x0006) MISSED OFFSET
	class UCurveFloat*                                 AngularVelocityCurve;                                     // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AccResistanceCurve;                                       // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DecResistanceCurve;                                       // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 BreakAccelerationCurve;                                   // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 SlopeSpeedFactorCurve;                                    // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultAcceleration;                                      // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBackAcceleration;                                      // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularAcceleration;                                      // 0x0880(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultAngularVelocity;                                   // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultResistanceCoefficient;                             // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultStaticResistance;                                  // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultBrakeAcceleration;                                 // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultSpeed;                                             // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBackSpeed;                                             // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeltaDotFactor;                                           // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlopeBlockDotFactorMax;                                   // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlopeBlockDotFactorMin;                                   // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingHeadResolveSpeed;                                  // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x08AC(0x0004) MISSED OFFSET
	float                                              SeriousInjuredSpeedFactor;                                // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	float                                              fKeepMinSpeed;                                            // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDisableOBSmooth : 1;                                     // 0x08BC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData35[0x3];                                       // 0x08BD(0x0003) MISSED OFFSET
	float                                              MinJumpSpeed;                                             // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClientNoCombineWhenRot;                             // 0x08C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClientNoCombineWhenJump;                            // 0x08C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClientNoCombineWhenHeadBlock;                       // 0x08C6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClientNoCombineWhenStepup;                          // 0x08C7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadBlockNoCombineInterval;                               // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepUpNoCombineInterval;                                  // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData36[0x8];                                       // 0x08D0(0x0008) MISSED OFFSET
	unsigned char                                      NoCombineDeviceLevel;                                     // 0x08D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x08D9(0x0003) MISSED OFFSET
	float                                              NoCombineSecondsPerFrame;                                 // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutonomousMoveWeakNetScaleMSecsMin;                       // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutonomousMoveWeakNetScaleMSecsMax;                       // 0x08E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutonomousMoveWeakNetScaleRate;                           // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bServerMoveCheckPassWall;                                 // 0x08EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeleportIgnoreCheckPassWall;                             // 0x08ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData38[0x2];                                       // 0x08EE(0x0002) MISSED OFFSET
	float                                              RadiusScaleWhenCheckPassWall;                             // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightScaleWhenCheckPassWall;                             // 0x08F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnablePenetrationResolve;                                // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x08F9(0x0003) MISSED OFFSET
	int                                                PenetrationUnResolveCount;                                // 0x08FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenetrationUnResolveDistanceSq;                           // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenetrationResolveValidDistanceSq;                        // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenetrationResolveValidDistanceMax;                       // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0xC];                                       // 0x090C(0x000C) MISSED OFFSET
	struct FResolvePenetrationMoveData                 ResolvePenetrationMove;                                   // 0x0918(0x0090) (Transient)
	struct FResolvePenetrationParams                   ResolvePenetrationParams;                                 // 0x09A8(0x0058) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData41[0x60];                                      // 0x0A00(0x0060) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBioVehicleResolvePenetrationDelegate;                   // 0x0A60(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData42[0xC];                                       // 0x0A70(0x000C) MISSED OFFSET
	float                                              DefaultJumpHeight;                                        // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 JumpingHeightCurve;                                       // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 JumpingHeightByObsHeightCurve;                            // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsControlJumpHeight : 1;                                 // 0x0A90(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bApplyGravityWhileJumping : 1;                            // 0x0A90(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData43[0x3];                                       // 0x0A91(0x0003) MISSED OFFSET
	float                                              JumpHorizontalVelocityScale;                              // 0x0A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StandByJumpSpeed;                                         // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StandByJumpSpeedZ;                                        // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpZVelocity;                                            // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpOffJumpZFactor;                                       // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpOffVelocityScale;                                     // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSimulateZeroVelocityDeferFindFloor;                      // 0x0AAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x0AAD(0x0003) MISSED OFFSET
	float                                              SimulateFindFloorInternal;                                // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SimulateOptimizeCountsNum;                                // 0x0AB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData45[0x4];                                       // 0x0AB8(0x0004) MISSED OFFSET
	bool                                               bUseSelfLocDiffThreshold;                                 // 0x0ABC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData46[0x3];                                       // 0x0ABD(0x0003) MISSED OFFSET
	float                                              MaxAllowedLocDiffSquare;                                  // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceApplyServerMovementMode;                            // 0x0AC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bServerCheckJumpZLocDiff;                                 // 0x0AC5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData47[0x2];                                       // 0x0AC6(0x0002) MISSED OFFSET
	float                                              JumpProtectionZThreshold;                                 // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSimulateProtection;                                      // 0x0ACC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData48[0x3];                                       // 0x0ACD(0x0003) MISSED OFFSET
	float                                              SimulateProtectionInterval;                               // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData49[0x18];                                      // 0x0AD4(0x0018) MISSED OFFSET
	bool                                               bSimulateMovement;                                        // 0x0AEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableServerAntiCheat;                                   // 0x0AED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData50[0x2];                                       // 0x0AEE(0x0002) MISSED OFFSET
	float                                              SecurityAllowedMoveSpeedRatio;                            // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSecuritySpeedPingAdaption;                               // 0x0AF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData51[0x3];                                       // 0x0AF5(0x0003) MISSED OFFSET
	float                                              SecuritySpeedPingAdaptionRate;                            // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SecurityCheckThres;                                       // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData52[0x20];                                      // 0x0B00(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleMovementComponent");
		return pStaticClass;
	}


	void UnpackAccelerationToInput(const struct FVector& InAccel);
	bool ShouldRecordPosition();
	void SetWalkableFloorZ(float InWalkableFloorZ);
	void SetWalkableFloorAngle(float InWalkableFloorAngle);
	void SetThrottleInput(float rate);
	void SetSteeringInput(float rate);
	void SetRisingInput(float rate);
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int GroupFlags);
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void SetAcceptInput(bool bIsAccept);
	void ServerSetThrottleInput(float rate);
	void ServerSetSteeringInput(float rate);
	void ServerSetRisingInput(float rate);
	void ServerMoveOld(float OldTimeStamp, const struct FVector_NetQuantize10& OldAccel, unsigned char OldMoveFlags);
	void ServerMoveDualHybridRootMotion(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void ServerMoveDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void ServerMove(float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	struct FVector PackInputToAcceleration();
	float K2_GetWalkableFloorZ();
	float K2_GetWalkableFloorAngle();
	float K2_GetModifiedMaxAcceleration();
	void K2_FindFloor(const struct FVector& CapsuleLocation, struct FFindFloorResult* FloorResult);
	void K2_ComputeFloorDist(const struct FVector& CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, struct FFindFloorResult* FloorResult);
	bool IsWalking();
	bool IsWalkable(const struct FHitResult& Hit);
	bool IsSwimming();
	bool IsSeriousInjuriedAllowJumping();
	void HandleOnSeatDetached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void HandleOnSeatChanged(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType LastSeatType, int LastSeatIdx, ESTExtraVehicleSeatType NewSeatType, int NewSeatIdx);
	void HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void HandleOnExitVehicleAnim(class ASTExtraPlayerCharacter* Character, int SeatInx);
	float GetWalkingDecResistance(float Speed);
	float GetWalkingAccResistance(float Speed);
	float GetValidPerchRadius();
	float GetThrottleInput();
	float GetSteeringInput();
	float GetSlopeSpeedFactor(float Slope);
	float GetRisingInput();
	struct FVector GetPredictVelocity(float PredictTime);
	float GetPerchRadiusThreshold();
	class UPrimitiveComponent* GetMovementBase();
	float GetMinAnalogSpeed();
	float GetMaxJumpHeightWithJumpTime();
	float GetMaxJumpHeight();
	float GetMaxBrakingDeceleration();
	float GetMaxAcceleration();
	float GetJumpVelocityZ();
	float GetJumpingHeightBySpeed(float Speed);
	float GetJumpingHeightByObsHeight(float ObsHeight);
	struct FVector GetImpartedMovementBaseVelocity();
	float GetDesireAcceleration();
	float GetCurrentSecuritySpeedRatio();
	float GetCurrentMaxAllowedSpeed();
	struct FVector GetCurrentAcceleration();
	float GetBreakAcceleration(float Speed);
	float GetAngularVelocityByCurve(float Speed, bool AsForce);
	float GetAnalogInputModifier();
	void DisableMovement();
	void DealWithCustomAction(float DeltaTime);
	void ClientVeryShortAdjustPosition(float TimeStamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustRootMotionSourcePosition(float TimeStamp, const struct FRootMotionSourceGroup& ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustRootMotionPosition(float TimeStamp, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustPositionAndRotation(float TimeStamp, const struct FVector& NewLoc, const struct FRotator& NewRot, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustPosition(float TimeStamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAckGoodMove(float TimeStamp);
	void ClearAccumulatedForces();
	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
	void CalculateVelocityWithResistance(float DeltaTime, bool bFluid);
	float CalculateCurrentForwardSpeed();
	void AddImpulse(const struct FVector& Impulse, bool bVelocityChange);
	void AddForce(const struct FVector& force);
	void AddDirectionalBrakingAcceleration(const struct FVector& BrakingAcceleration);
};


// Class Addons.BioFlyMovementComponentBase
// 0x0130 (0x0C50 - 0x0B20)
class UBioFlyMovementComponentBase : public UBioVehicleMovementComponent
{
public:
	float                                              MaxDownSpeed;                                             // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingZ;                                               // 0x0B24(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxTraceDownHeight;                                       // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingHeight;                                          // 0x0B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinFlyingHeight;                                          // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingHeightThres;                                        // 0x0B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTakeOffTime;                                           // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B3C(0x0004) MISSED OFFSET
	class UCurveVector*                                TakeOffCurve;                                             // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CacheSplineActor;                                         // 0x0B48(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bNoDriverForceNoSimulate;                                 // 0x0B50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoDriverForceLanding;                                    // 0x0B51(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckClientFlyingHeight;                                 // 0x0B52(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckClientFlyingZDiff;                                  // 0x0B53(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingLocZDiff;                                        // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachCollisionHeightScaleWhenCheckPassWall;              // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachCollisionRadiusScaleWhenCheckPassWall;              // 0x0B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpeedInterpSpeed;                                  // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpotRotator;                                              // 0x0B64(0x000C) (IsPlainOldData)
	float                                              SpotTurnStartTime;                                        // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotTurnEndTime;                                          // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              targetAngularSpeed;                                       // 0x0B78(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotTurnAngularSpeed;                                     // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fBeginTurnInterpSpeed;                                    // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fEndTurnInterpSpeed;                                      // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpeedLerpFactor;                                   // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightToLeftSpeedLerpFactor;                               // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LowSpeedRotationThreshold;                                // 0x0B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsRotateTolerance;                                   // 0x0B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0B98(0x000C) MISSED OFFSET
	float                                              MaxFlyAcceleration;                                       // 0x0BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlySteeringRotationSpeed;                                 // 0x0BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x0BAC(0x0014) MISSED OFFSET
	class AReindeerBioVehicle*                         ReindeerOwner;                                            // 0x0BC0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FFlyBioVehicleUpdateDistanceToLandConfig> UpdateGroundDistanceConfigs;                              // 0x0BC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIgnoreHeightLimit;                                       // 0x0BD8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckLandingGround;                                      // 0x0BD9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0BDA(0x0002) MISSED OFFSET
	float                                              DistanceToLand;                                           // 0x0BDC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LastCheckGroundInterval;                                  // 0x0BE0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2C];                                      // 0x0BE4(0x002C) MISSED OFFSET
	class UCurveVector*                                SpeedCurve;                                               // 0x0C10(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                PositionCurve;                                            // 0x0C18(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0C20(0x0001) MISSED OFFSET
	bool                                               bCheckAttachCollision;                                    // 0x0C21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAttachBlockVelocityLimit;                          // 0x0C22(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0C23(0x0001) MISSED OFFSET
	float                                              AttachBlockLimitVelocity;                                 // 0x0C24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlyingBlockAttachSlide;                                  // 0x0C28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0C29(0x0003) MISSED OFFSET
	float                                              AttachCapsuleTraceGroundScale;                            // 0x0C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimulateLandingInput;                                     // 0x0C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingCheckPenetrateRadiusScale;                          // 0x0C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingCheckPenetrateHeightScale;                          // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotationCheckAttachCapsule;                              // 0x0C3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0C3D(0x0003) MISSED OFFSET
	class UCapsuleComponent*                           AttachedCollision;                                        // 0x0C40(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0C48(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioFlyMovementComponentBase");
		return pStaticClass;
	}


	void UpdateVerticalHeight(float DeltaTime);
	void StartTakingOff();
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	bool IsTakingOff();
	bool IsCurveMoving();
	EFlyBioVehicleMoveMode GetMoveState();
	float GetDistanceToLand();
	void EndTakingOff();
	void CalculateFlyingVelocity(float DeltaTime);
	void CalculateFlyingAcceleration(float DeltaTime);
};


// Class Addons.BioVehicleAnimInstanceBase
// 0x00D0 (0x04B0 - 0x03E0)
class UBioVehicleAnimInstanceBase : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03E0(0x0060) MISSED OFFSET
	TArray<float>                                      LOD_Level_DistanceFactor;                                 // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAssetPlayerSyncNode*                        AssetPlayerSyncNode;                                      // 0x0450(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class ABioVehicleBase*                             OwnerVehicle;                                             // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsServer;                                                // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsDead;                                                  // 0x0461(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasBeenTamed;                                            // 0x0462(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bAnimVarHasCached;                                        // 0x0463(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasDrivers;                                              // 0x0464(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasAnyPassengers;                                        // 0x0465(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableTerrainAdaption;                                   // 0x0466(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableSlopeAdaption;                                     // 0x0467(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableLegAdaption;                                       // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	float                                              CurrentDistanceFactor;                                    // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                AnimLOD;                                                  // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAnimLODChanged;                                         // 0x0478(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAnimSequence*                               DeathAnim;                                                // 0x0488(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UBioVehicleRiderAnimInstanceBase> DriverAnimInstance;                                       // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0498(0x0008) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x04A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleAnimInstanceBase");
		return pStaticClass;
	}


	void LuaOnAnimLodChanged(int NewAnimLod);
	void LuaInitializeWithDeviceLevel(int DeviceLevel);
	void LuaInitializeAnimation();
};


// Class Addons.BioVehicleAnimListComponent
// 0x0060 (0x0238 - 0x01D8)
class UBioVehicleAnimListComponent : public UCachedAnimListComponentBase
{
public:
	class UAnimationData*                              AnimationData;                                            // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAssetsLoading;                                         // 0x01E0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET
	TMap<struct FName, class UAnimationAsset*>         CachedAssets;                                             // 0x01E8(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleAnimListComponent");
		return pStaticClass;
	}

};


// Class Addons.BioVehicleBase
// 0x0360 (0x1850 - 0x14F0)
class ABioVehicleBase : public ASTExtraVehicleBase
{
public:
	struct FScriptMulticastDelegate                    OnBioVehicleFrozen;                                       // 0x14F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBioVehicleRunOutFuel;                                   // 0x1500(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bFuelExhausted;                                           // 0x1510(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1511(0x0007) MISSED OFFSET
	class UBioVehicleMovementComponent*                VehicleMovement;                                          // 0x1518(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x1520(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BodyBoxComponent;                                         // 0x1528(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           HeadCapsuleComponent;                                     // 0x1530(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleSpringArmComponent*                  BioVehicleSpringArm;                                      // 0x1538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBeginAccelerate;                                        // 0x1540(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndAccelerate;                                          // 0x1550(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bHasAcceleration;                                         // 0x1560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasAccelerationLastFrame;                                // 0x1561(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1E];                                      // 0x1562(0x001E) MISSED OFFSET
	struct FBasedMovementInfo                          BasedMovement;                                            // 0x1580(0x0030)
	struct FBasedMovementInfo                          ReplicatedBasedMovement;                                  // 0x15B0(0x0030) (Net)
	struct FVector                                     BaseTranslationOffset;                                    // 0x15E0(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x15EC(0x0004) MISSED OFFSET
	struct FQuat                                       BaseRotationOffset;                                       // 0x15F0(0x0010) (IsPlainOldData)
	bool                                               bInBaseReplication;                                       // 0x1600(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x1601(0x000F) MISSED OFFSET
	struct FRootMotionMovementParams                   ClientRootMotionParams;                                   // 0x1610(0x0040) (Transient)
	bool                                               bCanVehicleJump;                                          // 0x1650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSimGravityDisabled : 1;                                  // 0x1651(0x0001)
	unsigned char                                      bPressedJump : 1;                                         // 0x1651(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bWasJumping : 1;                                          // 0x1651(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst)
	unsigned char                                      UnknownData04[0x2];                                       // 0x1652(0x0002) MISSED OFFSET
	float                                              JumpKeyHoldTime;                                          // 0x1654(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              JumpForceTimeRemaining;                                   // 0x1658(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              ProxyJumpForceStartedTime;                                // 0x165C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              JumpMaxHoldTime;                                          // 0x1660(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                JumpMaxCount;                                             // 0x1664(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                JumpCurrentCount;                                         // 0x1668(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              BioVehicleLaunchCollDownTime;                             // 0x166C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnReachedJumpApex;                                        // 0x1670(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x10];                                      // 0x1680(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    MovementModeChangedDelegate;                              // 0x1690(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBioVehicleJumped;                                       // 0x16A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCharacterMovementUpdated;                               // 0x16B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      ReplicatedMovementMode;                                   // 0x16C0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bClientCheckEncroachmentOnNetUpdate : 1;                  // 0x16C1(0x0001) (Transient)
	unsigned char                                      bClientUpdating : 1;                                      // 0x16C1(0x0001) (Transient)
	unsigned char                                      bClientWasFalling : 1;                                    // 0x16C1(0x0001) (Transient)
	unsigned char                                      UnknownData06[0xA];                                       // 0x16C2(0x000A) MISSED OFFSET
	bool                                               HasBeenTamed;                                             // 0x16CC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0xF];                                       // 0x16CD(0x000F) MISSED OFFSET
	bool                                               bCanbeDamagedByTrex;                                      // 0x16DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldGenerateStaticDeadBodyWhileDeath;                  // 0x16DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x16DE(0x0002) MISSED OFFSET
	float                                              OverlapTestScale;                                         // 0x16E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x16E4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBioVehicleBeenTamed;                                    // 0x16E8(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USkeletalMesh*                               UntamedMesh;                                              // 0x16F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               TamedMesh;                                                // 0x1700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FFootStepEffect>         FootStepEffects;                                          // 0x1708(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, class UParticleSystemComponent*> FootStepEffectRuntimeData;                                // 0x1758(0x0050) (ExportObject, ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnAnimInstanceActive;                                     // 0x17A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bShouldPlayRandomIdleWhilePassengersOn;                   // 0x17B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x17B9(0x0003) MISSED OFFSET
	float                                              RandomIdleResetTimeMin;                                   // 0x17BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomIdleResetTimeMax;                                   // 0x17C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RandomIdleIndexMin;                                       // 0x17C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RandomIdleIndexMax;                                       // 0x17C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x17CC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBioVehicleDoRandomIdle;                                 // 0x17D0(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData12[0x8];                                       // 0x17E0(0x0008) MISSED OFFSET
	bool                                               bEnableSimulatedOptimize;                                 // 0x17E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x17E9(0x0007) MISSED OFFSET
	TArray<struct FSimulateThresholds>                 BioVehicleSimulateThresholds;                             // 0x17F0(0x0010) (ZeroConstructor, Config)
	bool                                               bEnableCollisionOptimization;                             // 0x1800(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x1801(0x0003) MISSED OFFSET
	float                                              OpenCollisionMinDistSq;                                   // 0x1804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShooterOpenCollisionMaxCosTheta;                          // 0x1808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x180C(0x0004) MISSED OFFSET
	TArray<struct FOpenCollisionLODAngle>              BioVehicleCollisionDistSqAngles;                          // 0x1810(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CheckCollisionOpenInternal;                               // 0x1820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x1824(0x0004) MISSED OFFSET
	struct FName                                       CreatureVehicleMesh_ProfileName;                          // 0x1828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugCollisionLine;                                      // 0x1830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0xF];                                       // 0x1831(0x000F) MISSED OFFSET
	class ASTExtraBaseCharacter*                       CacheNearlyCharacer;                                      // 0x1840(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x8];                                       // 0x1848(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleBase");
		return pStaticClass;
	}


	void StopJumping();
	void SetSimulatePhysics(bool bSimulate);
	void SetReplicateMovement(bool bInReplicateMovement);
	void SetHandBrake(float rate);
	void ServerResetToPosition(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void OnWalkingOffLedge(const struct FVector& PreviousFloorImpactNormal, const struct FVector& PreviousFloorContactNormal, const struct FVector& PreviousLocation, float TimeDelta);
	void OnTakingDamage(class AActor* HitActor, class AActor* HitInstigator, const struct FHitResult& HitInfo, const struct FVector& ImpulseDir, float Damage);
	void OnRep_ReplicatedBasedMovement();
	void OnRep_HasBeenTamed();
	void OnRep_FuelExhausted(bool bPrevFuelExhausted);
	void OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void OnLanded(const struct FHitResult& Hit);
	void OnJumped();
	void OnExitingVehicleOnServer();
	void OnEnteringVehicleOnServer(bool IsSucc);
	void MoveUp(float rate);
	void LaunchCharacter(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void K2_UpdateCustomMovement(float DeltaTime);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	void Jump();
	bool IsPlayingRootMotion();
	bool IsJumpProvidingForce();
	void HandleOnRiderAnimInstanceActive(class UAnimInstance* ActivedAnimInstance);
	void HandleOnClientBeenTamed();
	float GetVehicleOriginToLand();
	bool GetVehicleBreakOutState();
	struct FVector GetRotationInputDir();
	struct FRotator GetPlayerLookAtRotation();
	float GetConsumeFuelRate();
	class UBoxComponent* GetBodyShapeComponent();
	class UBioVehicleMovementComponent* GetBioVehicleMovement();
	struct FVector GetBaseTranslationOffset();
	class UBioVehicleAnimListComponent* GetAnimListComponent();
	void ExitVehicle();
	void EnterVehicle(bool IsSucc);
	void ClientEnterVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	bool CanJumpInternal();
	bool CanJump();
	bool CanConsumeFuel();
	void CacheInitialMeshOffset(const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation);
	void BroadCastPlayingRandomIdleAnim(int RandomIdleAnim);
	void ActiveFootParticleEffect(const struct FName& EffectName, const struct FVector& ActivedLocation);
};


// Class Addons.BioVehicleDamageComponent
// 0x0020 (0x0560 - 0x0540)
class UBioVehicleDamageComponent : public UVehicleDamageComponent
{
public:
	float                                              MaxHitByVehicleImpulseVelocity;                           // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinHitByVehicleImpulseVelocity;                           // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseSelfCD;                                            // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x054C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleDamageComponent");
		return pStaticClass;
	}

};


// Class Addons.BioVehicleRiderAnimInstanceBase
// 0x0020 (0x0A40 - 0x0A20)
class UBioVehicleRiderAnimInstanceBase : public UVehicleCharacterAnimInstanceBase
{
public:
	class UAnimMontage*                                MountAnimMontage;                                         // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAssetPlayerSyncNode*                        AssetPlayerSyncNode;                                      // 0x0A28(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsDead;                                                  // 0x0A30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableTerrainAdaption;                                   // 0x0A31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0A32(0x0002) MISSED OFFSET
	int                                                AnimLOD;                                                  // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UBioVehicleAnimInstanceBase*                 CachedOwnerBioVehicleAnimInstance;                        // 0x0A38(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleRiderAnimInstanceBase");
		return pStaticClass;
	}

};


// Class Addons.BioVehicleSkeletalMeshComponent
// 0x0000 (0x0FC0 - 0x0FC0)
class UBioVehicleSkeletalMeshComponent : public UUAESkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleSkeletalMeshComponent");
		return pStaticClass;
	}

};


// Class Addons.DancerZombieAnimInstance
// 0x0030 (0x0690 - 0x0660)
class UDancerZombieAnimInstance : public UMonsterAnimInstanceBase
{
public:
	TEnumAsByte<EDancingState>                         DancingState;                                             // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0661(0x0007) MISSED OFFSET
	class UAnimSequence*                               DanceMoveStartAnim;                                       // 0x0668(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               DanceMoveLoopAnim;                                        // 0x0670(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               DanceMoveEndAnim;                                         // 0x0678(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               DancingAnim;                                              // 0x0680(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0688(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.DancerZombieAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.DinosaurMonsterAnimInstanceBase
// 0x0000 (0x0660 - 0x0660)
class UDinosaurMonsterAnimInstanceBase : public USTExtraMonsterAnimInstance
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.DinosaurMonsterAnimInstanceBase");
		return pStaticClass;
	}

};


// Class Addons.DistanceMatchingComponent
// 0x0048 (0x0160 - 0x0118)
class UDistanceMatchingComponent : public UActorComponent
{
public:
	bool                                               bEnableDistanceMatching;                                  // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              SpeedThreshold;                                           // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepUpOffset;                                            // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepDownOffset;                                          // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PredictedLocation;                                        // 0x0128(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDistanceMatchSuccess;                                   // 0x0138(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bShouldOnlyDistanceMatchingOnAutonomousProxy;             // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	class UBioVehicleMovementComponent*                BioVehicleMovement;                                       // 0x0150(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0158(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.DistanceMatchingComponent");
		return pStaticClass;
	}


	void ServerOnDistanceMatchSuccess(const struct FVector& PredictedStopLocation);
	bool PredictStopLocation(struct FVector* OutLocation);
	void OnEndAccelerating();
	class UAnimInstance* GetBioVehicleAnimInstance();
	void BroadCastOnDistanceMatchSuccess(const struct FVector& PredictedStopLocation);
};


// Class Addons.DistanceMatchingInterface
// 0x0000 (0x0028 - 0x0028)
class UDistanceMatchingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.DistanceMatchingInterface");
		return pStaticClass;
	}


	void OnDistanceMatchingSuccess(const struct FVector& PredictedStopLocation);
};


// Class Addons.EventDataCollectionKeys
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys");
		return pStaticClass;
	}


	static struct FString GetTimestamp();
	static struct FString GetTeammatePositions();
	static struct FString GetSelfPosition();
};


// Class Addons.EventDataCollectionValues
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues");
		return pStaticClass;
	}


	static struct FString GetTeammatePositionsFromContext(class AActor* ActorContext);
	static struct FString GetTeammatePositions(class ASTExtraPlayerState* STExtraPlayerState);
	static struct FString GetTeammateOpenIds(class ASTExtraPlayerState* STExtraPlayerState);
};


// Class Addons.EventDataCollectionKeys_RankingScore
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_RankingScore : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_RankingScore");
		return pStaticClass;
	}


	static struct FString GetViewType();
	static struct FString GetTreatment();
	static struct FString GetTime();
	static struct FString GetTeammates();
	static struct FString GetSurvivalTime();
	static struct FString GetRescureCount();
	static struct FString GetRescueTimes();
	static struct FString GetRank();
	static struct FString GetPlayerName();
	static struct FString GetMaxKillDistance();
	static struct FString GetMarchDistance();
	static struct FString GetMapId();
	static struct FString GetKnockouts();
	static struct FString GetKillNumInVehicle();
	static struct FString GetKillNumByGrenade();
	static struct FString GetKillNum();
	static struct FString GetKill();
	static struct FString GetInDamage();
	static struct FString GetHurt();
	static struct FString GetHeal();
	static struct FString GetHeadShotNum();
	static struct FString GetGotAirDropNum();
	static struct FString GetGameID();
	static struct FString GetDriveDistance();
	static struct FString GetDamage();
	static struct FString GetAssists();
	static struct FString GetAliveTeamNum();
	static struct FString GetAlivePlayerNum();
};


// Class Addons.EventDataCollectionKeys_GameStatus
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_GameStatus : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_GameStatus");
		return pStaticClass;
	}


	static struct FString GetWorldLocation();
	static struct FString GetWeather();
	static struct FString GetTotalPlayerCount();
	static struct FString GetToPlaneCarryLeftTime();
	static struct FString GetTeamId();
	static struct FString GetPlaneRouteStop();
	static struct FString GetPlaneRouteStart();
	static struct FString GetOpenId();
	static struct FString GetGameStatus();
	static struct FString GetAlivePlayerCount();
};


// Class Addons.EventDataCollectionValues_GameStatus_GameStatus
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_GameStatus_GameStatus : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_GameStatus_GameStatus");
		return pStaticClass;
	}


	static struct FString GetWin();
	static struct FString GetWaitingOnLobby();
	static struct FString GetQualityPlaza();
	static struct FString GetPlaneCarrying();
	static struct FString GetParachuteOpen();
	static struct FString GetParachuteJumping();
	static struct FString GetMatching();
	static struct FString GetLanding();
	static struct FString GetFireWorking();
	static struct FString GetFighting();
	static struct FString GetCake();
};


// Class Addons.EventDataCollectionKeys_StartMatching
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_StartMatching : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_StartMatching");
		return pStaticClass;
	}


	static struct FString GetViewType();
	static struct FString GetTeamCount();
	static struct FString GetPlayerCountInGameMode();
	static struct FString GetMapId();
	static struct FString GetGameMode();
	static struct FString GetFullTeamCount();
};


// Class Addons.EventDataCollectionKeys_PlaneCarrying
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_PlaneCarrying : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_PlaneCarrying");
		return pStaticClass;
	}


	static struct FString GetStartPosition();
	static struct FString GetEndPosition();
};


// Class Addons.EventDataCollectionKeys_PuttingDownCakeFireWorks
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_PuttingDownCakeFireWorks : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_PuttingDownCakeFireWorks");
		return pStaticClass;
	}


	static struct FString GetFireWorksOpenId();
	static struct FString GetCakeOpenId();
};


// Class Addons.EventDataCollectionKeys_TakeDropItem
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_TakeDropItem : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_TakeDropItem");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetReason();
	static struct FString GetPlayerName();
	static struct FString GetOpenId();
	static struct FString GetItemInstanceId();
	static struct FString GetItemId();
	static struct FString GetItemCount();
	static struct FString GetHoldingCount();
	static struct FString GetBulletCount();
	static struct FString GetBackpackAvatarItemDurability();
};


// Class Addons.EventDataCollectionValues_TakeDropItem_Type
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_TakeDropItem_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_TakeDropItem_Type");
		return pStaticClass;
	}


	static struct FString GetTaking();
	static struct FString GetDropping();
};


// Class Addons.EventDataCollectionKeys_UsingItem
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_UsingItem : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_UsingItem");
		return pStaticClass;
	}


	static struct FString GetStatus();
	static struct FString GetPredictLine();
	static struct FString GetPlayerName();
	static struct FString GetOpenId();
	static struct FString GetItemLeftCount();
	static struct FString GetItemId();
};


// Class Addons.EventDataCollectionValues_UsingItem_Status
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_UsingItem_Status : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UsingItem_Status");
		return pStaticClass;
	}


	static struct FString GetLeading();
	static struct FString GetInteruption();
	static struct FString GetCompletion();
};


// Class Addons.EventDataCollectionKeys_Climbing
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_Climbing : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Climbing");
		return pStaticClass;
	}

};


// Class Addons.EventDataCollectionKeys_Falling
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_Falling : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Falling");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetStatus();
};


// Class Addons.EventDataCollectionValues_Falling_Type
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_Falling_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_Falling_Type");
		return pStaticClass;
	}


	static struct FString GetStart();
	static struct FString GetEnd();
};


// Class Addons.EventDataCollectionValues_Falling_Status
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_Falling_Status : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_Falling_Status");
		return pStaticClass;
	}


	static struct FString GetNonDriving();
	static struct FString GetDriving();
};


// Class Addons.EventDataCollectionKeys_InFieldOfView
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_InFieldOfView : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_InFieldOfView");
		return pStaticClass;
	}


	static struct FString GetUniqueIdentifier();
	static struct FString GetTargetWorldLocation();
	static struct FString GetOldFieldOfViewNotificationStatus();
	static struct FString GetMyWorldLocation();
	static struct FString GetMinimalScreenLocation();
	static struct FString GetMaximumScreenLocation();
	static struct FString GetFieldOfViewTargetCategory();
	static struct FString GetCurrentFieldOfViewNotificationStatus();
};


// Class Addons.EventDataCollectionValues_InFieldOfView_FieldOfView
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_InFieldOfView_FieldOfView : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_InFieldOfView_FieldOfView");
		return pStaticClass;
	}


	static struct FString GetTombBox();
	static struct FString GetTeammateVehicle();
	static struct FString GetTeammate();
	static struct FString GetSmog();
	static struct FString GetFireWorks();
	static struct FString GetEnemyVehicle();
	static struct FString GetEnemy();
	static struct FString GetCake();
	static struct FString GetBombing();
	static struct FString GetAirDroping();
};


// Class Addons.EventDataCollectionKeys_UnderEnermyAttack
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_UnderEnermyAttack : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_UnderEnermyAttack");
		return pStaticClass;
	}


	static struct FString GetValue();
	static struct FString GetTargetPart();
	static struct FString GetResult2();
	static struct FString GetResult();
	static struct FString GetReason();
	static struct FString GetHurtUniqueIdentifier();
	static struct FString GetHurtUid();
	static struct FString GetHurtPosture();
	static struct FString GetHurtPosition();
	static struct FString GetHurtPlayerTeamId();
	static struct FString GetHurtPlayerName();
	static struct FString GetHurtOpenId();
	static struct FString GetHurtMaxBulletCountInClip();
	static struct FString GetHurtIsInHouse();
	static struct FString GetHurtHealth();
	static struct FString GetHurtEquipId();
	static struct FString GetHurtDirection();
	static struct FString GetHurtCarForwardSpeed();
	static struct FString GetHurtBulletCountInClip();
	static struct FString GetHurtBulletCountInBarrel();
	static struct FString GetHurtAim();
	static struct FString GetDph();
	static struct FString GetDistance();
	static struct FString GetCarValue();
	static struct FString GetCarHealth();
	static struct FString GetBeHurtUniqueIdentifier();
	static struct FString GetBeHurtUid();
	static struct FString GetBeHurtPosture();
	static struct FString GetBeHurtPosition();
	static struct FString GetBeHurtPlayerTeamId();
	static struct FString GetBeHurtPlayerName();
	static struct FString GetBeHurtOpenId();
	static struct FString GetBeHurtLastHealth();
	static struct FString GetBeHurtJacketDurabilityReduction();
	static struct FString GetBeHurtJacketDurability();
	static struct FString GetBeHurtJacket();
	static struct FString GetBeHurtIsInHouse();
	static struct FString GetBeHurtHelmetDurabilityReduction();
	static struct FString GetBeHurtHelmetDurability();
	static struct FString GetBeHurtHelmet();
	static struct FString GetBeHurtHealth();
	static struct FString GetBeHurtEquipId();
	static struct FString GetBeHurtDirection();
	static struct FString GetBeHurtCarForwardSpeed();
	static struct FString GetAce();
};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_Result
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_UnderEnermyAttack_Result : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_Result");
		return pStaticClass;
	}


	static struct FString GetWeedingOut();
	static struct FString GetReducingHealth();
	static struct FString GetKnockingOutReducingHealth();
	static struct FString GetKnockingOut();
};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_Result2
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_UnderEnermyAttack_Result2 : public UEventDataCollectionValues_UnderEnermyAttack_Result
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_Result2");
		return pStaticClass;
	}


	static struct FString GetWeedingOut2();
};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_Reason
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_UnderEnermyAttack_Reason : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_Reason");
		return pStaticClass;
	}


	static struct FString GetVehicleColliding();
	static struct FString GetVehicleBombing();
	static struct FString GetPoison();
	static struct FString GetLastBreathWithoutRescue();
	static struct FString GetFalling();
	static struct FString GetDrowning();
	static struct FString GetBombing();
	static struct FString GetAirAttacking();
	static struct FString FromDamageEvent(const struct FDamageEvent& DamageEvent);
};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture");
		return pStaticClass;
	}


	static struct FString GetWalking();
	static struct FString GetTurningHead();
	static struct FString GetStanding();
	static struct FString GetRunning();
	static struct FString GetProning();
	static struct FString GetJumping();
	static struct FString GetDying();
	static struct FString GetDriving();
	static struct FString GetCrouching();
	static struct FString GetCarriging();
	static struct FString FromPawnStates(int64_t PawnStates);
	static struct FString FromPawnState(EPawnState PawnState);
};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_HurtPosture
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_UnderEnermyAttack_HurtPosture : public UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_HurtPosture");
		return pStaticClass;
	}

};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_HurtAim
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_UnderEnermyAttack_HurtAim : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_HurtAim");
		return pStaticClass;
	}


	static struct FString Get(class ASTExtraBaseCharacter* AttackerSTExtraBaseCharacter, class AActor* DamageCauser);
};


// Class Addons.EventDataCollectionKeys_TakingDamage
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_TakingDamage : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_TakingDamage");
		return pStaticClass;
	}


	static struct FString GetResult();
	static struct FString GetReason();
	static struct FString GetPlayerName();
	static struct FString GetOpenId();
	static struct FString GetLeftHealth();
};


// Class Addons.EventDataCollectionValues_TakingDamage_Reason
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_TakingDamage_Reason : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_TakingDamage_Reason");
		return pStaticClass;
	}


	static struct FString GetVehicleColliding();
	static struct FString GetVehicleBombing();
	static struct FString GetPoison();
	static struct FString GetLastBreathWithoutRescue();
	static struct FString GetFalling();
	static struct FString GetDrowning();
	static struct FString GetBombing();
	static struct FString GetAirAttacking();
	static struct FString FromDamageEvent(const struct FDamageEvent& DamageEvent);
};


// Class Addons.EventDataCollectionValues_TakingDamage_Result
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_TakingDamage_Result : public UEventDataCollectionValues_UnderEnermyAttack_Result
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_TakingDamage_Result");
		return pStaticClass;
	}

};


// Class Addons.EventDataCollectionKeys_CircleReducing
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_CircleReducing : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_CircleReducing");
		return pStaticClass;
	}


	static struct FString GetOpenId();
};


// Class Addons.EventDataCollectionKeys_CircleChange
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_CircleChange : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_CircleChange");
		return pStaticClass;
	}


	static struct FString GetWorldLocation();
	static struct FString GetOldCircleRadius();
	static struct FString GetOldCircleCenter();
	static struct FString GetNewCircleRadius();
	static struct FString GetNewCircleCenter();
};


// Class Addons.EventDataCollectionKeys_Rescue
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_Rescue : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Rescue");
		return pStaticClass;
	}


	static struct FString GetStatus();
	static struct FString GetRescuePlayerName();
	static struct FString GetRescueOpenId();
	static struct FString GetBeRescuePlayerName();
	static struct FString GetBeRescueOpenId();
};


// Class Addons.EventDataCollectionValues_Rescue_Status
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_Rescue_Status : public UEventDataCollectionValues_UsingItem_Status
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_Rescue_Status");
		return pStaticClass;
	}

};


// Class Addons.EventDataCollectionKeys_DrivingVehicle
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_DrivingVehicle : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_DrivingVehicle");
		return pStaticClass;
	}


	static struct FString GetVehicleId();
	static struct FString GetTire();
	static struct FString GetStatus();
	static struct FString GetSpeed();
	static struct FString GetPassengerOpenId();
	static struct FString GetOil();
	static struct FString GetDrivingType();
	static struct FString GetDriverUId();
	static struct FString GetDriverPlayerName();
	static struct FString GetDriverOpenId();
};


// Class Addons.EventDataCollectionValues_DrivingVehicle_DrivingType
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_DrivingVehicle_DrivingType : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_DrivingVehicle_DrivingType");
		return pStaticClass;
	}


	static struct FString GetPassanger();
	static struct FString GetDriver();
};


// Class Addons.EventDataCollectionValues_DrivingVehicle_Status
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_DrivingVehicle_Status : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_DrivingVehicle_Status");
		return pStaticClass;
	}


	static struct FString GetOn();
	static struct FString GetOff();
};


// Class Addons.EventDataCollectionKeys_ReloadingBullet
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_ReloadingBullet : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_ReloadingBullet");
		return pStaticClass;
	}


	static struct FString GetMaxBulletCountInClip();
	static struct FString GetBulletCountInClip();
	static struct FString GetBulletCountInBarrel();
};


// Class Addons.EventDataCollectionKeys_AirDrop
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_AirDrop : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_AirDrop");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetPosition();
	static struct FString GetLandedPosition();
};


// Class Addons.EventDataCollectionValues_AirDrop_Type
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_AirDrop_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_AirDrop_Type");
		return pStaticClass;
	}


	static struct FString GetSuper();
	static struct FString GetNormal();
};


// Class Addons.EventDataCollectionKeys_ItemAttach
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_ItemAttach : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_ItemAttach");
		return pStaticClass;
	}


	static struct FString GetState();
	static struct FString GetOpenId();
	static struct FString GetItemId();
	static struct FString GetAttachmentId();
};


// Class Addons.EventDataCollectionValues_ItemAttach_State
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_ItemAttach_State : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_ItemAttach_State");
		return pStaticClass;
	}


	static struct FString GetDetaching();
	static struct FString GetAttaching();
};


// Class Addons.EventDataCollectionKeys_PlayerInfo
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_PlayerInfo : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_PlayerInfo");
		return pStaticClass;
	}


	static struct FString GetSex();
	static struct FString GetPlayerName();
	static struct FString GetAvatars();
};


// Class Addons.EventDataCollectionValues_PlayerInfo_Sex
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_PlayerInfo_Sex : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_PlayerInfo_Sex");
		return pStaticClass;
	}


	static struct FString GetMale();
	static struct FString GetFemale();
};


// Class Addons.EventDataCollectionKeys_MiniMapShowInfo
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_MiniMapShowInfo : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_MiniMapShowInfo");
		return pStaticClass;
	}


	static struct FString GetVoiceCheck();
	static struct FString GetPosition();
};


// Class Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck");
		return pStaticClass;
	}


	static struct FString GetWeapon();
	static struct FString GetTyre();
	static struct FString GetSilentWeapon();
	static struct FString GetGlass();
	static struct FString GetFootPrint();
};


// Class Addons.EventDataCollectionKeys_Following
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_Following : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Following");
		return pStaticClass;
	}


	static struct FString GetFollowType();
	static struct FString GetFollowerOpenId();
	static struct FString GetFolloweeOpenId();
};


// Class Addons.EventDataCollectionValues_Following_FollowType
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_Following_FollowType : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_Following_FollowType");
		return pStaticClass;
	}


	static struct FString GetRefuse();
	static struct FString GetInvitation();
	static struct FString GetFollowing();
	static struct FString GetCancellation();
	static struct FString GetAcception();
};


// Class Addons.EventDataCollectionKeys_MiniMapPinning
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_MiniMapPinning : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_MiniMapPinning");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetPinPosition();
	static struct FString GetOpenId();
};


// Class Addons.EventDataCollectionValues_MiniMapPinning_Type
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_MiniMapPinning_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_MiniMapPinning_Type");
		return pStaticClass;
	}


	static struct FString GetPinning();
	static struct FString GetNonPinning();
};


// Class Addons.EventDataCollectionKeys_Blocking
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_Blocking : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Blocking");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetBlockerOpenId();
	static struct FString GetBlockerIndex();
	static struct FString GetBlockeeOpenId();
	static struct FString GetBlockeeIndex();
};


// Class Addons.EventDataCollectionValues_Blocking_Type
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_Blocking_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_Blocking_Type");
		return pStaticClass;
	}


	static struct FString GetNonBlocking();
	static struct FString GetBlocking();
};


// Class Addons.EventDataCollectionKeys_Dancing
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_Dancing : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Dancing");
		return pStaticClass;
	}


	static struct FString GetDancerOpenId();
	static struct FString GetDanceId();
};


// Class Addons.EventDataCollectionKeys_PickingupTombBox
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_PickingupTombBox : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_PickingupTombBox");
		return pStaticClass;
	}


	static struct FString GetOpenId();
	static struct FString GetItemIDs();
	static struct FString GetItemId();
	static struct FString GetItemCounts();
	static struct FString GetItemCount();
	static struct FString GetBoxName();
};


// Class Addons.EventDataCollectionKeys_AirAttacking
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_AirAttacking : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_AirAttacking");
		return pStaticClass;
	}


	static struct FString GetWorldLocation();
	static struct FString GetCenter();
};


// Class Addons.EventDataCollectionKeys_CurrentWeapon
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_CurrentWeapon : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_CurrentWeapon");
		return pStaticClass;
	}


	static struct FString GetMaxBulletCountInClip();
	static struct FString GetItemId();
	static struct FString GetBulletCountInClip();
	static struct FString GetBulletCountInBarrel();
};


// Class Addons.EventDataCollectionKeys_SceneInfo
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_SceneInfo : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_SceneInfo");
		return pStaticClass;
	}


	static struct FString GetIsInHouse();
};


// Class Addons.EventDataCollectionValues_SceneInfo_IsInHouse
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_SceneInfo_IsInHouse : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_SceneInfo_IsInHouse");
		return pStaticClass;
	}


	static struct FString GetYes();
	static struct FString GetNo();
};


// Class Addons.EventDataCollectionKeys_TeamInfo
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_TeamInfo : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_TeamInfo");
		return pStaticClass;
	}


	static struct FString GetTeammateUIds();
	static struct FString GetTeammateOpenIds();
	static struct FString GetTeamId();
};


// Class Addons.EventDataCollectionKeys_EnteringLeavingTeam
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_EnteringLeavingTeam : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_EnteringLeavingTeam");
		return pStaticClass;
	}


	static struct FString GetTeamId();
	static struct FString GetOpenId();
	static struct FString GetAction();
};


// Class Addons.EventDataCollectionValues_EnteringLeavingTeam_Action
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_EnteringLeavingTeam_Action : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_EnteringLeavingTeam_Action");
		return pStaticClass;
	}


	static struct FString GetLeaving();
	static struct FString GetEntering();
};


// Class Addons.EventDataCollectionKeys_OnOffline
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_OnOffline : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_OnOffline");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetOpenId();
};


// Class Addons.EventDataCollectionValues_OnOffline_Type
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_OnOffline_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_OnOffline_Type");
		return pStaticClass;
	}


	static struct FString GetOnline();
	static struct FString GetOffline();
};


// Class Addons.EventDataCollectionKeys_RankList
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_RankList : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_RankList");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetState();
	static struct FString GetOpenId();
};


// Class Addons.EventDataCollectionValues_RankList_State
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_RankList_State : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_RankList_State");
		return pStaticClass;
	}


	static struct FString GetOn();
	static struct FString GetOff();
};


// Class Addons.EventDataCollectionKeys_TextMessage
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_TextMessage : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_TextMessage");
		return pStaticClass;
	}


	static struct FString GetText();
	static struct FString GetOpenId();
	static struct FString GetItemPosition();
	static struct FString GetItemId();
};


// Class Addons.EventDataCollectionKeys_PawnState
// 0x0010 (0x0038 - 0x0028)
class UEventDataCollectionKeys_PawnState : public UEventDataCollectionKeys
{
public:
	TArray<EPawnState>                                 InterestedPawnStates;                                     // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_PawnState");
		return pStaticClass;
	}


	static bool IsInterestedPawnStates(EPawnState PawnState);
	static struct FString GetType();
	static struct FString GetStates();
	static struct FString GetOpenId();
	static struct FString GetChangedState();
};


// Class Addons.EventDataCollectionValues_PawnState_State
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_PawnState_State : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_PawnState_State");
		return pStaticClass;
	}


	static struct FString GetLeaving();
	static struct FString GetEntering();
};


// Class Addons.EventDataCollectionKeys_OpenCloseDoor
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_OpenCloseDoor : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_OpenCloseDoor");
		return pStaticClass;
	}


	static struct FString GetRightState();
	static struct FString GetOpenId();
	static struct FString GetLeftState();
};


// Class Addons.EventDataCollectionValues_OpenCloseDoor_RightState
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_OpenCloseDoor_RightState : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_OpenCloseDoor_RightState");
		return pStaticClass;
	}


	static struct FString GetOpen();
	static struct FString GetClose();
	static struct FString GetBroken();
};


// Class Addons.EventDataCollectionValues_OpenCloseDoor_LeftState
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionValues_OpenCloseDoor_LeftState : public UEventDataCollectionValues_OpenCloseDoor_RightState
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_OpenCloseDoor_LeftState");
		return pStaticClass;
	}

};


// Class Addons.EventDataCollectionKeys_MicSpeakerState
// 0x0000 (0x0028 - 0x0028)
class UEventDataCollectionKeys_MicSpeakerState : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_MicSpeakerState");
		return pStaticClass;
	}


	static struct FString GetSpeaker();
	static struct FString GetOpenId();
	static struct FString GetMic();
};


// Class Addons.EventDataCollectionKeys_VehicleState
// 0x0008 (0x0030 - 0x0028)
class UEventDataCollectionKeys_VehicleState : public UEventDataCollectionKeys
{
public:
	float                                              LowerboundTickReportIntervalSeconds;                      // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              UpperboundTickReportIntervalSeconds;                      // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_VehicleState");
		return pStaticClass;
	}


	static struct FString GetWheelStates();
	static struct FString GetHp();
	static struct FString GetFuel();
	static struct FString GetForwardSpeed();
};


// Class Addons.EventReportComponent
// 0x0008 (0x0120 - 0x0118)
class UEventReportComponent : public UActorComponent
{
public:
	class AUAEGameMode*                                GameMode;                                                 // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventReportComponent");
		return pStaticClass;
	}

};


// Class Addons.FloatingCapsuleVehicle
// 0x0090 (0x19B0 - 0x1920)
class AFloatingCapsuleVehicle : public ASTExtraAmphibiousVehicle
{
public:
	float                                              MinLiftHeight;                                            // 0x1920(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LiftSpeedFactor;                                          // 0x1924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoWakeUpDistance;                                       // 0x1928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableMoveWheelVelocticyCheck;                            // 0x192C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x192D(0x0003) MISSED OFFSET
	float                                              MoveWheelVelocticyCheckThreshold;                         // 0x1930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BreakOutMode;                                             // 0x1934(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1935(0x0003) MISSED OFFSET
	float                                              BreakOutCD;                                               // 0x1938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreakOutInterval;                                         // 0x193C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BreakOutImpulseCurve;                                     // 0x1940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultBreakOutVelocity;                                  // 0x1948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultBreakOutImpulse;                                   // 0x194C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyCameraEffect;                                       // 0x1950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               KeepThrottleInput;                                        // 0x1951(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x1952(0x0002) MISSED OFFSET
	float                                              BreakOutCameraFOVEffect;                                  // 0x1954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_BreakOutStart;                                        // 0x1958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_BreakOutEnd;                                          // 0x1960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnVehicleBreakOutStateChanged;                            // 0x1968(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnVehicleWaterStateChanged;                               // 0x1978(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UFloatingVehicleVehicleMovementComponent2*   VehicleFloatingMovement;                                  // 0x1988(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bInBreakOutState;                                         // 0x1990(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x13];                                      // 0x1991(0x0013) MISSED OFFSET
	bool                                               TargetFloatState;                                         // 0x19A4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xB];                                       // 0x19A5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.FloatingCapsuleVehicle");
		return pStaticClass;
	}


	void VehicleBreakOutVelocity(const struct FVector& ApplyVelocity, bool bAddVelocity);
	void SetTargetFloatState(bool bUpState);
	void SetServerPrecentPenetratingEnabled(bool Enabled);
	void SetEnterDistanceSq(float InEnterDistance, bool IsSq);
	void ServerBreakOut(bool bEnable);
	void OnRep_BreakOutState(bool bPrevState);
	void MoveWheelHeight(float DeltaSeconds);
	class USTExtraFloatingVehicleMovementComponentBase* GetFloatingVehicleMovement();
	float GetEnterDistanceSq();
	void DoBreakOut(bool bEnable);
	void BreakOut(bool bEnable);
	void BPTryCheckSimulatePhysics();
};


// Class Addons.FloatingVehicleVehicleMovementComponent2
// 0x0040 (0x0228 - 0x01E8)
class UFloatingVehicleVehicleMovementComponent2 : public USTExtraFloatingVehicleMovementComponentBase
{
public:
	class UCurveFloat*                                 Curve_Acceleration;                                       // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_BackwardAcceleration;                               // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_Radius;                                             // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_HandBrakeAcceleration;                              // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringTorqueScale;                                      // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaticStatusSpeedThreshold;                               // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClientSideCameraUpdates;                                 // 0x0210(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSteeringTorqueMode;                                      // 0x0211(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0212(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.FloatingVehicleVehicleMovementComponent2");
		return pStaticClass;
	}


	bool UpdateEnabled();
	void EnableUpdate(bool InEnable);
};


// Class Addons.FreeViewPawn
// 0x0028 (0x0480 - 0x0458)
class AFreeViewPawn : public APawn
{
public:
	class UPawnMovementComponent*                      MovementComponent;                                        // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            CollisionComponent;                                       // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              MaxDistanceFromCharacter;                                 // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	class ASTExtraPlayerController*                    ViewController;                                           // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveUpRate;                                               // 0x0478(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x047C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.FreeViewPawn");
		return pStaticClass;
	}


	void UnbindPlayerInputDelegate();
	void SetController(class ASTExtraPlayerController* InController);
	void MoveUp(float Val);
	void MoveRight(float Val);
	void MoveForward(float Val);
	struct FVector GetFreeViewOrigin();
	void BindPlayerInputDelegate();
};


// Class Addons.FreeViewPawnMovement
// 0x0018 (0x01B0 - 0x0198)
class UFreeViewPawnMovement : public UPawnMovementComponent
{
public:
	class AFreeViewPawn*                               FreeViewPawnOwner;                                        // 0x0198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Deceleration;                                             // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.FreeViewPawnMovement");
		return pStaticClass;
	}

};


// Class Addons.HawkEyeSubsystem
// 0x0010 (0x0040 - 0x0030)
class UHawkEyeSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.HawkEyeSubsystem");
		return pStaticClass;
	}

};


// Class Addons.HoveringVehicle
// 0x0030 (0x1520 - 0x14F0)
class AHoveringVehicle : public ASTExtraVehicleBase
{
public:
	float                                              BoostModifier;                                            // 0x14F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ModifyMassInKG;                                           // 0x14F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bAutoAdaptHoverSpot : 1;                                  // 0x14F8(0x0001) (Edit, BlueprintVisible, Config, DisableEditOnInstance)
	bool                                               bHoveringActive;                                          // 0x14F9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x14FA(0x0006) MISSED OFFSET
	TArray<class USceneComponent*>                     HoveringSpots;                                            // 0x1500(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      bHoveringInitialized : 1;                                 // 0x1510(0x0001)
	EHoverSimulateState                                HoverSimulateState;                                       // 0x1511(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x1512(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.HoveringVehicle");
		return pStaticClass;
	}


	void OnClientExit(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void InitHoveringSpots();
	void HandleOnSeatDetached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void DeactivateHoveringSimulate();
	void ActivateHoveringSimulate();
};


// Class Addons.HoveringVehicleMovementComponent
// 0x00B0 (0x0248 - 0x0198)
class UHoveringVehicleMovementComponent : public UPawnMovementComponent
{
public:
	float                                              HoverDistance;                                            // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverDistanceWhenNoDriver;                                // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedKMH;                                              // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularForce;                                          // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceGroundLength;                                        // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringCoefficient;                                        // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SpringCurveFloat;                                         // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DampingCoefficient;                                       // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRollAngle;                                             // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimpleHoverForceRate;                                     // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaticHoveringSectionFactor;                              // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoCorrectWhenTurnOver : 1;                             // 0x01C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01C9(0x0003) MISSED OFFSET
	float                                              AutoCorrectForce;                                         // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnOverAngleOfZAxis;                                     // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnOverLastDurationBeforeFix;                            // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoAdaptLinearVelocityDirToForward : 1;                 // 0x01D8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01D9(0x0003) MISSED OFFSET
	float                                              AutoAdaptLinearVelFactor;                                 // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DragDownForceFactorWhenInAir;                             // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BringUpForceFactorWhenHoverSpotUnderGround;               // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bMovementDrivenByCurve : 1;                               // 0x01E8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET
	class UCurveFloat*                                 Curve_Acceleration;                                       // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_BackwardAcceleration;                               // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_Radius;                                             // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FHoveringSimulateData>               HoveringSimulateData;                                     // 0x0208(0x0010) (ZeroConstructor)
	float                                              STThrottleInput;                                          // 0x0218(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              STSteeringInput;                                          // 0x021C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bInAir;                                                   // 0x0220(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHorizontalAngleLimit;                                    // 0x0221(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0222(0x0002) MISSED OFFSET
	float                                              Acceleration;                                             // 0x0224(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bTurnOver;                                                // 0x0228(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1F];                                      // 0x0229(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.HoveringVehicleMovementComponent");
		return pStaticClass;
	}


	void UpdateMovement(float DeltaTime);
	void UpdateHoverSimulation(float DeltaTime);
	void SetThrottleInput(float rate);
	void SetSteeringInput(float rate);
	void ServerUpdateInput(float InSteeringInput, float InThrottleInput);
	void Reset();
};


// Class Addons.LadderActor
// 0x0080 (0x0538 - 0x04B8)
class ALadderActor : public ALuaActor
{
public:
	class USceneComponent*                             RootScene;                                                // 0x04B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TopScene;                                                 // 0x04C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             BottomScene;                                              // 0x04C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              LadderWidth;                                              // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LadderStepNum;                                            // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LadderStepHeight;                                         // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CharacterOffset;                                          // 0x04DC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TopRelaPos;                                               // 0x04E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BottomRelaPos;                                            // 0x04F4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              UpDownTime;                                               // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnterTopTime;                                             // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnterBottomTime;                                          // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitTopTime;                                              // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitBottomTime;                                           // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	class UCurveVector*                                upCurve;                                                  // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                DownCurve;                                                // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                ToTopCurve;                                               // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                FromTopCurve;                                             // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.LadderActor");
		return pStaticClass;
	}

};


// Class Addons.LadderAnimInstance
// 0x0050 (0x0A40 - 0x09F0)
class ULadderAnimInstance : public UCharacterAnimStateBase
{
public:
	int                                                LadderStep;                                               // 0x09F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09F4(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           BottomEnterAnim;                                          // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           BottomExitAnim;                                           // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           TopEnterAnim;                                             // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           TopExitAnim;                                              // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           UpLeftToRightAnim;                                        // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           UpRightToLeftAnim;                                        // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           DownLeftToRightAnim;                                      // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           DownRightToLeftAnim;                                      // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0A38(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.LadderAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.LadderMovementComponent
// 0x0160 (0x0338 - 0x01D8)
class ULadderMovementComponent : public ULuaActorComponent
{
public:
	class ASTExtraBaseCharacter*                       CharacterOwner;                                           // 0x01D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x01E0(0x0024) MISSED OFFSET
	float                                              LadderWidth;                                              // 0x0204(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LadderStepNum;                                            // 0x0208(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LadderStepHeight;                                         // 0x020C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CharacterOffset;                                          // 0x0210(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              UpDownTime;                                               // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnterTopTime;                                             // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnterBottomTime;                                          // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitTopTime;                                              // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitBottomTime;                                           // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TopRelaPos;                                               // 0x0230(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BottomRelaPos;                                            // 0x023C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                upCurve;                                                  // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                DownCurve;                                                // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                ToTopCurve;                                               // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                FromTopCurve;                                             // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LadderTopExitPosition;                                    // 0x0268(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     LadderBottomExitPosition;                                 // 0x0274(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bLocalOnLadder;                                           // 0x0280(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	struct FLadderMoveData                             OldLadderMoveState;                                       // 0x0288(0x0018) (BlueprintVisible)
	struct FLadderMoveData                             LadderMoveState;                                          // 0x02A0(0x0018) (BlueprintVisible)
	struct FLadderMoveData                             NetLadderMoveState;                                       // 0x02B8(0x0018) (BlueprintVisible, Net)
	unsigned char                                      UnknownData02[0x10];                                      // 0x02D0(0x0010) MISSED OFFSET
	int                                                SimActionNum;                                             // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreClientError;                                       // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	float                                              ServerLocDiff;                                            // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBeginPlayRequest;                                        // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTickHasSendRequest;                                      // 0x02ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x02EE(0x0002) MISSED OFFSET
	class ALadderActor*                                OverlappedLadder;                                         // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               BottomEnterAnim;                                          // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               BottomExitAnim;                                           // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               TopEnterAnim;                                             // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               TopExitAnim;                                              // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               UpLeftToRightAnim;                                        // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               UpRightToLeftAnim;                                        // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DownLeftToRightAnim;                                      // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DownRightToLeftAnim;                                      // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.LadderMovementComponent");
		return pStaticClass;
	}


	void StartPhaseMoving();
	void ShowDebugInformation(float DeltaTime);
	void ServerMove(const struct FLadderMoveData& LadderMoveData, int MoveDirection, int EnterOrLeave);
	bool ServerCheckClientError(const struct FLadderMoveData& LadderMoveData);
	void RequestCurrentLadderState();
	void ReceiveExitLadder();
	void ReceiveEnterLadder();
	void PushBackSimAction(const struct FLadderMoveData& InData);
	void PopFirstSimAction();
	void OnRep_NetLadderMoveState();
	void OnCharacterExitLadder();
	void OnCharacterEnterLadder(class ALadderActor* Ladder);
	void LadderMoveInput(float rate);
	bool IsLeaving();
	bool IsEntering();
	void InitLadderParams(class ALadderActor* Ladder);
	void HandleJump();
	void HandleInput();
	struct FString GetStateName();
	struct FLadderMoveData GetNextMoveData(const struct FLadderMoveData& Cur, int8_t movedir);
	class UAnimSequence* GetLadderAnimSequence();
	void GatherCurrentLadderState();
	bool ExitLadder();
	bool EnterLadder(class ALadderActor* Ladder, bool bTop);
	void EndPhaseMoving();
	void EnableCharacterMovement(bool bEnable);
	void ClimbUpOneStepInternal();
	void ClimbDownOneStepInternal();
	bool CheckValidPositionOnLadder(class AActor* Ladder, int StepNum);
	bool CheckValidPosition(const struct FVector& Pos);
	void CheckEnterOrExitLadder();
	void CheckAutoEnterLadder();
	void CatchUp(const struct FLadderMoveData& LadderMoveData);
	struct FVector CalcLocationOnLadder(class AActor* Ladder, int StepNum);
	void BuildActionQueue(const struct FLadderMoveData& Target);
	void BindPlayerMoveInput(bool bEnable);
	void AdjustClient(const struct FLadderMoveData& LadderMoveData);
};


// Class Addons.LandingCreatureAnimInstance
// 0x0110 (0x05C0 - 0x04B0)
class ULandingCreatureAnimInstance : public UBioVehicleAnimInstanceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04B0(0x0008) MISSED OFFSET
	float                                              MaxDirection;                                             // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionLerpSpeed;                                       // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedLerpSpeed;                                           // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlockedSpeed;                                             // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunStopSpeedThreshold;                                    // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LegIKAlphaLerpSpeed;                                      // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABioVehicleBase*                             OwnerCreature;                                            // 0x04D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnLandingCreatureJump;                                    // 0x04D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ThrottleInput;                                            // 0x04E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x04EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasAcceleration;                                         // 0x04F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsJumping;                                               // 0x04F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunStopping;                                           // 0x04F2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsStopping;                                              // 0x04F3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x04F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldUseExtraDeadAnim;                                  // 0x04F5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04F6(0x0002) MISSED OFFSET
	int                                                RandomIdleIndex;                                          // 0x04F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDoRandomIdle;                                            // 0x04FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04FD(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x0500(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0504(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              LegIKAlpha;                                               // 0x0510(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	class UAnimPoseRecorder*                           AnimPoseRecorder;                                         // 0x0518(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDistanceMatching;                                  // 0x0520(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0521(0x0003) MISSED OFFSET
	struct FVector                                     PredictedStopPoint;                                       // 0x0524(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              DistanceFromStopPoint;                                    // 0x0530(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	class UAnimSequence*                               ExtraDeathAnim;                                           // 0x0538(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UntamedIdleAnim;                                          // 0x0540(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleAnim;                                                 // 0x0548(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim1;                                          // 0x0550(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim2;                                          // 0x0558(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x0560(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               JumpStartAnim;                                            // 0x0568(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingAnim;                                              // 0x0570(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleLandingAnim;                                          // 0x0578(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunLandingAnim;                                           // 0x0580(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurnStartAnim;                                            // 0x0588(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurningAnim;                                              // 0x0590(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurnEndAnim;                                              // 0x0598(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x20];                                      // 0x05A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.LandingCreatureAnimInstance");
		return pStaticClass;
	}


	void SetJump();
	void ResetStop();
	void ResetJump();
	void ResetDoRandomIdle();
	void DoRandomIdle(int Index);
};


// Class Addons.LandingCreatureDriverAnimInstance
// 0x00E0 (0x0B20 - 0x0A40)
class ULandingCreatureDriverAnimInstance : public UBioVehicleRiderAnimInstanceBase
{
public:
	struct FName                                       LeftHandSaddleSocketName;                                 // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightHandSaddleSocketName;                                // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0A50(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x0A54(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableNewStateMachine;                                   // 0x0A58(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasAcceleration;                                         // 0x0A59(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsJumping;                                               // 0x0A5A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsStopping;                                              // 0x0A5B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsRunStopping;                                           // 0x0A5C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bDoRandomIdle;                                            // 0x0A5D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0A5E(0x0002) MISSED OFFSET
	int                                                RandomIdleIndex;                                          // 0x0A60(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x0A64(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A65(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x0A68(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Direction;                                                // 0x0A6C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              BodyLeanAngle;                                            // 0x0A70(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x0A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HeadPitchDelta;                                           // 0x0A7C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HeadYawDelta;                                             // 0x0A80(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     LeftHandEffectorLocation;                                 // 0x0A84(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FVector                                     RightHandEffectorLocation;                                // 0x0A90(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              HandIkAlpha;                                              // 0x0A9C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableHandIK;                                            // 0x0AA0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableDistanceMatching;                                  // 0x0AA1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0AA2(0x0006) MISSED OFFSET
	class UAnimSequence*                               IdleAnim;                                                 // 0x0AA8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunStopLAnim;                                             // 0x0AB0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunStopRAnim;                                             // 0x0AB8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkStopLAnim;                                            // 0x0AC0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkStopRAnim;                                            // 0x0AC8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim1;                                          // 0x0AD0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim2;                                          // 0x0AD8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x0AE0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               JumpStartAnim;                                            // 0x0AE8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingAnim;                                              // 0x0AF0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleLandingAnim;                                          // 0x0AF8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunLandingAnim;                                           // 0x0B00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurnStartAnim;                                            // 0x0B08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurningAnim;                                              // 0x0B10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurnEndAnim;                                              // 0x0B18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.LandingCreatureDriverAnimInstance");
		return pStaticClass;
	}


	void OnCreatureJumped();
};


// Class Addons.MonsterRaptorAnimInstance
// 0x0040 (0x06A0 - 0x0660)
class UMonsterRaptorAnimInstance : public UDinosaurMonsterAnimInstanceBase
{
public:
	bool                                               bResetIdleState;                                          // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0661(0x0003) MISSED OFFSET
	int                                                PlayedIdleIndex;                                          // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<int>                                        NotBattleIdleIndex;                                       // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        BattleIdleIndex;                                          // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DefaultBattleIdleIndex;                                   // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultNotBattleIdleIndex;                                // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasLockedTarget;                                         // 0x0690(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bInBattle;                                                // 0x0691(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0692(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.MonsterRaptorAnimInstance");
		return pStaticClass;
	}


	void OnResetPlayedIdleIndex(int NewIndex);
};


// Class Addons.OBHttpComponent
// 0x0070 (0x0248 - 0x01D8)
class UOBHttpComponent : public ULuaActorComponent
{
public:
	TArray<struct FPlayerRealTimeAPI>                  RealTimeAPIList;                                          // 0x01D8(0x0010) (Net, ZeroConstructor)
	TArray<struct FPlayerAfterMatchAPI>                AfterMatchAPIList;                                        // 0x01E8(0x0010) (Net, ZeroConstructor)
	bool                                               bSwitchOBHttpComponent;                                   // 0x01F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET
	struct FString                                     IPAddr;                                                   // 0x0200(0x0010) (ZeroConstructor, Config)
	int                                                Port;                                                     // 0x0210(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	struct FString                                     URLSetting;                                               // 0x0218(0x0010) (ZeroConstructor)
	int                                                MaxFailedTimes;                                           // 0x0228(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	TArray<int>                                        NeedItems;                                                // 0x0230(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.OBHttpComponent");
		return pStaticClass;
	}


	void ServerGetBackPackInfo(int TeamID);
	void ServerGetAllPlayerThrowInfo();
	void ServerCollectTeammateItemList(int TeamID);
	void PostTeamWeaponInfo(const struct FString& TeamWeaponInfoJsonStr);
	void PostTeamBackPackInfoByTeamID(int TeamID);
	void PostTDMResultInfo(const struct FString& TDMResultInfoJsonStr);
	void PostPlayersAMInfo(const struct FString& PlayerAMInfoJsonStr);
	void OnRep_RealTimeAPIList();
	void OnRep_AfterMatchAPIList();
	void ClientUpdateTeammateItemList();
	void ClientGetPlayerUseSightInfo(TArray<struct FPlayerSightUsageInfoCompress> PlayerSightUsageInfoCompress);
	void ClientGetBackPackInfo(TArray<struct FPlayerBackPackInfo> TeamBackPackInfo);
	void ClientGetAllPlayerThrowInfo(TArray<struct FPlayerThrowInfo> AllPlayerThrowInfo);
	void ClientGetAirDropBoxInfo(unsigned char AirDropId, TArray<struct FAirDropBoxDataItem> AirDropBoxDataList);
};


// Class Addons.ObserverProbeComponent
// 0x01B8 (0x02D0 - 0x0118)
class UObserverProbeComponent : public UActorComponent
{
public:
	TArray<int>                                        ObserveReplicateItems;                                    // 0x0118(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0128(0x0070) MISSED OFFSET
	TArray<class ABaseAIController*>                   MLAIControllerList;                                       // 0x0198(0x0010) (ZeroConstructor)
	TArray<class ASTExtraPlayerController*>            APIControllerList;                                        // 0x01A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x70];                                      // 0x01B8(0x0070) MISSED OFFSET
	TArray<int>                                        PlayerCollectItemNeed;                                    // 0x0228(0x0010) (ZeroConstructor, Config)
	TArray<int>                                        PlayerUseItemNeed;                                        // 0x0238(0x0010) (ZeroConstructor, Config)
	TArray<int>                                        PlayerUseSight;                                           // 0x0248(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0258(0x0060) MISSED OFFSET
	class AUAEGameMode*                                OwnerGameMode;                                            // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraGameStateBase*                       CachedGameState;                                          // 0x02C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ObserverProbeComponent");
		return pStaticClass;
	}


	void PostInfoAfterMatch();
	void OnTerminatorEndGame(class AController* Killer, class AController* Victim, int DamageType, int ExtraParam);
	void CollectSightUseTime(uint32_t PlayerKey, int SightId, bool bUse);
};


// Class Addons.OBSubSystem
// 0x0000 (0x0030 - 0x0030)
class UOBSubSystem : public UWorldSubsystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.OBSubSystem");
		return pStaticClass;
	}

};


// Class Addons.PCOBCommonComponent
// 0x0098 (0x01B0 - 0x0118)
class UPCOBCommonComponent : public UActorComponent
{
public:
	struct FViewPoint                                  ViewPoint[0x5];                                           // 0x0118(0x001C)
	float                                              ObservingTime;                                            // 0x01A4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              TrackingDelayTime;                                        // 0x01A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PCOBCommonComponent");
		return pStaticClass;
	}


	void TrackingEnd();
	void PCOBTerminator(class ASTExtraBaseCharacter* Causer, class ASTExtraBaseCharacter* Victim);
};


// Class Addons.PterosaurAnimInstance
// 0x0140 (0x05F0 - 0x04B0)
class UPterosaurAnimInstance : public UBioVehicleAnimInstanceBase
{
public:
	class APterosaurVehicle*                           OwnerDinosaur;                                            // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HorizontalSpeedLerpSpeed;                                 // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalSpeedLerpSpeed;                                   // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinStartLeanRollSpeed;                                    // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinStartLeanPitchSpeed;                                   // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartFlyingSpeedThreshold;                                // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDirection;                                             // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopDirectionThreshold;                                  // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionLerpSpeed;                                       // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLeanAnglePitch;                                        // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLeanAngleRoll;                                         // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeanAngleRollLerpSpeed;                                   // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeanAnglePitchLerpSpeed;                                  // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPterosaurMoveMode                                 MoveState;                                                // 0x04E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPterosaurSwoopStage                               SwoopStage;                                               // 0x04E9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04EA(0x0002) MISSED OFFSET
	int                                                LandingIndex;                                             // 0x04EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasCatchedPassenger;                                     // 0x04F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsLanding;                                               // 0x04F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsGroundDead;                                            // 0x04F2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwoopingDown;                                          // 0x04F3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x04F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x04F5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTryingToLand;                                          // 0x04F6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartFlying;                                             // 0x04F7(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalSpeed;                                               // 0x04F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x04FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x0500(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0504(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x0508(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RisingInput;                                              // 0x050C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0510(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadYawDelta;                                             // 0x0514(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadPitchDelta;                                           // 0x0518(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadYawInterpolateSpeed;                                  // 0x051C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadPitchInterpolateSpeed;                                // 0x0520(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyLeanAngleRoll;                                        // 0x0524(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyLeanAnglePitch;                                       // 0x0528(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x052C(0x0004) MISSED OFFSET
	class UBlendSpace*                                 ArrestMovementAnim;                                       // 0x0530(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UntamedIdleAnim;                                          // 0x0538(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               GroundIdleAnim;                                           // 0x0540(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim1;                                          // 0x0548(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim2;                                          // 0x0550(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x0558(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 FlyingAO_Anim;                                            // 0x0560(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartFlyingAnim;                                          // 0x0568(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartLandingAnim1;                                        // 0x0570(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartLandingAnim2;                                        // 0x0578(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim1;                                             // 0x0580(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim2;                                             // 0x0588(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim3;                                             // 0x0590(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TakingOffAnim;                                            // 0x0598(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RiseUpAnim;                                               // 0x05A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RiseDownAnim;                                             // 0x05A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingStartAnim;                                          // 0x05B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingAnim;                                               // 0x05B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingEndAnim;                                            // 0x05C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               GroundDeathAnim;                                          // 0x05C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DeathFallingAnim;                                         // 0x05D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DeathFallingGround;                                       // 0x05D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x05E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurAnimInstance");
		return pStaticClass;
	}


	void ResetStartFlying();
	void OnStartFlying();
};


// Class Addons.PterosaurCatchedPassengerAnimInstance
// 0x0020 (0x0A60 - 0x0A40)
class UPterosaurCatchedPassengerAnimInstance : public UBioVehicleRiderAnimInstanceBase
{
public:
	class UAssetPlayerSyncNode*                        BlendSpaceSyncNode;                                       // 0x0A40(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              TotalSpeed;                                               // 0x0A48(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x0A4C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x0A50(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0A54(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x0A58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurCatchedPassengerAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.PterosaurDriverAnimInstance
// 0x00C0 (0x0B00 - 0x0A40)
class UPterosaurDriverAnimInstance : public UBioVehicleRiderAnimInstanceBase
{
public:
	class UAssetPlayerSyncNode*                        BlendSpaceSyncNode;                                       // 0x0A40(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                LandingIndex;                                             // 0x0A48(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x0A4C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartFlying;                                             // 0x0A4D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTryingToLand;                                          // 0x0A4E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasCatchedPassenger;                                     // 0x0A4F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalSpeed;                                               // 0x0A50(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x0A54(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x0A58(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0A5C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x0A60(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RisingInput;                                              // 0x0A64(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0A68(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyLeanAngleRoll;                                        // 0x0A6C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyLeanAnglePitch;                                       // 0x0A70(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPterosaurMoveMode                                 MoveState;                                                // 0x0A74(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A75(0x0003) MISSED OFFSET
	class UAnimSequence*                               GroundIdleAnim;                                           // 0x0A78(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x0A80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 CatchPassengerMovementAnim;                               // 0x0A88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartFlyingAnim;                                          // 0x0A90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartLandingAnim1;                                        // 0x0A98(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartLandingAnim2;                                        // 0x0AA0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim1;                                             // 0x0AA8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim2;                                             // 0x0AB0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim3;                                             // 0x0AB8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TakingOffAnim;                                            // 0x0AC0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RiseUpAnim;                                               // 0x0AC8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RiseDownAnim;                                             // 0x0AD0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingStartAnim;                                          // 0x0AD8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingAnim;                                               // 0x0AE0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingEndAnim;                                            // 0x0AE8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPterosaurAnimInstance>       OwnedPterosuarAnimInstance;                               // 0x0AF0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0AF8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurDriverAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.PterosaurMovementComponent
// 0x0250 (0x0D70 - 0x0B20)
class UPterosaurMovementComponent : public UBioVehicleMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B20(0x0008) MISSED OFFSET
	float                                              MaxFlyAcceleration;                                       // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlySteeringRotationSpeed;                                 // 0x0B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0B30(0x0010) MISSED OFFSET
	float                                              MaxUpSpeed;                                               // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDownSpeed;                                             // 0x0B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPterosaurSwoopDownStageChanged;                         // 0x0B48(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FPterosaurUpdateDistanceToLandConfig> UpdateGroundDistanceConfigs;                              // 0x0B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIgnoreHeightLimit;                                       // 0x0B68(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0B69(0x0003) MISSED OFFSET
	float                                              MaxFlyingZ;                                               // 0x0B6C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckLandingGround;                                      // 0x0B70(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0B71(0x0003) MISSED OFFSET
	float                                              DistanceToLand;                                           // 0x0B74(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LastCheckGroundInterval;                                  // 0x0B78(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0B7C(0x000C) MISSED OFFSET
	bool                                               bTopBlocked;                                              // 0x0B88(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0B89(0x0003) MISSED OFFSET
	float                                              MaxTraceDownHeight;                                       // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingHeight;                                          // 0x0B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinFlyingHeight;                                          // 0x0B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingHeightThres;                                        // 0x0B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SwoopClimbOffset;                                         // 0x0B9C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      bSwoopUsePathRotation : 1;                                // 0x0BA8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0BA9(0x0003) MISSED OFFSET
	float                                              SyncRotationSpeed;                                        // 0x0BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SyncRotationMoveSpeed;                                    // 0x0BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SyncRotationAcceptableAngle;                              // 0x0BB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SplineActorClass;                                         // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSwoopDownSpeed;                                        // 0x0BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineCurveTangentLength;                                 // 0x0BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreCatchEnterDistance;                                    // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0BCC(0x0004) MISSED OFFSET
	TArray<float>                                      ModifyEnterSplinePointDistanceArr;                        // 0x0BD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UCurveFloat*                                 SwoopSpeedCurve;                                          // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SwoopSpeedSafeRange;                                      // 0x0BE8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TMap<struct FVector2D, struct FVector2D>           DirectionCorrectMoveSpeedMap;                             // 0x0BF0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DistThresholdWhenInputAllowed;                            // 0x0C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSwoopMoveDuration;                                     // 0x0C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopMoveBlockedDurationThreshold;                        // 0x0C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSwitchUsePassedSplineDistance;                           // 0x0C4C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x17];                                      // 0x0C4D(0x0017) MISSED OFFSET
	struct FVector                                     DiveStartDirection;                                       // 0x0C64(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     DiveDirection;                                            // 0x0C70(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              MaxDiveSpeed;                                             // 0x0C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDiveTime;                                              // 0x0C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DiveTurnTime;                                             // 0x0C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DivingCoolDown;                                           // 0x0C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDivingResetCamera;                                       // 0x0C8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x33];                                      // 0x0C8D(0x0033) MISSED OFFSET
	class UCurveVector*                                SpeedCurve;                                               // 0x0CC0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                PositionCurve;                                            // 0x0CC8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x30];                                      // 0x0CD0(0x0030) MISSED OFFSET
	class UCurveVector*                                LandingCurve;                                             // 0x0D00(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              MaxTakeOffTime;                                           // 0x0D08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0D0C(0x0004) MISSED OFFSET
	class UCurveVector*                                TakeOffCurve;                                             // 0x0D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DivingCurve;                                              // 0x0D18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SwoopingDownVelocity;                                     // 0x0D20(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bSwoopTurnLeft;                                           // 0x0D2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0D2D(0x0003) MISSED OFFSET
	int                                                LandingConfigIndex;                                       // 0x0D30(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0D34(0x0004) MISSED OFFSET
	TArray<struct FPterosaurLandingConfig>             LandingConfigs;                                           // 0x0D38(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AActor*                                      CacheSplineActor;                                         // 0x0D48(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x8];                                       // 0x0D50(0x0008) MISSED OFFSET
	float                                              MaxAutoLandingTime;                                       // 0x0D58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              bNoDriverForceNoSimulate;                                 // 0x0D5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              bNoDriverForceLanding;                                    // 0x0D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              bCheckClientFlyingHeight;                                 // 0x0D64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x8];                                       // 0x0D68(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurMovementComponent");
		return pStaticClass;
	}


	void UpdateVerticalHeight(float DeltaTime);
	void StartTakingOff();
	void StartSwoopDown(const struct FVector& TargetLocation);
	void StartLanding();
	void StartFlyingDive();
	void SetServerDiveDirection(const struct FVector& Direction);
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	void SetAutoLanding(float Value);
	bool IsTakingOff();
	bool IsSwoopDown();
	bool IsSwoopCatching();
	bool IsStrugglingToLand();
	bool IsLocalSwoopingDown();
	bool IsLandingWalking();
	bool IsLanding();
	bool IsDiving();
	bool IsCurveMoving();
	EPterosaurMoveMode GetMoveState();
	float GetDistanceToLand();
	void ExitSwoopDown();
	void ExitLanding();
	void EndTakingOff();
	void EndSwoopDown(bool bRestVelocity);
	void EndLanding();
	void EndFlyingDive();
	void DealWithCustomAction(float DeltaTime);
	bool CheckCanStartFlyingDive();
	void CalculateFlyingVelocity(float DeltaTime);
	void CalculateFlyingAcceleration(float DeltaTime);
	void CalculateDivingVelocity(float DeltaTime);
};


// Class Addons.PterosaurVehicle
// 0x00D0 (0x1920 - 0x1850)
class APterosaurVehicle : public ABioVehicleBase
{
public:
	float                                              ForceOpenParachuteHeightInPterosaur;                      // 0x1850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloseParachuteHeightInPterosaur;                          // 0x1854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkipOpenParachuteHeightInPterosuar;                       // 0x1858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxExecSwoopCatchDistance;                                // 0x185C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinExecSwoopCatchDistance2D;                              // 0x1860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxCatchableDistance;                                     // 0x1864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopCatchCoolDown;                                       // 0x1868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldIgnoreHitPlayerWhenSwoopDown;                      // 0x186C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SyncSwoopCatchState;                                      // 0x186D(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x186E(0x0002) MISSED OFFSET
	class ASTExtraBaseCharacter*                       ArrestCharacter;                                          // 0x1870(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetCatchLocation;                                      // 0x1878(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1884(0x0004) MISSED OFFSET
	class UPterosaurMovementComponent*                 PterosaurMoveComponent;                                   // 0x1888(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DiveReadyTime;                                            // 0x1890(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1894(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPterosaurVehicleDive;                                   // 0x1898(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPterosaurVehicleDiveEnd;                                // 0x18A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPterosaurVehicleGroundDead;                             // 0x18B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPterosaurVehicleTopBlocked;                             // 0x18C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x8];                                       // 0x18D8(0x0008) MISSED OFFSET
	bool                                               bIsGroundDead;                                            // 0x18E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x18E1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPterosaurVehicleDead;                                   // 0x18E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAnimMontage*                                CatchPassengerAnim;                                       // 0x18F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PrepareCatchPassengerAnim;                                // 0x1900(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDynamicOptimizeActorComponents*             DynamicOptimizeComponent;                                 // 0x1908(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1910(0x0004) MISSED OFFSET
	float                                              FlyingHoverConsumeFuelRate;                               // 0x1914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x1918(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurVehicle");
		return pStaticClass;
	}


	void TryFlyingDive(bool bTry);
	void TryCancelSwoopDown();
	void ServerSwoopDown(const struct FVector& TargetLocation, bool IsForceEnd);
	void ServerReleaseCharacter(class ASTExtraBaseCharacter* Requester);
	void OnRep_SyncSwoopCatchState();
	void OnPterosaurSwoopStateChanged(EPterosaurSwoopStage NewStage, const struct FVector& TargetLocation);
	void OnPterosaurPrepareCatch();
	void OnClientExitFromPterosaur(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void MultiCast_SwoopDown(const struct FVector& TargetLocation);
	void MultiCast_SplineCorrect(const struct FVector& SyncLocation, const struct FVector& TargetLocation, TArray<struct FVector> SplinePoints);
	bool IsSwoopDown();
	bool IsSwoopCoolDown();
	bool IsSwoopCatching();
	void HandleOnSeatDetached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	class UPterosaurMovementComponent* GetPterosaurMovementComponent();
	float GetConsumeFuelRate();
	bool ForceCatchCharacter(class ASTExtraBaseCharacter* Character);
	bool DoSwoopDown(const struct FVector& TargetLocation);
	bool CanConsumeFuel();
	void BroadCastOnPterosaurPrepareCatch();
	void BPOnPterosaurSwoopStateChanged(unsigned char NewStage);
};


// Class Addons.RaptorMovementComponent
// 0x0050 (0x0B70 - 0x0B20)
class URaptorMovementComponent : public UBioVehicleMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B20(0x0008) MISSED OFFSET
	float                                              SpotTurnStartTime;                                        // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotTurnEndTime;                                          // 0x0B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              targetAngularSpeed;                                       // 0x0B30(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotTurnAngularSpeed;                                     // 0x0B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fBeginTurnInterpSpeed;                                    // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fEndTurnInterpSpeed;                                      // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpeedLerpFactor;                                   // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightToLeftSpeedLerpFactor;                               // 0x0B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LowSpeedRotationThreshold;                                // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsRotateTolerance;                                   // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanAdjustMovementFloor;                                  // 0x0B50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B51(0x0003) MISSED OFFSET
	float                                              BreakOutAcclerationRate;                                  // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreakOutVelocityRate;                                     // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0B5C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 BreakOutAccResistanceCurve;                               // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0B68(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.RaptorMovementComponent");
		return pStaticClass;
	}


	float GetWalkingAccResistance(float Speed);
	float GetMaxAcceleration();
};


// Class Addons.RaptorVehicle
// 0x0030 (0x1880 - 0x1850)
class ARaptorVehicle : public ABioVehicleBase
{
public:
	struct FScriptMulticastDelegate                    OnReachStopPoint;                                         // 0x1850(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FName                                       LeftFootBoneName;                                         // 0x1860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightFootBoneName;                                        // 0x1868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanRideWhenSwimming;                                     // 0x1870(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x1871(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.RaptorVehicle");
		return pStaticClass;
	}


	void SetHandBrake(float rate);
	void ServerSetHandBrake(float rate);
	void MulticastDoJump();
	class URaptorMovementComponent* GetRaptorMovementComponent();
	void DoJump();
};


// Class Addons.ReindeerAnimInstance
// 0x00A0 (0x0660 - 0x05C0)
class UReindeerAnimInstance : public ULandingCreatureAnimInstance
{
public:
	float                                              FlyingMovementPlayRate;                                   // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundMovementPlayRate;                                   // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 LeanAnglePelvisOffsetCurve;                               // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   FlyBodyLeanSpeedRange;                                    // 0x05D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   GroundBodyLeanSpeedRange;                                 // 0x05D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyMaxTurnLeanAngle;                                      // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundMaxTurnLeanAngle;                                   // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnLeanLerpSpeed;                                        // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRiseLeanAngle;                                         // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiseLeanLerpSpeed;                                        // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x05F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05F5(0x0003) MISSED OFFSET
	float                                              MovementAnimPlayRate;                                     // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              LeanPelvisOffset;                                         // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0601(0x0003) MISSED OFFSET
	float                                              RisingInput;                                              // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    BodyLeanAngle;                                            // 0x0608(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	float                                              TerrainAdaptingAlpha;                                     // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlendSpace*                                 AirMovementAnim;                                          // 0x0618(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               LandingAnim;                                              // 0x0620(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FlyingIdleAnim;                                           // 0x0628(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FlyingUpDownAnim;                                         // 0x0630(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AReindeerBioVehicle*                         OwnerReindeer;                                            // 0x0638(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentTurnLeanAngle;                                     // 0x0640(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TargetTurnLeanAngle;                                      // 0x0644(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentRiseLeanAngle;                                     // 0x0648(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TargetRiseLeanAngle;                                      // 0x064C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseComponentCalcTerrainAdaptingParam;                    // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0651(0x0003) MISSED OFFSET
	float                                              PelvisHeightOffset;                                       // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PelvisPitchOffset;                                        // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinusPelvisPitchOffset;                                   // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.ReindeerBioVehicle
// 0x0240 (0x1A90 - 0x1850)
class AReindeerBioVehicle : public ABioVehicleBase
{
public:
	class UVehicleAttachmentComponent*                 ReindeerAttachComponent;                                  // 0x1850(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        AttachBone_Helper;                                        // 0x1858(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        VehicleAttachBone_Helper;                                 // 0x1860(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           AttachCapsuleComponent;                                   // 0x1868(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       LeftFootBoneName;                                         // 0x1870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightFootBoneName;                                        // 0x1878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanRideWhenSwimming;                                     // 0x1880(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1881(0x0007) MISSED OFFSET
	struct FName                                       AttachBoneName;                                           // 0x1888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachLocationBoneName;                                   // 0x1890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DoLagRotationRate;                                        // 0x1898(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bDoRotationPitchLag;                                      // 0x18A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x18A5(0x0003) MISSED OFFSET
	float                                              RotateFollowRate;                                         // 0x18A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachedVehicleMaxHP;                                     // 0x18AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachedVehicleMaxFuel;                                   // 0x18B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSyncMovementTick;                                  // 0x18B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x18B5(0x0003) MISSED OFFSET
	float                                              AttachEnterDistanceScale;                                 // 0x18B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OpenParachuteHeightInAttachedVehicle;                     // 0x18BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CanOpenParachuteHeightInAttachedVehicle;                  // 0x18C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceOpenParachuteHeightInAttachedVehicle;                // 0x18C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloseParachuteHeightInAttachedVehicle;                    // 0x18C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkipOpenParachuteHeightInAttachedVehicle;                 // 0x18CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bObserverNotRepMovement;                                  // 0x18D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDelayDestroyInWater;                                     // 0x18D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x18D2(0x0002) MISSED OFFSET
	float                                              DelayDestroyInWaterInterval;                              // 0x18D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDeathRagDoll;                                      // 0x18D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x18D9(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             ComponentRagdollIgnoreCollisionChannel;                   // 0x18E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<ECollisionChannel>>             MeshRagDollIgnoreCollisionChannel;                        // 0x18F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnVehicleAttachOther;                                     // 0x1900(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAnimMontage*                                MountMontage;                                             // 0x1910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCacheNeedPlayMountMontage;                               // 0x1918(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1919(0x0003) MISSED OFFSET
	struct FRotator                                    AttachOffsetRotation;                                     // 0x191C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     AttachOffsetLocation;                                     // 0x1928(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x1934(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               WindAudio2D;                                              // 0x1938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               WindAudioStop2D;                                          // 0x1940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AirMovingAudio;                                           // 0x1948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RTPCSpeedLerpSpeed;                                       // 0x1950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x1954(0x0004) MISSED OFFSET
	struct FString                                     ReindeerRPTCName;                                         // 0x1958(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   ReindeerRTPCRange;                                        // 0x1968(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     LinkedReindeerRPTCName;                                   // 0x1970(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   LinkedReindeerRTPCRange;                                  // 0x1980(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FSTExtraVehicleSfxLoop                      AirMovingSfxLoop;                                         // 0x1988(0x0078)
	struct FSTExtraVehicleSfxLoop                      Wind2DSfxLoop;                                            // 0x1A00(0x0078)
	unsigned char                                      UnknownData08[0x4];                                       // 0x1A78(0x0004) MISSED OFFSET
	int                                                AudioID_LinkedReindeer;                                   // 0x1A7C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentRTPCSpeed;                                         // 0x1A80(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0xC];                                       // 0x1A84(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerBioVehicle");
		return pStaticClass;
	}


	void TryAttachToOtherVehicle();
	void OnClientExitFromAttachedVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void MulticastDoJump();
	void K2_OnClientAttachWithReindeerCart(class ASTExtraVehicleBase* OtherVehicle);
	void HandleVehicleHealthDestroy();
	bool GetVehicleAttachState();
	class UVehicleAttachmentComponent* GetVehicleAttachComp();
	class UBioFlyMovementComponentBase* GetBioFlyMovementComponent();
	class ASTExtraVehicleBase* GetAttachedVehicle();
	void DoJump();
	void DoAttachLogic(class ASTExtraVehicleBase* OtherVehicle);
	bool ConsumeNeedPlayMountMontage();
	void BroadCastPlayMountMontage(class ASTExtraPlayerCharacter* Character);
	void ActiveRagDoll();
};


// Class Addons.ReindeerCartVehicle
// 0x0090 (0x1890 - 0x1800)
class AReindeerCartVehicle : public ASTExtraWheeledVehicle
{
public:
	float                                              AttachEnterDistanceScale;                                 // 0x1800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenAttachTransformProtection;                           // 0x1804(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1805(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnVehicleAttachOther;                                     // 0x1808(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x28];                                      // 0x1818(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.ReindeerCartVehicle.FloatingParticle
	unsigned char                                      UnknownData02[0x28];                                      // 0x1840(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.ReindeerCartVehicle.MovingParticle
	struct FName                                       MovingParticleAttachName;                                 // 0x1868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActiveMovingParticleSpeedThreshold;                       // 0x1870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedLastFrame;                                           // 0x1874(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystemComponent*                    CachedFloatingParticleComponent;                          // 0x1878(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    CachedMovingParticleComponent;                            // 0x1880(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x1888(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerCartVehicle");
		return pStaticClass;
	}


	void UpdateParticleState();
	void TryAttachToOtherVehicle();
	void SetMovingParticleActived(bool Inactive);
	void SetFloatingParticleActived(bool Inactive);
	void OnParticleEffectLoadingFinished();
	void OnClientExitFromAttachedVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void LoadParticleEffect();
	void K2_OnClientAttachToReindeer(class ASTExtraVehicleBase* OtherVehicle);
	void HandleVehicleHealthDestroy();
	void HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	bool GetVehicleAttachState();
	class UVehicleAttachmentComponent* GetVehicleAttachComp();
	float GetForwardSpeed();
	class ASTExtraVehicleBase* GetAttachedVehicle();
	void DoAttachLogic(class ASTExtraVehicleBase* OtherVehicle);
	void DestroyAllCachedParticleEffect();
	void CloseWheelsCollision();
};


// Class Addons.ReindeerRiderAnimInstance
// 0x0050 (0x0B70 - 0x0B20)
class UReindeerRiderAnimInstance : public ULandingCreatureDriverAnimInstance
{
public:
	struct FName                                       RootAdaptionBoneName;                                     // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultSpinePitchOffset;                                  // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultSpinePitchOffsetNearDeath;                         // 0x0B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpinePitchOffsetLerpSpeed;                                // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpinePitchOffset;                                      // 0x0B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAssetsCached;                                            // 0x0B38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x0B39(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0B3A(0x0002) MISSED OFFSET
	float                                              RisingInput;                                              // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MovementAnimPlayRate;                                     // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SpinePitchOffset;                                         // 0x0B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlendSpace*                                 AirMovementAnim;                                          // 0x0B48(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               LandingAnim;                                              // 0x0B50(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FlyingIdleAnim;                                           // 0x0B58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FlyingUpDownAnim;                                         // 0x0B60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0B68(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerRiderAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.ReindeerPassengerAnimInstance
// 0x00C0 (0x0C30 - 0x0B70)
class UReindeerPassengerAnimInstance : public UReindeerRiderAnimInstance
{
public:
	struct FVector                                     DriverSpineLocationOffsetToPassengerHand;                 // 0x0B70(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasDriverSeatOccupier;                                   // 0x0B7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bShouldUseHandIK;                                         // 0x0B7D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0B7E(0x0002) MISSED OFFSET
	float                                              RightHandIkAlpha;                                         // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     DriverSpineLeftHandLocation;                              // 0x0B84(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FVector                                     DriverSpineRightHandLocation;                             // 0x0B90(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	bool                                               bShouldTransIdleToAim;                                    // 0x0B9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bShouldTransAimToIdle;                                    // 0x0B9D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EPassengerWeaponType>                  PassengerWeaponType;                                      // 0x0B9E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bScoping;                                                 // 0x0B9F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    OwnerAimRotation;                                         // 0x0BA0(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FRotator                                    AimAnimBSParam;                                           // 0x0BAC(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	bool                                               bIsHoldingGrenade;                                        // 0x0BB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0BB9(0x0003) MISSED OFFSET
	float                                              HoldGrenadeAimPerSpineAlpha;                              // 0x0BBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlendSpace*                                 HoldGrenadeAnim;                                          // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UAimOffsetBlendSpace*                        HoldGrenadeAimOffsetBS;                                   // 0x0BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseDriverOffAnim;                  // 0x0BD0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithGunDriverOffAnim;           // 0x0BD8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithMeleeDriverOffAnim;         // 0x0BE0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithThrowObjDriverOffAnim;      // 0x0BE8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 PassengerDriverOffAimAnim;                                // 0x0BF0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseDriverOnAnim;                   // 0x0BF8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithGunDriverOnAnim;            // 0x0C00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithMeleeDriverOnAnim;          // 0x0C08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithThrowObjDriverOnAnim;       // 0x0C10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 PassengerDriverOnAimAnim;                                 // 0x0C18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DyingIdle;                                                // 0x0C20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0C28(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerPassengerAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.ReindeerSeatComponent
// 0x0060 (0x0448 - 0x03E8)
class UReindeerSeatComponent : public UVehicleSeatComponent
{
public:
	TMap<int, int>                                     SeatsConfigIndexChangeMap;                                // 0x03E8(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                RealSeatsNum;                                             // 0x0438(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x043C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerSeatComponent");
		return pStaticClass;
	}


	int GetTotalSeatsNum();
};


// Class Addons.ReindeerTerrainAdaptingComponent
// 0x00C8 (0x02A0 - 0x01D8)
class UReindeerTerrainAdaptingComponent : public ULuaActorComponent
{
public:
	struct FName                                       AdaptedBoneName;                                          // 0x01D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LHandBoneName;                                            // 0x01E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RHandBoneName;                                            // 0x01E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LFootBoneName;                                            // 0x01F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RFootBoneName;                                            // 0x01F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             TerrainAdaption_ObjectTypesToQuery;                       // 0x0200(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              TraceUpOffset;                                            // 0x0210(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceDownOffset;                                          // 0x0214(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceSphereRadius;                                        // 0x0218(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlopeAdaptionMaxPitch;                                    // 0x021C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlopeAdaptionMaxZ;                                        // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlopeAdaptLerpSpeed;                                      // 0x0224(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UReindeerAnimInstance*                       ReindeerAnimInstance;                                     // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0230(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerTerrainAdaptingComponent");
		return pStaticClass;
	}

};


// Class Addons.SplineMoveObj
// 0x01F8 (0x0290 - 0x0098)
class USplineMoveObj : public USpecialMoveBaseObj
{
public:
	int                                                SplineMoveAkEventId;                                      // 0x0098(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class USplineComponent*                            MoveAlongSpline;                                          // 0x00A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CacheAllowEnterSplineTime;                                // 0x00A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CacheInput;                                               // 0x00AC(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     OriginalInput;                                            // 0x00B8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CacheControlRot;                                          // 0x00C4(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     CacheCurSplineDir;                                        // 0x00D0(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CacheTargetRot;                                           // 0x00DC(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CacheBeginRot;                                            // 0x00E8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CacheOldRot;                                              // 0x00F4(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     CacheSplineBeginLoc;                                      // 0x0100(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     CacheSplineEndLoc;                                        // 0x010C(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              DownhillCosValue;                                         // 0x0118(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CacheTurningTime;                                         // 0x011C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFocusPawnRotation;                                       // 0x0120(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsingCameraLag;                                          // 0x0121(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0122(0x0002) MISSED OFFSET
	float                                              OriginalCameraLagSpeed;                                   // 0x0124(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OriginalCameraLagMaxDistance;                             // 0x0128(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               SplineMoveAkEvent;                                        // 0x0130(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0138(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.SplineMoveObj.SplineMoveAkEvent_SoftPtr
	struct FVector2D                                   MoveSoundSpeedRange;                                      // 0x0160(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MoveSoundSpeedInputScale;                                 // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	struct FName                                       Sound_SpeedName;                                          // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Sound_OnAirName;                                          // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnterSplineDistance;                                      // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceLeaveSplineDistance;                                 // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnterSplineIgnoreCollision;                               // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseClientEnterLocation;                                  // 0x0189(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x018A(0x0002) MISSED OFFSET
	float                                              CameraLagEndThreshold;                                    // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraLagSpeed;                                           // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraLagMaxDistance;                                     // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopSprintOnTouch;                                       // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0199(0x0003) MISSED OFFSET
	float                                              ControlRotateSpeed;                                       // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineMoveHoldWeaponSpeed;                                // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HoldWeaponControlYawLimit;                                // 0x01A4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TurnLeftDeltaAngle;                                       // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnRightDeltaAngle;                                      // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoldWeaponYawThreshold;                                   // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineMoveJumpGravityScale;                               // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityExtraAccDown;                                      // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityExtraAccUp;                                        // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DownhillExtraSpeed;                                       // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DownhillCosThreshold;                                     // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             CollisionChannelsForCheck;                                // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              FindJumpEndOffset;                                        // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningSpeedThresholdSq;                                  // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningExponent;                                          // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningTime;                                              // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningEndTolerance;                                      // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineMoveMaxSpeed;                                       // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineSprintMoveMaxSpeed;                                 // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineFriction;                                           // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBrakingDeceleration;                                   // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnterSplineSpeed;                                         // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExtraJumpVelocity;                                        // 0x020C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SplineMoveAirControl;                                     // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceBeginOffset;                                         // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceEndOffset;                                           // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	struct FName                                       SplineActorTag;                                           // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SweepCapsuleHalfHeight;                                   // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SweepCapsuleRadiusHeight;                                 // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FalloffSplineDistanceThreshold;                           // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoJumpOnSplineEnd;                                       // 0x023C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x023D(0x0003) MISSED OFFSET
	float                                              InteractEnterSplineHeight;                                // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AllowEnterSplineDeltaTime;                                // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugLifeTime;                                            // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugSphereRadius;                                        // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClientSendEnterRPC;                                      // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	struct FVector                                     ProjectionLocationOnSpline;                               // 0x0258(0x000C) (BlueprintVisible, IsPlainOldData)
	TEnumAsByte<ECustomMovmentMode>                    SplineMoveState;                                          // 0x0264(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0265(0x0003) MISSED OFFSET
	float                                              AimRotationInterpSpeed;                                   // 0x0268(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AimRotationReverseInterpSpeed;                            // 0x026C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TurnMaxAngle;                                             // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1C];                                      // 0x0274(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.SplineMoveObj");
		return pStaticClass;
	}


	void UpdateTuring(float DeltaTime);
	void UpdateSplineMoveTurning(float DeltaTime);
	void UpdateMoveSound();
	void UpdateFocusRotation(float DeltaTime);
	void UpdateCameraLag(float DeltaTime);
	bool TryEnterSpline();
	void StopMoveSound();
	void StartSplineMoveCameraLag();
	void SplineMoveTurningEnd();
	void SplineMoveTurningBegin(const struct FVector& InTargetDir, bool bIsLeft);
	void SetSplineMoveState(TEnumAsByte<ECustomMovmentMode> InMoveState);
	void SetSpline(class USplineComponent* InSpline);
	void ServerPlayerTryEnterSpline(class USplineComponent* InSpline, const struct FVector& EnterLocation, const struct FRotator& EnterRot);
	void PlayMoveSound();
	void PlayerLeaveSpline(class USplineComponent* InSpline, TEnumAsByte<EMovementMode> InMovementMode);
	void PlayerEnterSpline(class USplineComponent* InSpline, const struct FVector& EnterLoc, const struct FRotator& EnterRot);
	void OwnerJump();
	bool OwnerHasWeapon();
	void OnSplineMoveHit(const struct FHitResult& Hit);
	void OnSpecialMoveCharacterJump();
	void OnSimulateCharStateChanged(uint64_t InCurrentStates, uint64_t InPrevStates);
	void OnPlayerRespawn(class AUAEPlayerController* PC);
	void OnPawnStateInterrupted(EPawnState State, EPawnState InterruptedBy);
	void OnPawnLeaveState(EPawnState LeaveState);
	void OnPawnEnterState(EPawnState EnterState);
	void MoveAlongSplineError();
	void InteractEnterSpline(class USplineComponent* InSpline);
	bool InSplineMoveState();
	void HandleBeginTouchScreen(const struct FVector2D& Loc);
	TEnumAsByte<ECustomMovmentMode> GetSplineMoveState();
	struct FVector GetProjectionLocationOnSpline(class USplineComponent* InSpline, const struct FVector& InLocation);
	struct FRotator GetPlayerEnterSplineRotation(class USplineComponent* InSpline);
	struct FVector GetPlayerEnterSplineLocation(class USplineComponent* InSpline);
	float GetDistanceAlongSplineAtWorldLocation(class USplineComponent* InSpline, const struct FVector& InLoc);
	float GetCurrentTime();
	class ASTExtraBaseCharacter* GetCharacterOwner();
	void ForceLeaveSpline(class USplineComponent* InSpline);
	void EndSplineMoveCameraLag();
	void EnableFocusRotation(bool InEnable);
	bool CustomModeIsSplineMove(unsigned char InCustomMode);
	void ClientPlayerLeaveSpline(class USplineComponent* InSpline);
	void AsyncLoadSoundResourceFinish();
	void AsyncLoadSoundResource();
	bool AllowTryEnterSpline();
};


// Class Addons.STSnowManAnimInstance
// 0x0060 (0x0440 - 0x03E0)
class USTSnowManAnimInstance : public UAnimInstance
{
public:
	bool                                               C_bHitPose;                                               // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         C_LastMovementMode;                                       // 0x03E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               C_bFallingToLanding;                                      // 0x03E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03E3(0x0005) MISSED OFFSET
	class ASTExtraBaseCharacter*                       C_OwnerCharacter;                                         // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Idel_Pos;                                               // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_JumpStart_Pos;                                          // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_JumpLoop_Pos;                                           // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_JumpLanding_Pos;                                        // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_Hit_Pos;                                                // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_Move_Pos;                                               // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMoveStateChange;                                        // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.STSnowManAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.TRexVehicleDamageComponent
// 0x00B0 (0x0610 - 0x0560)
class UTRexVehicleDamageComponent : public UBioVehicleDamageComponent
{
public:
	struct FName                                       BlockComponentTag;                                        // 0x0560(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ImpulseOnCharacter;                                       // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0569(0x0007) MISSED OFFSET
	class UCurveFloat*                                 VehicleHitCharcterImpulseCurve;                           // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultImpuleScale;                                       // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseCharacterZScale;                                   // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BioDamageVehicleCooldownTime;                             // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultHitVehicleDamage;                                  // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCollisionLocation;                                    // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	class ATyrannosaurusRexVehicle*                    OwnerVehicle;                                             // 0x0590(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<class AActor*, float>                         BioDamageVehicleTimes;                                    // 0x0598(0x0050) (ZeroConstructor)
	TArray<class ASTExtraVehicleBase*>                 LastOverlapedVehicles;                                    // 0x05E8(0x0010) (ZeroConstructor)
	TArray<class UActorComponent*>                     DamageCollisions;                                         // 0x05F8(0x0010) (ExportObject, ZeroConstructor)
	class UPrimitiveComponent*                         BlockCollision;                                           // 0x0608(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.TRexVehicleDamageComponent");
		return pStaticClass;
	}


	void HandleFootOverlapVehicle(class ASTExtraVehicleBase* OverlappedVehicle, class UShapeComponent* DamageCollision, struct FOverlapResult* OverlapResult);
	void HandleFootOverlapCharacter(class ASTExtraBaseCharacter* OverlappedCharacter, class UShapeComponent* DamageCollision, struct FOverlapResult* OverlapResult);
};


// Class Addons.TyrannosaurusRexAnimInstance
// 0x0040 (0x0600 - 0x05C0)
class UTyrannosaurusRexAnimInstance : public ULandingCreatureAnimInstance
{
public:
	float                                              WalkSpeed;                                                // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintSpeed;                                              // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayRate;                                              // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlayRate;                                              // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05D4(0x0004) MISSED OFFSET
	class ATyrannosaurusRexVehicle*                    TRex;                                                     // 0x05D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStartMoving;                                             // 0x05E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05E1(0x0003) MISSED OFFSET
	float                                              WalkPlayRate;                                             // 0x05E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RunPlayRate;                                              // 0x05E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintPlayRate;                                           // 0x05EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x05F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.TyrannosaurusRexAnimInstance");
		return pStaticClass;
	}


	void ResetStartMoving();
};


// Class Addons.TyrannosaurusRexVehicle
// 0x01F0 (0x1A40 - 0x1850)
class ATyrannosaurusRexVehicle : public ABioVehicleBase
{
public:
	float                                              NearbyRadius;                                             // 0x1850(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1854(0x0004) MISSED OFFSET
	struct FName                                       RoarDetectSocket;                                         // 0x1858(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarSpeedThreshold;                                       // 0x1860(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarCD;                                                   // 0x1864(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarStartAttackTime;                                      // 0x1868(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarEndAttackTime;                                        // 0x186C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarAttackDeltaTime;                                      // 0x1870(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarDamage;                                               // 0x1874(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RoarMontage;                                              // 0x1878(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RoarCameraShake;                                          // 0x1880(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnTRexApplyRoarAttack;                                    // 0x1888(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerTRexStartRoar;                                    // 0x1898(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerTRexFinishRoar;                                   // 0x18A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAkAudioEvent*                               TRexRoarAudioEvent;                                       // 0x18B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TRexBodyMatSlotName;                                      // 0x18C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ShelfMatSlotName;                                         // 0x18C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BodyNormalMaterial;                                       // 0x18D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           ShelfNormalMaterial;                                      // 0x18D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BodyInjuredMaterial;                                      // 0x18E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           ShelfInjuredMaterial;                                     // 0x18E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BodySeverelyInjuredMaterial;                              // 0x18F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           ShelfSeverelyInjuredMaterial;                             // 0x18F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnServerTRexBreakOut;                                     // 0x1900(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              TRexBreakOutCD;                                           // 0x1910(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TRexBreakOutInterval;                                     // 0x1914(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          LightInjuredMat;                                          // 0x1918(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          HeavyInjuredMat;                                          // 0x1920(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ModifyPhysCD;                                             // 0x1928(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ETyranState                                        STCurWalkState;                                           // 0x192C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x192D(0x0003) MISSED OFFSET
	struct FName                                       BrokenCapsuleSocket;                                      // 0x1930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrokenCapsuleRadius;                                      // 0x1938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrokenCapsuleHeight;                                      // 0x193C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrokenDelayTime;                                          // 0x1940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DragOffsetZ;                                              // 0x1944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             DragOffsets;                                              // 0x1948(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DeadAfterTime;                                            // 0x1958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x195C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    BioVehicleDestroyDelegate;                                // 0x1960(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               DeadDirection;                                            // 0x1970(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2B];                                      // 0x1971(0x002B) MISSED OFFSET
	float                                              RoarCurrentCD;                                            // 0x199C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsRoaring;                                               // 0x19A0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x19A1(0x000F) MISSED OFFSET
	TMap<class AActor*, float>                         BioModifyVehicleTimes;                                    // 0x19B0(0x0050) (ZeroConstructor)
	class URaptorMovementComponent*                    TRexMovementComponent;                                    // 0x1A00(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HurtInterval;                                             // 0x1A08(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1A0C(0x0004) MISSED OFFSET
	float                                              HurtDamageAmount;                                         // 0x1A10(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC];                                       // 0x1A14(0x000C) MISSED OFFSET
	class UAnimMontage*                                HurtMontage;                                              // 0x1A20(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftFootBoneName;                                         // 0x1A28(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightFootBoneName;                                        // 0x1A30(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x1A38(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.TyrannosaurusRexVehicle");
		return pStaticClass;
	}


	void ShowRoarOverSpeedTips();
	void ShakeNearbyPlayerCamera(class UClass* CameraShakeClass, float Radius);
	void ServerStopRoar();
	void ServerRoar();
	void ServerBreakOut(bool bEnable);
	void PrepareApplyRoarAttack();
	void OnTRexHPCHanged(float NewHP, float HPMax);
	void OnRoarFinished(TEnumAsByte<EBioVehicleSkillStopReason> Reason);
	void OnRep_bIsRoaring();
	class URaptorMovementComponent* GetVehicleMovement();
	bool GetVehicleBreakOutState();
	bool GetNearlyPlayers(float Radius, TArray<class ASTExtraBaseCharacter*>* Results);
	void EndRoarAttack();
	void ClientHandleVehicleDead(bool VehicleDeadDirection);
	bool CheckCanApplyDamageTo(class ASTExtraBaseCharacter* Target);
	void CallClientDrawDebugSphere(const struct FVector& Location, float DeltaTime);
	void BroadCastStopMontage();
	void BroadCastPlayRoarMontage();
	void BroadCastClientDrawSphere(const struct FVector& Center, float Radius);
	void BreakOut(bool bEnable);
	void ApplyRoarAttackToSpecifiedCharacter(class ASTExtraBaseCharacter* TargetCharacter);
	void ApplyRoarAttack();
};


// Class Addons.VehicleAttachmentComponent
// 0x00B0 (0x0288 - 0x01D8)
class UVehicleAttachmentComponent : public UVehicleComponent
{
public:
	struct FName                                       FindingSocketName;                                        // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FindingSphereRadius;                                      // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OtherValidBoxExtent;                                      // 0x01E4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     OwnerValidBoxExtent;                                      // 0x01F0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     OwnerValidBoxOffset;                                      // 0x01FC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               AttachFollowParent;                                       // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0209(0x0003) MISSED OFFSET
	float                                              AttachValidSpeed;                                         // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CheckCollisionOffset;                                     // 0x0210(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                AttachFailTips;                                           // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnVehicleAttachWithOtherVehicle;                          // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClientAttachAvaliableStateChanged;                      // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClientAttachCheckFailed;                                // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0250(0x0008) MISSED OFFSET
	class ASTExtraVehicleBase*                         AttachedVehicle;                                          // 0x0258(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	TArray<class ASTExtraVehicleBase*>                 PendingAttachVehicles;                                    // 0x0260(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0270(0x0008) MISSED OFFSET
	class UChildActorComponent*                        AttachComponent;                                          // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0280(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.VehicleAttachmentComponent");
		return pStaticClass;
	}


	void TryToAttachOtherVehicle();
	void SetAttachState(class ASTExtraVehicleBase* OtherVehicle);
	void ServerDoAttachVehicle(class ASTExtraVehicleBase* OtherVehicle);
	void OnRep_AttachedVehicle(class ASTExtraVehicleBase* PrevVehicle);
	bool GetAttachState();
	class ASTExtraVehicleBase* GetAttachedVehicle();
	bool DoAttachVehicle(class ASTExtraVehicleBase* OtherVehicle);
	bool CheckSurroundingVehicle();
	bool CanInteractedByOther();
	bool CanAttachVehicle();
	void CallServerToAttach();
	void BroadcastClientVehicleAttachment(class ASTExtraVehicleBase* OtherVehicle);
};


// Class Addons.VehicleRubberDuck
// 0x0060 (0x1550 - 0x14F0)
class AVehicleRubberDuck : public ASTExtraVehicleBase
{
public:
	class UFloatingVehicleVehicleMovementComponent2*   VehicleMovement;                                          // 0x14F0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bCacheSfxStatusWhenLinked;                                // 0x14F8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLocalPlayerOnCurLink;                                    // 0x14F9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x22];                                      // 0x14FA(0x0022) MISSED OFFSET
	unsigned char                                      bUseMultiPositionWhenLinked : 1;                          // 0x151C(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                                       // 0x151D(0x0003) MISSED OFFSET
	float                                              MultiPosSoundTickInterval;                                // 0x1520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1524(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               Sfx_EngineLoop_UnLinked;                                  // 0x1528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_EngineLoop_Linked_Autonomous;                         // 0x1530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_EngineLoop_Linked_Simulated;                          // 0x1538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicsBalanceComponent*                    PhysicsBalance;                                           // 0x1540(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x1548(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.VehicleRubberDuck");
		return pStaticClass;
	}


	class UFloatingVehicleVehicleMovementComponent2* GetVehicleMovement();
	float GetForwardSpeed();
};


}

