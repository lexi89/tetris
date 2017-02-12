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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Group
struct  Group_t69076575  : public MonoBehaviour_t667441552
{
public:
	// System.Single Group::maxSlideSpeed
	float ___maxSlideSpeed_2;
	// System.Single Group::gravityTickSpeed
	float ___gravityTickSpeed_3;
	// System.Single Group::lastSlide
	float ___lastSlide_4;
	// System.Single Group::lastFall
	float ___lastFall_5;
	// Spawner Group::spawner
	Spawner_t3948062024 * ___spawner_6;

public:
	inline static int32_t get_offset_of_maxSlideSpeed_2() { return static_cast<int32_t>(offsetof(Group_t69076575, ___maxSlideSpeed_2)); }
	inline float get_maxSlideSpeed_2() const { return ___maxSlideSpeed_2; }
	inline float* get_address_of_maxSlideSpeed_2() { return &___maxSlideSpeed_2; }
	inline void set_maxSlideSpeed_2(float value)
	{
		___maxSlideSpeed_2 = value;
	}

	inline static int32_t get_offset_of_gravityTickSpeed_3() { return static_cast<int32_t>(offsetof(Group_t69076575, ___gravityTickSpeed_3)); }
	inline float get_gravityTickSpeed_3() const { return ___gravityTickSpeed_3; }
	inline float* get_address_of_gravityTickSpeed_3() { return &___gravityTickSpeed_3; }
	inline void set_gravityTickSpeed_3(float value)
	{
		___gravityTickSpeed_3 = value;
	}

	inline static int32_t get_offset_of_lastSlide_4() { return static_cast<int32_t>(offsetof(Group_t69076575, ___lastSlide_4)); }
	inline float get_lastSlide_4() const { return ___lastSlide_4; }
	inline float* get_address_of_lastSlide_4() { return &___lastSlide_4; }
	inline void set_lastSlide_4(float value)
	{
		___lastSlide_4 = value;
	}

	inline static int32_t get_offset_of_lastFall_5() { return static_cast<int32_t>(offsetof(Group_t69076575, ___lastFall_5)); }
	inline float get_lastFall_5() const { return ___lastFall_5; }
	inline float* get_address_of_lastFall_5() { return &___lastFall_5; }
	inline void set_lastFall_5(float value)
	{
		___lastFall_5 = value;
	}

	inline static int32_t get_offset_of_spawner_6() { return static_cast<int32_t>(offsetof(Group_t69076575, ___spawner_6)); }
	inline Spawner_t3948062024 * get_spawner_6() const { return ___spawner_6; }
	inline Spawner_t3948062024 ** get_address_of_spawner_6() { return &___spawner_6; }
	inline void set_spawner_6(Spawner_t3948062024 * value)
	{
		___spawner_6 = value;
		Il2CppCodeGenWriteBarrier(&___spawner_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
