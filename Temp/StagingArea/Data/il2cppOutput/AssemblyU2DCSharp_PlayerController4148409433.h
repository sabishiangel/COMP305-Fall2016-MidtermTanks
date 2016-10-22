#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Boundary
struct Boundary_t1794889402;
// UnityEngine.Camera
struct Camera_t189460977;
// GameController
struct GameController_t3607102586;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// Boundary PlayerController::boundary
	Boundary_t1794889402 * ___boundary_2;
	// UnityEngine.Camera PlayerController::_camera
	Camera_t189460977 * ____camera_3;
	// GameController PlayerController::gameController
	GameController_t3607102586 * ___gameController_4;
	// UnityEngine.Vector2 PlayerController::_newPosition
	Vector2_t2243707579  ____newPosition_5;
	// System.Int32 PlayerController::_livesValue
	int32_t ____livesValue_6;

public:
	inline static int32_t get_offset_of_boundary_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___boundary_2)); }
	inline Boundary_t1794889402 * get_boundary_2() const { return ___boundary_2; }
	inline Boundary_t1794889402 ** get_address_of_boundary_2() { return &___boundary_2; }
	inline void set_boundary_2(Boundary_t1794889402 * value)
	{
		___boundary_2 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_2, value);
	}

	inline static int32_t get_offset_of__camera_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ____camera_3)); }
	inline Camera_t189460977 * get__camera_3() const { return ____camera_3; }
	inline Camera_t189460977 ** get_address_of__camera_3() { return &____camera_3; }
	inline void set__camera_3(Camera_t189460977 * value)
	{
		____camera_3 = value;
		Il2CppCodeGenWriteBarrier(&____camera_3, value);
	}

	inline static int32_t get_offset_of_gameController_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___gameController_4)); }
	inline GameController_t3607102586 * get_gameController_4() const { return ___gameController_4; }
	inline GameController_t3607102586 ** get_address_of_gameController_4() { return &___gameController_4; }
	inline void set_gameController_4(GameController_t3607102586 * value)
	{
		___gameController_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_4, value);
	}

	inline static int32_t get_offset_of__newPosition_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ____newPosition_5)); }
	inline Vector2_t2243707579  get__newPosition_5() const { return ____newPosition_5; }
	inline Vector2_t2243707579 * get_address_of__newPosition_5() { return &____newPosition_5; }
	inline void set__newPosition_5(Vector2_t2243707579  value)
	{
		____newPosition_5 = value;
	}

	inline static int32_t get_offset_of__livesValue_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ____livesValue_6)); }
	inline int32_t get__livesValue_6() const { return ____livesValue_6; }
	inline int32_t* get_address_of__livesValue_6() { return &____livesValue_6; }
	inline void set__livesValue_6(int32_t value)
	{
		____livesValue_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
