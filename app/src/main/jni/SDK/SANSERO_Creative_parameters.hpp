#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:13 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Parameters
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function Creative.CreativeAbilitySystemComponent.UpdateGhostBuildingTransform
struct UCreativeAbilitySystemComponent_UpdateGhostBuildingTransform_Params
{
};

// Function Creative.CreativeAbilitySystemComponent.SetSnapTargetTransform
struct UCreativeAbilitySystemComponent_SetSnapTargetTransform_Params
{
	struct FTransform                                  SnapTargetTransform;                                      // (Parm, OutParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformScale
struct UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformScale_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformRotation
struct UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformRotation_Params
{
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformLocation
struct UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformLocation_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.ReceiveGetSnapTargetTransform
struct UCreativeAbilitySystemComponent_ReceiveGetSnapTargetTransform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxisZ
struct UCreativeAbilitySystemComponent_GetSnappedLocAxisZ_Params
{
	float                                              Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Base;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxis
struct UCreativeAbilitySystemComponent_GetSnappedLocAxis_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AxisType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.GetSetupBuildingID
struct UCreativeAbilitySystemComponent_GetSetupBuildingID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.GetGhostBuildingTransform
struct UCreativeAbilitySystemComponent_GetGhostBuildingTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.GetBuildingInstanceID
struct UCreativeAbilitySystemComponent_GetBuildingInstanceID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeAbilitySystemComponent.GetBuildDistance
struct UCreativeAbilitySystemComponent_GetBuildDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.SortCanEditParamsObjs
struct UCreativeModeActorInteractionComponent_SortCanEditParamsObjs_Params
{
};

// Function Creative.CreativeModeActorInteractionComponent.SetCrossHairTransformObjInstanceID
struct UCreativeModeActorInteractionComponent_SetCrossHairTransformObjInstanceID_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeActorInteractionComponent.SetCrossHairSelectedObjInstanceID
struct UCreativeModeActorInteractionComponent_SetCrossHairSelectedObjInstanceID_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckIntervalCfg
struct UCreativeModeActorInteractionComponent_GetSectorCheckIntervalCfg_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckDistance
struct UCreativeModeActorInteractionComponent_GetSectorCheckDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckAngle
struct UCreativeModeActorInteractionComponent_GetSectorCheckAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetPlayerHalfHeight
struct UCreativeModeActorInteractionComponent_GetPlayerHalfHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckIntervalCfg
struct UCreativeModeActorInteractionComponent_GetCrossHairCheckIntervalCfg_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckDistanceCfg
struct UCreativeModeActorInteractionComponent_GetCrossHairCheckDistanceCfg_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.ClearCanEditParamsObjs
struct UCreativeModeActorInteractionComponent_ClearCanEditParamsObjs_Params
{
};

// Function Creative.CreativeModeActorInteractionComponent.AddCanEditObject
struct UCreativeModeActorInteractionComponent_AddCanEditObject_Params
{
	class UObject*                                     uCanEditObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAdaptiveSchedulManager.Get
struct UCreativeAdaptiveSchedulManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeAdaptiveSchedulManager*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAdaptiveSchedulManager.AfterDead
struct UCreativeAdaptiveSchedulManager_AfterDead_Params
{
	int                                                SpecType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAssetManager.ReceiveOnGameStateBeginPlay
struct UCreativeAssetManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAssetManager.ReceiveInitAssetInfo
struct UCreativeAssetManager_ReceiveInitAssetInfo_Params
{
	int                                                AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAssetManager.OnGameStateBeginPlay
struct UCreativeAssetManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAssetManager.GetObbyMeshPath
struct UCreativeAssetManager_GetObbyMeshPath_Params
{
	int                                                AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeAssetManager.GetMaterialPath
struct UCreativeAssetManager_GetMaterialPath_Params
{
	int                                                MaterialID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeAssetManager.Get
struct UCreativeAssetManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeAssetManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAssetManager.AddAssetInfo
struct UCreativeAssetManager_AddAssetInfo_Params
{
	int                                                AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FCreativeAssetInfo                          AssetInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Creative.CreativeModeBackpackUtils.ResCanAddToBackpackNum
struct UCreativeModeBackpackUtils_ResCanAddToBackpackNum_Params
{
	class UBackpackComponent*                          BackpackComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                resID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBackpackUtils.GetItemMaxCount
struct UCreativeModeBackpackUtils_GetItemMaxCount_Params
{
	class UBackpackComponent*                          BackpackComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                resID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBackpackUtils.AddAIAvatarItem
struct UCreativeModeBackpackUtils_AddAIAvatarItem_Params
{
	class UBackpackComponent*                          BackpackComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Pattern;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.TransformRevert
struct UCreativeModeBlueprintLibrary_TransformRevert_Params
{
	struct FTransform                                  TransformRelative;                                        // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  TransformB;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.TransformMultiplyBy
struct UCreativeModeBlueprintLibrary_TransformMultiplyBy_Params
{
	struct FTransform                                  Source;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  M;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.TransformBounds
struct UCreativeModeBlueprintLibrary_TransformBounds_Params
{
	struct FBoxSphereBounds                            Bounds;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  M;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.ShouldCreatePhysicsState
struct UCreativeModeBlueprintLibrary_ShouldCreatePhysicsState_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SetStaticMeshMobility
struct UCreativeModeBlueprintLibrary_SetStaticMeshMobility_Params
{
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    NewMobility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SetSpeedOverLimit
struct UCreativeModeBlueprintLibrary_SetSpeedOverLimit_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SetParticleCullingDistance
struct UCreativeModeBlueprintLibrary_SetParticleCullingDistance_Params
{
	class UParticleSystemComponent*                    ParticleSystemComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SetInstanceValue
struct UCreativeModeBlueprintLibrary_SetInstanceValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.SetCommandLineValue
struct UCreativeModeBlueprintLibrary_SetCommandLineValue_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     NewValue;                                                 // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.SetCollisionMobility
struct UCreativeModeBlueprintLibrary_SetCollisionMobility_Params
{
	class UShapeComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    NewMobility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SaveAssetStringToFile
struct UCreativeModeBlueprintLibrary_SaveAssetStringToFile_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.RenameObject
struct UCreativeModeBlueprintLibrary_RenameObject_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NewName;                                                  // (ConstParm, Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.RecreatePhysicsState
struct UCreativeModeBlueprintLibrary_RecreatePhysicsState_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.QuatCross
struct UCreativeModeBlueprintLibrary_QuatCross_Params
{
	struct FQuat                                       Quat1;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FQuat                                       Quat2;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.ProjectSavedDir
struct UCreativeModeBlueprintLibrary_ProjectSavedDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.PopulateParticleProperties
struct UCreativeModeBlueprintLibrary_PopulateParticleProperties_Params
{
	class UParticleSystemComponent*                    ParticleSystemComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.MinAreaRectangle
struct UCreativeModeBlueprintLibrary_MinAreaRectangle_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             InPoints;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     SampleSurfaceNormal;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutRectCenter;                                            // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutRectRotation;                                          // (Parm, OutParm, IsPlainOldData)
	float                                              OutRectLengthX;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutRectLengthY;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDraw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        PolyVertIndices;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.MD5HashByteArray
struct UCreativeModeBlueprintLibrary_MD5HashByteArray_Params
{
	TArray<unsigned char>                              inArray;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.MD5HashAnsiString
struct UCreativeModeBlueprintLibrary_MD5HashAnsiString_Params
{
	struct FString                                     str;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.LoadAssetFileToString
struct UCreativeModeBlueprintLibrary_LoadAssetFileToString_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.IsPhysicsStateCreated
struct UCreativeModeBlueprintLibrary_IsPhysicsStateCreated_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.IsPersistentModeEnabled
struct UCreativeModeBlueprintLibrary_IsPersistentModeEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.IsOfflineBuild
struct UCreativeModeBlueprintLibrary_IsOfflineBuild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.IsCreativeMode
struct UCreativeModeBlueprintLibrary_IsCreativeMode_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.IgnoreClientMovementErrorChecksAndCorrection
struct UCreativeModeBlueprintLibrary_IgnoreClientMovementErrorChecksAndCorrection_Params
{
	class ACharacter*                                  Charcter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsIgnore;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetUrlValue
struct UCreativeModeBlueprintLibrary_GetUrlValue_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetRTValidMaxArea
struct UCreativeModeBlueprintLibrary_GetRTValidMaxArea_Params
{
	class UTextureRenderTarget2D*                      TextureTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetReplicateAddDataArrayVaildNum
struct UCreativeModeBlueprintLibrary_GetReplicateAddDataArrayVaildNum_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FReplicateAddDataArray                      ReplicateAddDataArray;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                StartIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetObjectScreenPos
struct UCreativeModeBlueprintLibrary_GetObjectScreenPos_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FVector2D                                   Pos;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetObjectMap
struct UCreativeModeBlueprintLibrary_GetObjectMap_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UObject*>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetGameTypeAsString
struct UCreativeModeBlueprintLibrary_GetGameTypeAsString_Params
{
	ECreativeModeGameType                              GameType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetDataConttentByInstanceDataContent
struct UCreativeModeBlueprintLibrary_GetDataConttentByInstanceDataContent_Params
{
	struct FCreativeInstanceDataContent                InstanceDataContent;                                      // (Parm, OutParm)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetContentPatchData
struct UCreativeModeBlueprintLibrary_GetContentPatchData_Params
{
	TArray<unsigned char>                              OldData;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              DiffData;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              outNewData;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetContentDiffData
struct UCreativeModeBlueprintLibrary_GetContentDiffData_Params
{
	TArray<unsigned char>                              OldData;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              NewData;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              outDiffData;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetCommandLineValue
struct UCreativeModeBlueprintLibrary_GetCommandLineValue_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetBoundingBoxOfInstances
struct UCreativeModeBlueprintLibrary_GetBoundingBoxOfInstances_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Ids;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetBoundingBoxOfActors
struct UCreativeModeBlueprintLibrary_GetBoundingBoxOfActors_Params
{
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetAllInstanceInScreenBox
struct UCreativeModeBlueprintLibrary_GetAllInstanceInScreenBox_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                CheckDistance;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CountLimit;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetAllInstanceInBox
struct UCreativeModeBlueprintLibrary_GetAllInstanceInBox_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetActorMeshBoundsByTag
struct UCreativeModeBlueprintLibrary_GetActorMeshBoundsByTag_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, IsPlainOldData)
	struct FString                                     IgnoreTag;                                                // (Parm, ZeroConstructor)
	struct FString                                     IncludeTag;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.GenerateUIntGuid
struct UCreativeModeBlueprintLibrary_GenerateUIntGuid_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GenerateGuid
struct UCreativeModeBlueprintLibrary_GenerateGuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.DrawLine
struct UCreativeModeBlueprintLibrary_DrawLine_Params
{
	struct FPaintContext                               InContext;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                LayerOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAntiAlias;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.DrawGrids
struct UCreativeModeBlueprintLibrary_DrawGrids_Params
{
	struct FPaintContext                               InContext;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              CellSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellCountX;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellCountY;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosOffsetX;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosOffsetY;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              LineThickness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAntiAlias;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.DrawGridCell
struct UCreativeModeBlueprintLibrary_DrawGridCell_Params
{
	struct FPaintContext                               InContext;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              CellSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellIndexX;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellIndexY;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosOffsetX;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosOffsetY;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                LayerOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.DestroyInstance
struct UCreativeModeBlueprintLibrary_DestroyInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.CreativeInstanceDataContent
struct UCreativeModeBlueprintLibrary_CreativeInstanceDataContent_Params
{
	TArray<unsigned char>                              DataContent;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FCreativeInstanceDataContent                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.ClearGrassByMaskTexture
struct UCreativeModeBlueprintLibrary_ClearGrassByMaskTexture_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MaskTexture;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   WorldStart;                                               // (Parm, IsPlainOldData)
	struct FVector2D                                   WorldEnd;                                                 // (Parm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.BoxOverlapComponents
struct UCreativeModeBlueprintLibrary_BoxOverlapComponents_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxPos;                                                   // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, IsPlainOldData)
	TArray<int>                                        ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      CompClassFilter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimitiveComponent*>                 OutComps;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.BoxOverlapActors
struct UCreativeModeBlueprintLibrary_BoxOverlapActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxPos;                                                   // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, IsPlainOldData)
	TArray<int>                                        ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ActorClassFilter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.BeginDeferredActorSpawnWithName
struct UCreativeModeBlueprintLibrary_BeginDeferredActorSpawnWithName_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.AttachOutlineBox
struct UCreativeModeBlueprintLibrary_AttachOutlineBox_Params
{
	class AActor*                                      AttachedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OutlineBox;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.AttachInstanceOutlineBox
struct UCreativeModeBlueprintLibrary_AttachInstanceOutlineBox_Params
{
	struct FString                                     AttachedId;                                               // (Parm, ZeroConstructor)
	bool                                               bGridEnable;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OutlineBox;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.AttachGroupOutlineBox
struct UCreativeModeBlueprintLibrary_AttachGroupOutlineBox_Params
{
	class AActor*                                      GroupObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              AttachedActors;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OutlineBox;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.AttachGroupInstanceOutlineBox
struct UCreativeModeBlueprintLibrary_AttachGroupInstanceOutlineBox_Params
{
	struct FString                                     GroupID;                                                  // (Parm, ZeroConstructor)
	TArray<struct FString>                             ChildrenIds;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TMap<struct FString, struct FTransform>            ChildrenTransforms;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bGridEnable;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OutlineBox;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.AddOnScreenDebugMessage
struct UCreativeModeBlueprintLibrary_AddOnScreenDebugMessage_Params
{
	struct FString                                     Msg;                                                      // (ConstParm, Parm, ZeroConstructor)
};

// Function Creative.CreativeCustomParameterManager.RemoveCustomParameter
struct UCreativeCustomParameterManager_RemoveCustomParameter_Params
{
	uint32_t                                           ParameterID;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCustomParameterManager.ReceiveOnGameStateBeginPlay
struct UCreativeCustomParameterManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCustomParameterManager.OnGameStateBeginPlay
struct UCreativeCustomParameterManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCustomParameterManager.GetCustomParameterDataNodes
struct UCreativeCustomParameterManager_GetCustomParameterDataNodes_Params
{
	uint32_t                                           ParameterID;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCreativeCustomParameterDataNode>    OutCustomParameterDataNodes;                              // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeCustomParameterManager.Get
struct UCreativeCustomParameterManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeCustomParameterManager*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeCustomParameterManager.ChangeCustomParameter
struct UCreativeCustomParameterManager_ChangeCustomParameter_Params
{
	uint32_t                                           ParameterID;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int8_t                                             TeamID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              DataContent;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeCustomParameterManager.AddCustomParameter
struct UCreativeCustomParameterManager_AddCustomParameter_Params
{
	uint32_t                                           ParameterID;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int8_t                                             TeamID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              DataContent;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bPropagateToChildren;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCustomPrefabComponent.GetNodeSegmentContent
struct UCreativeCustomPrefabComponent_GetNodeSegmentContent_Params
{
	struct FCreativePrefabDataSegment                  Segment;                                                  // (Parm, OutParm)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeCustomPrefabComponent.AddInstanceDataContent
struct UCreativeCustomPrefabComponent_AddInstanceDataContent_Params
{
	struct FCreativeCustomPrefabDataSegment            Segment;                                                  // (Parm, OutParm)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeLiteComponent.OnReturnToPool
struct UCreativeModeLiteComponent_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeLiteComponent.GetObjectFromPool
struct UCreativeModeLiteComponent_GetObjectFromPool_Params
{
	int                                                PoolID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameModeBaseComponent.SetGameStateComponent
struct UCreativeModeGameModeBaseComponent_SetGameStateComponent_Params
{
	class UCreativeModeGameStateBaseComponent*         NewGameStateComponent;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameModeBaseComponent.ReceivePostInitializeComponents
struct UCreativeModeGameModeBaseComponent_ReceivePostInitializeComponents_Params
{
};

// Function Creative.CreativeModeGameModeBaseComponent.GetGameType
struct UCreativeModeGameModeBaseComponent_GetGameType_Params
{
	ECreativeModeGameType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameModeBaseComponent.GetGameMode
struct UCreativeModeGameModeBaseComponent_GetGameMode_Params
{
	class ACreativeModeGameMode*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameModeBaseComponent.FindPlayerStartOverride
struct UCreativeModeGameModeBaseComponent_FindPlayerStartOverride_Params
{
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     IncomingName;                                             // (Parm, ZeroConstructor)
	bool                                               bIsRevive;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.UnregisterLiteComponent
struct ACreativeModeEditorObject_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Destroy;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.ShowSelectedEffect
struct ACreativeModeEditorObject_ShowSelectedEffect_Params
{
	bool                                               ShowEff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // (Parm, IsPlainOldData)
	float                                              OutlineThickness;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.ShowOutlineEffect
struct ACreativeModeEditorObject_ShowOutlineEffect_Params
{
	bool                                               ShowEff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     IgnoreTag;                                                // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeEditorObject.SetPhotographyMode
struct ACreativeModeEditorObject_SetPhotographyMode_Params
{
	bool                                               bIsCapturing;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.SetLiteComponentTickEnable
struct ACreativeModeEditorObject_SetLiteComponentTickEnable_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.SetActorState
struct ACreativeModeEditorObject_SetActorState_Params
{
	ECreativeModeActorState                            NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.ReturnObjectToPool
struct ACreativeModeEditorObject_ReturnObjectToPool_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.ReturnObjectsToPool
struct ACreativeModeEditorObject_ReturnObjectsToPool_Params
{
	TArray<class UObject*>                             Objs;                                                     // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeEditorObject.RegisterLiteComponent
struct ACreativeModeEditorObject_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.ReceivePostBeginPlay
struct ACreativeModeEditorObject_ReceivePostBeginPlay_Params
{
};

// Function Creative.CreativeModeEditorObject.ReceiveIsDedicatedServer
struct ACreativeModeEditorObject_ReceiveIsDedicatedServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.ReceiveInitializeLiteComponent
struct ACreativeModeEditorObject_ReceiveInitializeLiteComponent_Params
{
};

// Function Creative.CreativeModeEditorObject.ReceiveInitCanEditFlag
struct ACreativeModeEditorObject_ReceiveInitCanEditFlag_Params
{
};

// Function Creative.CreativeModeEditorObject.ReceiveHasAuthority
struct ACreativeModeEditorObject_ReceiveHasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.OnRepActorStateOverride
struct ACreativeModeEditorObject_OnRepActorStateOverride_Params
{
	ECreativeModeActorState                            NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.OnRep_ActorState
struct ACreativeModeEditorObject_OnRep_ActorState_Params
{
	ECreativeModeActorState                            LastState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.InCollisionState
struct ACreativeModeEditorObject_InCollisionState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.GetObjectFromPool
struct ACreativeModeEditorObject_GetObjectFromPool_Params
{
	int                                                PoolID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.GetActorState
struct ACreativeModeEditorObject_GetActorState_Params
{
	ECreativeModeActorState                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.FindLiteComponentByClass
struct ACreativeModeEditorObject_FindLiteComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ULiteComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameStateBaseComponent.ReceivePostInitializeComponents
struct UCreativeModeGameStateBaseComponent_ReceivePostInitializeComponents_Params
{
};

// Function Creative.CreativeModeGameStateBaseComponent.GetPlayState
struct UCreativeModeGameStateBaseComponent_GetPlayState_Params
{
	ECreativeModePlayState                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameStateBaseComponent.GetGameType
struct UCreativeModeGameStateBaseComponent_GetGameType_Params
{
	ECreativeModeGameType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameStateBaseComponent.GetGameState
struct UCreativeModeGameStateBaseComponent_GetGameState_Params
{
	class ACreativeModeGameState*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.UnregisterLiteComponent
struct ACreativeModeGameMode_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.SetLiteComponentTickEnable
struct ACreativeModeGameMode_SetLiteComponentTickEnable_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.SetItemGenerate
struct ACreativeModeGameMode_SetItemGenerate_Params
{
	bool                                               bIsOpen;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.SetCurrentGameType
struct ACreativeModeGameMode_SetCurrentGameType_Params
{
	ECreativeModeGameType                              NewGameType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.ReInitItemGenerate
struct ACreativeModeGameMode_ReInitItemGenerate_Params
{
	struct FString                                     NewItemClassPath;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeGameMode.RegisterLiteComponent
struct ACreativeModeGameMode_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.ReceiveInitializeLiteComponent
struct ACreativeModeGameMode_ReceiveInitializeLiteComponent_Params
{
};

// Function Creative.CreativeModeGameMode.IsRestartPlayerUsePawnRotation
struct ACreativeModeGameMode_IsRestartPlayerUsePawnRotation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.GetCurrentModeComponent
struct ACreativeModeGameMode_GetCurrentModeComponent_Params
{
	class UCreativeModeGameModeBaseComponent*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamNum
struct ACreativeModeGameMode_GetCreativeModeRealTeamNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamIDs
struct ACreativeModeGameMode_GetCreativeModeRealTeamIDs_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeGameMode.FindLiteComponentByClass
struct ACreativeModeGameMode_FindLiteComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ULiteComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.CreativeModeFindPlayerStart
struct ACreativeModeGameMode_CreativeModeFindPlayerStart_Params
{
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     IncomingName;                                             // (Parm, ZeroConstructor)
	bool                                               bIsRevive;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameModeComponent.ReceiveCallPlayStateFunction
struct UCreativeModeGameModeComponent_ReceiveCallPlayStateFunction_Params
{
};

// Function Creative.CreativeModeGameObject.UnregisterLiteComponent
struct UCreativeModeGameObject_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Destroy;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameObject.RegisterLiteComponent
struct UCreativeModeGameObject_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameObject.ReceivePostBeginPlay
struct UCreativeModeGameObject_ReceivePostBeginPlay_Params
{
};

// Function Creative.CreativeModeGameObject.ReceiveIsDedicatedServer
struct UCreativeModeGameObject_ReceiveIsDedicatedServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameObject.ReceiveHasAuthority
struct UCreativeModeGameObject_ReceiveHasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameObject.ReceiveEndPlay
struct UCreativeModeGameObject_ReceiveEndPlay_Params
{
};

// Function Creative.CreativeModeGameObject.ReceiveBeginPlay
struct UCreativeModeGameObject_ReceiveBeginPlay_Params
{
};

// Function Creative.CreativeModeGameObject.GetObjectFromPool
struct UCreativeModeGameObject_GetObjectFromPool_Params
{
	int                                                PoolID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGameParameterManager.RemoveGameParameter
struct UCreativeGameParameterManager_RemoveGameParameter_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function Creative.CreativeGameParameterManager.ReceiveOnGameStateBeginPlay
struct UCreativeGameParameterManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeGameParameterManager.OnReceivePreGameParameterRemove
struct UCreativeGameParameterManager_OnReceivePreGameParameterRemove_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeGameParameterManager.OnReceivePostGameParameterChange
struct UCreativeGameParameterManager_OnReceivePostGameParameterChange_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeGameParameterManager.OnReceivePostGameParameterAdd
struct UCreativeGameParameterManager_OnReceivePostGameParameterAdd_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeGameParameterManager.OnGameStateBeginPlay
struct UCreativeGameParameterManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeGameParameterManager.GetGameParameterContent
struct UCreativeGameParameterManager_GetGameParameterContent_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (ConstParm, Parm, ZeroConstructor)
	TArray<unsigned char>                              OutContent;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGameParameterManager.Get
struct UCreativeGameParameterManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeGameParameterManager*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGameParameterManager.ChangeGameParameter
struct UCreativeGameParameterManager_ChangeGameParameter_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (ConstParm, Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeGameParameterManager.AddGameParameter
struct UCreativeGameParameterManager_AddGameParameter_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (ConstParm, Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeModeGameState.UnregisterLiteComponent
struct ACreativeModeGameState_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.SetLiteComponentTickEnable
struct ACreativeModeGameState_SetLiteComponentTickEnable_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.SetCurrentGameType
struct ACreativeModeGameState_SetCurrentGameType_Params
{
	ECreativeModeGameType                              NewGameType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.RPC_Replay_SetInstanceDataContent
struct ACreativeModeGameState_RPC_Replay_SetInstanceDataContent_Params
{
	uint32_t                                           InstanceID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCreativeInstanceDataContent                InstanceDataContent;                                      // (Parm)
};

// Function Creative.CreativeModeGameState.RegisterLiteComponent
struct ACreativeModeGameState_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.ReceiveInitializeLiteComponent
struct ACreativeModeGameState_ReceiveInitializeLiteComponent_Params
{
};

// Function Creative.CreativeModeGameState.OnViewportSizeChanged
struct ACreativeModeGameState_OnViewportSizeChanged_Params
{
	struct FVector2D                                   OldViewportSize;                                          // (Parm, IsPlainOldData)
	struct FVector2D                                   NewViewportSize;                                          // (Parm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.OnRep_InitializeGameType
struct ACreativeModeGameState_OnRep_InitializeGameType_Params
{
	ECreativeModeGameType                              LastInitializeGameType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.OnRep_CurrentStateComponent
struct ACreativeModeGameState_OnRep_CurrentStateComponent_Params
{
	class UCreativeModeGameStateBaseComponent*         LastComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.OnRep_CreativeModID
struct ACreativeModeGameState_OnRep_CreativeModID_Params
{
	int                                                LastCreativeModID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.OnClientRecordingStateChange
struct ACreativeModeGameState_OnClientRecordingStateChange_Params
{
	EClientRecordingType                               Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.IsCreativeEditor
struct ACreativeModeGameState_IsCreativeEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.InitCreativeModID
struct ACreativeModeGameState_InitCreativeModID_Params
{
	int                                                ModID;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetPlayState
struct ACreativeModeGameState_GetPlayState_Params
{
	ECreativeModePlayState                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetIsOfficialGame
struct ACreativeModeGameState_GetIsOfficialGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetIsEditorMode
struct ACreativeModeGameState_GetIsEditorMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetIsDemoGame
struct ACreativeModeGameState_GetIsDemoGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetIsCreative
struct ACreativeModeGameState_GetIsCreative_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetInitializeGameType
struct ACreativeModeGameState_GetInitializeGameType_Params
{
	ECreativeModeGameType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetDisableDistanceLevelsOutsideBox
struct ACreativeModeGameState_GetDisableDistanceLevelsOutsideBox_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                W;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                L;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeGameState.GetCurrentStateComponent
struct ACreativeModeGameState_GetCurrentStateComponent_Params
{
	class UCreativeModeGameStateBaseComponent*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetCurrentGameType
struct ACreativeModeGameState_GetCurrentGameType_Params
{
	ECreativeModeGameType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetCurCreativeModResList
struct ACreativeModeGameState_GetCurCreativeModResList_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeGameState.GetCurCreativeModMapID
struct ACreativeModeGameState_GetCurCreativeModMapID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeGameState.GetCreativeModID
struct ACreativeModeGameState_GetCreativeModID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.FindLiteComponentByClass
struct ACreativeModeGameState_FindLiteComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ULiteComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.ClearInstance
struct ACreativeModeGameState_ClearInstance_Params
{
};

// Function Creative.CreativeModeGameState.ClearAndReImportInstance
struct ACreativeModeGameState_ClearAndReImportInstance_Params
{
};

// Function Creative.CreativeModeGameStateComponent.SetPlayState
struct UCreativeModeGameStateComponent_SetPlayState_Params
{
	ECreativeModePlayState                             newPlayState;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameStateComponent.OnRep_RuntimePlayerBattleDataObject
struct UCreativeModeGameStateComponent_OnRep_RuntimePlayerBattleDataObject_Params
{
};

// Function Creative.CreativeModeGameStateComponent.OnRep_IntegralMechanismComponent
struct UCreativeModeGameStateComponent_OnRep_IntegralMechanismComponent_Params
{
};

// Function Creative.CreativeModeGameStateComponent.OnRep_CurPlayState
struct UCreativeModeGameStateComponent_OnRep_CurPlayState_Params
{
};

// Function Creative.CreativeModeGameStateComponent.GetPlayState
struct UCreativeModeGameStateComponent_GetPlayState_Params
{
	ECreativeModePlayState                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.UpdateBatchActorInstances
struct UCreativeGridLevelsManager_UpdateBatchActorInstances_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	int                                                AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaterialID;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceAll;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.UnLoadGridLevelsBatchActor
struct UCreativeGridLevelsManager_UnLoadGridLevelsBatchActor_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  CellIndex;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.StaticMeshObjectRelieveBatch
struct UCreativeGridLevelsManager_StaticMeshObjectRelieveBatch_Params
{
	struct FString                                     InstanceID;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeGridLevelsManager.StaticMeshObjectReBatch
struct UCreativeGridLevelsManager_StaticMeshObjectReBatch_Params
{
	struct FString                                     InstanceID;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeGridLevelsManager.RemoveObject
struct UCreativeGridLevelsManager_RemoveObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.ReceiveRegistInstanceValueListener
struct UCreativeGridLevelsManager_ReceiveRegistInstanceValueListener_Params
{
};

// Function Creative.CreativeGridLevelsManager.ReceiveDelayUpdateBatchActorInstances
struct UCreativeGridLevelsManager_ReceiveDelayUpdateBatchActorInstances_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	int                                                AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaterialID;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceAll;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MoveForwardTimeStamp;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.ReceiveClearAllData
struct UCreativeGridLevelsManager_ReceiveClearAllData_Params
{
};

// Function Creative.CreativeGridLevelsManager.ReceiveCheckObjectCanBatch
struct UCreativeGridLevelsManager_ReceiveCheckObjectCanBatch_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.ObjectAddToGridCellMap
struct UCreativeGridLevelsManager_ObjectAddToGridCellMap_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  Index;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FString                                     InstanceID;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function Creative.CreativeGridLevelsManager.LoadGridLevelsBatchActor
struct UCreativeGridLevelsManager_LoadGridLevelsBatchActor_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  CellIndex;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.IsCreativeEidtMode
struct UCreativeGridLevelsManager_IsCreativeEidtMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GridCellMapRemoveObject
struct UCreativeGridLevelsManager_GridCellMapRemoveObject_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  Index;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FString                                     InstanceID;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function Creative.CreativeGridLevelsManager.GetStaticMeshBatchActorPath
struct UCreativeGridLevelsManager_GetStaticMeshBatchActorPath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeGridLevelsManager.GetRelieveBatchDistance
struct UCreativeGridLevelsManager_GetRelieveBatchDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetReBatchDistance
struct UCreativeGridLevelsManager_GetReBatchDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetOnCellIndex
struct UCreativeGridLevelsManager_GetOnCellIndex_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FIntVector                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetObjectTransform
struct UCreativeGridLevelsManager_GetObjectTransform_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetObjectStreamingType
struct UCreativeGridLevelsManager_GetObjectStreamingType_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	ECreativeModeActorStreamingType                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetObjectRuntimeGrid
struct UCreativeGridLevelsManager_GetObjectRuntimeGrid_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeGridLevelsManager.GetObjectIsPrefab
struct UCreativeGridLevelsManager_GetObjectIsPrefab_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetObjectAssetID
struct UCreativeGridLevelsManager_GetObjectAssetID_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetGridLoadingRange
struct UCreativeGridLevelsManager_GetGridLoadingRange_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetGridList
struct UCreativeGridLevelsManager_GetGridList_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeGridLevelsManager.GetDefaultGridName
struct UCreativeGridLevelsManager_GetDefaultGridName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeGridLevelsManager.GetCellWidthHeight
struct UCreativeGridLevelsManager_GetCellWidthHeight_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetCellCenterLocation
struct UCreativeGridLevelsManager_GetCellCenterLocation_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  CellIndex;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetAxisIndex
struct UCreativeGridLevelsManager_GetAxisIndex_Params
{
	float                                              Pos;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlockLenght;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.Get
struct UCreativeGridLevelsManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeGridLevelsManager*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.CheckObjectBeRelieveBatch
struct UCreativeGridLevelsManager_CheckObjectBeRelieveBatch_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.CheckObjectBeBatch
struct UCreativeGridLevelsManager_CheckObjectBeBatch_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.CheckAndRemoveObjectForBatchData
struct UCreativeGridLevelsManager_CheckAndRemoveObjectForBatchData_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.CheckAndAddObjectToBatchData
struct UCreativeGridLevelsManager_CheckAndAddObjectToBatchData_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.ChangeObjectTransform
struct UCreativeGridLevelsManager_ChangeObjectTransform_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.ChangeObjectStreamingType
struct UCreativeGridLevelsManager_ChangeObjectStreamingType_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	ECreativeModeActorStreamingType                    NewStremaingType;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.ChangeObjectMaterialId
struct UCreativeGridLevelsManager_ChangeObjectMaterialId_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	int                                                MaterialID;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.ChangeObjectIsPrefab
struct UCreativeGridLevelsManager_ChangeObjectIsPrefab_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               bIsPrefab;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.AddObjectToGridLevels
struct UCreativeGridLevelsManager_AddObjectToGridLevels_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGroupManager.Get
struct UCreativeGroupManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeGroupManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeInGameManagerCenter.GetIsBeginPlayEnded
struct ACreativeModeInGameManagerCenter_GetIsBeginPlayEnded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.UpdateModBinInstanceCount
struct UCreativeInstanceManager_UpdateModBinInstanceCount_Params
{
};

// Function Creative.CreativeInstanceManager.SetModBinInstanceCount
struct UCreativeInstanceManager_SetModBinInstanceCount_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.SetInstanceValue
struct UCreativeInstanceManager_SetInstanceValue_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.SetInstanceDataContents
struct UCreativeInstanceManager_SetInstanceDataContents_Params
{
	uint16_t                                           Seq;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCreativeInstanceDataContent>        InstanceDataContents;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeInstanceManager.SendModBinaryDataToReplay
struct UCreativeInstanceManager_SendModBinaryDataToReplay_Params
{
	TArray<unsigned char>                              InBinaryData;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeInstanceManager.RemoveInstance
struct UCreativeInstanceManager_RemoveInstance_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Creative.CreativeInstanceManager.RemoveCppInstanceNode
struct UCreativeInstanceManager_RemoveCppInstanceNode_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.RecordAllInstanceDataByRPC
struct UCreativeInstanceManager_RecordAllInstanceDataByRPC_Params
{
};

// Function Creative.CreativeInstanceManager.ReceiveOnGameStateBeginPlay
struct UCreativeInstanceManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.OnRep_ModBinInstanceCount
struct UCreativeInstanceManager_OnRep_ModBinInstanceCount_Params
{
};

// Function Creative.CreativeInstanceManager.OnReceivePreInstanceRemove
struct UCreativeInstanceManager_OnReceivePreInstanceRemove_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Creative.CreativeInstanceManager.OnReceivePostInstanceChange
struct UCreativeInstanceManager_OnReceivePostInstanceChange_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeInstanceManager.OnReceivePostInstanceAdd
struct UCreativeInstanceManager_OnReceivePostInstanceAdd_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeInstanceManager.OnReceiveClearNotReplicatedData
struct UCreativeInstanceManager_OnReceiveClearNotReplicatedData_Params
{
};

// Function Creative.CreativeInstanceManager.OnReadyToAddInstance
struct UCreativeInstanceManager_OnReadyToAddInstance_Params
{
};

// Function Creative.CreativeInstanceManager.OnGameTypeChanged
struct UCreativeInstanceManager_OnGameTypeChanged_Params
{
	unsigned char                                      LastGameType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurrentGameType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.OnGameStateBeginPlay
struct UCreativeInstanceManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.IsInstanceReplicatTreeReplicateComplete
struct UCreativeInstanceManager_IsInstanceReplicatTreeReplicateComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.IsInstanceDataTreeReplicateComplete
struct UCreativeInstanceManager_IsInstanceDataTreeReplicateComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.IsAssetRuntimeObjectBox
struct UCreativeInstanceManager_IsAssetRuntimeObjectBox_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.HasReadyToAddInstance
struct UCreativeInstanceManager_HasReadyToAddInstance_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.HasAuthorityOrReplay
struct UCreativeInstanceManager_HasAuthorityOrReplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.GetModBinInstanceCount
struct UCreativeInstanceManager_GetModBinInstanceCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.GetModBinaryDataFromReplay
struct UCreativeInstanceManager_GetModBinaryDataFromReplay_Params
{
	TArray<unsigned char>                              InBinaryData;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.GetInstanceDataTreeCount
struct UCreativeInstanceManager_GetInstanceDataTreeCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.GetInstanceDataContents
struct UCreativeInstanceManager_GetInstanceDataContents_Params
{
	TArray<uint32_t>                                   InstanceIDs;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FCreativeInstanceRespondPullDataSegment> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeInstanceManager.GetInstanceContainerCount
struct UCreativeInstanceManager_GetInstanceContainerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.GetInstanceBox
struct UCreativeInstanceManager_GetInstanceBox_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FBox                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.GetCppInstanceNode
struct UCreativeInstanceManager_GetCppInstanceNode_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FCreativeInstanceNode                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeInstanceManager.GetAssetBox
struct UCreativeInstanceManager_GetAssetBox_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FBox                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.Get
struct UCreativeInstanceManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeInstanceManager*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.DestroyInstance
struct UCreativeInstanceManager_DestroyInstance_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeInstanceManager.Client_SetInstanceDataContent
struct UCreativeInstanceManager_Client_SetInstanceDataContent_Params
{
	uint32_t                                           InstanceID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCreativeInstanceDataContent                InstanceDataContent;                                      // (Parm)
};

// Function Creative.CreativeInstanceManager.ClearInstanceTree
struct UCreativeInstanceManager_ClearInstanceTree_Params
{
};

// Function Creative.CreativeInstanceManager.ChangeInstance
struct UCreativeInstanceManager_ChangeInstance_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeInstanceManager.ChangeCppInstanceNode
struct UCreativeInstanceManager_ChangeCppInstanceNode_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FCreativeInstanceNode                       Node;                                                     // (Parm, OutParm)
};

// Function Creative.CreativeInstanceManager.AddInstance
struct UCreativeInstanceManager_AddInstance_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeInstanceManager.AddCppInstanceNode
struct UCreativeInstanceManager_AddCppInstanceNode_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FCreativeInstanceNode                       Node;                                                     // (Parm, OutParm)
};

// Function Creative.CreativeInstanceManager.AddBuildingFlag
struct UCreativeInstanceManager_AddBuildingFlag_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Creative.CreativeInstanceStaticMeshComponent.UnInitInstancedStaticMeshComponntByGroupBuild
struct UCreativeInstanceStaticMeshComponent_UnInitInstancedStaticMeshComponntByGroupBuild_Params
{
};

// Function Creative.CreativeInstanceStaticMeshComponent.OnStaticMeshAsyncLoaded
struct UCreativeInstanceStaticMeshComponent_OnStaticMeshAsyncLoaded_Params
{
	struct FSoftObjectPath                             SoftObjectPath;                                           // (Parm)
};

// Function Creative.CreativeInstanceStaticMeshComponent.OnReturnToPool
struct UCreativeInstanceStaticMeshComponent_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceStaticMeshComponent.OnPickFromPool
struct UCreativeInstanceStaticMeshComponent_OnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativeInstanceStaticMeshComponent.InitInstancedStaticMeshComponntByGroupBuild
struct UCreativeInstanceStaticMeshComponent_InitInstancedStaticMeshComponntByGroupBuild_Params
{
	class USceneComponent*                             Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FTransform>                          InstanceTransforms;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     MeshPath;                                                 // (Parm, ZeroConstructor)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeIntegralMechanismComponent.SetPlayerIntegral
struct UCreativeModeIntegralMechanismComponent_SetPlayerIntegral_Params
{
	struct FString                                     UID;                                                      // (Parm, ZeroConstructor)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curIntegral;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curStageIntegral;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                integralAddSeq;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeIntegralMechanismComponent.OnRepPlayerIntegralsOverride
struct UCreativeModeIntegralMechanismComponent_OnRepPlayerIntegralsOverride_Params
{
};

// Function Creative.CreativeModeIntegralMechanismComponent.OnRep_PlayerIntegrals
struct UCreativeModeIntegralMechanismComponent_OnRep_PlayerIntegrals_Params
{
};

// Function Creative.CreativeModeIntegralMechanismComponent.ClearPlayerIntegrals
struct UCreativeModeIntegralMechanismComponent_ClearPlayerIntegrals_Params
{
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.SetPlayerIntegral
struct UCreativeModeIntegralMechanismLiteComponent_SetPlayerIntegral_Params
{
	struct FString                                     UID;                                                      // (Parm, ZeroConstructor)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curIntegral;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curStageIntegral;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                integralAddSeq;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.PlayerIntegralContains
struct UCreativeModeIntegralMechanismLiteComponent_PlayerIntegralContains_Params
{
	struct FString                                     UID;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRepPlayerIntegralsOverride
struct UCreativeModeIntegralMechanismLiteComponent_OnRepPlayerIntegralsOverride_Params
{
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_TestIndex
struct UCreativeModeIntegralMechanismLiteComponent_OnRep_TestIndex_Params
{
	int                                                LastIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_PlayerIntegrals
struct UCreativeModeIntegralMechanismLiteComponent_OnRep_PlayerIntegrals_Params
{
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.ClearPlayerIntegrals
struct UCreativeModeIntegralMechanismLiteComponent_ClearPlayerIntegrals_Params
{
};

// Function Creative.CreativeItemGeneratorComponent.SetWeightMul
struct UCreativeItemGeneratorComponent_SetWeightMul_Params
{
	TMap<struct FString, int>                          Weight;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeItemGeneratorComponent.SetAddSpotPercentMul
struct UCreativeItemGeneratorComponent_SetAddSpotPercentMul_Params
{
	float                                              percent;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeItemGeneratorComponent.ClearWeightMul
struct UCreativeItemGeneratorComponent_ClearWeightMul_Params
{
};

// Function Creative.CreativeLoadManager.UnloadSomeObjects
struct UCreativeLoadManager_UnloadSomeObjects_Params
{
	TArray<struct FString>                             InstanceIDs;                                              // (Parm, ZeroConstructor)
};

// Function Creative.CreativeLoadManager.UnloadObject
struct UCreativeLoadManager_UnloadObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeLoadManager.LoadSomeObjects
struct UCreativeLoadManager_LoadSomeObjects_Params
{
	TArray<struct FString>                             InstanceIDs;                                              // (Parm, ZeroConstructor)
	bool                                               bLoadImmediately;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeLoadManager.LoadObject
struct UCreativeLoadManager_LoadObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeLoadManager.Get
struct UCreativeLoadManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeLoadManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLoadManager.AddObject
struct UCreativeLoadManager_AddObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FCreativeInstanceNode                       InstanceNode;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Creative.CreativeModeModDataCheckManager.ReceiveOnPreAddInstance
struct UCreativeModeModDataCheckManager_ReceiveOnPreAddInstance_Params
{
};

// Function Creative.CreativeModeModDataCheckManager.ReceiveOnPostAddInstance
struct UCreativeModeModDataCheckManager_ReceiveOnPostAddInstance_Params
{
};

// Function Creative.CreativeModeModDataCheckManager.OnPreAddInstance
struct UCreativeModeModDataCheckManager_OnPreAddInstance_Params
{
};

// Function Creative.CreativeModeModDataCheckManager.OnPostAddInstance
struct UCreativeModeModDataCheckManager_OnPostAddInstance_Params
{
};

// Function Creative.CreativeModeModDataCheckManager.Get
struct UCreativeModeModDataCheckManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeModDataCheckManager*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGlobalManagerCenter.OnCreativeDelegateCreated
struct UCreativeModeGlobalManagerCenter_OnCreativeDelegateCreated_Params
{
};

// Function Creative.CreativeModeIntermediateManager.ServerTravel
struct UCreativeModeIntermediateManager_ServerTravel_Params
{
	bool                                               bIsEditor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InUrl;                                                    // (Parm, ZeroConstructor)
	bool                                               bAbsolute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSkipGameNotify;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeIntermediateManager.ServerChangeLevel
struct UCreativeModeIntermediateManager_ServerChangeLevel_Params
{
	bool                                               bIsEditor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeIntermediateManager.ReceiveOnPreLoadMap
struct UCreativeModeIntermediateManager_ReceiveOnPreLoadMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeIntermediateManager.ReceiveOnPostSetLuaEventBridgeInstance
struct UCreativeModeIntermediateManager_ReceiveOnPostSetLuaEventBridgeInstance_Params
{
};

// Function Creative.CreativeModeIntermediateManager.ReceiveOnPostLoadMapWithWorld
struct UCreativeModeIntermediateManager_ReceiveOnPostLoadMapWithWorld_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeIntermediateManager.OnPreLoadMap
struct UCreativeModeIntermediateManager_OnPreLoadMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeIntermediateManager.OnPostSetLuaEventBridgeInstance
struct UCreativeModeIntermediateManager_OnPostSetLuaEventBridgeInstance_Params
{
};

// Function Creative.CreativeModeIntermediateManager.OnPostLoadMapWithWorld
struct UCreativeModeIntermediateManager_OnPostLoadMapWithWorld_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeIntermediateManager.OnLoadModBinaryData
struct UCreativeModeIntermediateManager_OnLoadModBinaryData_Params
{
};

// Function Creative.CreativeModeIntermediateManager.IsCreativeModeSwitchToGame
struct UCreativeModeIntermediateManager_IsCreativeModeSwitchToGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeIntermediateManager.Get
struct UCreativeModeIntermediateManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeIntermediateManager*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeIntermediateManager.ClientChangeLevel
struct UCreativeModeIntermediateManager_ClientChangeLevel_Params
{
	bool                                               bIsEditor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeLuaSpectatorPawn.UnRegistLuaTick
struct ACreativeModeLuaSpectatorPawn_UnRegistLuaTick_Params
{
};

// Function Creative.CreativeModeLuaSpectatorPawn.SetAbilitySystemComponentAvatar
struct ACreativeModeLuaSpectatorPawn_SetAbilitySystemComponentAvatar_Params
{
};

// Function Creative.CreativeModeLuaSpectatorPawn.RegistLuaTick
struct ACreativeModeLuaSpectatorPawn_RegistLuaTick_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeLuaSpectatorPawn.MoveRight
struct ACreativeModeLuaSpectatorPawn_MoveRight_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeLuaSpectatorPawn.MoveForward
struct ACreativeModeLuaSpectatorPawn_MoveForward_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeLuaSpectatorPawn.GetActiveSpringArm
struct ACreativeModeLuaSpectatorPawn_GetActiveSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativeModeStaticMeshBatchActor.SetISMStaticMeshAndMaterials
struct ACreativeModeStaticMeshBatchActor_SetISMStaticMeshAndMaterials_Params
{
	class UInstancedStaticMeshComponent*               InstancedStaticMeshComponent;                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                AssetId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StaticMeshIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaterialID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeStaticMeshBatchActor.GetBatchStaticMeshInfo
struct ACreativeModeStaticMeshBatchActor_GetBatchStaticMeshInfo_Params
{
	class UInstancedStaticMeshComponent*               InstancedStaticMeshComponent;                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCreativeBatchStaticMeshInfo                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeModeNavigationManager.SetDynamicModeEnable
struct UCreativeModeNavigationManager_SetDynamicModeEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.SetDebugOutputEnable
struct UCreativeModeNavigationManager_SetDebugOutputEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.SetConcurrentTaskNum
struct UCreativeModeNavigationManager_SetConcurrentTaskNum_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.SerializeDynamicTileToByteArr
struct UCreativeModeNavigationManager_SerializeDynamicTileToByteArr_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeNavigationManager.RevokePendingBuildingTasks
struct UCreativeModeNavigationManager_RevokePendingBuildingTasks_Params
{
};

// Function Creative.CreativeModeNavigationManager.ReceiveOnUnInit
struct UCreativeModeNavigationManager_ReceiveOnUnInit_Params
{
};

// Function Creative.CreativeModeNavigationManager.ReceiveOnInit
struct UCreativeModeNavigationManager_ReceiveOnInit_Params
{
};

// Function Creative.CreativeModeNavigationManager.RebuildDynamicTiles
struct UCreativeModeNavigationManager_RebuildDynamicTiles_Params
{
	TArray<class AActor*>                              Actors;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeNavigationManager.IsBuildingInProgress
struct UCreativeModeNavigationManager_IsBuildingInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.ImportDynamicTile
struct UCreativeModeNavigationManager_ImportDynamicTile_Params
{
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeNavigationManager.GetDynamicTilesCount
struct UCreativeModeNavigationManager_GetDynamicTilesCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.GetDynamicTileMemCost
struct UCreativeModeNavigationManager_GetDynamicTileMemCost_Params
{
	int                                                Total;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OctTree;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TileCache;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                DynamicTile;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                DynamicTileCount;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.GetAllAssociateActors
struct UCreativeModeNavigationManager_GetAllAssociateActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeNavigationManager.Get
struct UCreativeModeNavigationManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeNavigationManager*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.ExportDynamicTile
struct UCreativeModeNavigationManager_ExportDynamicTile_Params
{
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeNavigationManager.DeserializeDynamicTileFromByteArr
struct UCreativeModeNavigationManager_DeserializeDynamicTileFromByteArr_Params
{
	TArray<unsigned char>                              ByteArr;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeNavigationManager.ClearNavCollision
struct UCreativeModeNavigationManager_ClearNavCollision_Params
{
};

// Function Creative.CreativeModeNavigationManager.ClearDynamicOctreeData
struct UCreativeModeNavigationManager_ClearDynamicOctreeData_Params
{
};

// Function Creative.CreativeModeNavigationManager.ClearDynamicNavMesh
struct UCreativeModeNavigationManager_ClearDynamicNavMesh_Params
{
};

// Function Creative.CreativeModeNavigationManager.ClearAssociateActors
struct UCreativeModeNavigationManager_ClearAssociateActors_Params
{
};

// Function Creative.CreativeModeNavigationManager.CalSamplePointsInBoxLegacy
struct UCreativeModeNavigationManager_CalSamplePointsInBoxLegacy_Params
{
	struct FVector                                     BoxMin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     BoxMax;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              StepSize;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxPoints;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeNavigationManager.CalSamplePointsInBox
struct UCreativeModeNavigationManager_CalSamplePointsInBox_Params
{
	struct FVector                                     BoxMin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     BoxMax;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              StepSize;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxPoints;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeNavigationManager.CalSamplePoints
struct UCreativeModeNavigationManager_CalSamplePoints_Params
{
	struct FVector                                     StartPos;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              StepSize;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxPoints;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeNavigationManager.AddNavAffectedObjects
struct UCreativeModeNavigationManager_AddNavAffectedObjects_Params
{
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeModeNavigationManager.AddNavAffectedObject
struct UCreativeModeNavigationManager_AddNavAffectedObject_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeObjectInterface.ReceiveOnPostSetInstanceId
struct UCreativeModeObjectInterface_ReceiveOnPostSetInstanceId_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeObjectManager.SpawnObjectForStreaming
struct UCreativeObjectManager_SpawnObjectForStreaming_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeObjectManager.SpawnObject
struct UCreativeObjectManager_SpawnObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.SetObjectTempStreamingType
struct UCreativeObjectManager_SetObjectTempStreamingType_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	ECreativeModeActorStreamingType                    TempStreamingType;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.ResetObjectStreamingType
struct UCreativeObjectManager_ResetObjectStreamingType_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.RemoveSpawnObjectInfoFormQueue
struct UCreativeObjectManager_RemoveSpawnObjectInfoFormQueue_Params
{
	struct FString                                     InstanceID;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.RemovePhysicsObject
struct UCreativeObjectManager_RemovePhysicsObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeObjectManager.RemoveObject
struct UCreativeObjectManager_RemoveObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.RemoveDestroyObjectInfoFormQueue
struct UCreativeObjectManager_RemoveDestroyObjectInfoFormQueue_Params
{
	struct FString                                     InstanceID;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.ReceiveUnregisterObject
struct UCreativeObjectManager_ReceiveUnregisterObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UObject*                                     NewObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.ReceiveRegisterObject
struct UCreativeObjectManager_ReceiveRegisterObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UObject*                                     NewObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.ReceiveClearAllObjects
struct UCreativeObjectManager_ReceiveClearAllObjects_Params
{
};

// Function Creative.CreativeObjectManager.OnObjectSpawnComplete
struct UCreativeObjectManager_OnObjectSpawnComplete_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Creative.CreativeObjectManager.GetObjectTransform
struct UCreativeObjectManager_GetObjectTransform_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.GetObjectNum
struct UCreativeObjectManager_GetObjectNum_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.GetObjectAssetPath
struct UCreativeObjectManager_GetObjectAssetPath_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeObjectManager.GetObjectAssetID
struct UCreativeObjectManager_GetObjectAssetID_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.GetObject
struct UCreativeObjectManager_GetObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.GetActiveObjectNum
struct UCreativeObjectManager_GetActiveObjectNum_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.Get
struct UCreativeObjectManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeObjectManager*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.DestroyObjectForStreaming
struct UCreativeObjectManager_DestroyObjectForStreaming_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeObjectManager.DestroyObject
struct UCreativeObjectManager_DestroyObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.CheckObjectBeBatch
struct UCreativeObjectManager_CheckObjectBeBatch_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.ChangeObjectTransform
struct UCreativeObjectManager_ChangeObjectTransform_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.AddSpawnObjectToQueue
struct UCreativeObjectManager_AddSpawnObjectToQueue_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.AddPhysicsObject
struct UCreativeObjectManager_AddPhysicsObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeObjectManager.AddObject
struct UCreativeObjectManager_AddObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FCreativeModeStreamingParameters            StreamingParameters;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.AddDestroyObjectToQueue
struct UCreativeObjectManager_AddDestroyObjectToQueue_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeObjectStateManager.ReceiveOnGameStateBeginPlay
struct UCreativeObjectStateManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeObjectStateManager.OnGameStateBeginPlay
struct UCreativeObjectStateManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeObjectStateManager.Get
struct UCreativeObjectStateManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeObjectStateManager*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeOfflineBuildManager.ReceiveOnPostSetLuaEventBridgeInstance
struct UCreativeOfflineBuildManager_ReceiveOnPostSetLuaEventBridgeInstance_Params
{
};

// Function Creative.CreativeOfflineBuildManager.OnPostSetLuaEventBridgeInstance
struct UCreativeOfflineBuildManager_OnPostSetLuaEventBridgeInstance_Params
{
};

// Function Creative.CreativeOfflineBuildManager.Get
struct UCreativeOfflineBuildManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeOfflineBuildManager*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponentMaterial
struct ACreativePhysicsBatchActor_UpdatePhysicsComponentMaterial_Params
{
	struct FString                                     ComponentID;                                              // (Parm, OutParm, ZeroConstructor)
	struct FString                                     MaterialPath;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponent
struct ACreativePhysicsBatchActor_UpdatePhysicsComponent_Params
{
	struct FString                                     ComponentID;                                              // (Parm, OutParm, ZeroConstructor)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.UnRegisterPhysicsComponent
struct ACreativePhysicsBatchActor_UnRegisterPhysicsComponent_Params
{
	struct FString                                     ComponentID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.SetPhysicsComponentEnabled
struct ACreativePhysicsBatchActor_SetPhysicsComponentEnabled_Params
{
	struct FString                                     ComponentID;                                              // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.RegisterPhysicsComponentByMesh
struct ACreativePhysicsBatchActor_RegisterPhysicsComponentByMesh_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     ComponentID;                                              // (Parm, ZeroConstructor)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	struct FString                                     MeshPath;                                                 // (Parm, ZeroConstructor)
	struct FName                                       CollisionProfileName;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.IsLoadFinish
struct ACreativePhysicsBatchActor_IsLoadFinish_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.GetRegisterNum
struct ACreativePhysicsBatchActor_GetRegisterNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.GetPhysicsComponent
struct ACreativePhysicsBatchActor_GetPhysicsComponent_Params
{
	struct FString                                     ComponentID;                                              // (Parm, OutParm, ZeroConstructor)
	class UCreativePhysicsComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.ClearAllPhysicsComponent
struct ACreativePhysicsBatchActor_ClearAllPhysicsComponent_Params
{
};

// Function Creative.CreativePhysicsComponent.SetIsReplicatedOnly
struct UCreativePhysicsComponent_SetIsReplicatedOnly_Params
{
	bool                                               ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.SetStreamingEnable
struct UCreativePhysicsManager_SetStreamingEnable_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.SetPhysicsActorVisible
struct UCreativePhysicsManager_SetPhysicsActorVisible_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.RemovePhysicsObject
struct UCreativePhysicsManager_RemovePhysicsObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativePhysicsManager.OnPhysicsBatchActorLoadFinish
struct UCreativePhysicsManager_OnPhysicsBatchActorLoadFinish_Params
{
};

// Function Creative.CreativePhysicsManager.IsPhysicsActorVisible
struct UCreativePhysicsManager_IsPhysicsActorVisible_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.GetPhysicsBatchActorByInstanceID
struct UCreativePhysicsManager_GetPhysicsBatchActorByInstanceID_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class ACreativePhysicsBatchActor*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.GetPhysicsBatchActor
struct UCreativePhysicsManager_GetPhysicsBatchActor_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ACreativePhysicsBatchActor*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.GetLevelLandscapeSection
struct UCreativePhysicsManager_GetLevelLandscapeSection_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.GetLandscapeIndexByVector
struct UCreativePhysicsManager_GetLandscapeIndexByVector_Params
{
	int                                                LandscapeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LandscapeY;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.GetLandscapeIndex
struct UCreativePhysicsManager_GetLandscapeIndex_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.Get
struct UCreativePhysicsManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativePhysicsManager*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.ClearAllPhysicsBatchActor
struct UCreativePhysicsManager_ClearAllPhysicsBatchActor_Params
{
};

// Function Creative.CreativePhysicsManager.AddPhysicsObject
struct UCreativePhysicsManager_AddPhysicsObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModePlayerState.ServerAddInstance
struct ACreativeModePlayerState_ServerAddInstance_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativePoolInterface.SetRecycleTime
struct UCreativePoolInterface_SetRecycleTime_Params
{
	float                                              RecycleTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolInterface.SetIsRecycled
struct UCreativePoolInterface_SetIsRecycled_Params
{
	bool                                               IsRecycled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolInterface.ReceiveOnReturnToPool
struct UCreativePoolInterface_ReceiveOnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolInterface.ReceiveOnPickFromPool
struct UCreativePoolInterface_ReceiveOnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativePoolInterface.OnReturnToPool
struct UCreativePoolInterface_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolInterface.OnPickFromPool
struct UCreativePoolInterface_OnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativePoolInterface.GetRecycleTime
struct UCreativePoolInterface_GetRecycleTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolInterface.CheckIsRecycled
struct UCreativePoolInterface_CheckIsRecycled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolManager.SetPoolManagerEnable
struct UCreativePoolManager_SetPoolManagerEnable_Params
{
	bool                                               bPoolManagerEnable;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolManager.ReturnObject
struct UCreativePoolManager_ReturnObject_Params
{
	int                                                PoolID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolManager.OnReceiveDestroyHandle
struct UCreativePoolManager_OnReceiveDestroyHandle_Params
{
	int                                                ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     InObj;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolManager.OnReceiveCreateHandle
struct UCreativePoolManager_OnReceiveCreateHandle_Params
{
	int                                                ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolManager.InitPool
struct UCreativePoolManager_InitPool_Params
{
	int                                                PoolID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCreativeObjectPoolClassConfig              PoolConfig;                                               // (Parm, OutParm)
	bool                                               bPoolEnable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolManager.GetObject
struct UCreativePoolManager_GetObject_Params
{
	int                                                PoolID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolManager.Get
struct UCreativePoolManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativePoolManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.SetTeamGameOutcomeCondition
struct ACreativeRuntimePlayerBattleDataObject_SetTeamGameOutcomeCondition_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimeTeamGameOutcomeConditionInfo        TeamGameOutcomeCondition;                                 // (Parm, OutParm)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.SetPlayerBattleData
struct ACreativeRuntimePlayerBattleDataObject_SetPlayerBattleData_Params
{
	uint64_t                                           UID;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimePlayerBattleDataInfo                PlayerBattleData;                                         // (Parm, OutParm)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.ResetCurRoundPlayerBattleDataList
struct ACreativeRuntimePlayerBattleDataObject_ResetCurRoundPlayerBattleDataList_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepTeamGameOutcomeConditionInfo
struct ACreativeRuntimePlayerBattleDataObject_OnRepTeamGameOutcomeConditionInfo_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepCurRoundPlayerBattleDataInfo
struct ACreativeRuntimePlayerBattleDataObject_OnRepCurRoundPlayerBattleDataInfo_Params
{
	uint64_t                                           PlayerUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChangeTeamID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetTeamGameOutcomeCondition
struct ACreativeRuntimePlayerBattleDataObject_GetTeamGameOutcomeCondition_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimeTeamGameOutcomeConditionInfo        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundPlayerBattleData
struct ACreativeRuntimePlayerBattleDataObject_GetCurRoundPlayerBattleData_Params
{
	uint64_t                                           PlayerUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimePlayerBattleDataInfo                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundAllPlayerBattleData
struct ACreativeRuntimePlayerBattleDataObject_GetCurRoundAllPlayerBattleData_Params
{
	TArray<struct FRuntimePlayerBattleDataInfo>        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundPlayerBattleData
struct ACreativeRuntimePlayerBattleDataObject_GetCacheRoundPlayerBattleData_Params
{
	int                                                RoundIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           PlayerUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimePlayerBattleDataInfo                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundBattleData
struct ACreativeRuntimePlayerBattleDataObject_GetCacheRoundBattleData_Params
{
	int                                                RoundIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimeCacheRoundBattleDataInfo            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetAllRoundPlayerBattleData
struct ACreativeRuntimePlayerBattleDataObject_GetAllRoundPlayerBattleData_Params
{
	uint64_t                                           PlayerUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimePlayerBattleDataInfo                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.CacheCurRoundBattleData
struct ACreativeRuntimePlayerBattleDataObject_CacheCurRoundBattleData_Params
{
	int                                                RoundIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSceneQueryManager.RemoveReplicateObject
struct UCreativeSceneQueryManager_RemoveReplicateObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSceneQueryManager.RemoveReplicateData
struct UCreativeSceneQueryManager_RemoveReplicateData_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeSceneQueryManager.OnReceivePreReplicateDataRemove
struct UCreativeSceneQueryManager_OnReceivePreReplicateDataRemove_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataChange
struct UCreativeSceneQueryManager_OnReceivePostReplicateDataChange_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<class UObject*>                             Objects;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataAdd
struct UCreativeSceneQueryManager_OnReceivePostReplicateDataAdd_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<class UObject*>                             Objects;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeSceneQueryManager.GetReplicatedObjects
struct UCreativeSceneQueryManager_GetReplicatedObjects_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeSceneQueryManager.Get
struct UCreativeSceneQueryManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeSceneQueryManager*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeSceneQueryManager.AddReplicateObjectPostDeferred
struct UCreativeSceneQueryManager_AddReplicateObjectPostDeferred_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	class UObject*                                     ReplicatedObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSceneQueryManager.AddReplicateObjectDeferred
struct UCreativeSceneQueryManager_AddReplicateObjectDeferred_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UClass*                                      ObjectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeSceneQueryManager.AddReplicateObject
struct UCreativeSceneQueryManager_AddReplicateObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UClass*                                      ObjectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeSoftComponentManager.Get
struct UCreativeModeSoftComponentManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeSoftComponentManager*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.SoftStaticMeshComponent.SetSoftStaticMeshAsync
struct USoftStaticMeshComponent_SetSoftStaticMeshAsync_Params
{
	struct FString                                     NewMeshPath;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.SoftStaticMeshComponent.SetSoftStaticMesh
struct USoftStaticMeshComponent_SetSoftStaticMesh_Params
{
	class UStaticMesh*                                 NewMesh;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetStaticMesh;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.SoftStaticMeshComponent.OnClientAsyncLoaded
struct USoftStaticMeshComponent_OnClientAsyncLoaded_Params
{
	struct FSoftObjectPath                             SoftObjectPath;                                           // (Parm)
};

// Function Creative.SoftStaticMeshComponent.LoadSoftStaticMeshImmediately
struct USoftStaticMeshComponent_LoadSoftStaticMeshImmediately_Params
{
};

// Function Creative.CreativeSoftStaticMeshComponent.OnReturnToPool
struct UCreativeSoftStaticMeshComponent_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSoftStaticMeshComponent.OnPickFromPool
struct UCreativeSoftStaticMeshComponent_OnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativeSpawnManager.OnUnitSpawned
struct UCreativeSpawnManager_OnUnitSpawned_Params
{
	class AActor*                                      NewUnit;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	ESpecType                                          SpecType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSpawnManager.OnOwnedFakePlayerDead
struct UCreativeSpawnManager_OnOwnedFakePlayerDead_Params
{
	class ASTExtraBaseCharacter*                       DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  KillingHitInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     KillingHitImpulseDir;                                     // (Parm, IsPlainOldData)
	class UClass*                                      KillingHitDamageType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSpawnManager.OnOwnedAIPlayerDead
struct UCreativeSpawnManager_OnOwnedAIPlayerDead_Params
{
	class ASTExtraBaseCharacter*                       DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  KillingHitInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     KillingHitImpulseDir;                                     // (Parm, IsPlainOldData)
	class UClass*                                      KillingHitDamageType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSpawnManager.OnMonsterUnitDead
struct UCreativeSpawnManager_OnMonsterUnitDead_Params
{
	class ASTExtraSimpleCharacter*                     DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  KillingHitInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     KillingHitImpulseDir;                                     // (Parm, IsPlainOldData)
	class UClass*                                      KillingHitDamageType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSpawnManager.OnDeadWithCategory
struct UCreativeSpawnManager_OnDeadWithCategory_Params
{
	ESpecType                                          Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSpawnManager.Get
struct UCreativeSpawnManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeSpawnManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStaticMeshComponent.OnReturnToPool
struct UCreativeStaticMeshComponent_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeStaticMeshComponent.OnPickFromPool
struct UCreativeStaticMeshComponent_OnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativeStreamingManager.StreamingManagerEnable
struct UCreativeStreamingManager_StreamingManagerEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStreamingManager.RemoveStreamingObject
struct UCreativeStreamingManager_RemoveStreamingObject_Params
{
	struct FString                                     InstanceID;                                               // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStreamingManager.GetOnGridCellIndex
struct UCreativeStreamingManager_GetOnGridCellIndex_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FIntVector                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStreamingManager.GetGridLoadingRange
struct UCreativeStreamingManager_GetGridLoadingRange_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStreamingManager.GetGridList
struct UCreativeStreamingManager_GetGridList_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeStreamingManager.GetGridCellWidthHeight
struct UCreativeStreamingManager_GetGridCellWidthHeight_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStreamingManager.Get
struct UCreativeStreamingManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeStreamingManager*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStreamingManager.ChangeStreamingObjectStreamingType
struct UCreativeStreamingManager_ChangeStreamingObjectStreamingType_Params
{
	struct FString                                     InstanceID;                                               // (ConstParm, Parm, ZeroConstructor)
	ECreativeModeActorStreamingType                    NewStremaingType;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ECreativeModeActorStreamingType                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStreamingManager.AddStreamingObject
struct UCreativeStreamingManager_AddStreamingObject_Params
{
	struct FString                                     InstanceID;                                               // (ConstParm, Parm, ZeroConstructor)
	struct FCreativeModeStreamingParameters            StreamingParameters;                                      // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeWebSocketManager.SendMessage
struct UCreativeWebSocketManager_SendMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Creative.CreativeWebSocketManager.ReceiveOnPostSetLuaEventBridgeInstance
struct UCreativeWebSocketManager_ReceiveOnPostSetLuaEventBridgeInstance_Params
{
};

// Function Creative.CreativeWebSocketManager.OnTickTimer
struct UCreativeWebSocketManager_OnTickTimer_Params
{
};

// Function Creative.CreativeWebSocketManager.OnReceiveConnected
struct UCreativeWebSocketManager_OnReceiveConnected_Params
{
};

// Function Creative.CreativeWebSocketManager.OnPostSetLuaEventBridgeInstance
struct UCreativeWebSocketManager_OnPostSetLuaEventBridgeInstance_Params
{
};

// Function Creative.CreativeWebSocketManager.OnMessageSent
struct UCreativeWebSocketManager_OnMessageSent_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeWebSocketManager.OnMessageReceived
struct UCreativeWebSocketManager_OnMessageReceived_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeWebSocketManager.Get
struct UCreativeWebSocketManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeWebSocketManager*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeWebSocketManager.ConnectServer
struct UCreativeWebSocketManager_ConnectServer_Params
{
	struct FString                                     ServerURL;                                                // (Parm, ZeroConstructor)
	struct FString                                     ServerProtocol;                                           // (Parm, ZeroConstructor)
};

// Function Creative.CreativeWorldSubSystem.GetPhysicsBatchActor
struct UCreativeWorldSubSystem_GetPhysicsBatchActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeWorldSubSystem.GetManagerCenter
struct UCreativeWorldSubSystem_GetManagerCenter_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.DancerDeviceActor.OnRep_SyncPlayerCharacter
struct ADancerDeviceActor_OnRep_SyncPlayerCharacter_Params
{
};

// Function Creative.GameModeStateFighting_CreativeMode.PlayersInfoRecord
struct UGameModeStateFighting_CreativeMode_PlayersInfoRecord_Params
{
};

// Function Creative.ShowAllPlayerManagerActor.TriggerRefresh
struct AShowAllPlayerManagerActor_TriggerRefresh_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.ShowAllPlayerManagerActor.RefreshTeamPoseData
struct AShowAllPlayerManagerActor_RefreshTeamPoseData_Params
{
};

// Function Creative.ShowAllPlayerManagerActor.RefreshMapMarkData
struct AShowAllPlayerManagerActor_RefreshMapMarkData_Params
{
};

// Function Creative.ShowAllPlayerManagerActor.OnTeamPosDataChange
struct AShowAllPlayerManagerActor_OnTeamPosDataChange_Params
{
};

// Function Creative.ShowAllPlayerManagerActor.OnRep_TeamPosData
struct AShowAllPlayerManagerActor_OnRep_TeamPosData_Params
{
};

// Function Creative.ShowAllPlayerManagerActor.IsCharacterValidForShow
struct AShowAllPlayerManagerActor_IsCharacterValidForShow_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.ShowAllPlayerManagerActor.FlushBatchData
struct AShowAllPlayerManagerActor_FlushBatchData_Params
{
	int                                                BatchSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurExtraSize;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.ShowAllPlayerManagerActor.EnableRefresh
struct AShowAllPlayerManagerActor_EnableRefresh_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.ShowAllPlayerManagerActor.ClearAllMark
struct AShowAllPlayerManagerActor_ClearAllMark_Params
{
};

}

