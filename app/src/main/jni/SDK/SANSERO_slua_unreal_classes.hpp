#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:11 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class slua_unreal.LuaInstancedActorComponent
// 0x0070 (0x0188 - 0x0118)
class ULuaInstancedActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0118(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0170(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0180(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaInstancedActorComponent");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};


// Class slua_unreal.LuaObject
// 0x0068 (0x0090 - 0x0028)
class ULuaObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaObject");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaActor
// 0x00C0 (0x04B8 - 0x03F8)
class ALuaActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x03F8(0x0058) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0450(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x04A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaActor");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};


// Class slua_unreal.LuaActorComponent
// 0x00C0 (0x01D8 - 0x0118)
class ULuaActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0118(0x0058) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0170(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x01C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaActorComponent");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};


// Class slua_unreal.LuaGameState
// 0x00B8 (0x0510 - 0x0458)
class ALuaGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0458(0x0058) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x04B0(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0500(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaGameState");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaGameMode
// 0x0068 (0x0530 - 0x04C8)
class ALuaGameMode : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x04C8(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0520(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaGameMode");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaPlayerState
// 0x00B8 (0x0540 - 0x0488)
class ALuaPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0488(0x0058) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x04E0(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0530(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaPlayerState");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaPlayerController
// 0x00B8 (0x0818 - 0x0760)
class ALuaPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0760(0x0058) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x07B8(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0808(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaPlayerController");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaUserWidget
// 0x0068 (0x02C8 - 0x0260)
class ULuaUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0260(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x02B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaUserWidget");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaOverriderInterface
// 0x0000 (0x0028 - 0x0028)
class ULuaOverriderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaOverriderInterface");
		return pStaticClass;
	}


	struct FString GetLuaFilePath();
};


// Class slua_unreal.LatentDelegate
// 0x0008 (0x0030 - 0x0028)
class ULatentDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LatentDelegate");
		return pStaticClass;
	}


	void OnLatentCallback(int threadRef);
};


// Class slua_unreal.LuaCharacter
// 0x00C0 (0x08F0 - 0x0830)
class ALuaCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0830(0x0058) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0888(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x08D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x08E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaCharacter");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaDelegate
// 0x0150 (0x0178 - 0x0028)
class ULuaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0028(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaDelegate");
		return pStaticClass;
	}


	void EventTrigger();
};


// Class slua_unreal.LuaLevelScriptActor
// 0x0070 (0x0468 - 0x03F8)
class ALuaLevelScriptActor : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x03F8(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0450(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0460(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaLevelScriptActor");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};


// Class slua_unreal.LuaOverrider
// 0x0000 (0x0028 - 0x0028)
class ULuaOverrider : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaOverrider");
		return pStaticClass;
	}


	void TriggerAnimNotify();
	void InputVectorAxis(const struct FVector& AxisValue);
	void InputTouch(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InputGesture(float Value);
	void InputAxis(float AxisValue);
	void InputAction(const struct FKey& Key);
};


// Class slua_unreal.LuaPawn
// 0x00B8 (0x0510 - 0x0458)
class ALuaPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0458(0x0058) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x04B0(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0500(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaPawn");
		return pStaticClass;
	}

};


// Class slua_unreal.SluaBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USluaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.SluaBlueprintLibrary");
		return pStaticClass;
	}


	static struct FString GetStringFromVar(const struct FSluaBPVar& Value, int Index);
	static class UObject* GetObjectFromVar(const struct FSluaBPVar& Value, int Index);
	static float GetNumberFromVar(const struct FSluaBPVar& Value, int Index);
	static int GetIntFromVar(const struct FSluaBPVar& Value, int Index);
	static bool GetBoolFromVar(const struct FSluaBPVar& Value, int Index);
	static struct FSluaBPVar CreateVarFromString(const struct FString& Value);
	static struct FSluaBPVar CreateVarFromObject(class UObject* WorldContextObject, class UObject* Value);
	static struct FSluaBPVar CreateVarFromNumber(float Value);
	static struct FSluaBPVar CreateVarFromInt(int Value);
	static struct FSluaBPVar CreateVarFromBool(bool Value);
	static struct FSluaBPVar CallToLuaWithArgs(class UObject* WorldContextObject, const struct FString& FunctionName, TArray<struct FSluaBPVar> Args, const struct FString& StateName);
	static struct FSluaBPVar CallToLua(class UObject* WorldContextObject, const struct FString& FunctionName, const struct FString& StateName);
};


}

