#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:15 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class CableComponent.CableActor
// 0x0008 (0x0400 - 0x03F8)
class ACableActor : public AActor
{
public:
	class UCableComponent*                             CableComponent;                                           // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CableComponent.CableActor");
		return pStaticClass;
	}

};


// Class CableComponent.CableComponent
// 0x0080 (0x0880 - 0x0800)
class UCableComponent : public UMeshComponent
{
public:
	struct FComponentReference                         AttachEndTo;                                              // 0x0800(0x0018) (Edit)
	struct FName                                       AttachEndToSocketName;                                    // 0x0818(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // 0x0820(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CableLength;                                              // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSegments;                                              // 0x0830(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SubstepTime;                                              // 0x0834(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SolverIterations;                                         // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableStiffness;                                         // 0x083C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x083D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x083E(0x0002) MISSED OFFSET
	float                                              CollisionFriction;                                        // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CableForce;                                               // 0x0844(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CableGravityScale;                                        // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CableWidth;                                               // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSides;                                                 // 0x0858(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileMaterial;                                             // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0860(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CableComponent.CableComponent");
		return pStaticClass;
	}


	void SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty, const struct FName& SocketName);
	void GetCableParticleLocations(TArray<struct FVector>* Locations);
	class USceneComponent* GetAttachedComponent();
	class AActor* GetAttachedActor();
};


}

