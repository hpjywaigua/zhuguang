#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:13 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class TemBPNode.TemBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UTemBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TemBPNode.TemBPLibrary");
		return pStaticClass;
	}


	static void TempUIMsgInvokeRef(class UObject* ObjContext, const struct FString& MsgName, const struct FString& ModuleName, TArray<struct FTemBPDataAddr> ParamArray);
	static void TempBridgeEventInvokeRef(class UObject* ObjContext, const struct FString& EventType, const struct FString& EventID, TArray<struct FTemBPDataAddr> ParamArray);
	static struct FTemBPDataAddr AddrFromWild(const struct FString& DataType, const struct FTemBPDataAddr& InAny);
	static struct FTemBPDataAddr AddrFromSet(const struct FString& DataType);
	static struct FTemBPDataAddr AddrFromMap(const struct FString& DataType, TMap<int, int> InAny);
	static struct FTemBPDataAddr AddrFromArray(const struct FString& DataType, TArray<int> InAny);
};


// Class TemBPNode.LuaTemBPData
// 0x0000 (0x0028 - 0x0028)
class ULuaTemBPData : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData");
		return pStaticClass;
	}

};


// Class TemBPNode.LuaTemBPData_bool
// 0x0008 (0x0030 - 0x0028)
class ULuaTemBPData_bool : public ULuaTemBPData
{
public:
	bool                                               Data;                                                     // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData_bool");
		return pStaticClass;
	}

};


// Class TemBPNode.LuaTemBPData_int
// 0x0008 (0x0030 - 0x0028)
class ULuaTemBPData_int : public ULuaTemBPData
{
public:
	int                                                Data;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData_int");
		return pStaticClass;
	}

};


// Class TemBPNode.LuaTemBPData_float
// 0x0008 (0x0030 - 0x0028)
class ULuaTemBPData_float : public ULuaTemBPData
{
public:
	float                                              Data;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData_float");
		return pStaticClass;
	}

};


// Class TemBPNode.LuaTemBPData_string
// 0x0010 (0x0038 - 0x0028)
class ULuaTemBPData_string : public ULuaTemBPData
{
public:
	struct FString                                     Data;                                                     // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData_string");
		return pStaticClass;
	}

};


// Class TemBPNode.LuaTemBPData_object
// 0x0008 (0x0030 - 0x0028)
class ULuaTemBPData_object : public ULuaTemBPData
{
public:
	class UObject*                                     Data;                                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData_object");
		return pStaticClass;
	}

};


}

