#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:15 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class ActorSequence.ActorSequence
// 0x0028 (0x0308 - 0x02E0)
class UActorSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FActorSequenceObjectReferenceMap            ObjectReferences;                                         // 0x02E8(0x0020)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ActorSequence.ActorSequence");
		return pStaticClass;
	}

};


// Class ActorSequence.ActorSequenceComponent
// 0x0040 (0x0158 - 0x0118)
class UActorSequenceComponent : public UActorComponent
{
public:
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0118(0x0028) (Edit)
	class UActorSequence*                              Sequence;                                                 // 0x0140(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorSequencePlayer*                        SequencePlayer;                                           // 0x0148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAutoPlay;                                                // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRunOnServer;                                             // 0x0151(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableOptimize;                                          // 0x0152(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0153(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ActorSequence.ActorSequenceComponent");
		return pStaticClass;
	}


	void StopPlay();
	void StartPlay(float StartTime);
	void OnStopOrFinsh();
	float GetLength();
};


// Class ActorSequence.ActorSequencePlayer
// 0x0000 (0x07B8 - 0x07B8)
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ActorSequence.ActorSequencePlayer");
		return pStaticClass;
	}

};


}

