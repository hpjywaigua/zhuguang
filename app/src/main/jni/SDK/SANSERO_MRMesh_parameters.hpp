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

// Function MRMesh.MeshReconstructorBase.StopReconstruction
struct UMeshReconstructorBase_StopReconstruction_Params
{
};

// Function MRMesh.MeshReconstructorBase.StartReconstruction
struct UMeshReconstructorBase_StartReconstruction_Params
{
};

// Function MRMesh.MeshReconstructorBase.PauseReconstruction
struct UMeshReconstructorBase_PauseReconstruction_Params
{
};

// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
struct UMeshReconstructorBase_IsReconstructionStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
struct UMeshReconstructorBase_IsReconstructionPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
struct UMeshReconstructorBase_DisconnectMRMesh_Params
{
};

// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
struct UMeshReconstructorBase_ConnectMRMesh_Params
{
	class UMRMeshComponent*                            Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FMRMeshConfiguration                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MRMesh.MRMeshComponent.GetReconstructor
struct UMRMeshComponent_GetReconstructor_Params
{
	class UMeshReconstructorBase*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MRMesh.MRMeshComponent.ConnectReconstructor
struct UMRMeshComponent_ConnectReconstructor_Params
{
	class UMeshReconstructorBase*                      Reconstructor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

