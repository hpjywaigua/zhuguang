#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Script Structs
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// ScriptStruct Development.VisualDraw
// 0x002C
struct FVisualDraw
{
	struct FVector                                     BasePosition;                                             // 0x0000(0x000C) (BlueprintVisible, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       AttachedActor;                                            // 0x000C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      BaseColor;                                                // 0x0014(0x0004) (BlueprintVisible, IsPlainOldData)
	float                                              Duration;                                                 // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TaskId;                                                   // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bContinuous;                                              // 0x0024(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0025(0x0007) MISSED OFFSET
};

// ScriptStruct Development.DrawShape_Text
// 0x0014 (0x0040 - 0x002C)
struct FDrawShape_Text : public FVisualDraw
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     TextString;                                               // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Development.DrawShape_Sphere
// 0x0004 (0x0030 - 0x002C)
struct FDrawShape_Sphere : public FVisualDraw
{
	float                                              Radius;                                                   // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Development.DrawShape_Line
// 0x000C (0x0038 - 0x002C)
struct FDrawShape_Line : public FVisualDraw
{
	struct FVector                                     LineEnd;                                                  // 0x002C(0x000C) (BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Development.DrawShape_Cylinder
// 0x0010 (0x003C - 0x002C)
struct FDrawShape_Cylinder : public FVisualDraw
{
	struct FVector                                     End;                                                      // 0x002C(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              Radius;                                                   // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Development.DrawShape_Box
// 0x0018 (0x0044 - 0x002C)
struct FDrawShape_Box : public FVisualDraw
{
	struct FVector                                     BoxExtent;                                                // 0x002C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0038(0x000C) (BlueprintVisible, IsPlainOldData)
};

}

