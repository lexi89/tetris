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

// Grid
struct Grid_t2228070;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void Grid::.ctor()
extern "C"  void Grid__ctor_m258964981 (Grid_t2228070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Grid::.cctor()
extern "C"  void Grid__cctor_m3250850904 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Grid::roundPos(UnityEngine.Vector2)
extern "C"  Vector2_t4282066565  Grid_roundPos_m3047481450 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Grid::isWithinBorders(UnityEngine.Vector2)
extern "C"  bool Grid_isWithinBorders_m3499018057 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Grid::destroyRow(System.Int32)
extern "C"  void Grid_destroyRow_m576040032 (Il2CppObject * __this /* static, unused */, int32_t ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Grid::moveEverythingDownAboveRow(System.Int32)
extern "C"  void Grid_moveEverythingDownAboveRow_m729901795 (Il2CppObject * __this /* static, unused */, int32_t ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Grid::decreaseRowAt(System.Int32)
extern "C"  void Grid_decreaseRowAt_m1787906419 (Il2CppObject * __this /* static, unused */, int32_t ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Grid::isRowFull(System.Int32)
extern "C"  bool Grid_isRowFull_m4025209231 (Il2CppObject * __this /* static, unused */, int32_t ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Grid::destroyFullRows()
extern "C"  void Grid_destroyFullRows_m3233945429 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Grid::clearGrid()
extern "C"  void Grid_clearGrid_m4087130278 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
