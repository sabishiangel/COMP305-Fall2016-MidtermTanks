#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"

// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m3280132936 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerController::get_livesValue()
extern "C"  int32_t PlayerController_get_livesValue_m3866158529 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::set_livesValue(System.Int32)
extern "C"  void PlayerController_set_livesValue_m2389702318 (PlayerController_t4148409433 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m3606284888 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m4228472513 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::_CheckInput()
extern "C"  void PlayerController__CheckInput_m905138427 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::_BoundaryCheck()
extern "C"  void PlayerController__BoundaryCheck_m1623972785 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void PlayerController_OnCollisionEnter2D_m3521110746 (PlayerController_t4148409433 * __this, Collision2D_t1539500754 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
