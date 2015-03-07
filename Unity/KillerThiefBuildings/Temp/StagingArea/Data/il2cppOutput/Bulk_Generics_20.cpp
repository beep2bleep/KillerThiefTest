#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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
extern TypeInfo t3520_TI;

#include "t18.h"
#include "t372.h"

#include "t16.h"

// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
extern Il2CppType t372_0_0_0;
extern Il2CppType t372_0_0_0;
static ParameterInfo t3520_m20077_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t372_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t372_0_0_0},
};
extern TypeInfo t3520_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t372_t372 (MethodInfo* method, void* obj, void** args);
MethodInfo m20077_MI = 
{
	"Compare", NULL, &t3520_TI, &t18_0_0_0, RuntimeInvoker_t18_t372_t372, t3520_m20077_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3520_MIs[] =
{
	&m20077_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3520_0_0_0;
extern Il2CppType t3520_1_0_0;
struct t3520;
extern TypeInfo t3520_TI;
extern Il2CppGenericClass t3520_GC;
TypeInfo t3520_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3520_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3520_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3520_TI, &t3520_0_0_0, &t3520_1_0_0, NULL, &t3520_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3521_TI;



// Metadata Definition System.IComparable`1<UnityEngine.UILineInfo>
extern Il2CppType t372_0_0_0;
static ParameterInfo t3521_m20078_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t372_0_0_0},
};
extern TypeInfo t3521_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t372 (MethodInfo* method, void* obj, void** args);
MethodInfo m20078_MI = 
{
	"CompareTo", NULL, &t3521_TI, &t18_0_0_0, RuntimeInvoker_t18_t372, t3521_m20078_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3521_MIs[] =
{
	&m20078_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3521_0_0_0;
extern Il2CppType t3521_1_0_0;
struct t3521;
extern TypeInfo t3521_TI;
extern Il2CppGenericClass t3521_GC;
TypeInfo t3521_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3521_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3521_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3521_TI, &t3521_0_0_0, &t3521_1_0_0, NULL, &t3521_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2558.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2558_TI;
#include "t2558MD.h"

#include "t17.h"
#include "t4.h"
#include "t8.h"
#include "t307.h"
extern TypeInfo t372_TI;
extern TypeInfo t3521_TI;
extern TypeInfo t18_TI;
extern TypeInfo t289_TI;
extern TypeInfo t4_TI;
extern TypeInfo t307_TI;
#include "t2557MD.h"
#include "t307MD.h"
extern MethodInfo m14787_MI;
extern MethodInfo m20078_MI;
extern MethodInfo m7306_MI;
extern MethodInfo m1936_MI;


extern MethodInfo m14791_MI;
 void m14791 (t2558 * __this, MethodInfo* method){
	{
		m14787(__this, &m14787_MI);
		return;
	}
}
extern MethodInfo m14792_MI;
 int32_t m14792 (t2558 * __this, t372  p0, t372  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t372  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t372_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t372  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t372_TI), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		t372  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t372_TI), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		t372  L_6 = p0;
		t4 * L_7 = Box(InitializedTypeInfo(&t372_TI), &L_6);
		if (!((t4*)IsInst(L_7, InitializedTypeInfo(&t3521_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t372  L_8 = p0;
		t4 * L_9 = Box(InitializedTypeInfo(&t372_TI), &L_8);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t372  >::Invoke(&m20078_MI, ((t4*)Castclass(L_9, InitializedTypeInfo(&t3521_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t372  L_11 = p0;
		t4 * L_12 = Box(InitializedTypeInfo(&t372_TI), &L_11);
		if (!((t4 *)IsInst(L_12, InitializedTypeInfo(&t289_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t372  L_13 = p0;
		t4 * L_14 = Box(InitializedTypeInfo(&t372_TI), &L_13);
		t372  L_15 = p1;
		t4 * L_16 = Box(InitializedTypeInfo(&t372_TI), &L_15);
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(&m7306_MI, ((t4 *)Castclass(L_14, InitializedTypeInfo(&t289_TI))), L_16);
		return L_17;
	}

IL_0062:
	{
		t307 * L_18 = (t307 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t307_TI));
		m1936(L_18, (t8*) &_stringLiteral535, &m1936_MI);
		il2cpp_codegen_raise_exception (L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>
extern TypeInfo t2558_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14791_MI = 
{
	".ctor", (methodPointerType)&m14791, &t2558_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t372_0_0_0;
extern Il2CppType t372_0_0_0;
static ParameterInfo t2558_m14792_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t372_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t372_0_0_0},
};
extern TypeInfo t2558_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t372_t372 (MethodInfo* method, void* obj, void** args);
MethodInfo m14792_MI = 
{
	"Compare", (methodPointerType)&m14792, &t2558_TI, &t18_0_0_0, RuntimeInvoker_t18_t372_t372, t2558_m14792_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2558_MIs[] =
{
	&m14791_MI,
	&m14792_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m14792_MI;
extern MethodInfo m14789_MI;
extern MethodInfo m14792_MI;
static MethodInfo* t2558_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m14792_MI,
	&m14789_MI,
	&m14792_MI,
};
extern TypeInfo t3520_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t2558_IOs[] = 
{
	{ &t3520_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2558_0_0_0;
extern Il2CppType t2558_1_0_0;
extern TypeInfo t2557_TI;
struct t2558;
extern TypeInfo t2558_TI;
extern Il2CppGenericClass t2558_GC;
extern TypeInfo t824_TI;
TypeInfo t2558_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2558_MIs, NULL, NULL, NULL, &t2557_TI, NULL, &t824_TI, &t2558_TI, NULL, t2558_VT, &EmptyCustomAttributesCache, &t2558_TI, &t2558_0_0_0, &t2558_1_0_0, t2558_IOs, &t2558_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2558), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t2552.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2552_TI;
#include "t2552MD.h"

#include "t56.h"
#include "t55.h"


extern MethodInfo m14793_MI;
 void m14793 (t2552 * __this, t4 * p0, t56 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14794_MI;
 int32_t m14794 (t2552 * __this, t372  p0, t372  p1, MethodInfo* method){
	typedef  int32_t (*FunctionPointerType) (t4 * __this, t372  p0, t372  p1, MethodInfo* method);
	if (__this->f9)
		m14794((t2552 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m14795_MI;
 t4 * m14795 (t2552 * __this, t372  p0, t372  p1, t55 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t372_TI), &p0);
	__d_args[1] = Box(InitializedTypeInfo(&t372_TI), &p1);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m14796_MI;
 int32_t m14796 (t2552 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Comparison`1<UnityEngine.UILineInfo>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2552_m14793_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2552_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m14793_MI = 
{
	".ctor", (methodPointerType)&m14793, &t2552_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2552_m14793_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t372_0_0_0;
extern Il2CppType t372_0_0_0;
static ParameterInfo t2552_m14794_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t372_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t372_0_0_0},
};
extern TypeInfo t2552_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t372_t372 (MethodInfo* method, void* obj, void** args);
MethodInfo m14794_MI = 
{
	"Invoke", (methodPointerType)&m14794, &t2552_TI, &t18_0_0_0, RuntimeInvoker_t18_t372_t372, t2552_m14794_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t372_0_0_0;
extern Il2CppType t372_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2552_m14795_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t372_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t372_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2552_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t372_t372_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14795_MI = 
{
	"BeginInvoke", (methodPointerType)&m14795, &t2552_TI, &t54_0_0_0, RuntimeInvoker_t4_t372_t372_t4_t4, t2552_m14795_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2552_m14796_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2552_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14796_MI = 
{
	"EndInvoke", (methodPointerType)&m14796, &t2552_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2552_m14796_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2552_MIs[] =
{
	&m14793_MI,
	&m14794_MI,
	&m14795_MI,
	&m14796_MI,
	NULL
};
extern MethodInfo m1695_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1696_MI;
extern MethodInfo m31_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m1700_MI;
extern MethodInfo m1701_MI;
extern MethodInfo m14794_MI;
extern MethodInfo m14795_MI;
extern MethodInfo m14796_MI;
static MethodInfo* t2552_VT[] =
{
	&m1695_MI,
	&m29_MI,
	&m1696_MI,
	&m31_MI,
	&m1697_MI,
	&m1698_MI,
	&m1697_MI,
	&m1699_MI,
	&m1700_MI,
	&m1701_MI,
	&m14794_MI,
	&m14795_MI,
	&m14796_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2552_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2552_0_0_0;
extern Il2CppType t2552_1_0_0;
extern TypeInfo t193_TI;
struct t2552;
extern TypeInfo t2552_TI;
extern Il2CppGenericClass t2552_GC;
TypeInfo t2552_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2552_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2552_TI, NULL, t2552_VT, &EmptyCustomAttributesCache, &t2552_TI, &t2552_0_0_0, &t2552_1_0_0, t2552_IOs, &t2552_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2552), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3522_TI;

#include "t353.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.RenderMode>
extern MethodInfo m26403_MI;
static PropertyInfo t3522____Current_PropertyInfo = 
{
	&t3522_TI, "Current", &m26403_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3522_PIs[] =
{
	&t3522____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3522_TI;
extern Il2CppType t353_0_0_0;
extern void* RuntimeInvoker_t353 (MethodInfo* method, void* obj, void** args);
MethodInfo m26403_MI = 
{
	"get_Current", NULL, &t3522_TI, &t353_0_0_0, RuntimeInvoker_t353, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3522_MIs[] =
{
	&m26403_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3522_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3522_0_0_0;
extern Il2CppType t3522_1_0_0;
struct t3522;
extern TypeInfo t3522_TI;
extern Il2CppGenericClass t3522_GC;
TypeInfo t3522_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3522_MIs, t3522_PIs, NULL, NULL, NULL, NULL, NULL, &t3522_TI, t3522_ITIs, NULL, &EmptyCustomAttributesCache, &t3522_TI, &t3522_0_0_0, &t3522_1_0_0, NULL, &t3522_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2559.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2559_TI;
#include "t2559MD.h"

#include "t1270.h"
#include "t19.h"
extern TypeInfo t2559_TI;
extern TypeInfo t353_TI;
extern TypeInfo t1270_TI;
#include "t1270MD.h"
#include "t16MD.h"
extern MethodInfo m14801_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m20083_MI;
struct t16;
#include "t1234.h"
 int32_t m20083 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20083_MI;


extern MethodInfo m14797_MI;
 void m14797 (t2559 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14798_MI;
 t4 * m14798 (t2559 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14801(__this, &m14801_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t353_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14799_MI;
 void m14799 (t2559 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14800_MI;
 bool m14800 (t2559 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t16 * L_1 = (__this->f0);
		int32_t L_2 = m3710(L_1, &m3710_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m14801_MI;
 int32_t m14801 (t2559 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1270 * L_1 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6907(L_1, (t8*) &_stringLiteral370, &m6907_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1270 * L_3 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6907(L_3, (t8*) &_stringLiteral371, &m6907_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t16 * L_4 = (__this->f0);
		t16 * L_5 = (__this->f0);
		int32_t L_6 = m3710(L_5, &m3710_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m20083(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20083_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.RenderMode>
extern Il2CppType t16_0_0_1;
FieldInfo t2559_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2559_TI, offsetof(t2559, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2559_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2559_TI, offsetof(t2559, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2559_FIs[] =
{
	&t2559_f0_FieldInfo,
	&t2559_f1_FieldInfo,
	NULL
};
extern MethodInfo m14798_MI;
static PropertyInfo t2559____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2559_TI, "System.Collections.IEnumerator.Current", &m14798_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14801_MI;
static PropertyInfo t2559____Current_PropertyInfo = 
{
	&t2559_TI, "Current", &m14801_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2559_PIs[] =
{
	&t2559____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2559____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2559_m14797_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2559_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14797_MI = 
{
	".ctor", (methodPointerType)&m14797, &t2559_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2559_m14797_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2559_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14798_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14798, &t2559_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2559_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14799_MI = 
{
	"Dispose", (methodPointerType)&m14799, &t2559_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2559_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14800_MI = 
{
	"MoveNext", (methodPointerType)&m14800, &t2559_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2559_TI;
extern Il2CppType t353_0_0_0;
extern void* RuntimeInvoker_t353 (MethodInfo* method, void* obj, void** args);
MethodInfo m14801_MI = 
{
	"get_Current", (methodPointerType)&m14801, &t2559_TI, &t353_0_0_0, RuntimeInvoker_t353, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2559_MIs[] =
{
	&m14797_MI,
	&m14798_MI,
	&m14799_MI,
	&m14800_MI,
	&m14801_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m14798_MI;
extern MethodInfo m14800_MI;
extern MethodInfo m14799_MI;
extern MethodInfo m14801_MI;
static MethodInfo* t2559_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m14798_MI,
	&m14800_MI,
	&m14799_MI,
	&m14801_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3522_TI;
static TypeInfo* t2559_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3522_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3522_TI;
static Il2CppInterfaceOffsetPair t2559_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3522_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2559_0_0_0;
extern Il2CppType t2559_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2559_TI;
extern Il2CppGenericClass t2559_GC;
extern TypeInfo t16_TI;
TypeInfo t2559_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2559_MIs, t2559_PIs, t2559_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2559_TI, t2559_ITIs, t2559_VT, &EmptyCustomAttributesCache, &t2559_TI, &t2559_0_0_0, &t2559_1_0_0, t2559_IOs, &t2559_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2559)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4404_TI;

#include "UnityEngine_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.RenderMode>
extern MethodInfo m26404_MI;
static PropertyInfo t4404____Count_PropertyInfo = 
{
	&t4404_TI, "Count", &m26404_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26405_MI;
static PropertyInfo t4404____IsReadOnly_PropertyInfo = 
{
	&t4404_TI, "IsReadOnly", &m26405_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4404_PIs[] =
{
	&t4404____Count_PropertyInfo,
	&t4404____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4404_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26404_MI = 
{
	"get_Count", NULL, &t4404_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4404_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m26405_MI = 
{
	"get_IsReadOnly", NULL, &t4404_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t353_0_0_0;
static ParameterInfo t4404_m26406_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t353_0_0_0},
};
extern TypeInfo t4404_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26406_MI = 
{
	"Add", NULL, &t4404_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4404_m26406_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4404_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26407_MI = 
{
	"Clear", NULL, &t4404_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t353_0_0_0;
static ParameterInfo t4404_m26408_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t353_0_0_0},
};
extern TypeInfo t4404_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26408_MI = 
{
	"Contains", NULL, &t4404_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t4404_m26408_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3154_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4404_m26409_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3154_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4404_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26409_MI = 
{
	"CopyTo", NULL, &t4404_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4404_m26409_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t353_0_0_0;
static ParameterInfo t4404_m26410_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t353_0_0_0},
};
extern TypeInfo t4404_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26410_MI = 
{
	"Remove", NULL, &t4404_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t4404_m26410_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4404_MIs[] =
{
	&m26404_MI,
	&m26405_MI,
	&m26406_MI,
	&m26407_MI,
	&m26408_MI,
	&m26409_MI,
	&m26410_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4406_TI;
static TypeInfo* t4404_ITIs[] = 
{
	&t592_TI,
	&t4406_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4404_0_0_0;
extern Il2CppType t4404_1_0_0;
struct t4404;
extern TypeInfo t4404_TI;
extern Il2CppGenericClass t4404_GC;
TypeInfo t4404_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4404_MIs, t4404_PIs, NULL, NULL, NULL, NULL, NULL, &t4404_TI, t4404_ITIs, NULL, &EmptyCustomAttributesCache, &t4404_TI, &t4404_0_0_0, &t4404_1_0_0, NULL, &t4404_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4406_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.RenderMode>
extern TypeInfo t4406_TI;
extern Il2CppType t3522_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26411_MI = 
{
	"GetEnumerator", NULL, &t4406_TI, &t3522_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4406_MIs[] =
{
	&m26411_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4406_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4406_0_0_0;
extern Il2CppType t4406_1_0_0;
struct t4406;
extern TypeInfo t4406_TI;
extern Il2CppGenericClass t4406_GC;
TypeInfo t4406_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4406_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4406_TI, t4406_ITIs, NULL, &EmptyCustomAttributesCache, &t4406_TI, &t4406_0_0_0, &t4406_1_0_0, NULL, &t4406_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4405_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.RenderMode>
extern MethodInfo m26412_MI;
extern MethodInfo m26413_MI;
static PropertyInfo t4405____Item_PropertyInfo = 
{
	&t4405_TI, "Item", &m26412_MI, &m26413_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4405_PIs[] =
{
	&t4405____Item_PropertyInfo,
	NULL
};
extern Il2CppType t353_0_0_0;
static ParameterInfo t4405_m26414_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t353_0_0_0},
};
extern TypeInfo t4405_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26414_MI = 
{
	"IndexOf", NULL, &t4405_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t4405_m26414_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t353_0_0_0;
static ParameterInfo t4405_m26415_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t353_0_0_0},
};
extern TypeInfo t4405_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26415_MI = 
{
	"Insert", NULL, &t4405_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t4405_m26415_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4405_m26416_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4405_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26416_MI = 
{
	"RemoveAt", NULL, &t4405_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4405_m26416_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4405_m26412_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4405_TI;
extern Il2CppType t353_0_0_0;
extern void* RuntimeInvoker_t353_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26412_MI = 
{
	"get_Item", NULL, &t4405_TI, &t353_0_0_0, RuntimeInvoker_t353_t18, t4405_m26412_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t353_0_0_0;
static ParameterInfo t4405_m26413_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t353_0_0_0},
};
extern TypeInfo t4405_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26413_MI = 
{
	"set_Item", NULL, &t4405_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t4405_m26413_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4405_MIs[] =
{
	&m26414_MI,
	&m26415_MI,
	&m26416_MI,
	&m26412_MI,
	&m26413_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4404_TI;
extern TypeInfo t4406_TI;
static TypeInfo* t4405_ITIs[] = 
{
	&t592_TI,
	&t4404_TI,
	&t4406_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4405_0_0_0;
extern Il2CppType t4405_1_0_0;
struct t4405;
extern TypeInfo t4405_TI;
extern Il2CppGenericClass t4405_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4405_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4405_MIs, t4405_PIs, NULL, NULL, NULL, NULL, NULL, &t4405_TI, t4405_ITIs, NULL, &t1401__CustomAttributeCache, &t4405_TI, &t4405_0_0_0, &t4405_1_0_0, NULL, &t4405_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2560.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2560_TI;
#include "t2560MD.h"

#include "t22.h"
#include "t546.h"
#include "t156.h"
#include "mscorlib_ArrayTypes.h"
#include "t2561.h"
extern TypeInfo t309_TI;
extern TypeInfo t4_TI;
extern TypeInfo t2560_TI;
extern TypeInfo t156_TI;
extern TypeInfo t2561_TI;
extern TypeInfo t17_TI;
#include "t2561MD.h"
extern MethodInfo m14804_MI;
extern MethodInfo m14806_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Canvas>
extern Il2CppType t309_0_0_33;
FieldInfo t2560_f1_FieldInfo = 
{
	"m_Arg1", &t309_0_0_33, &t2560_TI, offsetof(t2560, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2560_FIs[] =
{
	&t2560_f1_FieldInfo,
	NULL
};
extern Il2CppType t22_0_0_0;
extern Il2CppType t546_0_0_0;
extern Il2CppType t156_0_0_0;
static ParameterInfo t2560_m14802_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t22_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t156_0_0_0},
};
extern TypeInfo t2560_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14802_MI = 
{
	".ctor", (methodPointerType)&m7891_gshared, &t2560_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4_t4, t2560_m14802_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2560_m14803_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2560_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14803_MI = 
{
	"Invoke", (methodPointerType)&m7893_gshared, &t2560_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2560_m14803_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2560_MIs[] =
{
	&m14802_MI,
	&m14803_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m14803_MI;
extern MethodInfo m14807_MI;
static MethodInfo* t2560_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m14803_MI,
	&m14807_MI,
};
extern Il2CppType t2562_0_0_0;
extern TypeInfo t2562_TI;
extern MethodInfo m20093_MI;
extern TypeInfo t156_TI;
extern MethodInfo m14809_MI;
extern MethodInfo m14804_MI;
extern TypeInfo t156_TI;
extern MethodInfo m14806_MI;
static void* t2560_RGCTXData[8] = 
{
	(void*)&t2562_0_0_0,
	&t2562_TI,
	&m20093_MI,
	&t156_TI,
	&m14809_MI,
	&m14804_MI,
	&t156_TI,
	&m14806_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2560_0_0_0;
extern Il2CppType t2560_1_0_0;
extern TypeInfo t2561_TI;
struct t2560;
extern TypeInfo t2560_TI;
extern Il2CppGenericClass t2560_GC;
TypeInfo t2560_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2560_MIs, NULL, t2560_FIs, NULL, &t2561_TI, NULL, NULL, &t2560_TI, NULL, t2560_VT, &EmptyCustomAttributesCache, &t2560_TI, &t2560_0_0_0, &t2560_1_0_0, NULL, &t2560_GC, NULL, NULL, NULL, t2560_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2560), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2561_TI;

#include "t2562.h"
#include "t294.h"
#include "t295.h"
#include "t345.h"
extern TypeInfo t2561_TI;
extern TypeInfo t2562_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t156_TI;
extern TypeInfo t17_TI;
#include "t545MD.h"
#include "t294MD.h"
#include "t345MD.h"
#include "t2562MD.h"
extern Il2CppType t2562_0_0_0;
extern MethodInfo m2791_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2954_MI;
extern MethodInfo m1592_MI;
extern MethodInfo m2790_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m20093_MI;
extern MethodInfo m2792_MI;
extern MethodInfo m14809_MI;
extern MethodInfo m2950_MI;
extern MethodInfo m2948_MI;
struct t545;
#include "t545.h"
struct t545;
 void m16892_gshared (t4 * __this, t4 * p0, MethodInfo* method);
#define m16892(__this, p0, method) (void)m16892_gshared((t4 *)__this, (t4 *)p0, method)
#define m20093(__this, p0, method) (void)m16892_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m20093_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Canvas>
extern Il2CppType t2562_0_0_1;
FieldInfo t2561_f0_FieldInfo = 
{
	"Delegate", &t2562_0_0_1, &t2561_TI, offsetof(t2561, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2561_FIs[] =
{
	&t2561_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2561_m14804_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2561_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14804_MI = 
{
	".ctor", (methodPointerType)&m7894_gshared, &t2561_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2561_m14804_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2562_0_0_0;
static ParameterInfo t2561_m14805_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2562_0_0_0},
};
extern TypeInfo t2561_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14805_MI = 
{
	".ctor", (methodPointerType)&m7895_gshared, &t2561_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2561_m14805_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2561_m14806_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2561_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14806_MI = 
{
	"Invoke", (methodPointerType)&m7896_gshared, &t2561_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2561_m14806_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2561_m14807_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2561_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14807_MI = 
{
	"Find", (methodPointerType)&m7897_gshared, &t2561_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2561_m14807_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2561_MIs[] =
{
	&m14804_MI,
	&m14805_MI,
	&m14806_MI,
	&m14807_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m14806_MI;
extern MethodInfo m14807_MI;
static MethodInfo* t2561_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m14806_MI,
	&m14807_MI,
};
extern Il2CppType t2562_0_0_0;
extern TypeInfo t2562_TI;
extern MethodInfo m20093_MI;
extern TypeInfo t156_TI;
extern MethodInfo m14809_MI;
static void* t2561_RGCTXData[5] = 
{
	(void*)&t2562_0_0_0,
	&t2562_TI,
	&m20093_MI,
	&t156_TI,
	&m14809_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2561_0_0_0;
extern Il2CppType t2561_1_0_0;
extern TypeInfo t545_TI;
struct t2561;
extern TypeInfo t2561_TI;
extern Il2CppGenericClass t2561_GC;
TypeInfo t2561_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2561_MIs, NULL, t2561_FIs, NULL, &t545_TI, NULL, NULL, &t2561_TI, NULL, t2561_VT, &EmptyCustomAttributesCache, &t2561_TI, &t2561_0_0_0, &t2561_1_0_0, NULL, &t2561_GC, NULL, NULL, NULL, t2561_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2561), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2562_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Canvas>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2562_m14808_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2562_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m14808_MI = 
{
	".ctor", (methodPointerType)&m7898_gshared, &t2562_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2562_m14808_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t156_0_0_0;
static ParameterInfo t2562_m14809_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t156_0_0_0},
};
extern TypeInfo t2562_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14809_MI = 
{
	"Invoke", (methodPointerType)&m7899_gshared, &t2562_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2562_m14809_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t156_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2562_m14810_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t156_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2562_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14810_MI = 
{
	"BeginInvoke", (methodPointerType)&m7900_gshared, &t2562_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2562_m14810_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2562_m14811_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2562_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14811_MI = 
{
	"EndInvoke", (methodPointerType)&m7901_gshared, &t2562_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2562_m14811_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2562_MIs[] =
{
	&m14808_MI,
	&m14809_MI,
	&m14810_MI,
	&m14811_MI,
	NULL
};
extern MethodInfo m1695_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1696_MI;
extern MethodInfo m31_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m1700_MI;
extern MethodInfo m1701_MI;
extern MethodInfo m14809_MI;
extern MethodInfo m14810_MI;
extern MethodInfo m14811_MI;
static MethodInfo* t2562_VT[] =
{
	&m1695_MI,
	&m29_MI,
	&m1696_MI,
	&m31_MI,
	&m1697_MI,
	&m1698_MI,
	&m1697_MI,
	&m1699_MI,
	&m1700_MI,
	&m1701_MI,
	&m14809_MI,
	&m14810_MI,
	&m14811_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2562_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2562_0_0_0;
extern Il2CppType t2562_1_0_0;
extern TypeInfo t193_TI;
struct t2562;
extern TypeInfo t2562_TI;
extern Il2CppGenericClass t2562_GC;
TypeInfo t2562_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2562_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2562_TI, NULL, t2562_VT, &EmptyCustomAttributesCache, &t2562_TI, &t2562_0_0_0, &t2562_1_0_0, t2562_IOs, &t2562_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2562), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2563.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2563_TI;
#include "t2563MD.h"

#include "t344.h"
#include "t2564.h"
extern TypeInfo t309_TI;
extern TypeInfo t4_TI;
extern TypeInfo t2563_TI;
extern TypeInfo t344_TI;
extern TypeInfo t2564_TI;
extern TypeInfo t17_TI;
#include "t2564MD.h"
extern MethodInfo m14814_MI;
extern MethodInfo m14816_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.CanvasGroup>
extern Il2CppType t309_0_0_33;
FieldInfo t2563_f1_FieldInfo = 
{
	"m_Arg1", &t309_0_0_33, &t2563_TI, offsetof(t2563, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2563_FIs[] =
{
	&t2563_f1_FieldInfo,
	NULL
};
extern Il2CppType t22_0_0_0;
extern Il2CppType t546_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t2563_m14812_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t22_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2563_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14812_MI = 
{
	".ctor", (methodPointerType)&m7891_gshared, &t2563_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4_t4, t2563_m14812_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2563_m14813_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2563_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14813_MI = 
{
	"Invoke", (methodPointerType)&m7893_gshared, &t2563_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2563_m14813_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2563_MIs[] =
{
	&m14812_MI,
	&m14813_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m14813_MI;
extern MethodInfo m14817_MI;
static MethodInfo* t2563_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m14813_MI,
	&m14817_MI,
};
extern Il2CppType t2565_0_0_0;
extern TypeInfo t2565_TI;
extern MethodInfo m20094_MI;
extern TypeInfo t344_TI;
extern MethodInfo m14819_MI;
extern MethodInfo m14814_MI;
extern TypeInfo t344_TI;
extern MethodInfo m14816_MI;
static void* t2563_RGCTXData[8] = 
{
	(void*)&t2565_0_0_0,
	&t2565_TI,
	&m20094_MI,
	&t344_TI,
	&m14819_MI,
	&m14814_MI,
	&t344_TI,
	&m14816_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2563_0_0_0;
extern Il2CppType t2563_1_0_0;
extern TypeInfo t2564_TI;
struct t2563;
extern TypeInfo t2563_TI;
extern Il2CppGenericClass t2563_GC;
TypeInfo t2563_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2563_MIs, NULL, t2563_FIs, NULL, &t2564_TI, NULL, NULL, &t2563_TI, NULL, t2563_VT, &EmptyCustomAttributesCache, &t2563_TI, &t2563_0_0_0, &t2563_1_0_0, NULL, &t2563_GC, NULL, NULL, NULL, t2563_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2563), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2564_TI;

#include "t2565.h"
extern TypeInfo t2564_TI;
extern TypeInfo t2565_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t344_TI;
extern TypeInfo t17_TI;
#include "t2565MD.h"
extern Il2CppType t2565_0_0_0;
extern MethodInfo m2791_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2954_MI;
extern MethodInfo m1592_MI;
extern MethodInfo m2790_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m20094_MI;
extern MethodInfo m2792_MI;
extern MethodInfo m14819_MI;
extern MethodInfo m2950_MI;
extern MethodInfo m2948_MI;
struct t545;
#define m20094(__this, p0, method) (void)m16892_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m20094_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.CanvasGroup>
extern Il2CppType t2565_0_0_1;
FieldInfo t2564_f0_FieldInfo = 
{
	"Delegate", &t2565_0_0_1, &t2564_TI, offsetof(t2564, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2564_FIs[] =
{
	&t2564_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2564_m14814_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2564_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14814_MI = 
{
	".ctor", (methodPointerType)&m7894_gshared, &t2564_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2564_m14814_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2565_0_0_0;
static ParameterInfo t2564_m14815_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2565_0_0_0},
};
extern TypeInfo t2564_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14815_MI = 
{
	".ctor", (methodPointerType)&m7895_gshared, &t2564_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2564_m14815_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2564_m14816_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2564_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14816_MI = 
{
	"Invoke", (methodPointerType)&m7896_gshared, &t2564_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2564_m14816_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2564_m14817_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2564_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14817_MI = 
{
	"Find", (methodPointerType)&m7897_gshared, &t2564_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2564_m14817_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2564_MIs[] =
{
	&m14814_MI,
	&m14815_MI,
	&m14816_MI,
	&m14817_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m14816_MI;
extern MethodInfo m14817_MI;
static MethodInfo* t2564_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m14816_MI,
	&m14817_MI,
};
extern Il2CppType t2565_0_0_0;
extern TypeInfo t2565_TI;
extern MethodInfo m20094_MI;
extern TypeInfo t344_TI;
extern MethodInfo m14819_MI;
static void* t2564_RGCTXData[5] = 
{
	(void*)&t2565_0_0_0,
	&t2565_TI,
	&m20094_MI,
	&t344_TI,
	&m14819_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2564_0_0_0;
extern Il2CppType t2564_1_0_0;
extern TypeInfo t545_TI;
struct t2564;
extern TypeInfo t2564_TI;
extern Il2CppGenericClass t2564_GC;
TypeInfo t2564_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2564_MIs, NULL, t2564_FIs, NULL, &t545_TI, NULL, NULL, &t2564_TI, NULL, t2564_VT, &EmptyCustomAttributesCache, &t2564_TI, &t2564_0_0_0, &t2564_1_0_0, NULL, &t2564_GC, NULL, NULL, NULL, t2564_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2564), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2565_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.CanvasGroup>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2565_m14818_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2565_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m14818_MI = 
{
	".ctor", (methodPointerType)&m7898_gshared, &t2565_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2565_m14818_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t2565_m14819_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2565_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14819_MI = 
{
	"Invoke", (methodPointerType)&m7899_gshared, &t2565_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2565_m14819_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2565_m14820_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2565_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14820_MI = 
{
	"BeginInvoke", (methodPointerType)&m7900_gshared, &t2565_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2565_m14820_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2565_m14821_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2565_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14821_MI = 
{
	"EndInvoke", (methodPointerType)&m7901_gshared, &t2565_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2565_m14821_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2565_MIs[] =
{
	&m14818_MI,
	&m14819_MI,
	&m14820_MI,
	&m14821_MI,
	NULL
};
extern MethodInfo m1695_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1696_MI;
extern MethodInfo m31_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m1700_MI;
extern MethodInfo m1701_MI;
extern MethodInfo m14819_MI;
extern MethodInfo m14820_MI;
extern MethodInfo m14821_MI;
static MethodInfo* t2565_VT[] =
{
	&m1695_MI,
	&m29_MI,
	&m1696_MI,
	&m31_MI,
	&m1697_MI,
	&m1698_MI,
	&m1697_MI,
	&m1699_MI,
	&m1700_MI,
	&m1701_MI,
	&m14819_MI,
	&m14820_MI,
	&m14821_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2565_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2565_0_0_0;
extern Il2CppType t2565_1_0_0;
extern TypeInfo t193_TI;
struct t2565;
extern TypeInfo t2565_TI;
extern Il2CppGenericClass t2565_GC;
TypeInfo t2565_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2565_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2565_TI, NULL, t2565_VT, &EmptyCustomAttributesCache, &t2565_TI, &t2565_0_0_0, &t2565_1_0_0, t2565_IOs, &t2565_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2565), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3523_TI;

#include "t155.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.CanvasRenderer>
extern MethodInfo m26417_MI;
static PropertyInfo t3523____Current_PropertyInfo = 
{
	&t3523_TI, "Current", &m26417_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3523_PIs[] =
{
	&t3523____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3523_TI;
extern Il2CppType t155_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26417_MI = 
{
	"get_Current", NULL, &t3523_TI, &t155_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3523_MIs[] =
{
	&m26417_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3523_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3523_0_0_0;
extern Il2CppType t3523_1_0_0;
struct t3523;
extern TypeInfo t3523_TI;
extern Il2CppGenericClass t3523_GC;
TypeInfo t3523_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3523_MIs, t3523_PIs, NULL, NULL, NULL, NULL, NULL, &t3523_TI, t3523_ITIs, NULL, &EmptyCustomAttributesCache, &t3523_TI, &t3523_0_0_0, &t3523_1_0_0, NULL, &t3523_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2566.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2566_TI;
#include "t2566MD.h"

extern TypeInfo t2566_TI;
extern TypeInfo t155_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m14826_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m20096_MI;
struct t16;
struct t16;
 t4 * m16827_gshared (t16 * __this, int32_t p0, MethodInfo* method);
#define m16827(__this, p0, method) (t4 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
#define m20096(__this, p0, method) (t155 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m20096_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.CanvasRenderer>
extern Il2CppType t16_0_0_1;
FieldInfo t2566_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2566_TI, offsetof(t2566, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2566_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2566_TI, offsetof(t2566, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2566_FIs[] =
{
	&t2566_f0_FieldInfo,
	&t2566_f1_FieldInfo,
	NULL
};
extern MethodInfo m14823_MI;
static PropertyInfo t2566____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2566_TI, "System.Collections.IEnumerator.Current", &m14823_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14826_MI;
static PropertyInfo t2566____Current_PropertyInfo = 
{
	&t2566_TI, "Current", &m14826_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2566_PIs[] =
{
	&t2566____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2566____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2566_m14822_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2566_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14822_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2566_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2566_m14822_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2566_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14823_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2566_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2566_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14824_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2566_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2566_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14825_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2566_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2566_TI;
extern Il2CppType t155_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14826_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2566_TI, &t155_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2566_MIs[] =
{
	&m14822_MI,
	&m14823_MI,
	&m14824_MI,
	&m14825_MI,
	&m14826_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m14823_MI;
extern MethodInfo m14825_MI;
extern MethodInfo m14824_MI;
extern MethodInfo m14826_MI;
static MethodInfo* t2566_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m14823_MI,
	&m14825_MI,
	&m14824_MI,
	&m14826_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3523_TI;
static TypeInfo* t2566_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3523_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3523_TI;
static Il2CppInterfaceOffsetPair t2566_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3523_TI, 7},
};
extern MethodInfo m14826_MI;
extern TypeInfo t155_TI;
extern MethodInfo m20096_MI;
static void* t2566_RGCTXData[3] = 
{
	&m14826_MI,
	&t155_TI,
	&m20096_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2566_0_0_0;
extern Il2CppType t2566_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2566_TI;
extern Il2CppGenericClass t2566_GC;
extern TypeInfo t16_TI;
TypeInfo t2566_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2566_MIs, t2566_PIs, t2566_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2566_TI, t2566_ITIs, t2566_VT, &EmptyCustomAttributesCache, &t2566_TI, &t2566_0_0_0, &t2566_1_0_0, t2566_IOs, &t2566_GC, NULL, NULL, NULL, t2566_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2566)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4407_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.CanvasRenderer>
extern MethodInfo m26418_MI;
static PropertyInfo t4407____Count_PropertyInfo = 
{
	&t4407_TI, "Count", &m26418_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26419_MI;
static PropertyInfo t4407____IsReadOnly_PropertyInfo = 
{
	&t4407_TI, "IsReadOnly", &m26419_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4407_PIs[] =
{
	&t4407____Count_PropertyInfo,
	&t4407____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4407_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26418_MI = 
{
	"get_Count", NULL, &t4407_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4407_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m26419_MI = 
{
	"get_IsReadOnly", NULL, &t4407_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t155_0_0_0;
static ParameterInfo t4407_m26420_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t155_0_0_0},
};
extern TypeInfo t4407_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26420_MI = 
{
	"Add", NULL, &t4407_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4407_m26420_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4407_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26421_MI = 
{
	"Clear", NULL, &t4407_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t155_0_0_0;
static ParameterInfo t4407_m26422_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t155_0_0_0},
};
extern TypeInfo t4407_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26422_MI = 
{
	"Contains", NULL, &t4407_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4407_m26422_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3155_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4407_m26423_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3155_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4407_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26423_MI = 
{
	"CopyTo", NULL, &t4407_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4407_m26423_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t155_0_0_0;
static ParameterInfo t4407_m26424_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t155_0_0_0},
};
extern TypeInfo t4407_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26424_MI = 
{
	"Remove", NULL, &t4407_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4407_m26424_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4407_MIs[] =
{
	&m26418_MI,
	&m26419_MI,
	&m26420_MI,
	&m26421_MI,
	&m26422_MI,
	&m26423_MI,
	&m26424_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4409_TI;
static TypeInfo* t4407_ITIs[] = 
{
	&t592_TI,
	&t4409_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4407_0_0_0;
extern Il2CppType t4407_1_0_0;
struct t4407;
extern TypeInfo t4407_TI;
extern Il2CppGenericClass t4407_GC;
TypeInfo t4407_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4407_MIs, t4407_PIs, NULL, NULL, NULL, NULL, NULL, &t4407_TI, t4407_ITIs, NULL, &EmptyCustomAttributesCache, &t4407_TI, &t4407_0_0_0, &t4407_1_0_0, NULL, &t4407_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4409_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.CanvasRenderer>
extern TypeInfo t4409_TI;
extern Il2CppType t3523_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26425_MI = 
{
	"GetEnumerator", NULL, &t4409_TI, &t3523_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4409_MIs[] =
{
	&m26425_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4409_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4409_0_0_0;
extern Il2CppType t4409_1_0_0;
struct t4409;
extern TypeInfo t4409_TI;
extern Il2CppGenericClass t4409_GC;
TypeInfo t4409_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4409_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4409_TI, t4409_ITIs, NULL, &EmptyCustomAttributesCache, &t4409_TI, &t4409_0_0_0, &t4409_1_0_0, NULL, &t4409_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4408_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.CanvasRenderer>
extern MethodInfo m26426_MI;
extern MethodInfo m26427_MI;
static PropertyInfo t4408____Item_PropertyInfo = 
{
	&t4408_TI, "Item", &m26426_MI, &m26427_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4408_PIs[] =
{
	&t4408____Item_PropertyInfo,
	NULL
};
extern Il2CppType t155_0_0_0;
static ParameterInfo t4408_m26428_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t155_0_0_0},
};
extern TypeInfo t4408_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26428_MI = 
{
	"IndexOf", NULL, &t4408_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4408_m26428_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t155_0_0_0;
static ParameterInfo t4408_m26429_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t155_0_0_0},
};
extern TypeInfo t4408_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26429_MI = 
{
	"Insert", NULL, &t4408_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4408_m26429_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4408_m26430_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4408_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26430_MI = 
{
	"RemoveAt", NULL, &t4408_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4408_m26430_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4408_m26426_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4408_TI;
extern Il2CppType t155_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26426_MI = 
{
	"get_Item", NULL, &t4408_TI, &t155_0_0_0, RuntimeInvoker_t4_t18, t4408_m26426_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t155_0_0_0;
static ParameterInfo t4408_m26427_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t155_0_0_0},
};
extern TypeInfo t4408_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26427_MI = 
{
	"set_Item", NULL, &t4408_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4408_m26427_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4408_MIs[] =
{
	&m26428_MI,
	&m26429_MI,
	&m26430_MI,
	&m26426_MI,
	&m26427_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4407_TI;
extern TypeInfo t4409_TI;
static TypeInfo* t4408_ITIs[] = 
{
	&t592_TI,
	&t4407_TI,
	&t4409_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4408_0_0_0;
extern Il2CppType t4408_1_0_0;
struct t4408;
extern TypeInfo t4408_TI;
extern Il2CppGenericClass t4408_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4408_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4408_MIs, t4408_PIs, NULL, NULL, NULL, NULL, NULL, &t4408_TI, t4408_ITIs, NULL, &t1401__CustomAttributeCache, &t4408_TI, &t4408_0_0_0, &t4408_1_0_0, NULL, &t4408_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2567.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2567_TI;
#include "t2567MD.h"

#include "t2568.h"
extern TypeInfo t309_TI;
extern TypeInfo t4_TI;
extern TypeInfo t2567_TI;
extern TypeInfo t155_TI;
extern TypeInfo t2568_TI;
extern TypeInfo t17_TI;
#include "t2568MD.h"
extern MethodInfo m14829_MI;
extern MethodInfo m14831_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.CanvasRenderer>
extern Il2CppType t309_0_0_33;
FieldInfo t2567_f1_FieldInfo = 
{
	"m_Arg1", &t309_0_0_33, &t2567_TI, offsetof(t2567, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2567_FIs[] =
{
	&t2567_f1_FieldInfo,
	NULL
};
extern Il2CppType t22_0_0_0;
extern Il2CppType t546_0_0_0;
extern Il2CppType t155_0_0_0;
static ParameterInfo t2567_m14827_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t22_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t155_0_0_0},
};
extern TypeInfo t2567_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14827_MI = 
{
	".ctor", (methodPointerType)&m7891_gshared, &t2567_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4_t4, t2567_m14827_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2567_m14828_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2567_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14828_MI = 
{
	"Invoke", (methodPointerType)&m7893_gshared, &t2567_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2567_m14828_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2567_MIs[] =
{
	&m14827_MI,
	&m14828_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m14828_MI;
extern MethodInfo m14832_MI;
static MethodInfo* t2567_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m14828_MI,
	&m14832_MI,
};
extern Il2CppType t2569_0_0_0;
extern TypeInfo t2569_TI;
extern MethodInfo m20106_MI;
extern TypeInfo t155_TI;
extern MethodInfo m14834_MI;
extern MethodInfo m14829_MI;
extern TypeInfo t155_TI;
extern MethodInfo m14831_MI;
static void* t2567_RGCTXData[8] = 
{
	(void*)&t2569_0_0_0,
	&t2569_TI,
	&m20106_MI,
	&t155_TI,
	&m14834_MI,
	&m14829_MI,
	&t155_TI,
	&m14831_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2567_0_0_0;
extern Il2CppType t2567_1_0_0;
extern TypeInfo t2568_TI;
struct t2567;
extern TypeInfo t2567_TI;
extern Il2CppGenericClass t2567_GC;
TypeInfo t2567_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2567_MIs, NULL, t2567_FIs, NULL, &t2568_TI, NULL, NULL, &t2567_TI, NULL, t2567_VT, &EmptyCustomAttributesCache, &t2567_TI, &t2567_0_0_0, &t2567_1_0_0, NULL, &t2567_GC, NULL, NULL, NULL, t2567_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2567), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2568_TI;

#include "t2569.h"
extern TypeInfo t2568_TI;
extern TypeInfo t2569_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t155_TI;
extern TypeInfo t17_TI;
#include "t2569MD.h"
extern Il2CppType t2569_0_0_0;
extern MethodInfo m2791_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2954_MI;
extern MethodInfo m1592_MI;
extern MethodInfo m2790_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m20106_MI;
extern MethodInfo m2792_MI;
extern MethodInfo m14834_MI;
extern MethodInfo m2950_MI;
extern MethodInfo m2948_MI;
struct t545;
#define m20106(__this, p0, method) (void)m16892_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m20106_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.CanvasRenderer>
extern Il2CppType t2569_0_0_1;
FieldInfo t2568_f0_FieldInfo = 
{
	"Delegate", &t2569_0_0_1, &t2568_TI, offsetof(t2568, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2568_FIs[] =
{
	&t2568_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2568_m14829_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2568_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14829_MI = 
{
	".ctor", (methodPointerType)&m7894_gshared, &t2568_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2568_m14829_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2569_0_0_0;
static ParameterInfo t2568_m14830_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2569_0_0_0},
};
extern TypeInfo t2568_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14830_MI = 
{
	".ctor", (methodPointerType)&m7895_gshared, &t2568_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2568_m14830_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2568_m14831_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2568_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14831_MI = 
{
	"Invoke", (methodPointerType)&m7896_gshared, &t2568_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2568_m14831_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2568_m14832_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2568_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14832_MI = 
{
	"Find", (methodPointerType)&m7897_gshared, &t2568_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2568_m14832_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2568_MIs[] =
{
	&m14829_MI,
	&m14830_MI,
	&m14831_MI,
	&m14832_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m14831_MI;
extern MethodInfo m14832_MI;
static MethodInfo* t2568_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m14831_MI,
	&m14832_MI,
};
extern Il2CppType t2569_0_0_0;
extern TypeInfo t2569_TI;
extern MethodInfo m20106_MI;
extern TypeInfo t155_TI;
extern MethodInfo m14834_MI;
static void* t2568_RGCTXData[5] = 
{
	(void*)&t2569_0_0_0,
	&t2569_TI,
	&m20106_MI,
	&t155_TI,
	&m14834_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2568_0_0_0;
extern Il2CppType t2568_1_0_0;
extern TypeInfo t545_TI;
struct t2568;
extern TypeInfo t2568_TI;
extern Il2CppGenericClass t2568_GC;
TypeInfo t2568_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2568_MIs, NULL, t2568_FIs, NULL, &t545_TI, NULL, NULL, &t2568_TI, NULL, t2568_VT, &EmptyCustomAttributesCache, &t2568_TI, &t2568_0_0_0, &t2568_1_0_0, NULL, &t2568_GC, NULL, NULL, NULL, t2568_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2568), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2569_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.CanvasRenderer>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2569_m14833_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2569_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m14833_MI = 
{
	".ctor", (methodPointerType)&m7898_gshared, &t2569_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2569_m14833_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t155_0_0_0;
static ParameterInfo t2569_m14834_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t155_0_0_0},
};
extern TypeInfo t2569_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14834_MI = 
{
	"Invoke", (methodPointerType)&m7899_gshared, &t2569_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2569_m14834_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t155_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2569_m14835_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t155_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2569_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14835_MI = 
{
	"BeginInvoke", (methodPointerType)&m7900_gshared, &t2569_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2569_m14835_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2569_m14836_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2569_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14836_MI = 
{
	"EndInvoke", (methodPointerType)&m7901_gshared, &t2569_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2569_m14836_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2569_MIs[] =
{
	&m14833_MI,
	&m14834_MI,
	&m14835_MI,
	&m14836_MI,
	NULL
};
extern MethodInfo m1695_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1696_MI;
extern MethodInfo m31_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m1700_MI;
extern MethodInfo m1701_MI;
extern MethodInfo m14834_MI;
extern MethodInfo m14835_MI;
extern MethodInfo m14836_MI;
static MethodInfo* t2569_VT[] =
{
	&m1695_MI,
	&m29_MI,
	&m1696_MI,
	&m31_MI,
	&m1697_MI,
	&m1698_MI,
	&m1697_MI,
	&m1699_MI,
	&m1700_MI,
	&m1701_MI,
	&m14834_MI,
	&m14835_MI,
	&m14836_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2569_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2569_0_0_0;
extern Il2CppType t2569_1_0_0;
extern TypeInfo t193_TI;
struct t2569;
extern TypeInfo t2569_TI;
extern Il2CppGenericClass t2569_GC;
TypeInfo t2569_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2569_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2569_TI, NULL, t2569_VT, &EmptyCustomAttributesCache, &t2569_TI, &t2569_0_0_0, &t2569_1_0_0, t2569_IOs, &t2569_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2569), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3524_TI;

#include "t521.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.WrapperlessIcall>
extern MethodInfo m26431_MI;
static PropertyInfo t3524____Current_PropertyInfo = 
{
	&t3524_TI, "Current", &m26431_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3524_PIs[] =
{
	&t3524____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3524_TI;
extern Il2CppType t521_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26431_MI = 
{
	"get_Current", NULL, &t3524_TI, &t521_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3524_MIs[] =
{
	&m26431_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3524_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3524_0_0_0;
extern Il2CppType t3524_1_0_0;
struct t3524;
extern TypeInfo t3524_TI;
extern Il2CppGenericClass t3524_GC;
TypeInfo t3524_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3524_MIs, t3524_PIs, NULL, NULL, NULL, NULL, NULL, &t3524_TI, t3524_ITIs, NULL, &EmptyCustomAttributesCache, &t3524_TI, &t3524_0_0_0, &t3524_1_0_0, NULL, &t3524_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2570.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2570_TI;
#include "t2570MD.h"

extern TypeInfo t2570_TI;
extern TypeInfo t521_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m14841_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m20108_MI;
struct t16;
#define m20108(__this, p0, method) (t521 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m20108_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.WrapperlessIcall>
extern Il2CppType t16_0_0_1;
FieldInfo t2570_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2570_TI, offsetof(t2570, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2570_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2570_TI, offsetof(t2570, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2570_FIs[] =
{
	&t2570_f0_FieldInfo,
	&t2570_f1_FieldInfo,
	NULL
};
extern MethodInfo m14838_MI;
static PropertyInfo t2570____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2570_TI, "System.Collections.IEnumerator.Current", &m14838_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14841_MI;
static PropertyInfo t2570____Current_PropertyInfo = 
{
	&t2570_TI, "Current", &m14841_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2570_PIs[] =
{
	&t2570____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2570____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2570_m14837_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2570_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14837_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2570_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2570_m14837_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2570_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14838_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2570_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2570_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14839_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2570_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2570_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14840_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2570_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2570_TI;
extern Il2CppType t521_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14841_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2570_TI, &t521_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2570_MIs[] =
{
	&m14837_MI,
	&m14838_MI,
	&m14839_MI,
	&m14840_MI,
	&m14841_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m14838_MI;
extern MethodInfo m14840_MI;
extern MethodInfo m14839_MI;
extern MethodInfo m14841_MI;
static MethodInfo* t2570_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m14838_MI,
	&m14840_MI,
	&m14839_MI,
	&m14841_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3524_TI;
static TypeInfo* t2570_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3524_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3524_TI;
static Il2CppInterfaceOffsetPair t2570_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3524_TI, 7},
};
extern MethodInfo m14841_MI;
extern TypeInfo t521_TI;
extern MethodInfo m20108_MI;
static void* t2570_RGCTXData[3] = 
{
	&m14841_MI,
	&t521_TI,
	&m20108_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2570_0_0_0;
extern Il2CppType t2570_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2570_TI;
extern Il2CppGenericClass t2570_GC;
extern TypeInfo t16_TI;
TypeInfo t2570_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2570_MIs, t2570_PIs, t2570_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2570_TI, t2570_ITIs, t2570_VT, &EmptyCustomAttributesCache, &t2570_TI, &t2570_0_0_0, &t2570_1_0_0, t2570_IOs, &t2570_GC, NULL, NULL, NULL, t2570_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2570)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4410_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.WrapperlessIcall>
extern MethodInfo m26432_MI;
static PropertyInfo t4410____Count_PropertyInfo = 
{
	&t4410_TI, "Count", &m26432_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26433_MI;
static PropertyInfo t4410____IsReadOnly_PropertyInfo = 
{
	&t4410_TI, "IsReadOnly", &m26433_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4410_PIs[] =
{
	&t4410____Count_PropertyInfo,
	&t4410____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4410_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26432_MI = 
{
	"get_Count", NULL, &t4410_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4410_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m26433_MI = 
{
	"get_IsReadOnly", NULL, &t4410_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t521_0_0_0;
static ParameterInfo t4410_m26434_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t521_0_0_0},
};
extern TypeInfo t4410_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26434_MI = 
{
	"Add", NULL, &t4410_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4410_m26434_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4410_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26435_MI = 
{
	"Clear", NULL, &t4410_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t521_0_0_0;
static ParameterInfo t4410_m26436_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t521_0_0_0},
};
extern TypeInfo t4410_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26436_MI = 
{
	"Contains", NULL, &t4410_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4410_m26436_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3156_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4410_m26437_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3156_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4410_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26437_MI = 
{
	"CopyTo", NULL, &t4410_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4410_m26437_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t521_0_0_0;
static ParameterInfo t4410_m26438_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t521_0_0_0},
};
extern TypeInfo t4410_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26438_MI = 
{
	"Remove", NULL, &t4410_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4410_m26438_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4410_MIs[] =
{
	&m26432_MI,
	&m26433_MI,
	&m26434_MI,
	&m26435_MI,
	&m26436_MI,
	&m26437_MI,
	&m26438_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4412_TI;
static TypeInfo* t4410_ITIs[] = 
{
	&t592_TI,
	&t4412_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4410_0_0_0;
extern Il2CppType t4410_1_0_0;
struct t4410;
extern TypeInfo t4410_TI;
extern Il2CppGenericClass t4410_GC;
TypeInfo t4410_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4410_MIs, t4410_PIs, NULL, NULL, NULL, NULL, NULL, &t4410_TI, t4410_ITIs, NULL, &EmptyCustomAttributesCache, &t4410_TI, &t4410_0_0_0, &t4410_1_0_0, NULL, &t4410_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4412_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.WrapperlessIcall>
extern TypeInfo t4412_TI;
extern Il2CppType t3524_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26439_MI = 
{
	"GetEnumerator", NULL, &t4412_TI, &t3524_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4412_MIs[] =
{
	&m26439_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4412_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4412_0_0_0;
extern Il2CppType t4412_1_0_0;
struct t4412;
extern TypeInfo t4412_TI;
extern Il2CppGenericClass t4412_GC;
TypeInfo t4412_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4412_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4412_TI, t4412_ITIs, NULL, &EmptyCustomAttributesCache, &t4412_TI, &t4412_0_0_0, &t4412_1_0_0, NULL, &t4412_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4411_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.WrapperlessIcall>
extern MethodInfo m26440_MI;
extern MethodInfo m26441_MI;
static PropertyInfo t4411____Item_PropertyInfo = 
{
	&t4411_TI, "Item", &m26440_MI, &m26441_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4411_PIs[] =
{
	&t4411____Item_PropertyInfo,
	NULL
};
extern Il2CppType t521_0_0_0;
static ParameterInfo t4411_m26442_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t521_0_0_0},
};
extern TypeInfo t4411_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26442_MI = 
{
	"IndexOf", NULL, &t4411_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4411_m26442_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t521_0_0_0;
static ParameterInfo t4411_m26443_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t521_0_0_0},
};
extern TypeInfo t4411_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26443_MI = 
{
	"Insert", NULL, &t4411_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4411_m26443_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4411_m26444_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4411_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26444_MI = 
{
	"RemoveAt", NULL, &t4411_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4411_m26444_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4411_m26440_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4411_TI;
extern Il2CppType t521_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26440_MI = 
{
	"get_Item", NULL, &t4411_TI, &t521_0_0_0, RuntimeInvoker_t4_t18, t4411_m26440_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t521_0_0_0;
static ParameterInfo t4411_m26441_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t521_0_0_0},
};
extern TypeInfo t4411_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26441_MI = 
{
	"set_Item", NULL, &t4411_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4411_m26441_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4411_MIs[] =
{
	&m26442_MI,
	&m26443_MI,
	&m26444_MI,
	&m26440_MI,
	&m26441_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4410_TI;
extern TypeInfo t4412_TI;
static TypeInfo* t4411_ITIs[] = 
{
	&t592_TI,
	&t4410_TI,
	&t4412_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4411_0_0_0;
extern Il2CppType t4411_1_0_0;
struct t4411;
extern TypeInfo t4411_TI;
extern Il2CppGenericClass t4411_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4411_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4411_MIs, t4411_PIs, NULL, NULL, NULL, NULL, NULL, &t4411_TI, t4411_ITIs, NULL, &t1401__CustomAttributeCache, &t4411_TI, &t4411_0_0_0, &t4411_1_0_0, NULL, &t4411_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3525_TI;

#include "t351.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.DisallowMultipleComponent>
extern MethodInfo m26445_MI;
static PropertyInfo t3525____Current_PropertyInfo = 
{
	&t3525_TI, "Current", &m26445_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3525_PIs[] =
{
	&t3525____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3525_TI;
extern Il2CppType t351_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26445_MI = 
{
	"get_Current", NULL, &t3525_TI, &t351_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3525_MIs[] =
{
	&m26445_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3525_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3525_0_0_0;
extern Il2CppType t3525_1_0_0;
struct t3525;
extern TypeInfo t3525_TI;
extern Il2CppGenericClass t3525_GC;
TypeInfo t3525_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3525_MIs, t3525_PIs, NULL, NULL, NULL, NULL, NULL, &t3525_TI, t3525_ITIs, NULL, &EmptyCustomAttributesCache, &t3525_TI, &t3525_0_0_0, &t3525_1_0_0, NULL, &t3525_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2571.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2571_TI;
#include "t2571MD.h"

extern TypeInfo t2571_TI;
extern TypeInfo t351_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m14846_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m20119_MI;
struct t16;
#define m20119(__this, p0, method) (t351 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m20119_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.DisallowMultipleComponent>
extern Il2CppType t16_0_0_1;
FieldInfo t2571_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2571_TI, offsetof(t2571, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2571_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2571_TI, offsetof(t2571, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2571_FIs[] =
{
	&t2571_f0_FieldInfo,
	&t2571_f1_FieldInfo,
	NULL
};
extern MethodInfo m14843_MI;
static PropertyInfo t2571____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2571_TI, "System.Collections.IEnumerator.Current", &m14843_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14846_MI;
static PropertyInfo t2571____Current_PropertyInfo = 
{
	&t2571_TI, "Current", &m14846_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2571_PIs[] =
{
	&t2571____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2571____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2571_m14842_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2571_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14842_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2571_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2571_m14842_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2571_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14843_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2571_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2571_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14844_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2571_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2571_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14845_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2571_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2571_TI;
extern Il2CppType t351_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14846_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2571_TI, &t351_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2571_MIs[] =
{
	&m14842_MI,
	&m14843_MI,
	&m14844_MI,
	&m14845_MI,
	&m14846_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m14843_MI;
extern MethodInfo m14845_MI;
extern MethodInfo m14844_MI;
extern MethodInfo m14846_MI;
static MethodInfo* t2571_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m14843_MI,
	&m14845_MI,
	&m14844_MI,
	&m14846_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3525_TI;
static TypeInfo* t2571_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3525_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3525_TI;
static Il2CppInterfaceOffsetPair t2571_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3525_TI, 7},
};
extern MethodInfo m14846_MI;
extern TypeInfo t351_TI;
extern MethodInfo m20119_MI;
static void* t2571_RGCTXData[3] = 
{
	&m14846_MI,
	&t351_TI,
	&m20119_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2571_0_0_0;
extern Il2CppType t2571_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2571_TI;
extern Il2CppGenericClass t2571_GC;
extern TypeInfo t16_TI;
TypeInfo t2571_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2571_MIs, t2571_PIs, t2571_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2571_TI, t2571_ITIs, t2571_VT, &EmptyCustomAttributesCache, &t2571_TI, &t2571_0_0_0, &t2571_1_0_0, t2571_IOs, &t2571_GC, NULL, NULL, NULL, t2571_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2571)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4413_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.DisallowMultipleComponent>
extern MethodInfo m26446_MI;
static PropertyInfo t4413____Count_PropertyInfo = 
{
	&t4413_TI, "Count", &m26446_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26447_MI;
static PropertyInfo t4413____IsReadOnly_PropertyInfo = 
{
	&t4413_TI, "IsReadOnly", &m26447_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4413_PIs[] =
{
	&t4413____Count_PropertyInfo,
	&t4413____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4413_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26446_MI = 
{
	"get_Count", NULL, &t4413_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4413_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m26447_MI = 
{
	"get_IsReadOnly", NULL, &t4413_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t351_0_0_0;
static ParameterInfo t4413_m26448_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t351_0_0_0},
};
extern TypeInfo t4413_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26448_MI = 
{
	"Add", NULL, &t4413_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4413_m26448_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4413_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26449_MI = 
{
	"Clear", NULL, &t4413_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t351_0_0_0;
static ParameterInfo t4413_m26450_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t351_0_0_0},
};
extern TypeInfo t4413_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26450_MI = 
{
	"Contains", NULL, &t4413_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4413_m26450_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t523_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4413_m26451_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4413_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26451_MI = 
{
	"CopyTo", NULL, &t4413_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4413_m26451_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t351_0_0_0;
static ParameterInfo t4413_m26452_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t351_0_0_0},
};
extern TypeInfo t4413_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26452_MI = 
{
	"Remove", NULL, &t4413_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4413_m26452_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4413_MIs[] =
{
	&m26446_MI,
	&m26447_MI,
	&m26448_MI,
	&m26449_MI,
	&m26450_MI,
	&m26451_MI,
	&m26452_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4415_TI;
static TypeInfo* t4413_ITIs[] = 
{
	&t592_TI,
	&t4415_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4413_0_0_0;
extern Il2CppType t4413_1_0_0;
struct t4413;
extern TypeInfo t4413_TI;
extern Il2CppGenericClass t4413_GC;
TypeInfo t4413_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4413_MIs, t4413_PIs, NULL, NULL, NULL, NULL, NULL, &t4413_TI, t4413_ITIs, NULL, &EmptyCustomAttributesCache, &t4413_TI, &t4413_0_0_0, &t4413_1_0_0, NULL, &t4413_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4415_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.DisallowMultipleComponent>
extern TypeInfo t4415_TI;
extern Il2CppType t3525_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26453_MI = 
{
	"GetEnumerator", NULL, &t4415_TI, &t3525_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4415_MIs[] =
{
	&m26453_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4415_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4415_0_0_0;
extern Il2CppType t4415_1_0_0;
struct t4415;
extern TypeInfo t4415_TI;
extern Il2CppGenericClass t4415_GC;
TypeInfo t4415_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4415_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4415_TI, t4415_ITIs, NULL, &EmptyCustomAttributesCache, &t4415_TI, &t4415_0_0_0, &t4415_1_0_0, NULL, &t4415_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4414_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.DisallowMultipleComponent>
extern MethodInfo m26454_MI;
extern MethodInfo m26455_MI;
static PropertyInfo t4414____Item_PropertyInfo = 
{
	&t4414_TI, "Item", &m26454_MI, &m26455_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4414_PIs[] =
{
	&t4414____Item_PropertyInfo,
	NULL
};
extern Il2CppType t351_0_0_0;
static ParameterInfo t4414_m26456_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t351_0_0_0},
};
extern TypeInfo t4414_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26456_MI = 
{
	"IndexOf", NULL, &t4414_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4414_m26456_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t351_0_0_0;
static ParameterInfo t4414_m26457_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t351_0_0_0},
};
extern TypeInfo t4414_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26457_MI = 
{
	"Insert", NULL, &t4414_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4414_m26457_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4414_m26458_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4414_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26458_MI = 
{
	"RemoveAt", NULL, &t4414_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4414_m26458_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4414_m26454_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4414_TI;
extern Il2CppType t351_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26454_MI = 
{
	"get_Item", NULL, &t4414_TI, &t351_0_0_0, RuntimeInvoker_t4_t18, t4414_m26454_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t351_0_0_0;
static ParameterInfo t4414_m26455_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t351_0_0_0},
};
extern TypeInfo t4414_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26455_MI = 
{
	"set_Item", NULL, &t4414_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4414_m26455_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4414_MIs[] =
{
	&m26456_MI,
	&m26457_MI,
	&m26458_MI,
	&m26454_MI,
	&m26455_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4413_TI;
extern TypeInfo t4415_TI;
static TypeInfo* t4414_ITIs[] = 
{
	&t592_TI,
	&t4413_TI,
	&t4415_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4414_0_0_0;
extern Il2CppType t4414_1_0_0;
struct t4414;
extern TypeInfo t4414_TI;
extern Il2CppGenericClass t4414_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4414_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4414_MIs, t4414_PIs, NULL, NULL, NULL, NULL, NULL, &t4414_TI, t4414_ITIs, NULL, &t1401__CustomAttributeCache, &t4414_TI, &t4414_0_0_0, &t4414_1_0_0, NULL, &t4414_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3526_TI;

#include "t352.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.ExecuteInEditMode>
extern MethodInfo m26459_MI;
static PropertyInfo t3526____Current_PropertyInfo = 
{
	&t3526_TI, "Current", &m26459_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3526_PIs[] =
{
	&t3526____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3526_TI;
extern Il2CppType t352_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26459_MI = 
{
	"get_Current", NULL, &t3526_TI, &t352_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3526_MIs[] =
{
	&m26459_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3526_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3526_0_0_0;
extern Il2CppType t3526_1_0_0;
struct t3526;
extern TypeInfo t3526_TI;
extern Il2CppGenericClass t3526_GC;
TypeInfo t3526_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3526_MIs, t3526_PIs, NULL, NULL, NULL, NULL, NULL, &t3526_TI, t3526_ITIs, NULL, &EmptyCustomAttributesCache, &t3526_TI, &t3526_0_0_0, &t3526_1_0_0, NULL, &t3526_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2572.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2572_TI;
#include "t2572MD.h"

extern TypeInfo t2572_TI;
extern TypeInfo t352_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m14851_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m20130_MI;
struct t16;
#define m20130(__this, p0, method) (t352 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m20130_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.ExecuteInEditMode>
extern Il2CppType t16_0_0_1;
FieldInfo t2572_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2572_TI, offsetof(t2572, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2572_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2572_TI, offsetof(t2572, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2572_FIs[] =
{
	&t2572_f0_FieldInfo,
	&t2572_f1_FieldInfo,
	NULL
};
extern MethodInfo m14848_MI;
static PropertyInfo t2572____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2572_TI, "System.Collections.IEnumerator.Current", &m14848_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14851_MI;
static PropertyInfo t2572____Current_PropertyInfo = 
{
	&t2572_TI, "Current", &m14851_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2572_PIs[] =
{
	&t2572____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2572____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2572_m14847_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2572_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14847_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2572_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2572_m14847_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2572_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14848_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2572_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2572_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14849_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2572_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2572_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14850_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2572_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2572_TI;
extern Il2CppType t352_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14851_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2572_TI, &t352_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2572_MIs[] =
{
	&m14847_MI,
	&m14848_MI,
	&m14849_MI,
	&m14850_MI,
	&m14851_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m14848_MI;
extern MethodInfo m14850_MI;
extern MethodInfo m14849_MI;
extern MethodInfo m14851_MI;
static MethodInfo* t2572_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m14848_MI,
	&m14850_MI,
	&m14849_MI,
	&m14851_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3526_TI;
static TypeInfo* t2572_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3526_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3526_TI;
static Il2CppInterfaceOffsetPair t2572_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3526_TI, 7},
};
extern MethodInfo m14851_MI;
extern TypeInfo t352_TI;
extern MethodInfo m20130_MI;
static void* t2572_RGCTXData[3] = 
{
	&m14851_MI,
	&t352_TI,
	&m20130_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2572_0_0_0;
extern Il2CppType t2572_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2572_TI;
extern Il2CppGenericClass t2572_GC;
extern TypeInfo t16_TI;
TypeInfo t2572_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2572_MIs, t2572_PIs, t2572_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2572_TI, t2572_ITIs, t2572_VT, &EmptyCustomAttributesCache, &t2572_TI, &t2572_0_0_0, &t2572_1_0_0, t2572_IOs, &t2572_GC, NULL, NULL, NULL, t2572_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2572)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4416_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.ExecuteInEditMode>
extern MethodInfo m26460_MI;
static PropertyInfo t4416____Count_PropertyInfo = 
{
	&t4416_TI, "Count", &m26460_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26461_MI;
static PropertyInfo t4416____IsReadOnly_PropertyInfo = 
{
	&t4416_TI, "IsReadOnly", &m26461_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4416_PIs[] =
{
	&t4416____Count_PropertyInfo,
	&t4416____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4416_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26460_MI = 
{
	"get_Count", NULL, &t4416_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4416_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m26461_MI = 
{
	"get_IsReadOnly", NULL, &t4416_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t352_0_0_0;
static ParameterInfo t4416_m26462_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t352_0_0_0},
};
extern TypeInfo t4416_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26462_MI = 
{
	"Add", NULL, &t4416_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4416_m26462_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4416_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26463_MI = 
{
	"Clear", NULL, &t4416_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t352_0_0_0;
static ParameterInfo t4416_m26464_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t352_0_0_0},
};
extern TypeInfo t4416_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26464_MI = 
{
	"Contains", NULL, &t4416_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4416_m26464_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t524_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4416_m26465_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t524_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4416_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26465_MI = 
{
	"CopyTo", NULL, &t4416_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4416_m26465_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t352_0_0_0;
static ParameterInfo t4416_m26466_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t352_0_0_0},
};
extern TypeInfo t4416_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26466_MI = 
{
	"Remove", NULL, &t4416_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4416_m26466_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4416_MIs[] =
{
	&m26460_MI,
	&m26461_MI,
	&m26462_MI,
	&m26463_MI,
	&m26464_MI,
	&m26465_MI,
	&m26466_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4418_TI;
static TypeInfo* t4416_ITIs[] = 
{
	&t592_TI,
	&t4418_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4416_0_0_0;
extern Il2CppType t4416_1_0_0;
struct t4416;
extern TypeInfo t4416_TI;
extern Il2CppGenericClass t4416_GC;
TypeInfo t4416_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4416_MIs, t4416_PIs, NULL, NULL, NULL, NULL, NULL, &t4416_TI, t4416_ITIs, NULL, &EmptyCustomAttributesCache, &t4416_TI, &t4416_0_0_0, &t4416_1_0_0, NULL, &t4416_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4418_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.ExecuteInEditMode>
extern TypeInfo t4418_TI;
extern Il2CppType t3526_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26467_MI = 
{
	"GetEnumerator", NULL, &t4418_TI, &t3526_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4418_MIs[] =
{
	&m26467_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4418_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4418_0_0_0;
extern Il2CppType t4418_1_0_0;
struct t4418;
extern TypeInfo t4418_TI;
extern Il2CppGenericClass t4418_GC;
TypeInfo t4418_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4418_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4418_TI, t4418_ITIs, NULL, &EmptyCustomAttributesCache, &t4418_TI, &t4418_0_0_0, &t4418_1_0_0, NULL, &t4418_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4417_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.ExecuteInEditMode>
extern MethodInfo m26468_MI;
extern MethodInfo m26469_MI;
static PropertyInfo t4417____Item_PropertyInfo = 
{
	&t4417_TI, "Item", &m26468_MI, &m26469_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4417_PIs[] =
{
	&t4417____Item_PropertyInfo,
	NULL
};
extern Il2CppType t352_0_0_0;
static ParameterInfo t4417_m26470_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t352_0_0_0},
};
extern TypeInfo t4417_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26470_MI = 
{
	"IndexOf", NULL, &t4417_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4417_m26470_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t352_0_0_0;
static ParameterInfo t4417_m26471_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t352_0_0_0},
};
extern TypeInfo t4417_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26471_MI = 
{
	"Insert", NULL, &t4417_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4417_m26471_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4417_m26472_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4417_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26472_MI = 
{
	"RemoveAt", NULL, &t4417_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4417_m26472_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4417_m26468_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4417_TI;
extern Il2CppType t352_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26468_MI = 
{
	"get_Item", NULL, &t4417_TI, &t352_0_0_0, RuntimeInvoker_t4_t18, t4417_m26468_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t352_0_0_0;
static ParameterInfo t4417_m26469_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t352_0_0_0},
};
extern TypeInfo t4417_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26469_MI = 
{
	"set_Item", NULL, &t4417_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4417_m26469_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4417_MIs[] =
{
	&m26470_MI,
	&m26471_MI,
	&m26472_MI,
	&m26468_MI,
	&m26469_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4416_TI;
extern TypeInfo t4418_TI;
static TypeInfo* t4417_ITIs[] = 
{
	&t592_TI,
	&t4416_TI,
	&t4418_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4417_0_0_0;
extern Il2CppType t4417_1_0_0;
struct t4417;
extern TypeInfo t4417_TI;
extern Il2CppGenericClass t4417_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4417_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4417_MIs, t4417_PIs, NULL, NULL, NULL, NULL, NULL, &t4417_TI, t4417_ITIs, NULL, &t1401__CustomAttributeCache, &t4417_TI, &t4417_0_0_0, &t4417_1_0_0, NULL, &t4417_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3527_TI;

#include "t312.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.RequireComponent>
extern MethodInfo m26473_MI;
static PropertyInfo t3527____Current_PropertyInfo = 
{
	&t3527_TI, "Current", &m26473_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3527_PIs[] =
{
	&t3527____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3527_TI;
extern Il2CppType t312_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26473_MI = 
{
	"get_Current", NULL, &t3527_TI, &t312_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3527_MIs[] =
{
	&m26473_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3527_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3527_0_0_0;
extern Il2CppType t3527_1_0_0;
struct t3527;
extern TypeInfo t3527_TI;
extern Il2CppGenericClass t3527_GC;
TypeInfo t3527_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3527_MIs, t3527_PIs, NULL, NULL, NULL, NULL, NULL, &t3527_TI, t3527_ITIs, NULL, &EmptyCustomAttributesCache, &t3527_TI, &t3527_0_0_0, &t3527_1_0_0, NULL, &t3527_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2573.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2573_TI;
#include "t2573MD.h"

extern TypeInfo t2573_TI;
extern TypeInfo t312_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m14856_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m20141_MI;
struct t16;
#define m20141(__this, p0, method) (t312 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m20141_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.RequireComponent>
extern Il2CppType t16_0_0_1;
FieldInfo t2573_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2573_TI, offsetof(t2573, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2573_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2573_TI, offsetof(t2573, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2573_FIs[] =
{
	&t2573_f0_FieldInfo,
	&t2573_f1_FieldInfo,
	NULL
};
extern MethodInfo m14853_MI;
static PropertyInfo t2573____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2573_TI, "System.Collections.IEnumerator.Current", &m14853_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14856_MI;
static PropertyInfo t2573____Current_PropertyInfo = 
{
	&t2573_TI, "Current", &m14856_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2573_PIs[] =
{
	&t2573____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2573____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2573_m14852_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2573_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14852_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2573_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2573_m14852_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2573_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14853_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2573_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2573_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14854_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2573_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2573_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14855_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2573_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2573_TI;
extern Il2CppType t312_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14856_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2573_TI, &t312_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2573_MIs[] =
{
	&m14852_MI,
	&m14853_MI,
	&m14854_MI,
	&m14855_MI,
	&m14856_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m14853_MI;
extern MethodInfo m14855_MI;
extern MethodInfo m14854_MI;
extern MethodInfo m14856_MI;
static MethodInfo* t2573_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m14853_MI,
	&m14855_MI,
	&m14854_MI,
	&m14856_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3527_TI;
static TypeInfo* t2573_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3527_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3527_TI;
static Il2CppInterfaceOffsetPair t2573_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3527_TI, 7},
};
extern MethodInfo m14856_MI;
extern TypeInfo t312_TI;
extern MethodInfo m20141_MI;
static void* t2573_RGCTXData[3] = 
{
	&m14856_MI,
	&t312_TI,
	&m20141_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2573_0_0_0;
extern Il2CppType t2573_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2573_TI;
extern Il2CppGenericClass t2573_GC;
extern TypeInfo t16_TI;
TypeInfo t2573_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2573_MIs, t2573_PIs, t2573_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2573_TI, t2573_ITIs, t2573_VT, &EmptyCustomAttributesCache, &t2573_TI, &t2573_0_0_0, &t2573_1_0_0, t2573_IOs, &t2573_GC, NULL, NULL, NULL, t2573_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2573)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4419_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.RequireComponent>
extern MethodInfo m26474_MI;
static PropertyInfo t4419____Count_PropertyInfo = 
{
	&t4419_TI, "Count", &m26474_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26475_MI;
static PropertyInfo t4419____IsReadOnly_PropertyInfo = 
{
	&t4419_TI, "IsReadOnly", &m26475_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4419_PIs[] =
{
	&t4419____Count_PropertyInfo,
	&t4419____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4419_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26474_MI = 
{
	"get_Count", NULL, &t4419_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4419_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m26475_MI = 
{
	"get_IsReadOnly", NULL, &t4419_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t312_0_0_0;
static ParameterInfo t4419_m26476_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t312_0_0_0},
};
extern TypeInfo t4419_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26476_MI = 
{
	"Add", NULL, &t4419_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4419_m26476_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4419_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26477_MI = 
{
	"Clear", NULL, &t4419_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t312_0_0_0;
static ParameterInfo t4419_m26478_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t312_0_0_0},
};
extern TypeInfo t4419_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26478_MI = 
{
	"Contains", NULL, &t4419_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4419_m26478_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t525_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4419_m26479_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t525_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4419_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26479_MI = 
{
	"CopyTo", NULL, &t4419_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4419_m26479_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t312_0_0_0;
static ParameterInfo t4419_m26480_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t312_0_0_0},
};
extern TypeInfo t4419_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26480_MI = 
{
	"Remove", NULL, &t4419_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4419_m26480_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4419_MIs[] =
{
	&m26474_MI,
	&m26475_MI,
	&m26476_MI,
	&m26477_MI,
	&m26478_MI,
	&m26479_MI,
	&m26480_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4421_TI;
static TypeInfo* t4419_ITIs[] = 
{
	&t592_TI,
	&t4421_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4419_0_0_0;
extern Il2CppType t4419_1_0_0;
struct t4419;
extern TypeInfo t4419_TI;
extern Il2CppGenericClass t4419_GC;
TypeInfo t4419_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4419_MIs, t4419_PIs, NULL, NULL, NULL, NULL, NULL, &t4419_TI, t4419_ITIs, NULL, &EmptyCustomAttributesCache, &t4419_TI, &t4419_0_0_0, &t4419_1_0_0, NULL, &t4419_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4421_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.RequireComponent>
extern TypeInfo t4421_TI;
extern Il2CppType t3527_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26481_MI = 
{
	"GetEnumerator", NULL, &t4421_TI, &t3527_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4421_MIs[] =
{
	&m26481_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4421_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4421_0_0_0;
extern Il2CppType t4421_1_0_0;
struct t4421;
extern TypeInfo t4421_TI;
extern Il2CppGenericClass t4421_GC;
TypeInfo t4421_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4421_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4421_TI, t4421_ITIs, NULL, &EmptyCustomAttributesCache, &t4421_TI, &t4421_0_0_0, &t4421_1_0_0, NULL, &t4421_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4420_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.RequireComponent>
extern MethodInfo m26482_MI;
extern MethodInfo m26483_MI;
static PropertyInfo t4420____Item_PropertyInfo = 
{
	&t4420_TI, "Item", &m26482_MI, &m26483_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4420_PIs[] =
{
	&t4420____Item_PropertyInfo,
	NULL
};
extern Il2CppType t312_0_0_0;
static ParameterInfo t4420_m26484_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t312_0_0_0},
};
extern TypeInfo t4420_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26484_MI = 
{
	"IndexOf", NULL, &t4420_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4420_m26484_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t312_0_0_0;
static ParameterInfo t4420_m26485_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t312_0_0_0},
};
extern TypeInfo t4420_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26485_MI = 
{
	"Insert", NULL, &t4420_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4420_m26485_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4420_m26486_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4420_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26486_MI = 
{
	"RemoveAt", NULL, &t4420_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4420_m26486_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4420_m26482_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4420_TI;
extern Il2CppType t312_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26482_MI = 
{
	"get_Item", NULL, &t4420_TI, &t312_0_0_0, RuntimeInvoker_t4_t18, t4420_m26482_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t312_0_0_0;
static ParameterInfo t4420_m26483_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t312_0_0_0},
};
extern TypeInfo t4420_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26483_MI = 
{
	"set_Item", NULL, &t4420_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4420_m26483_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4420_MIs[] =
{
	&m26484_MI,
	&m26485_MI,
	&m26486_MI,
	&m26482_MI,
	&m26483_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4419_TI;
extern TypeInfo t4421_TI;
static TypeInfo* t4420_ITIs[] = 
{
	&t592_TI,
	&t4419_TI,
	&t4421_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4420_0_0_0;
extern Il2CppType t4420_1_0_0;
struct t4420;
extern TypeInfo t4420_TI;
extern Il2CppGenericClass t4420_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4420_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4420_MIs, t4420_PIs, NULL, NULL, NULL, NULL, NULL, &t4420_TI, t4420_ITIs, NULL, &t1401__CustomAttributeCache, &t4420_TI, &t4420_0_0_0, &t4420_1_0_0, NULL, &t4420_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t604.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t604_TI;
#include "t604MD.h"

#include "t2575.h"
extern TypeInfo t604_TI;
extern TypeInfo t16_TI;
extern TypeInfo t17_TI;
extern TypeInfo t18_TI;
extern TypeInfo t307_TI;
extern TypeInfo t1236_TI;
extern TypeInfo t2575_TI;
extern TypeInfo t1270_TI;
extern TypeInfo t294_TI;
#include "t4MD.h"
#include "t2575MD.h"
extern MethodInfo m24_MI;
extern MethodInfo m3791_MI;
extern MethodInfo m3771_MI;
extern MethodInfo m6463_MI;
extern MethodInfo m14863_MI;
extern MethodInfo m6906_MI;
extern MethodInfo m20152_MI;
extern MethodInfo m14864_MI;
struct t16;
struct t16;
 void m16895_gshared (t4 * __this, t309** p0, int32_t p1, MethodInfo* method);
#define m16895(__this, p0, p1, method) (void)m16895_gshared((t4 *)__this, (t309**)p0, (int32_t)p1, method)
#define m20152(__this, p0, p1, method) (void)m16895_gshared((t4 *)__this, (t309**)p0, (int32_t)p1, method)
extern MethodInfo m20152_MI;


extern MethodInfo m14863_MI;
 t2575  m14863 (t604 * __this, MethodInfo* method){
	{
		t2575  L_0 = {0};
		m14864(&L_0, __this, &m14864_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Stack`1<System.Type>
extern Il2CppType t18_0_0_32849;
FieldInfo t604_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t18_0_0_32849, &t604_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t526_0_0_1;
FieldInfo t604_f1_FieldInfo = 
{
	"_array", &t526_0_0_1, &t604_TI, offsetof(t604, f1), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t604_f2_FieldInfo = 
{
	"_size", &t18_0_0_1, &t604_TI, offsetof(t604, f2), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t604_f3_FieldInfo = 
{
	"_version", &t18_0_0_1, &t604_TI, offsetof(t604, f3), &EmptyCustomAttributesCache};
static FieldInfo* t604_FIs[] =
{
	&t604_f0_FieldInfo,
	&t604_f1_FieldInfo,
	&t604_f2_FieldInfo,
	&t604_f3_FieldInfo,
	NULL
};
static const int32_t t604_f0_DefaultValueData = 16;
extern Il2CppType t18_0_0_0;
static Il2CppFieldDefaultValueEntry t604_f0_DefaultValue = 
{
	&t604_f0_FieldInfo, { (char*)&t604_f0_DefaultValueData, &t18_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t604_FDVs[] = 
{
	&t604_f0_DefaultValue,
	NULL
};
extern MethodInfo m14857_MI;
static PropertyInfo t604____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t604_TI, "System.Collections.ICollection.IsSynchronized", &m14857_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14858_MI;
static PropertyInfo t604____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t604_TI, "System.Collections.ICollection.SyncRoot", &m14858_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2908_MI;
static PropertyInfo t604____Count_PropertyInfo = 
{
	&t604_TI, "Count", &m2908_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t604_PIs[] =
{
	&t604____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t604____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t604____Count_PropertyInfo,
	NULL
};
extern TypeInfo t604_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m2903_MI = 
{
	".ctor", (methodPointerType)&m9098_gshared, &t604_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t604_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14857_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9099_gshared, &t604_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t604_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14858_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9100_gshared, &t604_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t604_m14859_ParameterInfos[] = 
{
	{"dest", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"idx", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t604_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14859_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9101_gshared, &t604_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t604_m14859_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t604_TI;
extern Il2CppType t2574_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14860_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m9102_gshared, &t604_TI, &t2574_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t604_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14861_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9103_gshared, &t604_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t604_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14862_MI = 
{
	"Peek", (methodPointerType)&m9104_gshared, &t604_TI, &t294_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t604_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m2906_MI = 
{
	"Pop", (methodPointerType)&m9105_gshared, &t604_TI, &t294_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t604_m2904_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t604_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m2904_MI = 
{
	"Push", (methodPointerType)&m9106_gshared, &t604_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t604_m2904_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t604_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m2908_MI = 
{
	"get_Count", (methodPointerType)&m9107_gshared, &t604_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t604_TI;
extern Il2CppType t2575_0_0_0;
extern void* RuntimeInvoker_t2575 (MethodInfo* method, void* obj, void** args);
MethodInfo m14863_MI = 
{
	"GetEnumerator", (methodPointerType)&m14863, &t604_TI, &t2575_0_0_0, RuntimeInvoker_t2575, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t604_MIs[] =
{
	&m2903_MI,
	&m14857_MI,
	&m14858_MI,
	&m14859_MI,
	&m14860_MI,
	&m14861_MI,
	&m14862_MI,
	&m2906_MI,
	&m2904_MI,
	&m2908_MI,
	&m14863_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m2908_MI;
extern MethodInfo m14857_MI;
extern MethodInfo m14858_MI;
extern MethodInfo m14859_MI;
extern MethodInfo m14861_MI;
extern MethodInfo m14860_MI;
static MethodInfo* t604_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m2908_MI,
	&m14857_MI,
	&m14858_MI,
	&m14859_MI,
	&m14861_MI,
	&m14860_MI,
};
extern TypeInfo t641_TI;
extern TypeInfo t592_TI;
extern TypeInfo t2577_TI;
static TypeInfo* t604_ITIs[] = 
{
	&t641_TI,
	&t592_TI,
	&t2577_TI,
};
extern TypeInfo t641_TI;
extern TypeInfo t592_TI;
extern TypeInfo t2577_TI;
static Il2CppInterfaceOffsetPair t604_IOs[] = 
{
	{ &t641_TI, 4},
	{ &t592_TI, 8},
	{ &t2577_TI, 9},
};
extern MethodInfo m14863_MI;
extern TypeInfo t2575_TI;
extern MethodInfo m20152_MI;
extern MethodInfo m14864_MI;
static void* t604_RGCTXData[4] = 
{
	&m14863_MI,
	&t2575_TI,
	&m20152_MI,
	&m14864_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t604_0_0_0;
extern Il2CppType t604_1_0_0;
extern TypeInfo t4_TI;
struct t604;
extern TypeInfo t604_TI;
extern Il2CppGenericClass t604_GC;
extern CustomAttributesCache t679__CustomAttributeCache;
TypeInfo t604_TI = 
{
	&g_System_dll_Image, NULL, "Stack`1", "System.Collections.Generic", t604_MIs, t604_PIs, t604_FIs, NULL, &t4_TI, NULL, NULL, &t604_TI, t604_ITIs, t604_VT, &t679__CustomAttributeCache, &t604_TI, &t604_0_0_0, &t604_1_0_0, t604_IOs, &t604_GC, NULL, t604_FDVs, NULL, t604_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t604), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 11, 3, 4, 0, 0, 10, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2575_TI;

extern TypeInfo t2575_TI;
extern TypeInfo t294_TI;
extern TypeInfo t1270_TI;
extern TypeInfo t604_TI;
extern MethodInfo m14868_MI;
extern MethodInfo m6906_MI;


// Metadata Definition System.Collections.Generic.Stack`1/Enumerator<System.Type>
extern Il2CppType t604_0_0_1;
FieldInfo t2575_f0_FieldInfo = 
{
	"parent", &t604_0_0_1, &t2575_TI, offsetof(t2575, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2575_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2575_TI, offsetof(t2575, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2575_f2_FieldInfo = 
{
	"_version", &t18_0_0_1, &t2575_TI, offsetof(t2575, f2) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2575_FIs[] =
{
	&t2575_f0_FieldInfo,
	&t2575_f1_FieldInfo,
	&t2575_f2_FieldInfo,
	NULL
};
extern MethodInfo m14865_MI;
static PropertyInfo t2575____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2575_TI, "System.Collections.IEnumerator.Current", &m14865_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14868_MI;
static PropertyInfo t2575____Current_PropertyInfo = 
{
	&t2575_TI, "Current", &m14868_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2575_PIs[] =
{
	&t2575____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2575____Current_PropertyInfo,
	NULL
};
extern Il2CppType t604_0_0_0;
static ParameterInfo t2575_m14864_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t604_0_0_0},
};
extern TypeInfo t2575_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14864_MI = 
{
	".ctor", (methodPointerType)&m9109_gshared, &t2575_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2575_m14864_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2575_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14865_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m9110_gshared, &t2575_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2575_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14866_MI = 
{
	"Dispose", (methodPointerType)&m9111_gshared, &t2575_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2575_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14867_MI = 
{
	"MoveNext", (methodPointerType)&m9112_gshared, &t2575_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2575_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14868_MI = 
{
	"get_Current", (methodPointerType)&m9113_gshared, &t2575_TI, &t294_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2575_MIs[] =
{
	&m14864_MI,
	&m14865_MI,
	&m14866_MI,
	&m14867_MI,
	&m14868_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m14865_MI;
extern MethodInfo m14867_MI;
extern MethodInfo m14866_MI;
extern MethodInfo m14868_MI;
static MethodInfo* t2575_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m14865_MI,
	&m14867_MI,
	&m14866_MI,
	&m14868_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2574_TI;
static TypeInfo* t2575_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t2574_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2574_TI;
static Il2CppInterfaceOffsetPair t2575_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t2574_TI, 7},
};
extern MethodInfo m14868_MI;
extern TypeInfo t294_TI;
static void* t2575_RGCTXData[2] = 
{
	&m14868_MI,
	&t294_TI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t2575_0_0_0;
extern Il2CppType t2575_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2575_TI;
extern Il2CppGenericClass t2575_GC;
extern TypeInfo t679_TI;
TypeInfo t2575_TI = 
{
	&g_System_dll_Image, NULL, "Enumerator", "", t2575_MIs, t2575_PIs, t2575_FIs, NULL, &t101_TI, NULL, &t679_TI, &t2575_TI, t2575_ITIs, t2575_VT, &EmptyCustomAttributesCache, &t2575_TI, &t2575_0_0_0, &t2575_1_0_0, t2575_IOs, &t2575_GC, NULL, NULL, NULL, t2575_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2575)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 3, 0, 0, 8, 3, 3};
#include "t605.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t605_TI;
#include "t605MD.h"

#include "t2581.h"
#include "t2578.h"
#include "t2579.h"
#include "t330.h"
#include "t2586.h"
#include "t2580.h"
extern TypeInfo t605_TI;
extern TypeInfo t294_TI;
extern TypeInfo t18_TI;
extern TypeInfo t17_TI;
extern TypeInfo t307_TI;
extern TypeInfo t574_TI;
extern TypeInfo t1269_TI;
extern TypeInfo t1234_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2581_TI;
extern TypeInfo t19_TI;
extern TypeInfo t2576_TI;
extern TypeInfo t2577_TI;
extern TypeInfo t2574_TI;
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2578_TI;
extern TypeInfo t330_TI;
extern TypeInfo t2579_TI;
extern TypeInfo t2586_TI;
#include "t1234MD.h"
#include "t591MD.h"
#include "t2578MD.h"
#include "t330MD.h"
#include "t2579MD.h"
#include "t2581MD.h"
#include "t2586MD.h"
extern MethodInfo m14913_MI;
extern MethodInfo m14914_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m6473_MI;
extern MethodInfo m20152_MI;
extern MethodInfo m6474_MI;
extern MethodInfo m14900_MI;
extern MethodInfo m24_MI;
extern MethodInfo m14897_MI;
extern MethodInfo m3759_MI;
extern MethodInfo m2910_MI;
extern MethodInfo m14892_MI;
extern MethodInfo m14898_MI;
extern MethodInfo m14901_MI;
extern MethodInfo m14903_MI;
extern MethodInfo m14886_MI;
extern MethodInfo m14910_MI;
extern MethodInfo m6912_MI;
extern MethodInfo m14911_MI;
extern MethodInfo m22932_MI;
extern MethodInfo m22937_MI;
extern MethodInfo m22939_MI;
extern MethodInfo m22931_MI;
extern MethodInfo m42_MI;
extern MethodInfo m43_MI;
extern MethodInfo m14902_MI;
extern MethodInfo m14887_MI;
extern MethodInfo m14888_MI;
extern MethodInfo m14921_MI;
extern MethodInfo m3755_MI;
extern MethodInfo m20154_MI;
extern MethodInfo m14895_MI;
extern MethodInfo m14896_MI;
extern MethodInfo m2947_MI;
extern MethodInfo m14996_MI;
extern MethodInfo m14915_MI;
extern MethodInfo m14899_MI;
extern MethodInfo m14905_MI;
extern MethodInfo m3771_MI;
extern MethodInfo m15002_MI;
extern MethodInfo m20156_MI;
extern MethodInfo m20164_MI;
extern MethodInfo m3758_MI;
extern MethodInfo m20152_MI;
struct t16;
#include "t2584.h"
struct t16;
#include "t1486.h"
 int32_t m7708_gshared (t4 * __this, t309* p0, t4 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m7708(__this, p0, p1, p2, p3, method) (int32_t)m7708_gshared((t4 *)__this, (t309*)p0, (t4 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m20154(__this, p0, p1, p2, p3, method) (int32_t)m7708_gshared((t4 *)__this, (t309*)p0, (t4 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m20154_MI;
struct t16;
struct t16;
 void m16964_gshared (t4 * __this, t309* p0, int32_t p1, int32_t p2, t4* p3, MethodInfo* method);
#define m16964(__this, p0, p1, p2, p3, method) (void)m16964_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (int32_t)p2, (t4*)p3, method)
#define m20156(__this, p0, p1, p2, p3, method) (void)m16964_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (int32_t)p2, (t4*)p3, method)
extern MethodInfo m20156_MI;
struct t16;
#include "t31.h"
struct t16;
#include "t1608.h"
 void m17115_gshared (t4 * __this, t309* p0, int32_t p1, t1608 * p2, MethodInfo* method);
#define m17115(__this, p0, p1, p2, method) (void)m17115_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (t1608 *)p2, method)
#define m20164(__this, p0, p1, p2, method) (void)m17115_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (t1608 *)p2, method)
extern MethodInfo m20164_MI;


extern MethodInfo m14897_MI;
 t2581  m14897 (t605 * __this, MethodInfo* method){
	{
		t2581  L_0 = {0};
		m14915(&L_0, __this, &m14915_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<System.Type>
extern Il2CppType t18_0_0_32849;
FieldInfo t605_f0_FieldInfo = 
{
	"DefaultCapacity", &t18_0_0_32849, &t605_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t526_0_0_1;
FieldInfo t605_f1_FieldInfo = 
{
	"_items", &t526_0_0_1, &t605_TI, offsetof(t605, f1), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t605_f2_FieldInfo = 
{
	"_size", &t18_0_0_1, &t605_TI, offsetof(t605, f2), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t605_f3_FieldInfo = 
{
	"_version", &t18_0_0_1, &t605_TI, offsetof(t605, f3), &EmptyCustomAttributesCache};
extern Il2CppType t526_0_0_49;
FieldInfo t605_f4_FieldInfo = 
{
	"EmptyArray", &t526_0_0_49, &t605_TI, offsetof(t605_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t605_FIs[] =
{
	&t605_f0_FieldInfo,
	&t605_f1_FieldInfo,
	&t605_f2_FieldInfo,
	&t605_f3_FieldInfo,
	&t605_f4_FieldInfo,
	NULL
};
static const int32_t t605_f0_DefaultValueData = 4;
extern Il2CppType t18_0_0_0;
static Il2CppFieldDefaultValueEntry t605_f0_DefaultValue = 
{
	&t605_f0_FieldInfo, { (char*)&t605_f0_DefaultValueData, &t18_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t605_FDVs[] = 
{
	&t605_f0_DefaultValue,
	NULL
};
extern MethodInfo m14879_MI;
static PropertyInfo t605____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t605_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14879_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14880_MI;
static PropertyInfo t605____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t605_TI, "System.Collections.ICollection.IsSynchronized", &m14880_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14881_MI;
static PropertyInfo t605____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t605_TI, "System.Collections.ICollection.SyncRoot", &m14881_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14882_MI;
static PropertyInfo t605____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t605_TI, "System.Collections.IList.IsFixedSize", &m14882_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14883_MI;
static PropertyInfo t605____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t605_TI, "System.Collections.IList.IsReadOnly", &m14883_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14884_MI;
extern MethodInfo m14885_MI;
static PropertyInfo t605____System_Collections_IList_Item_PropertyInfo = 
{
	&t605_TI, "System.Collections.IList.Item", &m14884_MI, &m14885_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14910_MI;
extern MethodInfo m14911_MI;
static PropertyInfo t605____Capacity_PropertyInfo = 
{
	&t605_TI, "Capacity", &m14910_MI, &m14911_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14912_MI;
static PropertyInfo t605____Count_PropertyInfo = 
{
	&t605_TI, "Count", &m14912_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14913_MI;
extern MethodInfo m14914_MI;
static PropertyInfo t605____Item_PropertyInfo = 
{
	&t605_TI, "Item", &m14913_MI, &m14914_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t605_PIs[] =
{
	&t605____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t605____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t605____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t605____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t605____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t605____System_Collections_IList_Item_PropertyInfo,
	&t605____Capacity_PropertyInfo,
	&t605____Count_PropertyInfo,
	&t605____Item_PropertyInfo,
	NULL
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m2909_MI = 
{
	".ctor", (methodPointerType)&m7910_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t605_m14869_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14869_MI = 
{
	".ctor", (methodPointerType)&m7912_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t605_m14869_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14870_MI = 
{
	".cctor", (methodPointerType)&m7914_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t2574_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14871_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m7916_gshared, &t605_TI, &t2574_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t605_m14872_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14872_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m7918_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t605_m14872_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14873_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m7920_gshared, &t605_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t605_m14874_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14874_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m7922_gshared, &t605_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t605_m14874_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t605_m14875_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14875_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m7924_gshared, &t605_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t605_m14875_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t605_m14876_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14876_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m7926_gshared, &t605_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t605_m14876_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t605_m14877_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14877_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m7928_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t605_m14877_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t605_m14878_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14878_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m7930_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t605_m14878_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14879_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m7932_gshared, &t605_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14880_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m7934_gshared, &t605_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14881_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m7936_gshared, &t605_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14882_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m7938_gshared, &t605_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14883_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m7940_gshared, &t605_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t605_m14884_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14884_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m7942_gshared, &t605_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t605_m14884_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t605_m14885_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14885_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m7944_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t605_m14885_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t605_m2910_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m2910_MI = 
{
	"Add", (methodPointerType)&m7945_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t605_m2910_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t605_m14886_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14886_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m7947_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t605_m14886_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2576_0_0_0;
static ParameterInfo t605_m14887_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2576_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14887_MI = 
{
	"AddCollection", (methodPointerType)&m7949_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t605_m14887_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2577_0_0_0;
static ParameterInfo t605_m14888_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2577_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14888_MI = 
{
	"AddEnumerable", (methodPointerType)&m7951_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t605_m14888_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2577_0_0_0;
static ParameterInfo t605_m14889_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2577_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14889_MI = 
{
	"AddRange", (methodPointerType)&m7953_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t605_m14889_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t2578_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14890_MI = 
{
	"AsReadOnly", (methodPointerType)&m7955_gshared, &t605_TI, &t2578_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14891_MI = 
{
	"Clear", (methodPointerType)&m7957_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t605_m14892_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14892_MI = 
{
	"Contains", (methodPointerType)&m7959_gshared, &t605_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t605_m14892_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t526_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t605_m14893_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t526_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14893_MI = 
{
	"CopyTo", (methodPointerType)&m7961_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t605_m14893_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2579_0_0_0;
static ParameterInfo t605_m14894_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2579_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14894_MI = 
{
	"Find", (methodPointerType)&m7963_gshared, &t605_TI, &t294_0_0_0, RuntimeInvoker_t4_t4, t605_m14894_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2579_0_0_0;
static ParameterInfo t605_m14895_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2579_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14895_MI = 
{
	"CheckMatch", (methodPointerType)&m7965_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t605_m14895_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
extern Il2CppType t2579_0_0_0;
static ParameterInfo t605_m14896_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2579_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14896_MI = 
{
	"GetIndex", (methodPointerType)&m7967_gshared, &t605_TI, &t18_0_0_0, RuntimeInvoker_t18_t18_t18_t4, t605_m14896_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t2581_0_0_0;
extern void* RuntimeInvoker_t2581 (MethodInfo* method, void* obj, void** args);
MethodInfo m14897_MI = 
{
	"GetEnumerator", (methodPointerType)&m14897, &t605_TI, &t2581_0_0_0, RuntimeInvoker_t2581, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t605_m14898_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14898_MI = 
{
	"IndexOf", (methodPointerType)&m7970_gshared, &t605_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t605_m14898_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t605_m14899_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14899_MI = 
{
	"Shift", (methodPointerType)&m7972_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t605_m14899_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t605_m14900_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14900_MI = 
{
	"CheckIndex", (methodPointerType)&m7974_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t605_m14900_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t605_m14901_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14901_MI = 
{
	"Insert", (methodPointerType)&m7976_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t605_m14901_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2577_0_0_0;
static ParameterInfo t605_m14902_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2577_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14902_MI = 
{
	"CheckCollection", (methodPointerType)&m7978_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t605_m14902_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t605_m14903_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14903_MI = 
{
	"Remove", (methodPointerType)&m7980_gshared, &t605_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t605_m14903_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2579_0_0_0;
static ParameterInfo t605_m14904_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2579_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14904_MI = 
{
	"RemoveAll", (methodPointerType)&m7982_gshared, &t605_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t605_m14904_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t605_m14905_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14905_MI = 
{
	"RemoveAt", (methodPointerType)&m7984_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t605_m14905_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14906_MI = 
{
	"Reverse", (methodPointerType)&m7986_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14907_MI = 
{
	"Sort", (methodPointerType)&m7988_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2580_0_0_0;
static ParameterInfo t605_m14908_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2580_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14908_MI = 
{
	"Sort", (methodPointerType)&m7990_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t605_m14908_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t526_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m2911_MI = 
{
	"ToArray", (methodPointerType)&m7992_gshared, &t605_TI, &t526_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14909_MI = 
{
	"TrimExcess", (methodPointerType)&m7994_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14910_MI = 
{
	"get_Capacity", (methodPointerType)&m7996_gshared, &t605_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t605_m14911_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14911_MI = 
{
	"set_Capacity", (methodPointerType)&m7998_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t605_m14911_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t605_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14912_MI = 
{
	"get_Count", (methodPointerType)&m8000_gshared, &t605_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t605_m14913_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14913_MI = 
{
	"get_Item", (methodPointerType)&m8002_gshared, &t605_TI, &t294_0_0_0, RuntimeInvoker_t4_t18, t605_m14913_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t605_m14914_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t605_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14914_MI = 
{
	"set_Item", (methodPointerType)&m8004_gshared, &t605_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t605_m14914_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t605_MIs[] =
{
	&m2909_MI,
	&m14869_MI,
	&m14870_MI,
	&m14871_MI,
	&m14872_MI,
	&m14873_MI,
	&m14874_MI,
	&m14875_MI,
	&m14876_MI,
	&m14877_MI,
	&m14878_MI,
	&m14879_MI,
	&m14880_MI,
	&m14881_MI,
	&m14882_MI,
	&m14883_MI,
	&m14884_MI,
	&m14885_MI,
	&m2910_MI,
	&m14886_MI,
	&m14887_MI,
	&m14888_MI,
	&m14889_MI,
	&m14890_MI,
	&m14891_MI,
	&m14892_MI,
	&m14893_MI,
	&m14894_MI,
	&m14895_MI,
	&m14896_MI,
	&m14897_MI,
	&m14898_MI,
	&m14899_MI,
	&m14900_MI,
	&m14901_MI,
	&m14902_MI,
	&m14903_MI,
	&m14904_MI,
	&m14905_MI,
	&m14906_MI,
	&m14907_MI,
	&m14908_MI,
	&m2911_MI,
	&m14909_MI,
	&m14910_MI,
	&m14911_MI,
	&m14912_MI,
	&m14913_MI,
	&m14914_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m14873_MI;
extern MethodInfo m14912_MI;
extern MethodInfo m14880_MI;
extern MethodInfo m14881_MI;
extern MethodInfo m14872_MI;
extern MethodInfo m14882_MI;
extern MethodInfo m14883_MI;
extern MethodInfo m14884_MI;
extern MethodInfo m14885_MI;
extern MethodInfo m14874_MI;
extern MethodInfo m14891_MI;
extern MethodInfo m14875_MI;
extern MethodInfo m14876_MI;
extern MethodInfo m14877_MI;
extern MethodInfo m14878_MI;
extern MethodInfo m14905_MI;
extern MethodInfo m14912_MI;
extern MethodInfo m14879_MI;
extern MethodInfo m2910_MI;
extern MethodInfo m14891_MI;
extern MethodInfo m14892_MI;
extern MethodInfo m14893_MI;
extern MethodInfo m14903_MI;
extern MethodInfo m14871_MI;
extern MethodInfo m14898_MI;
extern MethodInfo m14901_MI;
extern MethodInfo m14905_MI;
extern MethodInfo m14913_MI;
extern MethodInfo m14914_MI;
static MethodInfo* t605_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m14873_MI,
	&m14912_MI,
	&m14880_MI,
	&m14881_MI,
	&m14872_MI,
	&m14882_MI,
	&m14883_MI,
	&m14884_MI,
	&m14885_MI,
	&m14874_MI,
	&m14891_MI,
	&m14875_MI,
	&m14876_MI,
	&m14877_MI,
	&m14878_MI,
	&m14905_MI,
	&m14912_MI,
	&m14879_MI,
	&m2910_MI,
	&m14891_MI,
	&m14892_MI,
	&m14893_MI,
	&m14903_MI,
	&m14871_MI,
	&m14898_MI,
	&m14901_MI,
	&m14905_MI,
	&m14913_MI,
	&m14914_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2576_TI;
extern TypeInfo t2577_TI;
extern TypeInfo t2582_TI;
static TypeInfo* t605_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t2576_TI,
	&t2577_TI,
	&t2582_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2576_TI;
extern TypeInfo t2577_TI;
extern TypeInfo t2582_TI;
static Il2CppInterfaceOffsetPair t605_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t2576_TI, 20},
	{ &t2577_TI, 27},
	{ &t2582_TI, 28},
};
extern TypeInfo t605_TI;
extern TypeInfo t526_TI;
extern MethodInfo m14897_MI;
extern TypeInfo t2581_TI;
extern TypeInfo t294_TI;
extern MethodInfo m2910_MI;
extern MethodInfo m14892_MI;
extern MethodInfo m14898_MI;
extern MethodInfo m14900_MI;
extern MethodInfo m14901_MI;
extern MethodInfo m14903_MI;
extern MethodInfo m14913_MI;
extern MethodInfo m14914_MI;
extern MethodInfo m14886_MI;
extern MethodInfo m14910_MI;
extern MethodInfo m14911_MI;
extern MethodInfo m22932_MI;
extern MethodInfo m22937_MI;
extern MethodInfo m22939_MI;
extern MethodInfo m22931_MI;
extern MethodInfo m14902_MI;
extern TypeInfo t2576_TI;
extern MethodInfo m14887_MI;
extern MethodInfo m14888_MI;
extern TypeInfo t2578_TI;
extern MethodInfo m14921_MI;
extern MethodInfo m20154_MI;
extern MethodInfo m14895_MI;
extern MethodInfo m14896_MI;
extern MethodInfo m14996_MI;
extern MethodInfo m14915_MI;
extern MethodInfo m14899_MI;
extern MethodInfo m14905_MI;
extern MethodInfo m15002_MI;
extern MethodInfo m20156_MI;
extern MethodInfo m20164_MI;
extern MethodInfo m20152_MI;
static void* t605_RGCTXData[37] = 
{
	&t605_TI,
	&t526_TI,
	&m14897_MI,
	&t2581_TI,
	&t294_TI,
	&m2910_MI,
	&m14892_MI,
	&m14898_MI,
	&m14900_MI,
	&m14901_MI,
	&m14903_MI,
	&m14913_MI,
	&m14914_MI,
	&m14886_MI,
	&m14910_MI,
	&m14911_MI,
	&m22932_MI,
	&m22937_MI,
	&m22939_MI,
	&m22931_MI,
	&m14902_MI,
	&t2576_TI,
	&m14887_MI,
	&m14888_MI,
	&t2578_TI,
	&m14921_MI,
	&m20154_MI,
	&m14895_MI,
	&m14896_MI,
	&m14996_MI,
	&m14915_MI,
	&m14899_MI,
	&m14905_MI,
	&m15002_MI,
	&m20156_MI,
	&m20164_MI,
	&m20152_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t605_0_0_0;
extern Il2CppType t605_1_0_0;
extern TypeInfo t4_TI;
struct t605;
extern TypeInfo t605_TI;
extern Il2CppGenericClass t605_GC;
extern CustomAttributesCache t840__CustomAttributeCache;
TypeInfo t605_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t605_MIs, t605_PIs, t605_FIs, NULL, &t4_TI, NULL, NULL, &t605_TI, t605_ITIs, t605_VT, &t840__CustomAttributeCache, &t605_TI, &t605_0_0_0, &t605_1_0_0, t605_IOs, &t605_GC, NULL, t605_FDVs, NULL, t605_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t605), 0, -1, sizeof(t605_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2581_TI;

#include "t1287.h"
extern TypeInfo t2581_TI;
extern TypeInfo t1270_TI;
extern TypeInfo t294_TI;
extern TypeInfo t605_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1287_TI;
#include "t1287MD.h"
extern MethodInfo m14918_MI;
extern MethodInfo m6906_MI;
extern MethodInfo m1423_MI;
extern MethodInfo m2995_MI;
extern MethodInfo m7111_MI;
extern MethodInfo m6907_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<System.Type>
extern Il2CppType t605_0_0_1;
FieldInfo t2581_f0_FieldInfo = 
{
	"l", &t605_0_0_1, &t2581_TI, offsetof(t2581, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2581_f1_FieldInfo = 
{
	"next", &t18_0_0_1, &t2581_TI, offsetof(t2581, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2581_f2_FieldInfo = 
{
	"ver", &t18_0_0_1, &t2581_TI, offsetof(t2581, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t294_0_0_1;
FieldInfo t2581_f3_FieldInfo = 
{
	"current", &t294_0_0_1, &t2581_TI, offsetof(t2581, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2581_FIs[] =
{
	&t2581_f0_FieldInfo,
	&t2581_f1_FieldInfo,
	&t2581_f2_FieldInfo,
	&t2581_f3_FieldInfo,
	NULL
};
extern MethodInfo m14916_MI;
static PropertyInfo t2581____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2581_TI, "System.Collections.IEnumerator.Current", &m14916_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14920_MI;
static PropertyInfo t2581____Current_PropertyInfo = 
{
	&t2581_TI, "Current", &m14920_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2581_PIs[] =
{
	&t2581____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2581____Current_PropertyInfo,
	NULL
};
extern Il2CppType t605_0_0_0;
static ParameterInfo t2581_m14915_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t605_0_0_0},
};
extern TypeInfo t2581_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14915_MI = 
{
	".ctor", (methodPointerType)&m8006_gshared, &t2581_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2581_m14915_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2581_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14916_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8007_gshared, &t2581_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2581_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14917_MI = 
{
	"Dispose", (methodPointerType)&m8008_gshared, &t2581_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2581_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14918_MI = 
{
	"VerifyState", (methodPointerType)&m8009_gshared, &t2581_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2581_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14919_MI = 
{
	"MoveNext", (methodPointerType)&m8010_gshared, &t2581_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2581_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14920_MI = 
{
	"get_Current", (methodPointerType)&m8011_gshared, &t2581_TI, &t294_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2581_MIs[] =
{
	&m14915_MI,
	&m14916_MI,
	&m14917_MI,
	&m14918_MI,
	&m14919_MI,
	&m14920_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m14916_MI;
extern MethodInfo m14919_MI;
extern MethodInfo m14917_MI;
extern MethodInfo m14920_MI;
static MethodInfo* t2581_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m14916_MI,
	&m14919_MI,
	&m14917_MI,
	&m14920_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2574_TI;
static TypeInfo* t2581_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t2574_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2574_TI;
static Il2CppInterfaceOffsetPair t2581_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t2574_TI, 7},
};
extern MethodInfo m14918_MI;
extern TypeInfo t294_TI;
extern TypeInfo t2581_TI;
static void* t2581_RGCTXData[3] = 
{
	&m14918_MI,
	&t294_TI,
	&t2581_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2581_0_0_0;
extern Il2CppType t2581_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2581_TI;
extern Il2CppGenericClass t2581_GC;
extern TypeInfo t840_TI;
TypeInfo t2581_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2581_MIs, t2581_PIs, t2581_FIs, NULL, &t101_TI, NULL, &t840_TI, &t2581_TI, t2581_ITIs, t2581_VT, &EmptyCustomAttributesCache, &t2581_TI, &t2581_0_0_0, &t2581_1_0_0, t2581_IOs, &t2581_GC, NULL, NULL, NULL, t2581_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2581)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2578_TI;

#include "t337.h"
extern TypeInfo t2578_TI;
extern TypeInfo t294_TI;
extern TypeInfo t18_TI;
extern TypeInfo t337_TI;
extern TypeInfo t2582_TI;
extern TypeInfo t2576_TI;
extern TypeInfo t330_TI;
extern TypeInfo t641_TI;
extern TypeInfo t17_TI;
extern TypeInfo t16_TI;
extern TypeInfo t592_TI;
extern TypeInfo t27_TI;
extern TypeInfo t19_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2577_TI;
extern TypeInfo t2574_TI;
#include "t337MD.h"
#include "t2583MD.h"
extern MethodInfo m14950_MI;
extern MethodInfo m1510_MI;
extern MethodInfo m22940_MI;
extern MethodInfo m22932_MI;
extern MethodInfo m24_MI;
extern MethodInfo m2947_MI;
extern MethodInfo m7400_MI;
extern MethodInfo m7309_MI;
extern MethodInfo m14982_MI;
extern MethodInfo m22936_MI;
extern MethodInfo m22942_MI;
extern MethodInfo m22937_MI;
extern MethodInfo m22939_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
extern Il2CppType t2582_0_0_1;
FieldInfo t2578_f0_FieldInfo = 
{
	"list", &t2582_0_0_1, &t2578_TI, offsetof(t2578, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2578_FIs[] =
{
	&t2578_f0_FieldInfo,
	NULL
};
extern MethodInfo m14927_MI;
extern MethodInfo m14928_MI;
static PropertyInfo t2578____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2578_TI, "System.Collections.Generic.IList<T>.Item", &m14927_MI, &m14928_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14929_MI;
static PropertyInfo t2578____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2578_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14929_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14939_MI;
static PropertyInfo t2578____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2578_TI, "System.Collections.ICollection.IsSynchronized", &m14939_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14940_MI;
static PropertyInfo t2578____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2578_TI, "System.Collections.ICollection.SyncRoot", &m14940_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14941_MI;
static PropertyInfo t2578____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2578_TI, "System.Collections.IList.IsFixedSize", &m14941_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14942_MI;
static PropertyInfo t2578____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2578_TI, "System.Collections.IList.IsReadOnly", &m14942_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14943_MI;
extern MethodInfo m14944_MI;
static PropertyInfo t2578____System_Collections_IList_Item_PropertyInfo = 
{
	&t2578_TI, "System.Collections.IList.Item", &m14943_MI, &m14944_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14949_MI;
static PropertyInfo t2578____Count_PropertyInfo = 
{
	&t2578_TI, "Count", &m14949_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14950_MI;
static PropertyInfo t2578____Item_PropertyInfo = 
{
	&t2578_TI, "Item", &m14950_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2578_PIs[] =
{
	&t2578____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2578____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2578____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2578____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2578____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2578____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2578____System_Collections_IList_Item_PropertyInfo,
	&t2578____Count_PropertyInfo,
	&t2578____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2582_0_0_0;
static ParameterInfo t2578_m14921_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2582_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14921_MI = 
{
	".ctor", (methodPointerType)&m8012_gshared, &t2578_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2578_m14921_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t2578_m14922_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14922_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m8013_gshared, &t2578_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2578_m14922_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2578_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14923_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m8014_gshared, &t2578_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t2578_m14924_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14924_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m8015_gshared, &t2578_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2578_m14924_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t2578_m14925_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14925_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m8016_gshared, &t2578_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2578_m14925_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2578_m14926_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14926_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m8017_gshared, &t2578_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2578_m14926_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2578_m14927_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14927_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8018_gshared, &t2578_TI, &t294_0_0_0, RuntimeInvoker_t4_t18, t2578_m14927_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t2578_m14928_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14928_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8019_gshared, &t2578_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2578_m14928_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2578_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14929_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8020_gshared, &t2578_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2578_m14930_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14930_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8021_gshared, &t2578_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2578_m14930_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2578_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14931_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8022_gshared, &t2578_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2578_m14932_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14932_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8023_gshared, &t2578_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2578_m14932_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2578_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14933_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8024_gshared, &t2578_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2578_m14934_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14934_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8025_gshared, &t2578_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2578_m14934_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2578_m14935_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14935_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8026_gshared, &t2578_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2578_m14935_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2578_m14936_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14936_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8027_gshared, &t2578_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2578_m14936_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2578_m14937_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14937_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8028_gshared, &t2578_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2578_m14937_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2578_m14938_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14938_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8029_gshared, &t2578_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2578_m14938_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2578_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14939_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8030_gshared, &t2578_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2578_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14940_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8031_gshared, &t2578_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2578_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14941_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8032_gshared, &t2578_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2578_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14942_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8033_gshared, &t2578_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2578_m14943_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14943_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8034_gshared, &t2578_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t2578_m14943_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2578_m14944_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14944_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8035_gshared, &t2578_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2578_m14944_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t2578_m14945_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14945_MI = 
{
	"Contains", (methodPointerType)&m8036_gshared, &t2578_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2578_m14945_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t526_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2578_m14946_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t526_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14946_MI = 
{
	"CopyTo", (methodPointerType)&m8037_gshared, &t2578_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2578_m14946_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2578_TI;
extern Il2CppType t2574_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14947_MI = 
{
	"GetEnumerator", (methodPointerType)&m8038_gshared, &t2578_TI, &t2574_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t2578_m14948_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14948_MI = 
{
	"IndexOf", (methodPointerType)&m8039_gshared, &t2578_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2578_m14948_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2578_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14949_MI = 
{
	"get_Count", (methodPointerType)&m8040_gshared, &t2578_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2578_m14950_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2578_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14950_MI = 
{
	"get_Item", (methodPointerType)&m8041_gshared, &t2578_TI, &t294_0_0_0, RuntimeInvoker_t4_t18, t2578_m14950_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2578_MIs[] =
{
	&m14921_MI,
	&m14922_MI,
	&m14923_MI,
	&m14924_MI,
	&m14925_MI,
	&m14926_MI,
	&m14927_MI,
	&m14928_MI,
	&m14929_MI,
	&m14930_MI,
	&m14931_MI,
	&m14932_MI,
	&m14933_MI,
	&m14934_MI,
	&m14935_MI,
	&m14936_MI,
	&m14937_MI,
	&m14938_MI,
	&m14939_MI,
	&m14940_MI,
	&m14941_MI,
	&m14942_MI,
	&m14943_MI,
	&m14944_MI,
	&m14945_MI,
	&m14946_MI,
	&m14947_MI,
	&m14948_MI,
	&m14949_MI,
	&m14950_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m14931_MI;
extern MethodInfo m14949_MI;
extern MethodInfo m14939_MI;
extern MethodInfo m14940_MI;
extern MethodInfo m14930_MI;
extern MethodInfo m14941_MI;
extern MethodInfo m14942_MI;
extern MethodInfo m14943_MI;
extern MethodInfo m14944_MI;
extern MethodInfo m14932_MI;
extern MethodInfo m14933_MI;
extern MethodInfo m14934_MI;
extern MethodInfo m14935_MI;
extern MethodInfo m14936_MI;
extern MethodInfo m14937_MI;
extern MethodInfo m14938_MI;
extern MethodInfo m14949_MI;
extern MethodInfo m14929_MI;
extern MethodInfo m14922_MI;
extern MethodInfo m14923_MI;
extern MethodInfo m14945_MI;
extern MethodInfo m14946_MI;
extern MethodInfo m14925_MI;
extern MethodInfo m14948_MI;
extern MethodInfo m14924_MI;
extern MethodInfo m14926_MI;
extern MethodInfo m14927_MI;
extern MethodInfo m14928_MI;
extern MethodInfo m14947_MI;
extern MethodInfo m14950_MI;
static MethodInfo* t2578_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m14931_MI,
	&m14949_MI,
	&m14939_MI,
	&m14940_MI,
	&m14930_MI,
	&m14941_MI,
	&m14942_MI,
	&m14943_MI,
	&m14944_MI,
	&m14932_MI,
	&m14933_MI,
	&m14934_MI,
	&m14935_MI,
	&m14936_MI,
	&m14937_MI,
	&m14938_MI,
	&m14949_MI,
	&m14929_MI,
	&m14922_MI,
	&m14923_MI,
	&m14945_MI,
	&m14946_MI,
	&m14925_MI,
	&m14948_MI,
	&m14924_MI,
	&m14926_MI,
	&m14927_MI,
	&m14928_MI,
	&m14947_MI,
	&m14950_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2576_TI;
extern TypeInfo t2582_TI;
extern TypeInfo t2577_TI;
static TypeInfo* t2578_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t2576_TI,
	&t2582_TI,
	&t2577_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2576_TI;
extern TypeInfo t2582_TI;
extern TypeInfo t2577_TI;
static Il2CppInterfaceOffsetPair t2578_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t2576_TI, 20},
	{ &t2582_TI, 27},
	{ &t2577_TI, 32},
};
extern MethodInfo m14950_MI;
extern MethodInfo m14982_MI;
extern TypeInfo t294_TI;
extern MethodInfo m22936_MI;
extern MethodInfo m22942_MI;
extern MethodInfo m22940_MI;
extern MethodInfo m22937_MI;
extern MethodInfo m22939_MI;
extern MethodInfo m22932_MI;
static void* t2578_RGCTXData[9] = 
{
	&m14950_MI,
	&m14982_MI,
	&t294_TI,
	&m22936_MI,
	&m22942_MI,
	&m22940_MI,
	&m22937_MI,
	&m22939_MI,
	&m22932_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2578_0_0_0;
extern Il2CppType t2578_1_0_0;
extern TypeInfo t4_TI;
struct t2578;
extern TypeInfo t2578_TI;
extern Il2CppGenericClass t2578_GC;
extern CustomAttributesCache t842__CustomAttributeCache;
TypeInfo t2578_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2578_MIs, t2578_PIs, t2578_FIs, NULL, &t4_TI, NULL, NULL, &t2578_TI, t2578_ITIs, t2578_VT, &t842__CustomAttributeCache, &t2578_TI, &t2578_0_0_0, &t2578_1_0_0, t2578_IOs, &t2578_GC, NULL, NULL, NULL, t2578_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2578), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2583.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2583_TI;

extern TypeInfo t2583_TI;
extern TypeInfo t2576_TI;
extern TypeInfo t19_TI;
extern TypeInfo t2582_TI;
extern TypeInfo t294_TI;
extern TypeInfo t18_TI;
extern TypeInfo t17_TI;
extern TypeInfo t605_TI;
extern TypeInfo t641_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern TypeInfo t2577_TI;
extern TypeInfo t2574_TI;
extern TypeInfo t526_TI;
extern TypeInfo t307_TI;
extern TypeInfo t337_TI;
extern TypeInfo t1015_TI;
extern Il2CppType t294_0_0_0;
extern MethodInfo m22933_MI;
extern MethodInfo m14985_MI;
extern MethodInfo m14986_MI;
extern MethodInfo m22940_MI;
extern MethodInfo m14983_MI;
extern MethodInfo m14981_MI;
extern MethodInfo m22932_MI;
extern MethodInfo m24_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m7399_MI;
extern MethodInfo m7400_MI;
extern MethodInfo m22939_MI;
extern MethodInfo m14974_MI;
extern MethodInfo m14982_MI;
extern MethodInfo m22936_MI;
extern MethodInfo m22942_MI;
extern MethodInfo m14984_MI;
extern MethodInfo m14972_MI;
extern MethodInfo m14977_MI;
extern MethodInfo m14968_MI;
extern MethodInfo m22935_MI;
extern MethodInfo m22937_MI;
extern MethodInfo m22943_MI;
extern MethodInfo m22944_MI;
extern MethodInfo m22941_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m3814_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m1510_MI;
extern MethodInfo m7398_MI;
extern MethodInfo m7401_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<System.Type>
extern Il2CppType t2582_0_0_1;
FieldInfo t2583_f0_FieldInfo = 
{
	"list", &t2582_0_0_1, &t2583_TI, offsetof(t2583, f0), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t2583_f1_FieldInfo = 
{
	"syncRoot", &t4_0_0_1, &t2583_TI, offsetof(t2583, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2583_FIs[] =
{
	&t2583_f0_FieldInfo,
	&t2583_f1_FieldInfo,
	NULL
};
extern MethodInfo m14952_MI;
static PropertyInfo t2583____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2583_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14952_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14960_MI;
static PropertyInfo t2583____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2583_TI, "System.Collections.ICollection.IsSynchronized", &m14960_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14961_MI;
static PropertyInfo t2583____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2583_TI, "System.Collections.ICollection.SyncRoot", &m14961_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14962_MI;
static PropertyInfo t2583____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2583_TI, "System.Collections.IList.IsFixedSize", &m14962_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14963_MI;
static PropertyInfo t2583____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2583_TI, "System.Collections.IList.IsReadOnly", &m14963_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14964_MI;
extern MethodInfo m14965_MI;
static PropertyInfo t2583____System_Collections_IList_Item_PropertyInfo = 
{
	&t2583_TI, "System.Collections.IList.Item", &m14964_MI, &m14965_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14978_MI;
static PropertyInfo t2583____Count_PropertyInfo = 
{
	&t2583_TI, "Count", &m14978_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14979_MI;
extern MethodInfo m14980_MI;
static PropertyInfo t2583____Item_PropertyInfo = 
{
	&t2583_TI, "Item", &m14979_MI, &m14980_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2583_PIs[] =
{
	&t2583____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2583____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2583____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2583____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2583____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2583____System_Collections_IList_Item_PropertyInfo,
	&t2583____Count_PropertyInfo,
	&t2583____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2583_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14951_MI = 
{
	".ctor", (methodPointerType)&m8042_gshared, &t2583_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2583_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14952_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8043_gshared, &t2583_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2583_m14953_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14953_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8044_gshared, &t2583_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2583_m14953_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2583_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14954_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8045_gshared, &t2583_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2583_m14955_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14955_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8046_gshared, &t2583_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2583_m14955_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2583_m14956_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14956_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8047_gshared, &t2583_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2583_m14956_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2583_m14957_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14957_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8048_gshared, &t2583_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2583_m14957_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2583_m14958_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14958_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8049_gshared, &t2583_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2583_m14958_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2583_m14959_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14959_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8050_gshared, &t2583_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2583_m14959_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2583_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14960_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8051_gshared, &t2583_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2583_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14961_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8052_gshared, &t2583_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2583_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14962_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8053_gshared, &t2583_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2583_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m14963_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8054_gshared, &t2583_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2583_m14964_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14964_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8055_gshared, &t2583_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t2583_m14964_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2583_m14965_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14965_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8056_gshared, &t2583_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2583_m14965_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t2583_m14966_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14966_MI = 
{
	"Add", (methodPointerType)&m8057_gshared, &t2583_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2583_m14966_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2583_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14967_MI = 
{
	"Clear", (methodPointerType)&m8058_gshared, &t2583_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2583_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14968_MI = 
{
	"ClearItems", (methodPointerType)&m8059_gshared, &t2583_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t2583_m14969_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14969_MI = 
{
	"Contains", (methodPointerType)&m8060_gshared, &t2583_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2583_m14969_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t526_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2583_m14970_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t526_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14970_MI = 
{
	"CopyTo", (methodPointerType)&m8061_gshared, &t2583_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2583_m14970_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2583_TI;
extern Il2CppType t2574_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14971_MI = 
{
	"GetEnumerator", (methodPointerType)&m8062_gshared, &t2583_TI, &t2574_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t2583_m14972_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14972_MI = 
{
	"IndexOf", (methodPointerType)&m8063_gshared, &t2583_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2583_m14972_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t2583_m14973_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14973_MI = 
{
	"Insert", (methodPointerType)&m8064_gshared, &t2583_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2583_m14973_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t2583_m14974_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14974_MI = 
{
	"InsertItem", (methodPointerType)&m8065_gshared, &t2583_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2583_m14974_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t2583_m14975_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14975_MI = 
{
	"Remove", (methodPointerType)&m8066_gshared, &t2583_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2583_m14975_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2583_m14976_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14976_MI = 
{
	"RemoveAt", (methodPointerType)&m8067_gshared, &t2583_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2583_m14976_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2583_m14977_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14977_MI = 
{
	"RemoveItem", (methodPointerType)&m8068_gshared, &t2583_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2583_m14977_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2583_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14978_MI = 
{
	"get_Count", (methodPointerType)&m8069_gshared, &t2583_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2583_m14979_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m14979_MI = 
{
	"get_Item", (methodPointerType)&m8070_gshared, &t2583_TI, &t294_0_0_0, RuntimeInvoker_t4_t18, t2583_m14979_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t2583_m14980_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14980_MI = 
{
	"set_Item", (methodPointerType)&m8071_gshared, &t2583_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2583_m14980_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t2583_m14981_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14981_MI = 
{
	"SetItem", (methodPointerType)&m8072_gshared, &t2583_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2583_m14981_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2583_m14982_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14982_MI = 
{
	"IsValidItem", (methodPointerType)&m8073_gshared, &t2583_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2583_m14982_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2583_m14983_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14983_MI = 
{
	"ConvertItem", (methodPointerType)&m8074_gshared, &t2583_TI, &t294_0_0_0, RuntimeInvoker_t4_t4, t2583_m14983_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2582_0_0_0;
static ParameterInfo t2583_m14984_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2582_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14984_MI = 
{
	"CheckWritable", (methodPointerType)&m8075_gshared, &t2583_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2583_m14984_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2582_0_0_0;
static ParameterInfo t2583_m14985_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2582_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14985_MI = 
{
	"IsSynchronized", (methodPointerType)&m8076_gshared, &t2583_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2583_m14985_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2582_0_0_0;
static ParameterInfo t2583_m14986_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2582_0_0_0},
};
extern TypeInfo t2583_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14986_MI = 
{
	"IsFixedSize", (methodPointerType)&m8077_gshared, &t2583_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2583_m14986_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2583_MIs[] =
{
	&m14951_MI,
	&m14952_MI,
	&m14953_MI,
	&m14954_MI,
	&m14955_MI,
	&m14956_MI,
	&m14957_MI,
	&m14958_MI,
	&m14959_MI,
	&m14960_MI,
	&m14961_MI,
	&m14962_MI,
	&m14963_MI,
	&m14964_MI,
	&m14965_MI,
	&m14966_MI,
	&m14967_MI,
	&m14968_MI,
	&m14969_MI,
	&m14970_MI,
	&m14971_MI,
	&m14972_MI,
	&m14973_MI,
	&m14974_MI,
	&m14975_MI,
	&m14976_MI,
	&m14977_MI,
	&m14978_MI,
	&m14979_MI,
	&m14980_MI,
	&m14981_MI,
	&m14982_MI,
	&m14983_MI,
	&m14984_MI,
	&m14985_MI,
	&m14986_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m14954_MI;
extern MethodInfo m14978_MI;
extern MethodInfo m14960_MI;
extern MethodInfo m14961_MI;
extern MethodInfo m14953_MI;
extern MethodInfo m14962_MI;
extern MethodInfo m14963_MI;
extern MethodInfo m14964_MI;
extern MethodInfo m14965_MI;
extern MethodInfo m14955_MI;
extern MethodInfo m14967_MI;
extern MethodInfo m14956_MI;
extern MethodInfo m14957_MI;
extern MethodInfo m14958_MI;
extern MethodInfo m14959_MI;
extern MethodInfo m14976_MI;
extern MethodInfo m14978_MI;
extern MethodInfo m14952_MI;
extern MethodInfo m14966_MI;
extern MethodInfo m14967_MI;
extern MethodInfo m14969_MI;
extern MethodInfo m14970_MI;
extern MethodInfo m14975_MI;
extern MethodInfo m14972_MI;
extern MethodInfo m14973_MI;
extern MethodInfo m14976_MI;
extern MethodInfo m14979_MI;
extern MethodInfo m14980_MI;
extern MethodInfo m14971_MI;
extern MethodInfo m14968_MI;
extern MethodInfo m14974_MI;
extern MethodInfo m14977_MI;
extern MethodInfo m14981_MI;
static MethodInfo* t2583_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m14954_MI,
	&m14978_MI,
	&m14960_MI,
	&m14961_MI,
	&m14953_MI,
	&m14962_MI,
	&m14963_MI,
	&m14964_MI,
	&m14965_MI,
	&m14955_MI,
	&m14967_MI,
	&m14956_MI,
	&m14957_MI,
	&m14958_MI,
	&m14959_MI,
	&m14976_MI,
	&m14978_MI,
	&m14952_MI,
	&m14966_MI,
	&m14967_MI,
	&m14969_MI,
	&m14970_MI,
	&m14975_MI,
	&m14972_MI,
	&m14973_MI,
	&m14976_MI,
	&m14979_MI,
	&m14980_MI,
	&m14971_MI,
	&m14968_MI,
	&m14974_MI,
	&m14977_MI,
	&m14981_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2576_TI;
extern TypeInfo t2582_TI;
extern TypeInfo t2577_TI;
static TypeInfo* t2583_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t2576_TI,
	&t2582_TI,
	&t2577_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2576_TI;
extern TypeInfo t2582_TI;
extern TypeInfo t2577_TI;
static Il2CppInterfaceOffsetPair t2583_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t2576_TI, 20},
	{ &t2582_TI, 27},
	{ &t2577_TI, 32},
};
extern TypeInfo t605_TI;
extern MethodInfo m2909_MI;
extern MethodInfo m22933_MI;
extern MethodInfo m22939_MI;
extern MethodInfo m22932_MI;
extern MethodInfo m14983_MI;
extern MethodInfo m14974_MI;
extern MethodInfo m14982_MI;
extern TypeInfo t294_TI;
extern MethodInfo m22936_MI;
extern MethodInfo m22942_MI;
extern MethodInfo m14984_MI;
extern MethodInfo m14972_MI;
extern MethodInfo m14977_MI;
extern MethodInfo m14985_MI;
extern MethodInfo m14986_MI;
extern MethodInfo m22940_MI;
extern MethodInfo m14981_MI;
extern MethodInfo m14968_MI;
extern MethodInfo m22935_MI;
extern MethodInfo m22937_MI;
extern MethodInfo m22943_MI;
extern MethodInfo m22944_MI;
extern MethodInfo m22941_MI;
extern Il2CppType t294_0_0_0;
static void* t2583_RGCTXData[25] = 
{
	&t605_TI,
	&m2909_MI,
	&m22933_MI,
	&m22939_MI,
	&m22932_MI,
	&m14983_MI,
	&m14974_MI,
	&m14982_MI,
	&t294_TI,
	&m22936_MI,
	&m22942_MI,
	&m14984_MI,
	&m14972_MI,
	&m14977_MI,
	&m14985_MI,
	&m14986_MI,
	&m22940_MI,
	&m14981_MI,
	&m14968_MI,
	&m22935_MI,
	&m22937_MI,
	&m22943_MI,
	&m22944_MI,
	&m22941_MI,
	(void*)&t294_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2583_0_0_0;
extern Il2CppType t2583_1_0_0;
extern TypeInfo t4_TI;
struct t2583;
extern TypeInfo t2583_TI;
extern Il2CppGenericClass t2583_GC;
extern CustomAttributesCache t841__CustomAttributeCache;
TypeInfo t2583_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2583_MIs, t2583_PIs, t2583_FIs, NULL, &t4_TI, NULL, NULL, &t2583_TI, t2583_ITIs, t2583_VT, &t841__CustomAttributeCache, &t2583_TI, &t2583_0_0_0, &t2583_1_0_0, t2583_IOs, &t2583_GC, NULL, NULL, NULL, t2583_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2583), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2584_TI;
#include "t2584MD.h"

#include "t837.h"
#include "t2585.h"
extern TypeInfo t2584_TI;
extern TypeInfo t5201_TI;
extern TypeInfo t294_TI;
extern TypeInfo t19_TI;
extern TypeInfo t837_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2585_TI;
extern TypeInfo t18_TI;
#include "t1223MD.h"
#include "t2585MD.h"
extern Il2CppType t5201_0_0_0;
extern Il2CppType t294_0_0_0;
extern Il2CppType t837_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m14992_MI;
extern MethodInfo m26487_MI;
extern MethodInfo m20153_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Type>
extern Il2CppType t2584_0_0_49;
FieldInfo t2584_f0_FieldInfo = 
{
	"_default", &t2584_0_0_49, &t2584_TI, offsetof(t2584_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2584_FIs[] =
{
	&t2584_f0_FieldInfo,
	NULL
};
extern MethodInfo m14991_MI;
static PropertyInfo t2584____Default_PropertyInfo = 
{
	&t2584_TI, "Default", &m14991_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2584_PIs[] =
{
	&t2584____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2584_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14987_MI = 
{
	".ctor", (methodPointerType)&m8078_gshared, &t2584_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2584_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14988_MI = 
{
	".cctor", (methodPointerType)&m8079_gshared, &t2584_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2584_m14989_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2584_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14989_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8080_gshared, &t2584_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2584_m14989_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2584_m14990_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2584_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14990_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8081_gshared, &t2584_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2584_m14990_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t2584_m26487_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2584_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26487_MI = 
{
	"GetHashCode", NULL, &t2584_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2584_m26487_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t2584_m20153_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2584_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m20153_MI = 
{
	"Equals", NULL, &t2584_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2584_m20153_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2584_TI;
extern Il2CppType t2584_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14991_MI = 
{
	"get_Default", (methodPointerType)&m8082_gshared, &t2584_TI, &t2584_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2584_MIs[] =
{
	&m14987_MI,
	&m14988_MI,
	&m14989_MI,
	&m14990_MI,
	&m26487_MI,
	&m20153_MI,
	&m14991_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m20153_MI;
extern MethodInfo m26487_MI;
extern MethodInfo m14990_MI;
extern MethodInfo m14989_MI;
static MethodInfo* t2584_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m20153_MI,
	&m26487_MI,
	&m14990_MI,
	&m14989_MI,
	NULL,
	NULL,
};
extern TypeInfo t5202_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2584_ITIs[] = 
{
	&t5202_TI,
	&t860_TI,
};
extern TypeInfo t5202_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2584_IOs[] = 
{
	{ &t5202_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppType t5201_0_0_0;
extern Il2CppType t294_0_0_0;
extern TypeInfo t2584_TI;
extern TypeInfo t2584_TI;
extern TypeInfo t2585_TI;
extern MethodInfo m14992_MI;
extern TypeInfo t294_TI;
extern MethodInfo m26487_MI;
extern MethodInfo m20153_MI;
static void* t2584_RGCTXData[9] = 
{
	(void*)&t5201_0_0_0,
	(void*)&t294_0_0_0,
	&t2584_TI,
	&t2584_TI,
	&t2585_TI,
	&m14992_MI,
	&t294_TI,
	&m26487_MI,
	&m20153_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2584_0_0_0;
extern Il2CppType t2584_1_0_0;
extern TypeInfo t4_TI;
struct t2584;
extern TypeInfo t2584_TI;
extern Il2CppGenericClass t2584_GC;
TypeInfo t2584_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2584_MIs, t2584_PIs, t2584_FIs, NULL, &t4_TI, NULL, NULL, &t2584_TI, t2584_ITIs, t2584_VT, &EmptyCustomAttributesCache, &t2584_TI, &t2584_0_0_0, &t2584_1_0_0, t2584_IOs, &t2584_GC, NULL, NULL, NULL, t2584_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2584), 0, -1, sizeof(t2584_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5202_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Type>
extern Il2CppType t294_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t5202_m26488_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t5202_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26488_MI = 
{
	"Equals", NULL, &t5202_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t5202_m26488_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t5202_m26489_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t5202_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26489_MI = 
{
	"GetHashCode", NULL, &t5202_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t5202_m26489_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5202_MIs[] =
{
	&m26488_MI,
	&m26489_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5202_0_0_0;
extern Il2CppType t5202_1_0_0;
struct t5202;
extern TypeInfo t5202_TI;
extern Il2CppGenericClass t5202_GC;
TypeInfo t5202_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5202_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5202_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5202_TI, &t5202_0_0_0, &t5202_1_0_0, NULL, &t5202_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5201_TI;



// Metadata Definition System.IEquatable`1<System.Type>
extern Il2CppType t294_0_0_0;
static ParameterInfo t5201_m26490_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t5201_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26490_MI = 
{
	"Equals", NULL, &t5201_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t5201_m26490_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5201_MIs[] =
{
	&m26490_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5201_0_0_0;
extern Il2CppType t5201_1_0_0;
struct t5201;
extern TypeInfo t5201_TI;
extern Il2CppGenericClass t5201_GC;
TypeInfo t5201_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5201_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5201_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5201_TI, &t5201_0_0_0, &t5201_1_0_0, NULL, &t5201_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2585_TI;

extern TypeInfo t294_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
extern TypeInfo t19_TI;
extern MethodInfo m14987_MI;
extern MethodInfo m30_MI;
extern MethodInfo m28_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Type>
extern TypeInfo t2585_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14992_MI = 
{
	".ctor", (methodPointerType)&m8113_gshared, &t2585_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t2585_m14993_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2585_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14993_MI = 
{
	"GetHashCode", (methodPointerType)&m8114_gshared, &t2585_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2585_m14993_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t2585_m14994_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2585_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14994_MI = 
{
	"Equals", (methodPointerType)&m8115_gshared, &t2585_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2585_m14994_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2585_MIs[] =
{
	&m14992_MI,
	&m14993_MI,
	&m14994_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m14994_MI;
extern MethodInfo m14993_MI;
extern MethodInfo m14990_MI;
extern MethodInfo m14989_MI;
extern MethodInfo m14993_MI;
extern MethodInfo m14994_MI;
static MethodInfo* t2585_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m14994_MI,
	&m14993_MI,
	&m14990_MI,
	&m14989_MI,
	&m14993_MI,
	&m14994_MI,
};
extern TypeInfo t5202_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2585_IOs[] = 
{
	{ &t5202_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppType t5201_0_0_0;
extern Il2CppType t294_0_0_0;
extern TypeInfo t2584_TI;
extern TypeInfo t2584_TI;
extern TypeInfo t2585_TI;
extern MethodInfo m14992_MI;
extern TypeInfo t294_TI;
extern MethodInfo m26487_MI;
extern MethodInfo m20153_MI;
extern MethodInfo m14987_MI;
extern TypeInfo t294_TI;
static void* t2585_RGCTXData[11] = 
{
	(void*)&t5201_0_0_0,
	(void*)&t294_0_0_0,
	&t2584_TI,
	&t2584_TI,
	&t2585_TI,
	&m14992_MI,
	&t294_TI,
	&m26487_MI,
	&m20153_MI,
	&m14987_MI,
	&t294_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2585_0_0_0;
extern Il2CppType t2585_1_0_0;
extern TypeInfo t2584_TI;
struct t2585;
extern TypeInfo t2585_TI;
extern Il2CppGenericClass t2585_GC;
extern TypeInfo t836_TI;
TypeInfo t2585_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2585_MIs, NULL, NULL, NULL, &t2584_TI, NULL, &t836_TI, &t2585_TI, NULL, t2585_VT, &EmptyCustomAttributesCache, &t2585_TI, &t2585_0_0_0, &t2585_1_0_0, t2585_IOs, &t2585_GC, NULL, NULL, NULL, t2585_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2585), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2579_TI;



// Metadata Definition System.Predicate`1<System.Type>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2579_m14995_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2579_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m14995_MI = 
{
	".ctor", (methodPointerType)&m8116_gshared, &t2579_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2579_m14995_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t2579_m14996_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2579_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14996_MI = 
{
	"Invoke", (methodPointerType)&m8117_gshared, &t2579_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2579_m14996_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2579_m14997_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2579_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14997_MI = 
{
	"BeginInvoke", (methodPointerType)&m8118_gshared, &t2579_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2579_m14997_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2579_m14998_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2579_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14998_MI = 
{
	"EndInvoke", (methodPointerType)&m8119_gshared, &t2579_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2579_m14998_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2579_MIs[] =
{
	&m14995_MI,
	&m14996_MI,
	&m14997_MI,
	&m14998_MI,
	NULL
};
extern MethodInfo m1695_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1696_MI;
extern MethodInfo m31_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m1700_MI;
extern MethodInfo m1701_MI;
extern MethodInfo m14996_MI;
extern MethodInfo m14997_MI;
extern MethodInfo m14998_MI;
static MethodInfo* t2579_VT[] =
{
	&m1695_MI,
	&m29_MI,
	&m1696_MI,
	&m31_MI,
	&m1697_MI,
	&m1698_MI,
	&m1697_MI,
	&m1699_MI,
	&m1700_MI,
	&m1701_MI,
	&m14996_MI,
	&m14997_MI,
	&m14998_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2579_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2579_0_0_0;
extern Il2CppType t2579_1_0_0;
extern TypeInfo t193_TI;
struct t2579;
extern TypeInfo t2579_TI;
extern Il2CppGenericClass t2579_GC;
TypeInfo t2579_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2579_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2579_TI, NULL, t2579_VT, &EmptyCustomAttributesCache, &t2579_TI, &t2579_0_0_0, &t2579_1_0_0, t2579_IOs, &t2579_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2579), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2586_TI;

#include "t825.h"
#include "t2587.h"
extern TypeInfo t2586_TI;
extern TypeInfo t3529_TI;
extern TypeInfo t294_TI;
extern TypeInfo t19_TI;
extern TypeInfo t825_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2587_TI;
extern TypeInfo t18_TI;
extern TypeInfo t307_TI;
#include "t2587MD.h"
extern Il2CppType t3529_0_0_0;
extern Il2CppType t294_0_0_0;
extern Il2CppType t825_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m15003_MI;
extern MethodInfo m26491_MI;
extern MethodInfo m6463_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<System.Type>
extern Il2CppType t2586_0_0_49;
FieldInfo t2586_f0_FieldInfo = 
{
	"_default", &t2586_0_0_49, &t2586_TI, offsetof(t2586_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2586_FIs[] =
{
	&t2586_f0_FieldInfo,
	NULL
};
extern MethodInfo m15002_MI;
static PropertyInfo t2586____Default_PropertyInfo = 
{
	&t2586_TI, "Default", &m15002_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2586_PIs[] =
{
	&t2586____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2586_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14999_MI = 
{
	".ctor", (methodPointerType)&m8120_gshared, &t2586_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2586_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15000_MI = 
{
	".cctor", (methodPointerType)&m8121_gshared, &t2586_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2586_m15001_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2586_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15001_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8122_gshared, &t2586_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t2586_m15001_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t2586_m26491_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2586_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26491_MI = 
{
	"Compare", NULL, &t2586_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t2586_m26491_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2586_TI;
extern Il2CppType t2586_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15002_MI = 
{
	"get_Default", (methodPointerType)&m8123_gshared, &t2586_TI, &t2586_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2586_MIs[] =
{
	&m14999_MI,
	&m15000_MI,
	&m15001_MI,
	&m26491_MI,
	&m15002_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m26491_MI;
extern MethodInfo m15001_MI;
static MethodInfo* t2586_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m26491_MI,
	&m15001_MI,
	NULL,
};
extern TypeInfo t3528_TI;
extern TypeInfo t717_TI;
static TypeInfo* t2586_ITIs[] = 
{
	&t3528_TI,
	&t717_TI,
};
extern TypeInfo t3528_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t2586_IOs[] = 
{
	{ &t3528_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppType t3529_0_0_0;
extern Il2CppType t294_0_0_0;
extern TypeInfo t2586_TI;
extern TypeInfo t2586_TI;
extern TypeInfo t2587_TI;
extern MethodInfo m15003_MI;
extern TypeInfo t294_TI;
extern MethodInfo m26491_MI;
static void* t2586_RGCTXData[8] = 
{
	(void*)&t3529_0_0_0,
	(void*)&t294_0_0_0,
	&t2586_TI,
	&t2586_TI,
	&t2587_TI,
	&m15003_MI,
	&t294_TI,
	&m26491_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2586_0_0_0;
extern Il2CppType t2586_1_0_0;
extern TypeInfo t4_TI;
struct t2586;
extern TypeInfo t2586_TI;
extern Il2CppGenericClass t2586_GC;
TypeInfo t2586_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2586_MIs, t2586_PIs, t2586_FIs, NULL, &t4_TI, NULL, NULL, &t2586_TI, t2586_ITIs, t2586_VT, &EmptyCustomAttributesCache, &t2586_TI, &t2586_0_0_0, &t2586_1_0_0, t2586_IOs, &t2586_GC, NULL, NULL, NULL, t2586_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2586), 0, -1, sizeof(t2586_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3528_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.Type>
extern Il2CppType t294_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t3528_m20161_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t3528_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m20161_MI = 
{
	"Compare", NULL, &t3528_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t3528_m20161_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3528_MIs[] =
{
	&m20161_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3528_0_0_0;
extern Il2CppType t3528_1_0_0;
struct t3528;
extern TypeInfo t3528_TI;
extern Il2CppGenericClass t3528_GC;
TypeInfo t3528_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3528_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3528_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3528_TI, &t3528_0_0_0, &t3528_1_0_0, NULL, &t3528_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3529_TI;



// Metadata Definition System.IComparable`1<System.Type>
extern Il2CppType t294_0_0_0;
static ParameterInfo t3529_m20162_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t3529_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m20162_MI = 
{
	"CompareTo", NULL, &t3529_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t3529_m20162_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3529_MIs[] =
{
	&m20162_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3529_0_0_0;
extern Il2CppType t3529_1_0_0;
struct t3529;
extern TypeInfo t3529_TI;
extern Il2CppGenericClass t3529_GC;
TypeInfo t3529_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3529_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3529_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3529_TI, &t3529_0_0_0, &t3529_1_0_0, NULL, &t3529_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2587_TI;

extern TypeInfo t294_TI;
extern TypeInfo t3529_TI;
extern TypeInfo t18_TI;
extern TypeInfo t289_TI;
extern TypeInfo t4_TI;
extern TypeInfo t307_TI;
extern MethodInfo m14999_MI;
extern MethodInfo m20162_MI;
extern MethodInfo m7306_MI;
extern MethodInfo m1936_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.Type>
extern TypeInfo t2587_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15003_MI = 
{
	".ctor", (methodPointerType)&m8124_gshared, &t2587_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t2587_m15004_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2587_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15004_MI = 
{
	"Compare", (methodPointerType)&m8125_gshared, &t2587_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t2587_m15004_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2587_MIs[] =
{
	&m15003_MI,
	&m15004_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m15004_MI;
extern MethodInfo m15001_MI;
extern MethodInfo m15004_MI;
static MethodInfo* t2587_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m15004_MI,
	&m15001_MI,
	&m15004_MI,
};
extern TypeInfo t3528_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t2587_IOs[] = 
{
	{ &t3528_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppType t3529_0_0_0;
extern Il2CppType t294_0_0_0;
extern TypeInfo t2586_TI;
extern TypeInfo t2586_TI;
extern TypeInfo t2587_TI;
extern MethodInfo m15003_MI;
extern TypeInfo t294_TI;
extern MethodInfo m26491_MI;
extern MethodInfo m14999_MI;
extern TypeInfo t294_TI;
extern TypeInfo t3529_TI;
extern MethodInfo m20162_MI;
static void* t2587_RGCTXData[12] = 
{
	(void*)&t3529_0_0_0,
	(void*)&t294_0_0_0,
	&t2586_TI,
	&t2586_TI,
	&t2587_TI,
	&m15003_MI,
	&t294_TI,
	&m26491_MI,
	&m14999_MI,
	&t294_TI,
	&t3529_TI,
	&m20162_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2587_0_0_0;
extern Il2CppType t2587_1_0_0;
extern TypeInfo t2586_TI;
struct t2587;
extern TypeInfo t2587_TI;
extern Il2CppGenericClass t2587_GC;
extern TypeInfo t824_TI;
TypeInfo t2587_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2587_MIs, NULL, NULL, NULL, &t2586_TI, NULL, &t824_TI, &t2587_TI, NULL, t2587_VT, &EmptyCustomAttributesCache, &t2587_TI, &t2587_0_0_0, &t2587_1_0_0, t2587_IOs, &t2587_GC, NULL, NULL, NULL, t2587_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2587), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2580_TI;
#include "t2580MD.h"



// Metadata Definition System.Comparison`1<System.Type>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2580_m15005_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2580_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m15005_MI = 
{
	".ctor", (methodPointerType)&m8191_gshared, &t2580_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2580_m15005_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t2580_m15006_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2580_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15006_MI = 
{
	"Invoke", (methodPointerType)&m8192_gshared, &t2580_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t2580_m15006_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
extern Il2CppType t294_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2580_m15007_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2580_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15007_MI = 
{
	"BeginInvoke", (methodPointerType)&m8193_gshared, &t2580_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4_t4, t2580_m15007_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2580_m15008_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2580_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15008_MI = 
{
	"EndInvoke", (methodPointerType)&m8194_gshared, &t2580_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2580_m15008_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2580_MIs[] =
{
	&m15005_MI,
	&m15006_MI,
	&m15007_MI,
	&m15008_MI,
	NULL
};
extern MethodInfo m1695_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1696_MI;
extern MethodInfo m31_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m1700_MI;
extern MethodInfo m1701_MI;
extern MethodInfo m15006_MI;
extern MethodInfo m15007_MI;
extern MethodInfo m15008_MI;
static MethodInfo* t2580_VT[] =
{
	&m1695_MI,
	&m29_MI,
	&m1696_MI,
	&m31_MI,
	&m1697_MI,
	&m1698_MI,
	&m1697_MI,
	&m1699_MI,
	&m1700_MI,
	&m1701_MI,
	&m15006_MI,
	&m15007_MI,
	&m15008_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2580_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2580_0_0_0;
extern Il2CppType t2580_1_0_0;
extern TypeInfo t193_TI;
struct t2580;
extern TypeInfo t2580_TI;
extern Il2CppGenericClass t2580_GC;
TypeInfo t2580_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2580_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2580_TI, NULL, t2580_VT, &EmptyCustomAttributesCache, &t2580_TI, &t2580_0_0_0, &t2580_1_0_0, t2580_IOs, &t2580_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2580), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3530_TI;

#include "t299.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.AddComponentMenu>
extern MethodInfo m26492_MI;
static PropertyInfo t3530____Current_PropertyInfo = 
{
	&t3530_TI, "Current", &m26492_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3530_PIs[] =
{
	&t3530____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3530_TI;
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26492_MI = 
{
	"get_Current", NULL, &t3530_TI, &t299_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3530_MIs[] =
{
	&m26492_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3530_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3530_0_0_0;
extern Il2CppType t3530_1_0_0;
struct t3530;
extern TypeInfo t3530_TI;
extern Il2CppGenericClass t3530_GC;
TypeInfo t3530_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3530_MIs, t3530_PIs, NULL, NULL, NULL, NULL, NULL, &t3530_TI, t3530_ITIs, NULL, &EmptyCustomAttributesCache, &t3530_TI, &t3530_0_0_0, &t3530_1_0_0, NULL, &t3530_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2588.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2588_TI;
#include "t2588MD.h"

extern TypeInfo t2588_TI;
extern TypeInfo t299_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m15013_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m20167_MI;
struct t16;
#define m20167(__this, p0, method) (t299 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m20167_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.AddComponentMenu>
extern Il2CppType t16_0_0_1;
FieldInfo t2588_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2588_TI, offsetof(t2588, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2588_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2588_TI, offsetof(t2588, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2588_FIs[] =
{
	&t2588_f0_FieldInfo,
	&t2588_f1_FieldInfo,
	NULL
};
extern MethodInfo m15010_MI;
static PropertyInfo t2588____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2588_TI, "System.Collections.IEnumerator.Current", &m15010_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15013_MI;
static PropertyInfo t2588____Current_PropertyInfo = 
{
	&t2588_TI, "Current", &m15013_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2588_PIs[] =
{
	&t2588____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2588____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2588_m15009_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2588_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15009_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2588_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2588_m15009_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2588_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15010_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2588_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2588_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15011_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2588_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2588_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m15012_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2588_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2588_TI;
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15013_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2588_TI, &t299_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2588_MIs[] =
{
	&m15009_MI,
	&m15010_MI,
	&m15011_MI,
	&m15012_MI,
	&m15013_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m15010_MI;
extern MethodInfo m15012_MI;
extern MethodInfo m15011_MI;
extern MethodInfo m15013_MI;
static MethodInfo* t2588_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m15010_MI,
	&m15012_MI,
	&m15011_MI,
	&m15013_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3530_TI;
static TypeInfo* t2588_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3530_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3530_TI;
static Il2CppInterfaceOffsetPair t2588_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3530_TI, 7},
};
extern MethodInfo m15013_MI;
extern TypeInfo t299_TI;
extern MethodInfo m20167_MI;
static void* t2588_RGCTXData[3] = 
{
	&m15013_MI,
	&t299_TI,
	&m20167_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2588_0_0_0;
extern Il2CppType t2588_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2588_TI;
extern Il2CppGenericClass t2588_GC;
extern TypeInfo t16_TI;
TypeInfo t2588_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2588_MIs, t2588_PIs, t2588_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2588_TI, t2588_ITIs, t2588_VT, &EmptyCustomAttributesCache, &t2588_TI, &t2588_0_0_0, &t2588_1_0_0, t2588_IOs, &t2588_GC, NULL, NULL, NULL, t2588_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2588)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4422_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.AddComponentMenu>
extern MethodInfo m26493_MI;
static PropertyInfo t4422____Count_PropertyInfo = 
{
	&t4422_TI, "Count", &m26493_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26494_MI;
static PropertyInfo t4422____IsReadOnly_PropertyInfo = 
{
	&t4422_TI, "IsReadOnly", &m26494_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4422_PIs[] =
{
	&t4422____Count_PropertyInfo,
	&t4422____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4422_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26493_MI = 
{
	"get_Count", NULL, &t4422_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4422_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m26494_MI = 
{
	"get_IsReadOnly", NULL, &t4422_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t4422_m26495_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern TypeInfo t4422_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26495_MI = 
{
	"Add", NULL, &t4422_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4422_m26495_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4422_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26496_MI = 
{
	"Clear", NULL, &t4422_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t4422_m26497_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern TypeInfo t4422_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26497_MI = 
{
	"Contains", NULL, &t4422_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4422_m26497_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3157_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4422_m26498_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3157_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4422_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26498_MI = 
{
	"CopyTo", NULL, &t4422_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4422_m26498_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t4422_m26499_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern TypeInfo t4422_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26499_MI = 
{
	"Remove", NULL, &t4422_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4422_m26499_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4422_MIs[] =
{
	&m26493_MI,
	&m26494_MI,
	&m26495_MI,
	&m26496_MI,
	&m26497_MI,
	&m26498_MI,
	&m26499_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4424_TI;
static TypeInfo* t4422_ITIs[] = 
{
	&t592_TI,
	&t4424_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4422_0_0_0;
extern Il2CppType t4422_1_0_0;
struct t4422;
extern TypeInfo t4422_TI;
extern Il2CppGenericClass t4422_GC;
TypeInfo t4422_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4422_MIs, t4422_PIs, NULL, NULL, NULL, NULL, NULL, &t4422_TI, t4422_ITIs, NULL, &EmptyCustomAttributesCache, &t4422_TI, &t4422_0_0_0, &t4422_1_0_0, NULL, &t4422_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4424_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.AddComponentMenu>
extern TypeInfo t4424_TI;
extern Il2CppType t3530_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26500_MI = 
{
	"GetEnumerator", NULL, &t4424_TI, &t3530_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4424_MIs[] =
{
	&m26500_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4424_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4424_0_0_0;
extern Il2CppType t4424_1_0_0;
struct t4424;
extern TypeInfo t4424_TI;
extern Il2CppGenericClass t4424_GC;
TypeInfo t4424_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4424_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4424_TI, t4424_ITIs, NULL, &EmptyCustomAttributesCache, &t4424_TI, &t4424_0_0_0, &t4424_1_0_0, NULL, &t4424_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4423_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.AddComponentMenu>
extern MethodInfo m26501_MI;
extern MethodInfo m26502_MI;
static PropertyInfo t4423____Item_PropertyInfo = 
{
	&t4423_TI, "Item", &m26501_MI, &m26502_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4423_PIs[] =
{
	&t4423____Item_PropertyInfo,
	NULL
};
extern Il2CppType t299_0_0_0;
static ParameterInfo t4423_m26503_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern TypeInfo t4423_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26503_MI = 
{
	"IndexOf", NULL, &t4423_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4423_m26503_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t299_0_0_0;
static ParameterInfo t4423_m26504_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern TypeInfo t4423_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26504_MI = 
{
	"Insert", NULL, &t4423_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4423_m26504_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4423_m26505_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4423_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26505_MI = 
{
	"RemoveAt", NULL, &t4423_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4423_m26505_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4423_m26501_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4423_TI;
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26501_MI = 
{
	"get_Item", NULL, &t4423_TI, &t299_0_0_0, RuntimeInvoker_t4_t18, t4423_m26501_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t299_0_0_0;
static ParameterInfo t4423_m26502_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern TypeInfo t4423_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26502_MI = 
{
	"set_Item", NULL, &t4423_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4423_m26502_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4423_MIs[] =
{
	&m26503_MI,
	&m26504_MI,
	&m26505_MI,
	&m26501_MI,
	&m26502_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4422_TI;
extern TypeInfo t4424_TI;
static TypeInfo* t4423_ITIs[] = 
{
	&t592_TI,
	&t4422_TI,
	&t4424_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4423_0_0_0;
extern Il2CppType t4423_1_0_0;
struct t4423;
extern TypeInfo t4423_TI;
extern Il2CppGenericClass t4423_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4423_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4423_MIs, t4423_PIs, NULL, NULL, NULL, NULL, NULL, &t4423_TI, t4423_ITIs, NULL, &t1401__CustomAttributeCache, &t4423_TI, &t4423_0_0_0, &t4423_1_0_0, NULL, &t4423_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3531_TI;

#include "t609.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.ParameterModifier>
extern MethodInfo m26506_MI;
static PropertyInfo t3531____Current_PropertyInfo = 
{
	&t3531_TI, "Current", &m26506_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3531_PIs[] =
{
	&t3531____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3531_TI;
extern Il2CppType t609_0_0_0;
extern void* RuntimeInvoker_t609 (MethodInfo* method, void* obj, void** args);
MethodInfo m26506_MI = 
{
	"get_Current", NULL, &t3531_TI, &t609_0_0_0, RuntimeInvoker_t609, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3531_MIs[] =
{
	&m26506_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3531_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3531_0_0_0;
extern Il2CppType t3531_1_0_0;
struct t3531;
extern TypeInfo t3531_TI;
extern Il2CppGenericClass t3531_GC;
TypeInfo t3531_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3531_MIs, t3531_PIs, NULL, NULL, NULL, NULL, NULL, &t3531_TI, t3531_ITIs, NULL, &EmptyCustomAttributesCache, &t3531_TI, &t3531_0_0_0, &t3531_1_0_0, NULL, &t3531_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2589.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2589_TI;
#include "t2589MD.h"

extern TypeInfo t2589_TI;
extern TypeInfo t609_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m15018_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m20178_MI;
struct t16;
 t609  m20178 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20178_MI;


extern MethodInfo m15014_MI;
 void m15014 (t2589 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15015_MI;
 t4 * m15015 (t2589 * __this, MethodInfo* method){
	{
		t609  L_0 = m15018(__this, &m15018_MI);
		t609  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t609_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15016_MI;
 void m15016 (t2589 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15017_MI;
 bool m15017 (t2589 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t16 * L_1 = (__this->f0);
		int32_t L_2 = m3710(L_1, &m3710_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m15018_MI;
 t609  m15018 (t2589 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1270 * L_1 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6907(L_1, (t8*) &_stringLiteral370, &m6907_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1270 * L_3 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6907(L_3, (t8*) &_stringLiteral371, &m6907_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t16 * L_4 = (__this->f0);
		t16 * L_5 = (__this->f0);
		int32_t L_6 = m3710(L_5, &m3710_MI);
		int32_t L_7 = (__this->f1);
		t609  L_8 = m20178(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20178_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>
extern Il2CppType t16_0_0_1;
FieldInfo t2589_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2589_TI, offsetof(t2589, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2589_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2589_TI, offsetof(t2589, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2589_FIs[] =
{
	&t2589_f0_FieldInfo,
	&t2589_f1_FieldInfo,
	NULL
};
extern MethodInfo m15015_MI;
static PropertyInfo t2589____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2589_TI, "System.Collections.IEnumerator.Current", &m15015_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15018_MI;
static PropertyInfo t2589____Current_PropertyInfo = 
{
	&t2589_TI, "Current", &m15018_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2589_PIs[] =
{
	&t2589____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2589____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2589_m15014_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2589_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15014_MI = 
{
	".ctor", (methodPointerType)&m15014, &t2589_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2589_m15014_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2589_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15015_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15015, &t2589_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2589_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15016_MI = 
{
	"Dispose", (methodPointerType)&m15016, &t2589_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2589_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m15017_MI = 
{
	"MoveNext", (methodPointerType)&m15017, &t2589_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2589_TI;
extern Il2CppType t609_0_0_0;
extern void* RuntimeInvoker_t609 (MethodInfo* method, void* obj, void** args);
MethodInfo m15018_MI = 
{
	"get_Current", (methodPointerType)&m15018, &t2589_TI, &t609_0_0_0, RuntimeInvoker_t609, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2589_MIs[] =
{
	&m15014_MI,
	&m15015_MI,
	&m15016_MI,
	&m15017_MI,
	&m15018_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m15015_MI;
extern MethodInfo m15017_MI;
extern MethodInfo m15016_MI;
extern MethodInfo m15018_MI;
static MethodInfo* t2589_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m15015_MI,
	&m15017_MI,
	&m15016_MI,
	&m15018_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3531_TI;
static TypeInfo* t2589_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3531_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3531_TI;
static Il2CppInterfaceOffsetPair t2589_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3531_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2589_0_0_0;
extern Il2CppType t2589_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2589_TI;
extern Il2CppGenericClass t2589_GC;
extern TypeInfo t16_TI;
TypeInfo t2589_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2589_MIs, t2589_PIs, t2589_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2589_TI, t2589_ITIs, t2589_VT, &EmptyCustomAttributesCache, &t2589_TI, &t2589_0_0_0, &t2589_1_0_0, t2589_IOs, &t2589_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2589)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4425_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ParameterModifier>
extern MethodInfo m26507_MI;
static PropertyInfo t4425____Count_PropertyInfo = 
{
	&t4425_TI, "Count", &m26507_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26508_MI;
static PropertyInfo t4425____IsReadOnly_PropertyInfo = 
{
	&t4425_TI, "IsReadOnly", &m26508_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4425_PIs[] =
{
	&t4425____Count_PropertyInfo,
	&t4425____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4425_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26507_MI = 
{
	"get_Count", NULL, &t4425_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4425_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m26508_MI = 
{
	"get_IsReadOnly", NULL, &t4425_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t609_0_0_0;
static ParameterInfo t4425_m26509_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t609_0_0_0},
};
extern TypeInfo t4425_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t609 (MethodInfo* method, void* obj, void** args);
MethodInfo m26509_MI = 
{
	"Add", NULL, &t4425_TI, &t17_0_0_0, RuntimeInvoker_t17_t609, t4425_m26509_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4425_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26510_MI = 
{
	"Clear", NULL, &t4425_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t609_0_0_0;
static ParameterInfo t4425_m26511_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t609_0_0_0},
};
extern TypeInfo t4425_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t609 (MethodInfo* method, void* obj, void** args);
MethodInfo m26511_MI = 
{
	"Contains", NULL, &t4425_TI, &t19_0_0_0, RuntimeInvoker_t19_t609, t4425_m26511_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t611_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4425_m26512_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t611_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4425_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26512_MI = 
{
	"CopyTo", NULL, &t4425_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4425_m26512_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t609_0_0_0;
static ParameterInfo t4425_m26513_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t609_0_0_0},
};
extern TypeInfo t4425_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t609 (MethodInfo* method, void* obj, void** args);
MethodInfo m26513_MI = 
{
	"Remove", NULL, &t4425_TI, &t19_0_0_0, RuntimeInvoker_t19_t609, t4425_m26513_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4425_MIs[] =
{
	&m26507_MI,
	&m26508_MI,
	&m26509_MI,
	&m26510_MI,
	&m26511_MI,
	&m26512_MI,
	&m26513_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4427_TI;
static TypeInfo* t4425_ITIs[] = 
{
	&t592_TI,
	&t4427_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4425_0_0_0;
extern Il2CppType t4425_1_0_0;
struct t4425;
extern TypeInfo t4425_TI;
extern Il2CppGenericClass t4425_GC;
TypeInfo t4425_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4425_MIs, t4425_PIs, NULL, NULL, NULL, NULL, NULL, &t4425_TI, t4425_ITIs, NULL, &EmptyCustomAttributesCache, &t4425_TI, &t4425_0_0_0, &t4425_1_0_0, NULL, &t4425_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4427_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterModifier>
extern TypeInfo t4427_TI;
extern Il2CppType t3531_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26514_MI = 
{
	"GetEnumerator", NULL, &t4427_TI, &t3531_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4427_MIs[] =
{
	&m26514_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4427_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4427_0_0_0;
extern Il2CppType t4427_1_0_0;
struct t4427;
extern TypeInfo t4427_TI;
extern Il2CppGenericClass t4427_GC;
TypeInfo t4427_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4427_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4427_TI, t4427_ITIs, NULL, &EmptyCustomAttributesCache, &t4427_TI, &t4427_0_0_0, &t4427_1_0_0, NULL, &t4427_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4426_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ParameterModifier>
extern MethodInfo m26515_MI;
extern MethodInfo m26516_MI;
static PropertyInfo t4426____Item_PropertyInfo = 
{
	&t4426_TI, "Item", &m26515_MI, &m26516_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4426_PIs[] =
{
	&t4426____Item_PropertyInfo,
	NULL
};
extern Il2CppType t609_0_0_0;
static ParameterInfo t4426_m26517_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t609_0_0_0},
};
extern TypeInfo t4426_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t609 (MethodInfo* method, void* obj, void** args);
MethodInfo m26517_MI = 
{
	"IndexOf", NULL, &t4426_TI, &t18_0_0_0, RuntimeInvoker_t18_t609, t4426_m26517_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t609_0_0_0;
static ParameterInfo t4426_m26518_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t609_0_0_0},
};
extern TypeInfo t4426_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t609 (MethodInfo* method, void* obj, void** args);
MethodInfo m26518_MI = 
{
	"Insert", NULL, &t4426_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t609, t4426_m26518_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4426_m26519_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4426_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26519_MI = 
{
	"RemoveAt", NULL, &t4426_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4426_m26519_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4426_m26515_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4426_TI;
extern Il2CppType t609_0_0_0;
extern void* RuntimeInvoker_t609_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26515_MI = 
{
	"get_Item", NULL, &t4426_TI, &t609_0_0_0, RuntimeInvoker_t609_t18, t4426_m26515_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t609_0_0_0;
static ParameterInfo t4426_m26516_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t609_0_0_0},
};
extern TypeInfo t4426_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t609 (MethodInfo* method, void* obj, void** args);
MethodInfo m26516_MI = 
{
	"set_Item", NULL, &t4426_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t609, t4426_m26516_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4426_MIs[] =
{
	&m26517_MI,
	&m26518_MI,
	&m26519_MI,
	&m26515_MI,
	&m26516_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4425_TI;
extern TypeInfo t4427_TI;
static TypeInfo* t4426_ITIs[] = 
{
	&t592_TI,
	&t4425_TI,
	&t4427_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4426_0_0_0;
extern Il2CppType t4426_1_0_0;
struct t4426;
extern TypeInfo t4426_TI;
extern Il2CppGenericClass t4426_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4426_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4426_MIs, t4426_PIs, NULL, NULL, NULL, NULL, NULL, &t4426_TI, t4426_ITIs, NULL, &t1401__CustomAttributeCache, &t4426_TI, &t4426_0_0_0, &t4426_1_0_0, NULL, &t4426_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3532_TI;

#include "t528.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.WritableAttribute>
extern MethodInfo m26520_MI;
static PropertyInfo t3532____Current_PropertyInfo = 
{
	&t3532_TI, "Current", &m26520_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3532_PIs[] =
{
	&t3532____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3532_TI;
extern Il2CppType t528_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26520_MI = 
{
	"get_Current", NULL, &t3532_TI, &t528_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3532_MIs[] =
{
	&m26520_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3532_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3532_0_0_0;
extern Il2CppType t3532_1_0_0;
struct t3532;
extern TypeInfo t3532_TI;
extern Il2CppGenericClass t3532_GC;
TypeInfo t3532_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3532_MIs, t3532_PIs, NULL, NULL, NULL, NULL, NULL, &t3532_TI, t3532_ITIs, NULL, &EmptyCustomAttributesCache, &t3532_TI, &t3532_0_0_0, &t3532_1_0_0, NULL, &t3532_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2590.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2590_TI;
#include "t2590MD.h"

extern TypeInfo t2590_TI;
extern TypeInfo t528_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m15023_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m20189_MI;
struct t16;
#define m20189(__this, p0, method) (t528 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m20189_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.WritableAttribute>
extern Il2CppType t16_0_0_1;
FieldInfo t2590_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2590_TI, offsetof(t2590, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2590_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2590_TI, offsetof(t2590, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2590_FIs[] =
{
	&t2590_f0_FieldInfo,
	&t2590_f1_FieldInfo,
	NULL
};
extern MethodInfo m15020_MI;
static PropertyInfo t2590____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2590_TI, "System.Collections.IEnumerator.Current", &m15020_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15023_MI;
static PropertyInfo t2590____Current_PropertyInfo = 
{
	&t2590_TI, "Current", &m15023_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2590_PIs[] =
{
	&t2590____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2590____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2590_m15019_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2590_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15019_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2590_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2590_m15019_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2590_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15020_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2590_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2590_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15021_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2590_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2590_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m15022_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2590_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2590_TI;
extern Il2CppType t528_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15023_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2590_TI, &t528_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2590_MIs[] =
{
	&m15019_MI,
	&m15020_MI,
	&m15021_MI,
	&m15022_MI,
	&m15023_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m15020_MI;
extern MethodInfo m15022_MI;
extern MethodInfo m15021_MI;
extern MethodInfo m15023_MI;
static MethodInfo* t2590_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m15020_MI,
	&m15022_MI,
	&m15021_MI,
	&m15023_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3532_TI;
static TypeInfo* t2590_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3532_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3532_TI;
static Il2CppInterfaceOffsetPair t2590_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3532_TI, 7},
};
extern MethodInfo m15023_MI;
extern TypeInfo t528_TI;
extern MethodInfo m20189_MI;
static void* t2590_RGCTXData[3] = 
{
	&m15023_MI,
	&t528_TI,
	&m20189_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2590_0_0_0;
extern Il2CppType t2590_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2590_TI;
extern Il2CppGenericClass t2590_GC;
extern TypeInfo t16_TI;
TypeInfo t2590_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2590_MIs, t2590_PIs, t2590_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2590_TI, t2590_ITIs, t2590_VT, &EmptyCustomAttributesCache, &t2590_TI, &t2590_0_0_0, &t2590_1_0_0, t2590_IOs, &t2590_GC, NULL, NULL, NULL, t2590_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2590)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4428_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.WritableAttribute>
extern MethodInfo m26521_MI;
static PropertyInfo t4428____Count_PropertyInfo = 
{
	&t4428_TI, "Count", &m26521_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26522_MI;
static PropertyInfo t4428____IsReadOnly_PropertyInfo = 
{
	&t4428_TI, "IsReadOnly", &m26522_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4428_PIs[] =
{
	&t4428____Count_PropertyInfo,
	&t4428____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4428_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26521_MI = 
{
	"get_Count", NULL, &t4428_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4428_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m26522_MI = 
{
	"get_IsReadOnly", NULL, &t4428_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t528_0_0_0;
static ParameterInfo t4428_m26523_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t528_0_0_0},
};
extern TypeInfo t4428_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26523_MI = 
{
	"Add", NULL, &t4428_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4428_m26523_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4428_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26524_MI = 
{
	"Clear", NULL, &t4428_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t528_0_0_0;
static ParameterInfo t4428_m26525_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t528_0_0_0},
};
extern TypeInfo t4428_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26525_MI = 
{
	"Contains", NULL, &t4428_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4428_m26525_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3158_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4428_m26526_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3158_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4428_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26526_MI = 
{
	"CopyTo", NULL, &t4428_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4428_m26526_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t528_0_0_0;
static ParameterInfo t4428_m26527_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t528_0_0_0},
};
extern TypeInfo t4428_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26527_MI = 
{
	"Remove", NULL, &t4428_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4428_m26527_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4428_MIs[] =
{
	&m26521_MI,
	&m26522_MI,
	&m26523_MI,
	&m26524_MI,
	&m26525_MI,
	&m26526_MI,
	&m26527_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4430_TI;
static TypeInfo* t4428_ITIs[] = 
{
	&t592_TI,
	&t4430_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4428_0_0_0;
extern Il2CppType t4428_1_0_0;
struct t4428;
extern TypeInfo t4428_TI;
extern Il2CppGenericClass t4428_GC;
TypeInfo t4428_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4428_MIs, t4428_PIs, NULL, NULL, NULL, NULL, NULL, &t4428_TI, t4428_ITIs, NULL, &EmptyCustomAttributesCache, &t4428_TI, &t4428_0_0_0, &t4428_1_0_0, NULL, &t4428_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4430_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.WritableAttribute>
extern TypeInfo t4430_TI;
extern Il2CppType t3532_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26528_MI = 
{
	"GetEnumerator", NULL, &t4430_TI, &t3532_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4430_MIs[] =
{
	&m26528_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4430_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4430_0_0_0;
extern Il2CppType t4430_1_0_0;
struct t4430;
extern TypeInfo t4430_TI;
extern Il2CppGenericClass t4430_GC;
TypeInfo t4430_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4430_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4430_TI, t4430_ITIs, NULL, &EmptyCustomAttributesCache, &t4430_TI, &t4430_0_0_0, &t4430_1_0_0, NULL, &t4430_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4429_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.WritableAttribute>
extern MethodInfo m26529_MI;
extern MethodInfo m26530_MI;
static PropertyInfo t4429____Item_PropertyInfo = 
{
	&t4429_TI, "Item", &m26529_MI, &m26530_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4429_PIs[] =
{
	&t4429____Item_PropertyInfo,
	NULL
};
extern Il2CppType t528_0_0_0;
static ParameterInfo t4429_m26531_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t528_0_0_0},
};
extern TypeInfo t4429_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26531_MI = 
{
	"IndexOf", NULL, &t4429_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4429_m26531_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t528_0_0_0;
static ParameterInfo t4429_m26532_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t528_0_0_0},
};
extern TypeInfo t4429_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26532_MI = 
{
	"Insert", NULL, &t4429_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4429_m26532_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4429_m26533_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4429_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26533_MI = 
{
	"RemoveAt", NULL, &t4429_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4429_m26533_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4429_m26529_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4429_TI;
extern Il2CppType t528_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26529_MI = 
{
	"get_Item", NULL, &t4429_TI, &t528_0_0_0, RuntimeInvoker_t4_t18, t4429_m26529_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t528_0_0_0;
static ParameterInfo t4429_m26530_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t528_0_0_0},
};
extern TypeInfo t4429_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26530_MI = 
{
	"set_Item", NULL, &t4429_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4429_m26530_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4429_MIs[] =
{
	&m26531_MI,
	&m26532_MI,
	&m26533_MI,
	&m26529_MI,
	&m26530_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4428_TI;
extern TypeInfo t4430_TI;
static TypeInfo* t4429_ITIs[] = 
{
	&t592_TI,
	&t4428_TI,
	&t4430_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4429_0_0_0;
extern Il2CppType t4429_1_0_0;
struct t4429;
extern TypeInfo t4429_TI;
extern Il2CppGenericClass t4429_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4429_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4429_MIs, t4429_PIs, NULL, NULL, NULL, NULL, NULL, &t4429_TI, t4429_ITIs, NULL, &t1401__CustomAttributeCache, &t4429_TI, &t4429_0_0_0, &t4429_1_0_0, NULL, &t4429_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3533_TI;

#include "t529.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.AssemblyIsEditorAssembly>
extern MethodInfo m26534_MI;
static PropertyInfo t3533____Current_PropertyInfo = 
{
	&t3533_TI, "Current", &m26534_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3533_PIs[] =
{
	&t3533____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3533_TI;
extern Il2CppType t529_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26534_MI = 
{
	"get_Current", NULL, &t3533_TI, &t529_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3533_MIs[] =
{
	&m26534_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3533_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3533_0_0_0;
extern Il2CppType t3533_1_0_0;
struct t3533;
extern TypeInfo t3533_TI;
extern Il2CppGenericClass t3533_GC;
TypeInfo t3533_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3533_MIs, t3533_PIs, NULL, NULL, NULL, NULL, NULL, &t3533_TI, t3533_ITIs, NULL, &EmptyCustomAttributesCache, &t3533_TI, &t3533_0_0_0, &t3533_1_0_0, NULL, &t3533_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2591.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2591_TI;
#include "t2591MD.h"

extern TypeInfo t2591_TI;
extern TypeInfo t529_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m15028_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m20200_MI;
struct t16;
#define m20200(__this, p0, method) (t529 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m20200_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.AssemblyIsEditorAssembly>
extern Il2CppType t16_0_0_1;
FieldInfo t2591_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2591_TI, offsetof(t2591, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2591_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2591_TI, offsetof(t2591, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2591_FIs[] =
{
	&t2591_f0_FieldInfo,
	&t2591_f1_FieldInfo,
	NULL
};
extern MethodInfo m15025_MI;
static PropertyInfo t2591____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2591_TI, "System.Collections.IEnumerator.Current", &m15025_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15028_MI;
static PropertyInfo t2591____Current_PropertyInfo = 
{
	&t2591_TI, "Current", &m15028_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2591_PIs[] =
{
	&t2591____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2591____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2591_m15024_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2591_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15024_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2591_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2591_m15024_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2591_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15025_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2591_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2591_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15026_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2591_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2591_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m15027_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2591_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2591_TI;
extern Il2CppType t529_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15028_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2591_TI, &t529_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2591_MIs[] =
{
	&m15024_MI,
	&m15025_MI,
	&m15026_MI,
	&m15027_MI,
	&m15028_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m15025_MI;
extern MethodInfo m15027_MI;
extern MethodInfo m15026_MI;
extern MethodInfo m15028_MI;
static MethodInfo* t2591_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m15025_MI,
	&m15027_MI,
	&m15026_MI,
	&m15028_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3533_TI;
static TypeInfo* t2591_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3533_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3533_TI;
static Il2CppInterfaceOffsetPair t2591_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3533_TI, 7},
};
extern MethodInfo m15028_MI;
extern TypeInfo t529_TI;
extern MethodInfo m20200_MI;
static void* t2591_RGCTXData[3] = 
{
	&m15028_MI,
	&t529_TI,
	&m20200_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2591_0_0_0;
extern Il2CppType t2591_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2591_TI;
extern Il2CppGenericClass t2591_GC;
extern TypeInfo t16_TI;
TypeInfo t2591_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2591_MIs, t2591_PIs, t2591_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2591_TI, t2591_ITIs, t2591_VT, &EmptyCustomAttributesCache, &t2591_TI, &t2591_0_0_0, &t2591_1_0_0, t2591_IOs, &t2591_GC, NULL, NULL, NULL, t2591_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2591)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4431_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.AssemblyIsEditorAssembly>
extern MethodInfo m26535_MI;
static PropertyInfo t4431____Count_PropertyInfo = 
{
	&t4431_TI, "Count", &m26535_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26536_MI;
static PropertyInfo t4431____IsReadOnly_PropertyInfo = 
{
	&t4431_TI, "IsReadOnly", &m26536_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4431_PIs[] =
{
	&t4431____Count_PropertyInfo,
	&t4431____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4431_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26535_MI = 
{
	"get_Count", NULL, &t4431_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4431_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m26536_MI = 
{
	"get_IsReadOnly", NULL, &t4431_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t529_0_0_0;
static ParameterInfo t4431_m26537_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t529_0_0_0},
};
extern TypeInfo t4431_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26537_MI = 
{
	"Add", NULL, &t4431_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4431_m26537_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4431_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26538_MI = 
{
	"Clear", NULL, &t4431_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t529_0_0_0;
static ParameterInfo t4431_m26539_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t529_0_0_0},
};
extern TypeInfo t4431_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26539_MI = 
{
	"Contains", NULL, &t4431_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4431_m26539_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3159_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4431_m26540_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3159_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4431_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26540_MI = 
{
	"CopyTo", NULL, &t4431_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4431_m26540_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t529_0_0_0;
static ParameterInfo t4431_m26541_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t529_0_0_0},
};
extern TypeInfo t4431_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26541_MI = 
{
	"Remove", NULL, &t4431_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4431_m26541_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4431_MIs[] =
{
	&m26535_MI,
	&m26536_MI,
	&m26537_MI,
	&m26538_MI,
	&m26539_MI,
	&m26540_MI,
	&m26541_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4433_TI;
static TypeInfo* t4431_ITIs[] = 
{
	&t592_TI,
	&t4433_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4431_0_0_0;
extern Il2CppType t4431_1_0_0;
struct t4431;
extern TypeInfo t4431_TI;
extern Il2CppGenericClass t4431_GC;
TypeInfo t4431_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4431_MIs, t4431_PIs, NULL, NULL, NULL, NULL, NULL, &t4431_TI, t4431_ITIs, NULL, &EmptyCustomAttributesCache, &t4431_TI, &t4431_0_0_0, &t4431_1_0_0, NULL, &t4431_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4433_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.AssemblyIsEditorAssembly>
extern TypeInfo t4433_TI;
extern Il2CppType t3533_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26542_MI = 
{
	"GetEnumerator", NULL, &t4433_TI, &t3533_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4433_MIs[] =
{
	&m26542_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4433_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4433_0_0_0;
extern Il2CppType t4433_1_0_0;
struct t4433;
extern TypeInfo t4433_TI;
extern Il2CppGenericClass t4433_GC;
TypeInfo t4433_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4433_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4433_TI, t4433_ITIs, NULL, &EmptyCustomAttributesCache, &t4433_TI, &t4433_0_0_0, &t4433_1_0_0, NULL, &t4433_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4432_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.AssemblyIsEditorAssembly>
extern MethodInfo m26543_MI;
extern MethodInfo m26544_MI;
static PropertyInfo t4432____Item_PropertyInfo = 
{
	&t4432_TI, "Item", &m26543_MI, &m26544_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4432_PIs[] =
{
	&t4432____Item_PropertyInfo,
	NULL
};
extern Il2CppType t529_0_0_0;
static ParameterInfo t4432_m26545_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t529_0_0_0},
};
extern TypeInfo t4432_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26545_MI = 
{
	"IndexOf", NULL, &t4432_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4432_m26545_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t529_0_0_0;
static ParameterInfo t4432_m26546_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t529_0_0_0},
};
extern TypeInfo t4432_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26546_MI = 
{
	"Insert", NULL, &t4432_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4432_m26546_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4432_m26547_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4432_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26547_MI = 
{
	"RemoveAt", NULL, &t4432_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4432_m26547_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4432_m26543_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4432_TI;
extern Il2CppType t529_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26543_MI = 
{
	"get_Item", NULL, &t4432_TI, &t529_0_0_0, RuntimeInvoker_t4_t18, t4432_m26543_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t529_0_0_0;
static ParameterInfo t4432_m26544_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t529_0_0_0},
};
extern TypeInfo t4432_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26544_MI = 
{
	"set_Item", NULL, &t4432_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4432_m26544_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4432_MIs[] =
{
	&m26545_MI,
	&m26546_MI,
	&m26547_MI,
	&m26543_MI,
	&m26544_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4431_TI;
extern TypeInfo t4433_TI;
static TypeInfo* t4432_ITIs[] = 
{
	&t592_TI,
	&t4431_TI,
	&t4433_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4432_0_0_0;
extern Il2CppType t4432_1_0_0;
struct t4432;
extern TypeInfo t4432_TI;
extern Il2CppGenericClass t4432_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4432_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4432_MIs, t4432_PIs, NULL, NULL, NULL, NULL, NULL, &t4432_TI, t4432_ITIs, NULL, &t1401__CustomAttributeCache, &t4432_TI, &t4432_0_0_0, &t4432_1_0_0, NULL, &t4432_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3534_TI;

#include "t487.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.CameraClearFlags>
extern MethodInfo m26548_MI;
static PropertyInfo t3534____Current_PropertyInfo = 
{
	&t3534_TI, "Current", &m26548_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3534_PIs[] =
{
	&t3534____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3534_TI;
extern Il2CppType t487_0_0_0;
extern void* RuntimeInvoker_t487 (MethodInfo* method, void* obj, void** args);
MethodInfo m26548_MI = 
{
	"get_Current", NULL, &t3534_TI, &t487_0_0_0, RuntimeInvoker_t487, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3534_MIs[] =
{
	&m26548_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3534_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3534_0_0_0;
extern Il2CppType t3534_1_0_0;
struct t3534;
extern TypeInfo t3534_TI;
extern Il2CppGenericClass t3534_GC;
TypeInfo t3534_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3534_MIs, t3534_PIs, NULL, NULL, NULL, NULL, NULL, &t3534_TI, t3534_ITIs, NULL, &EmptyCustomAttributesCache, &t3534_TI, &t3534_0_0_0, &t3534_1_0_0, NULL, &t3534_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2592.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2592_TI;
#include "t2592MD.h"

extern TypeInfo t2592_TI;
extern TypeInfo t487_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m15033_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m20211_MI;
struct t16;
 int32_t m20211 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20211_MI;


extern MethodInfo m15029_MI;
 void m15029 (t2592 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15030_MI;
 t4 * m15030 (t2592 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15033(__this, &m15033_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t487_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15031_MI;
 void m15031 (t2592 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15032_MI;
 bool m15032 (t2592 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t16 * L_1 = (__this->f0);
		int32_t L_2 = m3710(L_1, &m3710_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m15033_MI;
 int32_t m15033 (t2592 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1270 * L_1 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6907(L_1, (t8*) &_stringLiteral370, &m6907_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1270 * L_3 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6907(L_3, (t8*) &_stringLiteral371, &m6907_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t16 * L_4 = (__this->f0);
		t16 * L_5 = (__this->f0);
		int32_t L_6 = m3710(L_5, &m3710_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m20211(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20211_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.CameraClearFlags>
extern Il2CppType t16_0_0_1;
FieldInfo t2592_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2592_TI, offsetof(t2592, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2592_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2592_TI, offsetof(t2592, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2592_FIs[] =
{
	&t2592_f0_FieldInfo,
	&t2592_f1_FieldInfo,
	NULL
};
extern MethodInfo m15030_MI;
static PropertyInfo t2592____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2592_TI, "System.Collections.IEnumerator.Current", &m15030_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15033_MI;
static PropertyInfo t2592____Current_PropertyInfo = 
{
	&t2592_TI, "Current", &m15033_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2592_PIs[] =
{
	&t2592____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2592____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2592_m15029_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2592_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15029_MI = 
{
	".ctor", (methodPointerType)&m15029, &t2592_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2592_m15029_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2592_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15030_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15030, &t2592_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2592_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15031_MI = 
{
	"Dispose", (methodPointerType)&m15031, &t2592_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2592_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m15032_MI = 
{
	"MoveNext", (methodPointerType)&m15032, &t2592_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2592_TI;
extern Il2CppType t487_0_0_0;
extern void* RuntimeInvoker_t487 (MethodInfo* method, void* obj, void** args);
MethodInfo m15033_MI = 
{
	"get_Current", (methodPointerType)&m15033, &t2592_TI, &t487_0_0_0, RuntimeInvoker_t487, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2592_MIs[] =
{
	&m15029_MI,
	&m15030_MI,
	&m15031_MI,
	&m15032_MI,
	&m15033_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m15030_MI;
extern MethodInfo m15032_MI;
extern MethodInfo m15031_MI;
extern MethodInfo m15033_MI;
static MethodInfo* t2592_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m15030_MI,
	&m15032_MI,
	&m15031_MI,
	&m15033_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3534_TI;
static TypeInfo* t2592_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3534_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3534_TI;
static Il2CppInterfaceOffsetPair t2592_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3534_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2592_0_0_0;
extern Il2CppType t2592_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2592_TI;
extern Il2CppGenericClass t2592_GC;
extern TypeInfo t16_TI;
TypeInfo t2592_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2592_MIs, t2592_PIs, t2592_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2592_TI, t2592_ITIs, t2592_VT, &EmptyCustomAttributesCache, &t2592_TI, &t2592_0_0_0, &t2592_1_0_0, t2592_IOs, &t2592_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2592)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4434_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.CameraClearFlags>
extern MethodInfo m26549_MI;
static PropertyInfo t4434____Count_PropertyInfo = 
{
	&t4434_TI, "Count", &m26549_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26550_MI;
static PropertyInfo t4434____IsReadOnly_PropertyInfo = 
{
	&t4434_TI, "IsReadOnly", &m26550_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4434_PIs[] =
{
	&t4434____Count_PropertyInfo,
	&t4434____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4434_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26549_MI = 
{
	"get_Count", NULL, &t4434_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4434_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m26550_MI = 
{
	"get_IsReadOnly", NULL, &t4434_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t487_0_0_0;
static ParameterInfo t4434_m26551_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t487_0_0_0},
};
extern TypeInfo t4434_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26551_MI = 
{
	"Add", NULL, &t4434_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4434_m26551_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4434_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26552_MI = 
{
	"Clear", NULL, &t4434_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t487_0_0_0;
static ParameterInfo t4434_m26553_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t487_0_0_0},
};
extern TypeInfo t4434_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26553_MI = 
{
	"Contains", NULL, &t4434_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t4434_m26553_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3160_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4434_m26554_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3160_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4434_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26554_MI = 
{
	"CopyTo", NULL, &t4434_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4434_m26554_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t487_0_0_0;
static ParameterInfo t4434_m26555_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t487_0_0_0},
};
extern TypeInfo t4434_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26555_MI = 
{
	"Remove", NULL, &t4434_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t4434_m26555_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4434_MIs[] =
{
	&m26549_MI,
	&m26550_MI,
	&m26551_MI,
	&m26552_MI,
	&m26553_MI,
	&m26554_MI,
	&m26555_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4436_TI;
static TypeInfo* t4434_ITIs[] = 
{
	&t592_TI,
	&t4436_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4434_0_0_0;
extern Il2CppType t4434_1_0_0;
struct t4434;
extern TypeInfo t4434_TI;
extern Il2CppGenericClass t4434_GC;
TypeInfo t4434_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4434_MIs, t4434_PIs, NULL, NULL, NULL, NULL, NULL, &t4434_TI, t4434_ITIs, NULL, &EmptyCustomAttributesCache, &t4434_TI, &t4434_0_0_0, &t4434_1_0_0, NULL, &t4434_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4436_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.CameraClearFlags>
extern TypeInfo t4436_TI;
extern Il2CppType t3534_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26556_MI = 
{
	"GetEnumerator", NULL, &t4436_TI, &t3534_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4436_MIs[] =
{
	&m26556_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4436_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4436_0_0_0;
extern Il2CppType t4436_1_0_0;
struct t4436;
extern TypeInfo t4436_TI;
extern Il2CppGenericClass t4436_GC;
TypeInfo t4436_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4436_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4436_TI, t4436_ITIs, NULL, &EmptyCustomAttributesCache, &t4436_TI, &t4436_0_0_0, &t4436_1_0_0, NULL, &t4436_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4435_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.CameraClearFlags>
extern MethodInfo m26557_MI;
extern MethodInfo m26558_MI;
static PropertyInfo t4435____Item_PropertyInfo = 
{
	&t4435_TI, "Item", &m26557_MI, &m26558_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4435_PIs[] =
{
	&t4435____Item_PropertyInfo,
	NULL
};
extern Il2CppType t487_0_0_0;
static ParameterInfo t4435_m26559_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t487_0_0_0},
};
extern TypeInfo t4435_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26559_MI = 
{
	"IndexOf", NULL, &t4435_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t4435_m26559_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t487_0_0_0;
static ParameterInfo t4435_m26560_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t487_0_0_0},
};
extern TypeInfo t4435_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26560_MI = 
{
	"Insert", NULL, &t4435_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t4435_m26560_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4435_m26561_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4435_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26561_MI = 
{
	"RemoveAt", NULL, &t4435_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4435_m26561_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4435_m26557_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4435_TI;
extern Il2CppType t487_0_0_0;
extern void* RuntimeInvoker_t487_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26557_MI = 
{
	"get_Item", NULL, &t4435_TI, &t487_0_0_0, RuntimeInvoker_t487_t18, t4435_m26557_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t487_0_0_0;
static ParameterInfo t4435_m26558_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t487_0_0_0},
};
extern TypeInfo t4435_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26558_MI = 
{
	"set_Item", NULL, &t4435_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t4435_m26558_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4435_MIs[] =
{
	&m26559_MI,
	&m26560_MI,
	&m26561_MI,
	&m26557_MI,
	&m26558_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4434_TI;
extern TypeInfo t4436_TI;
static TypeInfo* t4435_ITIs[] = 
{
	&t592_TI,
	&t4434_TI,
	&t4436_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4435_0_0_0;
extern Il2CppType t4435_1_0_0;
struct t4435;
extern TypeInfo t4435_TI;
extern Il2CppGenericClass t4435_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4435_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4435_MIs, t4435_PIs, NULL, NULL, NULL, NULL, NULL, &t4435_TI, t4435_ITIs, NULL, &t1401__CustomAttributeCache, &t4435_TI, &t4435_0_0_0, &t4435_1_0_0, NULL, &t4435_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3535_TI;

#include "t531.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
extern MethodInfo m26562_MI;
static PropertyInfo t3535____Current_PropertyInfo = 
{
	&t3535_TI, "Current", &m26562_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3535_PIs[] =
{
	&t3535____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3535_TI;
extern Il2CppType t531_0_0_0;
extern void* RuntimeInvoker_t531 (MethodInfo* method, void* obj, void** args);
MethodInfo m26562_MI = 
{
	"get_Current", NULL, &t3535_TI, &t531_0_0_0, RuntimeInvoker_t531, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3535_MIs[] =
{
	&m26562_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3535_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3535_0_0_0;
extern Il2CppType t3535_1_0_0;
struct t3535;
extern TypeInfo t3535_TI;
extern Il2CppGenericClass t3535_GC;
TypeInfo t3535_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3535_MIs, t3535_PIs, NULL, NULL, NULL, NULL, NULL, &t3535_TI, t3535_ITIs, NULL, &EmptyCustomAttributesCache, &t3535_TI, &t3535_0_0_0, &t3535_1_0_0, NULL, &t3535_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2593.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2593_TI;
#include "t2593MD.h"

extern TypeInfo t2593_TI;
extern TypeInfo t531_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m15038_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m20222_MI;
struct t16;
 t531  m20222 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20222_MI;


extern MethodInfo m15034_MI;
 void m15034 (t2593 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15035_MI;
 t4 * m15035 (t2593 * __this, MethodInfo* method){
	{
		t531  L_0 = m15038(__this, &m15038_MI);
		t531  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t531_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15036_MI;
 void m15036 (t2593 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15037_MI;
 bool m15037 (t2593 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t16 * L_1 = (__this->f0);
		int32_t L_2 = m3710(L_1, &m3710_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m15038_MI;
 t531  m15038 (t2593 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1270 * L_1 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6907(L_1, (t8*) &_stringLiteral370, &m6907_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1270 * L_3 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6907(L_3, (t8*) &_stringLiteral371, &m6907_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t16 * L_4 = (__this->f0);
		t16 * L_5 = (__this->f0);
		int32_t L_6 = m3710(L_5, &m3710_MI);
		int32_t L_7 = (__this->f1);
		t531  L_8 = m20222(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20222_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
extern Il2CppType t16_0_0_1;
FieldInfo t2593_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2593_TI, offsetof(t2593, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2593_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2593_TI, offsetof(t2593, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2593_FIs[] =
{
	&t2593_f0_FieldInfo,
	&t2593_f1_FieldInfo,
	NULL
};
extern MethodInfo m15035_MI;
static PropertyInfo t2593____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2593_TI, "System.Collections.IEnumerator.Current", &m15035_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15038_MI;
static PropertyInfo t2593____Current_PropertyInfo = 
{
	&t2593_TI, "Current", &m15038_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2593_PIs[] =
{
	&t2593____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2593____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2593_m15034_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2593_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15034_MI = 
{
	".ctor", (methodPointerType)&m15034, &t2593_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2593_m15034_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2593_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15035_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15035, &t2593_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2593_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15036_MI = 
{
	"Dispose", (methodPointerType)&m15036, &t2593_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2593_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m15037_MI = 
{
	"MoveNext", (methodPointerType)&m15037, &t2593_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2593_TI;
extern Il2CppType t531_0_0_0;
extern void* RuntimeInvoker_t531 (MethodInfo* method, void* obj, void** args);
MethodInfo m15038_MI = 
{
	"get_Current", (methodPointerType)&m15038, &t2593_TI, &t531_0_0_0, RuntimeInvoker_t531, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2593_MIs[] =
{
	&m15034_MI,
	&m15035_MI,
	&m15036_MI,
	&m15037_MI,
	&m15038_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m15035_MI;
extern MethodInfo m15037_MI;
extern MethodInfo m15036_MI;
extern MethodInfo m15038_MI;
static MethodInfo* t2593_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m15035_MI,
	&m15037_MI,
	&m15036_MI,
	&m15038_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3535_TI;
static TypeInfo* t2593_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3535_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3535_TI;
static Il2CppInterfaceOffsetPair t2593_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3535_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2593_0_0_0;
extern Il2CppType t2593_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2593_TI;
extern Il2CppGenericClass t2593_GC;
extern TypeInfo t16_TI;
TypeInfo t2593_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2593_MIs, t2593_PIs, t2593_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2593_TI, t2593_ITIs, t2593_VT, &EmptyCustomAttributesCache, &t2593_TI, &t2593_0_0_0, &t2593_1_0_0, t2593_IOs, &t2593_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2593)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4437_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.SendMouseEvents/HitInfo>
extern MethodInfo m26563_MI;
static PropertyInfo t4437____Count_PropertyInfo = 
{
	&t4437_TI, "Count", &m26563_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26564_MI;
static PropertyInfo t4437____IsReadOnly_PropertyInfo = 
{
	&t4437_TI, "IsReadOnly", &m26564_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4437_PIs[] =
{
	&t4437____Count_PropertyInfo,
	&t4437____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4437_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26563_MI = 
{
	"get_Count", NULL, &t4437_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4437_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m26564_MI = 
{
	"get_IsReadOnly", NULL, &t4437_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t531_0_0_0;
static ParameterInfo t4437_m26565_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t531_0_0_0},
};
extern TypeInfo t4437_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t531 (MethodInfo* method, void* obj, void** args);
MethodInfo m26565_MI = 
{
	"Add", NULL, &t4437_TI, &t17_0_0_0, RuntimeInvoker_t17_t531, t4437_m26565_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4437_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26566_MI = 
{
	"Clear", NULL, &t4437_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t531_0_0_0;
static ParameterInfo t4437_m26567_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t531_0_0_0},
};
extern TypeInfo t4437_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t531 (MethodInfo* method, void* obj, void** args);
MethodInfo m26567_MI = 
{
	"Contains", NULL, &t4437_TI, &t19_0_0_0, RuntimeInvoker_t19_t531, t4437_m26567_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t533_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4437_m26568_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t533_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4437_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26568_MI = 
{
	"CopyTo", NULL, &t4437_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4437_m26568_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t531_0_0_0;
static ParameterInfo t4437_m26569_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t531_0_0_0},
};
extern TypeInfo t4437_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t531 (MethodInfo* method, void* obj, void** args);
MethodInfo m26569_MI = 
{
	"Remove", NULL, &t4437_TI, &t19_0_0_0, RuntimeInvoker_t19_t531, t4437_m26569_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4437_MIs[] =
{
	&m26563_MI,
	&m26564_MI,
	&m26565_MI,
	&m26566_MI,
	&m26567_MI,
	&m26568_MI,
	&m26569_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4439_TI;
static TypeInfo* t4437_ITIs[] = 
{
	&t592_TI,
	&t4439_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4437_0_0_0;
extern Il2CppType t4437_1_0_0;
struct t4437;
extern TypeInfo t4437_TI;
extern Il2CppGenericClass t4437_GC;
TypeInfo t4437_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4437_MIs, t4437_PIs, NULL, NULL, NULL, NULL, NULL, &t4437_TI, t4437_ITIs, NULL, &EmptyCustomAttributesCache, &t4437_TI, &t4437_0_0_0, &t4437_1_0_0, NULL, &t4437_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4439_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.SendMouseEvents/HitInfo>
extern TypeInfo t4439_TI;
extern Il2CppType t3535_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26570_MI = 
{
	"GetEnumerator", NULL, &t4439_TI, &t3535_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4439_MIs[] =
{
	&m26570_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4439_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4439_0_0_0;
extern Il2CppType t4439_1_0_0;
struct t4439;
extern TypeInfo t4439_TI;
extern Il2CppGenericClass t4439_GC;
TypeInfo t4439_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4439_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4439_TI, t4439_ITIs, NULL, &EmptyCustomAttributesCache, &t4439_TI, &t4439_0_0_0, &t4439_1_0_0, NULL, &t4439_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4438_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.SendMouseEvents/HitInfo>
extern MethodInfo m26571_MI;
extern MethodInfo m26572_MI;
static PropertyInfo t4438____Item_PropertyInfo = 
{
	&t4438_TI, "Item", &m26571_MI, &m26572_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4438_PIs[] =
{
	&t4438____Item_PropertyInfo,
	NULL
};
extern Il2CppType t531_0_0_0;
static ParameterInfo t4438_m26573_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t531_0_0_0},
};
extern TypeInfo t4438_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t531 (MethodInfo* method, void* obj, void** args);
MethodInfo m26573_MI = 
{
	"IndexOf", NULL, &t4438_TI, &t18_0_0_0, RuntimeInvoker_t18_t531, t4438_m26573_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t531_0_0_0;
static ParameterInfo t4438_m26574_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t531_0_0_0},
};
extern TypeInfo t4438_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t531 (MethodInfo* method, void* obj, void** args);
MethodInfo m26574_MI = 
{
	"Insert", NULL, &t4438_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t531, t4438_m26574_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4438_m26575_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4438_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26575_MI = 
{
	"RemoveAt", NULL, &t4438_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4438_m26575_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4438_m26571_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4438_TI;
extern Il2CppType t531_0_0_0;
extern void* RuntimeInvoker_t531_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26571_MI = 
{
	"get_Item", NULL, &t4438_TI, &t531_0_0_0, RuntimeInvoker_t531_t18, t4438_m26571_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t531_0_0_0;
static ParameterInfo t4438_m26572_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t531_0_0_0},
};
extern TypeInfo t4438_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t531 (MethodInfo* method, void* obj, void** args);
MethodInfo m26572_MI = 
{
	"set_Item", NULL, &t4438_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t531, t4438_m26572_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4438_MIs[] =
{
	&m26573_MI,
	&m26574_MI,
	&m26575_MI,
	&m26571_MI,
	&m26572_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4437_TI;
extern TypeInfo t4439_TI;
static TypeInfo* t4438_ITIs[] = 
{
	&t592_TI,
	&t4437_TI,
	&t4439_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4438_0_0_0;
extern Il2CppType t4438_1_0_0;
struct t4438;
extern TypeInfo t4438_TI;
extern Il2CppGenericClass t4438_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4438_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4438_MIs, t4438_PIs, NULL, NULL, NULL, NULL, NULL, &t4438_TI, t4438_ITIs, NULL, &t1401__CustomAttributeCache, &t4438_TI, &t4438_0_0_0, &t4438_1_0_0, NULL, &t4438_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3536_TI;

#include "t534.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.PropertyAttribute>
extern MethodInfo m26576_MI;
static PropertyInfo t3536____Current_PropertyInfo = 
{
	&t3536_TI, "Current", &m26576_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3536_PIs[] =
{
	&t3536____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3536_TI;
extern Il2CppType t534_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26576_MI = 
{
	"get_Current", NULL, &t3536_TI, &t534_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3536_MIs[] =
{
	&m26576_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3536_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3536_0_0_0;
extern Il2CppType t3536_1_0_0;
struct t3536;
extern TypeInfo t3536_TI;
extern Il2CppGenericClass t3536_GC;
TypeInfo t3536_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3536_MIs, t3536_PIs, NULL, NULL, NULL, NULL, NULL, &t3536_TI, t3536_ITIs, NULL, &EmptyCustomAttributesCache, &t3536_TI, &t3536_0_0_0, &t3536_1_0_0, NULL, &t3536_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2594.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2594_TI;
#include "t2594MD.h"

extern TypeInfo t2594_TI;
extern TypeInfo t534_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m15043_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m20233_MI;
struct t16;
#define m20233(__this, p0, method) (t534 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m20233_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.PropertyAttribute>
extern Il2CppType t16_0_0_1;
FieldInfo t2594_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2594_TI, offsetof(t2594, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2594_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2594_TI, offsetof(t2594, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2594_FIs[] =
{
	&t2594_f0_FieldInfo,
	&t2594_f1_FieldInfo,
	NULL
};
extern MethodInfo m15040_MI;
static PropertyInfo t2594____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2594_TI, "System.Collections.IEnumerator.Current", &m15040_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15043_MI;
static PropertyInfo t2594____Current_PropertyInfo = 
{
	&t2594_TI, "Current", &m15043_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2594_PIs[] =
{
	&t2594____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2594____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2594_m15039_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2594_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15039_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2594_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2594_m15039_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2594_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15040_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2594_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2594_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15041_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2594_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2594_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m15042_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2594_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2594_TI;
extern Il2CppType t534_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15043_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2594_TI, &t534_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2594_MIs[] =
{
	&m15039_MI,
	&m15040_MI,
	&m15041_MI,
	&m15042_MI,
	&m15043_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m15040_MI;
extern MethodInfo m15042_MI;
extern MethodInfo m15041_MI;
extern MethodInfo m15043_MI;
static MethodInfo* t2594_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m15040_MI,
	&m15042_MI,
	&m15041_MI,
	&m15043_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3536_TI;
static TypeInfo* t2594_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3536_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3536_TI;
static Il2CppInterfaceOffsetPair t2594_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3536_TI, 7},
};
extern MethodInfo m15043_MI;
extern TypeInfo t534_TI;
extern MethodInfo m20233_MI;
static void* t2594_RGCTXData[3] = 
{
	&m15043_MI,
	&t534_TI,
	&m20233_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2594_0_0_0;
extern Il2CppType t2594_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2594_TI;
extern Il2CppGenericClass t2594_GC;
extern TypeInfo t16_TI;
TypeInfo t2594_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2594_MIs, t2594_PIs, t2594_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2594_TI, t2594_ITIs, t2594_VT, &EmptyCustomAttributesCache, &t2594_TI, &t2594_0_0_0, &t2594_1_0_0, t2594_IOs, &t2594_GC, NULL, NULL, NULL, t2594_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2594)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4440_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.PropertyAttribute>
extern MethodInfo m26577_MI;
static PropertyInfo t4440____Count_PropertyInfo = 
{
	&t4440_TI, "Count", &m26577_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26578_MI;
static PropertyInfo t4440____IsReadOnly_PropertyInfo = 
{
	&t4440_TI, "IsReadOnly", &m26578_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4440_PIs[] =
{
	&t4440____Count_PropertyInfo,
	&t4440____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4440_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26577_MI = 
{
	"get_Count", NULL, &t4440_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4440_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m26578_MI = 
{
	"get_IsReadOnly", NULL, &t4440_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t534_0_0_0;
static ParameterInfo t4440_m26579_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t534_0_0_0},
};
extern TypeInfo t4440_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26579_MI = 
{
	"Add", NULL, &t4440_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4440_m26579_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4440_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26580_MI = 
{
	"Clear", NULL, &t4440_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t534_0_0_0;
static ParameterInfo t4440_m26581_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t534_0_0_0},
};
extern TypeInfo t4440_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26581_MI = 
{
	"Contains", NULL, &t4440_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4440_m26581_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3161_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4440_m26582_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3161_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4440_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26582_MI = 
{
	"CopyTo", NULL, &t4440_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4440_m26582_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t534_0_0_0;
static ParameterInfo t4440_m26583_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t534_0_0_0},
};
extern TypeInfo t4440_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26583_MI = 
{
	"Remove", NULL, &t4440_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4440_m26583_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4440_MIs[] =
{
	&m26577_MI,
	&m26578_MI,
	&m26579_MI,
	&m26580_MI,
	&m26581_MI,
	&m26582_MI,
	&m26583_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4442_TI;
static TypeInfo* t4440_ITIs[] = 
{
	&t592_TI,
	&t4442_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4440_0_0_0;
extern Il2CppType t4440_1_0_0;
struct t4440;
extern TypeInfo t4440_TI;
extern Il2CppGenericClass t4440_GC;
TypeInfo t4440_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4440_MIs, t4440_PIs, NULL, NULL, NULL, NULL, NULL, &t4440_TI, t4440_ITIs, NULL, &EmptyCustomAttributesCache, &t4440_TI, &t4440_0_0_0, &t4440_1_0_0, NULL, &t4440_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4442_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.PropertyAttribute>
extern TypeInfo t4442_TI;
extern Il2CppType t3536_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26584_MI = 
{
	"GetEnumerator", NULL, &t4442_TI, &t3536_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4442_MIs[] =
{
	&m26584_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4442_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4442_0_0_0;
extern Il2CppType t4442_1_0_0;
struct t4442;
extern TypeInfo t4442_TI;
extern Il2CppGenericClass t4442_GC;
TypeInfo t4442_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4442_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4442_TI, t4442_ITIs, NULL, &EmptyCustomAttributesCache, &t4442_TI, &t4442_0_0_0, &t4442_1_0_0, NULL, &t4442_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4441_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.PropertyAttribute>
extern MethodInfo m26585_MI;
extern MethodInfo m26586_MI;
static PropertyInfo t4441____Item_PropertyInfo = 
{
	&t4441_TI, "Item", &m26585_MI, &m26586_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4441_PIs[] =
{
	&t4441____Item_PropertyInfo,
	NULL
};
extern Il2CppType t534_0_0_0;
static ParameterInfo t4441_m26587_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t534_0_0_0},
};
extern TypeInfo t4441_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26587_MI = 
{
	"IndexOf", NULL, &t4441_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4441_m26587_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t534_0_0_0;
static ParameterInfo t4441_m26588_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t534_0_0_0},
};
extern TypeInfo t4441_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26588_MI = 
{
	"Insert", NULL, &t4441_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4441_m26588_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4441_m26589_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4441_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26589_MI = 
{
	"RemoveAt", NULL, &t4441_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4441_m26589_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4441_m26585_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4441_TI;
extern Il2CppType t534_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26585_MI = 
{
	"get_Item", NULL, &t4441_TI, &t534_0_0_0, RuntimeInvoker_t4_t18, t4441_m26585_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t534_0_0_0;
static ParameterInfo t4441_m26586_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t534_0_0_0},
};
extern TypeInfo t4441_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26586_MI = 
{
	"set_Item", NULL, &t4441_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4441_m26586_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4441_MIs[] =
{
	&m26587_MI,
	&m26588_MI,
	&m26589_MI,
	&m26585_MI,
	&m26586_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4440_TI;
extern TypeInfo t4442_TI;
static TypeInfo* t4441_ITIs[] = 
{
	&t592_TI,
	&t4440_TI,
	&t4442_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4441_0_0_0;
extern Il2CppType t4441_1_0_0;
struct t4441;
extern TypeInfo t4441_TI;
extern Il2CppGenericClass t4441_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4441_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4441_MIs, t4441_PIs, NULL, NULL, NULL, NULL, NULL, &t4441_TI, t4441_ITIs, NULL, &t1401__CustomAttributeCache, &t4441_TI, &t4441_0_0_0, &t4441_1_0_0, NULL, &t4441_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3537_TI;

#include "t391.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.TooltipAttribute>
extern MethodInfo m26590_MI;
static PropertyInfo t3537____Current_PropertyInfo = 
{
	&t3537_TI, "Current", &m26590_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3537_PIs[] =
{
	&t3537____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3537_TI;
extern Il2CppType t391_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26590_MI = 
{
	"get_Current", NULL, &t3537_TI, &t391_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3537_MIs[] =
{
	&m26590_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3537_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3537_0_0_0;
extern Il2CppType t3537_1_0_0;
struct t3537;
extern TypeInfo t3537_TI;
extern Il2CppGenericClass t3537_GC;
TypeInfo t3537_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3537_MIs, t3537_PIs, NULL, NULL, NULL, NULL, NULL, &t3537_TI, t3537_ITIs, NULL, &EmptyCustomAttributesCache, &t3537_TI, &t3537_0_0_0, &t3537_1_0_0, NULL, &t3537_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2595.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2595_TI;
#include "t2595MD.h"

extern TypeInfo t2595_TI;
extern TypeInfo t391_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m15048_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m20244_MI;
struct t16;
#define m20244(__this, p0, method) (t391 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m20244_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.TooltipAttribute>
extern Il2CppType t16_0_0_1;
FieldInfo t2595_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2595_TI, offsetof(t2595, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2595_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2595_TI, offsetof(t2595, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2595_FIs[] =
{
	&t2595_f0_FieldInfo,
	&t2595_f1_FieldInfo,
	NULL
};
extern MethodInfo m15045_MI;
static PropertyInfo t2595____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2595_TI, "System.Collections.IEnumerator.Current", &m15045_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15048_MI;
static PropertyInfo t2595____Current_PropertyInfo = 
{
	&t2595_TI, "Current", &m15048_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2595_PIs[] =
{
	&t2595____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2595____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2595_m15044_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2595_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15044_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2595_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2595_m15044_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2595_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15045_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2595_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2595_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15046_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2595_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2595_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m15047_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2595_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2595_TI;
extern Il2CppType t391_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15048_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2595_TI, &t391_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2595_MIs[] =
{
	&m15044_MI,
	&m15045_MI,
	&m15046_MI,
	&m15047_MI,
	&m15048_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m15045_MI;
extern MethodInfo m15047_MI;
extern MethodInfo m15046_MI;
extern MethodInfo m15048_MI;
static MethodInfo* t2595_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m15045_MI,
	&m15047_MI,
	&m15046_MI,
	&m15048_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3537_TI;
static TypeInfo* t2595_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3537_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3537_TI;
static Il2CppInterfaceOffsetPair t2595_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3537_TI, 7},
};
extern MethodInfo m15048_MI;
extern TypeInfo t391_TI;
extern MethodInfo m20244_MI;
static void* t2595_RGCTXData[3] = 
{
	&m15048_MI,
	&t391_TI,
	&m20244_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2595_0_0_0;
extern Il2CppType t2595_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2595_TI;
extern Il2CppGenericClass t2595_GC;
extern TypeInfo t16_TI;
TypeInfo t2595_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2595_MIs, t2595_PIs, t2595_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2595_TI, t2595_ITIs, t2595_VT, &EmptyCustomAttributesCache, &t2595_TI, &t2595_0_0_0, &t2595_1_0_0, t2595_IOs, &t2595_GC, NULL, NULL, NULL, t2595_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2595)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4443_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.TooltipAttribute>
extern MethodInfo m26591_MI;
static PropertyInfo t4443____Count_PropertyInfo = 
{
	&t4443_TI, "Count", &m26591_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26592_MI;
static PropertyInfo t4443____IsReadOnly_PropertyInfo = 
{
	&t4443_TI, "IsReadOnly", &m26592_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4443_PIs[] =
{
	&t4443____Count_PropertyInfo,
	&t4443____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4443_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26591_MI = 
{
	"get_Count", NULL, &t4443_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4443_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m26592_MI = 
{
	"get_IsReadOnly", NULL, &t4443_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t391_0_0_0;
static ParameterInfo t4443_m26593_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t391_0_0_0},
};
extern TypeInfo t4443_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26593_MI = 
{
	"Add", NULL, &t4443_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4443_m26593_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4443_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26594_MI = 
{
	"Clear", NULL, &t4443_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t391_0_0_0;
static ParameterInfo t4443_m26595_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t391_0_0_0},
};
extern TypeInfo t4443_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26595_MI = 
{
	"Contains", NULL, &t4443_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4443_m26595_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3162_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4443_m26596_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3162_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4443_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26596_MI = 
{
	"CopyTo", NULL, &t4443_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4443_m26596_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t391_0_0_0;
static ParameterInfo t4443_m26597_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t391_0_0_0},
};
extern TypeInfo t4443_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26597_MI = 
{
	"Remove", NULL, &t4443_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4443_m26597_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4443_MIs[] =
{
	&m26591_MI,
	&m26592_MI,
	&m26593_MI,
	&m26594_MI,
	&m26595_MI,
	&m26596_MI,
	&m26597_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4445_TI;
static TypeInfo* t4443_ITIs[] = 
{
	&t592_TI,
	&t4445_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4443_0_0_0;
extern Il2CppType t4443_1_0_0;
struct t4443;
extern TypeInfo t4443_TI;
extern Il2CppGenericClass t4443_GC;
TypeInfo t4443_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4443_MIs, t4443_PIs, NULL, NULL, NULL, NULL, NULL, &t4443_TI, t4443_ITIs, NULL, &EmptyCustomAttributesCache, &t4443_TI, &t4443_0_0_0, &t4443_1_0_0, NULL, &t4443_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4445_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.TooltipAttribute>
extern TypeInfo t4445_TI;
extern Il2CppType t3537_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26598_MI = 
{
	"GetEnumerator", NULL, &t4445_TI, &t3537_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4445_MIs[] =
{
	&m26598_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4445_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4445_0_0_0;
extern Il2CppType t4445_1_0_0;
struct t4445;
extern TypeInfo t4445_TI;
extern Il2CppGenericClass t4445_GC;
TypeInfo t4445_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4445_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4445_TI, t4445_ITIs, NULL, &EmptyCustomAttributesCache, &t4445_TI, &t4445_0_0_0, &t4445_1_0_0, NULL, &t4445_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4444_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.TooltipAttribute>
extern MethodInfo m26599_MI;
extern MethodInfo m26600_MI;
static PropertyInfo t4444____Item_PropertyInfo = 
{
	&t4444_TI, "Item", &m26599_MI, &m26600_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4444_PIs[] =
{
	&t4444____Item_PropertyInfo,
	NULL
};
extern Il2CppType t391_0_0_0;
static ParameterInfo t4444_m26601_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t391_0_0_0},
};
extern TypeInfo t4444_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26601_MI = 
{
	"IndexOf", NULL, &t4444_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4444_m26601_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t391_0_0_0;
static ParameterInfo t4444_m26602_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t391_0_0_0},
};
extern TypeInfo t4444_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26602_MI = 
{
	"Insert", NULL, &t4444_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4444_m26602_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4444_m26603_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4444_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26603_MI = 
{
	"RemoveAt", NULL, &t4444_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4444_m26603_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4444_m26599_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4444_TI;
extern Il2CppType t391_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m26599_MI = 
{
	"get_Item", NULL, &t4444_TI, &t391_0_0_0, RuntimeInvoker_t4_t18, t4444_m26599_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t391_0_0_0;
static ParameterInfo t4444_m26600_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t391_0_0_0},
};
extern TypeInfo t4444_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26600_MI = 
{
	"set_Item", NULL, &t4444_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4444_m26600_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4444_MIs[] =
{
	&m26601_MI,
	&m26602_MI,
	&m26603_MI,
	&m26599_MI,
	&m26600_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4443_TI;
extern TypeInfo t4445_TI;
static TypeInfo* t4444_ITIs[] = 
{
	&t592_TI,
	&t4443_TI,
	&t4445_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4444_0_0_0;
extern Il2CppType t4444_1_0_0;
struct t4444;
extern TypeInfo t4444_TI;
extern Il2CppGenericClass t4444_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4444_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4444_MIs, t4444_PIs, NULL, NULL, NULL, NULL, NULL, &t4444_TI, t4444_ITIs, NULL, &t1401__CustomAttributeCache, &t4444_TI, &t4444_0_0_0, &t4444_1_0_0, NULL, &t4444_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3538_TI;

#include "t386.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.SpaceAttribute>
extern MethodInfo m26604_MI;
static PropertyInfo t3538____Current_PropertyInfo = 
{
	&t3538_TI, "Current", &m26604_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3538_PIs[] =
{
	&t3538____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3538_TI;
extern Il2CppType t386_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26604_MI = 
{
	"get_Current", NULL, &t3538_TI, &t386_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3538_MIs[] =
{
	&m26604_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3538_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3538_0_0_0;
extern Il2CppType t3538_1_0_0;
struct t3538;
extern TypeInfo t3538_TI;
extern Il2CppGenericClass t3538_GC;
TypeInfo t3538_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3538_MIs, t3538_PIs, NULL, NULL, NULL, NULL, NULL, &t3538_TI, t3538_ITIs, NULL, &EmptyCustomAttributesCache, &t3538_TI, &t3538_0_0_0, &t3538_1_0_0, NULL, &t3538_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
