#pragma once

#include <map>
#include <jni.h>
#include "Dobby/dobby.h"
#include "Includes.h"
uintptr_t getBaseAddress(std::string_view name);
uintptr_t getEndAddress(std::string_view name);
uintptr_t findPattern(const char *lib, const char *bMask, const char *szMask);
int setPageProtection(void *target, int protection);
void writeMem(void *dst, void *src, int len);

namespace Tools {
	void Hook(void *target, void *replace, void **backup);
	
	bool Read(void *addr, void *buffer, size_t length);
	bool Write(void *addr, void *buffer, size_t length);
	bool ReadAddr(void *addr, void *buffer, size_t length);
	bool WriteAddr(void *addr, void *buffer, size_t length);
	bool SetWriteable(void *addr);
	bool PVM_ReadAddr(void *addr, void *buffer, size_t length);
	bool PVM_WriteAddr(void *addr, void *buffer, size_t length);
	bool IsPtrValid(void *addr);
	
	uintptr_t GetBaseAddress(const char *name);
	uintptr_t GetEndAddress(const char *name);
	uintptr_t FindPattern(const char *lib, const char* pattern);
	uintptr_t GetRealOffsets(const char *libraryName, uintptr_t relativeAddr);
	uintptr_t String2Offset(const char *c);
	
	const char *GetAndroidID(JNIEnv *env, jobject context);
	const char *GetDeviceModel(JNIEnv *env);
	const char *GetDeviceBrand(JNIEnv *env);
	const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid);
	std::string CalcMD5(std::string s);
}
