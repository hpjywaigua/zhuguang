// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:14 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function QRCodeUtility.ZXingScanner.Encode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Text                           (Parm, ZeroConstructor)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UZXingScanner::Encode(const struct FString& Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QRCodeUtility.ZXingScanner.Encode");

	UZXingScanner_Encode_Params params;
	params.Text = Text;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QRCodeUtility.ZXingScanner.Decode
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FZXingScanResult        OutResult                      (Parm, OutParm)
// struct FVector4                InRect                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UZXingScanner::Decode(class UTexture2D* Texture, const struct FVector4& InRect, struct FZXingScanResult* OutResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QRCodeUtility.ZXingScanner.Decode");

	UZXingScanner_Decode_Params params;
	params.Texture = Texture;
	params.InRect = InRect;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;

	return params.ReturnValue;
}


}

