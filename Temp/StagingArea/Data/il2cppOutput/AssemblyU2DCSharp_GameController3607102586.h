#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 GameController::tankCount
	int32_t ___tankCount_2;
	// UnityEngine.GameObject GameController::tank
	GameObject_t1756533147 * ___tank_3;
	// System.Int32 GameController::_score
	int32_t ____score_4;
	// UnityEngine.UI.Text GameController::livesLabel
	Text_t356221433 * ___livesLabel_5;
	// UnityEngine.UI.Text GameController::scoreLabel
	Text_t356221433 * ___scoreLabel_6;
	// UnityEngine.UI.Text GameController::gameOverLabel
	Text_t356221433 * ___gameOverLabel_7;
	// UnityEngine.UI.Text GameController::finalLabel
	Text_t356221433 * ___finalLabel_8;
	// UnityEngine.UI.Button GameController::restartButton
	Button_t2872111280 * ___restartButton_9;
	// UnityEngine.AudioSource GameController::BGM
	AudioSource_t1135106623 * ___BGM_10;
	// UnityEngine.AudioSource GameController::endBGM
	AudioSource_t1135106623 * ___endBGM_11;
	// UnityEngine.GameObject GameController::player
	GameObject_t1756533147 * ___player_12;
	// UnityEngine.GameObject GameController::enemy
	GameObject_t1756533147 * ___enemy_13;
	// UnityEngine.GameObject GameController::boss
	GameObject_t1756533147 * ___boss_14;
	// UnityEngine.GameObject GameController::scorePlane
	GameObject_t1756533147 * ___scorePlane_15;

public:
	inline static int32_t get_offset_of_tankCount_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___tankCount_2)); }
	inline int32_t get_tankCount_2() const { return ___tankCount_2; }
	inline int32_t* get_address_of_tankCount_2() { return &___tankCount_2; }
	inline void set_tankCount_2(int32_t value)
	{
		___tankCount_2 = value;
	}

	inline static int32_t get_offset_of_tank_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___tank_3)); }
	inline GameObject_t1756533147 * get_tank_3() const { return ___tank_3; }
	inline GameObject_t1756533147 ** get_address_of_tank_3() { return &___tank_3; }
	inline void set_tank_3(GameObject_t1756533147 * value)
	{
		___tank_3 = value;
		Il2CppCodeGenWriteBarrier(&___tank_3, value);
	}

	inline static int32_t get_offset_of__score_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ____score_4)); }
	inline int32_t get__score_4() const { return ____score_4; }
	inline int32_t* get_address_of__score_4() { return &____score_4; }
	inline void set__score_4(int32_t value)
	{
		____score_4 = value;
	}

	inline static int32_t get_offset_of_livesLabel_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___livesLabel_5)); }
	inline Text_t356221433 * get_livesLabel_5() const { return ___livesLabel_5; }
	inline Text_t356221433 ** get_address_of_livesLabel_5() { return &___livesLabel_5; }
	inline void set_livesLabel_5(Text_t356221433 * value)
	{
		___livesLabel_5 = value;
		Il2CppCodeGenWriteBarrier(&___livesLabel_5, value);
	}

	inline static int32_t get_offset_of_scoreLabel_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___scoreLabel_6)); }
	inline Text_t356221433 * get_scoreLabel_6() const { return ___scoreLabel_6; }
	inline Text_t356221433 ** get_address_of_scoreLabel_6() { return &___scoreLabel_6; }
	inline void set_scoreLabel_6(Text_t356221433 * value)
	{
		___scoreLabel_6 = value;
		Il2CppCodeGenWriteBarrier(&___scoreLabel_6, value);
	}

	inline static int32_t get_offset_of_gameOverLabel_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___gameOverLabel_7)); }
	inline Text_t356221433 * get_gameOverLabel_7() const { return ___gameOverLabel_7; }
	inline Text_t356221433 ** get_address_of_gameOverLabel_7() { return &___gameOverLabel_7; }
	inline void set_gameOverLabel_7(Text_t356221433 * value)
	{
		___gameOverLabel_7 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverLabel_7, value);
	}

	inline static int32_t get_offset_of_finalLabel_8() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___finalLabel_8)); }
	inline Text_t356221433 * get_finalLabel_8() const { return ___finalLabel_8; }
	inline Text_t356221433 ** get_address_of_finalLabel_8() { return &___finalLabel_8; }
	inline void set_finalLabel_8(Text_t356221433 * value)
	{
		___finalLabel_8 = value;
		Il2CppCodeGenWriteBarrier(&___finalLabel_8, value);
	}

	inline static int32_t get_offset_of_restartButton_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___restartButton_9)); }
	inline Button_t2872111280 * get_restartButton_9() const { return ___restartButton_9; }
	inline Button_t2872111280 ** get_address_of_restartButton_9() { return &___restartButton_9; }
	inline void set_restartButton_9(Button_t2872111280 * value)
	{
		___restartButton_9 = value;
		Il2CppCodeGenWriteBarrier(&___restartButton_9, value);
	}

	inline static int32_t get_offset_of_BGM_10() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___BGM_10)); }
	inline AudioSource_t1135106623 * get_BGM_10() const { return ___BGM_10; }
	inline AudioSource_t1135106623 ** get_address_of_BGM_10() { return &___BGM_10; }
	inline void set_BGM_10(AudioSource_t1135106623 * value)
	{
		___BGM_10 = value;
		Il2CppCodeGenWriteBarrier(&___BGM_10, value);
	}

	inline static int32_t get_offset_of_endBGM_11() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___endBGM_11)); }
	inline AudioSource_t1135106623 * get_endBGM_11() const { return ___endBGM_11; }
	inline AudioSource_t1135106623 ** get_address_of_endBGM_11() { return &___endBGM_11; }
	inline void set_endBGM_11(AudioSource_t1135106623 * value)
	{
		___endBGM_11 = value;
		Il2CppCodeGenWriteBarrier(&___endBGM_11, value);
	}

	inline static int32_t get_offset_of_player_12() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___player_12)); }
	inline GameObject_t1756533147 * get_player_12() const { return ___player_12; }
	inline GameObject_t1756533147 ** get_address_of_player_12() { return &___player_12; }
	inline void set_player_12(GameObject_t1756533147 * value)
	{
		___player_12 = value;
		Il2CppCodeGenWriteBarrier(&___player_12, value);
	}

	inline static int32_t get_offset_of_enemy_13() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___enemy_13)); }
	inline GameObject_t1756533147 * get_enemy_13() const { return ___enemy_13; }
	inline GameObject_t1756533147 ** get_address_of_enemy_13() { return &___enemy_13; }
	inline void set_enemy_13(GameObject_t1756533147 * value)
	{
		___enemy_13 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_13, value);
	}

	inline static int32_t get_offset_of_boss_14() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___boss_14)); }
	inline GameObject_t1756533147 * get_boss_14() const { return ___boss_14; }
	inline GameObject_t1756533147 ** get_address_of_boss_14() { return &___boss_14; }
	inline void set_boss_14(GameObject_t1756533147 * value)
	{
		___boss_14 = value;
		Il2CppCodeGenWriteBarrier(&___boss_14, value);
	}

	inline static int32_t get_offset_of_scorePlane_15() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___scorePlane_15)); }
	inline GameObject_t1756533147 * get_scorePlane_15() const { return ___scorePlane_15; }
	inline GameObject_t1756533147 ** get_address_of_scorePlane_15() { return &___scorePlane_15; }
	inline void set_scorePlane_15(GameObject_t1756533147 * value)
	{
		___scorePlane_15 = value;
		Il2CppCodeGenWriteBarrier(&___scorePlane_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
