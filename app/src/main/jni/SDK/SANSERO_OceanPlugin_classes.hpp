#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:13 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class OceanPlugin.AdvancedBuoyancyComponent
// 0x0110 (0x0440 - 0x0330)
class UAdvancedBuoyancyComponent : public USceneComponent
{
public:
	class AOceanManager*                               TheOcean;                                                 // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaterDensity;                                             // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gravity;                                                  // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshDensity;                                              // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0344(0x0014) MISSED OFFSET
	class UStaticMeshComponent*                        BuoyantMesh;                                              // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  MeshTransform;                                            // 0x0360(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FalseVolume;                                              // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuoyancyReductionCoefficient;                             // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuoyancyPitchReductionCoefficient;                        // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DensityCorrection;                                        // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DensityCorrectionModifier;                                // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SubmergedVolume;                                          // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactCoefficient;                                        // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DragCoefficient;                                          // 0x03AC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SuctionCoefficient;                                       // 0x03B8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ViscousDragCoefficient;                                   // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSlamAcceleration;                                      // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	TArray<struct FVector>                             AdvancedGridHeight;                                       // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FForceTriangle>                      SubmergedTris;                                            // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      TriSizes;                                                 // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      TriSubmergedArea;                                         // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0410(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.AdvancedBuoyancyComponent");
		return pStaticClass;
	}


	float TriangleArea(const struct FVector& A, const struct FVector& B, const struct FVector& C);
	TArray<struct FForceTriangle> SplitTriangle(const struct FBuoyancyVertex& H, const struct FBuoyancyVertex& M, const struct FBuoyancyVertex& L, const struct FVector& InArrow);
	void SetMeshDensity(float NewDensity, float NewWaterDensity);
	float GetOceanDepthFromGrid(const struct FVector& Position, bool bJustGetHeightAtLocation);
	void GetOcean();
	void DrawDebugStuff(const struct FForceTriangle& TriForce, const struct FColor& DebugColor);
	void ApplySlamForce(const struct FVector& SlamForce, const struct FVector& TriCenter);
	void ApplyForce(const struct FForceTriangle& TriForce);
};


// Class OceanPlugin.BuoyancyComponent
// 0x0090 (0x01E8 - 0x0158)
class UBuoyancyComponent : public UMovementComponent
{
public:
	class AOceanManager*                               OceanManager;                                             // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshDensity;                                              // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidDensity;                                             // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidLinearDamping;                                       // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidAngularDamping;                                      // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityDamper;                                           // 0x0170(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               ClampMaxVelocity;                                         // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x017D(0x0003) MISSED OFFSET
	float                                              MaxUnderwaterVelocity;                                    // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TestPointRadius;                                          // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             TestPoints;                                               // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      PointDensityOverride;                                     // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DrawDebugPoints;                                          // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableStayUprightConstraint;                              // 0x01A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x01AA(0x0002) MISSED OFFSET
	float                                              StayUprightStiffness;                                     // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StayUprightDamping;                                       // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StayUprightDesiredRotation;                               // 0x01B4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               EnableWaveForces;                                         // 0x01C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01C1(0x0003) MISSED OFFSET
	float                                              WaveForceMultiplier;                                      // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x01C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.BuoyancyComponent");
		return pStaticClass;
	}

};


// Class OceanPlugin.BuoyancyForceComponent
// 0x02C0 (0x05F0 - 0x0330)
class UBuoyancyForceComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnContactWater;                                           // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnterWater;                                             // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bUseBuoyancyEvent;                                        // 0x0350(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class AOceanManager*                               OceanManager;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshDensity;                                              // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidDensity;                                             // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidLinearDamping;                                       // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidAngularDamping;                                      // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityDamper;                                           // 0x0370(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               ClampMaxVelocity;                                         // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	float                                              MaxUnderwaterVelocity;                                    // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TestPointRadius;                                          // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             TestPoints;                                               // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ApplyForceToBones;                                        // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SnapToSurfaceIfNoPhysics;                                 // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SnapToSeaLevel;                                           // 0x039A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TwoGerstnerIterations;                                    // 0x039B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<float>                                      PointDensityOverride;                                     // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FStructBoneOverride>                 BoneOverride;                                             // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bEnableZOptimize;                                         // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugPoints;                                          // 0x03C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugSeaLevel;                                        // 0x03C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableStayUprightConstraint;                              // 0x03C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StayUprightStiffness;                                     // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StayUprightDamping;                                       // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StayUprightDesiredRotation;                               // 0x03CC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               EnableWaveForces;                                         // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	float                                              WaveForceMultiplier;                                      // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             UpdatedComponent;                                         // 0x03E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCustomWaveForce;                                    // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x03EA(0x0002) MISSED OFFSET
	struct FVector                                     CustomWaveForceTestPointOffset;                           // 0x03EC(0x000C) (Edit, IsPlainOldData)
	TArray<class UWaterBoxComponent*>                  CandidateWaterBoxes;                                      // 0x03F8(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData05[0x1B8];                                     // 0x0408(0x01B8) MISSED OFFSET
	class UPhysicsConstraintComponent*                 UprightConstraintComp;                                    // 0x05C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x28];                                      // 0x05C8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.BuoyancyForceComponent");
		return pStaticClass;
	}


	void SetUpdatedComponent(class USceneComponent* NewUpdatedComponent);
	void OnEnterWaterDelegate__DelegateSignature(bool IsUnderWater);
	void OnContactWaterDelegate__DelegateSignature(bool IsContactingWater);
	void NativeSetEnableCustomWaveForce(bool bEnable);
	bool IsFloatingOnWater();
	bool IsEntirelyUnderWater();
	bool IsContactedWater();
	void EndableUprightConstraint(bool bEnable);
	bool CheckPointInWater(const struct FVector& Point, bool isWorldPosition);
};


// Class OceanPlugin.BuoyantMeshComponent
// 0x0060 (0x09D0 - 0x0970)
class UBuoyantMeshComponent : public UStaticMeshComponent
{
public:
	bool                                               bVerticalForcesOnly;                                      // 0x0970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseWaterPatch;                                           // 0x0971(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseStaticForces;                                         // 0x0972(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDynamicForces;                                        // 0x0973(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0974(0x0004) MISSED OFFSET
	class AOceanManager*                               OceanManager;                                             // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawForceArrows;                                         // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawWaterline;                                           // 0x0981(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawVertices;                                            // 0x0982(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawTriangles;                                           // 0x0983(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawSubtriangles;                                        // 0x0984(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0985(0x0003) MISSED OFFSET
	float                                              ForceArrowSize;                                           // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideMeshDensity;                                     // 0x098C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x098D(0x0003) MISSED OFFSET
	float                                              MeshDensity;                                              // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideMass;                                            // 0x0994(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0995(0x0003) MISSED OFFSET
	float                                              Mass;                                                     // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaterDensity;                                             // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x28];                                      // 0x09A0(0x0028) MISSED OFFSET
	class UWaterHeightmapComponent*                    WaterHeightmap;                                           // 0x09C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.BuoyantMeshComponent");
		return pStaticClass;
	}

};


// Class OceanPlugin.FishManager
// 0x0058 (0x0450 - 0x03F8)
class AFishManager : public AActor
{
public:
	TArray<class UClass*>                              flockTypes;                                               // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      numInFlock;                                               // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MinZ;                                                     // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxZ;                                                     // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              underwaterBoxLength;                                      // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               attachToPlayer;                                           // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugMode;                                                // 0x0425(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0426(0x0002) MISSED OFFSET
	class UClass*                                      PlayerType;                                               // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Player;                                                   // 0x0430(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0438(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.FishManager");
		return pStaticClass;
	}

};


// Class OceanPlugin.FlockFish
// 0x0180 (0x05D8 - 0x0458)
class AFlockFish : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0458(0x0010) MISSED OFFSET
	class USphereComponent*                            FishInteractionSphere;                                    // 0x0468(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               IsLeader;                                                 // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	TArray<class UClass*>                              enemyTypes;                                               // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              preyTypes;                                                // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      neighborType;                                             // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              followDist;                                               // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnSpeed;                                                // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              turnFrequency;                                            // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              hungerResetTime;                                          // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              distBehindSpeedUpRange;                                   // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SeperationDistanceMultiplier;                             // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FleeDistanceMultiplier;                                   // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FleeAccelerationMultiplier;                               // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChaseAccelerationMultiplier;                              // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SeekDecelerationMultiplier;                               // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidForceMultiplier;                                     // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceForce;                                           // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PlayerType;                                               // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     underwaterMin;                                            // 0x04E0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     underwaterMax;                                            // 0x04EC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CustomZSeekMin;                                           // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CustomZSeekMax;                                           // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NumNeighborsToEvaluate;                                   // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateEveryTick;                                          // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0508(0x0010) MISSED OFFSET
	bool                                               DebugMode;                                                // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0519(0x000F) MISSED OFFSET
	class AActor*                                      Leader;                                                   // 0x0528(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              neighbors;                                                // 0x0530(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              nearbyEnemies;                                            // 0x0540(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              nearbyPrey;                                               // 0x0550(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              nearbyFriends;                                            // 0x0560(0x0010) (ZeroConstructor)
	class AActor*                                      fleeTarget;                                               // 0x0570(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      preyTarget;                                               // 0x0578(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0580(0x0050) MISSED OFFSET
	class AActor*                                      FishManager;                                              // 0x05D0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.FlockFish");
		return pStaticClass;
	}


	void OnEndOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class OceanPlugin.InfiniteSystemComponent
// 0x0020 (0x0350 - 0x0330)
class UInfiniteSystemComponent : public USceneComponent
{
public:
	float                                              MaxLookAtDistance;                                        // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ScaleByDistance;                                          // 0x0334(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	float                                              ScaleDistanceFactor;                                      // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleStartDistance;                                       // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleMin;                                                 // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleMax;                                                 // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0348(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.InfiniteSystemComponent");
		return pStaticClass;
	}

};


// Class OceanPlugin.OceanManager
// 0x00D0 (0x04C8 - 0x03F8)
class AOceanManager : public AActor
{
public:
	struct FVector                                     GlobalWaveDirection;                                      // 0x03F8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              GlobalWaveSpeed;                                          // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlobalWaveAmplitude;                                      // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceCheckAbove;                                       // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceCheckBelow;                                       // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	TArray<struct FWaveParameter>                      WaveClusters;                                             // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FWaveSetParameters>                  WaveSetOffsetsOverride;                                   // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              NetWorkTimeOffset;                                        // 0x0438(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableLandscapeModulation;                               // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	float                                              ModulationStartHeight;                                    // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ModulationMaxHeight;                                      // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ModulationPower;                                          // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	class ALandscape*                                  Landscape;                                                // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0460(0x0028) MISSED OFFSET
	bool                                               bShouldCorrectTime;                                       // 0x0488(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableWaterBoxModulation;                                // 0x0489(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x048A(0x0006) MISSED OFFSET
	TArray<struct FBox>                                WaterBoxes;                                               // 0x0490(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x4];                                       // 0x04A0(0x0004) MISSED OFFSET
	bool                                               bEnableWaterTransformModulation;                          // 0x04A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	TArray<struct FTransform>                          WaterTransforms;                                          // 0x04A8(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             WaterBoxExtends;                                          // 0x04B8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.OceanManager");
		return pStaticClass;
	}


	void LoadLandscapeHeightmap(class UTexture2D* Tex2D);
	struct FLinearColor GetHeightmapPixel(float U, float V);
};


// Class OceanPlugin.SegmentOceanManager
// 0x00E8 (0x05B0 - 0x04C8)
class ASegmentOceanManager : public AOceanManager
{
public:
	TArray<class UWaterBoxComponent*>                  CandidateWaterBoxes;                                      // 0x04C8(0x0010) (ExportObject, ZeroConstructor)
	TMap<class UWaterBoxComponent*, struct FSegmentWaterBox> SegmentdWaterBoxes;                                       // 0x04D8(0x0050) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData00[0x7C];                                      // 0x0528(0x007C) MISSED OFFSET
	float                                              FrequencyScale;                                           // 0x05A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.SegmentOceanManager");
		return pStaticClass;
	}


	void RemoveBoxComponent(class UWaterBoxComponent* InBoxComponent);
	void AddBoxComponent(class UWaterBoxComponent* InBoxComponent, class USplineComponent* InDirectionSpline);
};


// Class OceanPlugin.TimeManager
// 0x00C0 (0x04B8 - 0x03F8)
class ATimeManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03F8(0x0018) MISSED OFFSET
	float                                              latitude;                                                 // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              longitude;                                                // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OffsetUTC;                                                // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OffsetDST;                                                // 0x041C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowDaylightSavings;                                    // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDaylightSavingsActive;                                   // 0x0421(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0422(0x0002) MISSED OFFSET
	float                                              TimeScaleMultiplier;                                      // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SolarTime;                                                // 0x0428(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocalClockTime;                                           // 0x042C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeCorrection;                                           // 0x0430(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LSTM;                                                     // 0x0434(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DayOfYear;                                                // 0x0438(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EoT;                                                      // 0x043C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SolarAltAngle;                                            // 0x0440(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SolarDeclination;                                         // 0x0444(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SolarAzimuth;                                             // 0x0448(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SolarHRA;                                                 // 0x044C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SiderealTime;                                             // 0x0450(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarAltAngle;                                            // 0x0454(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarHRA;                                                 // 0x0458(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarDeclination;                                         // 0x045C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarAzimuth;                                             // 0x0460(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarRightAsc;                                            // 0x0464(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarElapsedDays;                                         // 0x0468(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EcLongitude;                                              // 0x046C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EcLatitude;                                               // 0x0470(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EcDistance;                                               // 0x0474(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PartL;                                                    // 0x0478(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PartM;                                                    // 0x047C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PartF;                                                    // 0x0480(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x34];                                      // 0x0484(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.TimeManager");
		return pStaticClass;
	}


	void SetCurrentLocalTime(float Time);
	bool IsLeapYear(int Year);
	void InitializeCalendar(const struct FTimeDate& Time);
	void IncrementTime(float DeltaSeconds);
	float GetYearPhase();
	float GetElapsedDayInMinutes();
	int GetDaysInYear(int Year);
	int GetDaysInMonth(int Year, int Month);
	float GetDayPhase();
	int GetDayOfYear(const struct FTimeDate& Time);
	struct FRotator CalculateSunAngle();
	float CalculateMoonPhase();
	struct FRotator CalculateMoonAngle();
};


// Class OceanPlugin.WaterBoxComponent
// 0x00B0 (0x08C0 - 0x0810)
class UWaterBoxComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0810(0x0004) MISSED OFFSET
	float                                              SpeedValue;                                               // 0x0814(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WaveForceMultiplier;                                      // 0x0818(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x081C(0x0004) MISSED OFFSET
	TArray<struct FTrippleWaveParameter>               TrippleWaveClusters;                                      // 0x0820(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              TimeScaleOffset;                                          // 0x0830(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x0834(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseSplineDirection;                                       // 0x0838(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0839(0x0003) MISSED OFFSET
	float                                              SpeedAttenuationFromSpline;                               // 0x083C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseSplineZ;                                               // 0x0840(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0841(0x0003) MISSED OFFSET
	float                                              ZOffset;                                                  // 0x0844(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CellSizeX;                                                // 0x0848(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CellSizeY;                                                // 0x084C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<float, struct FWaterBoxCell>                  Cells;                                                    // 0x0850(0x0050) (Edit, ZeroConstructor)
	int                                                KeyFactor;                                                // 0x08A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1C];                                      // 0x08A4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.WaterBoxComponent");
		return pStaticClass;
	}

};


// Class OceanPlugin.WaterHeightmapComponent
// 0x0078 (0x0190 - 0x0118)
class UWaterHeightmapComponent : public UActorComponent
{
public:
	float                                              DesiredCellSize;                                          // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyCollidingComponents;                                 // 0x011C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	float                                              GridSizeMultiplier;                                       // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawUsedTriangles;                                       // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawHeightmap;                                           // 0x0125(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x62];                                      // 0x0126(0x0062) MISSED OFFSET
	class AOceanManager*                               OceanManager;                                             // 0x0188(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.WaterHeightmapComponent");
		return pStaticClass;
	}

};


}

