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
extern TypeInfo t3678_TI;

#include "t957.h"

#include "t14.h"

// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MethodImplAttributes>
extern MethodInfo m28642_MI;
static PropertyInfo t3678____Current_PropertyInfo = 
{
	&t3678_TI, "Current", &m28642_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3678_PIs[] =
{
	&t3678____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3678_TI;
extern Il2CppType t957_0_0_0;
extern void* RuntimeInvoker_t957 (MethodInfo* method, void* obj, void** args);
MethodInfo m28642_MI = 
{
	"get_Current", NULL, &t3678_TI, &t957_0_0_0, RuntimeInvoker_t957, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3678_MIs[] =
{
	&m28642_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3678_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3678_0_0_0;
extern Il2CppType t3678_1_0_0;
struct t3678;
extern TypeInfo t3678_TI;
extern Il2CppGenericClass t3678_GC;
TypeInfo t3678_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3678_MIs, t3678_PIs, NULL, NULL, NULL, NULL, NULL, &t3678_TI, t3678_ITIs, NULL, &EmptyCustomAttributesCache, &t3678_TI, &t3678_0_0_0, &t3678_1_0_0, NULL, &t3678_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2790.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2790_TI;
#include "t2790MD.h"

#include "t4.h"
#include "t16.h"
#include "t8.h"
#include "t1269.h"
#include "t15.h"
#include "t17.h"
extern TypeInfo t2790_TI;
extern TypeInfo t957_TI;
extern TypeInfo t1269_TI;
#include "t1269MD.h"
#include "t14MD.h"
extern MethodInfo m16168_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21867_MI;
struct t14;
#include "t1233.h"
 int32_t m21867 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21867_MI;


extern MethodInfo m16164_MI;
 void m16164 (t2790 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16165_MI;
 t4 * m16165 (t2790 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16168(__this, &m16168_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t957_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16166_MI;
 void m16166 (t2790 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16167_MI;
 bool m16167 (t2790 * __this, MethodInfo* method){
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
extern MethodInfo m16168_MI;
 int32_t m16168 (t2790 * __this, MethodInfo* method){
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
		int32_t L_8 = m21867(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21867_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>
extern Il2CppType t14_0_0_1;
FieldInfo t2790_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2790_TI, offsetof(t2790, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2790_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2790_TI, offsetof(t2790, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2790_FIs[] =
{
	&t2790_f0_FieldInfo,
	&t2790_f1_FieldInfo,
	NULL
};
extern MethodInfo m16165_MI;
static PropertyInfo t2790____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2790_TI, "System.Collections.IEnumerator.Current", &m16165_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16168_MI;
static PropertyInfo t2790____Current_PropertyInfo = 
{
	&t2790_TI, "Current", &m16168_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2790_PIs[] =
{
	&t2790____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2790____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2790_m16164_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2790_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16164_MI = 
{
	".ctor", (methodPointerType)&m16164, &t2790_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2790_m16164_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2790_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16165_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16165, &t2790_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2790_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16166_MI = 
{
	"Dispose", (methodPointerType)&m16166, &t2790_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2790_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16167_MI = 
{
	"MoveNext", (methodPointerType)&m16167, &t2790_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2790_TI;
extern Il2CppType t957_0_0_0;
extern void* RuntimeInvoker_t957 (MethodInfo* method, void* obj, void** args);
MethodInfo m16168_MI = 
{
	"get_Current", (methodPointerType)&m16168, &t2790_TI, &t957_0_0_0, RuntimeInvoker_t957, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2790_MIs[] =
{
	&m16164_MI,
	&m16165_MI,
	&m16166_MI,
	&m16167_MI,
	&m16168_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16165_MI;
extern MethodInfo m16167_MI;
extern MethodInfo m16166_MI;
extern MethodInfo m16168_MI;
static MethodInfo* t2790_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16165_MI,
	&m16167_MI,
	&m16166_MI,
	&m16168_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3678_TI;
static TypeInfo* t2790_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3678_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3678_TI;
static Il2CppInterfaceOffsetPair t2790_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3678_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2790_0_0_0;
extern Il2CppType t2790_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2790_TI;
extern Il2CppGenericClass t2790_GC;
extern TypeInfo t14_TI;
TypeInfo t2790_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2790_MIs, t2790_PIs, t2790_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2790_TI, t2790_ITIs, t2790_VT, &EmptyCustomAttributesCache, &t2790_TI, &t2790_0_0_0, &t2790_1_0_0, t2790_IOs, &t2790_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2790)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4871_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>
extern MethodInfo m28643_MI;
static PropertyInfo t4871____Count_PropertyInfo = 
{
	&t4871_TI, "Count", &m28643_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28644_MI;
static PropertyInfo t4871____IsReadOnly_PropertyInfo = 
{
	&t4871_TI, "IsReadOnly", &m28644_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4871_PIs[] =
{
	&t4871____Count_PropertyInfo,
	&t4871____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4871_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28643_MI = 
{
	"get_Count", NULL, &t4871_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4871_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28644_MI = 
{
	"get_IsReadOnly", NULL, &t4871_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t957_0_0_0;
static ParameterInfo t4871_m28645_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t957_0_0_0},
};
extern TypeInfo t4871_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28645_MI = 
{
	"Add", NULL, &t4871_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4871_m28645_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4871_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28646_MI = 
{
	"Clear", NULL, &t4871_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t957_0_0_0;
static ParameterInfo t4871_m28647_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t957_0_0_0},
};
extern TypeInfo t4871_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28647_MI = 
{
	"Contains", NULL, &t4871_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4871_m28647_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3027_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4871_m28648_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3027_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4871_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28648_MI = 
{
	"CopyTo", NULL, &t4871_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4871_m28648_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t957_0_0_0;
static ParameterInfo t4871_m28649_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t957_0_0_0},
};
extern TypeInfo t4871_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28649_MI = 
{
	"Remove", NULL, &t4871_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4871_m28649_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4871_MIs[] =
{
	&m28643_MI,
	&m28644_MI,
	&m28645_MI,
	&m28646_MI,
	&m28647_MI,
	&m28648_MI,
	&m28649_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4873_TI;
static TypeInfo* t4871_ITIs[] = 
{
	&t591_TI,
	&t4873_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4871_0_0_0;
extern Il2CppType t4871_1_0_0;
struct t4871;
extern TypeInfo t4871_TI;
extern Il2CppGenericClass t4871_GC;
TypeInfo t4871_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4871_MIs, t4871_PIs, NULL, NULL, NULL, NULL, NULL, &t4871_TI, t4871_ITIs, NULL, &EmptyCustomAttributesCache, &t4871_TI, &t4871_0_0_0, &t4871_1_0_0, NULL, &t4871_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4873_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MethodImplAttributes>
extern TypeInfo t4873_TI;
extern Il2CppType t3678_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28650_MI = 
{
	"GetEnumerator", NULL, &t4873_TI, &t3678_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4873_MIs[] =
{
	&m28650_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4873_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4873_0_0_0;
extern Il2CppType t4873_1_0_0;
struct t4873;
extern TypeInfo t4873_TI;
extern Il2CppGenericClass t4873_GC;
TypeInfo t4873_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4873_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4873_TI, t4873_ITIs, NULL, &EmptyCustomAttributesCache, &t4873_TI, &t4873_0_0_0, &t4873_1_0_0, NULL, &t4873_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4872_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>
extern MethodInfo m28651_MI;
extern MethodInfo m28652_MI;
static PropertyInfo t4872____Item_PropertyInfo = 
{
	&t4872_TI, "Item", &m28651_MI, &m28652_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4872_PIs[] =
{
	&t4872____Item_PropertyInfo,
	NULL
};
extern Il2CppType t957_0_0_0;
static ParameterInfo t4872_m28653_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t957_0_0_0},
};
extern TypeInfo t4872_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28653_MI = 
{
	"IndexOf", NULL, &t4872_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4872_m28653_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t957_0_0_0;
static ParameterInfo t4872_m28654_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t957_0_0_0},
};
extern TypeInfo t4872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28654_MI = 
{
	"Insert", NULL, &t4872_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4872_m28654_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4872_m28655_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28655_MI = 
{
	"RemoveAt", NULL, &t4872_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4872_m28655_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4872_m28651_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4872_TI;
extern Il2CppType t957_0_0_0;
extern void* RuntimeInvoker_t957_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28651_MI = 
{
	"get_Item", NULL, &t4872_TI, &t957_0_0_0, RuntimeInvoker_t957_t16, t4872_m28651_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t957_0_0_0;
static ParameterInfo t4872_m28652_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t957_0_0_0},
};
extern TypeInfo t4872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28652_MI = 
{
	"set_Item", NULL, &t4872_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4872_m28652_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4872_MIs[] =
{
	&m28653_MI,
	&m28654_MI,
	&m28655_MI,
	&m28651_MI,
	&m28652_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4871_TI;
extern TypeInfo t4873_TI;
static TypeInfo* t4872_ITIs[] = 
{
	&t591_TI,
	&t4871_TI,
	&t4873_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4872_0_0_0;
extern Il2CppType t4872_1_0_0;
struct t4872;
extern TypeInfo t4872_TI;
extern Il2CppGenericClass t4872_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4872_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4872_MIs, t4872_PIs, NULL, NULL, NULL, NULL, NULL, &t4872_TI, t4872_ITIs, NULL, &t1400__CustomAttributeCache, &t4872_TI, &t4872_0_0_0, &t4872_1_0_0, NULL, &t4872_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3679_TI;

#include "t971.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.PInfo>
extern MethodInfo m28656_MI;
static PropertyInfo t3679____Current_PropertyInfo = 
{
	&t3679_TI, "Current", &m28656_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3679_PIs[] =
{
	&t3679____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3679_TI;
extern Il2CppType t971_0_0_0;
extern void* RuntimeInvoker_t971 (MethodInfo* method, void* obj, void** args);
MethodInfo m28656_MI = 
{
	"get_Current", NULL, &t3679_TI, &t971_0_0_0, RuntimeInvoker_t971, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3679_MIs[] =
{
	&m28656_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3679_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3679_0_0_0;
extern Il2CppType t3679_1_0_0;
struct t3679;
extern TypeInfo t3679_TI;
extern Il2CppGenericClass t3679_GC;
TypeInfo t3679_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3679_MIs, t3679_PIs, NULL, NULL, NULL, NULL, NULL, &t3679_TI, t3679_ITIs, NULL, &EmptyCustomAttributesCache, &t3679_TI, &t3679_0_0_0, &t3679_1_0_0, NULL, &t3679_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2791.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2791_TI;
#include "t2791MD.h"

extern TypeInfo t2791_TI;
extern TypeInfo t971_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16173_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21878_MI;
struct t14;
 int32_t m21878 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21878_MI;


extern MethodInfo m16169_MI;
 void m16169 (t2791 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16170_MI;
 t4 * m16170 (t2791 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16173(__this, &m16173_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t971_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16171_MI;
 void m16171 (t2791 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16172_MI;
 bool m16172 (t2791 * __this, MethodInfo* method){
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
extern MethodInfo m16173_MI;
 int32_t m16173 (t2791 * __this, MethodInfo* method){
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
		int32_t L_8 = m21878(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21878_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.PInfo>
extern Il2CppType t14_0_0_1;
FieldInfo t2791_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2791_TI, offsetof(t2791, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2791_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2791_TI, offsetof(t2791, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2791_FIs[] =
{
	&t2791_f0_FieldInfo,
	&t2791_f1_FieldInfo,
	NULL
};
extern MethodInfo m16170_MI;
static PropertyInfo t2791____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2791_TI, "System.Collections.IEnumerator.Current", &m16170_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16173_MI;
static PropertyInfo t2791____Current_PropertyInfo = 
{
	&t2791_TI, "Current", &m16173_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2791_PIs[] =
{
	&t2791____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2791____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2791_m16169_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2791_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16169_MI = 
{
	".ctor", (methodPointerType)&m16169, &t2791_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2791_m16169_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2791_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16170_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16170, &t2791_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2791_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16171_MI = 
{
	"Dispose", (methodPointerType)&m16171, &t2791_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2791_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16172_MI = 
{
	"MoveNext", (methodPointerType)&m16172, &t2791_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2791_TI;
extern Il2CppType t971_0_0_0;
extern void* RuntimeInvoker_t971 (MethodInfo* method, void* obj, void** args);
MethodInfo m16173_MI = 
{
	"get_Current", (methodPointerType)&m16173, &t2791_TI, &t971_0_0_0, RuntimeInvoker_t971, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2791_MIs[] =
{
	&m16169_MI,
	&m16170_MI,
	&m16171_MI,
	&m16172_MI,
	&m16173_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16170_MI;
extern MethodInfo m16172_MI;
extern MethodInfo m16171_MI;
extern MethodInfo m16173_MI;
static MethodInfo* t2791_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16170_MI,
	&m16172_MI,
	&m16171_MI,
	&m16173_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3679_TI;
static TypeInfo* t2791_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3679_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3679_TI;
static Il2CppInterfaceOffsetPair t2791_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3679_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2791_0_0_0;
extern Il2CppType t2791_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2791_TI;
extern Il2CppGenericClass t2791_GC;
extern TypeInfo t14_TI;
TypeInfo t2791_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2791_MIs, t2791_PIs, t2791_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2791_TI, t2791_ITIs, t2791_VT, &EmptyCustomAttributesCache, &t2791_TI, &t2791_0_0_0, &t2791_1_0_0, t2791_IOs, &t2791_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2791)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4874_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.PInfo>
extern MethodInfo m28657_MI;
static PropertyInfo t4874____Count_PropertyInfo = 
{
	&t4874_TI, "Count", &m28657_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28658_MI;
static PropertyInfo t4874____IsReadOnly_PropertyInfo = 
{
	&t4874_TI, "IsReadOnly", &m28658_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4874_PIs[] =
{
	&t4874____Count_PropertyInfo,
	&t4874____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4874_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28657_MI = 
{
	"get_Count", NULL, &t4874_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4874_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28658_MI = 
{
	"get_IsReadOnly", NULL, &t4874_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t971_0_0_0;
static ParameterInfo t4874_m28659_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t971_0_0_0},
};
extern TypeInfo t4874_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28659_MI = 
{
	"Add", NULL, &t4874_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4874_m28659_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4874_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28660_MI = 
{
	"Clear", NULL, &t4874_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t971_0_0_0;
static ParameterInfo t4874_m28661_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t971_0_0_0},
};
extern TypeInfo t4874_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28661_MI = 
{
	"Contains", NULL, &t4874_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4874_m28661_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3028_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4874_m28662_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3028_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4874_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28662_MI = 
{
	"CopyTo", NULL, &t4874_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4874_m28662_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t971_0_0_0;
static ParameterInfo t4874_m28663_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t971_0_0_0},
};
extern TypeInfo t4874_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28663_MI = 
{
	"Remove", NULL, &t4874_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4874_m28663_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4874_MIs[] =
{
	&m28657_MI,
	&m28658_MI,
	&m28659_MI,
	&m28660_MI,
	&m28661_MI,
	&m28662_MI,
	&m28663_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4876_TI;
static TypeInfo* t4874_ITIs[] = 
{
	&t591_TI,
	&t4876_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4874_0_0_0;
extern Il2CppType t4874_1_0_0;
struct t4874;
extern TypeInfo t4874_TI;
extern Il2CppGenericClass t4874_GC;
TypeInfo t4874_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4874_MIs, t4874_PIs, NULL, NULL, NULL, NULL, NULL, &t4874_TI, t4874_ITIs, NULL, &EmptyCustomAttributesCache, &t4874_TI, &t4874_0_0_0, &t4874_1_0_0, NULL, &t4874_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4876_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.PInfo>
extern TypeInfo t4876_TI;
extern Il2CppType t3679_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28664_MI = 
{
	"GetEnumerator", NULL, &t4876_TI, &t3679_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4876_MIs[] =
{
	&m28664_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4876_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4876_0_0_0;
extern Il2CppType t4876_1_0_0;
struct t4876;
extern TypeInfo t4876_TI;
extern Il2CppGenericClass t4876_GC;
TypeInfo t4876_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4876_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4876_TI, t4876_ITIs, NULL, &EmptyCustomAttributesCache, &t4876_TI, &t4876_0_0_0, &t4876_1_0_0, NULL, &t4876_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4875_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.PInfo>
extern MethodInfo m28665_MI;
extern MethodInfo m28666_MI;
static PropertyInfo t4875____Item_PropertyInfo = 
{
	&t4875_TI, "Item", &m28665_MI, &m28666_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4875_PIs[] =
{
	&t4875____Item_PropertyInfo,
	NULL
};
extern Il2CppType t971_0_0_0;
static ParameterInfo t4875_m28667_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t971_0_0_0},
};
extern TypeInfo t4875_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28667_MI = 
{
	"IndexOf", NULL, &t4875_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4875_m28667_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t971_0_0_0;
static ParameterInfo t4875_m28668_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t971_0_0_0},
};
extern TypeInfo t4875_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28668_MI = 
{
	"Insert", NULL, &t4875_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4875_m28668_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4875_m28669_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4875_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28669_MI = 
{
	"RemoveAt", NULL, &t4875_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4875_m28669_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4875_m28665_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4875_TI;
extern Il2CppType t971_0_0_0;
extern void* RuntimeInvoker_t971_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28665_MI = 
{
	"get_Item", NULL, &t4875_TI, &t971_0_0_0, RuntimeInvoker_t971_t16, t4875_m28665_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t971_0_0_0;
static ParameterInfo t4875_m28666_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t971_0_0_0},
};
extern TypeInfo t4875_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28666_MI = 
{
	"set_Item", NULL, &t4875_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4875_m28666_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4875_MIs[] =
{
	&m28667_MI,
	&m28668_MI,
	&m28669_MI,
	&m28665_MI,
	&m28666_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4874_TI;
extern TypeInfo t4876_TI;
static TypeInfo* t4875_ITIs[] = 
{
	&t591_TI,
	&t4874_TI,
	&t4876_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4875_0_0_0;
extern Il2CppType t4875_1_0_0;
struct t4875;
extern TypeInfo t4875_TI;
extern Il2CppGenericClass t4875_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4875_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4875_MIs, t4875_PIs, NULL, NULL, NULL, NULL, NULL, &t4875_TI, t4875_ITIs, NULL, &t1400__CustomAttributeCache, &t4875_TI, &t4875_0_0_0, &t4875_1_0_0, NULL, &t4875_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3680_TI;

#include "t939.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.ParameterAttributes>
extern MethodInfo m28670_MI;
static PropertyInfo t3680____Current_PropertyInfo = 
{
	&t3680_TI, "Current", &m28670_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3680_PIs[] =
{
	&t3680____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3680_TI;
extern Il2CppType t939_0_0_0;
extern void* RuntimeInvoker_t939 (MethodInfo* method, void* obj, void** args);
MethodInfo m28670_MI = 
{
	"get_Current", NULL, &t3680_TI, &t939_0_0_0, RuntimeInvoker_t939, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3680_MIs[] =
{
	&m28670_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3680_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3680_0_0_0;
extern Il2CppType t3680_1_0_0;
struct t3680;
extern TypeInfo t3680_TI;
extern Il2CppGenericClass t3680_GC;
TypeInfo t3680_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3680_MIs, t3680_PIs, NULL, NULL, NULL, NULL, NULL, &t3680_TI, t3680_ITIs, NULL, &EmptyCustomAttributesCache, &t3680_TI, &t3680_0_0_0, &t3680_1_0_0, NULL, &t3680_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2792.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2792_TI;
#include "t2792MD.h"

extern TypeInfo t2792_TI;
extern TypeInfo t939_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16178_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21889_MI;
struct t14;
 int32_t m21889 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21889_MI;


extern MethodInfo m16174_MI;
 void m16174 (t2792 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16175_MI;
 t4 * m16175 (t2792 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16178(__this, &m16178_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t939_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16176_MI;
 void m16176 (t2792 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16177_MI;
 bool m16177 (t2792 * __this, MethodInfo* method){
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
extern MethodInfo m16178_MI;
 int32_t m16178 (t2792 * __this, MethodInfo* method){
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
		int32_t L_8 = m21889(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21889_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>
extern Il2CppType t14_0_0_1;
FieldInfo t2792_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2792_TI, offsetof(t2792, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2792_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2792_TI, offsetof(t2792, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2792_FIs[] =
{
	&t2792_f0_FieldInfo,
	&t2792_f1_FieldInfo,
	NULL
};
extern MethodInfo m16175_MI;
static PropertyInfo t2792____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2792_TI, "System.Collections.IEnumerator.Current", &m16175_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16178_MI;
static PropertyInfo t2792____Current_PropertyInfo = 
{
	&t2792_TI, "Current", &m16178_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2792_PIs[] =
{
	&t2792____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2792____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2792_m16174_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2792_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16174_MI = 
{
	".ctor", (methodPointerType)&m16174, &t2792_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2792_m16174_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2792_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16175_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16175, &t2792_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2792_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16176_MI = 
{
	"Dispose", (methodPointerType)&m16176, &t2792_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2792_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16177_MI = 
{
	"MoveNext", (methodPointerType)&m16177, &t2792_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2792_TI;
extern Il2CppType t939_0_0_0;
extern void* RuntimeInvoker_t939 (MethodInfo* method, void* obj, void** args);
MethodInfo m16178_MI = 
{
	"get_Current", (methodPointerType)&m16178, &t2792_TI, &t939_0_0_0, RuntimeInvoker_t939, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2792_MIs[] =
{
	&m16174_MI,
	&m16175_MI,
	&m16176_MI,
	&m16177_MI,
	&m16178_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16175_MI;
extern MethodInfo m16177_MI;
extern MethodInfo m16176_MI;
extern MethodInfo m16178_MI;
static MethodInfo* t2792_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16175_MI,
	&m16177_MI,
	&m16176_MI,
	&m16178_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3680_TI;
static TypeInfo* t2792_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3680_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3680_TI;
static Il2CppInterfaceOffsetPair t2792_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3680_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2792_0_0_0;
extern Il2CppType t2792_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2792_TI;
extern Il2CppGenericClass t2792_GC;
extern TypeInfo t14_TI;
TypeInfo t2792_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2792_MIs, t2792_PIs, t2792_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2792_TI, t2792_ITIs, t2792_VT, &EmptyCustomAttributesCache, &t2792_TI, &t2792_0_0_0, &t2792_1_0_0, t2792_IOs, &t2792_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2792)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4877_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>
extern MethodInfo m28671_MI;
static PropertyInfo t4877____Count_PropertyInfo = 
{
	&t4877_TI, "Count", &m28671_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28672_MI;
static PropertyInfo t4877____IsReadOnly_PropertyInfo = 
{
	&t4877_TI, "IsReadOnly", &m28672_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4877_PIs[] =
{
	&t4877____Count_PropertyInfo,
	&t4877____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4877_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28671_MI = 
{
	"get_Count", NULL, &t4877_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4877_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28672_MI = 
{
	"get_IsReadOnly", NULL, &t4877_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t939_0_0_0;
static ParameterInfo t4877_m28673_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t939_0_0_0},
};
extern TypeInfo t4877_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28673_MI = 
{
	"Add", NULL, &t4877_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4877_m28673_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4877_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28674_MI = 
{
	"Clear", NULL, &t4877_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t939_0_0_0;
static ParameterInfo t4877_m28675_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t939_0_0_0},
};
extern TypeInfo t4877_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28675_MI = 
{
	"Contains", NULL, &t4877_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4877_m28675_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3029_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4877_m28676_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3029_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4877_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28676_MI = 
{
	"CopyTo", NULL, &t4877_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4877_m28676_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t939_0_0_0;
static ParameterInfo t4877_m28677_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t939_0_0_0},
};
extern TypeInfo t4877_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28677_MI = 
{
	"Remove", NULL, &t4877_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4877_m28677_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4877_MIs[] =
{
	&m28671_MI,
	&m28672_MI,
	&m28673_MI,
	&m28674_MI,
	&m28675_MI,
	&m28676_MI,
	&m28677_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4879_TI;
static TypeInfo* t4877_ITIs[] = 
{
	&t591_TI,
	&t4879_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4877_0_0_0;
extern Il2CppType t4877_1_0_0;
struct t4877;
extern TypeInfo t4877_TI;
extern Il2CppGenericClass t4877_GC;
TypeInfo t4877_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4877_MIs, t4877_PIs, NULL, NULL, NULL, NULL, NULL, &t4877_TI, t4877_ITIs, NULL, &EmptyCustomAttributesCache, &t4877_TI, &t4877_0_0_0, &t4877_1_0_0, NULL, &t4877_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4879_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterAttributes>
extern TypeInfo t4879_TI;
extern Il2CppType t3680_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28678_MI = 
{
	"GetEnumerator", NULL, &t4879_TI, &t3680_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4879_MIs[] =
{
	&m28678_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4879_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4879_0_0_0;
extern Il2CppType t4879_1_0_0;
struct t4879;
extern TypeInfo t4879_TI;
extern Il2CppGenericClass t4879_GC;
TypeInfo t4879_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4879_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4879_TI, t4879_ITIs, NULL, &EmptyCustomAttributesCache, &t4879_TI, &t4879_0_0_0, &t4879_1_0_0, NULL, &t4879_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4878_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>
extern MethodInfo m28679_MI;
extern MethodInfo m28680_MI;
static PropertyInfo t4878____Item_PropertyInfo = 
{
	&t4878_TI, "Item", &m28679_MI, &m28680_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4878_PIs[] =
{
	&t4878____Item_PropertyInfo,
	NULL
};
extern Il2CppType t939_0_0_0;
static ParameterInfo t4878_m28681_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t939_0_0_0},
};
extern TypeInfo t4878_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28681_MI = 
{
	"IndexOf", NULL, &t4878_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4878_m28681_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t939_0_0_0;
static ParameterInfo t4878_m28682_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t939_0_0_0},
};
extern TypeInfo t4878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28682_MI = 
{
	"Insert", NULL, &t4878_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4878_m28682_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4878_m28683_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28683_MI = 
{
	"RemoveAt", NULL, &t4878_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4878_m28683_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4878_m28679_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4878_TI;
extern Il2CppType t939_0_0_0;
extern void* RuntimeInvoker_t939_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28679_MI = 
{
	"get_Item", NULL, &t4878_TI, &t939_0_0_0, RuntimeInvoker_t939_t16, t4878_m28679_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t939_0_0_0;
static ParameterInfo t4878_m28680_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t939_0_0_0},
};
extern TypeInfo t4878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28680_MI = 
{
	"set_Item", NULL, &t4878_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4878_m28680_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4878_MIs[] =
{
	&m28681_MI,
	&m28682_MI,
	&m28683_MI,
	&m28679_MI,
	&m28680_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4877_TI;
extern TypeInfo t4879_TI;
static TypeInfo* t4878_ITIs[] = 
{
	&t591_TI,
	&t4877_TI,
	&t4879_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4878_0_0_0;
extern Il2CppType t4878_1_0_0;
struct t4878;
extern TypeInfo t4878_TI;
extern Il2CppGenericClass t4878_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4878_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4878_MIs, t4878_PIs, NULL, NULL, NULL, NULL, NULL, &t4878_TI, t4878_ITIs, NULL, &t1400__CustomAttributeCache, &t4878_TI, &t4878_0_0_0, &t4878_1_0_0, NULL, &t4878_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3681_TI;

#include "t950.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.ProcessorArchitecture>
extern MethodInfo m28684_MI;
static PropertyInfo t3681____Current_PropertyInfo = 
{
	&t3681_TI, "Current", &m28684_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3681_PIs[] =
{
	&t3681____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3681_TI;
extern Il2CppType t950_0_0_0;
extern void* RuntimeInvoker_t950 (MethodInfo* method, void* obj, void** args);
MethodInfo m28684_MI = 
{
	"get_Current", NULL, &t3681_TI, &t950_0_0_0, RuntimeInvoker_t950, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3681_MIs[] =
{
	&m28684_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3681_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3681_0_0_0;
extern Il2CppType t3681_1_0_0;
struct t3681;
extern TypeInfo t3681_TI;
extern Il2CppGenericClass t3681_GC;
TypeInfo t3681_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3681_MIs, t3681_PIs, NULL, NULL, NULL, NULL, NULL, &t3681_TI, t3681_ITIs, NULL, &EmptyCustomAttributesCache, &t3681_TI, &t3681_0_0_0, &t3681_1_0_0, NULL, &t3681_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2793.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2793_TI;
#include "t2793MD.h"

extern TypeInfo t2793_TI;
extern TypeInfo t950_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16183_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21900_MI;
struct t14;
 int32_t m21900 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21900_MI;


extern MethodInfo m16179_MI;
 void m16179 (t2793 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16180_MI;
 t4 * m16180 (t2793 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16183(__this, &m16183_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t950_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16181_MI;
 void m16181 (t2793 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16182_MI;
 bool m16182 (t2793 * __this, MethodInfo* method){
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
extern MethodInfo m16183_MI;
 int32_t m16183 (t2793 * __this, MethodInfo* method){
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
		int32_t L_8 = m21900(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21900_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>
extern Il2CppType t14_0_0_1;
FieldInfo t2793_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2793_TI, offsetof(t2793, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2793_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2793_TI, offsetof(t2793, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2793_FIs[] =
{
	&t2793_f0_FieldInfo,
	&t2793_f1_FieldInfo,
	NULL
};
extern MethodInfo m16180_MI;
static PropertyInfo t2793____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2793_TI, "System.Collections.IEnumerator.Current", &m16180_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16183_MI;
static PropertyInfo t2793____Current_PropertyInfo = 
{
	&t2793_TI, "Current", &m16183_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2793_PIs[] =
{
	&t2793____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2793____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2793_m16179_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2793_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16179_MI = 
{
	".ctor", (methodPointerType)&m16179, &t2793_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2793_m16179_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2793_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16180_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16180, &t2793_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2793_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16181_MI = 
{
	"Dispose", (methodPointerType)&m16181, &t2793_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2793_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16182_MI = 
{
	"MoveNext", (methodPointerType)&m16182, &t2793_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2793_TI;
extern Il2CppType t950_0_0_0;
extern void* RuntimeInvoker_t950 (MethodInfo* method, void* obj, void** args);
MethodInfo m16183_MI = 
{
	"get_Current", (methodPointerType)&m16183, &t2793_TI, &t950_0_0_0, RuntimeInvoker_t950, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2793_MIs[] =
{
	&m16179_MI,
	&m16180_MI,
	&m16181_MI,
	&m16182_MI,
	&m16183_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16180_MI;
extern MethodInfo m16182_MI;
extern MethodInfo m16181_MI;
extern MethodInfo m16183_MI;
static MethodInfo* t2793_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16180_MI,
	&m16182_MI,
	&m16181_MI,
	&m16183_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3681_TI;
static TypeInfo* t2793_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3681_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3681_TI;
static Il2CppInterfaceOffsetPair t2793_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3681_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2793_0_0_0;
extern Il2CppType t2793_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2793_TI;
extern Il2CppGenericClass t2793_GC;
extern TypeInfo t14_TI;
TypeInfo t2793_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2793_MIs, t2793_PIs, t2793_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2793_TI, t2793_ITIs, t2793_VT, &EmptyCustomAttributesCache, &t2793_TI, &t2793_0_0_0, &t2793_1_0_0, t2793_IOs, &t2793_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2793)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4880_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>
extern MethodInfo m28685_MI;
static PropertyInfo t4880____Count_PropertyInfo = 
{
	&t4880_TI, "Count", &m28685_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28686_MI;
static PropertyInfo t4880____IsReadOnly_PropertyInfo = 
{
	&t4880_TI, "IsReadOnly", &m28686_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4880_PIs[] =
{
	&t4880____Count_PropertyInfo,
	&t4880____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4880_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28685_MI = 
{
	"get_Count", NULL, &t4880_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4880_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28686_MI = 
{
	"get_IsReadOnly", NULL, &t4880_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t950_0_0_0;
static ParameterInfo t4880_m28687_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t950_0_0_0},
};
extern TypeInfo t4880_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28687_MI = 
{
	"Add", NULL, &t4880_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4880_m28687_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4880_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28688_MI = 
{
	"Clear", NULL, &t4880_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t950_0_0_0;
static ParameterInfo t4880_m28689_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t950_0_0_0},
};
extern TypeInfo t4880_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28689_MI = 
{
	"Contains", NULL, &t4880_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4880_m28689_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3030_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4880_m28690_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3030_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4880_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28690_MI = 
{
	"CopyTo", NULL, &t4880_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4880_m28690_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t950_0_0_0;
static ParameterInfo t4880_m28691_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t950_0_0_0},
};
extern TypeInfo t4880_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28691_MI = 
{
	"Remove", NULL, &t4880_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4880_m28691_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4880_MIs[] =
{
	&m28685_MI,
	&m28686_MI,
	&m28687_MI,
	&m28688_MI,
	&m28689_MI,
	&m28690_MI,
	&m28691_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4882_TI;
static TypeInfo* t4880_ITIs[] = 
{
	&t591_TI,
	&t4882_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4880_0_0_0;
extern Il2CppType t4880_1_0_0;
struct t4880;
extern TypeInfo t4880_TI;
extern Il2CppGenericClass t4880_GC;
TypeInfo t4880_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4880_MIs, t4880_PIs, NULL, NULL, NULL, NULL, NULL, &t4880_TI, t4880_ITIs, NULL, &EmptyCustomAttributesCache, &t4880_TI, &t4880_0_0_0, &t4880_1_0_0, NULL, &t4880_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4882_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ProcessorArchitecture>
extern TypeInfo t4882_TI;
extern Il2CppType t3681_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28692_MI = 
{
	"GetEnumerator", NULL, &t4882_TI, &t3681_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4882_MIs[] =
{
	&m28692_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4882_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4882_0_0_0;
extern Il2CppType t4882_1_0_0;
struct t4882;
extern TypeInfo t4882_TI;
extern Il2CppGenericClass t4882_GC;
TypeInfo t4882_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4882_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4882_TI, t4882_ITIs, NULL, &EmptyCustomAttributesCache, &t4882_TI, &t4882_0_0_0, &t4882_1_0_0, NULL, &t4882_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4881_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>
extern MethodInfo m28693_MI;
extern MethodInfo m28694_MI;
static PropertyInfo t4881____Item_PropertyInfo = 
{
	&t4881_TI, "Item", &m28693_MI, &m28694_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4881_PIs[] =
{
	&t4881____Item_PropertyInfo,
	NULL
};
extern Il2CppType t950_0_0_0;
static ParameterInfo t4881_m28695_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t950_0_0_0},
};
extern TypeInfo t4881_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28695_MI = 
{
	"IndexOf", NULL, &t4881_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4881_m28695_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t950_0_0_0;
static ParameterInfo t4881_m28696_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t950_0_0_0},
};
extern TypeInfo t4881_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28696_MI = 
{
	"Insert", NULL, &t4881_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4881_m28696_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4881_m28697_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4881_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28697_MI = 
{
	"RemoveAt", NULL, &t4881_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4881_m28697_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4881_m28693_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4881_TI;
extern Il2CppType t950_0_0_0;
extern void* RuntimeInvoker_t950_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28693_MI = 
{
	"get_Item", NULL, &t4881_TI, &t950_0_0_0, RuntimeInvoker_t950_t16, t4881_m28693_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t950_0_0_0;
static ParameterInfo t4881_m28694_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t950_0_0_0},
};
extern TypeInfo t4881_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28694_MI = 
{
	"set_Item", NULL, &t4881_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4881_m28694_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4881_MIs[] =
{
	&m28695_MI,
	&m28696_MI,
	&m28697_MI,
	&m28693_MI,
	&m28694_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4880_TI;
extern TypeInfo t4882_TI;
static TypeInfo* t4881_ITIs[] = 
{
	&t591_TI,
	&t4880_TI,
	&t4882_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4881_0_0_0;
extern Il2CppType t4881_1_0_0;
struct t4881;
extern TypeInfo t4881_TI;
extern Il2CppGenericClass t4881_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4881_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4881_MIs, t4881_PIs, NULL, NULL, NULL, NULL, NULL, &t4881_TI, t4881_ITIs, NULL, &t1400__CustomAttributeCache, &t4881_TI, &t4881_0_0_0, &t4881_1_0_0, NULL, &t4881_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3682_TI;

#include "t969.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyAttributes>
extern MethodInfo m28698_MI;
static PropertyInfo t3682____Current_PropertyInfo = 
{
	&t3682_TI, "Current", &m28698_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3682_PIs[] =
{
	&t3682____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3682_TI;
extern Il2CppType t969_0_0_0;
extern void* RuntimeInvoker_t969 (MethodInfo* method, void* obj, void** args);
MethodInfo m28698_MI = 
{
	"get_Current", NULL, &t3682_TI, &t969_0_0_0, RuntimeInvoker_t969, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3682_MIs[] =
{
	&m28698_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3682_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3682_0_0_0;
extern Il2CppType t3682_1_0_0;
struct t3682;
extern TypeInfo t3682_TI;
extern Il2CppGenericClass t3682_GC;
TypeInfo t3682_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3682_MIs, t3682_PIs, NULL, NULL, NULL, NULL, NULL, &t3682_TI, t3682_ITIs, NULL, &EmptyCustomAttributesCache, &t3682_TI, &t3682_0_0_0, &t3682_1_0_0, NULL, &t3682_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2794.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2794_TI;
#include "t2794MD.h"

extern TypeInfo t2794_TI;
extern TypeInfo t969_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16188_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21911_MI;
struct t14;
 int32_t m21911 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21911_MI;


extern MethodInfo m16184_MI;
 void m16184 (t2794 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16185_MI;
 t4 * m16185 (t2794 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16188(__this, &m16188_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t969_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16186_MI;
 void m16186 (t2794 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16187_MI;
 bool m16187 (t2794 * __this, MethodInfo* method){
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
extern MethodInfo m16188_MI;
 int32_t m16188 (t2794 * __this, MethodInfo* method){
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
		int32_t L_8 = m21911(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21911_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>
extern Il2CppType t14_0_0_1;
FieldInfo t2794_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2794_TI, offsetof(t2794, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2794_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2794_TI, offsetof(t2794, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2794_FIs[] =
{
	&t2794_f0_FieldInfo,
	&t2794_f1_FieldInfo,
	NULL
};
extern MethodInfo m16185_MI;
static PropertyInfo t2794____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2794_TI, "System.Collections.IEnumerator.Current", &m16185_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16188_MI;
static PropertyInfo t2794____Current_PropertyInfo = 
{
	&t2794_TI, "Current", &m16188_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2794_PIs[] =
{
	&t2794____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2794____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2794_m16184_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2794_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16184_MI = 
{
	".ctor", (methodPointerType)&m16184, &t2794_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2794_m16184_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2794_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16185_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16185, &t2794_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2794_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16186_MI = 
{
	"Dispose", (methodPointerType)&m16186, &t2794_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2794_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16187_MI = 
{
	"MoveNext", (methodPointerType)&m16187, &t2794_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2794_TI;
extern Il2CppType t969_0_0_0;
extern void* RuntimeInvoker_t969 (MethodInfo* method, void* obj, void** args);
MethodInfo m16188_MI = 
{
	"get_Current", (methodPointerType)&m16188, &t2794_TI, &t969_0_0_0, RuntimeInvoker_t969, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2794_MIs[] =
{
	&m16184_MI,
	&m16185_MI,
	&m16186_MI,
	&m16187_MI,
	&m16188_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16185_MI;
extern MethodInfo m16187_MI;
extern MethodInfo m16186_MI;
extern MethodInfo m16188_MI;
static MethodInfo* t2794_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16185_MI,
	&m16187_MI,
	&m16186_MI,
	&m16188_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3682_TI;
static TypeInfo* t2794_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3682_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3682_TI;
static Il2CppInterfaceOffsetPair t2794_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3682_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2794_0_0_0;
extern Il2CppType t2794_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2794_TI;
extern Il2CppGenericClass t2794_GC;
extern TypeInfo t14_TI;
TypeInfo t2794_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2794_MIs, t2794_PIs, t2794_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2794_TI, t2794_ITIs, t2794_VT, &EmptyCustomAttributesCache, &t2794_TI, &t2794_0_0_0, &t2794_1_0_0, t2794_IOs, &t2794_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2794)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4883_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>
extern MethodInfo m28699_MI;
static PropertyInfo t4883____Count_PropertyInfo = 
{
	&t4883_TI, "Count", &m28699_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28700_MI;
static PropertyInfo t4883____IsReadOnly_PropertyInfo = 
{
	&t4883_TI, "IsReadOnly", &m28700_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4883_PIs[] =
{
	&t4883____Count_PropertyInfo,
	&t4883____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4883_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28699_MI = 
{
	"get_Count", NULL, &t4883_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28700_MI = 
{
	"get_IsReadOnly", NULL, &t4883_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t969_0_0_0;
static ParameterInfo t4883_m28701_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t969_0_0_0},
};
extern TypeInfo t4883_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28701_MI = 
{
	"Add", NULL, &t4883_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4883_m28701_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4883_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28702_MI = 
{
	"Clear", NULL, &t4883_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t969_0_0_0;
static ParameterInfo t4883_m28703_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t969_0_0_0},
};
extern TypeInfo t4883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28703_MI = 
{
	"Contains", NULL, &t4883_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4883_m28703_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3031_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4883_m28704_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3031_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4883_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28704_MI = 
{
	"CopyTo", NULL, &t4883_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4883_m28704_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t969_0_0_0;
static ParameterInfo t4883_m28705_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t969_0_0_0},
};
extern TypeInfo t4883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28705_MI = 
{
	"Remove", NULL, &t4883_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4883_m28705_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4883_MIs[] =
{
	&m28699_MI,
	&m28700_MI,
	&m28701_MI,
	&m28702_MI,
	&m28703_MI,
	&m28704_MI,
	&m28705_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4885_TI;
static TypeInfo* t4883_ITIs[] = 
{
	&t591_TI,
	&t4885_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4883_0_0_0;
extern Il2CppType t4883_1_0_0;
struct t4883;
extern TypeInfo t4883_TI;
extern Il2CppGenericClass t4883_GC;
TypeInfo t4883_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4883_MIs, t4883_PIs, NULL, NULL, NULL, NULL, NULL, &t4883_TI, t4883_ITIs, NULL, &EmptyCustomAttributesCache, &t4883_TI, &t4883_0_0_0, &t4883_1_0_0, NULL, &t4883_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4885_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyAttributes>
extern TypeInfo t4885_TI;
extern Il2CppType t3682_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28706_MI = 
{
	"GetEnumerator", NULL, &t4885_TI, &t3682_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4885_MIs[] =
{
	&m28706_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4885_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4885_0_0_0;
extern Il2CppType t4885_1_0_0;
struct t4885;
extern TypeInfo t4885_TI;
extern Il2CppGenericClass t4885_GC;
TypeInfo t4885_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4885_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4885_TI, t4885_ITIs, NULL, &EmptyCustomAttributesCache, &t4885_TI, &t4885_0_0_0, &t4885_1_0_0, NULL, &t4885_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4884_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>
extern MethodInfo m28707_MI;
extern MethodInfo m28708_MI;
static PropertyInfo t4884____Item_PropertyInfo = 
{
	&t4884_TI, "Item", &m28707_MI, &m28708_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4884_PIs[] =
{
	&t4884____Item_PropertyInfo,
	NULL
};
extern Il2CppType t969_0_0_0;
static ParameterInfo t4884_m28709_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t969_0_0_0},
};
extern TypeInfo t4884_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28709_MI = 
{
	"IndexOf", NULL, &t4884_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4884_m28709_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t969_0_0_0;
static ParameterInfo t4884_m28710_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t969_0_0_0},
};
extern TypeInfo t4884_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28710_MI = 
{
	"Insert", NULL, &t4884_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4884_m28710_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4884_m28711_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4884_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28711_MI = 
{
	"RemoveAt", NULL, &t4884_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4884_m28711_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4884_m28707_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4884_TI;
extern Il2CppType t969_0_0_0;
extern void* RuntimeInvoker_t969_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28707_MI = 
{
	"get_Item", NULL, &t4884_TI, &t969_0_0_0, RuntimeInvoker_t969_t16, t4884_m28707_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t969_0_0_0;
static ParameterInfo t4884_m28708_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t969_0_0_0},
};
extern TypeInfo t4884_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28708_MI = 
{
	"set_Item", NULL, &t4884_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4884_m28708_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4884_MIs[] =
{
	&m28709_MI,
	&m28710_MI,
	&m28711_MI,
	&m28707_MI,
	&m28708_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4883_TI;
extern TypeInfo t4885_TI;
static TypeInfo* t4884_ITIs[] = 
{
	&t591_TI,
	&t4883_TI,
	&t4885_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4884_0_0_0;
extern Il2CppType t4884_1_0_0;
struct t4884;
extern TypeInfo t4884_TI;
extern Il2CppGenericClass t4884_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4884_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4884_MIs, t4884_PIs, NULL, NULL, NULL, NULL, NULL, &t4884_TI, t4884_ITIs, NULL, &t1400__CustomAttributeCache, &t4884_TI, &t4884_0_0_0, &t4884_1_0_0, NULL, &t4884_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3683_TI;

#include "t726.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.TypeAttributes>
extern MethodInfo m28712_MI;
static PropertyInfo t3683____Current_PropertyInfo = 
{
	&t3683_TI, "Current", &m28712_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3683_PIs[] =
{
	&t3683____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3683_TI;
extern Il2CppType t726_0_0_0;
extern void* RuntimeInvoker_t726 (MethodInfo* method, void* obj, void** args);
MethodInfo m28712_MI = 
{
	"get_Current", NULL, &t3683_TI, &t726_0_0_0, RuntimeInvoker_t726, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3683_MIs[] =
{
	&m28712_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3683_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3683_0_0_0;
extern Il2CppType t3683_1_0_0;
struct t3683;
extern TypeInfo t3683_TI;
extern Il2CppGenericClass t3683_GC;
TypeInfo t3683_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3683_MIs, t3683_PIs, NULL, NULL, NULL, NULL, NULL, &t3683_TI, t3683_ITIs, NULL, &EmptyCustomAttributesCache, &t3683_TI, &t3683_0_0_0, &t3683_1_0_0, NULL, &t3683_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2795.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2795_TI;
#include "t2795MD.h"

extern TypeInfo t2795_TI;
extern TypeInfo t726_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16193_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21922_MI;
struct t14;
 int32_t m21922 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21922_MI;


extern MethodInfo m16189_MI;
 void m16189 (t2795 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16190_MI;
 t4 * m16190 (t2795 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16193(__this, &m16193_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t726_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16191_MI;
 void m16191 (t2795 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16192_MI;
 bool m16192 (t2795 * __this, MethodInfo* method){
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
extern MethodInfo m16193_MI;
 int32_t m16193 (t2795 * __this, MethodInfo* method){
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
		int32_t L_8 = m21922(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21922_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>
extern Il2CppType t14_0_0_1;
FieldInfo t2795_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2795_TI, offsetof(t2795, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2795_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2795_TI, offsetof(t2795, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2795_FIs[] =
{
	&t2795_f0_FieldInfo,
	&t2795_f1_FieldInfo,
	NULL
};
extern MethodInfo m16190_MI;
static PropertyInfo t2795____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2795_TI, "System.Collections.IEnumerator.Current", &m16190_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16193_MI;
static PropertyInfo t2795____Current_PropertyInfo = 
{
	&t2795_TI, "Current", &m16193_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2795_PIs[] =
{
	&t2795____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2795____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2795_m16189_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2795_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16189_MI = 
{
	".ctor", (methodPointerType)&m16189, &t2795_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2795_m16189_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2795_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16190_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16190, &t2795_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2795_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16191_MI = 
{
	"Dispose", (methodPointerType)&m16191, &t2795_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2795_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16192_MI = 
{
	"MoveNext", (methodPointerType)&m16192, &t2795_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2795_TI;
extern Il2CppType t726_0_0_0;
extern void* RuntimeInvoker_t726 (MethodInfo* method, void* obj, void** args);
MethodInfo m16193_MI = 
{
	"get_Current", (methodPointerType)&m16193, &t2795_TI, &t726_0_0_0, RuntimeInvoker_t726, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2795_MIs[] =
{
	&m16189_MI,
	&m16190_MI,
	&m16191_MI,
	&m16192_MI,
	&m16193_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16190_MI;
extern MethodInfo m16192_MI;
extern MethodInfo m16191_MI;
extern MethodInfo m16193_MI;
static MethodInfo* t2795_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16190_MI,
	&m16192_MI,
	&m16191_MI,
	&m16193_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3683_TI;
static TypeInfo* t2795_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3683_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3683_TI;
static Il2CppInterfaceOffsetPair t2795_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3683_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2795_0_0_0;
extern Il2CppType t2795_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2795_TI;
extern Il2CppGenericClass t2795_GC;
extern TypeInfo t14_TI;
TypeInfo t2795_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2795_MIs, t2795_PIs, t2795_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2795_TI, t2795_ITIs, t2795_VT, &EmptyCustomAttributesCache, &t2795_TI, &t2795_0_0_0, &t2795_1_0_0, t2795_IOs, &t2795_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2795)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4886_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>
extern MethodInfo m28713_MI;
static PropertyInfo t4886____Count_PropertyInfo = 
{
	&t4886_TI, "Count", &m28713_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28714_MI;
static PropertyInfo t4886____IsReadOnly_PropertyInfo = 
{
	&t4886_TI, "IsReadOnly", &m28714_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4886_PIs[] =
{
	&t4886____Count_PropertyInfo,
	&t4886____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4886_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28713_MI = 
{
	"get_Count", NULL, &t4886_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4886_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28714_MI = 
{
	"get_IsReadOnly", NULL, &t4886_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t726_0_0_0;
static ParameterInfo t4886_m28715_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t726_0_0_0},
};
extern TypeInfo t4886_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28715_MI = 
{
	"Add", NULL, &t4886_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4886_m28715_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4886_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28716_MI = 
{
	"Clear", NULL, &t4886_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t726_0_0_0;
static ParameterInfo t4886_m28717_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t726_0_0_0},
};
extern TypeInfo t4886_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28717_MI = 
{
	"Contains", NULL, &t4886_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4886_m28717_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3032_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4886_m28718_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3032_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4886_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28718_MI = 
{
	"CopyTo", NULL, &t4886_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4886_m28718_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t726_0_0_0;
static ParameterInfo t4886_m28719_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t726_0_0_0},
};
extern TypeInfo t4886_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28719_MI = 
{
	"Remove", NULL, &t4886_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4886_m28719_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4886_MIs[] =
{
	&m28713_MI,
	&m28714_MI,
	&m28715_MI,
	&m28716_MI,
	&m28717_MI,
	&m28718_MI,
	&m28719_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4888_TI;
static TypeInfo* t4886_ITIs[] = 
{
	&t591_TI,
	&t4888_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4886_0_0_0;
extern Il2CppType t4886_1_0_0;
struct t4886;
extern TypeInfo t4886_TI;
extern Il2CppGenericClass t4886_GC;
TypeInfo t4886_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4886_MIs, t4886_PIs, NULL, NULL, NULL, NULL, NULL, &t4886_TI, t4886_ITIs, NULL, &EmptyCustomAttributesCache, &t4886_TI, &t4886_0_0_0, &t4886_1_0_0, NULL, &t4886_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4888_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.TypeAttributes>
extern TypeInfo t4888_TI;
extern Il2CppType t3683_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28720_MI = 
{
	"GetEnumerator", NULL, &t4888_TI, &t3683_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4888_MIs[] =
{
	&m28720_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4888_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4888_0_0_0;
extern Il2CppType t4888_1_0_0;
struct t4888;
extern TypeInfo t4888_TI;
extern Il2CppGenericClass t4888_GC;
TypeInfo t4888_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4888_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4888_TI, t4888_ITIs, NULL, &EmptyCustomAttributesCache, &t4888_TI, &t4888_0_0_0, &t4888_1_0_0, NULL, &t4888_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4887_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>
extern MethodInfo m28721_MI;
extern MethodInfo m28722_MI;
static PropertyInfo t4887____Item_PropertyInfo = 
{
	&t4887_TI, "Item", &m28721_MI, &m28722_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4887_PIs[] =
{
	&t4887____Item_PropertyInfo,
	NULL
};
extern Il2CppType t726_0_0_0;
static ParameterInfo t4887_m28723_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t726_0_0_0},
};
extern TypeInfo t4887_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28723_MI = 
{
	"IndexOf", NULL, &t4887_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4887_m28723_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t726_0_0_0;
static ParameterInfo t4887_m28724_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t726_0_0_0},
};
extern TypeInfo t4887_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28724_MI = 
{
	"Insert", NULL, &t4887_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4887_m28724_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4887_m28725_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4887_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28725_MI = 
{
	"RemoveAt", NULL, &t4887_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4887_m28725_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4887_m28721_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4887_TI;
extern Il2CppType t726_0_0_0;
extern void* RuntimeInvoker_t726_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28721_MI = 
{
	"get_Item", NULL, &t4887_TI, &t726_0_0_0, RuntimeInvoker_t726_t16, t4887_m28721_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t726_0_0_0;
static ParameterInfo t4887_m28722_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t726_0_0_0},
};
extern TypeInfo t4887_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28722_MI = 
{
	"set_Item", NULL, &t4887_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4887_m28722_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4887_MIs[] =
{
	&m28723_MI,
	&m28724_MI,
	&m28725_MI,
	&m28721_MI,
	&m28722_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4886_TI;
extern TypeInfo t4888_TI;
static TypeInfo* t4887_ITIs[] = 
{
	&t591_TI,
	&t4886_TI,
	&t4888_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4887_0_0_0;
extern Il2CppType t4887_1_0_0;
struct t4887;
extern TypeInfo t4887_TI;
extern Il2CppGenericClass t4887_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4887_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4887_MIs, t4887_PIs, NULL, NULL, NULL, NULL, NULL, &t4887_TI, t4887_ITIs, NULL, &t1400__CustomAttributeCache, &t4887_TI, &t4887_0_0_0, &t4887_1_0_0, NULL, &t4887_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3684_TI;

#include "t669.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>
extern MethodInfo m28726_MI;
static PropertyInfo t3684____Current_PropertyInfo = 
{
	&t3684_TI, "Current", &m28726_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3684_PIs[] =
{
	&t3684____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3684_TI;
extern Il2CppType t669_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28726_MI = 
{
	"get_Current", NULL, &t3684_TI, &t669_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3684_MIs[] =
{
	&m28726_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3684_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3684_0_0_0;
extern Il2CppType t3684_1_0_0;
struct t3684;
extern TypeInfo t3684_TI;
extern Il2CppGenericClass t3684_GC;
TypeInfo t3684_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3684_MIs, t3684_PIs, NULL, NULL, NULL, NULL, NULL, &t3684_TI, t3684_ITIs, NULL, &EmptyCustomAttributesCache, &t3684_TI, &t3684_0_0_0, &t3684_1_0_0, NULL, &t3684_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2796.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2796_TI;
#include "t2796MD.h"

extern TypeInfo t2796_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16198_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21933_MI;
struct t14;
struct t14;
 t4 * m16794_gshared (t14 * __this, int32_t p0, MethodInfo* method);
#define m16794(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
#define m21933(__this, p0, method) (t669 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21933_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2796_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2796_TI, offsetof(t2796, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2796_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2796_TI, offsetof(t2796, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2796_FIs[] =
{
	&t2796_f0_FieldInfo,
	&t2796_f1_FieldInfo,
	NULL
};
extern MethodInfo m16195_MI;
static PropertyInfo t2796____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2796_TI, "System.Collections.IEnumerator.Current", &m16195_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16198_MI;
static PropertyInfo t2796____Current_PropertyInfo = 
{
	&t2796_TI, "Current", &m16198_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2796_PIs[] =
{
	&t2796____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2796____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2796_m16194_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2796_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16194_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2796_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2796_m16194_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2796_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16195_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2796_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2796_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16196_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2796_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2796_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16197_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2796_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2796_TI;
extern Il2CppType t669_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16198_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2796_TI, &t669_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2796_MIs[] =
{
	&m16194_MI,
	&m16195_MI,
	&m16196_MI,
	&m16197_MI,
	&m16198_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16195_MI;
extern MethodInfo m16197_MI;
extern MethodInfo m16196_MI;
extern MethodInfo m16198_MI;
static MethodInfo* t2796_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16195_MI,
	&m16197_MI,
	&m16196_MI,
	&m16198_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3684_TI;
static TypeInfo* t2796_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3684_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3684_TI;
static Il2CppInterfaceOffsetPair t2796_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3684_TI, 7},
};
extern MethodInfo m16198_MI;
extern TypeInfo t669_TI;
extern MethodInfo m21933_MI;
static void* t2796_RGCTXData[3] = 
{
	&m16198_MI,
	&t669_TI,
	&m21933_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2796_0_0_0;
extern Il2CppType t2796_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2796_TI;
extern Il2CppGenericClass t2796_GC;
extern TypeInfo t14_TI;
TypeInfo t2796_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2796_MIs, t2796_PIs, t2796_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2796_TI, t2796_ITIs, t2796_VT, &EmptyCustomAttributesCache, &t2796_TI, &t2796_0_0_0, &t2796_1_0_0, t2796_IOs, &t2796_GC, NULL, NULL, NULL, t2796_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2796)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4889_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>
extern MethodInfo m28727_MI;
static PropertyInfo t4889____Count_PropertyInfo = 
{
	&t4889_TI, "Count", &m28727_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28728_MI;
static PropertyInfo t4889____IsReadOnly_PropertyInfo = 
{
	&t4889_TI, "IsReadOnly", &m28728_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4889_PIs[] =
{
	&t4889____Count_PropertyInfo,
	&t4889____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4889_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28727_MI = 
{
	"get_Count", NULL, &t4889_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4889_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28728_MI = 
{
	"get_IsReadOnly", NULL, &t4889_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t669_0_0_0;
static ParameterInfo t4889_m28729_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t669_0_0_0},
};
extern TypeInfo t4889_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28729_MI = 
{
	"Add", NULL, &t4889_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4889_m28729_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4889_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28730_MI = 
{
	"Clear", NULL, &t4889_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t669_0_0_0;
static ParameterInfo t4889_m28731_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t669_0_0_0},
};
extern TypeInfo t4889_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28731_MI = 
{
	"Contains", NULL, &t4889_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4889_m28731_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3033_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4889_m28732_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3033_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4889_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28732_MI = 
{
	"CopyTo", NULL, &t4889_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4889_m28732_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t669_0_0_0;
static ParameterInfo t4889_m28733_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t669_0_0_0},
};
extern TypeInfo t4889_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28733_MI = 
{
	"Remove", NULL, &t4889_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4889_m28733_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4889_MIs[] =
{
	&m28727_MI,
	&m28728_MI,
	&m28729_MI,
	&m28730_MI,
	&m28731_MI,
	&m28732_MI,
	&m28733_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4891_TI;
static TypeInfo* t4889_ITIs[] = 
{
	&t591_TI,
	&t4891_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4889_0_0_0;
extern Il2CppType t4889_1_0_0;
struct t4889;
extern TypeInfo t4889_TI;
extern Il2CppGenericClass t4889_GC;
TypeInfo t4889_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4889_MIs, t4889_PIs, NULL, NULL, NULL, NULL, NULL, &t4889_TI, t4889_ITIs, NULL, &EmptyCustomAttributesCache, &t4889_TI, &t4889_0_0_0, &t4889_1_0_0, NULL, &t4889_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4891_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Resources.NeutralResourcesLanguageAttribute>
extern TypeInfo t4891_TI;
extern Il2CppType t3684_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28734_MI = 
{
	"GetEnumerator", NULL, &t4891_TI, &t3684_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4891_MIs[] =
{
	&m28734_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4891_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4891_0_0_0;
extern Il2CppType t4891_1_0_0;
struct t4891;
extern TypeInfo t4891_TI;
extern Il2CppGenericClass t4891_GC;
TypeInfo t4891_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4891_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4891_TI, t4891_ITIs, NULL, &EmptyCustomAttributesCache, &t4891_TI, &t4891_0_0_0, &t4891_1_0_0, NULL, &t4891_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4890_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>
extern MethodInfo m28735_MI;
extern MethodInfo m28736_MI;
static PropertyInfo t4890____Item_PropertyInfo = 
{
	&t4890_TI, "Item", &m28735_MI, &m28736_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4890_PIs[] =
{
	&t4890____Item_PropertyInfo,
	NULL
};
extern Il2CppType t669_0_0_0;
static ParameterInfo t4890_m28737_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t669_0_0_0},
};
extern TypeInfo t4890_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28737_MI = 
{
	"IndexOf", NULL, &t4890_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4890_m28737_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t669_0_0_0;
static ParameterInfo t4890_m28738_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t669_0_0_0},
};
extern TypeInfo t4890_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28738_MI = 
{
	"Insert", NULL, &t4890_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4890_m28738_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4890_m28739_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4890_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28739_MI = 
{
	"RemoveAt", NULL, &t4890_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4890_m28739_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4890_m28735_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4890_TI;
extern Il2CppType t669_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28735_MI = 
{
	"get_Item", NULL, &t4890_TI, &t669_0_0_0, RuntimeInvoker_t4_t16, t4890_m28735_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t669_0_0_0;
static ParameterInfo t4890_m28736_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t669_0_0_0},
};
extern TypeInfo t4890_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28736_MI = 
{
	"set_Item", NULL, &t4890_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4890_m28736_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4890_MIs[] =
{
	&m28737_MI,
	&m28738_MI,
	&m28739_MI,
	&m28735_MI,
	&m28736_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4889_TI;
extern TypeInfo t4891_TI;
static TypeInfo* t4890_ITIs[] = 
{
	&t591_TI,
	&t4889_TI,
	&t4891_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4890_0_0_0;
extern Il2CppType t4890_1_0_0;
struct t4890;
extern TypeInfo t4890_TI;
extern Il2CppGenericClass t4890_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4890_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4890_MIs, t4890_PIs, NULL, NULL, NULL, NULL, NULL, &t4890_TI, t4890_ITIs, NULL, &t1400__CustomAttributeCache, &t4890_TI, &t4890_0_0_0, &t4890_1_0_0, NULL, &t4890_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3685_TI;

#include "t667.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Resources.SatelliteContractVersionAttribute>
extern MethodInfo m28740_MI;
static PropertyInfo t3685____Current_PropertyInfo = 
{
	&t3685_TI, "Current", &m28740_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3685_PIs[] =
{
	&t3685____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3685_TI;
extern Il2CppType t667_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28740_MI = 
{
	"get_Current", NULL, &t3685_TI, &t667_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3685_MIs[] =
{
	&m28740_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3685_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3685_0_0_0;
extern Il2CppType t3685_1_0_0;
struct t3685;
extern TypeInfo t3685_TI;
extern Il2CppGenericClass t3685_GC;
TypeInfo t3685_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3685_MIs, t3685_PIs, NULL, NULL, NULL, NULL, NULL, &t3685_TI, t3685_ITIs, NULL, &EmptyCustomAttributesCache, &t3685_TI, &t3685_0_0_0, &t3685_1_0_0, NULL, &t3685_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2797.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2797_TI;
#include "t2797MD.h"

extern TypeInfo t2797_TI;
extern TypeInfo t667_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16203_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21944_MI;
struct t14;
#define m21944(__this, p0, method) (t667 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21944_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2797_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2797_TI, offsetof(t2797, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2797_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2797_TI, offsetof(t2797, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2797_FIs[] =
{
	&t2797_f0_FieldInfo,
	&t2797_f1_FieldInfo,
	NULL
};
extern MethodInfo m16200_MI;
static PropertyInfo t2797____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2797_TI, "System.Collections.IEnumerator.Current", &m16200_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16203_MI;
static PropertyInfo t2797____Current_PropertyInfo = 
{
	&t2797_TI, "Current", &m16203_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2797_PIs[] =
{
	&t2797____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2797____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2797_m16199_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2797_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16199_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2797_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2797_m16199_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2797_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16200_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2797_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2797_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16201_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2797_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2797_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16202_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2797_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2797_TI;
extern Il2CppType t667_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16203_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2797_TI, &t667_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2797_MIs[] =
{
	&m16199_MI,
	&m16200_MI,
	&m16201_MI,
	&m16202_MI,
	&m16203_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16200_MI;
extern MethodInfo m16202_MI;
extern MethodInfo m16201_MI;
extern MethodInfo m16203_MI;
static MethodInfo* t2797_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16200_MI,
	&m16202_MI,
	&m16201_MI,
	&m16203_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3685_TI;
static TypeInfo* t2797_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3685_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3685_TI;
static Il2CppInterfaceOffsetPair t2797_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3685_TI, 7},
};
extern MethodInfo m16203_MI;
extern TypeInfo t667_TI;
extern MethodInfo m21944_MI;
static void* t2797_RGCTXData[3] = 
{
	&m16203_MI,
	&t667_TI,
	&m21944_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2797_0_0_0;
extern Il2CppType t2797_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2797_TI;
extern Il2CppGenericClass t2797_GC;
extern TypeInfo t14_TI;
TypeInfo t2797_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2797_MIs, t2797_PIs, t2797_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2797_TI, t2797_ITIs, t2797_VT, &EmptyCustomAttributesCache, &t2797_TI, &t2797_0_0_0, &t2797_1_0_0, t2797_IOs, &t2797_GC, NULL, NULL, NULL, t2797_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2797)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4892_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>
extern MethodInfo m28741_MI;
static PropertyInfo t4892____Count_PropertyInfo = 
{
	&t4892_TI, "Count", &m28741_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28742_MI;
static PropertyInfo t4892____IsReadOnly_PropertyInfo = 
{
	&t4892_TI, "IsReadOnly", &m28742_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4892_PIs[] =
{
	&t4892____Count_PropertyInfo,
	&t4892____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4892_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28741_MI = 
{
	"get_Count", NULL, &t4892_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4892_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28742_MI = 
{
	"get_IsReadOnly", NULL, &t4892_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t667_0_0_0;
static ParameterInfo t4892_m28743_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t667_0_0_0},
};
extern TypeInfo t4892_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28743_MI = 
{
	"Add", NULL, &t4892_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4892_m28743_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4892_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28744_MI = 
{
	"Clear", NULL, &t4892_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t667_0_0_0;
static ParameterInfo t4892_m28745_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t667_0_0_0},
};
extern TypeInfo t4892_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28745_MI = 
{
	"Contains", NULL, &t4892_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4892_m28745_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3034_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4892_m28746_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3034_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4892_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28746_MI = 
{
	"CopyTo", NULL, &t4892_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4892_m28746_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t667_0_0_0;
static ParameterInfo t4892_m28747_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t667_0_0_0},
};
extern TypeInfo t4892_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28747_MI = 
{
	"Remove", NULL, &t4892_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4892_m28747_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4892_MIs[] =
{
	&m28741_MI,
	&m28742_MI,
	&m28743_MI,
	&m28744_MI,
	&m28745_MI,
	&m28746_MI,
	&m28747_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4894_TI;
static TypeInfo* t4892_ITIs[] = 
{
	&t591_TI,
	&t4894_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4892_0_0_0;
extern Il2CppType t4892_1_0_0;
struct t4892;
extern TypeInfo t4892_TI;
extern Il2CppGenericClass t4892_GC;
TypeInfo t4892_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4892_MIs, t4892_PIs, NULL, NULL, NULL, NULL, NULL, &t4892_TI, t4892_ITIs, NULL, &EmptyCustomAttributesCache, &t4892_TI, &t4892_0_0_0, &t4892_1_0_0, NULL, &t4892_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4894_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Resources.SatelliteContractVersionAttribute>
extern TypeInfo t4894_TI;
extern Il2CppType t3685_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28748_MI = 
{
	"GetEnumerator", NULL, &t4894_TI, &t3685_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4894_MIs[] =
{
	&m28748_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4894_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4894_0_0_0;
extern Il2CppType t4894_1_0_0;
struct t4894;
extern TypeInfo t4894_TI;
extern Il2CppGenericClass t4894_GC;
TypeInfo t4894_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4894_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4894_TI, t4894_ITIs, NULL, &EmptyCustomAttributesCache, &t4894_TI, &t4894_0_0_0, &t4894_1_0_0, NULL, &t4894_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4893_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>
extern MethodInfo m28749_MI;
extern MethodInfo m28750_MI;
static PropertyInfo t4893____Item_PropertyInfo = 
{
	&t4893_TI, "Item", &m28749_MI, &m28750_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4893_PIs[] =
{
	&t4893____Item_PropertyInfo,
	NULL
};
extern Il2CppType t667_0_0_0;
static ParameterInfo t4893_m28751_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t667_0_0_0},
};
extern TypeInfo t4893_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28751_MI = 
{
	"IndexOf", NULL, &t4893_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4893_m28751_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t667_0_0_0;
static ParameterInfo t4893_m28752_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t667_0_0_0},
};
extern TypeInfo t4893_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28752_MI = 
{
	"Insert", NULL, &t4893_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4893_m28752_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4893_m28753_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4893_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28753_MI = 
{
	"RemoveAt", NULL, &t4893_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4893_m28753_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4893_m28749_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4893_TI;
extern Il2CppType t667_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28749_MI = 
{
	"get_Item", NULL, &t4893_TI, &t667_0_0_0, RuntimeInvoker_t4_t16, t4893_m28749_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t667_0_0_0;
static ParameterInfo t4893_m28750_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t667_0_0_0},
};
extern TypeInfo t4893_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28750_MI = 
{
	"set_Item", NULL, &t4893_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4893_m28750_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4893_MIs[] =
{
	&m28751_MI,
	&m28752_MI,
	&m28753_MI,
	&m28749_MI,
	&m28750_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4892_TI;
extern TypeInfo t4894_TI;
static TypeInfo* t4893_ITIs[] = 
{
	&t591_TI,
	&t4892_TI,
	&t4894_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4893_0_0_0;
extern Il2CppType t4893_1_0_0;
struct t4893;
extern TypeInfo t4893_TI;
extern Il2CppGenericClass t4893_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4893_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4893_MIs, t4893_PIs, NULL, NULL, NULL, NULL, NULL, &t4893_TI, t4893_ITIs, NULL, &t1400__CustomAttributeCache, &t4893_TI, &t4893_0_0_0, &t4893_1_0_0, NULL, &t4893_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3686_TI;

#include "t978.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern MethodInfo m28754_MI;
static PropertyInfo t3686____Current_PropertyInfo = 
{
	&t3686_TI, "Current", &m28754_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3686_PIs[] =
{
	&t3686____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3686_TI;
extern Il2CppType t978_0_0_0;
extern void* RuntimeInvoker_t978 (MethodInfo* method, void* obj, void** args);
MethodInfo m28754_MI = 
{
	"get_Current", NULL, &t3686_TI, &t978_0_0_0, RuntimeInvoker_t978, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3686_MIs[] =
{
	&m28754_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3686_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3686_0_0_0;
extern Il2CppType t3686_1_0_0;
struct t3686;
extern TypeInfo t3686_TI;
extern Il2CppGenericClass t3686_GC;
TypeInfo t3686_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3686_MIs, t3686_PIs, NULL, NULL, NULL, NULL, NULL, &t3686_TI, t3686_ITIs, NULL, &EmptyCustomAttributesCache, &t3686_TI, &t3686_0_0_0, &t3686_1_0_0, NULL, &t3686_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2798.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2798_TI;
#include "t2798MD.h"

extern TypeInfo t2798_TI;
extern TypeInfo t978_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16208_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21955_MI;
struct t14;
 int32_t m21955 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21955_MI;


extern MethodInfo m16204_MI;
 void m16204 (t2798 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16205_MI;
 t4 * m16205 (t2798 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16208(__this, &m16208_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t978_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16206_MI;
 void m16206 (t2798 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16207_MI;
 bool m16207 (t2798 * __this, MethodInfo* method){
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
extern MethodInfo m16208_MI;
 int32_t m16208 (t2798 * __this, MethodInfo* method){
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
		int32_t L_8 = m21955(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21955_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern Il2CppType t14_0_0_1;
FieldInfo t2798_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2798_TI, offsetof(t2798, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2798_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2798_TI, offsetof(t2798, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2798_FIs[] =
{
	&t2798_f0_FieldInfo,
	&t2798_f1_FieldInfo,
	NULL
};
extern MethodInfo m16205_MI;
static PropertyInfo t2798____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2798_TI, "System.Collections.IEnumerator.Current", &m16205_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16208_MI;
static PropertyInfo t2798____Current_PropertyInfo = 
{
	&t2798_TI, "Current", &m16208_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2798_PIs[] =
{
	&t2798____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2798____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2798_m16204_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2798_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16204_MI = 
{
	".ctor", (methodPointerType)&m16204, &t2798_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2798_m16204_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2798_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16205_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16205, &t2798_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2798_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16206_MI = 
{
	"Dispose", (methodPointerType)&m16206, &t2798_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2798_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16207_MI = 
{
	"MoveNext", (methodPointerType)&m16207, &t2798_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2798_TI;
extern Il2CppType t978_0_0_0;
extern void* RuntimeInvoker_t978 (MethodInfo* method, void* obj, void** args);
MethodInfo m16208_MI = 
{
	"get_Current", (methodPointerType)&m16208, &t2798_TI, &t978_0_0_0, RuntimeInvoker_t978, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2798_MIs[] =
{
	&m16204_MI,
	&m16205_MI,
	&m16206_MI,
	&m16207_MI,
	&m16208_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16205_MI;
extern MethodInfo m16207_MI;
extern MethodInfo m16206_MI;
extern MethodInfo m16208_MI;
static MethodInfo* t2798_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16205_MI,
	&m16207_MI,
	&m16206_MI,
	&m16208_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3686_TI;
static TypeInfo* t2798_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3686_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3686_TI;
static Il2CppInterfaceOffsetPair t2798_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3686_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2798_0_0_0;
extern Il2CppType t2798_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2798_TI;
extern Il2CppGenericClass t2798_GC;
extern TypeInfo t14_TI;
TypeInfo t2798_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2798_MIs, t2798_PIs, t2798_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2798_TI, t2798_ITIs, t2798_VT, &EmptyCustomAttributesCache, &t2798_TI, &t2798_0_0_0, &t2798_1_0_0, t2798_IOs, &t2798_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2798)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4895_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern MethodInfo m28755_MI;
static PropertyInfo t4895____Count_PropertyInfo = 
{
	&t4895_TI, "Count", &m28755_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28756_MI;
static PropertyInfo t4895____IsReadOnly_PropertyInfo = 
{
	&t4895_TI, "IsReadOnly", &m28756_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4895_PIs[] =
{
	&t4895____Count_PropertyInfo,
	&t4895____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4895_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28755_MI = 
{
	"get_Count", NULL, &t4895_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4895_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28756_MI = 
{
	"get_IsReadOnly", NULL, &t4895_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t978_0_0_0;
static ParameterInfo t4895_m28757_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t978_0_0_0},
};
extern TypeInfo t4895_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28757_MI = 
{
	"Add", NULL, &t4895_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4895_m28757_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4895_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28758_MI = 
{
	"Clear", NULL, &t4895_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t978_0_0_0;
static ParameterInfo t4895_m28759_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t978_0_0_0},
};
extern TypeInfo t4895_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28759_MI = 
{
	"Contains", NULL, &t4895_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4895_m28759_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3035_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4895_m28760_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3035_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4895_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28760_MI = 
{
	"CopyTo", NULL, &t4895_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4895_m28760_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t978_0_0_0;
static ParameterInfo t4895_m28761_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t978_0_0_0},
};
extern TypeInfo t4895_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28761_MI = 
{
	"Remove", NULL, &t4895_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4895_m28761_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4895_MIs[] =
{
	&m28755_MI,
	&m28756_MI,
	&m28757_MI,
	&m28758_MI,
	&m28759_MI,
	&m28760_MI,
	&m28761_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4897_TI;
static TypeInfo* t4895_ITIs[] = 
{
	&t591_TI,
	&t4897_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4895_0_0_0;
extern Il2CppType t4895_1_0_0;
struct t4895;
extern TypeInfo t4895_TI;
extern Il2CppGenericClass t4895_GC;
TypeInfo t4895_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4895_MIs, t4895_PIs, NULL, NULL, NULL, NULL, NULL, &t4895_TI, t4895_ITIs, NULL, &EmptyCustomAttributesCache, &t4895_TI, &t4895_0_0_0, &t4895_1_0_0, NULL, &t4895_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4897_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern TypeInfo t4897_TI;
extern Il2CppType t3686_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28762_MI = 
{
	"GetEnumerator", NULL, &t4897_TI, &t3686_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4897_MIs[] =
{
	&m28762_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4897_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4897_0_0_0;
extern Il2CppType t4897_1_0_0;
struct t4897;
extern TypeInfo t4897_TI;
extern Il2CppGenericClass t4897_GC;
TypeInfo t4897_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4897_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4897_TI, t4897_ITIs, NULL, &EmptyCustomAttributesCache, &t4897_TI, &t4897_0_0_0, &t4897_1_0_0, NULL, &t4897_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4896_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern MethodInfo m28763_MI;
extern MethodInfo m28764_MI;
static PropertyInfo t4896____Item_PropertyInfo = 
{
	&t4896_TI, "Item", &m28763_MI, &m28764_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4896_PIs[] =
{
	&t4896____Item_PropertyInfo,
	NULL
};
extern Il2CppType t978_0_0_0;
static ParameterInfo t4896_m28765_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t978_0_0_0},
};
extern TypeInfo t4896_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28765_MI = 
{
	"IndexOf", NULL, &t4896_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4896_m28765_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t978_0_0_0;
static ParameterInfo t4896_m28766_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t978_0_0_0},
};
extern TypeInfo t4896_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28766_MI = 
{
	"Insert", NULL, &t4896_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4896_m28766_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4896_m28767_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4896_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28767_MI = 
{
	"RemoveAt", NULL, &t4896_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4896_m28767_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4896_m28763_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4896_TI;
extern Il2CppType t978_0_0_0;
extern void* RuntimeInvoker_t978_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28763_MI = 
{
	"get_Item", NULL, &t4896_TI, &t978_0_0_0, RuntimeInvoker_t978_t16, t4896_m28763_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t978_0_0_0;
static ParameterInfo t4896_m28764_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t978_0_0_0},
};
extern TypeInfo t4896_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28764_MI = 
{
	"set_Item", NULL, &t4896_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4896_m28764_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4896_MIs[] =
{
	&m28765_MI,
	&m28766_MI,
	&m28767_MI,
	&m28763_MI,
	&m28764_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4895_TI;
extern TypeInfo t4897_TI;
static TypeInfo* t4896_ITIs[] = 
{
	&t591_TI,
	&t4895_TI,
	&t4897_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4896_0_0_0;
extern Il2CppType t4896_1_0_0;
struct t4896;
extern TypeInfo t4896_TI;
extern Il2CppGenericClass t4896_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4896_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4896_MIs, t4896_PIs, NULL, NULL, NULL, NULL, NULL, &t4896_TI, t4896_ITIs, NULL, &t1400__CustomAttributeCache, &t4896_TI, &t4896_0_0_0, &t4896_1_0_0, NULL, &t4896_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3687_TI;

#include "t672.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern MethodInfo m28768_MI;
static PropertyInfo t3687____Current_PropertyInfo = 
{
	&t3687_TI, "Current", &m28768_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3687_PIs[] =
{
	&t3687____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3687_TI;
extern Il2CppType t672_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28768_MI = 
{
	"get_Current", NULL, &t3687_TI, &t672_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3687_MIs[] =
{
	&m28768_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3687_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3687_0_0_0;
extern Il2CppType t3687_1_0_0;
struct t3687;
extern TypeInfo t3687_TI;
extern Il2CppGenericClass t3687_GC;
TypeInfo t3687_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3687_MIs, t3687_PIs, NULL, NULL, NULL, NULL, NULL, &t3687_TI, t3687_ITIs, NULL, &EmptyCustomAttributesCache, &t3687_TI, &t3687_0_0_0, &t3687_1_0_0, NULL, &t3687_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2799.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2799_TI;
#include "t2799MD.h"

extern TypeInfo t2799_TI;
extern TypeInfo t672_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16213_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21966_MI;
struct t14;
#define m21966(__this, p0, method) (t672 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21966_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2799_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2799_TI, offsetof(t2799, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2799_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2799_TI, offsetof(t2799, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2799_FIs[] =
{
	&t2799_f0_FieldInfo,
	&t2799_f1_FieldInfo,
	NULL
};
extern MethodInfo m16210_MI;
static PropertyInfo t2799____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2799_TI, "System.Collections.IEnumerator.Current", &m16210_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16213_MI;
static PropertyInfo t2799____Current_PropertyInfo = 
{
	&t2799_TI, "Current", &m16213_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2799_PIs[] =
{
	&t2799____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2799____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2799_m16209_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2799_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16209_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2799_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2799_m16209_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2799_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16210_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2799_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2799_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16211_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2799_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2799_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16212_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2799_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2799_TI;
extern Il2CppType t672_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16213_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2799_TI, &t672_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2799_MIs[] =
{
	&m16209_MI,
	&m16210_MI,
	&m16211_MI,
	&m16212_MI,
	&m16213_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16210_MI;
extern MethodInfo m16212_MI;
extern MethodInfo m16211_MI;
extern MethodInfo m16213_MI;
static MethodInfo* t2799_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16210_MI,
	&m16212_MI,
	&m16211_MI,
	&m16213_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3687_TI;
static TypeInfo* t2799_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3687_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3687_TI;
static Il2CppInterfaceOffsetPair t2799_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3687_TI, 7},
};
extern MethodInfo m16213_MI;
extern TypeInfo t672_TI;
extern MethodInfo m21966_MI;
static void* t2799_RGCTXData[3] = 
{
	&m16213_MI,
	&t672_TI,
	&m21966_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2799_0_0_0;
extern Il2CppType t2799_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2799_TI;
extern Il2CppGenericClass t2799_GC;
extern TypeInfo t14_TI;
TypeInfo t2799_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2799_MIs, t2799_PIs, t2799_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2799_TI, t2799_ITIs, t2799_VT, &EmptyCustomAttributesCache, &t2799_TI, &t2799_0_0_0, &t2799_1_0_0, t2799_IOs, &t2799_GC, NULL, NULL, NULL, t2799_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2799)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4898_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern MethodInfo m28769_MI;
static PropertyInfo t4898____Count_PropertyInfo = 
{
	&t4898_TI, "Count", &m28769_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28770_MI;
static PropertyInfo t4898____IsReadOnly_PropertyInfo = 
{
	&t4898_TI, "IsReadOnly", &m28770_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4898_PIs[] =
{
	&t4898____Count_PropertyInfo,
	&t4898____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4898_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28769_MI = 
{
	"get_Count", NULL, &t4898_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4898_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28770_MI = 
{
	"get_IsReadOnly", NULL, &t4898_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t672_0_0_0;
static ParameterInfo t4898_m28771_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t672_0_0_0},
};
extern TypeInfo t4898_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28771_MI = 
{
	"Add", NULL, &t4898_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4898_m28771_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4898_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28772_MI = 
{
	"Clear", NULL, &t4898_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t672_0_0_0;
static ParameterInfo t4898_m28773_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t672_0_0_0},
};
extern TypeInfo t4898_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28773_MI = 
{
	"Contains", NULL, &t4898_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4898_m28773_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3036_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4898_m28774_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3036_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4898_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28774_MI = 
{
	"CopyTo", NULL, &t4898_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4898_m28774_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t672_0_0_0;
static ParameterInfo t4898_m28775_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t672_0_0_0},
};
extern TypeInfo t4898_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28775_MI = 
{
	"Remove", NULL, &t4898_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4898_m28775_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4898_MIs[] =
{
	&m28769_MI,
	&m28770_MI,
	&m28771_MI,
	&m28772_MI,
	&m28773_MI,
	&m28774_MI,
	&m28775_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4900_TI;
static TypeInfo* t4898_ITIs[] = 
{
	&t591_TI,
	&t4900_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4898_0_0_0;
extern Il2CppType t4898_1_0_0;
struct t4898;
extern TypeInfo t4898_TI;
extern Il2CppGenericClass t4898_GC;
TypeInfo t4898_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4898_MIs, t4898_PIs, NULL, NULL, NULL, NULL, NULL, &t4898_TI, t4898_ITIs, NULL, &EmptyCustomAttributesCache, &t4898_TI, &t4898_0_0_0, &t4898_1_0_0, NULL, &t4898_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4900_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern TypeInfo t4900_TI;
extern Il2CppType t3687_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28776_MI = 
{
	"GetEnumerator", NULL, &t4900_TI, &t3687_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4900_MIs[] =
{
	&m28776_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4900_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4900_0_0_0;
extern Il2CppType t4900_1_0_0;
struct t4900;
extern TypeInfo t4900_TI;
extern Il2CppGenericClass t4900_GC;
TypeInfo t4900_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4900_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4900_TI, t4900_ITIs, NULL, &EmptyCustomAttributesCache, &t4900_TI, &t4900_0_0_0, &t4900_1_0_0, NULL, &t4900_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4899_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern MethodInfo m28777_MI;
extern MethodInfo m28778_MI;
static PropertyInfo t4899____Item_PropertyInfo = 
{
	&t4899_TI, "Item", &m28777_MI, &m28778_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4899_PIs[] =
{
	&t4899____Item_PropertyInfo,
	NULL
};
extern Il2CppType t672_0_0_0;
static ParameterInfo t4899_m28779_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t672_0_0_0},
};
extern TypeInfo t4899_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28779_MI = 
{
	"IndexOf", NULL, &t4899_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4899_m28779_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t672_0_0_0;
static ParameterInfo t4899_m28780_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t672_0_0_0},
};
extern TypeInfo t4899_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28780_MI = 
{
	"Insert", NULL, &t4899_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4899_m28780_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4899_m28781_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4899_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28781_MI = 
{
	"RemoveAt", NULL, &t4899_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4899_m28781_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4899_m28777_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4899_TI;
extern Il2CppType t672_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28777_MI = 
{
	"get_Item", NULL, &t4899_TI, &t672_0_0_0, RuntimeInvoker_t4_t16, t4899_m28777_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t672_0_0_0;
static ParameterInfo t4899_m28778_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t672_0_0_0},
};
extern TypeInfo t4899_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28778_MI = 
{
	"set_Item", NULL, &t4899_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4899_m28778_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4899_MIs[] =
{
	&m28779_MI,
	&m28780_MI,
	&m28781_MI,
	&m28777_MI,
	&m28778_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4898_TI;
extern TypeInfo t4900_TI;
static TypeInfo* t4899_ITIs[] = 
{
	&t591_TI,
	&t4898_TI,
	&t4900_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4899_0_0_0;
extern Il2CppType t4899_1_0_0;
struct t4899;
extern TypeInfo t4899_TI;
extern Il2CppGenericClass t4899_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4899_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4899_MIs, t4899_PIs, NULL, NULL, NULL, NULL, NULL, &t4899_TI, t4899_ITIs, NULL, &t1400__CustomAttributeCache, &t4899_TI, &t4899_0_0_0, &t4899_1_0_0, NULL, &t4899_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3688_TI;

#include "t979.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern MethodInfo m28782_MI;
static PropertyInfo t3688____Current_PropertyInfo = 
{
	&t3688_TI, "Current", &m28782_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3688_PIs[] =
{
	&t3688____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3688_TI;
extern Il2CppType t979_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28782_MI = 
{
	"get_Current", NULL, &t3688_TI, &t979_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3688_MIs[] =
{
	&m28782_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3688_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3688_0_0_0;
extern Il2CppType t3688_1_0_0;
struct t3688;
extern TypeInfo t3688_TI;
extern Il2CppGenericClass t3688_GC;
TypeInfo t3688_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3688_MIs, t3688_PIs, NULL, NULL, NULL, NULL, NULL, &t3688_TI, t3688_ITIs, NULL, &EmptyCustomAttributesCache, &t3688_TI, &t3688_0_0_0, &t3688_1_0_0, NULL, &t3688_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2800.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2800_TI;
#include "t2800MD.h"

extern TypeInfo t2800_TI;
extern TypeInfo t979_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16218_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21977_MI;
struct t14;
#define m21977(__this, p0, method) (t979 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21977_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2800_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2800_TI, offsetof(t2800, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2800_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2800_TI, offsetof(t2800, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2800_FIs[] =
{
	&t2800_f0_FieldInfo,
	&t2800_f1_FieldInfo,
	NULL
};
extern MethodInfo m16215_MI;
static PropertyInfo t2800____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2800_TI, "System.Collections.IEnumerator.Current", &m16215_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16218_MI;
static PropertyInfo t2800____Current_PropertyInfo = 
{
	&t2800_TI, "Current", &m16218_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2800_PIs[] =
{
	&t2800____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2800____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2800_m16214_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2800_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16214_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2800_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2800_m16214_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2800_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16215_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2800_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2800_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16216_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2800_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2800_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16217_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2800_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2800_TI;
extern Il2CppType t979_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16218_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2800_TI, &t979_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2800_MIs[] =
{
	&m16214_MI,
	&m16215_MI,
	&m16216_MI,
	&m16217_MI,
	&m16218_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16215_MI;
extern MethodInfo m16217_MI;
extern MethodInfo m16216_MI;
extern MethodInfo m16218_MI;
static MethodInfo* t2800_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16215_MI,
	&m16217_MI,
	&m16216_MI,
	&m16218_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3688_TI;
static TypeInfo* t2800_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3688_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3688_TI;
static Il2CppInterfaceOffsetPair t2800_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3688_TI, 7},
};
extern MethodInfo m16218_MI;
extern TypeInfo t979_TI;
extern MethodInfo m21977_MI;
static void* t2800_RGCTXData[3] = 
{
	&m16218_MI,
	&t979_TI,
	&m21977_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2800_0_0_0;
extern Il2CppType t2800_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2800_TI;
extern Il2CppGenericClass t2800_GC;
extern TypeInfo t14_TI;
TypeInfo t2800_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2800_MIs, t2800_PIs, t2800_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2800_TI, t2800_ITIs, t2800_VT, &EmptyCustomAttributesCache, &t2800_TI, &t2800_0_0_0, &t2800_1_0_0, t2800_IOs, &t2800_GC, NULL, NULL, NULL, t2800_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2800)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4901_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern MethodInfo m28783_MI;
static PropertyInfo t4901____Count_PropertyInfo = 
{
	&t4901_TI, "Count", &m28783_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28784_MI;
static PropertyInfo t4901____IsReadOnly_PropertyInfo = 
{
	&t4901_TI, "IsReadOnly", &m28784_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4901_PIs[] =
{
	&t4901____Count_PropertyInfo,
	&t4901____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4901_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28783_MI = 
{
	"get_Count", NULL, &t4901_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4901_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28784_MI = 
{
	"get_IsReadOnly", NULL, &t4901_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t979_0_0_0;
static ParameterInfo t4901_m28785_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t979_0_0_0},
};
extern TypeInfo t4901_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28785_MI = 
{
	"Add", NULL, &t4901_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4901_m28785_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4901_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28786_MI = 
{
	"Clear", NULL, &t4901_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t979_0_0_0;
static ParameterInfo t4901_m28787_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t979_0_0_0},
};
extern TypeInfo t4901_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28787_MI = 
{
	"Contains", NULL, &t4901_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4901_m28787_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3037_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4901_m28788_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3037_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4901_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28788_MI = 
{
	"CopyTo", NULL, &t4901_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4901_m28788_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t979_0_0_0;
static ParameterInfo t4901_m28789_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t979_0_0_0},
};
extern TypeInfo t4901_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28789_MI = 
{
	"Remove", NULL, &t4901_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4901_m28789_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4901_MIs[] =
{
	&m28783_MI,
	&m28784_MI,
	&m28785_MI,
	&m28786_MI,
	&m28787_MI,
	&m28788_MI,
	&m28789_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4903_TI;
static TypeInfo* t4901_ITIs[] = 
{
	&t591_TI,
	&t4903_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4901_0_0_0;
extern Il2CppType t4901_1_0_0;
struct t4901;
extern TypeInfo t4901_TI;
extern Il2CppGenericClass t4901_GC;
TypeInfo t4901_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4901_MIs, t4901_PIs, NULL, NULL, NULL, NULL, NULL, &t4901_TI, t4901_ITIs, NULL, &EmptyCustomAttributesCache, &t4901_TI, &t4901_0_0_0, &t4901_1_0_0, NULL, &t4901_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4903_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern TypeInfo t4903_TI;
extern Il2CppType t3688_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28790_MI = 
{
	"GetEnumerator", NULL, &t4903_TI, &t3688_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4903_MIs[] =
{
	&m28790_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4903_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4903_0_0_0;
extern Il2CppType t4903_1_0_0;
struct t4903;
extern TypeInfo t4903_TI;
extern Il2CppGenericClass t4903_GC;
TypeInfo t4903_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4903_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4903_TI, t4903_ITIs, NULL, &EmptyCustomAttributesCache, &t4903_TI, &t4903_0_0_0, &t4903_1_0_0, NULL, &t4903_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4902_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern MethodInfo m28791_MI;
extern MethodInfo m28792_MI;
static PropertyInfo t4902____Item_PropertyInfo = 
{
	&t4902_TI, "Item", &m28791_MI, &m28792_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4902_PIs[] =
{
	&t4902____Item_PropertyInfo,
	NULL
};
extern Il2CppType t979_0_0_0;
static ParameterInfo t4902_m28793_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t979_0_0_0},
};
extern TypeInfo t4902_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28793_MI = 
{
	"IndexOf", NULL, &t4902_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4902_m28793_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t979_0_0_0;
static ParameterInfo t4902_m28794_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t979_0_0_0},
};
extern TypeInfo t4902_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28794_MI = 
{
	"Insert", NULL, &t4902_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4902_m28794_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4902_m28795_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4902_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28795_MI = 
{
	"RemoveAt", NULL, &t4902_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4902_m28795_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4902_m28791_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4902_TI;
extern Il2CppType t979_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28791_MI = 
{
	"get_Item", NULL, &t4902_TI, &t979_0_0_0, RuntimeInvoker_t4_t16, t4902_m28791_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t979_0_0_0;
static ParameterInfo t4902_m28792_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t979_0_0_0},
};
extern TypeInfo t4902_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28792_MI = 
{
	"set_Item", NULL, &t4902_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4902_m28792_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4902_MIs[] =
{
	&m28793_MI,
	&m28794_MI,
	&m28795_MI,
	&m28791_MI,
	&m28792_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4901_TI;
extern TypeInfo t4903_TI;
static TypeInfo* t4902_ITIs[] = 
{
	&t591_TI,
	&t4901_TI,
	&t4903_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4902_0_0_0;
extern Il2CppType t4902_1_0_0;
struct t4902;
extern TypeInfo t4902_TI;
extern Il2CppGenericClass t4902_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4902_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4902_MIs, t4902_PIs, NULL, NULL, NULL, NULL, NULL, &t4902_TI, t4902_ITIs, NULL, &t1400__CustomAttributeCache, &t4902_TI, &t4902_0_0_0, &t4902_1_0_0, NULL, &t4902_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3689_TI;

#include "t980.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo m28796_MI;
static PropertyInfo t3689____Current_PropertyInfo = 
{
	&t3689_TI, "Current", &m28796_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3689_PIs[] =
{
	&t3689____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3689_TI;
extern Il2CppType t980_0_0_0;
extern void* RuntimeInvoker_t980 (MethodInfo* method, void* obj, void** args);
MethodInfo m28796_MI = 
{
	"get_Current", NULL, &t3689_TI, &t980_0_0_0, RuntimeInvoker_t980, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3689_MIs[] =
{
	&m28796_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3689_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3689_0_0_0;
extern Il2CppType t3689_1_0_0;
struct t3689;
extern TypeInfo t3689_TI;
extern Il2CppGenericClass t3689_GC;
TypeInfo t3689_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3689_MIs, t3689_PIs, NULL, NULL, NULL, NULL, NULL, &t3689_TI, t3689_ITIs, NULL, &EmptyCustomAttributesCache, &t3689_TI, &t3689_0_0_0, &t3689_1_0_0, NULL, &t3689_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2801.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2801_TI;
#include "t2801MD.h"

extern TypeInfo t2801_TI;
extern TypeInfo t980_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16223_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21988_MI;
struct t14;
 int32_t m21988 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21988_MI;


extern MethodInfo m16219_MI;
 void m16219 (t2801 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16220_MI;
 t4 * m16220 (t2801 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16223(__this, &m16223_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t980_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16221_MI;
 void m16221 (t2801 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16222_MI;
 bool m16222 (t2801 * __this, MethodInfo* method){
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
extern MethodInfo m16223_MI;
 int32_t m16223 (t2801 * __this, MethodInfo* method){
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
		int32_t L_8 = m21988(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21988_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>
extern Il2CppType t14_0_0_1;
FieldInfo t2801_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2801_TI, offsetof(t2801, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2801_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2801_TI, offsetof(t2801, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2801_FIs[] =
{
	&t2801_f0_FieldInfo,
	&t2801_f1_FieldInfo,
	NULL
};
extern MethodInfo m16220_MI;
static PropertyInfo t2801____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2801_TI, "System.Collections.IEnumerator.Current", &m16220_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16223_MI;
static PropertyInfo t2801____Current_PropertyInfo = 
{
	&t2801_TI, "Current", &m16223_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2801_PIs[] =
{
	&t2801____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2801____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2801_m16219_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2801_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16219_MI = 
{
	".ctor", (methodPointerType)&m16219, &t2801_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2801_m16219_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2801_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16220_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16220, &t2801_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2801_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16221_MI = 
{
	"Dispose", (methodPointerType)&m16221, &t2801_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2801_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16222_MI = 
{
	"MoveNext", (methodPointerType)&m16222, &t2801_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2801_TI;
extern Il2CppType t980_0_0_0;
extern void* RuntimeInvoker_t980 (MethodInfo* method, void* obj, void** args);
MethodInfo m16223_MI = 
{
	"get_Current", (methodPointerType)&m16223, &t2801_TI, &t980_0_0_0, RuntimeInvoker_t980, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2801_MIs[] =
{
	&m16219_MI,
	&m16220_MI,
	&m16221_MI,
	&m16222_MI,
	&m16223_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16220_MI;
extern MethodInfo m16222_MI;
extern MethodInfo m16221_MI;
extern MethodInfo m16223_MI;
static MethodInfo* t2801_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16220_MI,
	&m16222_MI,
	&m16221_MI,
	&m16223_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3689_TI;
static TypeInfo* t2801_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3689_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3689_TI;
static Il2CppInterfaceOffsetPair t2801_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3689_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2801_0_0_0;
extern Il2CppType t2801_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2801_TI;
extern Il2CppGenericClass t2801_GC;
extern TypeInfo t14_TI;
TypeInfo t2801_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2801_MIs, t2801_PIs, t2801_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2801_TI, t2801_ITIs, t2801_VT, &EmptyCustomAttributesCache, &t2801_TI, &t2801_0_0_0, &t2801_1_0_0, t2801_IOs, &t2801_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2801)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4904_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo m28797_MI;
static PropertyInfo t4904____Count_PropertyInfo = 
{
	&t4904_TI, "Count", &m28797_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28798_MI;
static PropertyInfo t4904____IsReadOnly_PropertyInfo = 
{
	&t4904_TI, "IsReadOnly", &m28798_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4904_PIs[] =
{
	&t4904____Count_PropertyInfo,
	&t4904____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4904_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28797_MI = 
{
	"get_Count", NULL, &t4904_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4904_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28798_MI = 
{
	"get_IsReadOnly", NULL, &t4904_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t980_0_0_0;
static ParameterInfo t4904_m28799_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t980_0_0_0},
};
extern TypeInfo t4904_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28799_MI = 
{
	"Add", NULL, &t4904_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4904_m28799_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4904_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28800_MI = 
{
	"Clear", NULL, &t4904_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t980_0_0_0;
static ParameterInfo t4904_m28801_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t980_0_0_0},
};
extern TypeInfo t4904_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28801_MI = 
{
	"Contains", NULL, &t4904_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4904_m28801_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3038_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4904_m28802_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3038_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4904_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28802_MI = 
{
	"CopyTo", NULL, &t4904_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4904_m28802_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t980_0_0_0;
static ParameterInfo t4904_m28803_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t980_0_0_0},
};
extern TypeInfo t4904_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28803_MI = 
{
	"Remove", NULL, &t4904_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4904_m28803_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4904_MIs[] =
{
	&m28797_MI,
	&m28798_MI,
	&m28799_MI,
	&m28800_MI,
	&m28801_MI,
	&m28802_MI,
	&m28803_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4906_TI;
static TypeInfo* t4904_ITIs[] = 
{
	&t591_TI,
	&t4906_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4904_0_0_0;
extern Il2CppType t4904_1_0_0;
struct t4904;
extern TypeInfo t4904_TI;
extern Il2CppGenericClass t4904_GC;
TypeInfo t4904_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4904_MIs, t4904_PIs, NULL, NULL, NULL, NULL, NULL, &t4904_TI, t4904_ITIs, NULL, &EmptyCustomAttributesCache, &t4904_TI, &t4904_0_0_0, &t4904_1_0_0, NULL, &t4904_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4906_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.LoadHint>
extern TypeInfo t4906_TI;
extern Il2CppType t3689_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28804_MI = 
{
	"GetEnumerator", NULL, &t4906_TI, &t3689_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4906_MIs[] =
{
	&m28804_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4906_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4906_0_0_0;
extern Il2CppType t4906_1_0_0;
struct t4906;
extern TypeInfo t4906_TI;
extern Il2CppGenericClass t4906_GC;
TypeInfo t4906_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4906_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4906_TI, t4906_ITIs, NULL, &EmptyCustomAttributesCache, &t4906_TI, &t4906_0_0_0, &t4906_1_0_0, NULL, &t4906_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4905_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo m28805_MI;
extern MethodInfo m28806_MI;
static PropertyInfo t4905____Item_PropertyInfo = 
{
	&t4905_TI, "Item", &m28805_MI, &m28806_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4905_PIs[] =
{
	&t4905____Item_PropertyInfo,
	NULL
};
extern Il2CppType t980_0_0_0;
static ParameterInfo t4905_m28807_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t980_0_0_0},
};
extern TypeInfo t4905_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28807_MI = 
{
	"IndexOf", NULL, &t4905_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4905_m28807_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t980_0_0_0;
static ParameterInfo t4905_m28808_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t980_0_0_0},
};
extern TypeInfo t4905_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28808_MI = 
{
	"Insert", NULL, &t4905_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4905_m28808_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4905_m28809_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4905_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28809_MI = 
{
	"RemoveAt", NULL, &t4905_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4905_m28809_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4905_m28805_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4905_TI;
extern Il2CppType t980_0_0_0;
extern void* RuntimeInvoker_t980_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28805_MI = 
{
	"get_Item", NULL, &t4905_TI, &t980_0_0_0, RuntimeInvoker_t980_t16, t4905_m28805_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t980_0_0_0;
static ParameterInfo t4905_m28806_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t980_0_0_0},
};
extern TypeInfo t4905_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28806_MI = 
{
	"set_Item", NULL, &t4905_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4905_m28806_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4905_MIs[] =
{
	&m28807_MI,
	&m28808_MI,
	&m28809_MI,
	&m28805_MI,
	&m28806_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4904_TI;
extern TypeInfo t4906_TI;
static TypeInfo* t4905_ITIs[] = 
{
	&t591_TI,
	&t4904_TI,
	&t4906_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4905_0_0_0;
extern Il2CppType t4905_1_0_0;
struct t4905;
extern TypeInfo t4905_TI;
extern Il2CppGenericClass t4905_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4905_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4905_MIs, t4905_PIs, NULL, NULL, NULL, NULL, NULL, &t4905_TI, t4905_ITIs, NULL, &t1400__CustomAttributeCache, &t4905_TI, &t4905_0_0_0, &t4905_1_0_0, NULL, &t4905_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3690_TI;

#include "t982.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo m28810_MI;
static PropertyInfo t3690____Current_PropertyInfo = 
{
	&t3690_TI, "Current", &m28810_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3690_PIs[] =
{
	&t3690____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3690_TI;
extern Il2CppType t982_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28810_MI = 
{
	"get_Current", NULL, &t3690_TI, &t982_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3690_MIs[] =
{
	&m28810_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3690_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3690_0_0_0;
extern Il2CppType t3690_1_0_0;
struct t3690;
extern TypeInfo t3690_TI;
extern Il2CppGenericClass t3690_GC;
TypeInfo t3690_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3690_MIs, t3690_PIs, NULL, NULL, NULL, NULL, NULL, &t3690_TI, t3690_ITIs, NULL, &EmptyCustomAttributesCache, &t3690_TI, &t3690_0_0_0, &t3690_1_0_0, NULL, &t3690_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2802.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2802_TI;
#include "t2802MD.h"

extern TypeInfo t2802_TI;
extern TypeInfo t982_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16228_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21999_MI;
struct t14;
#define m21999(__this, p0, method) (t982 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21999_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2802_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2802_TI, offsetof(t2802, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2802_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2802_TI, offsetof(t2802, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2802_FIs[] =
{
	&t2802_f0_FieldInfo,
	&t2802_f1_FieldInfo,
	NULL
};
extern MethodInfo m16225_MI;
static PropertyInfo t2802____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2802_TI, "System.Collections.IEnumerator.Current", &m16225_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16228_MI;
static PropertyInfo t2802____Current_PropertyInfo = 
{
	&t2802_TI, "Current", &m16228_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2802_PIs[] =
{
	&t2802____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2802____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2802_m16224_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2802_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16224_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2802_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2802_m16224_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2802_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16225_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2802_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2802_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16226_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2802_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2802_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16227_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2802_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2802_TI;
extern Il2CppType t982_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16228_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2802_TI, &t982_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2802_MIs[] =
{
	&m16224_MI,
	&m16225_MI,
	&m16226_MI,
	&m16227_MI,
	&m16228_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16225_MI;
extern MethodInfo m16227_MI;
extern MethodInfo m16226_MI;
extern MethodInfo m16228_MI;
static MethodInfo* t2802_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16225_MI,
	&m16227_MI,
	&m16226_MI,
	&m16228_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3690_TI;
static TypeInfo* t2802_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3690_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3690_TI;
static Il2CppInterfaceOffsetPair t2802_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3690_TI, 7},
};
extern MethodInfo m16228_MI;
extern TypeInfo t982_TI;
extern MethodInfo m21999_MI;
static void* t2802_RGCTXData[3] = 
{
	&m16228_MI,
	&t982_TI,
	&m21999_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2802_0_0_0;
extern Il2CppType t2802_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2802_TI;
extern Il2CppGenericClass t2802_GC;
extern TypeInfo t14_TI;
TypeInfo t2802_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2802_MIs, t2802_PIs, t2802_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2802_TI, t2802_ITIs, t2802_VT, &EmptyCustomAttributesCache, &t2802_TI, &t2802_0_0_0, &t2802_1_0_0, t2802_IOs, &t2802_GC, NULL, NULL, NULL, t2802_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2802)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4907_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo m28811_MI;
static PropertyInfo t4907____Count_PropertyInfo = 
{
	&t4907_TI, "Count", &m28811_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28812_MI;
static PropertyInfo t4907____IsReadOnly_PropertyInfo = 
{
	&t4907_TI, "IsReadOnly", &m28812_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4907_PIs[] =
{
	&t4907____Count_PropertyInfo,
	&t4907____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4907_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28811_MI = 
{
	"get_Count", NULL, &t4907_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4907_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28812_MI = 
{
	"get_IsReadOnly", NULL, &t4907_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t982_0_0_0;
static ParameterInfo t4907_m28813_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t982_0_0_0},
};
extern TypeInfo t4907_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28813_MI = 
{
	"Add", NULL, &t4907_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4907_m28813_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4907_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28814_MI = 
{
	"Clear", NULL, &t4907_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t982_0_0_0;
static ParameterInfo t4907_m28815_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t982_0_0_0},
};
extern TypeInfo t4907_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28815_MI = 
{
	"Contains", NULL, &t4907_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4907_m28815_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3039_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4907_m28816_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3039_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4907_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28816_MI = 
{
	"CopyTo", NULL, &t4907_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4907_m28816_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t982_0_0_0;
static ParameterInfo t4907_m28817_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t982_0_0_0},
};
extern TypeInfo t4907_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28817_MI = 
{
	"Remove", NULL, &t4907_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4907_m28817_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4907_MIs[] =
{
	&m28811_MI,
	&m28812_MI,
	&m28813_MI,
	&m28814_MI,
	&m28815_MI,
	&m28816_MI,
	&m28817_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4909_TI;
static TypeInfo* t4907_ITIs[] = 
{
	&t591_TI,
	&t4909_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4907_0_0_0;
extern Il2CppType t4907_1_0_0;
struct t4907;
extern TypeInfo t4907_TI;
extern Il2CppGenericClass t4907_GC;
TypeInfo t4907_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4907_MIs, t4907_PIs, NULL, NULL, NULL, NULL, NULL, &t4907_TI, t4907_ITIs, NULL, &EmptyCustomAttributesCache, &t4907_TI, &t4907_0_0_0, &t4907_1_0_0, NULL, &t4907_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4909_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern TypeInfo t4909_TI;
extern Il2CppType t3690_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28818_MI = 
{
	"GetEnumerator", NULL, &t4909_TI, &t3690_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4909_MIs[] =
{
	&m28818_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4909_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4909_0_0_0;
extern Il2CppType t4909_1_0_0;
struct t4909;
extern TypeInfo t4909_TI;
extern Il2CppGenericClass t4909_GC;
TypeInfo t4909_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4909_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4909_TI, t4909_ITIs, NULL, &EmptyCustomAttributesCache, &t4909_TI, &t4909_0_0_0, &t4909_1_0_0, NULL, &t4909_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4908_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo m28819_MI;
extern MethodInfo m28820_MI;
static PropertyInfo t4908____Item_PropertyInfo = 
{
	&t4908_TI, "Item", &m28819_MI, &m28820_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4908_PIs[] =
{
	&t4908____Item_PropertyInfo,
	NULL
};
extern Il2CppType t982_0_0_0;
static ParameterInfo t4908_m28821_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t982_0_0_0},
};
extern TypeInfo t4908_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28821_MI = 
{
	"IndexOf", NULL, &t4908_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4908_m28821_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t982_0_0_0;
static ParameterInfo t4908_m28822_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t982_0_0_0},
};
extern TypeInfo t4908_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28822_MI = 
{
	"Insert", NULL, &t4908_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4908_m28822_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4908_m28823_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4908_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28823_MI = 
{
	"RemoveAt", NULL, &t4908_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4908_m28823_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4908_m28819_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4908_TI;
extern Il2CppType t982_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28819_MI = 
{
	"get_Item", NULL, &t4908_TI, &t982_0_0_0, RuntimeInvoker_t4_t16, t4908_m28819_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t982_0_0_0;
static ParameterInfo t4908_m28820_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t982_0_0_0},
};
extern TypeInfo t4908_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28820_MI = 
{
	"set_Item", NULL, &t4908_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4908_m28820_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4908_MIs[] =
{
	&m28821_MI,
	&m28822_MI,
	&m28823_MI,
	&m28819_MI,
	&m28820_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4907_TI;
extern TypeInfo t4909_TI;
static TypeInfo* t4908_ITIs[] = 
{
	&t591_TI,
	&t4907_TI,
	&t4909_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4908_0_0_0;
extern Il2CppType t4908_1_0_0;
struct t4908;
extern TypeInfo t4908_TI;
extern Il2CppGenericClass t4908_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4908_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4908_MIs, t4908_PIs, NULL, NULL, NULL, NULL, NULL, &t4908_TI, t4908_ITIs, NULL, &t1400__CustomAttributeCache, &t4908_TI, &t4908_0_0_0, &t4908_1_0_0, NULL, &t4908_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3691_TI;

#include "t983.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo m28824_MI;
static PropertyInfo t3691____Current_PropertyInfo = 
{
	&t3691_TI, "Current", &m28824_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3691_PIs[] =
{
	&t3691____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3691_TI;
extern Il2CppType t983_0_0_0;
extern void* RuntimeInvoker_t983 (MethodInfo* method, void* obj, void** args);
MethodInfo m28824_MI = 
{
	"get_Current", NULL, &t3691_TI, &t983_0_0_0, RuntimeInvoker_t983, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3691_MIs[] =
{
	&m28824_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3691_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3691_0_0_0;
extern Il2CppType t3691_1_0_0;
struct t3691;
extern TypeInfo t3691_TI;
extern Il2CppGenericClass t3691_GC;
TypeInfo t3691_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3691_MIs, t3691_PIs, NULL, NULL, NULL, NULL, NULL, &t3691_TI, t3691_ITIs, NULL, &EmptyCustomAttributesCache, &t3691_TI, &t3691_0_0_0, &t3691_1_0_0, NULL, &t3691_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2803.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2803_TI;
#include "t2803MD.h"

extern TypeInfo t2803_TI;
extern TypeInfo t983_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16233_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22010_MI;
struct t14;
 int32_t m22010 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22010_MI;


extern MethodInfo m16229_MI;
 void m16229 (t2803 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16230_MI;
 t4 * m16230 (t2803 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16233(__this, &m16233_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t983_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16231_MI;
 void m16231 (t2803 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16232_MI;
 bool m16232 (t2803 * __this, MethodInfo* method){
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
extern MethodInfo m16233_MI;
 int32_t m16233 (t2803 * __this, MethodInfo* method){
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
		int32_t L_8 = m22010(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22010_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
extern Il2CppType t14_0_0_1;
FieldInfo t2803_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2803_TI, offsetof(t2803, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2803_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2803_TI, offsetof(t2803, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2803_FIs[] =
{
	&t2803_f0_FieldInfo,
	&t2803_f1_FieldInfo,
	NULL
};
extern MethodInfo m16230_MI;
static PropertyInfo t2803____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2803_TI, "System.Collections.IEnumerator.Current", &m16230_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16233_MI;
static PropertyInfo t2803____Current_PropertyInfo = 
{
	&t2803_TI, "Current", &m16233_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2803_PIs[] =
{
	&t2803____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2803____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2803_m16229_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2803_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16229_MI = 
{
	".ctor", (methodPointerType)&m16229, &t2803_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2803_m16229_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2803_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16230_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16230, &t2803_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2803_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16231_MI = 
{
	"Dispose", (methodPointerType)&m16231, &t2803_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2803_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16232_MI = 
{
	"MoveNext", (methodPointerType)&m16232, &t2803_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2803_TI;
extern Il2CppType t983_0_0_0;
extern void* RuntimeInvoker_t983 (MethodInfo* method, void* obj, void** args);
MethodInfo m16233_MI = 
{
	"get_Current", (methodPointerType)&m16233, &t2803_TI, &t983_0_0_0, RuntimeInvoker_t983, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2803_MIs[] =
{
	&m16229_MI,
	&m16230_MI,
	&m16231_MI,
	&m16232_MI,
	&m16233_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16230_MI;
extern MethodInfo m16232_MI;
extern MethodInfo m16231_MI;
extern MethodInfo m16233_MI;
static MethodInfo* t2803_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16230_MI,
	&m16232_MI,
	&m16231_MI,
	&m16233_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3691_TI;
static TypeInfo* t2803_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3691_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3691_TI;
static Il2CppInterfaceOffsetPair t2803_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3691_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2803_0_0_0;
extern Il2CppType t2803_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2803_TI;
extern Il2CppGenericClass t2803_GC;
extern TypeInfo t14_TI;
TypeInfo t2803_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2803_MIs, t2803_PIs, t2803_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2803_TI, t2803_ITIs, t2803_VT, &EmptyCustomAttributesCache, &t2803_TI, &t2803_0_0_0, &t2803_1_0_0, t2803_IOs, &t2803_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2803)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4910_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo m28825_MI;
static PropertyInfo t4910____Count_PropertyInfo = 
{
	&t4910_TI, "Count", &m28825_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28826_MI;
static PropertyInfo t4910____IsReadOnly_PropertyInfo = 
{
	&t4910_TI, "IsReadOnly", &m28826_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4910_PIs[] =
{
	&t4910____Count_PropertyInfo,
	&t4910____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4910_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28825_MI = 
{
	"get_Count", NULL, &t4910_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4910_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28826_MI = 
{
	"get_IsReadOnly", NULL, &t4910_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t983_0_0_0;
static ParameterInfo t4910_m28827_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t983_0_0_0},
};
extern TypeInfo t4910_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28827_MI = 
{
	"Add", NULL, &t4910_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4910_m28827_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4910_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28828_MI = 
{
	"Clear", NULL, &t4910_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t983_0_0_0;
static ParameterInfo t4910_m28829_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t983_0_0_0},
};
extern TypeInfo t4910_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28829_MI = 
{
	"Contains", NULL, &t4910_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4910_m28829_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3040_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4910_m28830_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3040_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4910_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28830_MI = 
{
	"CopyTo", NULL, &t4910_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4910_m28830_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t983_0_0_0;
static ParameterInfo t4910_m28831_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t983_0_0_0},
};
extern TypeInfo t4910_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28831_MI = 
{
	"Remove", NULL, &t4910_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4910_m28831_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4910_MIs[] =
{
	&m28825_MI,
	&m28826_MI,
	&m28827_MI,
	&m28828_MI,
	&m28829_MI,
	&m28830_MI,
	&m28831_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4912_TI;
static TypeInfo* t4910_ITIs[] = 
{
	&t591_TI,
	&t4912_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4910_0_0_0;
extern Il2CppType t4910_1_0_0;
struct t4910;
extern TypeInfo t4910_TI;
extern Il2CppGenericClass t4910_GC;
TypeInfo t4910_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4910_MIs, t4910_PIs, NULL, NULL, NULL, NULL, NULL, &t4910_TI, t4910_ITIs, NULL, &EmptyCustomAttributesCache, &t4910_TI, &t4910_0_0_0, &t4910_1_0_0, NULL, &t4910_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4912_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Cer>
extern TypeInfo t4912_TI;
extern Il2CppType t3691_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28832_MI = 
{
	"GetEnumerator", NULL, &t4912_TI, &t3691_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4912_MIs[] =
{
	&m28832_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4912_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4912_0_0_0;
extern Il2CppType t4912_1_0_0;
struct t4912;
extern TypeInfo t4912_TI;
extern Il2CppGenericClass t4912_GC;
TypeInfo t4912_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4912_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4912_TI, t4912_ITIs, NULL, &EmptyCustomAttributesCache, &t4912_TI, &t4912_0_0_0, &t4912_1_0_0, NULL, &t4912_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4911_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo m28833_MI;
extern MethodInfo m28834_MI;
static PropertyInfo t4911____Item_PropertyInfo = 
{
	&t4911_TI, "Item", &m28833_MI, &m28834_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4911_PIs[] =
{
	&t4911____Item_PropertyInfo,
	NULL
};
extern Il2CppType t983_0_0_0;
static ParameterInfo t4911_m28835_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t983_0_0_0},
};
extern TypeInfo t4911_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28835_MI = 
{
	"IndexOf", NULL, &t4911_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4911_m28835_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t983_0_0_0;
static ParameterInfo t4911_m28836_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t983_0_0_0},
};
extern TypeInfo t4911_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28836_MI = 
{
	"Insert", NULL, &t4911_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4911_m28836_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4911_m28837_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4911_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28837_MI = 
{
	"RemoveAt", NULL, &t4911_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4911_m28837_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4911_m28833_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4911_TI;
extern Il2CppType t983_0_0_0;
extern void* RuntimeInvoker_t983_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28833_MI = 
{
	"get_Item", NULL, &t4911_TI, &t983_0_0_0, RuntimeInvoker_t983_t16, t4911_m28833_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t983_0_0_0;
static ParameterInfo t4911_m28834_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t983_0_0_0},
};
extern TypeInfo t4911_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28834_MI = 
{
	"set_Item", NULL, &t4911_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4911_m28834_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4911_MIs[] =
{
	&m28835_MI,
	&m28836_MI,
	&m28837_MI,
	&m28833_MI,
	&m28834_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4910_TI;
extern TypeInfo t4912_TI;
static TypeInfo* t4911_ITIs[] = 
{
	&t591_TI,
	&t4910_TI,
	&t4912_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4911_0_0_0;
extern Il2CppType t4911_1_0_0;
struct t4911;
extern TypeInfo t4911_TI;
extern Il2CppGenericClass t4911_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4911_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4911_MIs, t4911_PIs, NULL, NULL, NULL, NULL, NULL, &t4911_TI, t4911_ITIs, NULL, &t1400__CustomAttributeCache, &t4911_TI, &t4911_0_0_0, &t4911_1_0_0, NULL, &t4911_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3692_TI;

#include "t984.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo m28838_MI;
static PropertyInfo t3692____Current_PropertyInfo = 
{
	&t3692_TI, "Current", &m28838_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3692_PIs[] =
{
	&t3692____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3692_TI;
extern Il2CppType t984_0_0_0;
extern void* RuntimeInvoker_t984 (MethodInfo* method, void* obj, void** args);
MethodInfo m28838_MI = 
{
	"get_Current", NULL, &t3692_TI, &t984_0_0_0, RuntimeInvoker_t984, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3692_MIs[] =
{
	&m28838_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3692_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3692_0_0_0;
extern Il2CppType t3692_1_0_0;
struct t3692;
extern TypeInfo t3692_TI;
extern Il2CppGenericClass t3692_GC;
TypeInfo t3692_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3692_MIs, t3692_PIs, NULL, NULL, NULL, NULL, NULL, &t3692_TI, t3692_ITIs, NULL, &EmptyCustomAttributesCache, &t3692_TI, &t3692_0_0_0, &t3692_1_0_0, NULL, &t3692_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2804.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2804_TI;
#include "t2804MD.h"

extern TypeInfo t2804_TI;
extern TypeInfo t984_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16238_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22021_MI;
struct t14;
 int32_t m22021 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22021_MI;


extern MethodInfo m16234_MI;
 void m16234 (t2804 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16235_MI;
 t4 * m16235 (t2804 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16238(__this, &m16238_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t984_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16236_MI;
 void m16236 (t2804 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16237_MI;
 bool m16237 (t2804 * __this, MethodInfo* method){
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
extern MethodInfo m16238_MI;
 int32_t m16238 (t2804 * __this, MethodInfo* method){
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
		int32_t L_8 = m22021(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22021_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
extern Il2CppType t14_0_0_1;
FieldInfo t2804_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2804_TI, offsetof(t2804, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2804_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2804_TI, offsetof(t2804, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2804_FIs[] =
{
	&t2804_f0_FieldInfo,
	&t2804_f1_FieldInfo,
	NULL
};
extern MethodInfo m16235_MI;
static PropertyInfo t2804____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2804_TI, "System.Collections.IEnumerator.Current", &m16235_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16238_MI;
static PropertyInfo t2804____Current_PropertyInfo = 
{
	&t2804_TI, "Current", &m16238_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2804_PIs[] =
{
	&t2804____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2804____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2804_m16234_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2804_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16234_MI = 
{
	".ctor", (methodPointerType)&m16234, &t2804_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2804_m16234_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2804_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16235_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16235, &t2804_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2804_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16236_MI = 
{
	"Dispose", (methodPointerType)&m16236, &t2804_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2804_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16237_MI = 
{
	"MoveNext", (methodPointerType)&m16237, &t2804_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2804_TI;
extern Il2CppType t984_0_0_0;
extern void* RuntimeInvoker_t984 (MethodInfo* method, void* obj, void** args);
MethodInfo m16238_MI = 
{
	"get_Current", (methodPointerType)&m16238, &t2804_TI, &t984_0_0_0, RuntimeInvoker_t984, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2804_MIs[] =
{
	&m16234_MI,
	&m16235_MI,
	&m16236_MI,
	&m16237_MI,
	&m16238_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16235_MI;
extern MethodInfo m16237_MI;
extern MethodInfo m16236_MI;
extern MethodInfo m16238_MI;
static MethodInfo* t2804_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16235_MI,
	&m16237_MI,
	&m16236_MI,
	&m16238_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3692_TI;
static TypeInfo* t2804_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3692_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3692_TI;
static Il2CppInterfaceOffsetPair t2804_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3692_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2804_0_0_0;
extern Il2CppType t2804_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2804_TI;
extern Il2CppGenericClass t2804_GC;
extern TypeInfo t14_TI;
TypeInfo t2804_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2804_MIs, t2804_PIs, t2804_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2804_TI, t2804_ITIs, t2804_VT, &EmptyCustomAttributesCache, &t2804_TI, &t2804_0_0_0, &t2804_1_0_0, t2804_IOs, &t2804_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2804)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4913_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo m28839_MI;
static PropertyInfo t4913____Count_PropertyInfo = 
{
	&t4913_TI, "Count", &m28839_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28840_MI;
static PropertyInfo t4913____IsReadOnly_PropertyInfo = 
{
	&t4913_TI, "IsReadOnly", &m28840_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4913_PIs[] =
{
	&t4913____Count_PropertyInfo,
	&t4913____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4913_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28839_MI = 
{
	"get_Count", NULL, &t4913_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4913_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28840_MI = 
{
	"get_IsReadOnly", NULL, &t4913_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t984_0_0_0;
static ParameterInfo t4913_m28841_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t984_0_0_0},
};
extern TypeInfo t4913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28841_MI = 
{
	"Add", NULL, &t4913_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4913_m28841_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28842_MI = 
{
	"Clear", NULL, &t4913_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t984_0_0_0;
static ParameterInfo t4913_m28843_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t984_0_0_0},
};
extern TypeInfo t4913_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28843_MI = 
{
	"Contains", NULL, &t4913_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4913_m28843_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3041_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4913_m28844_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3041_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28844_MI = 
{
	"CopyTo", NULL, &t4913_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4913_m28844_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t984_0_0_0;
static ParameterInfo t4913_m28845_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t984_0_0_0},
};
extern TypeInfo t4913_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28845_MI = 
{
	"Remove", NULL, &t4913_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4913_m28845_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4913_MIs[] =
{
	&m28839_MI,
	&m28840_MI,
	&m28841_MI,
	&m28842_MI,
	&m28843_MI,
	&m28844_MI,
	&m28845_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4915_TI;
static TypeInfo* t4913_ITIs[] = 
{
	&t591_TI,
	&t4915_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4913_0_0_0;
extern Il2CppType t4913_1_0_0;
struct t4913;
extern TypeInfo t4913_TI;
extern Il2CppGenericClass t4913_GC;
TypeInfo t4913_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4913_MIs, t4913_PIs, NULL, NULL, NULL, NULL, NULL, &t4913_TI, t4913_ITIs, NULL, &EmptyCustomAttributesCache, &t4913_TI, &t4913_0_0_0, &t4913_1_0_0, NULL, &t4913_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4915_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Consistency>
extern TypeInfo t4915_TI;
extern Il2CppType t3692_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28846_MI = 
{
	"GetEnumerator", NULL, &t4915_TI, &t3692_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4915_MIs[] =
{
	&m28846_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4915_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4915_0_0_0;
extern Il2CppType t4915_1_0_0;
struct t4915;
extern TypeInfo t4915_TI;
extern Il2CppGenericClass t4915_GC;
TypeInfo t4915_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4915_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4915_TI, t4915_ITIs, NULL, &EmptyCustomAttributesCache, &t4915_TI, &t4915_0_0_0, &t4915_1_0_0, NULL, &t4915_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4914_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo m28847_MI;
extern MethodInfo m28848_MI;
static PropertyInfo t4914____Item_PropertyInfo = 
{
	&t4914_TI, "Item", &m28847_MI, &m28848_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4914_PIs[] =
{
	&t4914____Item_PropertyInfo,
	NULL
};
extern Il2CppType t984_0_0_0;
static ParameterInfo t4914_m28849_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t984_0_0_0},
};
extern TypeInfo t4914_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28849_MI = 
{
	"IndexOf", NULL, &t4914_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4914_m28849_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t984_0_0_0;
static ParameterInfo t4914_m28850_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t984_0_0_0},
};
extern TypeInfo t4914_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28850_MI = 
{
	"Insert", NULL, &t4914_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4914_m28850_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4914_m28851_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4914_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28851_MI = 
{
	"RemoveAt", NULL, &t4914_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4914_m28851_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4914_m28847_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4914_TI;
extern Il2CppType t984_0_0_0;
extern void* RuntimeInvoker_t984_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28847_MI = 
{
	"get_Item", NULL, &t4914_TI, &t984_0_0_0, RuntimeInvoker_t984_t16, t4914_m28847_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t984_0_0_0;
static ParameterInfo t4914_m28848_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t984_0_0_0},
};
extern TypeInfo t4914_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28848_MI = 
{
	"set_Item", NULL, &t4914_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4914_m28848_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4914_MIs[] =
{
	&m28849_MI,
	&m28850_MI,
	&m28851_MI,
	&m28847_MI,
	&m28848_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4913_TI;
extern TypeInfo t4915_TI;
static TypeInfo* t4914_ITIs[] = 
{
	&t591_TI,
	&t4913_TI,
	&t4915_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4914_0_0_0;
extern Il2CppType t4914_1_0_0;
struct t4914;
extern TypeInfo t4914_TI;
extern Il2CppGenericClass t4914_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4914_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4914_MIs, t4914_PIs, NULL, NULL, NULL, NULL, NULL, &t4914_TI, t4914_ITIs, NULL, &t1400__CustomAttributeCache, &t4914_TI, &t4914_0_0_0, &t4914_1_0_0, NULL, &t4914_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3693_TI;

#include "t986.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo m28852_MI;
static PropertyInfo t3693____Current_PropertyInfo = 
{
	&t3693_TI, "Current", &m28852_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3693_PIs[] =
{
	&t3693____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3693_TI;
extern Il2CppType t986_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28852_MI = 
{
	"get_Current", NULL, &t3693_TI, &t986_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3693_MIs[] =
{
	&m28852_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3693_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3693_0_0_0;
extern Il2CppType t3693_1_0_0;
struct t3693;
extern TypeInfo t3693_TI;
extern Il2CppGenericClass t3693_GC;
TypeInfo t3693_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3693_MIs, t3693_PIs, NULL, NULL, NULL, NULL, NULL, &t3693_TI, t3693_ITIs, NULL, &EmptyCustomAttributesCache, &t3693_TI, &t3693_0_0_0, &t3693_1_0_0, NULL, &t3693_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2805.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2805_TI;
#include "t2805MD.h"

extern TypeInfo t2805_TI;
extern TypeInfo t986_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16243_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22032_MI;
struct t14;
#define m22032(__this, p0, method) (t986 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22032_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2805_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2805_TI, offsetof(t2805, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2805_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2805_TI, offsetof(t2805, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2805_FIs[] =
{
	&t2805_f0_FieldInfo,
	&t2805_f1_FieldInfo,
	NULL
};
extern MethodInfo m16240_MI;
static PropertyInfo t2805____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2805_TI, "System.Collections.IEnumerator.Current", &m16240_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16243_MI;
static PropertyInfo t2805____Current_PropertyInfo = 
{
	&t2805_TI, "Current", &m16243_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2805_PIs[] =
{
	&t2805____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2805____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2805_m16239_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2805_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16239_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2805_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2805_m16239_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2805_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16240_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2805_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2805_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16241_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2805_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2805_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16242_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2805_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2805_TI;
extern Il2CppType t986_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16243_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2805_TI, &t986_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2805_MIs[] =
{
	&m16239_MI,
	&m16240_MI,
	&m16241_MI,
	&m16242_MI,
	&m16243_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16240_MI;
extern MethodInfo m16242_MI;
extern MethodInfo m16241_MI;
extern MethodInfo m16243_MI;
static MethodInfo* t2805_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16240_MI,
	&m16242_MI,
	&m16241_MI,
	&m16243_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3693_TI;
static TypeInfo* t2805_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3693_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3693_TI;
static Il2CppInterfaceOffsetPair t2805_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3693_TI, 7},
};
extern MethodInfo m16243_MI;
extern TypeInfo t986_TI;
extern MethodInfo m22032_MI;
static void* t2805_RGCTXData[3] = 
{
	&m16243_MI,
	&t986_TI,
	&m22032_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2805_0_0_0;
extern Il2CppType t2805_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2805_TI;
extern Il2CppGenericClass t2805_GC;
extern TypeInfo t14_TI;
TypeInfo t2805_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2805_MIs, t2805_PIs, t2805_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2805_TI, t2805_ITIs, t2805_VT, &EmptyCustomAttributesCache, &t2805_TI, &t2805_0_0_0, &t2805_1_0_0, t2805_IOs, &t2805_GC, NULL, NULL, NULL, t2805_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2805)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4916_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo m28853_MI;
static PropertyInfo t4916____Count_PropertyInfo = 
{
	&t4916_TI, "Count", &m28853_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28854_MI;
static PropertyInfo t4916____IsReadOnly_PropertyInfo = 
{
	&t4916_TI, "IsReadOnly", &m28854_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4916_PIs[] =
{
	&t4916____Count_PropertyInfo,
	&t4916____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4916_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28853_MI = 
{
	"get_Count", NULL, &t4916_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4916_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28854_MI = 
{
	"get_IsReadOnly", NULL, &t4916_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t986_0_0_0;
static ParameterInfo t4916_m28855_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t986_0_0_0},
};
extern TypeInfo t4916_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28855_MI = 
{
	"Add", NULL, &t4916_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4916_m28855_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4916_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28856_MI = 
{
	"Clear", NULL, &t4916_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t986_0_0_0;
static ParameterInfo t4916_m28857_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t986_0_0_0},
};
extern TypeInfo t4916_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28857_MI = 
{
	"Contains", NULL, &t4916_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4916_m28857_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3042_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4916_m28858_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3042_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4916_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28858_MI = 
{
	"CopyTo", NULL, &t4916_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4916_m28858_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t986_0_0_0;
static ParameterInfo t4916_m28859_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t986_0_0_0},
};
extern TypeInfo t4916_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28859_MI = 
{
	"Remove", NULL, &t4916_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4916_m28859_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4916_MIs[] =
{
	&m28853_MI,
	&m28854_MI,
	&m28855_MI,
	&m28856_MI,
	&m28857_MI,
	&m28858_MI,
	&m28859_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4918_TI;
static TypeInfo* t4916_ITIs[] = 
{
	&t591_TI,
	&t4918_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4916_0_0_0;
extern Il2CppType t4916_1_0_0;
struct t4916;
extern TypeInfo t4916_TI;
extern Il2CppGenericClass t4916_GC;
TypeInfo t4916_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4916_MIs, t4916_PIs, NULL, NULL, NULL, NULL, NULL, &t4916_TI, t4916_ITIs, NULL, &EmptyCustomAttributesCache, &t4916_TI, &t4916_0_0_0, &t4916_1_0_0, NULL, &t4916_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4918_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern TypeInfo t4918_TI;
extern Il2CppType t3693_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28860_MI = 
{
	"GetEnumerator", NULL, &t4918_TI, &t3693_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4918_MIs[] =
{
	&m28860_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4918_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4918_0_0_0;
extern Il2CppType t4918_1_0_0;
struct t4918;
extern TypeInfo t4918_TI;
extern Il2CppGenericClass t4918_GC;
TypeInfo t4918_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4918_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4918_TI, t4918_ITIs, NULL, &EmptyCustomAttributesCache, &t4918_TI, &t4918_0_0_0, &t4918_1_0_0, NULL, &t4918_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4917_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo m28861_MI;
extern MethodInfo m28862_MI;
static PropertyInfo t4917____Item_PropertyInfo = 
{
	&t4917_TI, "Item", &m28861_MI, &m28862_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4917_PIs[] =
{
	&t4917____Item_PropertyInfo,
	NULL
};
extern Il2CppType t986_0_0_0;
static ParameterInfo t4917_m28863_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t986_0_0_0},
};
extern TypeInfo t4917_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28863_MI = 
{
	"IndexOf", NULL, &t4917_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4917_m28863_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t986_0_0_0;
static ParameterInfo t4917_m28864_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t986_0_0_0},
};
extern TypeInfo t4917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28864_MI = 
{
	"Insert", NULL, &t4917_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4917_m28864_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4917_m28865_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28865_MI = 
{
	"RemoveAt", NULL, &t4917_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4917_m28865_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4917_m28861_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4917_TI;
extern Il2CppType t986_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28861_MI = 
{
	"get_Item", NULL, &t4917_TI, &t986_0_0_0, RuntimeInvoker_t4_t16, t4917_m28861_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t986_0_0_0;
static ParameterInfo t4917_m28862_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t986_0_0_0},
};
extern TypeInfo t4917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28862_MI = 
{
	"set_Item", NULL, &t4917_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4917_m28862_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4917_MIs[] =
{
	&m28863_MI,
	&m28864_MI,
	&m28865_MI,
	&m28861_MI,
	&m28862_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4916_TI;
extern TypeInfo t4918_TI;
static TypeInfo* t4917_ITIs[] = 
{
	&t591_TI,
	&t4916_TI,
	&t4918_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4917_0_0_0;
extern Il2CppType t4917_1_0_0;
struct t4917;
extern TypeInfo t4917_TI;
extern Il2CppGenericClass t4917_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4917_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4917_MIs, t4917_PIs, NULL, NULL, NULL, NULL, NULL, &t4917_TI, t4917_ITIs, NULL, &t1400__CustomAttributeCache, &t4917_TI, &t4917_0_0_0, &t4917_1_0_0, NULL, &t4917_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3694_TI;

#include "t733.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo m28866_MI;
static PropertyInfo t3694____Current_PropertyInfo = 
{
	&t3694_TI, "Current", &m28866_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3694_PIs[] =
{
	&t3694____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3694_TI;
extern Il2CppType t733_0_0_0;
extern void* RuntimeInvoker_t733 (MethodInfo* method, void* obj, void** args);
MethodInfo m28866_MI = 
{
	"get_Current", NULL, &t3694_TI, &t733_0_0_0, RuntimeInvoker_t733, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3694_MIs[] =
{
	&m28866_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3694_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3694_0_0_0;
extern Il2CppType t3694_1_0_0;
struct t3694;
extern TypeInfo t3694_TI;
extern Il2CppGenericClass t3694_GC;
TypeInfo t3694_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3694_MIs, t3694_PIs, NULL, NULL, NULL, NULL, NULL, &t3694_TI, t3694_ITIs, NULL, &EmptyCustomAttributesCache, &t3694_TI, &t3694_0_0_0, &t3694_1_0_0, NULL, &t3694_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2806.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2806_TI;
#include "t2806MD.h"

extern TypeInfo t2806_TI;
extern TypeInfo t733_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16248_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22043_MI;
struct t14;
 int32_t m22043 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22043_MI;


extern MethodInfo m16244_MI;
 void m16244 (t2806 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16245_MI;
 t4 * m16245 (t2806 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16248(__this, &m16248_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t733_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16246_MI;
 void m16246 (t2806 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16247_MI;
 bool m16247 (t2806 * __this, MethodInfo* method){
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
extern MethodInfo m16248_MI;
 int32_t m16248 (t2806 * __this, MethodInfo* method){
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
		int32_t L_8 = m22043(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22043_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>
extern Il2CppType t14_0_0_1;
FieldInfo t2806_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2806_TI, offsetof(t2806, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2806_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2806_TI, offsetof(t2806, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2806_FIs[] =
{
	&t2806_f0_FieldInfo,
	&t2806_f1_FieldInfo,
	NULL
};
extern MethodInfo m16245_MI;
static PropertyInfo t2806____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2806_TI, "System.Collections.IEnumerator.Current", &m16245_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16248_MI;
static PropertyInfo t2806____Current_PropertyInfo = 
{
	&t2806_TI, "Current", &m16248_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2806_PIs[] =
{
	&t2806____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2806____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2806_m16244_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2806_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16244_MI = 
{
	".ctor", (methodPointerType)&m16244, &t2806_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2806_m16244_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2806_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16245_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16245, &t2806_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2806_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16246_MI = 
{
	"Dispose", (methodPointerType)&m16246, &t2806_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2806_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16247_MI = 
{
	"MoveNext", (methodPointerType)&m16247, &t2806_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2806_TI;
extern Il2CppType t733_0_0_0;
extern void* RuntimeInvoker_t733 (MethodInfo* method, void* obj, void** args);
MethodInfo m16248_MI = 
{
	"get_Current", (methodPointerType)&m16248, &t2806_TI, &t733_0_0_0, RuntimeInvoker_t733, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2806_MIs[] =
{
	&m16244_MI,
	&m16245_MI,
	&m16246_MI,
	&m16247_MI,
	&m16248_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16245_MI;
extern MethodInfo m16247_MI;
extern MethodInfo m16246_MI;
extern MethodInfo m16248_MI;
static MethodInfo* t2806_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16245_MI,
	&m16247_MI,
	&m16246_MI,
	&m16248_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3694_TI;
static TypeInfo* t2806_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3694_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3694_TI;
static Il2CppInterfaceOffsetPair t2806_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3694_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2806_0_0_0;
extern Il2CppType t2806_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2806_TI;
extern Il2CppGenericClass t2806_GC;
extern TypeInfo t14_TI;
TypeInfo t2806_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2806_MIs, t2806_PIs, t2806_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2806_TI, t2806_ITIs, t2806_VT, &EmptyCustomAttributesCache, &t2806_TI, &t2806_0_0_0, &t2806_1_0_0, t2806_IOs, &t2806_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2806)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4919_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo m28867_MI;
static PropertyInfo t4919____Count_PropertyInfo = 
{
	&t4919_TI, "Count", &m28867_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28868_MI;
static PropertyInfo t4919____IsReadOnly_PropertyInfo = 
{
	&t4919_TI, "IsReadOnly", &m28868_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4919_PIs[] =
{
	&t4919____Count_PropertyInfo,
	&t4919____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4919_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28867_MI = 
{
	"get_Count", NULL, &t4919_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4919_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28868_MI = 
{
	"get_IsReadOnly", NULL, &t4919_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t733_0_0_0;
static ParameterInfo t4919_m28869_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t733_0_0_0},
};
extern TypeInfo t4919_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28869_MI = 
{
	"Add", NULL, &t4919_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4919_m28869_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4919_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28870_MI = 
{
	"Clear", NULL, &t4919_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t733_0_0_0;
static ParameterInfo t4919_m28871_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t733_0_0_0},
};
extern TypeInfo t4919_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28871_MI = 
{
	"Contains", NULL, &t4919_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4919_m28871_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3043_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4919_m28872_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3043_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4919_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28872_MI = 
{
	"CopyTo", NULL, &t4919_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4919_m28872_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t733_0_0_0;
static ParameterInfo t4919_m28873_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t733_0_0_0},
};
extern TypeInfo t4919_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28873_MI = 
{
	"Remove", NULL, &t4919_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4919_m28873_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4919_MIs[] =
{
	&m28867_MI,
	&m28868_MI,
	&m28869_MI,
	&m28870_MI,
	&m28871_MI,
	&m28872_MI,
	&m28873_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4921_TI;
static TypeInfo* t4919_ITIs[] = 
{
	&t591_TI,
	&t4921_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4919_0_0_0;
extern Il2CppType t4919_1_0_0;
struct t4919;
extern TypeInfo t4919_TI;
extern Il2CppGenericClass t4919_GC;
TypeInfo t4919_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4919_MIs, t4919_PIs, NULL, NULL, NULL, NULL, NULL, &t4919_TI, t4919_ITIs, NULL, &EmptyCustomAttributesCache, &t4919_TI, &t4919_0_0_0, &t4919_1_0_0, NULL, &t4919_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4921_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CallingConvention>
extern TypeInfo t4921_TI;
extern Il2CppType t3694_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28874_MI = 
{
	"GetEnumerator", NULL, &t4921_TI, &t3694_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4921_MIs[] =
{
	&m28874_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4921_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4921_0_0_0;
extern Il2CppType t4921_1_0_0;
struct t4921;
extern TypeInfo t4921_TI;
extern Il2CppGenericClass t4921_GC;
TypeInfo t4921_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4921_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4921_TI, t4921_ITIs, NULL, &EmptyCustomAttributesCache, &t4921_TI, &t4921_0_0_0, &t4921_1_0_0, NULL, &t4921_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4920_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo m28875_MI;
extern MethodInfo m28876_MI;
static PropertyInfo t4920____Item_PropertyInfo = 
{
	&t4920_TI, "Item", &m28875_MI, &m28876_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4920_PIs[] =
{
	&t4920____Item_PropertyInfo,
	NULL
};
extern Il2CppType t733_0_0_0;
static ParameterInfo t4920_m28877_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t733_0_0_0},
};
extern TypeInfo t4920_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28877_MI = 
{
	"IndexOf", NULL, &t4920_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4920_m28877_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t733_0_0_0;
static ParameterInfo t4920_m28878_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t733_0_0_0},
};
extern TypeInfo t4920_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28878_MI = 
{
	"Insert", NULL, &t4920_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4920_m28878_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4920_m28879_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4920_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28879_MI = 
{
	"RemoveAt", NULL, &t4920_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4920_m28879_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4920_m28875_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4920_TI;
extern Il2CppType t733_0_0_0;
extern void* RuntimeInvoker_t733_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28875_MI = 
{
	"get_Item", NULL, &t4920_TI, &t733_0_0_0, RuntimeInvoker_t733_t16, t4920_m28875_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t733_0_0_0;
static ParameterInfo t4920_m28876_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t733_0_0_0},
};
extern TypeInfo t4920_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28876_MI = 
{
	"set_Item", NULL, &t4920_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4920_m28876_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4920_MIs[] =
{
	&m28877_MI,
	&m28878_MI,
	&m28879_MI,
	&m28875_MI,
	&m28876_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4919_TI;
extern TypeInfo t4921_TI;
static TypeInfo* t4920_ITIs[] = 
{
	&t591_TI,
	&t4919_TI,
	&t4921_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4920_0_0_0;
extern Il2CppType t4920_1_0_0;
struct t4920;
extern TypeInfo t4920_TI;
extern Il2CppGenericClass t4920_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4920_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4920_MIs, t4920_PIs, NULL, NULL, NULL, NULL, NULL, &t4920_TI, t4920_ITIs, NULL, &t1400__CustomAttributeCache, &t4920_TI, &t4920_0_0_0, &t4920_1_0_0, NULL, &t4920_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3695_TI;

#include "t734.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo m28880_MI;
static PropertyInfo t3695____Current_PropertyInfo = 
{
	&t3695_TI, "Current", &m28880_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3695_PIs[] =
{
	&t3695____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3695_TI;
extern Il2CppType t734_0_0_0;
extern void* RuntimeInvoker_t734 (MethodInfo* method, void* obj, void** args);
MethodInfo m28880_MI = 
{
	"get_Current", NULL, &t3695_TI, &t734_0_0_0, RuntimeInvoker_t734, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3695_MIs[] =
{
	&m28880_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3695_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3695_0_0_0;
extern Il2CppType t3695_1_0_0;
struct t3695;
extern TypeInfo t3695_TI;
extern Il2CppGenericClass t3695_GC;
TypeInfo t3695_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3695_MIs, t3695_PIs, NULL, NULL, NULL, NULL, NULL, &t3695_TI, t3695_ITIs, NULL, &EmptyCustomAttributesCache, &t3695_TI, &t3695_0_0_0, &t3695_1_0_0, NULL, &t3695_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2807.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2807_TI;
#include "t2807MD.h"

extern TypeInfo t2807_TI;
extern TypeInfo t734_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16253_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22054_MI;
struct t14;
 int32_t m22054 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22054_MI;


extern MethodInfo m16249_MI;
 void m16249 (t2807 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16250_MI;
 t4 * m16250 (t2807 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16253(__this, &m16253_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t734_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16251_MI;
 void m16251 (t2807 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16252_MI;
 bool m16252 (t2807 * __this, MethodInfo* method){
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
extern MethodInfo m16253_MI;
 int32_t m16253 (t2807 * __this, MethodInfo* method){
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
		int32_t L_8 = m22054(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22054_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>
extern Il2CppType t14_0_0_1;
FieldInfo t2807_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2807_TI, offsetof(t2807, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2807_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2807_TI, offsetof(t2807, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2807_FIs[] =
{
	&t2807_f0_FieldInfo,
	&t2807_f1_FieldInfo,
	NULL
};
extern MethodInfo m16250_MI;
static PropertyInfo t2807____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2807_TI, "System.Collections.IEnumerator.Current", &m16250_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16253_MI;
static PropertyInfo t2807____Current_PropertyInfo = 
{
	&t2807_TI, "Current", &m16253_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2807_PIs[] =
{
	&t2807____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2807____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2807_m16249_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2807_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16249_MI = 
{
	".ctor", (methodPointerType)&m16249, &t2807_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2807_m16249_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2807_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16250_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16250, &t2807_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2807_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16251_MI = 
{
	"Dispose", (methodPointerType)&m16251, &t2807_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2807_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16252_MI = 
{
	"MoveNext", (methodPointerType)&m16252, &t2807_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2807_TI;
extern Il2CppType t734_0_0_0;
extern void* RuntimeInvoker_t734 (MethodInfo* method, void* obj, void** args);
MethodInfo m16253_MI = 
{
	"get_Current", (methodPointerType)&m16253, &t2807_TI, &t734_0_0_0, RuntimeInvoker_t734, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2807_MIs[] =
{
	&m16249_MI,
	&m16250_MI,
	&m16251_MI,
	&m16252_MI,
	&m16253_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16250_MI;
extern MethodInfo m16252_MI;
extern MethodInfo m16251_MI;
extern MethodInfo m16253_MI;
static MethodInfo* t2807_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16250_MI,
	&m16252_MI,
	&m16251_MI,
	&m16253_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3695_TI;
static TypeInfo* t2807_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3695_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3695_TI;
static Il2CppInterfaceOffsetPair t2807_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3695_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2807_0_0_0;
extern Il2CppType t2807_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2807_TI;
extern Il2CppGenericClass t2807_GC;
extern TypeInfo t14_TI;
TypeInfo t2807_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2807_MIs, t2807_PIs, t2807_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2807_TI, t2807_ITIs, t2807_VT, &EmptyCustomAttributesCache, &t2807_TI, &t2807_0_0_0, &t2807_1_0_0, t2807_IOs, &t2807_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2807)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4922_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo m28881_MI;
static PropertyInfo t4922____Count_PropertyInfo = 
{
	&t4922_TI, "Count", &m28881_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28882_MI;
static PropertyInfo t4922____IsReadOnly_PropertyInfo = 
{
	&t4922_TI, "IsReadOnly", &m28882_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4922_PIs[] =
{
	&t4922____Count_PropertyInfo,
	&t4922____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4922_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28881_MI = 
{
	"get_Count", NULL, &t4922_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4922_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28882_MI = 
{
	"get_IsReadOnly", NULL, &t4922_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t734_0_0_0;
static ParameterInfo t4922_m28883_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t734_0_0_0},
};
extern TypeInfo t4922_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28883_MI = 
{
	"Add", NULL, &t4922_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4922_m28883_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4922_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28884_MI = 
{
	"Clear", NULL, &t4922_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t734_0_0_0;
static ParameterInfo t4922_m28885_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t734_0_0_0},
};
extern TypeInfo t4922_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28885_MI = 
{
	"Contains", NULL, &t4922_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4922_m28885_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3044_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4922_m28886_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3044_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4922_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28886_MI = 
{
	"CopyTo", NULL, &t4922_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4922_m28886_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t734_0_0_0;
static ParameterInfo t4922_m28887_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t734_0_0_0},
};
extern TypeInfo t4922_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28887_MI = 
{
	"Remove", NULL, &t4922_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4922_m28887_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4922_MIs[] =
{
	&m28881_MI,
	&m28882_MI,
	&m28883_MI,
	&m28884_MI,
	&m28885_MI,
	&m28886_MI,
	&m28887_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4924_TI;
static TypeInfo* t4922_ITIs[] = 
{
	&t591_TI,
	&t4924_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4922_0_0_0;
extern Il2CppType t4922_1_0_0;
struct t4922;
extern TypeInfo t4922_TI;
extern Il2CppGenericClass t4922_GC;
TypeInfo t4922_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4922_MIs, t4922_PIs, NULL, NULL, NULL, NULL, NULL, &t4922_TI, t4922_ITIs, NULL, &EmptyCustomAttributesCache, &t4922_TI, &t4922_0_0_0, &t4922_1_0_0, NULL, &t4922_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4924_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CharSet>
extern TypeInfo t4924_TI;
extern Il2CppType t3695_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28888_MI = 
{
	"GetEnumerator", NULL, &t4924_TI, &t3695_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4924_MIs[] =
{
	&m28888_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4924_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4924_0_0_0;
extern Il2CppType t4924_1_0_0;
struct t4924;
extern TypeInfo t4924_TI;
extern Il2CppGenericClass t4924_GC;
TypeInfo t4924_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4924_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4924_TI, t4924_ITIs, NULL, &EmptyCustomAttributesCache, &t4924_TI, &t4924_0_0_0, &t4924_1_0_0, NULL, &t4924_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4923_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo m28889_MI;
extern MethodInfo m28890_MI;
static PropertyInfo t4923____Item_PropertyInfo = 
{
	&t4923_TI, "Item", &m28889_MI, &m28890_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4923_PIs[] =
{
	&t4923____Item_PropertyInfo,
	NULL
};
extern Il2CppType t734_0_0_0;
static ParameterInfo t4923_m28891_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t734_0_0_0},
};
extern TypeInfo t4923_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28891_MI = 
{
	"IndexOf", NULL, &t4923_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4923_m28891_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t734_0_0_0;
static ParameterInfo t4923_m28892_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t734_0_0_0},
};
extern TypeInfo t4923_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28892_MI = 
{
	"Insert", NULL, &t4923_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4923_m28892_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4923_m28893_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4923_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28893_MI = 
{
	"RemoveAt", NULL, &t4923_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4923_m28893_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4923_m28889_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4923_TI;
extern Il2CppType t734_0_0_0;
extern void* RuntimeInvoker_t734_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28889_MI = 
{
	"get_Item", NULL, &t4923_TI, &t734_0_0_0, RuntimeInvoker_t734_t16, t4923_m28889_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t734_0_0_0;
static ParameterInfo t4923_m28890_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t734_0_0_0},
};
extern TypeInfo t4923_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28890_MI = 
{
	"set_Item", NULL, &t4923_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4923_m28890_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4923_MIs[] =
{
	&m28891_MI,
	&m28892_MI,
	&m28893_MI,
	&m28889_MI,
	&m28890_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4922_TI;
extern TypeInfo t4924_TI;
static TypeInfo* t4923_ITIs[] = 
{
	&t591_TI,
	&t4922_TI,
	&t4924_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4923_0_0_0;
extern Il2CppType t4923_1_0_0;
struct t4923;
extern TypeInfo t4923_TI;
extern Il2CppGenericClass t4923_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4923_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4923_MIs, t4923_PIs, NULL, NULL, NULL, NULL, NULL, &t4923_TI, t4923_ITIs, NULL, &t1400__CustomAttributeCache, &t4923_TI, &t4923_0_0_0, &t4923_1_0_0, NULL, &t4923_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3696_TI;

#include "t988.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo m28894_MI;
static PropertyInfo t3696____Current_PropertyInfo = 
{
	&t3696_TI, "Current", &m28894_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3696_PIs[] =
{
	&t3696____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3696_TI;
extern Il2CppType t988_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28894_MI = 
{
	"get_Current", NULL, &t3696_TI, &t988_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3696_MIs[] =
{
	&m28894_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3696_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3696_0_0_0;
extern Il2CppType t3696_1_0_0;
struct t3696;
extern TypeInfo t3696_TI;
extern Il2CppGenericClass t3696_GC;
TypeInfo t3696_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3696_MIs, t3696_PIs, NULL, NULL, NULL, NULL, NULL, &t3696_TI, t3696_ITIs, NULL, &EmptyCustomAttributesCache, &t3696_TI, &t3696_0_0_0, &t3696_1_0_0, NULL, &t3696_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2808.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2808_TI;
#include "t2808MD.h"

extern TypeInfo t2808_TI;
extern TypeInfo t988_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16258_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22065_MI;
struct t14;
#define m22065(__this, p0, method) (t988 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22065_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2808_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2808_TI, offsetof(t2808, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2808_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2808_TI, offsetof(t2808, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2808_FIs[] =
{
	&t2808_f0_FieldInfo,
	&t2808_f1_FieldInfo,
	NULL
};
extern MethodInfo m16255_MI;
static PropertyInfo t2808____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2808_TI, "System.Collections.IEnumerator.Current", &m16255_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16258_MI;
static PropertyInfo t2808____Current_PropertyInfo = 
{
	&t2808_TI, "Current", &m16258_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2808_PIs[] =
{
	&t2808____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2808____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2808_m16254_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2808_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16254_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2808_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2808_m16254_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2808_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16255_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2808_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2808_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16256_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2808_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2808_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16257_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2808_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2808_TI;
extern Il2CppType t988_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16258_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2808_TI, &t988_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2808_MIs[] =
{
	&m16254_MI,
	&m16255_MI,
	&m16256_MI,
	&m16257_MI,
	&m16258_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16255_MI;
extern MethodInfo m16257_MI;
extern MethodInfo m16256_MI;
extern MethodInfo m16258_MI;
static MethodInfo* t2808_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16255_MI,
	&m16257_MI,
	&m16256_MI,
	&m16258_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3696_TI;
static TypeInfo* t2808_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3696_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3696_TI;
static Il2CppInterfaceOffsetPair t2808_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3696_TI, 7},
};
extern MethodInfo m16258_MI;
extern TypeInfo t988_TI;
extern MethodInfo m22065_MI;
static void* t2808_RGCTXData[3] = 
{
	&m16258_MI,
	&t988_TI,
	&m22065_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2808_0_0_0;
extern Il2CppType t2808_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2808_TI;
extern Il2CppGenericClass t2808_GC;
extern TypeInfo t14_TI;
TypeInfo t2808_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2808_MIs, t2808_PIs, t2808_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2808_TI, t2808_ITIs, t2808_VT, &EmptyCustomAttributesCache, &t2808_TI, &t2808_0_0_0, &t2808_1_0_0, t2808_IOs, &t2808_GC, NULL, NULL, NULL, t2808_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2808)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4925_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo m28895_MI;
static PropertyInfo t4925____Count_PropertyInfo = 
{
	&t4925_TI, "Count", &m28895_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28896_MI;
static PropertyInfo t4925____IsReadOnly_PropertyInfo = 
{
	&t4925_TI, "IsReadOnly", &m28896_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4925_PIs[] =
{
	&t4925____Count_PropertyInfo,
	&t4925____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4925_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28895_MI = 
{
	"get_Count", NULL, &t4925_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4925_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28896_MI = 
{
	"get_IsReadOnly", NULL, &t4925_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t988_0_0_0;
static ParameterInfo t4925_m28897_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t988_0_0_0},
};
extern TypeInfo t4925_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28897_MI = 
{
	"Add", NULL, &t4925_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4925_m28897_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4925_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28898_MI = 
{
	"Clear", NULL, &t4925_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t988_0_0_0;
static ParameterInfo t4925_m28899_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t988_0_0_0},
};
extern TypeInfo t4925_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28899_MI = 
{
	"Contains", NULL, &t4925_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4925_m28899_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3045_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4925_m28900_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3045_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4925_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28900_MI = 
{
	"CopyTo", NULL, &t4925_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4925_m28900_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t988_0_0_0;
static ParameterInfo t4925_m28901_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t988_0_0_0},
};
extern TypeInfo t4925_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28901_MI = 
{
	"Remove", NULL, &t4925_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4925_m28901_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4925_MIs[] =
{
	&m28895_MI,
	&m28896_MI,
	&m28897_MI,
	&m28898_MI,
	&m28899_MI,
	&m28900_MI,
	&m28901_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4927_TI;
static TypeInfo* t4925_ITIs[] = 
{
	&t591_TI,
	&t4927_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4925_0_0_0;
extern Il2CppType t4925_1_0_0;
struct t4925;
extern TypeInfo t4925_TI;
extern Il2CppGenericClass t4925_GC;
TypeInfo t4925_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4925_MIs, t4925_PIs, NULL, NULL, NULL, NULL, NULL, &t4925_TI, t4925_ITIs, NULL, &EmptyCustomAttributesCache, &t4925_TI, &t4925_0_0_0, &t4925_1_0_0, NULL, &t4925_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4927_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern TypeInfo t4927_TI;
extern Il2CppType t3696_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28902_MI = 
{
	"GetEnumerator", NULL, &t4927_TI, &t3696_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4927_MIs[] =
{
	&m28902_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4927_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4927_0_0_0;
extern Il2CppType t4927_1_0_0;
struct t4927;
extern TypeInfo t4927_TI;
extern Il2CppGenericClass t4927_GC;
TypeInfo t4927_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4927_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4927_TI, t4927_ITIs, NULL, &EmptyCustomAttributesCache, &t4927_TI, &t4927_0_0_0, &t4927_1_0_0, NULL, &t4927_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4926_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo m28903_MI;
extern MethodInfo m28904_MI;
static PropertyInfo t4926____Item_PropertyInfo = 
{
	&t4926_TI, "Item", &m28903_MI, &m28904_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4926_PIs[] =
{
	&t4926____Item_PropertyInfo,
	NULL
};
extern Il2CppType t988_0_0_0;
static ParameterInfo t4926_m28905_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t988_0_0_0},
};
extern TypeInfo t4926_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28905_MI = 
{
	"IndexOf", NULL, &t4926_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4926_m28905_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t988_0_0_0;
static ParameterInfo t4926_m28906_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t988_0_0_0},
};
extern TypeInfo t4926_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28906_MI = 
{
	"Insert", NULL, &t4926_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4926_m28906_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4926_m28907_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4926_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28907_MI = 
{
	"RemoveAt", NULL, &t4926_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4926_m28907_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4926_m28903_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4926_TI;
extern Il2CppType t988_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28903_MI = 
{
	"get_Item", NULL, &t4926_TI, &t988_0_0_0, RuntimeInvoker_t4_t16, t4926_m28903_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t988_0_0_0;
static ParameterInfo t4926_m28904_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t988_0_0_0},
};
extern TypeInfo t4926_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28904_MI = 
{
	"set_Item", NULL, &t4926_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4926_m28904_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4926_MIs[] =
{
	&m28905_MI,
	&m28906_MI,
	&m28907_MI,
	&m28903_MI,
	&m28904_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4925_TI;
extern TypeInfo t4927_TI;
static TypeInfo* t4926_ITIs[] = 
{
	&t591_TI,
	&t4925_TI,
	&t4927_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4926_0_0_0;
extern Il2CppType t4926_1_0_0;
struct t4926;
extern TypeInfo t4926_TI;
extern Il2CppGenericClass t4926_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4926_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4926_MIs, t4926_PIs, NULL, NULL, NULL, NULL, NULL, &t4926_TI, t4926_ITIs, NULL, &t1400__CustomAttributeCache, &t4926_TI, &t4926_0_0_0, &t4926_1_0_0, NULL, &t4926_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3697_TI;

#include "t989.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo m28908_MI;
static PropertyInfo t3697____Current_PropertyInfo = 
{
	&t3697_TI, "Current", &m28908_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3697_PIs[] =
{
	&t3697____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3697_TI;
extern Il2CppType t989_0_0_0;
extern void* RuntimeInvoker_t989 (MethodInfo* method, void* obj, void** args);
MethodInfo m28908_MI = 
{
	"get_Current", NULL, &t3697_TI, &t989_0_0_0, RuntimeInvoker_t989, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3697_MIs[] =
{
	&m28908_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3697_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3697_0_0_0;
extern Il2CppType t3697_1_0_0;
struct t3697;
extern TypeInfo t3697_TI;
extern Il2CppGenericClass t3697_GC;
TypeInfo t3697_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3697_MIs, t3697_PIs, NULL, NULL, NULL, NULL, NULL, &t3697_TI, t3697_ITIs, NULL, &EmptyCustomAttributesCache, &t3697_TI, &t3697_0_0_0, &t3697_1_0_0, NULL, &t3697_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2809.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2809_TI;
#include "t2809MD.h"

extern TypeInfo t2809_TI;
extern TypeInfo t989_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16263_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22076_MI;
struct t14;
 int32_t m22076 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22076_MI;


extern MethodInfo m16259_MI;
 void m16259 (t2809 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16260_MI;
 t4 * m16260 (t2809 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16263(__this, &m16263_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t989_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16261_MI;
 void m16261 (t2809 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16262_MI;
 bool m16262 (t2809 * __this, MethodInfo* method){
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
extern MethodInfo m16263_MI;
 int32_t m16263 (t2809 * __this, MethodInfo* method){
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
		int32_t L_8 = m22076(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22076_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
extern Il2CppType t14_0_0_1;
FieldInfo t2809_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2809_TI, offsetof(t2809, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2809_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2809_TI, offsetof(t2809, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2809_FIs[] =
{
	&t2809_f0_FieldInfo,
	&t2809_f1_FieldInfo,
	NULL
};
extern MethodInfo m16260_MI;
static PropertyInfo t2809____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2809_TI, "System.Collections.IEnumerator.Current", &m16260_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16263_MI;
static PropertyInfo t2809____Current_PropertyInfo = 
{
	&t2809_TI, "Current", &m16263_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2809_PIs[] =
{
	&t2809____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2809____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2809_m16259_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2809_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16259_MI = 
{
	".ctor", (methodPointerType)&m16259, &t2809_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2809_m16259_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2809_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16260_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16260, &t2809_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2809_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16261_MI = 
{
	"Dispose", (methodPointerType)&m16261, &t2809_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2809_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16262_MI = 
{
	"MoveNext", (methodPointerType)&m16262, &t2809_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2809_TI;
extern Il2CppType t989_0_0_0;
extern void* RuntimeInvoker_t989 (MethodInfo* method, void* obj, void** args);
MethodInfo m16263_MI = 
{
	"get_Current", (methodPointerType)&m16263, &t2809_TI, &t989_0_0_0, RuntimeInvoker_t989, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2809_MIs[] =
{
	&m16259_MI,
	&m16260_MI,
	&m16261_MI,
	&m16262_MI,
	&m16263_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16260_MI;
extern MethodInfo m16262_MI;
extern MethodInfo m16261_MI;
extern MethodInfo m16263_MI;
static MethodInfo* t2809_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16260_MI,
	&m16262_MI,
	&m16261_MI,
	&m16263_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3697_TI;
static TypeInfo* t2809_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3697_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3697_TI;
static Il2CppInterfaceOffsetPair t2809_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3697_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2809_0_0_0;
extern Il2CppType t2809_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2809_TI;
extern Il2CppGenericClass t2809_GC;
extern TypeInfo t14_TI;
TypeInfo t2809_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2809_MIs, t2809_PIs, t2809_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2809_TI, t2809_ITIs, t2809_VT, &EmptyCustomAttributesCache, &t2809_TI, &t2809_0_0_0, &t2809_1_0_0, t2809_IOs, &t2809_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2809)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4928_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo m28909_MI;
static PropertyInfo t4928____Count_PropertyInfo = 
{
	&t4928_TI, "Count", &m28909_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28910_MI;
static PropertyInfo t4928____IsReadOnly_PropertyInfo = 
{
	&t4928_TI, "IsReadOnly", &m28910_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4928_PIs[] =
{
	&t4928____Count_PropertyInfo,
	&t4928____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4928_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28909_MI = 
{
	"get_Count", NULL, &t4928_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4928_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28910_MI = 
{
	"get_IsReadOnly", NULL, &t4928_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t989_0_0_0;
static ParameterInfo t4928_m28911_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t989_0_0_0},
};
extern TypeInfo t4928_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28911_MI = 
{
	"Add", NULL, &t4928_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4928_m28911_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4928_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28912_MI = 
{
	"Clear", NULL, &t4928_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t989_0_0_0;
static ParameterInfo t4928_m28913_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t989_0_0_0},
};
extern TypeInfo t4928_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28913_MI = 
{
	"Contains", NULL, &t4928_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4928_m28913_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3046_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4928_m28914_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3046_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4928_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28914_MI = 
{
	"CopyTo", NULL, &t4928_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4928_m28914_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t989_0_0_0;
static ParameterInfo t4928_m28915_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t989_0_0_0},
};
extern TypeInfo t4928_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28915_MI = 
{
	"Remove", NULL, &t4928_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4928_m28915_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4928_MIs[] =
{
	&m28909_MI,
	&m28910_MI,
	&m28911_MI,
	&m28912_MI,
	&m28913_MI,
	&m28914_MI,
	&m28915_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4930_TI;
static TypeInfo* t4928_ITIs[] = 
{
	&t591_TI,
	&t4930_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4928_0_0_0;
extern Il2CppType t4928_1_0_0;
struct t4928;
extern TypeInfo t4928_TI;
extern Il2CppGenericClass t4928_GC;
TypeInfo t4928_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4928_MIs, t4928_PIs, NULL, NULL, NULL, NULL, NULL, &t4928_TI, t4928_ITIs, NULL, &EmptyCustomAttributesCache, &t4928_TI, &t4928_0_0_0, &t4928_1_0_0, NULL, &t4928_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4930_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceType>
extern TypeInfo t4930_TI;
extern Il2CppType t3697_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28916_MI = 
{
	"GetEnumerator", NULL, &t4930_TI, &t3697_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4930_MIs[] =
{
	&m28916_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4930_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4930_0_0_0;
extern Il2CppType t4930_1_0_0;
struct t4930;
extern TypeInfo t4930_TI;
extern Il2CppGenericClass t4930_GC;
TypeInfo t4930_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4930_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4930_TI, t4930_ITIs, NULL, &EmptyCustomAttributesCache, &t4930_TI, &t4930_0_0_0, &t4930_1_0_0, NULL, &t4930_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4929_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo m28917_MI;
extern MethodInfo m28918_MI;
static PropertyInfo t4929____Item_PropertyInfo = 
{
	&t4929_TI, "Item", &m28917_MI, &m28918_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4929_PIs[] =
{
	&t4929____Item_PropertyInfo,
	NULL
};
extern Il2CppType t989_0_0_0;
static ParameterInfo t4929_m28919_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t989_0_0_0},
};
extern TypeInfo t4929_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28919_MI = 
{
	"IndexOf", NULL, &t4929_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4929_m28919_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t989_0_0_0;
static ParameterInfo t4929_m28920_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t989_0_0_0},
};
extern TypeInfo t4929_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28920_MI = 
{
	"Insert", NULL, &t4929_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4929_m28920_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4929_m28921_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4929_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28921_MI = 
{
	"RemoveAt", NULL, &t4929_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4929_m28921_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4929_m28917_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4929_TI;
extern Il2CppType t989_0_0_0;
extern void* RuntimeInvoker_t989_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28917_MI = 
{
	"get_Item", NULL, &t4929_TI, &t989_0_0_0, RuntimeInvoker_t989_t16, t4929_m28917_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t989_0_0_0;
static ParameterInfo t4929_m28918_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t989_0_0_0},
};
extern TypeInfo t4929_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28918_MI = 
{
	"set_Item", NULL, &t4929_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4929_m28918_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4929_MIs[] =
{
	&m28919_MI,
	&m28920_MI,
	&m28921_MI,
	&m28917_MI,
	&m28918_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4928_TI;
extern TypeInfo t4930_TI;
static TypeInfo* t4929_ITIs[] = 
{
	&t591_TI,
	&t4928_TI,
	&t4930_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4929_0_0_0;
extern Il2CppType t4929_1_0_0;
struct t4929;
extern TypeInfo t4929_TI;
extern Il2CppGenericClass t4929_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4929_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4929_MIs, t4929_PIs, NULL, NULL, NULL, NULL, NULL, &t4929_TI, t4929_ITIs, NULL, &t1400__CustomAttributeCache, &t4929_TI, &t4929_0_0_0, &t4929_1_0_0, NULL, &t4929_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
