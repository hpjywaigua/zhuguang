#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class Landscape.ControlPointMeshComponent
// 0x0000 (0x0970 - 0x0970)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeProxy
// 0x04D8 (0x08D0 - 0x03F8)
class ALandscapeProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03F8(0x0020) MISSED OFFSET
	class ULandscapeSplinesComponent*                  SplineComponent;                                          // 0x0418(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0420(0x0010) (Edit, EditConst, IsPlainOldData)
	struct FGuid                                       BoundingGuid;                                             // 0x0430(0x0010) (Edit, IsPlainOldData)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x0440(0x0008) (IsPlainOldData)
	int                                                MaxLODLevel;                                              // 0x0448(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistanceFactor;                                        // 0x044C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               // 0x0450(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseScreenSizeLOD;                                        // 0x0451(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0452(0x0002) MISSED OFFSET
	float                                              LOD0DistributionSetting;                                  // 0x0454(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistributionSetting;                                   // 0x0458(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NearMaxLOD_Baked;                                         // 0x045C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x045D(0x0003) MISSED OFFSET
	float                                              NearFactor_Baked;                                         // 0x0460(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NearExtent_Baked;                                         // 0x0464(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FarFactor_Baked;                                          // 0x0468(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LandscapeRoughness;                                       // 0x046C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               EnableImproveLOD;                                         // 0x0470(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	TArray<float>                                      ImproveLODValues;                                         // 0x0478(0x0010) (ZeroConstructor)
	unsigned char                                      NearMaxLOD;                                               // 0x0488(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0489(0x0003) MISSED OFFSET
	float                                              NearFactor;                                               // 0x048C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearExtent;                                               // 0x0490(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FarFactor;                                                // 0x0494(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StaticLightingLOD;                                        // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x04A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x04A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCacheHeightData : 1;                                     // 0x04AC(0x0001) (Edit)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x04B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    // 0x04B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UMaterialInterface*>      OtherMaterials;                                           // 0x04C0(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      bOverrideGrassTypes : 1;                                  // 0x0510(0x0001) (Edit)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	TArray<class ULandscapeGrassType*>                 GrassTypes;                                               // 0x0518(0x0010) (Edit, ZeroConstructor)
	float                                              MinGrassWeightThreshold;                                  // 0x0528(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x052C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x0530(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	class UTexture2D*                                  GrassColor_WorldMaskNoiseTexture;                         // 0x0538(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GrassColor_UVScale_WorldMaskNoise;                        // 0x0540(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   GrassColor_Center_WorldMaskNoise;                         // 0x0548(0x0008) (Edit, IsPlainOldData)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      // 0x0550(0x0010) (ExportObject, ZeroConstructor)
	class ULandscapeAOTextureDataAsset*                LandscapeAOTextureDataAsset;                              // 0x0560(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x0568(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x0578(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData09[0x60];                                      // 0x0588(0x0060) MISSED OFFSET
	bool                                               bHasLandscapeGrass;                                       // 0x05E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x05E9(0x0003) MISSED OFFSET
	float                                              StaticLightingResolution;                                 // 0x05EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x05F0(0x0001) (Edit)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x05F0(0x0001) (Edit)
	unsigned char                                      bCastFarShadow : 1;                                       // 0x05F0(0x0001) (Edit)
	struct FLightingChannels                           LightingChannels;                                         // 0x05F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;           // 0x05F2(0x0001) (Edit)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x05F2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData11[0x1];                                       // 0x05F3(0x0001) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x05F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        // 0x05F8(0x0018) (Edit)
	int                                                CollisionMipLevel;                                        // 0x0610(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x0614(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x0618(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x061C(0x0004) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x0620(0x0180) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGenerateOverlapEvents : 1;                               // 0x07A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;             // 0x07A0(0x0001) (Edit)
	unsigned char                                      bUseHoleConsistent : 1;                                   // 0x07A0(0x0001) (Edit)
	unsigned char                                      UnknownData13[0x3];                                       // 0x07A1(0x0003) MISSED OFFSET
	int                                                ComponentSizeQuads;                                       // 0x07A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x07A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x07AC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsedForNavigation : 1;                                   // 0x07B0(0x0001) (Edit)
	unsigned char                                      bMobileMultiLayers : 1;                                   // 0x07B0(0x0001) (Edit)
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                          // 0x07B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;             // 0x07B2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeVT;                                          // 0x07B3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x07B4(0x0004) MISSED OFFSET
	class UTexture2D*                                  MaskTextureUsedByGrassClear;                              // 0x07B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x110];                                     // 0x07C0(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeProxy");
		return pStaticClass;
	}


	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeLODDistributionSettingConsoleVariable();
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
	void ChangeLOD0DistributionSettingConsoleVariable();
	void ChangebUseScreenSizeLOD(bool InbUseScreenSizeLOD);
};


// Class Landscape.Landscape
// 0x00A0 (0x0970 - 0x08D0)
class ALandscape : public ALandscapeProxy
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x08D0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.Landscape");
		return pStaticClass;
	}

};


// Class Landscape.SimpleMeshComponent
// 0x0030 (0x0830 - 0x0800)
class USimpleMeshComponent : public UMeshComponent
{
public:
	TArray<struct FSimpleMeshSection>                  MeshSections;                                             // 0x0800(0x0010) (ZeroConstructor)
	struct FBoxSphereBounds                            LocalBounds;                                              // 0x0810(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x082C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.SimpleMeshComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeComponent
// 0x03F0 (0x0BD0 - 0x07E0)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                ComponentSizeQuads;                                       // 0x07E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x07E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x07E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideHoleMaterial;                                     // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UMaterialInterface*>      OverrideOtherMaterials;                                   // 0x0800(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FOverridePhyxMaterial                       OverridePhyxMaterial;                                     // 0x0850(0x0020) (Edit)
	unsigned char                                      bOverrideGrassTypes : 1;                                  // 0x0870(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0871(0x0007) MISSED OFFSET
	TArray<class ULandscapeGrassType*>                 GrassTypes;                                               // 0x0878(0x0010) (Edit, ZeroConstructor)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                        // 0x0888(0x0010) (ZeroConstructor)
	TMap<struct FName, class UMaterialInstanceConstant*> OtherMaterialInstances;                                   // 0x0898(0x0050) (ZeroConstructor)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                // 0x08E8(0x0010) (ZeroConstructor)
	TArray<class UTexture2D*>                          WeightmapTextures;                                        // 0x08F8(0x0010) (ZeroConstructor)
	int                                                VisibilityLayerChannel;                                   // 0x0908(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x090C(0x0004) MISSED OFFSET
	class UTexture2D*                                  XYOffsetmapTexture;                                       // 0x0910(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0918(0x0008) MISSED OFFSET
	struct FVector4                                    WeightmapScaleBias;                                       // 0x0920(0x0010) (IsPlainOldData)
	float                                              WeightmapSubsectionOffset;                                // 0x0930(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0934(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x0940(0x0010) (IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x0950(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FVisibilityData>       MultiVisibilityTextureData;                               // 0x0958(0x0050) (ZeroConstructor)
	struct FString                                     VisibleVisibilityLayer;                                   // 0x09A8(0x0010) (ZeroConstructor)
	struct FBox                                        CachedLocalBox;                                           // 0x09B8(0x001C) (IsPlainOldData)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x09D4(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	struct FGuid                                       MapBuildDataId;                                           // 0x09F0(0x0010) (IsPlainOldData)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x0A00(0x0010) (ZeroConstructor, Deprecated)
	int                                                CollisionMipLevel;                                        // 0x0A10(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x0A14(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x0A18(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x0A1C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x0A20(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ForcedLOD;                                                // 0x0A24(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODBias;                                                  // 0x0A28(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MobileVertexHoleMaxLOD;                                   // 0x0A2C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0A30(0x0010) MISSED OFFSET
	TArray<float>                                      LODDeltaVertex;                                           // 0x0A40(0x0010) (ZeroConstructor)
	float                                              MaxDeltaVertex;                                           // 0x0A50(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       stateID;                                                  // 0x0A54(0x0010) (IsPlainOldData)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x0A64(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0A74(0x0004) MISSED OFFSET
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  // 0x0A78(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     OccluderMeshDataPath;                                     // 0x0A80(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x0A90(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0A91(0x0007) MISSED OFFSET
	class UMaterialInterface*                          MobileMaterialInterface;                                  // 0x0A98(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UMaterialInterface*>      OtherMobileMaterialInterfaces;                            // 0x0AA0(0x0050) (ZeroConstructor)
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                  // 0x0AF0(0x0010) (ZeroConstructor)
	class UTexture2D*                                  MobileWeightNormalmapTexture;                             // 0x0B00(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMobileMultiLayers : 1;                                   // 0x0B08(0x0001)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0B09(0x0007) MISSED OFFSET
	TArray<uint16_t>                                   CachedHeightData;                                         // 0x0B10(0x0010) (ZeroConstructor)
	bool                                               bUseLandscapeVT;                                          // 0x0B20(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLandscapeVTNeedHeightmap;                                // 0x0B21(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x66];                                      // 0x0B22(0x0066) MISSED OFFSET
	bool                                               bHasROCData;                                              // 0x0B88(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1F];                                      // 0x0B89(0x001F) MISSED OFFSET
	struct FName                                       UsedOtherMaterialName;                                    // 0x0BA8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x20];                                      // 0x0BB0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGeometryAsset
// 0x0168 (0x0198 - 0x0030)
class ULandscapeGeometryAsset : public UDataAsset
{
public:
	TArray<struct FVector>                             Vertex;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector2D>                           UV;                                                       // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        Indices;                                                  // 0x0060(0x0010) (Edit, ZeroConstructor)
	TMap<struct FIntPoint, int>                        ComponentIndexOffset;                                     // 0x0070(0x0050) (Edit, ZeroConstructor)
	int                                                ComponentIndexCount;                                      // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ComponentVertexCount;                                     // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FLevelComponentMapValue> SubLevelComponentMap;                                     // 0x00C8(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0118(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Landscape.LandscapeGeometryAsset.HighQualityMesh
	float                                              HighQualityMeshDestroyHight;                              // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	TMap<struct FIntPoint, int>                        ComponentVertexIndexOffset;                               // 0x0148(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGeometryAsset");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGizmoActor
// 0x0000 (0x03F8 - 0x03F8)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (0x0448 - 0x03F8)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03F8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (0x07E0 - 0x07E0)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGrassType
// 0x0030 (0x0058 - 0x0028)
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UStaticMesh*                                 GrassMesh;                                                // 0x0038(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0040(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x0044(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0048(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x004C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x0050(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               AlignToSurface;                                           // 0x0051(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00E0 (0x08C0 - 0x07E0)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07E0(0x0008) MISSED OFFSET
	int                                                SectionBaseX;                                             // 0x07E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x07EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CollisionSizeQuads;                                       // 0x07F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionScale;                                           // 0x07F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionSizeQuads;                                 // 0x07F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07FC(0x0004) MISSED OFFSET
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x0800(0x0010) (ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                          // 0x0810(0x0010) (IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0820(0x001C) (IsPlainOldData)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          // 0x083C(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0858(0x0010) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  // 0x0868(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0878(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return pStaticClass;
	}

};


// Class Landscape.IdeaGrassFieldFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UIdeaGrassFieldFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.IdeaGrassFieldFunctionLibrary");
		return pStaticClass;
	}


	static void IdeaGrassRenderForceTextureTrample(const struct FIdeaGrassFieldData& GrassFieldData);
	static void IdeaGrassRenderForceTextureSkill(const struct FIdeaGrassFieldData& GrassFieldData);
	static void IdeaGrassRenderForceTextureFade(const struct FIdeaGrassFieldData& GrassFieldData);
	static void IdeaGrassRenderForceTexture(const struct FIdeaGrassFieldData& GrassFieldData);
};


// Class Landscape.LandscapeInfo
// 0x03C8 (0x03F0 - 0x0028)
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0028(0x001C) (IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0044(0x0010) (IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentNumSubsections;                                  // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DrawScale;                                                // 0x0060(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x244];                                     // 0x006C(0x0244) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x006C(0x0050) UNKNOWN PROPERTY: SetProperty Landscape.LandscapeInfo.Proxies
	unsigned char                                      UnknownData02[0xF0];                                      // 0x0300(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeInfo");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0058 (0x0080 - 0x0028)
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x0028 (0x0050 - 0x0028)
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Hardness;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LayerUsageDebugColor;                                     // 0x003C(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0000 (0x0220 - 0x0220)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x0010 (0x08D0 - 0x08C0)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x08C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (0x0400 - 0x03F8)
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x0020 (0x0990 - 0x0970)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0970(0x0008) MISSED OFFSET
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x0978(0x0010) (ZeroConstructor)
	int8_t                                             ProxyLOD;                                                 // 0x0988(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0989(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x0030 (0x0810 - 0x07E0)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07E0(0x0008) MISSED OFFSET
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 // 0x07E8(0x0010) (ZeroConstructor)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              // 0x07F8(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0808(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeSplineControlPoint
// 0x0070 (0x0098 - 0x0028)
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                 // 0x0028(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0034(0x000C) (Edit, IsPlainOldData)
	float                                              Width;                                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideFalloff;                                              // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndFalloff;                                               // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0060(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0070(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x0088 (0x00B0 - 0x0028)
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         // 0x0028(0x0018) (Edit, EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0058(0x0018)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0070(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0080(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      // 0x00A0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeStreamingProxy
// 0x0020 (0x08F0 - 0x08D0)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x08D0(0x001C) (Edit, IsPlainOldData)
	bool                                               bLandscapeProxyUseSceenSizeLOD;                           // 0x08EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08ED(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeFlattenCoords
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionLandscapeFlattenCoords : public UMaterialExpression
{
public:
	struct FExpressionInput                            UVScaleBias;                                              // 0x0060(0x0038)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenCoords");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeFlattenTexture
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionLandscapeFlattenTexture : public UMaterialExpression
{
public:
	struct FExpressionInput                            Coordinates;                                              // 0x0060(0x0038)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenTexture");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeFlattenBaseColor
// 0x0000 (0x0098 - 0x0098)
class UMaterialExpressionLandscapeFlattenBaseColor : public UMaterialExpressionLandscapeFlattenTexture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenBaseColor");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeFlattenNormal
// 0x0000 (0x0098 - 0x0098)
class UMaterialExpressionLandscapeFlattenNormal : public UMaterialExpressionLandscapeFlattenTexture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenNormal");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeFlattenRSM
// 0x0000 (0x0098 - 0x0098)
class UMaterialExpressionLandscapeFlattenRSM : public UMaterialExpressionLandscapeFlattenTexture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenRSM");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                               // 0x0060(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (0x0080 - 0x0060)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                   // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       ExpressionGUID;                                           // 0x0070(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0050 (0x00B0 - 0x0060)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                              // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                             // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
	struct FExpressionInput                            MappingScaleOverride;                                     // 0x0068(0x0038)
	float                                              MappingScale;                                             // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingRotation;                                          // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanU;                                              // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanV;                                              // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (0x0080 - 0x0060)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x006C(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0090 (0x00F0 - 0x0060)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                // 0x0060(0x0038)
	struct FExpressionInput                            LayerNotUsed;                                             // 0x0098(0x0038)
	struct FName                                       ParameterName;                                            // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviewUsed : 1;                                          // 0x00D8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x00DC(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0098 (0x00F8 - 0x0060)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                     // 0x0060(0x0038)
	struct FExpressionInput                            Layer;                                                    // 0x0098(0x0038)
	struct FName                                       ParameterName;                                            // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstBase;                                                // 0x00DC(0x000C) (Edit, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x00E8(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                           // 0x0060(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return pStaticClass;
	}

};


}

