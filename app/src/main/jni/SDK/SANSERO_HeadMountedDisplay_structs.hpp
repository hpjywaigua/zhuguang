#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Enums
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed = 1,
	ESpectatorScreenMode__Undistorted = 2,
	ESpectatorScreenMode__Distorted = 3,
	ESpectatorScreenMode__SingleEye = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill = 5,
	ESpectatorScreenMode__Texture  = 6,
	ESpectatorScreenMode__TexturePlusEye = 7,
	ESpectatorScreenMode__ESpectatorScreenMode_MAX = 8
};


// Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8_t
{
	EHMDWornState__Unknown         = 0,
	EHMDWornState__Worn            = 1,
	EHMDWornState__NotWorn         = 2,
	EHMDWornState__EHMDWornState_MAX = 3
};


// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor      = 0,
	EHMDTrackingOrigin__Eye        = 1,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX = 2
};


// Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation = 0,
	EOrientPositionSelector__Position = 1,
	EOrientPositionSelector__OrientationAndPosition = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX = 3
};


// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked    = 0,
	ETrackingStatus__InertialOnly  = 1,
	ETrackingStatus__Tracked       = 2,
	ETrackingStatus__ETrackingStatus_MAX = 3
};



}

