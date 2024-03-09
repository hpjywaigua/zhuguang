#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:13 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate
// 0x0000 (0x0130 - 0x0130)
class UAbilityTask_Tick_WaitAbilityActivate : public UAbilityTask_WaitAbilityActivate
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate");
		return pStaticClass;
	}


	static class UAbilityTask_Tick_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirementsInTick(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
	static class UAbilityTask_Tick_WaitAbilityActivate* WaitForAbilityActivateInTick_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce);
	static class UAbilityTask_Tick_WaitAbilityActivate* WaitForAbilityActivateInTick(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
};


// Class SGameplayAbilities.SAbilitySystemBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SGameplayAbilities.SAbilitySystemBlueprintLibrary");
		return pStaticClass;
	}


	static struct FGameplayTag RequestGameplayTag(const struct FString& InTagName, bool ErrorIfNotFound);
	static struct FGameplayTagContainer CreateGameplayTagContainer(TArray<struct FGameplayTag> SourceTags);
};


// Class SGameplayAbilities.SAbilitySystemComponent
// 0x00D8 (0x11B8 - 0x10E0)
class USAbilitySystemComponent : public UAbilitySystemComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x10E0(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x1138(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UClass*>                              PreloadedAbilities;                                       // 0x1148(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGameplayAbilitySpecHandle>          PreloadedAbilityHandles;                                  // 0x1158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x1168(0x0050) (Net)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SGameplayAbilities.SAbilitySystemComponent");
		return pStaticClass;
	}


	bool TryActivateAbilitiesByTagString(const struct FString& AbilityTag, bool bAllowRemoteActivation);
	void ReloadAbilities();
	struct FGameplayAbilitySpecHandle GiveAbilityByClass(class UClass* AbilityClass);
	void CancelAbilitiesByTagString(const struct FString& AbilityTag);
};


// Class SGameplayAbilities.SGameplayAbility
// 0x0068 (0x04A8 - 0x0440)
class USGameplayAbility : public UGameplayAbility
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0440(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0498(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SGameplayAbilities.SGameplayAbility");
		return pStaticClass;
	}


	void K2_OnGiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpec& Spec);
	void AddTargetRequiredTag(const struct FString& TagName);
	void AddTargetBlockedTag(const struct FString& TagName);
	void AddSourceRequiredTag(const struct FString& TagName);
	void AddSourceBlockedTag(const struct FString& TagName);
	void AddCancelAbilityTag(const struct FString& TagName);
	void AddBlockAbilityTag(const struct FString& TagName);
	void AddActivationRequiredTag(const struct FString& TagName);
	void AddActivationOwnedTag(const struct FString& TagName);
	void AddActivationBlockedTag(const struct FString& TagName);
	void AddAbilityTag(const struct FString& TagName);
};


}

