// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:14 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function CosHelper.CosBase.GetContent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<unsigned char> UCosBase::GetContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosBase.GetContent");

	UCosBase_GetContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CosHelper.CosHelperBlueprintLibrary.UploadFileMemory
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCosHelper*              CosHelper                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          FileMemoryBuffer               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 URIPathName                    (Parm, ZeroConstructor)
// struct FString                 URLParameters                  (Parm, ZeroConstructor)
// struct FScriptDelegate         OnCosRequestCompleted          (Parm, ZeroConstructor)
// class UCosRequest*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCosRequest* UCosHelperBlueprintLibrary::UploadFileMemory(class UCosHelper* CosHelper, TArray<unsigned char> FileMemoryBuffer, const struct FString& URIPathName, const struct FString& URLParameters, const struct FScriptDelegate& OnCosRequestCompleted)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosHelperBlueprintLibrary.UploadFileMemory");

	UCosHelperBlueprintLibrary_UploadFileMemory_Params params;
	params.CosHelper = CosHelper;
	params.FileMemoryBuffer = FileMemoryBuffer;
	params.URIPathName = URIPathName;
	params.URLParameters = URLParameters;
	params.OnCosRequestCompleted = OnCosRequestCompleted;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CosHelper.CosHelperBlueprintLibrary.UploadFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCosHelper*              CosHelper                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FilePathName                   (Parm, ZeroConstructor)
// struct FString                 URIPathName                    (Parm, ZeroConstructor)
// struct FString                 URLParameters                  (Parm, ZeroConstructor)
// struct FScriptDelegate         OnCosRequestCompleted          (Parm, ZeroConstructor)
// class UCosRequest*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCosRequest* UCosHelperBlueprintLibrary::UploadFile(class UCosHelper* CosHelper, const struct FString& FilePathName, const struct FString& URIPathName, const struct FString& URLParameters, const struct FScriptDelegate& OnCosRequestCompleted)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosHelperBlueprintLibrary.UploadFile");

	UCosHelperBlueprintLibrary_UploadFile_Params params;
	params.CosHelper = CosHelper;
	params.FilePathName = FilePathName;
	params.URIPathName = URIPathName;
	params.URLParameters = URLParameters;
	params.OnCosRequestCompleted = OnCosRequestCompleted;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CosHelper.CosHelperBlueprintLibrary.InitCosInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Section                        (Parm, ZeroConstructor)
// struct FCosHelperInitializeInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCosHelperInitializeInfo UCosHelperBlueprintLibrary::InitCosInfo(const struct FString& Section)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosHelperBlueprintLibrary.InitCosInfo");

	UCosHelperBlueprintLibrary_InitCosInfo_Params params;
	params.Section = Section;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CosHelper.CosHelperBlueprintLibrary.GetFileInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCosHelper*              CosHelper                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 URIPathName                    (Parm, ZeroConstructor)
// struct FString                 URLParameters                  (Parm, ZeroConstructor)
// int                            FileInfoType                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnCosRequestCompleted          (Parm, ZeroConstructor)
// class UCosRequest*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCosRequest* UCosHelperBlueprintLibrary::GetFileInfo(class UCosHelper* CosHelper, const struct FString& URIPathName, const struct FString& URLParameters, int FileInfoType, const struct FScriptDelegate& OnCosRequestCompleted)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosHelperBlueprintLibrary.GetFileInfo");

	UCosHelperBlueprintLibrary_GetFileInfo_Params params;
	params.CosHelper = CosHelper;
	params.URIPathName = URIPathName;
	params.URLParameters = URLParameters;
	params.FileInfoType = FileInfoType;
	params.OnCosRequestCompleted = OnCosRequestCompleted;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CosHelper.CosHelperBlueprintLibrary.DownloadFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCosHelper*              CosHelper                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 URIPathName                    (Parm, ZeroConstructor)
// struct FString                 URLParameters                  (Parm, ZeroConstructor)
// struct FString                 SavedPathName                  (Parm, ZeroConstructor)
// struct FScriptDelegate         OnCosRequestCompleted          (Parm, ZeroConstructor)
// class UCosRequest*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCosRequest* UCosHelperBlueprintLibrary::DownloadFile(class UCosHelper* CosHelper, const struct FString& URIPathName, const struct FString& URLParameters, const struct FString& SavedPathName, const struct FScriptDelegate& OnCosRequestCompleted)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosHelperBlueprintLibrary.DownloadFile");

	UCosHelperBlueprintLibrary_DownloadFile_Params params;
	params.CosHelper = CosHelper;
	params.URIPathName = URIPathName;
	params.URLParameters = URLParameters;
	params.SavedPathName = SavedPathName;
	params.OnCosRequestCompleted = OnCosRequestCompleted;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CosHelper.CosHelperBlueprintLibrary.DestroyCosHelper
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCosHelper*              CosHelper                      (Parm, ZeroConstructor, IsPlainOldData)

void UCosHelperBlueprintLibrary::DestroyCosHelper(class UCosHelper* CosHelper)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosHelperBlueprintLibrary.DestroyCosHelper");

	UCosHelperBlueprintLibrary_DestroyCosHelper_Params params;
	params.CosHelper = CosHelper;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CosHelper.CosHelperBlueprintLibrary.ConstructCosHelper
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCosHelperInitializeInfo InitializeInfo                 (ConstParm, Parm, OutParm, ReferenceParm)
// class UCosHelper*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCosHelper* UCosHelperBlueprintLibrary::ConstructCosHelper(const struct FCosHelperInitializeInfo& InitializeInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosHelperBlueprintLibrary.ConstructCosHelper");

	UCosHelperBlueprintLibrary_ConstructCosHelper_Params params;
	params.InitializeInfo = InitializeInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CosHelper.CosResponse.IsOK
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosResponse::IsOK()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosResponse.IsOK");

	UCosResponse_IsOK_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CosHelper.CosResponse.GetResponseCode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCosResponse::GetResponseCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosResponse.GetResponseCode");

	UCosResponse_GetResponseCode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CosHelper.CosResponse.GetRequestURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCosResponse::GetRequestURL()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosResponse.GetRequestURL");

	UCosResponse_GetRequestURL_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CosHelper.CosResponse.GetFileInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECosHelperFileInfoType         InFileInfoType                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCosResponse::GetFileInfo(ECosHelperFileInfoType InFileInfoType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosResponse.GetFileInfo");

	UCosResponse_GetFileInfo_Params params;
	params.InFileInfoType = InFileInfoType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CosHelper.CosResponse.GetContentAsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCosResponse::GetContentAsString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosResponse.GetContentAsString");

	UCosResponse_GetContentAsString_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

