// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:13 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirementsInTick
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagRequirements TagRequirements                (Parm)
// bool                           IncludeTriggeredAbilities      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_Tick_WaitAbilityActivate* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_Tick_WaitAbilityActivate* UAbilityTask_Tick_WaitAbilityActivate::WaitForAbilityActivateWithTagRequirementsInTick(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirementsInTick");

	UAbilityTask_Tick_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirementsInTick_Params params;
	params.OwningAbility = OwningAbility;
	params.TagRequirements = TagRequirements;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate.WaitForAbilityActivateInTick_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagQuery       Query                          (Parm)
// bool                           IncludeTriggeredAbilities      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_Tick_WaitAbilityActivate* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_Tick_WaitAbilityActivate* UAbilityTask_Tick_WaitAbilityActivate::WaitForAbilityActivateInTick_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate.WaitForAbilityActivateInTick_Query");

	UAbilityTask_Tick_WaitAbilityActivate_WaitForAbilityActivateInTick_Query_Params params;
	params.OwningAbility = OwningAbility;
	params.Query = Query;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate.WaitForAbilityActivateInTick
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            WithTag                        (Parm)
// struct FGameplayTag            WithoutTag                     (Parm)
// bool                           IncludeTriggeredAbilities      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_Tick_WaitAbilityActivate* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_Tick_WaitAbilityActivate* UAbilityTask_Tick_WaitAbilityActivate::WaitForAbilityActivateInTick(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate.WaitForAbilityActivateInTick");

	UAbilityTask_Tick_WaitAbilityActivate_WaitForAbilityActivateInTick_Params params;
	params.OwningAbility = OwningAbility;
	params.WithTag = WithTag;
	params.WithoutTag = WithoutTag;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SGameplayAbilities.SAbilitySystemBlueprintLibrary.RequestGameplayTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InTagName                      (Parm, ZeroConstructor)
// bool                           ErrorIfNotFound                (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag USAbilitySystemBlueprintLibrary::RequestGameplayTag(const struct FString& InTagName, bool ErrorIfNotFound)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SAbilitySystemBlueprintLibrary.RequestGameplayTag");

	USAbilitySystemBlueprintLibrary_RequestGameplayTag_Params params;
	params.InTagName = InTagName;
	params.ErrorIfNotFound = ErrorIfNotFound;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SGameplayAbilities.SAbilitySystemBlueprintLibrary.CreateGameplayTagContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGameplayTag>    SourceTags                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer USAbilitySystemBlueprintLibrary::CreateGameplayTagContainer(TArray<struct FGameplayTag> SourceTags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SAbilitySystemBlueprintLibrary.CreateGameplayTagContainer");

	USAbilitySystemBlueprintLibrary_CreateGameplayTagContainer_Params params;
	params.SourceTags = SourceTags;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SGameplayAbilities.SAbilitySystemComponent.TryActivateAbilitiesByTagString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AbilityTag                     (ConstParm, Parm, ZeroConstructor)
// bool                           bAllowRemoteActivation         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USAbilitySystemComponent::TryActivateAbilitiesByTagString(const struct FString& AbilityTag, bool bAllowRemoteActivation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SAbilitySystemComponent.TryActivateAbilitiesByTagString");

	USAbilitySystemComponent_TryActivateAbilitiesByTagString_Params params;
	params.AbilityTag = AbilityTag;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SGameplayAbilities.SAbilitySystemComponent.ReloadAbilities
// (Final, Native, Public, BlueprintCallable)

void USAbilitySystemComponent::ReloadAbilities()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SAbilitySystemComponent.ReloadAbilities");

	USAbilitySystemComponent_ReloadAbilities_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SGameplayAbilities.SAbilitySystemComponent.GiveAbilityByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AbilityClass                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilitySpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilitySpecHandle USAbilitySystemComponent::GiveAbilityByClass(class UClass* AbilityClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SAbilitySystemComponent.GiveAbilityByClass");

	USAbilitySystemComponent_GiveAbilityByClass_Params params;
	params.AbilityClass = AbilityClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SGameplayAbilities.SAbilitySystemComponent.CancelAbilitiesByTagString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AbilityTag                     (ConstParm, Parm, ZeroConstructor)

void USAbilitySystemComponent::CancelAbilitiesByTagString(const struct FString& AbilityTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SAbilitySystemComponent.CancelAbilitiesByTagString");

	USAbilitySystemComponent_CancelAbilitiesByTagString_Params params;
	params.AbilityTag = AbilityTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SGameplayAbilities.SGameplayAbility.K2_OnGiveAbility
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayAbilitySpec    Spec                           (ConstParm, Parm, OutParm, ReferenceParm)

void USGameplayAbility::K2_OnGiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpec& Spec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.K2_OnGiveAbility");

	USGameplayAbility_K2_OnGiveAbility_Params params;
	params.ActorInfo = ActorInfo;
	params.Spec = Spec;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SGameplayAbilities.SGameplayAbility.AddTargetRequiredTag
// (Final, Native, Public)
// Parameters:
// struct FString                 TagName                        (Parm, ZeroConstructor)

void USGameplayAbility::AddTargetRequiredTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddTargetRequiredTag");

	USGameplayAbility_AddTargetRequiredTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SGameplayAbilities.SGameplayAbility.AddTargetBlockedTag
// (Final, Native, Public)
// Parameters:
// struct FString                 TagName                        (Parm, ZeroConstructor)

void USGameplayAbility::AddTargetBlockedTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddTargetBlockedTag");

	USGameplayAbility_AddTargetBlockedTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SGameplayAbilities.SGameplayAbility.AddSourceRequiredTag
// (Final, Native, Public)
// Parameters:
// struct FString                 TagName                        (Parm, ZeroConstructor)

void USGameplayAbility::AddSourceRequiredTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddSourceRequiredTag");

	USGameplayAbility_AddSourceRequiredTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SGameplayAbilities.SGameplayAbility.AddSourceBlockedTag
// (Final, Native, Public)
// Parameters:
// struct FString                 TagName                        (Parm, ZeroConstructor)

void USGameplayAbility::AddSourceBlockedTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddSourceBlockedTag");

	USGameplayAbility_AddSourceBlockedTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SGameplayAbilities.SGameplayAbility.AddCancelAbilityTag
// (Final, Native, Public)
// Parameters:
// struct FString                 TagName                        (Parm, ZeroConstructor)

void USGameplayAbility::AddCancelAbilityTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddCancelAbilityTag");

	USGameplayAbility_AddCancelAbilityTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SGameplayAbilities.SGameplayAbility.AddBlockAbilityTag
// (Final, Native, Public)
// Parameters:
// struct FString                 TagName                        (Parm, ZeroConstructor)

void USGameplayAbility::AddBlockAbilityTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddBlockAbilityTag");

	USGameplayAbility_AddBlockAbilityTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SGameplayAbilities.SGameplayAbility.AddActivationRequiredTag
// (Final, Native, Public)
// Parameters:
// struct FString                 TagName                        (Parm, ZeroConstructor)

void USGameplayAbility::AddActivationRequiredTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddActivationRequiredTag");

	USGameplayAbility_AddActivationRequiredTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SGameplayAbilities.SGameplayAbility.AddActivationOwnedTag
// (Final, Native, Public)
// Parameters:
// struct FString                 TagName                        (Parm, ZeroConstructor)

void USGameplayAbility::AddActivationOwnedTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddActivationOwnedTag");

	USGameplayAbility_AddActivationOwnedTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SGameplayAbilities.SGameplayAbility.AddActivationBlockedTag
// (Final, Native, Public)
// Parameters:
// struct FString                 TagName                        (Parm, ZeroConstructor)

void USGameplayAbility::AddActivationBlockedTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddActivationBlockedTag");

	USGameplayAbility_AddActivationBlockedTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SGameplayAbilities.SGameplayAbility.AddAbilityTag
// (Final, Native, Public)
// Parameters:
// struct FString                 TagName                        (Parm, ZeroConstructor)

void USGameplayAbility::AddAbilityTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddAbilityTag");

	USGameplayAbility_AddAbilityTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

