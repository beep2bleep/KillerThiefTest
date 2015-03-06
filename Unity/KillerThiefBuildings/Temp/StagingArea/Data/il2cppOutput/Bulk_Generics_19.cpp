#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2508.h"
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
extern TypeInfo t2508_TI;
#include "t2508MD.h"

#include "t4.h"
#include "t20.h"
#include "t16.h"
#include "t8.h"
#include "t1269.h"
#include "t15.h"
#include "t14.h"
#include "t17.h"
extern TypeInfo t2508_TI;
extern TypeInfo t20_TI;
extern TypeInfo t1269_TI;
#include "t1269MD.h"
#include "t14MD.h"
extern MethodInfo m14389_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m19883_MI;
struct t14;
#include "t1233.h"
 float m19883 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m19883_MI;


extern MethodInfo m14385_MI;
 void m14385 (t2508 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14386_MI;
 t4 * m14386 (t2508 * __this, MethodInfo* method){
	{
		float L_0 = m14389(__this, &m14389_MI);
		float L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t20_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14387_MI;
 void m14387 (t2508 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14388_MI;
 bool m14388 (t2508 * __this, MethodInfo* method){
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
extern MethodInfo m14389_MI;
 float m14389 (t2508 * __this, MethodInfo* method){
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
		float L_8 = m19883(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m19883_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Single>
extern Il2CppType t14_0_0_1;
FieldInfo t2508_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2508_TI, offsetof(t2508, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2508_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2508_TI, offsetof(t2508, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2508_FIs[] =
{
	&t2508_f0_FieldInfo,
	&t2508_f1_FieldInfo,
	NULL
};
extern MethodInfo m14386_MI;
static PropertyInfo t2508____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2508_TI, "System.Collections.IEnumerator.Current", &m14386_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14389_MI;
static PropertyInfo t2508____Current_PropertyInfo = 
{
	&t2508_TI, "Current", &m14389_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2508_PIs[] =
{
	&t2508____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2508____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2508_m14385_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2508_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14385_MI = 
{
	".ctor", (methodPointerType)&m14385, &t2508_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2508_m14385_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2508_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14386_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14386, &t2508_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2508_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14387_MI = 
{
	"Dispose", (methodPointerType)&m14387, &t2508_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2508_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14388_MI = 
{
	"MoveNext", (methodPointerType)&m14388, &t2508_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2508_TI;
extern Il2CppType t20_0_0_0;
extern void* RuntimeInvoker_t20 (MethodInfo* method, void* obj, void** args);
MethodInfo m14389_MI = 
{
	"get_Current", (methodPointerType)&m14389, &t2508_TI, &t20_0_0_0, RuntimeInvoker_t20, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2508_MIs[] =
{
	&m14385_MI,
	&m14386_MI,
	&m14387_MI,
	&m14388_MI,
	&m14389_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m14386_MI;
extern MethodInfo m14388_MI;
extern MethodInfo m14387_MI;
extern MethodInfo m14389_MI;
static MethodInfo* t2508_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m14386_MI,
	&m14388_MI,
	&m14387_MI,
	&m14389_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3500_TI;
static TypeInfo* t2508_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3500_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3500_TI;
static Il2CppInterfaceOffsetPair t2508_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3500_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2508_0_0_0;
extern Il2CppType t2508_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2508_TI;
extern Il2CppGenericClass t2508_GC;
extern TypeInfo t14_TI;
TypeInfo t2508_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2508_MIs, t2508_PIs, t2508_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2508_TI, t2508_ITIs, t2508_VT, &EmptyCustomAttributesCache, &t2508_TI, &t2508_0_0_0, &t2508_1_0_0, t2508_IOs, &t2508_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2508)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4361_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Single>
extern MethodInfo m26179_MI;
static PropertyInfo t4361____Count_PropertyInfo = 
{
	&t4361_TI, "Count", &m26179_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26180_MI;
static PropertyInfo t4361____IsReadOnly_PropertyInfo = 
{
	&t4361_TI, "IsReadOnly", &m26180_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4361_PIs[] =
{
	&t4361____Count_PropertyInfo,
	&t4361____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4361_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26179_MI = 
{
	"get_Count", NULL, &t4361_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4361_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26180_MI = 
{
	"get_IsReadOnly", NULL, &t4361_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t20_0_0_0;
static ParameterInfo t4361_m26181_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t4361_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t20 (MethodInfo* method, void* obj, void** args);
MethodInfo m26181_MI = 
{
	"Add", NULL, &t4361_TI, &t15_0_0_0, RuntimeInvoker_t15_t20, t4361_m26181_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4361_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m26182_MI = 
{
	"Clear", NULL, &t4361_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t20_0_0_0;
static ParameterInfo t4361_m26183_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t4361_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t20 (MethodInfo* method, void* obj, void** args);
MethodInfo m26183_MI = 
{
	"Contains", NULL, &t4361_TI, &t17_0_0_0, RuntimeInvoker_t17_t20, t4361_m26183_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t497_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4361_m26184_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t497_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4361_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26184_MI = 
{
	"CopyTo", NULL, &t4361_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4361_m26184_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t20_0_0_0;
static ParameterInfo t4361_m26185_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t4361_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t20 (MethodInfo* method, void* obj, void** args);
MethodInfo m26185_MI = 
{
	"Remove", NULL, &t4361_TI, &t17_0_0_0, RuntimeInvoker_t17_t20, t4361_m26185_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4361_MIs[] =
{
	&m26179_MI,
	&m26180_MI,
	&m26181_MI,
	&m26182_MI,
	&m26183_MI,
	&m26184_MI,
	&m26185_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4363_TI;
static TypeInfo* t4361_ITIs[] = 
{
	&t591_TI,
	&t4363_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4361_0_0_0;
extern Il2CppType t4361_1_0_0;
struct t4361;
extern TypeInfo t4361_TI;
extern Il2CppGenericClass t4361_GC;
TypeInfo t4361_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4361_MIs, t4361_PIs, NULL, NULL, NULL, NULL, NULL, &t4361_TI, t4361_ITIs, NULL, &EmptyCustomAttributesCache, &t4361_TI, &t4361_0_0_0, &t4361_1_0_0, NULL, &t4361_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4363_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Single>
extern TypeInfo t4363_TI;
extern Il2CppType t3500_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26186_MI = 
{
	"GetEnumerator", NULL, &t4363_TI, &t3500_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4363_MIs[] =
{
	&m26186_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4363_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4363_0_0_0;
extern Il2CppType t4363_1_0_0;
struct t4363;
extern TypeInfo t4363_TI;
extern Il2CppGenericClass t4363_GC;
TypeInfo t4363_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4363_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4363_TI, t4363_ITIs, NULL, &EmptyCustomAttributesCache, &t4363_TI, &t4363_0_0_0, &t4363_1_0_0, NULL, &t4363_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4362_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Single>
extern MethodInfo m26187_MI;
extern MethodInfo m26188_MI;
static PropertyInfo t4362____Item_PropertyInfo = 
{
	&t4362_TI, "Item", &m26187_MI, &m26188_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4362_PIs[] =
{
	&t4362____Item_PropertyInfo,
	NULL
};
extern Il2CppType t20_0_0_0;
static ParameterInfo t4362_m26189_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t4362_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t20 (MethodInfo* method, void* obj, void** args);
MethodInfo m26189_MI = 
{
	"IndexOf", NULL, &t4362_TI, &t16_0_0_0, RuntimeInvoker_t16_t20, t4362_m26189_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t20_0_0_0;
static ParameterInfo t4362_m26190_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t4362_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t20 (MethodInfo* method, void* obj, void** args);
MethodInfo m26190_MI = 
{
	"Insert", NULL, &t4362_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t20, t4362_m26190_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4362_m26191_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4362_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26191_MI = 
{
	"RemoveAt", NULL, &t4362_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4362_m26191_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4362_m26187_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4362_TI;
extern Il2CppType t20_0_0_0;
extern void* RuntimeInvoker_t20_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26187_MI = 
{
	"get_Item", NULL, &t4362_TI, &t20_0_0_0, RuntimeInvoker_t20_t16, t4362_m26187_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t20_0_0_0;
static ParameterInfo t4362_m26188_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t4362_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t20 (MethodInfo* method, void* obj, void** args);
MethodInfo m26188_MI = 
{
	"set_Item", NULL, &t4362_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t20, t4362_m26188_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4362_MIs[] =
{
	&m26189_MI,
	&m26190_MI,
	&m26191_MI,
	&m26187_MI,
	&m26188_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4361_TI;
extern TypeInfo t4363_TI;
static TypeInfo* t4362_ITIs[] = 
{
	&t591_TI,
	&t4361_TI,
	&t4363_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4362_0_0_0;
extern Il2CppType t4362_1_0_0;
struct t4362;
extern TypeInfo t4362_TI;
extern Il2CppGenericClass t4362_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4362_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4362_MIs, t4362_PIs, NULL, NULL, NULL, NULL, NULL, &t4362_TI, t4362_ITIs, NULL, &t1400__CustomAttributeCache, &t4362_TI, &t4362_0_0_0, &t4362_1_0_0, NULL, &t4362_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4364_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>
extern MethodInfo m26192_MI;
static PropertyInfo t4364____Count_PropertyInfo = 
{
	&t4364_TI, "Count", &m26192_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26193_MI;
static PropertyInfo t4364____IsReadOnly_PropertyInfo = 
{
	&t4364_TI, "IsReadOnly", &m26193_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4364_PIs[] =
{
	&t4364____Count_PropertyInfo,
	&t4364____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4364_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26192_MI = 
{
	"get_Count", NULL, &t4364_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4364_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26193_MI = 
{
	"get_IsReadOnly", NULL, &t4364_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1370_0_0_0;
static ParameterInfo t4364_m26194_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1370_0_0_0},
};
extern TypeInfo t4364_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26194_MI = 
{
	"Add", NULL, &t4364_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4364_m26194_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4364_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m26195_MI = 
{
	"Clear", NULL, &t4364_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1370_0_0_0;
static ParameterInfo t4364_m26196_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1370_0_0_0},
};
extern TypeInfo t4364_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26196_MI = 
{
	"Contains", NULL, &t4364_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4364_m26196_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2930_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4364_m26197_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2930_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4364_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26197_MI = 
{
	"CopyTo", NULL, &t4364_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4364_m26197_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1370_0_0_0;
static ParameterInfo t4364_m26198_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1370_0_0_0},
};
extern TypeInfo t4364_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26198_MI = 
{
	"Remove", NULL, &t4364_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4364_m26198_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4364_MIs[] =
{
	&m26192_MI,
	&m26193_MI,
	&m26194_MI,
	&m26195_MI,
	&m26196_MI,
	&m26197_MI,
	&m26198_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4366_TI;
static TypeInfo* t4364_ITIs[] = 
{
	&t591_TI,
	&t4366_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4364_0_0_0;
extern Il2CppType t4364_1_0_0;
struct t4364;
extern TypeInfo t4364_TI;
extern Il2CppGenericClass t4364_GC;
TypeInfo t4364_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4364_MIs, t4364_PIs, NULL, NULL, NULL, NULL, NULL, &t4364_TI, t4364_ITIs, NULL, &EmptyCustomAttributesCache, &t4364_TI, &t4364_0_0_0, &t4364_1_0_0, NULL, &t4364_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4366_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Single>>
extern TypeInfo t4366_TI;
extern Il2CppType t3501_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26199_MI = 
{
	"GetEnumerator", NULL, &t4366_TI, &t3501_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4366_MIs[] =
{
	&m26199_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4366_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4366_0_0_0;
extern Il2CppType t4366_1_0_0;
struct t4366;
extern TypeInfo t4366_TI;
extern Il2CppGenericClass t4366_GC;
TypeInfo t4366_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4366_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4366_TI, t4366_ITIs, NULL, &EmptyCustomAttributesCache, &t4366_TI, &t4366_0_0_0, &t4366_1_0_0, NULL, &t4366_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3501_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Single>>
extern MethodInfo m26200_MI;
static PropertyInfo t3501____Current_PropertyInfo = 
{
	&t3501_TI, "Current", &m26200_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3501_PIs[] =
{
	&t3501____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3501_TI;
extern Il2CppType t1370_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26200_MI = 
{
	"get_Current", NULL, &t3501_TI, &t1370_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3501_MIs[] =
{
	&m26200_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3501_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3501_0_0_0;
extern Il2CppType t3501_1_0_0;
struct t3501;
extern TypeInfo t3501_TI;
extern Il2CppGenericClass t3501_GC;
TypeInfo t3501_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3501_MIs, t3501_PIs, NULL, NULL, NULL, NULL, NULL, &t3501_TI, t3501_ITIs, NULL, &EmptyCustomAttributesCache, &t3501_TI, &t3501_0_0_0, &t3501_1_0_0, NULL, &t3501_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1370_TI;



// Metadata Definition System.IComparable`1<System.Single>
extern Il2CppType t20_0_0_0;
static ParameterInfo t1370_m26201_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t1370_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t20 (MethodInfo* method, void* obj, void** args);
MethodInfo m26201_MI = 
{
	"CompareTo", NULL, &t1370_TI, &t16_0_0_0, RuntimeInvoker_t16_t20, t1370_m26201_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1370_MIs[] =
{
	&m26201_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1370_0_0_0;
extern Il2CppType t1370_1_0_0;
struct t1370;
extern TypeInfo t1370_TI;
extern Il2CppGenericClass t1370_GC;
TypeInfo t1370_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1370_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1370_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1370_TI, &t1370_0_0_0, &t1370_1_0_0, NULL, &t1370_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2509.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2509_TI;
#include "t2509MD.h"

extern TypeInfo t2509_TI;
extern TypeInfo t1370_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m14394_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m19894_MI;
struct t14;
struct t14;
 t4 * m16794_gshared (t14 * __this, int32_t p0, MethodInfo* method);
#define m16794(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
#define m19894(__this, p0, method) (t4*)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m19894_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>
extern Il2CppType t14_0_0_1;
FieldInfo t2509_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2509_TI, offsetof(t2509, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2509_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2509_TI, offsetof(t2509, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2509_FIs[] =
{
	&t2509_f0_FieldInfo,
	&t2509_f1_FieldInfo,
	NULL
};
extern MethodInfo m14391_MI;
static PropertyInfo t2509____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2509_TI, "System.Collections.IEnumerator.Current", &m14391_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14394_MI;
static PropertyInfo t2509____Current_PropertyInfo = 
{
	&t2509_TI, "Current", &m14394_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2509_PIs[] =
{
	&t2509____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2509____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2509_m14390_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2509_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14390_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2509_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2509_m14390_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2509_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14391_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2509_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2509_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14392_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2509_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2509_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14393_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2509_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2509_TI;
extern Il2CppType t1370_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14394_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2509_TI, &t1370_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2509_MIs[] =
{
	&m14390_MI,
	&m14391_MI,
	&m14392_MI,
	&m14393_MI,
	&m14394_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m14391_MI;
extern MethodInfo m14393_MI;
extern MethodInfo m14392_MI;
extern MethodInfo m14394_MI;
static MethodInfo* t2509_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m14391_MI,
	&m14393_MI,
	&m14392_MI,
	&m14394_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3501_TI;
static TypeInfo* t2509_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3501_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3501_TI;
static Il2CppInterfaceOffsetPair t2509_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3501_TI, 7},
};
extern MethodInfo m14394_MI;
extern TypeInfo t1370_TI;
extern MethodInfo m19894_MI;
static void* t2509_RGCTXData[3] = 
{
	&m14394_MI,
	&t1370_TI,
	&m19894_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2509_0_0_0;
extern Il2CppType t2509_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2509_TI;
extern Il2CppGenericClass t2509_GC;
extern TypeInfo t14_TI;
TypeInfo t2509_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2509_MIs, t2509_PIs, t2509_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2509_TI, t2509_ITIs, t2509_VT, &EmptyCustomAttributesCache, &t2509_TI, &t2509_0_0_0, &t2509_1_0_0, t2509_IOs, &t2509_GC, NULL, NULL, NULL, t2509_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2509)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4365_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>
extern MethodInfo m26202_MI;
extern MethodInfo m26203_MI;
static PropertyInfo t4365____Item_PropertyInfo = 
{
	&t4365_TI, "Item", &m26202_MI, &m26203_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4365_PIs[] =
{
	&t4365____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1370_0_0_0;
static ParameterInfo t4365_m26204_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1370_0_0_0},
};
extern TypeInfo t4365_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26204_MI = 
{
	"IndexOf", NULL, &t4365_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4365_m26204_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1370_0_0_0;
static ParameterInfo t4365_m26205_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1370_0_0_0},
};
extern TypeInfo t4365_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26205_MI = 
{
	"Insert", NULL, &t4365_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4365_m26205_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4365_m26206_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4365_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26206_MI = 
{
	"RemoveAt", NULL, &t4365_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4365_m26206_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4365_m26202_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4365_TI;
extern Il2CppType t1370_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26202_MI = 
{
	"get_Item", NULL, &t4365_TI, &t1370_0_0_0, RuntimeInvoker_t4_t16, t4365_m26202_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1370_0_0_0;
static ParameterInfo t4365_m26203_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1370_0_0_0},
};
extern TypeInfo t4365_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26203_MI = 
{
	"set_Item", NULL, &t4365_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4365_m26203_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4365_MIs[] =
{
	&m26204_MI,
	&m26205_MI,
	&m26206_MI,
	&m26202_MI,
	&m26203_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4364_TI;
extern TypeInfo t4366_TI;
static TypeInfo* t4365_ITIs[] = 
{
	&t591_TI,
	&t4364_TI,
	&t4366_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4365_0_0_0;
extern Il2CppType t4365_1_0_0;
struct t4365;
extern TypeInfo t4365_TI;
extern Il2CppGenericClass t4365_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4365_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4365_MIs, t4365_PIs, NULL, NULL, NULL, NULL, NULL, &t4365_TI, t4365_ITIs, NULL, &t1400__CustomAttributeCache, &t4365_TI, &t4365_0_0_0, &t4365_1_0_0, NULL, &t4365_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4367_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>
extern MethodInfo m26207_MI;
static PropertyInfo t4367____Count_PropertyInfo = 
{
	&t4367_TI, "Count", &m26207_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26208_MI;
static PropertyInfo t4367____IsReadOnly_PropertyInfo = 
{
	&t4367_TI, "IsReadOnly", &m26208_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4367_PIs[] =
{
	&t4367____Count_PropertyInfo,
	&t4367____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4367_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26207_MI = 
{
	"get_Count", NULL, &t4367_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4367_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26208_MI = 
{
	"get_IsReadOnly", NULL, &t4367_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1371_0_0_0;
static ParameterInfo t4367_m26209_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1371_0_0_0},
};
extern TypeInfo t4367_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26209_MI = 
{
	"Add", NULL, &t4367_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4367_m26209_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4367_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m26210_MI = 
{
	"Clear", NULL, &t4367_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1371_0_0_0;
static ParameterInfo t4367_m26211_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1371_0_0_0},
};
extern TypeInfo t4367_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26211_MI = 
{
	"Contains", NULL, &t4367_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4367_m26211_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2931_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4367_m26212_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2931_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4367_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26212_MI = 
{
	"CopyTo", NULL, &t4367_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4367_m26212_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1371_0_0_0;
static ParameterInfo t4367_m26213_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1371_0_0_0},
};
extern TypeInfo t4367_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26213_MI = 
{
	"Remove", NULL, &t4367_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4367_m26213_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4367_MIs[] =
{
	&m26207_MI,
	&m26208_MI,
	&m26209_MI,
	&m26210_MI,
	&m26211_MI,
	&m26212_MI,
	&m26213_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4369_TI;
static TypeInfo* t4367_ITIs[] = 
{
	&t591_TI,
	&t4369_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4367_0_0_0;
extern Il2CppType t4367_1_0_0;
struct t4367;
extern TypeInfo t4367_TI;
extern Il2CppGenericClass t4367_GC;
TypeInfo t4367_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4367_MIs, t4367_PIs, NULL, NULL, NULL, NULL, NULL, &t4367_TI, t4367_ITIs, NULL, &EmptyCustomAttributesCache, &t4367_TI, &t4367_0_0_0, &t4367_1_0_0, NULL, &t4367_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4369_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Single>>
extern TypeInfo t4369_TI;
extern Il2CppType t3502_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26214_MI = 
{
	"GetEnumerator", NULL, &t4369_TI, &t3502_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4369_MIs[] =
{
	&m26214_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4369_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4369_0_0_0;
extern Il2CppType t4369_1_0_0;
struct t4369;
extern TypeInfo t4369_TI;
extern Il2CppGenericClass t4369_GC;
TypeInfo t4369_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4369_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4369_TI, t4369_ITIs, NULL, &EmptyCustomAttributesCache, &t4369_TI, &t4369_0_0_0, &t4369_1_0_0, NULL, &t4369_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3502_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Single>>
extern MethodInfo m26215_MI;
static PropertyInfo t3502____Current_PropertyInfo = 
{
	&t3502_TI, "Current", &m26215_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3502_PIs[] =
{
	&t3502____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3502_TI;
extern Il2CppType t1371_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26215_MI = 
{
	"get_Current", NULL, &t3502_TI, &t1371_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3502_MIs[] =
{
	&m26215_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3502_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3502_0_0_0;
extern Il2CppType t3502_1_0_0;
struct t3502;
extern TypeInfo t3502_TI;
extern Il2CppGenericClass t3502_GC;
TypeInfo t3502_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3502_MIs, t3502_PIs, NULL, NULL, NULL, NULL, NULL, &t3502_TI, t3502_ITIs, NULL, &EmptyCustomAttributesCache, &t3502_TI, &t3502_0_0_0, &t3502_1_0_0, NULL, &t3502_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1371_TI;



// Metadata Definition System.IEquatable`1<System.Single>
extern Il2CppType t20_0_0_0;
static ParameterInfo t1371_m26216_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t1371_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t20 (MethodInfo* method, void* obj, void** args);
MethodInfo m26216_MI = 
{
	"Equals", NULL, &t1371_TI, &t17_0_0_0, RuntimeInvoker_t17_t20, t1371_m26216_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1371_MIs[] =
{
	&m26216_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1371_0_0_0;
extern Il2CppType t1371_1_0_0;
struct t1371;
extern TypeInfo t1371_TI;
extern Il2CppGenericClass t1371_GC;
TypeInfo t1371_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1371_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1371_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1371_TI, &t1371_0_0_0, &t1371_1_0_0, NULL, &t1371_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2510.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2510_TI;
#include "t2510MD.h"

extern TypeInfo t2510_TI;
extern TypeInfo t1371_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m14399_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m19905_MI;
struct t14;
#define m19905(__this, p0, method) (t4*)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m19905_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>
extern Il2CppType t14_0_0_1;
FieldInfo t2510_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2510_TI, offsetof(t2510, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2510_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2510_TI, offsetof(t2510, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2510_FIs[] =
{
	&t2510_f0_FieldInfo,
	&t2510_f1_FieldInfo,
	NULL
};
extern MethodInfo m14396_MI;
static PropertyInfo t2510____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2510_TI, "System.Collections.IEnumerator.Current", &m14396_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14399_MI;
static PropertyInfo t2510____Current_PropertyInfo = 
{
	&t2510_TI, "Current", &m14399_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2510_PIs[] =
{
	&t2510____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2510____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2510_m14395_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2510_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14395_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2510_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2510_m14395_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2510_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14396_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2510_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2510_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14397_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2510_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2510_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14398_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2510_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2510_TI;
extern Il2CppType t1371_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14399_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2510_TI, &t1371_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2510_MIs[] =
{
	&m14395_MI,
	&m14396_MI,
	&m14397_MI,
	&m14398_MI,
	&m14399_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m14396_MI;
extern MethodInfo m14398_MI;
extern MethodInfo m14397_MI;
extern MethodInfo m14399_MI;
static MethodInfo* t2510_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m14396_MI,
	&m14398_MI,
	&m14397_MI,
	&m14399_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3502_TI;
static TypeInfo* t2510_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3502_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3502_TI;
static Il2CppInterfaceOffsetPair t2510_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3502_TI, 7},
};
extern MethodInfo m14399_MI;
extern TypeInfo t1371_TI;
extern MethodInfo m19905_MI;
static void* t2510_RGCTXData[3] = 
{
	&m14399_MI,
	&t1371_TI,
	&m19905_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2510_0_0_0;
extern Il2CppType t2510_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2510_TI;
extern Il2CppGenericClass t2510_GC;
extern TypeInfo t14_TI;
TypeInfo t2510_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2510_MIs, t2510_PIs, t2510_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2510_TI, t2510_ITIs, t2510_VT, &EmptyCustomAttributesCache, &t2510_TI, &t2510_0_0_0, &t2510_1_0_0, t2510_IOs, &t2510_GC, NULL, NULL, NULL, t2510_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2510)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4368_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>
extern MethodInfo m26217_MI;
extern MethodInfo m26218_MI;
static PropertyInfo t4368____Item_PropertyInfo = 
{
	&t4368_TI, "Item", &m26217_MI, &m26218_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4368_PIs[] =
{
	&t4368____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1371_0_0_0;
static ParameterInfo t4368_m26219_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1371_0_0_0},
};
extern TypeInfo t4368_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26219_MI = 
{
	"IndexOf", NULL, &t4368_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4368_m26219_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1371_0_0_0;
static ParameterInfo t4368_m26220_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1371_0_0_0},
};
extern TypeInfo t4368_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26220_MI = 
{
	"Insert", NULL, &t4368_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4368_m26220_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4368_m26221_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4368_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26221_MI = 
{
	"RemoveAt", NULL, &t4368_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4368_m26221_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4368_m26217_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4368_TI;
extern Il2CppType t1371_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26217_MI = 
{
	"get_Item", NULL, &t4368_TI, &t1371_0_0_0, RuntimeInvoker_t4_t16, t4368_m26217_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1371_0_0_0;
static ParameterInfo t4368_m26218_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1371_0_0_0},
};
extern TypeInfo t4368_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26218_MI = 
{
	"set_Item", NULL, &t4368_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4368_m26218_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4368_MIs[] =
{
	&m26219_MI,
	&m26220_MI,
	&m26221_MI,
	&m26217_MI,
	&m26218_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4367_TI;
extern TypeInfo t4369_TI;
static TypeInfo* t4368_ITIs[] = 
{
	&t591_TI,
	&t4367_TI,
	&t4369_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4368_0_0_0;
extern Il2CppType t4368_1_0_0;
struct t4368;
extern TypeInfo t4368_TI;
extern Il2CppGenericClass t4368_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4368_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4368_MIs, t4368_PIs, NULL, NULL, NULL, NULL, NULL, &t4368_TI, t4368_ITIs, NULL, &t1400__CustomAttributeCache, &t4368_TI, &t4368_0_0_0, &t4368_1_0_0, NULL, &t4368_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3503_TI;

#include "t500.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationEventSource>
extern MethodInfo m26222_MI;
static PropertyInfo t3503____Current_PropertyInfo = 
{
	&t3503_TI, "Current", &m26222_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3503_PIs[] =
{
	&t3503____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3503_TI;
extern Il2CppType t500_0_0_0;
extern void* RuntimeInvoker_t500 (MethodInfo* method, void* obj, void** args);
MethodInfo m26222_MI = 
{
	"get_Current", NULL, &t3503_TI, &t500_0_0_0, RuntimeInvoker_t500, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3503_MIs[] =
{
	&m26222_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3503_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3503_0_0_0;
extern Il2CppType t3503_1_0_0;
struct t3503;
extern TypeInfo t3503_TI;
extern Il2CppGenericClass t3503_GC;
TypeInfo t3503_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3503_MIs, t3503_PIs, NULL, NULL, NULL, NULL, NULL, &t3503_TI, t3503_ITIs, NULL, &EmptyCustomAttributesCache, &t3503_TI, &t3503_0_0_0, &t3503_1_0_0, NULL, &t3503_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2511.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2511_TI;
#include "t2511MD.h"

extern TypeInfo t2511_TI;
extern TypeInfo t500_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m14404_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m19916_MI;
struct t14;
 int32_t m19916 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m19916_MI;


extern MethodInfo m14400_MI;
 void m14400 (t2511 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14401_MI;
 t4 * m14401 (t2511 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14404(__this, &m14404_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t500_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14402_MI;
 void m14402 (t2511 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14403_MI;
 bool m14403 (t2511 * __this, MethodInfo* method){
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
extern MethodInfo m14404_MI;
 int32_t m14404 (t2511 * __this, MethodInfo* method){
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
		int32_t L_8 = m19916(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m19916_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.AnimationEventSource>
extern Il2CppType t14_0_0_1;
FieldInfo t2511_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2511_TI, offsetof(t2511, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2511_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2511_TI, offsetof(t2511, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2511_FIs[] =
{
	&t2511_f0_FieldInfo,
	&t2511_f1_FieldInfo,
	NULL
};
extern MethodInfo m14401_MI;
static PropertyInfo t2511____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2511_TI, "System.Collections.IEnumerator.Current", &m14401_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14404_MI;
static PropertyInfo t2511____Current_PropertyInfo = 
{
	&t2511_TI, "Current", &m14404_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2511_PIs[] =
{
	&t2511____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2511____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2511_m14400_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2511_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14400_MI = 
{
	".ctor", (methodPointerType)&m14400, &t2511_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2511_m14400_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2511_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14401_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14401, &t2511_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2511_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14402_MI = 
{
	"Dispose", (methodPointerType)&m14402, &t2511_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2511_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14403_MI = 
{
	"MoveNext", (methodPointerType)&m14403, &t2511_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2511_TI;
extern Il2CppType t500_0_0_0;
extern void* RuntimeInvoker_t500 (MethodInfo* method, void* obj, void** args);
MethodInfo m14404_MI = 
{
	"get_Current", (methodPointerType)&m14404, &t2511_TI, &t500_0_0_0, RuntimeInvoker_t500, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2511_MIs[] =
{
	&m14400_MI,
	&m14401_MI,
	&m14402_MI,
	&m14403_MI,
	&m14404_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m14401_MI;
extern MethodInfo m14403_MI;
extern MethodInfo m14402_MI;
extern MethodInfo m14404_MI;
static MethodInfo* t2511_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m14401_MI,
	&m14403_MI,
	&m14402_MI,
	&m14404_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3503_TI;
static TypeInfo* t2511_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3503_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3503_TI;
static Il2CppInterfaceOffsetPair t2511_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3503_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2511_0_0_0;
extern Il2CppType t2511_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2511_TI;
extern Il2CppGenericClass t2511_GC;
extern TypeInfo t14_TI;
TypeInfo t2511_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2511_MIs, t2511_PIs, t2511_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2511_TI, t2511_ITIs, t2511_VT, &EmptyCustomAttributesCache, &t2511_TI, &t2511_0_0_0, &t2511_1_0_0, t2511_IOs, &t2511_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2511)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4370_TI;

#include "UnityEngine_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.AnimationEventSource>
extern MethodInfo m26223_MI;
static PropertyInfo t4370____Count_PropertyInfo = 
{
	&t4370_TI, "Count", &m26223_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26224_MI;
static PropertyInfo t4370____IsReadOnly_PropertyInfo = 
{
	&t4370_TI, "IsReadOnly", &m26224_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4370_PIs[] =
{
	&t4370____Count_PropertyInfo,
	&t4370____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4370_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26223_MI = 
{
	"get_Count", NULL, &t4370_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4370_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26224_MI = 
{
	"get_IsReadOnly", NULL, &t4370_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t500_0_0_0;
static ParameterInfo t4370_m26225_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t500_0_0_0},
};
extern TypeInfo t4370_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26225_MI = 
{
	"Add", NULL, &t4370_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4370_m26225_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4370_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m26226_MI = 
{
	"Clear", NULL, &t4370_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t500_0_0_0;
static ParameterInfo t4370_m26227_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t500_0_0_0},
};
extern TypeInfo t4370_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26227_MI = 
{
	"Contains", NULL, &t4370_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4370_m26227_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3141_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4370_m26228_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3141_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4370_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26228_MI = 
{
	"CopyTo", NULL, &t4370_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4370_m26228_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t500_0_0_0;
static ParameterInfo t4370_m26229_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t500_0_0_0},
};
extern TypeInfo t4370_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26229_MI = 
{
	"Remove", NULL, &t4370_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4370_m26229_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4370_MIs[] =
{
	&m26223_MI,
	&m26224_MI,
	&m26225_MI,
	&m26226_MI,
	&m26227_MI,
	&m26228_MI,
	&m26229_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4372_TI;
static TypeInfo* t4370_ITIs[] = 
{
	&t591_TI,
	&t4372_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4370_0_0_0;
extern Il2CppType t4370_1_0_0;
struct t4370;
extern TypeInfo t4370_TI;
extern Il2CppGenericClass t4370_GC;
TypeInfo t4370_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4370_MIs, t4370_PIs, NULL, NULL, NULL, NULL, NULL, &t4370_TI, t4370_ITIs, NULL, &EmptyCustomAttributesCache, &t4370_TI, &t4370_0_0_0, &t4370_1_0_0, NULL, &t4370_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4372_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationEventSource>
extern TypeInfo t4372_TI;
extern Il2CppType t3503_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26230_MI = 
{
	"GetEnumerator", NULL, &t4372_TI, &t3503_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4372_MIs[] =
{
	&m26230_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4372_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4372_0_0_0;
extern Il2CppType t4372_1_0_0;
struct t4372;
extern TypeInfo t4372_TI;
extern Il2CppGenericClass t4372_GC;
TypeInfo t4372_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4372_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4372_TI, t4372_ITIs, NULL, &EmptyCustomAttributesCache, &t4372_TI, &t4372_0_0_0, &t4372_1_0_0, NULL, &t4372_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4371_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.AnimationEventSource>
extern MethodInfo m26231_MI;
extern MethodInfo m26232_MI;
static PropertyInfo t4371____Item_PropertyInfo = 
{
	&t4371_TI, "Item", &m26231_MI, &m26232_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4371_PIs[] =
{
	&t4371____Item_PropertyInfo,
	NULL
};
extern Il2CppType t500_0_0_0;
static ParameterInfo t4371_m26233_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t500_0_0_0},
};
extern TypeInfo t4371_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26233_MI = 
{
	"IndexOf", NULL, &t4371_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4371_m26233_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t500_0_0_0;
static ParameterInfo t4371_m26234_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t500_0_0_0},
};
extern TypeInfo t4371_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26234_MI = 
{
	"Insert", NULL, &t4371_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4371_m26234_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4371_m26235_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4371_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26235_MI = 
{
	"RemoveAt", NULL, &t4371_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4371_m26235_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4371_m26231_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4371_TI;
extern Il2CppType t500_0_0_0;
extern void* RuntimeInvoker_t500_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26231_MI = 
{
	"get_Item", NULL, &t4371_TI, &t500_0_0_0, RuntimeInvoker_t500_t16, t4371_m26231_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t500_0_0_0;
static ParameterInfo t4371_m26232_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t500_0_0_0},
};
extern TypeInfo t4371_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26232_MI = 
{
	"set_Item", NULL, &t4371_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4371_m26232_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4371_MIs[] =
{
	&m26233_MI,
	&m26234_MI,
	&m26235_MI,
	&m26231_MI,
	&m26232_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4370_TI;
extern TypeInfo t4372_TI;
static TypeInfo* t4371_ITIs[] = 
{
	&t591_TI,
	&t4370_TI,
	&t4372_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4371_0_0_0;
extern Il2CppType t4371_1_0_0;
struct t4371;
extern TypeInfo t4371_TI;
extern Il2CppGenericClass t4371_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4371_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4371_MIs, t4371_PIs, NULL, NULL, NULL, NULL, NULL, &t4371_TI, t4371_ITIs, NULL, &t1400__CustomAttributeCache, &t4371_TI, &t4371_0_0_0, &t4371_1_0_0, NULL, &t4371_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3504_TI;

#include "t505.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Keyframe>
extern MethodInfo m26236_MI;
static PropertyInfo t3504____Current_PropertyInfo = 
{
	&t3504_TI, "Current", &m26236_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3504_PIs[] =
{
	&t3504____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3504_TI;
extern Il2CppType t505_0_0_0;
extern void* RuntimeInvoker_t505 (MethodInfo* method, void* obj, void** args);
MethodInfo m26236_MI = 
{
	"get_Current", NULL, &t3504_TI, &t505_0_0_0, RuntimeInvoker_t505, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3504_MIs[] =
{
	&m26236_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3504_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3504_0_0_0;
extern Il2CppType t3504_1_0_0;
struct t3504;
extern TypeInfo t3504_TI;
extern Il2CppGenericClass t3504_GC;
TypeInfo t3504_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3504_MIs, t3504_PIs, NULL, NULL, NULL, NULL, NULL, &t3504_TI, t3504_ITIs, NULL, &EmptyCustomAttributesCache, &t3504_TI, &t3504_0_0_0, &t3504_1_0_0, NULL, &t3504_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2512.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2512_TI;
#include "t2512MD.h"

extern TypeInfo t2512_TI;
extern TypeInfo t505_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m14409_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m19927_MI;
struct t14;
 t505  m19927 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m19927_MI;


extern MethodInfo m14405_MI;
 void m14405 (t2512 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14406_MI;
 t4 * m14406 (t2512 * __this, MethodInfo* method){
	{
		t505  L_0 = m14409(__this, &m14409_MI);
		t505  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t505_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14407_MI;
 void m14407 (t2512 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14408_MI;
 bool m14408 (t2512 * __this, MethodInfo* method){
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
extern MethodInfo m14409_MI;
 t505  m14409 (t2512 * __this, MethodInfo* method){
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
		t505  L_8 = m19927(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m19927_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
extern Il2CppType t14_0_0_1;
FieldInfo t2512_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2512_TI, offsetof(t2512, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2512_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2512_TI, offsetof(t2512, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2512_FIs[] =
{
	&t2512_f0_FieldInfo,
	&t2512_f1_FieldInfo,
	NULL
};
extern MethodInfo m14406_MI;
static PropertyInfo t2512____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2512_TI, "System.Collections.IEnumerator.Current", &m14406_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14409_MI;
static PropertyInfo t2512____Current_PropertyInfo = 
{
	&t2512_TI, "Current", &m14409_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2512_PIs[] =
{
	&t2512____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2512____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2512_m14405_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2512_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14405_MI = 
{
	".ctor", (methodPointerType)&m14405, &t2512_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2512_m14405_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2512_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14406_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14406, &t2512_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2512_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14407_MI = 
{
	"Dispose", (methodPointerType)&m14407, &t2512_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2512_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14408_MI = 
{
	"MoveNext", (methodPointerType)&m14408, &t2512_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2512_TI;
extern Il2CppType t505_0_0_0;
extern void* RuntimeInvoker_t505 (MethodInfo* method, void* obj, void** args);
MethodInfo m14409_MI = 
{
	"get_Current", (methodPointerType)&m14409, &t2512_TI, &t505_0_0_0, RuntimeInvoker_t505, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2512_MIs[] =
{
	&m14405_MI,
	&m14406_MI,
	&m14407_MI,
	&m14408_MI,
	&m14409_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m14406_MI;
extern MethodInfo m14408_MI;
extern MethodInfo m14407_MI;
extern MethodInfo m14409_MI;
static MethodInfo* t2512_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m14406_MI,
	&m14408_MI,
	&m14407_MI,
	&m14409_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3504_TI;
static TypeInfo* t2512_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3504_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3504_TI;
static Il2CppInterfaceOffsetPair t2512_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3504_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2512_0_0_0;
extern Il2CppType t2512_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2512_TI;
extern Il2CppGenericClass t2512_GC;
extern TypeInfo t14_TI;
TypeInfo t2512_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2512_MIs, t2512_PIs, t2512_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2512_TI, t2512_ITIs, t2512_VT, &EmptyCustomAttributesCache, &t2512_TI, &t2512_0_0_0, &t2512_1_0_0, t2512_IOs, &t2512_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2512)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4373_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>
extern MethodInfo m26237_MI;
static PropertyInfo t4373____Count_PropertyInfo = 
{
	&t4373_TI, "Count", &m26237_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26238_MI;
static PropertyInfo t4373____IsReadOnly_PropertyInfo = 
{
	&t4373_TI, "IsReadOnly", &m26238_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4373_PIs[] =
{
	&t4373____Count_PropertyInfo,
	&t4373____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4373_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26237_MI = 
{
	"get_Count", NULL, &t4373_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4373_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26238_MI = 
{
	"get_IsReadOnly", NULL, &t4373_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t505_0_0_0;
static ParameterInfo t4373_m26239_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t505_0_0_0},
};
extern TypeInfo t4373_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t505 (MethodInfo* method, void* obj, void** args);
MethodInfo m26239_MI = 
{
	"Add", NULL, &t4373_TI, &t15_0_0_0, RuntimeInvoker_t15_t505, t4373_m26239_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4373_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m26240_MI = 
{
	"Clear", NULL, &t4373_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t505_0_0_0;
static ParameterInfo t4373_m26241_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t505_0_0_0},
};
extern TypeInfo t4373_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t505 (MethodInfo* method, void* obj, void** args);
MethodInfo m26241_MI = 
{
	"Contains", NULL, &t4373_TI, &t17_0_0_0, RuntimeInvoker_t17_t505, t4373_m26241_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t507_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4373_m26242_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t507_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4373_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26242_MI = 
{
	"CopyTo", NULL, &t4373_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4373_m26242_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t505_0_0_0;
static ParameterInfo t4373_m26243_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t505_0_0_0},
};
extern TypeInfo t4373_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t505 (MethodInfo* method, void* obj, void** args);
MethodInfo m26243_MI = 
{
	"Remove", NULL, &t4373_TI, &t17_0_0_0, RuntimeInvoker_t17_t505, t4373_m26243_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4373_MIs[] =
{
	&m26237_MI,
	&m26238_MI,
	&m26239_MI,
	&m26240_MI,
	&m26241_MI,
	&m26242_MI,
	&m26243_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4375_TI;
static TypeInfo* t4373_ITIs[] = 
{
	&t591_TI,
	&t4375_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4373_0_0_0;
extern Il2CppType t4373_1_0_0;
struct t4373;
extern TypeInfo t4373_TI;
extern Il2CppGenericClass t4373_GC;
TypeInfo t4373_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4373_MIs, t4373_PIs, NULL, NULL, NULL, NULL, NULL, &t4373_TI, t4373_ITIs, NULL, &EmptyCustomAttributesCache, &t4373_TI, &t4373_0_0_0, &t4373_1_0_0, NULL, &t4373_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4375_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Keyframe>
extern TypeInfo t4375_TI;
extern Il2CppType t3504_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26244_MI = 
{
	"GetEnumerator", NULL, &t4375_TI, &t3504_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4375_MIs[] =
{
	&m26244_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4375_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4375_0_0_0;
extern Il2CppType t4375_1_0_0;
struct t4375;
extern TypeInfo t4375_TI;
extern Il2CppGenericClass t4375_GC;
TypeInfo t4375_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4375_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4375_TI, t4375_ITIs, NULL, &EmptyCustomAttributesCache, &t4375_TI, &t4375_0_0_0, &t4375_1_0_0, NULL, &t4375_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4374_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Keyframe>
extern MethodInfo m26245_MI;
extern MethodInfo m26246_MI;
static PropertyInfo t4374____Item_PropertyInfo = 
{
	&t4374_TI, "Item", &m26245_MI, &m26246_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4374_PIs[] =
{
	&t4374____Item_PropertyInfo,
	NULL
};
extern Il2CppType t505_0_0_0;
static ParameterInfo t4374_m26247_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t505_0_0_0},
};
extern TypeInfo t4374_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t505 (MethodInfo* method, void* obj, void** args);
MethodInfo m26247_MI = 
{
	"IndexOf", NULL, &t4374_TI, &t16_0_0_0, RuntimeInvoker_t16_t505, t4374_m26247_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t505_0_0_0;
static ParameterInfo t4374_m26248_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t505_0_0_0},
};
extern TypeInfo t4374_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t505 (MethodInfo* method, void* obj, void** args);
MethodInfo m26248_MI = 
{
	"Insert", NULL, &t4374_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t505, t4374_m26248_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4374_m26249_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4374_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26249_MI = 
{
	"RemoveAt", NULL, &t4374_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4374_m26249_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4374_m26245_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4374_TI;
extern Il2CppType t505_0_0_0;
extern void* RuntimeInvoker_t505_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26245_MI = 
{
	"get_Item", NULL, &t4374_TI, &t505_0_0_0, RuntimeInvoker_t505_t16, t4374_m26245_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t505_0_0_0;
static ParameterInfo t4374_m26246_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t505_0_0_0},
};
extern TypeInfo t4374_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t505 (MethodInfo* method, void* obj, void** args);
MethodInfo m26246_MI = 
{
	"set_Item", NULL, &t4374_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t505, t4374_m26246_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4374_MIs[] =
{
	&m26247_MI,
	&m26248_MI,
	&m26249_MI,
	&m26245_MI,
	&m26246_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4373_TI;
extern TypeInfo t4375_TI;
static TypeInfo* t4374_ITIs[] = 
{
	&t591_TI,
	&t4373_TI,
	&t4375_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4374_0_0_0;
extern Il2CppType t4374_1_0_0;
struct t4374;
extern TypeInfo t4374_TI;
extern Il2CppGenericClass t4374_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4374_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4374_MIs, t4374_PIs, NULL, NULL, NULL, NULL, NULL, &t4374_TI, t4374_ITIs, NULL, &t1400__CustomAttributeCache, &t4374_TI, &t4374_0_0_0, &t4374_1_0_0, NULL, &t4374_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3505_TI;

#include "t223.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Animator>
extern MethodInfo m26250_MI;
static PropertyInfo t3505____Current_PropertyInfo = 
{
	&t3505_TI, "Current", &m26250_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3505_PIs[] =
{
	&t3505____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3505_TI;
extern Il2CppType t223_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26250_MI = 
{
	"get_Current", NULL, &t3505_TI, &t223_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3505_MIs[] =
{
	&m26250_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3505_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3505_0_0_0;
extern Il2CppType t3505_1_0_0;
struct t3505;
extern TypeInfo t3505_TI;
extern Il2CppGenericClass t3505_GC;
TypeInfo t3505_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3505_MIs, t3505_PIs, NULL, NULL, NULL, NULL, NULL, &t3505_TI, t3505_ITIs, NULL, &EmptyCustomAttributesCache, &t3505_TI, &t3505_0_0_0, &t3505_1_0_0, NULL, &t3505_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2513.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2513_TI;
#include "t2513MD.h"

extern TypeInfo t2513_TI;
extern TypeInfo t223_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m14414_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m19938_MI;
struct t14;
#define m19938(__this, p0, method) (t223 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m19938_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Animator>
extern Il2CppType t14_0_0_1;
FieldInfo t2513_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2513_TI, offsetof(t2513, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2513_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2513_TI, offsetof(t2513, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2513_FIs[] =
{
	&t2513_f0_FieldInfo,
	&t2513_f1_FieldInfo,
	NULL
};
extern MethodInfo m14411_MI;
static PropertyInfo t2513____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2513_TI, "System.Collections.IEnumerator.Current", &m14411_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14414_MI;
static PropertyInfo t2513____Current_PropertyInfo = 
{
	&t2513_TI, "Current", &m14414_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2513_PIs[] =
{
	&t2513____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2513____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2513_m14410_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2513_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14410_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2513_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2513_m14410_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2513_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14411_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2513_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2513_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14412_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2513_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2513_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14413_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2513_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2513_TI;
extern Il2CppType t223_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14414_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2513_TI, &t223_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2513_MIs[] =
{
	&m14410_MI,
	&m14411_MI,
	&m14412_MI,
	&m14413_MI,
	&m14414_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m14411_MI;
extern MethodInfo m14413_MI;
extern MethodInfo m14412_MI;
extern MethodInfo m14414_MI;
static MethodInfo* t2513_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m14411_MI,
	&m14413_MI,
	&m14412_MI,
	&m14414_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3505_TI;
static TypeInfo* t2513_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3505_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3505_TI;
static Il2CppInterfaceOffsetPair t2513_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3505_TI, 7},
};
extern MethodInfo m14414_MI;
extern TypeInfo t223_TI;
extern MethodInfo m19938_MI;
static void* t2513_RGCTXData[3] = 
{
	&m14414_MI,
	&t223_TI,
	&m19938_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2513_0_0_0;
extern Il2CppType t2513_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2513_TI;
extern Il2CppGenericClass t2513_GC;
extern TypeInfo t14_TI;
TypeInfo t2513_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2513_MIs, t2513_PIs, t2513_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2513_TI, t2513_ITIs, t2513_VT, &EmptyCustomAttributesCache, &t2513_TI, &t2513_0_0_0, &t2513_1_0_0, t2513_IOs, &t2513_GC, NULL, NULL, NULL, t2513_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2513)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4376_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Animator>
extern MethodInfo m26251_MI;
static PropertyInfo t4376____Count_PropertyInfo = 
{
	&t4376_TI, "Count", &m26251_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26252_MI;
static PropertyInfo t4376____IsReadOnly_PropertyInfo = 
{
	&t4376_TI, "IsReadOnly", &m26252_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4376_PIs[] =
{
	&t4376____Count_PropertyInfo,
	&t4376____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4376_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26251_MI = 
{
	"get_Count", NULL, &t4376_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4376_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26252_MI = 
{
	"get_IsReadOnly", NULL, &t4376_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t223_0_0_0;
static ParameterInfo t4376_m26253_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t4376_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26253_MI = 
{
	"Add", NULL, &t4376_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4376_m26253_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4376_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m26254_MI = 
{
	"Clear", NULL, &t4376_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t223_0_0_0;
static ParameterInfo t4376_m26255_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t4376_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26255_MI = 
{
	"Contains", NULL, &t4376_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4376_m26255_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3142_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4376_m26256_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3142_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4376_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26256_MI = 
{
	"CopyTo", NULL, &t4376_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4376_m26256_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t223_0_0_0;
static ParameterInfo t4376_m26257_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t4376_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26257_MI = 
{
	"Remove", NULL, &t4376_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4376_m26257_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4376_MIs[] =
{
	&m26251_MI,
	&m26252_MI,
	&m26253_MI,
	&m26254_MI,
	&m26255_MI,
	&m26256_MI,
	&m26257_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4378_TI;
static TypeInfo* t4376_ITIs[] = 
{
	&t591_TI,
	&t4378_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4376_0_0_0;
extern Il2CppType t4376_1_0_0;
struct t4376;
extern TypeInfo t4376_TI;
extern Il2CppGenericClass t4376_GC;
TypeInfo t4376_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4376_MIs, t4376_PIs, NULL, NULL, NULL, NULL, NULL, &t4376_TI, t4376_ITIs, NULL, &EmptyCustomAttributesCache, &t4376_TI, &t4376_0_0_0, &t4376_1_0_0, NULL, &t4376_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4378_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Animator>
extern TypeInfo t4378_TI;
extern Il2CppType t3505_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26258_MI = 
{
	"GetEnumerator", NULL, &t4378_TI, &t3505_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4378_MIs[] =
{
	&m26258_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4378_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4378_0_0_0;
extern Il2CppType t4378_1_0_0;
struct t4378;
extern TypeInfo t4378_TI;
extern Il2CppGenericClass t4378_GC;
TypeInfo t4378_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4378_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4378_TI, t4378_ITIs, NULL, &EmptyCustomAttributesCache, &t4378_TI, &t4378_0_0_0, &t4378_1_0_0, NULL, &t4378_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4377_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Animator>
extern MethodInfo m26259_MI;
extern MethodInfo m26260_MI;
static PropertyInfo t4377____Item_PropertyInfo = 
{
	&t4377_TI, "Item", &m26259_MI, &m26260_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4377_PIs[] =
{
	&t4377____Item_PropertyInfo,
	NULL
};
extern Il2CppType t223_0_0_0;
static ParameterInfo t4377_m26261_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t4377_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26261_MI = 
{
	"IndexOf", NULL, &t4377_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4377_m26261_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t223_0_0_0;
static ParameterInfo t4377_m26262_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t4377_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26262_MI = 
{
	"Insert", NULL, &t4377_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4377_m26262_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4377_m26263_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4377_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26263_MI = 
{
	"RemoveAt", NULL, &t4377_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4377_m26263_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4377_m26259_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4377_TI;
extern Il2CppType t223_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26259_MI = 
{
	"get_Item", NULL, &t4377_TI, &t223_0_0_0, RuntimeInvoker_t4_t16, t4377_m26259_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t223_0_0_0;
static ParameterInfo t4377_m26260_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t4377_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26260_MI = 
{
	"set_Item", NULL, &t4377_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4377_m26260_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4377_MIs[] =
{
	&m26261_MI,
	&m26262_MI,
	&m26263_MI,
	&m26259_MI,
	&m26260_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4376_TI;
extern TypeInfo t4378_TI;
static TypeInfo* t4377_ITIs[] = 
{
	&t591_TI,
	&t4376_TI,
	&t4378_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4377_0_0_0;
extern Il2CppType t4377_1_0_0;
struct t4377;
extern TypeInfo t4377_TI;
extern Il2CppGenericClass t4377_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4377_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4377_MIs, t4377_PIs, NULL, NULL, NULL, NULL, NULL, &t4377_TI, t4377_ITIs, NULL, &t1400__CustomAttributeCache, &t4377_TI, &t4377_0_0_0, &t4377_1_0_0, NULL, &t4377_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2514.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2514_TI;
#include "t2514MD.h"

#include "t23.h"
#include "t545.h"
#include "t2515.h"
extern TypeInfo t305_TI;
extern TypeInfo t4_TI;
extern TypeInfo t2514_TI;
extern TypeInfo t223_TI;
extern TypeInfo t2515_TI;
extern TypeInfo t15_TI;
#include "t2515MD.h"
extern MethodInfo m14417_MI;
extern MethodInfo m14419_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Animator>
extern Il2CppType t305_0_0_33;
FieldInfo t2514_f1_FieldInfo = 
{
	"m_Arg1", &t305_0_0_33, &t2514_TI, offsetof(t2514, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2514_FIs[] =
{
	&t2514_f1_FieldInfo,
	NULL
};
extern Il2CppType t23_0_0_0;
extern Il2CppType t545_0_0_0;
extern Il2CppType t223_0_0_0;
static ParameterInfo t2514_m14415_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t23_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t2514_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14415_MI = 
{
	".ctor", (methodPointerType)&m7873_gshared, &t2514_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4_t4, t2514_m14415_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t2514_m14416_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t2514_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14416_MI = 
{
	"Invoke", (methodPointerType)&m7875_gshared, &t2514_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2514_m14416_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2514_MIs[] =
{
	&m14415_MI,
	&m14416_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14416_MI;
extern MethodInfo m14420_MI;
static MethodInfo* t2514_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14416_MI,
	&m14420_MI,
};
extern Il2CppType t2516_0_0_0;
extern TypeInfo t2516_TI;
extern MethodInfo m19948_MI;
extern TypeInfo t223_TI;
extern MethodInfo m14422_MI;
extern MethodInfo m14417_MI;
extern TypeInfo t223_TI;
extern MethodInfo m14419_MI;
static void* t2514_RGCTXData[8] = 
{
	(void*)&t2516_0_0_0,
	&t2516_TI,
	&m19948_MI,
	&t223_TI,
	&m14422_MI,
	&m14417_MI,
	&t223_TI,
	&m14419_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2514_0_0_0;
extern Il2CppType t2514_1_0_0;
extern TypeInfo t2515_TI;
struct t2514;
extern TypeInfo t2514_TI;
extern Il2CppGenericClass t2514_GC;
TypeInfo t2514_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2514_MIs, NULL, t2514_FIs, NULL, &t2515_TI, NULL, NULL, &t2514_TI, NULL, t2514_VT, &EmptyCustomAttributesCache, &t2514_TI, &t2514_0_0_0, &t2514_1_0_0, NULL, &t2514_GC, NULL, NULL, NULL, t2514_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2514), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2515_TI;

#include "t2516.h"
#include "t290.h"
#include "t291.h"
#include "t343.h"
#include "t303.h"
extern TypeInfo t2515_TI;
extern TypeInfo t2516_TI;
extern TypeInfo t290_TI;
extern TypeInfo t303_TI;
extern TypeInfo t223_TI;
extern TypeInfo t15_TI;
#include "t544MD.h"
#include "t290MD.h"
#include "t343MD.h"
#include "t303MD.h"
#include "t2516MD.h"
extern Il2CppType t2516_0_0_0;
extern MethodInfo m2771_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2934_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m19948_MI;
extern MethodInfo m2772_MI;
extern MethodInfo m14422_MI;
extern MethodInfo m2930_MI;
extern MethodInfo m2928_MI;
struct t544;
#include "t544.h"
struct t544;
 void m16859_gshared (t4 * __this, t4 * p0, MethodInfo* method);
#define m16859(__this, p0, method) (void)m16859_gshared((t4 *)__this, (t4 *)p0, method)
#define m19948(__this, p0, method) (void)m16859_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m19948_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Animator>
extern Il2CppType t2516_0_0_1;
FieldInfo t2515_f0_FieldInfo = 
{
	"Delegate", &t2516_0_0_1, &t2515_TI, offsetof(t2515, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2515_FIs[] =
{
	&t2515_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t2515_m14417_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t2515_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14417_MI = 
{
	".ctor", (methodPointerType)&m7876_gshared, &t2515_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t2515_m14417_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2516_0_0_0;
static ParameterInfo t2515_m14418_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2516_0_0_0},
};
extern TypeInfo t2515_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14418_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2515_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2515_m14418_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t2515_m14419_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t2515_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14419_MI = 
{
	"Invoke", (methodPointerType)&m7878_gshared, &t2515_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2515_m14419_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t2515_m14420_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t2515_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14420_MI = 
{
	"Find", (methodPointerType)&m7879_gshared, &t2515_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2515_m14420_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2515_MIs[] =
{
	&m14417_MI,
	&m14418_MI,
	&m14419_MI,
	&m14420_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14419_MI;
extern MethodInfo m14420_MI;
static MethodInfo* t2515_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14419_MI,
	&m14420_MI,
};
extern Il2CppType t2516_0_0_0;
extern TypeInfo t2516_TI;
extern MethodInfo m19948_MI;
extern TypeInfo t223_TI;
extern MethodInfo m14422_MI;
static void* t2515_RGCTXData[5] = 
{
	(void*)&t2516_0_0_0,
	&t2516_TI,
	&m19948_MI,
	&t223_TI,
	&m14422_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2515_0_0_0;
extern Il2CppType t2515_1_0_0;
extern TypeInfo t544_TI;
struct t2515;
extern TypeInfo t2515_TI;
extern Il2CppGenericClass t2515_GC;
TypeInfo t2515_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2515_MIs, NULL, t2515_FIs, NULL, &t544_TI, NULL, NULL, &t2515_TI, NULL, t2515_VT, &EmptyCustomAttributesCache, &t2515_TI, &t2515_0_0_0, &t2515_1_0_0, NULL, &t2515_GC, NULL, NULL, NULL, t2515_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2515), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2516_TI;

#include "t50.h"
#include "t49.h"


// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Animator>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t2516_m14421_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t2516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m14421_MI = 
{
	".ctor", (methodPointerType)&m7880_gshared, &t2516_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t2516_m14421_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t223_0_0_0;
static ParameterInfo t2516_m14422_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t2516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14422_MI = 
{
	"Invoke", (methodPointerType)&m7881_gshared, &t2516_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2516_m14422_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t223_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2516_m14423_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2516_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14423_MI = 
{
	"BeginInvoke", (methodPointerType)&m7882_gshared, &t2516_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2516_m14423_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t2516_m14424_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t2516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14424_MI = 
{
	"EndInvoke", (methodPointerType)&m7883_gshared, &t2516_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2516_m14424_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2516_MIs[] =
{
	&m14421_MI,
	&m14422_MI,
	&m14423_MI,
	&m14424_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m14422_MI;
extern MethodInfo m14423_MI;
extern MethodInfo m14424_MI;
static MethodInfo* t2516_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m14422_MI,
	&m14423_MI,
	&m14424_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t2516_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2516_0_0_0;
extern Il2CppType t2516_1_0_0;
extern TypeInfo t189_TI;
struct t2516;
extern TypeInfo t2516_TI;
extern Il2CppGenericClass t2516_GC;
TypeInfo t2516_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2516_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t2516_TI, NULL, t2516_VT, &EmptyCustomAttributesCache, &t2516_TI, &t2516_0_0_0, &t2516_1_0_0, t2516_IOs, &t2516_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2516), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3506_TI;

#include "t389.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.RuntimeAnimatorController>
extern MethodInfo m26264_MI;
static PropertyInfo t3506____Current_PropertyInfo = 
{
	&t3506_TI, "Current", &m26264_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3506_PIs[] =
{
	&t3506____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3506_TI;
extern Il2CppType t389_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26264_MI = 
{
	"get_Current", NULL, &t3506_TI, &t389_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3506_MIs[] =
{
	&m26264_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3506_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3506_0_0_0;
extern Il2CppType t3506_1_0_0;
struct t3506;
extern TypeInfo t3506_TI;
extern Il2CppGenericClass t3506_GC;
TypeInfo t3506_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3506_MIs, t3506_PIs, NULL, NULL, NULL, NULL, NULL, &t3506_TI, t3506_ITIs, NULL, &EmptyCustomAttributesCache, &t3506_TI, &t3506_0_0_0, &t3506_1_0_0, NULL, &t3506_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2517.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2517_TI;
#include "t2517MD.h"

extern TypeInfo t2517_TI;
extern TypeInfo t389_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m14429_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m19950_MI;
struct t14;
#define m19950(__this, p0, method) (t389 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m19950_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.RuntimeAnimatorController>
extern Il2CppType t14_0_0_1;
FieldInfo t2517_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2517_TI, offsetof(t2517, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2517_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2517_TI, offsetof(t2517, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2517_FIs[] =
{
	&t2517_f0_FieldInfo,
	&t2517_f1_FieldInfo,
	NULL
};
extern MethodInfo m14426_MI;
static PropertyInfo t2517____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2517_TI, "System.Collections.IEnumerator.Current", &m14426_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14429_MI;
static PropertyInfo t2517____Current_PropertyInfo = 
{
	&t2517_TI, "Current", &m14429_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2517_PIs[] =
{
	&t2517____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2517____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2517_m14425_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14425_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2517_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2517_m14425_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2517_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14426_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2517_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14427_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2517_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2517_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14428_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2517_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2517_TI;
extern Il2CppType t389_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14429_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2517_TI, &t389_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2517_MIs[] =
{
	&m14425_MI,
	&m14426_MI,
	&m14427_MI,
	&m14428_MI,
	&m14429_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m14426_MI;
extern MethodInfo m14428_MI;
extern MethodInfo m14427_MI;
extern MethodInfo m14429_MI;
static MethodInfo* t2517_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m14426_MI,
	&m14428_MI,
	&m14427_MI,
	&m14429_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3506_TI;
static TypeInfo* t2517_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3506_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3506_TI;
static Il2CppInterfaceOffsetPair t2517_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3506_TI, 7},
};
extern MethodInfo m14429_MI;
extern TypeInfo t389_TI;
extern MethodInfo m19950_MI;
static void* t2517_RGCTXData[3] = 
{
	&m14429_MI,
	&t389_TI,
	&m19950_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2517_0_0_0;
extern Il2CppType t2517_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2517_TI;
extern Il2CppGenericClass t2517_GC;
extern TypeInfo t14_TI;
TypeInfo t2517_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2517_MIs, t2517_PIs, t2517_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2517_TI, t2517_ITIs, t2517_VT, &EmptyCustomAttributesCache, &t2517_TI, &t2517_0_0_0, &t2517_1_0_0, t2517_IOs, &t2517_GC, NULL, NULL, NULL, t2517_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2517)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4379_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.RuntimeAnimatorController>
extern MethodInfo m26265_MI;
static PropertyInfo t4379____Count_PropertyInfo = 
{
	&t4379_TI, "Count", &m26265_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26266_MI;
static PropertyInfo t4379____IsReadOnly_PropertyInfo = 
{
	&t4379_TI, "IsReadOnly", &m26266_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4379_PIs[] =
{
	&t4379____Count_PropertyInfo,
	&t4379____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4379_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26265_MI = 
{
	"get_Count", NULL, &t4379_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4379_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26266_MI = 
{
	"get_IsReadOnly", NULL, &t4379_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t389_0_0_0;
static ParameterInfo t4379_m26267_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
};
extern TypeInfo t4379_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26267_MI = 
{
	"Add", NULL, &t4379_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4379_m26267_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4379_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m26268_MI = 
{
	"Clear", NULL, &t4379_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t389_0_0_0;
static ParameterInfo t4379_m26269_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
};
extern TypeInfo t4379_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26269_MI = 
{
	"Contains", NULL, &t4379_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4379_m26269_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3143_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4379_m26270_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3143_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4379_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26270_MI = 
{
	"CopyTo", NULL, &t4379_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4379_m26270_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t389_0_0_0;
static ParameterInfo t4379_m26271_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
};
extern TypeInfo t4379_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26271_MI = 
{
	"Remove", NULL, &t4379_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4379_m26271_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4379_MIs[] =
{
	&m26265_MI,
	&m26266_MI,
	&m26267_MI,
	&m26268_MI,
	&m26269_MI,
	&m26270_MI,
	&m26271_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4381_TI;
static TypeInfo* t4379_ITIs[] = 
{
	&t591_TI,
	&t4381_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4379_0_0_0;
extern Il2CppType t4379_1_0_0;
struct t4379;
extern TypeInfo t4379_TI;
extern Il2CppGenericClass t4379_GC;
TypeInfo t4379_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4379_MIs, t4379_PIs, NULL, NULL, NULL, NULL, NULL, &t4379_TI, t4379_ITIs, NULL, &EmptyCustomAttributesCache, &t4379_TI, &t4379_0_0_0, &t4379_1_0_0, NULL, &t4379_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4381_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.RuntimeAnimatorController>
extern TypeInfo t4381_TI;
extern Il2CppType t3506_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26272_MI = 
{
	"GetEnumerator", NULL, &t4381_TI, &t3506_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4381_MIs[] =
{
	&m26272_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4381_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4381_0_0_0;
extern Il2CppType t4381_1_0_0;
struct t4381;
extern TypeInfo t4381_TI;
extern Il2CppGenericClass t4381_GC;
TypeInfo t4381_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4381_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4381_TI, t4381_ITIs, NULL, &EmptyCustomAttributesCache, &t4381_TI, &t4381_0_0_0, &t4381_1_0_0, NULL, &t4381_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4380_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.RuntimeAnimatorController>
extern MethodInfo m26273_MI;
extern MethodInfo m26274_MI;
static PropertyInfo t4380____Item_PropertyInfo = 
{
	&t4380_TI, "Item", &m26273_MI, &m26274_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4380_PIs[] =
{
	&t4380____Item_PropertyInfo,
	NULL
};
extern Il2CppType t389_0_0_0;
static ParameterInfo t4380_m26275_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
};
extern TypeInfo t4380_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26275_MI = 
{
	"IndexOf", NULL, &t4380_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4380_m26275_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t389_0_0_0;
static ParameterInfo t4380_m26276_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
};
extern TypeInfo t4380_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26276_MI = 
{
	"Insert", NULL, &t4380_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4380_m26276_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4380_m26277_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4380_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26277_MI = 
{
	"RemoveAt", NULL, &t4380_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4380_m26277_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4380_m26273_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4380_TI;
extern Il2CppType t389_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26273_MI = 
{
	"get_Item", NULL, &t4380_TI, &t389_0_0_0, RuntimeInvoker_t4_t16, t4380_m26273_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t389_0_0_0;
static ParameterInfo t4380_m26274_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
};
extern TypeInfo t4380_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26274_MI = 
{
	"set_Item", NULL, &t4380_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4380_m26274_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4380_MIs[] =
{
	&m26275_MI,
	&m26276_MI,
	&m26277_MI,
	&m26273_MI,
	&m26274_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4379_TI;
extern TypeInfo t4381_TI;
static TypeInfo* t4380_ITIs[] = 
{
	&t591_TI,
	&t4379_TI,
	&t4381_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4380_0_0_0;
extern Il2CppType t4380_1_0_0;
struct t4380;
extern TypeInfo t4380_TI;
extern Il2CppGenericClass t4380_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4380_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4380_MIs, t4380_PIs, NULL, NULL, NULL, NULL, NULL, &t4380_TI, t4380_ITIs, NULL, &t1400__CustomAttributeCache, &t4380_TI, &t4380_0_0_0, &t4380_1_0_0, NULL, &t4380_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2518.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2518_TI;
#include "t2518MD.h"

#include "t2519.h"
extern TypeInfo t305_TI;
extern TypeInfo t4_TI;
extern TypeInfo t2518_TI;
extern TypeInfo t389_TI;
extern TypeInfo t2519_TI;
extern TypeInfo t15_TI;
#include "t2519MD.h"
extern MethodInfo m14432_MI;
extern MethodInfo m14434_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.RuntimeAnimatorController>
extern Il2CppType t305_0_0_33;
FieldInfo t2518_f1_FieldInfo = 
{
	"m_Arg1", &t305_0_0_33, &t2518_TI, offsetof(t2518, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2518_FIs[] =
{
	&t2518_f1_FieldInfo,
	NULL
};
extern Il2CppType t23_0_0_0;
extern Il2CppType t545_0_0_0;
extern Il2CppType t389_0_0_0;
static ParameterInfo t2518_m14430_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t23_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
};
extern TypeInfo t2518_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14430_MI = 
{
	".ctor", (methodPointerType)&m7873_gshared, &t2518_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4_t4, t2518_m14430_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t2518_m14431_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t2518_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14431_MI = 
{
	"Invoke", (methodPointerType)&m7875_gshared, &t2518_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2518_m14431_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2518_MIs[] =
{
	&m14430_MI,
	&m14431_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14431_MI;
extern MethodInfo m14435_MI;
static MethodInfo* t2518_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14431_MI,
	&m14435_MI,
};
extern Il2CppType t2520_0_0_0;
extern TypeInfo t2520_TI;
extern MethodInfo m19960_MI;
extern TypeInfo t389_TI;
extern MethodInfo m14437_MI;
extern MethodInfo m14432_MI;
extern TypeInfo t389_TI;
extern MethodInfo m14434_MI;
static void* t2518_RGCTXData[8] = 
{
	(void*)&t2520_0_0_0,
	&t2520_TI,
	&m19960_MI,
	&t389_TI,
	&m14437_MI,
	&m14432_MI,
	&t389_TI,
	&m14434_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2518_0_0_0;
extern Il2CppType t2518_1_0_0;
extern TypeInfo t2519_TI;
struct t2518;
extern TypeInfo t2518_TI;
extern Il2CppGenericClass t2518_GC;
TypeInfo t2518_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2518_MIs, NULL, t2518_FIs, NULL, &t2519_TI, NULL, NULL, &t2518_TI, NULL, t2518_VT, &EmptyCustomAttributesCache, &t2518_TI, &t2518_0_0_0, &t2518_1_0_0, NULL, &t2518_GC, NULL, NULL, NULL, t2518_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2518), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2519_TI;

#include "t2520.h"
extern TypeInfo t2519_TI;
extern TypeInfo t2520_TI;
extern TypeInfo t290_TI;
extern TypeInfo t303_TI;
extern TypeInfo t389_TI;
extern TypeInfo t15_TI;
#include "t2520MD.h"
extern Il2CppType t2520_0_0_0;
extern MethodInfo m2771_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2934_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m19960_MI;
extern MethodInfo m2772_MI;
extern MethodInfo m14437_MI;
extern MethodInfo m2930_MI;
extern MethodInfo m2928_MI;
struct t544;
#define m19960(__this, p0, method) (void)m16859_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m19960_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.RuntimeAnimatorController>
extern Il2CppType t2520_0_0_1;
FieldInfo t2519_f0_FieldInfo = 
{
	"Delegate", &t2520_0_0_1, &t2519_TI, offsetof(t2519, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2519_FIs[] =
{
	&t2519_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t2519_m14432_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t2519_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14432_MI = 
{
	".ctor", (methodPointerType)&m7876_gshared, &t2519_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t2519_m14432_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2520_0_0_0;
static ParameterInfo t2519_m14433_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2520_0_0_0},
};
extern TypeInfo t2519_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14433_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2519_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2519_m14433_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t2519_m14434_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t2519_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14434_MI = 
{
	"Invoke", (methodPointerType)&m7878_gshared, &t2519_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2519_m14434_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t2519_m14435_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t2519_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14435_MI = 
{
	"Find", (methodPointerType)&m7879_gshared, &t2519_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2519_m14435_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2519_MIs[] =
{
	&m14432_MI,
	&m14433_MI,
	&m14434_MI,
	&m14435_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14434_MI;
extern MethodInfo m14435_MI;
static MethodInfo* t2519_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14434_MI,
	&m14435_MI,
};
extern Il2CppType t2520_0_0_0;
extern TypeInfo t2520_TI;
extern MethodInfo m19960_MI;
extern TypeInfo t389_TI;
extern MethodInfo m14437_MI;
static void* t2519_RGCTXData[5] = 
{
	(void*)&t2520_0_0_0,
	&t2520_TI,
	&m19960_MI,
	&t389_TI,
	&m14437_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2519_0_0_0;
extern Il2CppType t2519_1_0_0;
extern TypeInfo t544_TI;
struct t2519;
extern TypeInfo t2519_TI;
extern Il2CppGenericClass t2519_GC;
TypeInfo t2519_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2519_MIs, NULL, t2519_FIs, NULL, &t544_TI, NULL, NULL, &t2519_TI, NULL, t2519_VT, &EmptyCustomAttributesCache, &t2519_TI, &t2519_0_0_0, &t2519_1_0_0, NULL, &t2519_GC, NULL, NULL, NULL, t2519_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2519), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2520_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.RuntimeAnimatorController>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t2520_m14436_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t2520_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m14436_MI = 
{
	".ctor", (methodPointerType)&m7880_gshared, &t2520_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t2520_m14436_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t389_0_0_0;
static ParameterInfo t2520_m14437_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
};
extern TypeInfo t2520_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14437_MI = 
{
	"Invoke", (methodPointerType)&m7881_gshared, &t2520_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2520_m14437_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t389_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2520_m14438_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t389_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2520_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14438_MI = 
{
	"BeginInvoke", (methodPointerType)&m7882_gshared, &t2520_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2520_m14438_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t2520_m14439_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t2520_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14439_MI = 
{
	"EndInvoke", (methodPointerType)&m7883_gshared, &t2520_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2520_m14439_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2520_MIs[] =
{
	&m14436_MI,
	&m14437_MI,
	&m14438_MI,
	&m14439_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m14437_MI;
extern MethodInfo m14438_MI;
extern MethodInfo m14439_MI;
static MethodInfo* t2520_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m14437_MI,
	&m14438_MI,
	&m14439_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t2520_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2520_0_0_0;
extern Il2CppType t2520_1_0_0;
extern TypeInfo t189_TI;
struct t2520;
extern TypeInfo t2520_TI;
extern Il2CppGenericClass t2520_GC;
TypeInfo t2520_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2520_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t2520_TI, NULL, t2520_VT, &EmptyCustomAttributesCache, &t2520_TI, &t2520_0_0_0, &t2520_1_0_0, t2520_IOs, &t2520_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2520), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3507_TI;

#include "t513.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Terrain>
extern MethodInfo m26278_MI;
static PropertyInfo t3507____Current_PropertyInfo = 
{
	&t3507_TI, "Current", &m26278_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3507_PIs[] =
{
	&t3507____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3507_TI;
extern Il2CppType t513_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26278_MI = 
{
	"get_Current", NULL, &t3507_TI, &t513_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3507_MIs[] =
{
	&m26278_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3507_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3507_0_0_0;
extern Il2CppType t3507_1_0_0;
struct t3507;
extern TypeInfo t3507_TI;
extern Il2CppGenericClass t3507_GC;
TypeInfo t3507_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3507_MIs, t3507_PIs, NULL, NULL, NULL, NULL, NULL, &t3507_TI, t3507_ITIs, NULL, &EmptyCustomAttributesCache, &t3507_TI, &t3507_0_0_0, &t3507_1_0_0, NULL, &t3507_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2521.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2521_TI;
#include "t2521MD.h"

extern TypeInfo t2521_TI;
extern TypeInfo t513_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m14444_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m19962_MI;
struct t14;
#define m19962(__this, p0, method) (t513 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m19962_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Terrain>
extern Il2CppType t14_0_0_1;
FieldInfo t2521_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2521_TI, offsetof(t2521, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2521_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2521_TI, offsetof(t2521, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2521_FIs[] =
{
	&t2521_f0_FieldInfo,
	&t2521_f1_FieldInfo,
	NULL
};
extern MethodInfo m14441_MI;
static PropertyInfo t2521____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2521_TI, "System.Collections.IEnumerator.Current", &m14441_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14444_MI;
static PropertyInfo t2521____Current_PropertyInfo = 
{
	&t2521_TI, "Current", &m14444_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2521_PIs[] =
{
	&t2521____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2521____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2521_m14440_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2521_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14440_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2521_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2521_m14440_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2521_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14441_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2521_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2521_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14442_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2521_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2521_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14443_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2521_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2521_TI;
extern Il2CppType t513_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14444_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2521_TI, &t513_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2521_MIs[] =
{
	&m14440_MI,
	&m14441_MI,
	&m14442_MI,
	&m14443_MI,
	&m14444_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m14441_MI;
extern MethodInfo m14443_MI;
extern MethodInfo m14442_MI;
extern MethodInfo m14444_MI;
static MethodInfo* t2521_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m14441_MI,
	&m14443_MI,
	&m14442_MI,
	&m14444_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3507_TI;
static TypeInfo* t2521_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3507_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3507_TI;
static Il2CppInterfaceOffsetPair t2521_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3507_TI, 7},
};
extern MethodInfo m14444_MI;
extern TypeInfo t513_TI;
extern MethodInfo m19962_MI;
static void* t2521_RGCTXData[3] = 
{
	&m14444_MI,
	&t513_TI,
	&m19962_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2521_0_0_0;
extern Il2CppType t2521_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2521_TI;
extern Il2CppGenericClass t2521_GC;
extern TypeInfo t14_TI;
TypeInfo t2521_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2521_MIs, t2521_PIs, t2521_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2521_TI, t2521_ITIs, t2521_VT, &EmptyCustomAttributesCache, &t2521_TI, &t2521_0_0_0, &t2521_1_0_0, t2521_IOs, &t2521_GC, NULL, NULL, NULL, t2521_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2521)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4382_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Terrain>
extern MethodInfo m26279_MI;
static PropertyInfo t4382____Count_PropertyInfo = 
{
	&t4382_TI, "Count", &m26279_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26280_MI;
static PropertyInfo t4382____IsReadOnly_PropertyInfo = 
{
	&t4382_TI, "IsReadOnly", &m26280_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4382_PIs[] =
{
	&t4382____Count_PropertyInfo,
	&t4382____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4382_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26279_MI = 
{
	"get_Count", NULL, &t4382_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4382_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26280_MI = 
{
	"get_IsReadOnly", NULL, &t4382_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t513_0_0_0;
static ParameterInfo t4382_m26281_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t513_0_0_0},
};
extern TypeInfo t4382_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26281_MI = 
{
	"Add", NULL, &t4382_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4382_m26281_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4382_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m26282_MI = 
{
	"Clear", NULL, &t4382_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t513_0_0_0;
static ParameterInfo t4382_m26283_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t513_0_0_0},
};
extern TypeInfo t4382_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26283_MI = 
{
	"Contains", NULL, &t4382_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4382_m26283_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3144_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4382_m26284_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3144_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4382_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26284_MI = 
{
	"CopyTo", NULL, &t4382_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4382_m26284_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t513_0_0_0;
static ParameterInfo t4382_m26285_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t513_0_0_0},
};
extern TypeInfo t4382_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26285_MI = 
{
	"Remove", NULL, &t4382_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4382_m26285_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4382_MIs[] =
{
	&m26279_MI,
	&m26280_MI,
	&m26281_MI,
	&m26282_MI,
	&m26283_MI,
	&m26284_MI,
	&m26285_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4384_TI;
static TypeInfo* t4382_ITIs[] = 
{
	&t591_TI,
	&t4384_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4382_0_0_0;
extern Il2CppType t4382_1_0_0;
struct t4382;
extern TypeInfo t4382_TI;
extern Il2CppGenericClass t4382_GC;
TypeInfo t4382_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4382_MIs, t4382_PIs, NULL, NULL, NULL, NULL, NULL, &t4382_TI, t4382_ITIs, NULL, &EmptyCustomAttributesCache, &t4382_TI, &t4382_0_0_0, &t4382_1_0_0, NULL, &t4382_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4384_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Terrain>
extern TypeInfo t4384_TI;
extern Il2CppType t3507_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26286_MI = 
{
	"GetEnumerator", NULL, &t4384_TI, &t3507_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4384_MIs[] =
{
	&m26286_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4384_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4384_0_0_0;
extern Il2CppType t4384_1_0_0;
struct t4384;
extern TypeInfo t4384_TI;
extern Il2CppGenericClass t4384_GC;
TypeInfo t4384_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4384_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4384_TI, t4384_ITIs, NULL, &EmptyCustomAttributesCache, &t4384_TI, &t4384_0_0_0, &t4384_1_0_0, NULL, &t4384_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4383_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Terrain>
extern MethodInfo m26287_MI;
extern MethodInfo m26288_MI;
static PropertyInfo t4383____Item_PropertyInfo = 
{
	&t4383_TI, "Item", &m26287_MI, &m26288_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4383_PIs[] =
{
	&t4383____Item_PropertyInfo,
	NULL
};
extern Il2CppType t513_0_0_0;
static ParameterInfo t4383_m26289_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t513_0_0_0},
};
extern TypeInfo t4383_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26289_MI = 
{
	"IndexOf", NULL, &t4383_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4383_m26289_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t513_0_0_0;
static ParameterInfo t4383_m26290_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t513_0_0_0},
};
extern TypeInfo t4383_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26290_MI = 
{
	"Insert", NULL, &t4383_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4383_m26290_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4383_m26291_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4383_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26291_MI = 
{
	"RemoveAt", NULL, &t4383_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4383_m26291_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4383_m26287_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4383_TI;
extern Il2CppType t513_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26287_MI = 
{
	"get_Item", NULL, &t4383_TI, &t513_0_0_0, RuntimeInvoker_t4_t16, t4383_m26287_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t513_0_0_0;
static ParameterInfo t4383_m26288_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t513_0_0_0},
};
extern TypeInfo t4383_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26288_MI = 
{
	"set_Item", NULL, &t4383_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4383_m26288_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4383_MIs[] =
{
	&m26289_MI,
	&m26290_MI,
	&m26291_MI,
	&m26287_MI,
	&m26288_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4382_TI;
extern TypeInfo t4384_TI;
static TypeInfo* t4383_ITIs[] = 
{
	&t591_TI,
	&t4382_TI,
	&t4384_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4383_0_0_0;
extern Il2CppType t4383_1_0_0;
struct t4383;
extern TypeInfo t4383_TI;
extern Il2CppGenericClass t4383_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4383_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4383_MIs, t4383_PIs, NULL, NULL, NULL, NULL, NULL, &t4383_TI, t4383_ITIs, NULL, &t1400__CustomAttributeCache, &t4383_TI, &t4383_0_0_0, &t4383_1_0_0, NULL, &t4383_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2522.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2522_TI;
#include "t2522MD.h"

#include "t2523.h"
extern TypeInfo t305_TI;
extern TypeInfo t4_TI;
extern TypeInfo t2522_TI;
extern TypeInfo t513_TI;
extern TypeInfo t2523_TI;
extern TypeInfo t15_TI;
#include "t2523MD.h"
extern MethodInfo m14447_MI;
extern MethodInfo m14449_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Terrain>
extern Il2CppType t305_0_0_33;
FieldInfo t2522_f1_FieldInfo = 
{
	"m_Arg1", &t305_0_0_33, &t2522_TI, offsetof(t2522, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2522_FIs[] =
{
	&t2522_f1_FieldInfo,
	NULL
};
extern Il2CppType t23_0_0_0;
extern Il2CppType t545_0_0_0;
extern Il2CppType t513_0_0_0;
static ParameterInfo t2522_m14445_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t23_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t513_0_0_0},
};
extern TypeInfo t2522_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14445_MI = 
{
	".ctor", (methodPointerType)&m7873_gshared, &t2522_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4_t4, t2522_m14445_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t2522_m14446_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t2522_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14446_MI = 
{
	"Invoke", (methodPointerType)&m7875_gshared, &t2522_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2522_m14446_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2522_MIs[] =
{
	&m14445_MI,
	&m14446_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14446_MI;
extern MethodInfo m14450_MI;
static MethodInfo* t2522_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14446_MI,
	&m14450_MI,
};
extern Il2CppType t2524_0_0_0;
extern TypeInfo t2524_TI;
extern MethodInfo m19972_MI;
extern TypeInfo t513_TI;
extern MethodInfo m14452_MI;
extern MethodInfo m14447_MI;
extern TypeInfo t513_TI;
extern MethodInfo m14449_MI;
static void* t2522_RGCTXData[8] = 
{
	(void*)&t2524_0_0_0,
	&t2524_TI,
	&m19972_MI,
	&t513_TI,
	&m14452_MI,
	&m14447_MI,
	&t513_TI,
	&m14449_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2522_0_0_0;
extern Il2CppType t2522_1_0_0;
extern TypeInfo t2523_TI;
struct t2522;
extern TypeInfo t2522_TI;
extern Il2CppGenericClass t2522_GC;
TypeInfo t2522_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2522_MIs, NULL, t2522_FIs, NULL, &t2523_TI, NULL, NULL, &t2522_TI, NULL, t2522_VT, &EmptyCustomAttributesCache, &t2522_TI, &t2522_0_0_0, &t2522_1_0_0, NULL, &t2522_GC, NULL, NULL, NULL, t2522_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2522), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2523_TI;

#include "t2524.h"
extern TypeInfo t2523_TI;
extern TypeInfo t2524_TI;
extern TypeInfo t290_TI;
extern TypeInfo t303_TI;
extern TypeInfo t513_TI;
extern TypeInfo t15_TI;
#include "t2524MD.h"
extern Il2CppType t2524_0_0_0;
extern MethodInfo m2771_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2934_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m19972_MI;
extern MethodInfo m2772_MI;
extern MethodInfo m14452_MI;
extern MethodInfo m2930_MI;
extern MethodInfo m2928_MI;
struct t544;
#define m19972(__this, p0, method) (void)m16859_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m19972_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Terrain>
extern Il2CppType t2524_0_0_1;
FieldInfo t2523_f0_FieldInfo = 
{
	"Delegate", &t2524_0_0_1, &t2523_TI, offsetof(t2523, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2523_FIs[] =
{
	&t2523_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t2523_m14447_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t2523_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14447_MI = 
{
	".ctor", (methodPointerType)&m7876_gshared, &t2523_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t2523_m14447_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2524_0_0_0;
static ParameterInfo t2523_m14448_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2524_0_0_0},
};
extern TypeInfo t2523_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14448_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2523_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2523_m14448_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t2523_m14449_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t2523_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14449_MI = 
{
	"Invoke", (methodPointerType)&m7878_gshared, &t2523_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2523_m14449_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t2523_m14450_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t2523_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14450_MI = 
{
	"Find", (methodPointerType)&m7879_gshared, &t2523_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2523_m14450_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2523_MIs[] =
{
	&m14447_MI,
	&m14448_MI,
	&m14449_MI,
	&m14450_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14449_MI;
extern MethodInfo m14450_MI;
static MethodInfo* t2523_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14449_MI,
	&m14450_MI,
};
extern Il2CppType t2524_0_0_0;
extern TypeInfo t2524_TI;
extern MethodInfo m19972_MI;
extern TypeInfo t513_TI;
extern MethodInfo m14452_MI;
static void* t2523_RGCTXData[5] = 
{
	(void*)&t2524_0_0_0,
	&t2524_TI,
	&m19972_MI,
	&t513_TI,
	&m14452_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2523_0_0_0;
extern Il2CppType t2523_1_0_0;
extern TypeInfo t544_TI;
struct t2523;
extern TypeInfo t2523_TI;
extern Il2CppGenericClass t2523_GC;
TypeInfo t2523_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2523_MIs, NULL, t2523_FIs, NULL, &t544_TI, NULL, NULL, &t2523_TI, NULL, t2523_VT, &EmptyCustomAttributesCache, &t2523_TI, &t2523_0_0_0, &t2523_1_0_0, NULL, &t2523_GC, NULL, NULL, NULL, t2523_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2523), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2524_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Terrain>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t2524_m14451_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t2524_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m14451_MI = 
{
	".ctor", (methodPointerType)&m7880_gshared, &t2524_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t2524_m14451_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t513_0_0_0;
static ParameterInfo t2524_m14452_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t513_0_0_0},
};
extern TypeInfo t2524_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14452_MI = 
{
	"Invoke", (methodPointerType)&m7881_gshared, &t2524_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2524_m14452_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t513_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2524_m14453_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t513_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2524_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14453_MI = 
{
	"BeginInvoke", (methodPointerType)&m7882_gshared, &t2524_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2524_m14453_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t2524_m14454_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t2524_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14454_MI = 
{
	"EndInvoke", (methodPointerType)&m7883_gshared, &t2524_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2524_m14454_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2524_MIs[] =
{
	&m14451_MI,
	&m14452_MI,
	&m14453_MI,
	&m14454_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m14452_MI;
extern MethodInfo m14453_MI;
extern MethodInfo m14454_MI;
static MethodInfo* t2524_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m14452_MI,
	&m14453_MI,
	&m14454_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t2524_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2524_0_0_0;
extern Il2CppType t2524_1_0_0;
extern TypeInfo t189_TI;
struct t2524;
extern TypeInfo t2524_TI;
extern Il2CppGenericClass t2524_GC;
TypeInfo t2524_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2524_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t2524_TI, NULL, t2524_VT, &EmptyCustomAttributesCache, &t2524_TI, &t2524_0_0_0, &t2524_1_0_0, t2524_IOs, &t2524_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2524), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3508_TI;

#include "t140.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.TextAnchor>
extern MethodInfo m26292_MI;
static PropertyInfo t3508____Current_PropertyInfo = 
{
	&t3508_TI, "Current", &m26292_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3508_PIs[] =
{
	&t3508____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3508_TI;
extern Il2CppType t140_0_0_0;
extern void* RuntimeInvoker_t140 (MethodInfo* method, void* obj, void** args);
MethodInfo m26292_MI = 
{
	"get_Current", NULL, &t3508_TI, &t140_0_0_0, RuntimeInvoker_t140, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3508_MIs[] =
{
	&m26292_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3508_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3508_0_0_0;
extern Il2CppType t3508_1_0_0;
struct t3508;
extern TypeInfo t3508_TI;
extern Il2CppGenericClass t3508_GC;
TypeInfo t3508_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3508_MIs, t3508_PIs, NULL, NULL, NULL, NULL, NULL, &t3508_TI, t3508_ITIs, NULL, &EmptyCustomAttributesCache, &t3508_TI, &t3508_0_0_0, &t3508_1_0_0, NULL, &t3508_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2525.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2525_TI;
#include "t2525MD.h"

extern TypeInfo t2525_TI;
extern TypeInfo t140_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m14459_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m19974_MI;
struct t14;
 int32_t m19974 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m19974_MI;


extern MethodInfo m14455_MI;
 void m14455 (t2525 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14456_MI;
 t4 * m14456 (t2525 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14459(__this, &m14459_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t140_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14457_MI;
 void m14457 (t2525 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14458_MI;
 bool m14458 (t2525 * __this, MethodInfo* method){
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
extern MethodInfo m14459_MI;
 int32_t m14459 (t2525 * __this, MethodInfo* method){
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
		int32_t L_8 = m19974(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m19974_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.TextAnchor>
extern Il2CppType t14_0_0_1;
FieldInfo t2525_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2525_TI, offsetof(t2525, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2525_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2525_TI, offsetof(t2525, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2525_FIs[] =
{
	&t2525_f0_FieldInfo,
	&t2525_f1_FieldInfo,
	NULL
};
extern MethodInfo m14456_MI;
static PropertyInfo t2525____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2525_TI, "System.Collections.IEnumerator.Current", &m14456_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14459_MI;
static PropertyInfo t2525____Current_PropertyInfo = 
{
	&t2525_TI, "Current", &m14459_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2525_PIs[] =
{
	&t2525____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2525____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2525_m14455_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2525_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14455_MI = 
{
	".ctor", (methodPointerType)&m14455, &t2525_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2525_m14455_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2525_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14456_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14456, &t2525_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2525_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14457_MI = 
{
	"Dispose", (methodPointerType)&m14457, &t2525_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2525_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14458_MI = 
{
	"MoveNext", (methodPointerType)&m14458, &t2525_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2525_TI;
extern Il2CppType t140_0_0_0;
extern void* RuntimeInvoker_t140 (MethodInfo* method, void* obj, void** args);
MethodInfo m14459_MI = 
{
	"get_Current", (methodPointerType)&m14459, &t2525_TI, &t140_0_0_0, RuntimeInvoker_t140, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2525_MIs[] =
{
	&m14455_MI,
	&m14456_MI,
	&m14457_MI,
	&m14458_MI,
	&m14459_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m14456_MI;
extern MethodInfo m14458_MI;
extern MethodInfo m14457_MI;
extern MethodInfo m14459_MI;
static MethodInfo* t2525_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m14456_MI,
	&m14458_MI,
	&m14457_MI,
	&m14459_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3508_TI;
static TypeInfo* t2525_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3508_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3508_TI;
static Il2CppInterfaceOffsetPair t2525_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3508_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2525_0_0_0;
extern Il2CppType t2525_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2525_TI;
extern Il2CppGenericClass t2525_GC;
extern TypeInfo t14_TI;
TypeInfo t2525_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2525_MIs, t2525_PIs, t2525_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2525_TI, t2525_ITIs, t2525_VT, &EmptyCustomAttributesCache, &t2525_TI, &t2525_0_0_0, &t2525_1_0_0, t2525_IOs, &t2525_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2525)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4385_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.TextAnchor>
extern MethodInfo m26293_MI;
static PropertyInfo t4385____Count_PropertyInfo = 
{
	&t4385_TI, "Count", &m26293_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26294_MI;
static PropertyInfo t4385____IsReadOnly_PropertyInfo = 
{
	&t4385_TI, "IsReadOnly", &m26294_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4385_PIs[] =
{
	&t4385____Count_PropertyInfo,
	&t4385____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4385_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26293_MI = 
{
	"get_Count", NULL, &t4385_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4385_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26294_MI = 
{
	"get_IsReadOnly", NULL, &t4385_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t140_0_0_0;
static ParameterInfo t4385_m26295_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t140_0_0_0},
};
extern TypeInfo t4385_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26295_MI = 
{
	"Add", NULL, &t4385_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4385_m26295_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4385_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m26296_MI = 
{
	"Clear", NULL, &t4385_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t140_0_0_0;
static ParameterInfo t4385_m26297_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t140_0_0_0},
};
extern TypeInfo t4385_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26297_MI = 
{
	"Contains", NULL, &t4385_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4385_m26297_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3145_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4385_m26298_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3145_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4385_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26298_MI = 
{
	"CopyTo", NULL, &t4385_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4385_m26298_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t140_0_0_0;
static ParameterInfo t4385_m26299_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t140_0_0_0},
};
extern TypeInfo t4385_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26299_MI = 
{
	"Remove", NULL, &t4385_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4385_m26299_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4385_MIs[] =
{
	&m26293_MI,
	&m26294_MI,
	&m26295_MI,
	&m26296_MI,
	&m26297_MI,
	&m26298_MI,
	&m26299_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4387_TI;
static TypeInfo* t4385_ITIs[] = 
{
	&t591_TI,
	&t4387_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4385_0_0_0;
extern Il2CppType t4385_1_0_0;
struct t4385;
extern TypeInfo t4385_TI;
extern Il2CppGenericClass t4385_GC;
TypeInfo t4385_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4385_MIs, t4385_PIs, NULL, NULL, NULL, NULL, NULL, &t4385_TI, t4385_ITIs, NULL, &EmptyCustomAttributesCache, &t4385_TI, &t4385_0_0_0, &t4385_1_0_0, NULL, &t4385_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4387_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.TextAnchor>
extern TypeInfo t4387_TI;
extern Il2CppType t3508_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26300_MI = 
{
	"GetEnumerator", NULL, &t4387_TI, &t3508_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4387_MIs[] =
{
	&m26300_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4387_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4387_0_0_0;
extern Il2CppType t4387_1_0_0;
struct t4387;
extern TypeInfo t4387_TI;
extern Il2CppGenericClass t4387_GC;
TypeInfo t4387_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4387_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4387_TI, t4387_ITIs, NULL, &EmptyCustomAttributesCache, &t4387_TI, &t4387_0_0_0, &t4387_1_0_0, NULL, &t4387_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4386_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.TextAnchor>
extern MethodInfo m26301_MI;
extern MethodInfo m26302_MI;
static PropertyInfo t4386____Item_PropertyInfo = 
{
	&t4386_TI, "Item", &m26301_MI, &m26302_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4386_PIs[] =
{
	&t4386____Item_PropertyInfo,
	NULL
};
extern Il2CppType t140_0_0_0;
static ParameterInfo t4386_m26303_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t140_0_0_0},
};
extern TypeInfo t4386_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26303_MI = 
{
	"IndexOf", NULL, &t4386_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4386_m26303_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t140_0_0_0;
static ParameterInfo t4386_m26304_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t140_0_0_0},
};
extern TypeInfo t4386_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26304_MI = 
{
	"Insert", NULL, &t4386_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4386_m26304_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4386_m26305_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4386_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26305_MI = 
{
	"RemoveAt", NULL, &t4386_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4386_m26305_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4386_m26301_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4386_TI;
extern Il2CppType t140_0_0_0;
extern void* RuntimeInvoker_t140_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26301_MI = 
{
	"get_Item", NULL, &t4386_TI, &t140_0_0_0, RuntimeInvoker_t140_t16, t4386_m26301_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t140_0_0_0;
static ParameterInfo t4386_m26302_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t140_0_0_0},
};
extern TypeInfo t4386_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26302_MI = 
{
	"set_Item", NULL, &t4386_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4386_m26302_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4386_MIs[] =
{
	&m26303_MI,
	&m26304_MI,
	&m26305_MI,
	&m26301_MI,
	&m26302_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4385_TI;
extern TypeInfo t4387_TI;
static TypeInfo* t4386_ITIs[] = 
{
	&t591_TI,
	&t4385_TI,
	&t4387_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4386_0_0_0;
extern Il2CppType t4386_1_0_0;
struct t4386;
extern TypeInfo t4386_TI;
extern Il2CppGenericClass t4386_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4386_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4386_MIs, t4386_PIs, NULL, NULL, NULL, NULL, NULL, &t4386_TI, t4386_ITIs, NULL, &t1400__CustomAttributeCache, &t4386_TI, &t4386_0_0_0, &t4386_1_0_0, NULL, &t4386_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3509_TI;

#include "t141.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.HorizontalWrapMode>
extern MethodInfo m26306_MI;
static PropertyInfo t3509____Current_PropertyInfo = 
{
	&t3509_TI, "Current", &m26306_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3509_PIs[] =
{
	&t3509____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3509_TI;
extern Il2CppType t141_0_0_0;
extern void* RuntimeInvoker_t141 (MethodInfo* method, void* obj, void** args);
MethodInfo m26306_MI = 
{
	"get_Current", NULL, &t3509_TI, &t141_0_0_0, RuntimeInvoker_t141, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3509_MIs[] =
{
	&m26306_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3509_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3509_0_0_0;
extern Il2CppType t3509_1_0_0;
struct t3509;
extern TypeInfo t3509_TI;
extern Il2CppGenericClass t3509_GC;
TypeInfo t3509_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3509_MIs, t3509_PIs, NULL, NULL, NULL, NULL, NULL, &t3509_TI, t3509_ITIs, NULL, &EmptyCustomAttributesCache, &t3509_TI, &t3509_0_0_0, &t3509_1_0_0, NULL, &t3509_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2526.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2526_TI;
#include "t2526MD.h"

extern TypeInfo t2526_TI;
extern TypeInfo t141_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m14464_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m19985_MI;
struct t14;
 int32_t m19985 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m19985_MI;


extern MethodInfo m14460_MI;
 void m14460 (t2526 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14461_MI;
 t4 * m14461 (t2526 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14464(__this, &m14464_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t141_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14462_MI;
 void m14462 (t2526 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14463_MI;
 bool m14463 (t2526 * __this, MethodInfo* method){
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
extern MethodInfo m14464_MI;
 int32_t m14464 (t2526 * __this, MethodInfo* method){
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
		int32_t L_8 = m19985(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m19985_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.HorizontalWrapMode>
extern Il2CppType t14_0_0_1;
FieldInfo t2526_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2526_TI, offsetof(t2526, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2526_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2526_TI, offsetof(t2526, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2526_FIs[] =
{
	&t2526_f0_FieldInfo,
	&t2526_f1_FieldInfo,
	NULL
};
extern MethodInfo m14461_MI;
static PropertyInfo t2526____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2526_TI, "System.Collections.IEnumerator.Current", &m14461_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14464_MI;
static PropertyInfo t2526____Current_PropertyInfo = 
{
	&t2526_TI, "Current", &m14464_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2526_PIs[] =
{
	&t2526____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2526____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2526_m14460_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2526_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14460_MI = 
{
	".ctor", (methodPointerType)&m14460, &t2526_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2526_m14460_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2526_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14461_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14461, &t2526_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2526_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14462_MI = 
{
	"Dispose", (methodPointerType)&m14462, &t2526_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2526_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14463_MI = 
{
	"MoveNext", (methodPointerType)&m14463, &t2526_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2526_TI;
extern Il2CppType t141_0_0_0;
extern void* RuntimeInvoker_t141 (MethodInfo* method, void* obj, void** args);
MethodInfo m14464_MI = 
{
	"get_Current", (methodPointerType)&m14464, &t2526_TI, &t141_0_0_0, RuntimeInvoker_t141, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2526_MIs[] =
{
	&m14460_MI,
	&m14461_MI,
	&m14462_MI,
	&m14463_MI,
	&m14464_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m14461_MI;
extern MethodInfo m14463_MI;
extern MethodInfo m14462_MI;
extern MethodInfo m14464_MI;
static MethodInfo* t2526_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m14461_MI,
	&m14463_MI,
	&m14462_MI,
	&m14464_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3509_TI;
static TypeInfo* t2526_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3509_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3509_TI;
static Il2CppInterfaceOffsetPair t2526_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3509_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2526_0_0_0;
extern Il2CppType t2526_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2526_TI;
extern Il2CppGenericClass t2526_GC;
extern TypeInfo t14_TI;
TypeInfo t2526_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2526_MIs, t2526_PIs, t2526_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2526_TI, t2526_ITIs, t2526_VT, &EmptyCustomAttributesCache, &t2526_TI, &t2526_0_0_0, &t2526_1_0_0, t2526_IOs, &t2526_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2526)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4388_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.HorizontalWrapMode>
extern MethodInfo m26307_MI;
static PropertyInfo t4388____Count_PropertyInfo = 
{
	&t4388_TI, "Count", &m26307_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26308_MI;
static PropertyInfo t4388____IsReadOnly_PropertyInfo = 
{
	&t4388_TI, "IsReadOnly", &m26308_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4388_PIs[] =
{
	&t4388____Count_PropertyInfo,
	&t4388____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4388_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26307_MI = 
{
	"get_Count", NULL, &t4388_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4388_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26308_MI = 
{
	"get_IsReadOnly", NULL, &t4388_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t141_0_0_0;
static ParameterInfo t4388_m26309_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t141_0_0_0},
};
extern TypeInfo t4388_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26309_MI = 
{
	"Add", NULL, &t4388_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4388_m26309_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4388_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m26310_MI = 
{
	"Clear", NULL, &t4388_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t141_0_0_0;
static ParameterInfo t4388_m26311_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t141_0_0_0},
};
extern TypeInfo t4388_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26311_MI = 
{
	"Contains", NULL, &t4388_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4388_m26311_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3146_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4388_m26312_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3146_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4388_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26312_MI = 
{
	"CopyTo", NULL, &t4388_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4388_m26312_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t141_0_0_0;
static ParameterInfo t4388_m26313_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t141_0_0_0},
};
extern TypeInfo t4388_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26313_MI = 
{
	"Remove", NULL, &t4388_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4388_m26313_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4388_MIs[] =
{
	&m26307_MI,
	&m26308_MI,
	&m26309_MI,
	&m26310_MI,
	&m26311_MI,
	&m26312_MI,
	&m26313_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4390_TI;
static TypeInfo* t4388_ITIs[] = 
{
	&t591_TI,
	&t4390_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4388_0_0_0;
extern Il2CppType t4388_1_0_0;
struct t4388;
extern TypeInfo t4388_TI;
extern Il2CppGenericClass t4388_GC;
TypeInfo t4388_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4388_MIs, t4388_PIs, NULL, NULL, NULL, NULL, NULL, &t4388_TI, t4388_ITIs, NULL, &EmptyCustomAttributesCache, &t4388_TI, &t4388_0_0_0, &t4388_1_0_0, NULL, &t4388_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4390_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.HorizontalWrapMode>
extern TypeInfo t4390_TI;
extern Il2CppType t3509_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26314_MI = 
{
	"GetEnumerator", NULL, &t4390_TI, &t3509_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4390_MIs[] =
{
	&m26314_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4390_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4390_0_0_0;
extern Il2CppType t4390_1_0_0;
struct t4390;
extern TypeInfo t4390_TI;
extern Il2CppGenericClass t4390_GC;
TypeInfo t4390_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4390_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4390_TI, t4390_ITIs, NULL, &EmptyCustomAttributesCache, &t4390_TI, &t4390_0_0_0, &t4390_1_0_0, NULL, &t4390_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4389_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.HorizontalWrapMode>
extern MethodInfo m26315_MI;
extern MethodInfo m26316_MI;
static PropertyInfo t4389____Item_PropertyInfo = 
{
	&t4389_TI, "Item", &m26315_MI, &m26316_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4389_PIs[] =
{
	&t4389____Item_PropertyInfo,
	NULL
};
extern Il2CppType t141_0_0_0;
static ParameterInfo t4389_m26317_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t141_0_0_0},
};
extern TypeInfo t4389_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26317_MI = 
{
	"IndexOf", NULL, &t4389_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4389_m26317_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t141_0_0_0;
static ParameterInfo t4389_m26318_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t141_0_0_0},
};
extern TypeInfo t4389_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26318_MI = 
{
	"Insert", NULL, &t4389_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4389_m26318_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4389_m26319_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4389_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26319_MI = 
{
	"RemoveAt", NULL, &t4389_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4389_m26319_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4389_m26315_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4389_TI;
extern Il2CppType t141_0_0_0;
extern void* RuntimeInvoker_t141_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26315_MI = 
{
	"get_Item", NULL, &t4389_TI, &t141_0_0_0, RuntimeInvoker_t141_t16, t4389_m26315_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t141_0_0_0;
static ParameterInfo t4389_m26316_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t141_0_0_0},
};
extern TypeInfo t4389_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26316_MI = 
{
	"set_Item", NULL, &t4389_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4389_m26316_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4389_MIs[] =
{
	&m26317_MI,
	&m26318_MI,
	&m26319_MI,
	&m26315_MI,
	&m26316_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4388_TI;
extern TypeInfo t4390_TI;
static TypeInfo* t4389_ITIs[] = 
{
	&t591_TI,
	&t4388_TI,
	&t4390_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4389_0_0_0;
extern Il2CppType t4389_1_0_0;
struct t4389;
extern TypeInfo t4389_TI;
extern Il2CppGenericClass t4389_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4389_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4389_MIs, t4389_PIs, NULL, NULL, NULL, NULL, NULL, &t4389_TI, t4389_ITIs, NULL, &t1400__CustomAttributeCache, &t4389_TI, &t4389_0_0_0, &t4389_1_0_0, NULL, &t4389_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3510_TI;

#include "t142.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.VerticalWrapMode>
extern MethodInfo m26320_MI;
static PropertyInfo t3510____Current_PropertyInfo = 
{
	&t3510_TI, "Current", &m26320_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3510_PIs[] =
{
	&t3510____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3510_TI;
extern Il2CppType t142_0_0_0;
extern void* RuntimeInvoker_t142 (MethodInfo* method, void* obj, void** args);
MethodInfo m26320_MI = 
{
	"get_Current", NULL, &t3510_TI, &t142_0_0_0, RuntimeInvoker_t142, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3510_MIs[] =
{
	&m26320_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3510_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3510_0_0_0;
extern Il2CppType t3510_1_0_0;
struct t3510;
extern TypeInfo t3510_TI;
extern Il2CppGenericClass t3510_GC;
TypeInfo t3510_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3510_MIs, t3510_PIs, NULL, NULL, NULL, NULL, NULL, &t3510_TI, t3510_ITIs, NULL, &EmptyCustomAttributesCache, &t3510_TI, &t3510_0_0_0, &t3510_1_0_0, NULL, &t3510_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2527.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2527_TI;
#include "t2527MD.h"

extern TypeInfo t2527_TI;
extern TypeInfo t142_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m14469_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m19996_MI;
struct t14;
 int32_t m19996 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m19996_MI;


extern MethodInfo m14465_MI;
 void m14465 (t2527 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14466_MI;
 t4 * m14466 (t2527 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14469(__this, &m14469_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t142_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14467_MI;
 void m14467 (t2527 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14468_MI;
 bool m14468 (t2527 * __this, MethodInfo* method){
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
extern MethodInfo m14469_MI;
 int32_t m14469 (t2527 * __this, MethodInfo* method){
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
		int32_t L_8 = m19996(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m19996_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.VerticalWrapMode>
extern Il2CppType t14_0_0_1;
FieldInfo t2527_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2527_TI, offsetof(t2527, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2527_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2527_TI, offsetof(t2527, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2527_FIs[] =
{
	&t2527_f0_FieldInfo,
	&t2527_f1_FieldInfo,
	NULL
};
extern MethodInfo m14466_MI;
static PropertyInfo t2527____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2527_TI, "System.Collections.IEnumerator.Current", &m14466_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14469_MI;
static PropertyInfo t2527____Current_PropertyInfo = 
{
	&t2527_TI, "Current", &m14469_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2527_PIs[] =
{
	&t2527____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2527____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2527_m14465_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2527_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14465_MI = 
{
	".ctor", (methodPointerType)&m14465, &t2527_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2527_m14465_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2527_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14466_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14466, &t2527_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2527_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14467_MI = 
{
	"Dispose", (methodPointerType)&m14467, &t2527_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2527_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14468_MI = 
{
	"MoveNext", (methodPointerType)&m14468, &t2527_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2527_TI;
extern Il2CppType t142_0_0_0;
extern void* RuntimeInvoker_t142 (MethodInfo* method, void* obj, void** args);
MethodInfo m14469_MI = 
{
	"get_Current", (methodPointerType)&m14469, &t2527_TI, &t142_0_0_0, RuntimeInvoker_t142, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2527_MIs[] =
{
	&m14465_MI,
	&m14466_MI,
	&m14467_MI,
	&m14468_MI,
	&m14469_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m14466_MI;
extern MethodInfo m14468_MI;
extern MethodInfo m14467_MI;
extern MethodInfo m14469_MI;
static MethodInfo* t2527_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m14466_MI,
	&m14468_MI,
	&m14467_MI,
	&m14469_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3510_TI;
static TypeInfo* t2527_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3510_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3510_TI;
static Il2CppInterfaceOffsetPair t2527_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3510_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2527_0_0_0;
extern Il2CppType t2527_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2527_TI;
extern Il2CppGenericClass t2527_GC;
extern TypeInfo t14_TI;
TypeInfo t2527_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2527_MIs, t2527_PIs, t2527_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2527_TI, t2527_ITIs, t2527_VT, &EmptyCustomAttributesCache, &t2527_TI, &t2527_0_0_0, &t2527_1_0_0, t2527_IOs, &t2527_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2527)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4391_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.VerticalWrapMode>
extern MethodInfo m26321_MI;
static PropertyInfo t4391____Count_PropertyInfo = 
{
	&t4391_TI, "Count", &m26321_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26322_MI;
static PropertyInfo t4391____IsReadOnly_PropertyInfo = 
{
	&t4391_TI, "IsReadOnly", &m26322_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4391_PIs[] =
{
	&t4391____Count_PropertyInfo,
	&t4391____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4391_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26321_MI = 
{
	"get_Count", NULL, &t4391_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4391_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26322_MI = 
{
	"get_IsReadOnly", NULL, &t4391_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
static ParameterInfo t4391_m26323_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t4391_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26323_MI = 
{
	"Add", NULL, &t4391_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4391_m26323_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4391_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m26324_MI = 
{
	"Clear", NULL, &t4391_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
static ParameterInfo t4391_m26325_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t4391_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26325_MI = 
{
	"Contains", NULL, &t4391_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4391_m26325_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3147_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4391_m26326_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3147_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4391_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26326_MI = 
{
	"CopyTo", NULL, &t4391_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4391_m26326_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
static ParameterInfo t4391_m26327_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t4391_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26327_MI = 
{
	"Remove", NULL, &t4391_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4391_m26327_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4391_MIs[] =
{
	&m26321_MI,
	&m26322_MI,
	&m26323_MI,
	&m26324_MI,
	&m26325_MI,
	&m26326_MI,
	&m26327_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4393_TI;
static TypeInfo* t4391_ITIs[] = 
{
	&t591_TI,
	&t4393_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4391_0_0_0;
extern Il2CppType t4391_1_0_0;
struct t4391;
extern TypeInfo t4391_TI;
extern Il2CppGenericClass t4391_GC;
TypeInfo t4391_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4391_MIs, t4391_PIs, NULL, NULL, NULL, NULL, NULL, &t4391_TI, t4391_ITIs, NULL, &EmptyCustomAttributesCache, &t4391_TI, &t4391_0_0_0, &t4391_1_0_0, NULL, &t4391_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4393_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.VerticalWrapMode>
extern TypeInfo t4393_TI;
extern Il2CppType t3510_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26328_MI = 
{
	"GetEnumerator", NULL, &t4393_TI, &t3510_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4393_MIs[] =
{
	&m26328_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4393_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4393_0_0_0;
extern Il2CppType t4393_1_0_0;
struct t4393;
extern TypeInfo t4393_TI;
extern Il2CppGenericClass t4393_GC;
TypeInfo t4393_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4393_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4393_TI, t4393_ITIs, NULL, &EmptyCustomAttributesCache, &t4393_TI, &t4393_0_0_0, &t4393_1_0_0, NULL, &t4393_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4392_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.VerticalWrapMode>
extern MethodInfo m26329_MI;
extern MethodInfo m26330_MI;
static PropertyInfo t4392____Item_PropertyInfo = 
{
	&t4392_TI, "Item", &m26329_MI, &m26330_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4392_PIs[] =
{
	&t4392____Item_PropertyInfo,
	NULL
};
extern Il2CppType t142_0_0_0;
static ParameterInfo t4392_m26331_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t4392_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26331_MI = 
{
	"IndexOf", NULL, &t4392_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4392_m26331_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t142_0_0_0;
static ParameterInfo t4392_m26332_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t4392_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26332_MI = 
{
	"Insert", NULL, &t4392_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4392_m26332_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4392_m26333_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4392_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26333_MI = 
{
	"RemoveAt", NULL, &t4392_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4392_m26333_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4392_m26329_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4392_TI;
extern Il2CppType t142_0_0_0;
extern void* RuntimeInvoker_t142_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26329_MI = 
{
	"get_Item", NULL, &t4392_TI, &t142_0_0_0, RuntimeInvoker_t142_t16, t4392_m26329_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t142_0_0_0;
static ParameterInfo t4392_m26330_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t4392_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26330_MI = 
{
	"set_Item", NULL, &t4392_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4392_m26330_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4392_MIs[] =
{
	&m26331_MI,
	&m26332_MI,
	&m26333_MI,
	&m26329_MI,
	&m26330_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4391_TI;
extern TypeInfo t4393_TI;
static TypeInfo* t4392_ITIs[] = 
{
	&t591_TI,
	&t4391_TI,
	&t4393_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4392_0_0_0;
extern Il2CppType t4392_1_0_0;
struct t4392;
extern TypeInfo t4392_TI;
extern Il2CppGenericClass t4392_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4392_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4392_MIs, t4392_PIs, NULL, NULL, NULL, NULL, NULL, &t4392_TI, t4392_ITIs, NULL, &t1400__CustomAttributeCache, &t4392_TI, &t4392_0_0_0, &t4392_1_0_0, NULL, &t4392_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2528.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2528_TI;
#include "t2528MD.h"

#include "t138.h"
#include "t2529.h"
extern TypeInfo t305_TI;
extern TypeInfo t4_TI;
extern TypeInfo t2528_TI;
extern TypeInfo t138_TI;
extern TypeInfo t2529_TI;
extern TypeInfo t15_TI;
#include "t2529MD.h"
extern MethodInfo m14472_MI;
extern MethodInfo m14474_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Font>
extern Il2CppType t305_0_0_33;
FieldInfo t2528_f1_FieldInfo = 
{
	"m_Arg1", &t305_0_0_33, &t2528_TI, offsetof(t2528, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2528_FIs[] =
{
	&t2528_f1_FieldInfo,
	NULL
};
extern Il2CppType t23_0_0_0;
extern Il2CppType t545_0_0_0;
extern Il2CppType t138_0_0_0;
static ParameterInfo t2528_m14470_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t23_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t138_0_0_0},
};
extern TypeInfo t2528_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14470_MI = 
{
	".ctor", (methodPointerType)&m7873_gshared, &t2528_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4_t4, t2528_m14470_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t2528_m14471_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t2528_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14471_MI = 
{
	"Invoke", (methodPointerType)&m7875_gshared, &t2528_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2528_m14471_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2528_MIs[] =
{
	&m14470_MI,
	&m14471_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14471_MI;
extern MethodInfo m14475_MI;
static MethodInfo* t2528_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14471_MI,
	&m14475_MI,
};
extern Il2CppType t2530_0_0_0;
extern TypeInfo t2530_TI;
extern MethodInfo m20006_MI;
extern TypeInfo t138_TI;
extern MethodInfo m14477_MI;
extern MethodInfo m14472_MI;
extern TypeInfo t138_TI;
extern MethodInfo m14474_MI;
static void* t2528_RGCTXData[8] = 
{
	(void*)&t2530_0_0_0,
	&t2530_TI,
	&m20006_MI,
	&t138_TI,
	&m14477_MI,
	&m14472_MI,
	&t138_TI,
	&m14474_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2528_0_0_0;
extern Il2CppType t2528_1_0_0;
extern TypeInfo t2529_TI;
struct t2528;
extern TypeInfo t2528_TI;
extern Il2CppGenericClass t2528_GC;
TypeInfo t2528_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2528_MIs, NULL, t2528_FIs, NULL, &t2529_TI, NULL, NULL, &t2528_TI, NULL, t2528_VT, &EmptyCustomAttributesCache, &t2528_TI, &t2528_0_0_0, &t2528_1_0_0, NULL, &t2528_GC, NULL, NULL, NULL, t2528_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2528), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2529_TI;

#include "t2530.h"
extern TypeInfo t2529_TI;
extern TypeInfo t2530_TI;
extern TypeInfo t290_TI;
extern TypeInfo t303_TI;
extern TypeInfo t138_TI;
extern TypeInfo t15_TI;
#include "t2530MD.h"
extern Il2CppType t2530_0_0_0;
extern MethodInfo m2771_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2934_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m20006_MI;
extern MethodInfo m2772_MI;
extern MethodInfo m14477_MI;
extern MethodInfo m2930_MI;
extern MethodInfo m2928_MI;
struct t544;
#define m20006(__this, p0, method) (void)m16859_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m20006_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Font>
extern Il2CppType t2530_0_0_1;
FieldInfo t2529_f0_FieldInfo = 
{
	"Delegate", &t2530_0_0_1, &t2529_TI, offsetof(t2529, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2529_FIs[] =
{
	&t2529_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t2529_m14472_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t2529_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14472_MI = 
{
	".ctor", (methodPointerType)&m7876_gshared, &t2529_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t2529_m14472_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2530_0_0_0;
static ParameterInfo t2529_m14473_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2530_0_0_0},
};
extern TypeInfo t2529_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14473_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t2529_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2529_m14473_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t2529_m14474_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t2529_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14474_MI = 
{
	"Invoke", (methodPointerType)&m7878_gshared, &t2529_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2529_m14474_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t2529_m14475_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t2529_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14475_MI = 
{
	"Find", (methodPointerType)&m7879_gshared, &t2529_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2529_m14475_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2529_MIs[] =
{
	&m14472_MI,
	&m14473_MI,
	&m14474_MI,
	&m14475_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14474_MI;
extern MethodInfo m14475_MI;
static MethodInfo* t2529_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14474_MI,
	&m14475_MI,
};
extern Il2CppType t2530_0_0_0;
extern TypeInfo t2530_TI;
extern MethodInfo m20006_MI;
extern TypeInfo t138_TI;
extern MethodInfo m14477_MI;
static void* t2529_RGCTXData[5] = 
{
	(void*)&t2530_0_0_0,
	&t2530_TI,
	&m20006_MI,
	&t138_TI,
	&m14477_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2529_0_0_0;
extern Il2CppType t2529_1_0_0;
extern TypeInfo t544_TI;
struct t2529;
extern TypeInfo t2529_TI;
extern Il2CppGenericClass t2529_GC;
TypeInfo t2529_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2529_MIs, NULL, t2529_FIs, NULL, &t544_TI, NULL, NULL, &t2529_TI, NULL, t2529_VT, &EmptyCustomAttributesCache, &t2529_TI, &t2529_0_0_0, &t2529_1_0_0, NULL, &t2529_GC, NULL, NULL, NULL, t2529_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2529), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2530_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Font>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t2530_m14476_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t2530_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m14476_MI = 
{
	".ctor", (methodPointerType)&m7880_gshared, &t2530_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t2530_m14476_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t138_0_0_0;
static ParameterInfo t2530_m14477_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t138_0_0_0},
};
extern TypeInfo t2530_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14477_MI = 
{
	"Invoke", (methodPointerType)&m7881_gshared, &t2530_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2530_m14477_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2530_m14478_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2530_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14478_MI = 
{
	"BeginInvoke", (methodPointerType)&m7882_gshared, &t2530_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2530_m14478_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t2530_m14479_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t2530_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14479_MI = 
{
	"EndInvoke", (methodPointerType)&m7883_gshared, &t2530_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2530_m14479_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2530_MIs[] =
{
	&m14476_MI,
	&m14477_MI,
	&m14478_MI,
	&m14479_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m14477_MI;
extern MethodInfo m14478_MI;
extern MethodInfo m14479_MI;
static MethodInfo* t2530_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m14477_MI,
	&m14478_MI,
	&m14479_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t2530_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2530_0_0_0;
extern Il2CppType t2530_1_0_0;
extern TypeInfo t189_TI;
struct t2530;
extern TypeInfo t2530_TI;
extern Il2CppGenericClass t2530_GC;
TypeInfo t2530_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2530_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t2530_TI, NULL, t2530_VT, &EmptyCustomAttributesCache, &t2530_TI, &t2530_0_0_0, &t2530_1_0_0, t2530_IOs, &t2530_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2530), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t516.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t516_TI;
#include "t516MD.h"

#include "t371.h"
#include "t2537.h"
#include "t2534.h"
#include "t2535.h"
#include "t328.h"
#include "t2541.h"
#include "t2536.h"
extern TypeInfo t516_TI;
extern TypeInfo t371_TI;
extern TypeInfo t16_TI;
extern TypeInfo t15_TI;
extern TypeInfo t303_TI;
extern TypeInfo t573_TI;
extern TypeInfo t1268_TI;
extern TypeInfo t1233_TI;
extern TypeInfo t518_TI;
extern TypeInfo t2537_TI;
extern TypeInfo t17_TI;
extern TypeInfo t2532_TI;
extern TypeInfo t2533_TI;
extern TypeInfo t2531_TI;
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t2534_TI;
extern TypeInfo t328_TI;
extern TypeInfo t2535_TI;
extern TypeInfo t2541_TI;
#include "t1233MD.h"
#include "t4MD.h"
#include "t590MD.h"
#include "t2534MD.h"
#include "t328MD.h"
#include "t2535MD.h"
#include "t2537MD.h"
#include "t2541MD.h"
extern MethodInfo m14526_MI;
extern MethodInfo m14527_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m6453_MI;
extern MethodInfo m20008_MI;
extern MethodInfo m6454_MI;
extern MethodInfo m14512_MI;
extern MethodInfo m15_MI;
extern MethodInfo m14509_MI;
extern MethodInfo m3739_MI;
extern MethodInfo m14497_MI;
extern MethodInfo m14504_MI;
extern MethodInfo m14510_MI;
extern MethodInfo m14513_MI;
extern MethodInfo m14515_MI;
extern MethodInfo m14498_MI;
extern MethodInfo m14523_MI;
extern MethodInfo m6892_MI;
extern MethodInfo m14524_MI;
extern MethodInfo m24654_MI;
extern MethodInfo m24659_MI;
extern MethodInfo m24661_MI;
extern MethodInfo m24662_MI;
extern MethodInfo m7290_MI;
extern MethodInfo m42_MI;
extern MethodInfo m14514_MI;
extern MethodInfo m14499_MI;
extern MethodInfo m14500_MI;
extern MethodInfo m14534_MI;
extern MethodInfo m3735_MI;
extern MethodInfo m20010_MI;
extern MethodInfo m14507_MI;
extern MethodInfo m14508_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m14609_MI;
extern MethodInfo m14528_MI;
extern MethodInfo m14511_MI;
extern MethodInfo m14517_MI;
extern MethodInfo m3751_MI;
extern MethodInfo m14615_MI;
extern MethodInfo m20012_MI;
extern MethodInfo m20020_MI;
extern MethodInfo m3738_MI;
struct t14;
 void m20008 (t4 * __this, t518** p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20008_MI;
struct t14;
#include "t2539.h"
 int32_t m20010 (t4 * __this, t518* p0, t371  p1, int32_t p2, int32_t p3, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20010_MI;
struct t14;
 void m20012 (t4 * __this, t518* p0, int32_t p1, int32_t p2, t4* p3, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20012_MI;
struct t14;
#include "t26.h"
 void m20020 (t4 * __this, t518* p0, int32_t p1, t2536 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20020_MI;


extern MethodInfo m14480_MI;
 void m14480 (t516 * __this, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t516_TI));
		__this->f1 = (((t516_SFs*)InitializedTypeInfo(&t516_TI)->static_fields)->f4);
		return;
	}
}
extern MethodInfo m2881_MI;
 void m2881 (t516 * __this, int32_t p0, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t1233 * L_0 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6454(L_0, (t8*) &_stringLiteral537, &m6454_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0015:
	{
		__this->f1 = ((t518*)SZArrayNew(InitializedTypeInfo(&t518_TI), p0));
		return;
	}
}
extern MethodInfo m14481_MI;
 void m14481 (t4 * __this, MethodInfo* method){
	{
		((t516_SFs*)InitializedTypeInfo(&t516_TI)->static_fields)->f4 = ((t518*)SZArrayNew(InitializedTypeInfo(&t518_TI), 0));
		return;
	}
}
extern MethodInfo m14482_MI;
 t4* m14482 (t516 * __this, MethodInfo* method){
	{
		t2537  L_0 = m14509(__this, &m14509_MI);
		t2537  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t2537_TI), &L_1);
		return (t4*)L_2;
	}
}
extern MethodInfo m14483_MI;
 void m14483 (t516 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	{
		t518* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		m3739(NULL, (t14 *)(t14 *)L_0, 0, p0, p1, L_1, &m3739_MI);
		return;
	}
}
extern MethodInfo m14484_MI;
 t4 * m14484 (t516 * __this, MethodInfo* method){
	{
		t2537  L_0 = m14509(__this, &m14509_MI);
		t2537  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t2537_TI), &L_1);
		return (t4 *)L_2;
	}
}
extern MethodInfo m14485_MI;
 int32_t m14485 (t516 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t26 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t26 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			VirtActionInvoker1< t371  >::Invoke(&m14497_MI, __this, ((*(t371 *)((t371 *)UnBox (p0, InitializedTypeInfo(&t371_TI))))));
			int32_t L_0 = (__this->f2);
			V_0 = ((int32_t)(L_0-1));
			// IL_0015: leave.s IL_002a
			goto IL_002a;
		}

IL_0017:
		{
			// IL_0017: leave.s IL_001f
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t26 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t573_TI, e.ex->object.klass))
			goto IL_0019;
		if(il2cpp_codegen_class_is_assignable_from (&t1268_TI, e.ex->object.klass))
			goto IL_001c;
		throw e;
	}

IL_0019:
	{ // begin catch(System.NullReferenceException)
		// IL_001a: leave.s IL_001f
		goto IL_001f;
	} // end catch (depth: 1)

IL_001c:
	{ // begin catch(System.InvalidCastException)
		// IL_001d: leave.s IL_001f
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		t303 * L_1 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_1, (t8*) &_stringLiteral551, &m1917_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_002a:
	{
		return V_0;
	}
}
extern MethodInfo m14486_MI;
 bool m14486 (t516 * __this, t4 * p0, MethodInfo* method){
	bool V_0 = false;
	t26 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t26 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = (bool)VirtFuncInvoker1< bool, t371  >::Invoke(&m14504_MI, __this, ((*(t371 *)((t371 *)UnBox (p0, InitializedTypeInfo(&t371_TI))))));
			V_0 = L_0;
			// IL_000d: leave.s IL_0019
			goto IL_0019;
		}

IL_000f:
		{
			// IL_000f: leave.s IL_0017
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t26 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t573_TI, e.ex->object.klass))
			goto IL_0011;
		if(il2cpp_codegen_class_is_assignable_from (&t1268_TI, e.ex->object.klass))
			goto IL_0014;
		throw e;
	}

IL_0011:
	{ // begin catch(System.NullReferenceException)
		// IL_0012: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0014:
	{ // begin catch(System.InvalidCastException)
		// IL_0015: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		return V_0;
	}
}
extern MethodInfo m14487_MI;
 int32_t m14487 (t516 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t26 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t26 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t371  >::Invoke(&m14510_MI, __this, ((*(t371 *)((t371 *)UnBox (p0, InitializedTypeInfo(&t371_TI))))));
			V_0 = L_0;
			// IL_000d: leave.s IL_0019
			goto IL_0019;
		}

IL_000f:
		{
			// IL_000f: leave.s IL_0017
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t26 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t573_TI, e.ex->object.klass))
			goto IL_0011;
		if(il2cpp_codegen_class_is_assignable_from (&t1268_TI, e.ex->object.klass))
			goto IL_0014;
		throw e;
	}

IL_0011:
	{ // begin catch(System.NullReferenceException)
		// IL_0012: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0014:
	{ // begin catch(System.InvalidCastException)
		// IL_0015: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		return V_0;
	}
}
extern MethodInfo m14488_MI;
 void m14488 (t516 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	t26 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t26 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		m14512(__this, p0, &m14512_MI);
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			VirtActionInvoker2< int32_t, t371  >::Invoke(&m14513_MI, __this, p0, ((*(t371 *)((t371 *)UnBox (p1, InitializedTypeInfo(&t371_TI))))));
			// IL_0014: leave.s IL_0029
			goto IL_0029;
		}

IL_0016:
		{
			// IL_0016: leave.s IL_001e
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t26 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t573_TI, e.ex->object.klass))
			goto IL_0018;
		if(il2cpp_codegen_class_is_assignable_from (&t1268_TI, e.ex->object.klass))
			goto IL_001b;
		throw e;
	}

IL_0018:
	{ // begin catch(System.NullReferenceException)
		// IL_0019: leave.s IL_001e
		goto IL_001e;
	} // end catch (depth: 1)

IL_001b:
	{ // begin catch(System.InvalidCastException)
		// IL_001c: leave.s IL_001e
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		t303 * L_0 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_0, (t8*) &_stringLiteral551, &m1917_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0029:
	{
		return;
	}
}
extern MethodInfo m14489_MI;
 void m14489 (t516 * __this, t4 * p0, MethodInfo* method){
	t26 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t26 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			VirtFuncInvoker1< bool, t371  >::Invoke(&m14515_MI, __this, ((*(t371 *)((t371 *)UnBox (p0, InitializedTypeInfo(&t371_TI))))));
			// IL_000d: leave.s IL_0017
			goto IL_0017;
		}

IL_000f:
		{
			// IL_000f: leave.s IL_0017
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t26 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t573_TI, e.ex->object.klass))
			goto IL_0011;
		if(il2cpp_codegen_class_is_assignable_from (&t1268_TI, e.ex->object.klass))
			goto IL_0014;
		throw e;
	}

IL_0011:
	{ // begin catch(System.NullReferenceException)
		// IL_0012: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0014:
	{ // begin catch(System.InvalidCastException)
		// IL_0015: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
extern MethodInfo m14490_MI;
 bool m14490 (t516 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14491_MI;
 bool m14491 (t516 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14492_MI;
 t4 * m14492 (t516 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m14493_MI;
 bool m14493 (t516 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14494_MI;
 bool m14494 (t516 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14495_MI;
 t4 * m14495 (t516 * __this, int32_t p0, MethodInfo* method){
	{
		t371  L_0 = (t371 )VirtFuncInvoker1< t371 , int32_t >::Invoke(&m14526_MI, __this, p0);
		t371  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t371_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14496_MI;
 void m14496 (t516 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	t26 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t26 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			VirtActionInvoker2< int32_t, t371  >::Invoke(&m14527_MI, __this, p0, ((*(t371 *)((t371 *)UnBox (p1, InitializedTypeInfo(&t371_TI))))));
			// IL_000d: leave.s IL_0022
			goto IL_0022;
		}

IL_000f:
		{
			// IL_000f: leave.s IL_0017
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t26 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t573_TI, e.ex->object.klass))
			goto IL_0011;
		if(il2cpp_codegen_class_is_assignable_from (&t1268_TI, e.ex->object.klass))
			goto IL_0014;
		throw e;
	}

IL_0011:
	{ // begin catch(System.NullReferenceException)
		// IL_0012: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0014:
	{ // begin catch(System.InvalidCastException)
		// IL_0015: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		t303 * L_0 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_0, (t8*) &_stringLiteral242, &m1917_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0022:
	{
		return;
	}
}
extern MethodInfo m14497_MI;
 void m14497 (t516 * __this, t371  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f2);
		t518* L_1 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)(((int32_t)(((t14 *)L_1)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		m14498(__this, 1, &m14498_MI);
	}

IL_0017:
	{
		t518* L_2 = (__this->f1);
		int32_t L_3 = (__this->f2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->f2 = ((int32_t)(L_4+1));
		*((t371 *)(t371 *)SZArrayLdElema(L_2, V_0)) = (t371 )p0;
		int32_t L_5 = (__this->f3);
		__this->f3 = ((int32_t)(L_5+1));
		return;
	}
}
extern MethodInfo m14498_MI;
 void m14498 (t516 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f2);
		V_0 = ((int32_t)(L_0+p0));
		t518* L_1 = (__this->f1);
		if ((((int32_t)V_0) <= ((int32_t)(((int32_t)(((t14 *)L_1)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = m14523(__this, &m14523_MI);
		int32_t L_3 = m6892(NULL, ((int32_t)(L_2*2)), 4, &m6892_MI);
		int32_t L_4 = m6892(NULL, L_3, V_0, &m6892_MI);
		m14524(__this, L_4, &m14524_MI);
	}

IL_002e:
	{
		return;
	}
}
extern MethodInfo m14499_MI;
 void m14499 (t516 * __this, t4* p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m24654_MI, p0);
		V_0 = L_0;
		if (V_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		m14498(__this, V_0, &m14498_MI);
		t518* L_1 = (__this->f1);
		int32_t L_2 = (__this->f2);
		InterfaceActionInvoker2< t518*, int32_t >::Invoke(&m24659_MI, p0, L_1, L_2);
		int32_t L_3 = (__this->f2);
		__this->f2 = ((int32_t)(L_3+V_0));
		return;
	}
}
extern MethodInfo m14500_MI;
 void m14500 (t516 * __this, t4* p0, MethodInfo* method){
	t371  V_0 = {0};
	t4* V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t26 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t26 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t4* L_0 = (t4*)InterfaceFuncInvoker0< t4* >::Invoke(&m24661_MI, p0);
		V_1 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			t371  L_1 = (t371 )InterfaceFuncInvoker0< t371  >::Invoke(&m24662_MI, V_1);
			V_0 = L_1;
			VirtActionInvoker1< t371  >::Invoke(&m14497_MI, __this, V_0);
		}

IL_0017:
		{
			bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m7290_MI, V_1);
			if (L_2)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			// IL_001f: leave.s IL_002c
			leaveInstructions[0] = 0x2C; // 1
			THROW_SENTINEL(IL_002c);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0021;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t26 *)e.ex;
		goto IL_0021;
	}

IL_0021:
	{ // begin finally (depth: 1)
		{
			if (V_1)
			{
				goto IL_0025;
			}
		}

IL_0024:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x2C:
					goto IL_002c;
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
		}

IL_0025:
		{
			InterfaceActionInvoker0::Invoke(&m42_MI, V_1);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x2C:
					goto IL_002c;
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
		}
	} // end finally (depth: 1)

IL_002c:
	{
		return;
	}
}
extern MethodInfo m14501_MI;
 void m14501 (t516 * __this, t4* p0, MethodInfo* method){
	t4* V_0 = {0};
	{
		m14514(__this, p0, &m14514_MI);
		V_0 = ((t4*)IsInst(p0, InitializedTypeInfo(&t2532_TI)));
		if (!V_0)
		{
			goto IL_001a;
		}
	}
	{
		m14499(__this, V_0, &m14499_MI);
		goto IL_0021;
	}

IL_001a:
	{
		m14500(__this, p0, &m14500_MI);
	}

IL_0021:
	{
		int32_t L_0 = (__this->f3);
		__this->f3 = ((int32_t)(L_0+1));
		return;
	}
}
extern MethodInfo m14502_MI;
 t2534 * m14502 (t516 * __this, MethodInfo* method){
	{
		t2534 * L_0 = (t2534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2534_TI));
		m14534(L_0, __this, &m14534_MI);
		return L_0;
	}
}
extern MethodInfo m14503_MI;
 void m14503 (t516 * __this, MethodInfo* method){
	{
		t518* L_0 = (__this->f1);
		t518* L_1 = (__this->f1);
		m3735(NULL, (t14 *)(t14 *)L_0, 0, (((int32_t)(((t14 *)L_1)->max_length))), &m3735_MI);
		__this->f2 = 0;
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)(L_2+1));
		return;
	}
}
extern MethodInfo m14504_MI;
 bool m14504 (t516 * __this, t371  p0, MethodInfo* method){
	{
		t518* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		int32_t L_2 = m20010(NULL, L_0, p0, 0, L_1, &m20010_MI);
		return ((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m14505_MI;
 void m14505 (t516 * __this, t518* p0, int32_t p1, MethodInfo* method){
	{
		t518* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		m3739(NULL, (t14 *)(t14 *)L_0, 0, (t14 *)(t14 *)p0, p1, L_1, &m3739_MI);
		return;
	}
}
extern MethodInfo m14506_MI;
 t371  m14506 (t516 * __this, t2535 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t371  V_1 = {0};
	t371  G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t516_TI));
		m14507(NULL, p0, &m14507_MI);
		int32_t L_0 = (__this->f2);
		int32_t L_1 = m14508(__this, 0, L_0, p0, &m14508_MI);
		V_0 = L_1;
		if ((((int32_t)V_0) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		t518* L_2 = (__this->f1);
		G_B3_0 = (*(t371 *)(t371 *)SZArrayLdElema(L_2, V_0));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (&t371_TI, (&V_1));
		G_B3_0 = V_1;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
extern MethodInfo m14507_MI;
 void m14507 (t4 * __this, t2535 * p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral367, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		return;
	}
}
extern MethodInfo m14508_MI;
 int32_t m14508 (t516 * __this, int32_t p0, int32_t p1, t2535 * p2, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)(p0+p1));
		V_1 = p0;
		goto IL_0022;
	}

IL_0008:
	{
		t518* L_0 = (__this->f1);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t371  >::Invoke(&m14609_MI, p2, (*(t371 *)(t371 *)SZArrayLdElema(L_0, V_1)));
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		return V_1;
	}

IL_001e:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0022:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
extern MethodInfo m14509_MI;
 t2537  m14509 (t516 * __this, MethodInfo* method){
	{
		t2537  L_0 = {0};
		m14528(&L_0, __this, &m14528_MI);
		return L_0;
	}
}
extern MethodInfo m14510_MI;
 int32_t m14510 (t516 * __this, t371  p0, MethodInfo* method){
	{
		t518* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		int32_t L_2 = m20010(NULL, L_0, p0, 0, L_1, &m20010_MI);
		return L_2;
	}
}
extern MethodInfo m14511_MI;
 void m14511 (t516 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		p0 = ((int32_t)(p0-p1));
	}

IL_000b:
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)p0) >= ((int32_t)L_0)))
		{
			goto IL_0031;
		}
	}
	{
		t518* L_1 = (__this->f1);
		t518* L_2 = (__this->f1);
		int32_t L_3 = (__this->f2);
		m3739(NULL, (t14 *)(t14 *)L_1, p0, (t14 *)(t14 *)L_2, ((int32_t)(p0+p1)), ((int32_t)(L_3-p0)), &m3739_MI);
	}

IL_0031:
	{
		int32_t L_4 = (__this->f2);
		__this->f2 = ((int32_t)(L_4+p1));
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		t518* L_5 = (__this->f1);
		int32_t L_6 = (__this->f2);
		m3735(NULL, (t14 *)(t14 *)L_5, L_6, ((-p1)), &m3735_MI);
	}

IL_0056:
	{
		return;
	}
}
extern MethodInfo m14512_MI;
 void m14512 (t516 * __this, int32_t p0, MethodInfo* method){
	{
		if ((((int32_t)p0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) <= ((uint32_t)L_0)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		t1233 * L_1 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6454(L_1, (t8*) &_stringLiteral323, &m6454_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0018:
	{
		return;
	}
}
extern MethodInfo m14513_MI;
 void m14513 (t516 * __this, int32_t p0, t371  p1, MethodInfo* method){
	{
		m14512(__this, p0, &m14512_MI);
		int32_t L_0 = (__this->f2);
		t518* L_1 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)(((int32_t)(((t14 *)L_1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		m14498(__this, 1, &m14498_MI);
	}

IL_001e:
	{
		m14511(__this, p0, 1, &m14511_MI);
		t518* L_2 = (__this->f1);
		*((t371 *)(t371 *)SZArrayLdElema(L_2, p0)) = (t371 )p1;
		int32_t L_3 = (__this->f3);
		__this->f3 = ((int32_t)(L_3+1));
		return;
	}
}
extern MethodInfo m14514_MI;
 void m14514 (t516 * __this, t4* p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral552, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		return;
	}
}
extern MethodInfo m14515_MI;
 bool m14515 (t516 * __this, t371  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t371  >::Invoke(&m14510_MI, __this, p0);
		V_0 = L_0;
		if ((((int32_t)V_0) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker1< int32_t >::Invoke(&m14517_MI, __this, V_0);
	}

IL_0013:
	{
		return ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m14516_MI;
 int32_t m14516 (t516 * __this, t2535 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t516_TI));
		m14507(NULL, p0, &m14507_MI);
		V_0 = 0;
		V_1 = 0;
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		t518* L_0 = (__this->f1);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t371  >::Invoke(&m14609_MI, p0, (*(t371 *)(t371 *)SZArrayLdElema(L_0, V_0)));
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0031;
	}

IL_0024:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0028:
	{
		int32_t L_2 = (__this->f2);
		if ((((int32_t)V_0) < ((int32_t)L_2)))
		{
			goto IL_000e;
		}
	}

IL_0031:
	{
		int32_t L_3 = (__this->f2);
		if ((((uint32_t)V_0) != ((uint32_t)L_3)))
		{
			goto IL_003c;
		}
	}
	{
		return 0;
	}

IL_003c:
	{
		int32_t L_4 = (__this->f3);
		__this->f3 = ((int32_t)(L_4+1));
		V_1 = ((int32_t)(V_0+1));
		goto IL_0084;
	}

IL_0050:
	{
		t518* L_5 = (__this->f1);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t371  >::Invoke(&m14609_MI, p0, (*(t371 *)(t371 *)SZArrayLdElema(L_5, V_1)));
		if (L_6)
		{
			goto IL_0080;
		}
	}
	{
		t518* L_7 = (__this->f1);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)(L_8+1));
		t518* L_9 = (__this->f1);
		*((t371 *)(t371 *)SZArrayLdElema(L_7, L_8)) = (t371 )(*(t371 *)(t371 *)SZArrayLdElema(L_9, V_1));
	}

IL_0080:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0084:
	{
		int32_t L_10 = (__this->f2);
		if ((((int32_t)V_1) < ((int32_t)L_10)))
		{
			goto IL_0050;
		}
	}
	{
		if ((((int32_t)((int32_t)(V_1-V_0))) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		t518* L_11 = (__this->f1);
		m3735(NULL, (t14 *)(t14 *)L_11, V_0, ((int32_t)(V_1-V_0)), &m3735_MI);
	}

IL_00a2:
	{
		__this->f2 = V_0;
		return ((int32_t)(V_1-V_0));
	}
}
extern MethodInfo m14517_MI;
 void m14517 (t516 * __this, int32_t p0, MethodInfo* method){
	{
		if ((((int32_t)p0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		t1233 * L_1 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6454(L_1, (t8*) &_stringLiteral323, &m6454_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0018:
	{
		m14511(__this, p0, (-1), &m14511_MI);
		t518* L_2 = (__this->f1);
		int32_t L_3 = (__this->f2);
		m3735(NULL, (t14 *)(t14 *)L_2, L_3, 1, &m3735_MI);
		int32_t L_4 = (__this->f3);
		__this->f3 = ((int32_t)(L_4+1));
		return;
	}
}
extern MethodInfo m14518_MI;
 void m14518 (t516 * __this, MethodInfo* method){
	{
		t518* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		m3751(NULL, (t14 *)(t14 *)L_0, 0, L_1, &m3751_MI);
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)(L_2+1));
		return;
	}
}
extern MethodInfo m14519_MI;
 void m14519 (t516 * __this, MethodInfo* method){
	{
		t518* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2541_TI));
		t2541 * L_2 = m14615(NULL, &m14615_MI);
		m20012(NULL, L_0, 0, L_1, L_2, &m20012_MI);
		int32_t L_3 = (__this->f3);
		__this->f3 = ((int32_t)(L_3+1));
		return;
	}
}
extern MethodInfo m14520_MI;
 void m14520 (t516 * __this, t2536 * p0, MethodInfo* method){
	{
		t518* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		m20020(NULL, L_0, L_1, p0, &m20020_MI);
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)(L_2+1));
		return;
	}
}
extern MethodInfo m14521_MI;
 t518* m14521 (t516 * __this, MethodInfo* method){
	t518* V_0 = {0};
	{
		int32_t L_0 = (__this->f2);
		V_0 = ((t518*)SZArrayNew(InitializedTypeInfo(&t518_TI), L_0));
		t518* L_1 = (__this->f1);
		int32_t L_2 = (__this->f2);
		m3738(NULL, (t14 *)(t14 *)L_1, (t14 *)(t14 *)V_0, L_2, &m3738_MI);
		return V_0;
	}
}
extern MethodInfo m14522_MI;
 void m14522 (t516 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		m14524(__this, L_0, &m14524_MI);
		return;
	}
}
extern MethodInfo m14523_MI;
 int32_t m14523 (t516 * __this, MethodInfo* method){
	{
		t518* L_0 = (__this->f1);
		return (((int32_t)(((t14 *)L_0)->max_length)));
	}
}
extern MethodInfo m14524_MI;
 void m14524 (t516 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) >= ((uint32_t)L_0)))
		{
			goto IL_000f;
		}
	}
	{
		t1233 * L_1 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6453(L_1, &m6453_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000f:
	{
		t518** L_2 = &(__this->f1);
		m20008(NULL, L_2, p0, &m20008_MI);
		return;
	}
}
extern MethodInfo m14525_MI;
 int32_t m14525 (t516 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m14526_MI;
 t371  m14526 (t516 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t1233 * L_1 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6454(L_1, (t8*) &_stringLiteral323, &m6454_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		t518* L_2 = (__this->f1);
		return (*(t371 *)(t371 *)SZArrayLdElema(L_2, p0));
	}
}
extern MethodInfo m14527_MI;
 void m14527 (t516 * __this, int32_t p0, t371  p1, MethodInfo* method){
	{
		m14512(__this, p0, &m14512_MI);
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) != ((uint32_t)L_0)))
		{
			goto IL_001b;
		}
	}
	{
		t1233 * L_1 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6454(L_1, (t8*) &_stringLiteral323, &m6454_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001b:
	{
		t518* L_2 = (__this->f1);
		*((t371 *)(t371 *)SZArrayLdElema(L_2, p0)) = (t371 )p1;
		return;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.UICharInfo>
extern Il2CppType t16_0_0_32849;
FieldInfo t516_f0_FieldInfo = 
{
	"DefaultCapacity", &t16_0_0_32849, &t516_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t518_0_0_1;
FieldInfo t516_f1_FieldInfo = 
{
	"_items", &t518_0_0_1, &t516_TI, offsetof(t516, f1), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t516_f2_FieldInfo = 
{
	"_size", &t16_0_0_1, &t516_TI, offsetof(t516, f2), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t516_f3_FieldInfo = 
{
	"_version", &t16_0_0_1, &t516_TI, offsetof(t516, f3), &EmptyCustomAttributesCache};
extern Il2CppType t518_0_0_49;
FieldInfo t516_f4_FieldInfo = 
{
	"EmptyArray", &t518_0_0_49, &t516_TI, offsetof(t516_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t516_FIs[] =
{
	&t516_f0_FieldInfo,
	&t516_f1_FieldInfo,
	&t516_f2_FieldInfo,
	&t516_f3_FieldInfo,
	&t516_f4_FieldInfo,
	NULL
};
static const int32_t t516_f0_DefaultValueData = 4;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t516_f0_DefaultValue = 
{
	&t516_f0_FieldInfo, { (char*)&t516_f0_DefaultValueData, &t16_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t516_FDVs[] = 
{
	&t516_f0_DefaultValue,
	NULL
};
extern MethodInfo m14490_MI;
static PropertyInfo t516____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t516_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14490_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14491_MI;
static PropertyInfo t516____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t516_TI, "System.Collections.ICollection.IsSynchronized", &m14491_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14492_MI;
static PropertyInfo t516____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t516_TI, "System.Collections.ICollection.SyncRoot", &m14492_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14493_MI;
static PropertyInfo t516____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t516_TI, "System.Collections.IList.IsFixedSize", &m14493_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14494_MI;
static PropertyInfo t516____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t516_TI, "System.Collections.IList.IsReadOnly", &m14494_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14495_MI;
extern MethodInfo m14496_MI;
static PropertyInfo t516____System_Collections_IList_Item_PropertyInfo = 
{
	&t516_TI, "System.Collections.IList.Item", &m14495_MI, &m14496_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14523_MI;
extern MethodInfo m14524_MI;
static PropertyInfo t516____Capacity_PropertyInfo = 
{
	&t516_TI, "Capacity", &m14523_MI, &m14524_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14525_MI;
static PropertyInfo t516____Count_PropertyInfo = 
{
	&t516_TI, "Count", &m14525_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14526_MI;
extern MethodInfo m14527_MI;
static PropertyInfo t516____Item_PropertyInfo = 
{
	&t516_TI, "Item", &m14526_MI, &m14527_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t516_PIs[] =
{
	&t516____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t516____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t516____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t516____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t516____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t516____System_Collections_IList_Item_PropertyInfo,
	&t516____Capacity_PropertyInfo,
	&t516____Count_PropertyInfo,
	&t516____Item_PropertyInfo,
	NULL
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14480_MI = 
{
	".ctor", (methodPointerType)&m14480, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t516_m2881_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m2881_MI = 
{
	".ctor", (methodPointerType)&m2881, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t516_m2881_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14481_MI = 
{
	".cctor", (methodPointerType)&m14481, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t2531_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14482_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m14482, &t516_TI, &t2531_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t516_m14483_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14483_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m14483, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t516_m14483_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14484_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m14484, &t516_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t516_m14485_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14485_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m14485, &t516_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t516_m14485_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t516_m14486_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14486_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m14486, &t516_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t516_m14486_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t516_m14487_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14487_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m14487, &t516_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t516_m14487_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t516_m14488_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14488_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m14488, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t516_m14488_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t516_m14489_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14489_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m14489, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t516_m14489_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14490_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m14490, &t516_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14491_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m14491, &t516_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14492_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m14492, &t516_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14493_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m14493, &t516_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14494_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m14494, &t516_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t516_m14495_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14495_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m14495, &t516_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t516_m14495_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t516_m14496_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14496_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m14496, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t516_m14496_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t516_m14497_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14497_MI = 
{
	"Add", (methodPointerType)&m14497, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t371, t516_m14497_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t516_m14498_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14498_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m14498, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t516_m14498_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2532_0_0_0;
static ParameterInfo t516_m14499_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2532_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14499_MI = 
{
	"AddCollection", (methodPointerType)&m14499, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t516_m14499_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2533_0_0_0;
static ParameterInfo t516_m14500_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2533_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14500_MI = 
{
	"AddEnumerable", (methodPointerType)&m14500, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t516_m14500_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2533_0_0_0;
static ParameterInfo t516_m14501_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2533_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14501_MI = 
{
	"AddRange", (methodPointerType)&m14501, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t516_m14501_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t2534_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14502_MI = 
{
	"AsReadOnly", (methodPointerType)&m14502, &t516_TI, &t2534_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14503_MI = 
{
	"Clear", (methodPointerType)&m14503, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t516_m14504_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14504_MI = 
{
	"Contains", (methodPointerType)&m14504, &t516_TI, &t17_0_0_0, RuntimeInvoker_t17_t371, t516_m14504_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t518_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t516_m14505_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t518_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14505_MI = 
{
	"CopyTo", (methodPointerType)&m14505, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t516_m14505_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2535_0_0_0;
static ParameterInfo t516_m14506_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2535_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t371_0_0_0;
extern void* RuntimeInvoker_t371_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14506_MI = 
{
	"Find", (methodPointerType)&m14506, &t516_TI, &t371_0_0_0, RuntimeInvoker_t371_t4, t516_m14506_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2535_0_0_0;
static ParameterInfo t516_m14507_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2535_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14507_MI = 
{
	"CheckMatch", (methodPointerType)&m14507, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t516_m14507_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
extern Il2CppType t2535_0_0_0;
static ParameterInfo t516_m14508_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2535_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14508_MI = 
{
	"GetIndex", (methodPointerType)&m14508, &t516_TI, &t16_0_0_0, RuntimeInvoker_t16_t16_t16_t4, t516_m14508_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t2537_0_0_0;
extern void* RuntimeInvoker_t2537 (MethodInfo* method, void* obj, void** args);
MethodInfo m14509_MI = 
{
	"GetEnumerator", (methodPointerType)&m14509, &t516_TI, &t2537_0_0_0, RuntimeInvoker_t2537, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t516_m14510_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14510_MI = 
{
	"IndexOf", (methodPointerType)&m14510, &t516_TI, &t16_0_0_0, RuntimeInvoker_t16_t371, t516_m14510_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t516_m14511_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14511_MI = 
{
	"Shift", (methodPointerType)&m14511, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t516_m14511_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t516_m14512_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14512_MI = 
{
	"CheckIndex", (methodPointerType)&m14512, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t516_m14512_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t516_m14513_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14513_MI = 
{
	"Insert", (methodPointerType)&m14513, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t371, t516_m14513_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2533_0_0_0;
static ParameterInfo t516_m14514_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2533_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14514_MI = 
{
	"CheckCollection", (methodPointerType)&m14514, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t516_m14514_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t516_m14515_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14515_MI = 
{
	"Remove", (methodPointerType)&m14515, &t516_TI, &t17_0_0_0, RuntimeInvoker_t17_t371, t516_m14515_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2535_0_0_0;
static ParameterInfo t516_m14516_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2535_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14516_MI = 
{
	"RemoveAll", (methodPointerType)&m14516, &t516_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t516_m14516_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t516_m14517_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14517_MI = 
{
	"RemoveAt", (methodPointerType)&m14517, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t516_m14517_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14518_MI = 
{
	"Reverse", (methodPointerType)&m14518, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14519_MI = 
{
	"Sort", (methodPointerType)&m14519, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2536_0_0_0;
static ParameterInfo t516_m14520_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2536_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14520_MI = 
{
	"Sort", (methodPointerType)&m14520, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t516_m14520_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t518_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14521_MI = 
{
	"ToArray", (methodPointerType)&m14521, &t516_TI, &t518_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14522_MI = 
{
	"TrimExcess", (methodPointerType)&m14522, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14523_MI = 
{
	"get_Capacity", (methodPointerType)&m14523, &t516_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t516_m14524_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14524_MI = 
{
	"set_Capacity", (methodPointerType)&m14524, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t516_m14524_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t516_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14525_MI = 
{
	"get_Count", (methodPointerType)&m14525, &t516_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t516_m14526_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t371_0_0_0;
extern void* RuntimeInvoker_t371_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14526_MI = 
{
	"get_Item", (methodPointerType)&m14526, &t516_TI, &t371_0_0_0, RuntimeInvoker_t371_t16, t516_m14526_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t516_m14527_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14527_MI = 
{
	"set_Item", (methodPointerType)&m14527, &t516_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t371, t516_m14527_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t516_MIs[] =
{
	&m14480_MI,
	&m2881_MI,
	&m14481_MI,
	&m14482_MI,
	&m14483_MI,
	&m14484_MI,
	&m14485_MI,
	&m14486_MI,
	&m14487_MI,
	&m14488_MI,
	&m14489_MI,
	&m14490_MI,
	&m14491_MI,
	&m14492_MI,
	&m14493_MI,
	&m14494_MI,
	&m14495_MI,
	&m14496_MI,
	&m14497_MI,
	&m14498_MI,
	&m14499_MI,
	&m14500_MI,
	&m14501_MI,
	&m14502_MI,
	&m14503_MI,
	&m14504_MI,
	&m14505_MI,
	&m14506_MI,
	&m14507_MI,
	&m14508_MI,
	&m14509_MI,
	&m14510_MI,
	&m14511_MI,
	&m14512_MI,
	&m14513_MI,
	&m14514_MI,
	&m14515_MI,
	&m14516_MI,
	&m14517_MI,
	&m14518_MI,
	&m14519_MI,
	&m14520_MI,
	&m14521_MI,
	&m14522_MI,
	&m14523_MI,
	&m14524_MI,
	&m14525_MI,
	&m14526_MI,
	&m14527_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14484_MI;
extern MethodInfo m14525_MI;
extern MethodInfo m14491_MI;
extern MethodInfo m14492_MI;
extern MethodInfo m14483_MI;
extern MethodInfo m14493_MI;
extern MethodInfo m14494_MI;
extern MethodInfo m14495_MI;
extern MethodInfo m14496_MI;
extern MethodInfo m14485_MI;
extern MethodInfo m14503_MI;
extern MethodInfo m14486_MI;
extern MethodInfo m14487_MI;
extern MethodInfo m14488_MI;
extern MethodInfo m14489_MI;
extern MethodInfo m14517_MI;
extern MethodInfo m14525_MI;
extern MethodInfo m14490_MI;
extern MethodInfo m14497_MI;
extern MethodInfo m14503_MI;
extern MethodInfo m14504_MI;
extern MethodInfo m14505_MI;
extern MethodInfo m14515_MI;
extern MethodInfo m14482_MI;
extern MethodInfo m14510_MI;
extern MethodInfo m14513_MI;
extern MethodInfo m14517_MI;
extern MethodInfo m14526_MI;
extern MethodInfo m14527_MI;
static MethodInfo* t516_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14484_MI,
	&m14525_MI,
	&m14491_MI,
	&m14492_MI,
	&m14483_MI,
	&m14493_MI,
	&m14494_MI,
	&m14495_MI,
	&m14496_MI,
	&m14485_MI,
	&m14503_MI,
	&m14486_MI,
	&m14487_MI,
	&m14488_MI,
	&m14489_MI,
	&m14517_MI,
	&m14525_MI,
	&m14490_MI,
	&m14497_MI,
	&m14503_MI,
	&m14504_MI,
	&m14505_MI,
	&m14515_MI,
	&m14482_MI,
	&m14510_MI,
	&m14513_MI,
	&m14517_MI,
	&m14526_MI,
	&m14527_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t2532_TI;
extern TypeInfo t2533_TI;
extern TypeInfo t378_TI;
static TypeInfo* t516_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1014_TI,
	&t2532_TI,
	&t2533_TI,
	&t378_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t2532_TI;
extern TypeInfo t2533_TI;
extern TypeInfo t378_TI;
static Il2CppInterfaceOffsetPair t516_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1014_TI, 9},
	{ &t2532_TI, 20},
	{ &t2533_TI, 27},
	{ &t378_TI, 28},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t516_0_0_0;
extern Il2CppType t516_1_0_0;
extern TypeInfo t4_TI;
struct t516;
extern TypeInfo t516_TI;
extern Il2CppGenericClass t516_GC;
extern CustomAttributesCache t839__CustomAttributeCache;
TypeInfo t516_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t516_MIs, t516_PIs, t516_FIs, NULL, &t4_TI, NULL, NULL, &t516_TI, t516_ITIs, t516_VT, &t839__CustomAttributeCache, &t516_TI, &t516_0_0_0, &t516_1_0_0, t516_IOs, &t516_GC, NULL, t516_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t516), 0, -1, sizeof(t516_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2537_TI;

#include "t1286.h"
extern TypeInfo t2537_TI;
extern TypeInfo t1269_TI;
extern TypeInfo t371_TI;
extern TypeInfo t516_TI;
extern TypeInfo t290_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1286_TI;
#include "t1286MD.h"
extern MethodInfo m14531_MI;
extern MethodInfo m6886_MI;
extern MethodInfo m1401_MI;
extern MethodInfo m2975_MI;
extern MethodInfo m7091_MI;
extern MethodInfo m6887_MI;


extern MethodInfo m14528_MI;
 void m14528 (t2537 * __this, t516 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f3);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m14529_MI;
 t4 * m14529 (t2537 * __this, MethodInfo* method){
	{
		m14531(__this, &m14531_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6886(L_1, &m6886_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		t371  L_2 = (__this->f3);
		t371  L_3 = L_2;
		t4 * L_4 = Box(InitializedTypeInfo(&t371_TI), &L_3);
		return L_4;
	}
}
extern MethodInfo m14530_MI;
 void m14530 (t2537 * __this, MethodInfo* method){
	{
		__this->f0 = (t516 *)NULL;
		return;
	}
}
extern MethodInfo m14531_MI;
 void m14531 (t2537 * __this, MethodInfo* method){
	{
		t516 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		t2537  L_1 = (*(t2537 *)__this);
		t4 * L_2 = Box(InitializedTypeInfo(&t2537_TI), &L_1);
		t290 * L_3 = m1401(L_2, &m1401_MI);
		t8* L_4 = (t8*)VirtFuncInvoker0< t8* >::Invoke(&m2975_MI, L_3);
		t1286 * L_5 = (t1286 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1286_TI));
		m7091(L_5, L_4, &m7091_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_0023:
	{
		int32_t L_6 = (__this->f2);
		t516 * L_7 = (__this->f0);
		int32_t L_8 = (L_7->f3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		t1269 * L_9 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_9, (t8*) &_stringLiteral553, &m6887_MI);
		il2cpp_codegen_raise_exception (L_9);
	}

IL_0041:
	{
		return;
	}
}
extern MethodInfo m14532_MI;
 bool m14532 (t2537 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	{
		m14531(__this, &m14531_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_1 = (__this->f1);
		t516 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		t516 * L_4 = (__this->f0);
		t518* L_5 = (L_4->f1);
		int32_t L_6 = (__this->f1);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f1 = ((int32_t)(L_7+1));
		__this->f3 = (*(t371 *)(t371 *)SZArrayLdElema(L_5, V_0));
		return 1;
	}

IL_004d:
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m14533_MI;
 t371  m14533 (t2537 * __this, MethodInfo* method){
	{
		t371  L_0 = (__this->f3);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
extern Il2CppType t516_0_0_1;
FieldInfo t2537_f0_FieldInfo = 
{
	"l", &t516_0_0_1, &t2537_TI, offsetof(t2537, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2537_f1_FieldInfo = 
{
	"next", &t16_0_0_1, &t2537_TI, offsetof(t2537, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2537_f2_FieldInfo = 
{
	"ver", &t16_0_0_1, &t2537_TI, offsetof(t2537, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t371_0_0_1;
FieldInfo t2537_f3_FieldInfo = 
{
	"current", &t371_0_0_1, &t2537_TI, offsetof(t2537, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2537_FIs[] =
{
	&t2537_f0_FieldInfo,
	&t2537_f1_FieldInfo,
	&t2537_f2_FieldInfo,
	&t2537_f3_FieldInfo,
	NULL
};
extern MethodInfo m14529_MI;
static PropertyInfo t2537____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2537_TI, "System.Collections.IEnumerator.Current", &m14529_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14533_MI;
static PropertyInfo t2537____Current_PropertyInfo = 
{
	&t2537_TI, "Current", &m14533_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2537_PIs[] =
{
	&t2537____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2537____Current_PropertyInfo,
	NULL
};
extern Il2CppType t516_0_0_0;
static ParameterInfo t2537_m14528_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t516_0_0_0},
};
extern TypeInfo t2537_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14528_MI = 
{
	".ctor", (methodPointerType)&m14528, &t2537_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2537_m14528_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2537_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14529_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14529, &t2537_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2537_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14530_MI = 
{
	"Dispose", (methodPointerType)&m14530, &t2537_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2537_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14531_MI = 
{
	"VerifyState", (methodPointerType)&m14531, &t2537_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2537_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14532_MI = 
{
	"MoveNext", (methodPointerType)&m14532, &t2537_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2537_TI;
extern Il2CppType t371_0_0_0;
extern void* RuntimeInvoker_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14533_MI = 
{
	"get_Current", (methodPointerType)&m14533, &t2537_TI, &t371_0_0_0, RuntimeInvoker_t371, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2537_MIs[] =
{
	&m14528_MI,
	&m14529_MI,
	&m14530_MI,
	&m14531_MI,
	&m14532_MI,
	&m14533_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m14529_MI;
extern MethodInfo m14532_MI;
extern MethodInfo m14530_MI;
extern MethodInfo m14533_MI;
static MethodInfo* t2537_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m14529_MI,
	&m14532_MI,
	&m14530_MI,
	&m14533_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t2531_TI;
static TypeInfo* t2537_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t2531_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t2531_TI;
static Il2CppInterfaceOffsetPair t2537_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t2531_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2537_0_0_0;
extern Il2CppType t2537_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2537_TI;
extern Il2CppGenericClass t2537_GC;
extern TypeInfo t839_TI;
TypeInfo t2537_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2537_MIs, t2537_PIs, t2537_FIs, NULL, &t95_TI, NULL, &t839_TI, &t2537_TI, t2537_ITIs, t2537_VT, &EmptyCustomAttributesCache, &t2537_TI, &t2537_0_0_0, &t2537_1_0_0, t2537_IOs, &t2537_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2537)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2534_TI;

#include "t335.h"
extern TypeInfo t2534_TI;
extern TypeInfo t371_TI;
extern TypeInfo t16_TI;
extern TypeInfo t335_TI;
extern TypeInfo t378_TI;
extern TypeInfo t2532_TI;
extern TypeInfo t328_TI;
extern TypeInfo t640_TI;
extern TypeInfo t15_TI;
extern TypeInfo t14_TI;
extern TypeInfo t591_TI;
extern TypeInfo t123_TI;
extern TypeInfo t17_TI;
extern TypeInfo t518_TI;
extern TypeInfo t2533_TI;
extern TypeInfo t2531_TI;
#include "t335MD.h"
#include "t2538MD.h"
extern MethodInfo m14563_MI;
extern MethodInfo m1489_MI;
extern MethodInfo m1728_MI;
extern MethodInfo m24654_MI;
extern MethodInfo m15_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m7382_MI;
extern MethodInfo m7291_MI;
extern MethodInfo m14595_MI;
extern MethodInfo m24658_MI;
extern MethodInfo m24651_MI;
extern MethodInfo m24659_MI;
extern MethodInfo m24661_MI;


extern MethodInfo m14534_MI;
 void m14534 (t2534 * __this, t4* p0, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral554, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m14535_MI;
 void m14535 (t2534 * __this, t371  p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14536_MI;
 void m14536 (t2534 * __this, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14537_MI;
 void m14537 (t2534 * __this, int32_t p0, t371  p1, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14538_MI;
 bool m14538 (t2534 * __this, t371  p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14539_MI;
 void m14539 (t2534 * __this, int32_t p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14540_MI;
 t371  m14540 (t2534 * __this, int32_t p0, MethodInfo* method){
	{
		t371  L_0 = (t371 )VirtFuncInvoker1< t371 , int32_t >::Invoke(&m14563_MI, __this, p0);
		return L_0;
	}
}
extern MethodInfo m14541_MI;
 void m14541 (t2534 * __this, int32_t p0, t371  p1, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14542_MI;
 bool m14542 (t2534 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m14543_MI;
 void m14543 (t2534 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< t14 *, int32_t >::Invoke(&m7382_MI, ((t4 *)Castclass(L_0, InitializedTypeInfo(&t640_TI))), p0, p1);
		return;
	}
}
extern MethodInfo m14544_MI;
 t4 * m14544 (t2534 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t4 * L_1 = (t4 *)InterfaceFuncInvoker0< t4 * >::Invoke(&m7291_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14545_MI;
 int32_t m14545 (t2534 * __this, t4 * p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14546_MI;
 void m14546 (t2534 * __this, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14547_MI;
 bool m14547 (t2534 * __this, t4 * p0, MethodInfo* method){
	{
		bool L_0 = m14595(NULL, p0, &m14595_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t4* L_1 = (__this->f0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, t371  >::Invoke(&m24658_MI, L_1, ((*(t371 *)((t371 *)UnBox (p0, InitializedTypeInfo(&t371_TI))))));
		return L_2;
	}

IL_001a:
	{
		return 0;
	}
}
extern MethodInfo m14548_MI;
 int32_t m14548 (t2534 * __this, t4 * p0, MethodInfo* method){
	{
		bool L_0 = m14595(NULL, p0, &m14595_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t4* L_1 = (__this->f0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t371  >::Invoke(&m24651_MI, L_1, ((*(t371 *)((t371 *)UnBox (p0, InitializedTypeInfo(&t371_TI))))));
		return L_2;
	}

IL_001a:
	{
		return (-1);
	}
}
extern MethodInfo m14549_MI;
 void m14549 (t2534 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14550_MI;
 void m14550 (t2534 * __this, t4 * p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14551_MI;
 void m14551 (t2534 * __this, int32_t p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14552_MI;
 bool m14552 (t2534 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14553_MI;
 t4 * m14553 (t2534 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m14554_MI;
 bool m14554 (t2534 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m14555_MI;
 bool m14555 (t2534 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m14556_MI;
 t4 * m14556 (t2534 * __this, int32_t p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t371  L_1 = (t371 )InterfaceFuncInvoker1< t371 , int32_t >::Invoke(&m1728_MI, L_0, p0);
		t371  L_2 = L_1;
		t4 * L_3 = Box(InitializedTypeInfo(&t371_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m14557_MI;
 void m14557 (t2534 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14558_MI;
 bool m14558 (t2534 * __this, t371  p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker1< bool, t371  >::Invoke(&m24658_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m14559_MI;
 void m14559 (t2534 * __this, t518* p0, int32_t p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< t518*, int32_t >::Invoke(&m24659_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m14560_MI;
 t4* m14560 (t2534 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t4* L_1 = (t4*)InterfaceFuncInvoker0< t4* >::Invoke(&m24661_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14561_MI;
 int32_t m14561 (t2534 * __this, t371  p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker1< int32_t, t371  >::Invoke(&m24651_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m14562_MI;
 int32_t m14562 (t2534 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m24654_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14563_MI;
 t371  m14563 (t2534 * __this, int32_t p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t371  L_1 = (t371 )InterfaceFuncInvoker1< t371 , int32_t >::Invoke(&m1728_MI, L_0, p0);
		return L_1;
	}
}
// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
extern Il2CppType t378_0_0_1;
FieldInfo t2534_f0_FieldInfo = 
{
	"list", &t378_0_0_1, &t2534_TI, offsetof(t2534, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2534_FIs[] =
{
	&t2534_f0_FieldInfo,
	NULL
};
extern MethodInfo m14540_MI;
extern MethodInfo m14541_MI;
static PropertyInfo t2534____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2534_TI, "System.Collections.Generic.IList<T>.Item", &m14540_MI, &m14541_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14542_MI;
static PropertyInfo t2534____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2534_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14542_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14552_MI;
static PropertyInfo t2534____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2534_TI, "System.Collections.ICollection.IsSynchronized", &m14552_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14553_MI;
static PropertyInfo t2534____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2534_TI, "System.Collections.ICollection.SyncRoot", &m14553_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14554_MI;
static PropertyInfo t2534____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2534_TI, "System.Collections.IList.IsFixedSize", &m14554_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14555_MI;
static PropertyInfo t2534____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2534_TI, "System.Collections.IList.IsReadOnly", &m14555_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14556_MI;
extern MethodInfo m14557_MI;
static PropertyInfo t2534____System_Collections_IList_Item_PropertyInfo = 
{
	&t2534_TI, "System.Collections.IList.Item", &m14556_MI, &m14557_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14562_MI;
static PropertyInfo t2534____Count_PropertyInfo = 
{
	&t2534_TI, "Count", &m14562_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14563_MI;
static PropertyInfo t2534____Item_PropertyInfo = 
{
	&t2534_TI, "Item", &m14563_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2534_PIs[] =
{
	&t2534____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2534____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2534____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2534____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2534____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2534____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2534____System_Collections_IList_Item_PropertyInfo,
	&t2534____Count_PropertyInfo,
	&t2534____Item_PropertyInfo,
	NULL
};
extern Il2CppType t378_0_0_0;
static ParameterInfo t2534_m14534_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t378_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14534_MI = 
{
	".ctor", (methodPointerType)&m14534, &t2534_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2534_m14534_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t2534_m14535_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14535_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m14535, &t2534_TI, &t15_0_0_0, RuntimeInvoker_t15_t371, t2534_m14535_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2534_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14536_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m14536, &t2534_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t2534_m14537_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14537_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m14537, &t2534_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t371, t2534_m14537_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t2534_m14538_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14538_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m14538, &t2534_TI, &t17_0_0_0, RuntimeInvoker_t17_t371, t2534_m14538_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2534_m14539_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14539_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m14539, &t2534_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t2534_m14539_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2534_m14540_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t371_0_0_0;
extern void* RuntimeInvoker_t371_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14540_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m14540, &t2534_TI, &t371_0_0_0, RuntimeInvoker_t371_t16, t2534_m14540_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t2534_m14541_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14541_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m14541, &t2534_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t371, t2534_m14541_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2534_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14542_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m14542, &t2534_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t2534_m14543_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14543_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m14543, &t2534_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t2534_m14543_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2534_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14544_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m14544, &t2534_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2534_m14545_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14545_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m14545, &t2534_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2534_m14545_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2534_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14546_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m14546, &t2534_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2534_m14547_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14547_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m14547, &t2534_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2534_m14547_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2534_m14548_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14548_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m14548, &t2534_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2534_m14548_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2534_m14549_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14549_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m14549, &t2534_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2534_m14549_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2534_m14550_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14550_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m14550, &t2534_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2534_m14550_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2534_m14551_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14551_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m14551, &t2534_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t2534_m14551_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2534_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14552_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m14552, &t2534_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2534_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14553_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m14553, &t2534_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2534_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14554_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m14554, &t2534_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2534_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14555_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m14555, &t2534_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2534_m14556_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14556_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m14556, &t2534_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t2534_m14556_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2534_m14557_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14557_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m14557, &t2534_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2534_m14557_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t2534_m14558_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14558_MI = 
{
	"Contains", (methodPointerType)&m14558, &t2534_TI, &t17_0_0_0, RuntimeInvoker_t17_t371, t2534_m14558_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t518_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t2534_m14559_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t518_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14559_MI = 
{
	"CopyTo", (methodPointerType)&m14559, &t2534_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t2534_m14559_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2534_TI;
extern Il2CppType t2531_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14560_MI = 
{
	"GetEnumerator", (methodPointerType)&m14560, &t2534_TI, &t2531_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t2534_m14561_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14561_MI = 
{
	"IndexOf", (methodPointerType)&m14561, &t2534_TI, &t16_0_0_0, RuntimeInvoker_t16_t371, t2534_m14561_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2534_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14562_MI = 
{
	"get_Count", (methodPointerType)&m14562, &t2534_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2534_m14563_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2534_TI;
extern Il2CppType t371_0_0_0;
extern void* RuntimeInvoker_t371_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14563_MI = 
{
	"get_Item", (methodPointerType)&m14563, &t2534_TI, &t371_0_0_0, RuntimeInvoker_t371_t16, t2534_m14563_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2534_MIs[] =
{
	&m14534_MI,
	&m14535_MI,
	&m14536_MI,
	&m14537_MI,
	&m14538_MI,
	&m14539_MI,
	&m14540_MI,
	&m14541_MI,
	&m14542_MI,
	&m14543_MI,
	&m14544_MI,
	&m14545_MI,
	&m14546_MI,
	&m14547_MI,
	&m14548_MI,
	&m14549_MI,
	&m14550_MI,
	&m14551_MI,
	&m14552_MI,
	&m14553_MI,
	&m14554_MI,
	&m14555_MI,
	&m14556_MI,
	&m14557_MI,
	&m14558_MI,
	&m14559_MI,
	&m14560_MI,
	&m14561_MI,
	&m14562_MI,
	&m14563_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14544_MI;
extern MethodInfo m14562_MI;
extern MethodInfo m14552_MI;
extern MethodInfo m14553_MI;
extern MethodInfo m14543_MI;
extern MethodInfo m14554_MI;
extern MethodInfo m14555_MI;
extern MethodInfo m14556_MI;
extern MethodInfo m14557_MI;
extern MethodInfo m14545_MI;
extern MethodInfo m14546_MI;
extern MethodInfo m14547_MI;
extern MethodInfo m14548_MI;
extern MethodInfo m14549_MI;
extern MethodInfo m14550_MI;
extern MethodInfo m14551_MI;
extern MethodInfo m14562_MI;
extern MethodInfo m14542_MI;
extern MethodInfo m14535_MI;
extern MethodInfo m14536_MI;
extern MethodInfo m14558_MI;
extern MethodInfo m14559_MI;
extern MethodInfo m14538_MI;
extern MethodInfo m14561_MI;
extern MethodInfo m14537_MI;
extern MethodInfo m14539_MI;
extern MethodInfo m14540_MI;
extern MethodInfo m14541_MI;
extern MethodInfo m14560_MI;
extern MethodInfo m14563_MI;
static MethodInfo* t2534_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14544_MI,
	&m14562_MI,
	&m14552_MI,
	&m14553_MI,
	&m14543_MI,
	&m14554_MI,
	&m14555_MI,
	&m14556_MI,
	&m14557_MI,
	&m14545_MI,
	&m14546_MI,
	&m14547_MI,
	&m14548_MI,
	&m14549_MI,
	&m14550_MI,
	&m14551_MI,
	&m14562_MI,
	&m14542_MI,
	&m14535_MI,
	&m14536_MI,
	&m14558_MI,
	&m14559_MI,
	&m14538_MI,
	&m14561_MI,
	&m14537_MI,
	&m14539_MI,
	&m14540_MI,
	&m14541_MI,
	&m14560_MI,
	&m14563_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t2532_TI;
extern TypeInfo t378_TI;
extern TypeInfo t2533_TI;
static TypeInfo* t2534_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1014_TI,
	&t2532_TI,
	&t378_TI,
	&t2533_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t2532_TI;
extern TypeInfo t378_TI;
extern TypeInfo t2533_TI;
static Il2CppInterfaceOffsetPair t2534_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1014_TI, 9},
	{ &t2532_TI, 20},
	{ &t378_TI, 27},
	{ &t2533_TI, 32},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2534_0_0_0;
extern Il2CppType t2534_1_0_0;
extern TypeInfo t4_TI;
struct t2534;
extern TypeInfo t2534_TI;
extern Il2CppGenericClass t2534_GC;
extern CustomAttributesCache t841__CustomAttributeCache;
TypeInfo t2534_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2534_MIs, t2534_PIs, t2534_FIs, NULL, &t4_TI, NULL, NULL, &t2534_TI, t2534_ITIs, t2534_VT, &t841__CustomAttributeCache, &t2534_TI, &t2534_0_0_0, &t2534_1_0_0, t2534_IOs, &t2534_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2534), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2538.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2538_TI;

extern TypeInfo t2538_TI;
extern TypeInfo t2532_TI;
extern TypeInfo t17_TI;
extern TypeInfo t378_TI;
extern TypeInfo t371_TI;
extern TypeInfo t16_TI;
extern TypeInfo t15_TI;
extern TypeInfo t516_TI;
extern TypeInfo t640_TI;
extern TypeInfo t4_TI;
extern TypeInfo t14_TI;
extern TypeInfo t2533_TI;
extern TypeInfo t2531_TI;
extern TypeInfo t518_TI;
extern TypeInfo t290_TI;
extern TypeInfo t303_TI;
extern TypeInfo t335_TI;
extern TypeInfo t1014_TI;
extern Il2CppType t371_0_0_0;
extern MethodInfo m24655_MI;
extern MethodInfo m14598_MI;
extern MethodInfo m14599_MI;
extern MethodInfo m1728_MI;
extern MethodInfo m14596_MI;
extern MethodInfo m14594_MI;
extern MethodInfo m24654_MI;
extern MethodInfo m15_MI;
extern MethodInfo m14480_MI;
extern MethodInfo m7381_MI;
extern MethodInfo m7382_MI;
extern MethodInfo m24661_MI;
extern MethodInfo m14587_MI;
extern MethodInfo m14595_MI;
extern MethodInfo m24658_MI;
extern MethodInfo m24651_MI;
extern MethodInfo m14597_MI;
extern MethodInfo m14585_MI;
extern MethodInfo m14590_MI;
extern MethodInfo m14581_MI;
extern MethodInfo m24657_MI;
extern MethodInfo m24659_MI;
extern MethodInfo m24652_MI;
extern MethodInfo m24653_MI;
extern MethodInfo m24650_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m3794_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m1489_MI;
extern MethodInfo m7380_MI;
extern MethodInfo m7383_MI;


extern MethodInfo m14564_MI;
 void m14564 (t2538 * __this, MethodInfo* method){
	t516 * V_0 = {0};
	t4 * V_1 = {0};
	{
		m15(__this, &m15_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t516_TI));
		t516 * L_0 = (t516 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t516_TI));
		m14480(L_0, &m14480_MI);
		V_0 = L_0;
		V_1 = V_0;
		t4 * L_1 = (t4 *)InterfaceFuncInvoker0< t4 * >::Invoke(&m7381_MI, V_1);
		__this->f1 = L_1;
		__this->f0 = V_0;
		return;
	}
}
extern MethodInfo m14565_MI;
 bool m14565 (t2538 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m24655_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14566_MI;
 void m14566 (t2538 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< t14 *, int32_t >::Invoke(&m7382_MI, ((t4 *)Castclass(L_0, InitializedTypeInfo(&t640_TI))), p0, p1);
		return;
	}
}
extern MethodInfo m14567_MI;
 t4 * m14567 (t2538 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t4* L_1 = (t4*)InterfaceFuncInvoker0< t4* >::Invoke(&m24661_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14568_MI;
 int32_t m14568 (t2538 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m24654_MI, L_0);
		V_0 = L_1;
		t371  L_2 = m14596(NULL, p0, &m14596_MI);
		VirtActionInvoker2< int32_t, t371  >::Invoke(&m14587_MI, __this, V_0, L_2);
		return V_0;
	}
}
extern MethodInfo m14569_MI;
 bool m14569 (t2538 * __this, t4 * p0, MethodInfo* method){
	{
		bool L_0 = m14595(NULL, p0, &m14595_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t4* L_1 = (__this->f0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, t371  >::Invoke(&m24658_MI, L_1, ((*(t371 *)((t371 *)UnBox (p0, InitializedTypeInfo(&t371_TI))))));
		return L_2;
	}

IL_001a:
	{
		return 0;
	}
}
extern MethodInfo m14570_MI;
 int32_t m14570 (t2538 * __this, t4 * p0, MethodInfo* method){
	{
		bool L_0 = m14595(NULL, p0, &m14595_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t4* L_1 = (__this->f0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t371  >::Invoke(&m24651_MI, L_1, ((*(t371 *)((t371 *)UnBox (p0, InitializedTypeInfo(&t371_TI))))));
		return L_2;
	}

IL_001a:
	{
		return (-1);
	}
}
extern MethodInfo m14571_MI;
 void m14571 (t2538 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	{
		t371  L_0 = m14596(NULL, p1, &m14596_MI);
		VirtActionInvoker2< int32_t, t371  >::Invoke(&m14587_MI, __this, p0, L_0);
		return;
	}
}
extern MethodInfo m14572_MI;
 void m14572 (t2538 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t4* L_0 = (__this->f0);
		m14597(NULL, L_0, &m14597_MI);
		t371  L_1 = m14596(NULL, p0, &m14596_MI);
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, t371  >::Invoke(&m14585_MI, __this, L_1);
		V_0 = L_2;
		VirtActionInvoker1< int32_t >::Invoke(&m14590_MI, __this, V_0);
		return;
	}
}
extern MethodInfo m14573_MI;
 bool m14573 (t2538 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = m14598(NULL, L_0, &m14598_MI);
		return L_1;
	}
}
extern MethodInfo m14574_MI;
 t4 * m14574 (t2538 * __this, MethodInfo* method){
	{
		t4 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m14575_MI;
 bool m14575 (t2538 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = m14599(NULL, L_0, &m14599_MI);
		return L_1;
	}
}
extern MethodInfo m14576_MI;
 bool m14576 (t2538 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m24655_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14577_MI;
 t4 * m14577 (t2538 * __this, int32_t p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t371  L_1 = (t371 )InterfaceFuncInvoker1< t371 , int32_t >::Invoke(&m1728_MI, L_0, p0);
		t371  L_2 = L_1;
		t4 * L_3 = Box(InitializedTypeInfo(&t371_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m14578_MI;
 void m14578 (t2538 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	{
		t371  L_0 = m14596(NULL, p1, &m14596_MI);
		VirtActionInvoker2< int32_t, t371  >::Invoke(&m14594_MI, __this, p0, L_0);
		return;
	}
}
extern MethodInfo m14579_MI;
 void m14579 (t2538 * __this, t371  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m24654_MI, L_0);
		V_0 = L_1;
		VirtActionInvoker2< int32_t, t371  >::Invoke(&m14587_MI, __this, V_0, p0);
		return;
	}
}
extern MethodInfo m14580_MI;
 void m14580 (t2538 * __this, MethodInfo* method){
	{
		VirtActionInvoker0::Invoke(&m14581_MI, __this);
		return;
	}
}
extern MethodInfo m14581_MI;
 void m14581 (t2538 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker0::Invoke(&m24657_MI, L_0);
		return;
	}
}
extern MethodInfo m14582_MI;
 bool m14582 (t2538 * __this, t371  p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker1< bool, t371  >::Invoke(&m24658_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m14583_MI;
 void m14583 (t2538 * __this, t518* p0, int32_t p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< t518*, int32_t >::Invoke(&m24659_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m14584_MI;
 t4* m14584 (t2538 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t4* L_1 = (t4*)InterfaceFuncInvoker0< t4* >::Invoke(&m24661_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14585_MI;
 int32_t m14585 (t2538 * __this, t371  p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker1< int32_t, t371  >::Invoke(&m24651_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m14586_MI;
 void m14586 (t2538 * __this, int32_t p0, t371  p1, MethodInfo* method){
	{
		VirtActionInvoker2< int32_t, t371  >::Invoke(&m14587_MI, __this, p0, p1);
		return;
	}
}
extern MethodInfo m14587_MI;
 void m14587 (t2538 * __this, int32_t p0, t371  p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< int32_t, t371  >::Invoke(&m24652_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m14588_MI;
 bool m14588 (t2538 * __this, t371  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t371  >::Invoke(&m14585_MI, __this, p0);
		V_0 = L_0;
		if ((((uint32_t)V_0) != ((uint32_t)(-1))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		VirtActionInvoker1< int32_t >::Invoke(&m14590_MI, __this, V_0);
		return 1;
	}
}
extern MethodInfo m14589_MI;
 void m14589 (t2538 * __this, int32_t p0, MethodInfo* method){
	{
		VirtActionInvoker1< int32_t >::Invoke(&m14590_MI, __this, p0);
		return;
	}
}
extern MethodInfo m14590_MI;
 void m14590 (t2538 * __this, int32_t p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker1< int32_t >::Invoke(&m24653_MI, L_0, p0);
		return;
	}
}
extern MethodInfo m14591_MI;
 int32_t m14591 (t2538 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m24654_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14592_MI;
 t371  m14592 (t2538 * __this, int32_t p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t371  L_1 = (t371 )InterfaceFuncInvoker1< t371 , int32_t >::Invoke(&m1728_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m14593_MI;
 void m14593 (t2538 * __this, int32_t p0, t371  p1, MethodInfo* method){
	{
		VirtActionInvoker2< int32_t, t371  >::Invoke(&m14594_MI, __this, p0, p1);
		return;
	}
}
extern MethodInfo m14594_MI;
 void m14594 (t2538 * __this, int32_t p0, t371  p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< int32_t, t371  >::Invoke(&m24650_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m14595_MI;
 bool m14595 (t4 * __this, t4 * p0, MethodInfo* method){
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		if (((t4 *)IsInst(p0, InitializedTypeInfo(&t371_TI))))
		{
			goto IL_0022;
		}
	}
	{
		if (p0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t290_TI));
		t290 * L_0 = m1528(NULL, LoadTypeToken(&t371_0_0_0), &m1528_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3794_MI, L_0);
		G_B4_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		G_B6_0 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 1;
	}

IL_0023:
	{
		return G_B6_0;
	}
}
extern MethodInfo m14596_MI;
 t371  m14596 (t4 * __this, t4 * p0, MethodInfo* method){
	{
		bool L_0 = m14595(NULL, p0, &m14595_MI);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((*(t371 *)((t371 *)UnBox (p0, InitializedTypeInfo(&t371_TI)))));
	}

IL_000f:
	{
		t303 * L_1 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_1, (t8*) &_stringLiteral551, &m1917_MI);
		il2cpp_codegen_raise_exception (L_1);
	}
}
extern MethodInfo m14597_MI;
 void m14597 (t4 * __this, t4* p0, MethodInfo* method){
	{
		bool L_0 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m24655_MI, p0);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		t335 * L_1 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_1, &m1489_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000e:
	{
		return;
	}
}
extern MethodInfo m14598_MI;
 bool m14598 (t4 * __this, t4* p0, MethodInfo* method){
	t4 * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		V_0 = ((t4 *)IsInst(p0, InitializedTypeInfo(&t640_TI)));
		if (!V_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_0 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m7380_MI, V_0);
		G_B3_0 = ((int32_t)(L_0));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
extern MethodInfo m14599_MI;
 bool m14599 (t4 * __this, t4* p0, MethodInfo* method){
	t4 * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		V_0 = ((t4 *)IsInst(p0, InitializedTypeInfo(&t1014_TI)));
		if (!V_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_0 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m7383_MI, V_0);
		G_B3_0 = ((int32_t)(L_0));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>
extern Il2CppType t378_0_0_1;
FieldInfo t2538_f0_FieldInfo = 
{
	"list", &t378_0_0_1, &t2538_TI, offsetof(t2538, f0), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t2538_f1_FieldInfo = 
{
	"syncRoot", &t4_0_0_1, &t2538_TI, offsetof(t2538, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2538_FIs[] =
{
	&t2538_f0_FieldInfo,
	&t2538_f1_FieldInfo,
	NULL
};
extern MethodInfo m14565_MI;
static PropertyInfo t2538____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2538_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14565_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14573_MI;
static PropertyInfo t2538____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2538_TI, "System.Collections.ICollection.IsSynchronized", &m14573_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14574_MI;
static PropertyInfo t2538____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2538_TI, "System.Collections.ICollection.SyncRoot", &m14574_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14575_MI;
static PropertyInfo t2538____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2538_TI, "System.Collections.IList.IsFixedSize", &m14575_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14576_MI;
static PropertyInfo t2538____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2538_TI, "System.Collections.IList.IsReadOnly", &m14576_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14577_MI;
extern MethodInfo m14578_MI;
static PropertyInfo t2538____System_Collections_IList_Item_PropertyInfo = 
{
	&t2538_TI, "System.Collections.IList.Item", &m14577_MI, &m14578_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14591_MI;
static PropertyInfo t2538____Count_PropertyInfo = 
{
	&t2538_TI, "Count", &m14591_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14592_MI;
extern MethodInfo m14593_MI;
static PropertyInfo t2538____Item_PropertyInfo = 
{
	&t2538_TI, "Item", &m14592_MI, &m14593_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2538_PIs[] =
{
	&t2538____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2538____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2538____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2538____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2538____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2538____System_Collections_IList_Item_PropertyInfo,
	&t2538____Count_PropertyInfo,
	&t2538____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2538_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14564_MI = 
{
	".ctor", (methodPointerType)&m14564, &t2538_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2538_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14565_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m14565, &t2538_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t2538_m14566_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14566_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m14566, &t2538_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t2538_m14566_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2538_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14567_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m14567, &t2538_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2538_m14568_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14568_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m14568, &t2538_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2538_m14568_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2538_m14569_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14569_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m14569, &t2538_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2538_m14569_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2538_m14570_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14570_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m14570, &t2538_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2538_m14570_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2538_m14571_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14571_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m14571, &t2538_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2538_m14571_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2538_m14572_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14572_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m14572, &t2538_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2538_m14572_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2538_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14573_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m14573, &t2538_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2538_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14574_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m14574, &t2538_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2538_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14575_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m14575, &t2538_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2538_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14576_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m14576, &t2538_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2538_m14577_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14577_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m14577, &t2538_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t2538_m14577_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2538_m14578_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14578_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m14578, &t2538_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2538_m14578_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t2538_m14579_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14579_MI = 
{
	"Add", (methodPointerType)&m14579, &t2538_TI, &t15_0_0_0, RuntimeInvoker_t15_t371, t2538_m14579_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2538_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14580_MI = 
{
	"Clear", (methodPointerType)&m14580, &t2538_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2538_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14581_MI = 
{
	"ClearItems", (methodPointerType)&m14581, &t2538_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t2538_m14582_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14582_MI = 
{
	"Contains", (methodPointerType)&m14582, &t2538_TI, &t17_0_0_0, RuntimeInvoker_t17_t371, t2538_m14582_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t518_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t2538_m14583_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t518_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14583_MI = 
{
	"CopyTo", (methodPointerType)&m14583, &t2538_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t2538_m14583_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2538_TI;
extern Il2CppType t2531_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14584_MI = 
{
	"GetEnumerator", (methodPointerType)&m14584, &t2538_TI, &t2531_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t2538_m14585_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14585_MI = 
{
	"IndexOf", (methodPointerType)&m14585, &t2538_TI, &t16_0_0_0, RuntimeInvoker_t16_t371, t2538_m14585_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t2538_m14586_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14586_MI = 
{
	"Insert", (methodPointerType)&m14586, &t2538_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t371, t2538_m14586_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t2538_m14587_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14587_MI = 
{
	"InsertItem", (methodPointerType)&m14587, &t2538_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t371, t2538_m14587_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t2538_m14588_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14588_MI = 
{
	"Remove", (methodPointerType)&m14588, &t2538_TI, &t17_0_0_0, RuntimeInvoker_t17_t371, t2538_m14588_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2538_m14589_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14589_MI = 
{
	"RemoveAt", (methodPointerType)&m14589, &t2538_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t2538_m14589_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2538_m14590_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14590_MI = 
{
	"RemoveItem", (methodPointerType)&m14590, &t2538_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t2538_m14590_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2538_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14591_MI = 
{
	"get_Count", (methodPointerType)&m14591, &t2538_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2538_m14592_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t371_0_0_0;
extern void* RuntimeInvoker_t371_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14592_MI = 
{
	"get_Item", (methodPointerType)&m14592, &t2538_TI, &t371_0_0_0, RuntimeInvoker_t371_t16, t2538_m14592_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t2538_m14593_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14593_MI = 
{
	"set_Item", (methodPointerType)&m14593, &t2538_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t371, t2538_m14593_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t2538_m14594_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14594_MI = 
{
	"SetItem", (methodPointerType)&m14594, &t2538_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t371, t2538_m14594_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2538_m14595_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14595_MI = 
{
	"IsValidItem", (methodPointerType)&m14595, &t2538_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2538_m14595_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2538_m14596_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t371_0_0_0;
extern void* RuntimeInvoker_t371_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14596_MI = 
{
	"ConvertItem", (methodPointerType)&m14596, &t2538_TI, &t371_0_0_0, RuntimeInvoker_t371_t4, t2538_m14596_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t378_0_0_0;
static ParameterInfo t2538_m14597_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t378_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14597_MI = 
{
	"CheckWritable", (methodPointerType)&m14597, &t2538_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2538_m14597_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t378_0_0_0;
static ParameterInfo t2538_m14598_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t378_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14598_MI = 
{
	"IsSynchronized", (methodPointerType)&m14598, &t2538_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2538_m14598_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t378_0_0_0;
static ParameterInfo t2538_m14599_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t378_0_0_0},
};
extern TypeInfo t2538_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14599_MI = 
{
	"IsFixedSize", (methodPointerType)&m14599, &t2538_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2538_m14599_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2538_MIs[] =
{
	&m14564_MI,
	&m14565_MI,
	&m14566_MI,
	&m14567_MI,
	&m14568_MI,
	&m14569_MI,
	&m14570_MI,
	&m14571_MI,
	&m14572_MI,
	&m14573_MI,
	&m14574_MI,
	&m14575_MI,
	&m14576_MI,
	&m14577_MI,
	&m14578_MI,
	&m14579_MI,
	&m14580_MI,
	&m14581_MI,
	&m14582_MI,
	&m14583_MI,
	&m14584_MI,
	&m14585_MI,
	&m14586_MI,
	&m14587_MI,
	&m14588_MI,
	&m14589_MI,
	&m14590_MI,
	&m14591_MI,
	&m14592_MI,
	&m14593_MI,
	&m14594_MI,
	&m14595_MI,
	&m14596_MI,
	&m14597_MI,
	&m14598_MI,
	&m14599_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14567_MI;
extern MethodInfo m14591_MI;
extern MethodInfo m14573_MI;
extern MethodInfo m14574_MI;
extern MethodInfo m14566_MI;
extern MethodInfo m14575_MI;
extern MethodInfo m14576_MI;
extern MethodInfo m14577_MI;
extern MethodInfo m14578_MI;
extern MethodInfo m14568_MI;
extern MethodInfo m14580_MI;
extern MethodInfo m14569_MI;
extern MethodInfo m14570_MI;
extern MethodInfo m14571_MI;
extern MethodInfo m14572_MI;
extern MethodInfo m14589_MI;
extern MethodInfo m14591_MI;
extern MethodInfo m14565_MI;
extern MethodInfo m14579_MI;
extern MethodInfo m14580_MI;
extern MethodInfo m14582_MI;
extern MethodInfo m14583_MI;
extern MethodInfo m14588_MI;
extern MethodInfo m14585_MI;
extern MethodInfo m14586_MI;
extern MethodInfo m14589_MI;
extern MethodInfo m14592_MI;
extern MethodInfo m14593_MI;
extern MethodInfo m14584_MI;
extern MethodInfo m14581_MI;
extern MethodInfo m14587_MI;
extern MethodInfo m14590_MI;
extern MethodInfo m14594_MI;
static MethodInfo* t2538_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14567_MI,
	&m14591_MI,
	&m14573_MI,
	&m14574_MI,
	&m14566_MI,
	&m14575_MI,
	&m14576_MI,
	&m14577_MI,
	&m14578_MI,
	&m14568_MI,
	&m14580_MI,
	&m14569_MI,
	&m14570_MI,
	&m14571_MI,
	&m14572_MI,
	&m14589_MI,
	&m14591_MI,
	&m14565_MI,
	&m14579_MI,
	&m14580_MI,
	&m14582_MI,
	&m14583_MI,
	&m14588_MI,
	&m14585_MI,
	&m14586_MI,
	&m14589_MI,
	&m14592_MI,
	&m14593_MI,
	&m14584_MI,
	&m14581_MI,
	&m14587_MI,
	&m14590_MI,
	&m14594_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t2532_TI;
extern TypeInfo t378_TI;
extern TypeInfo t2533_TI;
static TypeInfo* t2538_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1014_TI,
	&t2532_TI,
	&t378_TI,
	&t2533_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t2532_TI;
extern TypeInfo t378_TI;
extern TypeInfo t2533_TI;
static Il2CppInterfaceOffsetPair t2538_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1014_TI, 9},
	{ &t2532_TI, 20},
	{ &t378_TI, 27},
	{ &t2533_TI, 32},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2538_0_0_0;
extern Il2CppType t2538_1_0_0;
extern TypeInfo t4_TI;
struct t2538;
extern TypeInfo t2538_TI;
extern Il2CppGenericClass t2538_GC;
extern CustomAttributesCache t840__CustomAttributeCache;
TypeInfo t2538_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2538_MIs, t2538_PIs, t2538_FIs, NULL, &t4_TI, NULL, NULL, &t2538_TI, t2538_ITIs, t2538_VT, &t840__CustomAttributeCache, &t2538_TI, &t2538_0_0_0, &t2538_1_0_0, t2538_IOs, &t2538_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2538), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2539_TI;
#include "t2539MD.h"

#include "t836.h"
#include "t2540.h"
extern TypeInfo t2539_TI;
extern TypeInfo t5187_TI;
extern TypeInfo t290_TI;
extern TypeInfo t371_TI;
extern TypeInfo t17_TI;
extern TypeInfo t836_TI;
extern TypeInfo t525_TI;
extern TypeInfo t2540_TI;
extern TypeInfo t16_TI;
#include "t1222MD.h"
#include "t2540MD.h"
extern Il2CppType t5187_0_0_0;
extern Il2CppType t371_0_0_0;
extern Il2CppType t836_0_0_0;
extern MethodInfo m15_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2958_MI;
extern MethodInfo m2956_MI;
extern MethodInfo m6421_MI;
extern MethodInfo m14605_MI;
extern MethodInfo m26334_MI;
extern MethodInfo m20009_MI;


extern MethodInfo m14600_MI;
 void m14600 (t2539 * __this, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		return;
	}
}
extern MethodInfo m14601_MI;
 void m14601 (t4 * __this, MethodInfo* method){
	t2540 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2540 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2540_TI));
	m14605(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m14605_MI);
	((t2539_SFs*)InitializedTypeInfo(&t2539_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m14602_MI;
 int32_t m14602 (t2539 * __this, t4 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t371  >::Invoke(&m26334_MI, __this, ((*(t371 *)((t371 *)UnBox (p0, InitializedTypeInfo(&t371_TI))))));
		return L_0;
	}
}
extern MethodInfo m14603_MI;
 bool m14603 (t2539 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t371 , t371  >::Invoke(&m20009_MI, __this, ((*(t371 *)((t371 *)UnBox (p0, InitializedTypeInfo(&t371_TI))))), ((*(t371 *)((t371 *)UnBox (p1, InitializedTypeInfo(&t371_TI))))));
		return L_0;
	}
}
extern MethodInfo m14604_MI;
 t2539 * m14604 (t4 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2539_TI));
		return (((t2539_SFs*)InitializedTypeInfo(&t2539_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>
extern Il2CppType t2539_0_0_49;
FieldInfo t2539_f0_FieldInfo = 
{
	"_default", &t2539_0_0_49, &t2539_TI, offsetof(t2539_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2539_FIs[] =
{
	&t2539_f0_FieldInfo,
	NULL
};
extern MethodInfo m14604_MI;
static PropertyInfo t2539____Default_PropertyInfo = 
{
	&t2539_TI, "Default", &m14604_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2539_PIs[] =
{
	&t2539____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2539_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14600_MI = 
{
	".ctor", (methodPointerType)&m14600, &t2539_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2539_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14601_MI = 
{
	".cctor", (methodPointerType)&m14601, &t2539_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2539_m14602_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2539_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14602_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m14602, &t2539_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2539_m14602_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2539_m14603_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2539_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14603_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m14603, &t2539_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2539_m14603_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t2539_m26334_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2539_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m26334_MI = 
{
	"GetHashCode", NULL, &t2539_TI, &t16_0_0_0, RuntimeInvoker_t16_t371, t2539_m26334_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t2539_m20009_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2539_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t371_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m20009_MI = 
{
	"Equals", NULL, &t2539_TI, &t17_0_0_0, RuntimeInvoker_t17_t371_t371, t2539_m20009_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2539_TI;
extern Il2CppType t2539_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14604_MI = 
{
	"get_Default", (methodPointerType)&m14604, &t2539_TI, &t2539_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2539_MIs[] =
{
	&m14600_MI,
	&m14601_MI,
	&m14602_MI,
	&m14603_MI,
	&m26334_MI,
	&m20009_MI,
	&m14604_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m20009_MI;
extern MethodInfo m26334_MI;
extern MethodInfo m14603_MI;
extern MethodInfo m14602_MI;
static MethodInfo* t2539_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m20009_MI,
	&m26334_MI,
	&m14603_MI,
	&m14602_MI,
	NULL,
	NULL,
};
extern TypeInfo t5188_TI;
extern TypeInfo t859_TI;
static TypeInfo* t2539_ITIs[] = 
{
	&t5188_TI,
	&t859_TI,
};
extern TypeInfo t5188_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t2539_IOs[] = 
{
	{ &t5188_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2539_0_0_0;
extern Il2CppType t2539_1_0_0;
extern TypeInfo t4_TI;
struct t2539;
extern TypeInfo t2539_TI;
extern Il2CppGenericClass t2539_GC;
TypeInfo t2539_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2539_MIs, t2539_PIs, t2539_FIs, NULL, &t4_TI, NULL, NULL, &t2539_TI, t2539_ITIs, t2539_VT, &EmptyCustomAttributesCache, &t2539_TI, &t2539_0_0_0, &t2539_1_0_0, t2539_IOs, &t2539_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2539), 0, -1, sizeof(t2539_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5188_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.UICharInfo>
extern Il2CppType t371_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t5188_m26335_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t5188_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t371_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m26335_MI = 
{
	"Equals", NULL, &t5188_TI, &t17_0_0_0, RuntimeInvoker_t17_t371_t371, t5188_m26335_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t5188_m26336_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t5188_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m26336_MI = 
{
	"GetHashCode", NULL, &t5188_TI, &t16_0_0_0, RuntimeInvoker_t16_t371, t5188_m26336_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5188_MIs[] =
{
	&m26335_MI,
	&m26336_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5188_0_0_0;
extern Il2CppType t5188_1_0_0;
struct t5188;
extern TypeInfo t5188_TI;
extern Il2CppGenericClass t5188_GC;
TypeInfo t5188_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5188_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5188_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5188_TI, &t5188_0_0_0, &t5188_1_0_0, NULL, &t5188_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5187_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.UICharInfo>
extern Il2CppType t371_0_0_0;
static ParameterInfo t5187_m26337_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t5187_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m26337_MI = 
{
	"Equals", NULL, &t5187_TI, &t17_0_0_0, RuntimeInvoker_t17_t371, t5187_m26337_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5187_MIs[] =
{
	&m26337_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5187_0_0_0;
extern Il2CppType t5187_1_0_0;
struct t5187;
extern TypeInfo t5187_TI;
extern Il2CppGenericClass t5187_GC;
TypeInfo t5187_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5187_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5187_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5187_TI, &t5187_0_0_0, &t5187_1_0_0, NULL, &t5187_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2540_TI;

extern TypeInfo t371_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern TypeInfo t17_TI;
extern MethodInfo m14600_MI;
extern MethodInfo m21_MI;
extern MethodInfo m19_MI;


extern MethodInfo m14605_MI;
 void m14605 (t2540 * __this, MethodInfo* method){
	{
		m14600(__this, &m14600_MI);
		return;
	}
}
extern MethodInfo m14606_MI;
 int32_t m14606 (t2540 * __this, t371  p0, MethodInfo* method){
	{
		t371  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t371_TI), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m21_MI, Box(InitializedTypeInfo(&t371_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m14607_MI;
 bool m14607 (t2540 * __this, t371  p0, t371  p1, MethodInfo* method){
	{
		t371  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t371_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t371  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t371_TI), &L_2);
		return ((((t4 *)L_3) == ((t4 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t371  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t371_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t4 * >::Invoke(&m19_MI, Box(InitializedTypeInfo(&t371_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
extern TypeInfo t2540_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14605_MI = 
{
	".ctor", (methodPointerType)&m14605, &t2540_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t2540_m14606_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2540_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14606_MI = 
{
	"GetHashCode", (methodPointerType)&m14606, &t2540_TI, &t16_0_0_0, RuntimeInvoker_t16_t371, t2540_m14606_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t2540_m14607_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2540_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t371_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14607_MI = 
{
	"Equals", (methodPointerType)&m14607, &t2540_TI, &t17_0_0_0, RuntimeInvoker_t17_t371_t371, t2540_m14607_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2540_MIs[] =
{
	&m14605_MI,
	&m14606_MI,
	&m14607_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14607_MI;
extern MethodInfo m14606_MI;
extern MethodInfo m14603_MI;
extern MethodInfo m14602_MI;
extern MethodInfo m14606_MI;
extern MethodInfo m14607_MI;
static MethodInfo* t2540_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14607_MI,
	&m14606_MI,
	&m14603_MI,
	&m14602_MI,
	&m14606_MI,
	&m14607_MI,
};
extern TypeInfo t5188_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t2540_IOs[] = 
{
	{ &t5188_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2540_0_0_0;
extern Il2CppType t2540_1_0_0;
extern TypeInfo t2539_TI;
struct t2540;
extern TypeInfo t2540_TI;
extern Il2CppGenericClass t2540_GC;
extern TypeInfo t835_TI;
TypeInfo t2540_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2540_MIs, NULL, NULL, NULL, &t2539_TI, NULL, &t835_TI, &t2540_TI, NULL, t2540_VT, &EmptyCustomAttributesCache, &t2540_TI, &t2540_0_0_0, &t2540_1_0_0, t2540_IOs, &t2540_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2540), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2535_TI;



extern MethodInfo m14608_MI;
 void m14608 (t2535 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14609_MI;
 bool m14609 (t2535 * __this, t371  p0, MethodInfo* method){
	typedef  bool (*FunctionPointerType) (t4 * __this, t371  p0, MethodInfo* method);
	if (__this->f9)
		m14609((t2535 *)__this->f9,  p0, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m14610_MI;
 t4 * m14610 (t2535 * __this, t371  p0, t49 * p1, t4 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t371_TI), &p0);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m14611_MI;
 bool m14611 (t2535 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Predicate`1<UnityEngine.UICharInfo>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t2535_m14608_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t2535_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m14608_MI = 
{
	".ctor", (methodPointerType)&m14608, &t2535_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t2535_m14608_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
static ParameterInfo t2535_m14609_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2535_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14609_MI = 
{
	"Invoke", (methodPointerType)&m14609, &t2535_TI, &t17_0_0_0, RuntimeInvoker_t17_t371, t2535_m14609_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2535_m14610_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2535_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t371_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14610_MI = 
{
	"BeginInvoke", (methodPointerType)&m14610, &t2535_TI, &t48_0_0_0, RuntimeInvoker_t4_t371_t4_t4, t2535_m14610_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t2535_m14611_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t2535_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14611_MI = 
{
	"EndInvoke", (methodPointerType)&m14611, &t2535_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2535_m14611_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2535_MIs[] =
{
	&m14608_MI,
	&m14609_MI,
	&m14610_MI,
	&m14611_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m14609_MI;
extern MethodInfo m14610_MI;
extern MethodInfo m14611_MI;
static MethodInfo* t2535_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m14609_MI,
	&m14610_MI,
	&m14611_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t2535_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2535_0_0_0;
extern Il2CppType t2535_1_0_0;
extern TypeInfo t189_TI;
struct t2535;
extern TypeInfo t2535_TI;
extern Il2CppGenericClass t2535_GC;
TypeInfo t2535_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2535_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t2535_TI, NULL, t2535_VT, &EmptyCustomAttributesCache, &t2535_TI, &t2535_0_0_0, &t2535_1_0_0, t2535_IOs, &t2535_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2535), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2541_TI;

#include "t824.h"
#include "t2542.h"
extern TypeInfo t2541_TI;
extern TypeInfo t3512_TI;
extern TypeInfo t290_TI;
extern TypeInfo t371_TI;
extern TypeInfo t17_TI;
extern TypeInfo t824_TI;
extern TypeInfo t525_TI;
extern TypeInfo t2542_TI;
extern TypeInfo t16_TI;
extern TypeInfo t303_TI;
#include "t2542MD.h"
extern Il2CppType t3512_0_0_0;
extern Il2CppType t371_0_0_0;
extern Il2CppType t824_0_0_0;
extern MethodInfo m15_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2958_MI;
extern MethodInfo m2956_MI;
extern MethodInfo m6421_MI;
extern MethodInfo m14616_MI;
extern MethodInfo m26338_MI;
extern MethodInfo m6443_MI;


extern MethodInfo m14612_MI;
 void m14612 (t2541 * __this, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		return;
	}
}
extern MethodInfo m14613_MI;
 void m14613 (t4 * __this, MethodInfo* method){
	t2542 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2542 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2542_TI));
	m14616(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m14616_MI);
	((t2541_SFs*)InitializedTypeInfo(&t2541_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m14614_MI;
 int32_t m14614 (t2541 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if (p0)
		{
			goto IL_000b;
		}
	}
	{
		if (p1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (p1)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((t4 *)IsInst(p0, InitializedTypeInfo(&t371_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t4 *)IsInst(p1, InitializedTypeInfo(&t371_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t371 , t371  >::Invoke(&m26338_MI, __this, ((*(t371 *)((t371 *)UnBox (p0, InitializedTypeInfo(&t371_TI))))), ((*(t371 *)((t371 *)UnBox (p1, InitializedTypeInfo(&t371_TI))))));
		return L_0;
	}

IL_0033:
	{
		t303 * L_1 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m6443(L_1, &m6443_MI);
		il2cpp_codegen_raise_exception (L_1);
	}
}
extern MethodInfo m14615_MI;
 t2541 * m14615 (t4 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2541_TI));
		return (((t2541_SFs*)InitializedTypeInfo(&t2541_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>
extern Il2CppType t2541_0_0_49;
FieldInfo t2541_f0_FieldInfo = 
{
	"_default", &t2541_0_0_49, &t2541_TI, offsetof(t2541_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2541_FIs[] =
{
	&t2541_f0_FieldInfo,
	NULL
};
extern MethodInfo m14615_MI;
static PropertyInfo t2541____Default_PropertyInfo = 
{
	&t2541_TI, "Default", &m14615_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2541_PIs[] =
{
	&t2541____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2541_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14612_MI = 
{
	".ctor", (methodPointerType)&m14612, &t2541_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2541_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14613_MI = 
{
	".cctor", (methodPointerType)&m14613, &t2541_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2541_m14614_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2541_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14614_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m14614, &t2541_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t2541_m14614_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t2541_m26338_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2541_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t371_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m26338_MI = 
{
	"Compare", NULL, &t2541_TI, &t16_0_0_0, RuntimeInvoker_t16_t371_t371, t2541_m26338_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2541_TI;
extern Il2CppType t2541_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14615_MI = 
{
	"get_Default", (methodPointerType)&m14615, &t2541_TI, &t2541_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2541_MIs[] =
{
	&m14612_MI,
	&m14613_MI,
	&m14614_MI,
	&m26338_MI,
	&m14615_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m26338_MI;
extern MethodInfo m14614_MI;
static MethodInfo* t2541_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m26338_MI,
	&m14614_MI,
	NULL,
};
extern TypeInfo t3511_TI;
extern TypeInfo t716_TI;
static TypeInfo* t2541_ITIs[] = 
{
	&t3511_TI,
	&t716_TI,
};
extern TypeInfo t3511_TI;
extern TypeInfo t716_TI;
static Il2CppInterfaceOffsetPair t2541_IOs[] = 
{
	{ &t3511_TI, 4},
	{ &t716_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2541_0_0_0;
extern Il2CppType t2541_1_0_0;
extern TypeInfo t4_TI;
struct t2541;
extern TypeInfo t2541_TI;
extern Il2CppGenericClass t2541_GC;
TypeInfo t2541_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2541_MIs, t2541_PIs, t2541_FIs, NULL, &t4_TI, NULL, NULL, &t2541_TI, t2541_ITIs, t2541_VT, &EmptyCustomAttributesCache, &t2541_TI, &t2541_0_0_0, &t2541_1_0_0, t2541_IOs, &t2541_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2541), 0, -1, sizeof(t2541_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3511_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
extern Il2CppType t371_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t3511_m20017_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t3511_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t371_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m20017_MI = 
{
	"Compare", NULL, &t3511_TI, &t16_0_0_0, RuntimeInvoker_t16_t371_t371, t3511_m20017_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3511_MIs[] =
{
	&m20017_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3511_0_0_0;
extern Il2CppType t3511_1_0_0;
struct t3511;
extern TypeInfo t3511_TI;
extern Il2CppGenericClass t3511_GC;
TypeInfo t3511_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3511_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3511_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3511_TI, &t3511_0_0_0, &t3511_1_0_0, NULL, &t3511_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3512_TI;



// Metadata Definition System.IComparable`1<UnityEngine.UICharInfo>
extern Il2CppType t371_0_0_0;
static ParameterInfo t3512_m20018_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t3512_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m20018_MI = 
{
	"CompareTo", NULL, &t3512_TI, &t16_0_0_0, RuntimeInvoker_t16_t371, t3512_m20018_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3512_MIs[] =
{
	&m20018_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3512_0_0_0;
extern Il2CppType t3512_1_0_0;
struct t3512;
extern TypeInfo t3512_TI;
extern Il2CppGenericClass t3512_GC;
TypeInfo t3512_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3512_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3512_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3512_TI, &t3512_0_0_0, &t3512_1_0_0, NULL, &t3512_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2542_TI;

extern TypeInfo t371_TI;
extern TypeInfo t3512_TI;
extern TypeInfo t16_TI;
extern TypeInfo t285_TI;
extern TypeInfo t4_TI;
extern TypeInfo t303_TI;
extern MethodInfo m14612_MI;
extern MethodInfo m20018_MI;
extern MethodInfo m7286_MI;
extern MethodInfo m1917_MI;


extern MethodInfo m14616_MI;
 void m14616 (t2542 * __this, MethodInfo* method){
	{
		m14612(__this, &m14612_MI);
		return;
	}
}
extern MethodInfo m14617_MI;
 int32_t m14617 (t2542 * __this, t371  p0, t371  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t371  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t371_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t371  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t371_TI), &L_2);
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
		t371  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t371_TI), &L_4);
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
		t371  L_6 = p0;
		t4 * L_7 = Box(InitializedTypeInfo(&t371_TI), &L_6);
		if (!((t4*)IsInst(L_7, InitializedTypeInfo(&t3512_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t371  L_8 = p0;
		t4 * L_9 = Box(InitializedTypeInfo(&t371_TI), &L_8);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t371  >::Invoke(&m20018_MI, ((t4*)Castclass(L_9, InitializedTypeInfo(&t3512_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t371  L_11 = p0;
		t4 * L_12 = Box(InitializedTypeInfo(&t371_TI), &L_11);
		if (!((t4 *)IsInst(L_12, InitializedTypeInfo(&t285_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t371  L_13 = p0;
		t4 * L_14 = Box(InitializedTypeInfo(&t371_TI), &L_13);
		t371  L_15 = p1;
		t4 * L_16 = Box(InitializedTypeInfo(&t371_TI), &L_15);
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(&m7286_MI, ((t4 *)Castclass(L_14, InitializedTypeInfo(&t285_TI))), L_16);
		return L_17;
	}

IL_0062:
	{
		t303 * L_18 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_18, (t8*) &_stringLiteral535, &m1917_MI);
		il2cpp_codegen_raise_exception (L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UICharInfo>
extern TypeInfo t2542_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14616_MI = 
{
	".ctor", (methodPointerType)&m14616, &t2542_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t2542_m14617_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2542_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t371_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14617_MI = 
{
	"Compare", (methodPointerType)&m14617, &t2542_TI, &t16_0_0_0, RuntimeInvoker_t16_t371_t371, t2542_m14617_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2542_MIs[] =
{
	&m14616_MI,
	&m14617_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14617_MI;
extern MethodInfo m14614_MI;
extern MethodInfo m14617_MI;
static MethodInfo* t2542_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14617_MI,
	&m14614_MI,
	&m14617_MI,
};
extern TypeInfo t3511_TI;
extern TypeInfo t716_TI;
static Il2CppInterfaceOffsetPair t2542_IOs[] = 
{
	{ &t3511_TI, 4},
	{ &t716_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2542_0_0_0;
extern Il2CppType t2542_1_0_0;
extern TypeInfo t2541_TI;
struct t2542;
extern TypeInfo t2542_TI;
extern Il2CppGenericClass t2542_GC;
extern TypeInfo t823_TI;
TypeInfo t2542_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2542_MIs, NULL, NULL, NULL, &t2541_TI, NULL, &t823_TI, &t2542_TI, NULL, t2542_VT, &EmptyCustomAttributesCache, &t2542_TI, &t2542_0_0_0, &t2542_1_0_0, t2542_IOs, &t2542_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2542), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2536_TI;
#include "t2536MD.h"



extern MethodInfo m14618_MI;
 void m14618 (t2536 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14619_MI;
 int32_t m14619 (t2536 * __this, t371  p0, t371  p1, MethodInfo* method){
	typedef  int32_t (*FunctionPointerType) (t4 * __this, t371  p0, t371  p1, MethodInfo* method);
	if (__this->f9)
		m14619((t2536 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m14620_MI;
 t4 * m14620 (t2536 * __this, t371  p0, t371  p1, t49 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t371_TI), &p0);
	__d_args[1] = Box(InitializedTypeInfo(&t371_TI), &p1);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m14621_MI;
 int32_t m14621 (t2536 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Comparison`1<UnityEngine.UICharInfo>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t2536_m14618_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t2536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m14618_MI = 
{
	".ctor", (methodPointerType)&m14618, &t2536_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t2536_m14618_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
extern Il2CppType t371_0_0_0;
static ParameterInfo t2536_m14619_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
};
extern TypeInfo t2536_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t371_t371 (MethodInfo* method, void* obj, void** args);
MethodInfo m14619_MI = 
{
	"Invoke", (methodPointerType)&m14619, &t2536_TI, &t16_0_0_0, RuntimeInvoker_t16_t371_t371, t2536_m14619_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t371_0_0_0;
extern Il2CppType t371_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2536_m14620_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t371_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2536_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t371_t371_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14620_MI = 
{
	"BeginInvoke", (methodPointerType)&m14620, &t2536_TI, &t48_0_0_0, RuntimeInvoker_t4_t371_t371_t4_t4, t2536_m14620_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t2536_m14621_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t2536_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14621_MI = 
{
	"EndInvoke", (methodPointerType)&m14621, &t2536_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2536_m14621_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2536_MIs[] =
{
	&m14618_MI,
	&m14619_MI,
	&m14620_MI,
	&m14621_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m14619_MI;
extern MethodInfo m14620_MI;
extern MethodInfo m14621_MI;
static MethodInfo* t2536_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m14619_MI,
	&m14620_MI,
	&m14621_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t2536_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2536_0_0_0;
extern Il2CppType t2536_1_0_0;
extern TypeInfo t189_TI;
struct t2536;
extern TypeInfo t2536_TI;
extern Il2CppGenericClass t2536_GC;
TypeInfo t2536_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2536_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t2536_TI, NULL, t2536_VT, &EmptyCustomAttributesCache, &t2536_TI, &t2536_0_0_0, &t2536_1_0_0, t2536_IOs, &t2536_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2536), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t517.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t517_TI;
#include "t517MD.h"

#include "t370.h"
#include "t2548.h"
#include "t2545.h"
#include "t2546.h"
#include "t2552.h"
#include "t2547.h"
extern TypeInfo t517_TI;
extern TypeInfo t370_TI;
extern TypeInfo t16_TI;
extern TypeInfo t15_TI;
extern TypeInfo t303_TI;
extern TypeInfo t573_TI;
extern TypeInfo t1268_TI;
extern TypeInfo t1233_TI;
extern TypeInfo t519_TI;
extern TypeInfo t2548_TI;
extern TypeInfo t17_TI;
extern TypeInfo t379_TI;
extern TypeInfo t2544_TI;
extern TypeInfo t2543_TI;
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t2545_TI;
extern TypeInfo t328_TI;
extern TypeInfo t2546_TI;
extern TypeInfo t2552_TI;
#include "t2545MD.h"
#include "t2546MD.h"
#include "t2548MD.h"
#include "t2552MD.h"
extern MethodInfo m14668_MI;
extern MethodInfo m14669_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m6453_MI;
extern MethodInfo m20023_MI;
extern MethodInfo m6454_MI;
extern MethodInfo m14654_MI;
extern MethodInfo m15_MI;
extern MethodInfo m14651_MI;
extern MethodInfo m3739_MI;
extern MethodInfo m14639_MI;
extern MethodInfo m14646_MI;
extern MethodInfo m14652_MI;
extern MethodInfo m14655_MI;
extern MethodInfo m14657_MI;
extern MethodInfo m14640_MI;
extern MethodInfo m14665_MI;
extern MethodInfo m6892_MI;
extern MethodInfo m14666_MI;
extern MethodInfo m1751_MI;
extern MethodInfo m24646_MI;
extern MethodInfo m24648_MI;
extern MethodInfo m24649_MI;
extern MethodInfo m7290_MI;
extern MethodInfo m42_MI;
extern MethodInfo m14656_MI;
extern MethodInfo m14641_MI;
extern MethodInfo m14642_MI;
extern MethodInfo m14676_MI;
extern MethodInfo m3735_MI;
extern MethodInfo m20025_MI;
extern MethodInfo m14649_MI;
extern MethodInfo m14650_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m14751_MI;
extern MethodInfo m14670_MI;
extern MethodInfo m14653_MI;
extern MethodInfo m14659_MI;
extern MethodInfo m3751_MI;
extern MethodInfo m14757_MI;
extern MethodInfo m20027_MI;
extern MethodInfo m20035_MI;
extern MethodInfo m3738_MI;
struct t14;
 void m20023 (t4 * __this, t519** p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20023_MI;
struct t14;
#include "t2550.h"
 int32_t m20025 (t4 * __this, t519* p0, t370  p1, int32_t p2, int32_t p3, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20025_MI;
struct t14;
 void m20027 (t4 * __this, t519* p0, int32_t p1, int32_t p2, t4* p3, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20027_MI;
struct t14;
 void m20035 (t4 * __this, t519* p0, int32_t p1, t2547 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20035_MI;


extern MethodInfo m14622_MI;
 void m14622 (t517 * __this, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t517_TI));
		__this->f1 = (((t517_SFs*)InitializedTypeInfo(&t517_TI)->static_fields)->f4);
		return;
	}
}
extern MethodInfo m2882_MI;
 void m2882 (t517 * __this, int32_t p0, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t1233 * L_0 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6454(L_0, (t8*) &_stringLiteral537, &m6454_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0015:
	{
		__this->f1 = ((t519*)SZArrayNew(InitializedTypeInfo(&t519_TI), p0));
		return;
	}
}
extern MethodInfo m14623_MI;
 void m14623 (t4 * __this, MethodInfo* method){
	{
		((t517_SFs*)InitializedTypeInfo(&t517_TI)->static_fields)->f4 = ((t519*)SZArrayNew(InitializedTypeInfo(&t519_TI), 0));
		return;
	}
}
extern MethodInfo m14624_MI;
 t4* m14624 (t517 * __this, MethodInfo* method){
	{
		t2548  L_0 = m14651(__this, &m14651_MI);
		t2548  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t2548_TI), &L_1);
		return (t4*)L_2;
	}
}
extern MethodInfo m14625_MI;
 void m14625 (t517 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	{
		t519* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		m3739(NULL, (t14 *)(t14 *)L_0, 0, p0, p1, L_1, &m3739_MI);
		return;
	}
}
extern MethodInfo m14626_MI;
 t4 * m14626 (t517 * __this, MethodInfo* method){
	{
		t2548  L_0 = m14651(__this, &m14651_MI);
		t2548  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t2548_TI), &L_1);
		return (t4 *)L_2;
	}
}
extern MethodInfo m14627_MI;
 int32_t m14627 (t517 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t26 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t26 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			VirtActionInvoker1< t370  >::Invoke(&m14639_MI, __this, ((*(t370 *)((t370 *)UnBox (p0, InitializedTypeInfo(&t370_TI))))));
			int32_t L_0 = (__this->f2);
			V_0 = ((int32_t)(L_0-1));
			// IL_0015: leave.s IL_002a
			goto IL_002a;
		}

IL_0017:
		{
			// IL_0017: leave.s IL_001f
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t26 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t573_TI, e.ex->object.klass))
			goto IL_0019;
		if(il2cpp_codegen_class_is_assignable_from (&t1268_TI, e.ex->object.klass))
			goto IL_001c;
		throw e;
	}

IL_0019:
	{ // begin catch(System.NullReferenceException)
		// IL_001a: leave.s IL_001f
		goto IL_001f;
	} // end catch (depth: 1)

IL_001c:
	{ // begin catch(System.InvalidCastException)
		// IL_001d: leave.s IL_001f
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		t303 * L_1 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_1, (t8*) &_stringLiteral551, &m1917_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_002a:
	{
		return V_0;
	}
}
extern MethodInfo m14628_MI;
 bool m14628 (t517 * __this, t4 * p0, MethodInfo* method){
	bool V_0 = false;
	t26 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t26 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = (bool)VirtFuncInvoker1< bool, t370  >::Invoke(&m14646_MI, __this, ((*(t370 *)((t370 *)UnBox (p0, InitializedTypeInfo(&t370_TI))))));
			V_0 = L_0;
			// IL_000d: leave.s IL_0019
			goto IL_0019;
		}

IL_000f:
		{
			// IL_000f: leave.s IL_0017
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t26 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t573_TI, e.ex->object.klass))
			goto IL_0011;
		if(il2cpp_codegen_class_is_assignable_from (&t1268_TI, e.ex->object.klass))
			goto IL_0014;
		throw e;
	}

IL_0011:
	{ // begin catch(System.NullReferenceException)
		// IL_0012: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0014:
	{ // begin catch(System.InvalidCastException)
		// IL_0015: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		return V_0;
	}
}
extern MethodInfo m14629_MI;
 int32_t m14629 (t517 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t26 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t26 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t370  >::Invoke(&m14652_MI, __this, ((*(t370 *)((t370 *)UnBox (p0, InitializedTypeInfo(&t370_TI))))));
			V_0 = L_0;
			// IL_000d: leave.s IL_0019
			goto IL_0019;
		}

IL_000f:
		{
			// IL_000f: leave.s IL_0017
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t26 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t573_TI, e.ex->object.klass))
			goto IL_0011;
		if(il2cpp_codegen_class_is_assignable_from (&t1268_TI, e.ex->object.klass))
			goto IL_0014;
		throw e;
	}

IL_0011:
	{ // begin catch(System.NullReferenceException)
		// IL_0012: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0014:
	{ // begin catch(System.InvalidCastException)
		// IL_0015: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		return V_0;
	}
}
extern MethodInfo m14630_MI;
 void m14630 (t517 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	t26 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t26 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		m14654(__this, p0, &m14654_MI);
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			VirtActionInvoker2< int32_t, t370  >::Invoke(&m14655_MI, __this, p0, ((*(t370 *)((t370 *)UnBox (p1, InitializedTypeInfo(&t370_TI))))));
			// IL_0014: leave.s IL_0029
			goto IL_0029;
		}

IL_0016:
		{
			// IL_0016: leave.s IL_001e
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t26 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t573_TI, e.ex->object.klass))
			goto IL_0018;
		if(il2cpp_codegen_class_is_assignable_from (&t1268_TI, e.ex->object.klass))
			goto IL_001b;
		throw e;
	}

IL_0018:
	{ // begin catch(System.NullReferenceException)
		// IL_0019: leave.s IL_001e
		goto IL_001e;
	} // end catch (depth: 1)

IL_001b:
	{ // begin catch(System.InvalidCastException)
		// IL_001c: leave.s IL_001e
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		t303 * L_0 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_0, (t8*) &_stringLiteral551, &m1917_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0029:
	{
		return;
	}
}
extern MethodInfo m14631_MI;
 void m14631 (t517 * __this, t4 * p0, MethodInfo* method){
	t26 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t26 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			VirtFuncInvoker1< bool, t370  >::Invoke(&m14657_MI, __this, ((*(t370 *)((t370 *)UnBox (p0, InitializedTypeInfo(&t370_TI))))));
			// IL_000d: leave.s IL_0017
			goto IL_0017;
		}

IL_000f:
		{
			// IL_000f: leave.s IL_0017
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t26 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t573_TI, e.ex->object.klass))
			goto IL_0011;
		if(il2cpp_codegen_class_is_assignable_from (&t1268_TI, e.ex->object.klass))
			goto IL_0014;
		throw e;
	}

IL_0011:
	{ // begin catch(System.NullReferenceException)
		// IL_0012: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0014:
	{ // begin catch(System.InvalidCastException)
		// IL_0015: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
extern MethodInfo m14632_MI;
 bool m14632 (t517 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14633_MI;
 bool m14633 (t517 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14634_MI;
 t4 * m14634 (t517 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m14635_MI;
 bool m14635 (t517 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14636_MI;
 bool m14636 (t517 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14637_MI;
 t4 * m14637 (t517 * __this, int32_t p0, MethodInfo* method){
	{
		t370  L_0 = (t370 )VirtFuncInvoker1< t370 , int32_t >::Invoke(&m14668_MI, __this, p0);
		t370  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t370_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14638_MI;
 void m14638 (t517 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	t26 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t26 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			VirtActionInvoker2< int32_t, t370  >::Invoke(&m14669_MI, __this, p0, ((*(t370 *)((t370 *)UnBox (p1, InitializedTypeInfo(&t370_TI))))));
			// IL_000d: leave.s IL_0022
			goto IL_0022;
		}

IL_000f:
		{
			// IL_000f: leave.s IL_0017
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t26 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t573_TI, e.ex->object.klass))
			goto IL_0011;
		if(il2cpp_codegen_class_is_assignable_from (&t1268_TI, e.ex->object.klass))
			goto IL_0014;
		throw e;
	}

IL_0011:
	{ // begin catch(System.NullReferenceException)
		// IL_0012: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0014:
	{ // begin catch(System.InvalidCastException)
		// IL_0015: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		t303 * L_0 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_0, (t8*) &_stringLiteral242, &m1917_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0022:
	{
		return;
	}
}
extern MethodInfo m14639_MI;
 void m14639 (t517 * __this, t370  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f2);
		t519* L_1 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)(((int32_t)(((t14 *)L_1)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		m14640(__this, 1, &m14640_MI);
	}

IL_0017:
	{
		t519* L_2 = (__this->f1);
		int32_t L_3 = (__this->f2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->f2 = ((int32_t)(L_4+1));
		*((t370 *)(t370 *)SZArrayLdElema(L_2, V_0)) = (t370 )p0;
		int32_t L_5 = (__this->f3);
		__this->f3 = ((int32_t)(L_5+1));
		return;
	}
}
extern MethodInfo m14640_MI;
 void m14640 (t517 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f2);
		V_0 = ((int32_t)(L_0+p0));
		t519* L_1 = (__this->f1);
		if ((((int32_t)V_0) <= ((int32_t)(((int32_t)(((t14 *)L_1)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = m14665(__this, &m14665_MI);
		int32_t L_3 = m6892(NULL, ((int32_t)(L_2*2)), 4, &m6892_MI);
		int32_t L_4 = m6892(NULL, L_3, V_0, &m6892_MI);
		m14666(__this, L_4, &m14666_MI);
	}

IL_002e:
	{
		return;
	}
}
extern MethodInfo m14641_MI;
 void m14641 (t517 * __this, t4* p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m1751_MI, p0);
		V_0 = L_0;
		if (V_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		m14640(__this, V_0, &m14640_MI);
		t519* L_1 = (__this->f1);
		int32_t L_2 = (__this->f2);
		InterfaceActionInvoker2< t519*, int32_t >::Invoke(&m24646_MI, p0, L_1, L_2);
		int32_t L_3 = (__this->f2);
		__this->f2 = ((int32_t)(L_3+V_0));
		return;
	}
}
extern MethodInfo m14642_MI;
 void m14642 (t517 * __this, t4* p0, MethodInfo* method){
	t370  V_0 = {0};
	t4* V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t26 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t26 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t4* L_0 = (t4*)InterfaceFuncInvoker0< t4* >::Invoke(&m24648_MI, p0);
		V_1 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			t370  L_1 = (t370 )InterfaceFuncInvoker0< t370  >::Invoke(&m24649_MI, V_1);
			V_0 = L_1;
			VirtActionInvoker1< t370  >::Invoke(&m14639_MI, __this, V_0);
		}

IL_0017:
		{
			bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m7290_MI, V_1);
			if (L_2)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			// IL_001f: leave.s IL_002c
			leaveInstructions[0] = 0x2C; // 1
			THROW_SENTINEL(IL_002c);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0021;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t26 *)e.ex;
		goto IL_0021;
	}

IL_0021:
	{ // begin finally (depth: 1)
		{
			if (V_1)
			{
				goto IL_0025;
			}
		}

IL_0024:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x2C:
					goto IL_002c;
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
		}

IL_0025:
		{
			InterfaceActionInvoker0::Invoke(&m42_MI, V_1);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x2C:
					goto IL_002c;
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
		}
	} // end finally (depth: 1)

IL_002c:
	{
		return;
	}
}
extern MethodInfo m14643_MI;
 void m14643 (t517 * __this, t4* p0, MethodInfo* method){
	t4* V_0 = {0};
	{
		m14656(__this, p0, &m14656_MI);
		V_0 = ((t4*)IsInst(p0, InitializedTypeInfo(&t379_TI)));
		if (!V_0)
		{
			goto IL_001a;
		}
	}
	{
		m14641(__this, V_0, &m14641_MI);
		goto IL_0021;
	}

IL_001a:
	{
		m14642(__this, p0, &m14642_MI);
	}

IL_0021:
	{
		int32_t L_0 = (__this->f3);
		__this->f3 = ((int32_t)(L_0+1));
		return;
	}
}
extern MethodInfo m14644_MI;
 t2545 * m14644 (t517 * __this, MethodInfo* method){
	{
		t2545 * L_0 = (t2545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2545_TI));
		m14676(L_0, __this, &m14676_MI);
		return L_0;
	}
}
extern MethodInfo m14645_MI;
 void m14645 (t517 * __this, MethodInfo* method){
	{
		t519* L_0 = (__this->f1);
		t519* L_1 = (__this->f1);
		m3735(NULL, (t14 *)(t14 *)L_0, 0, (((int32_t)(((t14 *)L_1)->max_length))), &m3735_MI);
		__this->f2 = 0;
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)(L_2+1));
		return;
	}
}
extern MethodInfo m14646_MI;
 bool m14646 (t517 * __this, t370  p0, MethodInfo* method){
	{
		t519* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		int32_t L_2 = m20025(NULL, L_0, p0, 0, L_1, &m20025_MI);
		return ((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m14647_MI;
 void m14647 (t517 * __this, t519* p0, int32_t p1, MethodInfo* method){
	{
		t519* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		m3739(NULL, (t14 *)(t14 *)L_0, 0, (t14 *)(t14 *)p0, p1, L_1, &m3739_MI);
		return;
	}
}
extern MethodInfo m14648_MI;
 t370  m14648 (t517 * __this, t2546 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t370  V_1 = {0};
	t370  G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t517_TI));
		m14649(NULL, p0, &m14649_MI);
		int32_t L_0 = (__this->f2);
		int32_t L_1 = m14650(__this, 0, L_0, p0, &m14650_MI);
		V_0 = L_1;
		if ((((int32_t)V_0) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		t519* L_2 = (__this->f1);
		G_B3_0 = (*(t370 *)(t370 *)SZArrayLdElema(L_2, V_0));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (&t370_TI, (&V_1));
		G_B3_0 = V_1;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
extern MethodInfo m14649_MI;
 void m14649 (t4 * __this, t2546 * p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral367, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		return;
	}
}
extern MethodInfo m14650_MI;
 int32_t m14650 (t517 * __this, int32_t p0, int32_t p1, t2546 * p2, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)(p0+p1));
		V_1 = p0;
		goto IL_0022;
	}

IL_0008:
	{
		t519* L_0 = (__this->f1);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t370  >::Invoke(&m14751_MI, p2, (*(t370 *)(t370 *)SZArrayLdElema(L_0, V_1)));
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		return V_1;
	}

IL_001e:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0022:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
extern MethodInfo m14651_MI;
 t2548  m14651 (t517 * __this, MethodInfo* method){
	{
		t2548  L_0 = {0};
		m14670(&L_0, __this, &m14670_MI);
		return L_0;
	}
}
extern MethodInfo m14652_MI;
 int32_t m14652 (t517 * __this, t370  p0, MethodInfo* method){
	{
		t519* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		int32_t L_2 = m20025(NULL, L_0, p0, 0, L_1, &m20025_MI);
		return L_2;
	}
}
extern MethodInfo m14653_MI;
 void m14653 (t517 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		p0 = ((int32_t)(p0-p1));
	}

IL_000b:
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)p0) >= ((int32_t)L_0)))
		{
			goto IL_0031;
		}
	}
	{
		t519* L_1 = (__this->f1);
		t519* L_2 = (__this->f1);
		int32_t L_3 = (__this->f2);
		m3739(NULL, (t14 *)(t14 *)L_1, p0, (t14 *)(t14 *)L_2, ((int32_t)(p0+p1)), ((int32_t)(L_3-p0)), &m3739_MI);
	}

IL_0031:
	{
		int32_t L_4 = (__this->f2);
		__this->f2 = ((int32_t)(L_4+p1));
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		t519* L_5 = (__this->f1);
		int32_t L_6 = (__this->f2);
		m3735(NULL, (t14 *)(t14 *)L_5, L_6, ((-p1)), &m3735_MI);
	}

IL_0056:
	{
		return;
	}
}
extern MethodInfo m14654_MI;
 void m14654 (t517 * __this, int32_t p0, MethodInfo* method){
	{
		if ((((int32_t)p0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) <= ((uint32_t)L_0)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		t1233 * L_1 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6454(L_1, (t8*) &_stringLiteral323, &m6454_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0018:
	{
		return;
	}
}
extern MethodInfo m14655_MI;
 void m14655 (t517 * __this, int32_t p0, t370  p1, MethodInfo* method){
	{
		m14654(__this, p0, &m14654_MI);
		int32_t L_0 = (__this->f2);
		t519* L_1 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)(((int32_t)(((t14 *)L_1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		m14640(__this, 1, &m14640_MI);
	}

IL_001e:
	{
		m14653(__this, p0, 1, &m14653_MI);
		t519* L_2 = (__this->f1);
		*((t370 *)(t370 *)SZArrayLdElema(L_2, p0)) = (t370 )p1;
		int32_t L_3 = (__this->f3);
		__this->f3 = ((int32_t)(L_3+1));
		return;
	}
}
extern MethodInfo m14656_MI;
 void m14656 (t517 * __this, t4* p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral552, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		return;
	}
}
extern MethodInfo m14657_MI;
 bool m14657 (t517 * __this, t370  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t370  >::Invoke(&m14652_MI, __this, p0);
		V_0 = L_0;
		if ((((int32_t)V_0) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker1< int32_t >::Invoke(&m14659_MI, __this, V_0);
	}

IL_0013:
	{
		return ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m14658_MI;
 int32_t m14658 (t517 * __this, t2546 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t517_TI));
		m14649(NULL, p0, &m14649_MI);
		V_0 = 0;
		V_1 = 0;
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		t519* L_0 = (__this->f1);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t370  >::Invoke(&m14751_MI, p0, (*(t370 *)(t370 *)SZArrayLdElema(L_0, V_0)));
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0031;
	}

IL_0024:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0028:
	{
		int32_t L_2 = (__this->f2);
		if ((((int32_t)V_0) < ((int32_t)L_2)))
		{
			goto IL_000e;
		}
	}

IL_0031:
	{
		int32_t L_3 = (__this->f2);
		if ((((uint32_t)V_0) != ((uint32_t)L_3)))
		{
			goto IL_003c;
		}
	}
	{
		return 0;
	}

IL_003c:
	{
		int32_t L_4 = (__this->f3);
		__this->f3 = ((int32_t)(L_4+1));
		V_1 = ((int32_t)(V_0+1));
		goto IL_0084;
	}

IL_0050:
	{
		t519* L_5 = (__this->f1);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t370  >::Invoke(&m14751_MI, p0, (*(t370 *)(t370 *)SZArrayLdElema(L_5, V_1)));
		if (L_6)
		{
			goto IL_0080;
		}
	}
	{
		t519* L_7 = (__this->f1);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)(L_8+1));
		t519* L_9 = (__this->f1);
		*((t370 *)(t370 *)SZArrayLdElema(L_7, L_8)) = (t370 )(*(t370 *)(t370 *)SZArrayLdElema(L_9, V_1));
	}

IL_0080:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0084:
	{
		int32_t L_10 = (__this->f2);
		if ((((int32_t)V_1) < ((int32_t)L_10)))
		{
			goto IL_0050;
		}
	}
	{
		if ((((int32_t)((int32_t)(V_1-V_0))) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		t519* L_11 = (__this->f1);
		m3735(NULL, (t14 *)(t14 *)L_11, V_0, ((int32_t)(V_1-V_0)), &m3735_MI);
	}

IL_00a2:
	{
		__this->f2 = V_0;
		return ((int32_t)(V_1-V_0));
	}
}
extern MethodInfo m14659_MI;
 void m14659 (t517 * __this, int32_t p0, MethodInfo* method){
	{
		if ((((int32_t)p0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		t1233 * L_1 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6454(L_1, (t8*) &_stringLiteral323, &m6454_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0018:
	{
		m14653(__this, p0, (-1), &m14653_MI);
		t519* L_2 = (__this->f1);
		int32_t L_3 = (__this->f2);
		m3735(NULL, (t14 *)(t14 *)L_2, L_3, 1, &m3735_MI);
		int32_t L_4 = (__this->f3);
		__this->f3 = ((int32_t)(L_4+1));
		return;
	}
}
extern MethodInfo m14660_MI;
 void m14660 (t517 * __this, MethodInfo* method){
	{
		t519* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		m3751(NULL, (t14 *)(t14 *)L_0, 0, L_1, &m3751_MI);
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)(L_2+1));
		return;
	}
}
extern MethodInfo m14661_MI;
 void m14661 (t517 * __this, MethodInfo* method){
	{
		t519* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2552_TI));
		t2552 * L_2 = m14757(NULL, &m14757_MI);
		m20027(NULL, L_0, 0, L_1, L_2, &m20027_MI);
		int32_t L_3 = (__this->f3);
		__this->f3 = ((int32_t)(L_3+1));
		return;
	}
}
extern MethodInfo m14662_MI;
 void m14662 (t517 * __this, t2547 * p0, MethodInfo* method){
	{
		t519* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		m20035(NULL, L_0, L_1, p0, &m20035_MI);
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)(L_2+1));
		return;
	}
}
extern MethodInfo m14663_MI;
 t519* m14663 (t517 * __this, MethodInfo* method){
	t519* V_0 = {0};
	{
		int32_t L_0 = (__this->f2);
		V_0 = ((t519*)SZArrayNew(InitializedTypeInfo(&t519_TI), L_0));
		t519* L_1 = (__this->f1);
		int32_t L_2 = (__this->f2);
		m3738(NULL, (t14 *)(t14 *)L_1, (t14 *)(t14 *)V_0, L_2, &m3738_MI);
		return V_0;
	}
}
extern MethodInfo m14664_MI;
 void m14664 (t517 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		m14666(__this, L_0, &m14666_MI);
		return;
	}
}
extern MethodInfo m14665_MI;
 int32_t m14665 (t517 * __this, MethodInfo* method){
	{
		t519* L_0 = (__this->f1);
		return (((int32_t)(((t14 *)L_0)->max_length)));
	}
}
extern MethodInfo m14666_MI;
 void m14666 (t517 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) >= ((uint32_t)L_0)))
		{
			goto IL_000f;
		}
	}
	{
		t1233 * L_1 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6453(L_1, &m6453_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000f:
	{
		t519** L_2 = &(__this->f1);
		m20023(NULL, L_2, p0, &m20023_MI);
		return;
	}
}
extern MethodInfo m14667_MI;
 int32_t m14667 (t517 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m14668_MI;
 t370  m14668 (t517 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t1233 * L_1 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6454(L_1, (t8*) &_stringLiteral323, &m6454_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		t519* L_2 = (__this->f1);
		return (*(t370 *)(t370 *)SZArrayLdElema(L_2, p0));
	}
}
extern MethodInfo m14669_MI;
 void m14669 (t517 * __this, int32_t p0, t370  p1, MethodInfo* method){
	{
		m14654(__this, p0, &m14654_MI);
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) != ((uint32_t)L_0)))
		{
			goto IL_001b;
		}
	}
	{
		t1233 * L_1 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6454(L_1, (t8*) &_stringLiteral323, &m6454_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001b:
	{
		t519* L_2 = (__this->f1);
		*((t370 *)(t370 *)SZArrayLdElema(L_2, p0)) = (t370 )p1;
		return;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.UILineInfo>
extern Il2CppType t16_0_0_32849;
FieldInfo t517_f0_FieldInfo = 
{
	"DefaultCapacity", &t16_0_0_32849, &t517_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t519_0_0_1;
FieldInfo t517_f1_FieldInfo = 
{
	"_items", &t519_0_0_1, &t517_TI, offsetof(t517, f1), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t517_f2_FieldInfo = 
{
	"_size", &t16_0_0_1, &t517_TI, offsetof(t517, f2), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t517_f3_FieldInfo = 
{
	"_version", &t16_0_0_1, &t517_TI, offsetof(t517, f3), &EmptyCustomAttributesCache};
extern Il2CppType t519_0_0_49;
FieldInfo t517_f4_FieldInfo = 
{
	"EmptyArray", &t519_0_0_49, &t517_TI, offsetof(t517_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t517_FIs[] =
{
	&t517_f0_FieldInfo,
	&t517_f1_FieldInfo,
	&t517_f2_FieldInfo,
	&t517_f3_FieldInfo,
	&t517_f4_FieldInfo,
	NULL
};
static const int32_t t517_f0_DefaultValueData = 4;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t517_f0_DefaultValue = 
{
	&t517_f0_FieldInfo, { (char*)&t517_f0_DefaultValueData, &t16_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t517_FDVs[] = 
{
	&t517_f0_DefaultValue,
	NULL
};
extern MethodInfo m14632_MI;
static PropertyInfo t517____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t517_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14632_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14633_MI;
static PropertyInfo t517____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t517_TI, "System.Collections.ICollection.IsSynchronized", &m14633_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14634_MI;
static PropertyInfo t517____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t517_TI, "System.Collections.ICollection.SyncRoot", &m14634_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14635_MI;
static PropertyInfo t517____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t517_TI, "System.Collections.IList.IsFixedSize", &m14635_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14636_MI;
static PropertyInfo t517____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t517_TI, "System.Collections.IList.IsReadOnly", &m14636_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14637_MI;
extern MethodInfo m14638_MI;
static PropertyInfo t517____System_Collections_IList_Item_PropertyInfo = 
{
	&t517_TI, "System.Collections.IList.Item", &m14637_MI, &m14638_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14665_MI;
extern MethodInfo m14666_MI;
static PropertyInfo t517____Capacity_PropertyInfo = 
{
	&t517_TI, "Capacity", &m14665_MI, &m14666_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14667_MI;
static PropertyInfo t517____Count_PropertyInfo = 
{
	&t517_TI, "Count", &m14667_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14668_MI;
extern MethodInfo m14669_MI;
static PropertyInfo t517____Item_PropertyInfo = 
{
	&t517_TI, "Item", &m14668_MI, &m14669_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t517_PIs[] =
{
	&t517____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t517____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t517____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t517____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t517____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t517____System_Collections_IList_Item_PropertyInfo,
	&t517____Capacity_PropertyInfo,
	&t517____Count_PropertyInfo,
	&t517____Item_PropertyInfo,
	NULL
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14622_MI = 
{
	".ctor", (methodPointerType)&m14622, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t517_m2882_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m2882_MI = 
{
	".ctor", (methodPointerType)&m2882, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t517_m2882_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14623_MI = 
{
	".cctor", (methodPointerType)&m14623, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t2543_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14624_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m14624, &t517_TI, &t2543_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t517_m14625_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14625_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m14625, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t517_m14625_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14626_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m14626, &t517_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t517_m14627_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14627_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m14627, &t517_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t517_m14627_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t517_m14628_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14628_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m14628, &t517_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t517_m14628_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t517_m14629_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14629_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m14629, &t517_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t517_m14629_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t517_m14630_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14630_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m14630, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t517_m14630_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t517_m14631_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14631_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m14631, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t517_m14631_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14632_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m14632, &t517_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14633_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m14633, &t517_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14634_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m14634, &t517_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14635_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m14635, &t517_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14636_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m14636, &t517_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t517_m14637_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14637_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m14637, &t517_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t517_m14637_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t517_m14638_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14638_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m14638, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t517_m14638_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t517_m14639_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14639_MI = 
{
	"Add", (methodPointerType)&m14639, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t370, t517_m14639_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t517_m14640_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14640_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m14640, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t517_m14640_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t379_0_0_0;
static ParameterInfo t517_m14641_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t379_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14641_MI = 
{
	"AddCollection", (methodPointerType)&m14641, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t517_m14641_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2544_0_0_0;
static ParameterInfo t517_m14642_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2544_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14642_MI = 
{
	"AddEnumerable", (methodPointerType)&m14642, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t517_m14642_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2544_0_0_0;
static ParameterInfo t517_m14643_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2544_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14643_MI = 
{
	"AddRange", (methodPointerType)&m14643, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t517_m14643_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t2545_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14644_MI = 
{
	"AsReadOnly", (methodPointerType)&m14644, &t517_TI, &t2545_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14645_MI = 
{
	"Clear", (methodPointerType)&m14645, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t517_m14646_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14646_MI = 
{
	"Contains", (methodPointerType)&m14646, &t517_TI, &t17_0_0_0, RuntimeInvoker_t17_t370, t517_m14646_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t519_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t517_m14647_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t519_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14647_MI = 
{
	"CopyTo", (methodPointerType)&m14647, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t517_m14647_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2546_0_0_0;
static ParameterInfo t517_m14648_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2546_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t370_0_0_0;
extern void* RuntimeInvoker_t370_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14648_MI = 
{
	"Find", (methodPointerType)&m14648, &t517_TI, &t370_0_0_0, RuntimeInvoker_t370_t4, t517_m14648_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2546_0_0_0;
static ParameterInfo t517_m14649_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2546_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14649_MI = 
{
	"CheckMatch", (methodPointerType)&m14649, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t517_m14649_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
extern Il2CppType t2546_0_0_0;
static ParameterInfo t517_m14650_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2546_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14650_MI = 
{
	"GetIndex", (methodPointerType)&m14650, &t517_TI, &t16_0_0_0, RuntimeInvoker_t16_t16_t16_t4, t517_m14650_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t2548_0_0_0;
extern void* RuntimeInvoker_t2548 (MethodInfo* method, void* obj, void** args);
MethodInfo m14651_MI = 
{
	"GetEnumerator", (methodPointerType)&m14651, &t517_TI, &t2548_0_0_0, RuntimeInvoker_t2548, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t517_m14652_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14652_MI = 
{
	"IndexOf", (methodPointerType)&m14652, &t517_TI, &t16_0_0_0, RuntimeInvoker_t16_t370, t517_m14652_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t517_m14653_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14653_MI = 
{
	"Shift", (methodPointerType)&m14653, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t517_m14653_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t517_m14654_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14654_MI = 
{
	"CheckIndex", (methodPointerType)&m14654, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t517_m14654_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t517_m14655_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14655_MI = 
{
	"Insert", (methodPointerType)&m14655, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t370, t517_m14655_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2544_0_0_0;
static ParameterInfo t517_m14656_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2544_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14656_MI = 
{
	"CheckCollection", (methodPointerType)&m14656, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t517_m14656_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t517_m14657_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14657_MI = 
{
	"Remove", (methodPointerType)&m14657, &t517_TI, &t17_0_0_0, RuntimeInvoker_t17_t370, t517_m14657_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2546_0_0_0;
static ParameterInfo t517_m14658_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2546_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14658_MI = 
{
	"RemoveAll", (methodPointerType)&m14658, &t517_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t517_m14658_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t517_m14659_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14659_MI = 
{
	"RemoveAt", (methodPointerType)&m14659, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t517_m14659_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14660_MI = 
{
	"Reverse", (methodPointerType)&m14660, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14661_MI = 
{
	"Sort", (methodPointerType)&m14661, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2547_0_0_0;
static ParameterInfo t517_m14662_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2547_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14662_MI = 
{
	"Sort", (methodPointerType)&m14662, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t517_m14662_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t519_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14663_MI = 
{
	"ToArray", (methodPointerType)&m14663, &t517_TI, &t519_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14664_MI = 
{
	"TrimExcess", (methodPointerType)&m14664, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14665_MI = 
{
	"get_Capacity", (methodPointerType)&m14665, &t517_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t517_m14666_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14666_MI = 
{
	"set_Capacity", (methodPointerType)&m14666, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t517_m14666_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t517_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14667_MI = 
{
	"get_Count", (methodPointerType)&m14667, &t517_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t517_m14668_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t370_0_0_0;
extern void* RuntimeInvoker_t370_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14668_MI = 
{
	"get_Item", (methodPointerType)&m14668, &t517_TI, &t370_0_0_0, RuntimeInvoker_t370_t16, t517_m14668_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t517_m14669_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t517_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14669_MI = 
{
	"set_Item", (methodPointerType)&m14669, &t517_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t370, t517_m14669_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t517_MIs[] =
{
	&m14622_MI,
	&m2882_MI,
	&m14623_MI,
	&m14624_MI,
	&m14625_MI,
	&m14626_MI,
	&m14627_MI,
	&m14628_MI,
	&m14629_MI,
	&m14630_MI,
	&m14631_MI,
	&m14632_MI,
	&m14633_MI,
	&m14634_MI,
	&m14635_MI,
	&m14636_MI,
	&m14637_MI,
	&m14638_MI,
	&m14639_MI,
	&m14640_MI,
	&m14641_MI,
	&m14642_MI,
	&m14643_MI,
	&m14644_MI,
	&m14645_MI,
	&m14646_MI,
	&m14647_MI,
	&m14648_MI,
	&m14649_MI,
	&m14650_MI,
	&m14651_MI,
	&m14652_MI,
	&m14653_MI,
	&m14654_MI,
	&m14655_MI,
	&m14656_MI,
	&m14657_MI,
	&m14658_MI,
	&m14659_MI,
	&m14660_MI,
	&m14661_MI,
	&m14662_MI,
	&m14663_MI,
	&m14664_MI,
	&m14665_MI,
	&m14666_MI,
	&m14667_MI,
	&m14668_MI,
	&m14669_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14626_MI;
extern MethodInfo m14667_MI;
extern MethodInfo m14633_MI;
extern MethodInfo m14634_MI;
extern MethodInfo m14625_MI;
extern MethodInfo m14635_MI;
extern MethodInfo m14636_MI;
extern MethodInfo m14637_MI;
extern MethodInfo m14638_MI;
extern MethodInfo m14627_MI;
extern MethodInfo m14645_MI;
extern MethodInfo m14628_MI;
extern MethodInfo m14629_MI;
extern MethodInfo m14630_MI;
extern MethodInfo m14631_MI;
extern MethodInfo m14659_MI;
extern MethodInfo m14667_MI;
extern MethodInfo m14632_MI;
extern MethodInfo m14639_MI;
extern MethodInfo m14645_MI;
extern MethodInfo m14646_MI;
extern MethodInfo m14647_MI;
extern MethodInfo m14657_MI;
extern MethodInfo m14624_MI;
extern MethodInfo m14652_MI;
extern MethodInfo m14655_MI;
extern MethodInfo m14659_MI;
extern MethodInfo m14668_MI;
extern MethodInfo m14669_MI;
static MethodInfo* t517_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14626_MI,
	&m14667_MI,
	&m14633_MI,
	&m14634_MI,
	&m14625_MI,
	&m14635_MI,
	&m14636_MI,
	&m14637_MI,
	&m14638_MI,
	&m14627_MI,
	&m14645_MI,
	&m14628_MI,
	&m14629_MI,
	&m14630_MI,
	&m14631_MI,
	&m14659_MI,
	&m14667_MI,
	&m14632_MI,
	&m14639_MI,
	&m14645_MI,
	&m14646_MI,
	&m14647_MI,
	&m14657_MI,
	&m14624_MI,
	&m14652_MI,
	&m14655_MI,
	&m14659_MI,
	&m14668_MI,
	&m14669_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t379_TI;
extern TypeInfo t2544_TI;
extern TypeInfo t377_TI;
static TypeInfo* t517_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1014_TI,
	&t379_TI,
	&t2544_TI,
	&t377_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t379_TI;
extern TypeInfo t2544_TI;
extern TypeInfo t377_TI;
static Il2CppInterfaceOffsetPair t517_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1014_TI, 9},
	{ &t379_TI, 20},
	{ &t2544_TI, 27},
	{ &t377_TI, 28},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t517_0_0_0;
extern Il2CppType t517_1_0_0;
extern TypeInfo t4_TI;
struct t517;
extern TypeInfo t517_TI;
extern Il2CppGenericClass t517_GC;
extern CustomAttributesCache t839__CustomAttributeCache;
TypeInfo t517_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t517_MIs, t517_PIs, t517_FIs, NULL, &t4_TI, NULL, NULL, &t517_TI, t517_ITIs, t517_VT, &t839__CustomAttributeCache, &t517_TI, &t517_0_0_0, &t517_1_0_0, t517_IOs, &t517_GC, NULL, t517_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t517), 0, -1, sizeof(t517_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2548_TI;

extern TypeInfo t2548_TI;
extern TypeInfo t1269_TI;
extern TypeInfo t370_TI;
extern TypeInfo t517_TI;
extern TypeInfo t290_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1286_TI;
extern MethodInfo m14673_MI;
extern MethodInfo m6886_MI;
extern MethodInfo m1401_MI;
extern MethodInfo m2975_MI;
extern MethodInfo m7091_MI;
extern MethodInfo m6887_MI;


extern MethodInfo m14670_MI;
 void m14670 (t2548 * __this, t517 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f3);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m14671_MI;
 t4 * m14671 (t2548 * __this, MethodInfo* method){
	{
		m14673(__this, &m14673_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6886(L_1, &m6886_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		t370  L_2 = (__this->f3);
		t370  L_3 = L_2;
		t4 * L_4 = Box(InitializedTypeInfo(&t370_TI), &L_3);
		return L_4;
	}
}
extern MethodInfo m14672_MI;
 void m14672 (t2548 * __this, MethodInfo* method){
	{
		__this->f0 = (t517 *)NULL;
		return;
	}
}
extern MethodInfo m14673_MI;
 void m14673 (t2548 * __this, MethodInfo* method){
	{
		t517 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		t2548  L_1 = (*(t2548 *)__this);
		t4 * L_2 = Box(InitializedTypeInfo(&t2548_TI), &L_1);
		t290 * L_3 = m1401(L_2, &m1401_MI);
		t8* L_4 = (t8*)VirtFuncInvoker0< t8* >::Invoke(&m2975_MI, L_3);
		t1286 * L_5 = (t1286 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1286_TI));
		m7091(L_5, L_4, &m7091_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_0023:
	{
		int32_t L_6 = (__this->f2);
		t517 * L_7 = (__this->f0);
		int32_t L_8 = (L_7->f3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		t1269 * L_9 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_9, (t8*) &_stringLiteral553, &m6887_MI);
		il2cpp_codegen_raise_exception (L_9);
	}

IL_0041:
	{
		return;
	}
}
extern MethodInfo m14674_MI;
 bool m14674 (t2548 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	{
		m14673(__this, &m14673_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_1 = (__this->f1);
		t517 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		t517 * L_4 = (__this->f0);
		t519* L_5 = (L_4->f1);
		int32_t L_6 = (__this->f1);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f1 = ((int32_t)(L_7+1));
		__this->f3 = (*(t370 *)(t370 *)SZArrayLdElema(L_5, V_0));
		return 1;
	}

IL_004d:
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m14675_MI;
 t370  m14675 (t2548 * __this, MethodInfo* method){
	{
		t370  L_0 = (__this->f3);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
extern Il2CppType t517_0_0_1;
FieldInfo t2548_f0_FieldInfo = 
{
	"l", &t517_0_0_1, &t2548_TI, offsetof(t2548, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2548_f1_FieldInfo = 
{
	"next", &t16_0_0_1, &t2548_TI, offsetof(t2548, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2548_f2_FieldInfo = 
{
	"ver", &t16_0_0_1, &t2548_TI, offsetof(t2548, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t370_0_0_1;
FieldInfo t2548_f3_FieldInfo = 
{
	"current", &t370_0_0_1, &t2548_TI, offsetof(t2548, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2548_FIs[] =
{
	&t2548_f0_FieldInfo,
	&t2548_f1_FieldInfo,
	&t2548_f2_FieldInfo,
	&t2548_f3_FieldInfo,
	NULL
};
extern MethodInfo m14671_MI;
static PropertyInfo t2548____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2548_TI, "System.Collections.IEnumerator.Current", &m14671_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14675_MI;
static PropertyInfo t2548____Current_PropertyInfo = 
{
	&t2548_TI, "Current", &m14675_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2548_PIs[] =
{
	&t2548____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2548____Current_PropertyInfo,
	NULL
};
extern Il2CppType t517_0_0_0;
static ParameterInfo t2548_m14670_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t517_0_0_0},
};
extern TypeInfo t2548_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14670_MI = 
{
	".ctor", (methodPointerType)&m14670, &t2548_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2548_m14670_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2548_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14671_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14671, &t2548_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2548_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14672_MI = 
{
	"Dispose", (methodPointerType)&m14672, &t2548_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2548_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14673_MI = 
{
	"VerifyState", (methodPointerType)&m14673, &t2548_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2548_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14674_MI = 
{
	"MoveNext", (methodPointerType)&m14674, &t2548_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2548_TI;
extern Il2CppType t370_0_0_0;
extern void* RuntimeInvoker_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14675_MI = 
{
	"get_Current", (methodPointerType)&m14675, &t2548_TI, &t370_0_0_0, RuntimeInvoker_t370, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2548_MIs[] =
{
	&m14670_MI,
	&m14671_MI,
	&m14672_MI,
	&m14673_MI,
	&m14674_MI,
	&m14675_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m14671_MI;
extern MethodInfo m14674_MI;
extern MethodInfo m14672_MI;
extern MethodInfo m14675_MI;
static MethodInfo* t2548_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m14671_MI,
	&m14674_MI,
	&m14672_MI,
	&m14675_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t2543_TI;
static TypeInfo* t2548_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t2543_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t2543_TI;
static Il2CppInterfaceOffsetPair t2548_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t2543_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2548_0_0_0;
extern Il2CppType t2548_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2548_TI;
extern Il2CppGenericClass t2548_GC;
extern TypeInfo t839_TI;
TypeInfo t2548_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2548_MIs, t2548_PIs, t2548_FIs, NULL, &t95_TI, NULL, &t839_TI, &t2548_TI, t2548_ITIs, t2548_VT, &EmptyCustomAttributesCache, &t2548_TI, &t2548_0_0_0, &t2548_1_0_0, t2548_IOs, &t2548_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2548)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2545_TI;

extern TypeInfo t2545_TI;
extern TypeInfo t370_TI;
extern TypeInfo t16_TI;
extern TypeInfo t335_TI;
extern TypeInfo t377_TI;
extern TypeInfo t379_TI;
extern TypeInfo t328_TI;
extern TypeInfo t640_TI;
extern TypeInfo t15_TI;
extern TypeInfo t14_TI;
extern TypeInfo t591_TI;
extern TypeInfo t123_TI;
extern TypeInfo t17_TI;
extern TypeInfo t519_TI;
extern TypeInfo t2544_TI;
extern TypeInfo t2543_TI;
#include "t2549MD.h"
extern MethodInfo m14705_MI;
extern MethodInfo m1489_MI;
extern MethodInfo m1724_MI;
extern MethodInfo m1751_MI;
extern MethodInfo m15_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m7382_MI;
extern MethodInfo m7291_MI;
extern MethodInfo m14737_MI;
extern MethodInfo m24645_MI;
extern MethodInfo m24639_MI;
extern MethodInfo m24646_MI;
extern MethodInfo m24648_MI;


extern MethodInfo m14676_MI;
 void m14676 (t2545 * __this, t4* p0, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral554, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m14677_MI;
 void m14677 (t2545 * __this, t370  p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14678_MI;
 void m14678 (t2545 * __this, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14679_MI;
 void m14679 (t2545 * __this, int32_t p0, t370  p1, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14680_MI;
 bool m14680 (t2545 * __this, t370  p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14681_MI;
 void m14681 (t2545 * __this, int32_t p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14682_MI;
 t370  m14682 (t2545 * __this, int32_t p0, MethodInfo* method){
	{
		t370  L_0 = (t370 )VirtFuncInvoker1< t370 , int32_t >::Invoke(&m14705_MI, __this, p0);
		return L_0;
	}
}
extern MethodInfo m14683_MI;
 void m14683 (t2545 * __this, int32_t p0, t370  p1, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14684_MI;
 bool m14684 (t2545 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m14685_MI;
 void m14685 (t2545 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< t14 *, int32_t >::Invoke(&m7382_MI, ((t4 *)Castclass(L_0, InitializedTypeInfo(&t640_TI))), p0, p1);
		return;
	}
}
extern MethodInfo m14686_MI;
 t4 * m14686 (t2545 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t4 * L_1 = (t4 *)InterfaceFuncInvoker0< t4 * >::Invoke(&m7291_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14687_MI;
 int32_t m14687 (t2545 * __this, t4 * p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14688_MI;
 void m14688 (t2545 * __this, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14689_MI;
 bool m14689 (t2545 * __this, t4 * p0, MethodInfo* method){
	{
		bool L_0 = m14737(NULL, p0, &m14737_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t4* L_1 = (__this->f0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, t370  >::Invoke(&m24645_MI, L_1, ((*(t370 *)((t370 *)UnBox (p0, InitializedTypeInfo(&t370_TI))))));
		return L_2;
	}

IL_001a:
	{
		return 0;
	}
}
extern MethodInfo m14690_MI;
 int32_t m14690 (t2545 * __this, t4 * p0, MethodInfo* method){
	{
		bool L_0 = m14737(NULL, p0, &m14737_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t4* L_1 = (__this->f0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t370  >::Invoke(&m24639_MI, L_1, ((*(t370 *)((t370 *)UnBox (p0, InitializedTypeInfo(&t370_TI))))));
		return L_2;
	}

IL_001a:
	{
		return (-1);
	}
}
extern MethodInfo m14691_MI;
 void m14691 (t2545 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14692_MI;
 void m14692 (t2545 * __this, t4 * p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14693_MI;
 void m14693 (t2545 * __this, int32_t p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14694_MI;
 bool m14694 (t2545 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14695_MI;
 t4 * m14695 (t2545 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m14696_MI;
 bool m14696 (t2545 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m14697_MI;
 bool m14697 (t2545 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m14698_MI;
 t4 * m14698 (t2545 * __this, int32_t p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t370  L_1 = (t370 )InterfaceFuncInvoker1< t370 , int32_t >::Invoke(&m1724_MI, L_0, p0);
		t370  L_2 = L_1;
		t4 * L_3 = Box(InitializedTypeInfo(&t370_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m14699_MI;
 void m14699 (t2545 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_0, &m1489_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14700_MI;
 bool m14700 (t2545 * __this, t370  p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker1< bool, t370  >::Invoke(&m24645_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m14701_MI;
 void m14701 (t2545 * __this, t519* p0, int32_t p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< t519*, int32_t >::Invoke(&m24646_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m14702_MI;
 t4* m14702 (t2545 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t4* L_1 = (t4*)InterfaceFuncInvoker0< t4* >::Invoke(&m24648_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14703_MI;
 int32_t m14703 (t2545 * __this, t370  p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker1< int32_t, t370  >::Invoke(&m24639_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m14704_MI;
 int32_t m14704 (t2545 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m1751_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14705_MI;
 t370  m14705 (t2545 * __this, int32_t p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t370  L_1 = (t370 )InterfaceFuncInvoker1< t370 , int32_t >::Invoke(&m1724_MI, L_0, p0);
		return L_1;
	}
}
// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
extern Il2CppType t377_0_0_1;
FieldInfo t2545_f0_FieldInfo = 
{
	"list", &t377_0_0_1, &t2545_TI, offsetof(t2545, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2545_FIs[] =
{
	&t2545_f0_FieldInfo,
	NULL
};
extern MethodInfo m14682_MI;
extern MethodInfo m14683_MI;
static PropertyInfo t2545____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2545_TI, "System.Collections.Generic.IList<T>.Item", &m14682_MI, &m14683_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14684_MI;
static PropertyInfo t2545____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2545_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14684_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14694_MI;
static PropertyInfo t2545____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2545_TI, "System.Collections.ICollection.IsSynchronized", &m14694_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14695_MI;
static PropertyInfo t2545____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2545_TI, "System.Collections.ICollection.SyncRoot", &m14695_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14696_MI;
static PropertyInfo t2545____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2545_TI, "System.Collections.IList.IsFixedSize", &m14696_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14697_MI;
static PropertyInfo t2545____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2545_TI, "System.Collections.IList.IsReadOnly", &m14697_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14698_MI;
extern MethodInfo m14699_MI;
static PropertyInfo t2545____System_Collections_IList_Item_PropertyInfo = 
{
	&t2545_TI, "System.Collections.IList.Item", &m14698_MI, &m14699_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14704_MI;
static PropertyInfo t2545____Count_PropertyInfo = 
{
	&t2545_TI, "Count", &m14704_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14705_MI;
static PropertyInfo t2545____Item_PropertyInfo = 
{
	&t2545_TI, "Item", &m14705_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2545_PIs[] =
{
	&t2545____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2545____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2545____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2545____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2545____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2545____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2545____System_Collections_IList_Item_PropertyInfo,
	&t2545____Count_PropertyInfo,
	&t2545____Item_PropertyInfo,
	NULL
};
extern Il2CppType t377_0_0_0;
static ParameterInfo t2545_m14676_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t377_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14676_MI = 
{
	".ctor", (methodPointerType)&m14676, &t2545_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2545_m14676_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t2545_m14677_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14677_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m14677, &t2545_TI, &t15_0_0_0, RuntimeInvoker_t15_t370, t2545_m14677_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2545_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14678_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m14678, &t2545_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t2545_m14679_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14679_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m14679, &t2545_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t370, t2545_m14679_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t2545_m14680_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14680_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m14680, &t2545_TI, &t17_0_0_0, RuntimeInvoker_t17_t370, t2545_m14680_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2545_m14681_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14681_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m14681, &t2545_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t2545_m14681_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2545_m14682_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t370_0_0_0;
extern void* RuntimeInvoker_t370_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14682_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m14682, &t2545_TI, &t370_0_0_0, RuntimeInvoker_t370_t16, t2545_m14682_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t2545_m14683_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14683_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m14683, &t2545_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t370, t2545_m14683_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2545_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14684_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m14684, &t2545_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t2545_m14685_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14685_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m14685, &t2545_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t2545_m14685_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2545_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14686_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m14686, &t2545_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2545_m14687_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14687_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m14687, &t2545_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2545_m14687_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2545_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14688_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m14688, &t2545_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2545_m14689_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14689_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m14689, &t2545_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2545_m14689_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2545_m14690_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14690_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m14690, &t2545_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2545_m14690_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2545_m14691_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14691_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m14691, &t2545_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2545_m14691_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2545_m14692_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14692_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m14692, &t2545_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2545_m14692_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2545_m14693_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14693_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m14693, &t2545_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t2545_m14693_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2545_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14694_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m14694, &t2545_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2545_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14695_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m14695, &t2545_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2545_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14696_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m14696, &t2545_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2545_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14697_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m14697, &t2545_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2545_m14698_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14698_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m14698, &t2545_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t2545_m14698_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2545_m14699_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14699_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m14699, &t2545_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2545_m14699_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t2545_m14700_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14700_MI = 
{
	"Contains", (methodPointerType)&m14700, &t2545_TI, &t17_0_0_0, RuntimeInvoker_t17_t370, t2545_m14700_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t519_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t2545_m14701_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t519_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14701_MI = 
{
	"CopyTo", (methodPointerType)&m14701, &t2545_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t2545_m14701_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2545_TI;
extern Il2CppType t2543_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14702_MI = 
{
	"GetEnumerator", (methodPointerType)&m14702, &t2545_TI, &t2543_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t2545_m14703_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14703_MI = 
{
	"IndexOf", (methodPointerType)&m14703, &t2545_TI, &t16_0_0_0, RuntimeInvoker_t16_t370, t2545_m14703_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2545_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14704_MI = 
{
	"get_Count", (methodPointerType)&m14704, &t2545_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2545_m14705_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2545_TI;
extern Il2CppType t370_0_0_0;
extern void* RuntimeInvoker_t370_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14705_MI = 
{
	"get_Item", (methodPointerType)&m14705, &t2545_TI, &t370_0_0_0, RuntimeInvoker_t370_t16, t2545_m14705_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2545_MIs[] =
{
	&m14676_MI,
	&m14677_MI,
	&m14678_MI,
	&m14679_MI,
	&m14680_MI,
	&m14681_MI,
	&m14682_MI,
	&m14683_MI,
	&m14684_MI,
	&m14685_MI,
	&m14686_MI,
	&m14687_MI,
	&m14688_MI,
	&m14689_MI,
	&m14690_MI,
	&m14691_MI,
	&m14692_MI,
	&m14693_MI,
	&m14694_MI,
	&m14695_MI,
	&m14696_MI,
	&m14697_MI,
	&m14698_MI,
	&m14699_MI,
	&m14700_MI,
	&m14701_MI,
	&m14702_MI,
	&m14703_MI,
	&m14704_MI,
	&m14705_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14686_MI;
extern MethodInfo m14704_MI;
extern MethodInfo m14694_MI;
extern MethodInfo m14695_MI;
extern MethodInfo m14685_MI;
extern MethodInfo m14696_MI;
extern MethodInfo m14697_MI;
extern MethodInfo m14698_MI;
extern MethodInfo m14699_MI;
extern MethodInfo m14687_MI;
extern MethodInfo m14688_MI;
extern MethodInfo m14689_MI;
extern MethodInfo m14690_MI;
extern MethodInfo m14691_MI;
extern MethodInfo m14692_MI;
extern MethodInfo m14693_MI;
extern MethodInfo m14704_MI;
extern MethodInfo m14684_MI;
extern MethodInfo m14677_MI;
extern MethodInfo m14678_MI;
extern MethodInfo m14700_MI;
extern MethodInfo m14701_MI;
extern MethodInfo m14680_MI;
extern MethodInfo m14703_MI;
extern MethodInfo m14679_MI;
extern MethodInfo m14681_MI;
extern MethodInfo m14682_MI;
extern MethodInfo m14683_MI;
extern MethodInfo m14702_MI;
extern MethodInfo m14705_MI;
static MethodInfo* t2545_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14686_MI,
	&m14704_MI,
	&m14694_MI,
	&m14695_MI,
	&m14685_MI,
	&m14696_MI,
	&m14697_MI,
	&m14698_MI,
	&m14699_MI,
	&m14687_MI,
	&m14688_MI,
	&m14689_MI,
	&m14690_MI,
	&m14691_MI,
	&m14692_MI,
	&m14693_MI,
	&m14704_MI,
	&m14684_MI,
	&m14677_MI,
	&m14678_MI,
	&m14700_MI,
	&m14701_MI,
	&m14680_MI,
	&m14703_MI,
	&m14679_MI,
	&m14681_MI,
	&m14682_MI,
	&m14683_MI,
	&m14702_MI,
	&m14705_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t379_TI;
extern TypeInfo t377_TI;
extern TypeInfo t2544_TI;
static TypeInfo* t2545_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1014_TI,
	&t379_TI,
	&t377_TI,
	&t2544_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t379_TI;
extern TypeInfo t377_TI;
extern TypeInfo t2544_TI;
static Il2CppInterfaceOffsetPair t2545_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1014_TI, 9},
	{ &t379_TI, 20},
	{ &t377_TI, 27},
	{ &t2544_TI, 32},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2545_0_0_0;
extern Il2CppType t2545_1_0_0;
extern TypeInfo t4_TI;
struct t2545;
extern TypeInfo t2545_TI;
extern Il2CppGenericClass t2545_GC;
extern CustomAttributesCache t841__CustomAttributeCache;
TypeInfo t2545_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2545_MIs, t2545_PIs, t2545_FIs, NULL, &t4_TI, NULL, NULL, &t2545_TI, t2545_ITIs, t2545_VT, &t841__CustomAttributeCache, &t2545_TI, &t2545_0_0_0, &t2545_1_0_0, t2545_IOs, &t2545_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2545), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2549.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2549_TI;

extern TypeInfo t2549_TI;
extern TypeInfo t379_TI;
extern TypeInfo t17_TI;
extern TypeInfo t377_TI;
extern TypeInfo t370_TI;
extern TypeInfo t16_TI;
extern TypeInfo t15_TI;
extern TypeInfo t517_TI;
extern TypeInfo t640_TI;
extern TypeInfo t4_TI;
extern TypeInfo t14_TI;
extern TypeInfo t2544_TI;
extern TypeInfo t2543_TI;
extern TypeInfo t519_TI;
extern TypeInfo t290_TI;
extern TypeInfo t303_TI;
extern TypeInfo t335_TI;
extern TypeInfo t1014_TI;
extern Il2CppType t370_0_0_0;
extern MethodInfo m24642_MI;
extern MethodInfo m14740_MI;
extern MethodInfo m14741_MI;
extern MethodInfo m1724_MI;
extern MethodInfo m14738_MI;
extern MethodInfo m14736_MI;
extern MethodInfo m1751_MI;
extern MethodInfo m15_MI;
extern MethodInfo m14622_MI;
extern MethodInfo m7381_MI;
extern MethodInfo m7382_MI;
extern MethodInfo m24648_MI;
extern MethodInfo m14729_MI;
extern MethodInfo m14737_MI;
extern MethodInfo m24645_MI;
extern MethodInfo m24639_MI;
extern MethodInfo m14739_MI;
extern MethodInfo m14727_MI;
extern MethodInfo m14732_MI;
extern MethodInfo m14723_MI;
extern MethodInfo m24644_MI;
extern MethodInfo m24646_MI;
extern MethodInfo m24640_MI;
extern MethodInfo m24641_MI;
extern MethodInfo m24638_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m3794_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m1489_MI;
extern MethodInfo m7380_MI;
extern MethodInfo m7383_MI;


extern MethodInfo m14706_MI;
 void m14706 (t2549 * __this, MethodInfo* method){
	t517 * V_0 = {0};
	t4 * V_1 = {0};
	{
		m15(__this, &m15_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t517_TI));
		t517 * L_0 = (t517 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t517_TI));
		m14622(L_0, &m14622_MI);
		V_0 = L_0;
		V_1 = V_0;
		t4 * L_1 = (t4 *)InterfaceFuncInvoker0< t4 * >::Invoke(&m7381_MI, V_1);
		__this->f1 = L_1;
		__this->f0 = V_0;
		return;
	}
}
extern MethodInfo m14707_MI;
 bool m14707 (t2549 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m24642_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14708_MI;
 void m14708 (t2549 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< t14 *, int32_t >::Invoke(&m7382_MI, ((t4 *)Castclass(L_0, InitializedTypeInfo(&t640_TI))), p0, p1);
		return;
	}
}
extern MethodInfo m14709_MI;
 t4 * m14709 (t2549 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t4* L_1 = (t4*)InterfaceFuncInvoker0< t4* >::Invoke(&m24648_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14710_MI;
 int32_t m14710 (t2549 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m1751_MI, L_0);
		V_0 = L_1;
		t370  L_2 = m14738(NULL, p0, &m14738_MI);
		VirtActionInvoker2< int32_t, t370  >::Invoke(&m14729_MI, __this, V_0, L_2);
		return V_0;
	}
}
extern MethodInfo m14711_MI;
 bool m14711 (t2549 * __this, t4 * p0, MethodInfo* method){
	{
		bool L_0 = m14737(NULL, p0, &m14737_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t4* L_1 = (__this->f0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, t370  >::Invoke(&m24645_MI, L_1, ((*(t370 *)((t370 *)UnBox (p0, InitializedTypeInfo(&t370_TI))))));
		return L_2;
	}

IL_001a:
	{
		return 0;
	}
}
extern MethodInfo m14712_MI;
 int32_t m14712 (t2549 * __this, t4 * p0, MethodInfo* method){
	{
		bool L_0 = m14737(NULL, p0, &m14737_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t4* L_1 = (__this->f0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t370  >::Invoke(&m24639_MI, L_1, ((*(t370 *)((t370 *)UnBox (p0, InitializedTypeInfo(&t370_TI))))));
		return L_2;
	}

IL_001a:
	{
		return (-1);
	}
}
extern MethodInfo m14713_MI;
 void m14713 (t2549 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	{
		t370  L_0 = m14738(NULL, p1, &m14738_MI);
		VirtActionInvoker2< int32_t, t370  >::Invoke(&m14729_MI, __this, p0, L_0);
		return;
	}
}
extern MethodInfo m14714_MI;
 void m14714 (t2549 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t4* L_0 = (__this->f0);
		m14739(NULL, L_0, &m14739_MI);
		t370  L_1 = m14738(NULL, p0, &m14738_MI);
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, t370  >::Invoke(&m14727_MI, __this, L_1);
		V_0 = L_2;
		VirtActionInvoker1< int32_t >::Invoke(&m14732_MI, __this, V_0);
		return;
	}
}
extern MethodInfo m14715_MI;
 bool m14715 (t2549 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = m14740(NULL, L_0, &m14740_MI);
		return L_1;
	}
}
extern MethodInfo m14716_MI;
 t4 * m14716 (t2549 * __this, MethodInfo* method){
	{
		t4 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m14717_MI;
 bool m14717 (t2549 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = m14741(NULL, L_0, &m14741_MI);
		return L_1;
	}
}
extern MethodInfo m14718_MI;
 bool m14718 (t2549 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m24642_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14719_MI;
 t4 * m14719 (t2549 * __this, int32_t p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t370  L_1 = (t370 )InterfaceFuncInvoker1< t370 , int32_t >::Invoke(&m1724_MI, L_0, p0);
		t370  L_2 = L_1;
		t4 * L_3 = Box(InitializedTypeInfo(&t370_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m14720_MI;
 void m14720 (t2549 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	{
		t370  L_0 = m14738(NULL, p1, &m14738_MI);
		VirtActionInvoker2< int32_t, t370  >::Invoke(&m14736_MI, __this, p0, L_0);
		return;
	}
}
extern MethodInfo m14721_MI;
 void m14721 (t2549 * __this, t370  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m1751_MI, L_0);
		V_0 = L_1;
		VirtActionInvoker2< int32_t, t370  >::Invoke(&m14729_MI, __this, V_0, p0);
		return;
	}
}
extern MethodInfo m14722_MI;
 void m14722 (t2549 * __this, MethodInfo* method){
	{
		VirtActionInvoker0::Invoke(&m14723_MI, __this);
		return;
	}
}
extern MethodInfo m14723_MI;
 void m14723 (t2549 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker0::Invoke(&m24644_MI, L_0);
		return;
	}
}
extern MethodInfo m14724_MI;
 bool m14724 (t2549 * __this, t370  p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker1< bool, t370  >::Invoke(&m24645_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m14725_MI;
 void m14725 (t2549 * __this, t519* p0, int32_t p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< t519*, int32_t >::Invoke(&m24646_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m14726_MI;
 t4* m14726 (t2549 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t4* L_1 = (t4*)InterfaceFuncInvoker0< t4* >::Invoke(&m24648_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14727_MI;
 int32_t m14727 (t2549 * __this, t370  p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker1< int32_t, t370  >::Invoke(&m24639_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m14728_MI;
 void m14728 (t2549 * __this, int32_t p0, t370  p1, MethodInfo* method){
	{
		VirtActionInvoker2< int32_t, t370  >::Invoke(&m14729_MI, __this, p0, p1);
		return;
	}
}
extern MethodInfo m14729_MI;
 void m14729 (t2549 * __this, int32_t p0, t370  p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< int32_t, t370  >::Invoke(&m24640_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m14730_MI;
 bool m14730 (t2549 * __this, t370  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t370  >::Invoke(&m14727_MI, __this, p0);
		V_0 = L_0;
		if ((((uint32_t)V_0) != ((uint32_t)(-1))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		VirtActionInvoker1< int32_t >::Invoke(&m14732_MI, __this, V_0);
		return 1;
	}
}
extern MethodInfo m14731_MI;
 void m14731 (t2549 * __this, int32_t p0, MethodInfo* method){
	{
		VirtActionInvoker1< int32_t >::Invoke(&m14732_MI, __this, p0);
		return;
	}
}
extern MethodInfo m14732_MI;
 void m14732 (t2549 * __this, int32_t p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker1< int32_t >::Invoke(&m24641_MI, L_0, p0);
		return;
	}
}
extern MethodInfo m14733_MI;
 int32_t m14733 (t2549 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m1751_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14734_MI;
 t370  m14734 (t2549 * __this, int32_t p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t370  L_1 = (t370 )InterfaceFuncInvoker1< t370 , int32_t >::Invoke(&m1724_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m14735_MI;
 void m14735 (t2549 * __this, int32_t p0, t370  p1, MethodInfo* method){
	{
		VirtActionInvoker2< int32_t, t370  >::Invoke(&m14736_MI, __this, p0, p1);
		return;
	}
}
extern MethodInfo m14736_MI;
 void m14736 (t2549 * __this, int32_t p0, t370  p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< int32_t, t370  >::Invoke(&m24638_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m14737_MI;
 bool m14737 (t4 * __this, t4 * p0, MethodInfo* method){
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		if (((t4 *)IsInst(p0, InitializedTypeInfo(&t370_TI))))
		{
			goto IL_0022;
		}
	}
	{
		if (p0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t290_TI));
		t290 * L_0 = m1528(NULL, LoadTypeToken(&t370_0_0_0), &m1528_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3794_MI, L_0);
		G_B4_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		G_B6_0 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 1;
	}

IL_0023:
	{
		return G_B6_0;
	}
}
extern MethodInfo m14738_MI;
 t370  m14738 (t4 * __this, t4 * p0, MethodInfo* method){
	{
		bool L_0 = m14737(NULL, p0, &m14737_MI);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((*(t370 *)((t370 *)UnBox (p0, InitializedTypeInfo(&t370_TI)))));
	}

IL_000f:
	{
		t303 * L_1 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_1, (t8*) &_stringLiteral551, &m1917_MI);
		il2cpp_codegen_raise_exception (L_1);
	}
}
extern MethodInfo m14739_MI;
 void m14739 (t4 * __this, t4* p0, MethodInfo* method){
	{
		bool L_0 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m24642_MI, p0);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		t335 * L_1 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m1489(L_1, &m1489_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000e:
	{
		return;
	}
}
extern MethodInfo m14740_MI;
 bool m14740 (t4 * __this, t4* p0, MethodInfo* method){
	t4 * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		V_0 = ((t4 *)IsInst(p0, InitializedTypeInfo(&t640_TI)));
		if (!V_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_0 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m7380_MI, V_0);
		G_B3_0 = ((int32_t)(L_0));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
extern MethodInfo m14741_MI;
 bool m14741 (t4 * __this, t4* p0, MethodInfo* method){
	t4 * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		V_0 = ((t4 *)IsInst(p0, InitializedTypeInfo(&t1014_TI)));
		if (!V_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_0 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m7383_MI, V_0);
		G_B3_0 = ((int32_t)(L_0));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>
extern Il2CppType t377_0_0_1;
FieldInfo t2549_f0_FieldInfo = 
{
	"list", &t377_0_0_1, &t2549_TI, offsetof(t2549, f0), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t2549_f1_FieldInfo = 
{
	"syncRoot", &t4_0_0_1, &t2549_TI, offsetof(t2549, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2549_FIs[] =
{
	&t2549_f0_FieldInfo,
	&t2549_f1_FieldInfo,
	NULL
};
extern MethodInfo m14707_MI;
static PropertyInfo t2549____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2549_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14707_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14715_MI;
static PropertyInfo t2549____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2549_TI, "System.Collections.ICollection.IsSynchronized", &m14715_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14716_MI;
static PropertyInfo t2549____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2549_TI, "System.Collections.ICollection.SyncRoot", &m14716_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14717_MI;
static PropertyInfo t2549____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2549_TI, "System.Collections.IList.IsFixedSize", &m14717_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14718_MI;
static PropertyInfo t2549____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2549_TI, "System.Collections.IList.IsReadOnly", &m14718_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14719_MI;
extern MethodInfo m14720_MI;
static PropertyInfo t2549____System_Collections_IList_Item_PropertyInfo = 
{
	&t2549_TI, "System.Collections.IList.Item", &m14719_MI, &m14720_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14733_MI;
static PropertyInfo t2549____Count_PropertyInfo = 
{
	&t2549_TI, "Count", &m14733_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14734_MI;
extern MethodInfo m14735_MI;
static PropertyInfo t2549____Item_PropertyInfo = 
{
	&t2549_TI, "Item", &m14734_MI, &m14735_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2549_PIs[] =
{
	&t2549____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2549____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2549____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2549____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2549____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2549____System_Collections_IList_Item_PropertyInfo,
	&t2549____Count_PropertyInfo,
	&t2549____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2549_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14706_MI = 
{
	".ctor", (methodPointerType)&m14706, &t2549_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2549_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14707_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m14707, &t2549_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t2549_m14708_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14708_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m14708, &t2549_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t2549_m14708_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2549_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14709_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m14709, &t2549_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2549_m14710_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14710_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m14710, &t2549_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2549_m14710_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2549_m14711_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14711_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m14711, &t2549_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2549_m14711_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2549_m14712_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14712_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m14712, &t2549_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2549_m14712_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2549_m14713_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14713_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m14713, &t2549_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2549_m14713_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2549_m14714_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14714_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m14714, &t2549_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2549_m14714_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2549_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14715_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m14715, &t2549_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2549_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14716_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m14716, &t2549_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2549_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14717_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m14717, &t2549_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2549_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14718_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m14718, &t2549_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2549_m14719_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14719_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m14719, &t2549_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t2549_m14719_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2549_m14720_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14720_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m14720, &t2549_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2549_m14720_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t2549_m14721_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14721_MI = 
{
	"Add", (methodPointerType)&m14721, &t2549_TI, &t15_0_0_0, RuntimeInvoker_t15_t370, t2549_m14721_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2549_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14722_MI = 
{
	"Clear", (methodPointerType)&m14722, &t2549_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2549_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14723_MI = 
{
	"ClearItems", (methodPointerType)&m14723, &t2549_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t2549_m14724_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14724_MI = 
{
	"Contains", (methodPointerType)&m14724, &t2549_TI, &t17_0_0_0, RuntimeInvoker_t17_t370, t2549_m14724_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t519_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t2549_m14725_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t519_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14725_MI = 
{
	"CopyTo", (methodPointerType)&m14725, &t2549_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t2549_m14725_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2549_TI;
extern Il2CppType t2543_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14726_MI = 
{
	"GetEnumerator", (methodPointerType)&m14726, &t2549_TI, &t2543_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t2549_m14727_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14727_MI = 
{
	"IndexOf", (methodPointerType)&m14727, &t2549_TI, &t16_0_0_0, RuntimeInvoker_t16_t370, t2549_m14727_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t2549_m14728_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14728_MI = 
{
	"Insert", (methodPointerType)&m14728, &t2549_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t370, t2549_m14728_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t2549_m14729_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14729_MI = 
{
	"InsertItem", (methodPointerType)&m14729, &t2549_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t370, t2549_m14729_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t2549_m14730_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14730_MI = 
{
	"Remove", (methodPointerType)&m14730, &t2549_TI, &t17_0_0_0, RuntimeInvoker_t17_t370, t2549_m14730_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2549_m14731_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14731_MI = 
{
	"RemoveAt", (methodPointerType)&m14731, &t2549_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t2549_m14731_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2549_m14732_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14732_MI = 
{
	"RemoveItem", (methodPointerType)&m14732, &t2549_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t2549_m14732_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2549_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14733_MI = 
{
	"get_Count", (methodPointerType)&m14733, &t2549_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2549_m14734_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t370_0_0_0;
extern void* RuntimeInvoker_t370_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m14734_MI = 
{
	"get_Item", (methodPointerType)&m14734, &t2549_TI, &t370_0_0_0, RuntimeInvoker_t370_t16, t2549_m14734_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t2549_m14735_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14735_MI = 
{
	"set_Item", (methodPointerType)&m14735, &t2549_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t370, t2549_m14735_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t2549_m14736_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14736_MI = 
{
	"SetItem", (methodPointerType)&m14736, &t2549_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t370, t2549_m14736_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2549_m14737_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14737_MI = 
{
	"IsValidItem", (methodPointerType)&m14737, &t2549_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2549_m14737_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2549_m14738_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t370_0_0_0;
extern void* RuntimeInvoker_t370_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14738_MI = 
{
	"ConvertItem", (methodPointerType)&m14738, &t2549_TI, &t370_0_0_0, RuntimeInvoker_t370_t4, t2549_m14738_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t377_0_0_0;
static ParameterInfo t2549_m14739_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t377_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14739_MI = 
{
	"CheckWritable", (methodPointerType)&m14739, &t2549_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2549_m14739_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t377_0_0_0;
static ParameterInfo t2549_m14740_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t377_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14740_MI = 
{
	"IsSynchronized", (methodPointerType)&m14740, &t2549_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2549_m14740_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t377_0_0_0;
static ParameterInfo t2549_m14741_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t377_0_0_0},
};
extern TypeInfo t2549_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14741_MI = 
{
	"IsFixedSize", (methodPointerType)&m14741, &t2549_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2549_m14741_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2549_MIs[] =
{
	&m14706_MI,
	&m14707_MI,
	&m14708_MI,
	&m14709_MI,
	&m14710_MI,
	&m14711_MI,
	&m14712_MI,
	&m14713_MI,
	&m14714_MI,
	&m14715_MI,
	&m14716_MI,
	&m14717_MI,
	&m14718_MI,
	&m14719_MI,
	&m14720_MI,
	&m14721_MI,
	&m14722_MI,
	&m14723_MI,
	&m14724_MI,
	&m14725_MI,
	&m14726_MI,
	&m14727_MI,
	&m14728_MI,
	&m14729_MI,
	&m14730_MI,
	&m14731_MI,
	&m14732_MI,
	&m14733_MI,
	&m14734_MI,
	&m14735_MI,
	&m14736_MI,
	&m14737_MI,
	&m14738_MI,
	&m14739_MI,
	&m14740_MI,
	&m14741_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14709_MI;
extern MethodInfo m14733_MI;
extern MethodInfo m14715_MI;
extern MethodInfo m14716_MI;
extern MethodInfo m14708_MI;
extern MethodInfo m14717_MI;
extern MethodInfo m14718_MI;
extern MethodInfo m14719_MI;
extern MethodInfo m14720_MI;
extern MethodInfo m14710_MI;
extern MethodInfo m14722_MI;
extern MethodInfo m14711_MI;
extern MethodInfo m14712_MI;
extern MethodInfo m14713_MI;
extern MethodInfo m14714_MI;
extern MethodInfo m14731_MI;
extern MethodInfo m14733_MI;
extern MethodInfo m14707_MI;
extern MethodInfo m14721_MI;
extern MethodInfo m14722_MI;
extern MethodInfo m14724_MI;
extern MethodInfo m14725_MI;
extern MethodInfo m14730_MI;
extern MethodInfo m14727_MI;
extern MethodInfo m14728_MI;
extern MethodInfo m14731_MI;
extern MethodInfo m14734_MI;
extern MethodInfo m14735_MI;
extern MethodInfo m14726_MI;
extern MethodInfo m14723_MI;
extern MethodInfo m14729_MI;
extern MethodInfo m14732_MI;
extern MethodInfo m14736_MI;
static MethodInfo* t2549_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14709_MI,
	&m14733_MI,
	&m14715_MI,
	&m14716_MI,
	&m14708_MI,
	&m14717_MI,
	&m14718_MI,
	&m14719_MI,
	&m14720_MI,
	&m14710_MI,
	&m14722_MI,
	&m14711_MI,
	&m14712_MI,
	&m14713_MI,
	&m14714_MI,
	&m14731_MI,
	&m14733_MI,
	&m14707_MI,
	&m14721_MI,
	&m14722_MI,
	&m14724_MI,
	&m14725_MI,
	&m14730_MI,
	&m14727_MI,
	&m14728_MI,
	&m14731_MI,
	&m14734_MI,
	&m14735_MI,
	&m14726_MI,
	&m14723_MI,
	&m14729_MI,
	&m14732_MI,
	&m14736_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t379_TI;
extern TypeInfo t377_TI;
extern TypeInfo t2544_TI;
static TypeInfo* t2549_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1014_TI,
	&t379_TI,
	&t377_TI,
	&t2544_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t379_TI;
extern TypeInfo t377_TI;
extern TypeInfo t2544_TI;
static Il2CppInterfaceOffsetPair t2549_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1014_TI, 9},
	{ &t379_TI, 20},
	{ &t377_TI, 27},
	{ &t2544_TI, 32},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2549_0_0_0;
extern Il2CppType t2549_1_0_0;
extern TypeInfo t4_TI;
struct t2549;
extern TypeInfo t2549_TI;
extern Il2CppGenericClass t2549_GC;
extern CustomAttributesCache t840__CustomAttributeCache;
TypeInfo t2549_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2549_MIs, t2549_PIs, t2549_FIs, NULL, &t4_TI, NULL, NULL, &t2549_TI, t2549_ITIs, t2549_VT, &t840__CustomAttributeCache, &t2549_TI, &t2549_0_0_0, &t2549_1_0_0, t2549_IOs, &t2549_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2549), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2550_TI;
#include "t2550MD.h"

#include "t2551.h"
extern TypeInfo t2550_TI;
extern TypeInfo t5189_TI;
extern TypeInfo t290_TI;
extern TypeInfo t370_TI;
extern TypeInfo t17_TI;
extern TypeInfo t836_TI;
extern TypeInfo t525_TI;
extern TypeInfo t2551_TI;
extern TypeInfo t16_TI;
#include "t2551MD.h"
extern Il2CppType t5189_0_0_0;
extern Il2CppType t370_0_0_0;
extern Il2CppType t836_0_0_0;
extern MethodInfo m15_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2958_MI;
extern MethodInfo m2956_MI;
extern MethodInfo m6421_MI;
extern MethodInfo m14747_MI;
extern MethodInfo m26339_MI;
extern MethodInfo m20024_MI;


extern MethodInfo m14742_MI;
 void m14742 (t2550 * __this, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		return;
	}
}
extern MethodInfo m14743_MI;
 void m14743 (t4 * __this, MethodInfo* method){
	t2551 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2551 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2551_TI));
	m14747(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m14747_MI);
	((t2550_SFs*)InitializedTypeInfo(&t2550_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m14744_MI;
 int32_t m14744 (t2550 * __this, t4 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t370  >::Invoke(&m26339_MI, __this, ((*(t370 *)((t370 *)UnBox (p0, InitializedTypeInfo(&t370_TI))))));
		return L_0;
	}
}
extern MethodInfo m14745_MI;
 bool m14745 (t2550 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t370 , t370  >::Invoke(&m20024_MI, __this, ((*(t370 *)((t370 *)UnBox (p0, InitializedTypeInfo(&t370_TI))))), ((*(t370 *)((t370 *)UnBox (p1, InitializedTypeInfo(&t370_TI))))));
		return L_0;
	}
}
extern MethodInfo m14746_MI;
 t2550 * m14746 (t4 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2550_TI));
		return (((t2550_SFs*)InitializedTypeInfo(&t2550_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>
extern Il2CppType t2550_0_0_49;
FieldInfo t2550_f0_FieldInfo = 
{
	"_default", &t2550_0_0_49, &t2550_TI, offsetof(t2550_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2550_FIs[] =
{
	&t2550_f0_FieldInfo,
	NULL
};
extern MethodInfo m14746_MI;
static PropertyInfo t2550____Default_PropertyInfo = 
{
	&t2550_TI, "Default", &m14746_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2550_PIs[] =
{
	&t2550____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2550_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14742_MI = 
{
	".ctor", (methodPointerType)&m14742, &t2550_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2550_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14743_MI = 
{
	".cctor", (methodPointerType)&m14743, &t2550_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2550_m14744_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2550_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14744_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m14744, &t2550_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2550_m14744_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2550_m14745_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2550_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14745_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m14745, &t2550_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2550_m14745_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t2550_m26339_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2550_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m26339_MI = 
{
	"GetHashCode", NULL, &t2550_TI, &t16_0_0_0, RuntimeInvoker_t16_t370, t2550_m26339_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t2550_m20024_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2550_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t370_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m20024_MI = 
{
	"Equals", NULL, &t2550_TI, &t17_0_0_0, RuntimeInvoker_t17_t370_t370, t2550_m20024_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2550_TI;
extern Il2CppType t2550_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14746_MI = 
{
	"get_Default", (methodPointerType)&m14746, &t2550_TI, &t2550_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2550_MIs[] =
{
	&m14742_MI,
	&m14743_MI,
	&m14744_MI,
	&m14745_MI,
	&m26339_MI,
	&m20024_MI,
	&m14746_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m20024_MI;
extern MethodInfo m26339_MI;
extern MethodInfo m14745_MI;
extern MethodInfo m14744_MI;
static MethodInfo* t2550_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m20024_MI,
	&m26339_MI,
	&m14745_MI,
	&m14744_MI,
	NULL,
	NULL,
};
extern TypeInfo t5190_TI;
extern TypeInfo t859_TI;
static TypeInfo* t2550_ITIs[] = 
{
	&t5190_TI,
	&t859_TI,
};
extern TypeInfo t5190_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t2550_IOs[] = 
{
	{ &t5190_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2550_0_0_0;
extern Il2CppType t2550_1_0_0;
extern TypeInfo t4_TI;
struct t2550;
extern TypeInfo t2550_TI;
extern Il2CppGenericClass t2550_GC;
TypeInfo t2550_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2550_MIs, t2550_PIs, t2550_FIs, NULL, &t4_TI, NULL, NULL, &t2550_TI, t2550_ITIs, t2550_VT, &EmptyCustomAttributesCache, &t2550_TI, &t2550_0_0_0, &t2550_1_0_0, t2550_IOs, &t2550_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2550), 0, -1, sizeof(t2550_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5190_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.UILineInfo>
extern Il2CppType t370_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t5190_m26340_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t5190_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t370_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m26340_MI = 
{
	"Equals", NULL, &t5190_TI, &t17_0_0_0, RuntimeInvoker_t17_t370_t370, t5190_m26340_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t5190_m26341_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t5190_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m26341_MI = 
{
	"GetHashCode", NULL, &t5190_TI, &t16_0_0_0, RuntimeInvoker_t16_t370, t5190_m26341_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5190_MIs[] =
{
	&m26340_MI,
	&m26341_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5190_0_0_0;
extern Il2CppType t5190_1_0_0;
struct t5190;
extern TypeInfo t5190_TI;
extern Il2CppGenericClass t5190_GC;
TypeInfo t5190_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5190_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5190_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5190_TI, &t5190_0_0_0, &t5190_1_0_0, NULL, &t5190_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5189_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.UILineInfo>
extern Il2CppType t370_0_0_0;
static ParameterInfo t5189_m26342_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t5189_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m26342_MI = 
{
	"Equals", NULL, &t5189_TI, &t17_0_0_0, RuntimeInvoker_t17_t370, t5189_m26342_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5189_MIs[] =
{
	&m26342_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5189_0_0_0;
extern Il2CppType t5189_1_0_0;
struct t5189;
extern TypeInfo t5189_TI;
extern Il2CppGenericClass t5189_GC;
TypeInfo t5189_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5189_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5189_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5189_TI, &t5189_0_0_0, &t5189_1_0_0, NULL, &t5189_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2551_TI;

extern TypeInfo t370_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern TypeInfo t17_TI;
extern MethodInfo m14742_MI;
extern MethodInfo m21_MI;
extern MethodInfo m19_MI;


extern MethodInfo m14747_MI;
 void m14747 (t2551 * __this, MethodInfo* method){
	{
		m14742(__this, &m14742_MI);
		return;
	}
}
extern MethodInfo m14748_MI;
 int32_t m14748 (t2551 * __this, t370  p0, MethodInfo* method){
	{
		t370  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t370_TI), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m21_MI, Box(InitializedTypeInfo(&t370_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m14749_MI;
 bool m14749 (t2551 * __this, t370  p0, t370  p1, MethodInfo* method){
	{
		t370  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t370_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t370  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t370_TI), &L_2);
		return ((((t4 *)L_3) == ((t4 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t370  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t370_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t4 * >::Invoke(&m19_MI, Box(InitializedTypeInfo(&t370_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
extern TypeInfo t2551_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14747_MI = 
{
	".ctor", (methodPointerType)&m14747, &t2551_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t2551_m14748_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2551_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14748_MI = 
{
	"GetHashCode", (methodPointerType)&m14748, &t2551_TI, &t16_0_0_0, RuntimeInvoker_t16_t370, t2551_m14748_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t2551_m14749_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2551_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t370_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14749_MI = 
{
	"Equals", (methodPointerType)&m14749, &t2551_TI, &t17_0_0_0, RuntimeInvoker_t17_t370_t370, t2551_m14749_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2551_MIs[] =
{
	&m14747_MI,
	&m14748_MI,
	&m14749_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14749_MI;
extern MethodInfo m14748_MI;
extern MethodInfo m14745_MI;
extern MethodInfo m14744_MI;
extern MethodInfo m14748_MI;
extern MethodInfo m14749_MI;
static MethodInfo* t2551_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14749_MI,
	&m14748_MI,
	&m14745_MI,
	&m14744_MI,
	&m14748_MI,
	&m14749_MI,
};
extern TypeInfo t5190_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t2551_IOs[] = 
{
	{ &t5190_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2551_0_0_0;
extern Il2CppType t2551_1_0_0;
extern TypeInfo t2550_TI;
struct t2551;
extern TypeInfo t2551_TI;
extern Il2CppGenericClass t2551_GC;
extern TypeInfo t835_TI;
TypeInfo t2551_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2551_MIs, NULL, NULL, NULL, &t2550_TI, NULL, &t835_TI, &t2551_TI, NULL, t2551_VT, &EmptyCustomAttributesCache, &t2551_TI, &t2551_0_0_0, &t2551_1_0_0, t2551_IOs, &t2551_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2551), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2546_TI;



extern MethodInfo m14750_MI;
 void m14750 (t2546 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14751_MI;
 bool m14751 (t2546 * __this, t370  p0, MethodInfo* method){
	typedef  bool (*FunctionPointerType) (t4 * __this, t370  p0, MethodInfo* method);
	if (__this->f9)
		m14751((t2546 *)__this->f9,  p0, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m14752_MI;
 t4 * m14752 (t2546 * __this, t370  p0, t49 * p1, t4 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t370_TI), &p0);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m14753_MI;
 bool m14753 (t2546 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Predicate`1<UnityEngine.UILineInfo>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t2546_m14750_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t2546_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m14750_MI = 
{
	".ctor", (methodPointerType)&m14750, &t2546_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t2546_m14750_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
static ParameterInfo t2546_m14751_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2546_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14751_MI = 
{
	"Invoke", (methodPointerType)&m14751, &t2546_TI, &t17_0_0_0, RuntimeInvoker_t17_t370, t2546_m14751_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2546_m14752_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2546_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t370_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14752_MI = 
{
	"BeginInvoke", (methodPointerType)&m14752, &t2546_TI, &t48_0_0_0, RuntimeInvoker_t4_t370_t4_t4, t2546_m14752_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t2546_m14753_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t2546_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14753_MI = 
{
	"EndInvoke", (methodPointerType)&m14753, &t2546_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2546_m14753_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2546_MIs[] =
{
	&m14750_MI,
	&m14751_MI,
	&m14752_MI,
	&m14753_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m14751_MI;
extern MethodInfo m14752_MI;
extern MethodInfo m14753_MI;
static MethodInfo* t2546_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m14751_MI,
	&m14752_MI,
	&m14753_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t2546_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2546_0_0_0;
extern Il2CppType t2546_1_0_0;
extern TypeInfo t189_TI;
struct t2546;
extern TypeInfo t2546_TI;
extern Il2CppGenericClass t2546_GC;
TypeInfo t2546_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2546_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t2546_TI, NULL, t2546_VT, &EmptyCustomAttributesCache, &t2546_TI, &t2546_0_0_0, &t2546_1_0_0, t2546_IOs, &t2546_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2546), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2552_TI;

#include "t2553.h"
extern TypeInfo t2552_TI;
extern TypeInfo t3514_TI;
extern TypeInfo t290_TI;
extern TypeInfo t370_TI;
extern TypeInfo t17_TI;
extern TypeInfo t824_TI;
extern TypeInfo t525_TI;
extern TypeInfo t2553_TI;
extern TypeInfo t16_TI;
extern TypeInfo t303_TI;
#include "t2553MD.h"
extern Il2CppType t3514_0_0_0;
extern Il2CppType t370_0_0_0;
extern Il2CppType t824_0_0_0;
extern MethodInfo m15_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2958_MI;
extern MethodInfo m2956_MI;
extern MethodInfo m6421_MI;
extern MethodInfo m14758_MI;
extern MethodInfo m26343_MI;
extern MethodInfo m6443_MI;


extern MethodInfo m14754_MI;
 void m14754 (t2552 * __this, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		return;
	}
}
extern MethodInfo m14755_MI;
 void m14755 (t4 * __this, MethodInfo* method){
	t2553 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2553 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2553_TI));
	m14758(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m14758_MI);
	((t2552_SFs*)InitializedTypeInfo(&t2552_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m14756_MI;
 int32_t m14756 (t2552 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if (p0)
		{
			goto IL_000b;
		}
	}
	{
		if (p1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (p1)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((t4 *)IsInst(p0, InitializedTypeInfo(&t370_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t4 *)IsInst(p1, InitializedTypeInfo(&t370_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t370 , t370  >::Invoke(&m26343_MI, __this, ((*(t370 *)((t370 *)UnBox (p0, InitializedTypeInfo(&t370_TI))))), ((*(t370 *)((t370 *)UnBox (p1, InitializedTypeInfo(&t370_TI))))));
		return L_0;
	}

IL_0033:
	{
		t303 * L_1 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m6443(L_1, &m6443_MI);
		il2cpp_codegen_raise_exception (L_1);
	}
}
extern MethodInfo m14757_MI;
 t2552 * m14757 (t4 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2552_TI));
		return (((t2552_SFs*)InitializedTypeInfo(&t2552_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>
extern Il2CppType t2552_0_0_49;
FieldInfo t2552_f0_FieldInfo = 
{
	"_default", &t2552_0_0_49, &t2552_TI, offsetof(t2552_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2552_FIs[] =
{
	&t2552_f0_FieldInfo,
	NULL
};
extern MethodInfo m14757_MI;
static PropertyInfo t2552____Default_PropertyInfo = 
{
	&t2552_TI, "Default", &m14757_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2552_PIs[] =
{
	&t2552____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2552_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14754_MI = 
{
	".ctor", (methodPointerType)&m14754, &t2552_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2552_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14755_MI = 
{
	".cctor", (methodPointerType)&m14755, &t2552_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2552_m14756_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2552_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14756_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m14756, &t2552_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t2552_m14756_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t2552_m26343_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2552_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t370_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m26343_MI = 
{
	"Compare", NULL, &t2552_TI, &t16_0_0_0, RuntimeInvoker_t16_t370_t370, t2552_m26343_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2552_TI;
extern Il2CppType t2552_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14757_MI = 
{
	"get_Default", (methodPointerType)&m14757, &t2552_TI, &t2552_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2552_MIs[] =
{
	&m14754_MI,
	&m14755_MI,
	&m14756_MI,
	&m26343_MI,
	&m14757_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m26343_MI;
extern MethodInfo m14756_MI;
static MethodInfo* t2552_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m26343_MI,
	&m14756_MI,
	NULL,
};
extern TypeInfo t3513_TI;
extern TypeInfo t716_TI;
static TypeInfo* t2552_ITIs[] = 
{
	&t3513_TI,
	&t716_TI,
};
extern TypeInfo t3513_TI;
extern TypeInfo t716_TI;
static Il2CppInterfaceOffsetPair t2552_IOs[] = 
{
	{ &t3513_TI, 4},
	{ &t716_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2552_0_0_0;
extern Il2CppType t2552_1_0_0;
extern TypeInfo t4_TI;
struct t2552;
extern TypeInfo t2552_TI;
extern Il2CppGenericClass t2552_GC;
TypeInfo t2552_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2552_MIs, t2552_PIs, t2552_FIs, NULL, &t4_TI, NULL, NULL, &t2552_TI, t2552_ITIs, t2552_VT, &EmptyCustomAttributesCache, &t2552_TI, &t2552_0_0_0, &t2552_1_0_0, t2552_IOs, &t2552_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2552), 0, -1, sizeof(t2552_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3513_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
extern Il2CppType t370_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t3513_m20032_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t3513_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t370_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m20032_MI = 
{
	"Compare", NULL, &t3513_TI, &t16_0_0_0, RuntimeInvoker_t16_t370_t370, t3513_m20032_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3513_MIs[] =
{
	&m20032_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3513_0_0_0;
extern Il2CppType t3513_1_0_0;
struct t3513;
extern TypeInfo t3513_TI;
extern Il2CppGenericClass t3513_GC;
TypeInfo t3513_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3513_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3513_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3513_TI, &t3513_0_0_0, &t3513_1_0_0, NULL, &t3513_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3514_TI;



// Metadata Definition System.IComparable`1<UnityEngine.UILineInfo>
extern Il2CppType t370_0_0_0;
static ParameterInfo t3514_m20033_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t3514_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m20033_MI = 
{
	"CompareTo", NULL, &t3514_TI, &t16_0_0_0, RuntimeInvoker_t16_t370, t3514_m20033_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3514_MIs[] =
{
	&m20033_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3514_0_0_0;
extern Il2CppType t3514_1_0_0;
struct t3514;
extern TypeInfo t3514_TI;
extern Il2CppGenericClass t3514_GC;
TypeInfo t3514_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3514_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3514_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3514_TI, &t3514_0_0_0, &t3514_1_0_0, NULL, &t3514_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2553_TI;

extern TypeInfo t370_TI;
extern TypeInfo t3514_TI;
extern TypeInfo t16_TI;
extern TypeInfo t285_TI;
extern TypeInfo t4_TI;
extern TypeInfo t303_TI;
extern MethodInfo m14754_MI;
extern MethodInfo m20033_MI;
extern MethodInfo m7286_MI;
extern MethodInfo m1917_MI;


extern MethodInfo m14758_MI;
 void m14758 (t2553 * __this, MethodInfo* method){
	{
		m14754(__this, &m14754_MI);
		return;
	}
}
extern MethodInfo m14759_MI;
 int32_t m14759 (t2553 * __this, t370  p0, t370  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t370  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t370_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t370  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t370_TI), &L_2);
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
		t370  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t370_TI), &L_4);
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
		t370  L_6 = p0;
		t4 * L_7 = Box(InitializedTypeInfo(&t370_TI), &L_6);
		if (!((t4*)IsInst(L_7, InitializedTypeInfo(&t3514_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t370  L_8 = p0;
		t4 * L_9 = Box(InitializedTypeInfo(&t370_TI), &L_8);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t370  >::Invoke(&m20033_MI, ((t4*)Castclass(L_9, InitializedTypeInfo(&t3514_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t370  L_11 = p0;
		t4 * L_12 = Box(InitializedTypeInfo(&t370_TI), &L_11);
		if (!((t4 *)IsInst(L_12, InitializedTypeInfo(&t285_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t370  L_13 = p0;
		t4 * L_14 = Box(InitializedTypeInfo(&t370_TI), &L_13);
		t370  L_15 = p1;
		t4 * L_16 = Box(InitializedTypeInfo(&t370_TI), &L_15);
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(&m7286_MI, ((t4 *)Castclass(L_14, InitializedTypeInfo(&t285_TI))), L_16);
		return L_17;
	}

IL_0062:
	{
		t303 * L_18 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_18, (t8*) &_stringLiteral535, &m1917_MI);
		il2cpp_codegen_raise_exception (L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>
extern TypeInfo t2553_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14758_MI = 
{
	".ctor", (methodPointerType)&m14758, &t2553_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t2553_m14759_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2553_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t370_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14759_MI = 
{
	"Compare", (methodPointerType)&m14759, &t2553_TI, &t16_0_0_0, RuntimeInvoker_t16_t370_t370, t2553_m14759_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2553_MIs[] =
{
	&m14758_MI,
	&m14759_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m14759_MI;
extern MethodInfo m14756_MI;
extern MethodInfo m14759_MI;
static MethodInfo* t2553_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m14759_MI,
	&m14756_MI,
	&m14759_MI,
};
extern TypeInfo t3513_TI;
extern TypeInfo t716_TI;
static Il2CppInterfaceOffsetPair t2553_IOs[] = 
{
	{ &t3513_TI, 4},
	{ &t716_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2553_0_0_0;
extern Il2CppType t2553_1_0_0;
extern TypeInfo t2552_TI;
struct t2553;
extern TypeInfo t2553_TI;
extern Il2CppGenericClass t2553_GC;
extern TypeInfo t823_TI;
TypeInfo t2553_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2553_MIs, NULL, NULL, NULL, &t2552_TI, NULL, &t823_TI, &t2553_TI, NULL, t2553_VT, &EmptyCustomAttributesCache, &t2553_TI, &t2553_0_0_0, &t2553_1_0_0, t2553_IOs, &t2553_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2553), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2547_TI;
#include "t2547MD.h"



extern MethodInfo m14760_MI;
 void m14760 (t2547 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14761_MI;
 int32_t m14761 (t2547 * __this, t370  p0, t370  p1, MethodInfo* method){
	typedef  int32_t (*FunctionPointerType) (t4 * __this, t370  p0, t370  p1, MethodInfo* method);
	if (__this->f9)
		m14761((t2547 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m14762_MI;
 t4 * m14762 (t2547 * __this, t370  p0, t370  p1, t49 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t370_TI), &p0);
	__d_args[1] = Box(InitializedTypeInfo(&t370_TI), &p1);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m14763_MI;
 int32_t m14763 (t2547 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Comparison`1<UnityEngine.UILineInfo>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t2547_m14760_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t2547_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m14760_MI = 
{
	".ctor", (methodPointerType)&m14760, &t2547_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t2547_m14760_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
extern Il2CppType t370_0_0_0;
static ParameterInfo t2547_m14761_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
};
extern TypeInfo t2547_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t370_t370 (MethodInfo* method, void* obj, void** args);
MethodInfo m14761_MI = 
{
	"Invoke", (methodPointerType)&m14761, &t2547_TI, &t16_0_0_0, RuntimeInvoker_t16_t370_t370, t2547_m14761_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t370_0_0_0;
extern Il2CppType t370_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2547_m14762_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t370_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2547_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t370_t370_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14762_MI = 
{
	"BeginInvoke", (methodPointerType)&m14762, &t2547_TI, &t48_0_0_0, RuntimeInvoker_t4_t370_t370_t4_t4, t2547_m14762_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t2547_m14763_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t2547_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14763_MI = 
{
	"EndInvoke", (methodPointerType)&m14763, &t2547_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2547_m14763_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2547_MIs[] =
{
	&m14760_MI,
	&m14761_MI,
	&m14762_MI,
	&m14763_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m14761_MI;
extern MethodInfo m14762_MI;
extern MethodInfo m14763_MI;
static MethodInfo* t2547_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m14761_MI,
	&m14762_MI,
	&m14763_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t2547_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2547_0_0_0;
extern Il2CppType t2547_1_0_0;
extern TypeInfo t189_TI;
struct t2547;
extern TypeInfo t2547_TI;
extern Il2CppGenericClass t2547_GC;
TypeInfo t2547_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2547_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t2547_TI, NULL, t2547_VT, &EmptyCustomAttributesCache, &t2547_TI, &t2547_0_0_0, &t2547_1_0_0, t2547_IOs, &t2547_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2547), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3515_TI;

#include "t351.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.RenderMode>
extern MethodInfo m26344_MI;
static PropertyInfo t3515____Current_PropertyInfo = 
{
	&t3515_TI, "Current", &m26344_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3515_PIs[] =
{
	&t3515____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3515_TI;
extern Il2CppType t351_0_0_0;
extern void* RuntimeInvoker_t351 (MethodInfo* method, void* obj, void** args);
MethodInfo m26344_MI = 
{
	"get_Current", NULL, &t3515_TI, &t351_0_0_0, RuntimeInvoker_t351, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3515_MIs[] =
{
	&m26344_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3515_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3515_0_0_0;
extern Il2CppType t3515_1_0_0;
struct t3515;
extern TypeInfo t3515_TI;
extern Il2CppGenericClass t3515_GC;
TypeInfo t3515_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3515_MIs, t3515_PIs, NULL, NULL, NULL, NULL, NULL, &t3515_TI, t3515_ITIs, NULL, &EmptyCustomAttributesCache, &t3515_TI, &t3515_0_0_0, &t3515_1_0_0, NULL, &t3515_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2554.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2554_TI;
#include "t2554MD.h"

extern TypeInfo t2554_TI;
extern TypeInfo t351_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m14768_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m20038_MI;
struct t14;
 int32_t m20038 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20038_MI;


extern MethodInfo m14764_MI;
 void m14764 (t2554 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14765_MI;
 t4 * m14765 (t2554 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14768(__this, &m14768_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t351_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14766_MI;
 void m14766 (t2554 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14767_MI;
 bool m14767 (t2554 * __this, MethodInfo* method){
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
extern MethodInfo m14768_MI;
 int32_t m14768 (t2554 * __this, MethodInfo* method){
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
		int32_t L_8 = m20038(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20038_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.RenderMode>
extern Il2CppType t14_0_0_1;
FieldInfo t2554_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2554_TI, offsetof(t2554, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2554_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2554_TI, offsetof(t2554, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2554_FIs[] =
{
	&t2554_f0_FieldInfo,
	&t2554_f1_FieldInfo,
	NULL
};
extern MethodInfo m14765_MI;
static PropertyInfo t2554____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2554_TI, "System.Collections.IEnumerator.Current", &m14765_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14768_MI;
static PropertyInfo t2554____Current_PropertyInfo = 
{
	&t2554_TI, "Current", &m14768_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2554_PIs[] =
{
	&t2554____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2554____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2554_m14764_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2554_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14764_MI = 
{
	".ctor", (methodPointerType)&m14764, &t2554_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2554_m14764_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2554_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m14765_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14765, &t2554_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2554_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m14766_MI = 
{
	"Dispose", (methodPointerType)&m14766, &t2554_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2554_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m14767_MI = 
{
	"MoveNext", (methodPointerType)&m14767, &t2554_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2554_TI;
extern Il2CppType t351_0_0_0;
extern void* RuntimeInvoker_t351 (MethodInfo* method, void* obj, void** args);
MethodInfo m14768_MI = 
{
	"get_Current", (methodPointerType)&m14768, &t2554_TI, &t351_0_0_0, RuntimeInvoker_t351, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2554_MIs[] =
{
	&m14764_MI,
	&m14765_MI,
	&m14766_MI,
	&m14767_MI,
	&m14768_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m14765_MI;
extern MethodInfo m14767_MI;
extern MethodInfo m14766_MI;
extern MethodInfo m14768_MI;
static MethodInfo* t2554_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m14765_MI,
	&m14767_MI,
	&m14766_MI,
	&m14768_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3515_TI;
static TypeInfo* t2554_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3515_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3515_TI;
static Il2CppInterfaceOffsetPair t2554_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3515_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2554_0_0_0;
extern Il2CppType t2554_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2554_TI;
extern Il2CppGenericClass t2554_GC;
extern TypeInfo t14_TI;
TypeInfo t2554_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2554_MIs, t2554_PIs, t2554_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2554_TI, t2554_ITIs, t2554_VT, &EmptyCustomAttributesCache, &t2554_TI, &t2554_0_0_0, &t2554_1_0_0, t2554_IOs, &t2554_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2554)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4394_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.RenderMode>
extern MethodInfo m26345_MI;
static PropertyInfo t4394____Count_PropertyInfo = 
{
	&t4394_TI, "Count", &m26345_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26346_MI;
static PropertyInfo t4394____IsReadOnly_PropertyInfo = 
{
	&t4394_TI, "IsReadOnly", &m26346_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4394_PIs[] =
{
	&t4394____Count_PropertyInfo,
	&t4394____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4394_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26345_MI = 
{
	"get_Count", NULL, &t4394_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4394_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m26346_MI = 
{
	"get_IsReadOnly", NULL, &t4394_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t351_0_0_0;
static ParameterInfo t4394_m26347_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t351_0_0_0},
};
extern TypeInfo t4394_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26347_MI = 
{
	"Add", NULL, &t4394_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4394_m26347_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4394_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m26348_MI = 
{
	"Clear", NULL, &t4394_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t351_0_0_0;
static ParameterInfo t4394_m26349_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t351_0_0_0},
};
extern TypeInfo t4394_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26349_MI = 
{
	"Contains", NULL, &t4394_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4394_m26349_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3148_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4394_m26350_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3148_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4394_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26350_MI = 
{
	"CopyTo", NULL, &t4394_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4394_m26350_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t351_0_0_0;
static ParameterInfo t4394_m26351_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t351_0_0_0},
};
extern TypeInfo t4394_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m26351_MI = 
{
	"Remove", NULL, &t4394_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4394_m26351_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4394_MIs[] =
{
	&m26345_MI,
	&m26346_MI,
	&m26347_MI,
	&m26348_MI,
	&m26349_MI,
	&m26350_MI,
	&m26351_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4396_TI;
static TypeInfo* t4394_ITIs[] = 
{
	&t591_TI,
	&t4396_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4394_0_0_0;
extern Il2CppType t4394_1_0_0;
struct t4394;
extern TypeInfo t4394_TI;
extern Il2CppGenericClass t4394_GC;
TypeInfo t4394_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4394_MIs, t4394_PIs, NULL, NULL, NULL, NULL, NULL, &t4394_TI, t4394_ITIs, NULL, &EmptyCustomAttributesCache, &t4394_TI, &t4394_0_0_0, &t4394_1_0_0, NULL, &t4394_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4396_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.RenderMode>
extern TypeInfo t4396_TI;
extern Il2CppType t3515_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m26352_MI = 
{
	"GetEnumerator", NULL, &t4396_TI, &t3515_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4396_MIs[] =
{
	&m26352_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4396_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4396_0_0_0;
extern Il2CppType t4396_1_0_0;
struct t4396;
extern TypeInfo t4396_TI;
extern Il2CppGenericClass t4396_GC;
TypeInfo t4396_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4396_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4396_TI, t4396_ITIs, NULL, &EmptyCustomAttributesCache, &t4396_TI, &t4396_0_0_0, &t4396_1_0_0, NULL, &t4396_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
