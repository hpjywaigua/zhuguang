
#include "Includes.h"
#include "Tools.h"
#include "fake_dlfcn.h"
#include "Vector3.hpp"
#include "imgui/imgui.h"
#include "imgui/backends/imgui_impl_android.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include "Arabic.h"
#include "StrEnc.h"
#include "plthook.h"


#include "Items.h"
#include "fontch.h"///普通汉化
#include "念辞方正体.h"//方正字体
//#include "念辞潦草体.h"//潦草字体
//#include "念辞像素体.h"//像素体
#include "obfuscate.h"
#include "KittyMemory/MemoryPatch.h"

#include "json.hpp"
#include "Rect.h"
#include "Iconcpp.h"
#include "ImguiPP.cpp"
#include "Menu.h"
#include "Font.h"
#include "Font.h"
#include "Icon.h"
using json = nlohmann::json;
#define SLEEP_TIME 1000LL / 60LL
#include "SDK.hpp"
using namespace SDK;
#include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include "base64/base64.h"

#include "内存配置/Syscall读写.h"
#include "内存配置/内存读写.hpp"
#include "内存配置/念辞配置全防/Logger.h"
#include "内存配置/念辞配置全防/配置PATCH_LIB.h"
#include "内存配置/念辞配置全防/配置PATCH_LIB2.h"
#define PATCH_LIB
#define HOOK_LIB
#include <hook/fake_dlfcn.h>
#include "Includes/Macros.h"
#include "Includes/Logger.h"
#include "Includes/Utils.h"
#include "And64InlineHook/And64InlineHook.hpp"
#define targetLibName OBFUSCATE("libUE4.so")
#define targetLibName OBFUSCATE("libanogs.so")
#include <list>
#include <vector>
#include <string.h>
#include <pthread.h>
#include <thread>
#include <cstring>
#include <jni.h>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include <dlfcn.h>
#include <fcntl.h>
#include <sys/stat.h>
//#include "Includes/obfuscate.h"
#include "KittyMemory/MemoryPatch.h"
#include "Includes/Macros.h"
#define _BYTE  uint8_t
#define _WORD  uint16_t
#define _DWORD uint32_t
#define _QWORD uint64_t
#define pkgName "com.pubg.imobile"   

#include <stdio.h>
#include <dlfcn.h>

DWORD libanogsBase = 0;
DWORD libUE4Base = 0;
DWORD libanortBase = 0;
DWORD libEGLBase = 0;
DWORD libanogsAlloc = 0;
DWORD libUE4Alloc = 0;
DWORD libEGLAlloc = 0;
unsigned int libanogsSize = 0x33244D;
unsigned int libUE4Size = 0x79AFDF0;
char *Offset;
DWORD NewBase = 0;

#define GetActorArray_Offset 0x8B8D4C8
#define GEngine_Offset 0xc7B5030
#define GEngine_Offset 0xc7D4278
#define GUObject_Offset 0xC5CFFE0
#define GNames_Offset 0x7225CDC
#define GNativeAndroidApp_Offset 0xC330EB8
#define Actors_Offset 0xA0
#define targetLibName OBFUSCATE("libanort.so")
#define targetLibName OBFUSCATE("libanogs.so")
#define targetLibName OBFUSCATE("libUE4.so")
#define targetLibName OBFUSCATE("libspecialgem.so")
GName Offset : 0xc575600
GWorld Offset : 0xca142e0
VWorld Offset : 0xc827fa8
VMatrix Offset : 0xc9f28b0


GNames_Offset : 0x73d9850
GEngine_Offset : 0xc9f28b0 //UEngine
GEngine_Offset : 0xc9f28b0 //UlocalPlayer
GUObject_Offset : 0xc81f320
GetActorArray_Offset : 0x8d81a80
Canvas_Map_Offset : 0xc827fa8
Process_Event_Offset : 0x6f01dc0
GNativeAndroidApp_Offset : 0xc575148
Actors_Offset : 0xa0


bool linkkk;

float size_child = 0;
static float SliderFloat = 0;

static bool HideWindow = true;//隐藏悬浮窗

char extra[32];
bool active = false;
float color_edit4[4] = { 1.00f, 1.00f, 1.00f, 1.000f };
float accent_color[4] = { 0.745f, 0.151f, 0.151f, 1.000f };
//float 自瞄距离 = 200;
float 自瞄距离 = 150;
bool 开火;
bool 任何;
bool Antiban = true;
bool Bypass = true;
bool 平板视角;
bool 念辞定制 = true;
bool Onscreenalert  = false;
bool bValid = false;
//自动开启功能
std::string name ="";
std::string device = "";
std::string status = "";
std::string floating ="";
static int taba = 0;
static int tabb = 0;
int selection_count = 0;
int legit_group_count = 0;
// ======================================================================== //
ImFont* medium;
ImFont* bold;
ImFont* tab_icons;
ImFont* logo;
ImFont* tab_title;
ImFont* tab_title_icon;
ImFont* subtab_title;
ImFont* combo_arrow;

float FOVSize = 20;
float FOVSizea = 20;
using json = nlohmann::json;
#define SLEEP_TIME 1000LL / 60LL
#define IM_PI                   3.14159265358979323846f
#define RAD2DEG(x) ((float)(x) * (float)(180.f / IM_PI))
#define DEG2RAD(x) ((float)(x) * (float)(IM_PI / 180.f))

 #define MasterMaskShader "Master_Mask_Base/TGPUSkinVertexFactoryfalse"
#define MasterMaskShader1 "Master_Mask_Base_Player/TGPUSkinVertexFactoryfalse"
#define MasterMaskShader2 "Master_Weapon_Player/TGPUSkinVertexFactoryfalse"

#define MasterSkinShader "Master_Skin_SSS/TGPUSkinVertexFactoryfalse"
#define MasterSkinShader2 "Master_Skin_SSS/F_Body_02_A_SSS/TGPUSkinAPEXClothVertexFactoryfalse"
#define MasterSkinShader3 "Master_Skin_SSS/F_Body_01_A_SSS/TGPUSkinAPEXClothVertexFactoryfalse"
#define MasterSkinShader4 "Master_VH_Base/TGPUSkinVertexFactoryfalse"
#define MasterSkinShader5 "Master_Pickup_Base/TGPUSkinVertexFactoryfalse"
#define MasterSkinShader6 "Master_Bullet/TGPUSkinVertexFactoryfalse"
#define MasterSkinShader7 "Master_Skin_SSS/TGPUSkinVertexFactoryfalse"
#define MasterSkinShader8 "Master_VH_IBL/TGPUSkinVertexFactoryfalse"

const char *newPlayerMaskShader =
        "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(0.0, 1.0, 0.0, 0.8);\n"
        "}\n";

std::unordered_set<GLuint> playerPrograms;
GLuint playerVertexShader = 0, playerMaskShader = 0;

std::mutex playerProgramsMutex;
std::mutex playerShaderMutex;
std::mutex chamColorMutex;

using namespace SDK;
#include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include "base64/base64.h"
time_t rng = 0;
json sniper1;
json rifle1;
json sub1;
json ammo1;
json scope1;
json atta1;
json mag1;
json medic1;
json armor1;
json grenade1;
json items_data;
std::string g_Token, g_Auth;

float RadarX=320,RadarY=255,RadarXW=349.498,RadarYW=256.187;
int currentLang = 0;
#define SelectLanguage(ch, en) currentLang == 0 ? (ch) : (en)
//bool Bypass = true;
// ======================================================================== 
#define GNames_Offset 0x7225cdc
#define GEngine_Offset 0xc7b5030 //UEngine
#define GEngine_Offset 0xc7d4278 //UlocalPlayer
#define GUObject_Offset 0xc5cffe0
#define GetActorArray 0x8b8d4c8
#define Canvas_Map_Offsets 0xc7ae018
#define Process_Event_Offset 0x74848cc
#define GNativeAndroidApp_Offset 0xc330eb8
#define Actors_Offset 0xa0
//=============================================================================//
uintptr_t anort;
uintptr_t UE4;
uintptr_t g_UE4;
uintptr_t ANOGS;
uintptr_t Anogs;
uintptr_t g_Anogs;
uintptr_t anogs;
uintptr_t g_anogs;
uintptr_t TDataMaster;
uintptr_t TDatamaster;
uintptr_t swappy;
uintptr_t CrashSight;
uintptr_t gcloudcore;
uintptr_t cubehawk;
uintptr_t GCloudVoice;
uintptr_t tprt;
uintptr_t INTLCompliance;
uintptr_t ANORT;
uintptr_t gcloud;
uintptr_t g_cloud;
uintptr_t g_gcloud;
uintptr_t Anort;
uintptr_t tgpa;
uintptr_t g_ijkffmpeg;

uintptr_t BUVINIAMI;
uint32_t Colors[] = {0x53BB0C, 0x530826, 0x0FC3F4, 0xDC2855, 0x0A31DE, 0xBAA7FD, 0xCEDB3F, 0x286A45, 0x58F014, 0x45CAE6, 0x773702, 0xB0CEF0, 0x3C5F51, 0x453CD7, 0x364024, 0x439997, 0x4CB612, 0xC6B564, 0x17F250, 0xE41BC0, 0xAF8E27, 0x8E382E, 0x47A101, 0x9DAC33, 0x66F4CF, 0x59A9F0, 0x798D1A, 0x2EBB59, 0xBF66C3, 0x4BD8FB, 0xBBFA54, 0x6B9881, 0x144967, 0xBAA3AE, 0xE80B9D, 0x7BA552, 0x96A456, 0x17D7B4, 0x130C39, 0x3C06A8, 0x62737E, 0xA87E89, 0xB6D3E4, 0x66B77D, 0x66E304, 0x1B80E1, 0x7A06BC, 0xBFFB1B, 0x618506, 0x7E4D34};

long GetRandomColorByIndex(int index) {
    srand(index);

    int a = 135;
    int r = ((Colors[rand() % sizeof(Colors)] & 0xFF0000) >> 16);
    int g = ((Colors[rand() % sizeof(Colors)] & 0x00FF00) >> 8);
    int b = (Colors[rand() % sizeof(Colors)] & 0x0000FF);

    return IM_COL32(r, g, b, a);
}
// ======================================================================== //
android_app *g_App = 0;
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;
int AutoTargetChoose = 0;

bool WriteAddr(void *addr, void *buffer, size_t length) {
    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    return mprotect((void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}

template<typename T>
void 写入F类(uintptr_t addr, T value) {
    WriteAddr((void *) addr, &value, sizeof(T));
}
void 写入D类(uintptr_t addr,int var){
WriteAddr(reinterpret_cast<void*>(addr),reinterpret_cast<void*>(&var),4);
}
void 写入Q类(uintptr_t addr,int var){

}
void 写入E类(uintptr_t addr,int var){

}
void 写入W类(uintptr_t addr,int var){

}
void 写入A类(uintptr_t addr,int var){

}
template<typename T>
void Write(uintptr_t addr, T value) {
    WriteAddr((void *) addr, &value, sizeof(T));
}
//基质内存

static std::string EXP = " ";
static std::string SLOT = " ";
static std::string modname = " ";
static std::string mod_status = " ";
static std::string credit = " ";
static std::string key = " ";

bool HIDEESP = false;
bool initImGui = false;
bool Report  = true;
bool Reportt  = true;
bool AimBotv22 = false;
bool Head2 = false;
bool Body = false;
bool show_another_bypass = true;
bool show_another_K = false;
bool show_another_KK = false;
bool show_another_KKK = false;
bool show_another_bt = false;
bool show_another_Km = false;
bool show_another_Sp = false;
bool Fire = false;
bool FireScope = false;
bool FlashSdk = false;
int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
float density = -1;
float 自调视角 = 1;

static UEngine *GEngine = 0;
UWorld *GetWorld() {
    while (!GEngine) {
 GEngine = UObject::FindObject<UEngine>("UAEGameEngine Transient.UAEGameEngine_1");
        sleep(1);
          }
    if (GEngine) {
    auto ViewPort = GEngine->GameViewport;
     if (ViewPort) {
   return ViewPort->World;
     }   }
    return 0;
       }
       
TNameEntryArray *GetGNames() {
    return ((TNameEntryArray *(*)()) (UE4 + GNames_Offset))();
}

std::vector<AActor *> getActors() {
    auto World = GetWorld();
    if (!World)
        return std::vector<AActor *>();

    auto PersistentLevel = World->PersistentLevel;
    if (!PersistentLevel)
        return std::vector<AActor *>();

    auto Actors = *(TArray<AActor *> *)((uintptr_t) PersistentLevel + Actors_Offset);

    std::vector<AActor *> actors;
    for (int i = 0; i < Actors.Num(); i++) {
        auto Actor = Actors[i];
        if (Actor) {
            actors.push_back(Actor);
        }
    }
    return actors;
}

void DrawText2(float fontSize, ImVec2 position, ImVec4 color, const char *text)
    {
        auto background = ImGui::GetBackgroundDrawList();

        if(background)
        {
            background->AddText(NULL, fontSize, position, ImColor(color.x, color.y, color.z, color.w), text);
        }
    }
// ======================================================================== //
typedef void (*ImGuiDemoMarkerCallback)(const char* file, int line, const char* section, void* user_data);
extern ImGuiDemoMarkerCallback  GImGuiDemoMarkerCallback;
extern void* GImGuiDemoMarkerCallbackUserData;
ImGuiDemoMarkerCallback         GImGuiDemoMarkerCallback = NULL;
void* GImGuiDemoMarkerCallbackUserData = NULL;
#define IMGUI_DEMO_MARKER(section)  do { if (GImGuiDemoMarkerCallback != NULL) GImGuiDemoMarkerCallback(__FILE__, __LINE__, section, GImGuiDemoMarkerCallbackUserData); } while (0)


int (*Display_get_height)(void *);
int (*Display_get_width)(void *);
void *(*Display_get_main)();
void (*Screen_SetResolution)(int width, int height, bool fullscreen);

Vector3 (*WorldToScreenPoint)(void *instance, Vector3);
Vector3 (*Transform_get_position)(void *instance);
void (*get_position)(void *instance, Vector3 *_vectorInstance);
void *(*get_main)();
void *(*get_transform)(void *instance);

static void HelpMarker(const char* desc)
{
    ImGui::TextDisabled("(?)");
    if (ImGui::IsItemHovered())
    {
        ImGui::BeginTooltip();
        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
        ImGui::TextUnformatted(desc);
        ImGui::PopTextWrapPos();
        ImGui::EndTooltip();
    }
}
enum AnimationTypes { STATIC, DYNAMIC, INTERP };

std::string pChar(std::string first_, std::string second_) {
    return (first_ + second_);
}

float Animate(const char* label, const char* second_label, bool if_, float Maximal_, float Speed_, int type) {

    auto ID = ImGui::GetID(pChar(label, second_label).c_str());

    static std::map<ImGuiID, float> pValue;

    auto this_e = pValue.find(ID);

    if (this_e == pValue.end()) {
        pValue.insert({ ID, 0.f });
        this_e = pValue.find(ID);
    }

    switch (type) {

    case DYNAMIC: {
        if (if_) //do
            this_e->second += abs(Maximal_ - this_e->second) / Speed_;
        else
            this_e->second -= (0 + this_e->second) / Speed_;
    }
                break;

    case INTERP: {
        if (if_) //do
            this_e->second += (Maximal_ - this_e->second) / Speed_;
        else
            this_e->second -= (0 + this_e->second) / Speed_;
    }
               break;

    case STATIC: {
        if (if_) //do
            this_e->second += Speed_;
        else
            this_e->second -= Speed_;
    }
               break;
    }

    {
        if (this_e->second < 0.f)
            this_e->second = 0.f;
        else if (this_e->second > Maximal_)
            this_e->second = Maximal_;
    }

    return this_e->second;

}


// ======================================================================== //

enum EAim {
  Distance = 0,
  Croshhair = 1
};

enum EAimTarget {
    Head = 0,
    Chest = 1
};

enum ECount {
  Count =0,
  Countb = 1,
  Countc = 2,
  Countd = 3
  
};




enum EAimTrigger {
    None = 0,
    Shooting = 1,
    Scoping = 2,
    Both = 3,
    Any = 4
};
enum EEsp {
  EspNone =0,
  EspNone1 =0,
  EspTop = 1,
  EspTop1 = 1,
  EspMid = 2,
  EspMid1 = 2,
  EspBottom = 3,
  EspBottom1 = 3
};

std::map<int, bool> Items;
std::map<int, float *> ItemColors;

struct sConfig {
	bool Bypass;
	bool Bypass4;
	bool GLBypass;
	bool CrashFix;
	bool LOGOBYPASS=true;
	bool LogoKmkl;
	bool BypassK;
	float Skeleton1;
	bool Box;
	bool 念辞定制;
	bool 全局离线;
	bool 基址除雾;
	bool 基址无后;
	bool 开火聚点;
	bool 基址防抖;
	bool 基址视角;
	bool 念辞制作;
	float Line1;
	float Line;
	bool Less1;
	bool Bypass1;
	float AimBotSpeed;
	bool Bypass2;
	bool Bypass3;
	float AimDistance;
	float Production;
	bool Lobby;
	bool Lee;
	bool Lbox;
 	float Skill;
	float Skill1;
	float Skill3;
	float Skill4;
	float Skill2;
    float Recc;
	EEsp By;
		EEsp By1;

	float Prid;
	float Pridd;
	float Skeleton;
float Size;
	float RadarX;
	float RadarY;
    float Loot;
bool Antiban;

bool IgnoreKnocked;
bool VisCheck;
bool IgnoreBots;
bool Linee;
bool Radar;
bool Health;
bool Name;
bool Distance;
bool Kmkl;
bool TeamID;
bool Dbox;
bool Weapon;
bool LootBox;
bool Ping;
bool LootI;
bool NoBot;
bool Alert;
bool Air;
bool Warning;
bool Genn;
bool ShowVehicle;
bool VehicleFuel;
bool Ipad;
bool Unlock;
bool Less;
bool Skeletonn;
bool Plane;
bool VehicleHealth;
	
    struct sESPMenu {
		bool CHAMS;
		bool WH;
		bool CHAMSR;
		bool Hunt;
		bool GLOW;
		bool OUTLINE;
        bool Line;
        bool Box;
        bool Skeleton;
        bool Health;
        bool ShowKnockedHealth;
        bool Name;
        bool Distance;
        bool TeamID;
        bool Dbox;
        bool Radar;
        bool Offsc;
        bool Genn;

		
        bool NoBot;
        bool Loot;

		EEsp By;
		ECount Byy;
    };
    sESPMenu ESPMenu;
    
    
    struct sPlayerESP {
       int Aim50;
       int Aim100;
       int Aim150;
       int Aim200;
       int Aim250;
       int Aim300;
       int AimYQ;
	   int gDistance;
        bool ActiveEsp;
		bool 上;
		bool 中;
		bool 下;
		bool AirDrop;
		bool AUTOGOODZ;
		bool AUTOGOODY;
		bool AUTOGOODX;
		bool AUTOGOODXX;
		bool AUTOGOODYY;
		bool Box;
		bool 准心射线;
		bool Alert360;
		bool Box3D;
		bool Health;
		bool Skeleton;
		bool Name;
		bool Radar;
		bool Distance;
		bool TeamID;
		bool Vehicle;
		bool NoBot;
		bool LootBox;
		bool Grenade;
		bool VehicleHP;
		bool VehicleFuel;
		bool Bypass1;
		bool 头部;

	};

	sPlayerESP PlayerESP{0};
    


    struct sHighRisk {
        bool Shake;
        bool Recoil;
        bool Instant;
		bool Ghost;
        bool Para;
	    bool NoFog;
		bool HitEffect;
        bool NoSmoke;
		bool Ammo;
        bool Switch;
        bool AimB;
        bool Damage;
		bool Unlock;
	    bool 念辞定制;
     	bool 全局离线;	    
	    bool 基址除雾;
	    bool 基址无后;
     	bool 开火聚点;
	    bool 基址防抖;
	    bool 基址视角;
	    bool 念辞制作;
    };
    sHighRisk HighRisk{0};
    struct sVehicleESP {
        bool ShowVehicle;
        bool ShowDistance;
    };
    sVehicleESP VehicleESP{0};
     struct sSilentAim {
        bool Enable;
        bool AimBot;
		float Cross;
		
        float Recc;
		EAim By;
        EAimTarget Target;
        EAimTrigger Trigger;
        bool Pred;
        bool ReCo;
        bool IgnoreKnocked;
        bool VisCheck;
		bool IgnoreBots;
    };
    sSilentAim SilentAim{0};
	
	
	struct sAimMenu {
        bool Enable;
        bool AimBot;
        bool AimTarget;
        bool Pred;
        float Recc;
		float Cross;
		float Meter; 
		float Crosss;
		bool AimBotADS;
		EAim By;
		bool ReCo;
        EAimTarget Target;
        EAimTrigger Trigger;
        bool IgnoreKnocked;
        bool VisCheck;
		bool IgnoreBot;
    };

    sAimMenu AimBot{0};
	
	
	
	   struct sOTHER {
        bool FPS;
    };
    sOTHER OTHER{0};

    struct sColorsESP {
		float *Text;
	float *Menucolour;
        float *Line;
        float *Box;
		float *Linebot1;
		float *Line1;
		float *Visline;
		float *Boxbot;
        float *Name;
        float *Distance;
        float *Skeleton;
		 float *Skeletonbot;
         float *Skeletonnon;
         float *BotNn;
         float *BotNv;
         float *PotNn;
         float *PotNv;
		 	float *PVLine;
        float *PVILine;
        float *BVLine;
        float *BVILine;
        float *PVBox;
        float *PVIBox;
        float *BVBox;
        float *BVIBox;
		float *Color;
        float *PVSkeleton;
        float *PVISkeleton;
        float *BVSkeleton;
        float *BVISkeleton;
		float *TeamID;
         
		 float *nonbot;
       //  float *Radar;
		  float *Linebot;
        float *Count;
        float *Vehicle;
		float *Fov;
		
    };
    sColorsESP ColorsESP{0};
};

sConfig Config{0};

static bool Feu;
//static bool HideWindow = true;

#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};
static float isRed = 0.0f, isGreen = 0.01f, isBlue = 0.0f;
// ======================================================================== //
struct sRegion {
    uintptr_t start, end;
};

std::vector<sRegion> trapRegions;

bool isObjectInvalid(UObject *obj) {
    if (!Tools::IsPtrValid(obj)) {
        return true;
    }

    if (!Tools::IsPtrValid(obj->ClassPrivate)) {
        return true;
    }

    if (obj->InternalIndex <= 0) {
        return true;
    }

    if (obj->NamePrivate.ComparisonIndex <= 0) {
        return true;
    }

    if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {
        return true;
    }

    if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end; }) ||
        std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj->ClassPrivate) >= region.start && ((uintptr_t) obj->ClassPrivate) <= region.end; })) {
        return true;
    }

    return false;
}

// ======================================================================== //
/*std::string getObjectPath(UObject *Object) {
    std::string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->NamePrivate.GetName();
    }
    return s;
}
*/

const char *getObjectPath(UObject *Object) {
    std::string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->GetName();
    }
    return s.c_str();
}


// ======================================================================== //
int32_t ToColor(float *col) {
    return ImGui::ColorConvertFloat4ToU32(*(ImVec4 *) (col));
}





#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)
bool isInsideFOVs(int x, int y) {
    if (!Config.AimBot.Cross)
        return true;

    int circle_x = glWidth / 2;
    int circle_y = glHeight / 2;
    int rad = Config.AimBot.Cross*0.5f;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}
       

    
auto GetTargetByCrossDist() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto Actors = getActors();

    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;

                if (Player->TeamID == localPlayer->TeamID)
                    continue;

                if (Player->bDead)
                    continue;

                if (Config.SilentAim.IgnoreKnocked) {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (Config.SilentAim.VisCheck) {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }
                if (Config.SilentAim.IgnoreBots) {
                    if (Player->bEnsure)
                        continue;
                }

                auto Root = Player->GetBonePos("Root", {});
                auto Head = Player->GetBonePos("Head", {});

                FVector2D RootSc, HeadSc;
                if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
                    float height = abs(HeadSc.Y - RootSc.Y);
                    float width = height * 0.65f;

                    FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                        FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

                        float dist = FVector2D::Distance(v2Middle, v2Loc);

                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                    }
                }
            }
        }
    }

    return result;
}


auto GetTargetForAimBot() {
   ASTExtraPlayerCharacter *result = 0;
	float max = std::numeric_limits<float>::infinity();
	auto Actors = getActors();
	auto localPlayer = g_LocalPlayer;
	auto localController = g_LocalController;
	if (localPlayer)
	{
		for (auto Actor : Actors)
		{
			if (isObjectInvalid(Actor))
				continue;
            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;
                auto Target = (ASTExtraPlayerCharacter *) Actor;
                
                float dist = localPlayer->GetDistanceTo(Target) / 100.0f;    
               if (dist > Config.AimBot.Meter)
                    continue;
                    
                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;
                if (Player->TeamID == localPlayer->TeamID)
                    continue;
                if (Player->bDead)
                    continue;
					
					
                              if (Config.AimBot.IgnoreKnocked) {
                            if (Player->Health == 0.0f)
                                continue;
                        }


                        if (Config.AimBot.VisCheck) {
                            if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                                continue;
                        }
                        if (Config.AimBot.IgnoreBot) {
                            if (Player->bEnsure)
                                continue;
                        }

                        auto Root = Player->GetBonePos("Root", {});
				auto Head = Player->GetBonePos("Head", {});
				FVector2D RootSc, HeadSc;
				if (W2S(Root, &RootSc) && W2S(Head, &HeadSc))
				{
					float height = abs(HeadSc.Y - RootSc.Y);
					float width = height * 0.20f;

					FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
					if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight))
					{
						FVector2D v2Middle = FVector2D((float)(glWidth / 2), (float)(glHeight / 2));
						FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
						
						
                                if(isInsideFOVs((int)middlePoint.X, (int)middlePoint.Y)) {

                                float dist = FVector2D::Distance(v2Middle, v2Loc);

                                if (dist < max) {
                                    max = dist;
                                    result = Player;
                                }
                              }
                            }
                        }
                    
                
            }
        }
    }

    return result;
}


//上部分*/

const char *GetVehicleName(ASTExtraVehicleBase *Vehicle) {
    switch (Vehicle->VehicleShapeType) {
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
            return "Motorbike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
            return "Dacia";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
            return "Mini Bus";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
            return "Pick Up";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
            return "Buggy";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
            return "UAZ";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
            return "PG117";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
            return "Aquarail";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
            return "Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
            return "Rony";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
            return "Scooter";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
            return "Snow Mobile";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
            return "Tuk Tuk";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
            return "Snow Bike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
            return "Surf Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
            return "Snow Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
            return "Amphibious";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
            return "Lada Niva";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
            return "UAV";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
            return "Mega Drop";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
            return "Lamborghini";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
            return "Gold Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
            return "Big Foot";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
            return "UH60";
            break;
        default:
            return "Vehicle";
            break;
    }
    return "Vehicle";
}
uint32_t ColorsBack[] = { 0xDECC45, 0x43B5CC, 0x465B6B, 0x4A92C2, 0xBA7E3D, 0xE3D8CF, 0xB0FC5D, 0x54201D, 0x798F28, 0x160C1F, 0xE3AE71, 0x965B53, 0x8F88B5, 0xACE05E, 0x00FCFC, 0xB3B14F, 0x214A30, 0x470A15, 0xF7734F, 0x9B2CDB, 0x2F84A8, 0xA6519A, 0x1BC468, 0xB34F7C, 0x737D47, 0x702A1E, 0x943E42, 0x8CB9ED, 0xD7ED34, 0xCCB885, 0x533659, 0x5842D6, 0x8C969B, 0x4D8F75, 0xC45D3D, 0xD97B59, 0x5E2B19, 0x274C54, 0x700B48, 0x471025, 0x71B6E3, 0x538596, 0xDBD6D3, 0x839931, 0x5D5173, 0x49ADAD, 0xA2CC2D, 0xF5FA66, 0xFCAD00, 0x614C2F };

long GetRandomColorByIndexAlpa(int index) {
	srand(index);
	int a = 220;
	int r = ((ColorsBack[rand() % 50] & 0xFF0000) >> 16);
	int g = ((ColorsBack[rand() % 50] & 0x00FF00) >> 8);
	int b = (ColorsBack[rand() % 50] & 0x0000FF);
	return IM_COL32(r, g, b, a);
}
void (*orig_shoot_event)(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, void *unk1, int unk2) = 0;

void shoot_event(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, ASTExtraShootWeapon *weapon, int unk1) {
 
	
	
	
			
	
	
	if (Config.SilentAim.Enable) {
        
        ASTExtraPlayerCharacter *Target = GetTargetByCrossDist();
       
        if (Target) {
            bool triggerOk = false;
            if (Config.SilentAim.Trigger != EAimTrigger::None) {
                if (Config.SilentAim.Trigger == EAimTrigger::Shooting) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring;
                } else if (Config.SilentAim.Trigger == EAimTrigger::Scoping) {
                    triggerOk = g_LocalPlayer->bIsGunADS;
                } else if (Config.SilentAim.Trigger == EAimTrigger::Both) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
                } else if (Config.SilentAim.Trigger == EAimTrigger::Any) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
                }
            } else triggerOk = true;
            if (triggerOk) {
                
                FVector targetAimPos = Target->GetBonePos("Head", {});
                targetAimPos.Z += 15.f;
                if (Config.SilentAim.Target == EAimTarget::Chest) {
                    targetAimPos.Z -= 25.0f;
                }
                UShootWeaponEntity *ShootWeaponEntityComponent = thiz->ShootWeaponEntityComponent;
                if (ShootWeaponEntityComponent) {
                       if (Config.SilentAim.Pred) {
                                ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                                if (CurrentVehicle) {
                                    FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                                    float dist = g_LocalPlayer->GetDistanceTo(Target);
                            
                                    auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;

                                    targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                                 
                                    
                                    targetAimPos.Z += LinearVelocity.Z * timeToTravel + 0.5 * Config.Line * timeToTravel * timeToTravel;
                               //     LOGD("@source_D1",check_car);
                              //      LOGD("@source_D1",check_aimhook);
                                } else {
                                    FVector Velocity = Target->GetVelocity();                                                                                                 
                                    float dist = g_LocalPlayer->GetDistanceTo(Target);                                                             
                                    auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
                                    
                            
                             targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));

                              targetAimPos.Z += Velocity.Z * timeToTravel + 0.5 * Config.Line * timeToTravel * timeToTravel;
                     
                                }
                            }
                    
							      if (Config.SilentAim.Enable) {
                            if (g_LocalPlayer->bIsGunADS) {
                               if (g_LocalPlayer->bIsWeaponFiring) {
                                float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f;                                                                                 
                                targetAimPos.Z -= dist * Config.SilentAim.Recc;                       
                                }  
                             }
                           }  
							

                    FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, g_LocalController->PlayerCameraManager->CameraCache.POV.Location);
                    rot = UKismetMathLibrary::Conv_VectorToRotator(fDir);
                    
           
                }
            }
        }
    }
    return orig_shoot_event(thiz, start, rot, weapon, unk1);
}



// ================================================================================================================================ //
class FPSCounter {
protected:
    unsigned int m_fps;
    unsigned int m_fpscount;
    long m_fpsinterval;

public:
    FPSCounter() : m_fps(0), m_fpscount(0), m_fpsinterval(0) {
    }

    void update() {
        m_fpscount++;

        if (m_fpsinterval < time(0)) {
            m_fps = m_fpscount;

            m_fpscount = 0;
            m_fpsinterval = time(0) + 1;
        }
    }

    unsigned int get() const {
        return m_fps;
    }
};
FPSCounter fps;


FRotator ToRotator(FVector local, FVector target) {
    FVector rotation = UKismetMathLibrary::Subtract_VectorVector(local, target);

    float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);

    FRotator newViewAngle = {0};
    newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Roll = (float) 0.f;

    if (rotation.X >= 0.f)
        newViewAngle.Yaw += 180.0f;

    return newViewAngle;
}
void VectorAnglesRadar(Vector3 forward, Vector3& angles)
{
    if (forward.X == 0.f && forward.Y == 0.f)
    {
        angles.X = forward.Z > 0.f ? -90.f : 90.f;
        angles.Y = 0.f;
    }
    else
    {
        angles.X = RAD2DEG(atan2(-forward.Z, forward.Z));
        angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
    }
    angles.Z = 0.f;
}

void RotateTriangle(std::array<Vector3, 3>& points, float rotation)
{
    const auto points_center = (points.at(0) + points.at(1) + points.at(2)) / 3;
    for (auto& point : points)
    {
        point = point - points_center;
 
        const auto temp_x = point.X;
        const auto temp_y = point.Y;
 
        const auto theta = DEG2RAD(rotation);
        const auto c = cosf(theta);
        const auto s = sinf(theta);
 
        point.X = temp_x * c - temp_y * s;
        point.Y = temp_x * s + temp_y * c;
 
        point = point + points_center;
    }
}

FVector WorldToRadar(float Yaw, FVector Origin, FVector LocalOrigin, float PosX, float PosY, Vector3 Size, bool &outbuff) {
 bool flag = false;
 double num = (double)Yaw;
 double num2 = num * 0.017453292519943295;
 float num3 = (float)std::cos(num2);
 float num4 = (float)std::sin(num2);
 float num5 = Origin.X - LocalOrigin.X;
 float num6 = Origin.Y - LocalOrigin.Y;
 struct FVector Xector;
 Xector.X = (num6 * num3 - num5 * num4) / 150.f;
 Xector.Y = (num5 * num3 + num6 * num4) / 150.f;
 struct FVector Xector2;
 Xector2.X = Xector.X + PosX + Size.X / 2.f;
 Xector2.Y = -Xector.Y + PosY + Size.Y / 2.f;
 bool flag2 = Xector2.X > PosX + Size.X;
 if (flag2) {
  Xector2.X = PosX + Size.X;
 }else{
  bool flag3 = Xector2.X < PosX;
  if (flag3) {
   Xector2.X = PosX;
  }
 }
 bool flag4 = Xector2.Y > PosY + Size.Y;
 if (flag4) {
  Xector2.Y = PosY + Size.Y;
 }else{
  bool flag5 = Xector2.Y < PosY;
  if (flag5){
   Xector2.Y = PosY;
  }
 }
 bool flag6 = Xector2.Y == PosY || Xector2.X == PosX;
 if (flag6){
  flag = true;
 }
 outbuff = flag;
 return Xector2;
}
void VectorAnglesRadar(Vector3 & forward, FVector & angles) {
	if (forward.X == 0.f && forward.Y == 0.f) {
		angles.X = forward.Z > 0.f ? -90.f : 90.f;
		angles.Y = 0.f;
	} else {
		angles.X = RAD2DEG(atan2(-forward.Z, forward.Magnitude(forward)));
		angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
	}
	angles.Z = 0.f;
}


void Line(ImDrawList *draw,FVector2D origin, FVector2D dest, ImColor color)
{
   draw->AddLine({origin.X, origin.Y},{dest.X, dest.Y},color, 1.0f);
}
bool W2S2(FVector worldPos, FVector2D *screenPos) {
    return g_LocalController->ProjectWorldLocationToScreen(worldPos, true, screenPos);
}
void DrawBoxEnemy(ImDrawList *draw, ImVec2 X, ImVec2 Y, float thicc, int color) {
    draw->AddLine({X.x, X.y}, {Y.x, Y.y}, color, thicc);
}
void Box4Line(ImDrawList *draw, float thicc, int x, int y, int w, int h, int color) {
    int iw = w / 4;
    int ih = h / 4;
    // top
    draw->AddRect(ImVec2(x, y),ImVec2(x + iw, y), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y),ImVec2(x + w, y), color, thicc);
    draw->AddRect(ImVec2(x, y),ImVec2(x, y + ih), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y),ImVec2(x + w - 1, y + ih), color, thicc);;
    // bottom
    draw->AddRect(ImVec2(x, y + h),ImVec2(x + iw, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y + h),ImVec2(x + w, y + h), color, thicc);
    draw->AddRect(ImVec2(x, y + h - ih), ImVec2(x, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y + h - ih), ImVec2(x + w - 1, y + h), color, thicc);
}

void Box3D(ImDrawList *draw, FVector origin, FVector extends, ImColor col) {
    origin.X -= extends.X / 2.f;
    origin.Y -= extends.Y / 2.f;
    origin.Z -= extends.Z / 2.f;
    
    
 FVector one = origin;
 FVector two = origin; two.X += extends.X;
 FVector tree = origin; tree.X += extends.X; tree.Y += extends.Y;
 FVector four = origin; four.Y += extends.Y;

 FVector five = one; five.Z += extends.Z;
 FVector six = two; six.Z += extends.Z;
 FVector seven = tree; seven.Z += extends.Z;
 FVector eight = four; eight.Z += extends.Z;

    FVector2D s1, s2, s3, s4, s5, s6, s7, s8;
    if (W2S2(one, &s1) && W2S2(two, &s2) && W2S2(tree, &s3) && W2S2(four, &s4) &&
    W2S2(five, &s5) && W2S2(six, &s6) && W2S2(seven, &s7) && W2S2(eight, &s8))
    {
        
    Line(draw,s1, s2, col);
    Line(draw,s2, s3, col);
    Line(draw,s3, s4, col);
    Line(draw,s4, s1, col);
 
    Line(draw,s5, s6, col);
    Line(draw,s6, s7, col);
    Line(draw,s7, s8, col);
    Line(draw,s8, s5, col);
 
    Line(draw,s1, s5, col);
    Line(draw,s2, s6, col);
    Line(draw,s3, s7, col);
    Line(draw,s4, s8, col);

}
}
void AimAngle(FRotator &angles) {
    if (angles.Pitch > 180)
        angles.Pitch -= 360;
    if (angles.Pitch < -180)
        angles.Pitch += 360;

    if (angles.Pitch < -75.f)
        angles.Pitch = -75.f;
    else if (angles.Pitch > 75.f)
        angles.Pitch = 75.f;

    while (angles.Yaw < -180.0f)
        angles.Yaw += 360.0f;
    while (angles.Yaw > 180.0f)
        angles.Yaw -= 360.0f;
}


int OpenURL(const char* url)
{
    JavaVM* java_vm = g_App->activity->vm;
    JNIEnv* java_env = NULL;

    jint jni_return = java_vm->GetEnv((void**)&java_env, JNI_VERSION_1_6);
    if (jni_return == JNI_ERR)
        return -1;

    jni_return = java_vm->AttachCurrentThread(&java_env, NULL);
    if (jni_return != JNI_OK)
        return -2;

    jclass native_activity_clazz = java_env->GetObjectClass(g_App->activity->clazz);
    if (native_activity_clazz == NULL)
        return -3;

    jmethodID method_id = java_env->GetMethodID(native_activity_clazz, "AndroidThunkJava_LaunchURL", "(Ljava/lang/String;)V");
    if (method_id == NULL)
        return -4;
        
    jstring retStr = java_env->NewStringUTF(url);
    java_env->CallVoidMethod(g_App->activity->clazz, method_id, retStr);

    jni_return = java_vm->DetachCurrentThread();
    if (jni_return != JNI_OK)
        return -5;

    return 0;
}
  
  std::string deviceBrandModel() {
    if (!g_App)
        return "";

    auto activity = g_App->activity;
    if (!activity)
        return "";

    auto vm = activity->vm;
    if (!vm)
        return "";

    auto object = activity->clazz;
    if (!object)
        return "";

    std::string result;

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);
    
        std::string b;// = Tools::GetDeviceBrand(env);
        //b += " - ";
        b += Tools::GetDeviceModel(env);
    
    vm->DetachCurrentThread();

    return b;
}



void DrawESP(ImDrawList *draw) {

	if (Config.CrashFix) {

}

if (Config.全局离线){
写入D类(gcloud + 0x423620,100000001);
写入D类(gcloud + 0x423640,100000001);
写入D类(gcloud + 0x423678,100000001);
写入D类(gcloud + 0x423694,100000001);
}else{
写入D类(gcloud + 0x423620, 777231668);
写入D类(gcloud + 0x423640, 562755902);
写入D类(gcloud + 0x423678, 425408743);
写入D类(gcloud + 0x423694, 736970802);
}


if (Config.Bypass1)
{
MemoryPatch::createWithHex("libanogs.so",0x4A8EFC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A8F18,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A8F34,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A8F50,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x494398,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x494594,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x494D98,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x4953EC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x49547C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x495618,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x495798,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x495974,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x495C18,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x4963D4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x4974B8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x4978E4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x497FC8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x498684,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x498F04,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x499EA8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x499EF4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x49A430,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x49DC20,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x49DE2C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x49DF84,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x4A04B4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x4A20E4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x4A20FC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x4A5590,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x4A60B0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x4A6204,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x4A6334,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x4A64F8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x4A7B3C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x4A7B4C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x4A8CB8,"h BB FF FF FF FF FF FF FF").Modify();
////删除你源码里面的所有的防值
MemoryPatch::createWithHex("libanogs.so",0x3C2E5C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3C38B0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3CA18C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3CA194,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3CA1A0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3CA31C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3CB2C0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3CBD54,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3CBD84,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3CBD8C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3CBFE8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3CBFF0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3CBFF8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3CC584,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3CC58C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3CC7E8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3CC7F8,"h BB FF FF FF FF FF FF FF").Modify();

MemoryPatch::createWithHex("libanogs.so",0x3CE594,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3CF8D0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3D0334,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3D0364,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3D036C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3D05C8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3D05D0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3D05D8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3D0B64,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3D0B6C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3D0DC8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3D0DD8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3D171C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3D1728,"h BB FF FF FF BB FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3D172C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3DFFB0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3E0020,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3E0818,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3E090C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3E1180,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3E11D8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3E1228,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3E24A8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3E4CB8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3F6EEC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3F6EF4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3F6F0C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3F72C8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3F72D0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3F7FE8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3F7FF0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3F7FF8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x40CED8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A9E5C,"h BB FF FF FF FF FF FF FF").Modify();

MemoryPatch::createWithHex("libanogs.so",0x49445C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x494808,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x494828,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49491C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x494B40,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x494B60,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x494B80,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49555C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49563C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495884,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495A94,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495BB8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495C3C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495C58,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495C78,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495C98,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495CE8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495CF4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495D44,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495D50,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495DC8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495E0C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495E34,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495EA4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495F08,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495F3C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x496128,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x496588,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x497138,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x497478,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4974B0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4975F0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x497B40,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x497C94,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x497D74,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4981DC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x498278,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x498578,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x498B8C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x498E2C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49A100,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49A808,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49AB1C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49AB74,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49B800,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49B970,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C224,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C2A0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C420,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C668,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C8C8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C994,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49CAC8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49CB58,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49CD10,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49CD44,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49D254,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49D394,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49D3B0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49D54C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49D74C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49E434,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49EA58,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49F05C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49F274,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49FD28,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49FFEC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0320,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0620,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0678,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0694,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0938,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0B40,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0B5C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0BC8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0C38,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A9B18,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3E4664,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3E3464,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3BD624,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3AFEA8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3ABDD8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x39E01C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3875EC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3743D0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x34F420,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x34F3CC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x340020,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x33EEE8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x33E7C8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x33E588,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x176064,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x174BE4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x143D40,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x1372E0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x1354CC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x1354B4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x13549C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x135484,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x13381C,"h BB FF FF FF FF FF FF FF").Modify();

MemoryPatch::createWithHex("libanogs.so",0xFDDC0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xFD31C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xFD278,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xFBB90,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xFBB80,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xFBB70,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xFBB60,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xFB8BC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xFB8AC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xFB89C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xFB88C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xE9880,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xE93F0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xE92F8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xE9200,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xE7FAC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xE7F6C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xE7F24,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xE4884,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xDE2AC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xDAF40,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xD9CCC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xD7874,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xD72E0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xD3CC8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xCF88C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x93C34,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x8FD7C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x8EF4C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x8E8D4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x8DFCC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x8DC44,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x8DBAC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x8CAA4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x8CA14,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x8B82C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x8B794,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x8A32C,"h BB FF FF FF FF FF FF FF").Modify();

MemoryPatch::createWithHex("libanogs.so",0x89EB4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x889C4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x8769C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x871C4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x8667C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x86514,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x85EC4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x8592C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x83B7C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x832CC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x8326C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x824DC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x7FEEC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x7F32C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x7F084,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x7EB04,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x7E3F4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x7D9FC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x7C8AC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x7BBC4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x7AD44,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x7A1C4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x76ED4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x75F6C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x75894,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x755A4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x75564,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x6EFB4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x6DB94,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x6D90C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x6D4C4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x6CB4C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x6C30C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x6BA54,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x699C4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x697B4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x69584,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x69354,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x68EEC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x681EC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x67A14,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x6744C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x66F04,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x66A44,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x665CC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x66064,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x65B0C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x655A4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x6501C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x64B0C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x645FC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x63984,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x63624,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x60E14,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x5FDB4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x5F98C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x5EF1C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x5EE74,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x5EABC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x5E664,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x5E2A4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x5DE7C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x5D86C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x5D834,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x5D39C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x5CF44,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x5CBDC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x5B85C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x57654,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x56D04,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x56AF4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x55B5C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x557A4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x53F84,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x53D0C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x53CD4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x538DC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x5324C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x52A6C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49A8C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x48454,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4742C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x47054,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x46B74,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x46A14,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4606C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x45C5C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x43F94,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x43D8C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x438D4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x43494,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4268C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x422D4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x407BC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3E5E4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x347EC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x284D4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x2752C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x21FF4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x2171C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x1AB7C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xE484,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0xE460,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x64EC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x6E04C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x4A9314,"h BB FF FF FF FF FF FF FF").Modify();


}
 if (Config.LOGOBYPASS) {
 
PATCH_LIB("libUE4.so", "0x3E6A9D0", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A9C8", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A9B8", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A9B0", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A9A8", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A9A0", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A998", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A988", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A980", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A970", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A968", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A958", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A950", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A940", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A938", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A928", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A920", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A908", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A8F8", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A8F0", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A8E0", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A8D8", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A8D0", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A8C8", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A8C0", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A8B0", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A8A8", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A898", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A890", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A880", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A878", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A868", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A860", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A850", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A848", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A838", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A830", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A820", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A818", "42 40");
PATCH_LIB("libUE4.so", "0x3E6A808", "42 40");


}
	

    if (Config.Bypass) {
MemoryPatch::createWithHex("libanogs.so",0x4938F4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x493ACC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4941D0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4950F8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495418,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495510,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4956B8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x496474,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x496864,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4968F8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x496C6C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x497140,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x498510,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x498B94,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x498DEC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x499048,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x499128,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49960C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4998A4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49A5B4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C740,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49CE3C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49D490,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49D630,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49D6A4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A004C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A00C4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A1D28,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2168,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2180,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2248,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2384,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A26AC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2ED4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A31B8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A3690,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A36D8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A50A4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A5A38,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A5A4C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A5A78,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A6110,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A647C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A69D0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A6B64,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A6EAC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A6EE0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A70F0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A738C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A73C0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A7864,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A78EC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A792C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A817C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A81A8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A81DC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A8618,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A8BA8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A8E88,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787751F464,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775219B0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877521BD8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787752349C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787752598C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877525BC4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877527518,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877527D18,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877527D4C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787752D224,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775322F8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775330B4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877533344,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787753335C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877533598,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877533A3C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787751F508,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787751FE3C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877520348,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877521A78,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877521BEC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775220A0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877522E64,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775235A0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877523814,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877523C88,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877523D18,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877523D48,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877523D78,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877524594,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775245C4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877524668,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877526AF8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877526D80,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877527EB0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877528618,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877529D90,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787752CCD4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877530C34,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775320DC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787753364C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787753391C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877520318,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877520AD8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775216D8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877522098,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877522630,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877524458,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775254A8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877525970,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877525CC4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877525DF4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877525F70,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877526168,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775262CC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787752647C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877526A64,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877526CEC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877526FC8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775303F0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877530C2C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775311A4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877531430,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877531EA4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877532B04,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877533850,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877533A34,"h BB FF FF FF FF FF FF FF").Modify();
//防禁
MemoryPatch::createWithHex("libanogs.so ",0x78774613E8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877461424,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787751E5D4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787751E698,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787751F634,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787751F9AC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877520734,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877522638,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775232A0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775232B8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775232E8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877523474,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775242CC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877524D48,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775255C8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877525810,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775285D0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775287D0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787752DD24,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787752E6A4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x787752FDFC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877531240,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x7877531F18,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so ",0x78775333C8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x494E0C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x495110,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x496CE0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x496F14,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4982C8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x499354,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x499C9C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49A59C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49AA7C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49B4C0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C0CC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C154,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C2C0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C374,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C478,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C760,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C7F8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49CA90,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49CB24,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49CBF0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49D080,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49D1AC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49D2AC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49DB80,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49DBF4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49DC68,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49DC90,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49DCF8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49DD5C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49DE00,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49DE60,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49DEF4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49DF58,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49DFB8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49E008,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49E06C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49E0E4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49E15C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49E2C4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49E370,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49E7D8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49E94C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49E9B0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49EAF0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49EBD4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49EC38,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49EDD0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49EE4C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49EEB0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49EF0C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49F334,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49F528,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49F5A0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49F7F4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49F87C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49F8F4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49F980,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49F9F8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49FA5C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49FC48,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49FEE8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49FF84,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0070,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A026C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A033C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A03A0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0958,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A09D4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0A90,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0D8C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A1154,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A11C8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A1284,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A130C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A1380,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x125264,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x1252E4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x12B478,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x133D30,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x133E88,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x13B0A8,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x14BA08,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x14BA80,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x1549CC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x154A08,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x155348,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x2A08FC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x2BA680,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x2BA6A4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x2CC86C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x2CC95C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x2F70B4,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x2F7288,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x2F7F3C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x2F7F58,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x2F81E0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x2F830C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x342D50,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3C547C,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x3DB9C0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x420C54,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4741FC,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x476B24,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x478234,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x48B444,"h BB FF FF FF FF FF FF FF").Modify();

MemoryPatch::createWithHex("libanogs.so",0x4A16E0,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A1788,"h BB FF FF FF FF FF FF FF").Modify();
MemoryPatch::createWithHex(OBFUSCATE("libgcloudcore.so"), 0x2770, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[26]
MemoryPatch::createWithHex(OBFUSCATE("libgnustl_shared.so"), 0x3EC4, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[27]
PATCH_LIB("libgcloud.so","0xE2FB0","h BB FF FF FF FF FF FF FF");//[12]
PATCH_LIB("libgcloud.so","0x28063C","h BB FF FF FF FF FF FF FF");//[13]
MemoryPatch::createWithHex(OBFUSCATE("libspecialgem.so"), 0x74C, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[1]
MemoryPatch::createWithHex(OBFUSCATE("libspecialgem.so"), 0xD234, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[2]
MemoryPatch::createWithHex(OBFUSCATE("libGCloudVoice.so"), 0x1010, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[17]
MemoryPatch::createWithHex(OBFUSCATE("libGCloudVoice.so"), 0x4DD94, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[18]
MemoryPatch::createWithHex(OBFUSCATE("libGCloudVoice.so"), 0x18C5D4, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[19]
MemoryPatch::createWithHex(OBFUSCATE("libGCloudVoice.so"), 0x364A50, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[20]
MemoryPatch::createWithHex(OBFUSCATE("libGvoiceNN.so"), 0x171C, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[21]
MemoryPatch::createWithHex(OBFUSCATE("libGvoiceNN.so"), 0x37B0C, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[22]
MemoryPatch::createWithHex(OBFUSCATE("libgcloud.so"), 0x8850C, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[23]
MemoryPatch::createWithHex(OBFUSCATE("libgcloud.so"), 0x45F3F0, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[24]

MemoryPatch::createWithHex(OBFUSCATE("libijkffmpeg.so"), 0x2C5F30, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[12]
MemoryPatch::createWithHex(OBFUSCATE("libijkffmpeg.so"), 0x2C8ED8, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[13]
MemoryPatch::createWithHex(OBFUSCATE("libijkffmpeg.so"), 0x2FAF08, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[14]
MemoryPatch::createWithHex(OBFUSCATE("libijkffmpeg.so"), 0x2FFA8C, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[15]
MemoryPatch::createWithHex(OBFUSCATE("libcubehawk.so"), 0x3600, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[16]
MemoryPatch::createWithHex(OBFUSCATE("libswappy.so"), 0x2F80, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[7]
MemoryPatch::createWithHex(OBFUSCATE("libswappy.so"), 0x552C, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[8]
MemoryPatch::createWithHex(OBFUSCATE("libswappy.so"), 0x48C6C, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[9]
MemoryPatch::createWithHex(OBFUSCATE("libTDataMaster.so"), 0x4D7AC, OBFUSCATE("h BB FF FF FF FF FF FF FF")).Modify();//[25]



}


   
if (Config.开火聚点) {
 Write<float>(UE4 + 0x53F6AC4, 8.47963525e-21);
                }
                              

if (Config.基址防抖) {
Write<float>(UE4 + 0x88195C4, 2.19933704e12);     
                 Write<float>(UE4 + 0x5FA1000, 2.19933704e12);       
                                          }                                


if (Config.基址无后) {
Write<float>(UE4 + 0x53FB620, 8.8411673e-21);                
                }                

if (Config.基址除雾) {
Write<float>(UE4 + 0x7762890, 8.95671814e-21);
Write<float>(UE4 + 0x7764300, 8.95671814e-21);
Write<float>(UE4 + 0x7C38430, 8.95671814e-21);
}

if (Config.基址视角) {
Write<float>(UE4 + 0x320A9F8, 自调视角);
}

draw->AddText(NULL, ((float) density / 15.0f),{(float) glWidth / 150 + glWidth / 15,210},IM_COL32(0, 158, 255, 155), "超级无敌旁路已射入 - 天琪 ");

//draw->AddText(NULL, ((float) density / 15.0f),{(float) glWidth / 150 + glWidth / 15,210},IM_COL32(255, 255, 255, 255), "MATRIX_CHEATZ 2.0");

draw->AddText(NULL, ((float) density / 10.5f),{(float) glWidth / 150 + glWidth / 50,640},IM_COL32(255, 0, 0, 255),OBFUSCATE("天琪公益-2.9-64BIT自瞄版本"));
/*draw->AddText({ ((float) density / 50.0f), 30}, IM_COL32(255, 255, 255, 255), "  DANGER VIP MOD\n  DANGER_Cheat : 容器版本1.0");   
 


   
       if (g_LocalController == 0){
    draw->AddText({ ((float) density / 10.0f), 170},IM_COL32(0, 250, 0, 250),"DANGER:检测到未进入对局");
	    }else{
    draw->AddText({ ((float) density / 10.0f), 170},IM_COL32(255, 0, 0, 255),"DANGER:检测到已进入对局");
    draw->AddText({((float) density / 10.0f), 200}, IM_COL32(255, 0, 0, 255),
                          "已自动连接云端服务器");	    
	}*/
	


   
     if (ImGui::IsMouseDoubleClicked(0)) {   
         HideWindow = !HideWindow;
        }
   
   
   
   
if (Config.SilentAim.Enable || Config.SilentAim.AimBot) {
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), Config.SilentAim.Cross*0.5f, ToColor(Config.ColorsESP.Fov), 200, 0.0f);
                   }
               
	  
          if (Config.AimBot.Enable) {
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), Config.AimBot.Cross*0.5f, ToColor(Config.ColorsESP.Fov), 200, 0.0f);
                   }
   
   
   if (rng) {
        static std::string sExpiredDate = "";
        if (sExpiredDate.empty()) {
            auto lt = localtime(&rng);

            char fmt[512];
            strftime(fmt, sizeof(fmt), "%F %r", lt);

            sExpiredDate = "Expired Time: ";
            sExpiredDate += fmt;
        }

        
            draw->AddText(NULL, ((float) density / 20.0f),{(float) glWidth / 150 + glWidth / 40,650},ImColor(48, 79, 254),
                          sExpiredDate.c_str());
        
    }
   
   
   
auto Actors = getActors();

    int totalEnemies = 0, totalBots = 0;

    ASTExtraPlayerCharacter *localPlayer = 0;
    ASTExtraPlayerController *localController = 0;

 


    for (int i = 0; i < Actors.size(); i++) {
        auto Actor = Actors[i];
        if (isObjectInvalid(Actor))
            continue;

        if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
            localController = (ASTExtraPlayerController *) Actor;
            break;
        }
    }

    if (localController) {
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey == localController->PlayerKey) {
                    localPlayer = (ASTExtraPlayerCharacter *) Actor;
                    break;
                }
            }
        }
                if (Config.Less1 || Config.Less || Config.HighRisk.Shake || Config.HighRisk.Instant || Config.HighRisk.HitEffect) {
                    auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                            auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
                            if (ShootWeaponEntityComp && ShootWeaponEffectComp) {
                                                                if (Config.Less1) {							
									//ShootWeaponEntityComp->AccessoriesVRecoilFactor = 0.1f;
									//ShootWeaponEntityComp->AccessoriesVRecoilFactor = 1;
                                  //  ShootWeaponEntityComp->AccessoriesHRecoilFactor = (float) Config.SilentAim.FOVSize;
									ShootWeaponEntityComp->RecoilKickADS = (float) Config.Size;
                                }

								if (Config.Less) {								
									ShootWeaponEntityComp->AccessoriesVRecoilFactor = 0.1f;
									ShootWeaponEntityComp->AccessoriesHRecoilFactor = 0.2f;
                                }

                                if (Config.HighRisk.Shake) {
                                    ShootWeaponEffectComp->CameraShakeInnerRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakeOuterRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakFalloff = 0.0f;
                                }

                                                                if (Config.HighRisk.HitEffect) {
                                    ShootWeaponEntityComp->ExtraHitPerformScale = 16.0f;
                                    ShootWeaponEntityComp->HUDAlphaDecreaseSpeedScale = -400.0f;
                                }
                                if (Config.HighRisk.Switch) {
                                    ShootWeaponEntityComp->SwitchFromBackpackToIdleTime = 0.0f;
                                    ShootWeaponEntityComp->SwitchFromIdleToBackpackTime = 0.0f;
                                }

                                if (Config.HighRisk.Instant) {
                                    ShootWeaponEntityComp->BulletRange = 100000.0f;

                                }
                                if (Config.HighRisk.Damage) {
                                    ShootWeaponEntityComp->BulletMomentum = 10000000.0f;
                                    ShootWeaponEntityComp->BulletRange = 10000000.0f;
                                    ShootWeaponEntityComp->BaseImpactDamage = 100000000.0f;
                                    ShootWeaponEntityComp->MaxDamageRate = 100000000.0f;
									ShootWeaponEntityComp->BulletTrackDistanceFix = 100000000.0f;

                                }
                                if (Config.HighRisk.AimB) {
                                    ShootWeaponEntityComp->WeaponAimFOV = 10000000.0f;
                                    ShootWeaponEntityComp->WeaponAimInTime = 10000000.0f;
                                    

                                }
	                            if (Config.HighRisk.HitEffect) {
                                    ShootWeaponEntityComp->ExtraHitPerformScale = 50.0f;
                                }
                            }
                        }
						}
                    }
                }

        if (localPlayer) {
            if (localPlayer->PartHitComponent) {
                auto ConfigCollisionDistSqAngles = localPlayer->PartHitComponent->ConfigCollisionDistSqAngles;
                for (int j = 0; j < ConfigCollisionDistSqAngles.Num(); j++) {
                    ConfigCollisionDistSqAngles[j].Angle = 90.0f;
                }
                localPlayer->PartHitComponent->ConfigCollisionDistSqAngles = ConfigCollisionDistSqAngles;
            }

					 
				
				                  if (Config.SilentAim.Enable) {
                    auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                        if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
                            auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                            if (CurrentWeaponReplicated) {
                                auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                if (ShootWeaponComponent) {
                                    int shoot_event_idx = 162;
                                    auto VTable = (void **) ShootWeaponComponent->VTable;
                                    if (VTable && (VTable[shoot_event_idx] != shoot_event)) {
                                        orig_shoot_event = decltype(orig_shoot_event)(
                                                VTable[shoot_event_idx]);
                                        VTable[shoot_event_idx] = (void *) shoot_event;
                                    }
                                }
                            }
                        }
                    }
                }
                //Aimbot//
		  if (Config.AimBot.Enable)
				{
					ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
					if (Target)
					{
						bool triggerOk = false;
						if (Config.AimBot.Trigger != EAimTrigger::Scoping)
						{
							if (Config.AimBot.Trigger == EAimTrigger::None)
							{
								triggerOk = localPlayer->bIsWeaponFiring;
							}
							else if (Config.AimBot.Trigger == EAimTrigger::Shooting)
							{
								triggerOk = localPlayer->bIsGunADS;
							}
							else if (Config.AimBot.Trigger == EAimTrigger::Both)
							{
								triggerOk = localPlayer->bIsWeaponFiring && localPlayer->bIsGunADS;
							}
							else if (Config.AimBot.Trigger == EAimTrigger::Any)
							{
								triggerOk = localPlayer->bIsWeaponFiring || localPlayer->bIsGunADS;
							}
						}
						else
							triggerOk = true;
						if (triggerOk)
						{
						FVector targetAimPos = Target->GetBonePos("Head", {});
							if (Config.AimBot.Target == EAimTarget::Chest)
							{
								targetAimPos.Y -= Config.Skill1;
								targetAimPos.Z -= 150.f;
								targetAimPos.X -= Config.Skill4;
							}
										
							auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
							if (WeaponManagerComponent)
							{
								auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
								if ((int)propSlot.GetValue() >= 1 && (int)propSlot.GetValue() <= 3)
								{
									auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
									if (CurrentWeaponReplicated)
									{
										auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
										if (ShootWeaponComponent)
										{
											UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
											if (ShootWeaponEntityComponent)
											{
												ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
												if (CurrentVehicle)
												{
													FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
													float dist = localPlayer->GetDistanceTo(Target);
													auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
													targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));												
													targetAimPos.Z += LinearVelocity.Z * timeToTravel + 0.7 * Config.Line * timeToTravel * timeToTravel;
													
                     
                    }
												
												else
												{
													FVector Velocity = Target->GetVelocity();
													float dist = g_LocalPlayer->GetDistanceTo(Target);
													auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
													targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
													
												targetAimPos.Z += Velocity.Z * timeToTravel + 0.7 * Config.Line * timeToTravel * timeToTravel;
												           }
                     
                   
												
												if (Config.AimBot.Enable) {
                            if (g_LocalPlayer->bIsGunADS) {
                               if (g_LocalPlayer->bIsWeaponFiring) {
                                float dist = localPlayer->GetDistanceTo(Target) / 100.f;                                                                                 
                                targetAimPos.Z -= dist * Config.Recc;        
                                
                                                          
                                }  
                             }
                           }  
												
												
												localController->SetControlRotation(ToRotator(localController->PlayerCameraManager->CameraCache.POV.Location, targetAimPos),"");
											}
										}
									}
								}
							}
						}
					}
				}
              FVector ViewPosY{0, 0, 0};
                        if (localPlayer) {                   
                        ViewPosY = localPlayer->GetBonePos("Head", {});
                        ViewPosY.Z += 10.f;
                         }         
						 
		   
            
                            
                                            for (int i = 0; i < Actors.size(); i++) {
                            auto Actor = Actors[i];
                            if (isObjectInvalid(Actor))
                            continue;
							

                            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                            auto Player = (ASTExtraPlayerCharacter *) Actor;					
                            if (isObjectInvalid(Actor))
                            continue;
                            long SCOLOR2 = IM_COL32(255, 255, 000, 255); 
							long SCOLORA = IM_COL32(255, 255, 255, 255);					
                            long SCOLOR = IM_COL32(000, 255, 000, 255);
							long SCOLOR1 = IM_COL32(255, 0, 0, 255);
                        
                            if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
                            
							SCOLORA = IM_COL32(10, 250, 250, 255); 
                            SCOLOR2 = IM_COL32(10, 250, 250, 255); 
                            SCOLOR = IM_COL32(10, 250, 250, 255); 
							SCOLOR = IM_COL32(255, 255, 250, 255); 
							SCOLOR1 = IM_COL32(10, 250, 250, 255); 
							
                            }
						    if (Config.Alert) {
						        bool shit = false;
					
							FVector MyPosition, EnemyPosition;
							ASTExtraVehicleBase * CurrentVehiclea = Player->CurrentVehicle;
							if (CurrentVehiclea) {
								MyPosition = CurrentVehiclea->RootComponent->RelativeLocation;
							} else {
								MyPosition = Player->RootComponent->RelativeLocation;
							}
							ASTExtraVehicleBase * CurrentVehicle = localPlayer->CurrentVehicle;
							if (CurrentVehicle) {
								EnemyPosition = CurrentVehicle->RootComponent->RelativeLocation;
							} else {
								EnemyPosition = localPlayer->RootComponent->RelativeLocation;
							}
							FVector EntityPos = WorldToRadar(localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw, MyPosition, EnemyPosition, NULL, NULL, Vector3(glWidth, glHeight, 0), shit);
							FVector angle = FVector();
							Vector3 forward = Vector3((float)(glWidth / 2) - EntityPos.X, (float)(glHeight / 2) - EntityPos.Y, 0.0f);
							VectorAnglesRadar(forward, angle);
							const auto angle_yaw_rad = DEG2RAD(angle.Y + 180.f);
							const auto new_point_x = (glWidth / 2) + (55/*alert dist from me*/) / 2 * 8 * cosf(angle_yaw_rad);
							const auto new_point_y = (glHeight / 2) + (55/*alert dist from me*/) / 2 * 8 * sinf(angle_yaw_rad);
							std::array<Vector3, 3> points { Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y - ((55) / 4 + 3.5f) / 2, 0.f), Vector3(new_point_x + ((90) / 4 + 3.5f) / 4, new_point_y, 0.f), Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y + ((55) / 4 + 3.5f) / 2, 0.f)};
							RotateTriangle(points, angle.Y + 180.f);
							if (Player->bEnsure) {
							draw->AddTriangle(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), SCOLORA, 1.5f);
							draw->AddTriangleFilled(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), SCOLORA);
                            } else {
							draw->AddTriangle(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), SCOLORA, 1.5f);
							draw->AddTriangleFilled(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), SCOLORA);                            
						}
					
		          	}			
					
							
                         float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
                        if (Distance > 500.0f)
                            continue;

                        if (Player->PlayerKey == localController->PlayerKey)
                            continue;

                        if (Player->TeamID == localController->TeamID)
                            continue;

                        if (Player->bDead)
                            continue;

							int healthOutline;
                     //   if (!Player->Mesh)
                        //    continue;
          
                        if (Player->bEnsure)
                            totalBots++;
                        else totalEnemies++;

			
                        if (Config.NoBot)
                            if (Player->bEnsure)
                                continue;

                            else totalEnemies++;
							
					float magic_number = (Distance);
                    float mx = (glWidth / 4) / magic_number;

                    float healthLength = glWidth / 20;
                    if (healthLength < mx) healthLength = mx;
					
                        auto HeadPos = Player->GetBonePos("Head", {});
                        ImVec2 HeadPosSC;

						//if (W2S(HeadPos, (FVector2D *) &HeadSC) && W2S(RootPos, (FVector2D *) &RootSC)) {
						auto upper_r = Player->GetBonePos("upperarm_r", {});
                        ImVec2 upper_rPoSC;
                        auto lowerarm_r = Player->GetBonePos("lowerarm_r", {});
                        ImVec2 lowerarm_rPoSC;
                        auto hand_r = Player->GetBonePos("hand_r", {});
                        ImVec2 hand_rPoSC;
                        auto upper_l = Player->GetBonePos("upperarm_l", {});
                        ImVec2 upper_lPoSC;
                        auto lowerarm_l = Player->GetBonePos("lowerarm_l", {});
                        ImVec2 lowerarm_lSC;
                        auto hand_l = Player->GetBonePos("hand_l", {});
                        ImVec2 hand_lPoSC;
                        auto thigh_l = Player->GetBonePos("thigh_l", {});
                        ImVec2 thigh_lPoSC;
                        auto calf_l = Player->GetBonePos("calf_l", {});
                        ImVec2 calf_lPoSC;
                        auto foot_l = Player->GetBonePos("foot_l", {});
                        ImVec2 foot_lPoSC;
                        auto thigh_r = Player->GetBonePos("thigh_r", {});
                        ImVec2 thigh_rPoSC;
                        auto calf_r = Player->GetBonePos("calf_r", {});
                        ImVec2 calf_rPoSC;
                        auto foot_r = Player->GetBonePos("foot_r", {});
                        ImVec2 foot_rPoSC;
                        auto neck_01 = Player->GetBonePos("neck_01", {});
                        ImVec2 neck_01PoSC;
                        auto Pelvis = Player->GetBonePos("Pelvis", {});
                        ImVec2 PelvisPoSC;
                        auto RootPos = Player->GetBonePos("Root", {});
                        ImVec2 RootPosSC;
                        if (W2S(HeadPos, (FVector2D *) &HeadPosSC) &&
                            W2S(upper_r, (FVector2D *) &upper_rPoSC) &&
                            W2S(upper_l, (FVector2D *) &upper_lPoSC) &&
                            W2S(lowerarm_r, (FVector2D *) &lowerarm_rPoSC) &&
                            W2S(hand_r, (FVector2D *) &hand_rPoSC) &&
                            W2S(lowerarm_l, (FVector2D *) &lowerarm_lSC) &&
                            W2S(hand_l, (FVector2D *) &hand_lPoSC) &&
                            W2S(thigh_l, (FVector2D *) &thigh_lPoSC) &&
                            W2S(calf_l, (FVector2D *) &calf_lPoSC) &&
                            W2S(foot_l, (FVector2D *) &foot_lPoSC) &&
                            W2S(thigh_r, (FVector2D *) &thigh_rPoSC) &&
                            W2S(calf_r, (FVector2D *) &calf_rPoSC) &&
                            W2S(foot_r, (FVector2D *) &foot_rPoSC) &&
                            W2S(neck_01, (FVector2D *) &neck_01PoSC) &&
                            W2S(Pelvis, (FVector2D *) &PelvisPoSC) &&
                            W2S(RootPos, (FVector2D *) &RootPosSC)) {
				
							
							
                      if (Config.Linee) {
                             if (Player->bEnsure) {
                                draw->AddLine({(float) glWidth / 2, 0}, HeadPosSC, SCOLOR, 0.7f);
                            } else {
                                draw->AddLine({(float) glWidth / 2, 0}, HeadPosSC, SCOLOR1, 0.7f);
                            }}
							
							if (Player->bEnsure) {
								if (Config.By1 == EEsp::EspTop1) {						
							draw->AddLine({(float) glWidth / 2, 0}, HeadPosSC, IM_COL32(0, 255, 0, 255),Config.Line); }
							} else {
						if (Config.By == EEsp::EspTop) {
							draw->AddLine({(float) glWidth / 2, 0}, HeadPosSC, GetRandomColorByIndex(Player->TeamID), Config.Line1);
                            }
						  }
						if (Player->bEnsure) {
						if (Config.By1 == EEsp::EspMid1) {						
							draw->AddLine({(float) glWidth / 2, 358}, HeadPosSC, IM_COL32(0, 255, 0, 255),Config.Line); }
							} else {
						if (Config.By == EEsp::EspMid) {
							draw->AddLine({(float) glWidth / 2, 358}, HeadPosSC, GetRandomColorByIndex(Player->TeamID), Config.Line1);
                            }
						 }
						if (Player->bEnsure) {
						if (Config.By1 == EEsp::EspBottom1) {
							draw->AddLine({(float) glWidth / 2, 679}, HeadPosSC, IM_COL32(0, 255, 0, 255), Config.Line); }
							} else {
						if (Config.By == EEsp::EspBottom) {
							draw->AddLine({(float) glWidth / 2, 679}, HeadPosSC, GetRandomColorByIndex(Player->TeamID), Config.Line1);
                            }
						 }
						
                            
                        if (Config.Skeletonn) {
                            static std::vector<std::string> right_arm{"neck_01", "clavicle_r", "upperarm_r", "lowerarm_r", "hand_r", "item_r"};
                            static std::vector<std::string> left_arm{"neck_01", "clavicle_l", "upperarm_l", "lowerarm_l", "hand_l", "item_l"};
                            static std::vector<std::string> spine{"Head", "neck_01", "spine_03", "spine_02", "spine_01", "Pelvis"};
                            static std::vector<std::string> lower_right{"Pelvis", "thigh_r", "calf_r", "foot_r"};
                            static std::vector<std::string> lower_left{"Pelvis", "thigh_l", "calf_l", "foot_l"};
                            static std::vector<std::vector<std::string>> skeleton{right_arm, left_arm, spine, lower_right, lower_left};
                            bool IsVisible = localController->LineOfSightTo(Player, ViewPosY, true);
                            for (auto &boneStructure : skeleton) {
                                std::string lastBone;
                                for (std::string &currentBone : boneStructure) {
                                    if (!lastBone.empty()) {
                                        ImVec2 boneFrom, boneTo;
                                        if (W2S(Player->GetBonePos(lastBone.c_str(), {}), (FVector2D *) &boneFrom) && W2S(Player->GetBonePos(currentBone.c_str(), {}), (FVector2D *) &boneTo)) {
                                          
                                                            if (Player->bEnsure) {
                                                                draw->AddLine(boneFrom, boneTo, SCOLOR2, 0.8f);
                                                                } else {
                                                                draw->AddLine(boneFrom, boneTo, SCOLOR1, 0.8f);
                                                            }
                                                             
                                         
                                      
                                        }
                                    }
                                    lastBone = currentBone;
                                }
                            }
                        }
                        if (Config.Health) {
    int CurHP = (int) std::max(0, std::min((int) Player->Health,100));
	int MaxHP = 100;
    long HpColor;
	if (Player->Health == 100.0f) {
		HpColor = IM_COL32(43,189,65,200);
	} else {
		HpColor = IM_COL32(43,189,65,200);
	}
    draw->AddRectFilled({HeadPosSC.x - 67, HeadPosSC.y - 22}, {HeadPosSC.x - 93 + (1.5 * CurHP), HeadPosSC.y - 16 },HpColor, 0.0f, 0);
    draw->AddRect({HeadPosSC.x - 68   , HeadPosSC.y - 22}, {HeadPosSC.x - 193 + (1.5 * MaxHP), HeadPosSC.y - 15},IM_COL32(0,0,0,255), 0.0f, 0, 2.0f);
    draw->AddRect({HeadPosSC.x - 193 + (1.5 * MaxHP), HeadPosSC.y - 22}, {HeadPosSC.x - 169 + (1.5 * MaxHP), HeadPosSC.y - 15},IM_COL32(0,0,0,255), 0.0f, 0, 2.0f);
    draw->AddRect({HeadPosSC.x - 169 + (1.5 * MaxHP), HeadPosSC.y - 22}, {HeadPosSC.x - 144 + (1.5 * MaxHP), HeadPosSC.y - 15},IM_COL32(0,0,0,255), 0.0f, 0, 2.0f);
    draw->AddRect({HeadPosSC.x - 144 + (1.5 * MaxHP), HeadPosSC.y - 22}, {HeadPosSC.x - 118 + (1.5 * MaxHP), HeadPosSC.y - 15},IM_COL32(0,0,0,255), 0.0f, 0, 2.0f);
    draw->AddRect({HeadPosSC.x - 118 + (1.5 * MaxHP), HeadPosSC.y - 22}, {HeadPosSC.x - 93 + (1.5 * MaxHP), HeadPosSC.y - 15},IM_COL32(0,0,0,255), 0.0f, 0, 2.0f);
	
    if (Player->Health == 0.0f && !Player->bDead) {//--<knocked
        CurHP = (int) std::max(0, std::min((int) Player->NearDeathBreath, 100));
        if (Player->NearDeatchComponent) {
            MaxHP = 100;// Player->NearDeatchComponent->BreathMax; <-- you can replace to it
	        HpColor = IM_COL32(255,0,0,255);
            draw->AddRectFilled({HeadPosSC.x - 67, HeadPosSC.y - 22}, {HeadPosSC.x - 93 + (1.5 * CurHP), HeadPosSC.y - 16 },HpColor, 0.0f, 0);
            draw->AddRect({HeadPosSC.x - 68, HeadPosSC.y - 22}, {HeadPosSC.x - 193 + (1.5 * MaxHP), HeadPosSC.y - 35},IM_COL32(0,0,0,255), 0.0f, 0, 2.0f);
            draw->AddRect({HeadPosSC.x - 193 + (1.5 * MaxHP), HeadPosSC.y - 22}, {HeadPosSC.x - 169 + (1.5 * MaxHP), HeadPosSC.y - 15},IM_COL32(0,0,0,255), 0.0f, 0, 2.0f);
            draw->AddRect({HeadPosSC.x - 169 + (1.5 * MaxHP), HeadPosSC.y - 22}, {HeadPosSC.x - 144 + (1.5 * MaxHP), HeadPosSC.y - 15},IM_COL32(0,0,0,255), 0.0f, 0, 2.0f);
            draw->AddRect({HeadPosSC.x - 144 + (1.5 * MaxHP), HeadPosSC.y - 22}, {HeadPosSC.x - 118 + (1.5 * MaxHP), HeadPosSC.y - 15},IM_COL32(0,0,0,255), 0.0f, 0, 2.0f);
            draw->AddRect({HeadPosSC.x - 118 + (1.5 * MaxHP), HeadPosSC.y - 22}, {HeadPosSC.x - 93 + (1.5 * MaxHP), HeadPosSC.y - 15},IM_COL32(0,0,0,255), 0.0f, 0, 2.0f);
                        }                   
                             }
                             }


										//   if () {
									   if (Onscreenalert) {
							bool shit = false;
							FVector MyPosition, EnemyPosition;
							ASTExtraVehicleBase * CurrentVehiclea = Player->CurrentVehicle;
							if (CurrentVehiclea) {
								MyPosition = CurrentVehiclea->RootComponent->RelativeLocation;
							} else {
								MyPosition = Player->RootComponent->RelativeLocation;
							}
							ASTExtraVehicleBase * CurrentVehicle = localPlayer->CurrentVehicle;
							if (CurrentVehicle) {
								EnemyPosition = CurrentVehicle->RootComponent->RelativeLocation;
							} else {
								EnemyPosition = localPlayer->RootComponent->RelativeLocation;
							}
							FVector EntityPos = WorldToRadar(localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw, MyPosition, EnemyPosition, NULL, NULL, Vector3(glWidth, glHeight, 0), shit);
							FVector angle = FVector();
							Vector3 forward = Vector3((float)(glWidth / 2) - EntityPos.X, (float)(glHeight / 2) - EntityPos.Y, 0.0f);
							VectorAnglesRadar(forward, angle);
							const auto angle_yaw_rad = DEG2RAD(angle.Y + 180.f);
							const auto new_point_x = (glWidth / 2) + (55/*alert dist from me*/) / 2 * 8 * cosf(angle_yaw_rad);
							const auto new_point_y = (glHeight / 2) + (55/*alert dist from me*/) / 2 * 8 * sinf(angle_yaw_rad);
							std::array<Vector3, 3> points { Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y - ((55) / 4 + 3.5f) / 2, 0.f), Vector3(new_point_x + ((90) / 4 + 3.5f) / 4, new_point_y, 0.f), Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y + ((55) / 4 + 3.5f) / 2, 0.f)};
							RotateTriangle(points, angle.Y + 180.f);
							draw->AddTriangle(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), IM_COL32(255, 0, 0, 255), 1.5f);
							draw->AddTriangleFilled(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), IM_COL32(255, 0, 0, 255));
						}
					

                                   if (Config.TeamID) {
                         float boxWidth = density / 2.0f;
                                               boxWidth -= std::min(
                                               ((boxWidth / 2) / 00.0f) * Distance,
                                               boxWidth / 2);
                                               float boxHeight = boxWidth * 0.19f;
                                               std::string s;
                                               s += std::to_string(Player->TeamID);
                                               draw->AddText(NULL, ((float) density / 30.0f),
                                               {HeadPosSC.x - (boxWidth / 1.7),
                                               HeadPosSC.y - (boxHeight * 1.83f)},
                                               IM_COL32(0, 0, 0, 255),
                                               s.c_str());
                        }

                        if (Config.Name) {
                            float boxWidth = density / 20.0f;
                                               boxWidth -= std::min(
                                               ((boxWidth / 2) / 00.0f) * Distance,
                                               boxWidth / 2);
                                               float boxHeight = boxWidth * 0.19f;
                                               std::string s;
                                               if (Player->bEnsure) {
                                               s += "    机器人";
                                               } else {
                                               s += Player->PlayerName.ToString();
                                               }
                                               draw->AddText(NULL, ((float) density / 30.0f),
                                               {HeadPosSC.x - (boxWidth / 3.3),
                                               HeadPosSC.y - (boxHeight * 1.83f)},
                                               IM_COL32(0, 0, 0, 255),
                                               s.c_str());
                        }
							if (Config.Distance) {
                        float boxWidth = density / 1.8f;
                                               boxWidth -= std::min(
                                               ((boxWidth / 2) / 00.0f) * Distance,
                                               boxWidth / 2);
                                               float boxHeight = boxWidth * 0.20f;
                            std::string s;
							        s += "";
                                    s += std::to_string((int) Distance);
                                    s += "m";
         draw->AddText(NULL, ((float) density / 30.0f), {HeadPosSC.x - 20, HeadPosSC.y - 58}, IM_COL32(0, 247, 255, 255), s.c_str());
                    }
                    }
                }


                           /* if (Config.Radar && borders != 0) {
                                std::string extra;
                                std::string aTeamID;
                                aTeamID += std::to_string((int) Player->TeamID);
                                extra += std::to_string((int)Distance);
                                extra += " M";
                                float mScale = glHeight / (float) 1080;
                                float a = 18;
                                if (Player->TeamID < 10) {
                                    a = 8;                                    
                                } else if (Player->TeamID < 100) {
                                    a = 15;
                                }
                                float b = 20;
                                if (Distance < 10) {
                                    b = 10;
                                } else if (Distance < 100) {
                                    b = 15;
                                }
                                auto hintDotRenderPos = pushToScreenBorder(location, screen, borders, - (int)((mScale * 50)));
                                draw->AddCircleFilled(ImVec2(hintDotRenderPos.X, hintDotRenderPos.Y), (float)((mScale * 200) / 4), GetRandomColorByIndexAlpa(Player->TeamID));
                                draw->AddCircleFilled(ImVec2(hintDotRenderPos.X, hintDotRenderPos.Y), (float)((mScale * 200) / 4), GetRandomColorByIndexAlpa(Player->TeamID));
                                draw->AddCircleFilled(ImVec2(hintDotRenderPos.X, hintDotRenderPos.Y), (float)((mScale * 200) / 4), GetRandomColorByIndexAlpa(Player->TeamID));
                                draw->AddText(nullptr, 25.0f, ImVec2(hintDotRenderPos.X - a, hintDotRenderPos.Y- 18), IM_COL32(255, 255, 255, 255), aTeamID.c_str());
                                draw->AddText(nullptr, 15.0f, ImVec2(hintDotRenderPos.X - b, hintDotRenderPos.Y + 5), IM_COL32(255, 255, 255, 255), extra.c_str());
                            }
                        }
                        
                    }
                }
             */
				
				        if (Config.VehicleFuel)
					{
						if (Actors[i]->IsA(ASTExtraVehicleBase::StaticClass()))
						{
							auto Vehicle = (ASTExtraVehicleBase *)Actors[i];
							if (!Vehicle->Mesh)
								continue;
							int CurHP = (int) std::max(0, std::min((int) Vehicle->VehicleCommon->HP, (int) Vehicle->VehicleCommon->HPMax));
                            int MaxHP = (int) Vehicle->VehicleCommon->HPMax;
                            long curHP_Color = IM_COL32(std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255), std::min(((510 * CurHP) / MaxHP), 255), 0, 155);
							float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;
							FVector2D vehiclePos;
							if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos))
							{
								auto mWidthScale = std::min(0.10f * Distance, 50.f);
								auto mWidth = 70.f - mWidthScale;
								auto mHeight = mWidth * 0.15f;
							    if (Config.VehicleFuel)
								{
									std::string sf;
                           sf += "Fuel[";
                           sf += std::to_string((int)(100 * Vehicle->VehicleCommon->Fuel / Vehicle->VehicleCommon->FuelMax));
                                    sf += "]";
                  draw->AddText(NULL, 15.0f, {vehiclePos.X - (mWidth / 2), vehiclePos.Y + 15.f}, IM_COL32(255, 155, 0, 255), sf.c_str());
						}
						
						            if (Config.VehicleHealth)
                                    {
                                    ImVec2 vStart = {vehiclePos.X - (mWidth / 2), vehiclePos.Y - (mHeight * 1.5f)};
                                    ImVec2 vEndFilled = {vStart.x + (CurHP * mWidth / MaxHP), vStart.y + mHeight};
                                    ImVec2 vEndRect = {vStart.x + mWidth, vStart.y + mHeight};
                                    draw->AddRectFilled(vStart, vEndFilled, curHP_Color, 3.2f, 240);
                                    draw->AddRect(vStart, vEndRect, IM_COL32(255, 255, 255, 50), 3.2f, 240);
						}
					}
				}
			}
                      if (Config.ShowVehicle) {
                           if (Actors[i]->IsA(ASTExtraVehicleBase::StaticClass()))
        {
        auto Vehicle = (ASTExtraVehicleBase *)Actors[i];
        if (!Vehicle->Mesh)
        continue;
        int CurHP = (int) std::max(0, std::min((int) Vehicle->VehicleCommon->HP, (int) Vehicle->VehicleCommon->HPMax));
                            int MaxHP = (int) Vehicle->VehicleCommon->HPMax;
                            long curHP_Color = IM_COL32(std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255), std::min(((510 * CurHP) / MaxHP), 255), 0, 155);
        float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;
        FVector2D vehiclePos;
        if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos))
        {
        auto mWidthScale = std::min(0.10f * Distance, 50.f);
        auto mWidth = 70.f - mWidthScale;
        auto mHeight = mWidth * 0.15f;
        if (Config.ShowVehicle)
        {
         std::string s = GetVehicleName(Vehicle);
             s += " [";
            s += std::to_string((int)Distance);
            s += " M]";
                draw->AddText(NULL, 15.0f, {vehiclePos.X - (mWidth / 2), vehiclePos.Y}, IM_COL32(255, 255, 255, 255), s.c_str());
                                }
                            }
                        }}
						
					
						
				   if (Config.Plane) {
                    if (Actors[i]->IsA(AAirDropPlane::StaticClass())) {
                        auto AirDropPlane = (AAirDropPlane *) Actors[i];

                        auto RootComponent = AirDropPlane->RootComponent;
                        if (!RootComponent)
                            continue;
                        float Distance = AirDropPlane->GetDistanceTo(localPlayer) / 100.f;
                        FVector2D AirDropPlanePos;
                        if (W2S(AirDropPlane->K2_GetActorLocation(), &AirDropPlanePos)) {
                            std::string s = "Plane";
                            s += " [";
                            s += std::to_string((int) Distance);
                            s += "M]";
                            draw->AddText(NULL, ((float) density / 25.0f), {AirDropPlanePos.X, AirDropPlanePos.Y}, IM_COL32(255, 255, 255, 255), s.c_str());

                        }
                    }
                }		
						
						
                            if (Config.Genn) {
                     if (Actors[i]->IsA(ASTExtraGrenadeBase::StaticClass())) {
                            auto Grenade = (ASTExtraGrenadeBase *) Actors[i];

                            auto RootComponent = Grenade->RootComponent;
                            if (!RootComponent)
                                continue;
                            float Distance = Grenade->GetDistanceTo(localPlayer) / 70.f;
                            FVector2D grenadePos;
                            if (W2S(Grenade->K2_GetActorLocation(), &grenadePos)) {
                                std::string s;
                                s = ICON_FA_BOMB"[Throwable ";
                                s += std::to_string((int) Distance);
                                s += "M]";
                                draw->AddText(NULL, ((float) density / 15.0f), {((float)glWidth / 2) - (glWidth / 10), 100}, IM_COL32(255, 0, 0, 120), "警告! Throwable(s) near you!");
                                draw->AddText(NULL, ((float) density / 25.0f), {grenadePos.X-10, grenadePos.Y-10}, IM_COL32(255, 0, 0, 255), s.c_str());
                            }
                        }
                    }					
						
						      if (Config.Air) {
                    if (Actors[i]->IsA(AAirDropBoxActor::StaticClass())) {
                        auto DropBox = (AAirDropBoxActor *) Actors[i];

                        auto RootComponent = DropBox->RootComponent;
                        if (!RootComponent)
                            continue;
                        float Distance = DropBox->GetDistanceTo(localPlayer) / 100.f;
                        FVector2D DropBoxPos;
                        if (W2S(DropBox->K2_GetActorLocation(), &DropBoxPos)) {
                            std::string s = "AirDrop";
                            s += " [";
                            s += std::to_string((int) Distance);
                            s += "M]";
                            draw->AddText(NULL, ((float) density / 25.0f), {DropBoxPos.X, DropBoxPos.Y}, IM_COL32(255, 255, 255, 255), s.c_str());

                        }
                    }
                }
										if (Config.LootI) {
											
											if (Actors[i]->IsA(APickUpListWrapperActor::StaticClass())) {
										auto Pick = (APickUpListWrapperActor *) Actors[i];
										if (!Pick->RootComponent)
											continue;
										auto PickUpDataList = (TArray<FPickUpItemData>)Pick->GetDataList();
										float Distance = Pick->GetDistanceTo(localPlayer) / 100.f;
										FVector2D PickUpListsPos;
										Vector3 origin, extends;
										if (W2S(Pick->K2_GetActorLocation(), & PickUpListsPos)) {
							
											
												if (Distance <= Config.Loot) {
													auto mWidthScale = std::min(0.1f * Distance, 35.f);
													auto boxWidth = 75.f - mWidthScale;
													auto boxHeight = boxWidth * 0.120f;
													Rect PlayerRect(PickUpListsPos.X - (boxWidth / 2), PickUpListsPos.Y, boxWidth, boxHeight);
													float posY = PickUpListsPos.Y - (PlayerRect.height * 2.0f); // 1.00f // 1.5f
													for (int j = 0; j < PickUpDataList.Num(); j++) {
														std::vector<std::string> s2;
														std::string itm;
														uint32_t tc = 0xFF000000;
														for (auto & category : items_data) {
															for (auto & item : category["Items"]) {
																if (item["itemId"] == PickUpDataList[j].ID.TypeSpecificID) {
																	tc = strtoul(item["itemTextColor"].get<std::string>().c_str(), 0, 16);
																	itm += item["itemName"].get<std::string>();
																	s2.push_back(itm);
																	break;
																}
															}
														}
														if (!s2.empty())  {
															if (PickUpDataList[j].Count > 1) {
																s2.push_back(" * ");
																s2.push_back(std::to_string(PickUpDataList[j].Count));
															}
															std::string s3;
															for (auto & s4 : s2)   {
																s3 += s4;
															}
															draw->AddText(NULL, ((float) density / 22.0f), {PickUpListsPos.X, posY}, tc, s3.c_str());
															posY -= PlayerRect.height * 2.00f; // 1.00f // 1.25f
														}
													}
												}
											}}}
											
											

                       if (Config.LootBox) {
if (Actor->IsA(APickUpListWrapperActor::StaticClass())) {
                                auto LootBox = (APickUpListWrapperActor *) Actor;
                                auto RootComponent = Actor->RootComponent;
                                if (!RootComponent)
                                    continue;
                                float Distance = LootBox->GetDistanceTo(localPlayer) / 100.f;

                                FVector2D lootboxPos;
        if (Config.ColorsESP.Boxbot) {
                                    FVector Hunt;
                            Hunt.X = 70.0f; 
                            Hunt.Y = 70.0f; // Front
                            Hunt.Z = 35.0f; // Height
                                Box3D(draw, LootBox->K2_GetActorLocation(), Hunt, IM_COL32(255, 255, 0, 255));       
                                } 
                                if (W2S(LootBox->K2_GetActorLocation(), &lootboxPos)) {
                                    std::string s = ICON_FA_ARCHIVE"";
                                    s += " [";
                                    s += std::to_string((int) Distance);
                                    s += "M]";

                                    draw->AddText(NULL, ((float) density / 15.0f),
                                                  {lootboxPos.X, lootboxPos.Y},
                                                  IM_COL32(255, 000, 000, 255), s.c_str());
                                }
                            }
                        }
                     if (Actors[i]->IsA(APickUpWrapperActor::StaticClass())) {
                        auto PickUp = (APickUpWrapperActor *) Actors[i];
                        if (Items[PickUp->DefineID.TypeSpecificID]) {
                            auto RootComponent = PickUp->RootComponent;
                            if (!RootComponent)
                                continue;

                            float Distance = PickUp->GetDistanceTo(localPlayer) / 100.f;

                            FVector2D itemPos;
                            if (W2S(PickUp->K2_GetActorLocation(), &itemPos)) {
                                std::string s;
                                uint32_t tc = 0xFF000000;

                                for (auto &category: items_data, sniper1, rifle1, sub1, scope1, ammo1, atta1, medic1, grenade1, mag1, armor1) {
                                    for (auto &item: category["Items"]) {
                                        if (item["itemId"] == PickUp->DefineID.TypeSpecificID) {
                                            s = item["itemName"].get<std::string>();
                                            tc = strtoul(
                                                    item["itemTextColor"].get<std::string>().c_str(),
                                                    0, 16);
                                            break;
                                        }
                                    }
                                }

                                s += " - ";
                                s += std::to_string((int) Distance);
                                s += "m";

                                draw->AddText(NULL, ((float) density / 25.0f),
                                              {itemPos.X, itemPos.Y}, tc, s.c_str());
                            }
                        }
                    }
                }
            }
        

			    if (Config.ESPMenu.Byy == ECount::Count) {
	g_LocalController = localController;
        g_LocalPlayer = localPlayer;

         
 if (totalEnemies + totalBots > 1) {
    int TotalCount = totalEnemies + totalBots;
    std::string s = ICON_FA_EXCLAMATION_TRIANGLE"" + std::to_string(totalEnemies + totalBots) + "<<-天琪公益 [VIP-V2.0]";

    auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 30.0f));
    ImVec2 vStart = {((float) glWidth / 2) - (textSize.x / 2) - 125, 40};
    ImVec2 vEnd = {((float) glWidth / 2) - (textSize.x / 2) + 145, 95};
    draw->AddText(NULL, ((float) density / 7.0f),
                  {((float) glWidth / 2) - (textSize.x / 2) - 145, 51}, IM_COL32(0, 0, 0, 255), s.c_str());
				  draw->AddText(NULL, ((float) density / 7.0f),
                  {((float) glWidth / 2) - (textSize.x / 2) - 145, 51}, IM_COL32(0, 0, 0, 255), s.c_str());
				  draw->AddText(NULL, ((float) density / 7.0f),
                  {((float) glWidth / 2) - (textSize.x / 2) - 145, 49}, IM_COL32(0, 0, 0, 255), s.c_str());
				  draw->AddText(NULL, ((float) density / 7.0f),
                  {((float) glWidth / 2) - (textSize.x / 2) - 145, 50}, IM_COL32(0, 0, 0, 255), s.c_str());
				  draw->AddText(NULL, ((float) density / 7.0f),
                  {((float) glWidth / 2) - (textSize.x / 2) - 145, 49}, IM_COL32(0, 0, 0, 255), s.c_str());
				  draw->AddText(NULL, ((float) density / 7.0f),
                  {((float) glWidth / 2) - (textSize.x / 2) - 145, 50}, IM_COL32(255, 0, 0, 255), s.c_str());
} else {
    std::string s = ICON_FA_EXCLAMATION_TRIANGLE" 0 <<-天琪公益 [VIP-V2.0]";
    auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 30.0f));
    ImVec2 vStart = {((float) glWidth / 2) - (textSize.x / 2) - 125, 40};
    ImVec2 vEnd = {((float) glWidth / 2) - (textSize.x / 2) + 145, 95};
    draw->AddText(NULL, ((float) density / 7.0f),
                  {((float) glWidth / 2) - (textSize.x / 2) - 145, 51}, IM_COL32(0, 0, 0, 255), s.c_str());
				  draw->AddText(NULL, ((float) density / 7.0f),
                  {((float) glWidth / 2) - (textSize.x / 2) - 145, 51}, IM_COL32(0, 0, 0, 255), s.c_str());
				  draw->AddText(NULL, ((float) density / 7.0f),
                  {((float) glWidth / 2) - (textSize.x / 2) - 145, 49}, IM_COL32(0, 0, 0, 255), s.c_str());
				  draw->AddText(NULL, ((float) density / 7.0f),
                  {((float) glWidth / 2) - (textSize.x / 2) - 145, 50}, IM_COL32(0, 0, 0, 255), s.c_str());
				  draw->AddText(NULL, ((float) density / 7.0f),
                  {((float) glWidth / 2) - (textSize.x / 2) - 145, 49}, IM_COL32(0, 0, 0, 255), s.c_str());
				  draw->AddText(NULL, ((float) density / 7.0f),
                  {((float) glWidth / 2) - (textSize.x / 2) - 145, 50}, IM_COL32(255, 0, 0, 255), s.c_str());			    
        }
        }
    if (Config.ESPMenu.Byy == ECount::Countb) {
		           g_LocalController = localController;
		g_LocalPlayer = localPlayer;
        if (totalEnemies > 0 || totalBots > 0)
        {
            std::string s;
            if (totalEnemies + totalBots < 10)
            {
                s += " E [";
                s += std::to_string((int)totalEnemies);
                s += "] - [";
                s += std::to_string((int)totalBots);
                s += "] B";
            } else {
                s += "E [";
                s += std::to_string((int)totalEnemies);
                s += "] - [";
                s += std::to_string((int)totalBots);
                s += "] B";
            }
            draw->AddRectFilled(ImVec2(glWidth / 2 - 80, 50), ImVec2(glWidth / 2 + 80, 120), IM_COL32(255, 165, 0, 120), 15.0f);
            draw->AddRect(ImVec2(glWidth / 2 - 80, 50), ImVec2(glWidth / 2 + 80, 120), IM_COL32(255, 165, 0, 80), 15.0f, 0, 2.5f);
            draw->AddText(nullptr, ((float)density / 16.5f), ImVec2(glWidth / 2 - 71, 70), IM_COL32(0, 0, 0, 255), s.c_str());
        } else {
            std::string s;
            s += "E [";
            s += std::to_string((int)totalEnemies);
            s += "] - [";
            s += std::to_string((int)totalBots);
            s += "] B";
            draw->AddRectFilled(ImVec2(glWidth / 2 - 80, 50), ImVec2(glWidth / 2 + 80, 120), IM_COL32(0, 255, 0, 120), 15.0f);
            draw->AddRect(ImVec2(glWidth / 2 - 80, 50), ImVec2(glWidth / 2 + 80, 120), IM_COL32(0, 255, 0, 80), 15.0f, 0, 2.5f);
            draw->AddText(nullptr, ((float)density / 16.5f), ImVec2(glWidth / 2 - 58, 70), IM_COL32(0, 0, 0, 255), s.c_str());
        }
		}
		
		if (Config.ESPMenu.Byy == ECount::Countc) {
		g_LocalController = localController;
        g_LocalPlayer = localPlayer;

        if (totalEnemies + totalBots > 0) {
            std::string s;
            if (totalEnemies + totalBots < 10)
                s += "     ";
            else s += "    ";
            s += std::to_string((int) totalEnemies + totalBots);
            draw->AddRectFilled(ImVec2(glWidth / 2 - 80, 50), ImVec2(glWidth / 2 + 80, 90), IM_COL32(227, 177, 39, 38));
            draw->AddRectFilled(ImVec2(glWidth / 2 - 72, 50), ImVec2(glWidth / 2 + 72, 90), IM_COL32(227, 177, 39, 38));
            draw->AddRectFilled(ImVec2(glWidth / 2 - 64, 50), ImVec2(glWidth / 2 + 64, 90), IM_COL32(227, 177, 39, 38));
            draw->AddRectFilled(ImVec2(glWidth / 2 - 60, 50), ImVec2(glWidth / 2 + 60, 90), IM_COL32(227, 177, 39, 38));
            draw->AddRectFilled(ImVec2(glWidth / 2 - 56, 50), ImVec2(glWidth / 2 + 56, 90), IM_COL32(227, 177, 39, 38));
            draw->AddRectFilled(ImVec2(glWidth / 2 - 52, 50), ImVec2(glWidth / 2 + 52, 90), IM_COL32(227, 177, 39, 38));
            draw->AddRectFilled(ImVec2(glWidth / 2 - 48, 50), ImVec2(glWidth / 2 + 48, 90), IM_COL32(227, 177, 39, 38));
            draw->AddRectFilled(ImVec2(glWidth / 2 - 44, 50), ImVec2(glWidth / 2 + 44, 90), IM_COL32(227, 177, 39, 38));
            draw->AddText(nullptr, ((float) density / 12.5f), ImVec2(glWidth / 2 - 70.f, 50), IM_COL32(1, 1, 1, 255), s.c_str());
        } else{
            std::string s;
            s += "安全";
            draw->AddRectFilled(ImVec2(glWidth / 2 - 80, 50), ImVec2(glWidth / 2 + 80, 90), IM_COL32(0, 255, 0, 38));
            draw->AddRectFilled(ImVec2(glWidth / 2 - 72, 50), ImVec2(glWidth / 2 + 72, 90), IM_COL32(0, 255, 0, 38));
            draw->AddRectFilled(ImVec2(glWidth / 2 - 64, 50), ImVec2(glWidth / 2 + 64, 90), IM_COL32(0, 255, 0, 38));
            draw->AddRectFilled(ImVec2(glWidth / 2 - 60, 50), ImVec2(glWidth / 2 + 60, 90), IM_COL32(0, 255, 0, 38));
            draw->AddRectFilled(ImVec2(glWidth / 2 - 56, 50), ImVec2(glWidth / 2 + 56, 90), IM_COL32(0, 255, 0, 38));
            draw->AddRectFilled(ImVec2(glWidth / 2 - 52, 50), ImVec2(glWidth / 2 + 52, 90), IM_COL32(0, 255, 0, 38));
            draw->AddRectFilled(ImVec2(glWidth / 2 - 48, 50), ImVec2(glWidth / 2 + 48, 90), IM_COL32(0, 255, 0, 38));
            draw->AddRectFilled(ImVec2(glWidth / 2 - 44, 50), ImVec2(glWidth / 2 + 44, 90), IM_COL32(0, 255, 0, 38));
            draw->AddText(nullptr, ((float) density / 12.5f), ImVec2(glWidth / 2 - 50.f, 50), IM_COL32(1, 1, 1, 255), s.c_str());
        }
		}

           if (Config.ESPMenu.Byy == ECount::Countd) {
            g_LocalController = localController;
            g_LocalPlayer = localPlayer;
			
				
            if (totalEnemies > 0) {

                int TotalCount = totalEnemies;

                long CountClr;
                if (TotalCount > 10) {

                    CountClr = IM_COL32(254, 0, 0, 255);

                } else if (TotalCount > 5) {

                    CountClr = IM_COL32(255, 119, 0, 255);

                } else if (TotalCount > 0) {

                    CountClr = IM_COL32(255, 255, 0, 255);

                }
                std::string s;


                s = "Enemies around you: ";

                s += std::to_string(TotalCount);

                auto textSize = ImGui::CalcTextSize(s.c_str(), 0, ((float) density / 125.5f));

                ImVec2 vStart = {((float) glWidth / 2) - (textSize.x / 2) - 125, 80};
                ImVec2 vEnd = {((float) glWidth / 2) - (textSize.x / 2) + 140, 135};
                draw->AddRect(vStart, vEnd, CountClr, 5.0f, 240, 2.0f);
                draw->AddRectFilled(vStart, vEnd, IM_COL32(0, 0, 0, 140), 5.0f, 240);
                draw->AddText(NULL, ((float) density / 17.5f),
                              {((float) glWidth / 2) - (textSize.x / 2) - 105, 93}, CountClr, s.c_str());
            } else {


                std::string s;
                int TotalCount = totalEnemies + totalBots;
                s = "Enemies around you: ";

                s += std::to_string(TotalCount);

                auto textSize = ImGui::CalcTextSize(s.c_str(), 0, ((float) density / 125.5f));
                ImVec2 vStart = {((float) glWidth / 2) - (textSize.x / 2) - 125, 80};
                ImVec2 vEnd = {((float) glWidth / 2) - (textSize.x / 2) + 140, 135};
                draw->AddRect(vStart, vEnd, IM_COL32(255, 255, 255, 255), 5.0f, 240, 2.0f);
                draw->AddRectFilled(vStart, vEnd, IM_COL32(0, 0, 0, 140), 5.0f, 240);
                draw->AddText(NULL, ((float) density / 17.5f),
                              {((float) glWidth / 2) - (textSize.x / 2) - 105, 93},
                              ToColor(Config.ColorsESP.Text), s.c_str());
}
} 
        
draw->AddText(nullptr, ((float) density / 12.5f), ImVec2(glWidth / 2 - 50.f, 50), IM_COL32(255, 0, 0, 255),
                          " "); 

        fps.update();
    

					
			
               

		}
			   
			   

// ======================================================================== //
   
    std::string getClipboardText() {
    if (!g_App)
        return "";

    auto activity = g_App->activity;
    if (!activity)
        return "";

    auto vm = activity->vm;
    if (!vm)
        return "";

    auto object = activity->clazz;
    if (!object)
        return "";

    std::string result;

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);
    {
        auto ContextClass = env->FindClass("android/content/Context");
        auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");

        auto str = env->NewStringUTF("clipboard");
        auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);
        env->DeleteLocalRef(str);

        auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
        auto getText = env->GetMethodID(ClipboardManagerClass, "getText", "()Ljava/lang/CharSequence;");

        auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
        auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString", "()Ljava/lang/String;");

        auto text = env->CallObjectMethod(clipboardManager, getText);
        if (text) {
            str = (jstring) env->CallObjectMethod(text, toStringMethod);
            result = env->GetStringUTFChars(str, 0);
            env->DeleteLocalRef(str);
            env->DeleteLocalRef(text);
        }

        env->DeleteLocalRef(CharSequenceClass);
        env->DeleteLocalRef(ClipboardManagerClass);
        env->DeleteLocalRef(clipboardManager);
        env->DeleteLocalRef(ContextClass);
    }
    vm->DetachCurrentThread();

    return result;
}

const char *GetAndroidID(JNIEnv *env, jobject context) {
    jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
    jmethodID getContentResolverMethod = env->GetMethodID(contextClass, /*getContentResolver*/ StrEnc("E8X\\7r7ys_Q%JS+L+~", "\x22\x5D\x2C\x1F\x58\x1C\x43\x1C\x1D\x2B\x03\x40\x39\x3C\x47\x3A\x4E\x0C", 18).c_str(), /*()Landroid/content/ContentResolver;*/ StrEnc("8^QKmj< }5D:9q7f.BXkef]A*GYLNg}B!/L", "\x10\x77\x1D\x2A\x03\x0E\x4E\x4F\x14\x51\x6B\x59\x56\x1F\x43\x03\x40\x36\x77\x28\x0A\x08\x29\x24\x44\x33\x0B\x29\x3D\x08\x11\x34\x44\x5D\x77", 35).c_str());
    jclass settingSecureClass = env->FindClass(/*android/provider/Settings$Secure*/ StrEnc("T1yw^BCF^af&dB_@Raf}\\FS,zT~L(3Z\"", "\x35\x5F\x1D\x05\x31\x2B\x27\x69\x2E\x13\x09\x50\x0D\x26\x3A\x32\x7D\x32\x03\x09\x28\x2F\x3D\x4B\x09\x70\x2D\x29\x4B\x46\x28\x47", 32).c_str());
    jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, /*getString*/ StrEnc("e<F*J5c0Y", "\x02\x59\x32\x79\x3E\x47\x0A\x5E\x3E", 9).c_str(), /*(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;*/ StrEnc("$6*%R*!XO\"m18o,0S!*`uI$IW)l_/_knSdlRiO1T`2sH|Ouy__^}%Y)JsQ:-\"(2_^-$i{?H", "\x0C\x7A\x4B\x4B\x36\x58\x4E\x31\x2B\x0D\x0E\x5E\x56\x1B\x49\x5E\x27\x0E\x69\x0F\x1B\x3D\x41\x27\x23\x7B\x09\x2C\x40\x33\x1D\x0B\x21\x5F\x20\x38\x08\x39\x50\x7B\x0C\x53\x1D\x2F\x53\x1C\x01\x0B\x36\x31\x39\x46\x0C\x15\x43\x2B\x05\x30\x15\x41\x43\x46\x55\x70\x0D\x59\x56\x00\x15\x58\x73", 71).c_str());

    auto obj = env->CallObjectMethod(context, getContentResolverMethod);
    auto str = (jstring) env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF(/*android_id*/ StrEnc("ujHO)8OfOE", "\x14\x04\x2C\x3D\x46\x51\x2B\x39\x26\x21", 10).c_str()));
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceModel(JNIEnv *env) {
    jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("m5I{GKGWBP-VOxkA", "\x0C\x5B\x2D\x09\x28\x22\x23\x78\x2D\x23\x02\x14\x3A\x11\x07\x25", 16).c_str());
    jfieldID modelId = env->GetStaticFieldID(buildClass, /*MODEL*/ StrEnc("|}[q:", "\x31\x32\x1F\x34\x76", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

    auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceBrand(JNIEnv *env) {
    jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("0iW=2^>0zTRB!B90", "\x51\x07\x33\x4F\x5D\x37\x5A\x1F\x15\x27\x7D\x00\x54\x2B\x55\x54", 16).c_str());
    jfieldID modelId = env->GetStaticFieldID(buildClass, /*BRAND*/ StrEnc("@{[FP", "\x02\x29\x1A\x08\x14", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

    auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetPackageName(JNIEnv *env, jobject context) {
    jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
    jmethodID getPackageNameId = env->GetMethodID(contextClass, /*getPackageName*/ StrEnc("YN4DaP)!{wRGN}", "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18", 14).c_str(), /*()Ljava/lang/String;*/ StrEnc("VnpibEspM(b]<s#[9cQD", "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F", 20).c_str());

    auto str = (jstring) env->CallObjectMethod(context, getPackageNameId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid) {
    jclass uuidClass = env->FindClass(/*java/util/UUID*/ StrEnc("B/TxJ=3BZ_]SFx", "\x28\x4E\x22\x19\x65\x48\x47\x2B\x36\x70\x08\x06\x0F\x3C", 14).c_str());

    auto len = strlen(uuid);

    jbyteArray myJByteArray = env->NewByteArray(len);
    env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *) uuid);

    jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, /*nameUUIDFromBytes*/ StrEnc("P6LV|'0#A+zQmoat,", "\x3E\x57\x21\x33\x29\x72\x79\x67\x07\x59\x15\x3C\x2F\x16\x15\x11\x5F", 17).c_str(), /*([B)Ljava/util/UUID;*/ StrEnc("sW[\"Q[W3,7@H.vT0) xB", "\x5B\x0C\x19\x0B\x1D\x31\x36\x45\x4D\x18\x35\x3C\x47\x1A\x7B\x65\x7C\x69\x3C\x79", 20).c_str());
    jmethodID toStringMethod = env->GetMethodID(uuidClass, /*toString*/ StrEnc("2~5292eW", "\x46\x11\x66\x46\x4B\x5B\x0B\x30", 8).c_str(), /*()Ljava/lang/String;*/ StrEnc("P$BMc' #j?<:myTh_*h0", "\x78\x0D\x0E\x27\x02\x51\x41\x0C\x06\x5E\x52\x5D\x42\x2A\x20\x1A\x36\x44\x0F\x0B", 20).c_str());

    auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
    auto str = (jstring) env->CallObjectMethod(obj, toStringMethod);
    return env->GetStringUTFChars(str, 0);
}

struct MemoryStruct {
    char *memory;
    size_t size;
};
static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    size_t realsize = size * nmemb;
    struct MemoryStruct *mem = (struct MemoryStruct *) userp;

    mem->memory = (char *) realloc(mem->memory, mem->size + realsize + 1);
    if (mem->memory == NULL) {
        return 0;
    }

    memcpy(&(mem->memory[mem->size]), contents, realsize);
    mem->size += realsize;
    mem->memory[mem->size] = 0;

    return realsize;
}

std::string Login(const char *user_key) {
    if (!g_App)
        return "Internal Error";

    auto activity = g_App->activity;
    if (!activity)
        return "Internal Error";

    auto vm = activity->vm;
    if (!vm)
        return "Internal Error";

    auto object = activity->clazz;
    if (!object)
        return "Internal Error";

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);

    std::string hwid = user_key;
    hwid += GetAndroidID(env, object);
    hwid += GetDeviceModel(env);
    hwid += GetDeviceBrand(env);

    std::string UUID = GetDeviceUniqueIdentifier(env, hwid.c_str());

    vm->DetachCurrentThread();

    std::string errMsg;

    struct MemoryStruct chunk{};
    chunk.memory = (char *) malloc(1);
    chunk.size = 0;
//https://bantai.vipbombay.online/connect

//https://bantai.vipbombay.online/
    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();


    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://Aleidani.com/public/connect") ;

        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, /*https*/ StrEnc("!mLBO", "\x49\x19\x38\x32\x3C", 5).c_str());
        struct curl_slist *headers = NULL;
        headers = curl_slist_append(headers, /*Content-Type: application/x-www-form-urlencoded*/ StrEnc("@;Ls\\(KP4Qrop`b#d3094/r1cf<c<=H)AiiBG6i|Ta66s2[", "\x03\x54\x22\x07\x39\x46\x3F\x7D\x60\x28\x02\x0A\x4A\x40\x03\x53\x14\x5F\x59\x5A\x55\x5B\x1B\x5E\x0D\x49\x44\x4E\x4B\x4A\x3F\x04\x27\x06\x1B\x2F\x6A\x43\x1B\x10\x31\x0F\x55\x59\x17\x57\x3F", 47).c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

        char data[4096];
        sprintf(data, /*game=PUBG&user_key=%s&serial=%s*/ StrEnc("qu2yXK,YkJyGD@ut0.u~Nb'5(:.:chK", "\x16\x14\x5F\x1C\x65\x1B\x79\x1B\x2C\x6C\x0C\x34\x21\x32\x2A\x1F\x55\x57\x48\x5B\x3D\x44\x54\x50\x5A\x53\x4F\x56\x5E\x4D\x38", 31).c_str(), user_key, UUID.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *) &chunk);

        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);

        res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            try {
                json result = json::parse(chunk.memory);
                if (result[/*status*/ StrEnc("(>_LBm", "\x5B\x4A\x3E\x38\x37\x1E", 6).c_str()] == true) {
                    std::string token = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*token*/ StrEnc("{>3Lr", "\x0F\x51\x58\x29\x1C", 5).c_str()].get<std::string>();
                    time_t rng = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*rng*/ StrEnc("+n,", "\x59\x00\x4B", 3).c_str()].get<time_t>();
                    if (rng + 30 > time(0)) {
                        std::string auth = /*PUBG*/ StrEnc("Q*) ", "\x01\x7F\x6B\x67", 4).c_str();;
                        auth += "-";
                        auth += user_key;
                        auth += "-";
                        auth += UUID;
                        auth += "-";
                        auth += /*Vm8Lk7Uj2JmsjCPVPVjrLa7zgfx3uz9E*/ StrEnc("-2:uwZdV^%]?{{wHs2V,+(^NJU;kC*_{", "\x7B\x5F\x02\x39\x1C\x6D\x31\x3C\x6C\x6F\x30\x4C\x11\x38\x27\x1E\x23\x64\x3C\x5E\x67\x49\x69\x34\x2D\x33\x43\x58\x36\x50\x66\x3E", 32).c_str();
                        std::string outputAuth = Tools::CalcMD5(auth);

                        g_Token = token;
                        g_Auth = outputAuth;

                        bValid = g_Token == g_Auth;
						
					    EXP = result["data"]["EXP"].get<std::string>();
						status = result ["data"]["mod_status"];
                        device = result ["data"]["device"];
                        floating = result ["data"]["credit"];
                        name = result ["data"]["modname"];
                        
                    }
                } else {
                    errMsg = result[/*reason*/ StrEnc("LW(3(c", "\x3E\x32\x49\x40\x47\x0D", 6).c_str()].get<std::string>();
                }
            } catch (json::exception &e) {
                errMsg = "{";
                errMsg += e.what();
                errMsg += "}\n{";
                errMsg += chunk.memory;
                errMsg += "}";
            }
        } else {
            errMsg = curl_easy_strerror(res);
        }
    }
    curl_easy_cleanup(curl);

    return bValid ? "OK" : errMsg;
}

	namespace Settings
{
    static int Tab = 1;
}
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{ @source_D1 }~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \\

EGLBoolean (*orig_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);

EGLBoolean _eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
    eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
    eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
    if (glWidth <= 0 || glHeight <= 0)
        return orig_eglSwapBuffers(dpy, surface);

    if (!g_App)
        return orig_eglSwapBuffers(dpy, surface);

    screenWidth = ANativeWindow_getWidth(g_App->window);
    screenHeight = ANativeWindow_getHeight(g_App->window);
    density = AConfiguration_getDensity(g_App->config);


    if (!initImGui) {
        ImGui::CreateContext();

        ImGuiStyle& style = ImGui::GetStyle();
        style.WindowRounding = 8.0f;
        style.FrameRounding = 7.0f;
        style.ScrollbarRounding = 9;
		style.WindowBorderSize = 4;//2
		style.FrameBorderSize = 3.5;// обводки кнопок

		

        
        style.WindowPadding = ImVec2(6, 8);
        style.FramePadding = ImVec2(4, 3);
        style.Colors[ImGuiCol_Text] = ImColor(255, 255, 255, 255);
        style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.36f, 0.42f, 0.47f, 1.00f);
        style.Colors[ImGuiCol_WindowBg] = ImColor(29, 34, 38, 255);
        style.Colors[ImGuiCol_PopupBg] = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
        style.Colors[ImGuiCol_Border] = ImColor(0, 158, 255, 155);// Zolo Yellow
        style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        style.Colors[ImGuiCol_FrameBg] = ImColor(40, 50, 60, 255);// головне меню
        style.Colors[ImGuiCol_FrameBgHovered] = ImColor(40, 50, 60, 255);
        style.Colors[ImGuiCol_FrameBgActive] = ImColor(40, 50, 60, 255);
        style.Colors[ImGuiCol_TitleBg] = ImColor(0, 0, 0, 155);// сверху окно
        style.Colors[ImGuiCol_TitleBgCollapsed] = ImColor(0, 0, 0, 155);
        style.Colors[ImGuiCol_TitleBgActive] = ImColor(0, 0, 0, 255); //think title bar
        style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.15f, 0.18f, 0.22f, 1.00f);
        style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.39f);
        style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
        style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.18f, 0.22f, 0.25f, 1.00f);
        style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.09f, 0.21f, 0.31f, 1.00f);
        style.Colors[ImGuiCol_CheckMark] = ImVec4(0.28f, 0.56f, 1.00f, 1.00f);
        style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.80f, 0.80f, 0.83f, 0.31f);
        style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
        style.Colors[ImGuiCol_Button] = ImColor(51, 64, 73, 255);
        style.Colors[ImGuiCol_ButtonHovered] = ImColor(51, 64, 73, 255);
        style.Colors[ImGuiCol_ButtonActive] = ImColor(51, 64, 73, 255);
        style.Colors[ImGuiCol_Header] = ImVec4(0.10f, 0.15f, 0.19f, 0.55f);
        style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.16f, 0.19f, 0.15f, 1.00f);
        style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.16f, 0.19f, 0.15f, 1.00f);
        style.Colors[ImGuiCol_ResizeGrip] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
        style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
        style.Colors[ImGuiCol_PlotLines] = ImVec4(0.40f, 0.39f, 0.38f, 0.63f);
        style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.25f, 1.00f, 0.00f, 1.00f);
        style.Colors[ImGuiCol_PlotHistogram] = ImVec4(0.40f, 0.39f, 0.38f, 0.63f);
        style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.25f, 1.00f, 0.00f, 1.00f);
		style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.25f, 1.00f, 0.00f, 0.43f);



        style.ScaleAllSizes(std::max(2.0f, density / 150.0f));//1
        style.ScrollbarSize /= 1;//1

        ImGui_ImplAndroid_Init();
        ImGui_ImplOpenGL3_Init("#version 300 es");
        
           ImGuiIO &io = ImGui::GetIO();
        io.ConfigWindowsMoveFromTitleBarOnly = true;
        io.IniFilename = NULL;

        static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
        ImFontConfig icons_config;

        ImFontConfig CustomFont;
        CustomFont.FontDataOwnedByAtlas = false;

        icons_config.MergeMode = true;
        icons_config.PixelSnapH = true;
        icons_config.OversampleH = 2.5;
        icons_config.OversampleV = 2.5;

       static const ImWchar ranges[] =
{
    0x0020, 0x00FF,
    0x2010, 0x205E,
    0x0600, 0x06FF,
    0xFE00, 0xFEFF,   
    0,
};  

        io.Fonts->AddFontFromMemoryTTF((void *)FGZSXT_data, FGZSXT_size, 30.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 19.0f, &icons_config, icons_ranges);
memset(&Config, 0, sizeof(sConfig));     
// =======/========(================ESPCOLOR ================================== //

           
		
		
         Config.ColorsESP.Line = CREATE_COLOR(255, 0, 0, 255);
		 Config.ColorsESP.Line1 = CREATE_COLOR(255, 255, 255, 255);
		 Config.ColorsESP.Linebot = CREATE_COLOR(255, 0, 0, 255);
		 Config.ColorsESP.Linebot1 = CREATE_COLOR(255, 255, 255, 255);
		 Config.ColorsESP.Skeletonbot = CREATE_COLOR(255, 255, 255, 255);
	     Config.ColorsESP.Boxbot = CREATE_COLOR(255, 255, 255, 255);
         Config.ColorsESP.Box = CREATE_COLOR(255, 0, 255, 255);
         Config.ColorsESP.Name = CREATE_COLOR(255, 0, 0, 255);
         Config.ColorsESP.Distance = CREATE_COLOR(255, 0, 255, 255);
         Config.ColorsESP.Skeleton = CREATE_COLOR(255, 0, 0, 255);
         Config.ColorsESP.Vehicle = CREATE_COLOR(255, 0, 0, 255);
       // Config.ColorsESP.Items = CREATE_COLOR(255, 255, 255, 255);
	     Config.ColorsESP.Fov = CREATE_COLOR(0, 250, 0, 250);
         Config.SilentAim.Cross  = 36.0f;
       //  Config.AimBot.Cross= 150.0f;
         自瞄距离 = 150.0f;
        initImGui = true;
	   
       

      for (auto &i : items_data) {
            for (auto &item : i["Items"]) {
                int r, g, b;
                sscanf(item["itemTextColor"].get<std::string>().c_str(), "#%02X%02X%02X", &r, &g, &b);
                ItemColors[item["itemId"].get<int>()] = CREATE_COLOR(r, g, b, 255);
            }
        }
        initImGui = true;
    }

		
		
		
		
		                    /*
*/
                        
		
		
		
		
		
        
	
	
	
	
	
	
	
	
	
	
    ImGuiIO &io = ImGui::GetIO();

    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplAndroid_NewFrame(glWidth, glHeight);
    ImGui::NewFrame();

    DrawESP(ImGui::GetBackgroundDrawList());

           
ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.38f, (float) glHeight * 0.52f), ImGuiCond_Once); // 45% width 70% height
	static bool p_open = false;
    if (ImGui::Begin(OBFUSCATE("天琪MOD-PUBG MOBILE-VIP2.9丨[ESP+AIM1.0]" ), 0, ImGuiWindowFlags_NoBringToFrontOnFocus )) {
 //if (ImGui::Begin("念辞 Mods", 0,ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoSavedSettings)) {
        static bool isLogin = true, logginIn = true;	// With Key Login
	//static bool isLogin = true, logginIn = true;  // No Key Login
        static std::string err;
        if (!isLogin) {
                ImGui::Text("天琪公益 VIP MOD");

                ImGui::PushItemWidth(-1);
                static char s[64];
                ImGui::InputText("##key", s, sizeof s);
                // auto paste
                auto key = getClipboardText();
                strncpy(s, key.c_str(), sizeof s);
                // auto login

                err = Login(s);
                if (err == "OK") {
                    isLogin = bValid && g_Auth == g_Token;
                }
                ImGui::PopItemWidth();

                ImGui::PushItemWidth(-1);
                if (ImGui::Button(" 请输入你购买的密匙！", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                    auto key = getClipboardText();
                    strncpy(s, key.c_str(), sizeof s);
                }
                ImGui::PopItemWidth();

                ImGui::PushItemWidth(-1);


                if (ImGui::Button("登陆系统服务器", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                    err = Login(s);
                    if (err == "OK") {
                        isLogin = bValid && g_Auth == g_Token;
                    }
                }
                ImGui::PopItemWidth();

                if (!err.empty() && err != "OK") {
                    ImGui::Text("Error: %s", err.c_str());
                }

                ImGui::PopItemWidth();


		    
            } else{ 

              ImGui::Columns(2);
               ImGui::SetColumnOffset(1, 195);
              {
                static ImVec4 active = ImguiPP::to_vec4(51, 64, 73, 255);
                static ImVec4 inactive = ImguiPP::to_vec4(51, 64, 73, 255);
                ImGui::Spacing();
                ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 1 ? active : inactive);
                if (ImGui::Button("透视类", ImVec2(180 - 15, 50)))
                    Settings::Tab = 1;

                ImGui::Spacing();
                ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 2 ? active : inactive);
                if (ImGui::Button("自瞄类", ImVec2(180 - 15, 50)))
                    Settings::Tab = 2;
                ImGui::Spacing();
                ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 2 ? active : inactive);
                if (ImGui::Button("内存类", ImVec2(180 - 15, 50)))
                    Settings::Tab = 3;

                ImGui::Spacing();
                ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 3 ? active : inactive);
                if (ImGui::Button("物资类 ", ImVec2(180 - 15, 50)))
                    Settings::Tab = 4;
                    
                ImGui::Spacing();
                ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 4 ? active : inactive);
;

                if (ImGui::Button("公告类", ImVec2(180 - 15, 50)))
                    Settings::Tab = 5;    
            }
            ImGui::NextColumn();

            if (Settings::Tab == 1) {
                
                            ImGui::Spacing();
							
				ImGui::Text( "天琪 MOD     FPS:%.2f", 1000 / io.Framerate );
						 if(ImGui::Checkbox("一键开启关闭",&Feu))
									{
										if(Feu == 1)
										{
											Config.CrashFix = true;
											Config.Name = true;
										    Config.Linee = true;
											Config.TeamID = true;
										    Config.Health = true;
										   Config.Distance = true;
										   Config.Skeletonn = true;
										Config.LootBox = true;
									Config.Genn = true;
								Onscreenalert = true;
										}
										if(Feu == 0)
										{
											
											
											Config.CrashFix = false;				
											Config.Name = false;
										    Config.Linee = false;
										    Config.TeamID = false;
										    Config.Health = false;
											Config.Distance = false;
											Config.Skeletonn = false;
										Config.LootBox = false;
										Config.Genn = false;
									Onscreenalert = false;
										}
									}
									                if (ImGui::BeginTable("split", 2));{
									    ImGui::TableNextColumn();   
								    ImGui::Checkbox("全局离线", &Config.全局离线);
								    ImGui::TableNextColumn();   
								    ImGui::Checkbox("大厅防一", &Config.Bypass);
								    	ImGui::TableNextColumn();   
								    ImGui::Checkbox("大厅防二", &Config.Bypass1);
								    ImGui::TableNextColumn();   
                                    ImGui::Checkbox("人物名字", &Config.Name);
                                    ImGui::TableNextColumn();
                                    ImGui::Checkbox("人物天线", &Config.Linee);
                                    ImGui::TableNextColumn();
                                    ImGui::Checkbox("团队编号", &Config.TeamID);
                                    ImGui::TableNextColumn();
                                    ImGui::Checkbox("人物距离", &Config.Distance);
                                    ImGui::TableNextColumn();
                                    ImGui::Checkbox("人物血量", &Config.Health);
                                    ImGui::TableNextColumn();
                                    ImGui::Checkbox("人物骨骼", &Config.Skeletonn);
                                    ImGui::TableNextColumn();
                                    ImGui::Checkbox("盒子", &Config.LootBox);
                                    ImGui::TableNextColumn();
									ImGui::Checkbox("手雷", &Config.Genn);
                                    ImGui::TableNextColumn();
									ImGui::Checkbox("预警", &Onscreenalert);		
									ImGui::TableNextColumn();
								    ImGui::Checkbox("忽略人机", &Config.NoBot);
									ImGui::TableNextColumn();						
                                    ImGui::EndTable();
				} 
                                    	} else if (Settings::Tab == 2) {
						ImGui::Spacing();
						 ImGui::Checkbox(("平滑自瞄"), &Config.AimBot.Enable);
                        
		             	static int slider_test_0 = 50;
						ImGui::SliderFloat("范围调节", &Config.AimBot.Cross, 0.0f, 500.0f);

						ImGui::SliderFloat("距离调节 ",&Config.AimBot.Meter, 0.0f, 360.0f);
						
						ImGui::SliderFloat("压枪调节", &Config.Recc, 0.6f, 1.6f);
						 
	         	static const char *triggers[] = {"开火", "开镜"};
	     		ImGui::Combo("自瞄模式", (int *) &Config.AimBot.Trigger, triggers, 2, -1);

                    //    ImGui::Checkbox("Pred", &Config.AimBot.Pred);		
						
                        ImGui::Checkbox("掩体检测", &Config.AimBot.VisCheck);
				        ImGui::Checkbox("无视倒地", &Config.AimBot.IgnoreKnocked);		
                        ImGui::Checkbox("无视人机", &Config.AimBot.IgnoreBot);     
                         	    
					} else if (Settings::Tab == 3) {
                
                   ImGui::Spacing();
                   ImGui::Text("内存功能危险");
                   ImGui::Separator();
                        ImGui::Checkbox("全图除雾", &Config.HighRisk.NoSmoke);
                        ImGui::Checkbox("全枪无后", &Config.基址无后);
                        ImGui::Checkbox("开火聚点", &Config.开火聚点);
                        ImGui::Checkbox("全枪防抖", &Config.基址防抖);   
                        ImGui::Checkbox("平板视角", &平板视角);          
                   //     ImGui::SliderFloat("视角调节", &自调视角, 0.0f, 10.0f, "%.0.0f" );   
                    } else if (Settings::Tab == 4) {
                                    	ImGui::Spacing();
                                    	ImGui::Text("ESP 物资");
                            ImGui::Spacing();
                            for (auto &i : items_data) {
                            if (ImGui::TreeNode(i["Category"].get<std::string>().c_str())) {
                            for (auto &item : i["Items"]) {
                            ImGui::Checkbox(item["itemName"].get<std::string>().c_str(), (bool *) &Items[item["itemId"].get<int>()]);
                            ImGui::SetNextWindowSize(
                            ImVec2((float) glWidth * 0.20f, (float) glHeight * 0.25f), ImGuiCond_Once);
                            ImGui::ColorEdit4(item["itemClass"].get<std::string>().c_str(), ItemColors[item["itemId"].get<int>()],
                            ImGuiColorEditFlags_NoLabel |
                            ImGuiColorEditFlags_PickerHueWheel);


                                    }
                            ImGui::TreePop();
                                }
                            }



               

						} else if (Settings::Tab == 5) {
                            ImGui::Spacing();
				//std::string b = deviceBrandModel();
                     //  ImGui::Text("%s", b.c_str());
 				ImGui::Text("作弊到期时间-  ");
				ImGui::SameLine();
		        ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(252, 69, 3, 255));
				ImGui::Text("公益版本");
				ImGui::PopStyleColor();
				ImGui::Spacing();
				ImGui::Text("官方频道 : @TQMODNB");
				ImGui::SameLine();
		        ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(252, 69, 3, 255));
				ImGui::Text("天琪VIPMOD");
				ImGui::PopStyleColor();
				ImGui::Spacing();
				ImGui::Text("服务器状态 :   ");
				ImGui::SameLine();
	            ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(252, 69, 3, 255));
				ImGui::Text("正在运行...");
				ImGui::PopStyleColor();
				ImGui::Spacing();
				ImGui::Text("作弊版本 :  ");
				ImGui::SameLine();
				
			    ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 0, 255));
				ImGui::Text("AIM-1.0");
				ImGui::PopStyleColor();
				ImGui::Spacing();
			
        }
    
    	   
					    
						}
						}
    	
            ImGui::End();
        ImGui::Render();
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        return orig_eglSwapBuffers(dpy, surface);
        }

    int32_t (*orig_onInputEvent)(struct android_app *app, AInputEvent *inputEvent);

    int32_t onInputEvent(struct android_app *app, AInputEvent *inputEvent) {
        if (initImGui) {
            ImGui_ImplAndroid_HandleInputEvent(inputEvent, {(float) screenWidth / (float) glWidth, (float) screenHeight / (float) glHeight});
        }
        return orig_onInputEvent(app, inputEvent);
    }

#define SLEEP_TIME 1000LL / 60LL
[[noreturn]] void *maps_thread(void *) {
    while (true) {
   auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
   
   
   
               std::vector<sRegion> tmp;
            char line[512];
            FILE *f = fopen("/proc/self/maps", "r");;
            if (f) {
                while (fgets(line, sizeof line, f)) {
                    uintptr_t start, end;
                    char tmpProt[16];
                    if (sscanf(line, "%" PRIXPTR "-%" PRIXPTR " %16s %*s %*s %*s %*s", &start, &end, tmpProt) > 0) {
                        if (tmpProt[0] != 'r') {
                            tmp.push_back({start, end});
                        }
                    }
                }
                fclose(f);
            }
            trapRegions = tmp;
			
        auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
   if (isObjectInvalid(Object))
                continue;
if (平板视角) {
if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainYFOV;
}	
} else
if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainXFOV;
}
                
            if (Config.HighRisk.NoSmoke) {
   
        auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;

         if (Object->IsA(UParticleEmitter::StaticClass())) {
              auto playerChar = (UParticleEmitter *) Object;      
              playerChar->EmitterRenderMode = EEmitterRenderMode::ERM_None;
     playerChar->DetailMode = EDetailMode::DM_MAX;
	 
          }     
		}
     }
                
            
if (Config.HighRisk.NoFog) {
                if (Object->IsA(UExponentialHeightFogComponent::StaticClass())) {
                    auto playerChar = (UExponentialHeightFogComponent *) Object;
                    playerChar->SetFogMaxOpacity(0.0f);
                    playerChar->SetFogDensity(0.0f);
                    playerChar->SetFogHeightFalloff(0.0f);
                    playerChar->SetFogCutoffDistance(0.0f);
                    playerChar->SetStartDistance(0.0f);
                }}
                    
if (Config.HighRisk.Unlock) {
if (Object->IsA(USTExtraGameInstance::StaticClass())) {
auto playerChar = (USTExtraGameInstance *) Object;      
playerChar->UserDetailSetting.PUBGDeviceFPSDef = 90.0f;   
playerChar->UserDetailSetting.PUBGDeviceFPSLow = 90.0f;
playerChar->UserDetailSetting.PUBGDeviceFPSMid = 90.0f;
playerChar->UserDetailSetting.PUBGDeviceFPSHigh = 90.0f;
playerChar->UserDetailSetting.PUBGDeviceFPSHDR = 90.0f;
playerChar->UserDetailSetting.PUBGDeviceFPSUltralHigh = 90.0f;
}}
   }
  
         auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
         std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td),SLEEP_TIME)));
     }
}

void (*oglDrawElements)(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);
void _glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices) {
      if (Config.ESPMenu.WH) {
        GLuint currentProgram = 0;
        glGetIntegerv(GL_CURRENT_PROGRAM, (GLint *) &currentProgram);
        {
            std::lock_guard<std::mutex> lock(playerProgramsMutex);
            if (playerPrograms.find(currentProgram) == playerPrograms.end()) {
                return oglDrawElements(mode, count, type, indices);
            }
        }
        GLfloat depthRange[2];
        glGetFloatv(GL_DEPTH_RANGE, depthRange);
        GLboolean colorWriteMask[4];
        glGetBooleanv(GL_COLOR_WRITEMASK, colorWriteMask);
        GLboolean blend;
        glGetBooleanv(GL_BLEND, &blend);
        if (!blend) {
            glEnable(GL_BLEND);
        }
        glDepthRangef(1.f, 0.0f);
        glColorMask(1, 1, 1, 1);

   
       if (Config.ESPMenu.CHAMS) {
            GLint blendSrc, blendDst;
            glGetIntegerv(GL_BLEND_SRC_ALPHA, &blendSrc);
            glGetIntegerv(GL_BLEND_DST_ALPHA, &blendDst);

            GLfloat blendColor[4];
            glGetFloatv(GL_BLEND_COLOR, blendColor);

            glBlendFunc(GL_CONSTANT_COLOR, GL_ZERO);
            if (Config.ESPMenu.CHAMSR) {
                static float cnt = 0.0f;

                float r = cos(cnt) * .5f + .5f;
                float g = cos(cnt - 2.f * 3.14 / 3.f) * .5f + .5f;
                float b = cos(cnt - 4.f * 3.14 / 3.f) * .5f + .5f;

                if (cnt >= FLT_MAX) {
                    cnt = 0.0f;
                } else {
                    cnt += 0.01f;
                }

                glBlendColor(r, g, b, 1.0f);
            } else {
              glBlendColor(Config.ColorsESP.Color[0], Config.ColorsESP.Color[1], Config.ColorsESP.Color[2], 1.0f);
            }
            oglDrawElements(mode, count, type, indices);

            glBlendColor(blendColor[0], blendColor[1], blendColor[2], blendColor[3]);
            glBlendFunc(blendSrc, blendDst);
        } else {
            oglDrawElements(mode, count, type, indices);
        }
             if (Config.ESPMenu.Hunt) {
			   static float cnt = 0.0f;
			   float r = cos(cnt) * .5f + .5f;
               float g = cos(cnt - 2.f * 3.14 / 3.f) * .5f + .5f;
               float b = cos(cnt - 4.f * 3.14 / 3.f) * .5f + .5f;
                if (cnt >= FLT_MAX) {
                    cnt = 0.0f;
                } else {
                    cnt += 0.01f;
                }
               glDepthRangef(1, 0);
               glEnable(GL_BLEND);
               glColorMask(1, 1, 1, 1);
               glBlendFuncSeparate(GL_CONSTANT_COLOR, GL_CONSTANT_ALPHA, GL_ONE, GL_ZERO);
               glBlendColor(0, 0, 0, 1);
               oglDrawElements(GL_TRIANGLES, count, type, indices);
               glDepthRangef(0.5, 1);
               glBlendColor(r, g, b, 1.0f);
               oglDrawElements(GL_LINES, count, type, indices);
            } else {
              glBlendColor(Config.ColorsESP.Color[0], Config.ColorsESP.Color[1], Config.ColorsESP.Color[2], 1.0f);
            }
			if (Config.ESPMenu.GLOW) {  
		    static float cnt = 0.0f;
			   float r = cos(cnt) * .5f + .5f;
               float g = cos(cnt - 2.f * 3.14 / 3.f) * .5f + .5f;
               float b = cos(cnt - 4.f * 3.14 / 3.f) * .5f + .5f;
                if (cnt >= FLT_MAX) {
                    cnt = 0.0f;
                } else {
                    cnt += 0.01f;
                }
            glEnable(GL_BLEND);
            glColorMask(1, 1, 1, 1);
            glEnable(GL_BLEND);
            glBlendFuncSeparate(GL_CONSTANT_COLOR, GL_CONSTANT_ALPHA, GL_ONE, GL_ZERO);
            glLineWidth(1);
            glDepthRangef(0.5, 1);
            oglDrawElements(GL_LINES, count, type, indices);
            glBlendColor(1, 1, 1, 1);
            glDepthRangef(1, 0.5);
            oglDrawElements(GL_TRIANGLES, count, type, indices);
            } else {
           glBlendColor(Config.ColorsESP.Color[0], Config.ColorsESP.Color[1], Config.ColorsESP.Color[2], 1.0f);
            }
        if (Config.ESPMenu.OUTLINE) {  
		      static float cnt = 0.0f;
			   float r = cos(cnt) * .5f + .5f;
               float g = cos(cnt - 2.f * 3.14 / 3.f) * .5f + .5f;
               float b = cos(cnt - 4.f * 3.14 / 3.f) * .5f + .5f;
                if (cnt >= FLT_MAX) {
                    cnt = 0.0f;
                } else {
                    cnt += 0.01f;
                }
            glDepthRangef(1, 0);
            glLineWidth(1);
            glEnable(GL_BLEND);
            glColorMask(1, 1, 1, 1);
            glEnable(GL_BLEND);
            glBlendFunc(GL_SRC_ALPHA, GL_ONE);
            glBlendFuncSeparate(GL_CONSTANT_COLOR, GL_CONSTANT_ALPHA, GL_ONE, GL_ZERO);
            glBlendColor(0, 0, 0, 1);
            oglDrawElements(GL_TRIANGLES, count, type, indices);
            glDepthRangef(1, 0.5);
            glBlendColor(1, 2, 2, 1);
            oglDrawElements(GL_LINES, count, type, indices);
            } else {
        glBlendColor(Config.ColorsESP.Color[0], Config.ColorsESP.Color[1], Config.ColorsESP.Color[2], 1.0f);
            }
        
        glDepthRangef(depthRange[0], depthRange[1]);
        glColorMask(colorWriteMask[0], colorWriteMask[1], colorWriteMask[2], colorWriteMask[3]);
        if (!blend) {
            glDisable(GL_BLEND);
        }
        return;
    }
    return oglDrawElements(mode, count, type, indices);
}


void (*oglShaderSource)(GLuint shader, GLsizei count, const GLchar **string, const GLint *length);
void _glShaderSource(GLuint shader, GLsizei count, const GLchar **string, const GLint *length) {
    if (!string || !*string) {
        return oglShaderSource(shader, count, string, length);
    }
    if (!count) {
        return oglShaderSource(shader, count, string, length);
    }

    
    if (strstr(*string, MasterMaskShader) || strstr(*string, MasterMaskShader1) || strstr(*string, MasterMaskShader2) || strstr(*string, MasterSkinShader) || strstr(*string, MasterSkinShader2) || strstr(*string, MasterSkinShader3) || strstr(*string, MasterSkinShader4) ||strstr(*string, MasterSkinShader5) || strstr(*string, MasterSkinShader6) || strstr(*string, MasterSkinShader7) || strstr(*string, MasterSkinShader8)) {  
	    GLenum shaderType = 0;
        glGetShaderiv(shader, GL_SHADER_TYPE, reinterpret_cast<GLint *>(&shaderType));
        if (shaderType == GL_VERTEX_SHADER) {
            std::lock_guard<std::mutex> lock{playerShaderMutex};
            playerVertexShader = shader;
        } else if (shaderType == GL_FRAGMENT_SHADER) {
            std::lock_guard<std::mutex> lock{playerShaderMutex};
            playerMaskShader = shader;
        }
    }
    return oglShaderSource(shader, count, string, length);
}

void (*oglAttachShader)(GLuint program, GLuint shader);
void _glAttachShader(GLuint program, GLuint shader) {
    std::unique_lock<std::mutex> ulock{playerShaderMutex};
    if (shader == playerVertexShader || shader == playerMaskShader) {
        ulock.unlock();
        {
            std::lock_guard<std::mutex> lock{playerProgramsMutex};
            playerPrograms.insert(program);
        }
    }
    return oglAttachShader(program, shader);
}

int (*osub_E1172)(const char *a1, unsigned int a2);
int hsub_E1172(const char *a1, unsigned int a2) {
    pthread_exit(NULL);
}
void *HOOK防闪_thread(void *) {
       do {
        sleep(1);
    } while (!isLibraryLoaded("libanort.so"));
HOOK_LIB("libanort.so", "0x12BA2D", hsub_E1172, osub_E1172);//修复奔溃
    return NULL;   
}
void *HOOK防封_thread(void *) {

    return NULL;
}

 void *aviwa_thread(void *) {
    LOGI(OBFUSCATE("pthread created"));
    do {    
   sleep(1);
    } while (!isLibraryLoaded(targetLibName));

    return NULL;
}

 void *main_thread(void *) {
       
        UE4 = Tools::GetBaseAddress("libUE4.so");
        while (!UE4){
        UE4 = Tools::GetBaseAddress("libUE4.so");
        sleep(1);}
        anort = Tools::GetBaseAddress("libanort.so");
        while (!anort){
        anort = Tools::GetBaseAddress("libanort.so");
        sleep(1);}
        anogs = Tools::GetBaseAddress("libanogs.so");
        while (!anogs){
        anogs = Tools::GetBaseAddress("libanogs.so");
        sleep(1);}
        CrashSight = Tools::GetBaseAddress("libCrashSight.so");
        while (!CrashSight){
        CrashSight = Tools::GetBaseAddress("libCrashSight.so");
        sleep(1);}
        while (!g_App){
        g_App = *(android_app **) (UE4 + GNativeAndroidApp_Offset);
        sleep(1);}
        while (!g_App->onInputEvent)
        sleep(1);
        orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
        g_App->onInputEvent = onInputEvent;
		
int (*sub_60A34)(int a1, unsigned char *a2, size_t a3);
	 
        FName::GNames = GetGNames();
        while (!FName::GNames) {
            FName::GNames = GetGNames();
            sleep(1);
        }
        UObject::GUObjectArray = (FUObjectArray *) (UE4 + GUObject_Offset);

        void *egl = dlopen_ex("libEGL.so", 4);
        while (!egl) {
            egl = dlopen_ex("libEGL.so", 4);
            sleep(1);
        }
        
        void *addr = dlsym_ex(egl, "eglSwapBuffers");
        HOOK(addr, _eglSwapBuffers, &orig_eglSwapBuffers);
        dlclose_ex(egl);
        Tools::Hook((void *) DobbySymbolResolver(OBFUSCATE("/system/lib/libEGL.so"), OBFUSCATE("eglSwapBuffers")), (void *) _eglSwapBuffers, (void **) &orig_eglSwapBuffers);

        pthread_t t;
        pthread_create(&t, 0, maps_thread, 0);
        items_data = json::parse(JSON_ITEMS);
        return 0;
    }

    __attribute__((constructor)) void _init() {
        pthread_t t;
        pthread_create(&t, 0, main_thread, 0);
        pthread_create(&t, NULL, HOOK防闪_thread, NULL);
        pthread_create(&t, NULL, HOOK防封_thread, NULL);  
    }



