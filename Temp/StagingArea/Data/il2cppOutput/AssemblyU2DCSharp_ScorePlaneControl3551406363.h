﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameController
struct GameController_t3607102586;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScorePlaneControl
struct  ScorePlaneControl_t3551406363  : public MonoBehaviour_t1158329972
{
public:
	// GameController ScorePlaneControl::gameController
	GameController_t3607102586 * ___gameController_2;

public:
	inline static int32_t get_offset_of_gameController_2() { return static_cast<int32_t>(offsetof(ScorePlaneControl_t3551406363, ___gameController_2)); }
	inline GameController_t3607102586 * get_gameController_2() const { return ___gameController_2; }
	inline GameController_t3607102586 ** get_address_of_gameController_2() { return &___gameController_2; }
	inline void set_gameController_2(GameController_t3607102586 * value)
	{
		___gameController_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
