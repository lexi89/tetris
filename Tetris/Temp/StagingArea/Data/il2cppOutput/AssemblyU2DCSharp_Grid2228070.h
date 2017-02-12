#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[,]
struct TransformU5BU2CU5D_t3792884696;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grid
struct  Grid_t2228070  : public MonoBehaviour_t667441552
{
public:

public:
};

struct Grid_t2228070_StaticFields
{
public:
	// System.Int32 Grid::w
	int32_t ___w_2;
	// System.Int32 Grid::h
	int32_t ___h_3;
	// UnityEngine.Transform[,] Grid::grid
	TransformU5BU2CU5D_t3792884696* ___grid_4;

public:
	inline static int32_t get_offset_of_w_2() { return static_cast<int32_t>(offsetof(Grid_t2228070_StaticFields, ___w_2)); }
	inline int32_t get_w_2() const { return ___w_2; }
	inline int32_t* get_address_of_w_2() { return &___w_2; }
	inline void set_w_2(int32_t value)
	{
		___w_2 = value;
	}

	inline static int32_t get_offset_of_h_3() { return static_cast<int32_t>(offsetof(Grid_t2228070_StaticFields, ___h_3)); }
	inline int32_t get_h_3() const { return ___h_3; }
	inline int32_t* get_address_of_h_3() { return &___h_3; }
	inline void set_h_3(int32_t value)
	{
		___h_3 = value;
	}

	inline static int32_t get_offset_of_grid_4() { return static_cast<int32_t>(offsetof(Grid_t2228070_StaticFields, ___grid_4)); }
	inline TransformU5BU2CU5D_t3792884696* get_grid_4() const { return ___grid_4; }
	inline TransformU5BU2CU5D_t3792884696** get_address_of_grid_4() { return &___grid_4; }
	inline void set_grid_4(TransformU5BU2CU5D_t3792884696* value)
	{
		___grid_4 = value;
		Il2CppCodeGenWriteBarrier(&___grid_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
