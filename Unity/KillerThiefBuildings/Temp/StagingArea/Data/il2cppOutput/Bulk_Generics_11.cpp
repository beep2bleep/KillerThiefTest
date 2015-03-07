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
extern TypeInfo t3406_TI;

#include "t207.h"

#include "t16.h"

// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Navigation/Mode>
extern MethodInfo m24778_MI;
static PropertyInfo t3406____Current_PropertyInfo = 
{
	&t3406_TI, "Current", &m24778_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3406_PIs[] =
{
	&t3406____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3406_TI;
extern Il2CppType t207_0_0_0;
extern void* RuntimeInvoker_t207 (MethodInfo* method, void* obj, void** args);
MethodInfo m24778_MI = 
{
	"get_Current", NULL, &t3406_TI, &t207_0_0_0, RuntimeInvoker_t207, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3406_MIs[] =
{
	&m24778_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3406_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3406_0_0_0;
extern Il2CppType t3406_1_0_0;
struct t3406;
extern TypeInfo t3406_TI;
extern Il2CppGenericClass t3406_GC;
TypeInfo t3406_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3406_MIs, t3406_PIs, NULL, NULL, NULL, NULL, NULL, &t3406_TI, t3406_ITIs, NULL, &EmptyCustomAttributesCache, &t3406_TI, &t3406_0_0_0, &t3406_1_0_0, NULL, &t3406_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2122.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2122_TI;
#include "t2122MD.h"

#include "t4.h"
#include "t18.h"
#include "t8.h"
#include "t1270.h"
#include "t17.h"
#include "t19.h"
extern TypeInfo t2122_TI;
extern TypeInfo t207_TI;
extern TypeInfo t1270_TI;
#include "t1270MD.h"
#include "t16MD.h"
extern MethodInfo m12085_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18639_MI;
struct t16;
#include "t1234.h"
 int32_t m18639 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18639_MI;


extern MethodInfo m12081_MI;
 void m12081 (t2122 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12082_MI;
 t4 * m12082 (t2122 * __this, MethodInfo* method){
	{
		int32_t L_0 = m12085(__this, &m12085_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t207_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m12083_MI;
 void m12083 (t2122 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12084_MI;
 bool m12084 (t2122 * __this, MethodInfo* method){
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
extern MethodInfo m12085_MI;
 int32_t m12085 (t2122 * __this, MethodInfo* method){
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
		int32_t L_8 = m18639(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18639_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Navigation/Mode>
extern Il2CppType t16_0_0_1;
FieldInfo t2122_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2122_TI, offsetof(t2122, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2122_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2122_TI, offsetof(t2122, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2122_FIs[] =
{
	&t2122_f0_FieldInfo,
	&t2122_f1_FieldInfo,
	NULL
};
extern MethodInfo m12082_MI;
static PropertyInfo t2122____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2122_TI, "System.Collections.IEnumerator.Current", &m12082_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12085_MI;
static PropertyInfo t2122____Current_PropertyInfo = 
{
	&t2122_TI, "Current", &m12085_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2122_PIs[] =
{
	&t2122____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2122____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2122_m12081_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2122_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12081_MI = 
{
	".ctor", (methodPointerType)&m12081, &t2122_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2122_m12081_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2122_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12082_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12082, &t2122_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2122_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12083_MI = 
{
	"Dispose", (methodPointerType)&m12083, &t2122_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2122_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12084_MI = 
{
	"MoveNext", (methodPointerType)&m12084, &t2122_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2122_TI;
extern Il2CppType t207_0_0_0;
extern void* RuntimeInvoker_t207 (MethodInfo* method, void* obj, void** args);
MethodInfo m12085_MI = 
{
	"get_Current", (methodPointerType)&m12085, &t2122_TI, &t207_0_0_0, RuntimeInvoker_t207, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2122_MIs[] =
{
	&m12081_MI,
	&m12082_MI,
	&m12083_MI,
	&m12084_MI,
	&m12085_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m12082_MI;
extern MethodInfo m12084_MI;
extern MethodInfo m12083_MI;
extern MethodInfo m12085_MI;
static MethodInfo* t2122_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m12082_MI,
	&m12084_MI,
	&m12083_MI,
	&m12085_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3406_TI;
static TypeInfo* t2122_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3406_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3406_TI;
static Il2CppInterfaceOffsetPair t2122_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3406_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2122_0_0_0;
extern Il2CppType t2122_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2122_TI;
extern Il2CppGenericClass t2122_GC;
extern TypeInfo t16_TI;
TypeInfo t2122_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2122_MIs, t2122_PIs, t2122_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2122_TI, t2122_ITIs, t2122_VT, &EmptyCustomAttributesCache, &t2122_TI, &t2122_0_0_0, &t2122_1_0_0, t2122_IOs, &t2122_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2122)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4089_TI;

#include "UnityEngine.UI_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Navigation/Mode>
extern MethodInfo m24779_MI;
static PropertyInfo t4089____Count_PropertyInfo = 
{
	&t4089_TI, "Count", &m24779_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24780_MI;
static PropertyInfo t4089____IsReadOnly_PropertyInfo = 
{
	&t4089_TI, "IsReadOnly", &m24780_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4089_PIs[] =
{
	&t4089____Count_PropertyInfo,
	&t4089____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4089_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24779_MI = 
{
	"get_Count", NULL, &t4089_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4089_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24780_MI = 
{
	"get_IsReadOnly", NULL, &t4089_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t4089_m24781_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t4089_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24781_MI = 
{
	"Add", NULL, &t4089_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4089_m24781_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4089_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24782_MI = 
{
	"Clear", NULL, &t4089_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t4089_m24783_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t4089_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24783_MI = 
{
	"Contains", NULL, &t4089_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t4089_m24783_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3231_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4089_m24784_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3231_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4089_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24784_MI = 
{
	"CopyTo", NULL, &t4089_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4089_m24784_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t4089_m24785_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t4089_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24785_MI = 
{
	"Remove", NULL, &t4089_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t4089_m24785_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4089_MIs[] =
{
	&m24779_MI,
	&m24780_MI,
	&m24781_MI,
	&m24782_MI,
	&m24783_MI,
	&m24784_MI,
	&m24785_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4091_TI;
static TypeInfo* t4089_ITIs[] = 
{
	&t592_TI,
	&t4091_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4089_0_0_0;
extern Il2CppType t4089_1_0_0;
struct t4089;
extern TypeInfo t4089_TI;
extern Il2CppGenericClass t4089_GC;
TypeInfo t4089_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4089_MIs, t4089_PIs, NULL, NULL, NULL, NULL, NULL, &t4089_TI, t4089_ITIs, NULL, &EmptyCustomAttributesCache, &t4089_TI, &t4089_0_0_0, &t4089_1_0_0, NULL, &t4089_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4091_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Navigation/Mode>
extern TypeInfo t4091_TI;
extern Il2CppType t3406_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24786_MI = 
{
	"GetEnumerator", NULL, &t4091_TI, &t3406_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4091_MIs[] =
{
	&m24786_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4091_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4091_0_0_0;
extern Il2CppType t4091_1_0_0;
struct t4091;
extern TypeInfo t4091_TI;
extern Il2CppGenericClass t4091_GC;
TypeInfo t4091_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4091_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4091_TI, t4091_ITIs, NULL, &EmptyCustomAttributesCache, &t4091_TI, &t4091_0_0_0, &t4091_1_0_0, NULL, &t4091_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4090_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Navigation/Mode>
extern MethodInfo m24787_MI;
extern MethodInfo m24788_MI;
static PropertyInfo t4090____Item_PropertyInfo = 
{
	&t4090_TI, "Item", &m24787_MI, &m24788_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4090_PIs[] =
{
	&t4090____Item_PropertyInfo,
	NULL
};
extern Il2CppType t207_0_0_0;
static ParameterInfo t4090_m24789_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t4090_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24789_MI = 
{
	"IndexOf", NULL, &t4090_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t4090_m24789_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t4090_m24790_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t4090_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24790_MI = 
{
	"Insert", NULL, &t4090_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t4090_m24790_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4090_m24791_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4090_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24791_MI = 
{
	"RemoveAt", NULL, &t4090_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4090_m24791_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4090_m24787_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4090_TI;
extern Il2CppType t207_0_0_0;
extern void* RuntimeInvoker_t207_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24787_MI = 
{
	"get_Item", NULL, &t4090_TI, &t207_0_0_0, RuntimeInvoker_t207_t18, t4090_m24787_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t4090_m24788_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t4090_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24788_MI = 
{
	"set_Item", NULL, &t4090_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t4090_m24788_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4090_MIs[] =
{
	&m24789_MI,
	&m24790_MI,
	&m24791_MI,
	&m24787_MI,
	&m24788_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4089_TI;
extern TypeInfo t4091_TI;
static TypeInfo* t4090_ITIs[] = 
{
	&t592_TI,
	&t4089_TI,
	&t4091_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4090_0_0_0;
extern Il2CppType t4090_1_0_0;
struct t4090;
extern TypeInfo t4090_TI;
extern Il2CppGenericClass t4090_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4090_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4090_MIs, t4090_PIs, NULL, NULL, NULL, NULL, NULL, &t4090_TI, t4090_ITIs, NULL, &t1401__CustomAttributeCache, &t4090_TI, &t4090_0_0_0, &t4090_1_0_0, NULL, &t4090_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3407_TI;

#include "t209.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.RawImage>
extern MethodInfo m24792_MI;
static PropertyInfo t3407____Current_PropertyInfo = 
{
	&t3407_TI, "Current", &m24792_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3407_PIs[] =
{
	&t3407____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3407_TI;
extern Il2CppType t209_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24792_MI = 
{
	"get_Current", NULL, &t3407_TI, &t209_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3407_MIs[] =
{
	&m24792_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3407_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3407_0_0_0;
extern Il2CppType t3407_1_0_0;
struct t3407;
extern TypeInfo t3407_TI;
extern Il2CppGenericClass t3407_GC;
TypeInfo t3407_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3407_MIs, t3407_PIs, NULL, NULL, NULL, NULL, NULL, &t3407_TI, t3407_ITIs, NULL, &EmptyCustomAttributesCache, &t3407_TI, &t3407_0_0_0, &t3407_1_0_0, NULL, &t3407_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2123.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2123_TI;
#include "t2123MD.h"

extern TypeInfo t2123_TI;
extern TypeInfo t209_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m12090_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18650_MI;
struct t16;
struct t16;
 t4 * m16827_gshared (t16 * __this, int32_t p0, MethodInfo* method);
#define m16827(__this, p0, method) (t4 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
#define m18650(__this, p0, method) (t209 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m18650_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.RawImage>
extern Il2CppType t16_0_0_1;
FieldInfo t2123_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2123_TI, offsetof(t2123, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2123_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2123_TI, offsetof(t2123, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2123_FIs[] =
{
	&t2123_f0_FieldInfo,
	&t2123_f1_FieldInfo,
	NULL
};
extern MethodInfo m12087_MI;
static PropertyInfo t2123____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2123_TI, "System.Collections.IEnumerator.Current", &m12087_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12090_MI;
static PropertyInfo t2123____Current_PropertyInfo = 
{
	&t2123_TI, "Current", &m12090_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2123_PIs[] =
{
	&t2123____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2123____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2123_m12086_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2123_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12086_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2123_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2123_m12086_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2123_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12087_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2123_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2123_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12088_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2123_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2123_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12089_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2123_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2123_TI;
extern Il2CppType t209_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12090_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2123_TI, &t209_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2123_MIs[] =
{
	&m12086_MI,
	&m12087_MI,
	&m12088_MI,
	&m12089_MI,
	&m12090_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m12087_MI;
extern MethodInfo m12089_MI;
extern MethodInfo m12088_MI;
extern MethodInfo m12090_MI;
static MethodInfo* t2123_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m12087_MI,
	&m12089_MI,
	&m12088_MI,
	&m12090_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3407_TI;
static TypeInfo* t2123_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3407_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3407_TI;
static Il2CppInterfaceOffsetPair t2123_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3407_TI, 7},
};
extern MethodInfo m12090_MI;
extern TypeInfo t209_TI;
extern MethodInfo m18650_MI;
static void* t2123_RGCTXData[3] = 
{
	&m12090_MI,
	&t209_TI,
	&m18650_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2123_0_0_0;
extern Il2CppType t2123_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2123_TI;
extern Il2CppGenericClass t2123_GC;
extern TypeInfo t16_TI;
TypeInfo t2123_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2123_MIs, t2123_PIs, t2123_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2123_TI, t2123_ITIs, t2123_VT, &EmptyCustomAttributesCache, &t2123_TI, &t2123_0_0_0, &t2123_1_0_0, t2123_IOs, &t2123_GC, NULL, NULL, NULL, t2123_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2123)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4092_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.RawImage>
extern MethodInfo m24793_MI;
static PropertyInfo t4092____Count_PropertyInfo = 
{
	&t4092_TI, "Count", &m24793_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24794_MI;
static PropertyInfo t4092____IsReadOnly_PropertyInfo = 
{
	&t4092_TI, "IsReadOnly", &m24794_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4092_PIs[] =
{
	&t4092____Count_PropertyInfo,
	&t4092____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4092_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24793_MI = 
{
	"get_Count", NULL, &t4092_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4092_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24794_MI = 
{
	"get_IsReadOnly", NULL, &t4092_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t209_0_0_0;
static ParameterInfo t4092_m24795_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t209_0_0_0},
};
extern TypeInfo t4092_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24795_MI = 
{
	"Add", NULL, &t4092_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4092_m24795_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4092_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24796_MI = 
{
	"Clear", NULL, &t4092_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t209_0_0_0;
static ParameterInfo t4092_m24797_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t209_0_0_0},
};
extern TypeInfo t4092_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24797_MI = 
{
	"Contains", NULL, &t4092_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4092_m24797_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3232_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4092_m24798_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3232_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4092_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24798_MI = 
{
	"CopyTo", NULL, &t4092_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4092_m24798_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t209_0_0_0;
static ParameterInfo t4092_m24799_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t209_0_0_0},
};
extern TypeInfo t4092_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24799_MI = 
{
	"Remove", NULL, &t4092_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4092_m24799_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4092_MIs[] =
{
	&m24793_MI,
	&m24794_MI,
	&m24795_MI,
	&m24796_MI,
	&m24797_MI,
	&m24798_MI,
	&m24799_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4094_TI;
static TypeInfo* t4092_ITIs[] = 
{
	&t592_TI,
	&t4094_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4092_0_0_0;
extern Il2CppType t4092_1_0_0;
struct t4092;
extern TypeInfo t4092_TI;
extern Il2CppGenericClass t4092_GC;
TypeInfo t4092_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4092_MIs, t4092_PIs, NULL, NULL, NULL, NULL, NULL, &t4092_TI, t4092_ITIs, NULL, &EmptyCustomAttributesCache, &t4092_TI, &t4092_0_0_0, &t4092_1_0_0, NULL, &t4092_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4094_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.RawImage>
extern TypeInfo t4094_TI;
extern Il2CppType t3407_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24800_MI = 
{
	"GetEnumerator", NULL, &t4094_TI, &t3407_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4094_MIs[] =
{
	&m24800_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4094_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4094_0_0_0;
extern Il2CppType t4094_1_0_0;
struct t4094;
extern TypeInfo t4094_TI;
extern Il2CppGenericClass t4094_GC;
TypeInfo t4094_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4094_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4094_TI, t4094_ITIs, NULL, &EmptyCustomAttributesCache, &t4094_TI, &t4094_0_0_0, &t4094_1_0_0, NULL, &t4094_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4093_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.RawImage>
extern MethodInfo m24801_MI;
extern MethodInfo m24802_MI;
static PropertyInfo t4093____Item_PropertyInfo = 
{
	&t4093_TI, "Item", &m24801_MI, &m24802_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4093_PIs[] =
{
	&t4093____Item_PropertyInfo,
	NULL
};
extern Il2CppType t209_0_0_0;
static ParameterInfo t4093_m24803_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t209_0_0_0},
};
extern TypeInfo t4093_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24803_MI = 
{
	"IndexOf", NULL, &t4093_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4093_m24803_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t209_0_0_0;
static ParameterInfo t4093_m24804_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t209_0_0_0},
};
extern TypeInfo t4093_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24804_MI = 
{
	"Insert", NULL, &t4093_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4093_m24804_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4093_m24805_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4093_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24805_MI = 
{
	"RemoveAt", NULL, &t4093_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4093_m24805_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4093_m24801_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4093_TI;
extern Il2CppType t209_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24801_MI = 
{
	"get_Item", NULL, &t4093_TI, &t209_0_0_0, RuntimeInvoker_t4_t18, t4093_m24801_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t209_0_0_0;
static ParameterInfo t4093_m24802_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t209_0_0_0},
};
extern TypeInfo t4093_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24802_MI = 
{
	"set_Item", NULL, &t4093_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4093_m24802_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4093_MIs[] =
{
	&m24803_MI,
	&m24804_MI,
	&m24805_MI,
	&m24801_MI,
	&m24802_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4092_TI;
extern TypeInfo t4094_TI;
static TypeInfo* t4093_ITIs[] = 
{
	&t592_TI,
	&t4092_TI,
	&t4094_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4093_0_0_0;
extern Il2CppType t4093_1_0_0;
struct t4093;
extern TypeInfo t4093_TI;
extern Il2CppGenericClass t4093_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4093_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4093_MIs, t4093_PIs, NULL, NULL, NULL, NULL, NULL, &t4093_TI, t4093_ITIs, NULL, &t1401__CustomAttributeCache, &t4093_TI, &t4093_0_0_0, &t4093_1_0_0, NULL, &t4093_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2124.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2124_TI;
#include "t2124MD.h"

#include "t22.h"
#include "t546.h"
#include "mscorlib_ArrayTypes.h"
#include "t2125.h"
extern TypeInfo t309_TI;
extern TypeInfo t4_TI;
extern TypeInfo t2124_TI;
extern TypeInfo t209_TI;
extern TypeInfo t2125_TI;
extern TypeInfo t17_TI;
#include "t2125MD.h"
extern MethodInfo m12093_MI;
extern MethodInfo m12095_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.RawImage>
extern Il2CppType t309_0_0_33;
FieldInfo t2124_f1_FieldInfo = 
{
	"m_Arg1", &t309_0_0_33, &t2124_TI, offsetof(t2124, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2124_FIs[] =
{
	&t2124_f1_FieldInfo,
	NULL
};
extern Il2CppType t22_0_0_0;
extern Il2CppType t546_0_0_0;
extern Il2CppType t209_0_0_0;
static ParameterInfo t2124_m12091_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t22_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t209_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12091_MI = 
{
	".ctor", (methodPointerType)&m7891_gshared, &t2124_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4_t4, t2124_m12091_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2124_m12092_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12092_MI = 
{
	"Invoke", (methodPointerType)&m7893_gshared, &t2124_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2124_m12092_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2124_MIs[] =
{
	&m12091_MI,
	&m12092_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12092_MI;
extern MethodInfo m12096_MI;
static MethodInfo* t2124_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12092_MI,
	&m12096_MI,
};
extern Il2CppType t2126_0_0_0;
extern TypeInfo t2126_TI;
extern MethodInfo m18660_MI;
extern TypeInfo t209_TI;
extern MethodInfo m12098_MI;
extern MethodInfo m12093_MI;
extern TypeInfo t209_TI;
extern MethodInfo m12095_MI;
static void* t2124_RGCTXData[8] = 
{
	(void*)&t2126_0_0_0,
	&t2126_TI,
	&m18660_MI,
	&t209_TI,
	&m12098_MI,
	&m12093_MI,
	&t209_TI,
	&m12095_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2124_0_0_0;
extern Il2CppType t2124_1_0_0;
extern TypeInfo t2125_TI;
struct t2124;
extern TypeInfo t2124_TI;
extern Il2CppGenericClass t2124_GC;
TypeInfo t2124_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2124_MIs, NULL, t2124_FIs, NULL, &t2125_TI, NULL, NULL, &t2124_TI, NULL, t2124_VT, &EmptyCustomAttributesCache, &t2124_TI, &t2124_0_0_0, &t2124_1_0_0, NULL, &t2124_GC, NULL, NULL, NULL, t2124_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2124), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2125_TI;

#include "t2126.h"
#include "t294.h"
#include "t295.h"
#include "t345.h"
#include "t307.h"
extern TypeInfo t2125_TI;
extern TypeInfo t2126_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t209_TI;
extern TypeInfo t17_TI;
#include "t545MD.h"
#include "t294MD.h"
#include "t345MD.h"
#include "t307MD.h"
#include "t2126MD.h"
extern Il2CppType t2126_0_0_0;
extern MethodInfo m2791_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2954_MI;
extern MethodInfo m1592_MI;
extern MethodInfo m2790_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m18660_MI;
extern MethodInfo m2792_MI;
extern MethodInfo m12098_MI;
extern MethodInfo m2950_MI;
extern MethodInfo m2948_MI;
struct t545;
#include "t545.h"
struct t545;
 void m16892_gshared (t4 * __this, t4 * p0, MethodInfo* method);
#define m16892(__this, p0, method) (void)m16892_gshared((t4 *)__this, (t4 *)p0, method)
#define m18660(__this, p0, method) (void)m16892_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m18660_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.RawImage>
extern Il2CppType t2126_0_0_1;
FieldInfo t2125_f0_FieldInfo = 
{
	"Delegate", &t2126_0_0_1, &t2125_TI, offsetof(t2125, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2125_FIs[] =
{
	&t2125_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2125_m12093_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2125_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12093_MI = 
{
	".ctor", (methodPointerType)&m7894_gshared, &t2125_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2125_m12093_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2126_0_0_0;
static ParameterInfo t2125_m12094_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2126_0_0_0},
};
extern TypeInfo t2125_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12094_MI = 
{
	".ctor", (methodPointerType)&m7895_gshared, &t2125_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2125_m12094_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2125_m12095_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2125_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12095_MI = 
{
	"Invoke", (methodPointerType)&m7896_gshared, &t2125_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2125_m12095_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2125_m12096_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2125_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12096_MI = 
{
	"Find", (methodPointerType)&m7897_gshared, &t2125_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2125_m12096_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2125_MIs[] =
{
	&m12093_MI,
	&m12094_MI,
	&m12095_MI,
	&m12096_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12095_MI;
extern MethodInfo m12096_MI;
static MethodInfo* t2125_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12095_MI,
	&m12096_MI,
};
extern Il2CppType t2126_0_0_0;
extern TypeInfo t2126_TI;
extern MethodInfo m18660_MI;
extern TypeInfo t209_TI;
extern MethodInfo m12098_MI;
static void* t2125_RGCTXData[5] = 
{
	(void*)&t2126_0_0_0,
	&t2126_TI,
	&m18660_MI,
	&t209_TI,
	&m12098_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2125_0_0_0;
extern Il2CppType t2125_1_0_0;
extern TypeInfo t545_TI;
struct t2125;
extern TypeInfo t2125_TI;
extern Il2CppGenericClass t2125_GC;
TypeInfo t2125_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2125_MIs, NULL, t2125_FIs, NULL, &t545_TI, NULL, NULL, &t2125_TI, NULL, t2125_VT, &EmptyCustomAttributesCache, &t2125_TI, &t2125_0_0_0, &t2125_1_0_0, NULL, &t2125_GC, NULL, NULL, NULL, t2125_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2125), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2126_TI;

#include "t56.h"
#include "t55.h"


// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.RawImage>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2126_m12097_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2126_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m12097_MI = 
{
	".ctor", (methodPointerType)&m7898_gshared, &t2126_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2126_m12097_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t209_0_0_0;
static ParameterInfo t2126_m12098_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t209_0_0_0},
};
extern TypeInfo t2126_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12098_MI = 
{
	"Invoke", (methodPointerType)&m7899_gshared, &t2126_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2126_m12098_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t209_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2126_m12099_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t209_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2126_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12099_MI = 
{
	"BeginInvoke", (methodPointerType)&m7900_gshared, &t2126_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2126_m12099_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2126_m12100_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2126_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12100_MI = 
{
	"EndInvoke", (methodPointerType)&m7901_gshared, &t2126_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2126_m12100_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2126_MIs[] =
{
	&m12097_MI,
	&m12098_MI,
	&m12099_MI,
	&m12100_MI,
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
extern MethodInfo m12098_MI;
extern MethodInfo m12099_MI;
extern MethodInfo m12100_MI;
static MethodInfo* t2126_VT[] =
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
	&m12098_MI,
	&m12099_MI,
	&m12100_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2126_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2126_0_0_0;
extern Il2CppType t2126_1_0_0;
extern TypeInfo t193_TI;
struct t2126;
extern TypeInfo t2126_TI;
extern Il2CppGenericClass t2126_GC;
TypeInfo t2126_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2126_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2126_TI, NULL, t2126_VT, &EmptyCustomAttributesCache, &t2126_TI, &t2126_0_0_0, &t2126_1_0_0, t2126_IOs, &t2126_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2126), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3408_TI;

#include "t215.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Scrollbar>
extern MethodInfo m24806_MI;
static PropertyInfo t3408____Current_PropertyInfo = 
{
	&t3408_TI, "Current", &m24806_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3408_PIs[] =
{
	&t3408____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3408_TI;
extern Il2CppType t215_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24806_MI = 
{
	"get_Current", NULL, &t3408_TI, &t215_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3408_MIs[] =
{
	&m24806_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3408_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3408_0_0_0;
extern Il2CppType t3408_1_0_0;
struct t3408;
extern TypeInfo t3408_TI;
extern Il2CppGenericClass t3408_GC;
TypeInfo t3408_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3408_MIs, t3408_PIs, NULL, NULL, NULL, NULL, NULL, &t3408_TI, t3408_ITIs, NULL, &EmptyCustomAttributesCache, &t3408_TI, &t3408_0_0_0, &t3408_1_0_0, NULL, &t3408_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2127.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2127_TI;
#include "t2127MD.h"

extern TypeInfo t2127_TI;
extern TypeInfo t215_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m12105_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18662_MI;
struct t16;
#define m18662(__this, p0, method) (t215 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m18662_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Scrollbar>
extern Il2CppType t16_0_0_1;
FieldInfo t2127_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2127_TI, offsetof(t2127, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2127_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2127_TI, offsetof(t2127, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2127_FIs[] =
{
	&t2127_f0_FieldInfo,
	&t2127_f1_FieldInfo,
	NULL
};
extern MethodInfo m12102_MI;
static PropertyInfo t2127____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2127_TI, "System.Collections.IEnumerator.Current", &m12102_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12105_MI;
static PropertyInfo t2127____Current_PropertyInfo = 
{
	&t2127_TI, "Current", &m12105_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2127_PIs[] =
{
	&t2127____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2127____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2127_m12101_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2127_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12101_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2127_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2127_m12101_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2127_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12102_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2127_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2127_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12103_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2127_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2127_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12104_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2127_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2127_TI;
extern Il2CppType t215_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12105_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2127_TI, &t215_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2127_MIs[] =
{
	&m12101_MI,
	&m12102_MI,
	&m12103_MI,
	&m12104_MI,
	&m12105_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m12102_MI;
extern MethodInfo m12104_MI;
extern MethodInfo m12103_MI;
extern MethodInfo m12105_MI;
static MethodInfo* t2127_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m12102_MI,
	&m12104_MI,
	&m12103_MI,
	&m12105_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3408_TI;
static TypeInfo* t2127_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3408_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3408_TI;
static Il2CppInterfaceOffsetPair t2127_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3408_TI, 7},
};
extern MethodInfo m12105_MI;
extern TypeInfo t215_TI;
extern MethodInfo m18662_MI;
static void* t2127_RGCTXData[3] = 
{
	&m12105_MI,
	&t215_TI,
	&m18662_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2127_0_0_0;
extern Il2CppType t2127_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2127_TI;
extern Il2CppGenericClass t2127_GC;
extern TypeInfo t16_TI;
TypeInfo t2127_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2127_MIs, t2127_PIs, t2127_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2127_TI, t2127_ITIs, t2127_VT, &EmptyCustomAttributesCache, &t2127_TI, &t2127_0_0_0, &t2127_1_0_0, t2127_IOs, &t2127_GC, NULL, NULL, NULL, t2127_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2127)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4095_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Scrollbar>
extern MethodInfo m24807_MI;
static PropertyInfo t4095____Count_PropertyInfo = 
{
	&t4095_TI, "Count", &m24807_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24808_MI;
static PropertyInfo t4095____IsReadOnly_PropertyInfo = 
{
	&t4095_TI, "IsReadOnly", &m24808_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4095_PIs[] =
{
	&t4095____Count_PropertyInfo,
	&t4095____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4095_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24807_MI = 
{
	"get_Count", NULL, &t4095_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4095_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24808_MI = 
{
	"get_IsReadOnly", NULL, &t4095_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t215_0_0_0;
static ParameterInfo t4095_m24809_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t215_0_0_0},
};
extern TypeInfo t4095_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24809_MI = 
{
	"Add", NULL, &t4095_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4095_m24809_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4095_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24810_MI = 
{
	"Clear", NULL, &t4095_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t215_0_0_0;
static ParameterInfo t4095_m24811_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t215_0_0_0},
};
extern TypeInfo t4095_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24811_MI = 
{
	"Contains", NULL, &t4095_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4095_m24811_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3233_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4095_m24812_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3233_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4095_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24812_MI = 
{
	"CopyTo", NULL, &t4095_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4095_m24812_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t215_0_0_0;
static ParameterInfo t4095_m24813_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t215_0_0_0},
};
extern TypeInfo t4095_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24813_MI = 
{
	"Remove", NULL, &t4095_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4095_m24813_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4095_MIs[] =
{
	&m24807_MI,
	&m24808_MI,
	&m24809_MI,
	&m24810_MI,
	&m24811_MI,
	&m24812_MI,
	&m24813_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4097_TI;
static TypeInfo* t4095_ITIs[] = 
{
	&t592_TI,
	&t4097_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4095_0_0_0;
extern Il2CppType t4095_1_0_0;
struct t4095;
extern TypeInfo t4095_TI;
extern Il2CppGenericClass t4095_GC;
TypeInfo t4095_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4095_MIs, t4095_PIs, NULL, NULL, NULL, NULL, NULL, &t4095_TI, t4095_ITIs, NULL, &EmptyCustomAttributesCache, &t4095_TI, &t4095_0_0_0, &t4095_1_0_0, NULL, &t4095_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4097_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Scrollbar>
extern TypeInfo t4097_TI;
extern Il2CppType t3408_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24814_MI = 
{
	"GetEnumerator", NULL, &t4097_TI, &t3408_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4097_MIs[] =
{
	&m24814_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4097_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4097_0_0_0;
extern Il2CppType t4097_1_0_0;
struct t4097;
extern TypeInfo t4097_TI;
extern Il2CppGenericClass t4097_GC;
TypeInfo t4097_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4097_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4097_TI, t4097_ITIs, NULL, &EmptyCustomAttributesCache, &t4097_TI, &t4097_0_0_0, &t4097_1_0_0, NULL, &t4097_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4096_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Scrollbar>
extern MethodInfo m24815_MI;
extern MethodInfo m24816_MI;
static PropertyInfo t4096____Item_PropertyInfo = 
{
	&t4096_TI, "Item", &m24815_MI, &m24816_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4096_PIs[] =
{
	&t4096____Item_PropertyInfo,
	NULL
};
extern Il2CppType t215_0_0_0;
static ParameterInfo t4096_m24817_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t215_0_0_0},
};
extern TypeInfo t4096_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24817_MI = 
{
	"IndexOf", NULL, &t4096_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4096_m24817_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t215_0_0_0;
static ParameterInfo t4096_m24818_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t215_0_0_0},
};
extern TypeInfo t4096_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24818_MI = 
{
	"Insert", NULL, &t4096_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4096_m24818_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4096_m24819_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4096_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24819_MI = 
{
	"RemoveAt", NULL, &t4096_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4096_m24819_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4096_m24815_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4096_TI;
extern Il2CppType t215_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24815_MI = 
{
	"get_Item", NULL, &t4096_TI, &t215_0_0_0, RuntimeInvoker_t4_t18, t4096_m24815_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t215_0_0_0;
static ParameterInfo t4096_m24816_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t215_0_0_0},
};
extern TypeInfo t4096_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24816_MI = 
{
	"set_Item", NULL, &t4096_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4096_m24816_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4096_MIs[] =
{
	&m24817_MI,
	&m24818_MI,
	&m24819_MI,
	&m24815_MI,
	&m24816_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4095_TI;
extern TypeInfo t4097_TI;
static TypeInfo* t4096_ITIs[] = 
{
	&t592_TI,
	&t4095_TI,
	&t4097_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4096_0_0_0;
extern Il2CppType t4096_1_0_0;
struct t4096;
extern TypeInfo t4096_TI;
extern Il2CppGenericClass t4096_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4096_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4096_MIs, t4096_PIs, NULL, NULL, NULL, NULL, NULL, &t4096_TI, t4096_ITIs, NULL, &t1401__CustomAttributeCache, &t4096_TI, &t4096_0_0_0, &t4096_1_0_0, NULL, &t4096_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2128.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2128_TI;
#include "t2128MD.h"

#include "t2129.h"
extern TypeInfo t309_TI;
extern TypeInfo t4_TI;
extern TypeInfo t2128_TI;
extern TypeInfo t215_TI;
extern TypeInfo t2129_TI;
extern TypeInfo t17_TI;
#include "t2129MD.h"
extern MethodInfo m12108_MI;
extern MethodInfo m12110_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Scrollbar>
extern Il2CppType t309_0_0_33;
FieldInfo t2128_f1_FieldInfo = 
{
	"m_Arg1", &t309_0_0_33, &t2128_TI, offsetof(t2128, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2128_FIs[] =
{
	&t2128_f1_FieldInfo,
	NULL
};
extern Il2CppType t22_0_0_0;
extern Il2CppType t546_0_0_0;
extern Il2CppType t215_0_0_0;
static ParameterInfo t2128_m12106_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t22_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t215_0_0_0},
};
extern TypeInfo t2128_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12106_MI = 
{
	".ctor", (methodPointerType)&m7891_gshared, &t2128_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4_t4, t2128_m12106_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2128_m12107_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2128_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12107_MI = 
{
	"Invoke", (methodPointerType)&m7893_gshared, &t2128_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2128_m12107_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2128_MIs[] =
{
	&m12106_MI,
	&m12107_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12107_MI;
extern MethodInfo m12111_MI;
static MethodInfo* t2128_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12107_MI,
	&m12111_MI,
};
extern Il2CppType t2130_0_0_0;
extern TypeInfo t2130_TI;
extern MethodInfo m18672_MI;
extern TypeInfo t215_TI;
extern MethodInfo m12113_MI;
extern MethodInfo m12108_MI;
extern TypeInfo t215_TI;
extern MethodInfo m12110_MI;
static void* t2128_RGCTXData[8] = 
{
	(void*)&t2130_0_0_0,
	&t2130_TI,
	&m18672_MI,
	&t215_TI,
	&m12113_MI,
	&m12108_MI,
	&t215_TI,
	&m12110_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2128_0_0_0;
extern Il2CppType t2128_1_0_0;
extern TypeInfo t2129_TI;
struct t2128;
extern TypeInfo t2128_TI;
extern Il2CppGenericClass t2128_GC;
TypeInfo t2128_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2128_MIs, NULL, t2128_FIs, NULL, &t2129_TI, NULL, NULL, &t2128_TI, NULL, t2128_VT, &EmptyCustomAttributesCache, &t2128_TI, &t2128_0_0_0, &t2128_1_0_0, NULL, &t2128_GC, NULL, NULL, NULL, t2128_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2128), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2129_TI;

#include "t2130.h"
extern TypeInfo t2129_TI;
extern TypeInfo t2130_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t215_TI;
extern TypeInfo t17_TI;
#include "t2130MD.h"
extern Il2CppType t2130_0_0_0;
extern MethodInfo m2791_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2954_MI;
extern MethodInfo m1592_MI;
extern MethodInfo m2790_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m18672_MI;
extern MethodInfo m2792_MI;
extern MethodInfo m12113_MI;
extern MethodInfo m2950_MI;
extern MethodInfo m2948_MI;
struct t545;
#define m18672(__this, p0, method) (void)m16892_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m18672_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Scrollbar>
extern Il2CppType t2130_0_0_1;
FieldInfo t2129_f0_FieldInfo = 
{
	"Delegate", &t2130_0_0_1, &t2129_TI, offsetof(t2129, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2129_FIs[] =
{
	&t2129_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2129_m12108_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2129_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12108_MI = 
{
	".ctor", (methodPointerType)&m7894_gshared, &t2129_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2129_m12108_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2130_0_0_0;
static ParameterInfo t2129_m12109_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2130_0_0_0},
};
extern TypeInfo t2129_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12109_MI = 
{
	".ctor", (methodPointerType)&m7895_gshared, &t2129_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2129_m12109_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2129_m12110_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2129_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12110_MI = 
{
	"Invoke", (methodPointerType)&m7896_gshared, &t2129_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2129_m12110_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2129_m12111_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2129_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12111_MI = 
{
	"Find", (methodPointerType)&m7897_gshared, &t2129_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2129_m12111_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2129_MIs[] =
{
	&m12108_MI,
	&m12109_MI,
	&m12110_MI,
	&m12111_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12110_MI;
extern MethodInfo m12111_MI;
static MethodInfo* t2129_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12110_MI,
	&m12111_MI,
};
extern Il2CppType t2130_0_0_0;
extern TypeInfo t2130_TI;
extern MethodInfo m18672_MI;
extern TypeInfo t215_TI;
extern MethodInfo m12113_MI;
static void* t2129_RGCTXData[5] = 
{
	(void*)&t2130_0_0_0,
	&t2130_TI,
	&m18672_MI,
	&t215_TI,
	&m12113_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2129_0_0_0;
extern Il2CppType t2129_1_0_0;
extern TypeInfo t545_TI;
struct t2129;
extern TypeInfo t2129_TI;
extern Il2CppGenericClass t2129_GC;
TypeInfo t2129_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2129_MIs, NULL, t2129_FIs, NULL, &t545_TI, NULL, NULL, &t2129_TI, NULL, t2129_VT, &EmptyCustomAttributesCache, &t2129_TI, &t2129_0_0_0, &t2129_1_0_0, NULL, &t2129_GC, NULL, NULL, NULL, t2129_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2129), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2130_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.Scrollbar>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2130_m12112_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2130_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m12112_MI = 
{
	".ctor", (methodPointerType)&m7898_gshared, &t2130_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2130_m12112_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t215_0_0_0;
static ParameterInfo t2130_m12113_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t215_0_0_0},
};
extern TypeInfo t2130_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12113_MI = 
{
	"Invoke", (methodPointerType)&m7899_gshared, &t2130_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2130_m12113_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t215_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2130_m12114_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t215_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2130_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12114_MI = 
{
	"BeginInvoke", (methodPointerType)&m7900_gshared, &t2130_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2130_m12114_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2130_m12115_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2130_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12115_MI = 
{
	"EndInvoke", (methodPointerType)&m7901_gshared, &t2130_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2130_m12115_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2130_MIs[] =
{
	&m12112_MI,
	&m12113_MI,
	&m12114_MI,
	&m12115_MI,
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
extern MethodInfo m12113_MI;
extern MethodInfo m12114_MI;
extern MethodInfo m12115_MI;
static MethodInfo* t2130_VT[] =
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
	&m12113_MI,
	&m12114_MI,
	&m12115_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2130_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2130_0_0_0;
extern Il2CppType t2130_1_0_0;
extern TypeInfo t193_TI;
struct t2130;
extern TypeInfo t2130_TI;
extern Il2CppGenericClass t2130_GC;
TypeInfo t2130_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2130_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2130_TI, NULL, t2130_VT, &EmptyCustomAttributesCache, &t2130_TI, &t2130_0_0_0, &t2130_1_0_0, t2130_IOs, &t2130_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2130), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t212.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t212_TI;
#include "t212MD.h"

#include "t387.h"
#include "t24.h"
#include "t2131.h"
extern TypeInfo t309_TI;
extern TypeInfo t4_TI;
extern TypeInfo t212_TI;
extern TypeInfo t526_TI;
extern TypeInfo t294_TI;
extern TypeInfo t24_TI;
extern TypeInfo t2131_TI;
#include "t555MD.h"
#include "t2131MD.h"
extern Il2CppType t24_0_0_0;
extern MethodInfo m2812_MI;
extern MethodInfo m12116_MI;
extern MethodInfo m2817_MI;
extern MethodInfo m2950_MI;
extern MethodInfo m2948_MI;
extern MethodInfo m2818_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2820_MI;
extern MethodInfo m12120_MI;
extern MethodInfo m12121_MI;
extern MethodInfo m2819_MI;


extern MethodInfo m1824_MI;
 void m1824 (t212 * __this, MethodInfo* method){
	{
		__this->f4 = ((t309*)SZArrayNew(InitializedTypeInfo(&t309_TI), 1));
		m2812(__this, &m2812_MI);
		return;
	}
}
extern MethodInfo m1844_MI;
 void m1844 (t212 * __this, t387 * p0, MethodInfo* method){
	{
		t545 * L_0 = m12116(NULL, p0, &m12116_MI);
		m2817(__this, L_0, &m2817_MI);
		return;
	}
}
extern MethodInfo m1843_MI;
 void m1843 (t212 * __this, t387 * p0, MethodInfo* method){
	{
		t4 * L_0 = m2950(p0, &m2950_MI);
		t546 * L_1 = m2948(p0, &m2948_MI);
		m2818(__this, L_0, L_1, &m2818_MI);
		return;
	}
}
extern MethodInfo m1825_MI;
 t546 * m1825 (t212 * __this, t8* p0, t4 * p1, MethodInfo* method){
	{
		t526* L_0 = ((t526*)SZArrayNew(InitializedTypeInfo(&t526_TI), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t294_TI));
		t294 * L_1 = m1549(NULL, LoadTypeToken(&t24_0_0_0), &m1549_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t294 **)(t294 **)SZArrayLdElema(L_0, 0)) = (t294 *)L_1;
		t546 * L_2 = m2820(NULL, p1, p0, L_0, &m2820_MI);
		return L_2;
	}
}
extern MethodInfo m1826_MI;
 t545 * m1826 (t212 * __this, t4 * p0, t546 * p1, MethodInfo* method){
	{
		t2131 * L_0 = (t2131 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2131_TI));
		m12120(L_0, p0, p1, &m12120_MI);
		return L_0;
	}
}
extern MethodInfo m12116_MI;
 t545 * m12116 (t4 * __this, t387 * p0, MethodInfo* method){
	{
		t2131 * L_0 = (t2131 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2131_TI));
		m12121(L_0, p0, &m12121_MI);
		return L_0;
	}
}
extern MethodInfo m1833_MI;
 void m1833 (t212 * __this, float p0, MethodInfo* method){
	{
		t309* L_0 = (__this->f4);
		float L_1 = p0;
		t4 * L_2 = Box(InitializedTypeInfo(&t24_TI), &L_1);
		ArrayElementTypeCheck (L_0, L_2);
		*((t4 **)(t4 **)SZArrayLdElema(L_0, 0)) = (t4 *)L_2;
		t309* L_3 = (__this->f4);
		m2819(__this, L_3, &m2819_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Events.UnityEvent`1<System.Single>
extern Il2CppType t309_0_0_33;
FieldInfo t212_f4_FieldInfo = 
{
	"m_InvokeArray", &t309_0_0_33, &t212_TI, offsetof(t212, f4), &EmptyCustomAttributesCache};
static FieldInfo* t212_FIs[] =
{
	&t212_f4_FieldInfo,
	NULL
};
extern TypeInfo t212_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m1824_MI = 
{
	".ctor", (methodPointerType)&m1824, &t212_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t387_0_0_0;
static ParameterInfo t212_m1844_ParameterInfos[] = 
{
	{"call", 0, 134217728, &EmptyCustomAttributesCache, &t387_0_0_0},
};
extern TypeInfo t212_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1844_MI = 
{
	"AddListener", (methodPointerType)&m1844, &t212_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t212_m1844_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t387_0_0_0;
static ParameterInfo t212_m1843_ParameterInfos[] = 
{
	{"call", 0, 134217728, &EmptyCustomAttributesCache, &t387_0_0_0},
};
extern TypeInfo t212_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1843_MI = 
{
	"RemoveListener", (methodPointerType)&m1843, &t212_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t212_m1843_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t8_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t212_m1825_ParameterInfos[] = 
{
	{"name", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"targetObj", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t212_TI;
extern Il2CppType t546_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1825_MI = 
{
	"FindMethod_Impl", (methodPointerType)&m1825, &t212_TI, &t546_0_0_0, RuntimeInvoker_t4_t4_t4, t212_m1825_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t212_m1826_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t212_TI;
extern Il2CppType t545_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1826_MI = 
{
	"GetDelegate", (methodPointerType)&m1826, &t212_TI, &t545_0_0_0, RuntimeInvoker_t4_t4_t4, t212_m1826_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t387_0_0_0;
static ParameterInfo t212_m12116_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &t387_0_0_0},
};
extern TypeInfo t212_TI;
extern Il2CppType t545_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12116_MI = 
{
	"GetDelegate", (methodPointerType)&m12116, &t212_TI, &t545_0_0_0, RuntimeInvoker_t4_t4, t212_m12116_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
static ParameterInfo t212_m1833_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t212_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t24 (MethodInfo* method, void* obj, void** args);
MethodInfo m1833_MI = 
{
	"Invoke", (methodPointerType)&m1833, &t212_TI, &t17_0_0_0, RuntimeInvoker_t17_t24, t212_m1833_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t212_MIs[] =
{
	&m1824_MI,
	&m1844_MI,
	&m1843_MI,
	&m1825_MI,
	&m1826_MI,
	&m12116_MI,
	&m1833_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m1324_MI;
extern MethodInfo m1325_MI;
extern MethodInfo m1326_MI;
extern MethodInfo m1825_MI;
extern MethodInfo m1826_MI;
static MethodInfo* t212_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m1324_MI,
	&m1325_MI,
	&m1326_MI,
	&m1825_MI,
	&m1826_MI,
};
extern TypeInfo t303_TI;
static Il2CppInterfaceOffsetPair t212_IOs[] = 
{
	{ &t303_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t212_0_0_0;
extern Il2CppType t212_1_0_0;
extern TypeInfo t555_TI;
struct t212;
extern TypeInfo t212_TI;
extern Il2CppGenericClass t212_GC;
TypeInfo t212_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`1", "UnityEngine.Events", t212_MIs, NULL, t212_FIs, NULL, &t555_TI, NULL, NULL, &t212_TI, NULL, t212_VT, &EmptyCustomAttributesCache, &t212_TI, &t212_0_0_0, &t212_1_0_0, t212_IOs, &t212_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t212), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 0, 1, 0, 0, 8, 0, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t387_TI;
#include "t387MD.h"



extern MethodInfo m1842_MI;
 void m1842 (t387 * __this, t4 * p0, t56 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m12117_MI;
 void m12117 (t387 * __this, float p0, MethodInfo* method){
	typedef  void (*FunctionPointerType) (t4 * __this, float p0, MethodInfo* method);
	if (__this->f9)
		m12117((t387 *)__this->f9,  p0, method);
	((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m12118_MI;
 t4 * m12118 (t387 * __this, float p0, t55 * p1, t4 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t24_TI), &p0);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m12119_MI;
 void m12119 (t387 * __this, t4 * p0, MethodInfo* method){
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition UnityEngine.Events.UnityAction`1<System.Single>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t387_m1842_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t387_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m1842_MI = 
{
	".ctor", (methodPointerType)&m1842, &t387_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t387_m1842_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
static ParameterInfo t387_m12117_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
};
extern TypeInfo t387_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t24 (MethodInfo* method, void* obj, void** args);
MethodInfo m12117_MI = 
{
	"Invoke", (methodPointerType)&m12117, &t387_TI, &t17_0_0_0, RuntimeInvoker_t17_t24, t387_m12117_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t24_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t387_m12118_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t24_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t387_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t24_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12118_MI = 
{
	"BeginInvoke", (methodPointerType)&m12118, &t387_TI, &t54_0_0_0, RuntimeInvoker_t4_t24_t4_t4, t387_m12118_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t387_m12119_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t387_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12119_MI = 
{
	"EndInvoke", (methodPointerType)&m12119, &t387_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t387_m12119_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t387_MIs[] =
{
	&m1842_MI,
	&m12117_MI,
	&m12118_MI,
	&m12119_MI,
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
extern MethodInfo m12117_MI;
extern MethodInfo m12118_MI;
extern MethodInfo m12119_MI;
static MethodInfo* t387_VT[] =
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
	&m12117_MI,
	&m12118_MI,
	&m12119_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t387_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t387_0_0_0;
extern Il2CppType t387_1_0_0;
extern TypeInfo t193_TI;
struct t387;
extern TypeInfo t387_TI;
extern Il2CppGenericClass t387_GC;
TypeInfo t387_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t387_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t387_TI, NULL, t387_VT, &EmptyCustomAttributesCache, &t387_TI, &t387_0_0_0, &t387_1_0_0, t387_IOs, &t387_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t387), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2131_TI;

extern TypeInfo t2131_TI;
extern TypeInfo t387_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t24_TI;
extern TypeInfo t17_TI;
extern Il2CppType t387_0_0_0;
extern MethodInfo m2791_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2954_MI;
extern MethodInfo m1592_MI;
extern MethodInfo m2790_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m18673_MI;
extern MethodInfo m2792_MI;
extern MethodInfo m12117_MI;
extern MethodInfo m2950_MI;
extern MethodInfo m2948_MI;
struct t545;
 void m18673 (t4 * __this, t4 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18673_MI;


extern MethodInfo m12120_MI;
 void m12120 (t2131 * __this, t4 * p0, t546 * p1, MethodInfo* method){
	{
		m2791(__this, p0, p1, &m2791_MI);
		t387 * L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t294_TI));
		t294 * L_1 = m1549(NULL, LoadTypeToken(&t387_0_0_0), &m1549_MI);
		t345 * L_2 = m2954(NULL, L_1, p0, p1, &m2954_MI);
		t345 * L_3 = m1592(NULL, L_0, ((t387 *)IsInst(L_2, InitializedTypeInfo(&t387_TI))), &m1592_MI);
		__this->f0 = ((t387 *)Castclass(L_3, InitializedTypeInfo(&t387_TI)));
		return;
	}
}
extern MethodInfo m12121_MI;
 void m12121 (t2131 * __this, t387 * p0, MethodInfo* method){
	{
		m2790(__this, &m2790_MI);
		t387 * L_0 = (__this->f0);
		t345 * L_1 = m1592(NULL, L_0, p0, &m1592_MI);
		__this->f0 = ((t387 *)Castclass(L_1, InitializedTypeInfo(&t387_TI)));
		return;
	}
}
extern MethodInfo m12122_MI;
 void m12122 (t2131 * __this, t309* p0, MethodInfo* method){
	{
		if ((((int32_t)(((int32_t)(((t16 *)p0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		t307 * L_0 = (t307 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t307_TI));
		m1936(L_0, (t8*) &_stringLiteral191, &m1936_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		m18673(NULL, (*(t4 **)(t4 **)SZArrayLdElema(p0, 0)), &m18673_MI);
		t387 * L_1 = (__this->f0);
		bool L_2 = m2792(NULL, L_1, &m2792_MI);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		t387 * L_3 = (__this->f0);
		VirtActionInvoker1< float >::Invoke(&m12117_MI, L_3, ((*(float*)((float*)UnBox ((*(t4 **)(t4 **)SZArrayLdElema(p0, 0)), InitializedTypeInfo(&t24_TI))))));
	}

IL_003f:
	{
		return;
	}
}
extern MethodInfo m12123_MI;
 bool m12123 (t2131 * __this, t4 * p0, t546 * p1, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		t387 * L_0 = (__this->f0);
		t4 * L_1 = m2950(L_0, &m2950_MI);
		if ((((t4 *)L_1) != ((t4 *)p0)))
		{
			goto IL_0021;
		}
	}
	{
		t387 * L_2 = (__this->f0);
		t546 * L_3 = m2948(L_2, &m2948_MI);
		G_B3_0 = ((((t546 *)L_3) == ((t546 *)p1))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// Metadata Definition UnityEngine.Events.InvokableCall`1<System.Single>
extern Il2CppType t387_0_0_1;
FieldInfo t2131_f0_FieldInfo = 
{
	"Delegate", &t387_0_0_1, &t2131_TI, offsetof(t2131, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2131_FIs[] =
{
	&t2131_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2131_m12120_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2131_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12120_MI = 
{
	".ctor", (methodPointerType)&m12120, &t2131_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2131_m12120_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t387_0_0_0;
static ParameterInfo t2131_m12121_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t387_0_0_0},
};
extern TypeInfo t2131_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12121_MI = 
{
	".ctor", (methodPointerType)&m12121, &t2131_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2131_m12121_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2131_m12122_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2131_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12122_MI = 
{
	"Invoke", (methodPointerType)&m12122, &t2131_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2131_m12122_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2131_m12123_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2131_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12123_MI = 
{
	"Find", (methodPointerType)&m12123, &t2131_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2131_m12123_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2131_MIs[] =
{
	&m12120_MI,
	&m12121_MI,
	&m12122_MI,
	&m12123_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12122_MI;
extern MethodInfo m12123_MI;
static MethodInfo* t2131_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12122_MI,
	&m12123_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2131_0_0_0;
extern Il2CppType t2131_1_0_0;
extern TypeInfo t545_TI;
struct t2131;
extern TypeInfo t2131_TI;
extern Il2CppGenericClass t2131_GC;
TypeInfo t2131_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2131_MIs, NULL, t2131_FIs, NULL, &t545_TI, NULL, NULL, &t2131_TI, NULL, t2131_VT, &EmptyCustomAttributesCache, &t2131_TI, &t2131_0_0_0, &t2131_1_0_0, NULL, &t2131_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2131), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3409_TI;

#include "t210.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Scrollbar/Direction>
extern MethodInfo m24820_MI;
static PropertyInfo t3409____Current_PropertyInfo = 
{
	&t3409_TI, "Current", &m24820_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3409_PIs[] =
{
	&t3409____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3409_TI;
extern Il2CppType t210_0_0_0;
extern void* RuntimeInvoker_t210 (MethodInfo* method, void* obj, void** args);
MethodInfo m24820_MI = 
{
	"get_Current", NULL, &t3409_TI, &t210_0_0_0, RuntimeInvoker_t210, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3409_MIs[] =
{
	&m24820_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3409_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3409_0_0_0;
extern Il2CppType t3409_1_0_0;
struct t3409;
extern TypeInfo t3409_TI;
extern Il2CppGenericClass t3409_GC;
TypeInfo t3409_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3409_MIs, t3409_PIs, NULL, NULL, NULL, NULL, NULL, &t3409_TI, t3409_ITIs, NULL, &EmptyCustomAttributesCache, &t3409_TI, &t3409_0_0_0, &t3409_1_0_0, NULL, &t3409_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2132.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2132_TI;
#include "t2132MD.h"

extern TypeInfo t2132_TI;
extern TypeInfo t210_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m12128_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18675_MI;
struct t16;
 int32_t m18675 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18675_MI;


extern MethodInfo m12124_MI;
 void m12124 (t2132 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12125_MI;
 t4 * m12125 (t2132 * __this, MethodInfo* method){
	{
		int32_t L_0 = m12128(__this, &m12128_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t210_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m12126_MI;
 void m12126 (t2132 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12127_MI;
 bool m12127 (t2132 * __this, MethodInfo* method){
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
extern MethodInfo m12128_MI;
 int32_t m12128 (t2132 * __this, MethodInfo* method){
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
		int32_t L_8 = m18675(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18675_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Scrollbar/Direction>
extern Il2CppType t16_0_0_1;
FieldInfo t2132_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2132_TI, offsetof(t2132, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2132_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2132_TI, offsetof(t2132, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2132_FIs[] =
{
	&t2132_f0_FieldInfo,
	&t2132_f1_FieldInfo,
	NULL
};
extern MethodInfo m12125_MI;
static PropertyInfo t2132____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2132_TI, "System.Collections.IEnumerator.Current", &m12125_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12128_MI;
static PropertyInfo t2132____Current_PropertyInfo = 
{
	&t2132_TI, "Current", &m12128_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2132_PIs[] =
{
	&t2132____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2132____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2132_m12124_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2132_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12124_MI = 
{
	".ctor", (methodPointerType)&m12124, &t2132_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2132_m12124_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2132_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12125_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12125, &t2132_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2132_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12126_MI = 
{
	"Dispose", (methodPointerType)&m12126, &t2132_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2132_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12127_MI = 
{
	"MoveNext", (methodPointerType)&m12127, &t2132_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2132_TI;
extern Il2CppType t210_0_0_0;
extern void* RuntimeInvoker_t210 (MethodInfo* method, void* obj, void** args);
MethodInfo m12128_MI = 
{
	"get_Current", (methodPointerType)&m12128, &t2132_TI, &t210_0_0_0, RuntimeInvoker_t210, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2132_MIs[] =
{
	&m12124_MI,
	&m12125_MI,
	&m12126_MI,
	&m12127_MI,
	&m12128_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m12125_MI;
extern MethodInfo m12127_MI;
extern MethodInfo m12126_MI;
extern MethodInfo m12128_MI;
static MethodInfo* t2132_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m12125_MI,
	&m12127_MI,
	&m12126_MI,
	&m12128_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3409_TI;
static TypeInfo* t2132_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3409_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3409_TI;
static Il2CppInterfaceOffsetPair t2132_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3409_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2132_0_0_0;
extern Il2CppType t2132_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2132_TI;
extern Il2CppGenericClass t2132_GC;
extern TypeInfo t16_TI;
TypeInfo t2132_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2132_MIs, t2132_PIs, t2132_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2132_TI, t2132_ITIs, t2132_VT, &EmptyCustomAttributesCache, &t2132_TI, &t2132_0_0_0, &t2132_1_0_0, t2132_IOs, &t2132_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2132)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4098_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Scrollbar/Direction>
extern MethodInfo m24821_MI;
static PropertyInfo t4098____Count_PropertyInfo = 
{
	&t4098_TI, "Count", &m24821_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24822_MI;
static PropertyInfo t4098____IsReadOnly_PropertyInfo = 
{
	&t4098_TI, "IsReadOnly", &m24822_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4098_PIs[] =
{
	&t4098____Count_PropertyInfo,
	&t4098____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4098_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24821_MI = 
{
	"get_Count", NULL, &t4098_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4098_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24822_MI = 
{
	"get_IsReadOnly", NULL, &t4098_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t210_0_0_0;
static ParameterInfo t4098_m24823_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
};
extern TypeInfo t4098_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24823_MI = 
{
	"Add", NULL, &t4098_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4098_m24823_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4098_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24824_MI = 
{
	"Clear", NULL, &t4098_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t210_0_0_0;
static ParameterInfo t4098_m24825_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
};
extern TypeInfo t4098_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24825_MI = 
{
	"Contains", NULL, &t4098_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t4098_m24825_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3234_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4098_m24826_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3234_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4098_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24826_MI = 
{
	"CopyTo", NULL, &t4098_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4098_m24826_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t210_0_0_0;
static ParameterInfo t4098_m24827_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
};
extern TypeInfo t4098_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24827_MI = 
{
	"Remove", NULL, &t4098_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t4098_m24827_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4098_MIs[] =
{
	&m24821_MI,
	&m24822_MI,
	&m24823_MI,
	&m24824_MI,
	&m24825_MI,
	&m24826_MI,
	&m24827_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4100_TI;
static TypeInfo* t4098_ITIs[] = 
{
	&t592_TI,
	&t4100_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4098_0_0_0;
extern Il2CppType t4098_1_0_0;
struct t4098;
extern TypeInfo t4098_TI;
extern Il2CppGenericClass t4098_GC;
TypeInfo t4098_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4098_MIs, t4098_PIs, NULL, NULL, NULL, NULL, NULL, &t4098_TI, t4098_ITIs, NULL, &EmptyCustomAttributesCache, &t4098_TI, &t4098_0_0_0, &t4098_1_0_0, NULL, &t4098_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4100_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Scrollbar/Direction>
extern TypeInfo t4100_TI;
extern Il2CppType t3409_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24828_MI = 
{
	"GetEnumerator", NULL, &t4100_TI, &t3409_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4100_MIs[] =
{
	&m24828_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4100_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4100_0_0_0;
extern Il2CppType t4100_1_0_0;
struct t4100;
extern TypeInfo t4100_TI;
extern Il2CppGenericClass t4100_GC;
TypeInfo t4100_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4100_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4100_TI, t4100_ITIs, NULL, &EmptyCustomAttributesCache, &t4100_TI, &t4100_0_0_0, &t4100_1_0_0, NULL, &t4100_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4099_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Scrollbar/Direction>
extern MethodInfo m24829_MI;
extern MethodInfo m24830_MI;
static PropertyInfo t4099____Item_PropertyInfo = 
{
	&t4099_TI, "Item", &m24829_MI, &m24830_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4099_PIs[] =
{
	&t4099____Item_PropertyInfo,
	NULL
};
extern Il2CppType t210_0_0_0;
static ParameterInfo t4099_m24831_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
};
extern TypeInfo t4099_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24831_MI = 
{
	"IndexOf", NULL, &t4099_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t4099_m24831_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t210_0_0_0;
static ParameterInfo t4099_m24832_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
};
extern TypeInfo t4099_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24832_MI = 
{
	"Insert", NULL, &t4099_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t4099_m24832_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4099_m24833_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4099_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24833_MI = 
{
	"RemoveAt", NULL, &t4099_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4099_m24833_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4099_m24829_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4099_TI;
extern Il2CppType t210_0_0_0;
extern void* RuntimeInvoker_t210_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24829_MI = 
{
	"get_Item", NULL, &t4099_TI, &t210_0_0_0, RuntimeInvoker_t210_t18, t4099_m24829_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t210_0_0_0;
static ParameterInfo t4099_m24830_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
};
extern TypeInfo t4099_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24830_MI = 
{
	"set_Item", NULL, &t4099_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t4099_m24830_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4099_MIs[] =
{
	&m24831_MI,
	&m24832_MI,
	&m24833_MI,
	&m24829_MI,
	&m24830_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4098_TI;
extern TypeInfo t4100_TI;
static TypeInfo* t4099_ITIs[] = 
{
	&t592_TI,
	&t4098_TI,
	&t4100_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4099_0_0_0;
extern Il2CppType t4099_1_0_0;
struct t4099;
extern TypeInfo t4099_TI;
extern Il2CppGenericClass t4099_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4099_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4099_MIs, t4099_PIs, NULL, NULL, NULL, NULL, NULL, &t4099_TI, t4099_ITIs, NULL, &t1401__CustomAttributeCache, &t4099_TI, &t4099_0_0_0, &t4099_1_0_0, NULL, &t4099_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3410_TI;

#include "t213.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Scrollbar/Axis>
extern MethodInfo m24834_MI;
static PropertyInfo t3410____Current_PropertyInfo = 
{
	&t3410_TI, "Current", &m24834_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3410_PIs[] =
{
	&t3410____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3410_TI;
extern Il2CppType t213_0_0_0;
extern void* RuntimeInvoker_t213 (MethodInfo* method, void* obj, void** args);
MethodInfo m24834_MI = 
{
	"get_Current", NULL, &t3410_TI, &t213_0_0_0, RuntimeInvoker_t213, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3410_MIs[] =
{
	&m24834_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3410_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3410_0_0_0;
extern Il2CppType t3410_1_0_0;
struct t3410;
extern TypeInfo t3410_TI;
extern Il2CppGenericClass t3410_GC;
TypeInfo t3410_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3410_MIs, t3410_PIs, NULL, NULL, NULL, NULL, NULL, &t3410_TI, t3410_ITIs, NULL, &EmptyCustomAttributesCache, &t3410_TI, &t3410_0_0_0, &t3410_1_0_0, NULL, &t3410_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2133.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2133_TI;
#include "t2133MD.h"

extern TypeInfo t2133_TI;
extern TypeInfo t213_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m12133_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18686_MI;
struct t16;
 int32_t m18686 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18686_MI;


extern MethodInfo m12129_MI;
 void m12129 (t2133 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12130_MI;
 t4 * m12130 (t2133 * __this, MethodInfo* method){
	{
		int32_t L_0 = m12133(__this, &m12133_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t213_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m12131_MI;
 void m12131 (t2133 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12132_MI;
 bool m12132 (t2133 * __this, MethodInfo* method){
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
extern MethodInfo m12133_MI;
 int32_t m12133 (t2133 * __this, MethodInfo* method){
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
		int32_t L_8 = m18686(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18686_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Scrollbar/Axis>
extern Il2CppType t16_0_0_1;
FieldInfo t2133_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2133_TI, offsetof(t2133, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2133_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2133_TI, offsetof(t2133, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2133_FIs[] =
{
	&t2133_f0_FieldInfo,
	&t2133_f1_FieldInfo,
	NULL
};
extern MethodInfo m12130_MI;
static PropertyInfo t2133____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2133_TI, "System.Collections.IEnumerator.Current", &m12130_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12133_MI;
static PropertyInfo t2133____Current_PropertyInfo = 
{
	&t2133_TI, "Current", &m12133_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2133_PIs[] =
{
	&t2133____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2133____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2133_m12129_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2133_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12129_MI = 
{
	".ctor", (methodPointerType)&m12129, &t2133_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2133_m12129_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2133_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12130_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12130, &t2133_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2133_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12131_MI = 
{
	"Dispose", (methodPointerType)&m12131, &t2133_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2133_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12132_MI = 
{
	"MoveNext", (methodPointerType)&m12132, &t2133_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2133_TI;
extern Il2CppType t213_0_0_0;
extern void* RuntimeInvoker_t213 (MethodInfo* method, void* obj, void** args);
MethodInfo m12133_MI = 
{
	"get_Current", (methodPointerType)&m12133, &t2133_TI, &t213_0_0_0, RuntimeInvoker_t213, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2133_MIs[] =
{
	&m12129_MI,
	&m12130_MI,
	&m12131_MI,
	&m12132_MI,
	&m12133_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m12130_MI;
extern MethodInfo m12132_MI;
extern MethodInfo m12131_MI;
extern MethodInfo m12133_MI;
static MethodInfo* t2133_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m12130_MI,
	&m12132_MI,
	&m12131_MI,
	&m12133_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3410_TI;
static TypeInfo* t2133_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3410_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3410_TI;
static Il2CppInterfaceOffsetPair t2133_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3410_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2133_0_0_0;
extern Il2CppType t2133_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2133_TI;
extern Il2CppGenericClass t2133_GC;
extern TypeInfo t16_TI;
TypeInfo t2133_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2133_MIs, t2133_PIs, t2133_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2133_TI, t2133_ITIs, t2133_VT, &EmptyCustomAttributesCache, &t2133_TI, &t2133_0_0_0, &t2133_1_0_0, t2133_IOs, &t2133_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2133)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4101_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Scrollbar/Axis>
extern MethodInfo m24835_MI;
static PropertyInfo t4101____Count_PropertyInfo = 
{
	&t4101_TI, "Count", &m24835_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24836_MI;
static PropertyInfo t4101____IsReadOnly_PropertyInfo = 
{
	&t4101_TI, "IsReadOnly", &m24836_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4101_PIs[] =
{
	&t4101____Count_PropertyInfo,
	&t4101____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4101_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24835_MI = 
{
	"get_Count", NULL, &t4101_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4101_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24836_MI = 
{
	"get_IsReadOnly", NULL, &t4101_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t213_0_0_0;
static ParameterInfo t4101_m24837_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t213_0_0_0},
};
extern TypeInfo t4101_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24837_MI = 
{
	"Add", NULL, &t4101_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4101_m24837_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4101_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24838_MI = 
{
	"Clear", NULL, &t4101_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t213_0_0_0;
static ParameterInfo t4101_m24839_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t213_0_0_0},
};
extern TypeInfo t4101_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24839_MI = 
{
	"Contains", NULL, &t4101_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t4101_m24839_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3235_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4101_m24840_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3235_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4101_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24840_MI = 
{
	"CopyTo", NULL, &t4101_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4101_m24840_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t213_0_0_0;
static ParameterInfo t4101_m24841_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t213_0_0_0},
};
extern TypeInfo t4101_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24841_MI = 
{
	"Remove", NULL, &t4101_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t4101_m24841_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4101_MIs[] =
{
	&m24835_MI,
	&m24836_MI,
	&m24837_MI,
	&m24838_MI,
	&m24839_MI,
	&m24840_MI,
	&m24841_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4103_TI;
static TypeInfo* t4101_ITIs[] = 
{
	&t592_TI,
	&t4103_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4101_0_0_0;
extern Il2CppType t4101_1_0_0;
struct t4101;
extern TypeInfo t4101_TI;
extern Il2CppGenericClass t4101_GC;
TypeInfo t4101_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4101_MIs, t4101_PIs, NULL, NULL, NULL, NULL, NULL, &t4101_TI, t4101_ITIs, NULL, &EmptyCustomAttributesCache, &t4101_TI, &t4101_0_0_0, &t4101_1_0_0, NULL, &t4101_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4103_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Scrollbar/Axis>
extern TypeInfo t4103_TI;
extern Il2CppType t3410_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24842_MI = 
{
	"GetEnumerator", NULL, &t4103_TI, &t3410_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4103_MIs[] =
{
	&m24842_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4103_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4103_0_0_0;
extern Il2CppType t4103_1_0_0;
struct t4103;
extern TypeInfo t4103_TI;
extern Il2CppGenericClass t4103_GC;
TypeInfo t4103_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4103_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4103_TI, t4103_ITIs, NULL, &EmptyCustomAttributesCache, &t4103_TI, &t4103_0_0_0, &t4103_1_0_0, NULL, &t4103_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4102_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Scrollbar/Axis>
extern MethodInfo m24843_MI;
extern MethodInfo m24844_MI;
static PropertyInfo t4102____Item_PropertyInfo = 
{
	&t4102_TI, "Item", &m24843_MI, &m24844_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4102_PIs[] =
{
	&t4102____Item_PropertyInfo,
	NULL
};
extern Il2CppType t213_0_0_0;
static ParameterInfo t4102_m24845_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t213_0_0_0},
};
extern TypeInfo t4102_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24845_MI = 
{
	"IndexOf", NULL, &t4102_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t4102_m24845_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t213_0_0_0;
static ParameterInfo t4102_m24846_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t213_0_0_0},
};
extern TypeInfo t4102_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24846_MI = 
{
	"Insert", NULL, &t4102_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t4102_m24846_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4102_m24847_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4102_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24847_MI = 
{
	"RemoveAt", NULL, &t4102_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4102_m24847_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4102_m24843_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4102_TI;
extern Il2CppType t213_0_0_0;
extern void* RuntimeInvoker_t213_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24843_MI = 
{
	"get_Item", NULL, &t4102_TI, &t213_0_0_0, RuntimeInvoker_t213_t18, t4102_m24843_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t213_0_0_0;
static ParameterInfo t4102_m24844_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t213_0_0_0},
};
extern TypeInfo t4102_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24844_MI = 
{
	"set_Item", NULL, &t4102_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t4102_m24844_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4102_MIs[] =
{
	&m24845_MI,
	&m24846_MI,
	&m24847_MI,
	&m24843_MI,
	&m24844_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4101_TI;
extern TypeInfo t4103_TI;
static TypeInfo* t4102_ITIs[] = 
{
	&t592_TI,
	&t4101_TI,
	&t4103_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4102_0_0_0;
extern Il2CppType t4102_1_0_0;
struct t4102;
extern TypeInfo t4102_TI;
extern Il2CppGenericClass t4102_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4102_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4102_MIs, t4102_PIs, NULL, NULL, NULL, NULL, NULL, &t4102_TI, t4102_ITIs, NULL, &t1401__CustomAttributeCache, &t4102_TI, &t4102_0_0_0, &t4102_1_0_0, NULL, &t4102_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3411_TI;

#include "t220.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ScrollRect>
extern MethodInfo m24848_MI;
static PropertyInfo t3411____Current_PropertyInfo = 
{
	&t3411_TI, "Current", &m24848_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3411_PIs[] =
{
	&t3411____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3411_TI;
extern Il2CppType t220_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24848_MI = 
{
	"get_Current", NULL, &t3411_TI, &t220_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3411_MIs[] =
{
	&m24848_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3411_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3411_0_0_0;
extern Il2CppType t3411_1_0_0;
struct t3411;
extern TypeInfo t3411_TI;
extern Il2CppGenericClass t3411_GC;
TypeInfo t3411_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3411_MIs, t3411_PIs, NULL, NULL, NULL, NULL, NULL, &t3411_TI, t3411_ITIs, NULL, &EmptyCustomAttributesCache, &t3411_TI, &t3411_0_0_0, &t3411_1_0_0, NULL, &t3411_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2134.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2134_TI;
#include "t2134MD.h"

extern TypeInfo t2134_TI;
extern TypeInfo t220_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m12138_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18697_MI;
struct t16;
#define m18697(__this, p0, method) (t220 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m18697_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.ScrollRect>
extern Il2CppType t16_0_0_1;
FieldInfo t2134_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2134_TI, offsetof(t2134, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2134_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2134_TI, offsetof(t2134, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2134_FIs[] =
{
	&t2134_f0_FieldInfo,
	&t2134_f1_FieldInfo,
	NULL
};
extern MethodInfo m12135_MI;
static PropertyInfo t2134____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2134_TI, "System.Collections.IEnumerator.Current", &m12135_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12138_MI;
static PropertyInfo t2134____Current_PropertyInfo = 
{
	&t2134_TI, "Current", &m12138_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2134_PIs[] =
{
	&t2134____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2134____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2134_m12134_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2134_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12134_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2134_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2134_m12134_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2134_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12135_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2134_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2134_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12136_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2134_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2134_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12137_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2134_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2134_TI;
extern Il2CppType t220_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12138_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2134_TI, &t220_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2134_MIs[] =
{
	&m12134_MI,
	&m12135_MI,
	&m12136_MI,
	&m12137_MI,
	&m12138_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m12135_MI;
extern MethodInfo m12137_MI;
extern MethodInfo m12136_MI;
extern MethodInfo m12138_MI;
static MethodInfo* t2134_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m12135_MI,
	&m12137_MI,
	&m12136_MI,
	&m12138_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3411_TI;
static TypeInfo* t2134_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3411_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3411_TI;
static Il2CppInterfaceOffsetPair t2134_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3411_TI, 7},
};
extern MethodInfo m12138_MI;
extern TypeInfo t220_TI;
extern MethodInfo m18697_MI;
static void* t2134_RGCTXData[3] = 
{
	&m12138_MI,
	&t220_TI,
	&m18697_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2134_0_0_0;
extern Il2CppType t2134_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2134_TI;
extern Il2CppGenericClass t2134_GC;
extern TypeInfo t16_TI;
TypeInfo t2134_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2134_MIs, t2134_PIs, t2134_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2134_TI, t2134_ITIs, t2134_VT, &EmptyCustomAttributesCache, &t2134_TI, &t2134_0_0_0, &t2134_1_0_0, t2134_IOs, &t2134_GC, NULL, NULL, NULL, t2134_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2134)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4104_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.ScrollRect>
extern MethodInfo m24849_MI;
static PropertyInfo t4104____Count_PropertyInfo = 
{
	&t4104_TI, "Count", &m24849_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24850_MI;
static PropertyInfo t4104____IsReadOnly_PropertyInfo = 
{
	&t4104_TI, "IsReadOnly", &m24850_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4104_PIs[] =
{
	&t4104____Count_PropertyInfo,
	&t4104____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4104_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24849_MI = 
{
	"get_Count", NULL, &t4104_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4104_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24850_MI = 
{
	"get_IsReadOnly", NULL, &t4104_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t220_0_0_0;
static ParameterInfo t4104_m24851_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t220_0_0_0},
};
extern TypeInfo t4104_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24851_MI = 
{
	"Add", NULL, &t4104_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4104_m24851_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4104_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24852_MI = 
{
	"Clear", NULL, &t4104_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t220_0_0_0;
static ParameterInfo t4104_m24853_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t220_0_0_0},
};
extern TypeInfo t4104_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24853_MI = 
{
	"Contains", NULL, &t4104_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4104_m24853_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3236_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4104_m24854_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3236_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4104_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24854_MI = 
{
	"CopyTo", NULL, &t4104_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4104_m24854_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t220_0_0_0;
static ParameterInfo t4104_m24855_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t220_0_0_0},
};
extern TypeInfo t4104_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24855_MI = 
{
	"Remove", NULL, &t4104_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4104_m24855_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4104_MIs[] =
{
	&m24849_MI,
	&m24850_MI,
	&m24851_MI,
	&m24852_MI,
	&m24853_MI,
	&m24854_MI,
	&m24855_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4106_TI;
static TypeInfo* t4104_ITIs[] = 
{
	&t592_TI,
	&t4106_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4104_0_0_0;
extern Il2CppType t4104_1_0_0;
struct t4104;
extern TypeInfo t4104_TI;
extern Il2CppGenericClass t4104_GC;
TypeInfo t4104_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4104_MIs, t4104_PIs, NULL, NULL, NULL, NULL, NULL, &t4104_TI, t4104_ITIs, NULL, &EmptyCustomAttributesCache, &t4104_TI, &t4104_0_0_0, &t4104_1_0_0, NULL, &t4104_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4106_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ScrollRect>
extern TypeInfo t4106_TI;
extern Il2CppType t3411_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24856_MI = 
{
	"GetEnumerator", NULL, &t4106_TI, &t3411_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4106_MIs[] =
{
	&m24856_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4106_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4106_0_0_0;
extern Il2CppType t4106_1_0_0;
struct t4106;
extern TypeInfo t4106_TI;
extern Il2CppGenericClass t4106_GC;
TypeInfo t4106_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4106_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4106_TI, t4106_ITIs, NULL, &EmptyCustomAttributesCache, &t4106_TI, &t4106_0_0_0, &t4106_1_0_0, NULL, &t4106_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4105_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.ScrollRect>
extern MethodInfo m24857_MI;
extern MethodInfo m24858_MI;
static PropertyInfo t4105____Item_PropertyInfo = 
{
	&t4105_TI, "Item", &m24857_MI, &m24858_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4105_PIs[] =
{
	&t4105____Item_PropertyInfo,
	NULL
};
extern Il2CppType t220_0_0_0;
static ParameterInfo t4105_m24859_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t220_0_0_0},
};
extern TypeInfo t4105_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24859_MI = 
{
	"IndexOf", NULL, &t4105_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4105_m24859_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t220_0_0_0;
static ParameterInfo t4105_m24860_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t220_0_0_0},
};
extern TypeInfo t4105_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24860_MI = 
{
	"Insert", NULL, &t4105_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4105_m24860_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4105_m24861_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4105_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24861_MI = 
{
	"RemoveAt", NULL, &t4105_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4105_m24861_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4105_m24857_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4105_TI;
extern Il2CppType t220_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24857_MI = 
{
	"get_Item", NULL, &t4105_TI, &t220_0_0_0, RuntimeInvoker_t4_t18, t4105_m24857_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t220_0_0_0;
static ParameterInfo t4105_m24858_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t220_0_0_0},
};
extern TypeInfo t4105_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24858_MI = 
{
	"set_Item", NULL, &t4105_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4105_m24858_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4105_MIs[] =
{
	&m24859_MI,
	&m24860_MI,
	&m24861_MI,
	&m24857_MI,
	&m24858_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4104_TI;
extern TypeInfo t4106_TI;
static TypeInfo* t4105_ITIs[] = 
{
	&t592_TI,
	&t4104_TI,
	&t4106_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4105_0_0_0;
extern Il2CppType t4105_1_0_0;
struct t4105;
extern TypeInfo t4105_TI;
extern Il2CppGenericClass t4105_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4105_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4105_MIs, t4105_PIs, NULL, NULL, NULL, NULL, NULL, &t4105_TI, t4105_ITIs, NULL, &t1401__CustomAttributeCache, &t4105_TI, &t4105_0_0_0, &t4105_1_0_0, NULL, &t4105_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2135.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2135_TI;
#include "t2135MD.h"

#include "t2136.h"
extern TypeInfo t309_TI;
extern TypeInfo t4_TI;
extern TypeInfo t2135_TI;
extern TypeInfo t220_TI;
extern TypeInfo t2136_TI;
extern TypeInfo t17_TI;
#include "t2136MD.h"
extern MethodInfo m12141_MI;
extern MethodInfo m12143_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.ScrollRect>
extern Il2CppType t309_0_0_33;
FieldInfo t2135_f1_FieldInfo = 
{
	"m_Arg1", &t309_0_0_33, &t2135_TI, offsetof(t2135, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2135_FIs[] =
{
	&t2135_f1_FieldInfo,
	NULL
};
extern Il2CppType t22_0_0_0;
extern Il2CppType t546_0_0_0;
extern Il2CppType t220_0_0_0;
static ParameterInfo t2135_m12139_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t22_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t220_0_0_0},
};
extern TypeInfo t2135_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12139_MI = 
{
	".ctor", (methodPointerType)&m7891_gshared, &t2135_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4_t4, t2135_m12139_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2135_m12140_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2135_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12140_MI = 
{
	"Invoke", (methodPointerType)&m7893_gshared, &t2135_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2135_m12140_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2135_MIs[] =
{
	&m12139_MI,
	&m12140_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12140_MI;
extern MethodInfo m12144_MI;
static MethodInfo* t2135_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12140_MI,
	&m12144_MI,
};
extern Il2CppType t2137_0_0_0;
extern TypeInfo t2137_TI;
extern MethodInfo m18707_MI;
extern TypeInfo t220_TI;
extern MethodInfo m12146_MI;
extern MethodInfo m12141_MI;
extern TypeInfo t220_TI;
extern MethodInfo m12143_MI;
static void* t2135_RGCTXData[8] = 
{
	(void*)&t2137_0_0_0,
	&t2137_TI,
	&m18707_MI,
	&t220_TI,
	&m12146_MI,
	&m12141_MI,
	&t220_TI,
	&m12143_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2135_0_0_0;
extern Il2CppType t2135_1_0_0;
extern TypeInfo t2136_TI;
struct t2135;
extern TypeInfo t2135_TI;
extern Il2CppGenericClass t2135_GC;
TypeInfo t2135_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2135_MIs, NULL, t2135_FIs, NULL, &t2136_TI, NULL, NULL, &t2135_TI, NULL, t2135_VT, &EmptyCustomAttributesCache, &t2135_TI, &t2135_0_0_0, &t2135_1_0_0, NULL, &t2135_GC, NULL, NULL, NULL, t2135_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2135), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2136_TI;

#include "t2137.h"
extern TypeInfo t2136_TI;
extern TypeInfo t2137_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t220_TI;
extern TypeInfo t17_TI;
#include "t2137MD.h"
extern Il2CppType t2137_0_0_0;
extern MethodInfo m2791_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2954_MI;
extern MethodInfo m1592_MI;
extern MethodInfo m2790_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m18707_MI;
extern MethodInfo m2792_MI;
extern MethodInfo m12146_MI;
extern MethodInfo m2950_MI;
extern MethodInfo m2948_MI;
struct t545;
#define m18707(__this, p0, method) (void)m16892_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m18707_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.ScrollRect>
extern Il2CppType t2137_0_0_1;
FieldInfo t2136_f0_FieldInfo = 
{
	"Delegate", &t2137_0_0_1, &t2136_TI, offsetof(t2136, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2136_FIs[] =
{
	&t2136_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2136_m12141_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2136_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12141_MI = 
{
	".ctor", (methodPointerType)&m7894_gshared, &t2136_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2136_m12141_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2137_0_0_0;
static ParameterInfo t2136_m12142_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2137_0_0_0},
};
extern TypeInfo t2136_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12142_MI = 
{
	".ctor", (methodPointerType)&m7895_gshared, &t2136_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2136_m12142_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2136_m12143_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2136_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12143_MI = 
{
	"Invoke", (methodPointerType)&m7896_gshared, &t2136_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2136_m12143_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2136_m12144_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2136_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12144_MI = 
{
	"Find", (methodPointerType)&m7897_gshared, &t2136_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2136_m12144_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2136_MIs[] =
{
	&m12141_MI,
	&m12142_MI,
	&m12143_MI,
	&m12144_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12143_MI;
extern MethodInfo m12144_MI;
static MethodInfo* t2136_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12143_MI,
	&m12144_MI,
};
extern Il2CppType t2137_0_0_0;
extern TypeInfo t2137_TI;
extern MethodInfo m18707_MI;
extern TypeInfo t220_TI;
extern MethodInfo m12146_MI;
static void* t2136_RGCTXData[5] = 
{
	(void*)&t2137_0_0_0,
	&t2137_TI,
	&m18707_MI,
	&t220_TI,
	&m12146_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2136_0_0_0;
extern Il2CppType t2136_1_0_0;
extern TypeInfo t545_TI;
struct t2136;
extern TypeInfo t2136_TI;
extern Il2CppGenericClass t2136_GC;
TypeInfo t2136_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2136_MIs, NULL, t2136_FIs, NULL, &t545_TI, NULL, NULL, &t2136_TI, NULL, t2136_VT, &EmptyCustomAttributesCache, &t2136_TI, &t2136_0_0_0, &t2136_1_0_0, NULL, &t2136_GC, NULL, NULL, NULL, t2136_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2136), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2137_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.ScrollRect>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2137_m12145_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2137_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m12145_MI = 
{
	".ctor", (methodPointerType)&m7898_gshared, &t2137_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2137_m12145_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t220_0_0_0;
static ParameterInfo t2137_m12146_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t220_0_0_0},
};
extern TypeInfo t2137_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12146_MI = 
{
	"Invoke", (methodPointerType)&m7899_gshared, &t2137_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2137_m12146_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t220_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2137_m12147_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t220_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2137_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12147_MI = 
{
	"BeginInvoke", (methodPointerType)&m7900_gshared, &t2137_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2137_m12147_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2137_m12148_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2137_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12148_MI = 
{
	"EndInvoke", (methodPointerType)&m7901_gshared, &t2137_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2137_m12148_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2137_MIs[] =
{
	&m12145_MI,
	&m12146_MI,
	&m12147_MI,
	&m12148_MI,
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
extern MethodInfo m12146_MI;
extern MethodInfo m12147_MI;
extern MethodInfo m12148_MI;
static MethodInfo* t2137_VT[] =
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
	&m12146_MI,
	&m12147_MI,
	&m12148_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2137_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2137_0_0_0;
extern Il2CppType t2137_1_0_0;
extern TypeInfo t193_TI;
struct t2137;
extern TypeInfo t2137_TI;
extern Il2CppGenericClass t2137_GC;
TypeInfo t2137_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2137_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2137_TI, NULL, t2137_VT, &EmptyCustomAttributesCache, &t2137_TI, &t2137_0_0_0, &t2137_1_0_0, t2137_IOs, &t2137_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2137), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3412_TI;

#include "t23.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
extern MethodInfo m24862_MI;
static PropertyInfo t3412____Current_PropertyInfo = 
{
	&t3412_TI, "Current", &m24862_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3412_PIs[] =
{
	&t3412____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3412_TI;
extern Il2CppType t23_0_0_0;
extern void* RuntimeInvoker_t23 (MethodInfo* method, void* obj, void** args);
MethodInfo m24862_MI = 
{
	"get_Current", NULL, &t3412_TI, &t23_0_0_0, RuntimeInvoker_t23, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3412_MIs[] =
{
	&m24862_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3412_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3412_0_0_0;
extern Il2CppType t3412_1_0_0;
struct t3412;
extern TypeInfo t3412_TI;
extern Il2CppGenericClass t3412_GC;
TypeInfo t3412_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3412_MIs, t3412_PIs, NULL, NULL, NULL, NULL, NULL, &t3412_TI, t3412_ITIs, NULL, &EmptyCustomAttributesCache, &t3412_TI, &t3412_0_0_0, &t3412_1_0_0, NULL, &t3412_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2138.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2138_TI;
#include "t2138MD.h"

extern TypeInfo t2138_TI;
extern TypeInfo t23_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m12153_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18709_MI;
struct t16;
 t23  m18709 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18709_MI;


extern MethodInfo m12149_MI;
 void m12149 (t2138 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12150_MI;
 t4 * m12150 (t2138 * __this, MethodInfo* method){
	{
		t23  L_0 = m12153(__this, &m12153_MI);
		t23  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t23_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m12151_MI;
 void m12151 (t2138 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12152_MI;
 bool m12152 (t2138 * __this, MethodInfo* method){
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
extern MethodInfo m12153_MI;
 t23  m12153 (t2138 * __this, MethodInfo* method){
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
		t23  L_8 = m18709(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18709_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Vector3>
extern Il2CppType t16_0_0_1;
FieldInfo t2138_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2138_TI, offsetof(t2138, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2138_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2138_TI, offsetof(t2138, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2138_FIs[] =
{
	&t2138_f0_FieldInfo,
	&t2138_f1_FieldInfo,
	NULL
};
extern MethodInfo m12150_MI;
static PropertyInfo t2138____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2138_TI, "System.Collections.IEnumerator.Current", &m12150_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12153_MI;
static PropertyInfo t2138____Current_PropertyInfo = 
{
	&t2138_TI, "Current", &m12153_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2138_PIs[] =
{
	&t2138____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2138____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2138_m12149_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2138_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12149_MI = 
{
	".ctor", (methodPointerType)&m12149, &t2138_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2138_m12149_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2138_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12150_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12150, &t2138_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2138_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12151_MI = 
{
	"Dispose", (methodPointerType)&m12151, &t2138_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2138_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12152_MI = 
{
	"MoveNext", (methodPointerType)&m12152, &t2138_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2138_TI;
extern Il2CppType t23_0_0_0;
extern void* RuntimeInvoker_t23 (MethodInfo* method, void* obj, void** args);
MethodInfo m12153_MI = 
{
	"get_Current", (methodPointerType)&m12153, &t2138_TI, &t23_0_0_0, RuntimeInvoker_t23, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2138_MIs[] =
{
	&m12149_MI,
	&m12150_MI,
	&m12151_MI,
	&m12152_MI,
	&m12153_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m12150_MI;
extern MethodInfo m12152_MI;
extern MethodInfo m12151_MI;
extern MethodInfo m12153_MI;
static MethodInfo* t2138_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m12150_MI,
	&m12152_MI,
	&m12151_MI,
	&m12153_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3412_TI;
static TypeInfo* t2138_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3412_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3412_TI;
static Il2CppInterfaceOffsetPair t2138_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3412_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2138_0_0_0;
extern Il2CppType t2138_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2138_TI;
extern Il2CppGenericClass t2138_GC;
extern TypeInfo t16_TI;
TypeInfo t2138_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2138_MIs, t2138_PIs, t2138_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2138_TI, t2138_ITIs, t2138_VT, &EmptyCustomAttributesCache, &t2138_TI, &t2138_0_0_0, &t2138_1_0_0, t2138_IOs, &t2138_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2138)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4107_TI;

#include "UnityEngine_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Vector3>
extern MethodInfo m24863_MI;
static PropertyInfo t4107____Count_PropertyInfo = 
{
	&t4107_TI, "Count", &m24863_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24864_MI;
static PropertyInfo t4107____IsReadOnly_PropertyInfo = 
{
	&t4107_TI, "IsReadOnly", &m24864_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4107_PIs[] =
{
	&t4107____Count_PropertyInfo,
	&t4107____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4107_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24863_MI = 
{
	"get_Count", NULL, &t4107_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4107_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24864_MI = 
{
	"get_IsReadOnly", NULL, &t4107_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t23_0_0_0;
static ParameterInfo t4107_m24865_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t23_0_0_0},
};
extern TypeInfo t4107_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t23 (MethodInfo* method, void* obj, void** args);
MethodInfo m24865_MI = 
{
	"Add", NULL, &t4107_TI, &t17_0_0_0, RuntimeInvoker_t17_t23, t4107_m24865_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4107_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24866_MI = 
{
	"Clear", NULL, &t4107_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t23_0_0_0;
static ParameterInfo t4107_m24867_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t23_0_0_0},
};
extern TypeInfo t4107_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t23 (MethodInfo* method, void* obj, void** args);
MethodInfo m24867_MI = 
{
	"Contains", NULL, &t4107_TI, &t19_0_0_0, RuntimeInvoker_t19_t23, t4107_m24867_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t221_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4107_m24868_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4107_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24868_MI = 
{
	"CopyTo", NULL, &t4107_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4107_m24868_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t23_0_0_0;
static ParameterInfo t4107_m24869_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t23_0_0_0},
};
extern TypeInfo t4107_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t23 (MethodInfo* method, void* obj, void** args);
MethodInfo m24869_MI = 
{
	"Remove", NULL, &t4107_TI, &t19_0_0_0, RuntimeInvoker_t19_t23, t4107_m24869_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4107_MIs[] =
{
	&m24863_MI,
	&m24864_MI,
	&m24865_MI,
	&m24866_MI,
	&m24867_MI,
	&m24868_MI,
	&m24869_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4109_TI;
static TypeInfo* t4107_ITIs[] = 
{
	&t592_TI,
	&t4109_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4107_0_0_0;
extern Il2CppType t4107_1_0_0;
struct t4107;
extern TypeInfo t4107_TI;
extern Il2CppGenericClass t4107_GC;
TypeInfo t4107_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4107_MIs, t4107_PIs, NULL, NULL, NULL, NULL, NULL, &t4107_TI, t4107_ITIs, NULL, &EmptyCustomAttributesCache, &t4107_TI, &t4107_0_0_0, &t4107_1_0_0, NULL, &t4107_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4109_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
extern TypeInfo t4109_TI;
extern Il2CppType t3412_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24870_MI = 
{
	"GetEnumerator", NULL, &t4109_TI, &t3412_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4109_MIs[] =
{
	&m24870_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4109_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4109_0_0_0;
extern Il2CppType t4109_1_0_0;
struct t4109;
extern TypeInfo t4109_TI;
extern Il2CppGenericClass t4109_GC;
TypeInfo t4109_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4109_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4109_TI, t4109_ITIs, NULL, &EmptyCustomAttributesCache, &t4109_TI, &t4109_0_0_0, &t4109_1_0_0, NULL, &t4109_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4108_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Vector3>
extern MethodInfo m24871_MI;
extern MethodInfo m24872_MI;
static PropertyInfo t4108____Item_PropertyInfo = 
{
	&t4108_TI, "Item", &m24871_MI, &m24872_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4108_PIs[] =
{
	&t4108____Item_PropertyInfo,
	NULL
};
extern Il2CppType t23_0_0_0;
static ParameterInfo t4108_m24873_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t23_0_0_0},
};
extern TypeInfo t4108_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t23 (MethodInfo* method, void* obj, void** args);
MethodInfo m24873_MI = 
{
	"IndexOf", NULL, &t4108_TI, &t18_0_0_0, RuntimeInvoker_t18_t23, t4108_m24873_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t23_0_0_0;
static ParameterInfo t4108_m24874_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t23_0_0_0},
};
extern TypeInfo t4108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t23 (MethodInfo* method, void* obj, void** args);
MethodInfo m24874_MI = 
{
	"Insert", NULL, &t4108_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t23, t4108_m24874_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4108_m24875_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24875_MI = 
{
	"RemoveAt", NULL, &t4108_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4108_m24875_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4108_m24871_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4108_TI;
extern Il2CppType t23_0_0_0;
extern void* RuntimeInvoker_t23_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24871_MI = 
{
	"get_Item", NULL, &t4108_TI, &t23_0_0_0, RuntimeInvoker_t23_t18, t4108_m24871_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t23_0_0_0;
static ParameterInfo t4108_m24872_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t23_0_0_0},
};
extern TypeInfo t4108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t23 (MethodInfo* method, void* obj, void** args);
MethodInfo m24872_MI = 
{
	"set_Item", NULL, &t4108_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t23, t4108_m24872_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4108_MIs[] =
{
	&m24873_MI,
	&m24874_MI,
	&m24875_MI,
	&m24871_MI,
	&m24872_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4107_TI;
extern TypeInfo t4109_TI;
static TypeInfo* t4108_ITIs[] = 
{
	&t592_TI,
	&t4107_TI,
	&t4109_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4108_0_0_0;
extern Il2CppType t4108_1_0_0;
struct t4108;
extern TypeInfo t4108_TI;
extern Il2CppGenericClass t4108_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4108_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4108_MIs, t4108_PIs, NULL, NULL, NULL, NULL, NULL, &t4108_TI, t4108_ITIs, NULL, &t1401__CustomAttributeCache, &t4108_TI, &t4108_0_0_0, &t4108_1_0_0, NULL, &t4108_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t219.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t219_TI;
#include "t219MD.h"

#include "t2139.h"
#include "t102.h"
#include "t2140.h"
extern TypeInfo t309_TI;
extern TypeInfo t4_TI;
extern TypeInfo t219_TI;
extern TypeInfo t526_TI;
extern TypeInfo t294_TI;
extern TypeInfo t102_TI;
extern TypeInfo t2140_TI;
#include "t2140MD.h"
extern Il2CppType t102_0_0_0;
extern MethodInfo m2812_MI;
extern MethodInfo m12156_MI;
extern MethodInfo m2817_MI;
extern MethodInfo m2950_MI;
extern MethodInfo m2948_MI;
extern MethodInfo m2818_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2820_MI;
extern MethodInfo m12161_MI;
extern MethodInfo m12162_MI;
extern MethodInfo m2819_MI;


extern MethodInfo m1839_MI;
 void m1839 (t219 * __this, MethodInfo* method){
	{
		__this->f4 = ((t309*)SZArrayNew(InitializedTypeInfo(&t309_TI), 1));
		m2812(__this, &m2812_MI);
		return;
	}
}
extern MethodInfo m12154_MI;
 void m12154 (t219 * __this, t2139 * p0, MethodInfo* method){
	{
		t545 * L_0 = m12156(NULL, p0, &m12156_MI);
		m2817(__this, L_0, &m2817_MI);
		return;
	}
}
extern MethodInfo m12155_MI;
 void m12155 (t219 * __this, t2139 * p0, MethodInfo* method){
	{
		t4 * L_0 = m2950(p0, &m2950_MI);
		t546 * L_1 = m2948(p0, &m2948_MI);
		m2818(__this, L_0, L_1, &m2818_MI);
		return;
	}
}
extern MethodInfo m1840_MI;
 t546 * m1840 (t219 * __this, t8* p0, t4 * p1, MethodInfo* method){
	{
		t526* L_0 = ((t526*)SZArrayNew(InitializedTypeInfo(&t526_TI), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t294_TI));
		t294 * L_1 = m1549(NULL, LoadTypeToken(&t102_0_0_0), &m1549_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t294 **)(t294 **)SZArrayLdElema(L_0, 0)) = (t294 *)L_1;
		t546 * L_2 = m2820(NULL, p1, p0, L_0, &m2820_MI);
		return L_2;
	}
}
extern MethodInfo m1841_MI;
 t545 * m1841 (t219 * __this, t4 * p0, t546 * p1, MethodInfo* method){
	{
		t2140 * L_0 = (t2140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2140_TI));
		m12161(L_0, p0, p1, &m12161_MI);
		return L_0;
	}
}
extern MethodInfo m12156_MI;
 t545 * m12156 (t4 * __this, t2139 * p0, MethodInfo* method){
	{
		t2140 * L_0 = (t2140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2140_TI));
		m12162(L_0, p0, &m12162_MI);
		return L_0;
	}
}
extern MethodInfo m1852_MI;
 void m1852 (t219 * __this, t102  p0, MethodInfo* method){
	{
		t309* L_0 = (__this->f4);
		t102  L_1 = p0;
		t4 * L_2 = Box(InitializedTypeInfo(&t102_TI), &L_1);
		ArrayElementTypeCheck (L_0, L_2);
		*((t4 **)(t4 **)SZArrayLdElema(L_0, 0)) = (t4 *)L_2;
		t309* L_3 = (__this->f4);
		m2819(__this, L_3, &m2819_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
extern Il2CppType t309_0_0_33;
FieldInfo t219_f4_FieldInfo = 
{
	"m_InvokeArray", &t309_0_0_33, &t219_TI, offsetof(t219, f4), &EmptyCustomAttributesCache};
static FieldInfo* t219_FIs[] =
{
	&t219_f4_FieldInfo,
	NULL
};
extern TypeInfo t219_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m1839_MI = 
{
	".ctor", (methodPointerType)&m1839, &t219_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2139_0_0_0;
static ParameterInfo t219_m12154_ParameterInfos[] = 
{
	{"call", 0, 134217728, &EmptyCustomAttributesCache, &t2139_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12154_MI = 
{
	"AddListener", (methodPointerType)&m12154, &t219_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t219_m12154_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2139_0_0_0;
static ParameterInfo t219_m12155_ParameterInfos[] = 
{
	{"call", 0, 134217728, &EmptyCustomAttributesCache, &t2139_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12155_MI = 
{
	"RemoveListener", (methodPointerType)&m12155, &t219_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t219_m12155_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t8_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t219_m1840_ParameterInfos[] = 
{
	{"name", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"targetObj", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t546_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1840_MI = 
{
	"FindMethod_Impl", (methodPointerType)&m1840, &t219_TI, &t546_0_0_0, RuntimeInvoker_t4_t4_t4, t219_m1840_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t219_m1841_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t545_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1841_MI = 
{
	"GetDelegate", (methodPointerType)&m1841, &t219_TI, &t545_0_0_0, RuntimeInvoker_t4_t4_t4, t219_m1841_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2139_0_0_0;
static ParameterInfo t219_m12156_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &t2139_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t545_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12156_MI = 
{
	"GetDelegate", (methodPointerType)&m12156, &t219_TI, &t545_0_0_0, RuntimeInvoker_t4_t4, t219_m12156_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t102_0_0_0;
static ParameterInfo t219_m1852_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t102_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t102 (MethodInfo* method, void* obj, void** args);
MethodInfo m1852_MI = 
{
	"Invoke", (methodPointerType)&m1852, &t219_TI, &t17_0_0_0, RuntimeInvoker_t17_t102, t219_m1852_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t219_MIs[] =
{
	&m1839_MI,
	&m12154_MI,
	&m12155_MI,
	&m1840_MI,
	&m1841_MI,
	&m12156_MI,
	&m1852_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m1324_MI;
extern MethodInfo m1325_MI;
extern MethodInfo m1326_MI;
extern MethodInfo m1840_MI;
extern MethodInfo m1841_MI;
static MethodInfo* t219_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m1324_MI,
	&m1325_MI,
	&m1326_MI,
	&m1840_MI,
	&m1841_MI,
};
extern TypeInfo t303_TI;
static Il2CppInterfaceOffsetPair t219_IOs[] = 
{
	{ &t303_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t219_0_0_0;
extern Il2CppType t219_1_0_0;
extern TypeInfo t555_TI;
struct t219;
extern TypeInfo t219_TI;
extern Il2CppGenericClass t219_GC;
TypeInfo t219_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`1", "UnityEngine.Events", t219_MIs, NULL, t219_FIs, NULL, &t555_TI, NULL, NULL, &t219_TI, NULL, t219_VT, &EmptyCustomAttributesCache, &t219_TI, &t219_0_0_0, &t219_1_0_0, t219_IOs, &t219_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t219), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 0, 1, 0, 0, 8, 0, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2139_TI;
#include "t2139MD.h"



extern MethodInfo m12157_MI;
 void m12157 (t2139 * __this, t4 * p0, t56 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m12158_MI;
 void m12158 (t2139 * __this, t102  p0, MethodInfo* method){
	typedef  void (*FunctionPointerType) (t4 * __this, t102  p0, MethodInfo* method);
	if (__this->f9)
		m12158((t2139 *)__this->f9,  p0, method);
	((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m12159_MI;
 t4 * m12159 (t2139 * __this, t102  p0, t55 * p1, t4 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t102_TI), &p0);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m12160_MI;
 void m12160 (t2139 * __this, t4 * p0, MethodInfo* method){
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2139_m12157_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2139_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m12157_MI = 
{
	".ctor", (methodPointerType)&m12157, &t2139_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2139_m12157_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t102_0_0_0;
static ParameterInfo t2139_m12158_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t102_0_0_0},
};
extern TypeInfo t2139_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t102 (MethodInfo* method, void* obj, void** args);
MethodInfo m12158_MI = 
{
	"Invoke", (methodPointerType)&m12158, &t2139_TI, &t17_0_0_0, RuntimeInvoker_t17_t102, t2139_m12158_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t102_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2139_m12159_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t102_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2139_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t102_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12159_MI = 
{
	"BeginInvoke", (methodPointerType)&m12159, &t2139_TI, &t54_0_0_0, RuntimeInvoker_t4_t102_t4_t4, t2139_m12159_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2139_m12160_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2139_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12160_MI = 
{
	"EndInvoke", (methodPointerType)&m12160, &t2139_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2139_m12160_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2139_MIs[] =
{
	&m12157_MI,
	&m12158_MI,
	&m12159_MI,
	&m12160_MI,
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
extern MethodInfo m12158_MI;
extern MethodInfo m12159_MI;
extern MethodInfo m12160_MI;
static MethodInfo* t2139_VT[] =
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
	&m12158_MI,
	&m12159_MI,
	&m12160_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2139_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2139_0_0_0;
extern Il2CppType t2139_1_0_0;
extern TypeInfo t193_TI;
struct t2139;
extern TypeInfo t2139_TI;
extern Il2CppGenericClass t2139_GC;
TypeInfo t2139_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2139_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2139_TI, NULL, t2139_VT, &EmptyCustomAttributesCache, &t2139_TI, &t2139_0_0_0, &t2139_1_0_0, t2139_IOs, &t2139_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2139), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2140_TI;

extern TypeInfo t2140_TI;
extern TypeInfo t2139_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t102_TI;
extern TypeInfo t17_TI;
extern Il2CppType t2139_0_0_0;
extern MethodInfo m2791_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2954_MI;
extern MethodInfo m1592_MI;
extern MethodInfo m2790_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m18719_MI;
extern MethodInfo m2792_MI;
extern MethodInfo m12158_MI;
extern MethodInfo m2950_MI;
extern MethodInfo m2948_MI;
struct t545;
 void m18719 (t4 * __this, t4 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18719_MI;


extern MethodInfo m12161_MI;
 void m12161 (t2140 * __this, t4 * p0, t546 * p1, MethodInfo* method){
	{
		m2791(__this, p0, p1, &m2791_MI);
		t2139 * L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t294_TI));
		t294 * L_1 = m1549(NULL, LoadTypeToken(&t2139_0_0_0), &m1549_MI);
		t345 * L_2 = m2954(NULL, L_1, p0, p1, &m2954_MI);
		t345 * L_3 = m1592(NULL, L_0, ((t2139 *)IsInst(L_2, InitializedTypeInfo(&t2139_TI))), &m1592_MI);
		__this->f0 = ((t2139 *)Castclass(L_3, InitializedTypeInfo(&t2139_TI)));
		return;
	}
}
extern MethodInfo m12162_MI;
 void m12162 (t2140 * __this, t2139 * p0, MethodInfo* method){
	{
		m2790(__this, &m2790_MI);
		t2139 * L_0 = (__this->f0);
		t345 * L_1 = m1592(NULL, L_0, p0, &m1592_MI);
		__this->f0 = ((t2139 *)Castclass(L_1, InitializedTypeInfo(&t2139_TI)));
		return;
	}
}
extern MethodInfo m12163_MI;
 void m12163 (t2140 * __this, t309* p0, MethodInfo* method){
	{
		if ((((int32_t)(((int32_t)(((t16 *)p0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		t307 * L_0 = (t307 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t307_TI));
		m1936(L_0, (t8*) &_stringLiteral191, &m1936_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		m18719(NULL, (*(t4 **)(t4 **)SZArrayLdElema(p0, 0)), &m18719_MI);
		t2139 * L_1 = (__this->f0);
		bool L_2 = m2792(NULL, L_1, &m2792_MI);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		t2139 * L_3 = (__this->f0);
		VirtActionInvoker1< t102  >::Invoke(&m12158_MI, L_3, ((*(t102 *)((t102 *)UnBox ((*(t4 **)(t4 **)SZArrayLdElema(p0, 0)), InitializedTypeInfo(&t102_TI))))));
	}

IL_003f:
	{
		return;
	}
}
extern MethodInfo m12164_MI;
 bool m12164 (t2140 * __this, t4 * p0, t546 * p1, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		t2139 * L_0 = (__this->f0);
		t4 * L_1 = m2950(L_0, &m2950_MI);
		if ((((t4 *)L_1) != ((t4 *)p0)))
		{
			goto IL_0021;
		}
	}
	{
		t2139 * L_2 = (__this->f0);
		t546 * L_3 = m2948(L_2, &m2948_MI);
		G_B3_0 = ((((t546 *)L_3) == ((t546 *)p1))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
extern Il2CppType t2139_0_0_1;
FieldInfo t2140_f0_FieldInfo = 
{
	"Delegate", &t2139_0_0_1, &t2140_TI, offsetof(t2140, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2140_FIs[] =
{
	&t2140_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2140_m12161_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2140_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12161_MI = 
{
	".ctor", (methodPointerType)&m12161, &t2140_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2140_m12161_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2139_0_0_0;
static ParameterInfo t2140_m12162_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2139_0_0_0},
};
extern TypeInfo t2140_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12162_MI = 
{
	".ctor", (methodPointerType)&m12162, &t2140_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2140_m12162_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2140_m12163_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2140_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12163_MI = 
{
	"Invoke", (methodPointerType)&m12163, &t2140_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2140_m12163_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2140_m12164_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2140_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12164_MI = 
{
	"Find", (methodPointerType)&m12164, &t2140_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2140_m12164_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2140_MIs[] =
{
	&m12161_MI,
	&m12162_MI,
	&m12163_MI,
	&m12164_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12163_MI;
extern MethodInfo m12164_MI;
static MethodInfo* t2140_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12163_MI,
	&m12164_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2140_0_0_0;
extern Il2CppType t2140_1_0_0;
extern TypeInfo t545_TI;
struct t2140;
extern TypeInfo t2140_TI;
extern Il2CppGenericClass t2140_GC;
TypeInfo t2140_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2140_MIs, NULL, t2140_FIs, NULL, &t545_TI, NULL, NULL, &t2140_TI, NULL, t2140_VT, &EmptyCustomAttributesCache, &t2140_TI, &t2140_0_0_0, &t2140_1_0_0, NULL, &t2140_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2140), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3413_TI;

#include "t217.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ScrollRect/MovementType>
extern MethodInfo m24876_MI;
static PropertyInfo t3413____Current_PropertyInfo = 
{
	&t3413_TI, "Current", &m24876_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3413_PIs[] =
{
	&t3413____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3413_TI;
extern Il2CppType t217_0_0_0;
extern void* RuntimeInvoker_t217 (MethodInfo* method, void* obj, void** args);
MethodInfo m24876_MI = 
{
	"get_Current", NULL, &t3413_TI, &t217_0_0_0, RuntimeInvoker_t217, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3413_MIs[] =
{
	&m24876_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3413_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3413_0_0_0;
extern Il2CppType t3413_1_0_0;
struct t3413;
extern TypeInfo t3413_TI;
extern Il2CppGenericClass t3413_GC;
TypeInfo t3413_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3413_MIs, t3413_PIs, NULL, NULL, NULL, NULL, NULL, &t3413_TI, t3413_ITIs, NULL, &EmptyCustomAttributesCache, &t3413_TI, &t3413_0_0_0, &t3413_1_0_0, NULL, &t3413_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2141.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2141_TI;
#include "t2141MD.h"

extern TypeInfo t2141_TI;
extern TypeInfo t217_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m12169_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18721_MI;
struct t16;
 int32_t m18721 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18721_MI;


extern MethodInfo m12165_MI;
 void m12165 (t2141 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12166_MI;
 t4 * m12166 (t2141 * __this, MethodInfo* method){
	{
		int32_t L_0 = m12169(__this, &m12169_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t217_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m12167_MI;
 void m12167 (t2141 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12168_MI;
 bool m12168 (t2141 * __this, MethodInfo* method){
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
extern MethodInfo m12169_MI;
 int32_t m12169 (t2141 * __this, MethodInfo* method){
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
		int32_t L_8 = m18721(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18721_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.ScrollRect/MovementType>
extern Il2CppType t16_0_0_1;
FieldInfo t2141_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2141_TI, offsetof(t2141, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2141_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2141_TI, offsetof(t2141, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2141_FIs[] =
{
	&t2141_f0_FieldInfo,
	&t2141_f1_FieldInfo,
	NULL
};
extern MethodInfo m12166_MI;
static PropertyInfo t2141____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2141_TI, "System.Collections.IEnumerator.Current", &m12166_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12169_MI;
static PropertyInfo t2141____Current_PropertyInfo = 
{
	&t2141_TI, "Current", &m12169_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2141_PIs[] =
{
	&t2141____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2141____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2141_m12165_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2141_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12165_MI = 
{
	".ctor", (methodPointerType)&m12165, &t2141_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2141_m12165_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2141_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12166_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12166, &t2141_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2141_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12167_MI = 
{
	"Dispose", (methodPointerType)&m12167, &t2141_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2141_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12168_MI = 
{
	"MoveNext", (methodPointerType)&m12168, &t2141_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2141_TI;
extern Il2CppType t217_0_0_0;
extern void* RuntimeInvoker_t217 (MethodInfo* method, void* obj, void** args);
MethodInfo m12169_MI = 
{
	"get_Current", (methodPointerType)&m12169, &t2141_TI, &t217_0_0_0, RuntimeInvoker_t217, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2141_MIs[] =
{
	&m12165_MI,
	&m12166_MI,
	&m12167_MI,
	&m12168_MI,
	&m12169_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m12166_MI;
extern MethodInfo m12168_MI;
extern MethodInfo m12167_MI;
extern MethodInfo m12169_MI;
static MethodInfo* t2141_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m12166_MI,
	&m12168_MI,
	&m12167_MI,
	&m12169_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3413_TI;
static TypeInfo* t2141_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3413_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3413_TI;
static Il2CppInterfaceOffsetPair t2141_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3413_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2141_0_0_0;
extern Il2CppType t2141_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2141_TI;
extern Il2CppGenericClass t2141_GC;
extern TypeInfo t16_TI;
TypeInfo t2141_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2141_MIs, t2141_PIs, t2141_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2141_TI, t2141_ITIs, t2141_VT, &EmptyCustomAttributesCache, &t2141_TI, &t2141_0_0_0, &t2141_1_0_0, t2141_IOs, &t2141_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2141)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4110_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.ScrollRect/MovementType>
extern MethodInfo m24877_MI;
static PropertyInfo t4110____Count_PropertyInfo = 
{
	&t4110_TI, "Count", &m24877_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24878_MI;
static PropertyInfo t4110____IsReadOnly_PropertyInfo = 
{
	&t4110_TI, "IsReadOnly", &m24878_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4110_PIs[] =
{
	&t4110____Count_PropertyInfo,
	&t4110____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4110_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24877_MI = 
{
	"get_Count", NULL, &t4110_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4110_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24878_MI = 
{
	"get_IsReadOnly", NULL, &t4110_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t217_0_0_0;
static ParameterInfo t4110_m24879_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t217_0_0_0},
};
extern TypeInfo t4110_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24879_MI = 
{
	"Add", NULL, &t4110_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4110_m24879_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4110_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24880_MI = 
{
	"Clear", NULL, &t4110_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t217_0_0_0;
static ParameterInfo t4110_m24881_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t217_0_0_0},
};
extern TypeInfo t4110_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24881_MI = 
{
	"Contains", NULL, &t4110_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t4110_m24881_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3237_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4110_m24882_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3237_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4110_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24882_MI = 
{
	"CopyTo", NULL, &t4110_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4110_m24882_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t217_0_0_0;
static ParameterInfo t4110_m24883_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t217_0_0_0},
};
extern TypeInfo t4110_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24883_MI = 
{
	"Remove", NULL, &t4110_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t4110_m24883_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4110_MIs[] =
{
	&m24877_MI,
	&m24878_MI,
	&m24879_MI,
	&m24880_MI,
	&m24881_MI,
	&m24882_MI,
	&m24883_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4112_TI;
static TypeInfo* t4110_ITIs[] = 
{
	&t592_TI,
	&t4112_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4110_0_0_0;
extern Il2CppType t4110_1_0_0;
struct t4110;
extern TypeInfo t4110_TI;
extern Il2CppGenericClass t4110_GC;
TypeInfo t4110_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4110_MIs, t4110_PIs, NULL, NULL, NULL, NULL, NULL, &t4110_TI, t4110_ITIs, NULL, &EmptyCustomAttributesCache, &t4110_TI, &t4110_0_0_0, &t4110_1_0_0, NULL, &t4110_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4112_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ScrollRect/MovementType>
extern TypeInfo t4112_TI;
extern Il2CppType t3413_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24884_MI = 
{
	"GetEnumerator", NULL, &t4112_TI, &t3413_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4112_MIs[] =
{
	&m24884_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4112_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4112_0_0_0;
extern Il2CppType t4112_1_0_0;
struct t4112;
extern TypeInfo t4112_TI;
extern Il2CppGenericClass t4112_GC;
TypeInfo t4112_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4112_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4112_TI, t4112_ITIs, NULL, &EmptyCustomAttributesCache, &t4112_TI, &t4112_0_0_0, &t4112_1_0_0, NULL, &t4112_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4111_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.ScrollRect/MovementType>
extern MethodInfo m24885_MI;
extern MethodInfo m24886_MI;
static PropertyInfo t4111____Item_PropertyInfo = 
{
	&t4111_TI, "Item", &m24885_MI, &m24886_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4111_PIs[] =
{
	&t4111____Item_PropertyInfo,
	NULL
};
extern Il2CppType t217_0_0_0;
static ParameterInfo t4111_m24887_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t217_0_0_0},
};
extern TypeInfo t4111_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24887_MI = 
{
	"IndexOf", NULL, &t4111_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t4111_m24887_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t217_0_0_0;
static ParameterInfo t4111_m24888_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t217_0_0_0},
};
extern TypeInfo t4111_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24888_MI = 
{
	"Insert", NULL, &t4111_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t4111_m24888_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4111_m24889_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4111_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24889_MI = 
{
	"RemoveAt", NULL, &t4111_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4111_m24889_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4111_m24885_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4111_TI;
extern Il2CppType t217_0_0_0;
extern void* RuntimeInvoker_t217_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24885_MI = 
{
	"get_Item", NULL, &t4111_TI, &t217_0_0_0, RuntimeInvoker_t217_t18, t4111_m24885_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t217_0_0_0;
static ParameterInfo t4111_m24886_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t217_0_0_0},
};
extern TypeInfo t4111_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24886_MI = 
{
	"set_Item", NULL, &t4111_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t4111_m24886_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4111_MIs[] =
{
	&m24887_MI,
	&m24888_MI,
	&m24889_MI,
	&m24885_MI,
	&m24886_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4110_TI;
extern TypeInfo t4112_TI;
static TypeInfo* t4111_ITIs[] = 
{
	&t592_TI,
	&t4110_TI,
	&t4112_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4111_0_0_0;
extern Il2CppType t4111_1_0_0;
struct t4111;
extern TypeInfo t4111_TI;
extern Il2CppGenericClass t4111_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4111_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4111_MIs, t4111_PIs, NULL, NULL, NULL, NULL, NULL, &t4111_TI, t4111_ITIs, NULL, &t1401__CustomAttributeCache, &t4111_TI, &t4111_0_0_0, &t4111_1_0_0, NULL, &t4111_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2142.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2142_TI;
#include "t2142MD.h"

#include "t133.h"
#include "t2143.h"
extern TypeInfo t309_TI;
extern TypeInfo t4_TI;
extern TypeInfo t2142_TI;
extern TypeInfo t133_TI;
extern TypeInfo t2143_TI;
extern TypeInfo t17_TI;
#include "t2143MD.h"
extern MethodInfo m12172_MI;
extern MethodInfo m12174_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Selectable>
extern Il2CppType t309_0_0_33;
FieldInfo t2142_f1_FieldInfo = 
{
	"m_Arg1", &t309_0_0_33, &t2142_TI, offsetof(t2142, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2142_FIs[] =
{
	&t2142_f1_FieldInfo,
	NULL
};
extern Il2CppType t22_0_0_0;
extern Il2CppType t546_0_0_0;
extern Il2CppType t133_0_0_0;
static ParameterInfo t2142_m12170_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t22_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2142_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12170_MI = 
{
	".ctor", (methodPointerType)&m7891_gshared, &t2142_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4_t4, t2142_m12170_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2142_m12171_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2142_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12171_MI = 
{
	"Invoke", (methodPointerType)&m7893_gshared, &t2142_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2142_m12171_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2142_MIs[] =
{
	&m12170_MI,
	&m12171_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12171_MI;
extern MethodInfo m12175_MI;
static MethodInfo* t2142_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12171_MI,
	&m12175_MI,
};
extern Il2CppType t2144_0_0_0;
extern TypeInfo t2144_TI;
extern MethodInfo m18731_MI;
extern TypeInfo t133_TI;
extern MethodInfo m12177_MI;
extern MethodInfo m12172_MI;
extern TypeInfo t133_TI;
extern MethodInfo m12174_MI;
static void* t2142_RGCTXData[8] = 
{
	(void*)&t2144_0_0_0,
	&t2144_TI,
	&m18731_MI,
	&t133_TI,
	&m12177_MI,
	&m12172_MI,
	&t133_TI,
	&m12174_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2142_0_0_0;
extern Il2CppType t2142_1_0_0;
extern TypeInfo t2143_TI;
struct t2142;
extern TypeInfo t2142_TI;
extern Il2CppGenericClass t2142_GC;
TypeInfo t2142_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2142_MIs, NULL, t2142_FIs, NULL, &t2143_TI, NULL, NULL, &t2142_TI, NULL, t2142_VT, &EmptyCustomAttributesCache, &t2142_TI, &t2142_0_0_0, &t2142_1_0_0, NULL, &t2142_GC, NULL, NULL, NULL, t2142_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2142), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2143_TI;

#include "t2144.h"
extern TypeInfo t2143_TI;
extern TypeInfo t2144_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t133_TI;
extern TypeInfo t17_TI;
#include "t2144MD.h"
extern Il2CppType t2144_0_0_0;
extern MethodInfo m2791_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2954_MI;
extern MethodInfo m1592_MI;
extern MethodInfo m2790_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m18731_MI;
extern MethodInfo m2792_MI;
extern MethodInfo m12177_MI;
extern MethodInfo m2950_MI;
extern MethodInfo m2948_MI;
struct t545;
#define m18731(__this, p0, method) (void)m16892_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m18731_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Selectable>
extern Il2CppType t2144_0_0_1;
FieldInfo t2143_f0_FieldInfo = 
{
	"Delegate", &t2144_0_0_1, &t2143_TI, offsetof(t2143, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2143_FIs[] =
{
	&t2143_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2143_m12172_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2143_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12172_MI = 
{
	".ctor", (methodPointerType)&m7894_gshared, &t2143_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2143_m12172_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2144_0_0_0;
static ParameterInfo t2143_m12173_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2144_0_0_0},
};
extern TypeInfo t2143_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12173_MI = 
{
	".ctor", (methodPointerType)&m7895_gshared, &t2143_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2143_m12173_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2143_m12174_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2143_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12174_MI = 
{
	"Invoke", (methodPointerType)&m7896_gshared, &t2143_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2143_m12174_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2143_m12175_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2143_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12175_MI = 
{
	"Find", (methodPointerType)&m7897_gshared, &t2143_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2143_m12175_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2143_MIs[] =
{
	&m12172_MI,
	&m12173_MI,
	&m12174_MI,
	&m12175_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12174_MI;
extern MethodInfo m12175_MI;
static MethodInfo* t2143_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12174_MI,
	&m12175_MI,
};
extern Il2CppType t2144_0_0_0;
extern TypeInfo t2144_TI;
extern MethodInfo m18731_MI;
extern TypeInfo t133_TI;
extern MethodInfo m12177_MI;
static void* t2143_RGCTXData[5] = 
{
	(void*)&t2144_0_0_0,
	&t2144_TI,
	&m18731_MI,
	&t133_TI,
	&m12177_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2143_0_0_0;
extern Il2CppType t2143_1_0_0;
extern TypeInfo t545_TI;
struct t2143;
extern TypeInfo t2143_TI;
extern Il2CppGenericClass t2143_GC;
TypeInfo t2143_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2143_MIs, NULL, t2143_FIs, NULL, &t545_TI, NULL, NULL, &t2143_TI, NULL, t2143_VT, &EmptyCustomAttributesCache, &t2143_TI, &t2143_0_0_0, &t2143_1_0_0, NULL, &t2143_GC, NULL, NULL, NULL, t2143_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2143), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2144_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.Selectable>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2144_m12176_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2144_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m12176_MI = 
{
	".ctor", (methodPointerType)&m7898_gshared, &t2144_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2144_m12176_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t2144_m12177_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2144_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12177_MI = 
{
	"Invoke", (methodPointerType)&m7899_gshared, &t2144_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2144_m12177_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2144_m12178_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2144_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12178_MI = 
{
	"BeginInvoke", (methodPointerType)&m7900_gshared, &t2144_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2144_m12178_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2144_m12179_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2144_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12179_MI = 
{
	"EndInvoke", (methodPointerType)&m7901_gshared, &t2144_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2144_m12179_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2144_MIs[] =
{
	&m12176_MI,
	&m12177_MI,
	&m12178_MI,
	&m12179_MI,
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
extern MethodInfo m12177_MI;
extern MethodInfo m12178_MI;
extern MethodInfo m12179_MI;
static MethodInfo* t2144_VT[] =
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
	&m12177_MI,
	&m12178_MI,
	&m12179_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2144_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2144_0_0_0;
extern Il2CppType t2144_1_0_0;
extern TypeInfo t193_TI;
struct t2144;
extern TypeInfo t2144_TI;
extern Il2CppGenericClass t2144_GC;
TypeInfo t2144_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2144_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2144_TI, NULL, t2144_VT, &EmptyCustomAttributesCache, &t2144_TI, &t2144_0_0_0, &t2144_1_0_0, t2144_IOs, &t2144_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2144), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t224.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t224_TI;
#include "t224MD.h"

#include "t2152.h"
#include "t2149.h"
#include "t2150.h"
#include "t330.h"
#include "t2157.h"
#include "t2151.h"
extern TypeInfo t224_TI;
extern TypeInfo t133_TI;
extern TypeInfo t18_TI;
extern TypeInfo t17_TI;
extern TypeInfo t307_TI;
extern TypeInfo t574_TI;
extern TypeInfo t1269_TI;
extern TypeInfo t1234_TI;
extern TypeInfo t2145_TI;
extern TypeInfo t2152_TI;
extern TypeInfo t19_TI;
extern TypeInfo t2147_TI;
extern TypeInfo t2148_TI;
extern TypeInfo t2146_TI;
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2149_TI;
extern TypeInfo t330_TI;
extern TypeInfo t2150_TI;
extern TypeInfo t2157_TI;
#include "t1234MD.h"
#include "t4MD.h"
#include "t591MD.h"
#include "t2149MD.h"
#include "t330MD.h"
#include "t2150MD.h"
#include "t2152MD.h"
#include "t2157MD.h"
extern MethodInfo m1887_MI;
extern MethodInfo m12223_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m6473_MI;
extern MethodInfo m18733_MI;
extern MethodInfo m6474_MI;
extern MethodInfo m12211_MI;
extern MethodInfo m24_MI;
extern MethodInfo m12208_MI;
extern MethodInfo m3759_MI;
extern MethodInfo m1881_MI;
extern MethodInfo m12203_MI;
extern MethodInfo m12209_MI;
extern MethodInfo m12212_MI;
extern MethodInfo m1882_MI;
extern MethodInfo m12197_MI;
extern MethodInfo m12221_MI;
extern MethodInfo m6912_MI;
extern MethodInfo m12222_MI;
extern MethodInfo m24153_MI;
extern MethodInfo m24158_MI;
extern MethodInfo m24160_MI;
extern MethodInfo m24161_MI;
extern MethodInfo m42_MI;
extern MethodInfo m43_MI;
extern MethodInfo m12213_MI;
extern MethodInfo m12198_MI;
extern MethodInfo m12199_MI;
extern MethodInfo m12230_MI;
extern MethodInfo m3755_MI;
extern MethodInfo m18735_MI;
extern MethodInfo m12206_MI;
extern MethodInfo m12207_MI;
extern MethodInfo m2947_MI;
extern MethodInfo m12305_MI;
extern MethodInfo m12224_MI;
extern MethodInfo m12210_MI;
extern MethodInfo m12215_MI;
extern MethodInfo m3771_MI;
extern MethodInfo m12311_MI;
extern MethodInfo m18737_MI;
extern MethodInfo m18745_MI;
extern MethodInfo m3758_MI;
struct t16;
struct t16;
 void m16895_gshared (t4 * __this, t309** p0, int32_t p1, MethodInfo* method);
#define m16895(__this, p0, p1, method) (void)m16895_gshared((t4 *)__this, (t309**)p0, (int32_t)p1, method)
#define m18733(__this, p0, p1, method) (void)m16895_gshared((t4 *)__this, (t309**)p0, (int32_t)p1, method)
extern MethodInfo m18733_MI;
struct t16;
#include "t2155.h"
struct t16;
#include "t1486.h"
 int32_t m7708_gshared (t4 * __this, t309* p0, t4 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m7708(__this, p0, p1, p2, p3, method) (int32_t)m7708_gshared((t4 *)__this, (t309*)p0, (t4 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m18735(__this, p0, p1, p2, p3, method) (int32_t)m7708_gshared((t4 *)__this, (t309*)p0, (t4 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m18735_MI;
struct t16;
struct t16;
 void m16964_gshared (t4 * __this, t309* p0, int32_t p1, int32_t p2, t4* p3, MethodInfo* method);
#define m16964(__this, p0, p1, p2, p3, method) (void)m16964_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (int32_t)p2, (t4*)p3, method)
#define m18737(__this, p0, p1, p2, p3, method) (void)m16964_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (int32_t)p2, (t4*)p3, method)
extern MethodInfo m18737_MI;
struct t16;
#include "t31.h"
struct t16;
#include "t1608.h"
 void m17115_gshared (t4 * __this, t309* p0, int32_t p1, t1608 * p2, MethodInfo* method);
#define m17115(__this, p0, p1, p2, method) (void)m17115_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (t1608 *)p2, method)
#define m18745(__this, p0, p1, p2, method) (void)m17115_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (t1608 *)p2, method)
extern MethodInfo m18745_MI;


extern MethodInfo m12208_MI;
 t2152  m12208 (t224 * __this, MethodInfo* method){
	{
		t2152  L_0 = {0};
		m12224(&L_0, __this, &m12224_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
extern Il2CppType t18_0_0_32849;
FieldInfo t224_f0_FieldInfo = 
{
	"DefaultCapacity", &t18_0_0_32849, &t224_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2145_0_0_1;
FieldInfo t224_f1_FieldInfo = 
{
	"_items", &t2145_0_0_1, &t224_TI, offsetof(t224, f1), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t224_f2_FieldInfo = 
{
	"_size", &t18_0_0_1, &t224_TI, offsetof(t224, f2), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t224_f3_FieldInfo = 
{
	"_version", &t18_0_0_1, &t224_TI, offsetof(t224, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2145_0_0_49;
FieldInfo t224_f4_FieldInfo = 
{
	"EmptyArray", &t2145_0_0_49, &t224_TI, offsetof(t224_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t224_FIs[] =
{
	&t224_f0_FieldInfo,
	&t224_f1_FieldInfo,
	&t224_f2_FieldInfo,
	&t224_f3_FieldInfo,
	&t224_f4_FieldInfo,
	NULL
};
static const int32_t t224_f0_DefaultValueData = 4;
extern Il2CppType t18_0_0_0;
static Il2CppFieldDefaultValueEntry t224_f0_DefaultValue = 
{
	&t224_f0_FieldInfo, { (char*)&t224_f0_DefaultValueData, &t18_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t224_FDVs[] = 
{
	&t224_f0_DefaultValue,
	NULL
};
extern MethodInfo m12190_MI;
static PropertyInfo t224____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t224_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m12190_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12191_MI;
static PropertyInfo t224____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t224_TI, "System.Collections.ICollection.IsSynchronized", &m12191_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12192_MI;
static PropertyInfo t224____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t224_TI, "System.Collections.ICollection.SyncRoot", &m12192_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12193_MI;
static PropertyInfo t224____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t224_TI, "System.Collections.IList.IsFixedSize", &m12193_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12194_MI;
static PropertyInfo t224____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t224_TI, "System.Collections.IList.IsReadOnly", &m12194_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12195_MI;
extern MethodInfo m12196_MI;
static PropertyInfo t224____System_Collections_IList_Item_PropertyInfo = 
{
	&t224_TI, "System.Collections.IList.Item", &m12195_MI, &m12196_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12221_MI;
extern MethodInfo m12222_MI;
static PropertyInfo t224____Capacity_PropertyInfo = 
{
	&t224_TI, "Capacity", &m12221_MI, &m12222_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1889_MI;
static PropertyInfo t224____Count_PropertyInfo = 
{
	&t224_TI, "Count", &m1889_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1887_MI;
extern MethodInfo m12223_MI;
static PropertyInfo t224____Item_PropertyInfo = 
{
	&t224_TI, "Item", &m1887_MI, &m12223_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t224_PIs[] =
{
	&t224____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t224____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t224____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t224____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t224____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t224____System_Collections_IList_Item_PropertyInfo,
	&t224____Capacity_PropertyInfo,
	&t224____Count_PropertyInfo,
	&t224____Item_PropertyInfo,
	NULL
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m1875_MI = 
{
	".ctor", (methodPointerType)&m7910_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t224_m12180_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12180_MI = 
{
	".ctor", (methodPointerType)&m7912_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t224_m12180_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12181_MI = 
{
	".cctor", (methodPointerType)&m7914_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t2146_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12182_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m7916_gshared, &t224_TI, &t2146_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t224_m12183_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12183_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m7918_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t224_m12183_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12184_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m7920_gshared, &t224_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t224_m12185_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12185_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m7922_gshared, &t224_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t224_m12185_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t224_m12186_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12186_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m7924_gshared, &t224_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t224_m12186_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t224_m12187_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12187_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m7926_gshared, &t224_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t224_m12187_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t224_m12188_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12188_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m7928_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t224_m12188_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t224_m12189_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12189_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m7930_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t224_m12189_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12190_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m7932_gshared, &t224_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12191_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m7934_gshared, &t224_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12192_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m7936_gshared, &t224_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12193_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m7938_gshared, &t224_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12194_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m7940_gshared, &t224_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t224_m12195_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12195_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m7942_gshared, &t224_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t224_m12195_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t224_m12196_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12196_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m7944_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t224_m12196_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t224_m1881_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1881_MI = 
{
	"Add", (methodPointerType)&m7945_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t224_m1881_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t224_m12197_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12197_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m7947_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t224_m12197_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2147_0_0_0;
static ParameterInfo t224_m12198_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2147_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12198_MI = 
{
	"AddCollection", (methodPointerType)&m7949_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t224_m12198_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2148_0_0_0;
static ParameterInfo t224_m12199_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2148_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12199_MI = 
{
	"AddEnumerable", (methodPointerType)&m7951_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t224_m12199_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2148_0_0_0;
static ParameterInfo t224_m12200_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2148_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12200_MI = 
{
	"AddRange", (methodPointerType)&m7953_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t224_m12200_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t2149_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12201_MI = 
{
	"AsReadOnly", (methodPointerType)&m7955_gshared, &t224_TI, &t2149_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12202_MI = 
{
	"Clear", (methodPointerType)&m7957_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t224_m12203_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12203_MI = 
{
	"Contains", (methodPointerType)&m7959_gshared, &t224_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t224_m12203_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2145_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t224_m12204_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2145_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12204_MI = 
{
	"CopyTo", (methodPointerType)&m7961_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t224_m12204_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2150_0_0_0;
static ParameterInfo t224_m12205_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2150_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t133_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12205_MI = 
{
	"Find", (methodPointerType)&m7963_gshared, &t224_TI, &t133_0_0_0, RuntimeInvoker_t4_t4, t224_m12205_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2150_0_0_0;
static ParameterInfo t224_m12206_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2150_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12206_MI = 
{
	"CheckMatch", (methodPointerType)&m7965_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t224_m12206_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
extern Il2CppType t2150_0_0_0;
static ParameterInfo t224_m12207_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2150_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12207_MI = 
{
	"GetIndex", (methodPointerType)&m7967_gshared, &t224_TI, &t18_0_0_0, RuntimeInvoker_t18_t18_t18_t4, t224_m12207_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t2152_0_0_0;
extern void* RuntimeInvoker_t2152 (MethodInfo* method, void* obj, void** args);
MethodInfo m12208_MI = 
{
	"GetEnumerator", (methodPointerType)&m12208, &t224_TI, &t2152_0_0_0, RuntimeInvoker_t2152, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t224_m12209_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12209_MI = 
{
	"IndexOf", (methodPointerType)&m7970_gshared, &t224_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t224_m12209_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t224_m12210_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12210_MI = 
{
	"Shift", (methodPointerType)&m7972_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t224_m12210_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t224_m12211_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12211_MI = 
{
	"CheckIndex", (methodPointerType)&m7974_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t224_m12211_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t133_0_0_0;
static ParameterInfo t224_m12212_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12212_MI = 
{
	"Insert", (methodPointerType)&m7976_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t224_m12212_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2148_0_0_0;
static ParameterInfo t224_m12213_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2148_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12213_MI = 
{
	"CheckCollection", (methodPointerType)&m7978_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t224_m12213_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t224_m1882_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1882_MI = 
{
	"Remove", (methodPointerType)&m7980_gshared, &t224_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t224_m1882_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2150_0_0_0;
static ParameterInfo t224_m12214_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2150_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12214_MI = 
{
	"RemoveAll", (methodPointerType)&m7982_gshared, &t224_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t224_m12214_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t224_m12215_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12215_MI = 
{
	"RemoveAt", (methodPointerType)&m7984_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t224_m12215_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12216_MI = 
{
	"Reverse", (methodPointerType)&m7986_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12217_MI = 
{
	"Sort", (methodPointerType)&m7988_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2151_0_0_0;
static ParameterInfo t224_m12218_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2151_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12218_MI = 
{
	"Sort", (methodPointerType)&m7990_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t224_m12218_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t2145_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12219_MI = 
{
	"ToArray", (methodPointerType)&m7992_gshared, &t224_TI, &t2145_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12220_MI = 
{
	"TrimExcess", (methodPointerType)&m7994_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12221_MI = 
{
	"get_Capacity", (methodPointerType)&m7996_gshared, &t224_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t224_m12222_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12222_MI = 
{
	"set_Capacity", (methodPointerType)&m7998_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t224_m12222_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t224_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m1889_MI = 
{
	"get_Count", (methodPointerType)&m8000_gshared, &t224_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t224_m1887_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t133_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m1887_MI = 
{
	"get_Item", (methodPointerType)&m8002_gshared, &t224_TI, &t133_0_0_0, RuntimeInvoker_t4_t18, t224_m1887_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t133_0_0_0;
static ParameterInfo t224_m12223_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t224_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12223_MI = 
{
	"set_Item", (methodPointerType)&m8004_gshared, &t224_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t224_m12223_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t224_MIs[] =
{
	&m1875_MI,
	&m12180_MI,
	&m12181_MI,
	&m12182_MI,
	&m12183_MI,
	&m12184_MI,
	&m12185_MI,
	&m12186_MI,
	&m12187_MI,
	&m12188_MI,
	&m12189_MI,
	&m12190_MI,
	&m12191_MI,
	&m12192_MI,
	&m12193_MI,
	&m12194_MI,
	&m12195_MI,
	&m12196_MI,
	&m1881_MI,
	&m12197_MI,
	&m12198_MI,
	&m12199_MI,
	&m12200_MI,
	&m12201_MI,
	&m12202_MI,
	&m12203_MI,
	&m12204_MI,
	&m12205_MI,
	&m12206_MI,
	&m12207_MI,
	&m12208_MI,
	&m12209_MI,
	&m12210_MI,
	&m12211_MI,
	&m12212_MI,
	&m12213_MI,
	&m1882_MI,
	&m12214_MI,
	&m12215_MI,
	&m12216_MI,
	&m12217_MI,
	&m12218_MI,
	&m12219_MI,
	&m12220_MI,
	&m12221_MI,
	&m12222_MI,
	&m1889_MI,
	&m1887_MI,
	&m12223_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12184_MI;
extern MethodInfo m1889_MI;
extern MethodInfo m12191_MI;
extern MethodInfo m12192_MI;
extern MethodInfo m12183_MI;
extern MethodInfo m12193_MI;
extern MethodInfo m12194_MI;
extern MethodInfo m12195_MI;
extern MethodInfo m12196_MI;
extern MethodInfo m12185_MI;
extern MethodInfo m12202_MI;
extern MethodInfo m12186_MI;
extern MethodInfo m12187_MI;
extern MethodInfo m12188_MI;
extern MethodInfo m12189_MI;
extern MethodInfo m12215_MI;
extern MethodInfo m1889_MI;
extern MethodInfo m12190_MI;
extern MethodInfo m1881_MI;
extern MethodInfo m12202_MI;
extern MethodInfo m12203_MI;
extern MethodInfo m12204_MI;
extern MethodInfo m1882_MI;
extern MethodInfo m12182_MI;
extern MethodInfo m12209_MI;
extern MethodInfo m12212_MI;
extern MethodInfo m12215_MI;
extern MethodInfo m1887_MI;
extern MethodInfo m12223_MI;
static MethodInfo* t224_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12184_MI,
	&m1889_MI,
	&m12191_MI,
	&m12192_MI,
	&m12183_MI,
	&m12193_MI,
	&m12194_MI,
	&m12195_MI,
	&m12196_MI,
	&m12185_MI,
	&m12202_MI,
	&m12186_MI,
	&m12187_MI,
	&m12188_MI,
	&m12189_MI,
	&m12215_MI,
	&m1889_MI,
	&m12190_MI,
	&m1881_MI,
	&m12202_MI,
	&m12203_MI,
	&m12204_MI,
	&m1882_MI,
	&m12182_MI,
	&m12209_MI,
	&m12212_MI,
	&m12215_MI,
	&m1887_MI,
	&m12223_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2147_TI;
extern TypeInfo t2148_TI;
extern TypeInfo t2153_TI;
static TypeInfo* t224_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t2147_TI,
	&t2148_TI,
	&t2153_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2147_TI;
extern TypeInfo t2148_TI;
extern TypeInfo t2153_TI;
static Il2CppInterfaceOffsetPair t224_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t2147_TI, 20},
	{ &t2148_TI, 27},
	{ &t2153_TI, 28},
};
extern TypeInfo t224_TI;
extern TypeInfo t2145_TI;
extern MethodInfo m12208_MI;
extern TypeInfo t2152_TI;
extern TypeInfo t133_TI;
extern MethodInfo m1881_MI;
extern MethodInfo m12203_MI;
extern MethodInfo m12209_MI;
extern MethodInfo m12211_MI;
extern MethodInfo m12212_MI;
extern MethodInfo m1882_MI;
extern MethodInfo m1887_MI;
extern MethodInfo m12223_MI;
extern MethodInfo m12197_MI;
extern MethodInfo m12221_MI;
extern MethodInfo m12222_MI;
extern MethodInfo m24153_MI;
extern MethodInfo m24158_MI;
extern MethodInfo m24160_MI;
extern MethodInfo m24161_MI;
extern MethodInfo m12213_MI;
extern TypeInfo t2147_TI;
extern MethodInfo m12198_MI;
extern MethodInfo m12199_MI;
extern TypeInfo t2149_TI;
extern MethodInfo m12230_MI;
extern MethodInfo m18735_MI;
extern MethodInfo m12206_MI;
extern MethodInfo m12207_MI;
extern MethodInfo m12305_MI;
extern MethodInfo m12224_MI;
extern MethodInfo m12210_MI;
extern MethodInfo m12215_MI;
extern MethodInfo m12311_MI;
extern MethodInfo m18737_MI;
extern MethodInfo m18745_MI;
extern MethodInfo m18733_MI;
static void* t224_RGCTXData[37] = 
{
	&t224_TI,
	&t2145_TI,
	&m12208_MI,
	&t2152_TI,
	&t133_TI,
	&m1881_MI,
	&m12203_MI,
	&m12209_MI,
	&m12211_MI,
	&m12212_MI,
	&m1882_MI,
	&m1887_MI,
	&m12223_MI,
	&m12197_MI,
	&m12221_MI,
	&m12222_MI,
	&m24153_MI,
	&m24158_MI,
	&m24160_MI,
	&m24161_MI,
	&m12213_MI,
	&t2147_TI,
	&m12198_MI,
	&m12199_MI,
	&t2149_TI,
	&m12230_MI,
	&m18735_MI,
	&m12206_MI,
	&m12207_MI,
	&m12305_MI,
	&m12224_MI,
	&m12210_MI,
	&m12215_MI,
	&m12311_MI,
	&m18737_MI,
	&m18745_MI,
	&m18733_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t224_0_0_0;
extern Il2CppType t224_1_0_0;
extern TypeInfo t4_TI;
struct t224;
extern TypeInfo t224_TI;
extern Il2CppGenericClass t224_GC;
extern CustomAttributesCache t840__CustomAttributeCache;
TypeInfo t224_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t224_MIs, t224_PIs, t224_FIs, NULL, &t4_TI, NULL, NULL, &t224_TI, t224_ITIs, t224_VT, &t840__CustomAttributeCache, &t224_TI, &t224_0_0_0, &t224_1_0_0, t224_IOs, &t224_GC, NULL, t224_FDVs, NULL, t224_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t224), 0, -1, sizeof(t224_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2152_TI;

#include "t1287.h"
extern TypeInfo t2152_TI;
extern TypeInfo t1270_TI;
extern TypeInfo t133_TI;
extern TypeInfo t224_TI;
extern TypeInfo t294_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1287_TI;
#include "t1287MD.h"
extern MethodInfo m12227_MI;
extern MethodInfo m6906_MI;
extern MethodInfo m1423_MI;
extern MethodInfo m2995_MI;
extern MethodInfo m7111_MI;
extern MethodInfo m6907_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Selectable>
extern Il2CppType t224_0_0_1;
FieldInfo t2152_f0_FieldInfo = 
{
	"l", &t224_0_0_1, &t2152_TI, offsetof(t2152, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2152_f1_FieldInfo = 
{
	"next", &t18_0_0_1, &t2152_TI, offsetof(t2152, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2152_f2_FieldInfo = 
{
	"ver", &t18_0_0_1, &t2152_TI, offsetof(t2152, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t133_0_0_1;
FieldInfo t2152_f3_FieldInfo = 
{
	"current", &t133_0_0_1, &t2152_TI, offsetof(t2152, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2152_FIs[] =
{
	&t2152_f0_FieldInfo,
	&t2152_f1_FieldInfo,
	&t2152_f2_FieldInfo,
	&t2152_f3_FieldInfo,
	NULL
};
extern MethodInfo m12225_MI;
static PropertyInfo t2152____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2152_TI, "System.Collections.IEnumerator.Current", &m12225_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12229_MI;
static PropertyInfo t2152____Current_PropertyInfo = 
{
	&t2152_TI, "Current", &m12229_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2152_PIs[] =
{
	&t2152____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2152____Current_PropertyInfo,
	NULL
};
extern Il2CppType t224_0_0_0;
static ParameterInfo t2152_m12224_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t224_0_0_0},
};
extern TypeInfo t2152_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12224_MI = 
{
	".ctor", (methodPointerType)&m8006_gshared, &t2152_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2152_m12224_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2152_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12225_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8007_gshared, &t2152_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2152_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12226_MI = 
{
	"Dispose", (methodPointerType)&m8008_gshared, &t2152_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2152_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12227_MI = 
{
	"VerifyState", (methodPointerType)&m8009_gshared, &t2152_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2152_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12228_MI = 
{
	"MoveNext", (methodPointerType)&m8010_gshared, &t2152_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2152_TI;
extern Il2CppType t133_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12229_MI = 
{
	"get_Current", (methodPointerType)&m8011_gshared, &t2152_TI, &t133_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2152_MIs[] =
{
	&m12224_MI,
	&m12225_MI,
	&m12226_MI,
	&m12227_MI,
	&m12228_MI,
	&m12229_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m12225_MI;
extern MethodInfo m12228_MI;
extern MethodInfo m12226_MI;
extern MethodInfo m12229_MI;
static MethodInfo* t2152_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m12225_MI,
	&m12228_MI,
	&m12226_MI,
	&m12229_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2146_TI;
static TypeInfo* t2152_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t2146_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2146_TI;
static Il2CppInterfaceOffsetPair t2152_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t2146_TI, 7},
};
extern MethodInfo m12227_MI;
extern TypeInfo t133_TI;
extern TypeInfo t2152_TI;
static void* t2152_RGCTXData[3] = 
{
	&m12227_MI,
	&t133_TI,
	&t2152_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2152_0_0_0;
extern Il2CppType t2152_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2152_TI;
extern Il2CppGenericClass t2152_GC;
extern TypeInfo t840_TI;
TypeInfo t2152_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2152_MIs, t2152_PIs, t2152_FIs, NULL, &t101_TI, NULL, &t840_TI, &t2152_TI, t2152_ITIs, t2152_VT, &EmptyCustomAttributesCache, &t2152_TI, &t2152_0_0_0, &t2152_1_0_0, t2152_IOs, &t2152_GC, NULL, NULL, NULL, t2152_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2152)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2149_TI;

#include "t337.h"
extern TypeInfo t2149_TI;
extern TypeInfo t133_TI;
extern TypeInfo t18_TI;
extern TypeInfo t337_TI;
extern TypeInfo t2153_TI;
extern TypeInfo t2147_TI;
extern TypeInfo t330_TI;
extern TypeInfo t641_TI;
extern TypeInfo t17_TI;
extern TypeInfo t16_TI;
extern TypeInfo t592_TI;
extern TypeInfo t27_TI;
extern TypeInfo t19_TI;
extern TypeInfo t2145_TI;
extern TypeInfo t2148_TI;
extern TypeInfo t2146_TI;
#include "t337MD.h"
#include "t2154MD.h"
extern MethodInfo m12259_MI;
extern MethodInfo m1510_MI;
extern MethodInfo m24162_MI;
extern MethodInfo m24153_MI;
extern MethodInfo m24_MI;
extern MethodInfo m2947_MI;
extern MethodInfo m7400_MI;
extern MethodInfo m7309_MI;
extern MethodInfo m12291_MI;
extern MethodInfo m24157_MI;
extern MethodInfo m24164_MI;
extern MethodInfo m24158_MI;
extern MethodInfo m24160_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Selectable>
extern Il2CppType t2153_0_0_1;
FieldInfo t2149_f0_FieldInfo = 
{
	"list", &t2153_0_0_1, &t2149_TI, offsetof(t2149, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2149_FIs[] =
{
	&t2149_f0_FieldInfo,
	NULL
};
extern MethodInfo m12236_MI;
extern MethodInfo m12237_MI;
static PropertyInfo t2149____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2149_TI, "System.Collections.Generic.IList<T>.Item", &m12236_MI, &m12237_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12238_MI;
static PropertyInfo t2149____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2149_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m12238_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12248_MI;
static PropertyInfo t2149____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2149_TI, "System.Collections.ICollection.IsSynchronized", &m12248_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12249_MI;
static PropertyInfo t2149____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2149_TI, "System.Collections.ICollection.SyncRoot", &m12249_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12250_MI;
static PropertyInfo t2149____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2149_TI, "System.Collections.IList.IsFixedSize", &m12250_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12251_MI;
static PropertyInfo t2149____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2149_TI, "System.Collections.IList.IsReadOnly", &m12251_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12252_MI;
extern MethodInfo m12253_MI;
static PropertyInfo t2149____System_Collections_IList_Item_PropertyInfo = 
{
	&t2149_TI, "System.Collections.IList.Item", &m12252_MI, &m12253_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12258_MI;
static PropertyInfo t2149____Count_PropertyInfo = 
{
	&t2149_TI, "Count", &m12258_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12259_MI;
static PropertyInfo t2149____Item_PropertyInfo = 
{
	&t2149_TI, "Item", &m12259_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2149_PIs[] =
{
	&t2149____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2149____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2149____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2149____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2149____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2149____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2149____System_Collections_IList_Item_PropertyInfo,
	&t2149____Count_PropertyInfo,
	&t2149____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2153_0_0_0;
static ParameterInfo t2149_m12230_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2153_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12230_MI = 
{
	".ctor", (methodPointerType)&m8012_gshared, &t2149_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2149_m12230_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t2149_m12231_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12231_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m8013_gshared, &t2149_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2149_m12231_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2149_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12232_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m8014_gshared, &t2149_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t133_0_0_0;
static ParameterInfo t2149_m12233_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12233_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m8015_gshared, &t2149_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2149_m12233_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t2149_m12234_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12234_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m8016_gshared, &t2149_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2149_m12234_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2149_m12235_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12235_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m8017_gshared, &t2149_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2149_m12235_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2149_m12236_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t133_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12236_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8018_gshared, &t2149_TI, &t133_0_0_0, RuntimeInvoker_t4_t18, t2149_m12236_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t133_0_0_0;
static ParameterInfo t2149_m12237_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12237_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8019_gshared, &t2149_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2149_m12237_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2149_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12238_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8020_gshared, &t2149_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2149_m12239_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12239_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8021_gshared, &t2149_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2149_m12239_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2149_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12240_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8022_gshared, &t2149_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2149_m12241_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12241_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8023_gshared, &t2149_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2149_m12241_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2149_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12242_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8024_gshared, &t2149_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2149_m12243_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12243_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8025_gshared, &t2149_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2149_m12243_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2149_m12244_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12244_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8026_gshared, &t2149_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2149_m12244_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2149_m12245_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12245_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8027_gshared, &t2149_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2149_m12245_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2149_m12246_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12246_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8028_gshared, &t2149_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2149_m12246_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2149_m12247_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12247_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8029_gshared, &t2149_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2149_m12247_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2149_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12248_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8030_gshared, &t2149_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2149_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12249_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8031_gshared, &t2149_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2149_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12250_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8032_gshared, &t2149_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2149_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12251_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8033_gshared, &t2149_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2149_m12252_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12252_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8034_gshared, &t2149_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t2149_m12252_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2149_m12253_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12253_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8035_gshared, &t2149_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2149_m12253_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t2149_m12254_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12254_MI = 
{
	"Contains", (methodPointerType)&m8036_gshared, &t2149_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2149_m12254_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2145_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2149_m12255_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2145_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12255_MI = 
{
	"CopyTo", (methodPointerType)&m8037_gshared, &t2149_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2149_m12255_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2149_TI;
extern Il2CppType t2146_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12256_MI = 
{
	"GetEnumerator", (methodPointerType)&m8038_gshared, &t2149_TI, &t2146_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t2149_m12257_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12257_MI = 
{
	"IndexOf", (methodPointerType)&m8039_gshared, &t2149_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2149_m12257_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2149_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12258_MI = 
{
	"get_Count", (methodPointerType)&m8040_gshared, &t2149_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2149_m12259_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t133_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12259_MI = 
{
	"get_Item", (methodPointerType)&m8041_gshared, &t2149_TI, &t133_0_0_0, RuntimeInvoker_t4_t18, t2149_m12259_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2149_MIs[] =
{
	&m12230_MI,
	&m12231_MI,
	&m12232_MI,
	&m12233_MI,
	&m12234_MI,
	&m12235_MI,
	&m12236_MI,
	&m12237_MI,
	&m12238_MI,
	&m12239_MI,
	&m12240_MI,
	&m12241_MI,
	&m12242_MI,
	&m12243_MI,
	&m12244_MI,
	&m12245_MI,
	&m12246_MI,
	&m12247_MI,
	&m12248_MI,
	&m12249_MI,
	&m12250_MI,
	&m12251_MI,
	&m12252_MI,
	&m12253_MI,
	&m12254_MI,
	&m12255_MI,
	&m12256_MI,
	&m12257_MI,
	&m12258_MI,
	&m12259_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12240_MI;
extern MethodInfo m12258_MI;
extern MethodInfo m12248_MI;
extern MethodInfo m12249_MI;
extern MethodInfo m12239_MI;
extern MethodInfo m12250_MI;
extern MethodInfo m12251_MI;
extern MethodInfo m12252_MI;
extern MethodInfo m12253_MI;
extern MethodInfo m12241_MI;
extern MethodInfo m12242_MI;
extern MethodInfo m12243_MI;
extern MethodInfo m12244_MI;
extern MethodInfo m12245_MI;
extern MethodInfo m12246_MI;
extern MethodInfo m12247_MI;
extern MethodInfo m12258_MI;
extern MethodInfo m12238_MI;
extern MethodInfo m12231_MI;
extern MethodInfo m12232_MI;
extern MethodInfo m12254_MI;
extern MethodInfo m12255_MI;
extern MethodInfo m12234_MI;
extern MethodInfo m12257_MI;
extern MethodInfo m12233_MI;
extern MethodInfo m12235_MI;
extern MethodInfo m12236_MI;
extern MethodInfo m12237_MI;
extern MethodInfo m12256_MI;
extern MethodInfo m12259_MI;
static MethodInfo* t2149_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12240_MI,
	&m12258_MI,
	&m12248_MI,
	&m12249_MI,
	&m12239_MI,
	&m12250_MI,
	&m12251_MI,
	&m12252_MI,
	&m12253_MI,
	&m12241_MI,
	&m12242_MI,
	&m12243_MI,
	&m12244_MI,
	&m12245_MI,
	&m12246_MI,
	&m12247_MI,
	&m12258_MI,
	&m12238_MI,
	&m12231_MI,
	&m12232_MI,
	&m12254_MI,
	&m12255_MI,
	&m12234_MI,
	&m12257_MI,
	&m12233_MI,
	&m12235_MI,
	&m12236_MI,
	&m12237_MI,
	&m12256_MI,
	&m12259_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2147_TI;
extern TypeInfo t2153_TI;
extern TypeInfo t2148_TI;
static TypeInfo* t2149_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t2147_TI,
	&t2153_TI,
	&t2148_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2147_TI;
extern TypeInfo t2153_TI;
extern TypeInfo t2148_TI;
static Il2CppInterfaceOffsetPair t2149_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t2147_TI, 20},
	{ &t2153_TI, 27},
	{ &t2148_TI, 32},
};
extern MethodInfo m12259_MI;
extern MethodInfo m12291_MI;
extern TypeInfo t133_TI;
extern MethodInfo m24157_MI;
extern MethodInfo m24164_MI;
extern MethodInfo m24162_MI;
extern MethodInfo m24158_MI;
extern MethodInfo m24160_MI;
extern MethodInfo m24153_MI;
static void* t2149_RGCTXData[9] = 
{
	&m12259_MI,
	&m12291_MI,
	&t133_TI,
	&m24157_MI,
	&m24164_MI,
	&m24162_MI,
	&m24158_MI,
	&m24160_MI,
	&m24153_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2149_0_0_0;
extern Il2CppType t2149_1_0_0;
extern TypeInfo t4_TI;
struct t2149;
extern TypeInfo t2149_TI;
extern Il2CppGenericClass t2149_GC;
extern CustomAttributesCache t842__CustomAttributeCache;
TypeInfo t2149_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2149_MIs, t2149_PIs, t2149_FIs, NULL, &t4_TI, NULL, NULL, &t2149_TI, t2149_ITIs, t2149_VT, &t842__CustomAttributeCache, &t2149_TI, &t2149_0_0_0, &t2149_1_0_0, t2149_IOs, &t2149_GC, NULL, NULL, NULL, t2149_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2149), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2154.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2154_TI;

extern TypeInfo t2154_TI;
extern TypeInfo t2147_TI;
extern TypeInfo t19_TI;
extern TypeInfo t2153_TI;
extern TypeInfo t133_TI;
extern TypeInfo t18_TI;
extern TypeInfo t17_TI;
extern TypeInfo t224_TI;
extern TypeInfo t641_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern TypeInfo t2148_TI;
extern TypeInfo t2146_TI;
extern TypeInfo t2145_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t337_TI;
extern TypeInfo t1015_TI;
extern Il2CppType t133_0_0_0;
extern MethodInfo m24154_MI;
extern MethodInfo m12294_MI;
extern MethodInfo m12295_MI;
extern MethodInfo m24162_MI;
extern MethodInfo m12292_MI;
extern MethodInfo m12290_MI;
extern MethodInfo m24153_MI;
extern MethodInfo m24_MI;
extern MethodInfo m1875_MI;
extern MethodInfo m7399_MI;
extern MethodInfo m7400_MI;
extern MethodInfo m24160_MI;
extern MethodInfo m12283_MI;
extern MethodInfo m12291_MI;
extern MethodInfo m24157_MI;
extern MethodInfo m24164_MI;
extern MethodInfo m12293_MI;
extern MethodInfo m12281_MI;
extern MethodInfo m12286_MI;
extern MethodInfo m12277_MI;
extern MethodInfo m24156_MI;
extern MethodInfo m24158_MI;
extern MethodInfo m24165_MI;
extern MethodInfo m24166_MI;
extern MethodInfo m24163_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m3814_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m1510_MI;
extern MethodInfo m7398_MI;
extern MethodInfo m7401_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>
extern Il2CppType t2153_0_0_1;
FieldInfo t2154_f0_FieldInfo = 
{
	"list", &t2153_0_0_1, &t2154_TI, offsetof(t2154, f0), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t2154_f1_FieldInfo = 
{
	"syncRoot", &t4_0_0_1, &t2154_TI, offsetof(t2154, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2154_FIs[] =
{
	&t2154_f0_FieldInfo,
	&t2154_f1_FieldInfo,
	NULL
};
extern MethodInfo m12261_MI;
static PropertyInfo t2154____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2154_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m12261_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12269_MI;
static PropertyInfo t2154____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2154_TI, "System.Collections.ICollection.IsSynchronized", &m12269_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12270_MI;
static PropertyInfo t2154____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2154_TI, "System.Collections.ICollection.SyncRoot", &m12270_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12271_MI;
static PropertyInfo t2154____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2154_TI, "System.Collections.IList.IsFixedSize", &m12271_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12272_MI;
static PropertyInfo t2154____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2154_TI, "System.Collections.IList.IsReadOnly", &m12272_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12273_MI;
extern MethodInfo m12274_MI;
static PropertyInfo t2154____System_Collections_IList_Item_PropertyInfo = 
{
	&t2154_TI, "System.Collections.IList.Item", &m12273_MI, &m12274_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12287_MI;
static PropertyInfo t2154____Count_PropertyInfo = 
{
	&t2154_TI, "Count", &m12287_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12288_MI;
extern MethodInfo m12289_MI;
static PropertyInfo t2154____Item_PropertyInfo = 
{
	&t2154_TI, "Item", &m12288_MI, &m12289_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2154_PIs[] =
{
	&t2154____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2154____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2154____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2154____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2154____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2154____System_Collections_IList_Item_PropertyInfo,
	&t2154____Count_PropertyInfo,
	&t2154____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2154_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12260_MI = 
{
	".ctor", (methodPointerType)&m8042_gshared, &t2154_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2154_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12261_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8043_gshared, &t2154_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2154_m12262_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12262_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8044_gshared, &t2154_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2154_m12262_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2154_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12263_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8045_gshared, &t2154_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2154_m12264_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12264_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8046_gshared, &t2154_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2154_m12264_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2154_m12265_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12265_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8047_gshared, &t2154_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2154_m12265_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2154_m12266_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12266_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8048_gshared, &t2154_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2154_m12266_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2154_m12267_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12267_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8049_gshared, &t2154_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2154_m12267_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2154_m12268_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12268_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8050_gshared, &t2154_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2154_m12268_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2154_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12269_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8051_gshared, &t2154_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2154_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12270_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8052_gshared, &t2154_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2154_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12271_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8053_gshared, &t2154_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2154_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12272_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8054_gshared, &t2154_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2154_m12273_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12273_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8055_gshared, &t2154_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t2154_m12273_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2154_m12274_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12274_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8056_gshared, &t2154_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2154_m12274_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t2154_m12275_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12275_MI = 
{
	"Add", (methodPointerType)&m8057_gshared, &t2154_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2154_m12275_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2154_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12276_MI = 
{
	"Clear", (methodPointerType)&m8058_gshared, &t2154_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2154_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12277_MI = 
{
	"ClearItems", (methodPointerType)&m8059_gshared, &t2154_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t2154_m12278_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12278_MI = 
{
	"Contains", (methodPointerType)&m8060_gshared, &t2154_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2154_m12278_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2145_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2154_m12279_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2145_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12279_MI = 
{
	"CopyTo", (methodPointerType)&m8061_gshared, &t2154_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2154_m12279_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2154_TI;
extern Il2CppType t2146_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12280_MI = 
{
	"GetEnumerator", (methodPointerType)&m8062_gshared, &t2154_TI, &t2146_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t2154_m12281_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12281_MI = 
{
	"IndexOf", (methodPointerType)&m8063_gshared, &t2154_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2154_m12281_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t133_0_0_0;
static ParameterInfo t2154_m12282_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12282_MI = 
{
	"Insert", (methodPointerType)&m8064_gshared, &t2154_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2154_m12282_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t133_0_0_0;
static ParameterInfo t2154_m12283_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12283_MI = 
{
	"InsertItem", (methodPointerType)&m8065_gshared, &t2154_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2154_m12283_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t2154_m12284_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12284_MI = 
{
	"Remove", (methodPointerType)&m8066_gshared, &t2154_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2154_m12284_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2154_m12285_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12285_MI = 
{
	"RemoveAt", (methodPointerType)&m8067_gshared, &t2154_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2154_m12285_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2154_m12286_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12286_MI = 
{
	"RemoveItem", (methodPointerType)&m8068_gshared, &t2154_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2154_m12286_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2154_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12287_MI = 
{
	"get_Count", (methodPointerType)&m8069_gshared, &t2154_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2154_m12288_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t133_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12288_MI = 
{
	"get_Item", (methodPointerType)&m8070_gshared, &t2154_TI, &t133_0_0_0, RuntimeInvoker_t4_t18, t2154_m12288_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t133_0_0_0;
static ParameterInfo t2154_m12289_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12289_MI = 
{
	"set_Item", (methodPointerType)&m8071_gshared, &t2154_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2154_m12289_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t133_0_0_0;
static ParameterInfo t2154_m12290_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12290_MI = 
{
	"SetItem", (methodPointerType)&m8072_gshared, &t2154_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2154_m12290_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2154_m12291_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12291_MI = 
{
	"IsValidItem", (methodPointerType)&m8073_gshared, &t2154_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2154_m12291_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2154_m12292_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t133_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12292_MI = 
{
	"ConvertItem", (methodPointerType)&m8074_gshared, &t2154_TI, &t133_0_0_0, RuntimeInvoker_t4_t4, t2154_m12292_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2153_0_0_0;
static ParameterInfo t2154_m12293_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2153_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12293_MI = 
{
	"CheckWritable", (methodPointerType)&m8075_gshared, &t2154_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2154_m12293_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2153_0_0_0;
static ParameterInfo t2154_m12294_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2153_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12294_MI = 
{
	"IsSynchronized", (methodPointerType)&m8076_gshared, &t2154_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2154_m12294_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2153_0_0_0;
static ParameterInfo t2154_m12295_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2153_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12295_MI = 
{
	"IsFixedSize", (methodPointerType)&m8077_gshared, &t2154_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2154_m12295_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2154_MIs[] =
{
	&m12260_MI,
	&m12261_MI,
	&m12262_MI,
	&m12263_MI,
	&m12264_MI,
	&m12265_MI,
	&m12266_MI,
	&m12267_MI,
	&m12268_MI,
	&m12269_MI,
	&m12270_MI,
	&m12271_MI,
	&m12272_MI,
	&m12273_MI,
	&m12274_MI,
	&m12275_MI,
	&m12276_MI,
	&m12277_MI,
	&m12278_MI,
	&m12279_MI,
	&m12280_MI,
	&m12281_MI,
	&m12282_MI,
	&m12283_MI,
	&m12284_MI,
	&m12285_MI,
	&m12286_MI,
	&m12287_MI,
	&m12288_MI,
	&m12289_MI,
	&m12290_MI,
	&m12291_MI,
	&m12292_MI,
	&m12293_MI,
	&m12294_MI,
	&m12295_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12263_MI;
extern MethodInfo m12287_MI;
extern MethodInfo m12269_MI;
extern MethodInfo m12270_MI;
extern MethodInfo m12262_MI;
extern MethodInfo m12271_MI;
extern MethodInfo m12272_MI;
extern MethodInfo m12273_MI;
extern MethodInfo m12274_MI;
extern MethodInfo m12264_MI;
extern MethodInfo m12276_MI;
extern MethodInfo m12265_MI;
extern MethodInfo m12266_MI;
extern MethodInfo m12267_MI;
extern MethodInfo m12268_MI;
extern MethodInfo m12285_MI;
extern MethodInfo m12287_MI;
extern MethodInfo m12261_MI;
extern MethodInfo m12275_MI;
extern MethodInfo m12276_MI;
extern MethodInfo m12278_MI;
extern MethodInfo m12279_MI;
extern MethodInfo m12284_MI;
extern MethodInfo m12281_MI;
extern MethodInfo m12282_MI;
extern MethodInfo m12285_MI;
extern MethodInfo m12288_MI;
extern MethodInfo m12289_MI;
extern MethodInfo m12280_MI;
extern MethodInfo m12277_MI;
extern MethodInfo m12283_MI;
extern MethodInfo m12286_MI;
extern MethodInfo m12290_MI;
static MethodInfo* t2154_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12263_MI,
	&m12287_MI,
	&m12269_MI,
	&m12270_MI,
	&m12262_MI,
	&m12271_MI,
	&m12272_MI,
	&m12273_MI,
	&m12274_MI,
	&m12264_MI,
	&m12276_MI,
	&m12265_MI,
	&m12266_MI,
	&m12267_MI,
	&m12268_MI,
	&m12285_MI,
	&m12287_MI,
	&m12261_MI,
	&m12275_MI,
	&m12276_MI,
	&m12278_MI,
	&m12279_MI,
	&m12284_MI,
	&m12281_MI,
	&m12282_MI,
	&m12285_MI,
	&m12288_MI,
	&m12289_MI,
	&m12280_MI,
	&m12277_MI,
	&m12283_MI,
	&m12286_MI,
	&m12290_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2147_TI;
extern TypeInfo t2153_TI;
extern TypeInfo t2148_TI;
static TypeInfo* t2154_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t2147_TI,
	&t2153_TI,
	&t2148_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2147_TI;
extern TypeInfo t2153_TI;
extern TypeInfo t2148_TI;
static Il2CppInterfaceOffsetPair t2154_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t2147_TI, 20},
	{ &t2153_TI, 27},
	{ &t2148_TI, 32},
};
extern TypeInfo t224_TI;
extern MethodInfo m1875_MI;
extern MethodInfo m24154_MI;
extern MethodInfo m24160_MI;
extern MethodInfo m24153_MI;
extern MethodInfo m12292_MI;
extern MethodInfo m12283_MI;
extern MethodInfo m12291_MI;
extern TypeInfo t133_TI;
extern MethodInfo m24157_MI;
extern MethodInfo m24164_MI;
extern MethodInfo m12293_MI;
extern MethodInfo m12281_MI;
extern MethodInfo m12286_MI;
extern MethodInfo m12294_MI;
extern MethodInfo m12295_MI;
extern MethodInfo m24162_MI;
extern MethodInfo m12290_MI;
extern MethodInfo m12277_MI;
extern MethodInfo m24156_MI;
extern MethodInfo m24158_MI;
extern MethodInfo m24165_MI;
extern MethodInfo m24166_MI;
extern MethodInfo m24163_MI;
extern Il2CppType t133_0_0_0;
static void* t2154_RGCTXData[25] = 
{
	&t224_TI,
	&m1875_MI,
	&m24154_MI,
	&m24160_MI,
	&m24153_MI,
	&m12292_MI,
	&m12283_MI,
	&m12291_MI,
	&t133_TI,
	&m24157_MI,
	&m24164_MI,
	&m12293_MI,
	&m12281_MI,
	&m12286_MI,
	&m12294_MI,
	&m12295_MI,
	&m24162_MI,
	&m12290_MI,
	&m12277_MI,
	&m24156_MI,
	&m24158_MI,
	&m24165_MI,
	&m24166_MI,
	&m24163_MI,
	(void*)&t133_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2154_0_0_0;
extern Il2CppType t2154_1_0_0;
extern TypeInfo t4_TI;
struct t2154;
extern TypeInfo t2154_TI;
extern Il2CppGenericClass t2154_GC;
extern CustomAttributesCache t841__CustomAttributeCache;
TypeInfo t2154_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2154_MIs, t2154_PIs, t2154_FIs, NULL, &t4_TI, NULL, NULL, &t2154_TI, t2154_ITIs, t2154_VT, &t841__CustomAttributeCache, &t2154_TI, &t2154_0_0_0, &t2154_1_0_0, t2154_IOs, &t2154_GC, NULL, NULL, NULL, t2154_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2154), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2155_TI;
#include "t2155MD.h"

#include "t837.h"
#include "t2156.h"
extern TypeInfo t2155_TI;
extern TypeInfo t5174_TI;
extern TypeInfo t294_TI;
extern TypeInfo t133_TI;
extern TypeInfo t19_TI;
extern TypeInfo t837_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2156_TI;
extern TypeInfo t18_TI;
#include "t1223MD.h"
#include "t2156MD.h"
extern Il2CppType t5174_0_0_0;
extern Il2CppType t133_0_0_0;
extern Il2CppType t837_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m12301_MI;
extern MethodInfo m24890_MI;
extern MethodInfo m18734_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Selectable>
extern Il2CppType t2155_0_0_49;
FieldInfo t2155_f0_FieldInfo = 
{
	"_default", &t2155_0_0_49, &t2155_TI, offsetof(t2155_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2155_FIs[] =
{
	&t2155_f0_FieldInfo,
	NULL
};
extern MethodInfo m12300_MI;
static PropertyInfo t2155____Default_PropertyInfo = 
{
	&t2155_TI, "Default", &m12300_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2155_PIs[] =
{
	&t2155____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2155_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12296_MI = 
{
	".ctor", (methodPointerType)&m8078_gshared, &t2155_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2155_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12297_MI = 
{
	".cctor", (methodPointerType)&m8079_gshared, &t2155_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2155_m12298_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2155_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12298_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8080_gshared, &t2155_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2155_m12298_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2155_m12299_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2155_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12299_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8081_gshared, &t2155_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2155_m12299_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t2155_m24890_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2155_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24890_MI = 
{
	"GetHashCode", NULL, &t2155_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2155_m24890_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
extern Il2CppType t133_0_0_0;
static ParameterInfo t2155_m18734_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2155_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m18734_MI = 
{
	"Equals", NULL, &t2155_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2155_m18734_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2155_TI;
extern Il2CppType t2155_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12300_MI = 
{
	"get_Default", (methodPointerType)&m8082_gshared, &t2155_TI, &t2155_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2155_MIs[] =
{
	&m12296_MI,
	&m12297_MI,
	&m12298_MI,
	&m12299_MI,
	&m24890_MI,
	&m18734_MI,
	&m12300_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m18734_MI;
extern MethodInfo m24890_MI;
extern MethodInfo m12299_MI;
extern MethodInfo m12298_MI;
static MethodInfo* t2155_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m18734_MI,
	&m24890_MI,
	&m12299_MI,
	&m12298_MI,
	NULL,
	NULL,
};
extern TypeInfo t5175_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2155_ITIs[] = 
{
	&t5175_TI,
	&t860_TI,
};
extern TypeInfo t5175_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2155_IOs[] = 
{
	{ &t5175_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppType t5174_0_0_0;
extern Il2CppType t133_0_0_0;
extern TypeInfo t2155_TI;
extern TypeInfo t2155_TI;
extern TypeInfo t2156_TI;
extern MethodInfo m12301_MI;
extern TypeInfo t133_TI;
extern MethodInfo m24890_MI;
extern MethodInfo m18734_MI;
static void* t2155_RGCTXData[9] = 
{
	(void*)&t5174_0_0_0,
	(void*)&t133_0_0_0,
	&t2155_TI,
	&t2155_TI,
	&t2156_TI,
	&m12301_MI,
	&t133_TI,
	&m24890_MI,
	&m18734_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2155_0_0_0;
extern Il2CppType t2155_1_0_0;
extern TypeInfo t4_TI;
struct t2155;
extern TypeInfo t2155_TI;
extern Il2CppGenericClass t2155_GC;
TypeInfo t2155_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2155_MIs, t2155_PIs, t2155_FIs, NULL, &t4_TI, NULL, NULL, &t2155_TI, t2155_ITIs, t2155_VT, &EmptyCustomAttributesCache, &t2155_TI, &t2155_0_0_0, &t2155_1_0_0, t2155_IOs, &t2155_GC, NULL, NULL, NULL, t2155_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2155), 0, -1, sizeof(t2155_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5175_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Selectable>
extern Il2CppType t133_0_0_0;
extern Il2CppType t133_0_0_0;
static ParameterInfo t5175_m24891_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t5175_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24891_MI = 
{
	"Equals", NULL, &t5175_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t5175_m24891_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t5175_m24892_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t5175_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24892_MI = 
{
	"GetHashCode", NULL, &t5175_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t5175_m24892_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5175_MIs[] =
{
	&m24891_MI,
	&m24892_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5175_0_0_0;
extern Il2CppType t5175_1_0_0;
struct t5175;
extern TypeInfo t5175_TI;
extern Il2CppGenericClass t5175_GC;
TypeInfo t5175_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5175_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5175_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5175_TI, &t5175_0_0_0, &t5175_1_0_0, NULL, &t5175_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5174_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.UI.Selectable>
extern Il2CppType t133_0_0_0;
static ParameterInfo t5174_m24893_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t5174_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24893_MI = 
{
	"Equals", NULL, &t5174_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t5174_m24893_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5174_MIs[] =
{
	&m24893_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5174_0_0_0;
extern Il2CppType t5174_1_0_0;
struct t5174;
extern TypeInfo t5174_TI;
extern Il2CppGenericClass t5174_GC;
TypeInfo t5174_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5174_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5174_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5174_TI, &t5174_0_0_0, &t5174_1_0_0, NULL, &t5174_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2156_TI;

extern TypeInfo t133_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
extern TypeInfo t19_TI;
extern MethodInfo m12296_MI;
extern MethodInfo m30_MI;
extern MethodInfo m28_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Selectable>
extern TypeInfo t2156_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12301_MI = 
{
	".ctor", (methodPointerType)&m8113_gshared, &t2156_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t2156_m12302_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2156_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12302_MI = 
{
	"GetHashCode", (methodPointerType)&m8114_gshared, &t2156_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2156_m12302_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
extern Il2CppType t133_0_0_0;
static ParameterInfo t2156_m12303_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2156_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12303_MI = 
{
	"Equals", (methodPointerType)&m8115_gshared, &t2156_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2156_m12303_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2156_MIs[] =
{
	&m12301_MI,
	&m12302_MI,
	&m12303_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12303_MI;
extern MethodInfo m12302_MI;
extern MethodInfo m12299_MI;
extern MethodInfo m12298_MI;
extern MethodInfo m12302_MI;
extern MethodInfo m12303_MI;
static MethodInfo* t2156_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12303_MI,
	&m12302_MI,
	&m12299_MI,
	&m12298_MI,
	&m12302_MI,
	&m12303_MI,
};
extern TypeInfo t5175_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2156_IOs[] = 
{
	{ &t5175_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppType t5174_0_0_0;
extern Il2CppType t133_0_0_0;
extern TypeInfo t2155_TI;
extern TypeInfo t2155_TI;
extern TypeInfo t2156_TI;
extern MethodInfo m12301_MI;
extern TypeInfo t133_TI;
extern MethodInfo m24890_MI;
extern MethodInfo m18734_MI;
extern MethodInfo m12296_MI;
extern TypeInfo t133_TI;
static void* t2156_RGCTXData[11] = 
{
	(void*)&t5174_0_0_0,
	(void*)&t133_0_0_0,
	&t2155_TI,
	&t2155_TI,
	&t2156_TI,
	&m12301_MI,
	&t133_TI,
	&m24890_MI,
	&m18734_MI,
	&m12296_MI,
	&t133_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2156_0_0_0;
extern Il2CppType t2156_1_0_0;
extern TypeInfo t2155_TI;
struct t2156;
extern TypeInfo t2156_TI;
extern Il2CppGenericClass t2156_GC;
extern TypeInfo t836_TI;
TypeInfo t2156_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2156_MIs, NULL, NULL, NULL, &t2155_TI, NULL, &t836_TI, &t2156_TI, NULL, t2156_VT, &EmptyCustomAttributesCache, &t2156_TI, &t2156_0_0_0, &t2156_1_0_0, t2156_IOs, &t2156_GC, NULL, NULL, NULL, t2156_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2156), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2150_TI;



// Metadata Definition System.Predicate`1<UnityEngine.UI.Selectable>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2150_m12304_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2150_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m12304_MI = 
{
	".ctor", (methodPointerType)&m8116_gshared, &t2150_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2150_m12304_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t2150_m12305_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2150_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12305_MI = 
{
	"Invoke", (methodPointerType)&m8117_gshared, &t2150_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2150_m12305_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2150_m12306_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2150_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12306_MI = 
{
	"BeginInvoke", (methodPointerType)&m8118_gshared, &t2150_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2150_m12306_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2150_m12307_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2150_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12307_MI = 
{
	"EndInvoke", (methodPointerType)&m8119_gshared, &t2150_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2150_m12307_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2150_MIs[] =
{
	&m12304_MI,
	&m12305_MI,
	&m12306_MI,
	&m12307_MI,
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
extern MethodInfo m12305_MI;
extern MethodInfo m12306_MI;
extern MethodInfo m12307_MI;
static MethodInfo* t2150_VT[] =
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
	&m12305_MI,
	&m12306_MI,
	&m12307_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2150_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2150_0_0_0;
extern Il2CppType t2150_1_0_0;
extern TypeInfo t193_TI;
struct t2150;
extern TypeInfo t2150_TI;
extern Il2CppGenericClass t2150_GC;
TypeInfo t2150_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2150_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2150_TI, NULL, t2150_VT, &EmptyCustomAttributesCache, &t2150_TI, &t2150_0_0_0, &t2150_1_0_0, t2150_IOs, &t2150_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2150), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2157_TI;

#include "t825.h"
#include "t2158.h"
extern TypeInfo t2157_TI;
extern TypeInfo t3415_TI;
extern TypeInfo t294_TI;
extern TypeInfo t133_TI;
extern TypeInfo t19_TI;
extern TypeInfo t825_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2158_TI;
extern TypeInfo t18_TI;
extern TypeInfo t307_TI;
#include "t2158MD.h"
extern Il2CppType t3415_0_0_0;
extern Il2CppType t133_0_0_0;
extern Il2CppType t825_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m12312_MI;
extern MethodInfo m24894_MI;
extern MethodInfo m6463_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.UI.Selectable>
extern Il2CppType t2157_0_0_49;
FieldInfo t2157_f0_FieldInfo = 
{
	"_default", &t2157_0_0_49, &t2157_TI, offsetof(t2157_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2157_FIs[] =
{
	&t2157_f0_FieldInfo,
	NULL
};
extern MethodInfo m12311_MI;
static PropertyInfo t2157____Default_PropertyInfo = 
{
	&t2157_TI, "Default", &m12311_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2157_PIs[] =
{
	&t2157____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2157_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12308_MI = 
{
	".ctor", (methodPointerType)&m8120_gshared, &t2157_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2157_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12309_MI = 
{
	".cctor", (methodPointerType)&m8121_gshared, &t2157_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2157_m12310_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2157_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12310_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8122_gshared, &t2157_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t2157_m12310_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
extern Il2CppType t133_0_0_0;
static ParameterInfo t2157_m24894_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2157_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24894_MI = 
{
	"Compare", NULL, &t2157_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t2157_m24894_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2157_TI;
extern Il2CppType t2157_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12311_MI = 
{
	"get_Default", (methodPointerType)&m8123_gshared, &t2157_TI, &t2157_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2157_MIs[] =
{
	&m12308_MI,
	&m12309_MI,
	&m12310_MI,
	&m24894_MI,
	&m12311_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m24894_MI;
extern MethodInfo m12310_MI;
static MethodInfo* t2157_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m24894_MI,
	&m12310_MI,
	NULL,
};
extern TypeInfo t3414_TI;
extern TypeInfo t717_TI;
static TypeInfo* t2157_ITIs[] = 
{
	&t3414_TI,
	&t717_TI,
};
extern TypeInfo t3414_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t2157_IOs[] = 
{
	{ &t3414_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppType t3415_0_0_0;
extern Il2CppType t133_0_0_0;
extern TypeInfo t2157_TI;
extern TypeInfo t2157_TI;
extern TypeInfo t2158_TI;
extern MethodInfo m12312_MI;
extern TypeInfo t133_TI;
extern MethodInfo m24894_MI;
static void* t2157_RGCTXData[8] = 
{
	(void*)&t3415_0_0_0,
	(void*)&t133_0_0_0,
	&t2157_TI,
	&t2157_TI,
	&t2158_TI,
	&m12312_MI,
	&t133_TI,
	&m24894_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2157_0_0_0;
extern Il2CppType t2157_1_0_0;
extern TypeInfo t4_TI;
struct t2157;
extern TypeInfo t2157_TI;
extern Il2CppGenericClass t2157_GC;
TypeInfo t2157_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2157_MIs, t2157_PIs, t2157_FIs, NULL, &t4_TI, NULL, NULL, &t2157_TI, t2157_ITIs, t2157_VT, &EmptyCustomAttributesCache, &t2157_TI, &t2157_0_0_0, &t2157_1_0_0, t2157_IOs, &t2157_GC, NULL, NULL, NULL, t2157_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2157), 0, -1, sizeof(t2157_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3414_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.UI.Selectable>
extern Il2CppType t133_0_0_0;
extern Il2CppType t133_0_0_0;
static ParameterInfo t3414_m18742_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t3414_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m18742_MI = 
{
	"Compare", NULL, &t3414_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t3414_m18742_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3414_MIs[] =
{
	&m18742_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3414_0_0_0;
extern Il2CppType t3414_1_0_0;
struct t3414;
extern TypeInfo t3414_TI;
extern Il2CppGenericClass t3414_GC;
TypeInfo t3414_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3414_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3414_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3414_TI, &t3414_0_0_0, &t3414_1_0_0, NULL, &t3414_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3415_TI;



// Metadata Definition System.IComparable`1<UnityEngine.UI.Selectable>
extern Il2CppType t133_0_0_0;
static ParameterInfo t3415_m18743_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t3415_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m18743_MI = 
{
	"CompareTo", NULL, &t3415_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t3415_m18743_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3415_MIs[] =
{
	&m18743_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3415_0_0_0;
extern Il2CppType t3415_1_0_0;
struct t3415;
extern TypeInfo t3415_TI;
extern Il2CppGenericClass t3415_GC;
TypeInfo t3415_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3415_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3415_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3415_TI, &t3415_0_0_0, &t3415_1_0_0, NULL, &t3415_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2158_TI;

extern TypeInfo t133_TI;
extern TypeInfo t3415_TI;
extern TypeInfo t18_TI;
extern TypeInfo t289_TI;
extern TypeInfo t4_TI;
extern TypeInfo t307_TI;
extern MethodInfo m12308_MI;
extern MethodInfo m18743_MI;
extern MethodInfo m7306_MI;
extern MethodInfo m1936_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Selectable>
extern TypeInfo t2158_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12312_MI = 
{
	".ctor", (methodPointerType)&m8124_gshared, &t2158_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
extern Il2CppType t133_0_0_0;
static ParameterInfo t2158_m12313_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2158_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12313_MI = 
{
	"Compare", (methodPointerType)&m8125_gshared, &t2158_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t2158_m12313_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2158_MIs[] =
{
	&m12312_MI,
	&m12313_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12313_MI;
extern MethodInfo m12310_MI;
extern MethodInfo m12313_MI;
static MethodInfo* t2158_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12313_MI,
	&m12310_MI,
	&m12313_MI,
};
extern TypeInfo t3414_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t2158_IOs[] = 
{
	{ &t3414_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppType t3415_0_0_0;
extern Il2CppType t133_0_0_0;
extern TypeInfo t2157_TI;
extern TypeInfo t2157_TI;
extern TypeInfo t2158_TI;
extern MethodInfo m12312_MI;
extern TypeInfo t133_TI;
extern MethodInfo m24894_MI;
extern MethodInfo m12308_MI;
extern TypeInfo t133_TI;
extern TypeInfo t3415_TI;
extern MethodInfo m18743_MI;
static void* t2158_RGCTXData[12] = 
{
	(void*)&t3415_0_0_0,
	(void*)&t133_0_0_0,
	&t2157_TI,
	&t2157_TI,
	&t2158_TI,
	&m12312_MI,
	&t133_TI,
	&m24894_MI,
	&m12308_MI,
	&t133_TI,
	&t3415_TI,
	&m18743_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2158_0_0_0;
extern Il2CppType t2158_1_0_0;
extern TypeInfo t2157_TI;
struct t2158;
extern TypeInfo t2158_TI;
extern Il2CppGenericClass t2158_GC;
extern TypeInfo t824_TI;
TypeInfo t2158_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2158_MIs, NULL, NULL, NULL, &t2157_TI, NULL, &t824_TI, &t2158_TI, NULL, t2158_VT, &EmptyCustomAttributesCache, &t2158_TI, &t2158_0_0_0, &t2158_1_0_0, t2158_IOs, &t2158_GC, NULL, NULL, NULL, t2158_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2158), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2151_TI;
#include "t2151MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.UI.Selectable>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2151_m12314_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2151_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m12314_MI = 
{
	".ctor", (methodPointerType)&m8191_gshared, &t2151_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2151_m12314_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
extern Il2CppType t133_0_0_0;
static ParameterInfo t2151_m12315_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t2151_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12315_MI = 
{
	"Invoke", (methodPointerType)&m8192_gshared, &t2151_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t2151_m12315_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
extern Il2CppType t133_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2151_m12316_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2151_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12316_MI = 
{
	"BeginInvoke", (methodPointerType)&m8193_gshared, &t2151_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4_t4, t2151_m12316_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2151_m12317_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2151_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12317_MI = 
{
	"EndInvoke", (methodPointerType)&m8194_gshared, &t2151_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2151_m12317_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2151_MIs[] =
{
	&m12314_MI,
	&m12315_MI,
	&m12316_MI,
	&m12317_MI,
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
extern MethodInfo m12315_MI;
extern MethodInfo m12316_MI;
extern MethodInfo m12317_MI;
static MethodInfo* t2151_VT[] =
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
	&m12315_MI,
	&m12316_MI,
	&m12317_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2151_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2151_0_0_0;
extern Il2CppType t2151_1_0_0;
extern TypeInfo t193_TI;
struct t2151;
extern TypeInfo t2151_TI;
extern Il2CppGenericClass t2151_GC;
TypeInfo t2151_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2151_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2151_TI, NULL, t2151_VT, &EmptyCustomAttributesCache, &t2151_TI, &t2151_0_0_0, &t2151_1_0_0, t2151_IOs, &t2151_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2151), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t225.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t225_TI;
#include "t225MD.h"

#include "t344.h"
#include "t2166.h"
#include "t2163.h"
#include "t2164.h"
#include "t2172.h"
#include "t2165.h"
extern TypeInfo t225_TI;
extern TypeInfo t344_TI;
extern TypeInfo t18_TI;
extern TypeInfo t17_TI;
extern TypeInfo t307_TI;
extern TypeInfo t574_TI;
extern TypeInfo t1269_TI;
extern TypeInfo t1234_TI;
extern TypeInfo t2159_TI;
extern TypeInfo t2166_TI;
extern TypeInfo t19_TI;
extern TypeInfo t2161_TI;
extern TypeInfo t2162_TI;
extern TypeInfo t2160_TI;
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2163_TI;
extern TypeInfo t330_TI;
extern TypeInfo t2164_TI;
extern TypeInfo t2172_TI;
#include "t2163MD.h"
#include "t2164MD.h"
#include "t2166MD.h"
#include "t2172MD.h"
extern MethodInfo m1878_MI;
extern MethodInfo m12363_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m6473_MI;
extern MethodInfo m18759_MI;
extern MethodInfo m6474_MI;
extern MethodInfo m12350_MI;
extern MethodInfo m24_MI;
extern MethodInfo m12347_MI;
extern MethodInfo m3759_MI;
extern MethodInfo m12335_MI;
extern MethodInfo m12342_MI;
extern MethodInfo m12348_MI;
extern MethodInfo m12351_MI;
extern MethodInfo m12353_MI;
extern MethodInfo m12336_MI;
extern MethodInfo m12361_MI;
extern MethodInfo m6912_MI;
extern MethodInfo m12362_MI;
extern MethodInfo m24895_MI;
extern MethodInfo m24896_MI;
extern MethodInfo m24897_MI;
extern MethodInfo m24898_MI;
extern MethodInfo m42_MI;
extern MethodInfo m43_MI;
extern MethodInfo m12352_MI;
extern MethodInfo m12337_MI;
extern MethodInfo m12338_MI;
extern MethodInfo m12375_MI;
extern MethodInfo m3755_MI;
extern MethodInfo m18761_MI;
extern MethodInfo m12345_MI;
extern MethodInfo m12346_MI;
extern MethodInfo m2947_MI;
extern MethodInfo m12450_MI;
extern MethodInfo m12369_MI;
extern MethodInfo m12349_MI;
extern MethodInfo m12355_MI;
extern MethodInfo m3771_MI;
extern MethodInfo m12456_MI;
extern MethodInfo m18763_MI;
extern MethodInfo m18771_MI;
extern MethodInfo m3758_MI;
struct t16;
#define m18759(__this, p0, p1, method) (void)m16895_gshared((t4 *)__this, (t309**)p0, (int32_t)p1, method)
extern MethodInfo m18759_MI;
struct t16;
#include "t2170.h"
#define m18761(__this, p0, p1, p2, p3, method) (int32_t)m7708_gshared((t4 *)__this, (t309*)p0, (t4 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m18761_MI;
struct t16;
#define m18763(__this, p0, p1, p2, p3, method) (void)m16964_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (int32_t)p2, (t4*)p3, method)
extern MethodInfo m18763_MI;
struct t16;
#define m18771(__this, p0, p1, p2, method) (void)m17115_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (t1608 *)p2, method)
extern MethodInfo m18771_MI;


extern MethodInfo m12347_MI;
 t2166  m12347 (t225 * __this, MethodInfo* method){
	{
		t2166  L_0 = {0};
		m12369(&L_0, __this, &m12369_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
extern Il2CppType t18_0_0_32849;
FieldInfo t225_f0_FieldInfo = 
{
	"DefaultCapacity", &t18_0_0_32849, &t225_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2159_0_0_1;
FieldInfo t225_f1_FieldInfo = 
{
	"_items", &t2159_0_0_1, &t225_TI, offsetof(t225, f1), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t225_f2_FieldInfo = 
{
	"_size", &t18_0_0_1, &t225_TI, offsetof(t225, f2), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t225_f3_FieldInfo = 
{
	"_version", &t18_0_0_1, &t225_TI, offsetof(t225, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2159_0_0_49;
FieldInfo t225_f4_FieldInfo = 
{
	"EmptyArray", &t2159_0_0_49, &t225_TI, offsetof(t225_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t225_FIs[] =
{
	&t225_f0_FieldInfo,
	&t225_f1_FieldInfo,
	&t225_f2_FieldInfo,
	&t225_f3_FieldInfo,
	&t225_f4_FieldInfo,
	NULL
};
static const int32_t t225_f0_DefaultValueData = 4;
extern Il2CppType t18_0_0_0;
static Il2CppFieldDefaultValueEntry t225_f0_DefaultValue = 
{
	&t225_f0_FieldInfo, { (char*)&t225_f0_DefaultValueData, &t18_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t225_FDVs[] = 
{
	&t225_f0_DefaultValue,
	NULL
};
extern MethodInfo m12328_MI;
static PropertyInfo t225____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t225_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m12328_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12329_MI;
static PropertyInfo t225____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t225_TI, "System.Collections.ICollection.IsSynchronized", &m12329_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12330_MI;
static PropertyInfo t225____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t225_TI, "System.Collections.ICollection.SyncRoot", &m12330_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12331_MI;
static PropertyInfo t225____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t225_TI, "System.Collections.IList.IsFixedSize", &m12331_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12332_MI;
static PropertyInfo t225____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t225_TI, "System.Collections.IList.IsReadOnly", &m12332_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12333_MI;
extern MethodInfo m12334_MI;
static PropertyInfo t225____System_Collections_IList_Item_PropertyInfo = 
{
	&t225_TI, "System.Collections.IList.Item", &m12333_MI, &m12334_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12361_MI;
extern MethodInfo m12362_MI;
static PropertyInfo t225____Capacity_PropertyInfo = 
{
	&t225_TI, "Capacity", &m12361_MI, &m12362_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1880_MI;
static PropertyInfo t225____Count_PropertyInfo = 
{
	&t225_TI, "Count", &m1880_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1878_MI;
extern MethodInfo m12363_MI;
static PropertyInfo t225____Item_PropertyInfo = 
{
	&t225_TI, "Item", &m1878_MI, &m12363_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t225_PIs[] =
{
	&t225____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t225____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t225____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t225____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t225____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t225____System_Collections_IList_Item_PropertyInfo,
	&t225____Capacity_PropertyInfo,
	&t225____Count_PropertyInfo,
	&t225____Item_PropertyInfo,
	NULL
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m1874_MI = 
{
	".ctor", (methodPointerType)&m7910_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t225_m12318_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12318_MI = 
{
	".ctor", (methodPointerType)&m7912_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t225_m12318_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12319_MI = 
{
	".cctor", (methodPointerType)&m7914_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t2160_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12320_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m7916_gshared, &t225_TI, &t2160_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t225_m12321_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12321_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m7918_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t225_m12321_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12322_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m7920_gshared, &t225_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t225_m12323_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12323_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m7922_gshared, &t225_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t225_m12323_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t225_m12324_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12324_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m7924_gshared, &t225_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t225_m12324_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t225_m12325_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12325_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m7926_gshared, &t225_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t225_m12325_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t225_m12326_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12326_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m7928_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t225_m12326_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t225_m12327_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12327_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m7930_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t225_m12327_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12328_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m7932_gshared, &t225_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12329_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m7934_gshared, &t225_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12330_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m7936_gshared, &t225_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12331_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m7938_gshared, &t225_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12332_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m7940_gshared, &t225_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t225_m12333_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12333_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m7942_gshared, &t225_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t225_m12333_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t225_m12334_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12334_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m7944_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t225_m12334_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t225_m12335_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12335_MI = 
{
	"Add", (methodPointerType)&m7945_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t225_m12335_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t225_m12336_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12336_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m7947_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t225_m12336_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2161_0_0_0;
static ParameterInfo t225_m12337_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2161_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12337_MI = 
{
	"AddCollection", (methodPointerType)&m7949_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t225_m12337_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2162_0_0_0;
static ParameterInfo t225_m12338_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2162_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12338_MI = 
{
	"AddEnumerable", (methodPointerType)&m7951_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t225_m12338_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2162_0_0_0;
static ParameterInfo t225_m12339_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2162_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12339_MI = 
{
	"AddRange", (methodPointerType)&m7953_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t225_m12339_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t2163_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12340_MI = 
{
	"AsReadOnly", (methodPointerType)&m7955_gshared, &t225_TI, &t2163_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12341_MI = 
{
	"Clear", (methodPointerType)&m7957_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t225_m12342_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12342_MI = 
{
	"Contains", (methodPointerType)&m7959_gshared, &t225_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t225_m12342_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2159_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t225_m12343_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2159_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12343_MI = 
{
	"CopyTo", (methodPointerType)&m7961_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t225_m12343_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2164_0_0_0;
static ParameterInfo t225_m12344_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2164_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t344_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12344_MI = 
{
	"Find", (methodPointerType)&m7963_gshared, &t225_TI, &t344_0_0_0, RuntimeInvoker_t4_t4, t225_m12344_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2164_0_0_0;
static ParameterInfo t225_m12345_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2164_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12345_MI = 
{
	"CheckMatch", (methodPointerType)&m7965_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t225_m12345_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
extern Il2CppType t2164_0_0_0;
static ParameterInfo t225_m12346_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2164_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12346_MI = 
{
	"GetIndex", (methodPointerType)&m7967_gshared, &t225_TI, &t18_0_0_0, RuntimeInvoker_t18_t18_t18_t4, t225_m12346_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t2166_0_0_0;
extern void* RuntimeInvoker_t2166 (MethodInfo* method, void* obj, void** args);
MethodInfo m12347_MI = 
{
	"GetEnumerator", (methodPointerType)&m12347, &t225_TI, &t2166_0_0_0, RuntimeInvoker_t2166, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t225_m12348_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12348_MI = 
{
	"IndexOf", (methodPointerType)&m7970_gshared, &t225_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t225_m12348_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t225_m12349_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12349_MI = 
{
	"Shift", (methodPointerType)&m7972_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t225_m12349_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t225_m12350_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12350_MI = 
{
	"CheckIndex", (methodPointerType)&m7974_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t225_m12350_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t225_m12351_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12351_MI = 
{
	"Insert", (methodPointerType)&m7976_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t225_m12351_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2162_0_0_0;
static ParameterInfo t225_m12352_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2162_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12352_MI = 
{
	"CheckCollection", (methodPointerType)&m7978_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t225_m12352_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t225_m12353_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12353_MI = 
{
	"Remove", (methodPointerType)&m7980_gshared, &t225_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t225_m12353_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2164_0_0_0;
static ParameterInfo t225_m12354_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2164_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12354_MI = 
{
	"RemoveAll", (methodPointerType)&m7982_gshared, &t225_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t225_m12354_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t225_m12355_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12355_MI = 
{
	"RemoveAt", (methodPointerType)&m7984_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t225_m12355_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12356_MI = 
{
	"Reverse", (methodPointerType)&m7986_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12357_MI = 
{
	"Sort", (methodPointerType)&m7988_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2165_0_0_0;
static ParameterInfo t225_m12358_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2165_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12358_MI = 
{
	"Sort", (methodPointerType)&m7990_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t225_m12358_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t2159_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12359_MI = 
{
	"ToArray", (methodPointerType)&m7992_gshared, &t225_TI, &t2159_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12360_MI = 
{
	"TrimExcess", (methodPointerType)&m7994_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12361_MI = 
{
	"get_Capacity", (methodPointerType)&m7996_gshared, &t225_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t225_m12362_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12362_MI = 
{
	"set_Capacity", (methodPointerType)&m7998_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t225_m12362_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t225_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m1880_MI = 
{
	"get_Count", (methodPointerType)&m8000_gshared, &t225_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t225_m1878_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t344_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m1878_MI = 
{
	"get_Item", (methodPointerType)&m8002_gshared, &t225_TI, &t344_0_0_0, RuntimeInvoker_t4_t18, t225_m1878_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t225_m12363_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t225_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12363_MI = 
{
	"set_Item", (methodPointerType)&m8004_gshared, &t225_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t225_m12363_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t225_MIs[] =
{
	&m1874_MI,
	&m12318_MI,
	&m12319_MI,
	&m12320_MI,
	&m12321_MI,
	&m12322_MI,
	&m12323_MI,
	&m12324_MI,
	&m12325_MI,
	&m12326_MI,
	&m12327_MI,
	&m12328_MI,
	&m12329_MI,
	&m12330_MI,
	&m12331_MI,
	&m12332_MI,
	&m12333_MI,
	&m12334_MI,
	&m12335_MI,
	&m12336_MI,
	&m12337_MI,
	&m12338_MI,
	&m12339_MI,
	&m12340_MI,
	&m12341_MI,
	&m12342_MI,
	&m12343_MI,
	&m12344_MI,
	&m12345_MI,
	&m12346_MI,
	&m12347_MI,
	&m12348_MI,
	&m12349_MI,
	&m12350_MI,
	&m12351_MI,
	&m12352_MI,
	&m12353_MI,
	&m12354_MI,
	&m12355_MI,
	&m12356_MI,
	&m12357_MI,
	&m12358_MI,
	&m12359_MI,
	&m12360_MI,
	&m12361_MI,
	&m12362_MI,
	&m1880_MI,
	&m1878_MI,
	&m12363_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12322_MI;
extern MethodInfo m1880_MI;
extern MethodInfo m12329_MI;
extern MethodInfo m12330_MI;
extern MethodInfo m12321_MI;
extern MethodInfo m12331_MI;
extern MethodInfo m12332_MI;
extern MethodInfo m12333_MI;
extern MethodInfo m12334_MI;
extern MethodInfo m12323_MI;
extern MethodInfo m12341_MI;
extern MethodInfo m12324_MI;
extern MethodInfo m12325_MI;
extern MethodInfo m12326_MI;
extern MethodInfo m12327_MI;
extern MethodInfo m12355_MI;
extern MethodInfo m1880_MI;
extern MethodInfo m12328_MI;
extern MethodInfo m12335_MI;
extern MethodInfo m12341_MI;
extern MethodInfo m12342_MI;
extern MethodInfo m12343_MI;
extern MethodInfo m12353_MI;
extern MethodInfo m12320_MI;
extern MethodInfo m12348_MI;
extern MethodInfo m12351_MI;
extern MethodInfo m12355_MI;
extern MethodInfo m1878_MI;
extern MethodInfo m12363_MI;
static MethodInfo* t225_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12322_MI,
	&m1880_MI,
	&m12329_MI,
	&m12330_MI,
	&m12321_MI,
	&m12331_MI,
	&m12332_MI,
	&m12333_MI,
	&m12334_MI,
	&m12323_MI,
	&m12341_MI,
	&m12324_MI,
	&m12325_MI,
	&m12326_MI,
	&m12327_MI,
	&m12355_MI,
	&m1880_MI,
	&m12328_MI,
	&m12335_MI,
	&m12341_MI,
	&m12342_MI,
	&m12343_MI,
	&m12353_MI,
	&m12320_MI,
	&m12348_MI,
	&m12351_MI,
	&m12355_MI,
	&m1878_MI,
	&m12363_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2161_TI;
extern TypeInfo t2162_TI;
extern TypeInfo t2168_TI;
static TypeInfo* t225_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t2161_TI,
	&t2162_TI,
	&t2168_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2161_TI;
extern TypeInfo t2162_TI;
extern TypeInfo t2168_TI;
static Il2CppInterfaceOffsetPair t225_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t2161_TI, 20},
	{ &t2162_TI, 27},
	{ &t2168_TI, 28},
};
extern TypeInfo t225_TI;
extern TypeInfo t2159_TI;
extern MethodInfo m12347_MI;
extern TypeInfo t2166_TI;
extern TypeInfo t344_TI;
extern MethodInfo m12335_MI;
extern MethodInfo m12342_MI;
extern MethodInfo m12348_MI;
extern MethodInfo m12350_MI;
extern MethodInfo m12351_MI;
extern MethodInfo m12353_MI;
extern MethodInfo m1878_MI;
extern MethodInfo m12363_MI;
extern MethodInfo m12336_MI;
extern MethodInfo m12361_MI;
extern MethodInfo m12362_MI;
extern MethodInfo m24895_MI;
extern MethodInfo m24896_MI;
extern MethodInfo m24897_MI;
extern MethodInfo m24898_MI;
extern MethodInfo m12352_MI;
extern TypeInfo t2161_TI;
extern MethodInfo m12337_MI;
extern MethodInfo m12338_MI;
extern TypeInfo t2163_TI;
extern MethodInfo m12375_MI;
extern MethodInfo m18761_MI;
extern MethodInfo m12345_MI;
extern MethodInfo m12346_MI;
extern MethodInfo m12450_MI;
extern MethodInfo m12369_MI;
extern MethodInfo m12349_MI;
extern MethodInfo m12355_MI;
extern MethodInfo m12456_MI;
extern MethodInfo m18763_MI;
extern MethodInfo m18771_MI;
extern MethodInfo m18759_MI;
static void* t225_RGCTXData[37] = 
{
	&t225_TI,
	&t2159_TI,
	&m12347_MI,
	&t2166_TI,
	&t344_TI,
	&m12335_MI,
	&m12342_MI,
	&m12348_MI,
	&m12350_MI,
	&m12351_MI,
	&m12353_MI,
	&m1878_MI,
	&m12363_MI,
	&m12336_MI,
	&m12361_MI,
	&m12362_MI,
	&m24895_MI,
	&m24896_MI,
	&m24897_MI,
	&m24898_MI,
	&m12352_MI,
	&t2161_TI,
	&m12337_MI,
	&m12338_MI,
	&t2163_TI,
	&m12375_MI,
	&m18761_MI,
	&m12345_MI,
	&m12346_MI,
	&m12450_MI,
	&m12369_MI,
	&m12349_MI,
	&m12355_MI,
	&m12456_MI,
	&m18763_MI,
	&m18771_MI,
	&m18759_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t225_0_0_0;
extern Il2CppType t225_1_0_0;
extern TypeInfo t4_TI;
struct t225;
extern TypeInfo t225_TI;
extern Il2CppGenericClass t225_GC;
extern CustomAttributesCache t840__CustomAttributeCache;
TypeInfo t225_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t225_MIs, t225_PIs, t225_FIs, NULL, &t4_TI, NULL, NULL, &t225_TI, t225_ITIs, t225_VT, &t840__CustomAttributeCache, &t225_TI, &t225_0_0_0, &t225_1_0_0, t225_IOs, &t225_GC, NULL, t225_FDVs, NULL, t225_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t225), 0, -1, sizeof(t225_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2161_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.CanvasGroup>
extern MethodInfo m24895_MI;
static PropertyInfo t2161____Count_PropertyInfo = 
{
	&t2161_TI, "Count", &m24895_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24899_MI;
static PropertyInfo t2161____IsReadOnly_PropertyInfo = 
{
	&t2161_TI, "IsReadOnly", &m24899_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2161_PIs[] =
{
	&t2161____Count_PropertyInfo,
	&t2161____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t2161_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24895_MI = 
{
	"get_Count", NULL, &t2161_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2161_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24899_MI = 
{
	"get_IsReadOnly", NULL, &t2161_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t2161_m24900_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24900_MI = 
{
	"Add", NULL, &t2161_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2161_m24900_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24901_MI = 
{
	"Clear", NULL, &t2161_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t2161_m24902_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2161_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24902_MI = 
{
	"Contains", NULL, &t2161_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2161_m24902_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2159_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2161_m24896_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2159_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24896_MI = 
{
	"CopyTo", NULL, &t2161_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2161_m24896_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t2161_m24903_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2161_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24903_MI = 
{
	"Remove", NULL, &t2161_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2161_m24903_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2161_MIs[] =
{
	&m24895_MI,
	&m24899_MI,
	&m24900_MI,
	&m24901_MI,
	&m24902_MI,
	&m24896_MI,
	&m24903_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t2162_TI;
static TypeInfo* t2161_ITIs[] = 
{
	&t592_TI,
	&t2162_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2161_0_0_0;
extern Il2CppType t2161_1_0_0;
struct t2161;
extern TypeInfo t2161_TI;
extern Il2CppGenericClass t2161_GC;
TypeInfo t2161_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t2161_MIs, t2161_PIs, NULL, NULL, NULL, NULL, NULL, &t2161_TI, t2161_ITIs, NULL, &EmptyCustomAttributesCache, &t2161_TI, &t2161_0_0_0, &t2161_1_0_0, NULL, &t2161_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2162_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.CanvasGroup>
extern TypeInfo t2162_TI;
extern Il2CppType t2160_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24897_MI = 
{
	"GetEnumerator", NULL, &t2162_TI, &t2160_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2162_MIs[] =
{
	&m24897_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t2162_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2162_0_0_0;
extern Il2CppType t2162_1_0_0;
struct t2162;
extern TypeInfo t2162_TI;
extern Il2CppGenericClass t2162_GC;
TypeInfo t2162_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2162_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2162_TI, t2162_ITIs, NULL, &EmptyCustomAttributesCache, &t2162_TI, &t2162_0_0_0, &t2162_1_0_0, NULL, &t2162_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2160_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.CanvasGroup>
extern MethodInfo m24898_MI;
static PropertyInfo t2160____Current_PropertyInfo = 
{
	&t2160_TI, "Current", &m24898_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2160_PIs[] =
{
	&t2160____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2160_TI;
extern Il2CppType t344_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24898_MI = 
{
	"get_Current", NULL, &t2160_TI, &t344_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2160_MIs[] =
{
	&m24898_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t2160_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2160_0_0_0;
extern Il2CppType t2160_1_0_0;
struct t2160;
extern TypeInfo t2160_TI;
extern Il2CppGenericClass t2160_GC;
TypeInfo t2160_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2160_MIs, t2160_PIs, NULL, NULL, NULL, NULL, NULL, &t2160_TI, t2160_ITIs, NULL, &EmptyCustomAttributesCache, &t2160_TI, &t2160_0_0_0, &t2160_1_0_0, NULL, &t2160_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2167.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2167_TI;
#include "t2167MD.h"

extern TypeInfo t2167_TI;
extern TypeInfo t344_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m12368_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18748_MI;
struct t16;
#define m18748(__this, p0, method) (t344 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m18748_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.CanvasGroup>
extern Il2CppType t16_0_0_1;
FieldInfo t2167_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2167_TI, offsetof(t2167, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2167_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2167_TI, offsetof(t2167, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2167_FIs[] =
{
	&t2167_f0_FieldInfo,
	&t2167_f1_FieldInfo,
	NULL
};
extern MethodInfo m12365_MI;
static PropertyInfo t2167____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2167_TI, "System.Collections.IEnumerator.Current", &m12365_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12368_MI;
static PropertyInfo t2167____Current_PropertyInfo = 
{
	&t2167_TI, "Current", &m12368_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2167_PIs[] =
{
	&t2167____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2167____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2167_m12364_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2167_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12364_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2167_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2167_m12364_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2167_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12365_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2167_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2167_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12366_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2167_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2167_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12367_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2167_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2167_TI;
extern Il2CppType t344_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12368_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2167_TI, &t344_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2167_MIs[] =
{
	&m12364_MI,
	&m12365_MI,
	&m12366_MI,
	&m12367_MI,
	&m12368_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m12365_MI;
extern MethodInfo m12367_MI;
extern MethodInfo m12366_MI;
extern MethodInfo m12368_MI;
static MethodInfo* t2167_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m12365_MI,
	&m12367_MI,
	&m12366_MI,
	&m12368_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2160_TI;
static TypeInfo* t2167_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t2160_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2160_TI;
static Il2CppInterfaceOffsetPair t2167_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t2160_TI, 7},
};
extern MethodInfo m12368_MI;
extern TypeInfo t344_TI;
extern MethodInfo m18748_MI;
static void* t2167_RGCTXData[3] = 
{
	&m12368_MI,
	&t344_TI,
	&m18748_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2167_0_0_0;
extern Il2CppType t2167_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2167_TI;
extern Il2CppGenericClass t2167_GC;
extern TypeInfo t16_TI;
TypeInfo t2167_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2167_MIs, t2167_PIs, t2167_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2167_TI, t2167_ITIs, t2167_VT, &EmptyCustomAttributesCache, &t2167_TI, &t2167_0_0_0, &t2167_1_0_0, t2167_IOs, &t2167_GC, NULL, NULL, NULL, t2167_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2167)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2168_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.CanvasGroup>
extern MethodInfo m24904_MI;
extern MethodInfo m24905_MI;
static PropertyInfo t2168____Item_PropertyInfo = 
{
	&t2168_TI, "Item", &m24904_MI, &m24905_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2168_PIs[] =
{
	&t2168____Item_PropertyInfo,
	NULL
};
extern Il2CppType t344_0_0_0;
static ParameterInfo t2168_m24906_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2168_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24906_MI = 
{
	"IndexOf", NULL, &t2168_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2168_m24906_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t2168_m24907_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2168_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24907_MI = 
{
	"Insert", NULL, &t2168_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2168_m24907_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2168_m24908_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2168_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24908_MI = 
{
	"RemoveAt", NULL, &t2168_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2168_m24908_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2168_m24904_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2168_TI;
extern Il2CppType t344_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24904_MI = 
{
	"get_Item", NULL, &t2168_TI, &t344_0_0_0, RuntimeInvoker_t4_t18, t2168_m24904_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t2168_m24905_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2168_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24905_MI = 
{
	"set_Item", NULL, &t2168_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2168_m24905_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2168_MIs[] =
{
	&m24906_MI,
	&m24907_MI,
	&m24908_MI,
	&m24904_MI,
	&m24905_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t2161_TI;
extern TypeInfo t2162_TI;
static TypeInfo* t2168_ITIs[] = 
{
	&t592_TI,
	&t2161_TI,
	&t2162_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2168_0_0_0;
extern Il2CppType t2168_1_0_0;
struct t2168;
extern TypeInfo t2168_TI;
extern Il2CppGenericClass t2168_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t2168_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t2168_MIs, t2168_PIs, NULL, NULL, NULL, NULL, NULL, &t2168_TI, t2168_ITIs, NULL, &t1401__CustomAttributeCache, &t2168_TI, &t2168_0_0_0, &t2168_1_0_0, NULL, &t2168_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2166_TI;

extern TypeInfo t2166_TI;
extern TypeInfo t1270_TI;
extern TypeInfo t344_TI;
extern TypeInfo t225_TI;
extern TypeInfo t294_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m12372_MI;
extern MethodInfo m6906_MI;
extern MethodInfo m1423_MI;
extern MethodInfo m2995_MI;
extern MethodInfo m7111_MI;
extern MethodInfo m6907_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.CanvasGroup>
extern Il2CppType t225_0_0_1;
FieldInfo t2166_f0_FieldInfo = 
{
	"l", &t225_0_0_1, &t2166_TI, offsetof(t2166, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2166_f1_FieldInfo = 
{
	"next", &t18_0_0_1, &t2166_TI, offsetof(t2166, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2166_f2_FieldInfo = 
{
	"ver", &t18_0_0_1, &t2166_TI, offsetof(t2166, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t344_0_0_1;
FieldInfo t2166_f3_FieldInfo = 
{
	"current", &t344_0_0_1, &t2166_TI, offsetof(t2166, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2166_FIs[] =
{
	&t2166_f0_FieldInfo,
	&t2166_f1_FieldInfo,
	&t2166_f2_FieldInfo,
	&t2166_f3_FieldInfo,
	NULL
};
extern MethodInfo m12370_MI;
static PropertyInfo t2166____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2166_TI, "System.Collections.IEnumerator.Current", &m12370_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12374_MI;
static PropertyInfo t2166____Current_PropertyInfo = 
{
	&t2166_TI, "Current", &m12374_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2166_PIs[] =
{
	&t2166____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2166____Current_PropertyInfo,
	NULL
};
extern Il2CppType t225_0_0_0;
static ParameterInfo t2166_m12369_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t225_0_0_0},
};
extern TypeInfo t2166_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12369_MI = 
{
	".ctor", (methodPointerType)&m8006_gshared, &t2166_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2166_m12369_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2166_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12370_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8007_gshared, &t2166_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2166_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12371_MI = 
{
	"Dispose", (methodPointerType)&m8008_gshared, &t2166_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2166_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12372_MI = 
{
	"VerifyState", (methodPointerType)&m8009_gshared, &t2166_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2166_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12373_MI = 
{
	"MoveNext", (methodPointerType)&m8010_gshared, &t2166_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2166_TI;
extern Il2CppType t344_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12374_MI = 
{
	"get_Current", (methodPointerType)&m8011_gshared, &t2166_TI, &t344_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2166_MIs[] =
{
	&m12369_MI,
	&m12370_MI,
	&m12371_MI,
	&m12372_MI,
	&m12373_MI,
	&m12374_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m12370_MI;
extern MethodInfo m12373_MI;
extern MethodInfo m12371_MI;
extern MethodInfo m12374_MI;
static MethodInfo* t2166_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m12370_MI,
	&m12373_MI,
	&m12371_MI,
	&m12374_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2160_TI;
static TypeInfo* t2166_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t2160_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2160_TI;
static Il2CppInterfaceOffsetPair t2166_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t2160_TI, 7},
};
extern MethodInfo m12372_MI;
extern TypeInfo t344_TI;
extern TypeInfo t2166_TI;
static void* t2166_RGCTXData[3] = 
{
	&m12372_MI,
	&t344_TI,
	&t2166_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2166_0_0_0;
extern Il2CppType t2166_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2166_TI;
extern Il2CppGenericClass t2166_GC;
extern TypeInfo t840_TI;
TypeInfo t2166_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2166_MIs, t2166_PIs, t2166_FIs, NULL, &t101_TI, NULL, &t840_TI, &t2166_TI, t2166_ITIs, t2166_VT, &EmptyCustomAttributesCache, &t2166_TI, &t2166_0_0_0, &t2166_1_0_0, t2166_IOs, &t2166_GC, NULL, NULL, NULL, t2166_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2166)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2163_TI;

extern TypeInfo t2163_TI;
extern TypeInfo t344_TI;
extern TypeInfo t18_TI;
extern TypeInfo t337_TI;
extern TypeInfo t2168_TI;
extern TypeInfo t2161_TI;
extern TypeInfo t330_TI;
extern TypeInfo t641_TI;
extern TypeInfo t17_TI;
extern TypeInfo t16_TI;
extern TypeInfo t592_TI;
extern TypeInfo t27_TI;
extern TypeInfo t19_TI;
extern TypeInfo t2159_TI;
extern TypeInfo t2162_TI;
extern TypeInfo t2160_TI;
#include "t2169MD.h"
extern MethodInfo m12404_MI;
extern MethodInfo m1510_MI;
extern MethodInfo m24904_MI;
extern MethodInfo m24895_MI;
extern MethodInfo m24_MI;
extern MethodInfo m2947_MI;
extern MethodInfo m7400_MI;
extern MethodInfo m7309_MI;
extern MethodInfo m12436_MI;
extern MethodInfo m24902_MI;
extern MethodInfo m24906_MI;
extern MethodInfo m24896_MI;
extern MethodInfo m24897_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.CanvasGroup>
extern Il2CppType t2168_0_0_1;
FieldInfo t2163_f0_FieldInfo = 
{
	"list", &t2168_0_0_1, &t2163_TI, offsetof(t2163, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2163_FIs[] =
{
	&t2163_f0_FieldInfo,
	NULL
};
extern MethodInfo m12381_MI;
extern MethodInfo m12382_MI;
static PropertyInfo t2163____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2163_TI, "System.Collections.Generic.IList<T>.Item", &m12381_MI, &m12382_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12383_MI;
static PropertyInfo t2163____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2163_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m12383_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12393_MI;
static PropertyInfo t2163____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2163_TI, "System.Collections.ICollection.IsSynchronized", &m12393_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12394_MI;
static PropertyInfo t2163____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2163_TI, "System.Collections.ICollection.SyncRoot", &m12394_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12395_MI;
static PropertyInfo t2163____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2163_TI, "System.Collections.IList.IsFixedSize", &m12395_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12396_MI;
static PropertyInfo t2163____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2163_TI, "System.Collections.IList.IsReadOnly", &m12396_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12397_MI;
extern MethodInfo m12398_MI;
static PropertyInfo t2163____System_Collections_IList_Item_PropertyInfo = 
{
	&t2163_TI, "System.Collections.IList.Item", &m12397_MI, &m12398_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12403_MI;
static PropertyInfo t2163____Count_PropertyInfo = 
{
	&t2163_TI, "Count", &m12403_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12404_MI;
static PropertyInfo t2163____Item_PropertyInfo = 
{
	&t2163_TI, "Item", &m12404_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2163_PIs[] =
{
	&t2163____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2163____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2163____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2163____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2163____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2163____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2163____System_Collections_IList_Item_PropertyInfo,
	&t2163____Count_PropertyInfo,
	&t2163____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2168_0_0_0;
static ParameterInfo t2163_m12375_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2168_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12375_MI = 
{
	".ctor", (methodPointerType)&m8012_gshared, &t2163_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2163_m12375_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t2163_m12376_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12376_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m8013_gshared, &t2163_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2163_m12376_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2163_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12377_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m8014_gshared, &t2163_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t2163_m12378_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12378_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m8015_gshared, &t2163_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2163_m12378_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t2163_m12379_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12379_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m8016_gshared, &t2163_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2163_m12379_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2163_m12380_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12380_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m8017_gshared, &t2163_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2163_m12380_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2163_m12381_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t344_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12381_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8018_gshared, &t2163_TI, &t344_0_0_0, RuntimeInvoker_t4_t18, t2163_m12381_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t2163_m12382_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12382_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8019_gshared, &t2163_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2163_m12382_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2163_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12383_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8020_gshared, &t2163_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2163_m12384_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12384_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8021_gshared, &t2163_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2163_m12384_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2163_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12385_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8022_gshared, &t2163_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2163_m12386_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12386_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8023_gshared, &t2163_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2163_m12386_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2163_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12387_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8024_gshared, &t2163_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2163_m12388_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12388_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8025_gshared, &t2163_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2163_m12388_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2163_m12389_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12389_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8026_gshared, &t2163_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2163_m12389_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2163_m12390_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12390_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8027_gshared, &t2163_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2163_m12390_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2163_m12391_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12391_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8028_gshared, &t2163_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2163_m12391_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2163_m12392_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12392_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8029_gshared, &t2163_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2163_m12392_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2163_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12393_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8030_gshared, &t2163_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2163_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12394_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8031_gshared, &t2163_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2163_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12395_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8032_gshared, &t2163_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2163_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12396_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8033_gshared, &t2163_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2163_m12397_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12397_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8034_gshared, &t2163_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t2163_m12397_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2163_m12398_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12398_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8035_gshared, &t2163_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2163_m12398_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t2163_m12399_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12399_MI = 
{
	"Contains", (methodPointerType)&m8036_gshared, &t2163_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2163_m12399_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2159_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2163_m12400_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2159_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12400_MI = 
{
	"CopyTo", (methodPointerType)&m8037_gshared, &t2163_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2163_m12400_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2163_TI;
extern Il2CppType t2160_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12401_MI = 
{
	"GetEnumerator", (methodPointerType)&m8038_gshared, &t2163_TI, &t2160_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t2163_m12402_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12402_MI = 
{
	"IndexOf", (methodPointerType)&m8039_gshared, &t2163_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2163_m12402_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2163_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12403_MI = 
{
	"get_Count", (methodPointerType)&m8040_gshared, &t2163_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2163_m12404_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2163_TI;
extern Il2CppType t344_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12404_MI = 
{
	"get_Item", (methodPointerType)&m8041_gshared, &t2163_TI, &t344_0_0_0, RuntimeInvoker_t4_t18, t2163_m12404_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2163_MIs[] =
{
	&m12375_MI,
	&m12376_MI,
	&m12377_MI,
	&m12378_MI,
	&m12379_MI,
	&m12380_MI,
	&m12381_MI,
	&m12382_MI,
	&m12383_MI,
	&m12384_MI,
	&m12385_MI,
	&m12386_MI,
	&m12387_MI,
	&m12388_MI,
	&m12389_MI,
	&m12390_MI,
	&m12391_MI,
	&m12392_MI,
	&m12393_MI,
	&m12394_MI,
	&m12395_MI,
	&m12396_MI,
	&m12397_MI,
	&m12398_MI,
	&m12399_MI,
	&m12400_MI,
	&m12401_MI,
	&m12402_MI,
	&m12403_MI,
	&m12404_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12385_MI;
extern MethodInfo m12403_MI;
extern MethodInfo m12393_MI;
extern MethodInfo m12394_MI;
extern MethodInfo m12384_MI;
extern MethodInfo m12395_MI;
extern MethodInfo m12396_MI;
extern MethodInfo m12397_MI;
extern MethodInfo m12398_MI;
extern MethodInfo m12386_MI;
extern MethodInfo m12387_MI;
extern MethodInfo m12388_MI;
extern MethodInfo m12389_MI;
extern MethodInfo m12390_MI;
extern MethodInfo m12391_MI;
extern MethodInfo m12392_MI;
extern MethodInfo m12403_MI;
extern MethodInfo m12383_MI;
extern MethodInfo m12376_MI;
extern MethodInfo m12377_MI;
extern MethodInfo m12399_MI;
extern MethodInfo m12400_MI;
extern MethodInfo m12379_MI;
extern MethodInfo m12402_MI;
extern MethodInfo m12378_MI;
extern MethodInfo m12380_MI;
extern MethodInfo m12381_MI;
extern MethodInfo m12382_MI;
extern MethodInfo m12401_MI;
extern MethodInfo m12404_MI;
static MethodInfo* t2163_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12385_MI,
	&m12403_MI,
	&m12393_MI,
	&m12394_MI,
	&m12384_MI,
	&m12395_MI,
	&m12396_MI,
	&m12397_MI,
	&m12398_MI,
	&m12386_MI,
	&m12387_MI,
	&m12388_MI,
	&m12389_MI,
	&m12390_MI,
	&m12391_MI,
	&m12392_MI,
	&m12403_MI,
	&m12383_MI,
	&m12376_MI,
	&m12377_MI,
	&m12399_MI,
	&m12400_MI,
	&m12379_MI,
	&m12402_MI,
	&m12378_MI,
	&m12380_MI,
	&m12381_MI,
	&m12382_MI,
	&m12401_MI,
	&m12404_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2161_TI;
extern TypeInfo t2168_TI;
extern TypeInfo t2162_TI;
static TypeInfo* t2163_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t2161_TI,
	&t2168_TI,
	&t2162_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2161_TI;
extern TypeInfo t2168_TI;
extern TypeInfo t2162_TI;
static Il2CppInterfaceOffsetPair t2163_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t2161_TI, 20},
	{ &t2168_TI, 27},
	{ &t2162_TI, 32},
};
extern MethodInfo m12404_MI;
extern MethodInfo m12436_MI;
extern TypeInfo t344_TI;
extern MethodInfo m24902_MI;
extern MethodInfo m24906_MI;
extern MethodInfo m24904_MI;
extern MethodInfo m24896_MI;
extern MethodInfo m24897_MI;
extern MethodInfo m24895_MI;
static void* t2163_RGCTXData[9] = 
{
	&m12404_MI,
	&m12436_MI,
	&t344_TI,
	&m24902_MI,
	&m24906_MI,
	&m24904_MI,
	&m24896_MI,
	&m24897_MI,
	&m24895_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2163_0_0_0;
extern Il2CppType t2163_1_0_0;
extern TypeInfo t4_TI;
struct t2163;
extern TypeInfo t2163_TI;
extern Il2CppGenericClass t2163_GC;
extern CustomAttributesCache t842__CustomAttributeCache;
TypeInfo t2163_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2163_MIs, t2163_PIs, t2163_FIs, NULL, &t4_TI, NULL, NULL, &t2163_TI, t2163_ITIs, t2163_VT, &t842__CustomAttributeCache, &t2163_TI, &t2163_0_0_0, &t2163_1_0_0, t2163_IOs, &t2163_GC, NULL, NULL, NULL, t2163_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2163), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2169.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2169_TI;

extern TypeInfo t2169_TI;
extern TypeInfo t2161_TI;
extern TypeInfo t19_TI;
extern TypeInfo t2168_TI;
extern TypeInfo t344_TI;
extern TypeInfo t18_TI;
extern TypeInfo t17_TI;
extern TypeInfo t225_TI;
extern TypeInfo t641_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern TypeInfo t2162_TI;
extern TypeInfo t2160_TI;
extern TypeInfo t2159_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t337_TI;
extern TypeInfo t1015_TI;
extern Il2CppType t344_0_0_0;
extern MethodInfo m24899_MI;
extern MethodInfo m12439_MI;
extern MethodInfo m12440_MI;
extern MethodInfo m24904_MI;
extern MethodInfo m12437_MI;
extern MethodInfo m12435_MI;
extern MethodInfo m24895_MI;
extern MethodInfo m24_MI;
extern MethodInfo m1874_MI;
extern MethodInfo m7399_MI;
extern MethodInfo m7400_MI;
extern MethodInfo m24897_MI;
extern MethodInfo m12428_MI;
extern MethodInfo m12436_MI;
extern MethodInfo m24902_MI;
extern MethodInfo m24906_MI;
extern MethodInfo m12438_MI;
extern MethodInfo m12426_MI;
extern MethodInfo m12431_MI;
extern MethodInfo m12422_MI;
extern MethodInfo m24901_MI;
extern MethodInfo m24896_MI;
extern MethodInfo m24907_MI;
extern MethodInfo m24908_MI;
extern MethodInfo m24905_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m3814_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m1510_MI;
extern MethodInfo m7398_MI;
extern MethodInfo m7401_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.CanvasGroup>
extern Il2CppType t2168_0_0_1;
FieldInfo t2169_f0_FieldInfo = 
{
	"list", &t2168_0_0_1, &t2169_TI, offsetof(t2169, f0), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t2169_f1_FieldInfo = 
{
	"syncRoot", &t4_0_0_1, &t2169_TI, offsetof(t2169, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2169_FIs[] =
{
	&t2169_f0_FieldInfo,
	&t2169_f1_FieldInfo,
	NULL
};
extern MethodInfo m12406_MI;
static PropertyInfo t2169____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2169_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m12406_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12414_MI;
static PropertyInfo t2169____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2169_TI, "System.Collections.ICollection.IsSynchronized", &m12414_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12415_MI;
static PropertyInfo t2169____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2169_TI, "System.Collections.ICollection.SyncRoot", &m12415_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12416_MI;
static PropertyInfo t2169____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2169_TI, "System.Collections.IList.IsFixedSize", &m12416_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12417_MI;
static PropertyInfo t2169____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2169_TI, "System.Collections.IList.IsReadOnly", &m12417_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12418_MI;
extern MethodInfo m12419_MI;
static PropertyInfo t2169____System_Collections_IList_Item_PropertyInfo = 
{
	&t2169_TI, "System.Collections.IList.Item", &m12418_MI, &m12419_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12432_MI;
static PropertyInfo t2169____Count_PropertyInfo = 
{
	&t2169_TI, "Count", &m12432_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12433_MI;
extern MethodInfo m12434_MI;
static PropertyInfo t2169____Item_PropertyInfo = 
{
	&t2169_TI, "Item", &m12433_MI, &m12434_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2169_PIs[] =
{
	&t2169____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2169____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2169____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2169____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2169____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2169____System_Collections_IList_Item_PropertyInfo,
	&t2169____Count_PropertyInfo,
	&t2169____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12405_MI = 
{
	".ctor", (methodPointerType)&m8042_gshared, &t2169_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2169_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12406_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8043_gshared, &t2169_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2169_m12407_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12407_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8044_gshared, &t2169_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2169_m12407_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2169_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12408_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8045_gshared, &t2169_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2169_m12409_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12409_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8046_gshared, &t2169_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2169_m12409_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2169_m12410_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12410_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8047_gshared, &t2169_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2169_m12410_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2169_m12411_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12411_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8048_gshared, &t2169_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2169_m12411_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2169_m12412_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12412_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8049_gshared, &t2169_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2169_m12412_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2169_m12413_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12413_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8050_gshared, &t2169_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2169_m12413_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2169_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12414_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8051_gshared, &t2169_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2169_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12415_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8052_gshared, &t2169_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2169_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12416_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8053_gshared, &t2169_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2169_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12417_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8054_gshared, &t2169_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2169_m12418_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12418_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8055_gshared, &t2169_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t2169_m12418_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2169_m12419_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12419_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8056_gshared, &t2169_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2169_m12419_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t2169_m12420_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12420_MI = 
{
	"Add", (methodPointerType)&m8057_gshared, &t2169_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2169_m12420_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12421_MI = 
{
	"Clear", (methodPointerType)&m8058_gshared, &t2169_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12422_MI = 
{
	"ClearItems", (methodPointerType)&m8059_gshared, &t2169_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t2169_m12423_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12423_MI = 
{
	"Contains", (methodPointerType)&m8060_gshared, &t2169_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2169_m12423_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2159_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2169_m12424_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2159_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12424_MI = 
{
	"CopyTo", (methodPointerType)&m8061_gshared, &t2169_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2169_m12424_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2169_TI;
extern Il2CppType t2160_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12425_MI = 
{
	"GetEnumerator", (methodPointerType)&m8062_gshared, &t2169_TI, &t2160_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t2169_m12426_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12426_MI = 
{
	"IndexOf", (methodPointerType)&m8063_gshared, &t2169_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2169_m12426_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t2169_m12427_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12427_MI = 
{
	"Insert", (methodPointerType)&m8064_gshared, &t2169_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2169_m12427_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t2169_m12428_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12428_MI = 
{
	"InsertItem", (methodPointerType)&m8065_gshared, &t2169_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2169_m12428_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t2169_m12429_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12429_MI = 
{
	"Remove", (methodPointerType)&m8066_gshared, &t2169_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2169_m12429_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2169_m12430_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12430_MI = 
{
	"RemoveAt", (methodPointerType)&m8067_gshared, &t2169_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2169_m12430_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2169_m12431_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12431_MI = 
{
	"RemoveItem", (methodPointerType)&m8068_gshared, &t2169_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2169_m12431_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2169_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12432_MI = 
{
	"get_Count", (methodPointerType)&m8069_gshared, &t2169_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2169_m12433_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t344_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m12433_MI = 
{
	"get_Item", (methodPointerType)&m8070_gshared, &t2169_TI, &t344_0_0_0, RuntimeInvoker_t4_t18, t2169_m12433_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t2169_m12434_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12434_MI = 
{
	"set_Item", (methodPointerType)&m8071_gshared, &t2169_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2169_m12434_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t2169_m12435_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12435_MI = 
{
	"SetItem", (methodPointerType)&m8072_gshared, &t2169_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2169_m12435_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2169_m12436_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12436_MI = 
{
	"IsValidItem", (methodPointerType)&m8073_gshared, &t2169_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2169_m12436_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2169_m12437_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t344_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12437_MI = 
{
	"ConvertItem", (methodPointerType)&m8074_gshared, &t2169_TI, &t344_0_0_0, RuntimeInvoker_t4_t4, t2169_m12437_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2168_0_0_0;
static ParameterInfo t2169_m12438_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2168_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12438_MI = 
{
	"CheckWritable", (methodPointerType)&m8075_gshared, &t2169_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2169_m12438_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2168_0_0_0;
static ParameterInfo t2169_m12439_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2168_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12439_MI = 
{
	"IsSynchronized", (methodPointerType)&m8076_gshared, &t2169_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2169_m12439_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2168_0_0_0;
static ParameterInfo t2169_m12440_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2168_0_0_0},
};
extern TypeInfo t2169_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12440_MI = 
{
	"IsFixedSize", (methodPointerType)&m8077_gshared, &t2169_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2169_m12440_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2169_MIs[] =
{
	&m12405_MI,
	&m12406_MI,
	&m12407_MI,
	&m12408_MI,
	&m12409_MI,
	&m12410_MI,
	&m12411_MI,
	&m12412_MI,
	&m12413_MI,
	&m12414_MI,
	&m12415_MI,
	&m12416_MI,
	&m12417_MI,
	&m12418_MI,
	&m12419_MI,
	&m12420_MI,
	&m12421_MI,
	&m12422_MI,
	&m12423_MI,
	&m12424_MI,
	&m12425_MI,
	&m12426_MI,
	&m12427_MI,
	&m12428_MI,
	&m12429_MI,
	&m12430_MI,
	&m12431_MI,
	&m12432_MI,
	&m12433_MI,
	&m12434_MI,
	&m12435_MI,
	&m12436_MI,
	&m12437_MI,
	&m12438_MI,
	&m12439_MI,
	&m12440_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12408_MI;
extern MethodInfo m12432_MI;
extern MethodInfo m12414_MI;
extern MethodInfo m12415_MI;
extern MethodInfo m12407_MI;
extern MethodInfo m12416_MI;
extern MethodInfo m12417_MI;
extern MethodInfo m12418_MI;
extern MethodInfo m12419_MI;
extern MethodInfo m12409_MI;
extern MethodInfo m12421_MI;
extern MethodInfo m12410_MI;
extern MethodInfo m12411_MI;
extern MethodInfo m12412_MI;
extern MethodInfo m12413_MI;
extern MethodInfo m12430_MI;
extern MethodInfo m12432_MI;
extern MethodInfo m12406_MI;
extern MethodInfo m12420_MI;
extern MethodInfo m12421_MI;
extern MethodInfo m12423_MI;
extern MethodInfo m12424_MI;
extern MethodInfo m12429_MI;
extern MethodInfo m12426_MI;
extern MethodInfo m12427_MI;
extern MethodInfo m12430_MI;
extern MethodInfo m12433_MI;
extern MethodInfo m12434_MI;
extern MethodInfo m12425_MI;
extern MethodInfo m12422_MI;
extern MethodInfo m12428_MI;
extern MethodInfo m12431_MI;
extern MethodInfo m12435_MI;
static MethodInfo* t2169_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12408_MI,
	&m12432_MI,
	&m12414_MI,
	&m12415_MI,
	&m12407_MI,
	&m12416_MI,
	&m12417_MI,
	&m12418_MI,
	&m12419_MI,
	&m12409_MI,
	&m12421_MI,
	&m12410_MI,
	&m12411_MI,
	&m12412_MI,
	&m12413_MI,
	&m12430_MI,
	&m12432_MI,
	&m12406_MI,
	&m12420_MI,
	&m12421_MI,
	&m12423_MI,
	&m12424_MI,
	&m12429_MI,
	&m12426_MI,
	&m12427_MI,
	&m12430_MI,
	&m12433_MI,
	&m12434_MI,
	&m12425_MI,
	&m12422_MI,
	&m12428_MI,
	&m12431_MI,
	&m12435_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2161_TI;
extern TypeInfo t2168_TI;
extern TypeInfo t2162_TI;
static TypeInfo* t2169_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t2161_TI,
	&t2168_TI,
	&t2162_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t2161_TI;
extern TypeInfo t2168_TI;
extern TypeInfo t2162_TI;
static Il2CppInterfaceOffsetPair t2169_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t2161_TI, 20},
	{ &t2168_TI, 27},
	{ &t2162_TI, 32},
};
extern TypeInfo t225_TI;
extern MethodInfo m1874_MI;
extern MethodInfo m24899_MI;
extern MethodInfo m24897_MI;
extern MethodInfo m24895_MI;
extern MethodInfo m12437_MI;
extern MethodInfo m12428_MI;
extern MethodInfo m12436_MI;
extern TypeInfo t344_TI;
extern MethodInfo m24902_MI;
extern MethodInfo m24906_MI;
extern MethodInfo m12438_MI;
extern MethodInfo m12426_MI;
extern MethodInfo m12431_MI;
extern MethodInfo m12439_MI;
extern MethodInfo m12440_MI;
extern MethodInfo m24904_MI;
extern MethodInfo m12435_MI;
extern MethodInfo m12422_MI;
extern MethodInfo m24901_MI;
extern MethodInfo m24896_MI;
extern MethodInfo m24907_MI;
extern MethodInfo m24908_MI;
extern MethodInfo m24905_MI;
extern Il2CppType t344_0_0_0;
static void* t2169_RGCTXData[25] = 
{
	&t225_TI,
	&m1874_MI,
	&m24899_MI,
	&m24897_MI,
	&m24895_MI,
	&m12437_MI,
	&m12428_MI,
	&m12436_MI,
	&t344_TI,
	&m24902_MI,
	&m24906_MI,
	&m12438_MI,
	&m12426_MI,
	&m12431_MI,
	&m12439_MI,
	&m12440_MI,
	&m24904_MI,
	&m12435_MI,
	&m12422_MI,
	&m24901_MI,
	&m24896_MI,
	&m24907_MI,
	&m24908_MI,
	&m24905_MI,
	(void*)&t344_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2169_0_0_0;
extern Il2CppType t2169_1_0_0;
extern TypeInfo t4_TI;
struct t2169;
extern TypeInfo t2169_TI;
extern Il2CppGenericClass t2169_GC;
extern CustomAttributesCache t841__CustomAttributeCache;
TypeInfo t2169_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2169_MIs, t2169_PIs, t2169_FIs, NULL, &t4_TI, NULL, NULL, &t2169_TI, t2169_ITIs, t2169_VT, &t841__CustomAttributeCache, &t2169_TI, &t2169_0_0_0, &t2169_1_0_0, t2169_IOs, &t2169_GC, NULL, NULL, NULL, t2169_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2169), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2170_TI;
#include "t2170MD.h"

#include "t2171.h"
extern TypeInfo t2170_TI;
extern TypeInfo t5176_TI;
extern TypeInfo t294_TI;
extern TypeInfo t344_TI;
extern TypeInfo t19_TI;
extern TypeInfo t837_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2171_TI;
extern TypeInfo t18_TI;
#include "t2171MD.h"
extern Il2CppType t5176_0_0_0;
extern Il2CppType t344_0_0_0;
extern Il2CppType t837_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m12446_MI;
extern MethodInfo m24909_MI;
extern MethodInfo m18760_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.CanvasGroup>
extern Il2CppType t2170_0_0_49;
FieldInfo t2170_f0_FieldInfo = 
{
	"_default", &t2170_0_0_49, &t2170_TI, offsetof(t2170_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2170_FIs[] =
{
	&t2170_f0_FieldInfo,
	NULL
};
extern MethodInfo m12445_MI;
static PropertyInfo t2170____Default_PropertyInfo = 
{
	&t2170_TI, "Default", &m12445_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2170_PIs[] =
{
	&t2170____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2170_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12441_MI = 
{
	".ctor", (methodPointerType)&m8078_gshared, &t2170_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2170_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12442_MI = 
{
	".cctor", (methodPointerType)&m8079_gshared, &t2170_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2170_m12443_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2170_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12443_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8080_gshared, &t2170_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2170_m12443_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2170_m12444_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2170_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12444_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8081_gshared, &t2170_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2170_m12444_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t2170_m24909_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2170_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24909_MI = 
{
	"GetHashCode", NULL, &t2170_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2170_m24909_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t2170_m18760_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2170_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m18760_MI = 
{
	"Equals", NULL, &t2170_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2170_m18760_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2170_TI;
extern Il2CppType t2170_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12445_MI = 
{
	"get_Default", (methodPointerType)&m8082_gshared, &t2170_TI, &t2170_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2170_MIs[] =
{
	&m12441_MI,
	&m12442_MI,
	&m12443_MI,
	&m12444_MI,
	&m24909_MI,
	&m18760_MI,
	&m12445_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m18760_MI;
extern MethodInfo m24909_MI;
extern MethodInfo m12444_MI;
extern MethodInfo m12443_MI;
static MethodInfo* t2170_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m18760_MI,
	&m24909_MI,
	&m12444_MI,
	&m12443_MI,
	NULL,
	NULL,
};
extern TypeInfo t5177_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2170_ITIs[] = 
{
	&t5177_TI,
	&t860_TI,
};
extern TypeInfo t5177_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2170_IOs[] = 
{
	{ &t5177_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppType t5176_0_0_0;
extern Il2CppType t344_0_0_0;
extern TypeInfo t2170_TI;
extern TypeInfo t2170_TI;
extern TypeInfo t2171_TI;
extern MethodInfo m12446_MI;
extern TypeInfo t344_TI;
extern MethodInfo m24909_MI;
extern MethodInfo m18760_MI;
static void* t2170_RGCTXData[9] = 
{
	(void*)&t5176_0_0_0,
	(void*)&t344_0_0_0,
	&t2170_TI,
	&t2170_TI,
	&t2171_TI,
	&m12446_MI,
	&t344_TI,
	&m24909_MI,
	&m18760_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2170_0_0_0;
extern Il2CppType t2170_1_0_0;
extern TypeInfo t4_TI;
struct t2170;
extern TypeInfo t2170_TI;
extern Il2CppGenericClass t2170_GC;
TypeInfo t2170_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2170_MIs, t2170_PIs, t2170_FIs, NULL, &t4_TI, NULL, NULL, &t2170_TI, t2170_ITIs, t2170_VT, &EmptyCustomAttributesCache, &t2170_TI, &t2170_0_0_0, &t2170_1_0_0, t2170_IOs, &t2170_GC, NULL, NULL, NULL, t2170_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2170), 0, -1, sizeof(t2170_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5177_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.CanvasGroup>
extern Il2CppType t344_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t5177_m24910_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t5177_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24910_MI = 
{
	"Equals", NULL, &t5177_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t5177_m24910_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t5177_m24911_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t5177_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24911_MI = 
{
	"GetHashCode", NULL, &t5177_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t5177_m24911_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5177_MIs[] =
{
	&m24910_MI,
	&m24911_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5177_0_0_0;
extern Il2CppType t5177_1_0_0;
struct t5177;
extern TypeInfo t5177_TI;
extern Il2CppGenericClass t5177_GC;
TypeInfo t5177_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5177_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5177_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5177_TI, &t5177_0_0_0, &t5177_1_0_0, NULL, &t5177_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5176_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.CanvasGroup>
extern Il2CppType t344_0_0_0;
static ParameterInfo t5176_m24912_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t5176_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24912_MI = 
{
	"Equals", NULL, &t5176_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t5176_m24912_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5176_MIs[] =
{
	&m24912_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5176_0_0_0;
extern Il2CppType t5176_1_0_0;
struct t5176;
extern TypeInfo t5176_TI;
extern Il2CppGenericClass t5176_GC;
TypeInfo t5176_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5176_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5176_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5176_TI, &t5176_0_0_0, &t5176_1_0_0, NULL, &t5176_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2171_TI;

extern TypeInfo t344_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
extern TypeInfo t19_TI;
extern MethodInfo m12441_MI;
extern MethodInfo m30_MI;
extern MethodInfo m28_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.CanvasGroup>
extern TypeInfo t2171_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12446_MI = 
{
	".ctor", (methodPointerType)&m8113_gshared, &t2171_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t2171_m12447_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2171_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12447_MI = 
{
	"GetHashCode", (methodPointerType)&m8114_gshared, &t2171_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2171_m12447_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t2171_m12448_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2171_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12448_MI = 
{
	"Equals", (methodPointerType)&m8115_gshared, &t2171_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2171_m12448_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2171_MIs[] =
{
	&m12446_MI,
	&m12447_MI,
	&m12448_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12448_MI;
extern MethodInfo m12447_MI;
extern MethodInfo m12444_MI;
extern MethodInfo m12443_MI;
extern MethodInfo m12447_MI;
extern MethodInfo m12448_MI;
static MethodInfo* t2171_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12448_MI,
	&m12447_MI,
	&m12444_MI,
	&m12443_MI,
	&m12447_MI,
	&m12448_MI,
};
extern TypeInfo t5177_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2171_IOs[] = 
{
	{ &t5177_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppType t5176_0_0_0;
extern Il2CppType t344_0_0_0;
extern TypeInfo t2170_TI;
extern TypeInfo t2170_TI;
extern TypeInfo t2171_TI;
extern MethodInfo m12446_MI;
extern TypeInfo t344_TI;
extern MethodInfo m24909_MI;
extern MethodInfo m18760_MI;
extern MethodInfo m12441_MI;
extern TypeInfo t344_TI;
static void* t2171_RGCTXData[11] = 
{
	(void*)&t5176_0_0_0,
	(void*)&t344_0_0_0,
	&t2170_TI,
	&t2170_TI,
	&t2171_TI,
	&m12446_MI,
	&t344_TI,
	&m24909_MI,
	&m18760_MI,
	&m12441_MI,
	&t344_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2171_0_0_0;
extern Il2CppType t2171_1_0_0;
extern TypeInfo t2170_TI;
struct t2171;
extern TypeInfo t2171_TI;
extern Il2CppGenericClass t2171_GC;
extern TypeInfo t836_TI;
TypeInfo t2171_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2171_MIs, NULL, NULL, NULL, &t2170_TI, NULL, &t836_TI, &t2171_TI, NULL, t2171_VT, &EmptyCustomAttributesCache, &t2171_TI, &t2171_0_0_0, &t2171_1_0_0, t2171_IOs, &t2171_GC, NULL, NULL, NULL, t2171_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2171), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2164_TI;



// Metadata Definition System.Predicate`1<UnityEngine.CanvasGroup>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2164_m12449_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2164_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m12449_MI = 
{
	".ctor", (methodPointerType)&m8116_gshared, &t2164_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2164_m12449_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t2164_m12450_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2164_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12450_MI = 
{
	"Invoke", (methodPointerType)&m8117_gshared, &t2164_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2164_m12450_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2164_m12451_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2164_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12451_MI = 
{
	"BeginInvoke", (methodPointerType)&m8118_gshared, &t2164_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2164_m12451_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2164_m12452_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2164_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12452_MI = 
{
	"EndInvoke", (methodPointerType)&m8119_gshared, &t2164_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2164_m12452_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2164_MIs[] =
{
	&m12449_MI,
	&m12450_MI,
	&m12451_MI,
	&m12452_MI,
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
extern MethodInfo m12450_MI;
extern MethodInfo m12451_MI;
extern MethodInfo m12452_MI;
static MethodInfo* t2164_VT[] =
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
	&m12450_MI,
	&m12451_MI,
	&m12452_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2164_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2164_0_0_0;
extern Il2CppType t2164_1_0_0;
extern TypeInfo t193_TI;
struct t2164;
extern TypeInfo t2164_TI;
extern Il2CppGenericClass t2164_GC;
TypeInfo t2164_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2164_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2164_TI, NULL, t2164_VT, &EmptyCustomAttributesCache, &t2164_TI, &t2164_0_0_0, &t2164_1_0_0, t2164_IOs, &t2164_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2164), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2172_TI;

#include "t2173.h"
extern TypeInfo t2172_TI;
extern TypeInfo t3417_TI;
extern TypeInfo t294_TI;
extern TypeInfo t344_TI;
extern TypeInfo t19_TI;
extern TypeInfo t825_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2173_TI;
extern TypeInfo t18_TI;
extern TypeInfo t307_TI;
#include "t2173MD.h"
extern Il2CppType t3417_0_0_0;
extern Il2CppType t344_0_0_0;
extern Il2CppType t825_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m12457_MI;
extern MethodInfo m24913_MI;
extern MethodInfo m6463_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.CanvasGroup>
extern Il2CppType t2172_0_0_49;
FieldInfo t2172_f0_FieldInfo = 
{
	"_default", &t2172_0_0_49, &t2172_TI, offsetof(t2172_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2172_FIs[] =
{
	&t2172_f0_FieldInfo,
	NULL
};
extern MethodInfo m12456_MI;
static PropertyInfo t2172____Default_PropertyInfo = 
{
	&t2172_TI, "Default", &m12456_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2172_PIs[] =
{
	&t2172____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2172_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12453_MI = 
{
	".ctor", (methodPointerType)&m8120_gshared, &t2172_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2172_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12454_MI = 
{
	".cctor", (methodPointerType)&m8121_gshared, &t2172_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2172_m12455_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2172_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12455_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8122_gshared, &t2172_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t2172_m12455_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t2172_m24913_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2172_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24913_MI = 
{
	"Compare", NULL, &t2172_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t2172_m24913_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2172_TI;
extern Il2CppType t2172_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12456_MI = 
{
	"get_Default", (methodPointerType)&m8123_gshared, &t2172_TI, &t2172_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2172_MIs[] =
{
	&m12453_MI,
	&m12454_MI,
	&m12455_MI,
	&m24913_MI,
	&m12456_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m24913_MI;
extern MethodInfo m12455_MI;
static MethodInfo* t2172_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m24913_MI,
	&m12455_MI,
	NULL,
};
extern TypeInfo t3416_TI;
extern TypeInfo t717_TI;
static TypeInfo* t2172_ITIs[] = 
{
	&t3416_TI,
	&t717_TI,
};
extern TypeInfo t3416_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t2172_IOs[] = 
{
	{ &t3416_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppType t3417_0_0_0;
extern Il2CppType t344_0_0_0;
extern TypeInfo t2172_TI;
extern TypeInfo t2172_TI;
extern TypeInfo t2173_TI;
extern MethodInfo m12457_MI;
extern TypeInfo t344_TI;
extern MethodInfo m24913_MI;
static void* t2172_RGCTXData[8] = 
{
	(void*)&t3417_0_0_0,
	(void*)&t344_0_0_0,
	&t2172_TI,
	&t2172_TI,
	&t2173_TI,
	&m12457_MI,
	&t344_TI,
	&m24913_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2172_0_0_0;
extern Il2CppType t2172_1_0_0;
extern TypeInfo t4_TI;
struct t2172;
extern TypeInfo t2172_TI;
extern Il2CppGenericClass t2172_GC;
TypeInfo t2172_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2172_MIs, t2172_PIs, t2172_FIs, NULL, &t4_TI, NULL, NULL, &t2172_TI, t2172_ITIs, t2172_VT, &EmptyCustomAttributesCache, &t2172_TI, &t2172_0_0_0, &t2172_1_0_0, t2172_IOs, &t2172_GC, NULL, NULL, NULL, t2172_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2172), 0, -1, sizeof(t2172_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3416_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.CanvasGroup>
extern Il2CppType t344_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t3416_m18768_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t3416_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m18768_MI = 
{
	"Compare", NULL, &t3416_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t3416_m18768_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3416_MIs[] =
{
	&m18768_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3416_0_0_0;
extern Il2CppType t3416_1_0_0;
struct t3416;
extern TypeInfo t3416_TI;
extern Il2CppGenericClass t3416_GC;
TypeInfo t3416_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3416_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3416_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3416_TI, &t3416_0_0_0, &t3416_1_0_0, NULL, &t3416_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3417_TI;



// Metadata Definition System.IComparable`1<UnityEngine.CanvasGroup>
extern Il2CppType t344_0_0_0;
static ParameterInfo t3417_m18769_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t3417_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m18769_MI = 
{
	"CompareTo", NULL, &t3417_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t3417_m18769_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3417_MIs[] =
{
	&m18769_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3417_0_0_0;
extern Il2CppType t3417_1_0_0;
struct t3417;
extern TypeInfo t3417_TI;
extern Il2CppGenericClass t3417_GC;
TypeInfo t3417_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3417_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3417_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3417_TI, &t3417_0_0_0, &t3417_1_0_0, NULL, &t3417_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2173_TI;

extern TypeInfo t344_TI;
extern TypeInfo t3417_TI;
extern TypeInfo t18_TI;
extern TypeInfo t289_TI;
extern TypeInfo t4_TI;
extern TypeInfo t307_TI;
extern MethodInfo m12453_MI;
extern MethodInfo m18769_MI;
extern MethodInfo m7306_MI;
extern MethodInfo m1936_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.CanvasGroup>
extern TypeInfo t2173_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12457_MI = 
{
	".ctor", (methodPointerType)&m8124_gshared, &t2173_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t2173_m12458_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2173_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12458_MI = 
{
	"Compare", (methodPointerType)&m8125_gshared, &t2173_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t2173_m12458_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2173_MIs[] =
{
	&m12457_MI,
	&m12458_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m12458_MI;
extern MethodInfo m12455_MI;
extern MethodInfo m12458_MI;
static MethodInfo* t2173_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m12458_MI,
	&m12455_MI,
	&m12458_MI,
};
extern TypeInfo t3416_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t2173_IOs[] = 
{
	{ &t3416_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppType t3417_0_0_0;
extern Il2CppType t344_0_0_0;
extern TypeInfo t2172_TI;
extern TypeInfo t2172_TI;
extern TypeInfo t2173_TI;
extern MethodInfo m12457_MI;
extern TypeInfo t344_TI;
extern MethodInfo m24913_MI;
extern MethodInfo m12453_MI;
extern TypeInfo t344_TI;
extern TypeInfo t3417_TI;
extern MethodInfo m18769_MI;
static void* t2173_RGCTXData[12] = 
{
	(void*)&t3417_0_0_0,
	(void*)&t344_0_0_0,
	&t2172_TI,
	&t2172_TI,
	&t2173_TI,
	&m12457_MI,
	&t344_TI,
	&m24913_MI,
	&m12453_MI,
	&t344_TI,
	&t3417_TI,
	&m18769_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2173_0_0_0;
extern Il2CppType t2173_1_0_0;
extern TypeInfo t2172_TI;
struct t2173;
extern TypeInfo t2173_TI;
extern Il2CppGenericClass t2173_GC;
extern TypeInfo t824_TI;
TypeInfo t2173_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2173_MIs, NULL, NULL, NULL, &t2172_TI, NULL, &t824_TI, &t2173_TI, NULL, t2173_VT, &EmptyCustomAttributesCache, &t2173_TI, &t2173_0_0_0, &t2173_1_0_0, t2173_IOs, &t2173_GC, NULL, NULL, NULL, t2173_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2173), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2165_TI;
#include "t2165MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.CanvasGroup>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2165_m12459_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2165_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m12459_MI = 
{
	".ctor", (methodPointerType)&m8191_gshared, &t2165_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2165_m12459_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t2165_m12460_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t2165_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12460_MI = 
{
	"Invoke", (methodPointerType)&m8192_gshared, &t2165_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t2165_m12460_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
extern Il2CppType t344_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2165_m12461_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2165_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12461_MI = 
{
	"BeginInvoke", (methodPointerType)&m8193_gshared, &t2165_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4_t4, t2165_m12461_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2165_m12462_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2165_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12462_MI = 
{
	"EndInvoke", (methodPointerType)&m8194_gshared, &t2165_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2165_m12462_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2165_MIs[] =
{
	&m12459_MI,
	&m12460_MI,
	&m12461_MI,
	&m12462_MI,
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
extern MethodInfo m12460_MI;
extern MethodInfo m12461_MI;
extern MethodInfo m12462_MI;
static MethodInfo* t2165_VT[] =
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
	&m12460_MI,
	&m12461_MI,
	&m12462_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2165_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2165_0_0_0;
extern Il2CppType t2165_1_0_0;
extern TypeInfo t193_TI;
struct t2165;
extern TypeInfo t2165_TI;
extern Il2CppGenericClass t2165_GC;
TypeInfo t2165_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2165_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2165_TI, NULL, t2165_VT, &EmptyCustomAttributesCache, &t2165_TI, &t2165_0_0_0, &t2165_1_0_0, t2165_IOs, &t2165_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2165), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3418_TI;

#include "t223.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable/Transition>
extern MethodInfo m24914_MI;
static PropertyInfo t3418____Current_PropertyInfo = 
{
	&t3418_TI, "Current", &m24914_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3418_PIs[] =
{
	&t3418____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3418_TI;
extern Il2CppType t223_0_0_0;
extern void* RuntimeInvoker_t223 (MethodInfo* method, void* obj, void** args);
MethodInfo m24914_MI = 
{
	"get_Current", NULL, &t3418_TI, &t223_0_0_0, RuntimeInvoker_t223, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3418_MIs[] =
{
	&m24914_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3418_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3418_0_0_0;
extern Il2CppType t3418_1_0_0;
struct t3418;
extern TypeInfo t3418_TI;
extern Il2CppGenericClass t3418_GC;
TypeInfo t3418_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3418_MIs, t3418_PIs, NULL, NULL, NULL, NULL, NULL, &t3418_TI, t3418_ITIs, NULL, &EmptyCustomAttributesCache, &t3418_TI, &t3418_0_0_0, &t3418_1_0_0, NULL, &t3418_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2174.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2174_TI;
#include "t2174MD.h"

extern TypeInfo t2174_TI;
extern TypeInfo t223_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m12467_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18774_MI;
struct t16;
 int32_t m18774 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18774_MI;


extern MethodInfo m12463_MI;
 void m12463 (t2174 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12464_MI;
 t4 * m12464 (t2174 * __this, MethodInfo* method){
	{
		int32_t L_0 = m12467(__this, &m12467_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t223_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m12465_MI;
 void m12465 (t2174 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12466_MI;
 bool m12466 (t2174 * __this, MethodInfo* method){
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
extern MethodInfo m12467_MI;
 int32_t m12467 (t2174 * __this, MethodInfo* method){
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
		int32_t L_8 = m18774(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18774_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Selectable/Transition>
extern Il2CppType t16_0_0_1;
FieldInfo t2174_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2174_TI, offsetof(t2174, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2174_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2174_TI, offsetof(t2174, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2174_FIs[] =
{
	&t2174_f0_FieldInfo,
	&t2174_f1_FieldInfo,
	NULL
};
extern MethodInfo m12464_MI;
static PropertyInfo t2174____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2174_TI, "System.Collections.IEnumerator.Current", &m12464_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12467_MI;
static PropertyInfo t2174____Current_PropertyInfo = 
{
	&t2174_TI, "Current", &m12467_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2174_PIs[] =
{
	&t2174____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2174____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2174_m12463_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2174_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12463_MI = 
{
	".ctor", (methodPointerType)&m12463, &t2174_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2174_m12463_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2174_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12464_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12464, &t2174_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2174_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12465_MI = 
{
	"Dispose", (methodPointerType)&m12465, &t2174_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2174_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12466_MI = 
{
	"MoveNext", (methodPointerType)&m12466, &t2174_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2174_TI;
extern Il2CppType t223_0_0_0;
extern void* RuntimeInvoker_t223 (MethodInfo* method, void* obj, void** args);
MethodInfo m12467_MI = 
{
	"get_Current", (methodPointerType)&m12467, &t2174_TI, &t223_0_0_0, RuntimeInvoker_t223, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2174_MIs[] =
{
	&m12463_MI,
	&m12464_MI,
	&m12465_MI,
	&m12466_MI,
	&m12467_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m12464_MI;
extern MethodInfo m12466_MI;
extern MethodInfo m12465_MI;
extern MethodInfo m12467_MI;
static MethodInfo* t2174_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m12464_MI,
	&m12466_MI,
	&m12465_MI,
	&m12467_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3418_TI;
static TypeInfo* t2174_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3418_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3418_TI;
static Il2CppInterfaceOffsetPair t2174_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3418_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2174_0_0_0;
extern Il2CppType t2174_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2174_TI;
extern Il2CppGenericClass t2174_GC;
extern TypeInfo t16_TI;
TypeInfo t2174_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2174_MIs, t2174_PIs, t2174_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2174_TI, t2174_ITIs, t2174_VT, &EmptyCustomAttributesCache, &t2174_TI, &t2174_0_0_0, &t2174_1_0_0, t2174_IOs, &t2174_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2174)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4113_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable/Transition>
extern MethodInfo m24915_MI;
static PropertyInfo t4113____Count_PropertyInfo = 
{
	&t4113_TI, "Count", &m24915_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24916_MI;
static PropertyInfo t4113____IsReadOnly_PropertyInfo = 
{
	&t4113_TI, "IsReadOnly", &m24916_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4113_PIs[] =
{
	&t4113____Count_PropertyInfo,
	&t4113____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4113_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24915_MI = 
{
	"get_Count", NULL, &t4113_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4113_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24916_MI = 
{
	"get_IsReadOnly", NULL, &t4113_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t223_0_0_0;
static ParameterInfo t4113_m24917_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t4113_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24917_MI = 
{
	"Add", NULL, &t4113_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4113_m24917_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4113_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24918_MI = 
{
	"Clear", NULL, &t4113_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t223_0_0_0;
static ParameterInfo t4113_m24919_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t4113_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24919_MI = 
{
	"Contains", NULL, &t4113_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t4113_m24919_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3238_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4113_m24920_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3238_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4113_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24920_MI = 
{
	"CopyTo", NULL, &t4113_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4113_m24920_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t223_0_0_0;
static ParameterInfo t4113_m24921_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t4113_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24921_MI = 
{
	"Remove", NULL, &t4113_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t4113_m24921_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4113_MIs[] =
{
	&m24915_MI,
	&m24916_MI,
	&m24917_MI,
	&m24918_MI,
	&m24919_MI,
	&m24920_MI,
	&m24921_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4115_TI;
static TypeInfo* t4113_ITIs[] = 
{
	&t592_TI,
	&t4115_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4113_0_0_0;
extern Il2CppType t4113_1_0_0;
struct t4113;
extern TypeInfo t4113_TI;
extern Il2CppGenericClass t4113_GC;
TypeInfo t4113_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4113_MIs, t4113_PIs, NULL, NULL, NULL, NULL, NULL, &t4113_TI, t4113_ITIs, NULL, &EmptyCustomAttributesCache, &t4113_TI, &t4113_0_0_0, &t4113_1_0_0, NULL, &t4113_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4115_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable/Transition>
extern TypeInfo t4115_TI;
extern Il2CppType t3418_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24922_MI = 
{
	"GetEnumerator", NULL, &t4115_TI, &t3418_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4115_MIs[] =
{
	&m24922_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4115_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4115_0_0_0;
extern Il2CppType t4115_1_0_0;
struct t4115;
extern TypeInfo t4115_TI;
extern Il2CppGenericClass t4115_GC;
TypeInfo t4115_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4115_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4115_TI, t4115_ITIs, NULL, &EmptyCustomAttributesCache, &t4115_TI, &t4115_0_0_0, &t4115_1_0_0, NULL, &t4115_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4114_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Selectable/Transition>
extern MethodInfo m24923_MI;
extern MethodInfo m24924_MI;
static PropertyInfo t4114____Item_PropertyInfo = 
{
	&t4114_TI, "Item", &m24923_MI, &m24924_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4114_PIs[] =
{
	&t4114____Item_PropertyInfo,
	NULL
};
extern Il2CppType t223_0_0_0;
static ParameterInfo t4114_m24925_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t4114_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24925_MI = 
{
	"IndexOf", NULL, &t4114_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t4114_m24925_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t223_0_0_0;
static ParameterInfo t4114_m24926_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t4114_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24926_MI = 
{
	"Insert", NULL, &t4114_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t4114_m24926_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4114_m24927_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4114_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24927_MI = 
{
	"RemoveAt", NULL, &t4114_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4114_m24927_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4114_m24923_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4114_TI;
extern Il2CppType t223_0_0_0;
extern void* RuntimeInvoker_t223_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24923_MI = 
{
	"get_Item", NULL, &t4114_TI, &t223_0_0_0, RuntimeInvoker_t223_t18, t4114_m24923_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t223_0_0_0;
static ParameterInfo t4114_m24924_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t4114_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24924_MI = 
{
	"set_Item", NULL, &t4114_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t4114_m24924_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4114_MIs[] =
{
	&m24925_MI,
	&m24926_MI,
	&m24927_MI,
	&m24923_MI,
	&m24924_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4113_TI;
extern TypeInfo t4115_TI;
static TypeInfo* t4114_ITIs[] = 
{
	&t592_TI,
	&t4113_TI,
	&t4115_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4114_0_0_0;
extern Il2CppType t4114_1_0_0;
struct t4114;
extern TypeInfo t4114_TI;
extern Il2CppGenericClass t4114_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4114_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4114_MIs, t4114_PIs, NULL, NULL, NULL, NULL, NULL, &t4114_TI, t4114_ITIs, NULL, &t1401__CustomAttributeCache, &t4114_TI, &t4114_0_0_0, &t4114_1_0_0, NULL, &t4114_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3419_TI;

#include "t205.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable/SelectionState>
extern MethodInfo m24928_MI;
static PropertyInfo t3419____Current_PropertyInfo = 
{
	&t3419_TI, "Current", &m24928_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3419_PIs[] =
{
	&t3419____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3419_TI;
extern Il2CppType t205_0_0_0;
extern void* RuntimeInvoker_t205 (MethodInfo* method, void* obj, void** args);
MethodInfo m24928_MI = 
{
	"get_Current", NULL, &t3419_TI, &t205_0_0_0, RuntimeInvoker_t205, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3419_MIs[] =
{
	&m24928_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3419_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3419_0_0_0;
extern Il2CppType t3419_1_0_0;
struct t3419;
extern TypeInfo t3419_TI;
extern Il2CppGenericClass t3419_GC;
TypeInfo t3419_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3419_MIs, t3419_PIs, NULL, NULL, NULL, NULL, NULL, &t3419_TI, t3419_ITIs, NULL, &EmptyCustomAttributesCache, &t3419_TI, &t3419_0_0_0, &t3419_1_0_0, NULL, &t3419_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2175.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2175_TI;
#include "t2175MD.h"

extern TypeInfo t2175_TI;
extern TypeInfo t205_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m12472_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18785_MI;
struct t16;
 int32_t m18785 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18785_MI;


extern MethodInfo m12468_MI;
 void m12468 (t2175 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12469_MI;
 t4 * m12469 (t2175 * __this, MethodInfo* method){
	{
		int32_t L_0 = m12472(__this, &m12472_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t205_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m12470_MI;
 void m12470 (t2175 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12471_MI;
 bool m12471 (t2175 * __this, MethodInfo* method){
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
extern MethodInfo m12472_MI;
 int32_t m12472 (t2175 * __this, MethodInfo* method){
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
		int32_t L_8 = m18785(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18785_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Selectable/SelectionState>
extern Il2CppType t16_0_0_1;
FieldInfo t2175_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2175_TI, offsetof(t2175, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2175_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2175_TI, offsetof(t2175, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2175_FIs[] =
{
	&t2175_f0_FieldInfo,
	&t2175_f1_FieldInfo,
	NULL
};
extern MethodInfo m12469_MI;
static PropertyInfo t2175____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2175_TI, "System.Collections.IEnumerator.Current", &m12469_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12472_MI;
static PropertyInfo t2175____Current_PropertyInfo = 
{
	&t2175_TI, "Current", &m12472_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2175_PIs[] =
{
	&t2175____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2175____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2175_m12468_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2175_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12468_MI = 
{
	".ctor", (methodPointerType)&m12468, &t2175_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2175_m12468_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2175_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m12469_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12469, &t2175_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2175_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m12470_MI = 
{
	"Dispose", (methodPointerType)&m12470, &t2175_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2175_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m12471_MI = 
{
	"MoveNext", (methodPointerType)&m12471, &t2175_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2175_TI;
extern Il2CppType t205_0_0_0;
extern void* RuntimeInvoker_t205 (MethodInfo* method, void* obj, void** args);
MethodInfo m12472_MI = 
{
	"get_Current", (methodPointerType)&m12472, &t2175_TI, &t205_0_0_0, RuntimeInvoker_t205, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2175_MIs[] =
{
	&m12468_MI,
	&m12469_MI,
	&m12470_MI,
	&m12471_MI,
	&m12472_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m12469_MI;
extern MethodInfo m12471_MI;
extern MethodInfo m12470_MI;
extern MethodInfo m12472_MI;
static MethodInfo* t2175_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m12469_MI,
	&m12471_MI,
	&m12470_MI,
	&m12472_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3419_TI;
static TypeInfo* t2175_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3419_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3419_TI;
static Il2CppInterfaceOffsetPair t2175_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3419_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2175_0_0_0;
extern Il2CppType t2175_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2175_TI;
extern Il2CppGenericClass t2175_GC;
extern TypeInfo t16_TI;
TypeInfo t2175_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2175_MIs, t2175_PIs, t2175_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2175_TI, t2175_ITIs, t2175_VT, &EmptyCustomAttributesCache, &t2175_TI, &t2175_0_0_0, &t2175_1_0_0, t2175_IOs, &t2175_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2175)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4116_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable/SelectionState>
extern MethodInfo m24929_MI;
static PropertyInfo t4116____Count_PropertyInfo = 
{
	&t4116_TI, "Count", &m24929_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24930_MI;
static PropertyInfo t4116____IsReadOnly_PropertyInfo = 
{
	&t4116_TI, "IsReadOnly", &m24930_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4116_PIs[] =
{
	&t4116____Count_PropertyInfo,
	&t4116____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4116_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24929_MI = 
{
	"get_Count", NULL, &t4116_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4116_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24930_MI = 
{
	"get_IsReadOnly", NULL, &t4116_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t205_0_0_0;
static ParameterInfo t4116_m24931_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t205_0_0_0},
};
extern TypeInfo t4116_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24931_MI = 
{
	"Add", NULL, &t4116_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4116_m24931_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4116_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24932_MI = 
{
	"Clear", NULL, &t4116_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t205_0_0_0;
static ParameterInfo t4116_m24933_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t205_0_0_0},
};
extern TypeInfo t4116_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24933_MI = 
{
	"Contains", NULL, &t4116_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t4116_m24933_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3239_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4116_m24934_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3239_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4116_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24934_MI = 
{
	"CopyTo", NULL, &t4116_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4116_m24934_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t205_0_0_0;
static ParameterInfo t4116_m24935_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t205_0_0_0},
};
extern TypeInfo t4116_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24935_MI = 
{
	"Remove", NULL, &t4116_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t4116_m24935_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4116_MIs[] =
{
	&m24929_MI,
	&m24930_MI,
	&m24931_MI,
	&m24932_MI,
	&m24933_MI,
	&m24934_MI,
	&m24935_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4118_TI;
static TypeInfo* t4116_ITIs[] = 
{
	&t592_TI,
	&t4118_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4116_0_0_0;
extern Il2CppType t4116_1_0_0;
struct t4116;
extern TypeInfo t4116_TI;
extern Il2CppGenericClass t4116_GC;
TypeInfo t4116_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4116_MIs, t4116_PIs, NULL, NULL, NULL, NULL, NULL, &t4116_TI, t4116_ITIs, NULL, &EmptyCustomAttributesCache, &t4116_TI, &t4116_0_0_0, &t4116_1_0_0, NULL, &t4116_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4118_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable/SelectionState>
extern TypeInfo t4118_TI;
extern Il2CppType t3419_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24936_MI = 
{
	"GetEnumerator", NULL, &t4118_TI, &t3419_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4118_MIs[] =
{
	&m24936_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4118_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4118_0_0_0;
extern Il2CppType t4118_1_0_0;
struct t4118;
extern TypeInfo t4118_TI;
extern Il2CppGenericClass t4118_GC;
TypeInfo t4118_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4118_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4118_TI, t4118_ITIs, NULL, &EmptyCustomAttributesCache, &t4118_TI, &t4118_0_0_0, &t4118_1_0_0, NULL, &t4118_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
