﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Speed
struct  Speed_t3905182961  : public Il2CppObject
{
public:
	// System.Single Speed::minSpeed
	float ___minSpeed_0;
	// System.Single Speed::maxSpeed
	float ___maxSpeed_1;

public:
	inline static int32_t get_offset_of_minSpeed_0() { return static_cast<int32_t>(offsetof(Speed_t3905182961, ___minSpeed_0)); }
	inline float get_minSpeed_0() const { return ___minSpeed_0; }
	inline float* get_address_of_minSpeed_0() { return &___minSpeed_0; }
	inline void set_minSpeed_0(float value)
	{
		___minSpeed_0 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_1() { return static_cast<int32_t>(offsetof(Speed_t3905182961, ___maxSpeed_1)); }
	inline float get_maxSpeed_1() const { return ___maxSpeed_1; }
	inline float* get_address_of_maxSpeed_1() { return &___maxSpeed_1; }
	inline void set_maxSpeed_1(float value)
	{
		___maxSpeed_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
