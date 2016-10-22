#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Boundary
struct Boundary_t1794889402;
// EnemyController
struct EnemyController_t2146768720;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Object
struct Il2CppObject;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// GameController
struct GameController_t3607102586;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PlayerController
struct PlayerController_t4148409433;
// RoadController
struct RoadController_t1575304190;
// ScorePlaneControl
struct ScorePlaneControl_t3551406363;
// Speed
struct Speed_t3905182961;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_Boundary1794889402.h"
#include "AssemblyU2DCSharp_Boundary1794889402MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "AssemblyU2DCSharp_EnemyController2146768720.h"
#include "AssemblyU2DCSharp_EnemyController2146768720MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector22243707579MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Random1170710517MethodDeclarations.h"
#include "AssemblyU2DCSharp_Speed3905182961.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "AssemblyU2DCSharp_GameController3607102586.h"
#include "AssemblyU2DCSharp_GameController3607102586MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "UnityEngine_UI_UnityEngine_UI_Button2872111280.h"
#include "UnityEngine_UnityEngine_SceneManagement_SceneManager90660965MethodDeclarations.h"
#include "AssemblyU2DCSharp_PlayerController4148409433.h"
#include "AssemblyU2DCSharp_PlayerController4148409433MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera189460977MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "AssemblyU2DCSharp_RoadController1575304190.h"
#include "AssemblyU2DCSharp_RoadController1575304190MethodDeclarations.h"
#include "AssemblyU2DCSharp_ScorePlaneControl3551406363.h"
#include "AssemblyU2DCSharp_ScorePlaneControl3551406363MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1368543263MethodDeclarations.h"
#include "AssemblyU2DCSharp_Speed3905182961MethodDeclarations.h"

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2812611596(__this, method) ((  Il2CppObject * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
#define GameObject_GetComponent_TisTransform_t3275118058_m791278180(__this, method) ((  Transform_t3275118058 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m447919519_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method);
#define Object_Instantiate_TisIl2CppObject_m447919519(__this /* static, unused */, p0, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m447919519_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1756533147_m3664764861(__this /* static, unused */, p0, method) ((  GameObject_t1756533147 * (*) (Il2CppObject * /* static, unused */, GameObject_t1756533147 *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m447919519_gshared)(__this /* static, unused */, p0, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Boundary::.ctor()
extern "C"  void Boundary__ctor_m2222466319 (Boundary_t1794889402 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyController::.ctor()
extern "C"  void EnemyController__ctor_m1153179309 (EnemyController_t2146768720 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyController::Start()
extern "C"  void EnemyController_Start_m2470974037 (EnemyController_t2146768720 * __this, const MethodInfo* method)
{
	{
		EnemyController__Reset_m3563637563(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyController::Update()
extern const MethodInfo* GameObject_GetComponent_TisTransform_t3275118058_m791278180_MethodInfo_var;
extern const uint32_t EnemyController_Update_m3131616442_MetadataUsageId;
extern "C"  void EnemyController_Update_m3131616442 (EnemyController_t2146768720 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (EnemyController_Update_m3131616442_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_1 = GameObject_GetComponent_TisTransform_t3275118058_m791278180(L_0, /*hidden argument*/GameObject_GetComponent_TisTransform_t3275118058_m791278180_MethodInfo_var);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		Vector2_t2243707579  L_3 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector2_t2243707579 * L_4 = (&V_0);
		float L_5 = L_4->get_y_2();
		float L_6 = __this->get__CurrentSpeed_4();
		L_4->set_y_2(((float)((float)L_5-(float)L_6)));
		GameObject_t1756533147 * L_7 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_8 = GameObject_GetComponent_TisTransform_t3275118058_m791278180(L_7, /*hidden argument*/GameObject_GetComponent_TisTransform_t3275118058_m791278180_MethodInfo_var);
		Vector2_t2243707579  L_9 = V_0;
		Vector3_t2243707580  L_10 = Vector2_op_Implicit_m176791411(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_8, L_10, /*hidden argument*/NULL);
		float L_11 = (&V_0)->get_y_2();
		Boundary_t1794889402 * L_12 = __this->get_boundary_3();
		float L_13 = L_12->get_yMin_2();
		if ((!(((float)L_11) <= ((float)L_13))))
		{
			goto IL_005d;
		}
	}
	{
		EnemyController__Reset_m3563637563(__this, /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void EnemyController::_Reset()
extern const MethodInfo* GameObject_GetComponent_TisTransform_t3275118058_m791278180_MethodInfo_var;
extern const uint32_t EnemyController__Reset_m3563637563_MetadataUsageId;
extern "C"  void EnemyController__Reset_m3563637563 (EnemyController_t2146768720 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (EnemyController__Reset_m3563637563_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Speed_t3905182961 * L_0 = __this->get_speed_2();
		float L_1 = L_0->get_minSpeed_0();
		Speed_t3905182961 * L_2 = __this->get_speed_2();
		float L_3 = L_2->get_maxSpeed_1();
		float L_4 = Random_Range_m2884721203(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		__this->set__CurrentSpeed_4(L_4);
		Boundary_t1794889402 * L_5 = __this->get_boundary_3();
		float L_6 = L_5->get_xMin_0();
		Boundary_t1794889402 * L_7 = __this->get_boundary_3();
		float L_8 = L_7->get_xMax_1();
		float L_9 = Random_Range_m2884721203(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		Boundary_t1794889402 * L_10 = __this->get_boundary_3();
		float L_11 = L_10->get_yMax_3();
		Vector2__ctor_m3067419446((&V_0), L_9, L_11, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_12 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_13 = GameObject_GetComponent_TisTransform_t3275118058_m791278180(L_12, /*hidden argument*/GameObject_GetComponent_TisTransform_t3275118058_m791278180_MethodInfo_var);
		Vector2_t2243707579  L_14 = V_0;
		Vector3_t2243707580  L_15 = Vector2_op_Implicit_m176791411(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_13, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern Il2CppCodeGenString* _stringLiteral1679033118;
extern Il2CppCodeGenString* _stringLiteral1875862075;
extern const uint32_t EnemyController_OnCollisionEnter2D_m2117050791_MetadataUsageId;
extern "C"  void EnemyController_OnCollisionEnter2D_m2117050791 (EnemyController_t2146768720 * __this, Collision2D_t1539500754 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (EnemyController_OnCollisionEnter2D_m2117050791_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision2D_t1539500754 * L_0 = ___other0;
		GameObject_t1756533147 * L_1 = Collision2D_get_gameObject_m4234358314(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_m2797152613(L_1, _stringLiteral1679033118, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		EnemyController__Reset_m3563637563(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		Collision2D_t1539500754 * L_3 = ___other0;
		GameObject_t1756533147 * L_4 = Collision2D_get_gameObject_m4234358314(L_3, /*hidden argument*/NULL);
		bool L_5 = GameObject_CompareTag_m2797152613(L_4, _stringLiteral1875862075, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		EnemyController__Reset_m3563637563(__this, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void GameController::.ctor()
extern "C"  void GameController__ctor_m1439649957 (GameController_t3607102586 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::Start()
extern "C"  void GameController_Start_m239487205 (GameController_t3607102586 * __this, const MethodInfo* method)
{
	{
		GameController__GenerateTanks_m1093931094(__this, /*hidden argument*/NULL);
		GameController_hideLabels_m3710151642(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::Update()
extern "C"  void GameController_Update_m1556003900 (GameController_t3607102586 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameController::_GenerateTanks()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3664764861_MethodInfo_var;
extern const uint32_t GameController__GenerateTanks_m1093931094_MetadataUsageId;
extern "C"  void GameController__GenerateTanks_m1093931094 (GameController_t3607102586 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameController__GenerateTanks_m1093931094_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0007:
	{
		GameObject_t1756533147 * L_0 = __this->get_tank_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3664764861(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3664764861_MethodInfo_var);
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
	}

IL_0017:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_tankCount_2();
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GameController::hideLabels()
extern "C"  void GameController_hideLabels_m3710151642 (GameController_t3607102586 * __this, const MethodInfo* method)
{
	{
		Text_t356221433 * L_0 = __this->get_gameOverLabel_7();
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_1, (bool)0, /*hidden argument*/NULL);
		Text_t356221433 * L_2 = __this->get_finalLabel_8();
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_3, (bool)0, /*hidden argument*/NULL);
		Button_t2872111280 * L_4 = __this->get_restartButton_9();
		GameObject_t1756533147 * L_5 = Component_get_gameObject_m3105766835(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_5, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::gameOver()
extern "C"  void GameController_gameOver_m713475173 (GameController_t3607102586 * __this, const MethodInfo* method)
{
	{
		Text_t356221433 * L_0 = __this->get_gameOverLabel_7();
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_1, (bool)1, /*hidden argument*/NULL);
		Text_t356221433 * L_2 = __this->get_finalLabel_8();
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_3, (bool)1, /*hidden argument*/NULL);
		Button_t2872111280 * L_4 = __this->get_restartButton_9();
		GameObject_t1756533147 * L_5 = Component_get_gameObject_m3105766835(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_5, (bool)1, /*hidden argument*/NULL);
		Text_t356221433 * L_6 = __this->get_livesLabel_5();
		GameObject_t1756533147 * L_7 = Component_get_gameObject_m3105766835(L_6, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_7, (bool)0, /*hidden argument*/NULL);
		Text_t356221433 * L_8 = __this->get_scoreLabel_6();
		GameObject_t1756533147 * L_9 = Component_get_gameObject_m3105766835(L_8, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_9, (bool)0, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_10 = __this->get_player_12();
		GameObject_t1756533147 * L_11 = GameObject_get_gameObject_m3662236595(L_10, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_11, (bool)0, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_12 = __this->get_scorePlane_15();
		GameObject_t1756533147 * L_13 = GameObject_get_gameObject_m3662236595(L_12, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_13, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::restart_click()
extern Il2CppCodeGenString* _stringLiteral3538073363;
extern const uint32_t GameController_restart_click_m3790424663_MetadataUsageId;
extern "C"  void GameController_restart_click_m3790424663 (GameController_t3607102586 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameController_restart_click_m3790424663_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral3538073363, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m3280132936 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		Vector2_t2243707579  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3067419446(&L_0, (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set__newPosition_5(L_0);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 PlayerController::get_livesValue()
extern "C"  int32_t PlayerController_get_livesValue_m3866158529 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get__livesValue_6();
		return L_0;
	}
}
// System.Void PlayerController::set_livesValue(System.Int32)
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1380649707;
extern const uint32_t PlayerController_set_livesValue_m2389702318_MetadataUsageId;
extern "C"  void PlayerController_set_livesValue_m2389702318 (PlayerController_t4148409433 * __this, int32_t ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_set_livesValue_m2389702318_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value0;
		__this->set__livesValue_6(L_0);
		GameController_t3607102586 * L_1 = __this->get_gameController_4();
		Text_t356221433 * L_2 = L_1->get_livesLabel_5();
		int32_t L_3 = __this->get__livesValue_6();
		int32_t L_4 = L_3;
		Il2CppObject * L_5 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral1380649707, L_5, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_6);
		return;
	}
}
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m3606284888 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		PlayerController_set_livesValue_m2389702318(__this, 5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m4228472513 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		PlayerController__CheckInput_m905138427(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::_CheckInput()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTransform_t3275118058_m791278180_MethodInfo_var;
extern const uint32_t PlayerController__CheckInput_m905138427_MetadataUsageId;
extern "C"  void PlayerController__CheckInput_m905138427 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController__CheckInput_m905138427_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_1 = GameObject_GetComponent_TisTransform_t3275118058_m791278180(L_0, /*hidden argument*/GameObject_GetComponent_TisTransform_t3275118058_m791278180_MethodInfo_var);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		Vector2_t2243707579  L_3 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set__newPosition_5(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_4 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2243707579  L_5 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Vector2_t2243707579 * L_6 = __this->get_address_of__newPosition_5();
		Camera_t189460977 * L_7 = __this->get__camera_3();
		Vector2_t2243707579  L_8 = V_0;
		Vector3_t2243707580  L_9 = Vector2_op_Implicit_m176791411(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Vector3_t2243707580  L_10 = Camera_ScreenToWorldPoint_m929392728(L_7, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = (&V_1)->get_x_1();
		L_6->set_x_1(L_11);
		PlayerController__BoundaryCheck_m1623972785(__this, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_12 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_13 = GameObject_GetComponent_TisTransform_t3275118058_m791278180(L_12, /*hidden argument*/GameObject_GetComponent_TisTransform_t3275118058_m791278180_MethodInfo_var);
		Vector2_t2243707579  L_14 = __this->get__newPosition_5();
		Vector3_t2243707580  L_15 = Vector2_op_Implicit_m176791411(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_13, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::_BoundaryCheck()
extern "C"  void PlayerController__BoundaryCheck_m1623972785 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		Vector2_t2243707579 * L_0 = __this->get_address_of__newPosition_5();
		float L_1 = L_0->get_x_1();
		Boundary_t1794889402 * L_2 = __this->get_boundary_2();
		float L_3 = L_2->get_xMin_0();
		if ((!(((float)L_1) < ((float)L_3))))
		{
			goto IL_0031;
		}
	}
	{
		Vector2_t2243707579 * L_4 = __this->get_address_of__newPosition_5();
		Boundary_t1794889402 * L_5 = __this->get_boundary_2();
		float L_6 = L_5->get_xMin_0();
		L_4->set_x_1(L_6);
	}

IL_0031:
	{
		Vector2_t2243707579 * L_7 = __this->get_address_of__newPosition_5();
		float L_8 = L_7->get_x_1();
		Boundary_t1794889402 * L_9 = __this->get_boundary_2();
		float L_10 = L_9->get_xMax_1();
		if ((!(((float)L_8) > ((float)L_10))))
		{
			goto IL_0062;
		}
	}
	{
		Vector2_t2243707579 * L_11 = __this->get_address_of__newPosition_5();
		Boundary_t1794889402 * L_12 = __this->get_boundary_2();
		float L_13 = L_12->get_xMax_1();
		L_11->set_x_1(L_13);
	}

IL_0062:
	{
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern Il2CppCodeGenString* _stringLiteral1816890106;
extern Il2CppCodeGenString* _stringLiteral4190183537;
extern const uint32_t PlayerController_OnCollisionEnter2D_m3521110746_MetadataUsageId;
extern "C"  void PlayerController_OnCollisionEnter2D_m3521110746 (PlayerController_t4148409433 * __this, Collision2D_t1539500754 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnCollisionEnter2D_m3521110746_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision2D_t1539500754 * L_0 = ___other0;
		GameObject_t1756533147 * L_1 = Collision2D_get_gameObject_m4234358314(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_m2797152613(L_1, _stringLiteral1816890106, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_3 = PlayerController_get_livesValue_m3866158529(__this, /*hidden argument*/NULL);
		PlayerController_set_livesValue_m2389702318(__this, ((int32_t)((int32_t)L_3-(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_4 = PlayerController_get_livesValue_m3866158529(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		GameController_t3607102586 * L_5 = __this->get_gameController_4();
		GameController_gameOver_m713475173(L_5, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Collision2D_t1539500754 * L_6 = ___other0;
		GameObject_t1756533147 * L_7 = Collision2D_get_gameObject_m4234358314(L_6, /*hidden argument*/NULL);
		bool L_8 = GameObject_CompareTag_m2797152613(L_7, _stringLiteral4190183537, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_9 = PlayerController_get_livesValue_m3866158529(__this, /*hidden argument*/NULL);
		PlayerController_set_livesValue_m2389702318(__this, ((int32_t)((int32_t)L_9-(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_10 = PlayerController_get_livesValue_m3866158529(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		GameController_t3607102586 * L_11 = __this->get_gameController_4();
		GameController_gameOver_m713475173(L_11, /*hidden argument*/NULL);
	}

IL_0074:
	{
		return;
	}
}
// System.Void RoadController::.ctor()
extern "C"  void RoadController__ctor_m2407994347 (RoadController_t1575304190 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RoadController::Start()
extern "C"  void RoadController_Start_m2127513311 (RoadController_t1575304190 * __this, const MethodInfo* method)
{
	{
		RoadController__Reset_m1778774813(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RoadController::Update()
extern const MethodInfo* GameObject_GetComponent_TisTransform_t3275118058_m791278180_MethodInfo_var;
extern const uint32_t RoadController_Update_m3712268236_MetadataUsageId;
extern "C"  void RoadController_Update_m3712268236 (RoadController_t1575304190 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (RoadController_Update_m3712268236_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_1 = GameObject_GetComponent_TisTransform_t3275118058_m791278180(L_0, /*hidden argument*/GameObject_GetComponent_TisTransform_t3275118058_m791278180_MethodInfo_var);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		Vector2_t2243707579  L_3 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector2_t2243707579 * L_4 = (&V_0);
		float L_5 = L_4->get_y_2();
		float L_6 = __this->get_speed_2();
		L_4->set_y_2(((float)((float)L_5-(float)L_6)));
		GameObject_t1756533147 * L_7 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_8 = GameObject_GetComponent_TisTransform_t3275118058_m791278180(L_7, /*hidden argument*/GameObject_GetComponent_TisTransform_t3275118058_m791278180_MethodInfo_var);
		Vector2_t2243707579  L_9 = V_0;
		Vector3_t2243707580  L_10 = Vector2_op_Implicit_m176791411(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_8, L_10, /*hidden argument*/NULL);
		float L_11 = (&V_0)->get_y_2();
		if ((!(((float)L_11) <= ((float)(-480.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		RoadController__Reset_m1778774813(__this, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
// System.Void RoadController::_Reset()
extern const MethodInfo* GameObject_GetComponent_TisTransform_t3275118058_m791278180_MethodInfo_var;
extern const uint32_t RoadController__Reset_m1778774813_MetadataUsageId;
extern "C"  void RoadController__Reset_m1778774813 (RoadController_t1575304190 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (RoadController__Reset_m1778774813_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector2__ctor_m3067419446((&V_0), (0.0f), (480.0f), /*hidden argument*/NULL);
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_1 = GameObject_GetComponent_TisTransform_t3275118058_m791278180(L_0, /*hidden argument*/GameObject_GetComponent_TisTransform_t3275118058_m791278180_MethodInfo_var);
		Vector2_t2243707579  L_2 = V_0;
		Vector3_t2243707580  L_3 = Vector2_op_Implicit_m176791411(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScorePlaneControl::.ctor()
extern "C"  void ScorePlaneControl__ctor_m828512132 (ScorePlaneControl_t3551406363 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ScorePlaneControl::get_scoreValue()
extern "C"  int32_t ScorePlaneControl_get_scoreValue_m1797292854 (ScorePlaneControl_t3551406363 * __this, const MethodInfo* method)
{
	{
		GameController_t3607102586 * L_0 = __this->get_gameController_2();
		int32_t L_1 = L_0->get__score_4();
		return L_1;
	}
}
// System.Void ScorePlaneControl::set_scoreValue(System.Int32)
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1756683522;
extern Il2CppCodeGenString* _stringLiteral625648214;
extern const uint32_t ScorePlaneControl_set_scoreValue_m3203487601_MetadataUsageId;
extern "C"  void ScorePlaneControl_set_scoreValue_m3203487601 (ScorePlaneControl_t3551406363 * __this, int32_t ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ScorePlaneControl_set_scoreValue_m3203487601_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_t3607102586 * L_0 = __this->get_gameController_2();
		int32_t L_1 = ___value0;
		L_0->set__score_4(L_1);
		GameController_t3607102586 * L_2 = __this->get_gameController_2();
		Text_t356221433 * L_3 = L_2->get_scoreLabel_6();
		GameController_t3607102586 * L_4 = __this->get_gameController_2();
		int32_t L_5 = L_4->get__score_4();
		int32_t L_6 = L_5;
		Il2CppObject * L_7 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral1756683522, L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_8);
		GameController_t3607102586 * L_9 = __this->get_gameController_2();
		Text_t356221433 * L_10 = L_9->get_finalLabel_8();
		GameController_t3607102586 * L_11 = __this->get_gameController_2();
		int32_t L_12 = L_11->get__score_4();
		int32_t L_13 = L_12;
		Il2CppObject * L_14 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral625648214, L_14, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_15);
		return;
	}
}
// System.Void ScorePlaneControl::Start()
extern "C"  void ScorePlaneControl_Start_m1590298976 (ScorePlaneControl_t3551406363 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ScorePlaneControl::Update()
extern "C"  void ScorePlaneControl_Update_m494307335 (ScorePlaneControl_t3551406363 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ScorePlaneControl::OnCollisionEnter2D(UnityEngine.Collision2D)
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1816890106;
extern Il2CppCodeGenString* _stringLiteral3894209184;
extern const uint32_t ScorePlaneControl_OnCollisionEnter2D_m3000595358_MetadataUsageId;
extern "C"  void ScorePlaneControl_OnCollisionEnter2D_m3000595358 (ScorePlaneControl_t3551406363 * __this, Collision2D_t1539500754 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ScorePlaneControl_OnCollisionEnter2D_m3000595358_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision2D_t1539500754 * L_0 = ___other0;
		GameObject_t1756533147 * L_1 = Collision2D_get_gameObject_m4234358314(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_m2797152613(L_1, _stringLiteral1816890106, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = ScorePlaneControl_get_scoreValue_m1797292854(__this, /*hidden argument*/NULL);
		ScorePlaneControl_set_scoreValue_m3203487601(__this, ((int32_t)((int32_t)L_3+(int32_t)((int32_t)10))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral3894209184, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void Speed::.ctor()
extern "C"  void Speed__ctor_m4057203790 (Speed_t3905182961 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
