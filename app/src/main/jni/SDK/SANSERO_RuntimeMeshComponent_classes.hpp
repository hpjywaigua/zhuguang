#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:11 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class RuntimeMeshComponent.RuntimeMeshComponent
// 0x0120 (0x0920 - 0x0800)
class URuntimeMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0800(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    CollisionUpdated;                                         // 0x0808(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bUseComplexAsSimpleCollision;                             // 0x0818(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAsyncCooking;                                         // 0x0819(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSerializeMeshData;                                 // 0x081A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ERuntimeMeshCollisionCookingMode                   CollisionMode;                                            // 0x081B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x081C(0x0004) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x0820(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0828(0x0030) MISSED OFFSET
	TArray<struct FRuntimeMeshCollisionSection>        MeshCollisionSections;                                    // 0x0858(0x0010) (ZeroConstructor, Transient)
	TArray<struct FRuntimeConvexCollisionSection>      ConvexCollisionSections;                                  // 0x0868(0x0010) (ZeroConstructor, Transient)
	struct FBoxSphereBounds                            LocalBounds;                                              // 0x0878(0x001C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0894(0x0004) MISSED OFFSET
	struct FRuntimeMeshComponentPrePhysicsTickFunction PrePhysicsTick;                                           // 0x0898(0x0058) (Transient)
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                      // 0x08F0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0900(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class RuntimeMeshComponent.RuntimeMeshComponent");
		return pStaticClass;
	}


	void UpdateMeshSection_Blueprint(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FRuntimeMeshTangent> Tangents, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FLinearColor> Colors, bool bCalculateNormalTangent, bool bGenerateTessellationTriangles);
	void SetSectionTessellationTriangles(int SectionIndex, TArray<int> TessellationTriangles, bool bShouldMoveArray);
	void SetMeshSectionVisible(int SectionIndex, bool bNewVisibility);
	void SetMeshSectionCollisionEnabled(int SectionIndex, bool bNewCollisionEnabled);
	void SetMeshSectionCastsShadow(int SectionIndex, bool bNewCastsShadow);
	void SetMeshCollisionSection(int CollisionSectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles);
	void RuntimeMeshCollisionUpdatedDelegate__DelegateSignature();
	bool IsMeshSectionVisible(int SectionIndex);
	bool IsMeshSectionCollisionEnabled(int SectionIndex);
	bool IsMeshSectionCastingShadows(int SectionIndex);
	int GetNumSections();
	int GetLastSectionIndex();
	int FirstAvailableMeshSectionIndex();
	void EndBatchUpdates();
	bool DoesSectionExist(int SectionIndex);
	void CreateMeshSection_Blueprint(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FRuntimeMeshTangent> Tangents, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FLinearColor> Colors, bool bCreateCollision, bool bCalculateNormalTangent, bool bGenerateTessellationTriangles, EUpdateFrequency UpdateFrequency);
	void CookCollisionNow();
	void ClearMeshSection(int SectionIndex);
	void ClearMeshCollisionSection(int CollisionSectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void ClearAllMeshCollisionSections();
	bool ChangeRuntimeMeshSectionUVs(int SectionIndex, int Index, TMap<int, struct FVector2D> UVs);
	void BeginBatchUpdates();
	void AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts);
};


// Class RuntimeMeshComponent.RuntimeMeshLibrary
// 0x0000 (0x0028 - 0x0028)
class URuntimeMeshLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class RuntimeMeshComponent.RuntimeMeshLibrary");
		return pStaticClass;
	}


	static void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int LODIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FRuntimeMeshTangent>* Tangents);
	static void GenerateTessellationIndexBuffer(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FRuntimeMeshTangent>* Tangents, TArray<int>* OutTessTriangles);
	static void CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles);
	static void CreateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FRuntimeMeshTangent>* Tangents);
	static void CopyRuntimeMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComp, int LODIndex, class URuntimeMeshComponent* RuntimeMeshComp, bool bShouldCreateCollision);
	static void CopyRuntimeMeshFromStaticMesh(class UStaticMesh* StaticMesh, int LODIndex, class URuntimeMeshComponent* RuntimeMeshComp, bool bShouldCreateCollision);
	static void ConvertQuadToTriangles(int Vert0, int Vert1, int Vert2, int Vert3, TArray<int>* Triangles);
	static void CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FRuntimeMeshTangent>* Tangents);
};


}

