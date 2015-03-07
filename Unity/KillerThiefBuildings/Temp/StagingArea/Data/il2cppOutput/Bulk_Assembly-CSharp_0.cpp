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


#include "t16.h"

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

#include "t17.h"
#include "t18.h"
#include "t2.h"
#include "t19.h"
#include "t3.h"
extern TypeInfo t1_TI;
extern TypeInfo t2_TI;
extern TypeInfo t17_TI;
extern TypeInfo t19_TI;
extern TypeInfo t3_TI;
#include "t4MD.h"
#include "t2MD.h"
#include "t3MD.h"
extern MethodInfo m24_MI;
extern MethodInfo m25_MI;
extern MethodInfo m26_MI;
extern MethodInfo m27_MI;


extern MethodInfo m0_MI;
 void m0 (t1 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		m24(__this, &m24_MI);
		__this->f0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2_TI));
		t2 * L_0 = (t2 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2_TI));
		m25(L_0, &m25_MI);
		__this->f1 = L_0;
		V_0 = 0;
		goto IL_002f;
	}

IL_001f:
	{
		t2 * L_1 = (__this->f1);
		VirtActionInvoker1< bool >::Invoke(&m26_MI, L_1, 0);
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
		m27(L_2, &m27_MI);
		__this->f2 = L_2;
		return;
	}
}
// Metadata Definition CreateHouses/HouseFloor
extern Il2CppType t18_0_0_6;
FieldInfo t1_f0_FieldInfo = 
{
	"width", &t18_0_0_6, &t1_TI, offsetof(t1, f0), &EmptyCustomAttributesCache};
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
extern Il2CppType t18_0_0_0;
static ParameterInfo t1_m0_ParameterInfos[] = 
{
	{"requestedWidth", 0, 134217763, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m0_MI = 
{
	".ctor", (methodPointerType)&m0, &t1_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t1_m0_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 19, NULL, (methodPointerType)NULL};
static MethodInfo* t1_MIs[] =
{
	&m0_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
static MethodInfo* t1_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
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
extern TypeInfo t17_TI;
#include "t6MD.h"
extern MethodInfo m24_MI;
extern MethodInfo m32_MI;
extern MethodInfo m0_MI;
extern MethodInfo m33_MI;


extern MethodInfo m1_MI;
 void m1 (t5 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	{
		m24(__this, &m24_MI);
		__this->f1 = p0;
		__this->f2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t6_TI));
		t6 * L_0 = (t6 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t6_TI));
		m32(L_0, &m32_MI);
		__this->f0 = L_0;
		V_0 = 0;
		goto IL_003b;
	}

IL_0026:
	{
		t6 * L_1 = (__this->f0);
		t1 * L_2 = (t1 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1_TI));
		m0(L_2, p1, &m0_MI);
		VirtActionInvoker1< t1 * >::Invoke(&m33_MI, L_1, L_2);
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
extern Il2CppType t18_0_0_6;
FieldInfo t5_f1_FieldInfo = 
{
	"height", &t18_0_0_6, &t5_TI, offsetof(t5, f1), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_6;
FieldInfo t5_f2_FieldInfo = 
{
	"width", &t18_0_0_6, &t5_TI, offsetof(t5, f2), &EmptyCustomAttributesCache};
static FieldInfo* t5_FIs[] =
{
	&t5_f0_FieldInfo,
	&t5_f1_FieldInfo,
	&t5_f2_FieldInfo,
	NULL
};
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t5_m1_ParameterInfos[] = 
{
	{"_height", 0, 134217764, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"_width", 1, 134217765, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m1_MI = 
{
	".ctor", (methodPointerType)&m1, &t5_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t5_m1_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 20, NULL, (methodPointerType)NULL};
static MethodInfo* t5_MIs[] =
{
	&m1_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
static MethodInfo* t5_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
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
extern MethodInfo m24_MI;


extern MethodInfo m2_MI;
 void m2 (t7 * __this, int32_t p0, t8* p1, MethodInfo* method){
	{
		m24(__this, &m24_MI);
		__this->f0 = p0;
		__this->f1 = p1;
		return;
	}
}
// Metadata Definition CreateHouses/Room
extern Il2CppType t18_0_0_6;
FieldInfo t7_f0_FieldInfo = 
{
	"location", &t18_0_0_6, &t7_TI, offsetof(t7, f0), &EmptyCustomAttributesCache};
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
extern Il2CppType t18_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t7_m2_ParameterInfos[] = 
{
	{"_location", 0, 134217766, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"_type", 1, 134217767, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern TypeInfo t7_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m2_MI = 
{
	".ctor", (methodPointerType)&m2, &t7_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t7_m2_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 21, NULL, (methodPointerType)NULL};
static MethodInfo* t7_MIs[] =
{
	&m2_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
static MethodInfo* t7_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
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
#include "t20.h"
#include "t13.h"
#include "t21.h"
#include "t4.h"
#include "t11.h"
#include "t22.h"
#include "t23.h"
#include "t24.h"
#include "t25.h"
#include "t26.h"
extern TypeInfo t9_TI;
extern TypeInfo t10_TI;
extern TypeInfo t20_TI;
extern TypeInfo t27_TI;
extern TypeInfo t4_TI;
extern TypeInfo t19_TI;
extern TypeInfo t28_TI;
extern TypeInfo t17_TI;
extern TypeInfo t13_TI;
extern TypeInfo t18_TI;
extern TypeInfo t5_TI;
extern TypeInfo t6_TI;
extern TypeInfo t1_TI;
extern TypeInfo t2_TI;
extern TypeInfo t7_TI;
extern TypeInfo t3_TI;
extern TypeInfo t21_TI;
extern TypeInfo t8_TI;
extern TypeInfo t23_TI;
extern TypeInfo t11_TI;
extern TypeInfo t29_TI;
#include "t10MD.h"
#include "t12MD.h"
#include "t18MD.h"
#include "t30MD.h"
#include "t20MD.h"
#include "t22MD.h"
#include "t13MD.h"
#include "t21MD.h"
#include "t8MD.h"
#include "t23MD.h"
#include "t11MD.h"
#include "t29MD.h"
extern MethodInfo m34_MI;
extern MethodInfo m35_MI;
extern MethodInfo m10_MI;
extern MethodInfo m36_MI;
extern MethodInfo m37_MI;
extern MethodInfo m38_MI;
extern MethodInfo m39_MI;
extern MethodInfo m40_MI;
extern MethodInfo m41_MI;
extern MethodInfo m42_MI;
extern MethodInfo m43_MI;
extern MethodInfo m44_MI;
extern MethodInfo m45_MI;
extern MethodInfo m1_MI;
extern MethodInfo m46_MI;
extern MethodInfo m0_MI;
extern MethodInfo m47_MI;
extern MethodInfo m48_MI;
extern MethodInfo m2_MI;
extern MethodInfo m49_MI;
extern MethodInfo m13_MI;
extern MethodInfo m16_MI;
extern MethodInfo m15_MI;
extern MethodInfo m12_MI;
extern MethodInfo m14_MI;
extern MethodInfo m17_MI;
extern MethodInfo m50_MI;
extern MethodInfo m51_MI;
extern MethodInfo m52_MI;
extern MethodInfo m53_MI;
extern MethodInfo m54_MI;
extern MethodInfo m55_MI;
extern MethodInfo m56_MI;
extern MethodInfo m57_MI;
extern MethodInfo m58_MI;
extern MethodInfo m59_MI;
extern MethodInfo m60_MI;
extern MethodInfo m18_MI;
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;


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
		m34(L_0, &m34_MI);
		__this->f7 = L_0;
		m35(__this, &m35_MI);
		return;
	}
}
extern MethodInfo m4_MI;
 void m4 (t9 * __this, MethodInfo* method){
	{
		m10(__this, &m10_MI);
		return;
	}
}
extern MethodInfo m5_MI;
 void m5 (t9 * __this, t8* p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		bool L_0 = m36(NULL, p0, (&V_0), &m36_MI);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		__this->f2 = V_0;
	}

IL_0014:
	{
		return;
	}
}
extern MethodInfo m6_MI;
 void m6 (t9 * __this, t8* p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		bool L_0 = m36(NULL, p0, (&V_0), &m36_MI);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		__this->f5 = V_0;
	}

IL_0014:
	{
		return;
	}
}
extern MethodInfo m7_MI;
 void m7 (t9 * __this, t8* p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		bool L_0 = m36(NULL, p0, (&V_0), &m36_MI);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		__this->f6 = V_0;
	}

IL_0014:
	{
		return;
	}
}
extern MethodInfo m8_MI;
 void m8 (t9 * __this, t8* p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		bool L_0 = m36(NULL, p0, (&V_0), &m36_MI);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		__this->f3 = V_0;
	}

IL_0014:
	{
		return;
	}
}
extern MethodInfo m9_MI;
 void m9 (t9 * __this, t8* p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		bool L_0 = m36(NULL, p0, (&V_0), &m36_MI);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		__this->f4 = V_0;
	}

IL_0014:
	{
		return;
	}
}
extern MethodInfo m10_MI;
 void m10 (t9 * __this, MethodInfo* method){
	t20 * V_0 = {0};
	t4 * V_1 = {0};
	int32_t V_2 = 0;
	t13 * V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t5 * V_7 = {0};
	int32_t V_8 = 0;
	t1 * V_9 = {0};
	bool V_10 = false;
	t1 * V_11 = {0};
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	t1 * V_15 = {0};
	t7 * V_16 = {0};
	t21  V_17 = {0};
	t4 * V_18 = {0};
	int32_t leaveInstructions[1] = {0};
	t31 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t31 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t20 * L_0 = m37(__this, &m37_MI);
		t4 * L_1 = (t4 *)VirtFuncInvoker0< t4 * >::Invoke(&m38_MI, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0011:
		{
			t4 * L_2 = (t4 *)InterfaceFuncInvoker0< t4 * >::Invoke(&m39_MI, V_1);
			V_0 = ((t20 *)Castclass(L_2, InitializedTypeInfo(&t20_TI)));
			t11 * L_3 = m40(V_0, &m40_MI);
			m41(NULL, L_3, &m41_MI);
		}

IL_0028:
		{
			bool L_4 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m42_MI, V_1);
			if (L_4)
			{
				goto IL_0011;
			}
		}

IL_0033:
		{
			// IL_0033: leave IL_004d
			leaveInstructions[0] = 0x4D; // 1
			THROW_SENTINEL(IL_004d);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0038;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t31 *)e.ex;
		goto IL_0038;
	}

IL_0038:
	{ // begin finally (depth: 1)
		{
			V_18 = ((t4 *)IsInst(V_1, InitializedTypeInfo(&t28_TI)));
			if (V_18)
			{
				goto IL_0045;
			}
		}

IL_0044:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x4D:
					goto IL_004d;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t31 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}

IL_0045:
		{
			InterfaceActionInvoker0::Invoke(&m43_MI, V_18);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x4D:
					goto IL_004d;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t31 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_004d:
	{
		V_2 = 0;
		t13 * L_5 = (t13 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t13_TI));
		m44(L_5, &m44_MI);
		V_3 = L_5;
		V_4 = 0;
		goto IL_044b;
	}

IL_005d:
	{
		int32_t L_6 = (__this->f3);
		int32_t L_7 = (__this->f4);
		int32_t L_8 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&m45_MI, V_3, L_6, ((int32_t)(L_7+1)));
		V_5 = L_8;
		int32_t L_9 = (__this->f5);
		int32_t L_10 = (__this->f6);
		int32_t L_11 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&m45_MI, V_3, L_9, ((int32_t)(L_10+1)));
		V_6 = L_11;
		t5 * L_12 = (t5 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t5_TI));
		m1(L_12, V_5, V_6, &m1_MI);
		V_7 = L_12;
		V_8 = 0;
		goto IL_01ef;
	}

IL_009c:
	{
		t6 * L_13 = (V_7->f0);
		t1 * L_14 = (t1 *)VirtFuncInvoker1< t1 *, int32_t >::Invoke(&m46_MI, L_13, V_8);
		V_9 = L_14;
		V_10 = ((((int32_t)V_8) == ((int32_t)((int32_t)(V_5-1))))? 1 : 0);
		t1 * L_15 = (t1 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1_TI));
		m0(L_15, 0, &m0_MI);
		V_11 = L_15;
		if (V_10)
		{
			goto IL_00d7;
		}
	}
	{
		t6 * L_16 = (V_7->f0);
		t1 * L_17 = (t1 *)VirtFuncInvoker1< t1 *, int32_t >::Invoke(&m46_MI, L_16, ((int32_t)(V_8+1)));
		V_11 = L_17;
	}

IL_00d7:
	{
		int32_t L_18 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&m45_MI, V_3, 0, V_6);
		V_12 = L_18;
		goto IL_00f2;
	}

IL_00e7:
	{
		int32_t L_19 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&m45_MI, V_3, 0, V_6);
		V_12 = L_19;
	}

IL_00f2:
	{
		t2 * L_20 = (V_9->f1);
		bool L_21 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m47_MI, L_20, V_12);
		if (L_21)
		{
			goto IL_00e7;
		}
	}
	{
		t2 * L_22 = (V_9->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m48_MI, L_22, V_12, 1);
		t3 * L_23 = (V_9->f2);
		t7 * L_24 = (t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t7_TI));
		m2(L_24, V_12, (t8*) &_stringLiteral1, &m2_MI);
		VirtActionInvoker1< t7 * >::Invoke(&m49_MI, L_23, L_24);
		V_13 = 0;
		goto IL_01e0;
	}

IL_0134:
	{
		if ((((int32_t)V_13) == ((int32_t)V_12)))
		{
			goto IL_0150;
		}
	}
	{
		t2 * L_25 = (V_9->f1);
		bool L_26 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m47_MI, L_25, V_13);
		if (!L_26)
		{
			goto IL_015b;
		}
	}

IL_0150:
	{
		V_13 = ((int32_t)(V_13+1));
		goto IL_01e0;
	}

IL_015b:
	{
		bool L_27 = m13(NULL, V_6, V_9, V_12, V_13, &m13_MI);
		if (!L_27)
		{
			goto IL_0198;
		}
	}
	{
		if (V_10)
		{
			goto IL_0187;
		}
	}
	{
		int32_t L_28 = m16(NULL, V_3, V_9, V_11, V_13, &m16_MI);
		V_13 = L_28;
		goto IL_0193;
	}

IL_0187:
	{
		int32_t L_29 = m15(NULL, V_3, V_9, V_13, &m15_MI);
		V_13 = L_29;
	}

IL_0193:
	{
		goto IL_01e0;
	}

IL_0198:
	{
		bool L_30 = m12(NULL, V_6, V_9, V_12, V_13, &m12_MI);
		if (!L_30)
		{
			goto IL_01d5;
		}
	}
	{
		if (V_10)
		{
			goto IL_01c4;
		}
	}
	{
		int32_t L_31 = m14(NULL, V_3, V_9, V_11, V_13, &m14_MI);
		V_13 = L_31;
		goto IL_01d0;
	}

IL_01c4:
	{
		int32_t L_32 = m15(NULL, V_3, V_9, V_13, &m15_MI);
		V_13 = L_32;
	}

IL_01d0:
	{
		goto IL_01e0;
	}

IL_01d5:
	{
		int32_t L_33 = m17(NULL, V_9, V_13, &m17_MI);
		V_13 = L_33;
	}

IL_01e0:
	{
		if ((((int32_t)V_13) < ((int32_t)V_6)))
		{
			goto IL_0134;
		}
	}
	{
		V_8 = ((int32_t)(V_8+1));
	}

IL_01ef:
	{
		if ((((int32_t)V_8) < ((int32_t)V_5)))
		{
			goto IL_009c;
		}
	}
	{
		t10 * L_34 = (__this->f7);
		VirtActionInvoker1< t5 * >::Invoke(&m50_MI, L_34, V_7);
		V_14 = 0;
		goto IL_0429;
	}

IL_020d:
	{
		t6 * L_35 = (V_7->f0);
		t1 * L_36 = (t1 *)VirtFuncInvoker1< t1 *, int32_t >::Invoke(&m46_MI, L_35, V_14);
		V_15 = L_36;
		t3 * L_37 = (V_15->f2);
		t21  L_38 = m51(L_37, &m51_MI);
		V_17 = L_38;
	}

IL_022b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0405;
		}

IL_0230:
		{
			t7 * L_39 = m52((&V_17), &m52_MI);
			V_16 = L_39;
			t8* L_40 = (V_16->f1);
			IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
			bool L_41 = m53(NULL, L_40, (t8*) &_stringLiteral1, &m53_MI);
			if (!L_41)
			{
				goto IL_0295;
			}
		}

IL_024f:
		{
			t11 * L_42 = (__this->f8);
			int32_t L_43 = (V_16->f0);
			t23  L_44 = {0};
			m54(&L_44, (((float)((int32_t)(((int32_t)(1*L_43))+V_2)))), (((float)((int32_t)(1*V_14)))), (0.0f), &m54_MI);
			t20 * L_45 = m37(__this, &m37_MI);
			t25  L_46 = m55(L_45, &m55_MI);
			t22 * L_47 = m56(NULL, L_42, L_44, L_46, &m56_MI);
			t20 * L_48 = m57(((t11 *)Castclass(L_47, InitializedTypeInfo(&t11_TI))), &m57_MI);
			t20 * L_49 = m37(__this, &m37_MI);
			m58(L_48, L_49, &m58_MI);
		}

IL_0295:
		{
			t8* L_50 = (V_16->f1);
			IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
			bool L_51 = m53(NULL, L_50, (t8*) &_stringLiteral2, &m53_MI);
			if (!L_51)
			{
				goto IL_02f1;
			}
		}

IL_02ab:
		{
			t11 * L_52 = (__this->f9);
			int32_t L_53 = (V_16->f0);
			t23  L_54 = {0};
			m54(&L_54, (((float)((int32_t)(((int32_t)(1*L_53))+V_2)))), (((float)((int32_t)(1*V_14)))), (0.0f), &m54_MI);
			t20 * L_55 = m37(__this, &m37_MI);
			t25  L_56 = m55(L_55, &m55_MI);
			t22 * L_57 = m56(NULL, L_52, L_54, L_56, &m56_MI);
			t20 * L_58 = m57(((t11 *)Castclass(L_57, InitializedTypeInfo(&t11_TI))), &m57_MI);
			t20 * L_59 = m37(__this, &m37_MI);
			m58(L_58, L_59, &m58_MI);
		}

IL_02f1:
		{
			t8* L_60 = (V_16->f1);
			IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
			bool L_61 = m53(NULL, L_60, (t8*) &_stringLiteral3, &m53_MI);
			if (!L_61)
			{
				goto IL_034d;
			}
		}

IL_0307:
		{
			t11 * L_62 = (__this->f10);
			int32_t L_63 = (V_16->f0);
			t23  L_64 = {0};
			m54(&L_64, (((float)((int32_t)(((int32_t)(1*L_63))+V_2)))), (((float)((int32_t)(1*V_14)))), (0.0f), &m54_MI);
			t20 * L_65 = m37(__this, &m37_MI);
			t25  L_66 = m55(L_65, &m55_MI);
			t22 * L_67 = m56(NULL, L_62, L_64, L_66, &m56_MI);
			t20 * L_68 = m57(((t11 *)Castclass(L_67, InitializedTypeInfo(&t11_TI))), &m57_MI);
			t20 * L_69 = m37(__this, &m37_MI);
			m58(L_68, L_69, &m58_MI);
		}

IL_034d:
		{
			t8* L_70 = (V_16->f1);
			IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
			bool L_71 = m53(NULL, L_70, (t8*) &_stringLiteral4, &m53_MI);
			if (!L_71)
			{
				goto IL_03a9;
			}
		}

IL_0363:
		{
			t11 * L_72 = (__this->f11);
			int32_t L_73 = (V_16->f0);
			t23  L_74 = {0};
			m54(&L_74, (((float)((int32_t)(((int32_t)(1*L_73))+V_2)))), (((float)((int32_t)(1*V_14)))), (0.0f), &m54_MI);
			t20 * L_75 = m37(__this, &m37_MI);
			t25  L_76 = m55(L_75, &m55_MI);
			t22 * L_77 = m56(NULL, L_72, L_74, L_76, &m56_MI);
			t20 * L_78 = m57(((t11 *)Castclass(L_77, InitializedTypeInfo(&t11_TI))), &m57_MI);
			t20 * L_79 = m37(__this, &m37_MI);
			m58(L_78, L_79, &m58_MI);
		}

IL_03a9:
		{
			t8* L_80 = (V_16->f1);
			IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
			bool L_81 = m53(NULL, L_80, (t8*) &_stringLiteral5, &m53_MI);
			if (!L_81)
			{
				goto IL_0405;
			}
		}

IL_03bf:
		{
			t11 * L_82 = (__this->f12);
			int32_t L_83 = (V_16->f0);
			t23  L_84 = {0};
			m54(&L_84, (((float)((int32_t)(((int32_t)(1*L_83))+V_2)))), (((float)((int32_t)(1*V_14)))), (0.0f), &m54_MI);
			t20 * L_85 = m37(__this, &m37_MI);
			t25  L_86 = m55(L_85, &m55_MI);
			t22 * L_87 = m56(NULL, L_82, L_84, L_86, &m56_MI);
			t20 * L_88 = m57(((t11 *)Castclass(L_87, InitializedTypeInfo(&t11_TI))), &m57_MI);
			t20 * L_89 = m37(__this, &m37_MI);
			m58(L_88, L_89, &m58_MI);
		}

IL_0405:
		{
			bool L_90 = m59((&V_17), &m59_MI);
			if (L_90)
			{
				goto IL_0230;
			}
		}

IL_0411:
		{
			// IL_0411: leave IL_0423
			leaveInstructions[0] = 0x423; // 1
			THROW_SENTINEL(IL_0423);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0416;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t31 *)e.ex;
		goto IL_0416;
	}

IL_0416:
	{ // begin finally (depth: 1)
		t21  L_91 = V_17;
		t4 * L_92 = Box(InitializedTypeInfo(&t21_TI), &L_91);
		InterfaceActionInvoker0::Invoke(&m43_MI, L_92);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x423:
				goto IL_0423;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				t31 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception (_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0423:
	{
		V_14 = ((int32_t)(V_14+1));
	}

IL_0429:
	{
		if ((((int32_t)V_14) < ((int32_t)V_5)))
		{
			goto IL_020d;
		}
	}
	{
		int32_t L_93 = (V_7->f2);
		int32_t L_94 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&m45_MI, V_3, 1, 3);
		V_2 = ((int32_t)(((int32_t)(V_2+L_93))+L_94));
		V_4 = ((int32_t)(V_4+1));
	}

IL_044b:
	{
		int32_t L_95 = (__this->f2);
		if ((((int32_t)V_4) < ((int32_t)L_95)))
		{
			goto IL_005d;
		}
	}
	{
		return;
	}
}
extern MethodInfo m11_MI;
 void m11 (t9 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t29_TI));
		bool L_0 = m60(NULL, ((int32_t)114), &m60_MI);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		m10(__this, &m10_MI);
	}

IL_0012:
	{
		return;
	}
}
extern MethodInfo m12_MI;
 bool m12 (t4 * __this, int32_t p0, t1 * p1, int32_t p2, int32_t p3, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		if ((((int32_t)((int32_t)(p3+1))) >= ((int32_t)p0)))
		{
			goto IL_001c;
		}
	}
	{
		t2 * L_0 = (p1->f1);
		bool L_1 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m47_MI, L_0, ((int32_t)(p3+1)));
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		return G_B3_0;
	}
}
extern MethodInfo m13_MI;
 bool m13 (t4 * __this, int32_t p0, t1 * p1, int32_t p2, int32_t p3, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if ((((int32_t)((int32_t)(p3+2))) >= ((int32_t)p0)))
		{
			goto IL_002f;
		}
	}
	{
		t2 * L_0 = (p1->f1);
		bool L_1 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m47_MI, L_0, ((int32_t)(p3+1)));
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		t2 * L_2 = (p1->f1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m47_MI, L_2, ((int32_t)(p3+2)));
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B4_0 = 0;
	}

IL_0030:
	{
		return G_B4_0;
	}
}
extern MethodInfo m14_MI;
 int32_t m14 (t4 * __this, t13 * p0, t1 * p1, t1 * p2, int32_t p3, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&m45_MI, p0, 0, 3);
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
		m17(NULL, p1, p3, &m17_MI);
		int32_t L_1 = p3;
		p3 = ((int32_t)(L_1+1));
		return L_1;
	}

IL_0031:
	{
		m18(NULL, p1, p3, &m18_MI);
		return ((int32_t)(p3+2));
	}

IL_003c:
	{
		m19(NULL, p1, p2, p3, &m19_MI);
		return ((int32_t)(p3+2));
	}

IL_0048:
	{
		return ((int32_t)(p3+1));
	}
}
extern MethodInfo m15_MI;
 int32_t m15 (t4 * __this, t13 * p0, t1 * p1, int32_t p2, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&m45_MI, p0, 0, 2);
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
		m17(NULL, p1, p2, &m17_MI);
		int32_t L_1 = ((int32_t)(p2+1));
		p2 = L_1;
		return L_1;
	}

IL_002c:
	{
		m18(NULL, p1, p2, &m18_MI);
		return ((int32_t)(p2+2));
	}

IL_0037:
	{
		return ((int32_t)(p2+1));
	}
}
extern MethodInfo m16_MI;
 int32_t m16 (t4 * __this, t13 * p0, t1 * p1, t1 * p2, int32_t p3, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&m45_MI, p0, 0, 4);
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
		m17(NULL, p1, p3, &m17_MI);
		int32_t L_1 = ((int32_t)(p3+1));
		p3 = L_1;
		return L_1;
	}

IL_0035:
	{
		m18(NULL, p1, p3, &m18_MI);
		return ((int32_t)(p3+2));
	}

IL_0040:
	{
		m19(NULL, p1, p2, p3, &m19_MI);
		return ((int32_t)(p3+2));
	}

IL_004c:
	{
		m20(NULL, p1, p2, p3, &m20_MI);
		return ((int32_t)(p3+3));
	}

IL_0058:
	{
		return ((int32_t)(p3+1));
	}
}
extern MethodInfo m17_MI;
 int32_t m17 (t4 * __this, t1 * p0, int32_t p1, MethodInfo* method){
	{
		t2 * L_0 = (p0->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m48_MI, L_0, p1, 1);
		t3 * L_1 = (p0->f2);
		t7 * L_2 = (t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t7_TI));
		m2(L_2, p1, (t8*) &_stringLiteral2, &m2_MI);
		VirtActionInvoker1< t7 * >::Invoke(&m49_MI, L_1, L_2);
		int32_t L_3 = ((int32_t)(p1+1));
		p1 = L_3;
		return L_3;
	}
}
extern MethodInfo m18_MI;
 void m18 (t4 * __this, t1 * p0, int32_t p1, MethodInfo* method){
	{
		t2 * L_0 = (p0->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m48_MI, L_0, p1, 1);
		t2 * L_1 = (p0->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m48_MI, L_1, ((int32_t)(p1+1)), 1);
		t3 * L_2 = (p0->f2);
		t7 * L_3 = (t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t7_TI));
		m2(L_3, p1, (t8*) &_stringLiteral3, &m2_MI);
		VirtActionInvoker1< t7 * >::Invoke(&m49_MI, L_2, L_3);
		return;
	}
}
extern MethodInfo m19_MI;
 void m19 (t4 * __this, t1 * p0, t1 * p1, int32_t p2, MethodInfo* method){
	{
		t2 * L_0 = (p0->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m48_MI, L_0, p2, 1);
		t2 * L_1 = (p0->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m48_MI, L_1, ((int32_t)(p2+1)), 1);
		t2 * L_2 = (p1->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m48_MI, L_2, p2, 1);
		t2 * L_3 = (p1->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m48_MI, L_3, ((int32_t)(p2+1)), 1);
		t3 * L_4 = (p0->f2);
		t7 * L_5 = (t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t7_TI));
		m2(L_5, p2, (t8*) &_stringLiteral4, &m2_MI);
		VirtActionInvoker1< t7 * >::Invoke(&m49_MI, L_4, L_5);
		return;
	}
}
extern MethodInfo m20_MI;
 void m20 (t4 * __this, t1 * p0, t1 * p1, int32_t p2, MethodInfo* method){
	{
		t2 * L_0 = (p0->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m48_MI, L_0, p2, 1);
		t2 * L_1 = (p0->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m48_MI, L_1, ((int32_t)(p2+1)), 1);
		t2 * L_2 = (p0->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m48_MI, L_2, ((int32_t)(p2+2)), 1);
		t2 * L_3 = (p1->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m48_MI, L_3, p2, 1);
		t2 * L_4 = (p1->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m48_MI, L_4, ((int32_t)(p2+1)), 1);
		t2 * L_5 = (p1->f1);
		VirtActionInvoker2< int32_t, bool >::Invoke(&m48_MI, L_5, ((int32_t)(p2+2)), 1);
		t3 * L_6 = (p0->f2);
		t7 * L_7 = (t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t7_TI));
		m2(L_7, p2, (t8*) &_stringLiteral5, &m2_MI);
		VirtActionInvoker1< t7 * >::Invoke(&m49_MI, L_6, L_7);
		return;
	}
}
// Metadata Definition CreateHouses
extern Il2CppType t18_0_0_6;
FieldInfo t9_f2_FieldInfo = 
{
	"buildingCount", &t18_0_0_6, &t9_TI, offsetof(t9, f2), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_6;
FieldInfo t9_f3_FieldInfo = 
{
	"minHeight", &t18_0_0_6, &t9_TI, offsetof(t9, f3), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_6;
FieldInfo t9_f4_FieldInfo = 
{
	"maxHeight", &t18_0_0_6, &t9_TI, offsetof(t9, f4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_6;
FieldInfo t9_f5_FieldInfo = 
{
	"minWidth", &t18_0_0_6, &t9_TI, offsetof(t9, f5), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_6;
FieldInfo t9_f6_FieldInfo = 
{
	"maxWidth", &t18_0_0_6, &t9_TI, offsetof(t9, f6), &EmptyCustomAttributesCache};
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
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m3_MI = 
{
	".ctor", (methodPointerType)&m3, &t9_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1, NULL, (methodPointerType)NULL};
extern TypeInfo t9_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m4_MI = 
{
	"Start", (methodPointerType)&m4, &t9_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2, NULL, (methodPointerType)NULL};
extern Il2CppType t8_0_0_0;
static ParameterInfo t9_m5_ParameterInfos[] = 
{
	{"inValue", 0, 134217729, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m5_MI = 
{
	"SetNumberHouses", (methodPointerType)&m5, &t9_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t9_m5_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 3, NULL, (methodPointerType)NULL};
extern Il2CppType t8_0_0_0;
static ParameterInfo t9_m6_ParameterInfos[] = 
{
	{"inMinWidth", 0, 134217730, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m6_MI = 
{
	"SetMinWidth", (methodPointerType)&m6, &t9_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t9_m6_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 4, NULL, (methodPointerType)NULL};
extern Il2CppType t8_0_0_0;
static ParameterInfo t9_m7_ParameterInfos[] = 
{
	{"inMaxWidth", 0, 134217731, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m7_MI = 
{
	"SetMaxWidth", (methodPointerType)&m7, &t9_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t9_m7_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 5, NULL, (methodPointerType)NULL};
extern Il2CppType t8_0_0_0;
static ParameterInfo t9_m8_ParameterInfos[] = 
{
	{"inMinHeight", 0, 134217732, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m8_MI = 
{
	"SetMinHeight", (methodPointerType)&m8, &t9_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t9_m8_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 6, NULL, (methodPointerType)NULL};
extern Il2CppType t8_0_0_0;
static ParameterInfo t9_m9_ParameterInfos[] = 
{
	{"inMaxHeight", 0, 134217733, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m9_MI = 
{
	"SetMaxHeight", (methodPointerType)&m9, &t9_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t9_m9_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 7, NULL, (methodPointerType)NULL};
extern TypeInfo t9_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10_MI = 
{
	"GenerateBuildings", (methodPointerType)&m10, &t9_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 8, NULL, (methodPointerType)NULL};
extern TypeInfo t9_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11_MI = 
{
	"Update", (methodPointerType)&m11, &t9_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 9, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t9_m12_ParameterInfos[] = 
{
	{"width", 0, 134217734, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"currentFloor", 1, 134217735, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"stairIndex", 2, 134217736, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"horizontalIndex", 3, 134217737, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18_t4_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12_MI = 
{
	"CanFit2WideRoom", (methodPointerType)&m12, &t9_TI, &t19_0_0_0, RuntimeInvoker_t19_t18_t4_t18_t18, t9_m12_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 4, false, false, 10, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t9_m13_ParameterInfos[] = 
{
	{"width", 0, 134217738, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"currentFloor", 1, 134217739, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"stairIndex", 2, 134217740, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"horizontalIndex", 3, 134217741, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18_t4_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m13_MI = 
{
	"CanFit3WideRoom", (methodPointerType)&m13, &t9_TI, &t19_0_0_0, RuntimeInvoker_t19_t18_t4_t18_t18, t9_m13_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 4, false, false, 11, NULL, (methodPointerType)NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t9_m14_ParameterInfos[] = 
{
	{"random", 0, 134217742, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"currentFloor", 1, 134217743, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"nextFloor", 2, 134217744, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"horizontalIndex", 3, 134217745, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14_MI = 
{
	"AddUpTo2x2Room", (methodPointerType)&m14, &t9_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4_t4_t18, t9_m14_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 4, false, false, 12, NULL, (methodPointerType)NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t9_m15_ParameterInfos[] = 
{
	{"random", 0, 134217746, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"currentFloor", 1, 134217747, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"horizontalIndex", 2, 134217748, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m15_MI = 
{
	"Add2x1Or2x2Room", (methodPointerType)&m15, &t9_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4_t18, t9_m15_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 13, NULL, (methodPointerType)NULL};
extern Il2CppType t13_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t9_m16_ParameterInfos[] = 
{
	{"random", 0, 134217749, &EmptyCustomAttributesCache, &t13_0_0_0},
	{"currentFloor", 1, 134217750, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"nextFloor", 2, 134217751, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"horizontalIndex", 3, 134217752, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m16_MI = 
{
	"AddUpTo3x2Room", (methodPointerType)&m16, &t9_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4_t4_t18, t9_m16_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 4, false, false, 14, NULL, (methodPointerType)NULL};
extern Il2CppType t1_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t9_m17_ParameterInfos[] = 
{
	{"currentFloor", 0, 134217753, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"horizontalIndex", 1, 134217754, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m17_MI = 
{
	"Add1x1Room", (methodPointerType)&m17, &t9_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t18, t9_m17_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 15, NULL, (methodPointerType)NULL};
extern Il2CppType t1_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t9_m18_ParameterInfos[] = 
{
	{"currentFloor", 0, 134217755, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"horizontalIndex", 1, 134217756, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m18_MI = 
{
	"add2x1Room", (methodPointerType)&m18, &t9_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t9_m18_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 16, NULL, (methodPointerType)NULL};
extern Il2CppType t1_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t9_m19_ParameterInfos[] = 
{
	{"currentFloor", 0, 134217757, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"nextFloor", 1, 134217758, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"horizontalIndex", 2, 134217759, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m19_MI = 
{
	"add2x2Room", (methodPointerType)&m19, &t9_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4_t18, t9_m19_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 17, NULL, (methodPointerType)NULL};
extern Il2CppType t1_0_0_0;
extern Il2CppType t1_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t9_m20_ParameterInfos[] = 
{
	{"currentFloor", 0, 134217760, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"nextFloor", 1, 134217761, &EmptyCustomAttributesCache, &t1_0_0_0},
	{"horizontalIndex", 2, 134217762, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t9_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m20_MI = 
{
	"add3x2Room", (methodPointerType)&m20, &t9_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4_t18, t9_m20_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 18, NULL, (methodPointerType)NULL};
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
	&m15_MI,
	&m16_MI,
	&m17_MI,
	&m18_MI,
	&m19_MI,
	&m20_MI,
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
extern MethodInfo m61_MI;
extern MethodInfo m29_MI;
extern MethodInfo m62_MI;
extern MethodInfo m63_MI;
static MethodInfo* t9_VT[] =
{
	&m61_MI,
	&m29_MI,
	&m62_MI,
	&m63_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_1_0_0;
extern TypeInfo t12_TI;
struct t9;
extern TypeInfo t9_TI;
TypeInfo t9_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "CreateHouses", "", t9_MIs, NULL, t9_FIs, NULL, &t12_TI, t9_TI__nestedTypes, NULL, &t9_TI, NULL, t9_VT, &EmptyCustomAttributesCache, &t9_TI, &t9_0_0_0, &t9_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t9), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 18, 0, 11, 0, 3, 4, 0, 0};
#include "t14.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t14_TI;
#include "t14MD.h"

#include "t15.h"
extern TypeInfo t29_TI;
extern TypeInfo t14_TI;
extern TypeInfo t23_TI;
#include "t15MD.h"
#include "t32MD.h"
extern MethodInfo m35_MI;
extern MethodInfo m64_MI;
extern MethodInfo m65_MI;
extern MethodInfo m66_MI;
extern MethodInfo m67_MI;
extern MethodInfo m37_MI;
extern MethodInfo m68_MI;
extern MethodInfo m54_MI;
extern MethodInfo m69_MI;


extern MethodInfo m21_MI;
 void m21 (t14 * __this, MethodInfo* method){
	{
		m35(__this, &m35_MI);
		return;
	}
}
extern MethodInfo m22_MI;
 void m22 (t14 * __this, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m23_MI;
 void m23 (t14 * __this, MethodInfo* method){
	t23  V_0 = {0};
	t23  V_1 = {0};
	t23  V_2 = {0};
	t23  V_3 = {0};
	t23  V_4 = {0};
	t23  V_5 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t29_TI));
		bool L_0 = m64(NULL, ((int32_t)273), &m64_MI);
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		t15 * L_1 = (__this->f2);
		t15 * L_2 = L_1;
		float L_3 = m65(L_2, &m65_MI);
		t15 * L_4 = (__this->f2);
		float L_5 = m65(L_4, &m65_MI);
		float L_6 = m66(NULL, &m66_MI);
		m67(L_2, ((float)(L_3+((float)(L_5*L_6)))), &m67_MI);
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t29_TI));
		bool L_7 = m64(NULL, ((int32_t)274), &m64_MI);
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		t15 * L_8 = (__this->f2);
		t15 * L_9 = L_8;
		float L_10 = m65(L_9, &m65_MI);
		t15 * L_11 = (__this->f2);
		float L_12 = m65(L_11, &m65_MI);
		float L_13 = m66(NULL, &m66_MI);
		m67(L_9, ((float)(L_10-((float)(L_12*L_13)))), &m67_MI);
	}

IL_0064:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t29_TI));
		bool L_14 = m64(NULL, ((int32_t)276), &m64_MI);
		if (!L_14)
		{
			goto IL_00dc;
		}
	}
	{
		t15 * L_15 = (__this->f2);
		t20 * L_16 = m37(L_15, &m37_MI);
		t15 * L_17 = (__this->f2);
		t20 * L_18 = m37(L_17, &m37_MI);
		t23  L_19 = m68(L_18, &m68_MI);
		V_0 = L_19;
		float L_20 = ((&V_0)->f1);
		float L_21 = m66(NULL, &m66_MI);
		t15 * L_22 = (__this->f2);
		t20 * L_23 = m37(L_22, &m37_MI);
		t23  L_24 = m68(L_23, &m68_MI);
		V_1 = L_24;
		float L_25 = ((&V_1)->f2);
		t15 * L_26 = (__this->f2);
		t20 * L_27 = m37(L_26, &m37_MI);
		t23  L_28 = m68(L_27, &m68_MI);
		V_2 = L_28;
		float L_29 = ((&V_2)->f3);
		t23  L_30 = {0};
		m54(&L_30, ((float)(L_20+((float)((5.0f)*L_21)))), L_25, L_29, &m54_MI);
		m69(L_16, L_30, &m69_MI);
	}

IL_00dc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t29_TI));
		bool L_31 = m64(NULL, ((int32_t)275), &m64_MI);
		if (!L_31)
		{
			goto IL_0156;
		}
	}
	{
		t15 * L_32 = (__this->f2);
		t20 * L_33 = m37(L_32, &m37_MI);
		t15 * L_34 = (__this->f2);
		t20 * L_35 = m37(L_34, &m37_MI);
		t23  L_36 = m68(L_35, &m68_MI);
		V_3 = L_36;
		float L_37 = ((&V_3)->f1);
		float L_38 = m66(NULL, &m66_MI);
		t15 * L_39 = (__this->f2);
		t20 * L_40 = m37(L_39, &m37_MI);
		t23  L_41 = m68(L_40, &m68_MI);
		V_4 = L_41;
		float L_42 = ((&V_4)->f2);
		t15 * L_43 = (__this->f2);
		t20 * L_44 = m37(L_43, &m37_MI);
		t23  L_45 = m68(L_44, &m68_MI);
		V_5 = L_45;
		float L_46 = ((&V_5)->f3);
		t23  L_47 = {0};
		m54(&L_47, ((float)(L_37+((float)((-5.0f)*L_38)))), L_42, L_46, &m54_MI);
		m69(L_33, L_47, &m69_MI);
	}

IL_0156:
	{
		return;
	}
}
// Metadata Definition moveCamera
extern Il2CppType t15_0_0_6;
FieldInfo t14_f2_FieldInfo = 
{
	"mainCamera", &t15_0_0_6, &t14_TI, offsetof(t14, f2), &EmptyCustomAttributesCache};
static FieldInfo* t14_FIs[] =
{
	&t14_f2_FieldInfo,
	NULL
};
extern TypeInfo t14_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m21_MI = 
{
	".ctor", (methodPointerType)&m21, &t14_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 22, NULL, (methodPointerType)NULL};
extern TypeInfo t14_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m22_MI = 
{
	"Start", (methodPointerType)&m22, &t14_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 23, NULL, (methodPointerType)NULL};
extern TypeInfo t14_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m23_MI = 
{
	"Update", (methodPointerType)&m23, &t14_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 24, NULL, (methodPointerType)NULL};
static MethodInfo* t14_MIs[] =
{
	&m21_MI,
	&m22_MI,
	&m23_MI,
	NULL
};
extern MethodInfo m61_MI;
extern MethodInfo m29_MI;
extern MethodInfo m62_MI;
extern MethodInfo m63_MI;
static MethodInfo* t14_VT[] =
{
	&m61_MI,
	&m29_MI,
	&m62_MI,
	&m63_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_1_0_0;
extern TypeInfo t12_TI;
struct t14;
extern TypeInfo t14_TI;
TypeInfo t14_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "moveCamera", "", t14_MIs, NULL, t14_FIs, NULL, &t12_TI, NULL, NULL, &t14_TI, NULL, t14_VT, &EmptyCustomAttributesCache, &t14_TI, &t14_0_0_0, &t14_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t14), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 4, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
