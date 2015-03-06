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
extern TypeInfo t3718_TI;

#include "t1076.h"

#include "t14.h"

// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern MethodInfo m29202_MI;
static PropertyInfo t3718____Current_PropertyInfo = 
{
	&t3718_TI, "Current", &m29202_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3718_PIs[] =
{
	&t3718____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3718_TI;
extern Il2CppType t1076_0_0_0;
extern void* RuntimeInvoker_t1076 (MethodInfo* method, void* obj, void** args);
MethodInfo m29202_MI = 
{
	"get_Current", NULL, &t3718_TI, &t1076_0_0_0, RuntimeInvoker_t1076, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3718_MIs[] =
{
	&m29202_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3718_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3718_0_0_0;
extern Il2CppType t3718_1_0_0;
struct t3718;
extern TypeInfo t3718_TI;
extern Il2CppGenericClass t3718_GC;
TypeInfo t3718_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3718_MIs, t3718_PIs, NULL, NULL, NULL, NULL, NULL, &t3718_TI, t3718_ITIs, NULL, &EmptyCustomAttributesCache, &t3718_TI, &t3718_0_0_0, &t3718_1_0_0, NULL, &t3718_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2830.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2830_TI;
#include "t2830MD.h"

#include "t4.h"
#include "t16.h"
#include "t8.h"
#include "t1269.h"
#include "t15.h"
#include "t17.h"
extern TypeInfo t2830_TI;
extern TypeInfo t1076_TI;
extern TypeInfo t1269_TI;
#include "t1269MD.h"
#include "t14MD.h"
extern MethodInfo m16368_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22307_MI;
struct t14;
#include "t1233.h"
 int32_t m22307 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22307_MI;


extern MethodInfo m16364_MI;
 void m16364 (t2830 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16365_MI;
 t4 * m16365 (t2830 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16368(__this, &m16368_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1076_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16366_MI;
 void m16366 (t2830 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16367_MI;
 bool m16367 (t2830 * __this, MethodInfo* method){
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
		t14 * L_1 = (__this->f0);
		int32_t L_2 = m3690(L_1, &m3690_MI);
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
extern MethodInfo m16368_MI;
 int32_t m16368 (t2830 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral370, &m6887_MI);
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
		t1269 * L_3 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_3, (t8*) &_stringLiteral371, &m6887_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t14 * L_4 = (__this->f0);
		t14 * L_5 = (__this->f0);
		int32_t L_6 = m3690(L_5, &m3690_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m22307(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22307_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern Il2CppType t14_0_0_1;
FieldInfo t2830_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2830_TI, offsetof(t2830, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2830_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2830_TI, offsetof(t2830, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2830_FIs[] =
{
	&t2830_f0_FieldInfo,
	&t2830_f1_FieldInfo,
	NULL
};
extern MethodInfo m16365_MI;
static PropertyInfo t2830____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2830_TI, "System.Collections.IEnumerator.Current", &m16365_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16368_MI;
static PropertyInfo t2830____Current_PropertyInfo = 
{
	&t2830_TI, "Current", &m16368_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2830_PIs[] =
{
	&t2830____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2830____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2830_m16364_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2830_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16364_MI = 
{
	".ctor", (methodPointerType)&m16364, &t2830_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2830_m16364_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2830_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16365_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16365, &t2830_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2830_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16366_MI = 
{
	"Dispose", (methodPointerType)&m16366, &t2830_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2830_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16367_MI = 
{
	"MoveNext", (methodPointerType)&m16367, &t2830_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2830_TI;
extern Il2CppType t1076_0_0_0;
extern void* RuntimeInvoker_t1076 (MethodInfo* method, void* obj, void** args);
MethodInfo m16368_MI = 
{
	"get_Current", (methodPointerType)&m16368, &t2830_TI, &t1076_0_0_0, RuntimeInvoker_t1076, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2830_MIs[] =
{
	&m16364_MI,
	&m16365_MI,
	&m16366_MI,
	&m16367_MI,
	&m16368_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16365_MI;
extern MethodInfo m16367_MI;
extern MethodInfo m16366_MI;
extern MethodInfo m16368_MI;
static MethodInfo* t2830_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16365_MI,
	&m16367_MI,
	&m16366_MI,
	&m16368_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3718_TI;
static TypeInfo* t2830_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3718_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3718_TI;
static Il2CppInterfaceOffsetPair t2830_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3718_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2830_0_0_0;
extern Il2CppType t2830_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2830_TI;
extern Il2CppGenericClass t2830_GC;
extern TypeInfo t14_TI;
TypeInfo t2830_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2830_MIs, t2830_PIs, t2830_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2830_TI, t2830_ITIs, t2830_VT, &EmptyCustomAttributesCache, &t2830_TI, &t2830_0_0_0, &t2830_1_0_0, t2830_IOs, &t2830_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2830)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4991_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern MethodInfo m29203_MI;
static PropertyInfo t4991____Count_PropertyInfo = 
{
	&t4991_TI, "Count", &m29203_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29204_MI;
static PropertyInfo t4991____IsReadOnly_PropertyInfo = 
{
	&t4991_TI, "IsReadOnly", &m29204_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4991_PIs[] =
{
	&t4991____Count_PropertyInfo,
	&t4991____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4991_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29203_MI = 
{
	"get_Count", NULL, &t4991_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4991_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29204_MI = 
{
	"get_IsReadOnly", NULL, &t4991_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1076_0_0_0;
static ParameterInfo t4991_m29205_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1076_0_0_0},
};
extern TypeInfo t4991_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29205_MI = 
{
	"Add", NULL, &t4991_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4991_m29205_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4991_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29206_MI = 
{
	"Clear", NULL, &t4991_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1076_0_0_0;
static ParameterInfo t4991_m29207_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1076_0_0_0},
};
extern TypeInfo t4991_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29207_MI = 
{
	"Contains", NULL, &t4991_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4991_m29207_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3063_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4991_m29208_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3063_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4991_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29208_MI = 
{
	"CopyTo", NULL, &t4991_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4991_m29208_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1076_0_0_0;
static ParameterInfo t4991_m29209_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1076_0_0_0},
};
extern TypeInfo t4991_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29209_MI = 
{
	"Remove", NULL, &t4991_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4991_m29209_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4991_MIs[] =
{
	&m29203_MI,
	&m29204_MI,
	&m29205_MI,
	&m29206_MI,
	&m29207_MI,
	&m29208_MI,
	&m29209_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4993_TI;
static TypeInfo* t4991_ITIs[] = 
{
	&t591_TI,
	&t4993_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4991_0_0_0;
extern Il2CppType t4991_1_0_0;
struct t4991;
extern TypeInfo t4991_TI;
extern Il2CppGenericClass t4991_GC;
TypeInfo t4991_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4991_MIs, t4991_PIs, NULL, NULL, NULL, NULL, NULL, &t4991_TI, t4991_ITIs, NULL, &EmptyCustomAttributesCache, &t4991_TI, &t4991_0_0_0, &t4991_1_0_0, NULL, &t4991_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4993_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern TypeInfo t4993_TI;
extern Il2CppType t3718_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29210_MI = 
{
	"GetEnumerator", NULL, &t4993_TI, &t3718_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4993_MIs[] =
{
	&m29210_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4993_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4993_0_0_0;
extern Il2CppType t4993_1_0_0;
struct t4993;
extern TypeInfo t4993_TI;
extern Il2CppGenericClass t4993_GC;
TypeInfo t4993_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4993_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4993_TI, t4993_ITIs, NULL, &EmptyCustomAttributesCache, &t4993_TI, &t4993_0_0_0, &t4993_1_0_0, NULL, &t4993_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4992_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern MethodInfo m29211_MI;
extern MethodInfo m29212_MI;
static PropertyInfo t4992____Item_PropertyInfo = 
{
	&t4992_TI, "Item", &m29211_MI, &m29212_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4992_PIs[] =
{
	&t4992____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1076_0_0_0;
static ParameterInfo t4992_m29213_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1076_0_0_0},
};
extern TypeInfo t4992_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29213_MI = 
{
	"IndexOf", NULL, &t4992_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4992_m29213_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1076_0_0_0;
static ParameterInfo t4992_m29214_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1076_0_0_0},
};
extern TypeInfo t4992_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29214_MI = 
{
	"Insert", NULL, &t4992_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4992_m29214_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4992_m29215_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4992_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29215_MI = 
{
	"RemoveAt", NULL, &t4992_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4992_m29215_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4992_m29211_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4992_TI;
extern Il2CppType t1076_0_0_0;
extern void* RuntimeInvoker_t1076_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29211_MI = 
{
	"get_Item", NULL, &t4992_TI, &t1076_0_0_0, RuntimeInvoker_t1076_t16, t4992_m29211_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1076_0_0_0;
static ParameterInfo t4992_m29212_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1076_0_0_0},
};
extern TypeInfo t4992_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29212_MI = 
{
	"set_Item", NULL, &t4992_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4992_m29212_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4992_MIs[] =
{
	&m29213_MI,
	&m29214_MI,
	&m29215_MI,
	&m29211_MI,
	&m29212_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4991_TI;
extern TypeInfo t4993_TI;
static TypeInfo* t4992_ITIs[] = 
{
	&t591_TI,
	&t4991_TI,
	&t4993_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4992_0_0_0;
extern Il2CppType t4992_1_0_0;
struct t4992;
extern TypeInfo t4992_TI;
extern Il2CppGenericClass t4992_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4992_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4992_MIs, t4992_PIs, NULL, NULL, NULL, NULL, NULL, &t4992_TI, t4992_ITIs, NULL, &t1400__CustomAttributeCache, &t4992_TI, &t4992_0_0_0, &t4992_1_0_0, NULL, &t4992_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3719_TI;

#include "t1077.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern MethodInfo m29216_MI;
static PropertyInfo t3719____Current_PropertyInfo = 
{
	&t3719_TI, "Current", &m29216_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3719_PIs[] =
{
	&t3719____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3719_TI;
extern Il2CppType t1077_0_0_0;
extern void* RuntimeInvoker_t1077 (MethodInfo* method, void* obj, void** args);
MethodInfo m29216_MI = 
{
	"get_Current", NULL, &t3719_TI, &t1077_0_0_0, RuntimeInvoker_t1077, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3719_MIs[] =
{
	&m29216_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3719_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3719_0_0_0;
extern Il2CppType t3719_1_0_0;
struct t3719;
extern TypeInfo t3719_TI;
extern Il2CppGenericClass t3719_GC;
TypeInfo t3719_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3719_MIs, t3719_PIs, NULL, NULL, NULL, NULL, NULL, &t3719_TI, t3719_ITIs, NULL, &EmptyCustomAttributesCache, &t3719_TI, &t3719_0_0_0, &t3719_1_0_0, NULL, &t3719_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2831.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2831_TI;
#include "t2831MD.h"

extern TypeInfo t2831_TI;
extern TypeInfo t1077_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16373_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22318_MI;
struct t14;
 uint8_t m22318 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22318_MI;


extern MethodInfo m16369_MI;
 void m16369 (t2831 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16370_MI;
 t4 * m16370 (t2831 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m16373(__this, &m16373_MI);
		uint8_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1077_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16371_MI;
 void m16371 (t2831 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16372_MI;
 bool m16372 (t2831 * __this, MethodInfo* method){
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
		t14 * L_1 = (__this->f0);
		int32_t L_2 = m3690(L_1, &m3690_MI);
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
extern MethodInfo m16373_MI;
 uint8_t m16373 (t2831 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral370, &m6887_MI);
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
		t1269 * L_3 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_3, (t8*) &_stringLiteral371, &m6887_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t14 * L_4 = (__this->f0);
		t14 * L_5 = (__this->f0);
		int32_t L_6 = m3690(L_5, &m3690_MI);
		int32_t L_7 = (__this->f1);
		uint8_t L_8 = m22318(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22318_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern Il2CppType t14_0_0_1;
FieldInfo t2831_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2831_TI, offsetof(t2831, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2831_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2831_TI, offsetof(t2831, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2831_FIs[] =
{
	&t2831_f0_FieldInfo,
	&t2831_f1_FieldInfo,
	NULL
};
extern MethodInfo m16370_MI;
static PropertyInfo t2831____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2831_TI, "System.Collections.IEnumerator.Current", &m16370_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16373_MI;
static PropertyInfo t2831____Current_PropertyInfo = 
{
	&t2831_TI, "Current", &m16373_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2831_PIs[] =
{
	&t2831____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2831____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2831_m16369_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2831_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16369_MI = 
{
	".ctor", (methodPointerType)&m16369, &t2831_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2831_m16369_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2831_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16370_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16370, &t2831_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2831_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16371_MI = 
{
	"Dispose", (methodPointerType)&m16371, &t2831_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2831_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16372_MI = 
{
	"MoveNext", (methodPointerType)&m16372, &t2831_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2831_TI;
extern Il2CppType t1077_0_0_0;
extern void* RuntimeInvoker_t1077 (MethodInfo* method, void* obj, void** args);
MethodInfo m16373_MI = 
{
	"get_Current", (methodPointerType)&m16373, &t2831_TI, &t1077_0_0_0, RuntimeInvoker_t1077, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2831_MIs[] =
{
	&m16369_MI,
	&m16370_MI,
	&m16371_MI,
	&m16372_MI,
	&m16373_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16370_MI;
extern MethodInfo m16372_MI;
extern MethodInfo m16371_MI;
extern MethodInfo m16373_MI;
static MethodInfo* t2831_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16370_MI,
	&m16372_MI,
	&m16371_MI,
	&m16373_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3719_TI;
static TypeInfo* t2831_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3719_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3719_TI;
static Il2CppInterfaceOffsetPair t2831_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3719_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2831_0_0_0;
extern Il2CppType t2831_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2831_TI;
extern Il2CppGenericClass t2831_GC;
extern TypeInfo t14_TI;
TypeInfo t2831_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2831_MIs, t2831_PIs, t2831_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2831_TI, t2831_ITIs, t2831_VT, &EmptyCustomAttributesCache, &t2831_TI, &t2831_0_0_0, &t2831_1_0_0, t2831_IOs, &t2831_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2831)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4994_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern MethodInfo m29217_MI;
static PropertyInfo t4994____Count_PropertyInfo = 
{
	&t4994_TI, "Count", &m29217_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29218_MI;
static PropertyInfo t4994____IsReadOnly_PropertyInfo = 
{
	&t4994_TI, "IsReadOnly", &m29218_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4994_PIs[] =
{
	&t4994____Count_PropertyInfo,
	&t4994____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4994_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29217_MI = 
{
	"get_Count", NULL, &t4994_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29218_MI = 
{
	"get_IsReadOnly", NULL, &t4994_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1077_0_0_0;
static ParameterInfo t4994_m29219_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1077_0_0_0},
};
extern TypeInfo t4994_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t338 (MethodInfo* method, void* obj, void** args);
MethodInfo m29219_MI = 
{
	"Add", NULL, &t4994_TI, &t15_0_0_0, RuntimeInvoker_t15_t338, t4994_m29219_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4994_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29220_MI = 
{
	"Clear", NULL, &t4994_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1077_0_0_0;
static ParameterInfo t4994_m29221_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1077_0_0_0},
};
extern TypeInfo t4994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t338 (MethodInfo* method, void* obj, void** args);
MethodInfo m29221_MI = 
{
	"Contains", NULL, &t4994_TI, &t17_0_0_0, RuntimeInvoker_t17_t338, t4994_m29221_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3064_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4994_m29222_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3064_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4994_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29222_MI = 
{
	"CopyTo", NULL, &t4994_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4994_m29222_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1077_0_0_0;
static ParameterInfo t4994_m29223_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1077_0_0_0},
};
extern TypeInfo t4994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t338 (MethodInfo* method, void* obj, void** args);
MethodInfo m29223_MI = 
{
	"Remove", NULL, &t4994_TI, &t17_0_0_0, RuntimeInvoker_t17_t338, t4994_m29223_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4994_MIs[] =
{
	&m29217_MI,
	&m29218_MI,
	&m29219_MI,
	&m29220_MI,
	&m29221_MI,
	&m29222_MI,
	&m29223_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4996_TI;
static TypeInfo* t4994_ITIs[] = 
{
	&t591_TI,
	&t4996_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4994_0_0_0;
extern Il2CppType t4994_1_0_0;
struct t4994;
extern TypeInfo t4994_TI;
extern Il2CppGenericClass t4994_GC;
TypeInfo t4994_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4994_MIs, t4994_PIs, NULL, NULL, NULL, NULL, NULL, &t4994_TI, t4994_ITIs, NULL, &EmptyCustomAttributesCache, &t4994_TI, &t4994_0_0_0, &t4994_1_0_0, NULL, &t4994_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4996_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern TypeInfo t4996_TI;
extern Il2CppType t3719_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29224_MI = 
{
	"GetEnumerator", NULL, &t4996_TI, &t3719_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4996_MIs[] =
{
	&m29224_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4996_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4996_0_0_0;
extern Il2CppType t4996_1_0_0;
struct t4996;
extern TypeInfo t4996_TI;
extern Il2CppGenericClass t4996_GC;
TypeInfo t4996_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4996_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4996_TI, t4996_ITIs, NULL, &EmptyCustomAttributesCache, &t4996_TI, &t4996_0_0_0, &t4996_1_0_0, NULL, &t4996_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4995_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern MethodInfo m29225_MI;
extern MethodInfo m29226_MI;
static PropertyInfo t4995____Item_PropertyInfo = 
{
	&t4995_TI, "Item", &m29225_MI, &m29226_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4995_PIs[] =
{
	&t4995____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1077_0_0_0;
static ParameterInfo t4995_m29227_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1077_0_0_0},
};
extern TypeInfo t4995_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t338 (MethodInfo* method, void* obj, void** args);
MethodInfo m29227_MI = 
{
	"IndexOf", NULL, &t4995_TI, &t16_0_0_0, RuntimeInvoker_t16_t338, t4995_m29227_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1077_0_0_0;
static ParameterInfo t4995_m29228_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1077_0_0_0},
};
extern TypeInfo t4995_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t338 (MethodInfo* method, void* obj, void** args);
MethodInfo m29228_MI = 
{
	"Insert", NULL, &t4995_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t338, t4995_m29228_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4995_m29229_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4995_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29229_MI = 
{
	"RemoveAt", NULL, &t4995_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4995_m29229_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4995_m29225_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4995_TI;
extern Il2CppType t1077_0_0_0;
extern void* RuntimeInvoker_t1077_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29225_MI = 
{
	"get_Item", NULL, &t4995_TI, &t1077_0_0_0, RuntimeInvoker_t1077_t16, t4995_m29225_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1077_0_0_0;
static ParameterInfo t4995_m29226_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1077_0_0_0},
};
extern TypeInfo t4995_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t338 (MethodInfo* method, void* obj, void** args);
MethodInfo m29226_MI = 
{
	"set_Item", NULL, &t4995_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t338, t4995_m29226_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4995_MIs[] =
{
	&m29227_MI,
	&m29228_MI,
	&m29229_MI,
	&m29225_MI,
	&m29226_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4994_TI;
extern TypeInfo t4996_TI;
static TypeInfo* t4995_ITIs[] = 
{
	&t591_TI,
	&t4994_TI,
	&t4996_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4995_0_0_0;
extern Il2CppType t4995_1_0_0;
struct t4995;
extern TypeInfo t4995_TI;
extern Il2CppGenericClass t4995_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4995_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4995_MIs, t4995_PIs, NULL, NULL, NULL, NULL, NULL, &t4995_TI, t4995_ITIs, NULL, &t1400__CustomAttributeCache, &t4995_TI, &t4995_0_0_0, &t4995_1_0_0, NULL, &t4995_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3720_TI;

#include "t453.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DateTime>
extern MethodInfo m29230_MI;
static PropertyInfo t3720____Current_PropertyInfo = 
{
	&t3720_TI, "Current", &m29230_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3720_PIs[] =
{
	&t3720____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3720_TI;
extern Il2CppType t453_0_0_0;
extern void* RuntimeInvoker_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m29230_MI = 
{
	"get_Current", NULL, &t3720_TI, &t453_0_0_0, RuntimeInvoker_t453, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3720_MIs[] =
{
	&m29230_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3720_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3720_0_0_0;
extern Il2CppType t3720_1_0_0;
struct t3720;
extern TypeInfo t3720_TI;
extern Il2CppGenericClass t3720_GC;
TypeInfo t3720_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3720_MIs, t3720_PIs, NULL, NULL, NULL, NULL, NULL, &t3720_TI, t3720_ITIs, NULL, &EmptyCustomAttributesCache, &t3720_TI, &t3720_0_0_0, &t3720_1_0_0, NULL, &t3720_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2832.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2832_TI;
#include "t2832MD.h"

extern TypeInfo t2832_TI;
extern TypeInfo t453_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16378_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22329_MI;
struct t14;
 t453  m22329 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22329_MI;


extern MethodInfo m16374_MI;
 void m16374 (t2832 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16375_MI;
 t4 * m16375 (t2832 * __this, MethodInfo* method){
	{
		t453  L_0 = m16378(__this, &m16378_MI);
		t453  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t453_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16376_MI;
 void m16376 (t2832 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16377_MI;
 bool m16377 (t2832 * __this, MethodInfo* method){
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
		t14 * L_1 = (__this->f0);
		int32_t L_2 = m3690(L_1, &m3690_MI);
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
extern MethodInfo m16378_MI;
 t453  m16378 (t2832 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral370, &m6887_MI);
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
		t1269 * L_3 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_3, (t8*) &_stringLiteral371, &m6887_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t14 * L_4 = (__this->f0);
		t14 * L_5 = (__this->f0);
		int32_t L_6 = m3690(L_5, &m3690_MI);
		int32_t L_7 = (__this->f1);
		t453  L_8 = m22329(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22329_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTime>
extern Il2CppType t14_0_0_1;
FieldInfo t2832_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2832_TI, offsetof(t2832, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2832_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2832_TI, offsetof(t2832, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2832_FIs[] =
{
	&t2832_f0_FieldInfo,
	&t2832_f1_FieldInfo,
	NULL
};
extern MethodInfo m16375_MI;
static PropertyInfo t2832____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2832_TI, "System.Collections.IEnumerator.Current", &m16375_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16378_MI;
static PropertyInfo t2832____Current_PropertyInfo = 
{
	&t2832_TI, "Current", &m16378_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2832_PIs[] =
{
	&t2832____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2832____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2832_m16374_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2832_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16374_MI = 
{
	".ctor", (methodPointerType)&m16374, &t2832_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2832_m16374_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2832_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16375_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16375, &t2832_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2832_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16376_MI = 
{
	"Dispose", (methodPointerType)&m16376, &t2832_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2832_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16377_MI = 
{
	"MoveNext", (methodPointerType)&m16377, &t2832_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2832_TI;
extern Il2CppType t453_0_0_0;
extern void* RuntimeInvoker_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m16378_MI = 
{
	"get_Current", (methodPointerType)&m16378, &t2832_TI, &t453_0_0_0, RuntimeInvoker_t453, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2832_MIs[] =
{
	&m16374_MI,
	&m16375_MI,
	&m16376_MI,
	&m16377_MI,
	&m16378_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16375_MI;
extern MethodInfo m16377_MI;
extern MethodInfo m16376_MI;
extern MethodInfo m16378_MI;
static MethodInfo* t2832_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16375_MI,
	&m16377_MI,
	&m16376_MI,
	&m16378_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3720_TI;
static TypeInfo* t2832_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3720_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3720_TI;
static Il2CppInterfaceOffsetPair t2832_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3720_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2832_0_0_0;
extern Il2CppType t2832_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2832_TI;
extern Il2CppGenericClass t2832_GC;
extern TypeInfo t14_TI;
TypeInfo t2832_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2832_MIs, t2832_PIs, t2832_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2832_TI, t2832_ITIs, t2832_VT, &EmptyCustomAttributesCache, &t2832_TI, &t2832_0_0_0, &t2832_1_0_0, t2832_IOs, &t2832_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2832)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4997_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTime>
extern MethodInfo m29231_MI;
static PropertyInfo t4997____Count_PropertyInfo = 
{
	&t4997_TI, "Count", &m29231_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29232_MI;
static PropertyInfo t4997____IsReadOnly_PropertyInfo = 
{
	&t4997_TI, "IsReadOnly", &m29232_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4997_PIs[] =
{
	&t4997____Count_PropertyInfo,
	&t4997____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4997_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29231_MI = 
{
	"get_Count", NULL, &t4997_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4997_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29232_MI = 
{
	"get_IsReadOnly", NULL, &t4997_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t453_0_0_0;
static ParameterInfo t4997_m29233_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t4997_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m29233_MI = 
{
	"Add", NULL, &t4997_TI, &t15_0_0_0, RuntimeInvoker_t15_t453, t4997_m29233_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4997_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29234_MI = 
{
	"Clear", NULL, &t4997_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t453_0_0_0;
static ParameterInfo t4997_m29235_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t4997_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m29235_MI = 
{
	"Contains", NULL, &t4997_TI, &t17_0_0_0, RuntimeInvoker_t17_t453, t4997_m29235_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1528_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4997_m29236_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1528_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4997_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29236_MI = 
{
	"CopyTo", NULL, &t4997_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4997_m29236_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t453_0_0_0;
static ParameterInfo t4997_m29237_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t4997_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m29237_MI = 
{
	"Remove", NULL, &t4997_TI, &t17_0_0_0, RuntimeInvoker_t17_t453, t4997_m29237_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4997_MIs[] =
{
	&m29231_MI,
	&m29232_MI,
	&m29233_MI,
	&m29234_MI,
	&m29235_MI,
	&m29236_MI,
	&m29237_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4999_TI;
static TypeInfo* t4997_ITIs[] = 
{
	&t591_TI,
	&t4999_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4997_0_0_0;
extern Il2CppType t4997_1_0_0;
struct t4997;
extern TypeInfo t4997_TI;
extern Il2CppGenericClass t4997_GC;
TypeInfo t4997_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4997_MIs, t4997_PIs, NULL, NULL, NULL, NULL, NULL, &t4997_TI, t4997_ITIs, NULL, &EmptyCustomAttributesCache, &t4997_TI, &t4997_0_0_0, &t4997_1_0_0, NULL, &t4997_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4999_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTime>
extern TypeInfo t4999_TI;
extern Il2CppType t3720_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29238_MI = 
{
	"GetEnumerator", NULL, &t4999_TI, &t3720_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4999_MIs[] =
{
	&m29238_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4999_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4999_0_0_0;
extern Il2CppType t4999_1_0_0;
struct t4999;
extern TypeInfo t4999_TI;
extern Il2CppGenericClass t4999_GC;
TypeInfo t4999_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4999_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4999_TI, t4999_ITIs, NULL, &EmptyCustomAttributesCache, &t4999_TI, &t4999_0_0_0, &t4999_1_0_0, NULL, &t4999_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4998_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.DateTime>
extern MethodInfo m29239_MI;
extern MethodInfo m29240_MI;
static PropertyInfo t4998____Item_PropertyInfo = 
{
	&t4998_TI, "Item", &m29239_MI, &m29240_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4998_PIs[] =
{
	&t4998____Item_PropertyInfo,
	NULL
};
extern Il2CppType t453_0_0_0;
static ParameterInfo t4998_m29241_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t4998_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m29241_MI = 
{
	"IndexOf", NULL, &t4998_TI, &t16_0_0_0, RuntimeInvoker_t16_t453, t4998_m29241_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t453_0_0_0;
static ParameterInfo t4998_m29242_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t4998_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m29242_MI = 
{
	"Insert", NULL, &t4998_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t453, t4998_m29242_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4998_m29243_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4998_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29243_MI = 
{
	"RemoveAt", NULL, &t4998_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4998_m29243_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4998_m29239_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4998_TI;
extern Il2CppType t453_0_0_0;
extern void* RuntimeInvoker_t453_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29239_MI = 
{
	"get_Item", NULL, &t4998_TI, &t453_0_0_0, RuntimeInvoker_t453_t16, t4998_m29239_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t453_0_0_0;
static ParameterInfo t4998_m29240_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t4998_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m29240_MI = 
{
	"set_Item", NULL, &t4998_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t453, t4998_m29240_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4998_MIs[] =
{
	&m29241_MI,
	&m29242_MI,
	&m29243_MI,
	&m29239_MI,
	&m29240_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4997_TI;
extern TypeInfo t4999_TI;
static TypeInfo* t4998_ITIs[] = 
{
	&t591_TI,
	&t4997_TI,
	&t4999_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4998_0_0_0;
extern Il2CppType t4998_1_0_0;
struct t4998;
extern TypeInfo t4998_TI;
extern Il2CppGenericClass t4998_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4998_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4998_MIs, t4998_PIs, NULL, NULL, NULL, NULL, NULL, &t4998_TI, t4998_ITIs, NULL, &t1400__CustomAttributeCache, &t4998_TI, &t4998_0_0_0, &t4998_1_0_0, NULL, &t4998_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5000_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>
extern MethodInfo m29244_MI;
static PropertyInfo t5000____Count_PropertyInfo = 
{
	&t5000_TI, "Count", &m29244_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29245_MI;
static PropertyInfo t5000____IsReadOnly_PropertyInfo = 
{
	&t5000_TI, "IsReadOnly", &m29245_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5000_PIs[] =
{
	&t5000____Count_PropertyInfo,
	&t5000____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5000_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29244_MI = 
{
	"get_Count", NULL, &t5000_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5000_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29245_MI = 
{
	"get_IsReadOnly", NULL, &t5000_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1550_0_0_0;
static ParameterInfo t5000_m29246_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1550_0_0_0},
};
extern TypeInfo t5000_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29246_MI = 
{
	"Add", NULL, &t5000_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t5000_m29246_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5000_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29247_MI = 
{
	"Clear", NULL, &t5000_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1550_0_0_0;
static ParameterInfo t5000_m29248_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1550_0_0_0},
};
extern TypeInfo t5000_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29248_MI = 
{
	"Contains", NULL, &t5000_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5000_m29248_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3065_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5000_m29249_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3065_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5000_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29249_MI = 
{
	"CopyTo", NULL, &t5000_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5000_m29249_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1550_0_0_0;
static ParameterInfo t5000_m29250_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1550_0_0_0},
};
extern TypeInfo t5000_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29250_MI = 
{
	"Remove", NULL, &t5000_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5000_m29250_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5000_MIs[] =
{
	&m29244_MI,
	&m29245_MI,
	&m29246_MI,
	&m29247_MI,
	&m29248_MI,
	&m29249_MI,
	&m29250_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5002_TI;
static TypeInfo* t5000_ITIs[] = 
{
	&t591_TI,
	&t5002_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5000_0_0_0;
extern Il2CppType t5000_1_0_0;
struct t5000;
extern TypeInfo t5000_TI;
extern Il2CppGenericClass t5000_GC;
TypeInfo t5000_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5000_MIs, t5000_PIs, NULL, NULL, NULL, NULL, NULL, &t5000_TI, t5000_ITIs, NULL, &EmptyCustomAttributesCache, &t5000_TI, &t5000_0_0_0, &t5000_1_0_0, NULL, &t5000_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5002_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.DateTime>>
extern TypeInfo t5002_TI;
extern Il2CppType t3721_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29251_MI = 
{
	"GetEnumerator", NULL, &t5002_TI, &t3721_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5002_MIs[] =
{
	&m29251_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5002_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5002_0_0_0;
extern Il2CppType t5002_1_0_0;
struct t5002;
extern TypeInfo t5002_TI;
extern Il2CppGenericClass t5002_GC;
TypeInfo t5002_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5002_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5002_TI, t5002_ITIs, NULL, &EmptyCustomAttributesCache, &t5002_TI, &t5002_0_0_0, &t5002_1_0_0, NULL, &t5002_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3721_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.DateTime>>
extern MethodInfo m29252_MI;
static PropertyInfo t3721____Current_PropertyInfo = 
{
	&t3721_TI, "Current", &m29252_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3721_PIs[] =
{
	&t3721____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3721_TI;
extern Il2CppType t1550_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29252_MI = 
{
	"get_Current", NULL, &t3721_TI, &t1550_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3721_MIs[] =
{
	&m29252_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3721_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3721_0_0_0;
extern Il2CppType t3721_1_0_0;
struct t3721;
extern TypeInfo t3721_TI;
extern Il2CppGenericClass t3721_GC;
TypeInfo t3721_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3721_MIs, t3721_PIs, NULL, NULL, NULL, NULL, NULL, &t3721_TI, t3721_ITIs, NULL, &EmptyCustomAttributesCache, &t3721_TI, &t3721_0_0_0, &t3721_1_0_0, NULL, &t3721_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1550_TI;



// Metadata Definition System.IComparable`1<System.DateTime>
extern Il2CppType t453_0_0_0;
static ParameterInfo t1550_m29253_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t1550_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m29253_MI = 
{
	"CompareTo", NULL, &t1550_TI, &t16_0_0_0, RuntimeInvoker_t16_t453, t1550_m29253_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1550_MIs[] =
{
	&m29253_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1550_0_0_0;
extern Il2CppType t1550_1_0_0;
struct t1550;
extern TypeInfo t1550_TI;
extern Il2CppGenericClass t1550_GC;
TypeInfo t1550_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1550_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1550_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1550_TI, &t1550_0_0_0, &t1550_1_0_0, NULL, &t1550_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2833.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2833_TI;
#include "t2833MD.h"

extern TypeInfo t2833_TI;
extern TypeInfo t1550_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16383_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22340_MI;
struct t14;
struct t14;
 t4 * m16794_gshared (t14 * __this, int32_t p0, MethodInfo* method);
#define m16794(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
#define m22340(__this, p0, method) (t4*)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22340_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>
extern Il2CppType t14_0_0_1;
FieldInfo t2833_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2833_TI, offsetof(t2833, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2833_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2833_TI, offsetof(t2833, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2833_FIs[] =
{
	&t2833_f0_FieldInfo,
	&t2833_f1_FieldInfo,
	NULL
};
extern MethodInfo m16380_MI;
static PropertyInfo t2833____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2833_TI, "System.Collections.IEnumerator.Current", &m16380_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16383_MI;
static PropertyInfo t2833____Current_PropertyInfo = 
{
	&t2833_TI, "Current", &m16383_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2833_PIs[] =
{
	&t2833____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2833____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2833_m16379_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2833_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16379_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2833_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2833_m16379_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2833_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16380_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2833_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2833_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16381_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2833_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2833_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16382_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2833_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2833_TI;
extern Il2CppType t1550_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16383_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2833_TI, &t1550_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2833_MIs[] =
{
	&m16379_MI,
	&m16380_MI,
	&m16381_MI,
	&m16382_MI,
	&m16383_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16380_MI;
extern MethodInfo m16382_MI;
extern MethodInfo m16381_MI;
extern MethodInfo m16383_MI;
static MethodInfo* t2833_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16380_MI,
	&m16382_MI,
	&m16381_MI,
	&m16383_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3721_TI;
static TypeInfo* t2833_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3721_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3721_TI;
static Il2CppInterfaceOffsetPair t2833_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3721_TI, 7},
};
extern MethodInfo m16383_MI;
extern TypeInfo t1550_TI;
extern MethodInfo m22340_MI;
static void* t2833_RGCTXData[3] = 
{
	&m16383_MI,
	&t1550_TI,
	&m22340_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2833_0_0_0;
extern Il2CppType t2833_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2833_TI;
extern Il2CppGenericClass t2833_GC;
extern TypeInfo t14_TI;
TypeInfo t2833_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2833_MIs, t2833_PIs, t2833_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2833_TI, t2833_ITIs, t2833_VT, &EmptyCustomAttributesCache, &t2833_TI, &t2833_0_0_0, &t2833_1_0_0, t2833_IOs, &t2833_GC, NULL, NULL, NULL, t2833_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2833)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5001_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>
extern MethodInfo m29254_MI;
extern MethodInfo m29255_MI;
static PropertyInfo t5001____Item_PropertyInfo = 
{
	&t5001_TI, "Item", &m29254_MI, &m29255_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5001_PIs[] =
{
	&t5001____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1550_0_0_0;
static ParameterInfo t5001_m29256_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1550_0_0_0},
};
extern TypeInfo t5001_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29256_MI = 
{
	"IndexOf", NULL, &t5001_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5001_m29256_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1550_0_0_0;
static ParameterInfo t5001_m29257_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1550_0_0_0},
};
extern TypeInfo t5001_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29257_MI = 
{
	"Insert", NULL, &t5001_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5001_m29257_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5001_m29258_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5001_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29258_MI = 
{
	"RemoveAt", NULL, &t5001_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5001_m29258_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5001_m29254_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5001_TI;
extern Il2CppType t1550_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29254_MI = 
{
	"get_Item", NULL, &t5001_TI, &t1550_0_0_0, RuntimeInvoker_t4_t16, t5001_m29254_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1550_0_0_0;
static ParameterInfo t5001_m29255_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1550_0_0_0},
};
extern TypeInfo t5001_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29255_MI = 
{
	"set_Item", NULL, &t5001_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5001_m29255_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5001_MIs[] =
{
	&m29256_MI,
	&m29257_MI,
	&m29258_MI,
	&m29254_MI,
	&m29255_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5000_TI;
extern TypeInfo t5002_TI;
static TypeInfo* t5001_ITIs[] = 
{
	&t591_TI,
	&t5000_TI,
	&t5002_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5001_0_0_0;
extern Il2CppType t5001_1_0_0;
struct t5001;
extern TypeInfo t5001_TI;
extern Il2CppGenericClass t5001_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5001_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5001_MIs, t5001_PIs, NULL, NULL, NULL, NULL, NULL, &t5001_TI, t5001_ITIs, NULL, &t1400__CustomAttributeCache, &t5001_TI, &t5001_0_0_0, &t5001_1_0_0, NULL, &t5001_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5003_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>
extern MethodInfo m29259_MI;
static PropertyInfo t5003____Count_PropertyInfo = 
{
	&t5003_TI, "Count", &m29259_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29260_MI;
static PropertyInfo t5003____IsReadOnly_PropertyInfo = 
{
	&t5003_TI, "IsReadOnly", &m29260_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5003_PIs[] =
{
	&t5003____Count_PropertyInfo,
	&t5003____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5003_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29259_MI = 
{
	"get_Count", NULL, &t5003_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5003_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29260_MI = 
{
	"get_IsReadOnly", NULL, &t5003_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1551_0_0_0;
static ParameterInfo t5003_m29261_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1551_0_0_0},
};
extern TypeInfo t5003_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29261_MI = 
{
	"Add", NULL, &t5003_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t5003_m29261_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5003_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29262_MI = 
{
	"Clear", NULL, &t5003_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1551_0_0_0;
static ParameterInfo t5003_m29263_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1551_0_0_0},
};
extern TypeInfo t5003_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29263_MI = 
{
	"Contains", NULL, &t5003_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5003_m29263_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3066_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5003_m29264_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3066_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5003_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29264_MI = 
{
	"CopyTo", NULL, &t5003_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5003_m29264_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1551_0_0_0;
static ParameterInfo t5003_m29265_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1551_0_0_0},
};
extern TypeInfo t5003_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29265_MI = 
{
	"Remove", NULL, &t5003_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5003_m29265_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5003_MIs[] =
{
	&m29259_MI,
	&m29260_MI,
	&m29261_MI,
	&m29262_MI,
	&m29263_MI,
	&m29264_MI,
	&m29265_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5005_TI;
static TypeInfo* t5003_ITIs[] = 
{
	&t591_TI,
	&t5005_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5003_0_0_0;
extern Il2CppType t5003_1_0_0;
struct t5003;
extern TypeInfo t5003_TI;
extern Il2CppGenericClass t5003_GC;
TypeInfo t5003_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5003_MIs, t5003_PIs, NULL, NULL, NULL, NULL, NULL, &t5003_TI, t5003_ITIs, NULL, &EmptyCustomAttributesCache, &t5003_TI, &t5003_0_0_0, &t5003_1_0_0, NULL, &t5003_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5005_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.DateTime>>
extern TypeInfo t5005_TI;
extern Il2CppType t3722_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29266_MI = 
{
	"GetEnumerator", NULL, &t5005_TI, &t3722_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5005_MIs[] =
{
	&m29266_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5005_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5005_0_0_0;
extern Il2CppType t5005_1_0_0;
struct t5005;
extern TypeInfo t5005_TI;
extern Il2CppGenericClass t5005_GC;
TypeInfo t5005_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5005_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5005_TI, t5005_ITIs, NULL, &EmptyCustomAttributesCache, &t5005_TI, &t5005_0_0_0, &t5005_1_0_0, NULL, &t5005_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3722_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.DateTime>>
extern MethodInfo m29267_MI;
static PropertyInfo t3722____Current_PropertyInfo = 
{
	&t3722_TI, "Current", &m29267_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3722_PIs[] =
{
	&t3722____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3722_TI;
extern Il2CppType t1551_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29267_MI = 
{
	"get_Current", NULL, &t3722_TI, &t1551_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3722_MIs[] =
{
	&m29267_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3722_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3722_0_0_0;
extern Il2CppType t3722_1_0_0;
struct t3722;
extern TypeInfo t3722_TI;
extern Il2CppGenericClass t3722_GC;
TypeInfo t3722_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3722_MIs, t3722_PIs, NULL, NULL, NULL, NULL, NULL, &t3722_TI, t3722_ITIs, NULL, &EmptyCustomAttributesCache, &t3722_TI, &t3722_0_0_0, &t3722_1_0_0, NULL, &t3722_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1551_TI;



// Metadata Definition System.IEquatable`1<System.DateTime>
extern Il2CppType t453_0_0_0;
static ParameterInfo t1551_m29268_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t1551_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m29268_MI = 
{
	"Equals", NULL, &t1551_TI, &t17_0_0_0, RuntimeInvoker_t17_t453, t1551_m29268_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1551_MIs[] =
{
	&m29268_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1551_0_0_0;
extern Il2CppType t1551_1_0_0;
struct t1551;
extern TypeInfo t1551_TI;
extern Il2CppGenericClass t1551_GC;
TypeInfo t1551_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1551_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1551_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1551_TI, &t1551_0_0_0, &t1551_1_0_0, NULL, &t1551_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2834.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2834_TI;
#include "t2834MD.h"

extern TypeInfo t2834_TI;
extern TypeInfo t1551_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16388_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22351_MI;
struct t14;
#define m22351(__this, p0, method) (t4*)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22351_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>
extern Il2CppType t14_0_0_1;
FieldInfo t2834_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2834_TI, offsetof(t2834, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2834_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2834_TI, offsetof(t2834, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2834_FIs[] =
{
	&t2834_f0_FieldInfo,
	&t2834_f1_FieldInfo,
	NULL
};
extern MethodInfo m16385_MI;
static PropertyInfo t2834____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2834_TI, "System.Collections.IEnumerator.Current", &m16385_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16388_MI;
static PropertyInfo t2834____Current_PropertyInfo = 
{
	&t2834_TI, "Current", &m16388_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2834_PIs[] =
{
	&t2834____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2834____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2834_m16384_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2834_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16384_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2834_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2834_m16384_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2834_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16385_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2834_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2834_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16386_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2834_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2834_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16387_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2834_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2834_TI;
extern Il2CppType t1551_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16388_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2834_TI, &t1551_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2834_MIs[] =
{
	&m16384_MI,
	&m16385_MI,
	&m16386_MI,
	&m16387_MI,
	&m16388_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16385_MI;
extern MethodInfo m16387_MI;
extern MethodInfo m16386_MI;
extern MethodInfo m16388_MI;
static MethodInfo* t2834_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16385_MI,
	&m16387_MI,
	&m16386_MI,
	&m16388_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3722_TI;
static TypeInfo* t2834_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3722_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3722_TI;
static Il2CppInterfaceOffsetPair t2834_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3722_TI, 7},
};
extern MethodInfo m16388_MI;
extern TypeInfo t1551_TI;
extern MethodInfo m22351_MI;
static void* t2834_RGCTXData[3] = 
{
	&m16388_MI,
	&t1551_TI,
	&m22351_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2834_0_0_0;
extern Il2CppType t2834_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2834_TI;
extern Il2CppGenericClass t2834_GC;
extern TypeInfo t14_TI;
TypeInfo t2834_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2834_MIs, t2834_PIs, t2834_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2834_TI, t2834_ITIs, t2834_VT, &EmptyCustomAttributesCache, &t2834_TI, &t2834_0_0_0, &t2834_1_0_0, t2834_IOs, &t2834_GC, NULL, NULL, NULL, t2834_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2834)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5004_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>
extern MethodInfo m29269_MI;
extern MethodInfo m29270_MI;
static PropertyInfo t5004____Item_PropertyInfo = 
{
	&t5004_TI, "Item", &m29269_MI, &m29270_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5004_PIs[] =
{
	&t5004____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1551_0_0_0;
static ParameterInfo t5004_m29271_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1551_0_0_0},
};
extern TypeInfo t5004_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29271_MI = 
{
	"IndexOf", NULL, &t5004_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5004_m29271_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1551_0_0_0;
static ParameterInfo t5004_m29272_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1551_0_0_0},
};
extern TypeInfo t5004_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29272_MI = 
{
	"Insert", NULL, &t5004_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5004_m29272_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5004_m29273_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5004_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29273_MI = 
{
	"RemoveAt", NULL, &t5004_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5004_m29273_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5004_m29269_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5004_TI;
extern Il2CppType t1551_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29269_MI = 
{
	"get_Item", NULL, &t5004_TI, &t1551_0_0_0, RuntimeInvoker_t4_t16, t5004_m29269_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1551_0_0_0;
static ParameterInfo t5004_m29270_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1551_0_0_0},
};
extern TypeInfo t5004_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29270_MI = 
{
	"set_Item", NULL, &t5004_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5004_m29270_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5004_MIs[] =
{
	&m29271_MI,
	&m29272_MI,
	&m29273_MI,
	&m29269_MI,
	&m29270_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5003_TI;
extern TypeInfo t5005_TI;
static TypeInfo* t5004_ITIs[] = 
{
	&t591_TI,
	&t5003_TI,
	&t5005_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5004_0_0_0;
extern Il2CppType t5004_1_0_0;
struct t5004;
extern TypeInfo t5004_TI;
extern Il2CppGenericClass t5004_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5004_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5004_MIs, t5004_PIs, NULL, NULL, NULL, NULL, NULL, &t5004_TI, t5004_ITIs, NULL, &t1400__CustomAttributeCache, &t5004_TI, &t5004_0_0_0, &t5004_1_0_0, NULL, &t5004_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3723_TI;

#include "t694.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Decimal>
extern MethodInfo m29274_MI;
static PropertyInfo t3723____Current_PropertyInfo = 
{
	&t3723_TI, "Current", &m29274_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3723_PIs[] =
{
	&t3723____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3723_TI;
extern Il2CppType t694_0_0_0;
extern void* RuntimeInvoker_t694 (MethodInfo* method, void* obj, void** args);
MethodInfo m29274_MI = 
{
	"get_Current", NULL, &t3723_TI, &t694_0_0_0, RuntimeInvoker_t694, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3723_MIs[] =
{
	&m29274_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3723_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3723_0_0_0;
extern Il2CppType t3723_1_0_0;
struct t3723;
extern TypeInfo t3723_TI;
extern Il2CppGenericClass t3723_GC;
TypeInfo t3723_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3723_MIs, t3723_PIs, NULL, NULL, NULL, NULL, NULL, &t3723_TI, t3723_ITIs, NULL, &EmptyCustomAttributesCache, &t3723_TI, &t3723_0_0_0, &t3723_1_0_0, NULL, &t3723_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2835.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2835_TI;
#include "t2835MD.h"

extern TypeInfo t2835_TI;
extern TypeInfo t694_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16393_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22362_MI;
struct t14;
 t694  m22362 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22362_MI;


extern MethodInfo m16389_MI;
 void m16389 (t2835 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16390_MI;
 t4 * m16390 (t2835 * __this, MethodInfo* method){
	{
		t694  L_0 = m16393(__this, &m16393_MI);
		t694  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t694_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16391_MI;
 void m16391 (t2835 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16392_MI;
 bool m16392 (t2835 * __this, MethodInfo* method){
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
		t14 * L_1 = (__this->f0);
		int32_t L_2 = m3690(L_1, &m3690_MI);
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
extern MethodInfo m16393_MI;
 t694  m16393 (t2835 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral370, &m6887_MI);
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
		t1269 * L_3 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_3, (t8*) &_stringLiteral371, &m6887_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t14 * L_4 = (__this->f0);
		t14 * L_5 = (__this->f0);
		int32_t L_6 = m3690(L_5, &m3690_MI);
		int32_t L_7 = (__this->f1);
		t694  L_8 = m22362(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22362_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Decimal>
extern Il2CppType t14_0_0_1;
FieldInfo t2835_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2835_TI, offsetof(t2835, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2835_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2835_TI, offsetof(t2835, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2835_FIs[] =
{
	&t2835_f0_FieldInfo,
	&t2835_f1_FieldInfo,
	NULL
};
extern MethodInfo m16390_MI;
static PropertyInfo t2835____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2835_TI, "System.Collections.IEnumerator.Current", &m16390_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16393_MI;
static PropertyInfo t2835____Current_PropertyInfo = 
{
	&t2835_TI, "Current", &m16393_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2835_PIs[] =
{
	&t2835____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2835____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2835_m16389_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2835_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16389_MI = 
{
	".ctor", (methodPointerType)&m16389, &t2835_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2835_m16389_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2835_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16390_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16390, &t2835_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2835_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16391_MI = 
{
	"Dispose", (methodPointerType)&m16391, &t2835_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2835_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16392_MI = 
{
	"MoveNext", (methodPointerType)&m16392, &t2835_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2835_TI;
extern Il2CppType t694_0_0_0;
extern void* RuntimeInvoker_t694 (MethodInfo* method, void* obj, void** args);
MethodInfo m16393_MI = 
{
	"get_Current", (methodPointerType)&m16393, &t2835_TI, &t694_0_0_0, RuntimeInvoker_t694, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2835_MIs[] =
{
	&m16389_MI,
	&m16390_MI,
	&m16391_MI,
	&m16392_MI,
	&m16393_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16390_MI;
extern MethodInfo m16392_MI;
extern MethodInfo m16391_MI;
extern MethodInfo m16393_MI;
static MethodInfo* t2835_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16390_MI,
	&m16392_MI,
	&m16391_MI,
	&m16393_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3723_TI;
static TypeInfo* t2835_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3723_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3723_TI;
static Il2CppInterfaceOffsetPair t2835_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3723_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2835_0_0_0;
extern Il2CppType t2835_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2835_TI;
extern Il2CppGenericClass t2835_GC;
extern TypeInfo t14_TI;
TypeInfo t2835_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2835_MIs, t2835_PIs, t2835_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2835_TI, t2835_ITIs, t2835_VT, &EmptyCustomAttributesCache, &t2835_TI, &t2835_0_0_0, &t2835_1_0_0, t2835_IOs, &t2835_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2835)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5006_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Decimal>
extern MethodInfo m29275_MI;
static PropertyInfo t5006____Count_PropertyInfo = 
{
	&t5006_TI, "Count", &m29275_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29276_MI;
static PropertyInfo t5006____IsReadOnly_PropertyInfo = 
{
	&t5006_TI, "IsReadOnly", &m29276_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5006_PIs[] =
{
	&t5006____Count_PropertyInfo,
	&t5006____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5006_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29275_MI = 
{
	"get_Count", NULL, &t5006_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5006_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29276_MI = 
{
	"get_IsReadOnly", NULL, &t5006_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t694_0_0_0;
static ParameterInfo t5006_m29277_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern TypeInfo t5006_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t694 (MethodInfo* method, void* obj, void** args);
MethodInfo m29277_MI = 
{
	"Add", NULL, &t5006_TI, &t15_0_0_0, RuntimeInvoker_t15_t694, t5006_m29277_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5006_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29278_MI = 
{
	"Clear", NULL, &t5006_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t694_0_0_0;
static ParameterInfo t5006_m29279_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern TypeInfo t5006_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t694 (MethodInfo* method, void* obj, void** args);
MethodInfo m29279_MI = 
{
	"Contains", NULL, &t5006_TI, &t17_0_0_0, RuntimeInvoker_t17_t694, t5006_m29279_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1529_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5006_m29280_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1529_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5006_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29280_MI = 
{
	"CopyTo", NULL, &t5006_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5006_m29280_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t694_0_0_0;
static ParameterInfo t5006_m29281_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern TypeInfo t5006_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t694 (MethodInfo* method, void* obj, void** args);
MethodInfo m29281_MI = 
{
	"Remove", NULL, &t5006_TI, &t17_0_0_0, RuntimeInvoker_t17_t694, t5006_m29281_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5006_MIs[] =
{
	&m29275_MI,
	&m29276_MI,
	&m29277_MI,
	&m29278_MI,
	&m29279_MI,
	&m29280_MI,
	&m29281_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5008_TI;
static TypeInfo* t5006_ITIs[] = 
{
	&t591_TI,
	&t5008_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5006_0_0_0;
extern Il2CppType t5006_1_0_0;
struct t5006;
extern TypeInfo t5006_TI;
extern Il2CppGenericClass t5006_GC;
TypeInfo t5006_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5006_MIs, t5006_PIs, NULL, NULL, NULL, NULL, NULL, &t5006_TI, t5006_ITIs, NULL, &EmptyCustomAttributesCache, &t5006_TI, &t5006_0_0_0, &t5006_1_0_0, NULL, &t5006_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5008_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Decimal>
extern TypeInfo t5008_TI;
extern Il2CppType t3723_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29282_MI = 
{
	"GetEnumerator", NULL, &t5008_TI, &t3723_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5008_MIs[] =
{
	&m29282_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5008_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5008_0_0_0;
extern Il2CppType t5008_1_0_0;
struct t5008;
extern TypeInfo t5008_TI;
extern Il2CppGenericClass t5008_GC;
TypeInfo t5008_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5008_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5008_TI, t5008_ITIs, NULL, &EmptyCustomAttributesCache, &t5008_TI, &t5008_0_0_0, &t5008_1_0_0, NULL, &t5008_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5007_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Decimal>
extern MethodInfo m29283_MI;
extern MethodInfo m29284_MI;
static PropertyInfo t5007____Item_PropertyInfo = 
{
	&t5007_TI, "Item", &m29283_MI, &m29284_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5007_PIs[] =
{
	&t5007____Item_PropertyInfo,
	NULL
};
extern Il2CppType t694_0_0_0;
static ParameterInfo t5007_m29285_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern TypeInfo t5007_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t694 (MethodInfo* method, void* obj, void** args);
MethodInfo m29285_MI = 
{
	"IndexOf", NULL, &t5007_TI, &t16_0_0_0, RuntimeInvoker_t16_t694, t5007_m29285_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t5007_m29286_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern TypeInfo t5007_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t694 (MethodInfo* method, void* obj, void** args);
MethodInfo m29286_MI = 
{
	"Insert", NULL, &t5007_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t694, t5007_m29286_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5007_m29287_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5007_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29287_MI = 
{
	"RemoveAt", NULL, &t5007_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5007_m29287_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5007_m29283_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5007_TI;
extern Il2CppType t694_0_0_0;
extern void* RuntimeInvoker_t694_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29283_MI = 
{
	"get_Item", NULL, &t5007_TI, &t694_0_0_0, RuntimeInvoker_t694_t16, t5007_m29283_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t5007_m29284_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern TypeInfo t5007_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t694 (MethodInfo* method, void* obj, void** args);
MethodInfo m29284_MI = 
{
	"set_Item", NULL, &t5007_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t694, t5007_m29284_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5007_MIs[] =
{
	&m29285_MI,
	&m29286_MI,
	&m29287_MI,
	&m29283_MI,
	&m29284_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5006_TI;
extern TypeInfo t5008_TI;
static TypeInfo* t5007_ITIs[] = 
{
	&t591_TI,
	&t5006_TI,
	&t5008_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5007_0_0_0;
extern Il2CppType t5007_1_0_0;
struct t5007;
extern TypeInfo t5007_TI;
extern Il2CppGenericClass t5007_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5007_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5007_MIs, t5007_PIs, NULL, NULL, NULL, NULL, NULL, &t5007_TI, t5007_ITIs, NULL, &t1400__CustomAttributeCache, &t5007_TI, &t5007_0_0_0, &t5007_1_0_0, NULL, &t5007_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5009_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>
extern MethodInfo m29288_MI;
static PropertyInfo t5009____Count_PropertyInfo = 
{
	&t5009_TI, "Count", &m29288_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29289_MI;
static PropertyInfo t5009____IsReadOnly_PropertyInfo = 
{
	&t5009_TI, "IsReadOnly", &m29289_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5009_PIs[] =
{
	&t5009____Count_PropertyInfo,
	&t5009____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5009_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29288_MI = 
{
	"get_Count", NULL, &t5009_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5009_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29289_MI = 
{
	"get_IsReadOnly", NULL, &t5009_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1376_0_0_0;
static ParameterInfo t5009_m29290_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1376_0_0_0},
};
extern TypeInfo t5009_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29290_MI = 
{
	"Add", NULL, &t5009_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t5009_m29290_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5009_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29291_MI = 
{
	"Clear", NULL, &t5009_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1376_0_0_0;
static ParameterInfo t5009_m29292_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1376_0_0_0},
};
extern TypeInfo t5009_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29292_MI = 
{
	"Contains", NULL, &t5009_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5009_m29292_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3067_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5009_m29293_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3067_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5009_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29293_MI = 
{
	"CopyTo", NULL, &t5009_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5009_m29293_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1376_0_0_0;
static ParameterInfo t5009_m29294_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1376_0_0_0},
};
extern TypeInfo t5009_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29294_MI = 
{
	"Remove", NULL, &t5009_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5009_m29294_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5009_MIs[] =
{
	&m29288_MI,
	&m29289_MI,
	&m29290_MI,
	&m29291_MI,
	&m29292_MI,
	&m29293_MI,
	&m29294_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5011_TI;
static TypeInfo* t5009_ITIs[] = 
{
	&t591_TI,
	&t5011_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5009_0_0_0;
extern Il2CppType t5009_1_0_0;
struct t5009;
extern TypeInfo t5009_TI;
extern Il2CppGenericClass t5009_GC;
TypeInfo t5009_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5009_MIs, t5009_PIs, NULL, NULL, NULL, NULL, NULL, &t5009_TI, t5009_ITIs, NULL, &EmptyCustomAttributesCache, &t5009_TI, &t5009_0_0_0, &t5009_1_0_0, NULL, &t5009_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5011_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Decimal>>
extern TypeInfo t5011_TI;
extern Il2CppType t3724_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29295_MI = 
{
	"GetEnumerator", NULL, &t5011_TI, &t3724_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5011_MIs[] =
{
	&m29295_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5011_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5011_0_0_0;
extern Il2CppType t5011_1_0_0;
struct t5011;
extern TypeInfo t5011_TI;
extern Il2CppGenericClass t5011_GC;
TypeInfo t5011_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5011_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5011_TI, t5011_ITIs, NULL, &EmptyCustomAttributesCache, &t5011_TI, &t5011_0_0_0, &t5011_1_0_0, NULL, &t5011_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3724_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Decimal>>
extern MethodInfo m29296_MI;
static PropertyInfo t3724____Current_PropertyInfo = 
{
	&t3724_TI, "Current", &m29296_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3724_PIs[] =
{
	&t3724____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3724_TI;
extern Il2CppType t1376_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29296_MI = 
{
	"get_Current", NULL, &t3724_TI, &t1376_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3724_MIs[] =
{
	&m29296_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3724_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3724_0_0_0;
extern Il2CppType t3724_1_0_0;
struct t3724;
extern TypeInfo t3724_TI;
extern Il2CppGenericClass t3724_GC;
TypeInfo t3724_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3724_MIs, t3724_PIs, NULL, NULL, NULL, NULL, NULL, &t3724_TI, t3724_ITIs, NULL, &EmptyCustomAttributesCache, &t3724_TI, &t3724_0_0_0, &t3724_1_0_0, NULL, &t3724_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2836.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2836_TI;
#include "t2836MD.h"

extern TypeInfo t2836_TI;
extern TypeInfo t1376_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16398_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22373_MI;
struct t14;
#define m22373(__this, p0, method) (t4*)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22373_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>
extern Il2CppType t14_0_0_1;
FieldInfo t2836_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2836_TI, offsetof(t2836, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2836_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2836_TI, offsetof(t2836, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2836_FIs[] =
{
	&t2836_f0_FieldInfo,
	&t2836_f1_FieldInfo,
	NULL
};
extern MethodInfo m16395_MI;
static PropertyInfo t2836____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2836_TI, "System.Collections.IEnumerator.Current", &m16395_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16398_MI;
static PropertyInfo t2836____Current_PropertyInfo = 
{
	&t2836_TI, "Current", &m16398_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2836_PIs[] =
{
	&t2836____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2836____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2836_m16394_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2836_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16394_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2836_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2836_m16394_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2836_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16395_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2836_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2836_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16396_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2836_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2836_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16397_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2836_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2836_TI;
extern Il2CppType t1376_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16398_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2836_TI, &t1376_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2836_MIs[] =
{
	&m16394_MI,
	&m16395_MI,
	&m16396_MI,
	&m16397_MI,
	&m16398_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16395_MI;
extern MethodInfo m16397_MI;
extern MethodInfo m16396_MI;
extern MethodInfo m16398_MI;
static MethodInfo* t2836_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16395_MI,
	&m16397_MI,
	&m16396_MI,
	&m16398_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3724_TI;
static TypeInfo* t2836_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3724_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3724_TI;
static Il2CppInterfaceOffsetPair t2836_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3724_TI, 7},
};
extern MethodInfo m16398_MI;
extern TypeInfo t1376_TI;
extern MethodInfo m22373_MI;
static void* t2836_RGCTXData[3] = 
{
	&m16398_MI,
	&t1376_TI,
	&m22373_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2836_0_0_0;
extern Il2CppType t2836_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2836_TI;
extern Il2CppGenericClass t2836_GC;
extern TypeInfo t14_TI;
TypeInfo t2836_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2836_MIs, t2836_PIs, t2836_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2836_TI, t2836_ITIs, t2836_VT, &EmptyCustomAttributesCache, &t2836_TI, &t2836_0_0_0, &t2836_1_0_0, t2836_IOs, &t2836_GC, NULL, NULL, NULL, t2836_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2836)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5010_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>
extern MethodInfo m29297_MI;
extern MethodInfo m29298_MI;
static PropertyInfo t5010____Item_PropertyInfo = 
{
	&t5010_TI, "Item", &m29297_MI, &m29298_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5010_PIs[] =
{
	&t5010____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1376_0_0_0;
static ParameterInfo t5010_m29299_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1376_0_0_0},
};
extern TypeInfo t5010_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29299_MI = 
{
	"IndexOf", NULL, &t5010_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5010_m29299_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1376_0_0_0;
static ParameterInfo t5010_m29300_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1376_0_0_0},
};
extern TypeInfo t5010_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29300_MI = 
{
	"Insert", NULL, &t5010_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5010_m29300_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5010_m29301_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5010_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29301_MI = 
{
	"RemoveAt", NULL, &t5010_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5010_m29301_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5010_m29297_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5010_TI;
extern Il2CppType t1376_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29297_MI = 
{
	"get_Item", NULL, &t5010_TI, &t1376_0_0_0, RuntimeInvoker_t4_t16, t5010_m29297_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1376_0_0_0;
static ParameterInfo t5010_m29298_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1376_0_0_0},
};
extern TypeInfo t5010_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29298_MI = 
{
	"set_Item", NULL, &t5010_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5010_m29298_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5010_MIs[] =
{
	&m29299_MI,
	&m29300_MI,
	&m29301_MI,
	&m29297_MI,
	&m29298_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5009_TI;
extern TypeInfo t5011_TI;
static TypeInfo* t5010_ITIs[] = 
{
	&t591_TI,
	&t5009_TI,
	&t5011_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5010_0_0_0;
extern Il2CppType t5010_1_0_0;
struct t5010;
extern TypeInfo t5010_TI;
extern Il2CppGenericClass t5010_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5010_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5010_MIs, t5010_PIs, NULL, NULL, NULL, NULL, NULL, &t5010_TI, t5010_ITIs, NULL, &t1400__CustomAttributeCache, &t5010_TI, &t5010_0_0_0, &t5010_1_0_0, NULL, &t5010_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5012_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>
extern MethodInfo m29302_MI;
static PropertyInfo t5012____Count_PropertyInfo = 
{
	&t5012_TI, "Count", &m29302_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29303_MI;
static PropertyInfo t5012____IsReadOnly_PropertyInfo = 
{
	&t5012_TI, "IsReadOnly", &m29303_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5012_PIs[] =
{
	&t5012____Count_PropertyInfo,
	&t5012____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5012_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29302_MI = 
{
	"get_Count", NULL, &t5012_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5012_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29303_MI = 
{
	"get_IsReadOnly", NULL, &t5012_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1377_0_0_0;
static ParameterInfo t5012_m29304_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern TypeInfo t5012_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29304_MI = 
{
	"Add", NULL, &t5012_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t5012_m29304_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5012_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29305_MI = 
{
	"Clear", NULL, &t5012_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1377_0_0_0;
static ParameterInfo t5012_m29306_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern TypeInfo t5012_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29306_MI = 
{
	"Contains", NULL, &t5012_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5012_m29306_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3068_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5012_m29307_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3068_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5012_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29307_MI = 
{
	"CopyTo", NULL, &t5012_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5012_m29307_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1377_0_0_0;
static ParameterInfo t5012_m29308_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern TypeInfo t5012_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29308_MI = 
{
	"Remove", NULL, &t5012_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5012_m29308_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5012_MIs[] =
{
	&m29302_MI,
	&m29303_MI,
	&m29304_MI,
	&m29305_MI,
	&m29306_MI,
	&m29307_MI,
	&m29308_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5014_TI;
static TypeInfo* t5012_ITIs[] = 
{
	&t591_TI,
	&t5014_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5012_0_0_0;
extern Il2CppType t5012_1_0_0;
struct t5012;
extern TypeInfo t5012_TI;
extern Il2CppGenericClass t5012_GC;
TypeInfo t5012_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5012_MIs, t5012_PIs, NULL, NULL, NULL, NULL, NULL, &t5012_TI, t5012_ITIs, NULL, &EmptyCustomAttributesCache, &t5012_TI, &t5012_0_0_0, &t5012_1_0_0, NULL, &t5012_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5014_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Decimal>>
extern TypeInfo t5014_TI;
extern Il2CppType t3725_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29309_MI = 
{
	"GetEnumerator", NULL, &t5014_TI, &t3725_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5014_MIs[] =
{
	&m29309_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5014_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5014_0_0_0;
extern Il2CppType t5014_1_0_0;
struct t5014;
extern TypeInfo t5014_TI;
extern Il2CppGenericClass t5014_GC;
TypeInfo t5014_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5014_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5014_TI, t5014_ITIs, NULL, &EmptyCustomAttributesCache, &t5014_TI, &t5014_0_0_0, &t5014_1_0_0, NULL, &t5014_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3725_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Decimal>>
extern MethodInfo m29310_MI;
static PropertyInfo t3725____Current_PropertyInfo = 
{
	&t3725_TI, "Current", &m29310_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3725_PIs[] =
{
	&t3725____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3725_TI;
extern Il2CppType t1377_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29310_MI = 
{
	"get_Current", NULL, &t3725_TI, &t1377_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3725_MIs[] =
{
	&m29310_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3725_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3725_0_0_0;
extern Il2CppType t3725_1_0_0;
struct t3725;
extern TypeInfo t3725_TI;
extern Il2CppGenericClass t3725_GC;
TypeInfo t3725_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3725_MIs, t3725_PIs, NULL, NULL, NULL, NULL, NULL, &t3725_TI, t3725_ITIs, NULL, &EmptyCustomAttributesCache, &t3725_TI, &t3725_0_0_0, &t3725_1_0_0, NULL, &t3725_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2837.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2837_TI;
#include "t2837MD.h"

extern TypeInfo t2837_TI;
extern TypeInfo t1377_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16403_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22384_MI;
struct t14;
#define m22384(__this, p0, method) (t4*)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22384_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>
extern Il2CppType t14_0_0_1;
FieldInfo t2837_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2837_TI, offsetof(t2837, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2837_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2837_TI, offsetof(t2837, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2837_FIs[] =
{
	&t2837_f0_FieldInfo,
	&t2837_f1_FieldInfo,
	NULL
};
extern MethodInfo m16400_MI;
static PropertyInfo t2837____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2837_TI, "System.Collections.IEnumerator.Current", &m16400_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16403_MI;
static PropertyInfo t2837____Current_PropertyInfo = 
{
	&t2837_TI, "Current", &m16403_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2837_PIs[] =
{
	&t2837____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2837____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2837_m16399_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2837_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16399_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2837_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2837_m16399_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2837_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16400_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2837_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2837_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16401_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2837_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2837_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16402_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2837_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2837_TI;
extern Il2CppType t1377_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16403_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2837_TI, &t1377_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2837_MIs[] =
{
	&m16399_MI,
	&m16400_MI,
	&m16401_MI,
	&m16402_MI,
	&m16403_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16400_MI;
extern MethodInfo m16402_MI;
extern MethodInfo m16401_MI;
extern MethodInfo m16403_MI;
static MethodInfo* t2837_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16400_MI,
	&m16402_MI,
	&m16401_MI,
	&m16403_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3725_TI;
static TypeInfo* t2837_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3725_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3725_TI;
static Il2CppInterfaceOffsetPair t2837_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3725_TI, 7},
};
extern MethodInfo m16403_MI;
extern TypeInfo t1377_TI;
extern MethodInfo m22384_MI;
static void* t2837_RGCTXData[3] = 
{
	&m16403_MI,
	&t1377_TI,
	&m22384_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2837_0_0_0;
extern Il2CppType t2837_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2837_TI;
extern Il2CppGenericClass t2837_GC;
extern TypeInfo t14_TI;
TypeInfo t2837_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2837_MIs, t2837_PIs, t2837_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2837_TI, t2837_ITIs, t2837_VT, &EmptyCustomAttributesCache, &t2837_TI, &t2837_0_0_0, &t2837_1_0_0, t2837_IOs, &t2837_GC, NULL, NULL, NULL, t2837_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2837)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5013_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>
extern MethodInfo m29311_MI;
extern MethodInfo m29312_MI;
static PropertyInfo t5013____Item_PropertyInfo = 
{
	&t5013_TI, "Item", &m29311_MI, &m29312_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5013_PIs[] =
{
	&t5013____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1377_0_0_0;
static ParameterInfo t5013_m29313_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern TypeInfo t5013_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29313_MI = 
{
	"IndexOf", NULL, &t5013_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5013_m29313_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1377_0_0_0;
static ParameterInfo t5013_m29314_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern TypeInfo t5013_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29314_MI = 
{
	"Insert", NULL, &t5013_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5013_m29314_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5013_m29315_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5013_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29315_MI = 
{
	"RemoveAt", NULL, &t5013_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5013_m29315_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5013_m29311_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5013_TI;
extern Il2CppType t1377_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29311_MI = 
{
	"get_Item", NULL, &t5013_TI, &t1377_0_0_0, RuntimeInvoker_t4_t16, t5013_m29311_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1377_0_0_0;
static ParameterInfo t5013_m29312_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern TypeInfo t5013_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29312_MI = 
{
	"set_Item", NULL, &t5013_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5013_m29312_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5013_MIs[] =
{
	&m29313_MI,
	&m29314_MI,
	&m29315_MI,
	&m29311_MI,
	&m29312_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5012_TI;
extern TypeInfo t5014_TI;
static TypeInfo* t5013_ITIs[] = 
{
	&t591_TI,
	&t5012_TI,
	&t5014_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5013_0_0_0;
extern Il2CppType t5013_1_0_0;
struct t5013;
extern TypeInfo t5013_TI;
extern Il2CppGenericClass t5013_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5013_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5013_MIs, t5013_PIs, NULL, NULL, NULL, NULL, NULL, &t5013_TI, t5013_ITIs, NULL, &t1400__CustomAttributeCache, &t5013_TI, &t5013_0_0_0, &t5013_1_0_0, NULL, &t5013_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3726_TI;

#include "t878.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.TimeSpan>
extern MethodInfo m29316_MI;
static PropertyInfo t3726____Current_PropertyInfo = 
{
	&t3726_TI, "Current", &m29316_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3726_PIs[] =
{
	&t3726____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3726_TI;
extern Il2CppType t878_0_0_0;
extern void* RuntimeInvoker_t878 (MethodInfo* method, void* obj, void** args);
MethodInfo m29316_MI = 
{
	"get_Current", NULL, &t3726_TI, &t878_0_0_0, RuntimeInvoker_t878, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3726_MIs[] =
{
	&m29316_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3726_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3726_0_0_0;
extern Il2CppType t3726_1_0_0;
struct t3726;
extern TypeInfo t3726_TI;
extern Il2CppGenericClass t3726_GC;
TypeInfo t3726_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3726_MIs, t3726_PIs, NULL, NULL, NULL, NULL, NULL, &t3726_TI, t3726_ITIs, NULL, &EmptyCustomAttributesCache, &t3726_TI, &t3726_0_0_0, &t3726_1_0_0, NULL, &t3726_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2838.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2838_TI;
#include "t2838MD.h"

extern TypeInfo t2838_TI;
extern TypeInfo t878_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16408_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22395_MI;
struct t14;
 t878  m22395 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22395_MI;


extern MethodInfo m16404_MI;
 void m16404 (t2838 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16405_MI;
 t4 * m16405 (t2838 * __this, MethodInfo* method){
	{
		t878  L_0 = m16408(__this, &m16408_MI);
		t878  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t878_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16406_MI;
 void m16406 (t2838 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16407_MI;
 bool m16407 (t2838 * __this, MethodInfo* method){
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
		t14 * L_1 = (__this->f0);
		int32_t L_2 = m3690(L_1, &m3690_MI);
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
extern MethodInfo m16408_MI;
 t878  m16408 (t2838 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral370, &m6887_MI);
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
		t1269 * L_3 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_3, (t8*) &_stringLiteral371, &m6887_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t14 * L_4 = (__this->f0);
		t14 * L_5 = (__this->f0);
		int32_t L_6 = m3690(L_5, &m3690_MI);
		int32_t L_7 = (__this->f1);
		t878  L_8 = m22395(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22395_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.TimeSpan>
extern Il2CppType t14_0_0_1;
FieldInfo t2838_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2838_TI, offsetof(t2838, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2838_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2838_TI, offsetof(t2838, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2838_FIs[] =
{
	&t2838_f0_FieldInfo,
	&t2838_f1_FieldInfo,
	NULL
};
extern MethodInfo m16405_MI;
static PropertyInfo t2838____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2838_TI, "System.Collections.IEnumerator.Current", &m16405_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16408_MI;
static PropertyInfo t2838____Current_PropertyInfo = 
{
	&t2838_TI, "Current", &m16408_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2838_PIs[] =
{
	&t2838____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2838____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2838_m16404_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2838_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16404_MI = 
{
	".ctor", (methodPointerType)&m16404, &t2838_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2838_m16404_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2838_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16405_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16405, &t2838_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2838_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16406_MI = 
{
	"Dispose", (methodPointerType)&m16406, &t2838_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2838_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16407_MI = 
{
	"MoveNext", (methodPointerType)&m16407, &t2838_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2838_TI;
extern Il2CppType t878_0_0_0;
extern void* RuntimeInvoker_t878 (MethodInfo* method, void* obj, void** args);
MethodInfo m16408_MI = 
{
	"get_Current", (methodPointerType)&m16408, &t2838_TI, &t878_0_0_0, RuntimeInvoker_t878, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2838_MIs[] =
{
	&m16404_MI,
	&m16405_MI,
	&m16406_MI,
	&m16407_MI,
	&m16408_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16405_MI;
extern MethodInfo m16407_MI;
extern MethodInfo m16406_MI;
extern MethodInfo m16408_MI;
static MethodInfo* t2838_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16405_MI,
	&m16407_MI,
	&m16406_MI,
	&m16408_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3726_TI;
static TypeInfo* t2838_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3726_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3726_TI;
static Il2CppInterfaceOffsetPair t2838_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3726_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2838_0_0_0;
extern Il2CppType t2838_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2838_TI;
extern Il2CppGenericClass t2838_GC;
extern TypeInfo t14_TI;
TypeInfo t2838_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2838_MIs, t2838_PIs, t2838_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2838_TI, t2838_ITIs, t2838_VT, &EmptyCustomAttributesCache, &t2838_TI, &t2838_0_0_0, &t2838_1_0_0, t2838_IOs, &t2838_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2838)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5015_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.TimeSpan>
extern MethodInfo m29317_MI;
static PropertyInfo t5015____Count_PropertyInfo = 
{
	&t5015_TI, "Count", &m29317_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29318_MI;
static PropertyInfo t5015____IsReadOnly_PropertyInfo = 
{
	&t5015_TI, "IsReadOnly", &m29318_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5015_PIs[] =
{
	&t5015____Count_PropertyInfo,
	&t5015____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5015_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29317_MI = 
{
	"get_Count", NULL, &t5015_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5015_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29318_MI = 
{
	"get_IsReadOnly", NULL, &t5015_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t878_0_0_0;
static ParameterInfo t5015_m29319_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t878_0_0_0},
};
extern TypeInfo t5015_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t878 (MethodInfo* method, void* obj, void** args);
MethodInfo m29319_MI = 
{
	"Add", NULL, &t5015_TI, &t15_0_0_0, RuntimeInvoker_t15_t878, t5015_m29319_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5015_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29320_MI = 
{
	"Clear", NULL, &t5015_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t878_0_0_0;
static ParameterInfo t5015_m29321_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t878_0_0_0},
};
extern TypeInfo t5015_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t878 (MethodInfo* method, void* obj, void** args);
MethodInfo m29321_MI = 
{
	"Contains", NULL, &t5015_TI, &t17_0_0_0, RuntimeInvoker_t17_t878, t5015_m29321_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1530_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5015_m29322_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1530_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5015_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29322_MI = 
{
	"CopyTo", NULL, &t5015_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5015_m29322_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t878_0_0_0;
static ParameterInfo t5015_m29323_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t878_0_0_0},
};
extern TypeInfo t5015_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t878 (MethodInfo* method, void* obj, void** args);
MethodInfo m29323_MI = 
{
	"Remove", NULL, &t5015_TI, &t17_0_0_0, RuntimeInvoker_t17_t878, t5015_m29323_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5015_MIs[] =
{
	&m29317_MI,
	&m29318_MI,
	&m29319_MI,
	&m29320_MI,
	&m29321_MI,
	&m29322_MI,
	&m29323_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5017_TI;
static TypeInfo* t5015_ITIs[] = 
{
	&t591_TI,
	&t5017_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5015_0_0_0;
extern Il2CppType t5015_1_0_0;
struct t5015;
extern TypeInfo t5015_TI;
extern Il2CppGenericClass t5015_GC;
TypeInfo t5015_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5015_MIs, t5015_PIs, NULL, NULL, NULL, NULL, NULL, &t5015_TI, t5015_ITIs, NULL, &EmptyCustomAttributesCache, &t5015_TI, &t5015_0_0_0, &t5015_1_0_0, NULL, &t5015_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5017_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.TimeSpan>
extern TypeInfo t5017_TI;
extern Il2CppType t3726_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29324_MI = 
{
	"GetEnumerator", NULL, &t5017_TI, &t3726_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5017_MIs[] =
{
	&m29324_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5017_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5017_0_0_0;
extern Il2CppType t5017_1_0_0;
struct t5017;
extern TypeInfo t5017_TI;
extern Il2CppGenericClass t5017_GC;
TypeInfo t5017_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5017_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5017_TI, t5017_ITIs, NULL, &EmptyCustomAttributesCache, &t5017_TI, &t5017_0_0_0, &t5017_1_0_0, NULL, &t5017_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5016_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.TimeSpan>
extern MethodInfo m29325_MI;
extern MethodInfo m29326_MI;
static PropertyInfo t5016____Item_PropertyInfo = 
{
	&t5016_TI, "Item", &m29325_MI, &m29326_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5016_PIs[] =
{
	&t5016____Item_PropertyInfo,
	NULL
};
extern Il2CppType t878_0_0_0;
static ParameterInfo t5016_m29327_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t878_0_0_0},
};
extern TypeInfo t5016_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t878 (MethodInfo* method, void* obj, void** args);
MethodInfo m29327_MI = 
{
	"IndexOf", NULL, &t5016_TI, &t16_0_0_0, RuntimeInvoker_t16_t878, t5016_m29327_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t878_0_0_0;
static ParameterInfo t5016_m29328_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t878_0_0_0},
};
extern TypeInfo t5016_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t878 (MethodInfo* method, void* obj, void** args);
MethodInfo m29328_MI = 
{
	"Insert", NULL, &t5016_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t878, t5016_m29328_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5016_m29329_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5016_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29329_MI = 
{
	"RemoveAt", NULL, &t5016_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5016_m29329_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5016_m29325_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5016_TI;
extern Il2CppType t878_0_0_0;
extern void* RuntimeInvoker_t878_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29325_MI = 
{
	"get_Item", NULL, &t5016_TI, &t878_0_0_0, RuntimeInvoker_t878_t16, t5016_m29325_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t878_0_0_0;
static ParameterInfo t5016_m29326_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t878_0_0_0},
};
extern TypeInfo t5016_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t878 (MethodInfo* method, void* obj, void** args);
MethodInfo m29326_MI = 
{
	"set_Item", NULL, &t5016_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t878, t5016_m29326_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5016_MIs[] =
{
	&m29327_MI,
	&m29328_MI,
	&m29329_MI,
	&m29325_MI,
	&m29326_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5015_TI;
extern TypeInfo t5017_TI;
static TypeInfo* t5016_ITIs[] = 
{
	&t591_TI,
	&t5015_TI,
	&t5017_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5016_0_0_0;
extern Il2CppType t5016_1_0_0;
struct t5016;
extern TypeInfo t5016_TI;
extern Il2CppGenericClass t5016_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5016_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5016_MIs, t5016_PIs, NULL, NULL, NULL, NULL, NULL, &t5016_TI, t5016_ITIs, NULL, &t1400__CustomAttributeCache, &t5016_TI, &t5016_0_0_0, &t5016_1_0_0, NULL, &t5016_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5018_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>
extern MethodInfo m29330_MI;
static PropertyInfo t5018____Count_PropertyInfo = 
{
	&t5018_TI, "Count", &m29330_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29331_MI;
static PropertyInfo t5018____IsReadOnly_PropertyInfo = 
{
	&t5018_TI, "IsReadOnly", &m29331_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5018_PIs[] =
{
	&t5018____Count_PropertyInfo,
	&t5018____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5018_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29330_MI = 
{
	"get_Count", NULL, &t5018_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5018_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29331_MI = 
{
	"get_IsReadOnly", NULL, &t5018_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1575_0_0_0;
static ParameterInfo t5018_m29332_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1575_0_0_0},
};
extern TypeInfo t5018_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29332_MI = 
{
	"Add", NULL, &t5018_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t5018_m29332_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5018_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29333_MI = 
{
	"Clear", NULL, &t5018_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1575_0_0_0;
static ParameterInfo t5018_m29334_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1575_0_0_0},
};
extern TypeInfo t5018_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29334_MI = 
{
	"Contains", NULL, &t5018_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5018_m29334_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3069_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5018_m29335_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3069_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5018_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29335_MI = 
{
	"CopyTo", NULL, &t5018_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5018_m29335_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1575_0_0_0;
static ParameterInfo t5018_m29336_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1575_0_0_0},
};
extern TypeInfo t5018_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29336_MI = 
{
	"Remove", NULL, &t5018_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5018_m29336_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5018_MIs[] =
{
	&m29330_MI,
	&m29331_MI,
	&m29332_MI,
	&m29333_MI,
	&m29334_MI,
	&m29335_MI,
	&m29336_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5020_TI;
static TypeInfo* t5018_ITIs[] = 
{
	&t591_TI,
	&t5020_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5018_0_0_0;
extern Il2CppType t5018_1_0_0;
struct t5018;
extern TypeInfo t5018_TI;
extern Il2CppGenericClass t5018_GC;
TypeInfo t5018_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5018_MIs, t5018_PIs, NULL, NULL, NULL, NULL, NULL, &t5018_TI, t5018_ITIs, NULL, &EmptyCustomAttributesCache, &t5018_TI, &t5018_0_0_0, &t5018_1_0_0, NULL, &t5018_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5020_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.TimeSpan>>
extern TypeInfo t5020_TI;
extern Il2CppType t3727_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29337_MI = 
{
	"GetEnumerator", NULL, &t5020_TI, &t3727_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5020_MIs[] =
{
	&m29337_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5020_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5020_0_0_0;
extern Il2CppType t5020_1_0_0;
struct t5020;
extern TypeInfo t5020_TI;
extern Il2CppGenericClass t5020_GC;
TypeInfo t5020_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5020_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5020_TI, t5020_ITIs, NULL, &EmptyCustomAttributesCache, &t5020_TI, &t5020_0_0_0, &t5020_1_0_0, NULL, &t5020_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3727_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.TimeSpan>>
extern MethodInfo m29338_MI;
static PropertyInfo t3727____Current_PropertyInfo = 
{
	&t3727_TI, "Current", &m29338_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3727_PIs[] =
{
	&t3727____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3727_TI;
extern Il2CppType t1575_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29338_MI = 
{
	"get_Current", NULL, &t3727_TI, &t1575_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3727_MIs[] =
{
	&m29338_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3727_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3727_0_0_0;
extern Il2CppType t3727_1_0_0;
struct t3727;
extern TypeInfo t3727_TI;
extern Il2CppGenericClass t3727_GC;
TypeInfo t3727_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3727_MIs, t3727_PIs, NULL, NULL, NULL, NULL, NULL, &t3727_TI, t3727_ITIs, NULL, &EmptyCustomAttributesCache, &t3727_TI, &t3727_0_0_0, &t3727_1_0_0, NULL, &t3727_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1575_TI;



// Metadata Definition System.IComparable`1<System.TimeSpan>
extern Il2CppType t878_0_0_0;
static ParameterInfo t1575_m29339_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t878_0_0_0},
};
extern TypeInfo t1575_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t878 (MethodInfo* method, void* obj, void** args);
MethodInfo m29339_MI = 
{
	"CompareTo", NULL, &t1575_TI, &t16_0_0_0, RuntimeInvoker_t16_t878, t1575_m29339_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1575_MIs[] =
{
	&m29339_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1575_0_0_0;
extern Il2CppType t1575_1_0_0;
struct t1575;
extern TypeInfo t1575_TI;
extern Il2CppGenericClass t1575_GC;
TypeInfo t1575_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1575_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1575_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1575_TI, &t1575_0_0_0, &t1575_1_0_0, NULL, &t1575_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2839.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2839_TI;
#include "t2839MD.h"

extern TypeInfo t2839_TI;
extern TypeInfo t1575_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16413_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22406_MI;
struct t14;
#define m22406(__this, p0, method) (t4*)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22406_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>
extern Il2CppType t14_0_0_1;
FieldInfo t2839_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2839_TI, offsetof(t2839, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2839_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2839_TI, offsetof(t2839, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2839_FIs[] =
{
	&t2839_f0_FieldInfo,
	&t2839_f1_FieldInfo,
	NULL
};
extern MethodInfo m16410_MI;
static PropertyInfo t2839____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2839_TI, "System.Collections.IEnumerator.Current", &m16410_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16413_MI;
static PropertyInfo t2839____Current_PropertyInfo = 
{
	&t2839_TI, "Current", &m16413_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2839_PIs[] =
{
	&t2839____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2839____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2839_m16409_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2839_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16409_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2839_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2839_m16409_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2839_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16410_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2839_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2839_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16411_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2839_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2839_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16412_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2839_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2839_TI;
extern Il2CppType t1575_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16413_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2839_TI, &t1575_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2839_MIs[] =
{
	&m16409_MI,
	&m16410_MI,
	&m16411_MI,
	&m16412_MI,
	&m16413_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16410_MI;
extern MethodInfo m16412_MI;
extern MethodInfo m16411_MI;
extern MethodInfo m16413_MI;
static MethodInfo* t2839_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16410_MI,
	&m16412_MI,
	&m16411_MI,
	&m16413_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3727_TI;
static TypeInfo* t2839_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3727_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3727_TI;
static Il2CppInterfaceOffsetPair t2839_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3727_TI, 7},
};
extern MethodInfo m16413_MI;
extern TypeInfo t1575_TI;
extern MethodInfo m22406_MI;
static void* t2839_RGCTXData[3] = 
{
	&m16413_MI,
	&t1575_TI,
	&m22406_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2839_0_0_0;
extern Il2CppType t2839_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2839_TI;
extern Il2CppGenericClass t2839_GC;
extern TypeInfo t14_TI;
TypeInfo t2839_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2839_MIs, t2839_PIs, t2839_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2839_TI, t2839_ITIs, t2839_VT, &EmptyCustomAttributesCache, &t2839_TI, &t2839_0_0_0, &t2839_1_0_0, t2839_IOs, &t2839_GC, NULL, NULL, NULL, t2839_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2839)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5019_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>
extern MethodInfo m29340_MI;
extern MethodInfo m29341_MI;
static PropertyInfo t5019____Item_PropertyInfo = 
{
	&t5019_TI, "Item", &m29340_MI, &m29341_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5019_PIs[] =
{
	&t5019____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1575_0_0_0;
static ParameterInfo t5019_m29342_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1575_0_0_0},
};
extern TypeInfo t5019_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29342_MI = 
{
	"IndexOf", NULL, &t5019_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5019_m29342_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1575_0_0_0;
static ParameterInfo t5019_m29343_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1575_0_0_0},
};
extern TypeInfo t5019_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29343_MI = 
{
	"Insert", NULL, &t5019_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5019_m29343_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5019_m29344_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5019_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29344_MI = 
{
	"RemoveAt", NULL, &t5019_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5019_m29344_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5019_m29340_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5019_TI;
extern Il2CppType t1575_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29340_MI = 
{
	"get_Item", NULL, &t5019_TI, &t1575_0_0_0, RuntimeInvoker_t4_t16, t5019_m29340_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1575_0_0_0;
static ParameterInfo t5019_m29341_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1575_0_0_0},
};
extern TypeInfo t5019_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29341_MI = 
{
	"set_Item", NULL, &t5019_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5019_m29341_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5019_MIs[] =
{
	&m29342_MI,
	&m29343_MI,
	&m29344_MI,
	&m29340_MI,
	&m29341_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5018_TI;
extern TypeInfo t5020_TI;
static TypeInfo* t5019_ITIs[] = 
{
	&t591_TI,
	&t5018_TI,
	&t5020_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5019_0_0_0;
extern Il2CppType t5019_1_0_0;
struct t5019;
extern TypeInfo t5019_TI;
extern Il2CppGenericClass t5019_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5019_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5019_MIs, t5019_PIs, NULL, NULL, NULL, NULL, NULL, &t5019_TI, t5019_ITIs, NULL, &t1400__CustomAttributeCache, &t5019_TI, &t5019_0_0_0, &t5019_1_0_0, NULL, &t5019_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5021_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>
extern MethodInfo m29345_MI;
static PropertyInfo t5021____Count_PropertyInfo = 
{
	&t5021_TI, "Count", &m29345_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29346_MI;
static PropertyInfo t5021____IsReadOnly_PropertyInfo = 
{
	&t5021_TI, "IsReadOnly", &m29346_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5021_PIs[] =
{
	&t5021____Count_PropertyInfo,
	&t5021____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5021_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29345_MI = 
{
	"get_Count", NULL, &t5021_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5021_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29346_MI = 
{
	"get_IsReadOnly", NULL, &t5021_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1576_0_0_0;
static ParameterInfo t5021_m29347_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1576_0_0_0},
};
extern TypeInfo t5021_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29347_MI = 
{
	"Add", NULL, &t5021_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t5021_m29347_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5021_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29348_MI = 
{
	"Clear", NULL, &t5021_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1576_0_0_0;
static ParameterInfo t5021_m29349_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1576_0_0_0},
};
extern TypeInfo t5021_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29349_MI = 
{
	"Contains", NULL, &t5021_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5021_m29349_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3070_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5021_m29350_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3070_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5021_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29350_MI = 
{
	"CopyTo", NULL, &t5021_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5021_m29350_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1576_0_0_0;
static ParameterInfo t5021_m29351_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1576_0_0_0},
};
extern TypeInfo t5021_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29351_MI = 
{
	"Remove", NULL, &t5021_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5021_m29351_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5021_MIs[] =
{
	&m29345_MI,
	&m29346_MI,
	&m29347_MI,
	&m29348_MI,
	&m29349_MI,
	&m29350_MI,
	&m29351_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5023_TI;
static TypeInfo* t5021_ITIs[] = 
{
	&t591_TI,
	&t5023_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5021_0_0_0;
extern Il2CppType t5021_1_0_0;
struct t5021;
extern TypeInfo t5021_TI;
extern Il2CppGenericClass t5021_GC;
TypeInfo t5021_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5021_MIs, t5021_PIs, NULL, NULL, NULL, NULL, NULL, &t5021_TI, t5021_ITIs, NULL, &EmptyCustomAttributesCache, &t5021_TI, &t5021_0_0_0, &t5021_1_0_0, NULL, &t5021_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5023_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.TimeSpan>>
extern TypeInfo t5023_TI;
extern Il2CppType t3728_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29352_MI = 
{
	"GetEnumerator", NULL, &t5023_TI, &t3728_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5023_MIs[] =
{
	&m29352_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5023_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5023_0_0_0;
extern Il2CppType t5023_1_0_0;
struct t5023;
extern TypeInfo t5023_TI;
extern Il2CppGenericClass t5023_GC;
TypeInfo t5023_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5023_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5023_TI, t5023_ITIs, NULL, &EmptyCustomAttributesCache, &t5023_TI, &t5023_0_0_0, &t5023_1_0_0, NULL, &t5023_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3728_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.TimeSpan>>
extern MethodInfo m29353_MI;
static PropertyInfo t3728____Current_PropertyInfo = 
{
	&t3728_TI, "Current", &m29353_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3728_PIs[] =
{
	&t3728____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3728_TI;
extern Il2CppType t1576_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29353_MI = 
{
	"get_Current", NULL, &t3728_TI, &t1576_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3728_MIs[] =
{
	&m29353_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3728_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3728_0_0_0;
extern Il2CppType t3728_1_0_0;
struct t3728;
extern TypeInfo t3728_TI;
extern Il2CppGenericClass t3728_GC;
TypeInfo t3728_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3728_MIs, t3728_PIs, NULL, NULL, NULL, NULL, NULL, &t3728_TI, t3728_ITIs, NULL, &EmptyCustomAttributesCache, &t3728_TI, &t3728_0_0_0, &t3728_1_0_0, NULL, &t3728_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1576_TI;



// Metadata Definition System.IEquatable`1<System.TimeSpan>
extern Il2CppType t878_0_0_0;
static ParameterInfo t1576_m29354_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t878_0_0_0},
};
extern TypeInfo t1576_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t878 (MethodInfo* method, void* obj, void** args);
MethodInfo m29354_MI = 
{
	"Equals", NULL, &t1576_TI, &t17_0_0_0, RuntimeInvoker_t17_t878, t1576_m29354_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1576_MIs[] =
{
	&m29354_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1576_0_0_0;
extern Il2CppType t1576_1_0_0;
struct t1576;
extern TypeInfo t1576_TI;
extern Il2CppGenericClass t1576_GC;
TypeInfo t1576_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1576_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1576_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1576_TI, &t1576_0_0_0, &t1576_1_0_0, NULL, &t1576_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2840.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2840_TI;
#include "t2840MD.h"

extern TypeInfo t2840_TI;
extern TypeInfo t1576_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16418_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22417_MI;
struct t14;
#define m22417(__this, p0, method) (t4*)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22417_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>
extern Il2CppType t14_0_0_1;
FieldInfo t2840_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2840_TI, offsetof(t2840, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2840_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2840_TI, offsetof(t2840, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2840_FIs[] =
{
	&t2840_f0_FieldInfo,
	&t2840_f1_FieldInfo,
	NULL
};
extern MethodInfo m16415_MI;
static PropertyInfo t2840____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2840_TI, "System.Collections.IEnumerator.Current", &m16415_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16418_MI;
static PropertyInfo t2840____Current_PropertyInfo = 
{
	&t2840_TI, "Current", &m16418_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2840_PIs[] =
{
	&t2840____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2840____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2840_m16414_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2840_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16414_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2840_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2840_m16414_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2840_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16415_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2840_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2840_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16416_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2840_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2840_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16417_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2840_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2840_TI;
extern Il2CppType t1576_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16418_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2840_TI, &t1576_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2840_MIs[] =
{
	&m16414_MI,
	&m16415_MI,
	&m16416_MI,
	&m16417_MI,
	&m16418_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16415_MI;
extern MethodInfo m16417_MI;
extern MethodInfo m16416_MI;
extern MethodInfo m16418_MI;
static MethodInfo* t2840_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16415_MI,
	&m16417_MI,
	&m16416_MI,
	&m16418_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3728_TI;
static TypeInfo* t2840_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3728_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3728_TI;
static Il2CppInterfaceOffsetPair t2840_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3728_TI, 7},
};
extern MethodInfo m16418_MI;
extern TypeInfo t1576_TI;
extern MethodInfo m22417_MI;
static void* t2840_RGCTXData[3] = 
{
	&m16418_MI,
	&t1576_TI,
	&m22417_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2840_0_0_0;
extern Il2CppType t2840_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2840_TI;
extern Il2CppGenericClass t2840_GC;
extern TypeInfo t14_TI;
TypeInfo t2840_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2840_MIs, t2840_PIs, t2840_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2840_TI, t2840_ITIs, t2840_VT, &EmptyCustomAttributesCache, &t2840_TI, &t2840_0_0_0, &t2840_1_0_0, t2840_IOs, &t2840_GC, NULL, NULL, NULL, t2840_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2840)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5022_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>
extern MethodInfo m29355_MI;
extern MethodInfo m29356_MI;
static PropertyInfo t5022____Item_PropertyInfo = 
{
	&t5022_TI, "Item", &m29355_MI, &m29356_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5022_PIs[] =
{
	&t5022____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1576_0_0_0;
static ParameterInfo t5022_m29357_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1576_0_0_0},
};
extern TypeInfo t5022_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29357_MI = 
{
	"IndexOf", NULL, &t5022_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5022_m29357_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1576_0_0_0;
static ParameterInfo t5022_m29358_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1576_0_0_0},
};
extern TypeInfo t5022_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29358_MI = 
{
	"Insert", NULL, &t5022_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5022_m29358_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5022_m29359_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5022_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29359_MI = 
{
	"RemoveAt", NULL, &t5022_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5022_m29359_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5022_m29355_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5022_TI;
extern Il2CppType t1576_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29355_MI = 
{
	"get_Item", NULL, &t5022_TI, &t1576_0_0_0, RuntimeInvoker_t4_t16, t5022_m29355_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1576_0_0_0;
static ParameterInfo t5022_m29356_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1576_0_0_0},
};
extern TypeInfo t5022_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29356_MI = 
{
	"set_Item", NULL, &t5022_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5022_m29356_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5022_MIs[] =
{
	&m29357_MI,
	&m29358_MI,
	&m29359_MI,
	&m29355_MI,
	&m29356_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5021_TI;
extern TypeInfo t5023_TI;
static TypeInfo* t5022_ITIs[] = 
{
	&t591_TI,
	&t5021_TI,
	&t5023_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5022_0_0_0;
extern Il2CppType t5022_1_0_0;
struct t5022;
extern TypeInfo t5022_TI;
extern Il2CppGenericClass t5022_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5022_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5022_MIs, t5022_PIs, NULL, NULL, NULL, NULL, NULL, &t5022_TI, t5022_ITIs, NULL, &t1400__CustomAttributeCache, &t5022_TI, &t5022_0_0_0, &t5022_1_0_0, NULL, &t5022_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3729_TI;

#include "t1079.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern MethodInfo m29360_MI;
static PropertyInfo t3729____Current_PropertyInfo = 
{
	&t3729_TI, "Current", &m29360_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3729_PIs[] =
{
	&t3729____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3729_TI;
extern Il2CppType t1079_0_0_0;
extern void* RuntimeInvoker_t1079 (MethodInfo* method, void* obj, void** args);
MethodInfo m29360_MI = 
{
	"get_Current", NULL, &t3729_TI, &t1079_0_0_0, RuntimeInvoker_t1079, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3729_MIs[] =
{
	&m29360_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3729_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3729_0_0_0;
extern Il2CppType t3729_1_0_0;
struct t3729;
extern TypeInfo t3729_TI;
extern Il2CppGenericClass t3729_GC;
TypeInfo t3729_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3729_MIs, t3729_PIs, NULL, NULL, NULL, NULL, NULL, &t3729_TI, t3729_ITIs, NULL, &EmptyCustomAttributesCache, &t3729_TI, &t3729_0_0_0, &t3729_1_0_0, NULL, &t3729_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2841.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2841_TI;
#include "t2841MD.h"

extern TypeInfo t2841_TI;
extern TypeInfo t1079_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16423_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22428_MI;
struct t14;
 int32_t m22428 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22428_MI;


extern MethodInfo m16419_MI;
 void m16419 (t2841 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16420_MI;
 t4 * m16420 (t2841 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16423(__this, &m16423_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1079_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16421_MI;
 void m16421 (t2841 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16422_MI;
 bool m16422 (t2841 * __this, MethodInfo* method){
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
		t14 * L_1 = (__this->f0);
		int32_t L_2 = m3690(L_1, &m3690_MI);
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
extern MethodInfo m16423_MI;
 int32_t m16423 (t2841 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral370, &m6887_MI);
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
		t1269 * L_3 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_3, (t8*) &_stringLiteral371, &m6887_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t14 * L_4 = (__this->f0);
		t14 * L_5 = (__this->f0);
		int32_t L_6 = m3690(L_5, &m3690_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m22428(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22428_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern Il2CppType t14_0_0_1;
FieldInfo t2841_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2841_TI, offsetof(t2841, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2841_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2841_TI, offsetof(t2841, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2841_FIs[] =
{
	&t2841_f0_FieldInfo,
	&t2841_f1_FieldInfo,
	NULL
};
extern MethodInfo m16420_MI;
static PropertyInfo t2841____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2841_TI, "System.Collections.IEnumerator.Current", &m16420_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16423_MI;
static PropertyInfo t2841____Current_PropertyInfo = 
{
	&t2841_TI, "Current", &m16423_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2841_PIs[] =
{
	&t2841____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2841____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2841_m16419_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2841_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16419_MI = 
{
	".ctor", (methodPointerType)&m16419, &t2841_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2841_m16419_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2841_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16420_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16420, &t2841_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2841_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16421_MI = 
{
	"Dispose", (methodPointerType)&m16421, &t2841_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2841_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16422_MI = 
{
	"MoveNext", (methodPointerType)&m16422, &t2841_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2841_TI;
extern Il2CppType t1079_0_0_0;
extern void* RuntimeInvoker_t1079 (MethodInfo* method, void* obj, void** args);
MethodInfo m16423_MI = 
{
	"get_Current", (methodPointerType)&m16423, &t2841_TI, &t1079_0_0_0, RuntimeInvoker_t1079, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2841_MIs[] =
{
	&m16419_MI,
	&m16420_MI,
	&m16421_MI,
	&m16422_MI,
	&m16423_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16420_MI;
extern MethodInfo m16422_MI;
extern MethodInfo m16421_MI;
extern MethodInfo m16423_MI;
static MethodInfo* t2841_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16420_MI,
	&m16422_MI,
	&m16421_MI,
	&m16423_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3729_TI;
static TypeInfo* t2841_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3729_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3729_TI;
static Il2CppInterfaceOffsetPair t2841_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3729_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2841_0_0_0;
extern Il2CppType t2841_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2841_TI;
extern Il2CppGenericClass t2841_GC;
extern TypeInfo t14_TI;
TypeInfo t2841_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2841_MIs, t2841_PIs, t2841_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2841_TI, t2841_ITIs, t2841_VT, &EmptyCustomAttributesCache, &t2841_TI, &t2841_0_0_0, &t2841_1_0_0, t2841_IOs, &t2841_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2841)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5024_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern MethodInfo m29361_MI;
static PropertyInfo t5024____Count_PropertyInfo = 
{
	&t5024_TI, "Count", &m29361_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29362_MI;
static PropertyInfo t5024____IsReadOnly_PropertyInfo = 
{
	&t5024_TI, "IsReadOnly", &m29362_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5024_PIs[] =
{
	&t5024____Count_PropertyInfo,
	&t5024____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5024_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29361_MI = 
{
	"get_Count", NULL, &t5024_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5024_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29362_MI = 
{
	"get_IsReadOnly", NULL, &t5024_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1079_0_0_0;
static ParameterInfo t5024_m29363_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1079_0_0_0},
};
extern TypeInfo t5024_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29363_MI = 
{
	"Add", NULL, &t5024_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5024_m29363_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5024_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29364_MI = 
{
	"Clear", NULL, &t5024_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1079_0_0_0;
static ParameterInfo t5024_m29365_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1079_0_0_0},
};
extern TypeInfo t5024_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29365_MI = 
{
	"Contains", NULL, &t5024_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5024_m29365_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3071_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5024_m29366_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3071_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5024_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29366_MI = 
{
	"CopyTo", NULL, &t5024_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5024_m29366_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1079_0_0_0;
static ParameterInfo t5024_m29367_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1079_0_0_0},
};
extern TypeInfo t5024_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29367_MI = 
{
	"Remove", NULL, &t5024_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5024_m29367_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5024_MIs[] =
{
	&m29361_MI,
	&m29362_MI,
	&m29363_MI,
	&m29364_MI,
	&m29365_MI,
	&m29366_MI,
	&m29367_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5026_TI;
static TypeInfo* t5024_ITIs[] = 
{
	&t591_TI,
	&t5026_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5024_0_0_0;
extern Il2CppType t5024_1_0_0;
struct t5024;
extern TypeInfo t5024_TI;
extern Il2CppGenericClass t5024_GC;
TypeInfo t5024_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5024_MIs, t5024_PIs, NULL, NULL, NULL, NULL, NULL, &t5024_TI, t5024_ITIs, NULL, &EmptyCustomAttributesCache, &t5024_TI, &t5024_0_0_0, &t5024_1_0_0, NULL, &t5024_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5026_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern TypeInfo t5026_TI;
extern Il2CppType t3729_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29368_MI = 
{
	"GetEnumerator", NULL, &t5026_TI, &t3729_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5026_MIs[] =
{
	&m29368_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5026_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5026_0_0_0;
extern Il2CppType t5026_1_0_0;
struct t5026;
extern TypeInfo t5026_TI;
extern Il2CppGenericClass t5026_GC;
TypeInfo t5026_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5026_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5026_TI, t5026_ITIs, NULL, &EmptyCustomAttributesCache, &t5026_TI, &t5026_0_0_0, &t5026_1_0_0, NULL, &t5026_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5025_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern MethodInfo m29369_MI;
extern MethodInfo m29370_MI;
static PropertyInfo t5025____Item_PropertyInfo = 
{
	&t5025_TI, "Item", &m29369_MI, &m29370_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5025_PIs[] =
{
	&t5025____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1079_0_0_0;
static ParameterInfo t5025_m29371_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1079_0_0_0},
};
extern TypeInfo t5025_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29371_MI = 
{
	"IndexOf", NULL, &t5025_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t5025_m29371_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1079_0_0_0;
static ParameterInfo t5025_m29372_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1079_0_0_0},
};
extern TypeInfo t5025_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29372_MI = 
{
	"Insert", NULL, &t5025_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5025_m29372_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5025_m29373_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5025_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29373_MI = 
{
	"RemoveAt", NULL, &t5025_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5025_m29373_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5025_m29369_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5025_TI;
extern Il2CppType t1079_0_0_0;
extern void* RuntimeInvoker_t1079_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29369_MI = 
{
	"get_Item", NULL, &t5025_TI, &t1079_0_0_0, RuntimeInvoker_t1079_t16, t5025_m29369_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1079_0_0_0;
static ParameterInfo t5025_m29370_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1079_0_0_0},
};
extern TypeInfo t5025_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29370_MI = 
{
	"set_Item", NULL, &t5025_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5025_m29370_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5025_MIs[] =
{
	&m29371_MI,
	&m29372_MI,
	&m29373_MI,
	&m29369_MI,
	&m29370_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5024_TI;
extern TypeInfo t5026_TI;
static TypeInfo* t5025_ITIs[] = 
{
	&t591_TI,
	&t5024_TI,
	&t5026_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5025_0_0_0;
extern Il2CppType t5025_1_0_0;
struct t5025;
extern TypeInfo t5025_TI;
extern Il2CppGenericClass t5025_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5025_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5025_MIs, t5025_PIs, NULL, NULL, NULL, NULL, NULL, &t5025_TI, t5025_ITIs, NULL, &t1400__CustomAttributeCache, &t5025_TI, &t5025_0_0_0, &t5025_1_0_0, NULL, &t5025_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3730_TI;

#include "t1080.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern MethodInfo m29374_MI;
static PropertyInfo t3730____Current_PropertyInfo = 
{
	&t3730_TI, "Current", &m29374_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3730_PIs[] =
{
	&t3730____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3730_TI;
extern Il2CppType t1080_0_0_0;
extern void* RuntimeInvoker_t1080 (MethodInfo* method, void* obj, void** args);
MethodInfo m29374_MI = 
{
	"get_Current", NULL, &t3730_TI, &t1080_0_0_0, RuntimeInvoker_t1080, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3730_MIs[] =
{
	&m29374_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3730_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3730_0_0_0;
extern Il2CppType t3730_1_0_0;
struct t3730;
extern TypeInfo t3730_TI;
extern Il2CppGenericClass t3730_GC;
TypeInfo t3730_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3730_MIs, t3730_PIs, NULL, NULL, NULL, NULL, NULL, &t3730_TI, t3730_ITIs, NULL, &EmptyCustomAttributesCache, &t3730_TI, &t3730_0_0_0, &t3730_1_0_0, NULL, &t3730_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2842.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2842_TI;
#include "t2842MD.h"

extern TypeInfo t2842_TI;
extern TypeInfo t1080_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16428_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22439_MI;
struct t14;
 int32_t m22439 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22439_MI;


extern MethodInfo m16424_MI;
 void m16424 (t2842 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16425_MI;
 t4 * m16425 (t2842 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16428(__this, &m16428_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1080_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16426_MI;
 void m16426 (t2842 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16427_MI;
 bool m16427 (t2842 * __this, MethodInfo* method){
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
		t14 * L_1 = (__this->f0);
		int32_t L_2 = m3690(L_1, &m3690_MI);
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
extern MethodInfo m16428_MI;
 int32_t m16428 (t2842 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral370, &m6887_MI);
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
		t1269 * L_3 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_3, (t8*) &_stringLiteral371, &m6887_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t14 * L_4 = (__this->f0);
		t14 * L_5 = (__this->f0);
		int32_t L_6 = m3690(L_5, &m3690_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m22439(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22439_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern Il2CppType t14_0_0_1;
FieldInfo t2842_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2842_TI, offsetof(t2842, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2842_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2842_TI, offsetof(t2842, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2842_FIs[] =
{
	&t2842_f0_FieldInfo,
	&t2842_f1_FieldInfo,
	NULL
};
extern MethodInfo m16425_MI;
static PropertyInfo t2842____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2842_TI, "System.Collections.IEnumerator.Current", &m16425_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16428_MI;
static PropertyInfo t2842____Current_PropertyInfo = 
{
	&t2842_TI, "Current", &m16428_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2842_PIs[] =
{
	&t2842____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2842____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2842_m16424_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2842_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16424_MI = 
{
	".ctor", (methodPointerType)&m16424, &t2842_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2842_m16424_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2842_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16425_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16425, &t2842_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2842_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16426_MI = 
{
	"Dispose", (methodPointerType)&m16426, &t2842_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2842_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16427_MI = 
{
	"MoveNext", (methodPointerType)&m16427, &t2842_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2842_TI;
extern Il2CppType t1080_0_0_0;
extern void* RuntimeInvoker_t1080 (MethodInfo* method, void* obj, void** args);
MethodInfo m16428_MI = 
{
	"get_Current", (methodPointerType)&m16428, &t2842_TI, &t1080_0_0_0, RuntimeInvoker_t1080, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2842_MIs[] =
{
	&m16424_MI,
	&m16425_MI,
	&m16426_MI,
	&m16427_MI,
	&m16428_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16425_MI;
extern MethodInfo m16427_MI;
extern MethodInfo m16426_MI;
extern MethodInfo m16428_MI;
static MethodInfo* t2842_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16425_MI,
	&m16427_MI,
	&m16426_MI,
	&m16428_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3730_TI;
static TypeInfo* t2842_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3730_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3730_TI;
static Il2CppInterfaceOffsetPair t2842_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3730_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2842_0_0_0;
extern Il2CppType t2842_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2842_TI;
extern Il2CppGenericClass t2842_GC;
extern TypeInfo t14_TI;
TypeInfo t2842_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2842_MIs, t2842_PIs, t2842_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2842_TI, t2842_ITIs, t2842_VT, &EmptyCustomAttributesCache, &t2842_TI, &t2842_0_0_0, &t2842_1_0_0, t2842_IOs, &t2842_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2842)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5027_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern MethodInfo m29375_MI;
static PropertyInfo t5027____Count_PropertyInfo = 
{
	&t5027_TI, "Count", &m29375_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29376_MI;
static PropertyInfo t5027____IsReadOnly_PropertyInfo = 
{
	&t5027_TI, "IsReadOnly", &m29376_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5027_PIs[] =
{
	&t5027____Count_PropertyInfo,
	&t5027____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5027_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29375_MI = 
{
	"get_Count", NULL, &t5027_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5027_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29376_MI = 
{
	"get_IsReadOnly", NULL, &t5027_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1080_0_0_0;
static ParameterInfo t5027_m29377_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1080_0_0_0},
};
extern TypeInfo t5027_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29377_MI = 
{
	"Add", NULL, &t5027_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5027_m29377_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5027_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29378_MI = 
{
	"Clear", NULL, &t5027_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1080_0_0_0;
static ParameterInfo t5027_m29379_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1080_0_0_0},
};
extern TypeInfo t5027_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29379_MI = 
{
	"Contains", NULL, &t5027_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5027_m29379_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3072_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5027_m29380_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3072_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5027_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29380_MI = 
{
	"CopyTo", NULL, &t5027_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5027_m29380_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1080_0_0_0;
static ParameterInfo t5027_m29381_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1080_0_0_0},
};
extern TypeInfo t5027_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29381_MI = 
{
	"Remove", NULL, &t5027_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5027_m29381_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5027_MIs[] =
{
	&m29375_MI,
	&m29376_MI,
	&m29377_MI,
	&m29378_MI,
	&m29379_MI,
	&m29380_MI,
	&m29381_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5029_TI;
static TypeInfo* t5027_ITIs[] = 
{
	&t591_TI,
	&t5029_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5027_0_0_0;
extern Il2CppType t5027_1_0_0;
struct t5027;
extern TypeInfo t5027_TI;
extern Il2CppGenericClass t5027_GC;
TypeInfo t5027_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5027_MIs, t5027_PIs, NULL, NULL, NULL, NULL, NULL, &t5027_TI, t5027_ITIs, NULL, &EmptyCustomAttributesCache, &t5027_TI, &t5027_0_0_0, &t5027_1_0_0, NULL, &t5027_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5029_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern TypeInfo t5029_TI;
extern Il2CppType t3730_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29382_MI = 
{
	"GetEnumerator", NULL, &t5029_TI, &t3730_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5029_MIs[] =
{
	&m29382_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5029_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5029_0_0_0;
extern Il2CppType t5029_1_0_0;
struct t5029;
extern TypeInfo t5029_TI;
extern Il2CppGenericClass t5029_GC;
TypeInfo t5029_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5029_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5029_TI, t5029_ITIs, NULL, &EmptyCustomAttributesCache, &t5029_TI, &t5029_0_0_0, &t5029_1_0_0, NULL, &t5029_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5028_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern MethodInfo m29383_MI;
extern MethodInfo m29384_MI;
static PropertyInfo t5028____Item_PropertyInfo = 
{
	&t5028_TI, "Item", &m29383_MI, &m29384_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5028_PIs[] =
{
	&t5028____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1080_0_0_0;
static ParameterInfo t5028_m29385_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1080_0_0_0},
};
extern TypeInfo t5028_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29385_MI = 
{
	"IndexOf", NULL, &t5028_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t5028_m29385_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1080_0_0_0;
static ParameterInfo t5028_m29386_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1080_0_0_0},
};
extern TypeInfo t5028_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29386_MI = 
{
	"Insert", NULL, &t5028_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5028_m29386_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5028_m29387_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5028_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29387_MI = 
{
	"RemoveAt", NULL, &t5028_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5028_m29387_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5028_m29383_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5028_TI;
extern Il2CppType t1080_0_0_0;
extern void* RuntimeInvoker_t1080_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29383_MI = 
{
	"get_Item", NULL, &t5028_TI, &t1080_0_0_0, RuntimeInvoker_t1080_t16, t5028_m29383_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1080_0_0_0;
static ParameterInfo t5028_m29384_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1080_0_0_0},
};
extern TypeInfo t5028_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29384_MI = 
{
	"set_Item", NULL, &t5028_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5028_m29384_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5028_MIs[] =
{
	&m29385_MI,
	&m29386_MI,
	&m29387_MI,
	&m29383_MI,
	&m29384_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5027_TI;
extern TypeInfo t5029_TI;
static TypeInfo* t5028_ITIs[] = 
{
	&t591_TI,
	&t5027_TI,
	&t5029_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5028_0_0_0;
extern Il2CppType t5028_1_0_0;
struct t5028;
extern TypeInfo t5028_TI;
extern Il2CppGenericClass t5028_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5028_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5028_MIs, t5028_PIs, NULL, NULL, NULL, NULL, NULL, &t5028_TI, t5028_ITIs, NULL, &t1400__CustomAttributeCache, &t5028_TI, &t5028_0_0_0, &t5028_1_0_0, NULL, &t5028_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3731_TI;

#include "t1081.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern MethodInfo m29388_MI;
static PropertyInfo t3731____Current_PropertyInfo = 
{
	&t3731_TI, "Current", &m29388_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3731_PIs[] =
{
	&t3731____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3731_TI;
extern Il2CppType t1081_0_0_0;
extern void* RuntimeInvoker_t1081 (MethodInfo* method, void* obj, void** args);
MethodInfo m29388_MI = 
{
	"get_Current", NULL, &t3731_TI, &t1081_0_0_0, RuntimeInvoker_t1081, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3731_MIs[] =
{
	&m29388_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3731_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3731_0_0_0;
extern Il2CppType t3731_1_0_0;
struct t3731;
extern TypeInfo t3731_TI;
extern Il2CppGenericClass t3731_GC;
TypeInfo t3731_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3731_MIs, t3731_PIs, NULL, NULL, NULL, NULL, NULL, &t3731_TI, t3731_ITIs, NULL, &EmptyCustomAttributesCache, &t3731_TI, &t3731_0_0_0, &t3731_1_0_0, NULL, &t3731_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2843.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2843_TI;
#include "t2843MD.h"

extern TypeInfo t2843_TI;
extern TypeInfo t1081_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16433_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22450_MI;
struct t14;
 int32_t m22450 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22450_MI;


extern MethodInfo m16429_MI;
 void m16429 (t2843 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16430_MI;
 t4 * m16430 (t2843 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16433(__this, &m16433_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1081_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16431_MI;
 void m16431 (t2843 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16432_MI;
 bool m16432 (t2843 * __this, MethodInfo* method){
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
		t14 * L_1 = (__this->f0);
		int32_t L_2 = m3690(L_1, &m3690_MI);
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
extern MethodInfo m16433_MI;
 int32_t m16433 (t2843 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral370, &m6887_MI);
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
		t1269 * L_3 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_3, (t8*) &_stringLiteral371, &m6887_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t14 * L_4 = (__this->f0);
		t14 * L_5 = (__this->f0);
		int32_t L_6 = m3690(L_5, &m3690_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m22450(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22450_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern Il2CppType t14_0_0_1;
FieldInfo t2843_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2843_TI, offsetof(t2843, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2843_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2843_TI, offsetof(t2843, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2843_FIs[] =
{
	&t2843_f0_FieldInfo,
	&t2843_f1_FieldInfo,
	NULL
};
extern MethodInfo m16430_MI;
static PropertyInfo t2843____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2843_TI, "System.Collections.IEnumerator.Current", &m16430_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16433_MI;
static PropertyInfo t2843____Current_PropertyInfo = 
{
	&t2843_TI, "Current", &m16433_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2843_PIs[] =
{
	&t2843____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2843____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2843_m16429_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2843_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16429_MI = 
{
	".ctor", (methodPointerType)&m16429, &t2843_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2843_m16429_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2843_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16430_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16430, &t2843_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2843_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16431_MI = 
{
	"Dispose", (methodPointerType)&m16431, &t2843_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2843_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16432_MI = 
{
	"MoveNext", (methodPointerType)&m16432, &t2843_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2843_TI;
extern Il2CppType t1081_0_0_0;
extern void* RuntimeInvoker_t1081 (MethodInfo* method, void* obj, void** args);
MethodInfo m16433_MI = 
{
	"get_Current", (methodPointerType)&m16433, &t2843_TI, &t1081_0_0_0, RuntimeInvoker_t1081, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2843_MIs[] =
{
	&m16429_MI,
	&m16430_MI,
	&m16431_MI,
	&m16432_MI,
	&m16433_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16430_MI;
extern MethodInfo m16432_MI;
extern MethodInfo m16431_MI;
extern MethodInfo m16433_MI;
static MethodInfo* t2843_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16430_MI,
	&m16432_MI,
	&m16431_MI,
	&m16433_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3731_TI;
static TypeInfo* t2843_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3731_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3731_TI;
static Il2CppInterfaceOffsetPair t2843_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3731_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2843_0_0_0;
extern Il2CppType t2843_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2843_TI;
extern Il2CppGenericClass t2843_GC;
extern TypeInfo t14_TI;
TypeInfo t2843_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2843_MIs, t2843_PIs, t2843_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2843_TI, t2843_ITIs, t2843_VT, &EmptyCustomAttributesCache, &t2843_TI, &t2843_0_0_0, &t2843_1_0_0, t2843_IOs, &t2843_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2843)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5030_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern MethodInfo m29389_MI;
static PropertyInfo t5030____Count_PropertyInfo = 
{
	&t5030_TI, "Count", &m29389_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29390_MI;
static PropertyInfo t5030____IsReadOnly_PropertyInfo = 
{
	&t5030_TI, "IsReadOnly", &m29390_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5030_PIs[] =
{
	&t5030____Count_PropertyInfo,
	&t5030____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5030_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29389_MI = 
{
	"get_Count", NULL, &t5030_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5030_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29390_MI = 
{
	"get_IsReadOnly", NULL, &t5030_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1081_0_0_0;
static ParameterInfo t5030_m29391_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1081_0_0_0},
};
extern TypeInfo t5030_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29391_MI = 
{
	"Add", NULL, &t5030_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5030_m29391_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5030_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29392_MI = 
{
	"Clear", NULL, &t5030_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1081_0_0_0;
static ParameterInfo t5030_m29393_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1081_0_0_0},
};
extern TypeInfo t5030_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29393_MI = 
{
	"Contains", NULL, &t5030_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5030_m29393_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3073_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5030_m29394_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3073_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5030_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29394_MI = 
{
	"CopyTo", NULL, &t5030_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5030_m29394_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1081_0_0_0;
static ParameterInfo t5030_m29395_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1081_0_0_0},
};
extern TypeInfo t5030_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29395_MI = 
{
	"Remove", NULL, &t5030_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5030_m29395_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5030_MIs[] =
{
	&m29389_MI,
	&m29390_MI,
	&m29391_MI,
	&m29392_MI,
	&m29393_MI,
	&m29394_MI,
	&m29395_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5032_TI;
static TypeInfo* t5030_ITIs[] = 
{
	&t591_TI,
	&t5032_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5030_0_0_0;
extern Il2CppType t5030_1_0_0;
struct t5030;
extern TypeInfo t5030_TI;
extern Il2CppGenericClass t5030_GC;
TypeInfo t5030_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5030_MIs, t5030_PIs, NULL, NULL, NULL, NULL, NULL, &t5030_TI, t5030_ITIs, NULL, &EmptyCustomAttributesCache, &t5030_TI, &t5030_0_0_0, &t5030_1_0_0, NULL, &t5030_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5032_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern TypeInfo t5032_TI;
extern Il2CppType t3731_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29396_MI = 
{
	"GetEnumerator", NULL, &t5032_TI, &t3731_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5032_MIs[] =
{
	&m29396_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5032_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5032_0_0_0;
extern Il2CppType t5032_1_0_0;
struct t5032;
extern TypeInfo t5032_TI;
extern Il2CppGenericClass t5032_GC;
TypeInfo t5032_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5032_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5032_TI, t5032_ITIs, NULL, &EmptyCustomAttributesCache, &t5032_TI, &t5032_0_0_0, &t5032_1_0_0, NULL, &t5032_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5031_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern MethodInfo m29397_MI;
extern MethodInfo m29398_MI;
static PropertyInfo t5031____Item_PropertyInfo = 
{
	&t5031_TI, "Item", &m29397_MI, &m29398_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5031_PIs[] =
{
	&t5031____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1081_0_0_0;
static ParameterInfo t5031_m29399_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1081_0_0_0},
};
extern TypeInfo t5031_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29399_MI = 
{
	"IndexOf", NULL, &t5031_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t5031_m29399_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1081_0_0_0;
static ParameterInfo t5031_m29400_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1081_0_0_0},
};
extern TypeInfo t5031_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29400_MI = 
{
	"Insert", NULL, &t5031_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5031_m29400_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5031_m29401_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5031_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29401_MI = 
{
	"RemoveAt", NULL, &t5031_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5031_m29401_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5031_m29397_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5031_TI;
extern Il2CppType t1081_0_0_0;
extern void* RuntimeInvoker_t1081_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29397_MI = 
{
	"get_Item", NULL, &t5031_TI, &t1081_0_0_0, RuntimeInvoker_t1081_t16, t5031_m29397_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1081_0_0_0;
static ParameterInfo t5031_m29398_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1081_0_0_0},
};
extern TypeInfo t5031_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29398_MI = 
{
	"set_Item", NULL, &t5031_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5031_m29398_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5031_MIs[] =
{
	&m29399_MI,
	&m29400_MI,
	&m29401_MI,
	&m29397_MI,
	&m29398_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5030_TI;
extern TypeInfo t5032_TI;
static TypeInfo* t5031_ITIs[] = 
{
	&t591_TI,
	&t5030_TI,
	&t5032_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5031_0_0_0;
extern Il2CppType t5031_1_0_0;
struct t5031;
extern TypeInfo t5031_TI;
extern Il2CppGenericClass t5031_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5031_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5031_MIs, t5031_PIs, NULL, NULL, NULL, NULL, NULL, &t5031_TI, t5031_ITIs, NULL, &t1400__CustomAttributeCache, &t5031_TI, &t5031_0_0_0, &t5031_1_0_0, NULL, &t5031_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3732_TI;

#include "t1097.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>
extern MethodInfo m29402_MI;
static PropertyInfo t3732____Current_PropertyInfo = 
{
	&t3732_TI, "Current", &m29402_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3732_PIs[] =
{
	&t3732____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3732_TI;
extern Il2CppType t1097_0_0_0;
extern void* RuntimeInvoker_t1097 (MethodInfo* method, void* obj, void** args);
MethodInfo m29402_MI = 
{
	"get_Current", NULL, &t3732_TI, &t1097_0_0_0, RuntimeInvoker_t1097, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3732_MIs[] =
{
	&m29402_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3732_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3732_0_0_0;
extern Il2CppType t3732_1_0_0;
struct t3732;
extern TypeInfo t3732_TI;
extern Il2CppGenericClass t3732_GC;
TypeInfo t3732_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3732_MIs, t3732_PIs, NULL, NULL, NULL, NULL, NULL, &t3732_TI, t3732_ITIs, NULL, &EmptyCustomAttributesCache, &t3732_TI, &t3732_0_0_0, &t3732_1_0_0, NULL, &t3732_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2844.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2844_TI;
#include "t2844MD.h"

extern TypeInfo t2844_TI;
extern TypeInfo t1097_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16438_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22461_MI;
struct t14;
 uint8_t m22461 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22461_MI;


extern MethodInfo m16434_MI;
 void m16434 (t2844 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16435_MI;
 t4 * m16435 (t2844 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m16438(__this, &m16438_MI);
		uint8_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1097_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16436_MI;
 void m16436 (t2844 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16437_MI;
 bool m16437 (t2844 * __this, MethodInfo* method){
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
		t14 * L_1 = (__this->f0);
		int32_t L_2 = m3690(L_1, &m3690_MI);
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
extern MethodInfo m16438_MI;
 uint8_t m16438 (t2844 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral370, &m6887_MI);
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
		t1269 * L_3 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_3, (t8*) &_stringLiteral371, &m6887_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t14 * L_4 = (__this->f0);
		t14 * L_5 = (__this->f0);
		int32_t L_6 = m3690(L_5, &m3690_MI);
		int32_t L_7 = (__this->f1);
		uint8_t L_8 = m22461(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22461_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>
extern Il2CppType t14_0_0_1;
FieldInfo t2844_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2844_TI, offsetof(t2844, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2844_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2844_TI, offsetof(t2844, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2844_FIs[] =
{
	&t2844_f0_FieldInfo,
	&t2844_f1_FieldInfo,
	NULL
};
extern MethodInfo m16435_MI;
static PropertyInfo t2844____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2844_TI, "System.Collections.IEnumerator.Current", &m16435_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16438_MI;
static PropertyInfo t2844____Current_PropertyInfo = 
{
	&t2844_TI, "Current", &m16438_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2844_PIs[] =
{
	&t2844____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2844____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2844_m16434_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2844_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16434_MI = 
{
	".ctor", (methodPointerType)&m16434, &t2844_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2844_m16434_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2844_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16435_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16435, &t2844_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2844_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16436_MI = 
{
	"Dispose", (methodPointerType)&m16436, &t2844_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2844_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16437_MI = 
{
	"MoveNext", (methodPointerType)&m16437, &t2844_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2844_TI;
extern Il2CppType t1097_0_0_0;
extern void* RuntimeInvoker_t1097 (MethodInfo* method, void* obj, void** args);
MethodInfo m16438_MI = 
{
	"get_Current", (methodPointerType)&m16438, &t2844_TI, &t1097_0_0_0, RuntimeInvoker_t1097, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2844_MIs[] =
{
	&m16434_MI,
	&m16435_MI,
	&m16436_MI,
	&m16437_MI,
	&m16438_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16435_MI;
extern MethodInfo m16437_MI;
extern MethodInfo m16436_MI;
extern MethodInfo m16438_MI;
static MethodInfo* t2844_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16435_MI,
	&m16437_MI,
	&m16436_MI,
	&m16438_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3732_TI;
static TypeInfo* t2844_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3732_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3732_TI;
static Il2CppInterfaceOffsetPair t2844_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3732_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2844_0_0_0;
extern Il2CppType t2844_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2844_TI;
extern Il2CppGenericClass t2844_GC;
extern TypeInfo t14_TI;
TypeInfo t2844_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2844_MIs, t2844_PIs, t2844_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2844_TI, t2844_ITIs, t2844_VT, &EmptyCustomAttributesCache, &t2844_TI, &t2844_0_0_0, &t2844_1_0_0, t2844_IOs, &t2844_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2844)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5033_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>
extern MethodInfo m29403_MI;
static PropertyInfo t5033____Count_PropertyInfo = 
{
	&t5033_TI, "Count", &m29403_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29404_MI;
static PropertyInfo t5033____IsReadOnly_PropertyInfo = 
{
	&t5033_TI, "IsReadOnly", &m29404_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5033_PIs[] =
{
	&t5033____Count_PropertyInfo,
	&t5033____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5033_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29403_MI = 
{
	"get_Count", NULL, &t5033_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5033_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29404_MI = 
{
	"get_IsReadOnly", NULL, &t5033_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1097_0_0_0;
static ParameterInfo t5033_m29405_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1097_0_0_0},
};
extern TypeInfo t5033_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t338 (MethodInfo* method, void* obj, void** args);
MethodInfo m29405_MI = 
{
	"Add", NULL, &t5033_TI, &t15_0_0_0, RuntimeInvoker_t15_t338, t5033_m29405_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5033_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29406_MI = 
{
	"Clear", NULL, &t5033_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1097_0_0_0;
static ParameterInfo t5033_m29407_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1097_0_0_0},
};
extern TypeInfo t5033_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t338 (MethodInfo* method, void* obj, void** args);
MethodInfo m29407_MI = 
{
	"Contains", NULL, &t5033_TI, &t17_0_0_0, RuntimeInvoker_t17_t338, t5033_m29407_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3074_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5033_m29408_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3074_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5033_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29408_MI = 
{
	"CopyTo", NULL, &t5033_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5033_m29408_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1097_0_0_0;
static ParameterInfo t5033_m29409_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1097_0_0_0},
};
extern TypeInfo t5033_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t338 (MethodInfo* method, void* obj, void** args);
MethodInfo m29409_MI = 
{
	"Remove", NULL, &t5033_TI, &t17_0_0_0, RuntimeInvoker_t17_t338, t5033_m29409_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5033_MIs[] =
{
	&m29403_MI,
	&m29404_MI,
	&m29405_MI,
	&m29406_MI,
	&m29407_MI,
	&m29408_MI,
	&m29409_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5035_TI;
static TypeInfo* t5033_ITIs[] = 
{
	&t591_TI,
	&t5035_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5033_0_0_0;
extern Il2CppType t5033_1_0_0;
struct t5033;
extern TypeInfo t5033_TI;
extern Il2CppGenericClass t5033_GC;
TypeInfo t5033_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5033_MIs, t5033_PIs, NULL, NULL, NULL, NULL, NULL, &t5033_TI, t5033_ITIs, NULL, &EmptyCustomAttributesCache, &t5033_TI, &t5033_0_0_0, &t5033_1_0_0, NULL, &t5033_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5035_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.ObjectRecordStatus>
extern TypeInfo t5035_TI;
extern Il2CppType t3732_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29410_MI = 
{
	"GetEnumerator", NULL, &t5035_TI, &t3732_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5035_MIs[] =
{
	&m29410_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5035_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5035_0_0_0;
extern Il2CppType t5035_1_0_0;
struct t5035;
extern TypeInfo t5035_TI;
extern Il2CppGenericClass t5035_GC;
TypeInfo t5035_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5035_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5035_TI, t5035_ITIs, NULL, &EmptyCustomAttributesCache, &t5035_TI, &t5035_0_0_0, &t5035_1_0_0, NULL, &t5035_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5034_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>
extern MethodInfo m29411_MI;
extern MethodInfo m29412_MI;
static PropertyInfo t5034____Item_PropertyInfo = 
{
	&t5034_TI, "Item", &m29411_MI, &m29412_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5034_PIs[] =
{
	&t5034____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1097_0_0_0;
static ParameterInfo t5034_m29413_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1097_0_0_0},
};
extern TypeInfo t5034_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t338 (MethodInfo* method, void* obj, void** args);
MethodInfo m29413_MI = 
{
	"IndexOf", NULL, &t5034_TI, &t16_0_0_0, RuntimeInvoker_t16_t338, t5034_m29413_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1097_0_0_0;
static ParameterInfo t5034_m29414_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1097_0_0_0},
};
extern TypeInfo t5034_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t338 (MethodInfo* method, void* obj, void** args);
MethodInfo m29414_MI = 
{
	"Insert", NULL, &t5034_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t338, t5034_m29414_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5034_m29415_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5034_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29415_MI = 
{
	"RemoveAt", NULL, &t5034_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5034_m29415_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5034_m29411_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5034_TI;
extern Il2CppType t1097_0_0_0;
extern void* RuntimeInvoker_t1097_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29411_MI = 
{
	"get_Item", NULL, &t5034_TI, &t1097_0_0_0, RuntimeInvoker_t1097_t16, t5034_m29411_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1097_0_0_0;
static ParameterInfo t5034_m29412_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1097_0_0_0},
};
extern TypeInfo t5034_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t338 (MethodInfo* method, void* obj, void** args);
MethodInfo m29412_MI = 
{
	"set_Item", NULL, &t5034_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t338, t5034_m29412_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5034_MIs[] =
{
	&m29413_MI,
	&m29414_MI,
	&m29415_MI,
	&m29411_MI,
	&m29412_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5033_TI;
extern TypeInfo t5035_TI;
static TypeInfo* t5034_ITIs[] = 
{
	&t591_TI,
	&t5033_TI,
	&t5035_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5034_0_0_0;
extern Il2CppType t5034_1_0_0;
struct t5034;
extern TypeInfo t5034_TI;
extern Il2CppGenericClass t5034_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5034_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5034_MIs, t5034_PIs, NULL, NULL, NULL, NULL, NULL, &t5034_TI, t5034_ITIs, NULL, &t1400__CustomAttributeCache, &t5034_TI, &t5034_0_0_0, &t5034_1_0_0, NULL, &t5034_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3733_TI;

#include "t1098.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern MethodInfo m29416_MI;
static PropertyInfo t3733____Current_PropertyInfo = 
{
	&t3733_TI, "Current", &m29416_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3733_PIs[] =
{
	&t3733____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3733_TI;
extern Il2CppType t1098_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29416_MI = 
{
	"get_Current", NULL, &t3733_TI, &t1098_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3733_MIs[] =
{
	&m29416_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3733_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3733_0_0_0;
extern Il2CppType t3733_1_0_0;
struct t3733;
extern TypeInfo t3733_TI;
extern Il2CppGenericClass t3733_GC;
TypeInfo t3733_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3733_MIs, t3733_PIs, NULL, NULL, NULL, NULL, NULL, &t3733_TI, t3733_ITIs, NULL, &EmptyCustomAttributesCache, &t3733_TI, &t3733_0_0_0, &t3733_1_0_0, NULL, &t3733_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2845.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2845_TI;
#include "t2845MD.h"

extern TypeInfo t2845_TI;
extern TypeInfo t1098_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16443_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22472_MI;
struct t14;
#define m22472(__this, p0, method) (t1098 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22472_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2845_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2845_TI, offsetof(t2845, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2845_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2845_TI, offsetof(t2845, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2845_FIs[] =
{
	&t2845_f0_FieldInfo,
	&t2845_f1_FieldInfo,
	NULL
};
extern MethodInfo m16440_MI;
static PropertyInfo t2845____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2845_TI, "System.Collections.IEnumerator.Current", &m16440_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16443_MI;
static PropertyInfo t2845____Current_PropertyInfo = 
{
	&t2845_TI, "Current", &m16443_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2845_PIs[] =
{
	&t2845____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2845____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2845_m16439_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2845_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16439_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2845_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2845_m16439_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2845_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16440_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2845_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2845_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16441_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2845_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2845_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16442_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2845_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2845_TI;
extern Il2CppType t1098_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16443_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2845_TI, &t1098_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2845_MIs[] =
{
	&m16439_MI,
	&m16440_MI,
	&m16441_MI,
	&m16442_MI,
	&m16443_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16440_MI;
extern MethodInfo m16442_MI;
extern MethodInfo m16441_MI;
extern MethodInfo m16443_MI;
static MethodInfo* t2845_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16440_MI,
	&m16442_MI,
	&m16441_MI,
	&m16443_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3733_TI;
static TypeInfo* t2845_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3733_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3733_TI;
static Il2CppInterfaceOffsetPair t2845_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3733_TI, 7},
};
extern MethodInfo m16443_MI;
extern TypeInfo t1098_TI;
extern MethodInfo m22472_MI;
static void* t2845_RGCTXData[3] = 
{
	&m16443_MI,
	&t1098_TI,
	&m22472_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2845_0_0_0;
extern Il2CppType t2845_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2845_TI;
extern Il2CppGenericClass t2845_GC;
extern TypeInfo t14_TI;
TypeInfo t2845_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2845_MIs, t2845_PIs, t2845_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2845_TI, t2845_ITIs, t2845_VT, &EmptyCustomAttributesCache, &t2845_TI, &t2845_0_0_0, &t2845_1_0_0, t2845_IOs, &t2845_GC, NULL, NULL, NULL, t2845_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2845)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5036_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern MethodInfo m29417_MI;
static PropertyInfo t5036____Count_PropertyInfo = 
{
	&t5036_TI, "Count", &m29417_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29418_MI;
static PropertyInfo t5036____IsReadOnly_PropertyInfo = 
{
	&t5036_TI, "IsReadOnly", &m29418_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5036_PIs[] =
{
	&t5036____Count_PropertyInfo,
	&t5036____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5036_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29417_MI = 
{
	"get_Count", NULL, &t5036_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5036_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29418_MI = 
{
	"get_IsReadOnly", NULL, &t5036_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1098_0_0_0;
static ParameterInfo t5036_m29419_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1098_0_0_0},
};
extern TypeInfo t5036_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29419_MI = 
{
	"Add", NULL, &t5036_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t5036_m29419_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5036_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29420_MI = 
{
	"Clear", NULL, &t5036_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1098_0_0_0;
static ParameterInfo t5036_m29421_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1098_0_0_0},
};
extern TypeInfo t5036_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29421_MI = 
{
	"Contains", NULL, &t5036_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5036_m29421_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3075_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5036_m29422_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3075_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5036_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29422_MI = 
{
	"CopyTo", NULL, &t5036_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5036_m29422_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1098_0_0_0;
static ParameterInfo t5036_m29423_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1098_0_0_0},
};
extern TypeInfo t5036_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29423_MI = 
{
	"Remove", NULL, &t5036_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5036_m29423_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5036_MIs[] =
{
	&m29417_MI,
	&m29418_MI,
	&m29419_MI,
	&m29420_MI,
	&m29421_MI,
	&m29422_MI,
	&m29423_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5038_TI;
static TypeInfo* t5036_ITIs[] = 
{
	&t591_TI,
	&t5038_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5036_0_0_0;
extern Il2CppType t5036_1_0_0;
struct t5036;
extern TypeInfo t5036_TI;
extern Il2CppGenericClass t5036_GC;
TypeInfo t5036_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5036_MIs, t5036_PIs, NULL, NULL, NULL, NULL, NULL, &t5036_TI, t5036_ITIs, NULL, &EmptyCustomAttributesCache, &t5036_TI, &t5036_0_0_0, &t5036_1_0_0, NULL, &t5036_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5038_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern TypeInfo t5038_TI;
extern Il2CppType t3733_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29424_MI = 
{
	"GetEnumerator", NULL, &t5038_TI, &t3733_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5038_MIs[] =
{
	&m29424_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5038_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5038_0_0_0;
extern Il2CppType t5038_1_0_0;
struct t5038;
extern TypeInfo t5038_TI;
extern Il2CppGenericClass t5038_GC;
TypeInfo t5038_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5038_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5038_TI, t5038_ITIs, NULL, &EmptyCustomAttributesCache, &t5038_TI, &t5038_0_0_0, &t5038_1_0_0, NULL, &t5038_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5037_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern MethodInfo m29425_MI;
extern MethodInfo m29426_MI;
static PropertyInfo t5037____Item_PropertyInfo = 
{
	&t5037_TI, "Item", &m29425_MI, &m29426_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5037_PIs[] =
{
	&t5037____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1098_0_0_0;
static ParameterInfo t5037_m29427_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1098_0_0_0},
};
extern TypeInfo t5037_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29427_MI = 
{
	"IndexOf", NULL, &t5037_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5037_m29427_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1098_0_0_0;
static ParameterInfo t5037_m29428_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1098_0_0_0},
};
extern TypeInfo t5037_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29428_MI = 
{
	"Insert", NULL, &t5037_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5037_m29428_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5037_m29429_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5037_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29429_MI = 
{
	"RemoveAt", NULL, &t5037_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5037_m29429_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5037_m29425_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5037_TI;
extern Il2CppType t1098_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29425_MI = 
{
	"get_Item", NULL, &t5037_TI, &t1098_0_0_0, RuntimeInvoker_t4_t16, t5037_m29425_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1098_0_0_0;
static ParameterInfo t5037_m29426_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1098_0_0_0},
};
extern TypeInfo t5037_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29426_MI = 
{
	"set_Item", NULL, &t5037_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5037_m29426_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5037_MIs[] =
{
	&m29427_MI,
	&m29428_MI,
	&m29429_MI,
	&m29425_MI,
	&m29426_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5036_TI;
extern TypeInfo t5038_TI;
static TypeInfo* t5037_ITIs[] = 
{
	&t591_TI,
	&t5036_TI,
	&t5038_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5037_0_0_0;
extern Il2CppType t5037_1_0_0;
struct t5037;
extern TypeInfo t5037_TI;
extern Il2CppGenericClass t5037_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5037_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5037_MIs, t5037_PIs, NULL, NULL, NULL, NULL, NULL, &t5037_TI, t5037_ITIs, NULL, &t1400__CustomAttributeCache, &t5037_TI, &t5037_0_0_0, &t5037_1_0_0, NULL, &t5037_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3734_TI;

#include "t1099.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern MethodInfo m29430_MI;
static PropertyInfo t3734____Current_PropertyInfo = 
{
	&t3734_TI, "Current", &m29430_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3734_PIs[] =
{
	&t3734____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3734_TI;
extern Il2CppType t1099_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29430_MI = 
{
	"get_Current", NULL, &t3734_TI, &t1099_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3734_MIs[] =
{
	&m29430_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3734_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3734_0_0_0;
extern Il2CppType t3734_1_0_0;
struct t3734;
extern TypeInfo t3734_TI;
extern Il2CppGenericClass t3734_GC;
TypeInfo t3734_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3734_MIs, t3734_PIs, NULL, NULL, NULL, NULL, NULL, &t3734_TI, t3734_ITIs, NULL, &EmptyCustomAttributesCache, &t3734_TI, &t3734_0_0_0, &t3734_1_0_0, NULL, &t3734_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2846.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2846_TI;
#include "t2846MD.h"

extern TypeInfo t2846_TI;
extern TypeInfo t1099_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16448_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22483_MI;
struct t14;
#define m22483(__this, p0, method) (t1099 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22483_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2846_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2846_TI, offsetof(t2846, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2846_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2846_TI, offsetof(t2846, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2846_FIs[] =
{
	&t2846_f0_FieldInfo,
	&t2846_f1_FieldInfo,
	NULL
};
extern MethodInfo m16445_MI;
static PropertyInfo t2846____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2846_TI, "System.Collections.IEnumerator.Current", &m16445_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16448_MI;
static PropertyInfo t2846____Current_PropertyInfo = 
{
	&t2846_TI, "Current", &m16448_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2846_PIs[] =
{
	&t2846____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2846____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2846_m16444_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2846_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16444_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2846_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2846_m16444_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2846_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16445_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2846_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2846_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16446_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2846_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2846_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16447_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2846_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2846_TI;
extern Il2CppType t1099_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16448_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2846_TI, &t1099_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2846_MIs[] =
{
	&m16444_MI,
	&m16445_MI,
	&m16446_MI,
	&m16447_MI,
	&m16448_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16445_MI;
extern MethodInfo m16447_MI;
extern MethodInfo m16446_MI;
extern MethodInfo m16448_MI;
static MethodInfo* t2846_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16445_MI,
	&m16447_MI,
	&m16446_MI,
	&m16448_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3734_TI;
static TypeInfo* t2846_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3734_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3734_TI;
static Il2CppInterfaceOffsetPair t2846_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3734_TI, 7},
};
extern MethodInfo m16448_MI;
extern TypeInfo t1099_TI;
extern MethodInfo m22483_MI;
static void* t2846_RGCTXData[3] = 
{
	&m16448_MI,
	&t1099_TI,
	&m22483_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2846_0_0_0;
extern Il2CppType t2846_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2846_TI;
extern Il2CppGenericClass t2846_GC;
extern TypeInfo t14_TI;
TypeInfo t2846_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2846_MIs, t2846_PIs, t2846_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2846_TI, t2846_ITIs, t2846_VT, &EmptyCustomAttributesCache, &t2846_TI, &t2846_0_0_0, &t2846_1_0_0, t2846_IOs, &t2846_GC, NULL, NULL, NULL, t2846_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2846)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5039_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern MethodInfo m29431_MI;
static PropertyInfo t5039____Count_PropertyInfo = 
{
	&t5039_TI, "Count", &m29431_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29432_MI;
static PropertyInfo t5039____IsReadOnly_PropertyInfo = 
{
	&t5039_TI, "IsReadOnly", &m29432_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5039_PIs[] =
{
	&t5039____Count_PropertyInfo,
	&t5039____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5039_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29431_MI = 
{
	"get_Count", NULL, &t5039_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5039_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29432_MI = 
{
	"get_IsReadOnly", NULL, &t5039_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1099_0_0_0;
static ParameterInfo t5039_m29433_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1099_0_0_0},
};
extern TypeInfo t5039_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29433_MI = 
{
	"Add", NULL, &t5039_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t5039_m29433_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5039_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29434_MI = 
{
	"Clear", NULL, &t5039_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1099_0_0_0;
static ParameterInfo t5039_m29435_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1099_0_0_0},
};
extern TypeInfo t5039_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29435_MI = 
{
	"Contains", NULL, &t5039_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5039_m29435_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3076_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5039_m29436_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3076_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5039_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29436_MI = 
{
	"CopyTo", NULL, &t5039_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5039_m29436_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1099_0_0_0;
static ParameterInfo t5039_m29437_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1099_0_0_0},
};
extern TypeInfo t5039_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29437_MI = 
{
	"Remove", NULL, &t5039_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5039_m29437_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5039_MIs[] =
{
	&m29431_MI,
	&m29432_MI,
	&m29433_MI,
	&m29434_MI,
	&m29435_MI,
	&m29436_MI,
	&m29437_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5041_TI;
static TypeInfo* t5039_ITIs[] = 
{
	&t591_TI,
	&t5041_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5039_0_0_0;
extern Il2CppType t5039_1_0_0;
struct t5039;
extern TypeInfo t5039_TI;
extern Il2CppGenericClass t5039_GC;
TypeInfo t5039_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5039_MIs, t5039_PIs, NULL, NULL, NULL, NULL, NULL, &t5039_TI, t5039_ITIs, NULL, &EmptyCustomAttributesCache, &t5039_TI, &t5039_0_0_0, &t5039_1_0_0, NULL, &t5039_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5041_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern TypeInfo t5041_TI;
extern Il2CppType t3734_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29438_MI = 
{
	"GetEnumerator", NULL, &t5041_TI, &t3734_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5041_MIs[] =
{
	&m29438_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5041_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5041_0_0_0;
extern Il2CppType t5041_1_0_0;
struct t5041;
extern TypeInfo t5041_TI;
extern Il2CppGenericClass t5041_GC;
TypeInfo t5041_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5041_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5041_TI, t5041_ITIs, NULL, &EmptyCustomAttributesCache, &t5041_TI, &t5041_0_0_0, &t5041_1_0_0, NULL, &t5041_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5040_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern MethodInfo m29439_MI;
extern MethodInfo m29440_MI;
static PropertyInfo t5040____Item_PropertyInfo = 
{
	&t5040_TI, "Item", &m29439_MI, &m29440_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5040_PIs[] =
{
	&t5040____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1099_0_0_0;
static ParameterInfo t5040_m29441_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1099_0_0_0},
};
extern TypeInfo t5040_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29441_MI = 
{
	"IndexOf", NULL, &t5040_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5040_m29441_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1099_0_0_0;
static ParameterInfo t5040_m29442_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1099_0_0_0},
};
extern TypeInfo t5040_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29442_MI = 
{
	"Insert", NULL, &t5040_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5040_m29442_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5040_m29443_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5040_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29443_MI = 
{
	"RemoveAt", NULL, &t5040_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5040_m29443_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5040_m29439_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5040_TI;
extern Il2CppType t1099_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29439_MI = 
{
	"get_Item", NULL, &t5040_TI, &t1099_0_0_0, RuntimeInvoker_t4_t16, t5040_m29439_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1099_0_0_0;
static ParameterInfo t5040_m29440_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1099_0_0_0},
};
extern TypeInfo t5040_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29440_MI = 
{
	"set_Item", NULL, &t5040_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5040_m29440_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5040_MIs[] =
{
	&m29441_MI,
	&m29442_MI,
	&m29443_MI,
	&m29439_MI,
	&m29440_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5039_TI;
extern TypeInfo t5041_TI;
static TypeInfo* t5040_ITIs[] = 
{
	&t591_TI,
	&t5039_TI,
	&t5041_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5040_0_0_0;
extern Il2CppType t5040_1_0_0;
struct t5040;
extern TypeInfo t5040_TI;
extern Il2CppGenericClass t5040_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5040_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5040_MIs, t5040_PIs, NULL, NULL, NULL, NULL, NULL, &t5040_TI, t5040_ITIs, NULL, &t1400__CustomAttributeCache, &t5040_TI, &t5040_0_0_0, &t5040_1_0_0, NULL, &t5040_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3735_TI;

#include "t1100.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>
extern MethodInfo m29444_MI;
static PropertyInfo t3735____Current_PropertyInfo = 
{
	&t3735_TI, "Current", &m29444_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3735_PIs[] =
{
	&t3735____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3735_TI;
extern Il2CppType t1100_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29444_MI = 
{
	"get_Current", NULL, &t3735_TI, &t1100_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3735_MIs[] =
{
	&m29444_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3735_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3735_0_0_0;
extern Il2CppType t3735_1_0_0;
struct t3735;
extern TypeInfo t3735_TI;
extern Il2CppGenericClass t3735_GC;
TypeInfo t3735_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3735_MIs, t3735_PIs, NULL, NULL, NULL, NULL, NULL, &t3735_TI, t3735_ITIs, NULL, &EmptyCustomAttributesCache, &t3735_TI, &t3735_0_0_0, &t3735_1_0_0, NULL, &t3735_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2847.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2847_TI;
#include "t2847MD.h"

extern TypeInfo t2847_TI;
extern TypeInfo t1100_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16453_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22494_MI;
struct t14;
#define m22494(__this, p0, method) (t1100 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22494_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2847_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2847_TI, offsetof(t2847, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2847_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2847_TI, offsetof(t2847, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2847_FIs[] =
{
	&t2847_f0_FieldInfo,
	&t2847_f1_FieldInfo,
	NULL
};
extern MethodInfo m16450_MI;
static PropertyInfo t2847____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2847_TI, "System.Collections.IEnumerator.Current", &m16450_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16453_MI;
static PropertyInfo t2847____Current_PropertyInfo = 
{
	&t2847_TI, "Current", &m16453_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2847_PIs[] =
{
	&t2847____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2847____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2847_m16449_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2847_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16449_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2847_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2847_m16449_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2847_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16450_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2847_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2847_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16451_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2847_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2847_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16452_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2847_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2847_TI;
extern Il2CppType t1100_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16453_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2847_TI, &t1100_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2847_MIs[] =
{
	&m16449_MI,
	&m16450_MI,
	&m16451_MI,
	&m16452_MI,
	&m16453_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16450_MI;
extern MethodInfo m16452_MI;
extern MethodInfo m16451_MI;
extern MethodInfo m16453_MI;
static MethodInfo* t2847_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16450_MI,
	&m16452_MI,
	&m16451_MI,
	&m16453_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3735_TI;
static TypeInfo* t2847_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3735_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3735_TI;
static Il2CppInterfaceOffsetPair t2847_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3735_TI, 7},
};
extern MethodInfo m16453_MI;
extern TypeInfo t1100_TI;
extern MethodInfo m22494_MI;
static void* t2847_RGCTXData[3] = 
{
	&m16453_MI,
	&t1100_TI,
	&m22494_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2847_0_0_0;
extern Il2CppType t2847_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2847_TI;
extern Il2CppGenericClass t2847_GC;
extern TypeInfo t14_TI;
TypeInfo t2847_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2847_MIs, t2847_PIs, t2847_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2847_TI, t2847_ITIs, t2847_VT, &EmptyCustomAttributesCache, &t2847_TI, &t2847_0_0_0, &t2847_1_0_0, t2847_IOs, &t2847_GC, NULL, NULL, NULL, t2847_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2847)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5042_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>
extern MethodInfo m29445_MI;
static PropertyInfo t5042____Count_PropertyInfo = 
{
	&t5042_TI, "Count", &m29445_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29446_MI;
static PropertyInfo t5042____IsReadOnly_PropertyInfo = 
{
	&t5042_TI, "IsReadOnly", &m29446_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5042_PIs[] =
{
	&t5042____Count_PropertyInfo,
	&t5042____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5042_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29445_MI = 
{
	"get_Count", NULL, &t5042_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5042_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29446_MI = 
{
	"get_IsReadOnly", NULL, &t5042_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1100_0_0_0;
static ParameterInfo t5042_m29447_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1100_0_0_0},
};
extern TypeInfo t5042_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29447_MI = 
{
	"Add", NULL, &t5042_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t5042_m29447_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5042_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29448_MI = 
{
	"Clear", NULL, &t5042_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1100_0_0_0;
static ParameterInfo t5042_m29449_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1100_0_0_0},
};
extern TypeInfo t5042_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29449_MI = 
{
	"Contains", NULL, &t5042_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5042_m29449_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3077_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5042_m29450_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3077_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5042_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29450_MI = 
{
	"CopyTo", NULL, &t5042_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5042_m29450_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1100_0_0_0;
static ParameterInfo t5042_m29451_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1100_0_0_0},
};
extern TypeInfo t5042_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29451_MI = 
{
	"Remove", NULL, &t5042_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5042_m29451_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5042_MIs[] =
{
	&m29445_MI,
	&m29446_MI,
	&m29447_MI,
	&m29448_MI,
	&m29449_MI,
	&m29450_MI,
	&m29451_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5044_TI;
static TypeInfo* t5042_ITIs[] = 
{
	&t591_TI,
	&t5044_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5042_0_0_0;
extern Il2CppType t5042_1_0_0;
struct t5042;
extern TypeInfo t5042_TI;
extern Il2CppGenericClass t5042_GC;
TypeInfo t5042_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5042_MIs, t5042_PIs, NULL, NULL, NULL, NULL, NULL, &t5042_TI, t5042_ITIs, NULL, &EmptyCustomAttributesCache, &t5042_TI, &t5042_0_0_0, &t5042_1_0_0, NULL, &t5042_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5044_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnSerializedAttribute>
extern TypeInfo t5044_TI;
extern Il2CppType t3735_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29452_MI = 
{
	"GetEnumerator", NULL, &t5044_TI, &t3735_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5044_MIs[] =
{
	&m29452_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5044_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5044_0_0_0;
extern Il2CppType t5044_1_0_0;
struct t5044;
extern TypeInfo t5044_TI;
extern Il2CppGenericClass t5044_GC;
TypeInfo t5044_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5044_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5044_TI, t5044_ITIs, NULL, &EmptyCustomAttributesCache, &t5044_TI, &t5044_0_0_0, &t5044_1_0_0, NULL, &t5044_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5043_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>
extern MethodInfo m29453_MI;
extern MethodInfo m29454_MI;
static PropertyInfo t5043____Item_PropertyInfo = 
{
	&t5043_TI, "Item", &m29453_MI, &m29454_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5043_PIs[] =
{
	&t5043____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1100_0_0_0;
static ParameterInfo t5043_m29455_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1100_0_0_0},
};
extern TypeInfo t5043_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29455_MI = 
{
	"IndexOf", NULL, &t5043_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5043_m29455_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1100_0_0_0;
static ParameterInfo t5043_m29456_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1100_0_0_0},
};
extern TypeInfo t5043_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29456_MI = 
{
	"Insert", NULL, &t5043_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5043_m29456_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5043_m29457_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5043_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29457_MI = 
{
	"RemoveAt", NULL, &t5043_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5043_m29457_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5043_m29453_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5043_TI;
extern Il2CppType t1100_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29453_MI = 
{
	"get_Item", NULL, &t5043_TI, &t1100_0_0_0, RuntimeInvoker_t4_t16, t5043_m29453_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1100_0_0_0;
static ParameterInfo t5043_m29454_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1100_0_0_0},
};
extern TypeInfo t5043_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29454_MI = 
{
	"set_Item", NULL, &t5043_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5043_m29454_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5043_MIs[] =
{
	&m29455_MI,
	&m29456_MI,
	&m29457_MI,
	&m29453_MI,
	&m29454_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5042_TI;
extern TypeInfo t5044_TI;
static TypeInfo* t5043_ITIs[] = 
{
	&t591_TI,
	&t5042_TI,
	&t5044_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5043_0_0_0;
extern Il2CppType t5043_1_0_0;
struct t5043;
extern TypeInfo t5043_TI;
extern Il2CppGenericClass t5043_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5043_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5043_MIs, t5043_PIs, NULL, NULL, NULL, NULL, NULL, &t5043_TI, t5043_ITIs, NULL, &t1400__CustomAttributeCache, &t5043_TI, &t5043_0_0_0, &t5043_1_0_0, NULL, &t5043_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3736_TI;

#include "t1101.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>
extern MethodInfo m29458_MI;
static PropertyInfo t3736____Current_PropertyInfo = 
{
	&t3736_TI, "Current", &m29458_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3736_PIs[] =
{
	&t3736____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3736_TI;
extern Il2CppType t1101_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29458_MI = 
{
	"get_Current", NULL, &t3736_TI, &t1101_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3736_MIs[] =
{
	&m29458_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3736_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3736_0_0_0;
extern Il2CppType t3736_1_0_0;
struct t3736;
extern TypeInfo t3736_TI;
extern Il2CppGenericClass t3736_GC;
TypeInfo t3736_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3736_MIs, t3736_PIs, NULL, NULL, NULL, NULL, NULL, &t3736_TI, t3736_ITIs, NULL, &EmptyCustomAttributesCache, &t3736_TI, &t3736_0_0_0, &t3736_1_0_0, NULL, &t3736_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2848.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2848_TI;
#include "t2848MD.h"

extern TypeInfo t2848_TI;
extern TypeInfo t1101_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16458_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22505_MI;
struct t14;
#define m22505(__this, p0, method) (t1101 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22505_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2848_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2848_TI, offsetof(t2848, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2848_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2848_TI, offsetof(t2848, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2848_FIs[] =
{
	&t2848_f0_FieldInfo,
	&t2848_f1_FieldInfo,
	NULL
};
extern MethodInfo m16455_MI;
static PropertyInfo t2848____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2848_TI, "System.Collections.IEnumerator.Current", &m16455_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16458_MI;
static PropertyInfo t2848____Current_PropertyInfo = 
{
	&t2848_TI, "Current", &m16458_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2848_PIs[] =
{
	&t2848____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2848____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2848_m16454_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2848_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16454_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2848_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2848_m16454_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2848_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16455_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2848_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2848_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16456_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2848_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2848_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16457_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2848_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2848_TI;
extern Il2CppType t1101_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16458_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2848_TI, &t1101_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2848_MIs[] =
{
	&m16454_MI,
	&m16455_MI,
	&m16456_MI,
	&m16457_MI,
	&m16458_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16455_MI;
extern MethodInfo m16457_MI;
extern MethodInfo m16456_MI;
extern MethodInfo m16458_MI;
static MethodInfo* t2848_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16455_MI,
	&m16457_MI,
	&m16456_MI,
	&m16458_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3736_TI;
static TypeInfo* t2848_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3736_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3736_TI;
static Il2CppInterfaceOffsetPair t2848_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3736_TI, 7},
};
extern MethodInfo m16458_MI;
extern TypeInfo t1101_TI;
extern MethodInfo m22505_MI;
static void* t2848_RGCTXData[3] = 
{
	&m16458_MI,
	&t1101_TI,
	&m22505_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2848_0_0_0;
extern Il2CppType t2848_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2848_TI;
extern Il2CppGenericClass t2848_GC;
extern TypeInfo t14_TI;
TypeInfo t2848_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2848_MIs, t2848_PIs, t2848_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2848_TI, t2848_ITIs, t2848_VT, &EmptyCustomAttributesCache, &t2848_TI, &t2848_0_0_0, &t2848_1_0_0, t2848_IOs, &t2848_GC, NULL, NULL, NULL, t2848_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2848)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5045_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>
extern MethodInfo m29459_MI;
static PropertyInfo t5045____Count_PropertyInfo = 
{
	&t5045_TI, "Count", &m29459_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29460_MI;
static PropertyInfo t5045____IsReadOnly_PropertyInfo = 
{
	&t5045_TI, "IsReadOnly", &m29460_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5045_PIs[] =
{
	&t5045____Count_PropertyInfo,
	&t5045____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5045_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29459_MI = 
{
	"get_Count", NULL, &t5045_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5045_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29460_MI = 
{
	"get_IsReadOnly", NULL, &t5045_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1101_0_0_0;
static ParameterInfo t5045_m29461_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern TypeInfo t5045_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29461_MI = 
{
	"Add", NULL, &t5045_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t5045_m29461_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5045_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29462_MI = 
{
	"Clear", NULL, &t5045_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1101_0_0_0;
static ParameterInfo t5045_m29463_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern TypeInfo t5045_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29463_MI = 
{
	"Contains", NULL, &t5045_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5045_m29463_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3078_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5045_m29464_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3078_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5045_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29464_MI = 
{
	"CopyTo", NULL, &t5045_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5045_m29464_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1101_0_0_0;
static ParameterInfo t5045_m29465_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern TypeInfo t5045_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29465_MI = 
{
	"Remove", NULL, &t5045_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5045_m29465_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5045_MIs[] =
{
	&m29459_MI,
	&m29460_MI,
	&m29461_MI,
	&m29462_MI,
	&m29463_MI,
	&m29464_MI,
	&m29465_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5047_TI;
static TypeInfo* t5045_ITIs[] = 
{
	&t591_TI,
	&t5047_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5045_0_0_0;
extern Il2CppType t5045_1_0_0;
struct t5045;
extern TypeInfo t5045_TI;
extern Il2CppGenericClass t5045_GC;
TypeInfo t5045_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5045_MIs, t5045_PIs, NULL, NULL, NULL, NULL, NULL, &t5045_TI, t5045_ITIs, NULL, &EmptyCustomAttributesCache, &t5045_TI, &t5045_0_0_0, &t5045_1_0_0, NULL, &t5045_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5047_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnSerializingAttribute>
extern TypeInfo t5047_TI;
extern Il2CppType t3736_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29466_MI = 
{
	"GetEnumerator", NULL, &t5047_TI, &t3736_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5047_MIs[] =
{
	&m29466_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5047_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5047_0_0_0;
extern Il2CppType t5047_1_0_0;
struct t5047;
extern TypeInfo t5047_TI;
extern Il2CppGenericClass t5047_GC;
TypeInfo t5047_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5047_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5047_TI, t5047_ITIs, NULL, &EmptyCustomAttributesCache, &t5047_TI, &t5047_0_0_0, &t5047_1_0_0, NULL, &t5047_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5046_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializingAttribute>
extern MethodInfo m29467_MI;
extern MethodInfo m29468_MI;
static PropertyInfo t5046____Item_PropertyInfo = 
{
	&t5046_TI, "Item", &m29467_MI, &m29468_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5046_PIs[] =
{
	&t5046____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1101_0_0_0;
static ParameterInfo t5046_m29469_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern TypeInfo t5046_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29469_MI = 
{
	"IndexOf", NULL, &t5046_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5046_m29469_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t5046_m29470_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern TypeInfo t5046_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29470_MI = 
{
	"Insert", NULL, &t5046_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5046_m29470_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5046_m29471_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5046_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29471_MI = 
{
	"RemoveAt", NULL, &t5046_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5046_m29471_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5046_m29467_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5046_TI;
extern Il2CppType t1101_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29467_MI = 
{
	"get_Item", NULL, &t5046_TI, &t1101_0_0_0, RuntimeInvoker_t4_t16, t5046_m29467_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t5046_m29468_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern TypeInfo t5046_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29468_MI = 
{
	"set_Item", NULL, &t5046_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5046_m29468_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5046_MIs[] =
{
	&m29469_MI,
	&m29470_MI,
	&m29471_MI,
	&m29467_MI,
	&m29468_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5045_TI;
extern TypeInfo t5047_TI;
static TypeInfo* t5046_ITIs[] = 
{
	&t591_TI,
	&t5045_TI,
	&t5047_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5046_0_0_0;
extern Il2CppType t5046_1_0_0;
struct t5046;
extern TypeInfo t5046_TI;
extern Il2CppGenericClass t5046_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5046_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5046_MIs, t5046_PIs, NULL, NULL, NULL, NULL, NULL, &t5046_TI, t5046_ITIs, NULL, &t1400__CustomAttributeCache, &t5046_TI, &t5046_0_0_0, &t5046_1_0_0, NULL, &t5046_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3737_TI;

#include "t1108.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.StreamingContextStates>
extern MethodInfo m29472_MI;
static PropertyInfo t3737____Current_PropertyInfo = 
{
	&t3737_TI, "Current", &m29472_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3737_PIs[] =
{
	&t3737____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3737_TI;
extern Il2CppType t1108_0_0_0;
extern void* RuntimeInvoker_t1108 (MethodInfo* method, void* obj, void** args);
MethodInfo m29472_MI = 
{
	"get_Current", NULL, &t3737_TI, &t1108_0_0_0, RuntimeInvoker_t1108, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3737_MIs[] =
{
	&m29472_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3737_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3737_0_0_0;
extern Il2CppType t3737_1_0_0;
struct t3737;
extern TypeInfo t3737_TI;
extern Il2CppGenericClass t3737_GC;
TypeInfo t3737_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3737_MIs, t3737_PIs, NULL, NULL, NULL, NULL, NULL, &t3737_TI, t3737_ITIs, NULL, &EmptyCustomAttributesCache, &t3737_TI, &t3737_0_0_0, &t3737_1_0_0, NULL, &t3737_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
