// System libs
#include <iostream>
#include <thread>
#include <chrono>
#include <EGL/egl.h>
#include <GLES/gl.h>
#include <dlfcn.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <cstdio>
#include <cstring>
#include <string>
#include <cerrno>
#include <android/log.h>
#include <android/native_window.h>


//ImGui API
#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"
#include "imgui_helper.hpp"
#include "imgui/backends/imgui_impl_opengl3.h"
#include "imgui/backends/imgui_impl_android.h"
#include "Snowflake.hpp"
// Fonts

#include "ofdef.h"
#include "pstring.h"
