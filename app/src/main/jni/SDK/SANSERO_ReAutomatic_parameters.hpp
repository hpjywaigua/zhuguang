#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:14 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Parameters
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function ReAutomatic.AutomaticCommonHelper.IsClassOf
struct UAutomaticCommonHelper_IsClassOf_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReAutomatic.AutomaticPlatformHelper.GetDeviceName
struct UAutomaticPlatformHelper_GetDeviceName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ReAutomatic.AutomaticUIHelper.IsWidgetVisibleWithUICondition
struct UAutomaticUIHelper_IsWidgetVisibleWithUICondition_Params
{
	struct FFindUICondition                            Condition;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReAutomatic.AutomaticUIHelper.IsWidgetVisible
struct UAutomaticUIHelper_IsWidgetVisible_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReAutomatic.AutomaticUIHelper.IsWidgetTextMatchRegex
struct UAutomaticUIHelper_IsWidgetTextMatchRegex_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReAutomatic.AutomaticUIHelper.IsWidgetMatchType
struct UAutomaticUIHelper_IsWidgetMatchType_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EUIType                                            Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReAutomatic.AutomaticUIHelper.FindWidgetObjectWithUICondition
struct UAutomaticUIHelper_FindWidgetObjectWithUICondition_Params
{
	struct FFindUICondition                            Condition;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ReAutomatic.AutomaticUIHelper.FindUWidgetObject
struct UAutomaticUIHelper_FindUWidgetObject_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

