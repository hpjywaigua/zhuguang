#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:13 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Class KantanChartsSlate.KantanBarChartWidgetStyle
// 0x0158 (0x0188 - 0x0030)
class UKantanBarChartWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FKantanBarChartStyle                        ChartStyle;                                               // 0x0030(0x0158) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsSlate.KantanBarChartWidgetStyle");
		return pStaticClass;
	}

};


// Class KantanChartsSlate.KantanCartesianChartWidgetStyle
// 0x0158 (0x0188 - 0x0030)
class UKantanCartesianChartWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FKantanCartesianChartStyle                  ChartStyle;                                               // 0x0030(0x0158) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsSlate.KantanCartesianChartWidgetStyle");
		return pStaticClass;
	}

};


// Class KantanChartsSlate.KantanCategoryStyleSet
// 0x0010 (0x0040 - 0x0030)
class UKantanCategoryStyleSet : public UDataAsset
{
public:
	TArray<struct FKantanCategoryStyle>                Styles;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsSlate.KantanCategoryStyleSet");
		return pStaticClass;
	}

};


// Class KantanChartsSlate.KantanPointStyle
// 0x0020 (0x0050 - 0x0030)
class UKantanPointStyle : public UDataAsset
{
public:
	class UTexture2D*                                  DataPointTexture;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   PointSizeTextureOffsets[0x3];                             // 0x0038(0x0008) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsSlate.KantanPointStyle");
		return pStaticClass;
	}

};


// Class KantanChartsSlate.KantanSeriesStyleSet
// 0x0010 (0x0040 - 0x0030)
class UKantanSeriesStyleSet : public UDataAsset
{
public:
	TArray<struct FKantanSeriesStyle>                  Styles;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsSlate.KantanSeriesStyleSet");
		return pStaticClass;
	}

};


}

