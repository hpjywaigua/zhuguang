#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class MRMesh.MeshReconstructorBase
// 0x0000 (0x0028 - 0x0028)
class UMeshReconstructorBase : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		return pStaticClass;
	}


	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	struct FMRMeshConfiguration ConnectMRMesh(class UMRMeshComponent* Mesh);
};


// Class MRMesh.MRMeshComponent
// 0x0050 (0x0830 - 0x07E0)
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x07E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMeshReconstructorBase*                      MeshReconstructor;                                        // 0x07E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x07F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07F1(0x0007) MISSED OFFSET
	TArray<class UBodySetup*>                          BodySetups;                                               // 0x07F8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0808(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MRMesh.MRMeshComponent");
		return pStaticClass;
	}


	class UMeshReconstructorBase* GetReconstructor();
	void ConnectReconstructor(class UMeshReconstructorBase* Reconstructor);
};


}

