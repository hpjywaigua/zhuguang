#pragma once
#include<string>
#include<sstream>
#include<vector>
#include<math.h>

#pragma comment (lib, "d3d9.lib")
#pragma comment (lib, "d3dx9.lib")

#define IMGUI_DEFINE_MATH_OPERATORS

namespace BlurData {
    //inline IDirect3DDevice9* device;
}

extern void DrawBackgroundBlur(ImDrawList* drawList);
