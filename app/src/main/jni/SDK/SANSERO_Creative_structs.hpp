#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:13 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Enums
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Enum Creative.ECreativeModeActorState
enum class ECreativeModeActorState : uint8_t
{
	ECreativeModeActorState__CreativeModeActorState_Unknown = 0,
	ECreativeModeActorState__CreativeModeActorState_Prefab = 1,
	ECreativeModeActorState__CreativeModeActorState_Instance = 2,
	ECreativeModeActorState__CreativeModeActorState_MAX = 3
};


// Enum Creative.ECreativeModePlayState
enum class ECreativeModePlayState : uint8_t
{
	ECreativeModePlayState__CreativeModePlayState_None = 0,
	ECreativeModePlayState__CreativeModePlayState_Ready = 1,
	ECreativeModePlayState__CreativeModePlayState_Fighting = 2,
	ECreativeModePlayState__CreativeModePlayState_Finish = 3,
	ECreativeModePlayState__CreativeModePlayState_Max = 4
};


// Enum Creative.ESpecType
enum class ESpecType : uint8_t
{
	ESpecType__Invalid             = 0,
	ESpecType__HumanBot            = 1,
	ESpecType__AIPlayer            = 2,
	ESpecType__Monster             = 3,
	ESpecType__ESpecType_MAX       = 4
};


// Enum Creative.ECreativeModeActorStreamingType
enum class ECreativeModeActorStreamingType : uint8_t
{
	ECreativeModeActorStreamingType__CreativeModeActorStreamingType_AlwaysLoad = 0,
	ECreativeModeActorStreamingType__CreativeModeActorStreamingType_Grid = 1,
	ECreativeModeActorStreamingType__CreativeModeActorStreamingType_MAX = 2
};


// Enum Creative.ECreativeModeLoadType
enum class ECreativeModeLoadType : uint8_t
{
	ECreativeModeLoadType__CreativeModeLoadType_Auto = 0,
	ECreativeModeLoadType__CreativeModeLoadType_Manual = 1,
	ECreativeModeLoadType__CreativeModeLoadType_MAX = 2
};


// Enum Creative.ECreativeModeGameType
enum class ECreativeModeGameType : uint8_t
{
	ECreativeModeGameType__CreativeModeGameType_None = 0,
	ECreativeModeGameType__CreativeModeGameType_Editor = 1,
	ECreativeModeGameType__CreativeModeGameType_Game = 2,
	ECreativeModeGameType__CreativeModeGameType_Max = 3
};



//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Script Structs
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// ScriptStruct Creative.CreativePlaceInfo
// 0x0014
struct FCreativePlaceInfo
{
	int                                                LandGroundType;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Scalable;                                                 // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HasCollision;                                             // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FRotator                                    RotableAxis;                                              // 0x0008(0x000C) (IsPlainOldData)
};

// ScriptStruct Creative.CreativeBoxInfo
// 0x0018
struct FCreativeBoxInfo
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x000C(0x000C) (IsPlainOldData)
};

// ScriptStruct Creative.CreativeStaticMeshConfigInfo
// 0x0060
struct FCreativeStaticMeshConfigInfo
{
	struct FString                                     MeshPath;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	TArray<struct FString>                             MaterialPaths;                                            // 0x0040(0x0010) (ZeroConstructor)
	struct FName                                       CollisionProfileName;                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct Creative.CreativeCollisionConfigInfo
// 0x0060
struct FCreativeCollisionConfigInfo
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (IsPlainOldData)
	struct FString                                     ClassName;                                                // 0x0030(0x0010) (ZeroConstructor)
	struct FName                                       CollisionProfileName;                                     // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x0048(0x000C) (IsPlainOldData)
	float                                              Radius;                                                   // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Creative.CreativeAssetInfo
// 0x0070
struct FCreativeAssetInfo
{
	struct FString                                     EditorPath;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     GamePath;                                                 // 0x0010(0x0010) (ZeroConstructor)
	struct FCreativePlaceInfo                          PlaceInfo;                                                // 0x0020(0x0014)
	bool                                               bRuntimeObjectBox;                                        // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FCreativeBoxInfo                            BoxInfo;                                                  // 0x0038(0x0018)
	TArray<struct FCreativeStaticMeshConfigInfo>       StaticMeshes;                                             // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FCreativeCollisionConfigInfo>        Collisions;                                               // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.ReplicateAddData
// 0x0008
struct FReplicateAddData
{
	int                                                AddNum;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ServerTime;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.ReplicateAddDataArray
// 0x0010
struct FReplicateAddDataArray
{
	TArray<struct FReplicateAddData>                   AddDatas;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeInstanceDataContentSegment
// 0x0018
struct FCreativeInstanceDataContentSegment
{
	unsigned char                                      Index;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<unsigned char>                              NodeSegmentContent;                                       // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeInstanceDataContent
// 0x0028
struct FCreativeInstanceDataContent
{
	unsigned char                                      Seq;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FCreativeInstanceDataContentSegment> NodeContentSegments;                                      // 0x0008(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              OutContent;                                               // 0x0018(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativeCustomParameterDataNode
// 0x001C (0x0028 - 0x000C)
struct FCreativeCustomParameterDataNode : public FFastArraySerializerItem
{
	uint32_t                                           ParameterID;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              DataContent;                                              // 0x0010(0x0010) (ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             TeamID;                                                   // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Creative.CreativeCustomParameterDataContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FCreativeCustomParameterDataContainer : public FFastArraySerializer
{
	TArray<struct FCreativeCustomParameterDataNode>    CustomParameterDataNodes;                                 // 0x00B0(0x0010) (ZeroConstructor)
	class UCreativeCustomParameterManager*             CustomParameterManager;                                   // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativePrefabDataSegment
// 0x0010
struct FCreativePrefabDataSegment
{
	TArray<unsigned char>                              NodeSegmentContent;                                       // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeCustomPrefabDataSegment
// 0x0018
struct FCreativeCustomPrefabDataSegment
{
	TArray<struct FCreativePrefabDataSegment>          DataSegments;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                CurDataSize;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                MaxDataSize;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativePoolObjectRecordInfo
// 0x0010
struct FCreativePoolObjectRecordInfo
{
	int                                                PoolID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     PoolObject;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.EditorObjectLiteComponentTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FEditorObjectLiteComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Creative.GameModeLiteComponentTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FGameModeLiteComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Creative.CreativeGameParameter
// 0x0054 (0x0060 - 0x000C)
struct FCreativeGameParameter : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     ParameterKey;                                             // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     TemplateID;                                               // 0x0020(0x0010) (ZeroConstructor)
	struct FCreativeInstanceDataContent                DataContent;                                              // 0x0030(0x0028)
	uint32_t                                           ParameterHeadSize;                                        // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Creative.CreativeGameParameterContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FCreativeGameParameterContainer : public FFastArraySerializer
{
	TArray<struct FCreativeGameParameter>              Nodes;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	class UCreativeGameParameterManager*               GameParameterManager;                                     // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.GameStateLiteComponentTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FGameStateLiteComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Creative.CreativeModeGridLevelConfig
// 0x000C
struct FCreativeModeGridLevelConfig
{
	struct FVector2D                                   CellWidthHeight;                                          // 0x0000(0x0008) (IsPlainOldData)
	float                                              LoadingRange;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.CreativeModeGridLevelInfo
// 0x0050
struct FCreativeModeGridLevelInfo
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Creative.CreativeInstanceDataNode
// 0x0030
struct FCreativeInstanceDataNode
{
	uint32_t                                           InstanceID;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FCreativeInstanceDataContent                DataContent;                                              // 0x0008(0x0028)
};

// ScriptStruct Creative.CreativePullDataNode
// 0x0008
struct FCreativePullDataNode
{
	uint32_t                                           InstanceID;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Seq;                                                      // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Creative.CreativeBatchPullDataNode
// 0x0018
struct FCreativeBatchPullDataNode
{
	float                                              ReqTimeStamp;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FCreativePullDataNode>               PullDataNodes;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeReplicatNode
// 0x0008 (0x0014 - 0x000C)
struct FCreativeReplicatNode : public FFastArraySerializerItem
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Seq;                                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Creative.CreativeNodeContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FCreativeNodeContainer : public FFastArraySerializer
{
	TArray<struct FCreativeReplicatNode>               Nodes;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	class UCreativeInstanceManager*                    InstanceManager;                                          // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativeInstanceNode
// 0x0070
struct FCreativeInstanceNode
{
	int                                                AssetId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrefab;                                                // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0005(0x000B) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	int                                                MaterialID;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ObjectStateMatID;                                         // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	ECreativeModeActorStreamingType                    StreamingType;                                            // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     RuntimeGrid;                                              // 0x0050(0x0010) (ZeroConstructor)
	int                                                ObbyBaseAssetId;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	ECreativeModeLoadType                              LoadType;                                                 // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x0065(0x000B) MISSED OFFSET
};

// ScriptStruct Creative.CreativeInstanceRespondPullDataSegment
// 0x0020
struct FCreativeInstanceRespondPullDataSegment
{
	unsigned char                                      TotalSegNum;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurSegNum;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FCreativeInstanceDataContent>        InstanceDataContents;                                     // 0x0008(0x0010) (ZeroConstructor)
	int                                                CurDataSize;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                MaxDataSize;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.PlayerIntegralInfo
// 0x0028
struct FPlayerIntegralInfo
{
	int                                                nCurIntegral;                                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                nCurStageIntegral;                                        // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                nIntegralAddSeq;                                          // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     UID;                                                      // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TeamID;                                                   // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Creative.CreativeBatchInstancedStaticMesh_MaterialId
// 0x00B8
struct FCreativeBatchInstancedStaticMesh_MaterialId
{
	TMap<int, class UInstancedStaticMeshComponent*>    ISMMap;                                                   // 0x0000(0x0050) (ExportObject, ZeroConstructor)
	TMap<struct FString, int>                          CurLoadedInstances;                                       // 0x0050(0x0050) (ZeroConstructor)
	TArray<int>                                        RecoveryBufferIndex;                                      // 0x00A0(0x0010) (ZeroConstructor)
	bool                                               bIsUseHISM;                                               // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct Creative.CreativeBatchInstancedStaticMesh_AssetID
// 0x0050
struct FCreativeBatchInstancedStaticMesh_AssetID
{
	TMap<int, struct FCreativeBatchInstancedStaticMesh_MaterialId> AllISMMap;                                                // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeBatchInstancedStaticMesh
// 0x0058
struct FCreativeBatchInstancedStaticMesh
{
	TMap<int, struct FCreativeBatchInstancedStaticMesh_AssetID> MaterialISMMap;                                           // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Creative.CreativeBatchStaticMeshInfo
// 0x0008
struct FCreativeBatchStaticMeshInfo
{
	int                                                AssetId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaterialID;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.CreativeModeStreamingParameters
// 0x0002
struct FCreativeModeStreamingParameters
{
	ECreativeModeActorStreamingType                    StreamingType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnState;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.CreativeObjectPoolClassConfig
// 0x0020
struct FCreativeObjectPoolClassConfig
{
	struct FString                                     ObjectClassPath;                                          // 0x0000(0x0010) (ZeroConstructor)
	uint16_t                                           PoolMaxSize;                                              // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           PoolMinSize;                                              // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           PoolInitNum;                                              // 0x0014(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	uint32_t                                           LifePeriodTime;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bCreativeHandleIsExist;                                   // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyHandleIsExist;                                    // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct Creative.CreativeObjectPool
// 0x0050
struct FCreativeObjectPool
{
	bool                                               bPoolEnable;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                PoolID;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class UCreativePoolManager*                        PoolManager;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             Pool;                                                     // 0x0010(0x0010) (ZeroConstructor, Transient)
	struct FCreativeObjectPoolClassConfig              PoolConfig;                                               // 0x0020(0x0020)
	class UClass*                                      ObjectClass;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           RecycledSeq;                                              // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Creative.RuntimePlayerBattleDataInfo
// 0x0054 (0x0060 - 0x000C)
struct FRuntimePlayerBattleDataInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	uint64_t                                           UID;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CampID;                                                   // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	uint32_t                                           PlayerKey;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WinningRoundNum;                                          // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AIKillCount;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillCount;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MonsterKillCount;                                         // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                AssistCount;                                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              PlayerHealth;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	ExtraPlayerLiveState                               PlayerLiveState;                                          // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              SurvivalTime;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                DeadCount;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              CauseTotalDamage;                                         // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              CauseMonsterTotalDamage;                                  // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              CauseRoleTotalDamage;                                     // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              TakeTotalDamage;                                          // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              TakeRoleTotalDamage;                                      // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              TakeMonsterTotalDamage;                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.RuntimeTeamGameOutcomeConditionInfo
// 0x0010 (0x001C - 0x000C)
struct FRuntimeTeamGameOutcomeConditionInfo : public FFastArraySerializerItem
{
	int                                                TeamID;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntegralVictoryTarget;                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillPlayerNumVictoryTarget;                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               UseCampOutcome;                                           // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Creative.RuntimeCacheRoundBattleDataInfo
// 0x0014 (0x0020 - 0x000C)
struct FRuntimeCacheRoundBattleDataInfo : public FFastArraySerializerItem
{
	int                                                RoundIndex;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FRuntimePlayerBattleDataInfo>        PlayerBattleDataList;                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.RuntimeCacheRoundBattleDataInfoContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FRuntimeCacheRoundBattleDataInfoContainer : public FFastArraySerializer
{
	TArray<struct FRuntimeCacheRoundBattleDataInfo>    OldRoundCacheTeamRuntimeDataList;                         // 0x00B0(0x0010) (ZeroConstructor)
	class ACreativeRuntimePlayerBattleDataObject*      BattleDataObject;                                         // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.RuntimeBattleDataInfoContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FRuntimeBattleDataInfoContainer : public FFastArraySerializer
{
	TArray<struct FRuntimePlayerBattleDataInfo>        CurRuntimePlayerBattleDataList;                           // 0x00B0(0x0010) (ZeroConstructor)
	class ACreativeRuntimePlayerBattleDataObject*      BattleDataObject;                                         // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.RuntimeTeamGameOutcomeConditionContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FRuntimeTeamGameOutcomeConditionContainer : public FFastArraySerializer
{
	TArray<struct FRuntimeTeamGameOutcomeConditionInfo> TeamGameOutcomeConditions;                                // 0x00B0(0x0010) (ZeroConstructor)
	class ACreativeRuntimePlayerBattleDataObject*      BattleDataObject;                                         // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativeReplicatedData
// 0x0014 (0x0020 - 0x000C)
struct FCreativeReplicatedData : public FFastArraySerializerItem
{
	uint32_t                                           InstanceID;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ReplicatedObjects;                                        // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeReplicatedDataContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FCreativeReplicatedDataContainer : public FFastArraySerializer
{
	TArray<struct FCreativeReplicatedData>             DataList;                                                 // 0x00B0(0x0010) (ZeroConstructor)
	class UCreativeSceneQueryManager*                  SceneQueryManager;                                        // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativeReplicatedObjectsInfo
// 0x0010
struct FCreativeReplicatedObjectsInfo
{
	TArray<class UObject*>                             ReplicatedObjects;                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeEditorObjectEffectMesheInfo
// 0x0010
struct FCreativeEditorObjectEffectMesheInfo
{
	class UStaticMeshComponent*                        EffectMeshComponent;                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        OriginalMeshComponent;                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Creative.CreativeUpdateBatchActorParameter
// 0x0020
struct FCreativeUpdateBatchActorParameter
{
	struct FString                                     GridName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                AssetId;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaterialID;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceAll;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              ReqTimeStamp;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.CreativeGridLevelsActivationInfo
// 0x0050
struct FCreativeGridLevelsActivationInfo
{
	TMap<struct FIntVector, bool>                      LevelsActivationMap;                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo_Material
// 0x0010
struct FCreativeStaticMeshObjectBatchInfo_Material
{
	TArray<struct FString>                             InstanceIDs;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo_Asset
// 0x0050
struct FCreativeStaticMeshObjectBatchInfo_Asset
{
	TMap<int, struct FCreativeStaticMeshObjectBatchInfo_Material> MaterialDataMap;                                          // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo_Cell
// 0x0050
struct FCreativeStaticMeshObjectBatchInfo_Cell
{
	TMap<int, struct FCreativeStaticMeshObjectBatchInfo_Asset> AssetDataMap;                                             // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo_Grid
// 0x0050
struct FCreativeStaticMeshObjectBatchInfo_Grid
{
	TMap<struct FIntVector, struct FCreativeStaticMeshObjectBatchInfo_Cell> CellDataMap;                                              // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo
// 0x0050
struct FCreativeStaticMeshObjectBatchInfo
{
	TMap<struct FString, struct FCreativeStaticMeshObjectBatchInfo_Grid> GridDataMap;                                              // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeObjectBatchSignInfo
// 0x0050
struct FCreativeObjectBatchSignInfo
{
	struct FIntVector                                  CellIndex;                                                // 0x0000(0x000C) (IsPlainOldData)
	int                                                CurMaterialId;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	bool                                               bIsPrefab;                                                // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
};

// ScriptStruct Creative.CreativeSpawnObjectInfo
// 0x0070
struct FCreativeSpawnObjectInfo
{
	struct FString                                     InstanceID;                                               // 0x0000(0x0010) (ZeroConstructor)
	int                                                AssetId;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     AssetPath;                                                // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  SpawnTransform;                                           // 0x0030(0x0030) (IsPlainOldData)
	bool                                               bIsLogicObj;                                              // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0061(0x000F) MISSED OFFSET
};

// ScriptStruct Creative.CreativeEventBindingChangeInfo
// 0x0028
struct FCreativeEventBindingChangeInfo
{
	uint32_t                                           InstanceID;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ChangeType;                                               // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     EventName;                                                // 0x0008(0x0010) (ZeroConstructor)
	uint32_t                                           BranchKey;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           BindingInstanceID;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      FuncIndex;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Creative.CreativeModeGridCellChangeInfo
// 0x0010
struct FCreativeModeGridCellChangeInfo
{
	struct FIntVector                                  CellIndex;                                                // 0x0000(0x000C) (IsPlainOldData)
	bool                                               LoadState;                                                // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Creative.CreativeTranslationEntry
// 0x0020
struct FCreativeTranslationEntry
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeAudioActorInfo
// 0x0010
struct FCreativeAudioActorInfo
{
	int                                                audioID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RangeType;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AudienceType;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CanShow;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.CreativeTimerActorInfo
// 0x0010
struct FCreativeTimerActorInfo
{
	float                                              StartTime;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PassedTime;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TimerState;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.DancerDeviceSyncPlayerInfo
// 0x0030
struct FDancerDeviceSyncPlayerInfo
{
	uint32_t                                           PlayerKey;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerSex;                                                // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	uint32_t                                           HeadID;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<int>                                        AvatarItemIDList;                                         // 0x0010(0x0010) (ZeroConstructor)
	int                                                PlayingActionID;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	double                                             StartPlayActionServerTime;                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.DancerDeviceActorConfigInfo
// 0x0030
struct FDancerDeviceActorConfigInfo
{
	int8_t                                             DancerType;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaterialType;                                             // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              ScaleValue;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ActionPlayMode;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayInterval;                                             // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ShowBaseMesh;                                             // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ShowBaseLight;                                            // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               SyncPlayerBaseAction;                                     // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FLinearColor                                LightColor;                                               // 0x0010(0x0010) (IsPlainOldData)
	TArray<uint32_t>                                   ActionIDList;                                             // 0x0020(0x0010) (ZeroConstructor)
};

}

