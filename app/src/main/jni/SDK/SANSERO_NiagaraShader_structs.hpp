#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:15 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Enums
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class EFNiagaraCompileEventSeverity : uint8_t
{
	FNiagaraCompileEventSeverity__Log = 0,
	FNiagaraCompileEventSeverity__Warning = 1,
	FNiagaraCompileEventSeverity__Error = 2,
	FNiagaraCompileEventSeverity__FNiagaraCompileEventSeverity_MAX = 3
};



//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Script Structs
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// 0x0020
struct FNiagaraDataInterfaceGPUParamInfo
{
	struct FString                                     DataInterfaceHLSLSymbol;                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     DIClassName;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct NiagaraShader.NiagaraCompileEvent
// 0x0048
struct FNiagaraCompileEvent
{
	EFNiagaraCompileEventSeverity                      Severity;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Message;                                                  // 0x0008(0x0010) (ZeroConstructor)
	struct FGuid                                       NodeGuid;                                                 // 0x0018(0x0010) (IsPlainOldData)
	struct FGuid                                       PinGuid;                                                  // 0x0028(0x0010) (IsPlainOldData)
	TArray<struct FGuid>                               StackGuids;                                               // 0x0038(0x0010) (ZeroConstructor)
};

}

