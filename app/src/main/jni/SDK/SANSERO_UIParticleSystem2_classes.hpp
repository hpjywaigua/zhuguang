#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:14 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class UIParticleSystem2.ParticleSystemWidget2
// 0x0038 (0x0138 - 0x0100)
class UParticleSystemWidget2 : public UWidget
{
public:
	class UObject*                                     ParticleSystemTemplate;                                   // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUIMeshProjectionMethod>               ProjectionMethod;                                         // 0x0108(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	float                                              FieldOfView;                                              // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToCamera;                                         // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivate;                                            // 0x0114(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bActivate;                                                // 0x0115(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0116(0x0002) MISSED OFFSET
	class UFXSystemComponent*                          WorldParticleComponent;                                   // 0x0118(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AActor*                                      WorldParticleActor;                                       // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0128(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticleSystem2.ParticleSystemWidget2");
		return pStaticClass;
	}


	void SetParticleSystem(class UParticleSystem* ParticleSystem);
	void SetNiagaraSystem(class UNiagaraSystem* ParticleSystem);
	void SetActivate(bool bIsActivate);
	class UParticleSystemComponent* GetParticleComponent();
	class UNiagaraComponent* GetNiagaraComponent();
};


// Class UIParticleSystem2.UIParticleSystemComponent
// 0x0010 (0x0AB0 - 0x0AA0)
class UUIParticleSystemComponent : public UParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0AA0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticleSystem2.UIParticleSystemComponent");
		return pStaticClass;
	}

};


// Class UIParticleSystem2.UINiagaraComponent
// 0x0020 (0x09C0 - 0x09A0)
class UUINiagaraComponent : public UNiagaraComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x09A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticleSystem2.UINiagaraComponent");
		return pStaticClass;
	}

};


}

