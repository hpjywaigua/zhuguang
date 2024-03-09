#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:15 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Enums
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8_t
{
	EActorSequenceObjectReferenceType__ContextActor = 0,
	EActorSequenceObjectReferenceType__ExternalActor = 1,
	EActorSequenceObjectReferenceType__Component = 2,
	EActorSequenceObjectReferenceType__EActorSequenceObjectReferenceType_MAX = 3
};



//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Script Structs
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// ScriptStruct ActorSequence.ActorSequenceObjectReference
// 0x0028
struct FActorSequenceObjectReference
{
	EActorSequenceObjectReferenceType                  Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FGuid                                       actorid;                                                  // 0x0004(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     PathToComponent;                                          // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct ActorSequence.ActorSequenceObjectReferences
// 0x0010
struct FActorSequenceObjectReferences
{
	TArray<struct FActorSequenceObjectReference>       Array;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
// 0x0020
struct FActorSequenceObjectReferenceMap
{
	TArray<struct FGuid>                               BindingIds;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FActorSequenceObjectReferences>      References;                                               // 0x0010(0x0010) (ZeroConstructor)
};

}

