#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t0.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo t0_TI;
#include "t0MD.h"


#include "t14.h"

// Metadata Definition <Module>
static MethodInfo* t0_MIs[] =
{
	NULL
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t0_0_0_0;
extern Il2CppType t0_1_0_0;
struct t0;
extern TypeInfo t0_TI;
TypeInfo t0_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<Module>", "", t0_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t0_TI, NULL, NULL, &EmptyCustomAttributesCache, &t0_TI, &t0_0_0_0, &t0_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t0), 0, -1, 0, 0, -1, 0, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1_TI;
#include "t1MD.h"

#include "t15.h"
#include "t16.h"
#include "t2.h"
#include "t17.h"
#include "t3.h"
extern TypeInfo t1_TI;
extern TypeInfo t2_TI;
extern TypeInfo t15_TI;
extern TypeInfo t17_TI;
extern TypeInfo t3_TI;
#include "t4MD.h"
#include "t2MD.h"
#include "t3MD.h"
extern MethodInfo m15_MI;
extern MethodInfo m16_MI;
extern MethodInfo m17_MI;
extern MethodInfo m18_MI;


extern MethodInfo m0_MI;
 void m0 (t1 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		m15(__this, &m15_MI);
		__this->f0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2_TI));
		t2 * L_0 = (t2 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2_TI));
		m16(L_0, &m16_MI);
		__this->f1 = L_0;
		V_0 = 0;
		goto IL_002f;
	}

IL_001f:
	{
		t2 * L_1 = (__this->f1);
		VirtActionInvoker1< bool >::Invoke(&m17_MI, L_1, 0);
		V_0 = ((int32_t)(V_0+1));
	}

IL_002f:
	{
		if ((((int32_t)V_0) < ((int32_t)p0)))
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t3_TI));
		t3 * L_2 = (t3 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t3_TI));
		m18(L_2, &m18_MI);
		__this->f2 = L_2;
		return;
	}
}
// Metadata Definition CreateHouses/HouseFloor
extern Il2CppType t16_0_0_6;
FieldInfo t1_f0_FieldInfo = 
{
	"width", &t16_0_0_6, &t1_TI, offsetof(t1, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1_f1_FieldInfo = 
{
	"squareTaken", &t2_0_0_6, &t1_TI, offsetof(t1, f1), &EmptyCustomAttributesCache};
extern Il2CppType t3_0_0_6;
FieldInfo t1_f2_FieldInfo = 
{
	"rooms", &t3_0_0_6, &t1_TI, offsetof(t1, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1_FIs[] =
{
	&t1_f0_FieldInfo,
	&t1_f1_FieldInfo,
	&t1_f2_FieldInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1_m0_ParameterInfos[] = 
{
	{"requestedWidth", 0, 134217758, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m0_MI = 
{
	".ctor", (methodPointerType)&m0, &t1_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1_m0_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 13, NULL, (methodPointerType)NULL};
static MethodInfo* t1_MIs[] =
{
	&m0_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
static MethodInfo* t1_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t1_0_0_0;
extern Il2CppType t1_1_0_0;
extern TypeInfo t4_TI;
struct t1;
extern TypeInfo t1_TI;
extern TypeInfo t9_TI;
TypeInfo t1_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "HouseFloor", "", t1_MIs, NULL, t1_FIs, NULL, &t4_TI, NULL, &t9_TI, &t1_TI, NULL, t1_VT, &EmptyCustomAttributesCache, &t1_TI, &t1_0_0_0, &t1_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1), 0, -1, 0, 0, -1, 1048578, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 3, 0, 0, 4, 0, 0};
#include "t5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5_TI;
#include "t5MD.h"

#include "t6.h"
extern TypeInfo t5_TI;
extern TypeInfo t6_TI;
extern TypeInfo t1_TI;
extern TypeInfo t15_TI;
#include "t6MD.h"
extern MethodInfo m15_MI;
extern MethodInfo m23_MI;
extern MethodInfo m0_MI;
extern MethodInfo m24_MI;


extern MethodInfo m1_MI;
 void m1 (t5 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	{
		m15(__this, &m15_MI);
		__this->f1 = p0;
		__this->f2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t6_TI));
		t6 * L_0 = (t6 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t6_TI));
		m23(L_0, &m23_MI);
		__this->f0 = L_0;
		V_0 = 0;
		goto IL_003b;
	}

IL_0026:
	{
		t6 * L_1 = (__this->f0);
		t1 * L_2 = (t1 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1_TI));
		m0(L_2, p1, &m0_MI);
		VirtActionInvoker1< t1 * >::Invoke(&m24_MI, L_1, L_2);
		V_0 = ((int32_t)(V_0+1));
	}

IL_003b:
	{
		if ((((int32_t)V_0) < ((int32_t)p0)))
		{
			goto IL_0026;
		}
	}
	{
		return;
	}
}
// Metadata Definition CreateHouses/House
extern Il2CppType t6_0_0_6;
FieldInfo t5_f0_FieldInfo = 
{
	"floors", &t6_0_0_6, &t5_TI, offsetof(t5, f0), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_6;
FieldInfo t5_f1_FieldInfo = 
{
	"height", &t16_0_0_6, &t5_TI, offsetof(t5, f1), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_6;
FieldInfo t5_f2_FieldInfo = 
{
	"width", &t16_0_0_6, &t5_TI, offsetof(t5, f2), &EmptyCustomAttributesCache};
static FieldInfo* t5_FIs[] =
{
	&t5_f0_FieldInfo,
	&t5_f1_FieldInfo,
	&t5_f2_FieldInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5_m1_ParameterInfos[] = 
{
	{"_height", 0, 134217759, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"_width", 1, 134217760, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m1_MI = 
{
	".ctor", (methodPointerType)&m1, &t5_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5_m1_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 14, NULL, (methodPointerType)NULL};
static MethodInfo* t5_MIs[] =
{
	&m1_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
static MethodInfo* t5_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_1_0_0;
extern TypeInfo t4_TI;
struct t5;
extern TypeInfo t5_TI;
extern TypeInfo t9_TI;
TypeInfo t5_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "House", "", t5_MIs, NULL, t5_FIs, NULL, &t4_TI, NULL, &t9_TI, &t5_TI, NULL, t5_VT, &EmptyCustomAttributesCache, &t5_TI, &t5_0_0_0, &t5_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t5), 0, -1, 0, 0, -1, 1048578, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 3, 0, 0, 4, 0, 0};
#include "t7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7_TI;
#include "t7MD.h"

#include "t8.h"
extern TypeInfo t7_TI;
extern MethodInfo m15_MI;


extern MethodInfo m2_MI;
 void m2 (t7 * __this, int32_t p0, t8* p1, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		__this->f0 = p0;
		__this->f1 = p1;
		return;
	}
}
// Metadata Definition CreateHouses/Room
extern Il2CppType t16_0_0_6;
FieldInfo t7_f0_FieldInfo = 
{
	"location", &t16_0_0_6, &t7_TI, offsetof(t7, f0), &EmptyCustomAttributesCache};
extern Il2CppType t8_0_0_6;
FieldInfo t7_f1_FieldInfo = 
{
	"type", &t8_0_0_6, &t7_TI, offsetof(t7, f1), &EmptyCustomAttributesCache};
static FieldInfo* t7_FIs[] =
{
	&t7_f0_FieldInfo,
	&t7_f1_FieldInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t7_m2_ParameterInfos[] = 
{
	{"_location", 0, 134217761, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"_type", 1, 134217762, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern TypeInfo t7_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m2_MI = 
{
	".ctor", (methodPointerType)&m2, &t7_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t7_m2_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 15, NULL, (methodPointerType)NULL};
static MethodInfo* t7_MIs[] =
{
	&m2_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
static MethodInfo* t7_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_1_0_0;
extern TypeInfo t4_TI;
struct t7;
extern TypeInfo t7_TI;
extern TypeInfo t9_TI;
TypeInfo t7_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "Room", "", t7_MIs, NULL, t7_FIs, NULL, &t4_TI, NULL, &t9_TI, &t7_TI, NULL, t7_VT, &EmptyCustomAttributesCache, &t7_TI, &t7_0_0_0, &t7_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t7), 0, -1, 0, 0, -1, 1048578, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 0, 4, 0, 0};
#include "t9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t9_TI;
#include "t9MD.h"

#include "t10.h"
#include "t13.h"
#include "t18.h"
#include "t11.h"
#include "t19.h"
#include "t20.h"
#include "t21.h"
#include "t22.h"
#include "t23.h"
extern TypeInfo t9_TI;
extern TypeInfo t10_TI;
extern TypeInfo t13_TI;
extern TypeInfo t16_TI;
extern TypeInfo t5_TI;
extern TypeInfo t6_TI;
extern TypeInfo t1_TI;
extern TypeInfo t2_TI;
extern TypeInfo t17_TI;
extern TypeInfo t15_TI;
extern TypeInfo t7_TI;
extern TypeInfo t3_TI;
extern TypeInfo t18_TI;
extern TypeInfo t8_TI;
extern TypeInfo t19_TI;
extern TypeInfo t24_TI;
#include "t10MD.h"
#include "t12MD.h"
#include "t13MD.h"
#include "t18MD.h"
#include "t8MD.h"
#include "t19MD.h"
#include "t25MD.h"
#include "t21MD.h"
#include "t23MD.h"
extern MethodInfo m25_MI;
extern MethodInfo m26_MI;
extern MethodInfo m27_MI;
extern MethodInfo m28_MI;
extern MethodInfo m1_MI;
extern MethodInfo m29_MI;
extern MethodInfo m0_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m2_MI;
extern MethodInfo m32_MI;
extern MethodInfo m7_MI;
extern MethodInfo m10_MI;
extern MethodInfo m9_MI;
extern MethodInfo m6_MI;
extern MethodInfo m8_MI;
extern MethodInfo m11_MI;
extern MethodInfo m33_MI;
extern MethodInfo m34_MI;
extern MethodInfo m35_MI;
extern MethodInfo m36_MI;
extern MethodInfo m37_MI;
extern MethodInfo m38_MI;
extern MethodInfo m39_MI;
extern MethodInfo m40_MI;
extern MethodInfo m41_MI;
extern MethodInfo m42_MI;
extern MethodInfo m12_MI;
extern MethodInfo m13_MI;
extern MethodInfo m14_MI;


extern MethodInfo m3_MI;
 void m3 (t9 * __this, MethodInfo* method){
	{
		__this->f2 = 7;
		__this->f3 = 8;
		__this->f4 = ((int32_t)13);
		__this->f5 = 4;
		__this->f6 = ((int32_t)9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t10_TI));
		t10 * L_0 = (t10 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t10_TI));
		m25(L_0, &m25_MI);
		__this->f7 = L_0;
		m26(__this, &m26_MI);
		return;
	}
}
extern MethodInfo m4_MI;
 void m4 (t9 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t13 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t5 * V_5 = {0};
	int32_t V_6 = 0;
	t1 * V_7 = {0};
	bool V_8 = false;
	t1 * V_9 = {0};
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	t1 * V_13 = {0};
	t7 * V_14 = {0};
	t18  V_15 = {0};
	int32_t leaveInstructions[1] = {0};
	t26 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t26 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		V_0 = 0;
		t13 * L_0 = (t13 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t13_TI));
		m27(L_0, &m27_MI);
		V_1 = L_0;
		V_2 = 0;
		goto IL_038e;
	}

IL_000f:
	{
		int32_t L_1 = (__this->f3);
		int32_t L_2 = (__this->f4);
		int32_t L_3 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&m28_MI, V_1, L_1, L_2);
		V_3 = L_3;
		int32_t L_4 = (__this->f5);
		int32_t L_5 = (__this->f6);
		int32_t L_6 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&m28_MI, V_1, L_4, L_5);
		V_4 = L_6;
		t5 * L_7 = (t5 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t5_TI));
		m1(L_7, V_3, V_4, &m1_MI);
		V_5 = L_7;
		V_6 = 0;
		goto IL_019a;
	}

IL_0048:
	{
		t6 * L_8 = (V_5->f0);
		t1 * L_9 = (t1 *)VirtFuncInvoker1< t1 *, int32_t >::Invoke(&m29_MI, L_8, V_6);
		V_7 = L_9;
		V_8 = ((((int32_t)V_6) == ((int32_t)((int32_t)(V_3-1))))? 1 : 0);
		t1 * L_10 = (t1 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1_TI));
		m0(L_10, 0, &m0_MI);
		V_9 = L_10;
		if (V_8)
		{
			goto IL_0082;
		}
	}
	{
		t6 * L_11 = (V_5->f0);
		t1 * L_12 = (t1 *)VirtFuncInvoker1< t1 *, int32_t >::Invoke(&m29_MI, L_11, ((int32_t)(V_6+1)));
		V_9 = L_12;
	}

IL_0082:
	{
		int32_t L_13 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&m28_MI, V_1, 0, V_4);
		V_10 = L_13;
		goto IL_009d;
	}

IL_0092:
	{
		int32_t L_14 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&m28_MI, V_1, 0, V_4);
		V_10 = L_14;
	}

IL_009d:
	{
		t2 * L_15 = (V_7->f1);
		bool L_16 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m30_MI, L_15, V_10);
		if (L_16)
		{
			goto IL_0092;
		}
	}
	{
		t2 * L_17 = (V_7->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m31_MI, L_17, V_10, 1);
		t3 * L_18 = (V_7->f2);
		t7 * L_19 = (t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t7_TI));
		m2(L_19, V_10, (t8*) &_stringLiteral1, &m2_MI);
		VirtActionInvoker1< t7 * >::Invoke(&m32_MI, L_18, L_19);
		V_11 = 0;
		goto IL_018b;
	}

IL_00df:
	{
		if ((((int32_t)V_11) == ((int32_t)V_10)))
		{
			goto IL_00fb;
		}
	}
	{
		t2 * L_20 = (V_7->f1);
		bool L_21 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m30_MI, L_20, V_11);
		if (!L_21)
		{
			goto IL_0106;
		}
	}

IL_00fb:
	{
		V_11 = ((int32_t)(V_11+1));
		goto IL_018b;
	}

IL_0106:
	{
		bool L_22 = m7(NULL, V_4, V_7, V_10, V_11, &m7_MI);
		if (!L_22)
		{
			goto IL_0143;
		}
	}
	{
		if (V_8)
		{
			goto IL_0132;
		}
	}
	{
		int32_t L_23 = m10(NULL, V_1, V_7, V_9, V_11, &m10_MI);
		V_11 = L_23;
		goto IL_013e;
	}

IL_0132:
	{
		int32_t L_24 = m9(NULL, V_1, V_7, V_11, &m9_MI);
		V_11 = L_24;
	}

IL_013e:
	{
		goto IL_018b;
	}

IL_0143:
	{
		bool L_25 = m6(NULL, V_4, V_7, V_10, V_11, &m6_MI);
		if (!L_25)
		{
			goto IL_0180;
		}
	}
	{
		if (V_8)
		{
			goto IL_016f;
		}
	}
	{
		int32_t L_26 = m8(NULL, V_1, V_7, V_9, V_11, &m8_MI);
		V_11 = L_26;
		goto IL_017b;
	}

IL_016f:
	{
		int32_t L_27 = m9(NULL, V_1, V_7, V_11, &m9_MI);
		V_11 = L_27;
	}

IL_017b:
	{
		goto IL_018b;
	}

IL_0180:
	{
		int32_t L_28 = m11(NULL, V_7, V_11, &m11_MI);
		V_11 = L_28;
	}

IL_018b:
	{
		if ((((int32_t)V_11) < ((int32_t)V_4)))
		{
			goto IL_00df;
		}
	}
	{
		V_6 = ((int32_t)(V_6+1));
	}

IL_019a:
	{
		if ((((int32_t)V_6) < ((int32_t)V_3)))
		{
			goto IL_0048;
		}
	}
	{
		t10 * L_29 = (__this->f7);
		VirtActionInvoker1< t5 * >::Invoke(&m33_MI, L_29, V_5);
		V_12 = 0;
		goto IL_036f;
	}

IL_01b7:
	{
		t6 * L_30 = (V_5->f0);
		t1 * L_31 = (t1 *)VirtFuncInvoker1< t1 *, int32_t >::Invoke(&m29_MI, L_30, V_12);
		V_13 = L_31;
		t3 * L_32 = (V_13->f2);
		t18  L_33 = m34(L_32, &m34_MI);
		V_15 = L_33;
	}

IL_01d5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_034b;
		}

IL_01da:
		{
			t7 * L_34 = m35((&V_15), &m35_MI);
			V_14 = L_34;
			t8* L_35 = (V_14->f1);
			IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
			bool L_36 = m36(NULL, L_35, (t8*) &_stringLiteral1, &m36_MI);
			if (!L_36)
			{
				goto IL_022b;
			}
		}

IL_01f9:
		{
			t11 * L_37 = (__this->f8);
			int32_t L_38 = (V_14->f0);
			t19  L_39 = {0};
			m37(&L_39, (((float)((int32_t)(((int32_t)(1*L_38))+V_0)))), (((float)((int32_t)(1*V_12)))), (0.0f), &m37_MI);
			t21 * L_40 = m38(__this, &m38_MI);
			t22  L_41 = m39(L_40, &m39_MI);
			m40(NULL, L_37, L_39, L_41, &m40_MI);
		}

IL_022b:
		{
			t8* L_42 = (V_14->f1);
			IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
			bool L_43 = m36(NULL, L_42, (t8*) &_stringLiteral2, &m36_MI);
			if (!L_43)
			{
				goto IL_0273;
			}
		}

IL_0241:
		{
			t11 * L_44 = (__this->f9);
			int32_t L_45 = (V_14->f0);
			t19  L_46 = {0};
			m37(&L_46, (((float)((int32_t)(((int32_t)(1*L_45))+V_0)))), (((float)((int32_t)(1*V_12)))), (0.0f), &m37_MI);
			t21 * L_47 = m38(__this, &m38_MI);
			t22  L_48 = m39(L_47, &m39_MI);
			m40(NULL, L_44, L_46, L_48, &m40_MI);
		}

IL_0273:
		{
			t8* L_49 = (V_14->f1);
			IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
			bool L_50 = m36(NULL, L_49, (t8*) &_stringLiteral3, &m36_MI);
			if (!L_50)
			{
				goto IL_02bb;
			}
		}

IL_0289:
		{
			t11 * L_51 = (__this->f10);
			int32_t L_52 = (V_14->f0);
			t19  L_53 = {0};
			m37(&L_53, (((float)((int32_t)(((int32_t)(1*L_52))+V_0)))), (((float)((int32_t)(1*V_12)))), (0.0f), &m37_MI);
			t21 * L_54 = m38(__this, &m38_MI);
			t22  L_55 = m39(L_54, &m39_MI);
			m40(NULL, L_51, L_53, L_55, &m40_MI);
		}

IL_02bb:
		{
			t8* L_56 = (V_14->f1);
			IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
			bool L_57 = m36(NULL, L_56, (t8*) &_stringLiteral4, &m36_MI);
			if (!L_57)
			{
				goto IL_0303;
			}
		}

IL_02d1:
		{
			t11 * L_58 = (__this->f11);
			int32_t L_59 = (V_14->f0);
			t19  L_60 = {0};
			m37(&L_60, (((float)((int32_t)(((int32_t)(1*L_59))+V_0)))), (((float)((int32_t)(1*V_12)))), (0.0f), &m37_MI);
			t21 * L_61 = m38(__this, &m38_MI);
			t22  L_62 = m39(L_61, &m39_MI);
			m40(NULL, L_58, L_60, L_62, &m40_MI);
		}

IL_0303:
		{
			t8* L_63 = (V_14->f1);
			IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
			bool L_64 = m36(NULL, L_63, (t8*) &_stringLiteral5, &m36_MI);
			if (!L_64)
			{
				goto IL_034b;
			}
		}

IL_0319:
		{
			t11 * L_65 = (__this->f12);
			int32_t L_66 = (V_14->f0);
			t19  L_67 = {0};
			m37(&L_67, (((float)((int32_t)(((int32_t)(1*L_66))+V_0)))), (((float)((int32_t)(1*V_12)))), (0.0f), &m37_MI);
			t21 * L_68 = m38(__this, &m38_MI);
			t22  L_69 = m39(L_68, &m39_MI);
			m40(NULL, L_65, L_67, L_69, &m40_MI);
		}

IL_034b:
		{
			bool L_70 = m41((&V_15), &m41_MI);
			if (L_70)
			{
				goto IL_01da;
			}
		}

IL_0357:
		{
			// IL_0357: leave IL_0369
			leaveInstructions[0] = 0x369; // 1
			THROW_SENTINEL(IL_0369);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_035c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t26 *)e.ex;
		goto IL_035c;
	}

IL_035c:
	{ // begin finally (depth: 1)
		t18  L_71 = V_15;
		t4 * L_72 = Box(InitializedTypeInfo(&t18_TI), &L_71);
		InterfaceActionInvoker0::Invoke(&m42_MI, L_72);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x369:
				goto IL_0369;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				t26 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception (_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0369:
	{
		V_12 = ((int32_t)(V_12+1));
	}

IL_036f:
	{
		if ((((int32_t)V_12) < ((int32_t)V_3)))
		{
			goto IL_01b7;
		}
	}
	{
		int32_t L_73 = (V_5->f2);
		int32_t L_74 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&m28_MI, V_1, 1, 3);
		V_0 = ((int32_t)(((int32_t)(V_0+L_73))+L_74));
		V_2 = ((int32_t)(V_2+1));
	}

IL_038e:
	{
		int32_t L_75 = (__this->f2);
		if ((((int32_t)V_2) < ((int32_t)L_75)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
extern MethodInfo m5_MI;
 void m5 (t9 * __this, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m6_MI;
 bool m6 (t4 * __this, int32_t p0, t1 * p1, int32_t p2, int32_t p3, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if ((((int32_t)((int32_t)(p3+1))) >= ((int32_t)p2)))
		{
			goto IL_0025;
		}
	}
	{
		if ((((int32_t)((int32_t)(p3+1))) >= ((int32_t)p0)))
		{
			goto IL_0025;
		}
	}
	{
		t2 * L_0 = (p1->f1);
		bool L_1 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m30_MI, L_0, ((int32_t)(p3+1)));
		G_B4_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		return G_B4_0;
	}
}
extern MethodInfo m7_MI;
 bool m7 (t4 * __this, int32_t p0, t1 * p1, int32_t p2, int32_t p3, MethodInfo* method){
	int32_t G_B5_0 = 0;
	{
		if ((((int32_t)((int32_t)(p3+2))) >= ((int32_t)p2)))
		{
			goto IL_0038;
		}
	}
	{
		if ((((int32_t)((int32_t)(p3+2))) >= ((int32_t)p0)))
		{
			goto IL_0038;
		}
	}
	{
		t2 * L_0 = (p1->f1);
		bool L_1 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m30_MI, L_0, ((int32_t)(p3+1)));
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		t2 * L_2 = (p1->f1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m30_MI, L_2, ((int32_t)(p3+2)));
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B5_0 = 0;
	}

IL_0039:
	{
		return G_B5_0;
	}
}
extern MethodInfo m8_MI;
 int32_t m8 (t4 * __this, t13 * p0, t1 * p1, t1 * p2, int32_t p3, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&m28_MI, p0, 0, 3);
		V_0 = L_0;
		V_1 = V_0;
		if (V_1 == 0)
		{
			goto IL_0022;
		}
		if (V_1 == 1)
		{
			goto IL_0031;
		}
		if (V_1 == 2)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0048;
	}

IL_0022:
	{
		m11(NULL, p1, p3, &m11_MI);
		int32_t L_1 = p3;
		p3 = ((int32_t)(L_1+1));
		return L_1;
	}

IL_0031:
	{
		m12(NULL, p1, p3, &m12_MI);
		return ((int32_t)(p3+2));
	}

IL_003c:
	{
		m13(NULL, p1, p2, p3, &m13_MI);
		return ((int32_t)(p3+2));
	}

IL_0048:
	{
		return ((int32_t)(p3+1));
	}
}
extern MethodInfo m9_MI;
 int32_t m9 (t4 * __this, t13 * p0, t1 * p1, int32_t p2, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&m28_MI, p0, 0, 2);
		V_0 = L_0;
		V_1 = V_0;
		if (!V_1)
		{
			goto IL_001d;
		}
	}
	{
		if ((((int32_t)V_1) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0037;
	}

IL_001d:
	{
		m11(NULL, p1, p2, &m11_MI);
		int32_t L_1 = ((int32_t)(p2+1));
		p2 = L_1;
		return L_1;
	}

IL_002c:
	{
		m12(NULL, p1, p2, &m12_MI);
		return ((int32_t)(p2+2));
	}

IL_0037:
	{
		return ((int32_t)(p2+1));
	}
}
extern MethodInfo m10_MI;
 int32_t m10 (t4 * __this, t13 * p0, t1 * p1, t1 * p2, int32_t p3, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&m28_MI, p0, 0, 4);
		V_0 = L_0;
		V_1 = V_0;
		if (V_1 == 0)
		{
			goto IL_0026;
		}
		if (V_1 == 1)
		{
			goto IL_0035;
		}
		if (V_1 == 2)
		{
			goto IL_0040;
		}
		if (V_1 == 3)
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0058;
	}

IL_0026:
	{
		m11(NULL, p1, p3, &m11_MI);
		int32_t L_1 = ((int32_t)(p3+1));
		p3 = L_1;
		return L_1;
	}

IL_0035:
	{
		m12(NULL, p1, p3, &m12_MI);
		return ((int32_t)(p3+2));
	}

IL_0040:
	{
		m13(NULL, p1, p2, p3, &m13_MI);
		return ((int32_t)(p3+2));
	}

IL_004c:
	{
		m14(NULL, p1, p2, p3, &m14_MI);
		return ((int32_t)(p3+3));
	}

IL_0058:
	{
		return ((int32_t)(p3+1));
	}
}
extern MethodInfo m11_MI;
 int32_t m11 (t4 * __this, t1 * p0, int32_t p1, MethodInfo* method){
	{
		t2 * L_0 = (p0->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m31_MI, L_0, p1, 1);
		t3 * L_1 = (p0->f2);
		t7 * L_2 = (t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t7_TI));
		m2(L_2, p1, (t8*) &_stringLiteral2, &m2_MI);
		VirtActionInvoker1< t7 * >::Invoke(&m32_MI, L_1, L_2);
		int32_t L_3 = ((int32_t)(p1+1));
		p1 = L_3;
		return L_3;
	}
}
extern MethodInfo m12_MI;
 void m12 (t4 * __this, t1 * p0, int32_t p1, MethodInfo* method){
	{
		t2 * L_0 = (p0->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m31_MI, L_0, p1, 1);
		t2 * L_1 = (p0->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m31_MI, L_1, ((int32_t)(p1+1)), 1);
		t3 * L_2 = (p0->f2);
		t7 * L_3 = (t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t7_TI));
		m2(L_3, p1, (t8*) &_stringLiteral3, &m2_MI);
		VirtActionInvoker1< t7 * >::Invoke(&m32_MI, L_2, L_3);
		return;
	}
}
extern MethodInfo m13_MI;
 void m13 (t4 * __this, t1 * p0, t1 * p1, int32_t p2, MethodInfo* method){
	{
		t2 * L_0 = (p0->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m31_MI, L_0, p2, 1);
		t2 * L_1 = (p0->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m31_MI, L_1, ((int32_t)(p2+1)), 1);
		t2 * L_2 = (p1->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m31_MI, L_2, p2, 1);
		t2 * L_3 = (p1->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m31_MI, L_3, ((int32_t)(p2+1)), 1);
		t3 * L_4 = (p0->f2);
		t7 * L_5 = (t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t7_TI));
		m2(L_5, p2, (t8*) &_stringLiteral4, &m2_MI);
		VirtActionInvoker1< t7 * >::Invoke(&m32_MI, L_4, L_5);
		return;
	}
}
extern MethodInfo m14_MI;
 void m14 (t4 * __this, t1 * p0, t1 * p1, int32_t p2, MethodInfo* method){
	{
		t2 * L_0 = (p0->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m31_MI, L_0, p2, 1);
		t2 * L_1 = (p0->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m31_MI, L_1, ((int32_t)(p2+1)), 1);
		t2 * L_2 = (p0->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m31_MI, L_2, ((int32_t)(p2+2)), 1);
		t2 * L_3 = (p1->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m31_MI, L_3, p2, 1);
		t2 * L_4 = (p1->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m31_MI, L_4, ((int32_t)(p2+1)), 1);
		t2 * L_5 = (p1->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m31_MI, L_5, ((int32_t)(p2+2)), 1);
		t3 * L_6 = (p0->f2);
		t7 * L_7 = (t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t7_TI));
		m2(L_7, p2, (t8*) &_stringLiteral5, &m2_MI);
		VirtActionInvoker1< t7 * >::Invoke(&m32_MI, L_6, L_7);
		return;
	}
}
// Metadata Definition CreateHouses
extern Il2CppType t16_0_0_6;
FieldInfo t9_f2_FieldInfo = 
{
	"buildingCount", &t16_0_0_6, &t9_TI, offsetof(t9, f2), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_6;
FieldInfo t9_f3_FieldInfo = 
{
	"minHeight", &t16_0_0_6, &t9_TI, offsetof(t9, f3), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_6;
FieldInfo t9_f4_FieldInfo = 
{
	"maxHeight", &t16_0_0_6, &t9_TI, offsetof(t9, f4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_6;
FieldInfo t9_f5_FieldInfo = 
{
	"minWidth", &t16_0_0_6, &t9_TI, offsetof(t9, f5), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_6;
FieldInfo t9_f6_FieldInfo = 
{
	"maxWidth", &t16_0_0_6, &t9_TI, offsetof(t9, f6), &EmptyCustomAttributesCache};
extern Il2CppType t10_0_0_1;
FieldInfo t9_f7_FieldInfo = 
{
	"housesToBuild", &t10_0_0_1, &t9_TI, offsetof(t9, f7), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t9_f8_FieldInfo = 
{
	"stairs", &t11_0_0_6, &t9_TI, offsetof(t9, f8), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t9_f9_FieldInfo = 
{
	"_1x1", &t11_0_0_6, &t9_TI, offsetof(t9, f9), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t9_f10_FieldInfo = 
{
	"_2x1", &t11_0_0_6, &t9_TI, offsetof(t9, f10), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t9_f11_FieldInfo = 
{
	"_2x2", &t11_0_0_6, &t9_TI, offsetof(t9, f11), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t9_f12_FieldInfo = 
{
	"_3x2", &t11_0_0_6, &t9_TI, offsetof(t9, f12), &EmptyCustomAttributesCache};
static FieldInfo* t9_FIs[] =
{
	&t9_f2_FieldInfo,
	&t9_f3_FieldInfo,
	&t9_f4_FieldInfo,
	&t9_f5_FieldInfo,
	&t9_f6_FieldInfo,
	&t9_f7_FieldInfo,
	&t9_f8_FieldInfo,
	&t9_f9_FieldInfo,
	&t9_f10_FieldInfo,
	&t9_f11_FieldInfo,
	&t9_f12_FieldInfo,
	NULL
};
extern TypeInfo t9_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m3_MI = 
{
	".ctor", (methodPointerType)&m3, &t9_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1, NULL, (methodPointerType)NULL};
extern TypeInfo t9_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m4_MI = 
{
	"Start", (methodPointerType)&m4, &t9_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2, NULL, (methodPointerType)NULL};
extern TypeInfo t9_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m5_MI = 
{
	"Update", (methodPointerType)&m5, &t9_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t9_m6_ParameterInfos[] = 
{
	{"width", 0, 134217729, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"currentFloor", 1, 134217730, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"stairIndex", 2, 134217731, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"horizontalIndex", 3, 134217732, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16_t4_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m6_MI = 
{
	"CanFit2WideRoom", (methodPointerType)&m6, &t9_TI, &t17_0_0_0, RuntimeInvoker_t17_t16_t4_t16_t16, t9_m6_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 4, false, false, 4, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t9_m7_ParameterInfos[] = 
{
	{"width", 0, 134217733, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"currentFloor", 1, 134217734, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"stairIndex", 2, 134217735, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"horizontalIndex", 3, 134217736, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16_t4_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m7_MI = 
{
	"CanFit3WideRoom", (methodPointerType)&m7, &t9_TI, &t17_0_0_0, RuntimeInvoker_t17_t16_t4_t16_t16, t9_m7_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 4, false, false, 5, NULL, (methodPointerType)NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t9_m8_ParameterInfos[] = 
{
	{"random", 0, 134217737, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"currentFloor", 1, 134217738, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"nextFloor", 2, 134217739, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"horizontalIndex", 3, 134217740, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m8_MI = 
{
	"AddUpTo2x2Room", (methodPointerType)&m8, &t9_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4_t4_t16, t9_m8_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 4, false, false, 6, NULL, (methodPointerType)NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t9_m9_ParameterInfos[] = 
{
	{"random", 0, 134217741, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"currentFloor", 1, 134217742, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"horizontalIndex", 2, 134217743, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m9_MI = 
{
	"Add2x1Or2x2Room", (methodPointerType)&m9, &t9_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4_t16, t9_m9_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 7, NULL, (methodPointerType)NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t9_m10_ParameterInfos[] = 
{
	{"random", 0, 134217744, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"currentFloor", 1, 134217745, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"nextFloor", 2, 134217746, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"horizontalIndex", 3, 134217747, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10_MI = 
{
	"AddUpTo3x2Room", (methodPointerType)&m10, &t9_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4_t4_t16, t9_m10_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 4, false, false, 8, NULL, (methodPointerType)NULL};
extern Il2CppType t1_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t9_m11_ParameterInfos[] = 
{
	{"currentFloor", 0, 134217748, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"horizontalIndex", 1, 134217749, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m11_MI = 
{
	"Add1x1Room", (methodPointerType)&m11, &t9_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t16, t9_m11_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 9, NULL, (methodPointerType)NULL};
extern Il2CppType t1_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t9_m12_ParameterInfos[] = 
{
	{"currentFloor", 0, 134217750, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"horizontalIndex", 1, 134217751, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m12_MI = 
{
	"add2x1Room", (methodPointerType)&m12, &t9_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t9_m12_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 10, NULL, (methodPointerType)NULL};
extern Il2CppType t1_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t9_m13_ParameterInfos[] = 
{
	{"currentFloor", 0, 134217752, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"nextFloor", 1, 134217753, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"horizontalIndex", 2, 134217754, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m13_MI = 
{
	"add2x2Room", (methodPointerType)&m13, &t9_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4_t16, t9_m13_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 11, NULL, (methodPointerType)NULL};
extern Il2CppType t1_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t9_m14_ParameterInfos[] = 
{
	{"currentFloor", 0, 134217755, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"nextFloor", 1, 134217756, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"horizontalIndex", 2, 134217757, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14_MI = 
{
	"add3x2Room", (methodPointerType)&m14, &t9_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4_t16, t9_m14_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 12, NULL, (methodPointerType)NULL};
static MethodInfo* t9_MIs[] =
{
	&m3_MI,
	&m4_MI,
	&m5_MI,
	&m6_MI,
	&m7_MI,
	&m8_MI,
	&m9_MI,
	&m10_MI,
	&m11_MI,
	&m12_MI,
	&m13_MI,
	&m14_MI,
	NULL
};
extern TypeInfo t1_TI;
extern TypeInfo t5_TI;
extern TypeInfo t7_TI;
static TypeInfo* t9_TI__nestedTypes[4] =
{
	&t1_TI,
	&t5_TI,
	&t7_TI,
	NULL
};
extern MethodInfo m43_MI;
extern MethodInfo m20_MI;
extern MethodInfo m44_MI;
extern MethodInfo m45_MI;
static MethodInfo* t9_VT[] =
{
	&m43_MI,
	&m20_MI,
	&m44_MI,
	&m45_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_1_0_0;
extern TypeInfo t12_TI;
struct t9;
extern TypeInfo t9_TI;
TypeInfo t9_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "CreateHouses", "", t9_MIs, NULL, t9_FIs, NULL, &t12_TI, t9_TI__nestedTypes, NULL, &t9_TI, NULL, t9_VT, &EmptyCustomAttributesCache, &t9_TI, &t9_0_0_0, &t9_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t9), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 12, 0, 11, 0, 3, 4, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
