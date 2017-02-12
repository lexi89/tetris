#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spawner
struct Spawner_t3948062024;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t667441552
{
public:
	// Spawner GameController::spawner
	Spawner_t3948062024 * ___spawner_2;
	// UnityEngine.GameObject GameController::gameOverCanvas
	GameObject_t3674682005 * ___gameOverCanvas_3;

public:
	inline static int32_t get_offset_of_spawner_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___spawner_2)); }
	inline Spawner_t3948062024 * get_spawner_2() const { return ___spawner_2; }
	inline Spawner_t3948062024 ** get_address_of_spawner_2() { return &___spawner_2; }
	inline void set_spawner_2(Spawner_t3948062024 * value)
	{
		___spawner_2 = value;
		Il2CppCodeGenWriteBarrier(&___spawner_2, value);
	}

	inline static int32_t get_offset_of_gameOverCanvas_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameOverCanvas_3)); }
	inline GameObject_t3674682005 * get_gameOverCanvas_3() const { return ___gameOverCanvas_3; }
	inline GameObject_t3674682005 ** get_address_of_gameOverCanvas_3() { return &___gameOverCanvas_3; }
	inline void set_gameOverCanvas_3(GameObject_t3674682005 * value)
	{
		___gameOverCanvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverCanvas_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
