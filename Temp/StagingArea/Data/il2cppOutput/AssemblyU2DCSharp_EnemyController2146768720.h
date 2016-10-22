#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Speed
struct Speed_t3905182961;
// Boundary
struct Boundary_t1794889402;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyController
struct  EnemyController_t2146768720  : public MonoBehaviour_t1158329972
{
public:
	// Speed EnemyController::speed
	Speed_t3905182961 * ___speed_2;
	// Boundary EnemyController::boundary
	Boundary_t1794889402 * ___boundary_3;
	// System.Single EnemyController::_CurrentSpeed
	float ____CurrentSpeed_4;
	// System.Single EnemyController::_CurrentDrift
	float ____CurrentDrift_5;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___speed_2)); }
	inline Speed_t3905182961 * get_speed_2() const { return ___speed_2; }
	inline Speed_t3905182961 ** get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(Speed_t3905182961 * value)
	{
		___speed_2 = value;
		Il2CppCodeGenWriteBarrier(&___speed_2, value);
	}

	inline static int32_t get_offset_of_boundary_3() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___boundary_3)); }
	inline Boundary_t1794889402 * get_boundary_3() const { return ___boundary_3; }
	inline Boundary_t1794889402 ** get_address_of_boundary_3() { return &___boundary_3; }
	inline void set_boundary_3(Boundary_t1794889402 * value)
	{
		___boundary_3 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_3, value);
	}

	inline static int32_t get_offset_of__CurrentSpeed_4() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ____CurrentSpeed_4)); }
	inline float get__CurrentSpeed_4() const { return ____CurrentSpeed_4; }
	inline float* get_address_of__CurrentSpeed_4() { return &____CurrentSpeed_4; }
	inline void set__CurrentSpeed_4(float value)
	{
		____CurrentSpeed_4 = value;
	}

	inline static int32_t get_offset_of__CurrentDrift_5() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ____CurrentDrift_5)); }
	inline float get__CurrentDrift_5() const { return ____CurrentDrift_5; }
	inline float* get_address_of__CurrentDrift_5() { return &____CurrentDrift_5; }
	inline void set__CurrentDrift_5(float value)
	{
		____CurrentDrift_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
