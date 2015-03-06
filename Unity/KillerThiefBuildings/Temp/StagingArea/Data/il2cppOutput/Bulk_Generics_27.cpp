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
extern TypeInfo t3638_TI;

#include "t900.h"

#include "t14.h"

// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.FileShare>
extern MethodInfo m28082_MI;
static PropertyInfo t3638____Current_PropertyInfo = 
{
	&t3638_TI, "Current", &m28082_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3638_PIs[] =
{
	&t3638____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3638_TI;
extern Il2CppType t900_0_0_0;
extern void* RuntimeInvoker_t900 (MethodInfo* method, void* obj, void** args);
MethodInfo m28082_MI = 
{
	"get_Current", NULL, &t3638_TI, &t900_0_0_0, RuntimeInvoker_t900, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3638_MIs[] =
{
	&m28082_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3638_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3638_0_0_0;
extern Il2CppType t3638_1_0_0;
struct t3638;
extern TypeInfo t3638_TI;
extern Il2CppGenericClass t3638_GC;
TypeInfo t3638_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3638_MIs, t3638_PIs, NULL, NULL, NULL, NULL, NULL, &t3638_TI, t3638_ITIs, NULL, &EmptyCustomAttributesCache, &t3638_TI, &t3638_0_0_0, &t3638_1_0_0, NULL, &t3638_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2750.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2750_TI;
#include "t2750MD.h"

#include "t4.h"
#include "t16.h"
#include "t8.h"
#include "t1269.h"
#include "t15.h"
#include "t17.h"
extern TypeInfo t2750_TI;
extern TypeInfo t900_TI;
extern TypeInfo t1269_TI;
#include "t1269MD.h"
#include "t14MD.h"
extern MethodInfo m15968_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21427_MI;
struct t14;
#include "t1233.h"
 int32_t m21427 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21427_MI;


extern MethodInfo m15964_MI;
 void m15964 (t2750 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15965_MI;
 t4 * m15965 (t2750 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15968(__this, &m15968_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t900_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15966_MI;
 void m15966 (t2750 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15967_MI;
 bool m15967 (t2750 * __this, MethodInfo* method){
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
extern MethodInfo m15968_MI;
 int32_t m15968 (t2750 * __this, MethodInfo* method){
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
		int32_t L_8 = m21427(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21427_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileShare>
extern Il2CppType t14_0_0_1;
FieldInfo t2750_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2750_TI, offsetof(t2750, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2750_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2750_TI, offsetof(t2750, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2750_FIs[] =
{
	&t2750_f0_FieldInfo,
	&t2750_f1_FieldInfo,
	NULL
};
extern MethodInfo m15965_MI;
static PropertyInfo t2750____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2750_TI, "System.Collections.IEnumerator.Current", &m15965_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15968_MI;
static PropertyInfo t2750____Current_PropertyInfo = 
{
	&t2750_TI, "Current", &m15968_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2750_PIs[] =
{
	&t2750____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2750____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2750_m15964_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2750_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15964_MI = 
{
	".ctor", (methodPointerType)&m15964, &t2750_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2750_m15964_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2750_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15965_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15965, &t2750_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2750_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15966_MI = 
{
	"Dispose", (methodPointerType)&m15966, &t2750_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2750_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15967_MI = 
{
	"MoveNext", (methodPointerType)&m15967, &t2750_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2750_TI;
extern Il2CppType t900_0_0_0;
extern void* RuntimeInvoker_t900 (MethodInfo* method, void* obj, void** args);
MethodInfo m15968_MI = 
{
	"get_Current", (methodPointerType)&m15968, &t2750_TI, &t900_0_0_0, RuntimeInvoker_t900, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2750_MIs[] =
{
	&m15964_MI,
	&m15965_MI,
	&m15966_MI,
	&m15967_MI,
	&m15968_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15965_MI;
extern MethodInfo m15967_MI;
extern MethodInfo m15966_MI;
extern MethodInfo m15968_MI;
static MethodInfo* t2750_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15965_MI,
	&m15967_MI,
	&m15966_MI,
	&m15968_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3638_TI;
static TypeInfo* t2750_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3638_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3638_TI;
static Il2CppInterfaceOffsetPair t2750_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3638_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2750_0_0_0;
extern Il2CppType t2750_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2750_TI;
extern Il2CppGenericClass t2750_GC;
extern TypeInfo t14_TI;
TypeInfo t2750_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2750_MIs, t2750_PIs, t2750_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2750_TI, t2750_ITIs, t2750_VT, &EmptyCustomAttributesCache, &t2750_TI, &t2750_0_0_0, &t2750_1_0_0, t2750_IOs, &t2750_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2750)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4751_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileShare>
extern MethodInfo m28083_MI;
static PropertyInfo t4751____Count_PropertyInfo = 
{
	&t4751_TI, "Count", &m28083_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28084_MI;
static PropertyInfo t4751____IsReadOnly_PropertyInfo = 
{
	&t4751_TI, "IsReadOnly", &m28084_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4751_PIs[] =
{
	&t4751____Count_PropertyInfo,
	&t4751____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4751_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28083_MI = 
{
	"get_Count", NULL, &t4751_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4751_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28084_MI = 
{
	"get_IsReadOnly", NULL, &t4751_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t900_0_0_0;
static ParameterInfo t4751_m28085_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t900_0_0_0},
};
extern TypeInfo t4751_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28085_MI = 
{
	"Add", NULL, &t4751_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4751_m28085_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4751_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28086_MI = 
{
	"Clear", NULL, &t4751_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t900_0_0_0;
static ParameterInfo t4751_m28087_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t900_0_0_0},
};
extern TypeInfo t4751_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28087_MI = 
{
	"Contains", NULL, &t4751_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4751_m28087_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2995_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4751_m28088_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2995_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4751_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28088_MI = 
{
	"CopyTo", NULL, &t4751_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4751_m28088_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t900_0_0_0;
static ParameterInfo t4751_m28089_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t900_0_0_0},
};
extern TypeInfo t4751_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28089_MI = 
{
	"Remove", NULL, &t4751_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4751_m28089_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4751_MIs[] =
{
	&m28083_MI,
	&m28084_MI,
	&m28085_MI,
	&m28086_MI,
	&m28087_MI,
	&m28088_MI,
	&m28089_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4753_TI;
static TypeInfo* t4751_ITIs[] = 
{
	&t591_TI,
	&t4753_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4751_0_0_0;
extern Il2CppType t4751_1_0_0;
struct t4751;
extern TypeInfo t4751_TI;
extern Il2CppGenericClass t4751_GC;
TypeInfo t4751_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4751_MIs, t4751_PIs, NULL, NULL, NULL, NULL, NULL, &t4751_TI, t4751_ITIs, NULL, &EmptyCustomAttributesCache, &t4751_TI, &t4751_0_0_0, &t4751_1_0_0, NULL, &t4751_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4753_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileShare>
extern TypeInfo t4753_TI;
extern Il2CppType t3638_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28090_MI = 
{
	"GetEnumerator", NULL, &t4753_TI, &t3638_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4753_MIs[] =
{
	&m28090_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4753_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4753_0_0_0;
extern Il2CppType t4753_1_0_0;
struct t4753;
extern TypeInfo t4753_TI;
extern Il2CppGenericClass t4753_GC;
TypeInfo t4753_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4753_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4753_TI, t4753_ITIs, NULL, &EmptyCustomAttributesCache, &t4753_TI, &t4753_0_0_0, &t4753_1_0_0, NULL, &t4753_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4752_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileShare>
extern MethodInfo m28091_MI;
extern MethodInfo m28092_MI;
static PropertyInfo t4752____Item_PropertyInfo = 
{
	&t4752_TI, "Item", &m28091_MI, &m28092_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4752_PIs[] =
{
	&t4752____Item_PropertyInfo,
	NULL
};
extern Il2CppType t900_0_0_0;
static ParameterInfo t4752_m28093_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t900_0_0_0},
};
extern TypeInfo t4752_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28093_MI = 
{
	"IndexOf", NULL, &t4752_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4752_m28093_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t900_0_0_0;
static ParameterInfo t4752_m28094_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t900_0_0_0},
};
extern TypeInfo t4752_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28094_MI = 
{
	"Insert", NULL, &t4752_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4752_m28094_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4752_m28095_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4752_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28095_MI = 
{
	"RemoveAt", NULL, &t4752_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4752_m28095_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4752_m28091_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4752_TI;
extern Il2CppType t900_0_0_0;
extern void* RuntimeInvoker_t900_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28091_MI = 
{
	"get_Item", NULL, &t4752_TI, &t900_0_0_0, RuntimeInvoker_t900_t16, t4752_m28091_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t900_0_0_0;
static ParameterInfo t4752_m28092_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t900_0_0_0},
};
extern TypeInfo t4752_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28092_MI = 
{
	"set_Item", NULL, &t4752_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4752_m28092_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4752_MIs[] =
{
	&m28093_MI,
	&m28094_MI,
	&m28095_MI,
	&m28091_MI,
	&m28092_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4751_TI;
extern TypeInfo t4753_TI;
static TypeInfo* t4752_ITIs[] = 
{
	&t591_TI,
	&t4751_TI,
	&t4753_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4752_0_0_0;
extern Il2CppType t4752_1_0_0;
struct t4752;
extern TypeInfo t4752_TI;
extern Il2CppGenericClass t4752_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4752_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4752_MIs, t4752_PIs, NULL, NULL, NULL, NULL, NULL, &t4752_TI, t4752_ITIs, NULL, &t1400__CustomAttributeCache, &t4752_TI, &t4752_0_0_0, &t4752_1_0_0, NULL, &t4752_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3639_TI;

#include "t908.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.MonoFileType>
extern MethodInfo m28096_MI;
static PropertyInfo t3639____Current_PropertyInfo = 
{
	&t3639_TI, "Current", &m28096_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3639_PIs[] =
{
	&t3639____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3639_TI;
extern Il2CppType t908_0_0_0;
extern void* RuntimeInvoker_t908 (MethodInfo* method, void* obj, void** args);
MethodInfo m28096_MI = 
{
	"get_Current", NULL, &t3639_TI, &t908_0_0_0, RuntimeInvoker_t908, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3639_MIs[] =
{
	&m28096_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3639_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3639_0_0_0;
extern Il2CppType t3639_1_0_0;
struct t3639;
extern TypeInfo t3639_TI;
extern Il2CppGenericClass t3639_GC;
TypeInfo t3639_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3639_MIs, t3639_PIs, NULL, NULL, NULL, NULL, NULL, &t3639_TI, t3639_ITIs, NULL, &EmptyCustomAttributesCache, &t3639_TI, &t3639_0_0_0, &t3639_1_0_0, NULL, &t3639_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2751.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2751_TI;
#include "t2751MD.h"

extern TypeInfo t2751_TI;
extern TypeInfo t908_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15973_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21438_MI;
struct t14;
 int32_t m21438 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21438_MI;


extern MethodInfo m15969_MI;
 void m15969 (t2751 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15970_MI;
 t4 * m15970 (t2751 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15973(__this, &m15973_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t908_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15971_MI;
 void m15971 (t2751 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15972_MI;
 bool m15972 (t2751 * __this, MethodInfo* method){
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
extern MethodInfo m15973_MI;
 int32_t m15973 (t2751 * __this, MethodInfo* method){
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
		int32_t L_8 = m21438(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21438_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.MonoFileType>
extern Il2CppType t14_0_0_1;
FieldInfo t2751_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2751_TI, offsetof(t2751, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2751_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2751_TI, offsetof(t2751, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2751_FIs[] =
{
	&t2751_f0_FieldInfo,
	&t2751_f1_FieldInfo,
	NULL
};
extern MethodInfo m15970_MI;
static PropertyInfo t2751____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2751_TI, "System.Collections.IEnumerator.Current", &m15970_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15973_MI;
static PropertyInfo t2751____Current_PropertyInfo = 
{
	&t2751_TI, "Current", &m15973_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2751_PIs[] =
{
	&t2751____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2751____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2751_m15969_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2751_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15969_MI = 
{
	".ctor", (methodPointerType)&m15969, &t2751_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2751_m15969_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2751_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15970_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15970, &t2751_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2751_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15971_MI = 
{
	"Dispose", (methodPointerType)&m15971, &t2751_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2751_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15972_MI = 
{
	"MoveNext", (methodPointerType)&m15972, &t2751_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2751_TI;
extern Il2CppType t908_0_0_0;
extern void* RuntimeInvoker_t908 (MethodInfo* method, void* obj, void** args);
MethodInfo m15973_MI = 
{
	"get_Current", (methodPointerType)&m15973, &t2751_TI, &t908_0_0_0, RuntimeInvoker_t908, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2751_MIs[] =
{
	&m15969_MI,
	&m15970_MI,
	&m15971_MI,
	&m15972_MI,
	&m15973_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15970_MI;
extern MethodInfo m15972_MI;
extern MethodInfo m15971_MI;
extern MethodInfo m15973_MI;
static MethodInfo* t2751_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15970_MI,
	&m15972_MI,
	&m15971_MI,
	&m15973_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3639_TI;
static TypeInfo* t2751_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3639_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3639_TI;
static Il2CppInterfaceOffsetPair t2751_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3639_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2751_0_0_0;
extern Il2CppType t2751_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2751_TI;
extern Il2CppGenericClass t2751_GC;
extern TypeInfo t14_TI;
TypeInfo t2751_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2751_MIs, t2751_PIs, t2751_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2751_TI, t2751_ITIs, t2751_VT, &EmptyCustomAttributesCache, &t2751_TI, &t2751_0_0_0, &t2751_1_0_0, t2751_IOs, &t2751_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2751)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4754_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.MonoFileType>
extern MethodInfo m28097_MI;
static PropertyInfo t4754____Count_PropertyInfo = 
{
	&t4754_TI, "Count", &m28097_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28098_MI;
static PropertyInfo t4754____IsReadOnly_PropertyInfo = 
{
	&t4754_TI, "IsReadOnly", &m28098_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4754_PIs[] =
{
	&t4754____Count_PropertyInfo,
	&t4754____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4754_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28097_MI = 
{
	"get_Count", NULL, &t4754_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4754_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28098_MI = 
{
	"get_IsReadOnly", NULL, &t4754_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t908_0_0_0;
static ParameterInfo t4754_m28099_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t908_0_0_0},
};
extern TypeInfo t4754_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28099_MI = 
{
	"Add", NULL, &t4754_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4754_m28099_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4754_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28100_MI = 
{
	"Clear", NULL, &t4754_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t908_0_0_0;
static ParameterInfo t4754_m28101_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t908_0_0_0},
};
extern TypeInfo t4754_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28101_MI = 
{
	"Contains", NULL, &t4754_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4754_m28101_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2996_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4754_m28102_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2996_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4754_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28102_MI = 
{
	"CopyTo", NULL, &t4754_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4754_m28102_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t908_0_0_0;
static ParameterInfo t4754_m28103_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t908_0_0_0},
};
extern TypeInfo t4754_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28103_MI = 
{
	"Remove", NULL, &t4754_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4754_m28103_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4754_MIs[] =
{
	&m28097_MI,
	&m28098_MI,
	&m28099_MI,
	&m28100_MI,
	&m28101_MI,
	&m28102_MI,
	&m28103_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4756_TI;
static TypeInfo* t4754_ITIs[] = 
{
	&t591_TI,
	&t4756_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4754_0_0_0;
extern Il2CppType t4754_1_0_0;
struct t4754;
extern TypeInfo t4754_TI;
extern Il2CppGenericClass t4754_GC;
TypeInfo t4754_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4754_MIs, t4754_PIs, NULL, NULL, NULL, NULL, NULL, &t4754_TI, t4754_ITIs, NULL, &EmptyCustomAttributesCache, &t4754_TI, &t4754_0_0_0, &t4754_1_0_0, NULL, &t4754_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4756_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.MonoFileType>
extern TypeInfo t4756_TI;
extern Il2CppType t3639_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28104_MI = 
{
	"GetEnumerator", NULL, &t4756_TI, &t3639_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4756_MIs[] =
{
	&m28104_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4756_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4756_0_0_0;
extern Il2CppType t4756_1_0_0;
struct t4756;
extern TypeInfo t4756_TI;
extern Il2CppGenericClass t4756_GC;
TypeInfo t4756_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4756_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4756_TI, t4756_ITIs, NULL, &EmptyCustomAttributesCache, &t4756_TI, &t4756_0_0_0, &t4756_1_0_0, NULL, &t4756_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4755_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.MonoFileType>
extern MethodInfo m28105_MI;
extern MethodInfo m28106_MI;
static PropertyInfo t4755____Item_PropertyInfo = 
{
	&t4755_TI, "Item", &m28105_MI, &m28106_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4755_PIs[] =
{
	&t4755____Item_PropertyInfo,
	NULL
};
extern Il2CppType t908_0_0_0;
static ParameterInfo t4755_m28107_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t908_0_0_0},
};
extern TypeInfo t4755_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28107_MI = 
{
	"IndexOf", NULL, &t4755_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4755_m28107_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t908_0_0_0;
static ParameterInfo t4755_m28108_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t908_0_0_0},
};
extern TypeInfo t4755_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28108_MI = 
{
	"Insert", NULL, &t4755_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4755_m28108_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4755_m28109_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4755_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28109_MI = 
{
	"RemoveAt", NULL, &t4755_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4755_m28109_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4755_m28105_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4755_TI;
extern Il2CppType t908_0_0_0;
extern void* RuntimeInvoker_t908_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28105_MI = 
{
	"get_Item", NULL, &t4755_TI, &t908_0_0_0, RuntimeInvoker_t908_t16, t4755_m28105_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t908_0_0_0;
static ParameterInfo t4755_m28106_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t908_0_0_0},
};
extern TypeInfo t4755_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28106_MI = 
{
	"set_Item", NULL, &t4755_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4755_m28106_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4755_MIs[] =
{
	&m28107_MI,
	&m28108_MI,
	&m28109_MI,
	&m28105_MI,
	&m28106_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4754_TI;
extern TypeInfo t4756_TI;
static TypeInfo* t4755_ITIs[] = 
{
	&t591_TI,
	&t4754_TI,
	&t4756_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4755_0_0_0;
extern Il2CppType t4755_1_0_0;
struct t4755;
extern TypeInfo t4755_TI;
extern Il2CppGenericClass t4755_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4755_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4755_MIs, t4755_PIs, NULL, NULL, NULL, NULL, NULL, &t4755_TI, t4755_ITIs, NULL, &t1400__CustomAttributeCache, &t4755_TI, &t4755_0_0_0, &t4755_1_0_0, NULL, &t4755_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3640_TI;

#include "t910.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.MonoIOError>
extern MethodInfo m28110_MI;
static PropertyInfo t3640____Current_PropertyInfo = 
{
	&t3640_TI, "Current", &m28110_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3640_PIs[] =
{
	&t3640____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3640_TI;
extern Il2CppType t910_0_0_0;
extern void* RuntimeInvoker_t910 (MethodInfo* method, void* obj, void** args);
MethodInfo m28110_MI = 
{
	"get_Current", NULL, &t3640_TI, &t910_0_0_0, RuntimeInvoker_t910, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3640_MIs[] =
{
	&m28110_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3640_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3640_0_0_0;
extern Il2CppType t3640_1_0_0;
struct t3640;
extern TypeInfo t3640_TI;
extern Il2CppGenericClass t3640_GC;
TypeInfo t3640_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3640_MIs, t3640_PIs, NULL, NULL, NULL, NULL, NULL, &t3640_TI, t3640_ITIs, NULL, &EmptyCustomAttributesCache, &t3640_TI, &t3640_0_0_0, &t3640_1_0_0, NULL, &t3640_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2752.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2752_TI;
#include "t2752MD.h"

extern TypeInfo t2752_TI;
extern TypeInfo t910_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15978_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21449_MI;
struct t14;
 int32_t m21449 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21449_MI;


extern MethodInfo m15974_MI;
 void m15974 (t2752 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15975_MI;
 t4 * m15975 (t2752 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15978(__this, &m15978_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t910_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15976_MI;
 void m15976 (t2752 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15977_MI;
 bool m15977 (t2752 * __this, MethodInfo* method){
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
extern MethodInfo m15978_MI;
 int32_t m15978 (t2752 * __this, MethodInfo* method){
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
		int32_t L_8 = m21449(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21449_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.MonoIOError>
extern Il2CppType t14_0_0_1;
FieldInfo t2752_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2752_TI, offsetof(t2752, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2752_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2752_TI, offsetof(t2752, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2752_FIs[] =
{
	&t2752_f0_FieldInfo,
	&t2752_f1_FieldInfo,
	NULL
};
extern MethodInfo m15975_MI;
static PropertyInfo t2752____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2752_TI, "System.Collections.IEnumerator.Current", &m15975_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15978_MI;
static PropertyInfo t2752____Current_PropertyInfo = 
{
	&t2752_TI, "Current", &m15978_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2752_PIs[] =
{
	&t2752____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2752____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2752_m15974_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2752_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15974_MI = 
{
	".ctor", (methodPointerType)&m15974, &t2752_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2752_m15974_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2752_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15975_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15975, &t2752_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2752_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15976_MI = 
{
	"Dispose", (methodPointerType)&m15976, &t2752_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2752_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15977_MI = 
{
	"MoveNext", (methodPointerType)&m15977, &t2752_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2752_TI;
extern Il2CppType t910_0_0_0;
extern void* RuntimeInvoker_t910 (MethodInfo* method, void* obj, void** args);
MethodInfo m15978_MI = 
{
	"get_Current", (methodPointerType)&m15978, &t2752_TI, &t910_0_0_0, RuntimeInvoker_t910, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2752_MIs[] =
{
	&m15974_MI,
	&m15975_MI,
	&m15976_MI,
	&m15977_MI,
	&m15978_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15975_MI;
extern MethodInfo m15977_MI;
extern MethodInfo m15976_MI;
extern MethodInfo m15978_MI;
static MethodInfo* t2752_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15975_MI,
	&m15977_MI,
	&m15976_MI,
	&m15978_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3640_TI;
static TypeInfo* t2752_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3640_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3640_TI;
static Il2CppInterfaceOffsetPair t2752_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3640_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2752_0_0_0;
extern Il2CppType t2752_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2752_TI;
extern Il2CppGenericClass t2752_GC;
extern TypeInfo t14_TI;
TypeInfo t2752_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2752_MIs, t2752_PIs, t2752_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2752_TI, t2752_ITIs, t2752_VT, &EmptyCustomAttributesCache, &t2752_TI, &t2752_0_0_0, &t2752_1_0_0, t2752_IOs, &t2752_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2752)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4757_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.MonoIOError>
extern MethodInfo m28111_MI;
static PropertyInfo t4757____Count_PropertyInfo = 
{
	&t4757_TI, "Count", &m28111_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28112_MI;
static PropertyInfo t4757____IsReadOnly_PropertyInfo = 
{
	&t4757_TI, "IsReadOnly", &m28112_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4757_PIs[] =
{
	&t4757____Count_PropertyInfo,
	&t4757____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4757_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28111_MI = 
{
	"get_Count", NULL, &t4757_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4757_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28112_MI = 
{
	"get_IsReadOnly", NULL, &t4757_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t910_0_0_0;
static ParameterInfo t4757_m28113_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t910_0_0_0},
};
extern TypeInfo t4757_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28113_MI = 
{
	"Add", NULL, &t4757_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4757_m28113_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4757_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28114_MI = 
{
	"Clear", NULL, &t4757_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t910_0_0_0;
static ParameterInfo t4757_m28115_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t910_0_0_0},
};
extern TypeInfo t4757_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28115_MI = 
{
	"Contains", NULL, &t4757_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4757_m28115_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2997_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4757_m28116_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2997_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4757_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28116_MI = 
{
	"CopyTo", NULL, &t4757_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4757_m28116_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t910_0_0_0;
static ParameterInfo t4757_m28117_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t910_0_0_0},
};
extern TypeInfo t4757_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28117_MI = 
{
	"Remove", NULL, &t4757_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4757_m28117_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4757_MIs[] =
{
	&m28111_MI,
	&m28112_MI,
	&m28113_MI,
	&m28114_MI,
	&m28115_MI,
	&m28116_MI,
	&m28117_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4759_TI;
static TypeInfo* t4757_ITIs[] = 
{
	&t591_TI,
	&t4759_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4757_0_0_0;
extern Il2CppType t4757_1_0_0;
struct t4757;
extern TypeInfo t4757_TI;
extern Il2CppGenericClass t4757_GC;
TypeInfo t4757_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4757_MIs, t4757_PIs, NULL, NULL, NULL, NULL, NULL, &t4757_TI, t4757_ITIs, NULL, &EmptyCustomAttributesCache, &t4757_TI, &t4757_0_0_0, &t4757_1_0_0, NULL, &t4757_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4759_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.MonoIOError>
extern TypeInfo t4759_TI;
extern Il2CppType t3640_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28118_MI = 
{
	"GetEnumerator", NULL, &t4759_TI, &t3640_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4759_MIs[] =
{
	&m28118_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4759_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4759_0_0_0;
extern Il2CppType t4759_1_0_0;
struct t4759;
extern TypeInfo t4759_TI;
extern Il2CppGenericClass t4759_GC;
TypeInfo t4759_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4759_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4759_TI, t4759_ITIs, NULL, &EmptyCustomAttributesCache, &t4759_TI, &t4759_0_0_0, &t4759_1_0_0, NULL, &t4759_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4758_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.MonoIOError>
extern MethodInfo m28119_MI;
extern MethodInfo m28120_MI;
static PropertyInfo t4758____Item_PropertyInfo = 
{
	&t4758_TI, "Item", &m28119_MI, &m28120_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4758_PIs[] =
{
	&t4758____Item_PropertyInfo,
	NULL
};
extern Il2CppType t910_0_0_0;
static ParameterInfo t4758_m28121_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t910_0_0_0},
};
extern TypeInfo t4758_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28121_MI = 
{
	"IndexOf", NULL, &t4758_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4758_m28121_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t910_0_0_0;
static ParameterInfo t4758_m28122_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t910_0_0_0},
};
extern TypeInfo t4758_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28122_MI = 
{
	"Insert", NULL, &t4758_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4758_m28122_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4758_m28123_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4758_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28123_MI = 
{
	"RemoveAt", NULL, &t4758_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4758_m28123_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4758_m28119_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4758_TI;
extern Il2CppType t910_0_0_0;
extern void* RuntimeInvoker_t910_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28119_MI = 
{
	"get_Item", NULL, &t4758_TI, &t910_0_0_0, RuntimeInvoker_t910_t16, t4758_m28119_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t910_0_0_0;
static ParameterInfo t4758_m28120_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t910_0_0_0},
};
extern TypeInfo t4758_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28120_MI = 
{
	"set_Item", NULL, &t4758_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4758_m28120_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4758_MIs[] =
{
	&m28121_MI,
	&m28122_MI,
	&m28123_MI,
	&m28119_MI,
	&m28120_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4757_TI;
extern TypeInfo t4759_TI;
static TypeInfo* t4758_ITIs[] = 
{
	&t591_TI,
	&t4757_TI,
	&t4759_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4758_0_0_0;
extern Il2CppType t4758_1_0_0;
struct t4758;
extern TypeInfo t4758_TI;
extern Il2CppGenericClass t4758_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4758_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4758_MIs, t4758_PIs, NULL, NULL, NULL, NULL, NULL, &t4758_TI, t4758_ITIs, NULL, &t1400__CustomAttributeCache, &t4758_TI, &t4758_0_0_0, &t4758_1_0_0, NULL, &t4758_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3641_TI;

#include "t903.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.SeekOrigin>
extern MethodInfo m28124_MI;
static PropertyInfo t3641____Current_PropertyInfo = 
{
	&t3641_TI, "Current", &m28124_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3641_PIs[] =
{
	&t3641____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3641_TI;
extern Il2CppType t903_0_0_0;
extern void* RuntimeInvoker_t903 (MethodInfo* method, void* obj, void** args);
MethodInfo m28124_MI = 
{
	"get_Current", NULL, &t3641_TI, &t903_0_0_0, RuntimeInvoker_t903, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3641_MIs[] =
{
	&m28124_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3641_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3641_0_0_0;
extern Il2CppType t3641_1_0_0;
struct t3641;
extern TypeInfo t3641_TI;
extern Il2CppGenericClass t3641_GC;
TypeInfo t3641_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3641_MIs, t3641_PIs, NULL, NULL, NULL, NULL, NULL, &t3641_TI, t3641_ITIs, NULL, &EmptyCustomAttributesCache, &t3641_TI, &t3641_0_0_0, &t3641_1_0_0, NULL, &t3641_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2753.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2753_TI;
#include "t2753MD.h"

extern TypeInfo t2753_TI;
extern TypeInfo t903_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15983_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21460_MI;
struct t14;
 int32_t m21460 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21460_MI;


extern MethodInfo m15979_MI;
 void m15979 (t2753 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15980_MI;
 t4 * m15980 (t2753 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15983(__this, &m15983_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t903_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15981_MI;
 void m15981 (t2753 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15982_MI;
 bool m15982 (t2753 * __this, MethodInfo* method){
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
extern MethodInfo m15983_MI;
 int32_t m15983 (t2753 * __this, MethodInfo* method){
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
		int32_t L_8 = m21460(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21460_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.SeekOrigin>
extern Il2CppType t14_0_0_1;
FieldInfo t2753_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2753_TI, offsetof(t2753, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2753_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2753_TI, offsetof(t2753, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2753_FIs[] =
{
	&t2753_f0_FieldInfo,
	&t2753_f1_FieldInfo,
	NULL
};
extern MethodInfo m15980_MI;
static PropertyInfo t2753____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2753_TI, "System.Collections.IEnumerator.Current", &m15980_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15983_MI;
static PropertyInfo t2753____Current_PropertyInfo = 
{
	&t2753_TI, "Current", &m15983_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2753_PIs[] =
{
	&t2753____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2753____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2753_m15979_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2753_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15979_MI = 
{
	".ctor", (methodPointerType)&m15979, &t2753_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2753_m15979_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2753_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15980_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15980, &t2753_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2753_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15981_MI = 
{
	"Dispose", (methodPointerType)&m15981, &t2753_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2753_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15982_MI = 
{
	"MoveNext", (methodPointerType)&m15982, &t2753_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2753_TI;
extern Il2CppType t903_0_0_0;
extern void* RuntimeInvoker_t903 (MethodInfo* method, void* obj, void** args);
MethodInfo m15983_MI = 
{
	"get_Current", (methodPointerType)&m15983, &t2753_TI, &t903_0_0_0, RuntimeInvoker_t903, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2753_MIs[] =
{
	&m15979_MI,
	&m15980_MI,
	&m15981_MI,
	&m15982_MI,
	&m15983_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15980_MI;
extern MethodInfo m15982_MI;
extern MethodInfo m15981_MI;
extern MethodInfo m15983_MI;
static MethodInfo* t2753_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15980_MI,
	&m15982_MI,
	&m15981_MI,
	&m15983_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3641_TI;
static TypeInfo* t2753_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3641_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3641_TI;
static Il2CppInterfaceOffsetPair t2753_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3641_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2753_0_0_0;
extern Il2CppType t2753_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2753_TI;
extern Il2CppGenericClass t2753_GC;
extern TypeInfo t14_TI;
TypeInfo t2753_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2753_MIs, t2753_PIs, t2753_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2753_TI, t2753_ITIs, t2753_VT, &EmptyCustomAttributesCache, &t2753_TI, &t2753_0_0_0, &t2753_1_0_0, t2753_IOs, &t2753_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2753)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4760_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>
extern MethodInfo m28125_MI;
static PropertyInfo t4760____Count_PropertyInfo = 
{
	&t4760_TI, "Count", &m28125_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28126_MI;
static PropertyInfo t4760____IsReadOnly_PropertyInfo = 
{
	&t4760_TI, "IsReadOnly", &m28126_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4760_PIs[] =
{
	&t4760____Count_PropertyInfo,
	&t4760____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4760_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28125_MI = 
{
	"get_Count", NULL, &t4760_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4760_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28126_MI = 
{
	"get_IsReadOnly", NULL, &t4760_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t903_0_0_0;
static ParameterInfo t4760_m28127_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t903_0_0_0},
};
extern TypeInfo t4760_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28127_MI = 
{
	"Add", NULL, &t4760_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4760_m28127_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4760_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28128_MI = 
{
	"Clear", NULL, &t4760_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t903_0_0_0;
static ParameterInfo t4760_m28129_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t903_0_0_0},
};
extern TypeInfo t4760_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28129_MI = 
{
	"Contains", NULL, &t4760_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4760_m28129_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2998_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4760_m28130_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2998_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4760_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28130_MI = 
{
	"CopyTo", NULL, &t4760_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4760_m28130_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t903_0_0_0;
static ParameterInfo t4760_m28131_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t903_0_0_0},
};
extern TypeInfo t4760_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28131_MI = 
{
	"Remove", NULL, &t4760_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4760_m28131_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4760_MIs[] =
{
	&m28125_MI,
	&m28126_MI,
	&m28127_MI,
	&m28128_MI,
	&m28129_MI,
	&m28130_MI,
	&m28131_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4762_TI;
static TypeInfo* t4760_ITIs[] = 
{
	&t591_TI,
	&t4762_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4760_0_0_0;
extern Il2CppType t4760_1_0_0;
struct t4760;
extern TypeInfo t4760_TI;
extern Il2CppGenericClass t4760_GC;
TypeInfo t4760_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4760_MIs, t4760_PIs, NULL, NULL, NULL, NULL, NULL, &t4760_TI, t4760_ITIs, NULL, &EmptyCustomAttributesCache, &t4760_TI, &t4760_0_0_0, &t4760_1_0_0, NULL, &t4760_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4762_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.SeekOrigin>
extern TypeInfo t4762_TI;
extern Il2CppType t3641_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28132_MI = 
{
	"GetEnumerator", NULL, &t4762_TI, &t3641_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4762_MIs[] =
{
	&m28132_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4762_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4762_0_0_0;
extern Il2CppType t4762_1_0_0;
struct t4762;
extern TypeInfo t4762_TI;
extern Il2CppGenericClass t4762_GC;
TypeInfo t4762_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4762_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4762_TI, t4762_ITIs, NULL, &EmptyCustomAttributesCache, &t4762_TI, &t4762_0_0_0, &t4762_1_0_0, NULL, &t4762_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4761_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.SeekOrigin>
extern MethodInfo m28133_MI;
extern MethodInfo m28134_MI;
static PropertyInfo t4761____Item_PropertyInfo = 
{
	&t4761_TI, "Item", &m28133_MI, &m28134_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4761_PIs[] =
{
	&t4761____Item_PropertyInfo,
	NULL
};
extern Il2CppType t903_0_0_0;
static ParameterInfo t4761_m28135_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t903_0_0_0},
};
extern TypeInfo t4761_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28135_MI = 
{
	"IndexOf", NULL, &t4761_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4761_m28135_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t903_0_0_0;
static ParameterInfo t4761_m28136_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t903_0_0_0},
};
extern TypeInfo t4761_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28136_MI = 
{
	"Insert", NULL, &t4761_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4761_m28136_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4761_m28137_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4761_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28137_MI = 
{
	"RemoveAt", NULL, &t4761_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4761_m28137_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4761_m28133_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4761_TI;
extern Il2CppType t903_0_0_0;
extern void* RuntimeInvoker_t903_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28133_MI = 
{
	"get_Item", NULL, &t4761_TI, &t903_0_0_0, RuntimeInvoker_t903_t16, t4761_m28133_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t903_0_0_0;
static ParameterInfo t4761_m28134_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t903_0_0_0},
};
extern TypeInfo t4761_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28134_MI = 
{
	"set_Item", NULL, &t4761_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4761_m28134_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4761_MIs[] =
{
	&m28135_MI,
	&m28136_MI,
	&m28137_MI,
	&m28133_MI,
	&m28134_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4760_TI;
extern TypeInfo t4762_TI;
static TypeInfo* t4761_ITIs[] = 
{
	&t591_TI,
	&t4760_TI,
	&t4762_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4761_0_0_0;
extern Il2CppType t4761_1_0_0;
struct t4761;
extern TypeInfo t4761_TI;
extern Il2CppGenericClass t4761_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4761_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4761_MIs, t4761_PIs, NULL, NULL, NULL, NULL, NULL, &t4761_TI, t4761_ITIs, NULL, &t1400__CustomAttributeCache, &t4761_TI, &t4761_0_0_0, &t4761_1_0_0, NULL, &t4761_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3642_TI;

#include "t923.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ModuleBuilder>
extern MethodInfo m28138_MI;
static PropertyInfo t3642____Current_PropertyInfo = 
{
	&t3642_TI, "Current", &m28138_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3642_PIs[] =
{
	&t3642____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3642_TI;
extern Il2CppType t923_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28138_MI = 
{
	"get_Current", NULL, &t3642_TI, &t923_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3642_MIs[] =
{
	&m28138_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3642_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3642_0_0_0;
extern Il2CppType t3642_1_0_0;
struct t3642;
extern TypeInfo t3642_TI;
extern Il2CppGenericClass t3642_GC;
TypeInfo t3642_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3642_MIs, t3642_PIs, NULL, NULL, NULL, NULL, NULL, &t3642_TI, t3642_ITIs, NULL, &EmptyCustomAttributesCache, &t3642_TI, &t3642_0_0_0, &t3642_1_0_0, NULL, &t3642_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2754.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2754_TI;
#include "t2754MD.h"

extern TypeInfo t2754_TI;
extern TypeInfo t923_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15988_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21471_MI;
struct t14;
struct t14;
 t4 * m16794_gshared (t14 * __this, int32_t p0, MethodInfo* method);
#define m16794(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
#define m21471(__this, p0, method) (t923 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21471_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>
extern Il2CppType t14_0_0_1;
FieldInfo t2754_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2754_TI, offsetof(t2754, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2754_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2754_TI, offsetof(t2754, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2754_FIs[] =
{
	&t2754_f0_FieldInfo,
	&t2754_f1_FieldInfo,
	NULL
};
extern MethodInfo m15985_MI;
static PropertyInfo t2754____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2754_TI, "System.Collections.IEnumerator.Current", &m15985_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15988_MI;
static PropertyInfo t2754____Current_PropertyInfo = 
{
	&t2754_TI, "Current", &m15988_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2754_PIs[] =
{
	&t2754____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2754____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2754_m15984_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2754_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15984_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2754_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2754_m15984_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2754_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15985_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2754_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2754_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15986_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2754_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2754_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15987_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2754_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2754_TI;
extern Il2CppType t923_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15988_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2754_TI, &t923_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2754_MIs[] =
{
	&m15984_MI,
	&m15985_MI,
	&m15986_MI,
	&m15987_MI,
	&m15988_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15985_MI;
extern MethodInfo m15987_MI;
extern MethodInfo m15986_MI;
extern MethodInfo m15988_MI;
static MethodInfo* t2754_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15985_MI,
	&m15987_MI,
	&m15986_MI,
	&m15988_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3642_TI;
static TypeInfo* t2754_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3642_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3642_TI;
static Il2CppInterfaceOffsetPair t2754_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3642_TI, 7},
};
extern MethodInfo m15988_MI;
extern TypeInfo t923_TI;
extern MethodInfo m21471_MI;
static void* t2754_RGCTXData[3] = 
{
	&m15988_MI,
	&t923_TI,
	&m21471_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2754_0_0_0;
extern Il2CppType t2754_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2754_TI;
extern Il2CppGenericClass t2754_GC;
extern TypeInfo t14_TI;
TypeInfo t2754_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2754_MIs, t2754_PIs, t2754_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2754_TI, t2754_ITIs, t2754_VT, &EmptyCustomAttributesCache, &t2754_TI, &t2754_0_0_0, &t2754_1_0_0, t2754_IOs, &t2754_GC, NULL, NULL, NULL, t2754_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2754)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4763_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>
extern MethodInfo m28139_MI;
static PropertyInfo t4763____Count_PropertyInfo = 
{
	&t4763_TI, "Count", &m28139_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28140_MI;
static PropertyInfo t4763____IsReadOnly_PropertyInfo = 
{
	&t4763_TI, "IsReadOnly", &m28140_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4763_PIs[] =
{
	&t4763____Count_PropertyInfo,
	&t4763____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4763_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28139_MI = 
{
	"get_Count", NULL, &t4763_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4763_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28140_MI = 
{
	"get_IsReadOnly", NULL, &t4763_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t923_0_0_0;
static ParameterInfo t4763_m28141_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t923_0_0_0},
};
extern TypeInfo t4763_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28141_MI = 
{
	"Add", NULL, &t4763_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4763_m28141_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4763_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28142_MI = 
{
	"Clear", NULL, &t4763_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t923_0_0_0;
static ParameterInfo t4763_m28143_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t923_0_0_0},
};
extern TypeInfo t4763_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28143_MI = 
{
	"Contains", NULL, &t4763_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4763_m28143_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t922_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4763_m28144_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t922_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4763_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28144_MI = 
{
	"CopyTo", NULL, &t4763_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4763_m28144_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t923_0_0_0;
static ParameterInfo t4763_m28145_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t923_0_0_0},
};
extern TypeInfo t4763_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28145_MI = 
{
	"Remove", NULL, &t4763_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4763_m28145_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4763_MIs[] =
{
	&m28139_MI,
	&m28140_MI,
	&m28141_MI,
	&m28142_MI,
	&m28143_MI,
	&m28144_MI,
	&m28145_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4765_TI;
static TypeInfo* t4763_ITIs[] = 
{
	&t591_TI,
	&t4765_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4763_0_0_0;
extern Il2CppType t4763_1_0_0;
struct t4763;
extern TypeInfo t4763_TI;
extern Il2CppGenericClass t4763_GC;
TypeInfo t4763_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4763_MIs, t4763_PIs, NULL, NULL, NULL, NULL, NULL, &t4763_TI, t4763_ITIs, NULL, &EmptyCustomAttributesCache, &t4763_TI, &t4763_0_0_0, &t4763_1_0_0, NULL, &t4763_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4765_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ModuleBuilder>
extern TypeInfo t4765_TI;
extern Il2CppType t3642_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28146_MI = 
{
	"GetEnumerator", NULL, &t4765_TI, &t3642_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4765_MIs[] =
{
	&m28146_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4765_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4765_0_0_0;
extern Il2CppType t4765_1_0_0;
struct t4765;
extern TypeInfo t4765_TI;
extern Il2CppGenericClass t4765_GC;
TypeInfo t4765_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4765_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4765_TI, t4765_ITIs, NULL, &EmptyCustomAttributesCache, &t4765_TI, &t4765_0_0_0, &t4765_1_0_0, NULL, &t4765_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4764_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>
extern MethodInfo m28147_MI;
extern MethodInfo m28148_MI;
static PropertyInfo t4764____Item_PropertyInfo = 
{
	&t4764_TI, "Item", &m28147_MI, &m28148_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4764_PIs[] =
{
	&t4764____Item_PropertyInfo,
	NULL
};
extern Il2CppType t923_0_0_0;
static ParameterInfo t4764_m28149_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t923_0_0_0},
};
extern TypeInfo t4764_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28149_MI = 
{
	"IndexOf", NULL, &t4764_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4764_m28149_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t923_0_0_0;
static ParameterInfo t4764_m28150_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t923_0_0_0},
};
extern TypeInfo t4764_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28150_MI = 
{
	"Insert", NULL, &t4764_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4764_m28150_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4764_m28151_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4764_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28151_MI = 
{
	"RemoveAt", NULL, &t4764_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4764_m28151_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4764_m28147_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4764_TI;
extern Il2CppType t923_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28147_MI = 
{
	"get_Item", NULL, &t4764_TI, &t923_0_0_0, RuntimeInvoker_t4_t16, t4764_m28147_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t923_0_0_0;
static ParameterInfo t4764_m28148_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t923_0_0_0},
};
extern TypeInfo t4764_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28148_MI = 
{
	"set_Item", NULL, &t4764_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4764_m28148_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4764_MIs[] =
{
	&m28149_MI,
	&m28150_MI,
	&m28151_MI,
	&m28147_MI,
	&m28148_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4763_TI;
extern TypeInfo t4765_TI;
static TypeInfo* t4764_ITIs[] = 
{
	&t591_TI,
	&t4763_TI,
	&t4765_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4764_0_0_0;
extern Il2CppType t4764_1_0_0;
struct t4764;
extern TypeInfo t4764_TI;
extern Il2CppGenericClass t4764_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4764_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4764_MIs, t4764_PIs, NULL, NULL, NULL, NULL, NULL, &t4764_TI, t4764_ITIs, NULL, &t1400__CustomAttributeCache, &t4764_TI, &t4764_0_0_0, &t4764_1_0_0, NULL, &t4764_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4766_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>
extern MethodInfo m28152_MI;
static PropertyInfo t4766____Count_PropertyInfo = 
{
	&t4766_TI, "Count", &m28152_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28153_MI;
static PropertyInfo t4766____IsReadOnly_PropertyInfo = 
{
	&t4766_TI, "IsReadOnly", &m28153_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4766_PIs[] =
{
	&t4766____Count_PropertyInfo,
	&t4766____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4766_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28152_MI = 
{
	"get_Count", NULL, &t4766_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4766_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28153_MI = 
{
	"get_IsReadOnly", NULL, &t4766_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1501_0_0_0;
static ParameterInfo t4766_m28154_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1501_0_0_0},
};
extern TypeInfo t4766_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28154_MI = 
{
	"Add", NULL, &t4766_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4766_m28154_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4766_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28155_MI = 
{
	"Clear", NULL, &t4766_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1501_0_0_0;
static ParameterInfo t4766_m28156_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1501_0_0_0},
};
extern TypeInfo t4766_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28156_MI = 
{
	"Contains", NULL, &t4766_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4766_m28156_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2999_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4766_m28157_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2999_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4766_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28157_MI = 
{
	"CopyTo", NULL, &t4766_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4766_m28157_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1501_0_0_0;
static ParameterInfo t4766_m28158_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1501_0_0_0},
};
extern TypeInfo t4766_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28158_MI = 
{
	"Remove", NULL, &t4766_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4766_m28158_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4766_MIs[] =
{
	&m28152_MI,
	&m28153_MI,
	&m28154_MI,
	&m28155_MI,
	&m28156_MI,
	&m28157_MI,
	&m28158_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4768_TI;
static TypeInfo* t4766_ITIs[] = 
{
	&t591_TI,
	&t4768_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4766_0_0_0;
extern Il2CppType t4766_1_0_0;
struct t4766;
extern TypeInfo t4766_TI;
extern Il2CppGenericClass t4766_GC;
TypeInfo t4766_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4766_MIs, t4766_PIs, NULL, NULL, NULL, NULL, NULL, &t4766_TI, t4766_ITIs, NULL, &EmptyCustomAttributesCache, &t4766_TI, &t4766_0_0_0, &t4766_1_0_0, NULL, &t4766_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4768_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ModuleBuilder>
extern TypeInfo t4768_TI;
extern Il2CppType t3643_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28159_MI = 
{
	"GetEnumerator", NULL, &t4768_TI, &t3643_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4768_MIs[] =
{
	&m28159_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4768_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4768_0_0_0;
extern Il2CppType t4768_1_0_0;
struct t4768;
extern TypeInfo t4768_TI;
extern Il2CppGenericClass t4768_GC;
TypeInfo t4768_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4768_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4768_TI, t4768_ITIs, NULL, &EmptyCustomAttributesCache, &t4768_TI, &t4768_0_0_0, &t4768_1_0_0, NULL, &t4768_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3643_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>
extern MethodInfo m28160_MI;
static PropertyInfo t3643____Current_PropertyInfo = 
{
	&t3643_TI, "Current", &m28160_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3643_PIs[] =
{
	&t3643____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3643_TI;
extern Il2CppType t1501_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28160_MI = 
{
	"get_Current", NULL, &t3643_TI, &t1501_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3643_MIs[] =
{
	&m28160_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3643_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3643_0_0_0;
extern Il2CppType t3643_1_0_0;
struct t3643;
extern TypeInfo t3643_TI;
extern Il2CppGenericClass t3643_GC;
TypeInfo t3643_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3643_MIs, t3643_PIs, NULL, NULL, NULL, NULL, NULL, &t3643_TI, t3643_ITIs, NULL, &EmptyCustomAttributesCache, &t3643_TI, &t3643_0_0_0, &t3643_1_0_0, NULL, &t3643_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2755.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2755_TI;
#include "t2755MD.h"

extern TypeInfo t2755_TI;
extern TypeInfo t1501_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15993_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21482_MI;
struct t14;
#define m21482(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21482_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>
extern Il2CppType t14_0_0_1;
FieldInfo t2755_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2755_TI, offsetof(t2755, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2755_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2755_TI, offsetof(t2755, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2755_FIs[] =
{
	&t2755_f0_FieldInfo,
	&t2755_f1_FieldInfo,
	NULL
};
extern MethodInfo m15990_MI;
static PropertyInfo t2755____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2755_TI, "System.Collections.IEnumerator.Current", &m15990_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15993_MI;
static PropertyInfo t2755____Current_PropertyInfo = 
{
	&t2755_TI, "Current", &m15993_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2755_PIs[] =
{
	&t2755____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2755____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2755_m15989_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2755_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15989_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2755_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2755_m15989_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2755_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15990_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2755_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2755_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15991_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2755_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2755_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15992_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2755_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2755_TI;
extern Il2CppType t1501_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15993_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2755_TI, &t1501_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2755_MIs[] =
{
	&m15989_MI,
	&m15990_MI,
	&m15991_MI,
	&m15992_MI,
	&m15993_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15990_MI;
extern MethodInfo m15992_MI;
extern MethodInfo m15991_MI;
extern MethodInfo m15993_MI;
static MethodInfo* t2755_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15990_MI,
	&m15992_MI,
	&m15991_MI,
	&m15993_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3643_TI;
static TypeInfo* t2755_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3643_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3643_TI;
static Il2CppInterfaceOffsetPair t2755_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3643_TI, 7},
};
extern MethodInfo m15993_MI;
extern TypeInfo t1501_TI;
extern MethodInfo m21482_MI;
static void* t2755_RGCTXData[3] = 
{
	&m15993_MI,
	&t1501_TI,
	&m21482_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2755_0_0_0;
extern Il2CppType t2755_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2755_TI;
extern Il2CppGenericClass t2755_GC;
extern TypeInfo t14_TI;
TypeInfo t2755_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2755_MIs, t2755_PIs, t2755_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2755_TI, t2755_ITIs, t2755_VT, &EmptyCustomAttributesCache, &t2755_TI, &t2755_0_0_0, &t2755_1_0_0, t2755_IOs, &t2755_GC, NULL, NULL, NULL, t2755_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2755)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4767_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>
extern MethodInfo m28161_MI;
extern MethodInfo m28162_MI;
static PropertyInfo t4767____Item_PropertyInfo = 
{
	&t4767_TI, "Item", &m28161_MI, &m28162_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4767_PIs[] =
{
	&t4767____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1501_0_0_0;
static ParameterInfo t4767_m28163_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1501_0_0_0},
};
extern TypeInfo t4767_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28163_MI = 
{
	"IndexOf", NULL, &t4767_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4767_m28163_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1501_0_0_0;
static ParameterInfo t4767_m28164_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1501_0_0_0},
};
extern TypeInfo t4767_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28164_MI = 
{
	"Insert", NULL, &t4767_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4767_m28164_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4767_m28165_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4767_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28165_MI = 
{
	"RemoveAt", NULL, &t4767_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4767_m28165_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4767_m28161_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4767_TI;
extern Il2CppType t1501_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28161_MI = 
{
	"get_Item", NULL, &t4767_TI, &t1501_0_0_0, RuntimeInvoker_t4_t16, t4767_m28161_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1501_0_0_0;
static ParameterInfo t4767_m28162_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1501_0_0_0},
};
extern TypeInfo t4767_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28162_MI = 
{
	"set_Item", NULL, &t4767_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4767_m28162_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4767_MIs[] =
{
	&m28163_MI,
	&m28164_MI,
	&m28165_MI,
	&m28161_MI,
	&m28162_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4766_TI;
extern TypeInfo t4768_TI;
static TypeInfo* t4767_ITIs[] = 
{
	&t591_TI,
	&t4766_TI,
	&t4768_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4767_0_0_0;
extern Il2CppType t4767_1_0_0;
struct t4767;
extern TypeInfo t4767_TI;
extern Il2CppGenericClass t4767_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4767_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4767_MIs, t4767_PIs, NULL, NULL, NULL, NULL, NULL, &t4767_TI, t4767_ITIs, NULL, &t1400__CustomAttributeCache, &t4767_TI, &t4767_0_0_0, &t4767_1_0_0, NULL, &t4767_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4769_TI;

#include "t720.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Module>
extern MethodInfo m28166_MI;
static PropertyInfo t4769____Count_PropertyInfo = 
{
	&t4769_TI, "Count", &m28166_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28167_MI;
static PropertyInfo t4769____IsReadOnly_PropertyInfo = 
{
	&t4769_TI, "IsReadOnly", &m28167_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4769_PIs[] =
{
	&t4769____Count_PropertyInfo,
	&t4769____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4769_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28166_MI = 
{
	"get_Count", NULL, &t4769_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4769_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28167_MI = 
{
	"get_IsReadOnly", NULL, &t4769_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t720_0_0_0;
static ParameterInfo t4769_m28168_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t720_0_0_0},
};
extern TypeInfo t4769_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28168_MI = 
{
	"Add", NULL, &t4769_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4769_m28168_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4769_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28169_MI = 
{
	"Clear", NULL, &t4769_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t720_0_0_0;
static ParameterInfo t4769_m28170_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t720_0_0_0},
};
extern TypeInfo t4769_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28170_MI = 
{
	"Contains", NULL, &t4769_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4769_m28170_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t924_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4769_m28171_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t924_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4769_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28171_MI = 
{
	"CopyTo", NULL, &t4769_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4769_m28171_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t720_0_0_0;
static ParameterInfo t4769_m28172_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t720_0_0_0},
};
extern TypeInfo t4769_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28172_MI = 
{
	"Remove", NULL, &t4769_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4769_m28172_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4769_MIs[] =
{
	&m28166_MI,
	&m28167_MI,
	&m28168_MI,
	&m28169_MI,
	&m28170_MI,
	&m28171_MI,
	&m28172_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4771_TI;
static TypeInfo* t4769_ITIs[] = 
{
	&t591_TI,
	&t4771_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4769_0_0_0;
extern Il2CppType t4769_1_0_0;
struct t4769;
extern TypeInfo t4769_TI;
extern Il2CppGenericClass t4769_GC;
TypeInfo t4769_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4769_MIs, t4769_PIs, NULL, NULL, NULL, NULL, NULL, &t4769_TI, t4769_ITIs, NULL, &EmptyCustomAttributesCache, &t4769_TI, &t4769_0_0_0, &t4769_1_0_0, NULL, &t4769_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4771_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Module>
extern TypeInfo t4771_TI;
extern Il2CppType t3644_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28173_MI = 
{
	"GetEnumerator", NULL, &t4771_TI, &t3644_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4771_MIs[] =
{
	&m28173_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4771_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4771_0_0_0;
extern Il2CppType t4771_1_0_0;
struct t4771;
extern TypeInfo t4771_TI;
extern Il2CppGenericClass t4771_GC;
TypeInfo t4771_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4771_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4771_TI, t4771_ITIs, NULL, &EmptyCustomAttributesCache, &t4771_TI, &t4771_0_0_0, &t4771_1_0_0, NULL, &t4771_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3644_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Module>
extern MethodInfo m28174_MI;
static PropertyInfo t3644____Current_PropertyInfo = 
{
	&t3644_TI, "Current", &m28174_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3644_PIs[] =
{
	&t3644____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3644_TI;
extern Il2CppType t720_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28174_MI = 
{
	"get_Current", NULL, &t3644_TI, &t720_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3644_MIs[] =
{
	&m28174_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3644_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3644_0_0_0;
extern Il2CppType t3644_1_0_0;
struct t3644;
extern TypeInfo t3644_TI;
extern Il2CppGenericClass t3644_GC;
TypeInfo t3644_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3644_MIs, t3644_PIs, NULL, NULL, NULL, NULL, NULL, &t3644_TI, t3644_ITIs, NULL, &EmptyCustomAttributesCache, &t3644_TI, &t3644_0_0_0, &t3644_1_0_0, NULL, &t3644_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2756.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2756_TI;
#include "t2756MD.h"

extern TypeInfo t2756_TI;
extern TypeInfo t720_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15998_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21493_MI;
struct t14;
#define m21493(__this, p0, method) (t720 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21493_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Module>
extern Il2CppType t14_0_0_1;
FieldInfo t2756_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2756_TI, offsetof(t2756, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2756_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2756_TI, offsetof(t2756, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2756_FIs[] =
{
	&t2756_f0_FieldInfo,
	&t2756_f1_FieldInfo,
	NULL
};
extern MethodInfo m15995_MI;
static PropertyInfo t2756____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2756_TI, "System.Collections.IEnumerator.Current", &m15995_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15998_MI;
static PropertyInfo t2756____Current_PropertyInfo = 
{
	&t2756_TI, "Current", &m15998_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2756_PIs[] =
{
	&t2756____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2756____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2756_m15994_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2756_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15994_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2756_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2756_m15994_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2756_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15995_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2756_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2756_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15996_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2756_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2756_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15997_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2756_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2756_TI;
extern Il2CppType t720_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15998_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2756_TI, &t720_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2756_MIs[] =
{
	&m15994_MI,
	&m15995_MI,
	&m15996_MI,
	&m15997_MI,
	&m15998_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15995_MI;
extern MethodInfo m15997_MI;
extern MethodInfo m15996_MI;
extern MethodInfo m15998_MI;
static MethodInfo* t2756_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15995_MI,
	&m15997_MI,
	&m15996_MI,
	&m15998_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3644_TI;
static TypeInfo* t2756_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3644_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3644_TI;
static Il2CppInterfaceOffsetPair t2756_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3644_TI, 7},
};
extern MethodInfo m15998_MI;
extern TypeInfo t720_TI;
extern MethodInfo m21493_MI;
static void* t2756_RGCTXData[3] = 
{
	&m15998_MI,
	&t720_TI,
	&m21493_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2756_0_0_0;
extern Il2CppType t2756_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2756_TI;
extern Il2CppGenericClass t2756_GC;
extern TypeInfo t14_TI;
TypeInfo t2756_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2756_MIs, t2756_PIs, t2756_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2756_TI, t2756_ITIs, t2756_VT, &EmptyCustomAttributesCache, &t2756_TI, &t2756_0_0_0, &t2756_1_0_0, t2756_IOs, &t2756_GC, NULL, NULL, NULL, t2756_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2756)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4770_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Module>
extern MethodInfo m28175_MI;
extern MethodInfo m28176_MI;
static PropertyInfo t4770____Item_PropertyInfo = 
{
	&t4770_TI, "Item", &m28175_MI, &m28176_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4770_PIs[] =
{
	&t4770____Item_PropertyInfo,
	NULL
};
extern Il2CppType t720_0_0_0;
static ParameterInfo t4770_m28177_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t720_0_0_0},
};
extern TypeInfo t4770_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28177_MI = 
{
	"IndexOf", NULL, &t4770_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4770_m28177_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t720_0_0_0;
static ParameterInfo t4770_m28178_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t720_0_0_0},
};
extern TypeInfo t4770_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28178_MI = 
{
	"Insert", NULL, &t4770_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4770_m28178_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4770_m28179_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4770_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28179_MI = 
{
	"RemoveAt", NULL, &t4770_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4770_m28179_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4770_m28175_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4770_TI;
extern Il2CppType t720_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28175_MI = 
{
	"get_Item", NULL, &t4770_TI, &t720_0_0_0, RuntimeInvoker_t4_t16, t4770_m28175_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t720_0_0_0;
static ParameterInfo t4770_m28176_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t720_0_0_0},
};
extern TypeInfo t4770_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28176_MI = 
{
	"set_Item", NULL, &t4770_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4770_m28176_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4770_MIs[] =
{
	&m28177_MI,
	&m28178_MI,
	&m28179_MI,
	&m28175_MI,
	&m28176_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4769_TI;
extern TypeInfo t4771_TI;
static TypeInfo* t4770_ITIs[] = 
{
	&t591_TI,
	&t4769_TI,
	&t4771_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4770_0_0_0;
extern Il2CppType t4770_1_0_0;
struct t4770;
extern TypeInfo t4770_TI;
extern Il2CppGenericClass t4770_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4770_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4770_MIs, t4770_PIs, NULL, NULL, NULL, NULL, NULL, &t4770_TI, t4770_ITIs, NULL, &t1400__CustomAttributeCache, &t4770_TI, &t4770_0_0_0, &t4770_1_0_0, NULL, &t4770_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4772_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>
extern MethodInfo m28180_MI;
static PropertyInfo t4772____Count_PropertyInfo = 
{
	&t4772_TI, "Count", &m28180_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28181_MI;
static PropertyInfo t4772____IsReadOnly_PropertyInfo = 
{
	&t4772_TI, "IsReadOnly", &m28181_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4772_PIs[] =
{
	&t4772____Count_PropertyInfo,
	&t4772____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4772_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28180_MI = 
{
	"get_Count", NULL, &t4772_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4772_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28181_MI = 
{
	"get_IsReadOnly", NULL, &t4772_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1502_0_0_0;
static ParameterInfo t4772_m28182_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1502_0_0_0},
};
extern TypeInfo t4772_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28182_MI = 
{
	"Add", NULL, &t4772_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4772_m28182_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4772_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28183_MI = 
{
	"Clear", NULL, &t4772_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1502_0_0_0;
static ParameterInfo t4772_m28184_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1502_0_0_0},
};
extern TypeInfo t4772_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28184_MI = 
{
	"Contains", NULL, &t4772_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4772_m28184_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3000_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4772_m28185_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3000_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4772_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28185_MI = 
{
	"CopyTo", NULL, &t4772_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4772_m28185_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1502_0_0_0;
static ParameterInfo t4772_m28186_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1502_0_0_0},
};
extern TypeInfo t4772_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28186_MI = 
{
	"Remove", NULL, &t4772_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4772_m28186_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4772_MIs[] =
{
	&m28180_MI,
	&m28181_MI,
	&m28182_MI,
	&m28183_MI,
	&m28184_MI,
	&m28185_MI,
	&m28186_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4774_TI;
static TypeInfo* t4772_ITIs[] = 
{
	&t591_TI,
	&t4774_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4772_0_0_0;
extern Il2CppType t4772_1_0_0;
struct t4772;
extern TypeInfo t4772_TI;
extern Il2CppGenericClass t4772_GC;
TypeInfo t4772_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4772_MIs, t4772_PIs, NULL, NULL, NULL, NULL, NULL, &t4772_TI, t4772_ITIs, NULL, &EmptyCustomAttributesCache, &t4772_TI, &t4772_0_0_0, &t4772_1_0_0, NULL, &t4772_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4774_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._Module>
extern TypeInfo t4774_TI;
extern Il2CppType t3645_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28187_MI = 
{
	"GetEnumerator", NULL, &t4774_TI, &t3645_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4774_MIs[] =
{
	&m28187_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4774_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4774_0_0_0;
extern Il2CppType t4774_1_0_0;
struct t4774;
extern TypeInfo t4774_TI;
extern Il2CppGenericClass t4774_GC;
TypeInfo t4774_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4774_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4774_TI, t4774_ITIs, NULL, &EmptyCustomAttributesCache, &t4774_TI, &t4774_0_0_0, &t4774_1_0_0, NULL, &t4774_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3645_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._Module>
extern MethodInfo m28188_MI;
static PropertyInfo t3645____Current_PropertyInfo = 
{
	&t3645_TI, "Current", &m28188_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3645_PIs[] =
{
	&t3645____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3645_TI;
extern Il2CppType t1502_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28188_MI = 
{
	"get_Current", NULL, &t3645_TI, &t1502_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3645_MIs[] =
{
	&m28188_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3645_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3645_0_0_0;
extern Il2CppType t3645_1_0_0;
struct t3645;
extern TypeInfo t3645_TI;
extern Il2CppGenericClass t3645_GC;
TypeInfo t3645_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3645_MIs, t3645_PIs, NULL, NULL, NULL, NULL, NULL, &t3645_TI, t3645_ITIs, NULL, &EmptyCustomAttributesCache, &t3645_TI, &t3645_0_0_0, &t3645_1_0_0, NULL, &t3645_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2757.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2757_TI;
#include "t2757MD.h"

extern TypeInfo t2757_TI;
extern TypeInfo t1502_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16003_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21504_MI;
struct t14;
#define m21504(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21504_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>
extern Il2CppType t14_0_0_1;
FieldInfo t2757_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2757_TI, offsetof(t2757, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2757_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2757_TI, offsetof(t2757, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2757_FIs[] =
{
	&t2757_f0_FieldInfo,
	&t2757_f1_FieldInfo,
	NULL
};
extern MethodInfo m16000_MI;
static PropertyInfo t2757____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2757_TI, "System.Collections.IEnumerator.Current", &m16000_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16003_MI;
static PropertyInfo t2757____Current_PropertyInfo = 
{
	&t2757_TI, "Current", &m16003_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2757_PIs[] =
{
	&t2757____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2757____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2757_m15999_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2757_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15999_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2757_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2757_m15999_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2757_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16000_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2757_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2757_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16001_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2757_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2757_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16002_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2757_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2757_TI;
extern Il2CppType t1502_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16003_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2757_TI, &t1502_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2757_MIs[] =
{
	&m15999_MI,
	&m16000_MI,
	&m16001_MI,
	&m16002_MI,
	&m16003_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16000_MI;
extern MethodInfo m16002_MI;
extern MethodInfo m16001_MI;
extern MethodInfo m16003_MI;
static MethodInfo* t2757_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16000_MI,
	&m16002_MI,
	&m16001_MI,
	&m16003_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3645_TI;
static TypeInfo* t2757_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3645_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3645_TI;
static Il2CppInterfaceOffsetPair t2757_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3645_TI, 7},
};
extern MethodInfo m16003_MI;
extern TypeInfo t1502_TI;
extern MethodInfo m21504_MI;
static void* t2757_RGCTXData[3] = 
{
	&m16003_MI,
	&t1502_TI,
	&m21504_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2757_0_0_0;
extern Il2CppType t2757_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2757_TI;
extern Il2CppGenericClass t2757_GC;
extern TypeInfo t14_TI;
TypeInfo t2757_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2757_MIs, t2757_PIs, t2757_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2757_TI, t2757_ITIs, t2757_VT, &EmptyCustomAttributesCache, &t2757_TI, &t2757_0_0_0, &t2757_1_0_0, t2757_IOs, &t2757_GC, NULL, NULL, NULL, t2757_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2757)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4773_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>
extern MethodInfo m28189_MI;
extern MethodInfo m28190_MI;
static PropertyInfo t4773____Item_PropertyInfo = 
{
	&t4773_TI, "Item", &m28189_MI, &m28190_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4773_PIs[] =
{
	&t4773____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1502_0_0_0;
static ParameterInfo t4773_m28191_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1502_0_0_0},
};
extern TypeInfo t4773_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28191_MI = 
{
	"IndexOf", NULL, &t4773_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4773_m28191_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1502_0_0_0;
static ParameterInfo t4773_m28192_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1502_0_0_0},
};
extern TypeInfo t4773_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28192_MI = 
{
	"Insert", NULL, &t4773_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4773_m28192_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4773_m28193_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4773_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28193_MI = 
{
	"RemoveAt", NULL, &t4773_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4773_m28193_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4773_m28189_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4773_TI;
extern Il2CppType t1502_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28189_MI = 
{
	"get_Item", NULL, &t4773_TI, &t1502_0_0_0, RuntimeInvoker_t4_t16, t4773_m28189_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1502_0_0_0;
static ParameterInfo t4773_m28190_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1502_0_0_0},
};
extern TypeInfo t4773_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28190_MI = 
{
	"set_Item", NULL, &t4773_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4773_m28190_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4773_MIs[] =
{
	&m28191_MI,
	&m28192_MI,
	&m28193_MI,
	&m28189_MI,
	&m28190_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4772_TI;
extern TypeInfo t4774_TI;
static TypeInfo* t4773_ITIs[] = 
{
	&t591_TI,
	&t4772_TI,
	&t4774_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4773_0_0_0;
extern Il2CppType t4773_1_0_0;
struct t4773;
extern TypeInfo t4773_TI;
extern Il2CppGenericClass t4773_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4773_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4773_MIs, t4773_PIs, NULL, NULL, NULL, NULL, NULL, &t4773_TI, t4773_ITIs, NULL, &t1400__CustomAttributeCache, &t4773_TI, &t4773_0_0_0, &t4773_1_0_0, NULL, &t4773_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3646_TI;

#include "t929.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ParameterBuilder>
extern MethodInfo m28194_MI;
static PropertyInfo t3646____Current_PropertyInfo = 
{
	&t3646_TI, "Current", &m28194_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3646_PIs[] =
{
	&t3646____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3646_TI;
extern Il2CppType t929_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28194_MI = 
{
	"get_Current", NULL, &t3646_TI, &t929_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3646_MIs[] =
{
	&m28194_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3646_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3646_0_0_0;
extern Il2CppType t3646_1_0_0;
struct t3646;
extern TypeInfo t3646_TI;
extern Il2CppGenericClass t3646_GC;
TypeInfo t3646_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3646_MIs, t3646_PIs, NULL, NULL, NULL, NULL, NULL, &t3646_TI, t3646_ITIs, NULL, &EmptyCustomAttributesCache, &t3646_TI, &t3646_0_0_0, &t3646_1_0_0, NULL, &t3646_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2758.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2758_TI;
#include "t2758MD.h"

extern TypeInfo t2758_TI;
extern TypeInfo t929_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16008_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21515_MI;
struct t14;
#define m21515(__this, p0, method) (t929 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21515_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>
extern Il2CppType t14_0_0_1;
FieldInfo t2758_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2758_TI, offsetof(t2758, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2758_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2758_TI, offsetof(t2758, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2758_FIs[] =
{
	&t2758_f0_FieldInfo,
	&t2758_f1_FieldInfo,
	NULL
};
extern MethodInfo m16005_MI;
static PropertyInfo t2758____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2758_TI, "System.Collections.IEnumerator.Current", &m16005_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16008_MI;
static PropertyInfo t2758____Current_PropertyInfo = 
{
	&t2758_TI, "Current", &m16008_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2758_PIs[] =
{
	&t2758____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2758____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2758_m16004_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2758_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16004_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2758_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2758_m16004_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2758_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16005_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2758_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2758_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16006_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2758_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2758_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16007_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2758_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2758_TI;
extern Il2CppType t929_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16008_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2758_TI, &t929_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2758_MIs[] =
{
	&m16004_MI,
	&m16005_MI,
	&m16006_MI,
	&m16007_MI,
	&m16008_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16005_MI;
extern MethodInfo m16007_MI;
extern MethodInfo m16006_MI;
extern MethodInfo m16008_MI;
static MethodInfo* t2758_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16005_MI,
	&m16007_MI,
	&m16006_MI,
	&m16008_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3646_TI;
static TypeInfo* t2758_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3646_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3646_TI;
static Il2CppInterfaceOffsetPair t2758_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3646_TI, 7},
};
extern MethodInfo m16008_MI;
extern TypeInfo t929_TI;
extern MethodInfo m21515_MI;
static void* t2758_RGCTXData[3] = 
{
	&m16008_MI,
	&t929_TI,
	&m21515_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2758_0_0_0;
extern Il2CppType t2758_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2758_TI;
extern Il2CppGenericClass t2758_GC;
extern TypeInfo t14_TI;
TypeInfo t2758_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2758_MIs, t2758_PIs, t2758_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2758_TI, t2758_ITIs, t2758_VT, &EmptyCustomAttributesCache, &t2758_TI, &t2758_0_0_0, &t2758_1_0_0, t2758_IOs, &t2758_GC, NULL, NULL, NULL, t2758_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2758)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4775_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>
extern MethodInfo m28195_MI;
static PropertyInfo t4775____Count_PropertyInfo = 
{
	&t4775_TI, "Count", &m28195_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28196_MI;
static PropertyInfo t4775____IsReadOnly_PropertyInfo = 
{
	&t4775_TI, "IsReadOnly", &m28196_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4775_PIs[] =
{
	&t4775____Count_PropertyInfo,
	&t4775____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4775_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28195_MI = 
{
	"get_Count", NULL, &t4775_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4775_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28196_MI = 
{
	"get_IsReadOnly", NULL, &t4775_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t929_0_0_0;
static ParameterInfo t4775_m28197_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t929_0_0_0},
};
extern TypeInfo t4775_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28197_MI = 
{
	"Add", NULL, &t4775_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4775_m28197_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4775_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28198_MI = 
{
	"Clear", NULL, &t4775_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t929_0_0_0;
static ParameterInfo t4775_m28199_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t929_0_0_0},
};
extern TypeInfo t4775_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28199_MI = 
{
	"Contains", NULL, &t4775_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4775_m28199_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t928_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4775_m28200_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t928_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4775_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28200_MI = 
{
	"CopyTo", NULL, &t4775_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4775_m28200_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t929_0_0_0;
static ParameterInfo t4775_m28201_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t929_0_0_0},
};
extern TypeInfo t4775_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28201_MI = 
{
	"Remove", NULL, &t4775_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4775_m28201_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4775_MIs[] =
{
	&m28195_MI,
	&m28196_MI,
	&m28197_MI,
	&m28198_MI,
	&m28199_MI,
	&m28200_MI,
	&m28201_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4777_TI;
static TypeInfo* t4775_ITIs[] = 
{
	&t591_TI,
	&t4777_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4775_0_0_0;
extern Il2CppType t4775_1_0_0;
struct t4775;
extern TypeInfo t4775_TI;
extern Il2CppGenericClass t4775_GC;
TypeInfo t4775_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4775_MIs, t4775_PIs, NULL, NULL, NULL, NULL, NULL, &t4775_TI, t4775_ITIs, NULL, &EmptyCustomAttributesCache, &t4775_TI, &t4775_0_0_0, &t4775_1_0_0, NULL, &t4775_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4777_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ParameterBuilder>
extern TypeInfo t4777_TI;
extern Il2CppType t3646_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28202_MI = 
{
	"GetEnumerator", NULL, &t4777_TI, &t3646_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4777_MIs[] =
{
	&m28202_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4777_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4777_0_0_0;
extern Il2CppType t4777_1_0_0;
struct t4777;
extern TypeInfo t4777_TI;
extern Il2CppGenericClass t4777_GC;
TypeInfo t4777_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4777_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4777_TI, t4777_ITIs, NULL, &EmptyCustomAttributesCache, &t4777_TI, &t4777_0_0_0, &t4777_1_0_0, NULL, &t4777_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4776_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>
extern MethodInfo m28203_MI;
extern MethodInfo m28204_MI;
static PropertyInfo t4776____Item_PropertyInfo = 
{
	&t4776_TI, "Item", &m28203_MI, &m28204_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4776_PIs[] =
{
	&t4776____Item_PropertyInfo,
	NULL
};
extern Il2CppType t929_0_0_0;
static ParameterInfo t4776_m28205_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t929_0_0_0},
};
extern TypeInfo t4776_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28205_MI = 
{
	"IndexOf", NULL, &t4776_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4776_m28205_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t929_0_0_0;
static ParameterInfo t4776_m28206_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t929_0_0_0},
};
extern TypeInfo t4776_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28206_MI = 
{
	"Insert", NULL, &t4776_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4776_m28206_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4776_m28207_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4776_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28207_MI = 
{
	"RemoveAt", NULL, &t4776_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4776_m28207_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4776_m28203_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4776_TI;
extern Il2CppType t929_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28203_MI = 
{
	"get_Item", NULL, &t4776_TI, &t929_0_0_0, RuntimeInvoker_t4_t16, t4776_m28203_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t929_0_0_0;
static ParameterInfo t4776_m28204_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t929_0_0_0},
};
extern TypeInfo t4776_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28204_MI = 
{
	"set_Item", NULL, &t4776_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4776_m28204_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4776_MIs[] =
{
	&m28205_MI,
	&m28206_MI,
	&m28207_MI,
	&m28203_MI,
	&m28204_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4775_TI;
extern TypeInfo t4777_TI;
static TypeInfo* t4776_ITIs[] = 
{
	&t591_TI,
	&t4775_TI,
	&t4777_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4776_0_0_0;
extern Il2CppType t4776_1_0_0;
struct t4776;
extern TypeInfo t4776_TI;
extern Il2CppGenericClass t4776_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4776_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4776_MIs, t4776_PIs, NULL, NULL, NULL, NULL, NULL, &t4776_TI, t4776_ITIs, NULL, &t1400__CustomAttributeCache, &t4776_TI, &t4776_0_0_0, &t4776_1_0_0, NULL, &t4776_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4778_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>
extern MethodInfo m28208_MI;
static PropertyInfo t4778____Count_PropertyInfo = 
{
	&t4778_TI, "Count", &m28208_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28209_MI;
static PropertyInfo t4778____IsReadOnly_PropertyInfo = 
{
	&t4778_TI, "IsReadOnly", &m28209_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4778_PIs[] =
{
	&t4778____Count_PropertyInfo,
	&t4778____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4778_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28208_MI = 
{
	"get_Count", NULL, &t4778_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4778_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28209_MI = 
{
	"get_IsReadOnly", NULL, &t4778_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1503_0_0_0;
static ParameterInfo t4778_m28210_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1503_0_0_0},
};
extern TypeInfo t4778_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28210_MI = 
{
	"Add", NULL, &t4778_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4778_m28210_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4778_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28211_MI = 
{
	"Clear", NULL, &t4778_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1503_0_0_0;
static ParameterInfo t4778_m28212_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1503_0_0_0},
};
extern TypeInfo t4778_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28212_MI = 
{
	"Contains", NULL, &t4778_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4778_m28212_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3001_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4778_m28213_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3001_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4778_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28213_MI = 
{
	"CopyTo", NULL, &t4778_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4778_m28213_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1503_0_0_0;
static ParameterInfo t4778_m28214_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1503_0_0_0},
};
extern TypeInfo t4778_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28214_MI = 
{
	"Remove", NULL, &t4778_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4778_m28214_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4778_MIs[] =
{
	&m28208_MI,
	&m28209_MI,
	&m28210_MI,
	&m28211_MI,
	&m28212_MI,
	&m28213_MI,
	&m28214_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4780_TI;
static TypeInfo* t4778_ITIs[] = 
{
	&t591_TI,
	&t4780_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4778_0_0_0;
extern Il2CppType t4778_1_0_0;
struct t4778;
extern TypeInfo t4778_TI;
extern Il2CppGenericClass t4778_GC;
TypeInfo t4778_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4778_MIs, t4778_PIs, NULL, NULL, NULL, NULL, NULL, &t4778_TI, t4778_ITIs, NULL, &EmptyCustomAttributesCache, &t4778_TI, &t4778_0_0_0, &t4778_1_0_0, NULL, &t4778_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4780_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ParameterBuilder>
extern TypeInfo t4780_TI;
extern Il2CppType t3647_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28215_MI = 
{
	"GetEnumerator", NULL, &t4780_TI, &t3647_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4780_MIs[] =
{
	&m28215_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4780_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4780_0_0_0;
extern Il2CppType t4780_1_0_0;
struct t4780;
extern TypeInfo t4780_TI;
extern Il2CppGenericClass t4780_GC;
TypeInfo t4780_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4780_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4780_TI, t4780_ITIs, NULL, &EmptyCustomAttributesCache, &t4780_TI, &t4780_0_0_0, &t4780_1_0_0, NULL, &t4780_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3647_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>
extern MethodInfo m28216_MI;
static PropertyInfo t3647____Current_PropertyInfo = 
{
	&t3647_TI, "Current", &m28216_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3647_PIs[] =
{
	&t3647____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3647_TI;
extern Il2CppType t1503_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28216_MI = 
{
	"get_Current", NULL, &t3647_TI, &t1503_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3647_MIs[] =
{
	&m28216_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3647_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3647_0_0_0;
extern Il2CppType t3647_1_0_0;
struct t3647;
extern TypeInfo t3647_TI;
extern Il2CppGenericClass t3647_GC;
TypeInfo t3647_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3647_MIs, t3647_PIs, NULL, NULL, NULL, NULL, NULL, &t3647_TI, t3647_ITIs, NULL, &EmptyCustomAttributesCache, &t3647_TI, &t3647_0_0_0, &t3647_1_0_0, NULL, &t3647_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2759.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2759_TI;
#include "t2759MD.h"

extern TypeInfo t2759_TI;
extern TypeInfo t1503_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16013_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21526_MI;
struct t14;
#define m21526(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21526_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>
extern Il2CppType t14_0_0_1;
FieldInfo t2759_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2759_TI, offsetof(t2759, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2759_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2759_TI, offsetof(t2759, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2759_FIs[] =
{
	&t2759_f0_FieldInfo,
	&t2759_f1_FieldInfo,
	NULL
};
extern MethodInfo m16010_MI;
static PropertyInfo t2759____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2759_TI, "System.Collections.IEnumerator.Current", &m16010_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16013_MI;
static PropertyInfo t2759____Current_PropertyInfo = 
{
	&t2759_TI, "Current", &m16013_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2759_PIs[] =
{
	&t2759____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2759____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2759_m16009_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2759_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16009_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2759_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2759_m16009_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2759_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16010_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2759_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2759_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16011_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2759_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2759_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16012_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2759_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2759_TI;
extern Il2CppType t1503_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16013_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2759_TI, &t1503_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2759_MIs[] =
{
	&m16009_MI,
	&m16010_MI,
	&m16011_MI,
	&m16012_MI,
	&m16013_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16010_MI;
extern MethodInfo m16012_MI;
extern MethodInfo m16011_MI;
extern MethodInfo m16013_MI;
static MethodInfo* t2759_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16010_MI,
	&m16012_MI,
	&m16011_MI,
	&m16013_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3647_TI;
static TypeInfo* t2759_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3647_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3647_TI;
static Il2CppInterfaceOffsetPair t2759_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3647_TI, 7},
};
extern MethodInfo m16013_MI;
extern TypeInfo t1503_TI;
extern MethodInfo m21526_MI;
static void* t2759_RGCTXData[3] = 
{
	&m16013_MI,
	&t1503_TI,
	&m21526_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2759_0_0_0;
extern Il2CppType t2759_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2759_TI;
extern Il2CppGenericClass t2759_GC;
extern TypeInfo t14_TI;
TypeInfo t2759_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2759_MIs, t2759_PIs, t2759_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2759_TI, t2759_ITIs, t2759_VT, &EmptyCustomAttributesCache, &t2759_TI, &t2759_0_0_0, &t2759_1_0_0, t2759_IOs, &t2759_GC, NULL, NULL, NULL, t2759_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2759)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4779_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>
extern MethodInfo m28217_MI;
extern MethodInfo m28218_MI;
static PropertyInfo t4779____Item_PropertyInfo = 
{
	&t4779_TI, "Item", &m28217_MI, &m28218_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4779_PIs[] =
{
	&t4779____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1503_0_0_0;
static ParameterInfo t4779_m28219_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1503_0_0_0},
};
extern TypeInfo t4779_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28219_MI = 
{
	"IndexOf", NULL, &t4779_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4779_m28219_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1503_0_0_0;
static ParameterInfo t4779_m28220_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1503_0_0_0},
};
extern TypeInfo t4779_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28220_MI = 
{
	"Insert", NULL, &t4779_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4779_m28220_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4779_m28221_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4779_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28221_MI = 
{
	"RemoveAt", NULL, &t4779_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4779_m28221_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4779_m28217_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4779_TI;
extern Il2CppType t1503_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28217_MI = 
{
	"get_Item", NULL, &t4779_TI, &t1503_0_0_0, RuntimeInvoker_t4_t16, t4779_m28217_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1503_0_0_0;
static ParameterInfo t4779_m28218_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1503_0_0_0},
};
extern TypeInfo t4779_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28218_MI = 
{
	"set_Item", NULL, &t4779_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4779_m28218_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4779_MIs[] =
{
	&m28219_MI,
	&m28220_MI,
	&m28221_MI,
	&m28217_MI,
	&m28218_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4778_TI;
extern TypeInfo t4780_TI;
static TypeInfo* t4779_ITIs[] = 
{
	&t591_TI,
	&t4778_TI,
	&t4780_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4779_0_0_0;
extern Il2CppType t4779_1_0_0;
struct t4779;
extern TypeInfo t4779_TI;
extern Il2CppGenericClass t4779_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4779_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4779_MIs, t4779_PIs, NULL, NULL, NULL, NULL, NULL, &t4779_TI, t4779_ITIs, NULL, &t1400__CustomAttributeCache, &t4779_TI, &t4779_0_0_0, &t4779_1_0_0, NULL, &t4779_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3648_TI;

#include "t936.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern MethodInfo m28222_MI;
static PropertyInfo t3648____Current_PropertyInfo = 
{
	&t3648_TI, "Current", &m28222_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3648_PIs[] =
{
	&t3648____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3648_TI;
extern Il2CppType t936_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28222_MI = 
{
	"get_Current", NULL, &t3648_TI, &t936_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3648_MIs[] =
{
	&m28222_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3648_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3648_0_0_0;
extern Il2CppType t3648_1_0_0;
struct t3648;
extern TypeInfo t3648_TI;
extern Il2CppGenericClass t3648_GC;
TypeInfo t3648_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3648_MIs, t3648_PIs, NULL, NULL, NULL, NULL, NULL, &t3648_TI, t3648_ITIs, NULL, &EmptyCustomAttributesCache, &t3648_TI, &t3648_0_0_0, &t3648_1_0_0, NULL, &t3648_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2760.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2760_TI;
#include "t2760MD.h"

extern TypeInfo t2760_TI;
extern TypeInfo t936_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16018_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21537_MI;
struct t14;
#define m21537(__this, p0, method) (t936 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21537_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern Il2CppType t14_0_0_1;
FieldInfo t2760_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2760_TI, offsetof(t2760, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2760_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2760_TI, offsetof(t2760, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2760_FIs[] =
{
	&t2760_f0_FieldInfo,
	&t2760_f1_FieldInfo,
	NULL
};
extern MethodInfo m16015_MI;
static PropertyInfo t2760____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2760_TI, "System.Collections.IEnumerator.Current", &m16015_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16018_MI;
static PropertyInfo t2760____Current_PropertyInfo = 
{
	&t2760_TI, "Current", &m16018_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2760_PIs[] =
{
	&t2760____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2760____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2760_m16014_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2760_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16014_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2760_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2760_m16014_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2760_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16015_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2760_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2760_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16016_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2760_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2760_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16017_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2760_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2760_TI;
extern Il2CppType t936_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16018_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2760_TI, &t936_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2760_MIs[] =
{
	&m16014_MI,
	&m16015_MI,
	&m16016_MI,
	&m16017_MI,
	&m16018_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16015_MI;
extern MethodInfo m16017_MI;
extern MethodInfo m16016_MI;
extern MethodInfo m16018_MI;
static MethodInfo* t2760_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16015_MI,
	&m16017_MI,
	&m16016_MI,
	&m16018_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3648_TI;
static TypeInfo* t2760_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3648_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3648_TI;
static Il2CppInterfaceOffsetPair t2760_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3648_TI, 7},
};
extern MethodInfo m16018_MI;
extern TypeInfo t936_TI;
extern MethodInfo m21537_MI;
static void* t2760_RGCTXData[3] = 
{
	&m16018_MI,
	&t936_TI,
	&m21537_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2760_0_0_0;
extern Il2CppType t2760_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2760_TI;
extern Il2CppGenericClass t2760_GC;
extern TypeInfo t14_TI;
TypeInfo t2760_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2760_MIs, t2760_PIs, t2760_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2760_TI, t2760_ITIs, t2760_VT, &EmptyCustomAttributesCache, &t2760_TI, &t2760_0_0_0, &t2760_1_0_0, t2760_IOs, &t2760_GC, NULL, NULL, NULL, t2760_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2760)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4781_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern MethodInfo m28223_MI;
static PropertyInfo t4781____Count_PropertyInfo = 
{
	&t4781_TI, "Count", &m28223_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28224_MI;
static PropertyInfo t4781____IsReadOnly_PropertyInfo = 
{
	&t4781_TI, "IsReadOnly", &m28224_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4781_PIs[] =
{
	&t4781____Count_PropertyInfo,
	&t4781____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4781_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28223_MI = 
{
	"get_Count", NULL, &t4781_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4781_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28224_MI = 
{
	"get_IsReadOnly", NULL, &t4781_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t936_0_0_0;
static ParameterInfo t4781_m28225_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t936_0_0_0},
};
extern TypeInfo t4781_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28225_MI = 
{
	"Add", NULL, &t4781_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4781_m28225_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4781_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28226_MI = 
{
	"Clear", NULL, &t4781_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t936_0_0_0;
static ParameterInfo t4781_m28227_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t936_0_0_0},
};
extern TypeInfo t4781_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28227_MI = 
{
	"Contains", NULL, &t4781_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4781_m28227_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t938_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4781_m28228_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t938_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4781_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28228_MI = 
{
	"CopyTo", NULL, &t4781_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4781_m28228_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t936_0_0_0;
static ParameterInfo t4781_m28229_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t936_0_0_0},
};
extern TypeInfo t4781_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28229_MI = 
{
	"Remove", NULL, &t4781_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4781_m28229_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4781_MIs[] =
{
	&m28223_MI,
	&m28224_MI,
	&m28225_MI,
	&m28226_MI,
	&m28227_MI,
	&m28228_MI,
	&m28229_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4783_TI;
static TypeInfo* t4781_ITIs[] = 
{
	&t591_TI,
	&t4783_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4781_0_0_0;
extern Il2CppType t4781_1_0_0;
struct t4781;
extern TypeInfo t4781_TI;
extern Il2CppGenericClass t4781_GC;
TypeInfo t4781_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4781_MIs, t4781_PIs, NULL, NULL, NULL, NULL, NULL, &t4781_TI, t4781_ITIs, NULL, &EmptyCustomAttributesCache, &t4781_TI, &t4781_0_0_0, &t4781_1_0_0, NULL, &t4781_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4783_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern TypeInfo t4783_TI;
extern Il2CppType t3648_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28230_MI = 
{
	"GetEnumerator", NULL, &t4783_TI, &t3648_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4783_MIs[] =
{
	&m28230_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4783_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4783_0_0_0;
extern Il2CppType t4783_1_0_0;
struct t4783;
extern TypeInfo t4783_TI;
extern Il2CppGenericClass t4783_GC;
TypeInfo t4783_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4783_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4783_TI, t4783_ITIs, NULL, &EmptyCustomAttributesCache, &t4783_TI, &t4783_0_0_0, &t4783_1_0_0, NULL, &t4783_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4782_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern MethodInfo m28231_MI;
extern MethodInfo m28232_MI;
static PropertyInfo t4782____Item_PropertyInfo = 
{
	&t4782_TI, "Item", &m28231_MI, &m28232_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4782_PIs[] =
{
	&t4782____Item_PropertyInfo,
	NULL
};
extern Il2CppType t936_0_0_0;
static ParameterInfo t4782_m28233_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t936_0_0_0},
};
extern TypeInfo t4782_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28233_MI = 
{
	"IndexOf", NULL, &t4782_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4782_m28233_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t936_0_0_0;
static ParameterInfo t4782_m28234_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t936_0_0_0},
};
extern TypeInfo t4782_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28234_MI = 
{
	"Insert", NULL, &t4782_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4782_m28234_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4782_m28235_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4782_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28235_MI = 
{
	"RemoveAt", NULL, &t4782_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4782_m28235_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4782_m28231_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4782_TI;
extern Il2CppType t936_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28231_MI = 
{
	"get_Item", NULL, &t4782_TI, &t936_0_0_0, RuntimeInvoker_t4_t16, t4782_m28231_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t936_0_0_0;
static ParameterInfo t4782_m28232_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t936_0_0_0},
};
extern TypeInfo t4782_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28232_MI = 
{
	"set_Item", NULL, &t4782_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4782_m28232_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4782_MIs[] =
{
	&m28233_MI,
	&m28234_MI,
	&m28235_MI,
	&m28231_MI,
	&m28232_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4781_TI;
extern TypeInfo t4783_TI;
static TypeInfo* t4782_ITIs[] = 
{
	&t591_TI,
	&t4781_TI,
	&t4783_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4782_0_0_0;
extern Il2CppType t4782_1_0_0;
struct t4782;
extern TypeInfo t4782_TI;
extern Il2CppGenericClass t4782_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4782_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4782_MIs, t4782_PIs, NULL, NULL, NULL, NULL, NULL, &t4782_TI, t4782_ITIs, NULL, &t1400__CustomAttributeCache, &t4782_TI, &t4782_0_0_0, &t4782_1_0_0, NULL, &t4782_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3649_TI;

#include "t937.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.MethodBuilder>
extern MethodInfo m28236_MI;
static PropertyInfo t3649____Current_PropertyInfo = 
{
	&t3649_TI, "Current", &m28236_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3649_PIs[] =
{
	&t3649____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3649_TI;
extern Il2CppType t937_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28236_MI = 
{
	"get_Current", NULL, &t3649_TI, &t937_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3649_MIs[] =
{
	&m28236_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3649_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3649_0_0_0;
extern Il2CppType t3649_1_0_0;
struct t3649;
extern TypeInfo t3649_TI;
extern Il2CppGenericClass t3649_GC;
TypeInfo t3649_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3649_MIs, t3649_PIs, NULL, NULL, NULL, NULL, NULL, &t3649_TI, t3649_ITIs, NULL, &EmptyCustomAttributesCache, &t3649_TI, &t3649_0_0_0, &t3649_1_0_0, NULL, &t3649_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2761.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2761_TI;
#include "t2761MD.h"

extern TypeInfo t2761_TI;
extern TypeInfo t937_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16023_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21548_MI;
struct t14;
#define m21548(__this, p0, method) (t937 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21548_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>
extern Il2CppType t14_0_0_1;
FieldInfo t2761_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2761_TI, offsetof(t2761, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2761_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2761_TI, offsetof(t2761, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2761_FIs[] =
{
	&t2761_f0_FieldInfo,
	&t2761_f1_FieldInfo,
	NULL
};
extern MethodInfo m16020_MI;
static PropertyInfo t2761____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2761_TI, "System.Collections.IEnumerator.Current", &m16020_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16023_MI;
static PropertyInfo t2761____Current_PropertyInfo = 
{
	&t2761_TI, "Current", &m16023_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2761_PIs[] =
{
	&t2761____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2761____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2761_m16019_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2761_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16019_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2761_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2761_m16019_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2761_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16020_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2761_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2761_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16021_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2761_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2761_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16022_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2761_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2761_TI;
extern Il2CppType t937_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16023_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2761_TI, &t937_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2761_MIs[] =
{
	&m16019_MI,
	&m16020_MI,
	&m16021_MI,
	&m16022_MI,
	&m16023_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16020_MI;
extern MethodInfo m16022_MI;
extern MethodInfo m16021_MI;
extern MethodInfo m16023_MI;
static MethodInfo* t2761_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16020_MI,
	&m16022_MI,
	&m16021_MI,
	&m16023_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3649_TI;
static TypeInfo* t2761_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3649_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3649_TI;
static Il2CppInterfaceOffsetPair t2761_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3649_TI, 7},
};
extern MethodInfo m16023_MI;
extern TypeInfo t937_TI;
extern MethodInfo m21548_MI;
static void* t2761_RGCTXData[3] = 
{
	&m16023_MI,
	&t937_TI,
	&m21548_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2761_0_0_0;
extern Il2CppType t2761_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2761_TI;
extern Il2CppGenericClass t2761_GC;
extern TypeInfo t14_TI;
TypeInfo t2761_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2761_MIs, t2761_PIs, t2761_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2761_TI, t2761_ITIs, t2761_VT, &EmptyCustomAttributesCache, &t2761_TI, &t2761_0_0_0, &t2761_1_0_0, t2761_IOs, &t2761_GC, NULL, NULL, NULL, t2761_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2761)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4784_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>
extern MethodInfo m28237_MI;
static PropertyInfo t4784____Count_PropertyInfo = 
{
	&t4784_TI, "Count", &m28237_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28238_MI;
static PropertyInfo t4784____IsReadOnly_PropertyInfo = 
{
	&t4784_TI, "IsReadOnly", &m28238_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4784_PIs[] =
{
	&t4784____Count_PropertyInfo,
	&t4784____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4784_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28237_MI = 
{
	"get_Count", NULL, &t4784_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4784_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28238_MI = 
{
	"get_IsReadOnly", NULL, &t4784_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t937_0_0_0;
static ParameterInfo t4784_m28239_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t937_0_0_0},
};
extern TypeInfo t4784_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28239_MI = 
{
	"Add", NULL, &t4784_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4784_m28239_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4784_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28240_MI = 
{
	"Clear", NULL, &t4784_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t937_0_0_0;
static ParameterInfo t4784_m28241_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t937_0_0_0},
};
extern TypeInfo t4784_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28241_MI = 
{
	"Contains", NULL, &t4784_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4784_m28241_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t940_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4784_m28242_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t940_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4784_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28242_MI = 
{
	"CopyTo", NULL, &t4784_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4784_m28242_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t937_0_0_0;
static ParameterInfo t4784_m28243_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t937_0_0_0},
};
extern TypeInfo t4784_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28243_MI = 
{
	"Remove", NULL, &t4784_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4784_m28243_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4784_MIs[] =
{
	&m28237_MI,
	&m28238_MI,
	&m28239_MI,
	&m28240_MI,
	&m28241_MI,
	&m28242_MI,
	&m28243_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4786_TI;
static TypeInfo* t4784_ITIs[] = 
{
	&t591_TI,
	&t4786_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4784_0_0_0;
extern Il2CppType t4784_1_0_0;
struct t4784;
extern TypeInfo t4784_TI;
extern Il2CppGenericClass t4784_GC;
TypeInfo t4784_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4784_MIs, t4784_PIs, NULL, NULL, NULL, NULL, NULL, &t4784_TI, t4784_ITIs, NULL, &EmptyCustomAttributesCache, &t4784_TI, &t4784_0_0_0, &t4784_1_0_0, NULL, &t4784_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4786_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.MethodBuilder>
extern TypeInfo t4786_TI;
extern Il2CppType t3649_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28244_MI = 
{
	"GetEnumerator", NULL, &t4786_TI, &t3649_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4786_MIs[] =
{
	&m28244_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4786_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4786_0_0_0;
extern Il2CppType t4786_1_0_0;
struct t4786;
extern TypeInfo t4786_TI;
extern Il2CppGenericClass t4786_GC;
TypeInfo t4786_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4786_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4786_TI, t4786_ITIs, NULL, &EmptyCustomAttributesCache, &t4786_TI, &t4786_0_0_0, &t4786_1_0_0, NULL, &t4786_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4785_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>
extern MethodInfo m28245_MI;
extern MethodInfo m28246_MI;
static PropertyInfo t4785____Item_PropertyInfo = 
{
	&t4785_TI, "Item", &m28245_MI, &m28246_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4785_PIs[] =
{
	&t4785____Item_PropertyInfo,
	NULL
};
extern Il2CppType t937_0_0_0;
static ParameterInfo t4785_m28247_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t937_0_0_0},
};
extern TypeInfo t4785_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28247_MI = 
{
	"IndexOf", NULL, &t4785_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4785_m28247_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t937_0_0_0;
static ParameterInfo t4785_m28248_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t937_0_0_0},
};
extern TypeInfo t4785_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28248_MI = 
{
	"Insert", NULL, &t4785_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4785_m28248_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4785_m28249_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4785_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28249_MI = 
{
	"RemoveAt", NULL, &t4785_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4785_m28249_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4785_m28245_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4785_TI;
extern Il2CppType t937_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28245_MI = 
{
	"get_Item", NULL, &t4785_TI, &t937_0_0_0, RuntimeInvoker_t4_t16, t4785_m28245_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t937_0_0_0;
static ParameterInfo t4785_m28246_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t937_0_0_0},
};
extern TypeInfo t4785_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28246_MI = 
{
	"set_Item", NULL, &t4785_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4785_m28246_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4785_MIs[] =
{
	&m28247_MI,
	&m28248_MI,
	&m28249_MI,
	&m28245_MI,
	&m28246_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4784_TI;
extern TypeInfo t4786_TI;
static TypeInfo* t4785_ITIs[] = 
{
	&t591_TI,
	&t4784_TI,
	&t4786_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4785_0_0_0;
extern Il2CppType t4785_1_0_0;
struct t4785;
extern TypeInfo t4785_TI;
extern Il2CppGenericClass t4785_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4785_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4785_MIs, t4785_PIs, NULL, NULL, NULL, NULL, NULL, &t4785_TI, t4785_ITIs, NULL, &t1400__CustomAttributeCache, &t4785_TI, &t4785_0_0_0, &t4785_1_0_0, NULL, &t4785_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4787_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>
extern MethodInfo m28250_MI;
static PropertyInfo t4787____Count_PropertyInfo = 
{
	&t4787_TI, "Count", &m28250_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28251_MI;
static PropertyInfo t4787____IsReadOnly_PropertyInfo = 
{
	&t4787_TI, "IsReadOnly", &m28251_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4787_PIs[] =
{
	&t4787____Count_PropertyInfo,
	&t4787____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4787_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28250_MI = 
{
	"get_Count", NULL, &t4787_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4787_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28251_MI = 
{
	"get_IsReadOnly", NULL, &t4787_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1499_0_0_0;
static ParameterInfo t4787_m28252_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1499_0_0_0},
};
extern TypeInfo t4787_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28252_MI = 
{
	"Add", NULL, &t4787_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4787_m28252_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4787_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28253_MI = 
{
	"Clear", NULL, &t4787_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1499_0_0_0;
static ParameterInfo t4787_m28254_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1499_0_0_0},
};
extern TypeInfo t4787_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28254_MI = 
{
	"Contains", NULL, &t4787_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4787_m28254_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3002_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4787_m28255_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3002_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4787_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28255_MI = 
{
	"CopyTo", NULL, &t4787_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4787_m28255_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1499_0_0_0;
static ParameterInfo t4787_m28256_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1499_0_0_0},
};
extern TypeInfo t4787_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28256_MI = 
{
	"Remove", NULL, &t4787_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4787_m28256_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4787_MIs[] =
{
	&m28250_MI,
	&m28251_MI,
	&m28252_MI,
	&m28253_MI,
	&m28254_MI,
	&m28255_MI,
	&m28256_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4789_TI;
static TypeInfo* t4787_ITIs[] = 
{
	&t591_TI,
	&t4789_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4787_0_0_0;
extern Il2CppType t4787_1_0_0;
struct t4787;
extern TypeInfo t4787_TI;
extern Il2CppGenericClass t4787_GC;
TypeInfo t4787_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4787_MIs, t4787_PIs, NULL, NULL, NULL, NULL, NULL, &t4787_TI, t4787_ITIs, NULL, &EmptyCustomAttributesCache, &t4787_TI, &t4787_0_0_0, &t4787_1_0_0, NULL, &t4787_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4789_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBuilder>
extern TypeInfo t4789_TI;
extern Il2CppType t3650_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28257_MI = 
{
	"GetEnumerator", NULL, &t4789_TI, &t3650_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4789_MIs[] =
{
	&m28257_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4789_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4789_0_0_0;
extern Il2CppType t4789_1_0_0;
struct t4789;
extern TypeInfo t4789_TI;
extern Il2CppGenericClass t4789_GC;
TypeInfo t4789_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4789_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4789_TI, t4789_ITIs, NULL, &EmptyCustomAttributesCache, &t4789_TI, &t4789_0_0_0, &t4789_1_0_0, NULL, &t4789_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3650_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBuilder>
extern MethodInfo m28258_MI;
static PropertyInfo t3650____Current_PropertyInfo = 
{
	&t3650_TI, "Current", &m28258_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3650_PIs[] =
{
	&t3650____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3650_TI;
extern Il2CppType t1499_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28258_MI = 
{
	"get_Current", NULL, &t3650_TI, &t1499_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3650_MIs[] =
{
	&m28258_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3650_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3650_0_0_0;
extern Il2CppType t3650_1_0_0;
struct t3650;
extern TypeInfo t3650_TI;
extern Il2CppGenericClass t3650_GC;
TypeInfo t3650_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3650_MIs, t3650_PIs, NULL, NULL, NULL, NULL, NULL, &t3650_TI, t3650_ITIs, NULL, &EmptyCustomAttributesCache, &t3650_TI, &t3650_0_0_0, &t3650_1_0_0, NULL, &t3650_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2762.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2762_TI;
#include "t2762MD.h"

extern TypeInfo t2762_TI;
extern TypeInfo t1499_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16028_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21559_MI;
struct t14;
#define m21559(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21559_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>
extern Il2CppType t14_0_0_1;
FieldInfo t2762_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2762_TI, offsetof(t2762, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2762_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2762_TI, offsetof(t2762, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2762_FIs[] =
{
	&t2762_f0_FieldInfo,
	&t2762_f1_FieldInfo,
	NULL
};
extern MethodInfo m16025_MI;
static PropertyInfo t2762____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2762_TI, "System.Collections.IEnumerator.Current", &m16025_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16028_MI;
static PropertyInfo t2762____Current_PropertyInfo = 
{
	&t2762_TI, "Current", &m16028_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2762_PIs[] =
{
	&t2762____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2762____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2762_m16024_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2762_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16024_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2762_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2762_m16024_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2762_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16025_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2762_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2762_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16026_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2762_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2762_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16027_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2762_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2762_TI;
extern Il2CppType t1499_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16028_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2762_TI, &t1499_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2762_MIs[] =
{
	&m16024_MI,
	&m16025_MI,
	&m16026_MI,
	&m16027_MI,
	&m16028_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16025_MI;
extern MethodInfo m16027_MI;
extern MethodInfo m16026_MI;
extern MethodInfo m16028_MI;
static MethodInfo* t2762_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16025_MI,
	&m16027_MI,
	&m16026_MI,
	&m16028_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3650_TI;
static TypeInfo* t2762_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3650_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3650_TI;
static Il2CppInterfaceOffsetPair t2762_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3650_TI, 7},
};
extern MethodInfo m16028_MI;
extern TypeInfo t1499_TI;
extern MethodInfo m21559_MI;
static void* t2762_RGCTXData[3] = 
{
	&m16028_MI,
	&t1499_TI,
	&m21559_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2762_0_0_0;
extern Il2CppType t2762_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2762_TI;
extern Il2CppGenericClass t2762_GC;
extern TypeInfo t14_TI;
TypeInfo t2762_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2762_MIs, t2762_PIs, t2762_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2762_TI, t2762_ITIs, t2762_VT, &EmptyCustomAttributesCache, &t2762_TI, &t2762_0_0_0, &t2762_1_0_0, t2762_IOs, &t2762_GC, NULL, NULL, NULL, t2762_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2762)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4788_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>
extern MethodInfo m28259_MI;
extern MethodInfo m28260_MI;
static PropertyInfo t4788____Item_PropertyInfo = 
{
	&t4788_TI, "Item", &m28259_MI, &m28260_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4788_PIs[] =
{
	&t4788____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1499_0_0_0;
static ParameterInfo t4788_m28261_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1499_0_0_0},
};
extern TypeInfo t4788_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28261_MI = 
{
	"IndexOf", NULL, &t4788_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4788_m28261_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1499_0_0_0;
static ParameterInfo t4788_m28262_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1499_0_0_0},
};
extern TypeInfo t4788_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28262_MI = 
{
	"Insert", NULL, &t4788_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4788_m28262_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4788_m28263_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4788_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28263_MI = 
{
	"RemoveAt", NULL, &t4788_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4788_m28263_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4788_m28259_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4788_TI;
extern Il2CppType t1499_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28259_MI = 
{
	"get_Item", NULL, &t4788_TI, &t1499_0_0_0, RuntimeInvoker_t4_t16, t4788_m28259_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1499_0_0_0;
static ParameterInfo t4788_m28260_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1499_0_0_0},
};
extern TypeInfo t4788_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28260_MI = 
{
	"set_Item", NULL, &t4788_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4788_m28260_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4788_MIs[] =
{
	&m28261_MI,
	&m28262_MI,
	&m28263_MI,
	&m28259_MI,
	&m28260_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4787_TI;
extern TypeInfo t4789_TI;
static TypeInfo* t4788_ITIs[] = 
{
	&t591_TI,
	&t4787_TI,
	&t4789_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4788_0_0_0;
extern Il2CppType t4788_1_0_0;
struct t4788;
extern TypeInfo t4788_TI;
extern Il2CppGenericClass t4788_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4788_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4788_MIs, t4788_PIs, NULL, NULL, NULL, NULL, NULL, &t4788_TI, t4788_ITIs, NULL, &t1400__CustomAttributeCache, &t4788_TI, &t4788_0_0_0, &t4788_1_0_0, NULL, &t4788_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3651_TI;

#include "t926.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ConstructorBuilder>
extern MethodInfo m28264_MI;
static PropertyInfo t3651____Current_PropertyInfo = 
{
	&t3651_TI, "Current", &m28264_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3651_PIs[] =
{
	&t3651____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3651_TI;
extern Il2CppType t926_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28264_MI = 
{
	"get_Current", NULL, &t3651_TI, &t926_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3651_MIs[] =
{
	&m28264_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3651_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3651_0_0_0;
extern Il2CppType t3651_1_0_0;
struct t3651;
extern TypeInfo t3651_TI;
extern Il2CppGenericClass t3651_GC;
TypeInfo t3651_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3651_MIs, t3651_PIs, NULL, NULL, NULL, NULL, NULL, &t3651_TI, t3651_ITIs, NULL, &EmptyCustomAttributesCache, &t3651_TI, &t3651_0_0_0, &t3651_1_0_0, NULL, &t3651_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2763.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2763_TI;
#include "t2763MD.h"

extern TypeInfo t2763_TI;
extern TypeInfo t926_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16033_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21570_MI;
struct t14;
#define m21570(__this, p0, method) (t926 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21570_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>
extern Il2CppType t14_0_0_1;
FieldInfo t2763_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2763_TI, offsetof(t2763, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2763_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2763_TI, offsetof(t2763, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2763_FIs[] =
{
	&t2763_f0_FieldInfo,
	&t2763_f1_FieldInfo,
	NULL
};
extern MethodInfo m16030_MI;
static PropertyInfo t2763____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2763_TI, "System.Collections.IEnumerator.Current", &m16030_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16033_MI;
static PropertyInfo t2763____Current_PropertyInfo = 
{
	&t2763_TI, "Current", &m16033_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2763_PIs[] =
{
	&t2763____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2763____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2763_m16029_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2763_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16029_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2763_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2763_m16029_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2763_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16030_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2763_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2763_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16031_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2763_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2763_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16032_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2763_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2763_TI;
extern Il2CppType t926_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16033_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2763_TI, &t926_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2763_MIs[] =
{
	&m16029_MI,
	&m16030_MI,
	&m16031_MI,
	&m16032_MI,
	&m16033_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16030_MI;
extern MethodInfo m16032_MI;
extern MethodInfo m16031_MI;
extern MethodInfo m16033_MI;
static MethodInfo* t2763_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16030_MI,
	&m16032_MI,
	&m16031_MI,
	&m16033_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3651_TI;
static TypeInfo* t2763_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3651_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3651_TI;
static Il2CppInterfaceOffsetPair t2763_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3651_TI, 7},
};
extern MethodInfo m16033_MI;
extern TypeInfo t926_TI;
extern MethodInfo m21570_MI;
static void* t2763_RGCTXData[3] = 
{
	&m16033_MI,
	&t926_TI,
	&m21570_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2763_0_0_0;
extern Il2CppType t2763_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2763_TI;
extern Il2CppGenericClass t2763_GC;
extern TypeInfo t14_TI;
TypeInfo t2763_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2763_MIs, t2763_PIs, t2763_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2763_TI, t2763_ITIs, t2763_VT, &EmptyCustomAttributesCache, &t2763_TI, &t2763_0_0_0, &t2763_1_0_0, t2763_IOs, &t2763_GC, NULL, NULL, NULL, t2763_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2763)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4790_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>
extern MethodInfo m28265_MI;
static PropertyInfo t4790____Count_PropertyInfo = 
{
	&t4790_TI, "Count", &m28265_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28266_MI;
static PropertyInfo t4790____IsReadOnly_PropertyInfo = 
{
	&t4790_TI, "IsReadOnly", &m28266_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4790_PIs[] =
{
	&t4790____Count_PropertyInfo,
	&t4790____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4790_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28265_MI = 
{
	"get_Count", NULL, &t4790_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4790_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28266_MI = 
{
	"get_IsReadOnly", NULL, &t4790_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t926_0_0_0;
static ParameterInfo t4790_m28267_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t926_0_0_0},
};
extern TypeInfo t4790_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28267_MI = 
{
	"Add", NULL, &t4790_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4790_m28267_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4790_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28268_MI = 
{
	"Clear", NULL, &t4790_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t926_0_0_0;
static ParameterInfo t4790_m28269_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t926_0_0_0},
};
extern TypeInfo t4790_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28269_MI = 
{
	"Contains", NULL, &t4790_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4790_m28269_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t941_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4790_m28270_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t941_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4790_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28270_MI = 
{
	"CopyTo", NULL, &t4790_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4790_m28270_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t926_0_0_0;
static ParameterInfo t4790_m28271_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t926_0_0_0},
};
extern TypeInfo t4790_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28271_MI = 
{
	"Remove", NULL, &t4790_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4790_m28271_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4790_MIs[] =
{
	&m28265_MI,
	&m28266_MI,
	&m28267_MI,
	&m28268_MI,
	&m28269_MI,
	&m28270_MI,
	&m28271_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4792_TI;
static TypeInfo* t4790_ITIs[] = 
{
	&t591_TI,
	&t4792_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4790_0_0_0;
extern Il2CppType t4790_1_0_0;
struct t4790;
extern TypeInfo t4790_TI;
extern Il2CppGenericClass t4790_GC;
TypeInfo t4790_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4790_MIs, t4790_PIs, NULL, NULL, NULL, NULL, NULL, &t4790_TI, t4790_ITIs, NULL, &EmptyCustomAttributesCache, &t4790_TI, &t4790_0_0_0, &t4790_1_0_0, NULL, &t4790_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4792_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ConstructorBuilder>
extern TypeInfo t4792_TI;
extern Il2CppType t3651_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28272_MI = 
{
	"GetEnumerator", NULL, &t4792_TI, &t3651_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4792_MIs[] =
{
	&m28272_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4792_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4792_0_0_0;
extern Il2CppType t4792_1_0_0;
struct t4792;
extern TypeInfo t4792_TI;
extern Il2CppGenericClass t4792_GC;
TypeInfo t4792_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4792_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4792_TI, t4792_ITIs, NULL, &EmptyCustomAttributesCache, &t4792_TI, &t4792_0_0_0, &t4792_1_0_0, NULL, &t4792_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4791_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>
extern MethodInfo m28273_MI;
extern MethodInfo m28274_MI;
static PropertyInfo t4791____Item_PropertyInfo = 
{
	&t4791_TI, "Item", &m28273_MI, &m28274_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4791_PIs[] =
{
	&t4791____Item_PropertyInfo,
	NULL
};
extern Il2CppType t926_0_0_0;
static ParameterInfo t4791_m28275_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t926_0_0_0},
};
extern TypeInfo t4791_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28275_MI = 
{
	"IndexOf", NULL, &t4791_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4791_m28275_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t926_0_0_0;
static ParameterInfo t4791_m28276_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t926_0_0_0},
};
extern TypeInfo t4791_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28276_MI = 
{
	"Insert", NULL, &t4791_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4791_m28276_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4791_m28277_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4791_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28277_MI = 
{
	"RemoveAt", NULL, &t4791_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4791_m28277_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4791_m28273_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4791_TI;
extern Il2CppType t926_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28273_MI = 
{
	"get_Item", NULL, &t4791_TI, &t926_0_0_0, RuntimeInvoker_t4_t16, t4791_m28273_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t926_0_0_0;
static ParameterInfo t4791_m28274_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t926_0_0_0},
};
extern TypeInfo t4791_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28274_MI = 
{
	"set_Item", NULL, &t4791_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4791_m28274_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4791_MIs[] =
{
	&m28275_MI,
	&m28276_MI,
	&m28277_MI,
	&m28273_MI,
	&m28274_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4790_TI;
extern TypeInfo t4792_TI;
static TypeInfo* t4791_ITIs[] = 
{
	&t591_TI,
	&t4790_TI,
	&t4792_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4791_0_0_0;
extern Il2CppType t4791_1_0_0;
struct t4791;
extern TypeInfo t4791_TI;
extern Il2CppGenericClass t4791_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4791_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4791_MIs, t4791_PIs, NULL, NULL, NULL, NULL, NULL, &t4791_TI, t4791_ITIs, NULL, &t1400__CustomAttributeCache, &t4791_TI, &t4791_0_0_0, &t4791_1_0_0, NULL, &t4791_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4793_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>
extern MethodInfo m28278_MI;
static PropertyInfo t4793____Count_PropertyInfo = 
{
	&t4793_TI, "Count", &m28278_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28279_MI;
static PropertyInfo t4793____IsReadOnly_PropertyInfo = 
{
	&t4793_TI, "IsReadOnly", &m28279_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4793_PIs[] =
{
	&t4793____Count_PropertyInfo,
	&t4793____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4793_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28278_MI = 
{
	"get_Count", NULL, &t4793_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4793_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28279_MI = 
{
	"get_IsReadOnly", NULL, &t4793_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1493_0_0_0;
static ParameterInfo t4793_m28280_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1493_0_0_0},
};
extern TypeInfo t4793_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28280_MI = 
{
	"Add", NULL, &t4793_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4793_m28280_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4793_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28281_MI = 
{
	"Clear", NULL, &t4793_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1493_0_0_0;
static ParameterInfo t4793_m28282_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1493_0_0_0},
};
extern TypeInfo t4793_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28282_MI = 
{
	"Contains", NULL, &t4793_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4793_m28282_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3003_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4793_m28283_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3003_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4793_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28283_MI = 
{
	"CopyTo", NULL, &t4793_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4793_m28283_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1493_0_0_0;
static ParameterInfo t4793_m28284_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1493_0_0_0},
};
extern TypeInfo t4793_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28284_MI = 
{
	"Remove", NULL, &t4793_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4793_m28284_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4793_MIs[] =
{
	&m28278_MI,
	&m28279_MI,
	&m28280_MI,
	&m28281_MI,
	&m28282_MI,
	&m28283_MI,
	&m28284_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4795_TI;
static TypeInfo* t4793_ITIs[] = 
{
	&t591_TI,
	&t4795_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4793_0_0_0;
extern Il2CppType t4793_1_0_0;
struct t4793;
extern TypeInfo t4793_TI;
extern Il2CppGenericClass t4793_GC;
TypeInfo t4793_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4793_MIs, t4793_PIs, NULL, NULL, NULL, NULL, NULL, &t4793_TI, t4793_ITIs, NULL, &EmptyCustomAttributesCache, &t4793_TI, &t4793_0_0_0, &t4793_1_0_0, NULL, &t4793_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4795_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorBuilder>
extern TypeInfo t4795_TI;
extern Il2CppType t3652_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28285_MI = 
{
	"GetEnumerator", NULL, &t4795_TI, &t3652_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4795_MIs[] =
{
	&m28285_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4795_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4795_0_0_0;
extern Il2CppType t4795_1_0_0;
struct t4795;
extern TypeInfo t4795_TI;
extern Il2CppGenericClass t4795_GC;
TypeInfo t4795_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4795_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4795_TI, t4795_ITIs, NULL, &EmptyCustomAttributesCache, &t4795_TI, &t4795_0_0_0, &t4795_1_0_0, NULL, &t4795_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3652_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>
extern MethodInfo m28286_MI;
static PropertyInfo t3652____Current_PropertyInfo = 
{
	&t3652_TI, "Current", &m28286_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3652_PIs[] =
{
	&t3652____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3652_TI;
extern Il2CppType t1493_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28286_MI = 
{
	"get_Current", NULL, &t3652_TI, &t1493_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3652_MIs[] =
{
	&m28286_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3652_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3652_0_0_0;
extern Il2CppType t3652_1_0_0;
struct t3652;
extern TypeInfo t3652_TI;
extern Il2CppGenericClass t3652_GC;
TypeInfo t3652_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3652_MIs, t3652_PIs, NULL, NULL, NULL, NULL, NULL, &t3652_TI, t3652_ITIs, NULL, &EmptyCustomAttributesCache, &t3652_TI, &t3652_0_0_0, &t3652_1_0_0, NULL, &t3652_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2764.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2764_TI;
#include "t2764MD.h"

extern TypeInfo t2764_TI;
extern TypeInfo t1493_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16038_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21581_MI;
struct t14;
#define m21581(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21581_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>
extern Il2CppType t14_0_0_1;
FieldInfo t2764_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2764_TI, offsetof(t2764, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2764_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2764_TI, offsetof(t2764, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2764_FIs[] =
{
	&t2764_f0_FieldInfo,
	&t2764_f1_FieldInfo,
	NULL
};
extern MethodInfo m16035_MI;
static PropertyInfo t2764____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2764_TI, "System.Collections.IEnumerator.Current", &m16035_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16038_MI;
static PropertyInfo t2764____Current_PropertyInfo = 
{
	&t2764_TI, "Current", &m16038_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2764_PIs[] =
{
	&t2764____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2764____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2764_m16034_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2764_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16034_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2764_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2764_m16034_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2764_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16035_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2764_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2764_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16036_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2764_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2764_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16037_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2764_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2764_TI;
extern Il2CppType t1493_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16038_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2764_TI, &t1493_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2764_MIs[] =
{
	&m16034_MI,
	&m16035_MI,
	&m16036_MI,
	&m16037_MI,
	&m16038_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16035_MI;
extern MethodInfo m16037_MI;
extern MethodInfo m16036_MI;
extern MethodInfo m16038_MI;
static MethodInfo* t2764_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16035_MI,
	&m16037_MI,
	&m16036_MI,
	&m16038_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3652_TI;
static TypeInfo* t2764_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3652_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3652_TI;
static Il2CppInterfaceOffsetPair t2764_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3652_TI, 7},
};
extern MethodInfo m16038_MI;
extern TypeInfo t1493_TI;
extern MethodInfo m21581_MI;
static void* t2764_RGCTXData[3] = 
{
	&m16038_MI,
	&t1493_TI,
	&m21581_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2764_0_0_0;
extern Il2CppType t2764_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2764_TI;
extern Il2CppGenericClass t2764_GC;
extern TypeInfo t14_TI;
TypeInfo t2764_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2764_MIs, t2764_PIs, t2764_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2764_TI, t2764_ITIs, t2764_VT, &EmptyCustomAttributesCache, &t2764_TI, &t2764_0_0_0, &t2764_1_0_0, t2764_IOs, &t2764_GC, NULL, NULL, NULL, t2764_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2764)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4794_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>
extern MethodInfo m28287_MI;
extern MethodInfo m28288_MI;
static PropertyInfo t4794____Item_PropertyInfo = 
{
	&t4794_TI, "Item", &m28287_MI, &m28288_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4794_PIs[] =
{
	&t4794____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1493_0_0_0;
static ParameterInfo t4794_m28289_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1493_0_0_0},
};
extern TypeInfo t4794_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28289_MI = 
{
	"IndexOf", NULL, &t4794_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4794_m28289_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1493_0_0_0;
static ParameterInfo t4794_m28290_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1493_0_0_0},
};
extern TypeInfo t4794_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28290_MI = 
{
	"Insert", NULL, &t4794_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4794_m28290_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4794_m28291_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4794_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28291_MI = 
{
	"RemoveAt", NULL, &t4794_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4794_m28291_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4794_m28287_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4794_TI;
extern Il2CppType t1493_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28287_MI = 
{
	"get_Item", NULL, &t4794_TI, &t1493_0_0_0, RuntimeInvoker_t4_t16, t4794_m28287_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1493_0_0_0;
static ParameterInfo t4794_m28288_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1493_0_0_0},
};
extern TypeInfo t4794_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28288_MI = 
{
	"set_Item", NULL, &t4794_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4794_m28288_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4794_MIs[] =
{
	&m28289_MI,
	&m28290_MI,
	&m28291_MI,
	&m28287_MI,
	&m28288_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4793_TI;
extern TypeInfo t4795_TI;
static TypeInfo* t4794_ITIs[] = 
{
	&t591_TI,
	&t4793_TI,
	&t4795_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4794_0_0_0;
extern Il2CppType t4794_1_0_0;
struct t4794;
extern TypeInfo t4794_TI;
extern Il2CppGenericClass t4794_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4794_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4794_MIs, t4794_PIs, NULL, NULL, NULL, NULL, NULL, &t4794_TI, t4794_ITIs, NULL, &t1400__CustomAttributeCache, &t4794_TI, &t4794_0_0_0, &t4794_1_0_0, NULL, &t4794_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3653_TI;

#include "t933.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.FieldBuilder>
extern MethodInfo m28292_MI;
static PropertyInfo t3653____Current_PropertyInfo = 
{
	&t3653_TI, "Current", &m28292_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3653_PIs[] =
{
	&t3653____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3653_TI;
extern Il2CppType t933_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28292_MI = 
{
	"get_Current", NULL, &t3653_TI, &t933_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3653_MIs[] =
{
	&m28292_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3653_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3653_0_0_0;
extern Il2CppType t3653_1_0_0;
struct t3653;
extern TypeInfo t3653_TI;
extern Il2CppGenericClass t3653_GC;
TypeInfo t3653_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3653_MIs, t3653_PIs, NULL, NULL, NULL, NULL, NULL, &t3653_TI, t3653_ITIs, NULL, &EmptyCustomAttributesCache, &t3653_TI, &t3653_0_0_0, &t3653_1_0_0, NULL, &t3653_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2765.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2765_TI;
#include "t2765MD.h"

extern TypeInfo t2765_TI;
extern TypeInfo t933_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16043_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21592_MI;
struct t14;
#define m21592(__this, p0, method) (t933 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21592_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>
extern Il2CppType t14_0_0_1;
FieldInfo t2765_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2765_TI, offsetof(t2765, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2765_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2765_TI, offsetof(t2765, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2765_FIs[] =
{
	&t2765_f0_FieldInfo,
	&t2765_f1_FieldInfo,
	NULL
};
extern MethodInfo m16040_MI;
static PropertyInfo t2765____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2765_TI, "System.Collections.IEnumerator.Current", &m16040_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16043_MI;
static PropertyInfo t2765____Current_PropertyInfo = 
{
	&t2765_TI, "Current", &m16043_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2765_PIs[] =
{
	&t2765____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2765____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2765_m16039_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2765_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16039_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2765_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2765_m16039_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2765_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16040_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2765_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2765_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16041_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2765_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2765_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16042_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2765_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2765_TI;
extern Il2CppType t933_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16043_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2765_TI, &t933_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2765_MIs[] =
{
	&m16039_MI,
	&m16040_MI,
	&m16041_MI,
	&m16042_MI,
	&m16043_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16040_MI;
extern MethodInfo m16042_MI;
extern MethodInfo m16041_MI;
extern MethodInfo m16043_MI;
static MethodInfo* t2765_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16040_MI,
	&m16042_MI,
	&m16041_MI,
	&m16043_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3653_TI;
static TypeInfo* t2765_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3653_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3653_TI;
static Il2CppInterfaceOffsetPair t2765_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3653_TI, 7},
};
extern MethodInfo m16043_MI;
extern TypeInfo t933_TI;
extern MethodInfo m21592_MI;
static void* t2765_RGCTXData[3] = 
{
	&m16043_MI,
	&t933_TI,
	&m21592_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2765_0_0_0;
extern Il2CppType t2765_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2765_TI;
extern Il2CppGenericClass t2765_GC;
extern TypeInfo t14_TI;
TypeInfo t2765_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2765_MIs, t2765_PIs, t2765_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2765_TI, t2765_ITIs, t2765_VT, &EmptyCustomAttributesCache, &t2765_TI, &t2765_0_0_0, &t2765_1_0_0, t2765_IOs, &t2765_GC, NULL, NULL, NULL, t2765_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2765)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4796_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>
extern MethodInfo m28293_MI;
static PropertyInfo t4796____Count_PropertyInfo = 
{
	&t4796_TI, "Count", &m28293_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28294_MI;
static PropertyInfo t4796____IsReadOnly_PropertyInfo = 
{
	&t4796_TI, "IsReadOnly", &m28294_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4796_PIs[] =
{
	&t4796____Count_PropertyInfo,
	&t4796____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4796_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28293_MI = 
{
	"get_Count", NULL, &t4796_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4796_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28294_MI = 
{
	"get_IsReadOnly", NULL, &t4796_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t933_0_0_0;
static ParameterInfo t4796_m28295_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t933_0_0_0},
};
extern TypeInfo t4796_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28295_MI = 
{
	"Add", NULL, &t4796_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4796_m28295_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4796_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28296_MI = 
{
	"Clear", NULL, &t4796_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t933_0_0_0;
static ParameterInfo t4796_m28297_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t933_0_0_0},
};
extern TypeInfo t4796_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28297_MI = 
{
	"Contains", NULL, &t4796_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4796_m28297_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t942_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4796_m28298_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t942_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4796_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28298_MI = 
{
	"CopyTo", NULL, &t4796_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4796_m28298_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t933_0_0_0;
static ParameterInfo t4796_m28299_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t933_0_0_0},
};
extern TypeInfo t4796_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28299_MI = 
{
	"Remove", NULL, &t4796_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4796_m28299_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4796_MIs[] =
{
	&m28293_MI,
	&m28294_MI,
	&m28295_MI,
	&m28296_MI,
	&m28297_MI,
	&m28298_MI,
	&m28299_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4798_TI;
static TypeInfo* t4796_ITIs[] = 
{
	&t591_TI,
	&t4798_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4796_0_0_0;
extern Il2CppType t4796_1_0_0;
struct t4796;
extern TypeInfo t4796_TI;
extern Il2CppGenericClass t4796_GC;
TypeInfo t4796_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4796_MIs, t4796_PIs, NULL, NULL, NULL, NULL, NULL, &t4796_TI, t4796_ITIs, NULL, &EmptyCustomAttributesCache, &t4796_TI, &t4796_0_0_0, &t4796_1_0_0, NULL, &t4796_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4798_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.FieldBuilder>
extern TypeInfo t4798_TI;
extern Il2CppType t3653_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28300_MI = 
{
	"GetEnumerator", NULL, &t4798_TI, &t3653_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4798_MIs[] =
{
	&m28300_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4798_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4798_0_0_0;
extern Il2CppType t4798_1_0_0;
struct t4798;
extern TypeInfo t4798_TI;
extern Il2CppGenericClass t4798_GC;
TypeInfo t4798_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4798_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4798_TI, t4798_ITIs, NULL, &EmptyCustomAttributesCache, &t4798_TI, &t4798_0_0_0, &t4798_1_0_0, NULL, &t4798_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4797_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>
extern MethodInfo m28301_MI;
extern MethodInfo m28302_MI;
static PropertyInfo t4797____Item_PropertyInfo = 
{
	&t4797_TI, "Item", &m28301_MI, &m28302_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4797_PIs[] =
{
	&t4797____Item_PropertyInfo,
	NULL
};
extern Il2CppType t933_0_0_0;
static ParameterInfo t4797_m28303_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t933_0_0_0},
};
extern TypeInfo t4797_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28303_MI = 
{
	"IndexOf", NULL, &t4797_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4797_m28303_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t933_0_0_0;
static ParameterInfo t4797_m28304_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t933_0_0_0},
};
extern TypeInfo t4797_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28304_MI = 
{
	"Insert", NULL, &t4797_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4797_m28304_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4797_m28305_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4797_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28305_MI = 
{
	"RemoveAt", NULL, &t4797_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4797_m28305_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4797_m28301_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4797_TI;
extern Il2CppType t933_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28301_MI = 
{
	"get_Item", NULL, &t4797_TI, &t933_0_0_0, RuntimeInvoker_t4_t16, t4797_m28301_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t933_0_0_0;
static ParameterInfo t4797_m28302_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t933_0_0_0},
};
extern TypeInfo t4797_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28302_MI = 
{
	"set_Item", NULL, &t4797_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4797_m28302_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4797_MIs[] =
{
	&m28303_MI,
	&m28304_MI,
	&m28305_MI,
	&m28301_MI,
	&m28302_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4796_TI;
extern TypeInfo t4798_TI;
static TypeInfo* t4797_ITIs[] = 
{
	&t591_TI,
	&t4796_TI,
	&t4798_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4797_0_0_0;
extern Il2CppType t4797_1_0_0;
struct t4797;
extern TypeInfo t4797_TI;
extern Il2CppGenericClass t4797_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4797_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4797_MIs, t4797_PIs, NULL, NULL, NULL, NULL, NULL, &t4797_TI, t4797_ITIs, NULL, &t1400__CustomAttributeCache, &t4797_TI, &t4797_0_0_0, &t4797_1_0_0, NULL, &t4797_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4799_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>
extern MethodInfo m28306_MI;
static PropertyInfo t4799____Count_PropertyInfo = 
{
	&t4799_TI, "Count", &m28306_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28307_MI;
static PropertyInfo t4799____IsReadOnly_PropertyInfo = 
{
	&t4799_TI, "IsReadOnly", &m28307_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4799_PIs[] =
{
	&t4799____Count_PropertyInfo,
	&t4799____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4799_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28306_MI = 
{
	"get_Count", NULL, &t4799_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4799_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28307_MI = 
{
	"get_IsReadOnly", NULL, &t4799_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1497_0_0_0;
static ParameterInfo t4799_m28308_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1497_0_0_0},
};
extern TypeInfo t4799_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28308_MI = 
{
	"Add", NULL, &t4799_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4799_m28308_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4799_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28309_MI = 
{
	"Clear", NULL, &t4799_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1497_0_0_0;
static ParameterInfo t4799_m28310_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1497_0_0_0},
};
extern TypeInfo t4799_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28310_MI = 
{
	"Contains", NULL, &t4799_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4799_m28310_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3004_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4799_m28311_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3004_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4799_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28311_MI = 
{
	"CopyTo", NULL, &t4799_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4799_m28311_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1497_0_0_0;
static ParameterInfo t4799_m28312_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1497_0_0_0},
};
extern TypeInfo t4799_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28312_MI = 
{
	"Remove", NULL, &t4799_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4799_m28312_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4799_MIs[] =
{
	&m28306_MI,
	&m28307_MI,
	&m28308_MI,
	&m28309_MI,
	&m28310_MI,
	&m28311_MI,
	&m28312_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4801_TI;
static TypeInfo* t4799_ITIs[] = 
{
	&t591_TI,
	&t4801_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4799_0_0_0;
extern Il2CppType t4799_1_0_0;
struct t4799;
extern TypeInfo t4799_TI;
extern Il2CppGenericClass t4799_GC;
TypeInfo t4799_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4799_MIs, t4799_PIs, NULL, NULL, NULL, NULL, NULL, &t4799_TI, t4799_ITIs, NULL, &EmptyCustomAttributesCache, &t4799_TI, &t4799_0_0_0, &t4799_1_0_0, NULL, &t4799_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4801_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._FieldBuilder>
extern TypeInfo t4801_TI;
extern Il2CppType t3654_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28313_MI = 
{
	"GetEnumerator", NULL, &t4801_TI, &t3654_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4801_MIs[] =
{
	&m28313_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4801_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4801_0_0_0;
extern Il2CppType t4801_1_0_0;
struct t4801;
extern TypeInfo t4801_TI;
extern Il2CppGenericClass t4801_GC;
TypeInfo t4801_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4801_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4801_TI, t4801_ITIs, NULL, &EmptyCustomAttributesCache, &t4801_TI, &t4801_0_0_0, &t4801_1_0_0, NULL, &t4801_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3654_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._FieldBuilder>
extern MethodInfo m28314_MI;
static PropertyInfo t3654____Current_PropertyInfo = 
{
	&t3654_TI, "Current", &m28314_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3654_PIs[] =
{
	&t3654____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3654_TI;
extern Il2CppType t1497_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28314_MI = 
{
	"get_Current", NULL, &t3654_TI, &t1497_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3654_MIs[] =
{
	&m28314_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3654_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3654_0_0_0;
extern Il2CppType t3654_1_0_0;
struct t3654;
extern TypeInfo t3654_TI;
extern Il2CppGenericClass t3654_GC;
TypeInfo t3654_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3654_MIs, t3654_PIs, NULL, NULL, NULL, NULL, NULL, &t3654_TI, t3654_ITIs, NULL, &EmptyCustomAttributesCache, &t3654_TI, &t3654_0_0_0, &t3654_1_0_0, NULL, &t3654_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2766.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2766_TI;
#include "t2766MD.h"

extern TypeInfo t2766_TI;
extern TypeInfo t1497_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16048_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21603_MI;
struct t14;
#define m21603(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21603_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>
extern Il2CppType t14_0_0_1;
FieldInfo t2766_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2766_TI, offsetof(t2766, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2766_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2766_TI, offsetof(t2766, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2766_FIs[] =
{
	&t2766_f0_FieldInfo,
	&t2766_f1_FieldInfo,
	NULL
};
extern MethodInfo m16045_MI;
static PropertyInfo t2766____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2766_TI, "System.Collections.IEnumerator.Current", &m16045_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16048_MI;
static PropertyInfo t2766____Current_PropertyInfo = 
{
	&t2766_TI, "Current", &m16048_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2766_PIs[] =
{
	&t2766____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2766____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2766_m16044_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2766_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16044_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2766_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2766_m16044_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2766_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16045_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2766_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2766_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16046_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2766_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2766_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16047_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2766_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2766_TI;
extern Il2CppType t1497_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16048_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2766_TI, &t1497_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2766_MIs[] =
{
	&m16044_MI,
	&m16045_MI,
	&m16046_MI,
	&m16047_MI,
	&m16048_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16045_MI;
extern MethodInfo m16047_MI;
extern MethodInfo m16046_MI;
extern MethodInfo m16048_MI;
static MethodInfo* t2766_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16045_MI,
	&m16047_MI,
	&m16046_MI,
	&m16048_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3654_TI;
static TypeInfo* t2766_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3654_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3654_TI;
static Il2CppInterfaceOffsetPair t2766_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3654_TI, 7},
};
extern MethodInfo m16048_MI;
extern TypeInfo t1497_TI;
extern MethodInfo m21603_MI;
static void* t2766_RGCTXData[3] = 
{
	&m16048_MI,
	&t1497_TI,
	&m21603_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2766_0_0_0;
extern Il2CppType t2766_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2766_TI;
extern Il2CppGenericClass t2766_GC;
extern TypeInfo t14_TI;
TypeInfo t2766_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2766_MIs, t2766_PIs, t2766_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2766_TI, t2766_ITIs, t2766_VT, &EmptyCustomAttributesCache, &t2766_TI, &t2766_0_0_0, &t2766_1_0_0, t2766_IOs, &t2766_GC, NULL, NULL, NULL, t2766_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2766)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4800_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>
extern MethodInfo m28315_MI;
extern MethodInfo m28316_MI;
static PropertyInfo t4800____Item_PropertyInfo = 
{
	&t4800_TI, "Item", &m28315_MI, &m28316_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4800_PIs[] =
{
	&t4800____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1497_0_0_0;
static ParameterInfo t4800_m28317_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1497_0_0_0},
};
extern TypeInfo t4800_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28317_MI = 
{
	"IndexOf", NULL, &t4800_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4800_m28317_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1497_0_0_0;
static ParameterInfo t4800_m28318_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1497_0_0_0},
};
extern TypeInfo t4800_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28318_MI = 
{
	"Insert", NULL, &t4800_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4800_m28318_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4800_m28319_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4800_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28319_MI = 
{
	"RemoveAt", NULL, &t4800_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4800_m28319_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4800_m28315_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4800_TI;
extern Il2CppType t1497_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28315_MI = 
{
	"get_Item", NULL, &t4800_TI, &t1497_0_0_0, RuntimeInvoker_t4_t16, t4800_m28315_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1497_0_0_0;
static ParameterInfo t4800_m28316_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1497_0_0_0},
};
extern TypeInfo t4800_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28316_MI = 
{
	"set_Item", NULL, &t4800_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4800_m28316_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4800_MIs[] =
{
	&m28317_MI,
	&m28318_MI,
	&m28319_MI,
	&m28315_MI,
	&m28316_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4799_TI;
extern TypeInfo t4801_TI;
static TypeInfo* t4800_ITIs[] = 
{
	&t591_TI,
	&t4799_TI,
	&t4801_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4800_0_0_0;
extern Il2CppType t4800_1_0_0;
struct t4800;
extern TypeInfo t4800_TI;
extern Il2CppGenericClass t4800_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4800_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4800_MIs, t4800_PIs, NULL, NULL, NULL, NULL, NULL, &t4800_TI, t4800_ITIs, NULL, &t1400__CustomAttributeCache, &t4800_TI, &t4800_0_0_0, &t4800_1_0_0, NULL, &t4800_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4802_TI;

#include "t722.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>
extern MethodInfo m28320_MI;
static PropertyInfo t4802____Count_PropertyInfo = 
{
	&t4802_TI, "Count", &m28320_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28321_MI;
static PropertyInfo t4802____IsReadOnly_PropertyInfo = 
{
	&t4802_TI, "IsReadOnly", &m28321_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4802_PIs[] =
{
	&t4802____Count_PropertyInfo,
	&t4802____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4802_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28320_MI = 
{
	"get_Count", NULL, &t4802_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4802_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28321_MI = 
{
	"get_IsReadOnly", NULL, &t4802_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t722_0_0_0;
static ParameterInfo t4802_m28322_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t722_0_0_0},
};
extern TypeInfo t4802_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28322_MI = 
{
	"Add", NULL, &t4802_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4802_m28322_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4802_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28323_MI = 
{
	"Clear", NULL, &t4802_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t722_0_0_0;
static ParameterInfo t4802_m28324_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t722_0_0_0},
};
extern TypeInfo t4802_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28324_MI = 
{
	"Contains", NULL, &t4802_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4802_m28324_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3005_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4802_m28325_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3005_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4802_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28325_MI = 
{
	"CopyTo", NULL, &t4802_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4802_m28325_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t722_0_0_0;
static ParameterInfo t4802_m28326_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t722_0_0_0},
};
extern TypeInfo t4802_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28326_MI = 
{
	"Remove", NULL, &t4802_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4802_m28326_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4802_MIs[] =
{
	&m28320_MI,
	&m28321_MI,
	&m28322_MI,
	&m28323_MI,
	&m28324_MI,
	&m28325_MI,
	&m28326_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4804_TI;
static TypeInfo* t4802_ITIs[] = 
{
	&t591_TI,
	&t4804_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4802_0_0_0;
extern Il2CppType t4802_1_0_0;
struct t4802;
extern TypeInfo t4802_TI;
extern Il2CppGenericClass t4802_GC;
TypeInfo t4802_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4802_MIs, t4802_PIs, NULL, NULL, NULL, NULL, NULL, &t4802_TI, t4802_ITIs, NULL, &EmptyCustomAttributesCache, &t4802_TI, &t4802_0_0_0, &t4802_1_0_0, NULL, &t4802_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4804_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
extern TypeInfo t4804_TI;
extern Il2CppType t3655_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28327_MI = 
{
	"GetEnumerator", NULL, &t4804_TI, &t3655_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4804_MIs[] =
{
	&m28327_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4804_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4804_0_0_0;
extern Il2CppType t4804_1_0_0;
struct t4804;
extern TypeInfo t4804_TI;
extern Il2CppGenericClass t4804_GC;
TypeInfo t4804_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4804_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4804_TI, t4804_ITIs, NULL, &EmptyCustomAttributesCache, &t4804_TI, &t4804_0_0_0, &t4804_1_0_0, NULL, &t4804_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3655_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>
extern MethodInfo m28328_MI;
static PropertyInfo t3655____Current_PropertyInfo = 
{
	&t3655_TI, "Current", &m28328_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3655_PIs[] =
{
	&t3655____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3655_TI;
extern Il2CppType t722_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28328_MI = 
{
	"get_Current", NULL, &t3655_TI, &t722_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3655_MIs[] =
{
	&m28328_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3655_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3655_0_0_0;
extern Il2CppType t3655_1_0_0;
struct t3655;
extern TypeInfo t3655_TI;
extern Il2CppGenericClass t3655_GC;
TypeInfo t3655_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3655_MIs, t3655_PIs, NULL, NULL, NULL, NULL, NULL, &t3655_TI, t3655_ITIs, NULL, &EmptyCustomAttributesCache, &t3655_TI, &t3655_0_0_0, &t3655_1_0_0, NULL, &t3655_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2767.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2767_TI;
#include "t2767MD.h"

extern TypeInfo t2767_TI;
extern TypeInfo t722_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16053_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21614_MI;
struct t14;
#define m21614(__this, p0, method) (t722 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21614_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.FieldInfo>
extern Il2CppType t14_0_0_1;
FieldInfo t2767_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2767_TI, offsetof(t2767, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2767_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2767_TI, offsetof(t2767, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2767_FIs[] =
{
	&t2767_f0_FieldInfo,
	&t2767_f1_FieldInfo,
	NULL
};
extern MethodInfo m16050_MI;
static PropertyInfo t2767____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2767_TI, "System.Collections.IEnumerator.Current", &m16050_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16053_MI;
static PropertyInfo t2767____Current_PropertyInfo = 
{
	&t2767_TI, "Current", &m16053_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2767_PIs[] =
{
	&t2767____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2767____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2767_m16049_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2767_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16049_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2767_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2767_m16049_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2767_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16050_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2767_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2767_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16051_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2767_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2767_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16052_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2767_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2767_TI;
extern Il2CppType t722_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16053_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2767_TI, &t722_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2767_MIs[] =
{
	&m16049_MI,
	&m16050_MI,
	&m16051_MI,
	&m16052_MI,
	&m16053_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16050_MI;
extern MethodInfo m16052_MI;
extern MethodInfo m16051_MI;
extern MethodInfo m16053_MI;
static MethodInfo* t2767_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16050_MI,
	&m16052_MI,
	&m16051_MI,
	&m16053_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3655_TI;
static TypeInfo* t2767_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3655_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3655_TI;
static Il2CppInterfaceOffsetPair t2767_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3655_TI, 7},
};
extern MethodInfo m16053_MI;
extern TypeInfo t722_TI;
extern MethodInfo m21614_MI;
static void* t2767_RGCTXData[3] = 
{
	&m16053_MI,
	&t722_TI,
	&m21614_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2767_0_0_0;
extern Il2CppType t2767_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2767_TI;
extern Il2CppGenericClass t2767_GC;
extern TypeInfo t14_TI;
TypeInfo t2767_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2767_MIs, t2767_PIs, t2767_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2767_TI, t2767_ITIs, t2767_VT, &EmptyCustomAttributesCache, &t2767_TI, &t2767_0_0_0, &t2767_1_0_0, t2767_IOs, &t2767_GC, NULL, NULL, NULL, t2767_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2767)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4803_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.FieldInfo>
extern MethodInfo m28329_MI;
extern MethodInfo m28330_MI;
static PropertyInfo t4803____Item_PropertyInfo = 
{
	&t4803_TI, "Item", &m28329_MI, &m28330_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4803_PIs[] =
{
	&t4803____Item_PropertyInfo,
	NULL
};
extern Il2CppType t722_0_0_0;
static ParameterInfo t4803_m28331_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t722_0_0_0},
};
extern TypeInfo t4803_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28331_MI = 
{
	"IndexOf", NULL, &t4803_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4803_m28331_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t722_0_0_0;
static ParameterInfo t4803_m28332_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t722_0_0_0},
};
extern TypeInfo t4803_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28332_MI = 
{
	"Insert", NULL, &t4803_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4803_m28332_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4803_m28333_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4803_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28333_MI = 
{
	"RemoveAt", NULL, &t4803_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4803_m28333_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4803_m28329_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4803_TI;
extern Il2CppType t722_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28329_MI = 
{
	"get_Item", NULL, &t4803_TI, &t722_0_0_0, RuntimeInvoker_t4_t16, t4803_m28329_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t722_0_0_0;
static ParameterInfo t4803_m28330_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t722_0_0_0},
};
extern TypeInfo t4803_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28330_MI = 
{
	"set_Item", NULL, &t4803_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4803_m28330_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4803_MIs[] =
{
	&m28331_MI,
	&m28332_MI,
	&m28333_MI,
	&m28329_MI,
	&m28330_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4802_TI;
extern TypeInfo t4804_TI;
static TypeInfo* t4803_ITIs[] = 
{
	&t591_TI,
	&t4802_TI,
	&t4804_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4803_0_0_0;
extern Il2CppType t4803_1_0_0;
struct t4803;
extern TypeInfo t4803_TI;
extern Il2CppGenericClass t4803_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4803_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4803_MIs, t4803_PIs, NULL, NULL, NULL, NULL, NULL, &t4803_TI, t4803_ITIs, NULL, &t1400__CustomAttributeCache, &t4803_TI, &t4803_0_0_0, &t4803_1_0_0, NULL, &t4803_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4805_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>
extern MethodInfo m28334_MI;
static PropertyInfo t4805____Count_PropertyInfo = 
{
	&t4805_TI, "Count", &m28334_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28335_MI;
static PropertyInfo t4805____IsReadOnly_PropertyInfo = 
{
	&t4805_TI, "IsReadOnly", &m28335_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4805_PIs[] =
{
	&t4805____Count_PropertyInfo,
	&t4805____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4805_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28334_MI = 
{
	"get_Count", NULL, &t4805_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4805_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28335_MI = 
{
	"get_IsReadOnly", NULL, &t4805_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1498_0_0_0;
static ParameterInfo t4805_m28336_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1498_0_0_0},
};
extern TypeInfo t4805_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28336_MI = 
{
	"Add", NULL, &t4805_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4805_m28336_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4805_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28337_MI = 
{
	"Clear", NULL, &t4805_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1498_0_0_0;
static ParameterInfo t4805_m28338_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1498_0_0_0},
};
extern TypeInfo t4805_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28338_MI = 
{
	"Contains", NULL, &t4805_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4805_m28338_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3006_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4805_m28339_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3006_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4805_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28339_MI = 
{
	"CopyTo", NULL, &t4805_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4805_m28339_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1498_0_0_0;
static ParameterInfo t4805_m28340_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1498_0_0_0},
};
extern TypeInfo t4805_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28340_MI = 
{
	"Remove", NULL, &t4805_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4805_m28340_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4805_MIs[] =
{
	&m28334_MI,
	&m28335_MI,
	&m28336_MI,
	&m28337_MI,
	&m28338_MI,
	&m28339_MI,
	&m28340_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4807_TI;
static TypeInfo* t4805_ITIs[] = 
{
	&t591_TI,
	&t4807_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4805_0_0_0;
extern Il2CppType t4805_1_0_0;
struct t4805;
extern TypeInfo t4805_TI;
extern Il2CppGenericClass t4805_GC;
TypeInfo t4805_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4805_MIs, t4805_PIs, NULL, NULL, NULL, NULL, NULL, &t4805_TI, t4805_ITIs, NULL, &EmptyCustomAttributesCache, &t4805_TI, &t4805_0_0_0, &t4805_1_0_0, NULL, &t4805_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4807_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._FieldInfo>
extern TypeInfo t4807_TI;
extern Il2CppType t3656_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28341_MI = 
{
	"GetEnumerator", NULL, &t4807_TI, &t3656_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4807_MIs[] =
{
	&m28341_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4807_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4807_0_0_0;
extern Il2CppType t4807_1_0_0;
struct t4807;
extern TypeInfo t4807_TI;
extern Il2CppGenericClass t4807_GC;
TypeInfo t4807_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4807_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4807_TI, t4807_ITIs, NULL, &EmptyCustomAttributesCache, &t4807_TI, &t4807_0_0_0, &t4807_1_0_0, NULL, &t4807_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3656_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._FieldInfo>
extern MethodInfo m28342_MI;
static PropertyInfo t3656____Current_PropertyInfo = 
{
	&t3656_TI, "Current", &m28342_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3656_PIs[] =
{
	&t3656____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3656_TI;
extern Il2CppType t1498_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28342_MI = 
{
	"get_Current", NULL, &t3656_TI, &t1498_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3656_MIs[] =
{
	&m28342_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3656_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3656_0_0_0;
extern Il2CppType t3656_1_0_0;
struct t3656;
extern TypeInfo t3656_TI;
extern Il2CppGenericClass t3656_GC;
TypeInfo t3656_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3656_MIs, t3656_PIs, NULL, NULL, NULL, NULL, NULL, &t3656_TI, t3656_ITIs, NULL, &EmptyCustomAttributesCache, &t3656_TI, &t3656_0_0_0, &t3656_1_0_0, NULL, &t3656_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2768.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2768_TI;
#include "t2768MD.h"

extern TypeInfo t2768_TI;
extern TypeInfo t1498_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16058_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21625_MI;
struct t14;
#define m21625(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21625_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldInfo>
extern Il2CppType t14_0_0_1;
FieldInfo t2768_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2768_TI, offsetof(t2768, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2768_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2768_TI, offsetof(t2768, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2768_FIs[] =
{
	&t2768_f0_FieldInfo,
	&t2768_f1_FieldInfo,
	NULL
};
extern MethodInfo m16055_MI;
static PropertyInfo t2768____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2768_TI, "System.Collections.IEnumerator.Current", &m16055_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16058_MI;
static PropertyInfo t2768____Current_PropertyInfo = 
{
	&t2768_TI, "Current", &m16058_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2768_PIs[] =
{
	&t2768____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2768____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2768_m16054_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2768_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16054_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2768_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2768_m16054_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2768_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16055_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2768_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2768_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16056_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2768_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2768_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16057_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2768_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2768_TI;
extern Il2CppType t1498_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16058_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2768_TI, &t1498_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2768_MIs[] =
{
	&m16054_MI,
	&m16055_MI,
	&m16056_MI,
	&m16057_MI,
	&m16058_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16055_MI;
extern MethodInfo m16057_MI;
extern MethodInfo m16056_MI;
extern MethodInfo m16058_MI;
static MethodInfo* t2768_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16055_MI,
	&m16057_MI,
	&m16056_MI,
	&m16058_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3656_TI;
static TypeInfo* t2768_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3656_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3656_TI;
static Il2CppInterfaceOffsetPair t2768_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3656_TI, 7},
};
extern MethodInfo m16058_MI;
extern TypeInfo t1498_TI;
extern MethodInfo m21625_MI;
static void* t2768_RGCTXData[3] = 
{
	&m16058_MI,
	&t1498_TI,
	&m21625_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2768_0_0_0;
extern Il2CppType t2768_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2768_TI;
extern Il2CppGenericClass t2768_GC;
extern TypeInfo t14_TI;
TypeInfo t2768_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2768_MIs, t2768_PIs, t2768_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2768_TI, t2768_ITIs, t2768_VT, &EmptyCustomAttributesCache, &t2768_TI, &t2768_0_0_0, &t2768_1_0_0, t2768_IOs, &t2768_GC, NULL, NULL, NULL, t2768_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2768)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4806_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldInfo>
extern MethodInfo m28343_MI;
extern MethodInfo m28344_MI;
static PropertyInfo t4806____Item_PropertyInfo = 
{
	&t4806_TI, "Item", &m28343_MI, &m28344_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4806_PIs[] =
{
	&t4806____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1498_0_0_0;
static ParameterInfo t4806_m28345_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1498_0_0_0},
};
extern TypeInfo t4806_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28345_MI = 
{
	"IndexOf", NULL, &t4806_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4806_m28345_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1498_0_0_0;
static ParameterInfo t4806_m28346_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1498_0_0_0},
};
extern TypeInfo t4806_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28346_MI = 
{
	"Insert", NULL, &t4806_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4806_m28346_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4806_m28347_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4806_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28347_MI = 
{
	"RemoveAt", NULL, &t4806_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4806_m28347_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4806_m28343_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4806_TI;
extern Il2CppType t1498_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28343_MI = 
{
	"get_Item", NULL, &t4806_TI, &t1498_0_0_0, RuntimeInvoker_t4_t16, t4806_m28343_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1498_0_0_0;
static ParameterInfo t4806_m28344_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1498_0_0_0},
};
extern TypeInfo t4806_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28344_MI = 
{
	"set_Item", NULL, &t4806_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4806_m28344_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4806_MIs[] =
{
	&m28345_MI,
	&m28346_MI,
	&m28347_MI,
	&m28343_MI,
	&m28344_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4805_TI;
extern TypeInfo t4807_TI;
static TypeInfo* t4806_ITIs[] = 
{
	&t591_TI,
	&t4805_TI,
	&t4807_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4806_0_0_0;
extern Il2CppType t4806_1_0_0;
struct t4806;
extern TypeInfo t4806_TI;
extern Il2CppGenericClass t4806_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4806_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4806_MIs, t4806_PIs, NULL, NULL, NULL, NULL, NULL, &t4806_TI, t4806_ITIs, NULL, &t1400__CustomAttributeCache, &t4806_TI, &t4806_0_0_0, &t4806_1_0_0, NULL, &t4806_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3657_TI;

#include "t420.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyCompanyAttribute>
extern MethodInfo m28348_MI;
static PropertyInfo t3657____Current_PropertyInfo = 
{
	&t3657_TI, "Current", &m28348_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3657_PIs[] =
{
	&t3657____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3657_TI;
extern Il2CppType t420_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28348_MI = 
{
	"get_Current", NULL, &t3657_TI, &t420_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3657_MIs[] =
{
	&m28348_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3657_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3657_0_0_0;
extern Il2CppType t3657_1_0_0;
struct t3657;
extern TypeInfo t3657_TI;
extern Il2CppGenericClass t3657_GC;
TypeInfo t3657_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3657_MIs, t3657_PIs, NULL, NULL, NULL, NULL, NULL, &t3657_TI, t3657_ITIs, NULL, &EmptyCustomAttributesCache, &t3657_TI, &t3657_0_0_0, &t3657_1_0_0, NULL, &t3657_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2769.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2769_TI;
#include "t2769MD.h"

extern TypeInfo t2769_TI;
extern TypeInfo t420_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16063_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21636_MI;
struct t14;
#define m21636(__this, p0, method) (t420 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21636_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyCompanyAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2769_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2769_TI, offsetof(t2769, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2769_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2769_TI, offsetof(t2769, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2769_FIs[] =
{
	&t2769_f0_FieldInfo,
	&t2769_f1_FieldInfo,
	NULL
};
extern MethodInfo m16060_MI;
static PropertyInfo t2769____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2769_TI, "System.Collections.IEnumerator.Current", &m16060_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16063_MI;
static PropertyInfo t2769____Current_PropertyInfo = 
{
	&t2769_TI, "Current", &m16063_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2769_PIs[] =
{
	&t2769____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2769____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2769_m16059_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2769_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16059_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2769_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2769_m16059_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2769_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16060_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2769_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2769_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16061_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2769_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2769_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16062_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2769_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2769_TI;
extern Il2CppType t420_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16063_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2769_TI, &t420_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2769_MIs[] =
{
	&m16059_MI,
	&m16060_MI,
	&m16061_MI,
	&m16062_MI,
	&m16063_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16060_MI;
extern MethodInfo m16062_MI;
extern MethodInfo m16061_MI;
extern MethodInfo m16063_MI;
static MethodInfo* t2769_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16060_MI,
	&m16062_MI,
	&m16061_MI,
	&m16063_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3657_TI;
static TypeInfo* t2769_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3657_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3657_TI;
static Il2CppInterfaceOffsetPair t2769_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3657_TI, 7},
};
extern MethodInfo m16063_MI;
extern TypeInfo t420_TI;
extern MethodInfo m21636_MI;
static void* t2769_RGCTXData[3] = 
{
	&m16063_MI,
	&t420_TI,
	&m21636_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2769_0_0_0;
extern Il2CppType t2769_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2769_TI;
extern Il2CppGenericClass t2769_GC;
extern TypeInfo t14_TI;
TypeInfo t2769_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2769_MIs, t2769_PIs, t2769_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2769_TI, t2769_ITIs, t2769_VT, &EmptyCustomAttributesCache, &t2769_TI, &t2769_0_0_0, &t2769_1_0_0, t2769_IOs, &t2769_GC, NULL, NULL, NULL, t2769_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2769)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4808_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>
extern MethodInfo m28349_MI;
static PropertyInfo t4808____Count_PropertyInfo = 
{
	&t4808_TI, "Count", &m28349_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28350_MI;
static PropertyInfo t4808____IsReadOnly_PropertyInfo = 
{
	&t4808_TI, "IsReadOnly", &m28350_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4808_PIs[] =
{
	&t4808____Count_PropertyInfo,
	&t4808____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4808_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28349_MI = 
{
	"get_Count", NULL, &t4808_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4808_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28350_MI = 
{
	"get_IsReadOnly", NULL, &t4808_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t420_0_0_0;
static ParameterInfo t4808_m28351_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t420_0_0_0},
};
extern TypeInfo t4808_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28351_MI = 
{
	"Add", NULL, &t4808_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4808_m28351_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4808_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28352_MI = 
{
	"Clear", NULL, &t4808_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t420_0_0_0;
static ParameterInfo t4808_m28353_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t420_0_0_0},
};
extern TypeInfo t4808_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28353_MI = 
{
	"Contains", NULL, &t4808_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4808_m28353_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3007_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4808_m28354_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3007_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4808_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28354_MI = 
{
	"CopyTo", NULL, &t4808_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4808_m28354_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t420_0_0_0;
static ParameterInfo t4808_m28355_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t420_0_0_0},
};
extern TypeInfo t4808_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28355_MI = 
{
	"Remove", NULL, &t4808_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4808_m28355_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4808_MIs[] =
{
	&m28349_MI,
	&m28350_MI,
	&m28351_MI,
	&m28352_MI,
	&m28353_MI,
	&m28354_MI,
	&m28355_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4810_TI;
static TypeInfo* t4808_ITIs[] = 
{
	&t591_TI,
	&t4810_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4808_0_0_0;
extern Il2CppType t4808_1_0_0;
struct t4808;
extern TypeInfo t4808_TI;
extern Il2CppGenericClass t4808_GC;
TypeInfo t4808_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4808_MIs, t4808_PIs, NULL, NULL, NULL, NULL, NULL, &t4808_TI, t4808_ITIs, NULL, &EmptyCustomAttributesCache, &t4808_TI, &t4808_0_0_0, &t4808_1_0_0, NULL, &t4808_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4810_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyCompanyAttribute>
extern TypeInfo t4810_TI;
extern Il2CppType t3657_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28356_MI = 
{
	"GetEnumerator", NULL, &t4810_TI, &t3657_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4810_MIs[] =
{
	&m28356_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4810_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4810_0_0_0;
extern Il2CppType t4810_1_0_0;
struct t4810;
extern TypeInfo t4810_TI;
extern Il2CppGenericClass t4810_GC;
TypeInfo t4810_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4810_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4810_TI, t4810_ITIs, NULL, &EmptyCustomAttributesCache, &t4810_TI, &t4810_0_0_0, &t4810_1_0_0, NULL, &t4810_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4809_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyCompanyAttribute>
extern MethodInfo m28357_MI;
extern MethodInfo m28358_MI;
static PropertyInfo t4809____Item_PropertyInfo = 
{
	&t4809_TI, "Item", &m28357_MI, &m28358_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4809_PIs[] =
{
	&t4809____Item_PropertyInfo,
	NULL
};
extern Il2CppType t420_0_0_0;
static ParameterInfo t4809_m28359_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t420_0_0_0},
};
extern TypeInfo t4809_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28359_MI = 
{
	"IndexOf", NULL, &t4809_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4809_m28359_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t420_0_0_0;
static ParameterInfo t4809_m28360_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t420_0_0_0},
};
extern TypeInfo t4809_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28360_MI = 
{
	"Insert", NULL, &t4809_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4809_m28360_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4809_m28361_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4809_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28361_MI = 
{
	"RemoveAt", NULL, &t4809_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4809_m28361_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4809_m28357_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4809_TI;
extern Il2CppType t420_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28357_MI = 
{
	"get_Item", NULL, &t4809_TI, &t420_0_0_0, RuntimeInvoker_t4_t16, t4809_m28357_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t420_0_0_0;
static ParameterInfo t4809_m28358_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t420_0_0_0},
};
extern TypeInfo t4809_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28358_MI = 
{
	"set_Item", NULL, &t4809_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4809_m28358_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4809_MIs[] =
{
	&m28359_MI,
	&m28360_MI,
	&m28361_MI,
	&m28357_MI,
	&m28358_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4808_TI;
extern TypeInfo t4810_TI;
static TypeInfo* t4809_ITIs[] = 
{
	&t591_TI,
	&t4808_TI,
	&t4810_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4809_0_0_0;
extern Il2CppType t4809_1_0_0;
struct t4809;
extern TypeInfo t4809_TI;
extern Il2CppGenericClass t4809_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4809_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4809_MIs, t4809_PIs, NULL, NULL, NULL, NULL, NULL, &t4809_TI, t4809_ITIs, NULL, &t1400__CustomAttributeCache, &t4809_TI, &t4809_0_0_0, &t4809_1_0_0, NULL, &t4809_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
