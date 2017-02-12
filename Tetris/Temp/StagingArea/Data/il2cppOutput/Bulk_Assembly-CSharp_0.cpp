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

// GameController
struct GameController_t2782302542;
// Spawner
struct Spawner_t3948062024;
// System.Object
struct Il2CppObject;
// Grid
struct Grid_t2228070;
// Group
struct Group_t69076575;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_GameController2782302542.h"
#include "AssemblyU2DCSharp_GameController2782302542MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "AssemblyU2DCSharp_Spawner3948062024.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "AssemblyU2DCSharp_Grid2228070MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "AssemblyU2DCSharp_Spawner3948062024MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "mscorlib_System_Boolean476798718.h"
#include "AssemblyU2DCSharp_Grid2228070.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector24282066565MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_Group69076575.h"
#include "AssemblyU2DCSharp_Group69076575MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Behaviour200106419MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Random3156561159MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  Il2CppObject * Object_FindObjectOfType_TisIl2CppObject_m2892359027_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define Object_FindObjectOfType_TisIl2CppObject_m2892359027(__this /* static, unused */, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m2892359027_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<Spawner>()
#define Object_FindObjectOfType_TisSpawner_t3948062024_m3891094857(__this /* static, unused */, method) ((  Spawner_t3948062024 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m2892359027_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<GameController>()
#define Object_FindObjectOfType_TisGameController_t2782302542_m1374642079(__this /* static, unused */, method) ((  GameController_t2782302542 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m2892359027_gshared)(__this /* static, unused */, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameController::.ctor()
extern "C"  void GameController__ctor_m4168274701 (GameController_t2782302542 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::Awake()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisSpawner_t3948062024_m3891094857_MethodInfo_var;
extern const uint32_t GameController_Awake_m110912624_MetadataUsageId;
extern "C"  void GameController_Awake_m110912624 (GameController_t2782302542 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameController_Awake_m110912624_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Spawner_t3948062024 * L_0 = Object_FindObjectOfType_TisSpawner_t3948062024_m3891094857(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisSpawner_t3948062024_m3891094857_MethodInfo_var);
		__this->set_spawner_2(L_0);
		return;
	}
}
// System.Void GameController::restartGame()
extern Il2CppClass* Grid_t2228070_il2cpp_TypeInfo_var;
extern const uint32_t GameController_restartGame_m2498108204_MetadataUsageId;
extern "C"  void GameController_restartGame_m2498108204 (GameController_t2782302542 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameController_restartGame_m2498108204_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		Grid_clearGrid_m4087130278(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_0 = __this->get_gameOverCanvas_3();
		GameObject_SetActive_m3538205401(L_0, (bool)0, /*hidden argument*/NULL);
		Spawner_t3948062024 * L_1 = __this->get_spawner_2();
		Spawner_spawnNext_m1295567343(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::gameOver()
extern "C"  void GameController_gameOver_m1452769245 (GameController_t2782302542 * __this, const MethodInfo* method)
{
	{
		GameObject_t3674682005 * L_0 = __this->get_gameOverCanvas_3();
		GameObject_SetActive_m3538205401(L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Grid::.ctor()
extern "C"  void Grid__ctor_m258964981 (Grid_t2228070 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Grid::.cctor()
extern Il2CppClass* Grid_t2228070_il2cpp_TypeInfo_var;
extern Il2CppClass* TransformU5BU2CU5D_t3792884696_il2cpp_TypeInfo_var;
extern const uint32_t Grid__cctor_m3250850904_MetadataUsageId;
extern "C"  void Grid__cctor_m3250850904 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Grid__cctor_m3250850904_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->set_w_2(((int32_t)10));
		((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->set_h_3(((int32_t)20));
		int32_t L_0 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_w_2();
		int32_t L_1 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_h_3();
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		TransformU5BU2CU5D_t3792884696* L_2 = (TransformU5BU2CU5D_t3792884696*)GenArrayNew(TransformU5BU2CU5D_t3792884696_il2cpp_TypeInfo_var, L_3);
		((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->set_grid_4(L_2);
		return;
	}
}
// UnityEngine.Vector2 Grid::roundPos(UnityEngine.Vector2)
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const uint32_t Grid_roundPos_m3047481450_MetadataUsageId;
extern "C"  Vector2_t4282066565  Grid_roundPos_m3047481450 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___v0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Grid_roundPos_m3047481450_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (&___v0)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_1 = bankers_roundf(L_0);
		float L_2 = (&___v0)->get_y_2();
		float L_3 = bankers_roundf(L_2);
		Vector2_t4282066565  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m1517109030(&L_4, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Grid::isWithinBorders(UnityEngine.Vector2)
extern Il2CppClass* Grid_t2228070_il2cpp_TypeInfo_var;
extern const uint32_t Grid_isWithinBorders_m3499018057_MetadataUsageId;
extern "C"  bool Grid_isWithinBorders_m3499018057 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___v0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Grid_isWithinBorders_m3499018057_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		float L_0 = (&___v0)->get_x_1();
		if ((((int32_t)(((int32_t)((int32_t)L_0)))) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		float L_1 = (&___v0)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_w_2();
		if ((((int32_t)(((int32_t)((int32_t)L_1)))) >= ((int32_t)L_2)))
		{
			goto IL_0030;
		}
	}
	{
		float L_3 = (&___v0)->get_y_2();
		G_B4_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)L_3)))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B4_0 = 0;
	}

IL_0031:
	{
		return (bool)G_B4_0;
	}
}
// System.Void Grid::destroyRow(System.Int32)
extern Il2CppClass* Grid_t2228070_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t Grid_destroyRow_m576040032_MetadataUsageId;
extern "C"  void Grid_destroyRow_m576040032 (Il2CppObject * __this /* static, unused */, int32_t ___y0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Grid_destroyRow_m576040032_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_002e;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3792884696* L_0 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_grid_4();
		int32_t L_1 = V_0;
		int32_t L_2 = ___y0;
		Transform_t1659122786 * L_3 = (L_0)->GetAt(L_1, L_2);
		GameObject_t3674682005 * L_4 = Component_get_gameObject_m1170635899(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		TransformU5BU2CU5D_t3792884696* L_5 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_grid_4();
		int32_t L_6 = V_0;
		int32_t L_7 = ___y0;
		(L_5)->SetAt(L_6, L_7, (Transform_t1659122786 *)NULL);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		int32_t L_10 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_w_2();
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Grid::moveEverythingDownAboveRow(System.Int32)
extern Il2CppClass* Grid_t2228070_il2cpp_TypeInfo_var;
extern const uint32_t Grid_moveEverythingDownAboveRow_m729901795_MetadataUsageId;
extern "C"  void Grid_moveEverythingDownAboveRow_m729901795 (Il2CppObject * __this /* static, unused */, int32_t ___y0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Grid_moveEverythingDownAboveRow_m729901795_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___y0;
		V_0 = L_0;
		goto IL_0011;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		Grid_decreaseRowAt_m1787906419(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)((int32_t)L_2+(int32_t)1));
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_h_3();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Grid::decreaseRowAt(System.Int32)
extern Il2CppClass* Grid_t2228070_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t Grid_decreaseRowAt_m1787906419_MetadataUsageId;
extern "C"  void Grid_decreaseRowAt_m1787906419 (Il2CppObject * __this /* static, unused */, int32_t ___y0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Grid_decreaseRowAt_m1787906419_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_007b;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3792884696* L_0 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_grid_4();
		int32_t L_1 = V_0;
		int32_t L_2 = ___y0;
		Transform_t1659122786 * L_3 = (L_0)->GetAt(L_1, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_3, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3792884696* L_5 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_grid_4();
		int32_t L_6 = V_0;
		int32_t L_7 = ___y0;
		TransformU5BU2CU5D_t3792884696* L_8 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_grid_4();
		int32_t L_9 = V_0;
		int32_t L_10 = ___y0;
		Transform_t1659122786 * L_11 = (L_8)->GetAt(L_9, L_10);
		(L_5)->SetAt(L_6, ((int32_t)((int32_t)L_7-(int32_t)1)), L_11);
		TransformU5BU2CU5D_t3792884696* L_12 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_grid_4();
		int32_t L_13 = V_0;
		int32_t L_14 = ___y0;
		(L_12)->SetAt(L_13, L_14, (Transform_t1659122786 *)NULL);
		TransformU5BU2CU5D_t3792884696* L_15 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_grid_4();
		int32_t L_16 = V_0;
		int32_t L_17 = ___y0;
		Transform_t1659122786 * L_18 = (L_15)->GetAt(L_16, ((int32_t)((int32_t)L_17-(int32_t)1)));
		Transform_t1659122786 * L_19 = L_18;
		Vector3_t4282066566  L_20 = Transform_get_position_m2211398607(L_19, /*hidden argument*/NULL);
		Vector3_t4282066566  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vector3__ctor_m2926210380(&L_21, (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_22 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_19, L_22, /*hidden argument*/NULL);
	}

IL_0077:
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_007b:
	{
		int32_t L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		int32_t L_25 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_w_2();
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Grid::isRowFull(System.Int32)
extern Il2CppClass* Grid_t2228070_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t Grid_isRowFull_m4025209231_MetadataUsageId;
extern "C"  bool Grid_isRowFull_m4025209231 (Il2CppObject * __this /* static, unused */, int32_t ___y0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Grid_isRowFull_m4025209231_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0024;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3792884696* L_0 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_grid_4();
		int32_t L_1 = V_0;
		int32_t L_2 = ___y0;
		Transform_t1659122786 * L_3 = (L_0)->GetAt(L_1, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m3964590952(NULL /*static, unused*/, L_3, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_w_2();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void Grid::destroyFullRows()
extern Il2CppClass* Grid_t2228070_il2cpp_TypeInfo_var;
extern const uint32_t Grid_destroyFullRows_m3233945429_MetadataUsageId;
extern "C"  void Grid_destroyFullRows_m3233945429 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Grid_destroyFullRows_m3233945429_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0028;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		bool L_1 = Grid_isRowFull_m4025209231(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		Grid_destroyRow_m576040032(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		Grid_moveEverythingDownAboveRow_m729901795(NULL /*static, unused*/, ((int32_t)((int32_t)L_3+(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4-(int32_t)1));
	}

IL_0024:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_h_3();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Grid::clearGrid()
extern Il2CppClass* Grid_t2228070_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t Grid_clearGrid_m4087130278_MetadataUsageId;
extern "C"  void Grid_clearGrid_m4087130278 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Grid_clearGrid_m4087130278_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_005b;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_004c;
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3792884696* L_0 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_grid_4();
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		Transform_t1659122786 * L_3 = (L_0)->GetAt(L_1, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_3, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3792884696* L_5 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_grid_4();
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		Transform_t1659122786 * L_8 = (L_5)->GetAt(L_6, L_7);
		GameObject_t3674682005 * L_9 = Component_get_gameObject_m1170635899(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		TransformU5BU2CU5D_t3792884696* L_10 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_grid_4();
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		(L_10)->SetAt(L_11, L_12, (Transform_t1659122786 *)NULL);
	}

IL_0048:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_004c:
	{
		int32_t L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		int32_t L_15 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_h_3();
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		int32_t L_18 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_w_2();
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Group::.ctor()
extern "C"  void Group__ctor_m1165983212 (Group_t69076575 * __this, const MethodInfo* method)
{
	{
		__this->set_maxSlideSpeed_2((0.2f));
		__this->set_gravityTickSpeed_3((1.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Group::Awake()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisSpawner_t3948062024_m3891094857_MethodInfo_var;
extern const uint32_t Group_Awake_m1403588431_MetadataUsageId;
extern "C"  void Group_Awake_m1403588431 (Group_t69076575 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Group_Awake_m1403588431_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Spawner_t3948062024 * L_0 = Object_FindObjectOfType_TisSpawner_t3948062024_m3891094857(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisSpawner_t3948062024_m3891094857_MethodInfo_var);
		__this->set_spawner_6(L_0);
		return;
	}
}
// System.Void Group::Start()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisGameController_t2782302542_m1374642079_MethodInfo_var;
extern const uint32_t Group_Start_m113121004_MetadataUsageId;
extern "C"  void Group_Start_m113121004 (Group_t69076575 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Group_Start_m113121004_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameController_t2782302542 * V_0 = NULL;
	{
		bool L_0 = Group_isValidPosition_m2288485401(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_t3674682005 * L_1 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		GameController_t2782302542 * L_2 = Object_FindObjectOfType_TisGameController_t2782302542_m1374642079(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisGameController_t2782302542_m1374642079_MethodInfo_var);
		V_0 = L_2;
		GameController_t2782302542 * L_3 = V_0;
		GameController_gameOver_m1452769245(L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void Group::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Grid_t2228070_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3739;
extern Il2CppCodeGenString* _stringLiteral3317767;
extern Il2CppCodeGenString* _stringLiteral108511772;
extern Il2CppCodeGenString* _stringLiteral3089570;
extern const uint32_t Group_Update_m3512603297_MetadataUsageId;
extern "C"  void Group_Update_m3512603297 (Group_t69076575 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Group_Update_m3512603297_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3403617450(NULL /*static, unused*/, _stringLiteral3739, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_007b;
		}
	}
	{
		float L_1 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_lastSlide_4();
		float L_3 = __this->get_maxSlideSpeed_2();
		if ((!(((float)((float)((float)L_1-(float)L_2))) >= ((float)L_3))))
		{
			goto IL_007b;
		}
	}
	{
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_Rotate_m3498734243(L_4, (0.0f), (0.0f), (-90.0f), /*hidden argument*/NULL);
		bool L_5 = Group_isValidPosition_m2288485401(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_006a;
		}
	}
	{
		Transform_t1659122786 * L_6 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_Rotate_m3498734243(L_6, (0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_006a:
	{
		Group_updateGrid_m674409575(__this, /*hidden argument*/NULL);
	}

IL_0070:
	{
		float L_7 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastSlide_4(L_7);
	}

IL_007b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_8 = Input_GetKey_m3403617450(NULL /*static, unused*/, _stringLiteral3317767, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00f8;
		}
	}
	{
		float L_9 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = __this->get_lastSlide_4();
		float L_11 = __this->get_maxSlideSpeed_2();
		if ((!(((float)((float)((float)L_9-(float)L_10))) >= ((float)L_11))))
		{
			goto IL_00f8;
		}
	}
	{
		Transform_t1659122786 * L_12 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_13 = L_12;
		Vector3_t4282066566  L_14 = Transform_get_position_m2211398607(L_13, /*hidden argument*/NULL);
		Vector3_t4282066566  L_15 = Vector3_get_left_m1616598929(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_16 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_13, L_16, /*hidden argument*/NULL);
		bool L_17 = Group_isValidPosition_m2288485401(__this, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00e7;
		}
	}
	{
		Transform_t1659122786 * L_18 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_19 = L_18;
		Vector3_t4282066566  L_20 = Transform_get_position_m2211398607(L_19, /*hidden argument*/NULL);
		Vector3_t4282066566  L_21 = Vector3_get_right_m4015137012(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_22 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_19, L_22, /*hidden argument*/NULL);
		goto IL_00ed;
	}

IL_00e7:
	{
		Group_updateGrid_m674409575(__this, /*hidden argument*/NULL);
	}

IL_00ed:
	{
		float L_23 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastSlide_4(L_23);
	}

IL_00f8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_24 = Input_GetKey_m3403617450(NULL /*static, unused*/, _stringLiteral108511772, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0175;
		}
	}
	{
		float L_25 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_26 = __this->get_lastSlide_4();
		float L_27 = __this->get_maxSlideSpeed_2();
		if ((!(((float)((float)((float)L_25-(float)L_26))) >= ((float)L_27))))
		{
			goto IL_0175;
		}
	}
	{
		Transform_t1659122786 * L_28 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_29 = L_28;
		Vector3_t4282066566  L_30 = Transform_get_position_m2211398607(L_29, /*hidden argument*/NULL);
		Vector3_t4282066566  L_31 = Vector3_get_right_m4015137012(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_32 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_29, L_32, /*hidden argument*/NULL);
		bool L_33 = Group_isValidPosition_m2288485401(__this, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_0164;
		}
	}
	{
		Transform_t1659122786 * L_34 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_35 = L_34;
		Vector3_t4282066566  L_36 = Transform_get_position_m2211398607(L_35, /*hidden argument*/NULL);
		Vector3_t4282066566  L_37 = Vector3_get_left_m1616598929(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_38 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_35, L_38, /*hidden argument*/NULL);
		goto IL_016a;
	}

IL_0164:
	{
		Group_updateGrid_m674409575(__this, /*hidden argument*/NULL);
	}

IL_016a:
	{
		float L_39 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastSlide_4(L_39);
	}

IL_0175:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_40 = Input_GetKey_m3403617450(NULL /*static, unused*/, _stringLiteral3089570, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_019b;
		}
	}
	{
		float L_41 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_42 = __this->get_lastFall_5();
		float L_43 = __this->get_gravityTickSpeed_3();
		if ((!(((float)((float)((float)L_41-(float)L_42))) >= ((float)L_43))))
		{
			goto IL_0227;
		}
	}

IL_019b:
	{
		Transform_t1659122786 * L_44 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_45 = L_44;
		Vector3_t4282066566  L_46 = Transform_get_position_m2211398607(L_45, /*hidden argument*/NULL);
		Vector3_t4282066566  L_47;
		memset(&L_47, 0, sizeof(L_47));
		Vector3__ctor_m2926210380(&L_47, (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_48 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_46, L_47, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_45, L_48, /*hidden argument*/NULL);
		bool L_49 = Group_isValidPosition_m2288485401(__this, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_0216;
		}
	}
	{
		Transform_t1659122786 * L_50 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_51 = L_50;
		Vector3_t4282066566  L_52 = Transform_get_position_m2211398607(L_51, /*hidden argument*/NULL);
		Vector3_t4282066566  L_53;
		memset(&L_53, 0, sizeof(L_53));
		Vector3__ctor_m2926210380(&L_53, (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_54 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_52, L_53, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_51, L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		Grid_destroyFullRows_m3233945429(NULL /*static, unused*/, /*hidden argument*/NULL);
		Behaviour_set_enabled_m2046806933(__this, (bool)0, /*hidden argument*/NULL);
		Spawner_t3948062024 * L_55 = __this->get_spawner_6();
		Spawner_spawnNext_m1295567343(L_55, /*hidden argument*/NULL);
		goto IL_021c;
	}

IL_0216:
	{
		Group_updateGrid_m674409575(__this, /*hidden argument*/NULL);
	}

IL_021c:
	{
		float L_56 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastFall_5(L_56);
	}

IL_0227:
	{
		return;
	}
}
// System.Boolean Group::isValidPosition()
extern Il2CppClass* IEnumerator_t3464575207_il2cpp_TypeInfo_var;
extern Il2CppClass* Transform_t1659122786_il2cpp_TypeInfo_var;
extern Il2CppClass* Grid_t2228070_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1423340799_il2cpp_TypeInfo_var;
extern const uint32_t Group_isValidPosition_m2288485401_MetadataUsageId;
extern "C"  bool Group_isValidPosition_m2288485401 (Group_t69076575 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Group_isValidPosition_m2288485401_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t1659122786 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	Vector2_t4282066565  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Transform_t1659122786 * V_3 = NULL;
	bool V_4 = false;
	Il2CppObject * V_5 = NULL;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Il2CppObject * L_1 = Transform_GetEnumerator_m688365631(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0086;
		}

IL_0011:
		{
			Il2CppObject * L_2 = V_1;
			Il2CppObject * L_3 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t1659122786 *)CastclassClass(L_3, Transform_t1659122786_il2cpp_TypeInfo_var));
			Transform_t1659122786 * L_4 = V_0;
			Vector3_t4282066566  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
			Vector2_t4282066565  L_6 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
			Vector2_t4282066565  L_7 = Grid_roundPos_m3047481450(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			Vector2_t4282066565  L_8 = V_2;
			bool L_9 = Grid_isWithinBorders_m3499018057(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0041;
			}
		}

IL_0039:
		{
			V_4 = (bool)0;
			IL2CPP_LEAVE(0xAD, FINALLY_0096);
		}

IL_0041:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
			TransformU5BU2CU5D_t3792884696* L_10 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_grid_4();
			float L_11 = (&V_2)->get_x_1();
			float L_12 = (&V_2)->get_y_2();
			Transform_t1659122786 * L_13 = (L_10)->GetAt((((int32_t)((int32_t)L_11))), (((int32_t)((int32_t)L_12))));
			V_3 = L_13;
			Transform_t1659122786 * L_14 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
			bool L_15 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_14, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_0086;
			}
		}

IL_0068:
		{
			Transform_t1659122786 * L_16 = V_3;
			Transform_t1659122786 * L_17 = Transform_get_parent_m2236876972(L_16, /*hidden argument*/NULL);
			Transform_t1659122786 * L_18 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
			bool L_19 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0086;
			}
		}

IL_007e:
		{
			V_4 = (bool)0;
			IL2CPP_LEAVE(0xAD, FINALLY_0096);
		}

IL_0086:
		{
			Il2CppObject * L_20 = V_1;
			bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0011;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xAB, FINALLY_0096);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_0096;
	}

FINALLY_0096:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_22 = V_1;
			V_5 = ((Il2CppObject *)IsInst(L_22, IDisposable_t1423340799_il2cpp_TypeInfo_var));
			Il2CppObject * L_23 = V_5;
			if (L_23)
			{
				goto IL_00a3;
			}
		}

IL_00a2:
		{
			IL2CPP_END_FINALLY(150)
		}

IL_00a3:
		{
			Il2CppObject * L_24 = V_5;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(150)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_JUMP_TBL(0xAD, IL_00ad)
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_00ab:
	{
		return (bool)1;
	}

IL_00ad:
	{
		bool L_25 = V_4;
		return L_25;
	}
}
// System.Void Group::updateGrid()
extern Il2CppClass* Grid_t2228070_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t3464575207_il2cpp_TypeInfo_var;
extern Il2CppClass* Transform_t1659122786_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1423340799_il2cpp_TypeInfo_var;
extern const uint32_t Group_updateGrid_m674409575_MetadataUsageId;
extern "C"  void Group_updateGrid_m674409575 (Group_t69076575 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Group_updateGrid_m674409575_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Transform_t1659122786 * V_2 = NULL;
	Il2CppObject * V_3 = NULL;
	Vector2_t4282066565  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Il2CppObject * V_5 = NULL;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		goto IL_0066;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0057;
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3792884696* L_0 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_grid_4();
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		Transform_t1659122786 * L_3 = (L_0)->GetAt(L_1, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_3, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3792884696* L_5 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_grid_4();
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		Transform_t1659122786 * L_8 = (L_5)->GetAt(L_6, L_7);
		Transform_t1659122786 * L_9 = Transform_get_parent_m2236876972(L_8, /*hidden argument*/NULL);
		Transform_t1659122786 * L_10 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_m3964590952(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3792884696* L_12 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_grid_4();
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		(L_12)->SetAt(L_13, L_14, (Transform_t1659122786 *)NULL);
	}

IL_0053:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		int32_t L_17 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_w_2();
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0066:
	{
		int32_t L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
		int32_t L_20 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_h_3();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		Transform_t1659122786 * L_21 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Il2CppObject * L_22 = Transform_GetEnumerator_m688365631(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
	}

IL_007d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bb;
		}

IL_0082:
		{
			Il2CppObject * L_23 = V_3;
			Il2CppObject * L_24 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_23);
			V_2 = ((Transform_t1659122786 *)CastclassClass(L_24, Transform_t1659122786_il2cpp_TypeInfo_var));
			Transform_t1659122786 * L_25 = V_2;
			Vector3_t4282066566  L_26 = Transform_get_position_m2211398607(L_25, /*hidden argument*/NULL);
			Vector2_t4282066565  L_27 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Grid_t2228070_il2cpp_TypeInfo_var);
			Vector2_t4282066565  L_28 = Grid_roundPos_m3047481450(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
			V_4 = L_28;
			TransformU5BU2CU5D_t3792884696* L_29 = ((Grid_t2228070_StaticFields*)Grid_t2228070_il2cpp_TypeInfo_var->static_fields)->get_grid_4();
			float L_30 = (&V_4)->get_x_1();
			float L_31 = (&V_4)->get_y_2();
			Transform_t1659122786 * L_32 = V_2;
			(L_29)->SetAt((((int32_t)((int32_t)L_30))), (((int32_t)((int32_t)L_31))), L_32);
		}

IL_00bb:
		{
			Il2CppObject * L_33 = V_3;
			bool L_34 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_33);
			if (L_34)
			{
				goto IL_0082;
			}
		}

IL_00c6:
		{
			IL2CPP_LEAVE(0xE0, FINALLY_00cb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_00cb;
	}

FINALLY_00cb:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_35 = V_3;
			V_5 = ((Il2CppObject *)IsInst(L_35, IDisposable_t1423340799_il2cpp_TypeInfo_var));
			Il2CppObject * L_36 = V_5;
			if (L_36)
			{
				goto IL_00d8;
			}
		}

IL_00d7:
		{
			IL2CPP_END_FINALLY(203)
		}

IL_00d8:
		{
			Il2CppObject * L_37 = V_5;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, L_37);
			IL2CPP_END_FINALLY(203)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(203)
	{
		IL2CPP_JUMP_TBL(0xE0, IL_00e0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_00e0:
	{
		return;
	}
}
// System.Void Spawner::.ctor()
extern "C"  void Spawner__ctor_m1839725347 (Spawner_t3948062024 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spawner::Start()
extern "C"  void Spawner_Start_m786863139 (Spawner_t3948062024 * __this, const MethodInfo* method)
{
	{
		Spawner_spawnNext_m1295567343(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spawner::spawnNext()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t Spawner_spawnNext_m1295567343_MetadataUsageId;
extern "C"  void Spawner_spawnNext_m1295567343 (Spawner_t3948062024 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Spawner_spawnNext_m1295567343_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		GameObjectU5BU5D_t2662109048* L_0 = __this->get_blockTypes_2();
		int32_t L_1 = Random_Range_m75452833(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_0)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_1;
		GameObjectU5BU5D_t2662109048* L_2 = __this->get_blockTypes_2();
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		GameObject_t3674682005 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Transform_t1659122786 * L_6 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_7 = Transform_get_position_m2211398607(L_6, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_8 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_5, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
