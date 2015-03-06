#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2849.h"
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
extern TypeInfo t2849_TI;
#include "t2849MD.h"

#include "t4.h"
#include "t1108.h"
#include "t16.h"
#include "t8.h"
#include "t1269.h"
#include "t15.h"
#include "t14.h"
#include "t17.h"
extern TypeInfo t2849_TI;
extern TypeInfo t1108_TI;
extern TypeInfo t1269_TI;
#include "t1269MD.h"
#include "t14MD.h"
extern MethodInfo m16463_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22516_MI;
struct t14;
#include "t1233.h"
 int32_t m22516 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22516_MI;


extern MethodInfo m16459_MI;
 void m16459 (t2849 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16460_MI;
 t4 * m16460 (t2849 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16463(__this, &m16463_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1108_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16461_MI;
 void m16461 (t2849 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16462_MI;
 bool m16462 (t2849 * __this, MethodInfo* method){
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
extern MethodInfo m16463_MI;
 int32_t m16463 (t2849 * __this, MethodInfo* method){
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
		int32_t L_8 = m22516(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22516_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.StreamingContextStates>
extern Il2CppType t14_0_0_1;
FieldInfo t2849_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2849_TI, offsetof(t2849, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2849_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2849_TI, offsetof(t2849, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2849_FIs[] =
{
	&t2849_f0_FieldInfo,
	&t2849_f1_FieldInfo,
	NULL
};
extern MethodInfo m16460_MI;
static PropertyInfo t2849____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2849_TI, "System.Collections.IEnumerator.Current", &m16460_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16463_MI;
static PropertyInfo t2849____Current_PropertyInfo = 
{
	&t2849_TI, "Current", &m16463_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2849_PIs[] =
{
	&t2849____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2849____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2849_m16459_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2849_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16459_MI = 
{
	".ctor", (methodPointerType)&m16459, &t2849_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2849_m16459_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2849_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16460_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16460, &t2849_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2849_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16461_MI = 
{
	"Dispose", (methodPointerType)&m16461, &t2849_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2849_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16462_MI = 
{
	"MoveNext", (methodPointerType)&m16462, &t2849_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2849_TI;
extern Il2CppType t1108_0_0_0;
extern void* RuntimeInvoker_t1108 (MethodInfo* method, void* obj, void** args);
MethodInfo m16463_MI = 
{
	"get_Current", (methodPointerType)&m16463, &t2849_TI, &t1108_0_0_0, RuntimeInvoker_t1108, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2849_MIs[] =
{
	&m16459_MI,
	&m16460_MI,
	&m16461_MI,
	&m16462_MI,
	&m16463_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16460_MI;
extern MethodInfo m16462_MI;
extern MethodInfo m16461_MI;
extern MethodInfo m16463_MI;
static MethodInfo* t2849_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16460_MI,
	&m16462_MI,
	&m16461_MI,
	&m16463_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3737_TI;
static TypeInfo* t2849_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3737_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3737_TI;
static Il2CppInterfaceOffsetPair t2849_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3737_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2849_0_0_0;
extern Il2CppType t2849_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2849_TI;
extern Il2CppGenericClass t2849_GC;
extern TypeInfo t14_TI;
TypeInfo t2849_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2849_MIs, t2849_PIs, t2849_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2849_TI, t2849_ITIs, t2849_VT, &EmptyCustomAttributesCache, &t2849_TI, &t2849_0_0_0, &t2849_1_0_0, t2849_IOs, &t2849_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2849)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5048_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>
extern MethodInfo m29473_MI;
static PropertyInfo t5048____Count_PropertyInfo = 
{
	&t5048_TI, "Count", &m29473_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29474_MI;
static PropertyInfo t5048____IsReadOnly_PropertyInfo = 
{
	&t5048_TI, "IsReadOnly", &m29474_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5048_PIs[] =
{
	&t5048____Count_PropertyInfo,
	&t5048____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5048_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29473_MI = 
{
	"get_Count", NULL, &t5048_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5048_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29474_MI = 
{
	"get_IsReadOnly", NULL, &t5048_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1108_0_0_0;
static ParameterInfo t5048_m29475_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1108_0_0_0},
};
extern TypeInfo t5048_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29475_MI = 
{
	"Add", NULL, &t5048_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5048_m29475_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5048_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29476_MI = 
{
	"Clear", NULL, &t5048_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1108_0_0_0;
static ParameterInfo t5048_m29477_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1108_0_0_0},
};
extern TypeInfo t5048_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29477_MI = 
{
	"Contains", NULL, &t5048_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5048_m29477_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3079_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5048_m29478_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3079_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5048_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29478_MI = 
{
	"CopyTo", NULL, &t5048_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5048_m29478_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1108_0_0_0;
static ParameterInfo t5048_m29479_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1108_0_0_0},
};
extern TypeInfo t5048_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29479_MI = 
{
	"Remove", NULL, &t5048_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5048_m29479_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5048_MIs[] =
{
	&m29473_MI,
	&m29474_MI,
	&m29475_MI,
	&m29476_MI,
	&m29477_MI,
	&m29478_MI,
	&m29479_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5050_TI;
static TypeInfo* t5048_ITIs[] = 
{
	&t591_TI,
	&t5050_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5048_0_0_0;
extern Il2CppType t5048_1_0_0;
struct t5048;
extern TypeInfo t5048_TI;
extern Il2CppGenericClass t5048_GC;
TypeInfo t5048_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5048_MIs, t5048_PIs, NULL, NULL, NULL, NULL, NULL, &t5048_TI, t5048_ITIs, NULL, &EmptyCustomAttributesCache, &t5048_TI, &t5048_0_0_0, &t5048_1_0_0, NULL, &t5048_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5050_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.StreamingContextStates>
extern TypeInfo t5050_TI;
extern Il2CppType t3737_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29480_MI = 
{
	"GetEnumerator", NULL, &t5050_TI, &t3737_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5050_MIs[] =
{
	&m29480_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5050_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5050_0_0_0;
extern Il2CppType t5050_1_0_0;
struct t5050;
extern TypeInfo t5050_TI;
extern Il2CppGenericClass t5050_GC;
TypeInfo t5050_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5050_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5050_TI, t5050_ITIs, NULL, &EmptyCustomAttributesCache, &t5050_TI, &t5050_0_0_0, &t5050_1_0_0, NULL, &t5050_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5049_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.StreamingContextStates>
extern MethodInfo m29481_MI;
extern MethodInfo m29482_MI;
static PropertyInfo t5049____Item_PropertyInfo = 
{
	&t5049_TI, "Item", &m29481_MI, &m29482_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5049_PIs[] =
{
	&t5049____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1108_0_0_0;
static ParameterInfo t5049_m29483_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1108_0_0_0},
};
extern TypeInfo t5049_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29483_MI = 
{
	"IndexOf", NULL, &t5049_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t5049_m29483_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1108_0_0_0;
static ParameterInfo t5049_m29484_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1108_0_0_0},
};
extern TypeInfo t5049_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29484_MI = 
{
	"Insert", NULL, &t5049_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5049_m29484_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5049_m29485_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5049_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29485_MI = 
{
	"RemoveAt", NULL, &t5049_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5049_m29485_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5049_m29481_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5049_TI;
extern Il2CppType t1108_0_0_0;
extern void* RuntimeInvoker_t1108_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29481_MI = 
{
	"get_Item", NULL, &t5049_TI, &t1108_0_0_0, RuntimeInvoker_t1108_t16, t5049_m29481_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1108_0_0_0;
static ParameterInfo t5049_m29482_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1108_0_0_0},
};
extern TypeInfo t5049_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29482_MI = 
{
	"set_Item", NULL, &t5049_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5049_m29482_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5049_MIs[] =
{
	&m29483_MI,
	&m29484_MI,
	&m29485_MI,
	&m29481_MI,
	&m29482_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5048_TI;
extern TypeInfo t5050_TI;
static TypeInfo* t5049_ITIs[] = 
{
	&t591_TI,
	&t5048_TI,
	&t5050_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5049_0_0_0;
extern Il2CppType t5049_1_0_0;
struct t5049;
extern TypeInfo t5049_TI;
extern Il2CppGenericClass t5049_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5049_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5049_MIs, t5049_PIs, NULL, NULL, NULL, NULL, NULL, &t5049_TI, t5049_ITIs, NULL, &t1400__CustomAttributeCache, &t5049_TI, &t5049_0_0_0, &t5049_1_0_0, NULL, &t5049_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3738_TI;

#include "t1115.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.CipherMode>
extern MethodInfo m29486_MI;
static PropertyInfo t3738____Current_PropertyInfo = 
{
	&t3738_TI, "Current", &m29486_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3738_PIs[] =
{
	&t3738____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3738_TI;
extern Il2CppType t1115_0_0_0;
extern void* RuntimeInvoker_t1115 (MethodInfo* method, void* obj, void** args);
MethodInfo m29486_MI = 
{
	"get_Current", NULL, &t3738_TI, &t1115_0_0_0, RuntimeInvoker_t1115, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3738_MIs[] =
{
	&m29486_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3738_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3738_0_0_0;
extern Il2CppType t3738_1_0_0;
struct t3738;
extern TypeInfo t3738_TI;
extern Il2CppGenericClass t3738_GC;
TypeInfo t3738_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3738_MIs, t3738_PIs, NULL, NULL, NULL, NULL, NULL, &t3738_TI, t3738_ITIs, NULL, &EmptyCustomAttributesCache, &t3738_TI, &t3738_0_0_0, &t3738_1_0_0, NULL, &t3738_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2850.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2850_TI;
#include "t2850MD.h"

extern TypeInfo t2850_TI;
extern TypeInfo t1115_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16468_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22527_MI;
struct t14;
 int32_t m22527 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22527_MI;


extern MethodInfo m16464_MI;
 void m16464 (t2850 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16465_MI;
 t4 * m16465 (t2850 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16468(__this, &m16468_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1115_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16466_MI;
 void m16466 (t2850 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16467_MI;
 bool m16467 (t2850 * __this, MethodInfo* method){
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
extern MethodInfo m16468_MI;
 int32_t m16468 (t2850 * __this, MethodInfo* method){
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
		int32_t L_8 = m22527(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22527_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.CipherMode>
extern Il2CppType t14_0_0_1;
FieldInfo t2850_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2850_TI, offsetof(t2850, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2850_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2850_TI, offsetof(t2850, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2850_FIs[] =
{
	&t2850_f0_FieldInfo,
	&t2850_f1_FieldInfo,
	NULL
};
extern MethodInfo m16465_MI;
static PropertyInfo t2850____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2850_TI, "System.Collections.IEnumerator.Current", &m16465_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16468_MI;
static PropertyInfo t2850____Current_PropertyInfo = 
{
	&t2850_TI, "Current", &m16468_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2850_PIs[] =
{
	&t2850____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2850____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2850_m16464_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2850_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16464_MI = 
{
	".ctor", (methodPointerType)&m16464, &t2850_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2850_m16464_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2850_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16465_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16465, &t2850_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2850_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16466_MI = 
{
	"Dispose", (methodPointerType)&m16466, &t2850_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2850_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16467_MI = 
{
	"MoveNext", (methodPointerType)&m16467, &t2850_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2850_TI;
extern Il2CppType t1115_0_0_0;
extern void* RuntimeInvoker_t1115 (MethodInfo* method, void* obj, void** args);
MethodInfo m16468_MI = 
{
	"get_Current", (methodPointerType)&m16468, &t2850_TI, &t1115_0_0_0, RuntimeInvoker_t1115, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2850_MIs[] =
{
	&m16464_MI,
	&m16465_MI,
	&m16466_MI,
	&m16467_MI,
	&m16468_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16465_MI;
extern MethodInfo m16467_MI;
extern MethodInfo m16466_MI;
extern MethodInfo m16468_MI;
static MethodInfo* t2850_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16465_MI,
	&m16467_MI,
	&m16466_MI,
	&m16468_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3738_TI;
static TypeInfo* t2850_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3738_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3738_TI;
static Il2CppInterfaceOffsetPair t2850_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3738_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2850_0_0_0;
extern Il2CppType t2850_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2850_TI;
extern Il2CppGenericClass t2850_GC;
extern TypeInfo t14_TI;
TypeInfo t2850_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2850_MIs, t2850_PIs, t2850_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2850_TI, t2850_ITIs, t2850_VT, &EmptyCustomAttributesCache, &t2850_TI, &t2850_0_0_0, &t2850_1_0_0, t2850_IOs, &t2850_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2850)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5051_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>
extern MethodInfo m29487_MI;
static PropertyInfo t5051____Count_PropertyInfo = 
{
	&t5051_TI, "Count", &m29487_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29488_MI;
static PropertyInfo t5051____IsReadOnly_PropertyInfo = 
{
	&t5051_TI, "IsReadOnly", &m29488_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5051_PIs[] =
{
	&t5051____Count_PropertyInfo,
	&t5051____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5051_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29487_MI = 
{
	"get_Count", NULL, &t5051_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5051_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29488_MI = 
{
	"get_IsReadOnly", NULL, &t5051_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1115_0_0_0;
static ParameterInfo t5051_m29489_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1115_0_0_0},
};
extern TypeInfo t5051_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29489_MI = 
{
	"Add", NULL, &t5051_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5051_m29489_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5051_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29490_MI = 
{
	"Clear", NULL, &t5051_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1115_0_0_0;
static ParameterInfo t5051_m29491_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1115_0_0_0},
};
extern TypeInfo t5051_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29491_MI = 
{
	"Contains", NULL, &t5051_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5051_m29491_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3080_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5051_m29492_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3080_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5051_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29492_MI = 
{
	"CopyTo", NULL, &t5051_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5051_m29492_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1115_0_0_0;
static ParameterInfo t5051_m29493_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1115_0_0_0},
};
extern TypeInfo t5051_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29493_MI = 
{
	"Remove", NULL, &t5051_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5051_m29493_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5051_MIs[] =
{
	&m29487_MI,
	&m29488_MI,
	&m29489_MI,
	&m29490_MI,
	&m29491_MI,
	&m29492_MI,
	&m29493_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5053_TI;
static TypeInfo* t5051_ITIs[] = 
{
	&t591_TI,
	&t5053_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5051_0_0_0;
extern Il2CppType t5051_1_0_0;
struct t5051;
extern TypeInfo t5051_TI;
extern Il2CppGenericClass t5051_GC;
TypeInfo t5051_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5051_MIs, t5051_PIs, NULL, NULL, NULL, NULL, NULL, &t5051_TI, t5051_ITIs, NULL, &EmptyCustomAttributesCache, &t5051_TI, &t5051_0_0_0, &t5051_1_0_0, NULL, &t5051_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5053_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.CipherMode>
extern TypeInfo t5053_TI;
extern Il2CppType t3738_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29494_MI = 
{
	"GetEnumerator", NULL, &t5053_TI, &t3738_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5053_MIs[] =
{
	&m29494_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5053_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5053_0_0_0;
extern Il2CppType t5053_1_0_0;
struct t5053;
extern TypeInfo t5053_TI;
extern Il2CppGenericClass t5053_GC;
TypeInfo t5053_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5053_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5053_TI, t5053_ITIs, NULL, &EmptyCustomAttributesCache, &t5053_TI, &t5053_0_0_0, &t5053_1_0_0, NULL, &t5053_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5052_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.CipherMode>
extern MethodInfo m29495_MI;
extern MethodInfo m29496_MI;
static PropertyInfo t5052____Item_PropertyInfo = 
{
	&t5052_TI, "Item", &m29495_MI, &m29496_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5052_PIs[] =
{
	&t5052____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1115_0_0_0;
static ParameterInfo t5052_m29497_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1115_0_0_0},
};
extern TypeInfo t5052_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29497_MI = 
{
	"IndexOf", NULL, &t5052_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t5052_m29497_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1115_0_0_0;
static ParameterInfo t5052_m29498_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1115_0_0_0},
};
extern TypeInfo t5052_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29498_MI = 
{
	"Insert", NULL, &t5052_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5052_m29498_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5052_m29499_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5052_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29499_MI = 
{
	"RemoveAt", NULL, &t5052_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5052_m29499_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5052_m29495_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5052_TI;
extern Il2CppType t1115_0_0_0;
extern void* RuntimeInvoker_t1115_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29495_MI = 
{
	"get_Item", NULL, &t5052_TI, &t1115_0_0_0, RuntimeInvoker_t1115_t16, t5052_m29495_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1115_0_0_0;
static ParameterInfo t5052_m29496_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1115_0_0_0},
};
extern TypeInfo t5052_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29496_MI = 
{
	"set_Item", NULL, &t5052_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5052_m29496_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5052_MIs[] =
{
	&m29497_MI,
	&m29498_MI,
	&m29499_MI,
	&m29495_MI,
	&m29496_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5051_TI;
extern TypeInfo t5053_TI;
static TypeInfo* t5052_ITIs[] = 
{
	&t591_TI,
	&t5051_TI,
	&t5053_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5052_0_0_0;
extern Il2CppType t5052_1_0_0;
struct t5052;
extern TypeInfo t5052_TI;
extern Il2CppGenericClass t5052_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5052_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5052_MIs, t5052_PIs, NULL, NULL, NULL, NULL, NULL, &t5052_TI, t5052_ITIs, NULL, &t1400__CustomAttributeCache, &t5052_TI, &t5052_0_0_0, &t5052_1_0_0, NULL, &t5052_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3739_TI;

#include "t1119.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.CspProviderFlags>
extern MethodInfo m29500_MI;
static PropertyInfo t3739____Current_PropertyInfo = 
{
	&t3739_TI, "Current", &m29500_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3739_PIs[] =
{
	&t3739____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3739_TI;
extern Il2CppType t1119_0_0_0;
extern void* RuntimeInvoker_t1119 (MethodInfo* method, void* obj, void** args);
MethodInfo m29500_MI = 
{
	"get_Current", NULL, &t3739_TI, &t1119_0_0_0, RuntimeInvoker_t1119, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3739_MIs[] =
{
	&m29500_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3739_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3739_0_0_0;
extern Il2CppType t3739_1_0_0;
struct t3739;
extern TypeInfo t3739_TI;
extern Il2CppGenericClass t3739_GC;
TypeInfo t3739_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3739_MIs, t3739_PIs, NULL, NULL, NULL, NULL, NULL, &t3739_TI, t3739_ITIs, NULL, &EmptyCustomAttributesCache, &t3739_TI, &t3739_0_0_0, &t3739_1_0_0, NULL, &t3739_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2851.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2851_TI;
#include "t2851MD.h"

extern TypeInfo t2851_TI;
extern TypeInfo t1119_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16473_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22538_MI;
struct t14;
 int32_t m22538 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22538_MI;


extern MethodInfo m16469_MI;
 void m16469 (t2851 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16470_MI;
 t4 * m16470 (t2851 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16473(__this, &m16473_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1119_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16471_MI;
 void m16471 (t2851 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16472_MI;
 bool m16472 (t2851 * __this, MethodInfo* method){
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
extern MethodInfo m16473_MI;
 int32_t m16473 (t2851 * __this, MethodInfo* method){
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
		int32_t L_8 = m22538(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22538_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.CspProviderFlags>
extern Il2CppType t14_0_0_1;
FieldInfo t2851_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2851_TI, offsetof(t2851, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2851_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2851_TI, offsetof(t2851, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2851_FIs[] =
{
	&t2851_f0_FieldInfo,
	&t2851_f1_FieldInfo,
	NULL
};
extern MethodInfo m16470_MI;
static PropertyInfo t2851____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2851_TI, "System.Collections.IEnumerator.Current", &m16470_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16473_MI;
static PropertyInfo t2851____Current_PropertyInfo = 
{
	&t2851_TI, "Current", &m16473_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2851_PIs[] =
{
	&t2851____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2851____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2851_m16469_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2851_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16469_MI = 
{
	".ctor", (methodPointerType)&m16469, &t2851_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2851_m16469_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2851_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16470_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16470, &t2851_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2851_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16471_MI = 
{
	"Dispose", (methodPointerType)&m16471, &t2851_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2851_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16472_MI = 
{
	"MoveNext", (methodPointerType)&m16472, &t2851_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2851_TI;
extern Il2CppType t1119_0_0_0;
extern void* RuntimeInvoker_t1119 (MethodInfo* method, void* obj, void** args);
MethodInfo m16473_MI = 
{
	"get_Current", (methodPointerType)&m16473, &t2851_TI, &t1119_0_0_0, RuntimeInvoker_t1119, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2851_MIs[] =
{
	&m16469_MI,
	&m16470_MI,
	&m16471_MI,
	&m16472_MI,
	&m16473_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16470_MI;
extern MethodInfo m16472_MI;
extern MethodInfo m16471_MI;
extern MethodInfo m16473_MI;
static MethodInfo* t2851_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16470_MI,
	&m16472_MI,
	&m16471_MI,
	&m16473_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3739_TI;
static TypeInfo* t2851_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3739_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3739_TI;
static Il2CppInterfaceOffsetPair t2851_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3739_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2851_0_0_0;
extern Il2CppType t2851_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2851_TI;
extern Il2CppGenericClass t2851_GC;
extern TypeInfo t14_TI;
TypeInfo t2851_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2851_MIs, t2851_PIs, t2851_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2851_TI, t2851_ITIs, t2851_VT, &EmptyCustomAttributesCache, &t2851_TI, &t2851_0_0_0, &t2851_1_0_0, t2851_IOs, &t2851_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2851)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5054_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>
extern MethodInfo m29501_MI;
static PropertyInfo t5054____Count_PropertyInfo = 
{
	&t5054_TI, "Count", &m29501_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29502_MI;
static PropertyInfo t5054____IsReadOnly_PropertyInfo = 
{
	&t5054_TI, "IsReadOnly", &m29502_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5054_PIs[] =
{
	&t5054____Count_PropertyInfo,
	&t5054____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5054_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29501_MI = 
{
	"get_Count", NULL, &t5054_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5054_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29502_MI = 
{
	"get_IsReadOnly", NULL, &t5054_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1119_0_0_0;
static ParameterInfo t5054_m29503_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1119_0_0_0},
};
extern TypeInfo t5054_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29503_MI = 
{
	"Add", NULL, &t5054_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5054_m29503_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5054_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29504_MI = 
{
	"Clear", NULL, &t5054_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1119_0_0_0;
static ParameterInfo t5054_m29505_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1119_0_0_0},
};
extern TypeInfo t5054_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29505_MI = 
{
	"Contains", NULL, &t5054_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5054_m29505_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3081_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5054_m29506_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3081_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5054_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29506_MI = 
{
	"CopyTo", NULL, &t5054_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5054_m29506_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1119_0_0_0;
static ParameterInfo t5054_m29507_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1119_0_0_0},
};
extern TypeInfo t5054_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29507_MI = 
{
	"Remove", NULL, &t5054_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5054_m29507_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5054_MIs[] =
{
	&m29501_MI,
	&m29502_MI,
	&m29503_MI,
	&m29504_MI,
	&m29505_MI,
	&m29506_MI,
	&m29507_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5056_TI;
static TypeInfo* t5054_ITIs[] = 
{
	&t591_TI,
	&t5056_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5054_0_0_0;
extern Il2CppType t5054_1_0_0;
struct t5054;
extern TypeInfo t5054_TI;
extern Il2CppGenericClass t5054_GC;
TypeInfo t5054_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5054_MIs, t5054_PIs, NULL, NULL, NULL, NULL, NULL, &t5054_TI, t5054_ITIs, NULL, &EmptyCustomAttributesCache, &t5054_TI, &t5054_0_0_0, &t5054_1_0_0, NULL, &t5054_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5056_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.CspProviderFlags>
extern TypeInfo t5056_TI;
extern Il2CppType t3739_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29508_MI = 
{
	"GetEnumerator", NULL, &t5056_TI, &t3739_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5056_MIs[] =
{
	&m29508_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5056_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5056_0_0_0;
extern Il2CppType t5056_1_0_0;
struct t5056;
extern TypeInfo t5056_TI;
extern Il2CppGenericClass t5056_GC;
TypeInfo t5056_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5056_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5056_TI, t5056_ITIs, NULL, &EmptyCustomAttributesCache, &t5056_TI, &t5056_0_0_0, &t5056_1_0_0, NULL, &t5056_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5055_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.CspProviderFlags>
extern MethodInfo m29509_MI;
extern MethodInfo m29510_MI;
static PropertyInfo t5055____Item_PropertyInfo = 
{
	&t5055_TI, "Item", &m29509_MI, &m29510_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5055_PIs[] =
{
	&t5055____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1119_0_0_0;
static ParameterInfo t5055_m29511_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1119_0_0_0},
};
extern TypeInfo t5055_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29511_MI = 
{
	"IndexOf", NULL, &t5055_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t5055_m29511_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1119_0_0_0;
static ParameterInfo t5055_m29512_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1119_0_0_0},
};
extern TypeInfo t5055_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29512_MI = 
{
	"Insert", NULL, &t5055_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5055_m29512_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5055_m29513_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5055_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29513_MI = 
{
	"RemoveAt", NULL, &t5055_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5055_m29513_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5055_m29509_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5055_TI;
extern Il2CppType t1119_0_0_0;
extern void* RuntimeInvoker_t1119_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29509_MI = 
{
	"get_Item", NULL, &t5055_TI, &t1119_0_0_0, RuntimeInvoker_t1119_t16, t5055_m29509_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1119_0_0_0;
static ParameterInfo t5055_m29510_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1119_0_0_0},
};
extern TypeInfo t5055_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29510_MI = 
{
	"set_Item", NULL, &t5055_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5055_m29510_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5055_MIs[] =
{
	&m29511_MI,
	&m29512_MI,
	&m29513_MI,
	&m29509_MI,
	&m29510_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5054_TI;
extern TypeInfo t5056_TI;
static TypeInfo* t5055_ITIs[] = 
{
	&t591_TI,
	&t5054_TI,
	&t5056_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5055_0_0_0;
extern Il2CppType t5055_1_0_0;
struct t5055;
extern TypeInfo t5055_TI;
extern Il2CppGenericClass t5055_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5055_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5055_MIs, t5055_PIs, NULL, NULL, NULL, NULL, NULL, &t5055_TI, t5055_ITIs, NULL, &t1400__CustomAttributeCache, &t5055_TI, &t5055_0_0_0, &t5055_1_0_0, NULL, &t5055_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3740_TI;

#include "t807.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.PaddingMode>
extern MethodInfo m29514_MI;
static PropertyInfo t3740____Current_PropertyInfo = 
{
	&t3740_TI, "Current", &m29514_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3740_PIs[] =
{
	&t3740____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3740_TI;
extern Il2CppType t807_0_0_0;
extern void* RuntimeInvoker_t807 (MethodInfo* method, void* obj, void** args);
MethodInfo m29514_MI = 
{
	"get_Current", NULL, &t3740_TI, &t807_0_0_0, RuntimeInvoker_t807, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3740_MIs[] =
{
	&m29514_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3740_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3740_0_0_0;
extern Il2CppType t3740_1_0_0;
struct t3740;
extern TypeInfo t3740_TI;
extern Il2CppGenericClass t3740_GC;
TypeInfo t3740_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3740_MIs, t3740_PIs, NULL, NULL, NULL, NULL, NULL, &t3740_TI, t3740_ITIs, NULL, &EmptyCustomAttributesCache, &t3740_TI, &t3740_0_0_0, &t3740_1_0_0, NULL, &t3740_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2852.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2852_TI;
#include "t2852MD.h"

extern TypeInfo t2852_TI;
extern TypeInfo t807_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16478_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22549_MI;
struct t14;
 int32_t m22549 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22549_MI;


extern MethodInfo m16474_MI;
 void m16474 (t2852 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16475_MI;
 t4 * m16475 (t2852 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16478(__this, &m16478_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t807_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16476_MI;
 void m16476 (t2852 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16477_MI;
 bool m16477 (t2852 * __this, MethodInfo* method){
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
extern MethodInfo m16478_MI;
 int32_t m16478 (t2852 * __this, MethodInfo* method){
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
		int32_t L_8 = m22549(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22549_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.PaddingMode>
extern Il2CppType t14_0_0_1;
FieldInfo t2852_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2852_TI, offsetof(t2852, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2852_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2852_TI, offsetof(t2852, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2852_FIs[] =
{
	&t2852_f0_FieldInfo,
	&t2852_f1_FieldInfo,
	NULL
};
extern MethodInfo m16475_MI;
static PropertyInfo t2852____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2852_TI, "System.Collections.IEnumerator.Current", &m16475_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16478_MI;
static PropertyInfo t2852____Current_PropertyInfo = 
{
	&t2852_TI, "Current", &m16478_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2852_PIs[] =
{
	&t2852____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2852____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2852_m16474_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2852_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16474_MI = 
{
	".ctor", (methodPointerType)&m16474, &t2852_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2852_m16474_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2852_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16475_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16475, &t2852_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2852_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16476_MI = 
{
	"Dispose", (methodPointerType)&m16476, &t2852_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2852_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16477_MI = 
{
	"MoveNext", (methodPointerType)&m16477, &t2852_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2852_TI;
extern Il2CppType t807_0_0_0;
extern void* RuntimeInvoker_t807 (MethodInfo* method, void* obj, void** args);
MethodInfo m16478_MI = 
{
	"get_Current", (methodPointerType)&m16478, &t2852_TI, &t807_0_0_0, RuntimeInvoker_t807, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2852_MIs[] =
{
	&m16474_MI,
	&m16475_MI,
	&m16476_MI,
	&m16477_MI,
	&m16478_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16475_MI;
extern MethodInfo m16477_MI;
extern MethodInfo m16476_MI;
extern MethodInfo m16478_MI;
static MethodInfo* t2852_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16475_MI,
	&m16477_MI,
	&m16476_MI,
	&m16478_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3740_TI;
static TypeInfo* t2852_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3740_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3740_TI;
static Il2CppInterfaceOffsetPair t2852_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3740_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2852_0_0_0;
extern Il2CppType t2852_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2852_TI;
extern Il2CppGenericClass t2852_GC;
extern TypeInfo t14_TI;
TypeInfo t2852_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2852_MIs, t2852_PIs, t2852_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2852_TI, t2852_ITIs, t2852_VT, &EmptyCustomAttributesCache, &t2852_TI, &t2852_0_0_0, &t2852_1_0_0, t2852_IOs, &t2852_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2852)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5057_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>
extern MethodInfo m29515_MI;
static PropertyInfo t5057____Count_PropertyInfo = 
{
	&t5057_TI, "Count", &m29515_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29516_MI;
static PropertyInfo t5057____IsReadOnly_PropertyInfo = 
{
	&t5057_TI, "IsReadOnly", &m29516_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5057_PIs[] =
{
	&t5057____Count_PropertyInfo,
	&t5057____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5057_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29515_MI = 
{
	"get_Count", NULL, &t5057_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5057_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29516_MI = 
{
	"get_IsReadOnly", NULL, &t5057_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t807_0_0_0;
static ParameterInfo t5057_m29517_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t807_0_0_0},
};
extern TypeInfo t5057_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29517_MI = 
{
	"Add", NULL, &t5057_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5057_m29517_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5057_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29518_MI = 
{
	"Clear", NULL, &t5057_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t807_0_0_0;
static ParameterInfo t5057_m29519_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t807_0_0_0},
};
extern TypeInfo t5057_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29519_MI = 
{
	"Contains", NULL, &t5057_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5057_m29519_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3082_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5057_m29520_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3082_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5057_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29520_MI = 
{
	"CopyTo", NULL, &t5057_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5057_m29520_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t807_0_0_0;
static ParameterInfo t5057_m29521_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t807_0_0_0},
};
extern TypeInfo t5057_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29521_MI = 
{
	"Remove", NULL, &t5057_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5057_m29521_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5057_MIs[] =
{
	&m29515_MI,
	&m29516_MI,
	&m29517_MI,
	&m29518_MI,
	&m29519_MI,
	&m29520_MI,
	&m29521_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5059_TI;
static TypeInfo* t5057_ITIs[] = 
{
	&t591_TI,
	&t5059_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5057_0_0_0;
extern Il2CppType t5057_1_0_0;
struct t5057;
extern TypeInfo t5057_TI;
extern Il2CppGenericClass t5057_GC;
TypeInfo t5057_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5057_MIs, t5057_PIs, NULL, NULL, NULL, NULL, NULL, &t5057_TI, t5057_ITIs, NULL, &EmptyCustomAttributesCache, &t5057_TI, &t5057_0_0_0, &t5057_1_0_0, NULL, &t5057_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5059_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.PaddingMode>
extern TypeInfo t5059_TI;
extern Il2CppType t3740_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29522_MI = 
{
	"GetEnumerator", NULL, &t5059_TI, &t3740_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5059_MIs[] =
{
	&m29522_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5059_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5059_0_0_0;
extern Il2CppType t5059_1_0_0;
struct t5059;
extern TypeInfo t5059_TI;
extern Il2CppGenericClass t5059_GC;
TypeInfo t5059_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5059_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5059_TI, t5059_ITIs, NULL, &EmptyCustomAttributesCache, &t5059_TI, &t5059_0_0_0, &t5059_1_0_0, NULL, &t5059_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5058_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.PaddingMode>
extern MethodInfo m29523_MI;
extern MethodInfo m29524_MI;
static PropertyInfo t5058____Item_PropertyInfo = 
{
	&t5058_TI, "Item", &m29523_MI, &m29524_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5058_PIs[] =
{
	&t5058____Item_PropertyInfo,
	NULL
};
extern Il2CppType t807_0_0_0;
static ParameterInfo t5058_m29525_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t807_0_0_0},
};
extern TypeInfo t5058_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29525_MI = 
{
	"IndexOf", NULL, &t5058_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t5058_m29525_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t807_0_0_0;
static ParameterInfo t5058_m29526_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t807_0_0_0},
};
extern TypeInfo t5058_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29526_MI = 
{
	"Insert", NULL, &t5058_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5058_m29526_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5058_m29527_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5058_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29527_MI = 
{
	"RemoveAt", NULL, &t5058_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5058_m29527_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5058_m29523_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5058_TI;
extern Il2CppType t807_0_0_0;
extern void* RuntimeInvoker_t807_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29523_MI = 
{
	"get_Item", NULL, &t5058_TI, &t807_0_0_0, RuntimeInvoker_t807_t16, t5058_m29523_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t807_0_0_0;
static ParameterInfo t5058_m29524_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t807_0_0_0},
};
extern TypeInfo t5058_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29524_MI = 
{
	"set_Item", NULL, &t5058_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5058_m29524_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5058_MIs[] =
{
	&m29525_MI,
	&m29526_MI,
	&m29527_MI,
	&m29523_MI,
	&m29524_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5057_TI;
extern TypeInfo t5059_TI;
static TypeInfo* t5058_ITIs[] = 
{
	&t591_TI,
	&t5057_TI,
	&t5059_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5058_0_0_0;
extern Il2CppType t5058_1_0_0;
struct t5058;
extern TypeInfo t5058_TI;
extern Il2CppGenericClass t5058_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5058_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5058_MIs, t5058_PIs, NULL, NULL, NULL, NULL, NULL, &t5058_TI, t5058_ITIs, NULL, &t1400__CustomAttributeCache, &t5058_TI, &t5058_0_0_0, &t5058_1_0_0, NULL, &t5058_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1172_TI;

#include "t1175.h"


// Metadata Definition System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
extern MethodInfo m29528_MI;
extern MethodInfo m29529_MI;
static PropertyInfo t1172____Item_PropertyInfo = 
{
	&t1172_TI, "Item", &m29528_MI, &m29529_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1172_PIs[] =
{
	&t1172____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t1172_m29530_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t1172_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29530_MI = 
{
	"IndexOf", NULL, &t1172_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1172_m29530_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t1172_m29531_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t1172_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29531_MI = 
{
	"Insert", NULL, &t1172_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1172_m29531_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1172_m29532_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1172_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29532_MI = 
{
	"RemoveAt", NULL, &t1172_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1172_m29532_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1172_m29528_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1172_TI;
extern Il2CppType t1175_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29528_MI = 
{
	"get_Item", NULL, &t1172_TI, &t1175_0_0_0, RuntimeInvoker_t4_t16, t1172_m29528_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t1172_m29529_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t1172_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29529_MI = 
{
	"set_Item", NULL, &t1172_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1172_m29529_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1172_MIs[] =
{
	&m29530_MI,
	&m29531_MI,
	&m29532_MI,
	&m29528_MI,
	&m29529_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t2858_TI;
extern TypeInfo t2859_TI;
static TypeInfo* t1172_ITIs[] = 
{
	&t591_TI,
	&t2858_TI,
	&t2859_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1172_0_0_0;
extern Il2CppType t1172_1_0_0;
struct t1172;
extern TypeInfo t1172_TI;
extern Il2CppGenericClass t1172_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t1172_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t1172_MIs, t1172_PIs, NULL, NULL, NULL, NULL, NULL, &t1172_TI, t1172_ITIs, NULL, &t1400__CustomAttributeCache, &t1172_TI, &t1172_0_0_0, &t1172_1_0_0, NULL, &t1172_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2858_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>
extern MethodInfo m29533_MI;
static PropertyInfo t2858____Count_PropertyInfo = 
{
	&t2858_TI, "Count", &m29533_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29534_MI;
static PropertyInfo t2858____IsReadOnly_PropertyInfo = 
{
	&t2858_TI, "IsReadOnly", &m29534_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2858_PIs[] =
{
	&t2858____Count_PropertyInfo,
	&t2858____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t2858_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29533_MI = 
{
	"get_Count", NULL, &t2858_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2858_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29534_MI = 
{
	"get_IsReadOnly", NULL, &t2858_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2858_m29535_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2858_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29535_MI = 
{
	"Add", NULL, &t2858_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2858_m29535_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2858_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29536_MI = 
{
	"Clear", NULL, &t2858_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2858_m29537_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2858_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29537_MI = 
{
	"Contains", NULL, &t2858_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2858_m29537_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2856_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t2858_m29538_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2856_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2858_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29538_MI = 
{
	"CopyTo", NULL, &t2858_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t2858_m29538_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2858_m29539_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2858_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29539_MI = 
{
	"Remove", NULL, &t2858_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2858_m29539_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2858_MIs[] =
{
	&m29533_MI,
	&m29534_MI,
	&m29535_MI,
	&m29536_MI,
	&m29537_MI,
	&m29538_MI,
	&m29539_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t2859_TI;
static TypeInfo* t2858_ITIs[] = 
{
	&t591_TI,
	&t2859_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2858_0_0_0;
extern Il2CppType t2858_1_0_0;
struct t2858;
extern TypeInfo t2858_TI;
extern Il2CppGenericClass t2858_GC;
TypeInfo t2858_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t2858_MIs, t2858_PIs, NULL, NULL, NULL, NULL, NULL, &t2858_TI, t2858_ITIs, NULL, &EmptyCustomAttributesCache, &t2858_TI, &t2858_0_0_0, &t2858_1_0_0, NULL, &t2858_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2859_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Policy.StrongName>
extern TypeInfo t2859_TI;
extern Il2CppType t2857_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29540_MI = 
{
	"GetEnumerator", NULL, &t2859_TI, &t2857_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2859_MIs[] =
{
	&m29540_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t2859_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2859_0_0_0;
extern Il2CppType t2859_1_0_0;
struct t2859;
extern TypeInfo t2859_TI;
extern Il2CppGenericClass t2859_GC;
TypeInfo t2859_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2859_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2859_TI, t2859_ITIs, NULL, &EmptyCustomAttributesCache, &t2859_TI, &t2859_0_0_0, &t2859_1_0_0, NULL, &t2859_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2857_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
extern MethodInfo m29541_MI;
static PropertyInfo t2857____Current_PropertyInfo = 
{
	&t2857_TI, "Current", &m29541_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2857_PIs[] =
{
	&t2857____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2857_TI;
extern Il2CppType t1175_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29541_MI = 
{
	"get_Current", NULL, &t2857_TI, &t1175_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2857_MIs[] =
{
	&m29541_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t2857_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2857_0_0_0;
extern Il2CppType t2857_1_0_0;
struct t2857;
extern TypeInfo t2857_TI;
extern Il2CppGenericClass t2857_GC;
TypeInfo t2857_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2857_MIs, t2857_PIs, NULL, NULL, NULL, NULL, NULL, &t2857_TI, t2857_ITIs, NULL, &EmptyCustomAttributesCache, &t2857_TI, &t2857_0_0_0, &t2857_1_0_0, NULL, &t2857_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2853.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2853_TI;
#include "t2853MD.h"

extern TypeInfo t2853_TI;
extern TypeInfo t1175_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16483_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22560_MI;
struct t14;
struct t14;
 t4 * m16794_gshared (t14 * __this, int32_t p0, MethodInfo* method);
#define m16794(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
#define m22560(__this, p0, method) (t1175 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22560_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>
extern Il2CppType t14_0_0_1;
FieldInfo t2853_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2853_TI, offsetof(t2853, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2853_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2853_TI, offsetof(t2853, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2853_FIs[] =
{
	&t2853_f0_FieldInfo,
	&t2853_f1_FieldInfo,
	NULL
};
extern MethodInfo m16480_MI;
static PropertyInfo t2853____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2853_TI, "System.Collections.IEnumerator.Current", &m16480_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16483_MI;
static PropertyInfo t2853____Current_PropertyInfo = 
{
	&t2853_TI, "Current", &m16483_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2853_PIs[] =
{
	&t2853____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2853____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2853_m16479_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2853_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16479_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2853_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2853_m16479_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2853_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16480_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2853_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2853_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16481_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2853_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2853_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16482_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2853_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2853_TI;
extern Il2CppType t1175_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16483_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2853_TI, &t1175_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2853_MIs[] =
{
	&m16479_MI,
	&m16480_MI,
	&m16481_MI,
	&m16482_MI,
	&m16483_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16480_MI;
extern MethodInfo m16482_MI;
extern MethodInfo m16481_MI;
extern MethodInfo m16483_MI;
static MethodInfo* t2853_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16480_MI,
	&m16482_MI,
	&m16481_MI,
	&m16483_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t2857_TI;
static TypeInfo* t2853_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t2857_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t2857_TI;
static Il2CppInterfaceOffsetPair t2853_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t2857_TI, 7},
};
extern MethodInfo m16483_MI;
extern TypeInfo t1175_TI;
extern MethodInfo m22560_MI;
static void* t2853_RGCTXData[3] = 
{
	&m16483_MI,
	&t1175_TI,
	&m22560_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2853_0_0_0;
extern Il2CppType t2853_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2853_TI;
extern Il2CppGenericClass t2853_GC;
extern TypeInfo t14_TI;
TypeInfo t2853_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2853_MIs, t2853_PIs, t2853_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2853_TI, t2853_ITIs, t2853_VT, &EmptyCustomAttributesCache, &t2853_TI, &t2853_0_0_0, &t2853_1_0_0, t2853_IOs, &t2853_GC, NULL, NULL, NULL, t2853_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2853)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5060_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>
extern MethodInfo m29542_MI;
static PropertyInfo t5060____Count_PropertyInfo = 
{
	&t5060_TI, "Count", &m29542_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29543_MI;
static PropertyInfo t5060____IsReadOnly_PropertyInfo = 
{
	&t5060_TI, "IsReadOnly", &m29543_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5060_PIs[] =
{
	&t5060____Count_PropertyInfo,
	&t5060____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5060_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29542_MI = 
{
	"get_Count", NULL, &t5060_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5060_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29543_MI = 
{
	"get_IsReadOnly", NULL, &t5060_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1538_0_0_0;
static ParameterInfo t5060_m29544_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern TypeInfo t5060_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29544_MI = 
{
	"Add", NULL, &t5060_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t5060_m29544_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5060_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29545_MI = 
{
	"Clear", NULL, &t5060_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1538_0_0_0;
static ParameterInfo t5060_m29546_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern TypeInfo t5060_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29546_MI = 
{
	"Contains", NULL, &t5060_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5060_m29546_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3083_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5060_m29547_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3083_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5060_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29547_MI = 
{
	"CopyTo", NULL, &t5060_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5060_m29547_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1538_0_0_0;
static ParameterInfo t5060_m29548_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern TypeInfo t5060_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29548_MI = 
{
	"Remove", NULL, &t5060_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5060_m29548_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5060_MIs[] =
{
	&m29542_MI,
	&m29543_MI,
	&m29544_MI,
	&m29545_MI,
	&m29546_MI,
	&m29547_MI,
	&m29548_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5062_TI;
static TypeInfo* t5060_ITIs[] = 
{
	&t591_TI,
	&t5062_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5060_0_0_0;
extern Il2CppType t5060_1_0_0;
struct t5060;
extern TypeInfo t5060_TI;
extern Il2CppGenericClass t5060_GC;
TypeInfo t5060_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5060_MIs, t5060_PIs, NULL, NULL, NULL, NULL, NULL, &t5060_TI, t5060_ITIs, NULL, &EmptyCustomAttributesCache, &t5060_TI, &t5060_0_0_0, &t5060_1_0_0, NULL, &t5060_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5062_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Policy.IBuiltInEvidence>
extern TypeInfo t5062_TI;
extern Il2CppType t3741_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29549_MI = 
{
	"GetEnumerator", NULL, &t5062_TI, &t3741_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5062_MIs[] =
{
	&m29549_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5062_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5062_0_0_0;
extern Il2CppType t5062_1_0_0;
struct t5062;
extern TypeInfo t5062_TI;
extern Il2CppGenericClass t5062_GC;
TypeInfo t5062_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5062_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5062_TI, t5062_ITIs, NULL, &EmptyCustomAttributesCache, &t5062_TI, &t5062_0_0_0, &t5062_1_0_0, NULL, &t5062_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3741_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Policy.IBuiltInEvidence>
extern MethodInfo m29550_MI;
static PropertyInfo t3741____Current_PropertyInfo = 
{
	&t3741_TI, "Current", &m29550_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3741_PIs[] =
{
	&t3741____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3741_TI;
extern Il2CppType t1538_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29550_MI = 
{
	"get_Current", NULL, &t3741_TI, &t1538_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3741_MIs[] =
{
	&m29550_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3741_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3741_0_0_0;
extern Il2CppType t3741_1_0_0;
struct t3741;
extern TypeInfo t3741_TI;
extern Il2CppGenericClass t3741_GC;
TypeInfo t3741_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3741_MIs, t3741_PIs, NULL, NULL, NULL, NULL, NULL, &t3741_TI, t3741_ITIs, NULL, &EmptyCustomAttributesCache, &t3741_TI, &t3741_0_0_0, &t3741_1_0_0, NULL, &t3741_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2854.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2854_TI;
#include "t2854MD.h"

extern TypeInfo t2854_TI;
extern TypeInfo t1538_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16488_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22571_MI;
struct t14;
#define m22571(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22571_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>
extern Il2CppType t14_0_0_1;
FieldInfo t2854_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2854_TI, offsetof(t2854, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2854_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2854_TI, offsetof(t2854, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2854_FIs[] =
{
	&t2854_f0_FieldInfo,
	&t2854_f1_FieldInfo,
	NULL
};
extern MethodInfo m16485_MI;
static PropertyInfo t2854____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2854_TI, "System.Collections.IEnumerator.Current", &m16485_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16488_MI;
static PropertyInfo t2854____Current_PropertyInfo = 
{
	&t2854_TI, "Current", &m16488_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2854_PIs[] =
{
	&t2854____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2854____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2854_m16484_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2854_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16484_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2854_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2854_m16484_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2854_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16485_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2854_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2854_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16486_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2854_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2854_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16487_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2854_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2854_TI;
extern Il2CppType t1538_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16488_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2854_TI, &t1538_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2854_MIs[] =
{
	&m16484_MI,
	&m16485_MI,
	&m16486_MI,
	&m16487_MI,
	&m16488_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16485_MI;
extern MethodInfo m16487_MI;
extern MethodInfo m16486_MI;
extern MethodInfo m16488_MI;
static MethodInfo* t2854_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16485_MI,
	&m16487_MI,
	&m16486_MI,
	&m16488_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3741_TI;
static TypeInfo* t2854_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3741_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3741_TI;
static Il2CppInterfaceOffsetPair t2854_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3741_TI, 7},
};
extern MethodInfo m16488_MI;
extern TypeInfo t1538_TI;
extern MethodInfo m22571_MI;
static void* t2854_RGCTXData[3] = 
{
	&m16488_MI,
	&t1538_TI,
	&m22571_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2854_0_0_0;
extern Il2CppType t2854_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2854_TI;
extern Il2CppGenericClass t2854_GC;
extern TypeInfo t14_TI;
TypeInfo t2854_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2854_MIs, t2854_PIs, t2854_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2854_TI, t2854_ITIs, t2854_VT, &EmptyCustomAttributesCache, &t2854_TI, &t2854_0_0_0, &t2854_1_0_0, t2854_IOs, &t2854_GC, NULL, NULL, NULL, t2854_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2854)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5061_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Policy.IBuiltInEvidence>
extern MethodInfo m29551_MI;
extern MethodInfo m29552_MI;
static PropertyInfo t5061____Item_PropertyInfo = 
{
	&t5061_TI, "Item", &m29551_MI, &m29552_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5061_PIs[] =
{
	&t5061____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1538_0_0_0;
static ParameterInfo t5061_m29553_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern TypeInfo t5061_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29553_MI = 
{
	"IndexOf", NULL, &t5061_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5061_m29553_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1538_0_0_0;
static ParameterInfo t5061_m29554_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern TypeInfo t5061_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29554_MI = 
{
	"Insert", NULL, &t5061_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5061_m29554_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5061_m29555_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5061_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29555_MI = 
{
	"RemoveAt", NULL, &t5061_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5061_m29555_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5061_m29551_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5061_TI;
extern Il2CppType t1538_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29551_MI = 
{
	"get_Item", NULL, &t5061_TI, &t1538_0_0_0, RuntimeInvoker_t4_t16, t5061_m29551_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1538_0_0_0;
static ParameterInfo t5061_m29552_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1538_0_0_0},
};
extern TypeInfo t5061_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29552_MI = 
{
	"set_Item", NULL, &t5061_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5061_m29552_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5061_MIs[] =
{
	&m29553_MI,
	&m29554_MI,
	&m29555_MI,
	&m29551_MI,
	&m29552_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5060_TI;
extern TypeInfo t5062_TI;
static TypeInfo* t5061_ITIs[] = 
{
	&t591_TI,
	&t5060_TI,
	&t5062_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5061_0_0_0;
extern Il2CppType t5061_1_0_0;
struct t5061;
extern TypeInfo t5061_TI;
extern Il2CppGenericClass t5061_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5061_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5061_MIs, t5061_PIs, NULL, NULL, NULL, NULL, NULL, &t5061_TI, t5061_ITIs, NULL, &t1400__CustomAttributeCache, &t5061_TI, &t5061_0_0_0, &t5061_1_0_0, NULL, &t5061_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5063_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>
extern MethodInfo m29556_MI;
static PropertyInfo t5063____Count_PropertyInfo = 
{
	&t5063_TI, "Count", &m29556_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29557_MI;
static PropertyInfo t5063____IsReadOnly_PropertyInfo = 
{
	&t5063_TI, "IsReadOnly", &m29557_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5063_PIs[] =
{
	&t5063____Count_PropertyInfo,
	&t5063____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5063_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29556_MI = 
{
	"get_Count", NULL, &t5063_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5063_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29557_MI = 
{
	"get_IsReadOnly", NULL, &t5063_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1539_0_0_0;
static ParameterInfo t5063_m29558_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1539_0_0_0},
};
extern TypeInfo t5063_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29558_MI = 
{
	"Add", NULL, &t5063_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t5063_m29558_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5063_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29559_MI = 
{
	"Clear", NULL, &t5063_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1539_0_0_0;
static ParameterInfo t5063_m29560_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1539_0_0_0},
};
extern TypeInfo t5063_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29560_MI = 
{
	"Contains", NULL, &t5063_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5063_m29560_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3084_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5063_m29561_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3084_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5063_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29561_MI = 
{
	"CopyTo", NULL, &t5063_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5063_m29561_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1539_0_0_0;
static ParameterInfo t5063_m29562_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1539_0_0_0},
};
extern TypeInfo t5063_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29562_MI = 
{
	"Remove", NULL, &t5063_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5063_m29562_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5063_MIs[] =
{
	&m29556_MI,
	&m29557_MI,
	&m29558_MI,
	&m29559_MI,
	&m29560_MI,
	&m29561_MI,
	&m29562_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5065_TI;
static TypeInfo* t5063_ITIs[] = 
{
	&t591_TI,
	&t5065_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5063_0_0_0;
extern Il2CppType t5063_1_0_0;
struct t5063;
extern TypeInfo t5063_TI;
extern Il2CppGenericClass t5063_GC;
TypeInfo t5063_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5063_MIs, t5063_PIs, NULL, NULL, NULL, NULL, NULL, &t5063_TI, t5063_ITIs, NULL, &EmptyCustomAttributesCache, &t5063_TI, &t5063_0_0_0, &t5063_1_0_0, NULL, &t5063_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5065_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Policy.IIdentityPermissionFactory>
extern TypeInfo t5065_TI;
extern Il2CppType t3742_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29563_MI = 
{
	"GetEnumerator", NULL, &t5065_TI, &t3742_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5065_MIs[] =
{
	&m29563_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5065_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5065_0_0_0;
extern Il2CppType t5065_1_0_0;
struct t5065;
extern TypeInfo t5065_TI;
extern Il2CppGenericClass t5065_GC;
TypeInfo t5065_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5065_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5065_TI, t5065_ITIs, NULL, &EmptyCustomAttributesCache, &t5065_TI, &t5065_0_0_0, &t5065_1_0_0, NULL, &t5065_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3742_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>
extern MethodInfo m29564_MI;
static PropertyInfo t3742____Current_PropertyInfo = 
{
	&t3742_TI, "Current", &m29564_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3742_PIs[] =
{
	&t3742____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3742_TI;
extern Il2CppType t1539_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29564_MI = 
{
	"get_Current", NULL, &t3742_TI, &t1539_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3742_MIs[] =
{
	&m29564_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3742_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3742_0_0_0;
extern Il2CppType t3742_1_0_0;
struct t3742;
extern TypeInfo t3742_TI;
extern Il2CppGenericClass t3742_GC;
TypeInfo t3742_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3742_MIs, t3742_PIs, NULL, NULL, NULL, NULL, NULL, &t3742_TI, t3742_ITIs, NULL, &EmptyCustomAttributesCache, &t3742_TI, &t3742_0_0_0, &t3742_1_0_0, NULL, &t3742_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2855.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2855_TI;
#include "t2855MD.h"

extern TypeInfo t2855_TI;
extern TypeInfo t1539_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16493_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22582_MI;
struct t14;
#define m22582(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22582_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>
extern Il2CppType t14_0_0_1;
FieldInfo t2855_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2855_TI, offsetof(t2855, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2855_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2855_TI, offsetof(t2855, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2855_FIs[] =
{
	&t2855_f0_FieldInfo,
	&t2855_f1_FieldInfo,
	NULL
};
extern MethodInfo m16490_MI;
static PropertyInfo t2855____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2855_TI, "System.Collections.IEnumerator.Current", &m16490_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16493_MI;
static PropertyInfo t2855____Current_PropertyInfo = 
{
	&t2855_TI, "Current", &m16493_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2855_PIs[] =
{
	&t2855____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2855____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2855_m16489_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2855_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16489_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2855_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2855_m16489_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2855_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16490_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2855_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2855_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16491_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2855_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2855_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16492_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2855_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2855_TI;
extern Il2CppType t1539_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16493_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2855_TI, &t1539_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2855_MIs[] =
{
	&m16489_MI,
	&m16490_MI,
	&m16491_MI,
	&m16492_MI,
	&m16493_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16490_MI;
extern MethodInfo m16492_MI;
extern MethodInfo m16491_MI;
extern MethodInfo m16493_MI;
static MethodInfo* t2855_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16490_MI,
	&m16492_MI,
	&m16491_MI,
	&m16493_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3742_TI;
static TypeInfo* t2855_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3742_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3742_TI;
static Il2CppInterfaceOffsetPair t2855_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3742_TI, 7},
};
extern MethodInfo m16493_MI;
extern TypeInfo t1539_TI;
extern MethodInfo m22582_MI;
static void* t2855_RGCTXData[3] = 
{
	&m16493_MI,
	&t1539_TI,
	&m22582_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2855_0_0_0;
extern Il2CppType t2855_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2855_TI;
extern Il2CppGenericClass t2855_GC;
extern TypeInfo t14_TI;
TypeInfo t2855_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2855_MIs, t2855_PIs, t2855_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2855_TI, t2855_ITIs, t2855_VT, &EmptyCustomAttributesCache, &t2855_TI, &t2855_0_0_0, &t2855_1_0_0, t2855_IOs, &t2855_GC, NULL, NULL, NULL, t2855_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2855)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5064_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Policy.IIdentityPermissionFactory>
extern MethodInfo m29565_MI;
extern MethodInfo m29566_MI;
static PropertyInfo t5064____Item_PropertyInfo = 
{
	&t5064_TI, "Item", &m29565_MI, &m29566_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5064_PIs[] =
{
	&t5064____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1539_0_0_0;
static ParameterInfo t5064_m29567_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1539_0_0_0},
};
extern TypeInfo t5064_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29567_MI = 
{
	"IndexOf", NULL, &t5064_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5064_m29567_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1539_0_0_0;
static ParameterInfo t5064_m29568_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1539_0_0_0},
};
extern TypeInfo t5064_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29568_MI = 
{
	"Insert", NULL, &t5064_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5064_m29568_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5064_m29569_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5064_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29569_MI = 
{
	"RemoveAt", NULL, &t5064_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5064_m29569_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5064_m29565_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5064_TI;
extern Il2CppType t1539_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29565_MI = 
{
	"get_Item", NULL, &t5064_TI, &t1539_0_0_0, RuntimeInvoker_t4_t16, t5064_m29565_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1539_0_0_0;
static ParameterInfo t5064_m29566_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1539_0_0_0},
};
extern TypeInfo t5064_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29566_MI = 
{
	"set_Item", NULL, &t5064_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5064_m29566_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5064_MIs[] =
{
	&m29567_MI,
	&m29568_MI,
	&m29569_MI,
	&m29565_MI,
	&m29566_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5063_TI;
extern TypeInfo t5065_TI;
static TypeInfo* t5064_ITIs[] = 
{
	&t591_TI,
	&t5063_TI,
	&t5065_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5064_0_0_0;
extern Il2CppType t5064_1_0_0;
struct t5064;
extern TypeInfo t5064_TI;
extern Il2CppGenericClass t5064_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5064_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5064_MIs, t5064_PIs, NULL, NULL, NULL, NULL, NULL, &t5064_TI, t5064_ITIs, NULL, &t1400__CustomAttributeCache, &t5064_TI, &t5064_0_0_0, &t5064_1_0_0, NULL, &t5064_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1536.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1536_TI;
#include "t1536MD.h"

#include "t303.h"
#include "t2863.h"
#include "t2860.h"
#include "t2861.h"
#include "t328.h"
#include "t2867.h"
#include "t2862.h"
extern TypeInfo t1536_TI;
extern TypeInfo t1175_TI;
extern TypeInfo t16_TI;
extern TypeInfo t15_TI;
extern TypeInfo t303_TI;
extern TypeInfo t573_TI;
extern TypeInfo t1268_TI;
extern TypeInfo t1233_TI;
extern TypeInfo t2856_TI;
extern TypeInfo t2863_TI;
extern TypeInfo t17_TI;
extern TypeInfo t2858_TI;
extern TypeInfo t2859_TI;
extern TypeInfo t2857_TI;
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t2860_TI;
extern TypeInfo t328_TI;
extern TypeInfo t2861_TI;
extern TypeInfo t2867_TI;
#include "t303MD.h"
#include "t1233MD.h"
#include "t4MD.h"
#include "t590MD.h"
#include "t2860MD.h"
#include "t328MD.h"
#include "t2861MD.h"
#include "t2863MD.h"
#include "t2867MD.h"
extern MethodInfo m16540_MI;
extern MethodInfo m16541_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m6453_MI;
extern MethodInfo m22593_MI;
extern MethodInfo m6454_MI;
extern MethodInfo m16526_MI;
extern MethodInfo m15_MI;
extern MethodInfo m16523_MI;
extern MethodInfo m3739_MI;
extern MethodInfo m16511_MI;
extern MethodInfo m16518_MI;
extern MethodInfo m16524_MI;
extern MethodInfo m16527_MI;
extern MethodInfo m16529_MI;
extern MethodInfo m16512_MI;
extern MethodInfo m16537_MI;
extern MethodInfo m6892_MI;
extern MethodInfo m16538_MI;
extern MethodInfo m29533_MI;
extern MethodInfo m29538_MI;
extern MethodInfo m29540_MI;
extern MethodInfo m29541_MI;
extern MethodInfo m7290_MI;
extern MethodInfo m42_MI;
extern MethodInfo m16528_MI;
extern MethodInfo m16513_MI;
extern MethodInfo m16514_MI;
extern MethodInfo m16548_MI;
extern MethodInfo m3735_MI;
extern MethodInfo m22595_MI;
extern MethodInfo m16521_MI;
extern MethodInfo m16522_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m16623_MI;
extern MethodInfo m16542_MI;
extern MethodInfo m16525_MI;
extern MethodInfo m16531_MI;
extern MethodInfo m3751_MI;
extern MethodInfo m16629_MI;
extern MethodInfo m22597_MI;
extern MethodInfo m22605_MI;
extern MethodInfo m3738_MI;
struct t14;
struct t14;
 void m16862_gshared (t4 * __this, t305** p0, int32_t p1, MethodInfo* method);
#define m16862(__this, p0, p1, method) (void)m16862_gshared((t4 *)__this, (t305**)p0, (int32_t)p1, method)
#define m22593(__this, p0, p1, method) (void)m16862_gshared((t4 *)__this, (t305**)p0, (int32_t)p1, method)
extern MethodInfo m22593_MI;
struct t14;
#include "t2865.h"
struct t14;
#include "t1485.h"
 int32_t m7690_gshared (t4 * __this, t305* p0, t4 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m7690(__this, p0, p1, p2, p3, method) (int32_t)m7690_gshared((t4 *)__this, (t305*)p0, (t4 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m22595(__this, p0, p1, p2, p3, method) (int32_t)m7690_gshared((t4 *)__this, (t305*)p0, (t4 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m22595_MI;
struct t14;
struct t14;
 void m16931_gshared (t4 * __this, t305* p0, int32_t p1, int32_t p2, t4* p3, MethodInfo* method);
#define m16931(__this, p0, p1, p2, p3, method) (void)m16931_gshared((t4 *)__this, (t305*)p0, (int32_t)p1, (int32_t)p2, (t4*)p3, method)
#define m22597(__this, p0, p1, p2, p3, method) (void)m16931_gshared((t4 *)__this, (t305*)p0, (int32_t)p1, (int32_t)p2, (t4*)p3, method)
extern MethodInfo m22597_MI;
struct t14;
#include "t26.h"
struct t14;
#include "t1607.h"
 void m17082_gshared (t4 * __this, t305* p0, int32_t p1, t1607 * p2, MethodInfo* method);
#define m17082(__this, p0, p1, p2, method) (void)m17082_gshared((t4 *)__this, (t305*)p0, (int32_t)p1, (t1607 *)p2, method)
#define m22605(__this, p0, p1, p2, method) (void)m17082_gshared((t4 *)__this, (t305*)p0, (int32_t)p1, (t1607 *)p2, method)
extern MethodInfo m22605_MI;


extern MethodInfo m16523_MI;
 t2863  m16523 (t1536 * __this, MethodInfo* method){
	{
		t2863  L_0 = {0};
		m16542(&L_0, __this, &m16542_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<System.Security.Policy.StrongName>
extern Il2CppType t16_0_0_32849;
FieldInfo t1536_f0_FieldInfo = 
{
	"DefaultCapacity", &t16_0_0_32849, &t1536_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2856_0_0_1;
FieldInfo t1536_f1_FieldInfo = 
{
	"_items", &t2856_0_0_1, &t1536_TI, offsetof(t1536, f1), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1536_f2_FieldInfo = 
{
	"_size", &t16_0_0_1, &t1536_TI, offsetof(t1536, f2), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1536_f3_FieldInfo = 
{
	"_version", &t16_0_0_1, &t1536_TI, offsetof(t1536, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2856_0_0_49;
FieldInfo t1536_f4_FieldInfo = 
{
	"EmptyArray", &t2856_0_0_49, &t1536_TI, offsetof(t1536_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1536_FIs[] =
{
	&t1536_f0_FieldInfo,
	&t1536_f1_FieldInfo,
	&t1536_f2_FieldInfo,
	&t1536_f3_FieldInfo,
	&t1536_f4_FieldInfo,
	NULL
};
static const int32_t t1536_f0_DefaultValueData = 4;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t1536_f0_DefaultValue = 
{
	&t1536_f0_FieldInfo, { (char*)&t1536_f0_DefaultValueData, &t16_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1536_FDVs[] = 
{
	&t1536_f0_DefaultValue,
	NULL
};
extern MethodInfo m16504_MI;
static PropertyInfo t1536____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1536_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m16504_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16505_MI;
static PropertyInfo t1536____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1536_TI, "System.Collections.ICollection.IsSynchronized", &m16505_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16506_MI;
static PropertyInfo t1536____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1536_TI, "System.Collections.ICollection.SyncRoot", &m16506_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16507_MI;
static PropertyInfo t1536____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1536_TI, "System.Collections.IList.IsFixedSize", &m16507_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16508_MI;
static PropertyInfo t1536____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1536_TI, "System.Collections.IList.IsReadOnly", &m16508_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16509_MI;
extern MethodInfo m16510_MI;
static PropertyInfo t1536____System_Collections_IList_Item_PropertyInfo = 
{
	&t1536_TI, "System.Collections.IList.Item", &m16509_MI, &m16510_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16537_MI;
extern MethodInfo m16538_MI;
static PropertyInfo t1536____Capacity_PropertyInfo = 
{
	&t1536_TI, "Capacity", &m16537_MI, &m16538_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16539_MI;
static PropertyInfo t1536____Count_PropertyInfo = 
{
	&t1536_TI, "Count", &m16539_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16540_MI;
extern MethodInfo m16541_MI;
static PropertyInfo t1536____Item_PropertyInfo = 
{
	&t1536_TI, "Item", &m16540_MI, &m16541_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1536_PIs[] =
{
	&t1536____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1536____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1536____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1536____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1536____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1536____System_Collections_IList_Item_PropertyInfo,
	&t1536____Capacity_PropertyInfo,
	&t1536____Count_PropertyInfo,
	&t1536____Item_PropertyInfo,
	NULL
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16494_MI = 
{
	".ctor", (methodPointerType)&m7892_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1536_m7797_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m7797_MI = 
{
	".ctor", (methodPointerType)&m7894_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1536_m7797_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16495_MI = 
{
	".cctor", (methodPointerType)&m7896_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t2857_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16496_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m7898_gshared, &t1536_TI, &t2857_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1536_m16497_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16497_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m7900_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1536_m16497_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16498_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m7902_gshared, &t1536_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1536_m16499_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16499_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m7904_gshared, &t1536_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1536_m16499_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1536_m16500_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16500_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m7906_gshared, &t1536_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1536_m16500_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1536_m16501_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16501_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m7908_gshared, &t1536_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1536_m16501_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1536_m16502_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16502_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m7910_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1536_m16502_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1536_m16503_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16503_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m7912_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1536_m16503_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16504_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m7914_gshared, &t1536_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16505_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m7916_gshared, &t1536_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16506_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m7918_gshared, &t1536_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16507_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m7920_gshared, &t1536_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16508_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m7922_gshared, &t1536_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1536_m16509_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16509_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m7924_gshared, &t1536_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t1536_m16509_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1536_m16510_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16510_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m7926_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1536_m16510_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t1536_m16511_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16511_MI = 
{
	"Add", (methodPointerType)&m7927_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1536_m16511_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1536_m16512_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16512_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m7929_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1536_m16512_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2858_0_0_0;
static ParameterInfo t1536_m16513_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2858_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16513_MI = 
{
	"AddCollection", (methodPointerType)&m7931_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1536_m16513_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2859_0_0_0;
static ParameterInfo t1536_m16514_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2859_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16514_MI = 
{
	"AddEnumerable", (methodPointerType)&m7933_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1536_m16514_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2859_0_0_0;
static ParameterInfo t1536_m16515_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2859_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16515_MI = 
{
	"AddRange", (methodPointerType)&m7935_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1536_m16515_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t2860_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16516_MI = 
{
	"AsReadOnly", (methodPointerType)&m7937_gshared, &t1536_TI, &t2860_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16517_MI = 
{
	"Clear", (methodPointerType)&m7939_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t1536_m16518_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16518_MI = 
{
	"Contains", (methodPointerType)&m7941_gshared, &t1536_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1536_m16518_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2856_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1536_m16519_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2856_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16519_MI = 
{
	"CopyTo", (methodPointerType)&m7943_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1536_m16519_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2861_0_0_0;
static ParameterInfo t1536_m16520_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2861_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t1175_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16520_MI = 
{
	"Find", (methodPointerType)&m7945_gshared, &t1536_TI, &t1175_0_0_0, RuntimeInvoker_t4_t4, t1536_m16520_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2861_0_0_0;
static ParameterInfo t1536_m16521_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2861_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16521_MI = 
{
	"CheckMatch", (methodPointerType)&m7947_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1536_m16521_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
extern Il2CppType t2861_0_0_0;
static ParameterInfo t1536_m16522_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2861_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16522_MI = 
{
	"GetIndex", (methodPointerType)&m7949_gshared, &t1536_TI, &t16_0_0_0, RuntimeInvoker_t16_t16_t16_t4, t1536_m16522_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t2863_0_0_0;
extern void* RuntimeInvoker_t2863 (MethodInfo* method, void* obj, void** args);
MethodInfo m16523_MI = 
{
	"GetEnumerator", (methodPointerType)&m16523, &t1536_TI, &t2863_0_0_0, RuntimeInvoker_t2863, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t1536_m16524_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16524_MI = 
{
	"IndexOf", (methodPointerType)&m7952_gshared, &t1536_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1536_m16524_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1536_m16525_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16525_MI = 
{
	"Shift", (methodPointerType)&m7954_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t1536_m16525_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1536_m16526_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16526_MI = 
{
	"CheckIndex", (methodPointerType)&m7956_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1536_m16526_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t1536_m16527_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16527_MI = 
{
	"Insert", (methodPointerType)&m7958_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1536_m16527_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2859_0_0_0;
static ParameterInfo t1536_m16528_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2859_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16528_MI = 
{
	"CheckCollection", (methodPointerType)&m7960_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1536_m16528_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t1536_m16529_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16529_MI = 
{
	"Remove", (methodPointerType)&m7962_gshared, &t1536_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1536_m16529_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2861_0_0_0;
static ParameterInfo t1536_m16530_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2861_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16530_MI = 
{
	"RemoveAll", (methodPointerType)&m7964_gshared, &t1536_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1536_m16530_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1536_m16531_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16531_MI = 
{
	"RemoveAt", (methodPointerType)&m7966_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1536_m16531_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16532_MI = 
{
	"Reverse", (methodPointerType)&m7968_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16533_MI = 
{
	"Sort", (methodPointerType)&m7970_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2862_0_0_0;
static ParameterInfo t1536_m16534_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2862_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16534_MI = 
{
	"Sort", (methodPointerType)&m7972_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1536_m16534_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t2856_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16535_MI = 
{
	"ToArray", (methodPointerType)&m7974_gshared, &t1536_TI, &t2856_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16536_MI = 
{
	"TrimExcess", (methodPointerType)&m7976_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16537_MI = 
{
	"get_Capacity", (methodPointerType)&m7978_gshared, &t1536_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1536_m16538_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16538_MI = 
{
	"set_Capacity", (methodPointerType)&m7980_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1536_m16538_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1536_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16539_MI = 
{
	"get_Count", (methodPointerType)&m7982_gshared, &t1536_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1536_m16540_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t1175_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16540_MI = 
{
	"get_Item", (methodPointerType)&m7984_gshared, &t1536_TI, &t1175_0_0_0, RuntimeInvoker_t4_t16, t1536_m16540_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t1536_m16541_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t1536_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16541_MI = 
{
	"set_Item", (methodPointerType)&m7986_gshared, &t1536_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1536_m16541_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1536_MIs[] =
{
	&m16494_MI,
	&m7797_MI,
	&m16495_MI,
	&m16496_MI,
	&m16497_MI,
	&m16498_MI,
	&m16499_MI,
	&m16500_MI,
	&m16501_MI,
	&m16502_MI,
	&m16503_MI,
	&m16504_MI,
	&m16505_MI,
	&m16506_MI,
	&m16507_MI,
	&m16508_MI,
	&m16509_MI,
	&m16510_MI,
	&m16511_MI,
	&m16512_MI,
	&m16513_MI,
	&m16514_MI,
	&m16515_MI,
	&m16516_MI,
	&m16517_MI,
	&m16518_MI,
	&m16519_MI,
	&m16520_MI,
	&m16521_MI,
	&m16522_MI,
	&m16523_MI,
	&m16524_MI,
	&m16525_MI,
	&m16526_MI,
	&m16527_MI,
	&m16528_MI,
	&m16529_MI,
	&m16530_MI,
	&m16531_MI,
	&m16532_MI,
	&m16533_MI,
	&m16534_MI,
	&m16535_MI,
	&m16536_MI,
	&m16537_MI,
	&m16538_MI,
	&m16539_MI,
	&m16540_MI,
	&m16541_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m16498_MI;
extern MethodInfo m16539_MI;
extern MethodInfo m16505_MI;
extern MethodInfo m16506_MI;
extern MethodInfo m16497_MI;
extern MethodInfo m16507_MI;
extern MethodInfo m16508_MI;
extern MethodInfo m16509_MI;
extern MethodInfo m16510_MI;
extern MethodInfo m16499_MI;
extern MethodInfo m16517_MI;
extern MethodInfo m16500_MI;
extern MethodInfo m16501_MI;
extern MethodInfo m16502_MI;
extern MethodInfo m16503_MI;
extern MethodInfo m16531_MI;
extern MethodInfo m16539_MI;
extern MethodInfo m16504_MI;
extern MethodInfo m16511_MI;
extern MethodInfo m16517_MI;
extern MethodInfo m16518_MI;
extern MethodInfo m16519_MI;
extern MethodInfo m16529_MI;
extern MethodInfo m16496_MI;
extern MethodInfo m16524_MI;
extern MethodInfo m16527_MI;
extern MethodInfo m16531_MI;
extern MethodInfo m16540_MI;
extern MethodInfo m16541_MI;
static MethodInfo* t1536_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m16498_MI,
	&m16539_MI,
	&m16505_MI,
	&m16506_MI,
	&m16497_MI,
	&m16507_MI,
	&m16508_MI,
	&m16509_MI,
	&m16510_MI,
	&m16499_MI,
	&m16517_MI,
	&m16500_MI,
	&m16501_MI,
	&m16502_MI,
	&m16503_MI,
	&m16531_MI,
	&m16539_MI,
	&m16504_MI,
	&m16511_MI,
	&m16517_MI,
	&m16518_MI,
	&m16519_MI,
	&m16529_MI,
	&m16496_MI,
	&m16524_MI,
	&m16527_MI,
	&m16531_MI,
	&m16540_MI,
	&m16541_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t2858_TI;
extern TypeInfo t2859_TI;
extern TypeInfo t1172_TI;
static TypeInfo* t1536_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1014_TI,
	&t2858_TI,
	&t2859_TI,
	&t1172_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t2858_TI;
extern TypeInfo t2859_TI;
extern TypeInfo t1172_TI;
static Il2CppInterfaceOffsetPair t1536_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1014_TI, 9},
	{ &t2858_TI, 20},
	{ &t2859_TI, 27},
	{ &t1172_TI, 28},
};
extern TypeInfo t1536_TI;
extern TypeInfo t2856_TI;
extern MethodInfo m16523_MI;
extern TypeInfo t2863_TI;
extern TypeInfo t1175_TI;
extern MethodInfo m16511_MI;
extern MethodInfo m16518_MI;
extern MethodInfo m16524_MI;
extern MethodInfo m16526_MI;
extern MethodInfo m16527_MI;
extern MethodInfo m16529_MI;
extern MethodInfo m16540_MI;
extern MethodInfo m16541_MI;
extern MethodInfo m16512_MI;
extern MethodInfo m16537_MI;
extern MethodInfo m16538_MI;
extern MethodInfo m29533_MI;
extern MethodInfo m29538_MI;
extern MethodInfo m29540_MI;
extern MethodInfo m29541_MI;
extern MethodInfo m16528_MI;
extern TypeInfo t2858_TI;
extern MethodInfo m16513_MI;
extern MethodInfo m16514_MI;
extern TypeInfo t2860_TI;
extern MethodInfo m16548_MI;
extern MethodInfo m22595_MI;
extern MethodInfo m16521_MI;
extern MethodInfo m16522_MI;
extern MethodInfo m16623_MI;
extern MethodInfo m16542_MI;
extern MethodInfo m16525_MI;
extern MethodInfo m16531_MI;
extern MethodInfo m16629_MI;
extern MethodInfo m22597_MI;
extern MethodInfo m22605_MI;
extern MethodInfo m22593_MI;
static void* t1536_RGCTXData[37] = 
{
	&t1536_TI,
	&t2856_TI,
	&m16523_MI,
	&t2863_TI,
	&t1175_TI,
	&m16511_MI,
	&m16518_MI,
	&m16524_MI,
	&m16526_MI,
	&m16527_MI,
	&m16529_MI,
	&m16540_MI,
	&m16541_MI,
	&m16512_MI,
	&m16537_MI,
	&m16538_MI,
	&m29533_MI,
	&m29538_MI,
	&m29540_MI,
	&m29541_MI,
	&m16528_MI,
	&t2858_TI,
	&m16513_MI,
	&m16514_MI,
	&t2860_TI,
	&m16548_MI,
	&m22595_MI,
	&m16521_MI,
	&m16522_MI,
	&m16623_MI,
	&m16542_MI,
	&m16525_MI,
	&m16531_MI,
	&m16629_MI,
	&m22597_MI,
	&m22605_MI,
	&m22593_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1536_0_0_0;
extern Il2CppType t1536_1_0_0;
extern TypeInfo t4_TI;
struct t1536;
extern TypeInfo t1536_TI;
extern Il2CppGenericClass t1536_GC;
extern CustomAttributesCache t839__CustomAttributeCache;
TypeInfo t1536_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t1536_MIs, t1536_PIs, t1536_FIs, NULL, &t4_TI, NULL, NULL, &t1536_TI, t1536_ITIs, t1536_VT, &t839__CustomAttributeCache, &t1536_TI, &t1536_0_0_0, &t1536_1_0_0, t1536_IOs, &t1536_GC, NULL, t1536_FDVs, NULL, t1536_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1536), 0, -1, sizeof(t1536_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2863_TI;

#include "t290.h"
#include "t1286.h"
extern TypeInfo t2863_TI;
extern TypeInfo t1269_TI;
extern TypeInfo t1175_TI;
extern TypeInfo t1536_TI;
extern TypeInfo t290_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1286_TI;
#include "t290MD.h"
#include "t1286MD.h"
extern MethodInfo m16545_MI;
extern MethodInfo m6886_MI;
extern MethodInfo m1401_MI;
extern MethodInfo m2975_MI;
extern MethodInfo m7091_MI;
extern MethodInfo m6887_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
extern Il2CppType t1536_0_0_1;
FieldInfo t2863_f0_FieldInfo = 
{
	"l", &t1536_0_0_1, &t2863_TI, offsetof(t2863, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2863_f1_FieldInfo = 
{
	"next", &t16_0_0_1, &t2863_TI, offsetof(t2863, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2863_f2_FieldInfo = 
{
	"ver", &t16_0_0_1, &t2863_TI, offsetof(t2863, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t1175_0_0_1;
FieldInfo t2863_f3_FieldInfo = 
{
	"current", &t1175_0_0_1, &t2863_TI, offsetof(t2863, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2863_FIs[] =
{
	&t2863_f0_FieldInfo,
	&t2863_f1_FieldInfo,
	&t2863_f2_FieldInfo,
	&t2863_f3_FieldInfo,
	NULL
};
extern MethodInfo m16543_MI;
static PropertyInfo t2863____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2863_TI, "System.Collections.IEnumerator.Current", &m16543_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16547_MI;
static PropertyInfo t2863____Current_PropertyInfo = 
{
	&t2863_TI, "Current", &m16547_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2863_PIs[] =
{
	&t2863____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2863____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1536_0_0_0;
static ParameterInfo t2863_m16542_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t1536_0_0_0},
};
extern TypeInfo t2863_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16542_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2863_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2863_m16542_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2863_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16543_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7989_gshared, &t2863_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2863_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16544_MI = 
{
	"Dispose", (methodPointerType)&m7990_gshared, &t2863_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2863_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16545_MI = 
{
	"VerifyState", (methodPointerType)&m7991_gshared, &t2863_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2863_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16546_MI = 
{
	"MoveNext", (methodPointerType)&m7992_gshared, &t2863_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2863_TI;
extern Il2CppType t1175_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16547_MI = 
{
	"get_Current", (methodPointerType)&m7993_gshared, &t2863_TI, &t1175_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2863_MIs[] =
{
	&m16542_MI,
	&m16543_MI,
	&m16544_MI,
	&m16545_MI,
	&m16546_MI,
	&m16547_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16543_MI;
extern MethodInfo m16546_MI;
extern MethodInfo m16544_MI;
extern MethodInfo m16547_MI;
static MethodInfo* t2863_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16543_MI,
	&m16546_MI,
	&m16544_MI,
	&m16547_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t2857_TI;
static TypeInfo* t2863_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t2857_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t2857_TI;
static Il2CppInterfaceOffsetPair t2863_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t2857_TI, 7},
};
extern MethodInfo m16545_MI;
extern TypeInfo t1175_TI;
extern TypeInfo t2863_TI;
static void* t2863_RGCTXData[3] = 
{
	&m16545_MI,
	&t1175_TI,
	&t2863_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2863_0_0_0;
extern Il2CppType t2863_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2863_TI;
extern Il2CppGenericClass t2863_GC;
extern TypeInfo t839_TI;
TypeInfo t2863_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2863_MIs, t2863_PIs, t2863_FIs, NULL, &t95_TI, NULL, &t839_TI, &t2863_TI, t2863_ITIs, t2863_VT, &EmptyCustomAttributesCache, &t2863_TI, &t2863_0_0_0, &t2863_1_0_0, t2863_IOs, &t2863_GC, NULL, NULL, NULL, t2863_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2863)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2860_TI;

#include "t335.h"
extern TypeInfo t2860_TI;
extern TypeInfo t1175_TI;
extern TypeInfo t16_TI;
extern TypeInfo t335_TI;
extern TypeInfo t1172_TI;
extern TypeInfo t2858_TI;
extern TypeInfo t328_TI;
extern TypeInfo t640_TI;
extern TypeInfo t15_TI;
extern TypeInfo t14_TI;
extern TypeInfo t591_TI;
extern TypeInfo t123_TI;
extern TypeInfo t17_TI;
extern TypeInfo t2856_TI;
extern TypeInfo t2859_TI;
extern TypeInfo t2857_TI;
#include "t335MD.h"
#include "t2864MD.h"
extern MethodInfo m16577_MI;
extern MethodInfo m1489_MI;
extern MethodInfo m29528_MI;
extern MethodInfo m29533_MI;
extern MethodInfo m15_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m7382_MI;
extern MethodInfo m7291_MI;
extern MethodInfo m16609_MI;
extern MethodInfo m29537_MI;
extern MethodInfo m29530_MI;
extern MethodInfo m29538_MI;
extern MethodInfo m29540_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>
extern Il2CppType t1172_0_0_1;
FieldInfo t2860_f0_FieldInfo = 
{
	"list", &t1172_0_0_1, &t2860_TI, offsetof(t2860, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2860_FIs[] =
{
	&t2860_f0_FieldInfo,
	NULL
};
extern MethodInfo m16554_MI;
extern MethodInfo m16555_MI;
static PropertyInfo t2860____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2860_TI, "System.Collections.Generic.IList<T>.Item", &m16554_MI, &m16555_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16556_MI;
static PropertyInfo t2860____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2860_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m16556_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16566_MI;
static PropertyInfo t2860____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2860_TI, "System.Collections.ICollection.IsSynchronized", &m16566_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16567_MI;
static PropertyInfo t2860____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2860_TI, "System.Collections.ICollection.SyncRoot", &m16567_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16568_MI;
static PropertyInfo t2860____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2860_TI, "System.Collections.IList.IsFixedSize", &m16568_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16569_MI;
static PropertyInfo t2860____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2860_TI, "System.Collections.IList.IsReadOnly", &m16569_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16570_MI;
extern MethodInfo m16571_MI;
static PropertyInfo t2860____System_Collections_IList_Item_PropertyInfo = 
{
	&t2860_TI, "System.Collections.IList.Item", &m16570_MI, &m16571_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16576_MI;
static PropertyInfo t2860____Count_PropertyInfo = 
{
	&t2860_TI, "Count", &m16576_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16577_MI;
static PropertyInfo t2860____Item_PropertyInfo = 
{
	&t2860_TI, "Item", &m16577_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2860_PIs[] =
{
	&t2860____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2860____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2860____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2860____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2860____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2860____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2860____System_Collections_IList_Item_PropertyInfo,
	&t2860____Count_PropertyInfo,
	&t2860____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1172_0_0_0;
static ParameterInfo t2860_m16548_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1172_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16548_MI = 
{
	".ctor", (methodPointerType)&m7994_gshared, &t2860_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2860_m16548_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2860_m16549_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16549_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m7995_gshared, &t2860_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2860_m16549_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2860_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16550_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m7996_gshared, &t2860_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2860_m16551_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16551_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m7997_gshared, &t2860_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2860_m16551_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2860_m16552_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16552_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m7998_gshared, &t2860_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2860_m16552_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2860_m16553_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16553_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m7999_gshared, &t2860_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t2860_m16553_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2860_m16554_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t1175_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16554_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8000_gshared, &t2860_TI, &t1175_0_0_0, RuntimeInvoker_t4_t16, t2860_m16554_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2860_m16555_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16555_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8001_gshared, &t2860_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2860_m16555_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2860_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16556_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8002_gshared, &t2860_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t2860_m16557_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16557_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8003_gshared, &t2860_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t2860_m16557_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2860_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16558_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8004_gshared, &t2860_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2860_m16559_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16559_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8005_gshared, &t2860_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2860_m16559_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2860_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16560_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8006_gshared, &t2860_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2860_m16561_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16561_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8007_gshared, &t2860_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2860_m16561_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2860_m16562_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16562_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8008_gshared, &t2860_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2860_m16562_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2860_m16563_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16563_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8009_gshared, &t2860_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2860_m16563_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2860_m16564_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16564_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8010_gshared, &t2860_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2860_m16564_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2860_m16565_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16565_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8011_gshared, &t2860_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t2860_m16565_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2860_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16566_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8012_gshared, &t2860_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2860_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16567_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8013_gshared, &t2860_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2860_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16568_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8014_gshared, &t2860_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2860_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16569_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8015_gshared, &t2860_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2860_m16570_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16570_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8016_gshared, &t2860_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t2860_m16570_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2860_m16571_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16571_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8017_gshared, &t2860_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2860_m16571_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2860_m16572_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16572_MI = 
{
	"Contains", (methodPointerType)&m8018_gshared, &t2860_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2860_m16572_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2856_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t2860_m16573_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2856_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16573_MI = 
{
	"CopyTo", (methodPointerType)&m8019_gshared, &t2860_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t2860_m16573_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2860_TI;
extern Il2CppType t2857_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16574_MI = 
{
	"GetEnumerator", (methodPointerType)&m8020_gshared, &t2860_TI, &t2857_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2860_m16575_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16575_MI = 
{
	"IndexOf", (methodPointerType)&m8021_gshared, &t2860_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2860_m16575_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2860_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16576_MI = 
{
	"get_Count", (methodPointerType)&m8022_gshared, &t2860_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2860_m16577_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t1175_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16577_MI = 
{
	"get_Item", (methodPointerType)&m8023_gshared, &t2860_TI, &t1175_0_0_0, RuntimeInvoker_t4_t16, t2860_m16577_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2860_MIs[] =
{
	&m16548_MI,
	&m16549_MI,
	&m16550_MI,
	&m16551_MI,
	&m16552_MI,
	&m16553_MI,
	&m16554_MI,
	&m16555_MI,
	&m16556_MI,
	&m16557_MI,
	&m16558_MI,
	&m16559_MI,
	&m16560_MI,
	&m16561_MI,
	&m16562_MI,
	&m16563_MI,
	&m16564_MI,
	&m16565_MI,
	&m16566_MI,
	&m16567_MI,
	&m16568_MI,
	&m16569_MI,
	&m16570_MI,
	&m16571_MI,
	&m16572_MI,
	&m16573_MI,
	&m16574_MI,
	&m16575_MI,
	&m16576_MI,
	&m16577_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m16558_MI;
extern MethodInfo m16576_MI;
extern MethodInfo m16566_MI;
extern MethodInfo m16567_MI;
extern MethodInfo m16557_MI;
extern MethodInfo m16568_MI;
extern MethodInfo m16569_MI;
extern MethodInfo m16570_MI;
extern MethodInfo m16571_MI;
extern MethodInfo m16559_MI;
extern MethodInfo m16560_MI;
extern MethodInfo m16561_MI;
extern MethodInfo m16562_MI;
extern MethodInfo m16563_MI;
extern MethodInfo m16564_MI;
extern MethodInfo m16565_MI;
extern MethodInfo m16576_MI;
extern MethodInfo m16556_MI;
extern MethodInfo m16549_MI;
extern MethodInfo m16550_MI;
extern MethodInfo m16572_MI;
extern MethodInfo m16573_MI;
extern MethodInfo m16552_MI;
extern MethodInfo m16575_MI;
extern MethodInfo m16551_MI;
extern MethodInfo m16553_MI;
extern MethodInfo m16554_MI;
extern MethodInfo m16555_MI;
extern MethodInfo m16574_MI;
extern MethodInfo m16577_MI;
static MethodInfo* t2860_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m16558_MI,
	&m16576_MI,
	&m16566_MI,
	&m16567_MI,
	&m16557_MI,
	&m16568_MI,
	&m16569_MI,
	&m16570_MI,
	&m16571_MI,
	&m16559_MI,
	&m16560_MI,
	&m16561_MI,
	&m16562_MI,
	&m16563_MI,
	&m16564_MI,
	&m16565_MI,
	&m16576_MI,
	&m16556_MI,
	&m16549_MI,
	&m16550_MI,
	&m16572_MI,
	&m16573_MI,
	&m16552_MI,
	&m16575_MI,
	&m16551_MI,
	&m16553_MI,
	&m16554_MI,
	&m16555_MI,
	&m16574_MI,
	&m16577_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t2858_TI;
extern TypeInfo t1172_TI;
extern TypeInfo t2859_TI;
static TypeInfo* t2860_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1014_TI,
	&t2858_TI,
	&t1172_TI,
	&t2859_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t2858_TI;
extern TypeInfo t1172_TI;
extern TypeInfo t2859_TI;
static Il2CppInterfaceOffsetPair t2860_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1014_TI, 9},
	{ &t2858_TI, 20},
	{ &t1172_TI, 27},
	{ &t2859_TI, 32},
};
extern MethodInfo m16577_MI;
extern MethodInfo m16609_MI;
extern TypeInfo t1175_TI;
extern MethodInfo m29537_MI;
extern MethodInfo m29530_MI;
extern MethodInfo m29528_MI;
extern MethodInfo m29538_MI;
extern MethodInfo m29540_MI;
extern MethodInfo m29533_MI;
static void* t2860_RGCTXData[9] = 
{
	&m16577_MI,
	&m16609_MI,
	&t1175_TI,
	&m29537_MI,
	&m29530_MI,
	&m29528_MI,
	&m29538_MI,
	&m29540_MI,
	&m29533_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2860_0_0_0;
extern Il2CppType t2860_1_0_0;
extern TypeInfo t4_TI;
struct t2860;
extern TypeInfo t2860_TI;
extern Il2CppGenericClass t2860_GC;
extern CustomAttributesCache t841__CustomAttributeCache;
TypeInfo t2860_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2860_MIs, t2860_PIs, t2860_FIs, NULL, &t4_TI, NULL, NULL, &t2860_TI, t2860_ITIs, t2860_VT, &t841__CustomAttributeCache, &t2860_TI, &t2860_0_0_0, &t2860_1_0_0, t2860_IOs, &t2860_GC, NULL, NULL, NULL, t2860_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2860), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2864.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2864_TI;

#include "t291.h"
extern TypeInfo t2864_TI;
extern TypeInfo t2858_TI;
extern TypeInfo t17_TI;
extern TypeInfo t1172_TI;
extern TypeInfo t1175_TI;
extern TypeInfo t16_TI;
extern TypeInfo t15_TI;
extern TypeInfo t1536_TI;
extern TypeInfo t640_TI;
extern TypeInfo t4_TI;
extern TypeInfo t14_TI;
extern TypeInfo t2859_TI;
extern TypeInfo t2857_TI;
extern TypeInfo t2856_TI;
extern TypeInfo t290_TI;
extern TypeInfo t303_TI;
extern TypeInfo t335_TI;
extern TypeInfo t1014_TI;
extern Il2CppType t1175_0_0_0;
extern MethodInfo m29534_MI;
extern MethodInfo m16612_MI;
extern MethodInfo m16613_MI;
extern MethodInfo m29528_MI;
extern MethodInfo m16610_MI;
extern MethodInfo m16608_MI;
extern MethodInfo m29533_MI;
extern MethodInfo m15_MI;
extern MethodInfo m16494_MI;
extern MethodInfo m7381_MI;
extern MethodInfo m7382_MI;
extern MethodInfo m29540_MI;
extern MethodInfo m16601_MI;
extern MethodInfo m16609_MI;
extern MethodInfo m29537_MI;
extern MethodInfo m29530_MI;
extern MethodInfo m16611_MI;
extern MethodInfo m16599_MI;
extern MethodInfo m16604_MI;
extern MethodInfo m16595_MI;
extern MethodInfo m29536_MI;
extern MethodInfo m29538_MI;
extern MethodInfo m29531_MI;
extern MethodInfo m29532_MI;
extern MethodInfo m29529_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m3794_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m1489_MI;
extern MethodInfo m7380_MI;
extern MethodInfo m7383_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>
extern Il2CppType t1172_0_0_1;
FieldInfo t2864_f0_FieldInfo = 
{
	"list", &t1172_0_0_1, &t2864_TI, offsetof(t2864, f0), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t2864_f1_FieldInfo = 
{
	"syncRoot", &t4_0_0_1, &t2864_TI, offsetof(t2864, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2864_FIs[] =
{
	&t2864_f0_FieldInfo,
	&t2864_f1_FieldInfo,
	NULL
};
extern MethodInfo m16579_MI;
static PropertyInfo t2864____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2864_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m16579_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16587_MI;
static PropertyInfo t2864____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2864_TI, "System.Collections.ICollection.IsSynchronized", &m16587_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16588_MI;
static PropertyInfo t2864____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2864_TI, "System.Collections.ICollection.SyncRoot", &m16588_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16589_MI;
static PropertyInfo t2864____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2864_TI, "System.Collections.IList.IsFixedSize", &m16589_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16590_MI;
static PropertyInfo t2864____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2864_TI, "System.Collections.IList.IsReadOnly", &m16590_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16591_MI;
extern MethodInfo m16592_MI;
static PropertyInfo t2864____System_Collections_IList_Item_PropertyInfo = 
{
	&t2864_TI, "System.Collections.IList.Item", &m16591_MI, &m16592_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16605_MI;
static PropertyInfo t2864____Count_PropertyInfo = 
{
	&t2864_TI, "Count", &m16605_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16606_MI;
extern MethodInfo m16607_MI;
static PropertyInfo t2864____Item_PropertyInfo = 
{
	&t2864_TI, "Item", &m16606_MI, &m16607_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2864_PIs[] =
{
	&t2864____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2864____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2864____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2864____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2864____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2864____System_Collections_IList_Item_PropertyInfo,
	&t2864____Count_PropertyInfo,
	&t2864____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16578_MI = 
{
	".ctor", (methodPointerType)&m8024_gshared, &t2864_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16579_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8025_gshared, &t2864_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t2864_m16580_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16580_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8026_gshared, &t2864_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t2864_m16580_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16581_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8027_gshared, &t2864_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2864_m16582_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16582_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8028_gshared, &t2864_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2864_m16582_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2864_m16583_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16583_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8029_gshared, &t2864_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2864_m16583_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2864_m16584_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16584_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8030_gshared, &t2864_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2864_m16584_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2864_m16585_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16585_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8031_gshared, &t2864_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2864_m16585_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2864_m16586_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16586_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8032_gshared, &t2864_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2864_m16586_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16587_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8033_gshared, &t2864_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16588_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8034_gshared, &t2864_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16589_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8035_gshared, &t2864_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16590_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8036_gshared, &t2864_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2864_m16591_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16591_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8037_gshared, &t2864_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t2864_m16591_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2864_m16592_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16592_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8038_gshared, &t2864_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2864_m16592_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2864_m16593_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16593_MI = 
{
	"Add", (methodPointerType)&m8039_gshared, &t2864_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2864_m16593_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16594_MI = 
{
	"Clear", (methodPointerType)&m8040_gshared, &t2864_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16595_MI = 
{
	"ClearItems", (methodPointerType)&m8041_gshared, &t2864_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2864_m16596_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16596_MI = 
{
	"Contains", (methodPointerType)&m8042_gshared, &t2864_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2864_m16596_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2856_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t2864_m16597_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2856_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16597_MI = 
{
	"CopyTo", (methodPointerType)&m8043_gshared, &t2864_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t2864_m16597_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t2857_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16598_MI = 
{
	"GetEnumerator", (methodPointerType)&m8044_gshared, &t2864_TI, &t2857_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2864_m16599_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16599_MI = 
{
	"IndexOf", (methodPointerType)&m8045_gshared, &t2864_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2864_m16599_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2864_m16600_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16600_MI = 
{
	"Insert", (methodPointerType)&m8046_gshared, &t2864_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2864_m16600_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2864_m16601_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16601_MI = 
{
	"InsertItem", (methodPointerType)&m8047_gshared, &t2864_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2864_m16601_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2864_m16602_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16602_MI = 
{
	"Remove", (methodPointerType)&m8048_gshared, &t2864_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2864_m16602_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2864_m16603_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16603_MI = 
{
	"RemoveAt", (methodPointerType)&m8049_gshared, &t2864_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t2864_m16603_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2864_m16604_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16604_MI = 
{
	"RemoveItem", (methodPointerType)&m8050_gshared, &t2864_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t2864_m16604_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16605_MI = 
{
	"get_Count", (methodPointerType)&m8051_gshared, &t2864_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2864_m16606_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t1175_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m16606_MI = 
{
	"get_Item", (methodPointerType)&m8052_gshared, &t2864_TI, &t1175_0_0_0, RuntimeInvoker_t4_t16, t2864_m16606_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2864_m16607_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16607_MI = 
{
	"set_Item", (methodPointerType)&m8053_gshared, &t2864_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2864_m16607_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2864_m16608_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16608_MI = 
{
	"SetItem", (methodPointerType)&m8054_gshared, &t2864_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2864_m16608_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2864_m16609_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16609_MI = 
{
	"IsValidItem", (methodPointerType)&m8055_gshared, &t2864_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2864_m16609_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2864_m16610_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t1175_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16610_MI = 
{
	"ConvertItem", (methodPointerType)&m8056_gshared, &t2864_TI, &t1175_0_0_0, RuntimeInvoker_t4_t4, t2864_m16610_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1172_0_0_0;
static ParameterInfo t2864_m16611_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1172_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16611_MI = 
{
	"CheckWritable", (methodPointerType)&m8057_gshared, &t2864_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2864_m16611_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1172_0_0_0;
static ParameterInfo t2864_m16612_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1172_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16612_MI = 
{
	"IsSynchronized", (methodPointerType)&m8058_gshared, &t2864_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2864_m16612_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1172_0_0_0;
static ParameterInfo t2864_m16613_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1172_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16613_MI = 
{
	"IsFixedSize", (methodPointerType)&m8059_gshared, &t2864_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2864_m16613_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2864_MIs[] =
{
	&m16578_MI,
	&m16579_MI,
	&m16580_MI,
	&m16581_MI,
	&m16582_MI,
	&m16583_MI,
	&m16584_MI,
	&m16585_MI,
	&m16586_MI,
	&m16587_MI,
	&m16588_MI,
	&m16589_MI,
	&m16590_MI,
	&m16591_MI,
	&m16592_MI,
	&m16593_MI,
	&m16594_MI,
	&m16595_MI,
	&m16596_MI,
	&m16597_MI,
	&m16598_MI,
	&m16599_MI,
	&m16600_MI,
	&m16601_MI,
	&m16602_MI,
	&m16603_MI,
	&m16604_MI,
	&m16605_MI,
	&m16606_MI,
	&m16607_MI,
	&m16608_MI,
	&m16609_MI,
	&m16610_MI,
	&m16611_MI,
	&m16612_MI,
	&m16613_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m16581_MI;
extern MethodInfo m16605_MI;
extern MethodInfo m16587_MI;
extern MethodInfo m16588_MI;
extern MethodInfo m16580_MI;
extern MethodInfo m16589_MI;
extern MethodInfo m16590_MI;
extern MethodInfo m16591_MI;
extern MethodInfo m16592_MI;
extern MethodInfo m16582_MI;
extern MethodInfo m16594_MI;
extern MethodInfo m16583_MI;
extern MethodInfo m16584_MI;
extern MethodInfo m16585_MI;
extern MethodInfo m16586_MI;
extern MethodInfo m16603_MI;
extern MethodInfo m16605_MI;
extern MethodInfo m16579_MI;
extern MethodInfo m16593_MI;
extern MethodInfo m16594_MI;
extern MethodInfo m16596_MI;
extern MethodInfo m16597_MI;
extern MethodInfo m16602_MI;
extern MethodInfo m16599_MI;
extern MethodInfo m16600_MI;
extern MethodInfo m16603_MI;
extern MethodInfo m16606_MI;
extern MethodInfo m16607_MI;
extern MethodInfo m16598_MI;
extern MethodInfo m16595_MI;
extern MethodInfo m16601_MI;
extern MethodInfo m16604_MI;
extern MethodInfo m16608_MI;
static MethodInfo* t2864_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m16581_MI,
	&m16605_MI,
	&m16587_MI,
	&m16588_MI,
	&m16580_MI,
	&m16589_MI,
	&m16590_MI,
	&m16591_MI,
	&m16592_MI,
	&m16582_MI,
	&m16594_MI,
	&m16583_MI,
	&m16584_MI,
	&m16585_MI,
	&m16586_MI,
	&m16603_MI,
	&m16605_MI,
	&m16579_MI,
	&m16593_MI,
	&m16594_MI,
	&m16596_MI,
	&m16597_MI,
	&m16602_MI,
	&m16599_MI,
	&m16600_MI,
	&m16603_MI,
	&m16606_MI,
	&m16607_MI,
	&m16598_MI,
	&m16595_MI,
	&m16601_MI,
	&m16604_MI,
	&m16608_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t2858_TI;
extern TypeInfo t1172_TI;
extern TypeInfo t2859_TI;
static TypeInfo* t2864_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1014_TI,
	&t2858_TI,
	&t1172_TI,
	&t2859_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t2858_TI;
extern TypeInfo t1172_TI;
extern TypeInfo t2859_TI;
static Il2CppInterfaceOffsetPair t2864_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1014_TI, 9},
	{ &t2858_TI, 20},
	{ &t1172_TI, 27},
	{ &t2859_TI, 32},
};
extern TypeInfo t1536_TI;
extern MethodInfo m16494_MI;
extern MethodInfo m29534_MI;
extern MethodInfo m29540_MI;
extern MethodInfo m29533_MI;
extern MethodInfo m16610_MI;
extern MethodInfo m16601_MI;
extern MethodInfo m16609_MI;
extern TypeInfo t1175_TI;
extern MethodInfo m29537_MI;
extern MethodInfo m29530_MI;
extern MethodInfo m16611_MI;
extern MethodInfo m16599_MI;
extern MethodInfo m16604_MI;
extern MethodInfo m16612_MI;
extern MethodInfo m16613_MI;
extern MethodInfo m29528_MI;
extern MethodInfo m16608_MI;
extern MethodInfo m16595_MI;
extern MethodInfo m29536_MI;
extern MethodInfo m29538_MI;
extern MethodInfo m29531_MI;
extern MethodInfo m29532_MI;
extern MethodInfo m29529_MI;
extern Il2CppType t1175_0_0_0;
static void* t2864_RGCTXData[25] = 
{
	&t1536_TI,
	&m16494_MI,
	&m29534_MI,
	&m29540_MI,
	&m29533_MI,
	&m16610_MI,
	&m16601_MI,
	&m16609_MI,
	&t1175_TI,
	&m29537_MI,
	&m29530_MI,
	&m16611_MI,
	&m16599_MI,
	&m16604_MI,
	&m16612_MI,
	&m16613_MI,
	&m29528_MI,
	&m16608_MI,
	&m16595_MI,
	&m29536_MI,
	&m29538_MI,
	&m29531_MI,
	&m29532_MI,
	&m29529_MI,
	(void*)&t1175_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2864_0_0_0;
extern Il2CppType t2864_1_0_0;
extern TypeInfo t4_TI;
struct t2864;
extern TypeInfo t2864_TI;
extern Il2CppGenericClass t2864_GC;
extern CustomAttributesCache t840__CustomAttributeCache;
TypeInfo t2864_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2864_MIs, t2864_PIs, t2864_FIs, NULL, &t4_TI, NULL, NULL, &t2864_TI, t2864_ITIs, t2864_VT, &t840__CustomAttributeCache, &t2864_TI, &t2864_0_0_0, &t2864_1_0_0, t2864_IOs, &t2864_GC, NULL, NULL, NULL, t2864_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2864), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2865_TI;
#include "t2865MD.h"

#include "t836.h"
#include "t2866.h"
extern TypeInfo t2865_TI;
extern TypeInfo t5202_TI;
extern TypeInfo t290_TI;
extern TypeInfo t1175_TI;
extern TypeInfo t17_TI;
extern TypeInfo t836_TI;
extern TypeInfo t525_TI;
extern TypeInfo t2866_TI;
extern TypeInfo t16_TI;
#include "t1222MD.h"
#include "t2866MD.h"
extern Il2CppType t5202_0_0_0;
extern Il2CppType t1175_0_0_0;
extern Il2CppType t836_0_0_0;
extern MethodInfo m15_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2958_MI;
extern MethodInfo m2956_MI;
extern MethodInfo m6421_MI;
extern MethodInfo m16619_MI;
extern MethodInfo m29570_MI;
extern MethodInfo m22594_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>
extern Il2CppType t2865_0_0_49;
FieldInfo t2865_f0_FieldInfo = 
{
	"_default", &t2865_0_0_49, &t2865_TI, offsetof(t2865_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2865_FIs[] =
{
	&t2865_f0_FieldInfo,
	NULL
};
extern MethodInfo m16618_MI;
static PropertyInfo t2865____Default_PropertyInfo = 
{
	&t2865_TI, "Default", &m16618_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2865_PIs[] =
{
	&t2865____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2865_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16614_MI = 
{
	".ctor", (methodPointerType)&m8060_gshared, &t2865_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2865_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16615_MI = 
{
	".cctor", (methodPointerType)&m8061_gshared, &t2865_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2865_m16616_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2865_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16616_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8062_gshared, &t2865_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2865_m16616_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2865_m16617_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2865_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16617_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8063_gshared, &t2865_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2865_m16617_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2865_m29570_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2865_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29570_MI = 
{
	"GetHashCode", NULL, &t2865_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2865_m29570_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2865_m22594_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2865_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m22594_MI = 
{
	"Equals", NULL, &t2865_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2865_m22594_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2865_TI;
extern Il2CppType t2865_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16618_MI = 
{
	"get_Default", (methodPointerType)&m8064_gshared, &t2865_TI, &t2865_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2865_MIs[] =
{
	&m16614_MI,
	&m16615_MI,
	&m16616_MI,
	&m16617_MI,
	&m29570_MI,
	&m22594_MI,
	&m16618_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m22594_MI;
extern MethodInfo m29570_MI;
extern MethodInfo m16617_MI;
extern MethodInfo m16616_MI;
static MethodInfo* t2865_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m22594_MI,
	&m29570_MI,
	&m16617_MI,
	&m16616_MI,
	NULL,
	NULL,
};
extern TypeInfo t5203_TI;
extern TypeInfo t859_TI;
static TypeInfo* t2865_ITIs[] = 
{
	&t5203_TI,
	&t859_TI,
};
extern TypeInfo t5203_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t2865_IOs[] = 
{
	{ &t5203_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppType t5202_0_0_0;
extern Il2CppType t1175_0_0_0;
extern TypeInfo t2865_TI;
extern TypeInfo t2865_TI;
extern TypeInfo t2866_TI;
extern MethodInfo m16619_MI;
extern TypeInfo t1175_TI;
extern MethodInfo m29570_MI;
extern MethodInfo m22594_MI;
static void* t2865_RGCTXData[9] = 
{
	(void*)&t5202_0_0_0,
	(void*)&t1175_0_0_0,
	&t2865_TI,
	&t2865_TI,
	&t2866_TI,
	&m16619_MI,
	&t1175_TI,
	&m29570_MI,
	&m22594_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2865_0_0_0;
extern Il2CppType t2865_1_0_0;
extern TypeInfo t4_TI;
struct t2865;
extern TypeInfo t2865_TI;
extern Il2CppGenericClass t2865_GC;
TypeInfo t2865_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2865_MIs, t2865_PIs, t2865_FIs, NULL, &t4_TI, NULL, NULL, &t2865_TI, t2865_ITIs, t2865_VT, &EmptyCustomAttributesCache, &t2865_TI, &t2865_0_0_0, &t2865_1_0_0, t2865_IOs, &t2865_GC, NULL, NULL, NULL, t2865_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2865), 0, -1, sizeof(t2865_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5203_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Security.Policy.StrongName>
extern Il2CppType t1175_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t5203_m29571_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t5203_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29571_MI = 
{
	"Equals", NULL, &t5203_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t5203_m29571_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t5203_m29572_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t5203_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29572_MI = 
{
	"GetHashCode", NULL, &t5203_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5203_m29572_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5203_MIs[] =
{
	&m29571_MI,
	&m29572_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5203_0_0_0;
extern Il2CppType t5203_1_0_0;
struct t5203;
extern TypeInfo t5203_TI;
extern Il2CppGenericClass t5203_GC;
TypeInfo t5203_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5203_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5203_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5203_TI, &t5203_0_0_0, &t5203_1_0_0, NULL, &t5203_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5202_TI;



// Metadata Definition System.IEquatable`1<System.Security.Policy.StrongName>
extern Il2CppType t1175_0_0_0;
static ParameterInfo t5202_m29573_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t5202_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29573_MI = 
{
	"Equals", NULL, &t5202_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5202_m29573_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5202_MIs[] =
{
	&m29573_MI,
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
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5202_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5202_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5202_TI, &t5202_0_0_0, &t5202_1_0_0, NULL, &t5202_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2866_TI;

extern TypeInfo t1175_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern TypeInfo t17_TI;
extern MethodInfo m16614_MI;
extern MethodInfo m21_MI;
extern MethodInfo m19_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Security.Policy.StrongName>
extern TypeInfo t2866_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16619_MI = 
{
	".ctor", (methodPointerType)&m8095_gshared, &t2866_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2866_m16620_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2866_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16620_MI = 
{
	"GetHashCode", (methodPointerType)&m8096_gshared, &t2866_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2866_m16620_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2866_m16621_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2866_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16621_MI = 
{
	"Equals", (methodPointerType)&m8097_gshared, &t2866_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2866_m16621_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2866_MIs[] =
{
	&m16619_MI,
	&m16620_MI,
	&m16621_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m16621_MI;
extern MethodInfo m16620_MI;
extern MethodInfo m16617_MI;
extern MethodInfo m16616_MI;
extern MethodInfo m16620_MI;
extern MethodInfo m16621_MI;
static MethodInfo* t2866_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m16621_MI,
	&m16620_MI,
	&m16617_MI,
	&m16616_MI,
	&m16620_MI,
	&m16621_MI,
};
extern TypeInfo t5203_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t2866_IOs[] = 
{
	{ &t5203_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppType t5202_0_0_0;
extern Il2CppType t1175_0_0_0;
extern TypeInfo t2865_TI;
extern TypeInfo t2865_TI;
extern TypeInfo t2866_TI;
extern MethodInfo m16619_MI;
extern TypeInfo t1175_TI;
extern MethodInfo m29570_MI;
extern MethodInfo m22594_MI;
extern MethodInfo m16614_MI;
extern TypeInfo t1175_TI;
static void* t2866_RGCTXData[11] = 
{
	(void*)&t5202_0_0_0,
	(void*)&t1175_0_0_0,
	&t2865_TI,
	&t2865_TI,
	&t2866_TI,
	&m16619_MI,
	&t1175_TI,
	&m29570_MI,
	&m22594_MI,
	&m16614_MI,
	&t1175_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2866_0_0_0;
extern Il2CppType t2866_1_0_0;
extern TypeInfo t2865_TI;
struct t2866;
extern TypeInfo t2866_TI;
extern Il2CppGenericClass t2866_GC;
extern TypeInfo t835_TI;
TypeInfo t2866_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2866_MIs, NULL, NULL, NULL, &t2865_TI, NULL, &t835_TI, &t2866_TI, NULL, t2866_VT, &EmptyCustomAttributesCache, &t2866_TI, &t2866_0_0_0, &t2866_1_0_0, t2866_IOs, &t2866_GC, NULL, NULL, NULL, t2866_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2866), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2861_TI;

#include "t50.h"
#include "t49.h"


// Metadata Definition System.Predicate`1<System.Security.Policy.StrongName>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t2861_m16622_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t2861_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m16622_MI = 
{
	".ctor", (methodPointerType)&m8098_gshared, &t2861_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t2861_m16622_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2861_m16623_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2861_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16623_MI = 
{
	"Invoke", (methodPointerType)&m8099_gshared, &t2861_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2861_m16623_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2861_m16624_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2861_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16624_MI = 
{
	"BeginInvoke", (methodPointerType)&m8100_gshared, &t2861_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2861_m16624_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t2861_m16625_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t2861_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16625_MI = 
{
	"EndInvoke", (methodPointerType)&m8101_gshared, &t2861_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2861_m16625_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2861_MIs[] =
{
	&m16622_MI,
	&m16623_MI,
	&m16624_MI,
	&m16625_MI,
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
extern MethodInfo m16623_MI;
extern MethodInfo m16624_MI;
extern MethodInfo m16625_MI;
static MethodInfo* t2861_VT[] =
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
	&m16623_MI,
	&m16624_MI,
	&m16625_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t2861_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2861_0_0_0;
extern Il2CppType t2861_1_0_0;
extern TypeInfo t189_TI;
struct t2861;
extern TypeInfo t2861_TI;
extern Il2CppGenericClass t2861_GC;
TypeInfo t2861_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2861_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t2861_TI, NULL, t2861_VT, &EmptyCustomAttributesCache, &t2861_TI, &t2861_0_0_0, &t2861_1_0_0, t2861_IOs, &t2861_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2861), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2867_TI;

#include "t824.h"
#include "t2868.h"
extern TypeInfo t2867_TI;
extern TypeInfo t3744_TI;
extern TypeInfo t290_TI;
extern TypeInfo t1175_TI;
extern TypeInfo t17_TI;
extern TypeInfo t824_TI;
extern TypeInfo t525_TI;
extern TypeInfo t2868_TI;
extern TypeInfo t16_TI;
extern TypeInfo t303_TI;
#include "t2868MD.h"
extern Il2CppType t3744_0_0_0;
extern Il2CppType t1175_0_0_0;
extern Il2CppType t824_0_0_0;
extern MethodInfo m15_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2958_MI;
extern MethodInfo m2956_MI;
extern MethodInfo m6421_MI;
extern MethodInfo m16630_MI;
extern MethodInfo m29574_MI;
extern MethodInfo m6443_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>
extern Il2CppType t2867_0_0_49;
FieldInfo t2867_f0_FieldInfo = 
{
	"_default", &t2867_0_0_49, &t2867_TI, offsetof(t2867_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2867_FIs[] =
{
	&t2867_f0_FieldInfo,
	NULL
};
extern MethodInfo m16629_MI;
static PropertyInfo t2867____Default_PropertyInfo = 
{
	&t2867_TI, "Default", &m16629_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2867_PIs[] =
{
	&t2867____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2867_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16626_MI = 
{
	".ctor", (methodPointerType)&m8102_gshared, &t2867_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2867_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16627_MI = 
{
	".cctor", (methodPointerType)&m8103_gshared, &t2867_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2867_m16628_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2867_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16628_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8104_gshared, &t2867_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t2867_m16628_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2867_m29574_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2867_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29574_MI = 
{
	"Compare", NULL, &t2867_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t2867_m29574_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2867_TI;
extern Il2CppType t2867_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16629_MI = 
{
	"get_Default", (methodPointerType)&m8105_gshared, &t2867_TI, &t2867_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2867_MIs[] =
{
	&m16626_MI,
	&m16627_MI,
	&m16628_MI,
	&m29574_MI,
	&m16629_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m29574_MI;
extern MethodInfo m16628_MI;
static MethodInfo* t2867_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m29574_MI,
	&m16628_MI,
	NULL,
};
extern TypeInfo t3743_TI;
extern TypeInfo t716_TI;
static TypeInfo* t2867_ITIs[] = 
{
	&t3743_TI,
	&t716_TI,
};
extern TypeInfo t3743_TI;
extern TypeInfo t716_TI;
static Il2CppInterfaceOffsetPair t2867_IOs[] = 
{
	{ &t3743_TI, 4},
	{ &t716_TI, 5},
};
extern Il2CppType t3744_0_0_0;
extern Il2CppType t1175_0_0_0;
extern TypeInfo t2867_TI;
extern TypeInfo t2867_TI;
extern TypeInfo t2868_TI;
extern MethodInfo m16630_MI;
extern TypeInfo t1175_TI;
extern MethodInfo m29574_MI;
static void* t2867_RGCTXData[8] = 
{
	(void*)&t3744_0_0_0,
	(void*)&t1175_0_0_0,
	&t2867_TI,
	&t2867_TI,
	&t2868_TI,
	&m16630_MI,
	&t1175_TI,
	&m29574_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2867_0_0_0;
extern Il2CppType t2867_1_0_0;
extern TypeInfo t4_TI;
struct t2867;
extern TypeInfo t2867_TI;
extern Il2CppGenericClass t2867_GC;
TypeInfo t2867_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2867_MIs, t2867_PIs, t2867_FIs, NULL, &t4_TI, NULL, NULL, &t2867_TI, t2867_ITIs, t2867_VT, &EmptyCustomAttributesCache, &t2867_TI, &t2867_0_0_0, &t2867_1_0_0, t2867_IOs, &t2867_GC, NULL, NULL, NULL, t2867_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2867), 0, -1, sizeof(t2867_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3743_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.Security.Policy.StrongName>
extern Il2CppType t1175_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t3743_m22602_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t3743_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m22602_MI = 
{
	"Compare", NULL, &t3743_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t3743_m22602_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3743_MIs[] =
{
	&m22602_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3743_0_0_0;
extern Il2CppType t3743_1_0_0;
struct t3743;
extern TypeInfo t3743_TI;
extern Il2CppGenericClass t3743_GC;
TypeInfo t3743_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3743_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3743_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3743_TI, &t3743_0_0_0, &t3743_1_0_0, NULL, &t3743_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3744_TI;



// Metadata Definition System.IComparable`1<System.Security.Policy.StrongName>
extern Il2CppType t1175_0_0_0;
static ParameterInfo t3744_m22603_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t3744_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m22603_MI = 
{
	"CompareTo", NULL, &t3744_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t3744_m22603_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3744_MIs[] =
{
	&m22603_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3744_0_0_0;
extern Il2CppType t3744_1_0_0;
struct t3744;
extern TypeInfo t3744_TI;
extern Il2CppGenericClass t3744_GC;
TypeInfo t3744_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3744_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3744_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3744_TI, &t3744_0_0_0, &t3744_1_0_0, NULL, &t3744_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2868_TI;

extern TypeInfo t1175_TI;
extern TypeInfo t3744_TI;
extern TypeInfo t16_TI;
extern TypeInfo t285_TI;
extern TypeInfo t4_TI;
extern TypeInfo t303_TI;
extern MethodInfo m16626_MI;
extern MethodInfo m22603_MI;
extern MethodInfo m7286_MI;
extern MethodInfo m1917_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.Security.Policy.StrongName>
extern TypeInfo t2868_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16630_MI = 
{
	".ctor", (methodPointerType)&m8106_gshared, &t2868_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2868_m16631_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2868_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16631_MI = 
{
	"Compare", (methodPointerType)&m8107_gshared, &t2868_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t2868_m16631_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2868_MIs[] =
{
	&m16630_MI,
	&m16631_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m16631_MI;
extern MethodInfo m16628_MI;
extern MethodInfo m16631_MI;
static MethodInfo* t2868_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m16631_MI,
	&m16628_MI,
	&m16631_MI,
};
extern TypeInfo t3743_TI;
extern TypeInfo t716_TI;
static Il2CppInterfaceOffsetPair t2868_IOs[] = 
{
	{ &t3743_TI, 4},
	{ &t716_TI, 5},
};
extern Il2CppType t3744_0_0_0;
extern Il2CppType t1175_0_0_0;
extern TypeInfo t2867_TI;
extern TypeInfo t2867_TI;
extern TypeInfo t2868_TI;
extern MethodInfo m16630_MI;
extern TypeInfo t1175_TI;
extern MethodInfo m29574_MI;
extern MethodInfo m16626_MI;
extern TypeInfo t1175_TI;
extern TypeInfo t3744_TI;
extern MethodInfo m22603_MI;
static void* t2868_RGCTXData[12] = 
{
	(void*)&t3744_0_0_0,
	(void*)&t1175_0_0_0,
	&t2867_TI,
	&t2867_TI,
	&t2868_TI,
	&m16630_MI,
	&t1175_TI,
	&m29574_MI,
	&m16626_MI,
	&t1175_TI,
	&t3744_TI,
	&m22603_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2868_0_0_0;
extern Il2CppType t2868_1_0_0;
extern TypeInfo t2867_TI;
struct t2868;
extern TypeInfo t2868_TI;
extern Il2CppGenericClass t2868_GC;
extern TypeInfo t823_TI;
TypeInfo t2868_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2868_MIs, NULL, NULL, NULL, &t2867_TI, NULL, &t823_TI, &t2868_TI, NULL, t2868_VT, &EmptyCustomAttributesCache, &t2868_TI, &t2868_0_0_0, &t2868_1_0_0, t2868_IOs, &t2868_GC, NULL, NULL, NULL, t2868_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2868), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2862_TI;
#include "t2862MD.h"



// Metadata Definition System.Comparison`1<System.Security.Policy.StrongName>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t2862_m16632_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t2862_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m16632_MI = 
{
	".ctor", (methodPointerType)&m8173_gshared, &t2862_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t2862_m16632_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
extern Il2CppType t1175_0_0_0;
static ParameterInfo t2862_m16633_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
};
extern TypeInfo t2862_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16633_MI = 
{
	"Invoke", (methodPointerType)&m8174_gshared, &t2862_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t2862_m16633_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1175_0_0_0;
extern Il2CppType t1175_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2862_m16634_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1175_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2862_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16634_MI = 
{
	"BeginInvoke", (methodPointerType)&m8175_gshared, &t2862_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4_t4, t2862_m16634_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t2862_m16635_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t2862_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16635_MI = 
{
	"EndInvoke", (methodPointerType)&m8176_gshared, &t2862_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2862_m16635_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2862_MIs[] =
{
	&m16632_MI,
	&m16633_MI,
	&m16634_MI,
	&m16635_MI,
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
extern MethodInfo m16633_MI;
extern MethodInfo m16634_MI;
extern MethodInfo m16635_MI;
static MethodInfo* t2862_VT[] =
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
	&m16633_MI,
	&m16634_MI,
	&m16635_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t2862_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2862_0_0_0;
extern Il2CppType t2862_1_0_0;
extern TypeInfo t189_TI;
struct t2862;
extern TypeInfo t2862_TI;
extern Il2CppGenericClass t2862_GC;
TypeInfo t2862_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2862_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t2862_TI, NULL, t2862_VT, &EmptyCustomAttributesCache, &t2862_TI, &t2862_0_0_0, &t2862_1_0_0, t2862_IOs, &t2862_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2862), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3745_TI;

#include "t1176.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Principal.PrincipalPolicy>
extern MethodInfo m29575_MI;
static PropertyInfo t3745____Current_PropertyInfo = 
{
	&t3745_TI, "Current", &m29575_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3745_PIs[] =
{
	&t3745____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3745_TI;
extern Il2CppType t1176_0_0_0;
extern void* RuntimeInvoker_t1176 (MethodInfo* method, void* obj, void** args);
MethodInfo m29575_MI = 
{
	"get_Current", NULL, &t3745_TI, &t1176_0_0_0, RuntimeInvoker_t1176, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3745_MIs[] =
{
	&m29575_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3745_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3745_0_0_0;
extern Il2CppType t3745_1_0_0;
struct t3745;
extern TypeInfo t3745_TI;
extern Il2CppGenericClass t3745_GC;
TypeInfo t3745_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3745_MIs, t3745_PIs, NULL, NULL, NULL, NULL, NULL, &t3745_TI, t3745_ITIs, NULL, &EmptyCustomAttributesCache, &t3745_TI, &t3745_0_0_0, &t3745_1_0_0, NULL, &t3745_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2869.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2869_TI;
#include "t2869MD.h"

extern TypeInfo t2869_TI;
extern TypeInfo t1176_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16640_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22608_MI;
struct t14;
 int32_t m22608 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22608_MI;


extern MethodInfo m16636_MI;
 void m16636 (t2869 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16637_MI;
 t4 * m16637 (t2869 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16640(__this, &m16640_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1176_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16638_MI;
 void m16638 (t2869 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16639_MI;
 bool m16639 (t2869 * __this, MethodInfo* method){
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
extern MethodInfo m16640_MI;
 int32_t m16640 (t2869 * __this, MethodInfo* method){
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
		int32_t L_8 = m22608(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22608_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Principal.PrincipalPolicy>
extern Il2CppType t14_0_0_1;
FieldInfo t2869_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2869_TI, offsetof(t2869, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2869_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2869_TI, offsetof(t2869, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2869_FIs[] =
{
	&t2869_f0_FieldInfo,
	&t2869_f1_FieldInfo,
	NULL
};
extern MethodInfo m16637_MI;
static PropertyInfo t2869____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2869_TI, "System.Collections.IEnumerator.Current", &m16637_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16640_MI;
static PropertyInfo t2869____Current_PropertyInfo = 
{
	&t2869_TI, "Current", &m16640_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2869_PIs[] =
{
	&t2869____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2869____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2869_m16636_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2869_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16636_MI = 
{
	".ctor", (methodPointerType)&m16636, &t2869_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2869_m16636_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2869_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16637_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16637, &t2869_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2869_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16638_MI = 
{
	"Dispose", (methodPointerType)&m16638, &t2869_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2869_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16639_MI = 
{
	"MoveNext", (methodPointerType)&m16639, &t2869_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2869_TI;
extern Il2CppType t1176_0_0_0;
extern void* RuntimeInvoker_t1176 (MethodInfo* method, void* obj, void** args);
MethodInfo m16640_MI = 
{
	"get_Current", (methodPointerType)&m16640, &t2869_TI, &t1176_0_0_0, RuntimeInvoker_t1176, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2869_MIs[] =
{
	&m16636_MI,
	&m16637_MI,
	&m16638_MI,
	&m16639_MI,
	&m16640_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16637_MI;
extern MethodInfo m16639_MI;
extern MethodInfo m16638_MI;
extern MethodInfo m16640_MI;
static MethodInfo* t2869_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16637_MI,
	&m16639_MI,
	&m16638_MI,
	&m16640_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3745_TI;
static TypeInfo* t2869_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3745_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3745_TI;
static Il2CppInterfaceOffsetPair t2869_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3745_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2869_0_0_0;
extern Il2CppType t2869_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2869_TI;
extern Il2CppGenericClass t2869_GC;
extern TypeInfo t14_TI;
TypeInfo t2869_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2869_MIs, t2869_PIs, t2869_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2869_TI, t2869_ITIs, t2869_VT, &EmptyCustomAttributesCache, &t2869_TI, &t2869_0_0_0, &t2869_1_0_0, t2869_IOs, &t2869_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2869)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5066_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>
extern MethodInfo m29576_MI;
static PropertyInfo t5066____Count_PropertyInfo = 
{
	&t5066_TI, "Count", &m29576_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29577_MI;
static PropertyInfo t5066____IsReadOnly_PropertyInfo = 
{
	&t5066_TI, "IsReadOnly", &m29577_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5066_PIs[] =
{
	&t5066____Count_PropertyInfo,
	&t5066____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5066_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29576_MI = 
{
	"get_Count", NULL, &t5066_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5066_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29577_MI = 
{
	"get_IsReadOnly", NULL, &t5066_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1176_0_0_0;
static ParameterInfo t5066_m29578_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1176_0_0_0},
};
extern TypeInfo t5066_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29578_MI = 
{
	"Add", NULL, &t5066_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5066_m29578_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5066_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29579_MI = 
{
	"Clear", NULL, &t5066_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1176_0_0_0;
static ParameterInfo t5066_m29580_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1176_0_0_0},
};
extern TypeInfo t5066_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29580_MI = 
{
	"Contains", NULL, &t5066_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5066_m29580_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3085_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5066_m29581_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3085_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5066_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29581_MI = 
{
	"CopyTo", NULL, &t5066_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5066_m29581_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1176_0_0_0;
static ParameterInfo t5066_m29582_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1176_0_0_0},
};
extern TypeInfo t5066_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29582_MI = 
{
	"Remove", NULL, &t5066_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5066_m29582_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5066_MIs[] =
{
	&m29576_MI,
	&m29577_MI,
	&m29578_MI,
	&m29579_MI,
	&m29580_MI,
	&m29581_MI,
	&m29582_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5068_TI;
static TypeInfo* t5066_ITIs[] = 
{
	&t591_TI,
	&t5068_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5066_0_0_0;
extern Il2CppType t5066_1_0_0;
struct t5066;
extern TypeInfo t5066_TI;
extern Il2CppGenericClass t5066_GC;
TypeInfo t5066_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5066_MIs, t5066_PIs, NULL, NULL, NULL, NULL, NULL, &t5066_TI, t5066_ITIs, NULL, &EmptyCustomAttributesCache, &t5066_TI, &t5066_0_0_0, &t5066_1_0_0, NULL, &t5066_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5068_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Principal.PrincipalPolicy>
extern TypeInfo t5068_TI;
extern Il2CppType t3745_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29583_MI = 
{
	"GetEnumerator", NULL, &t5068_TI, &t3745_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5068_MIs[] =
{
	&m29583_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5068_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5068_0_0_0;
extern Il2CppType t5068_1_0_0;
struct t5068;
extern TypeInfo t5068_TI;
extern Il2CppGenericClass t5068_GC;
TypeInfo t5068_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5068_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5068_TI, t5068_ITIs, NULL, &EmptyCustomAttributesCache, &t5068_TI, &t5068_0_0_0, &t5068_1_0_0, NULL, &t5068_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5067_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Principal.PrincipalPolicy>
extern MethodInfo m29584_MI;
extern MethodInfo m29585_MI;
static PropertyInfo t5067____Item_PropertyInfo = 
{
	&t5067_TI, "Item", &m29584_MI, &m29585_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5067_PIs[] =
{
	&t5067____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1176_0_0_0;
static ParameterInfo t5067_m29586_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1176_0_0_0},
};
extern TypeInfo t5067_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29586_MI = 
{
	"IndexOf", NULL, &t5067_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t5067_m29586_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1176_0_0_0;
static ParameterInfo t5067_m29587_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1176_0_0_0},
};
extern TypeInfo t5067_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29587_MI = 
{
	"Insert", NULL, &t5067_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5067_m29587_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5067_m29588_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5067_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29588_MI = 
{
	"RemoveAt", NULL, &t5067_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5067_m29588_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5067_m29584_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5067_TI;
extern Il2CppType t1176_0_0_0;
extern void* RuntimeInvoker_t1176_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29584_MI = 
{
	"get_Item", NULL, &t5067_TI, &t1176_0_0_0, RuntimeInvoker_t1176_t16, t5067_m29584_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1176_0_0_0;
static ParameterInfo t5067_m29585_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1176_0_0_0},
};
extern TypeInfo t5067_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29585_MI = 
{
	"set_Item", NULL, &t5067_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5067_m29585_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5067_MIs[] =
{
	&m29586_MI,
	&m29587_MI,
	&m29588_MI,
	&m29584_MI,
	&m29585_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5066_TI;
extern TypeInfo t5068_TI;
static TypeInfo* t5067_ITIs[] = 
{
	&t591_TI,
	&t5066_TI,
	&t5068_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5067_0_0_0;
extern Il2CppType t5067_1_0_0;
struct t5067;
extern TypeInfo t5067_TI;
extern Il2CppGenericClass t5067_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5067_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5067_MIs, t5067_PIs, NULL, NULL, NULL, NULL, NULL, &t5067_TI, t5067_ITIs, NULL, &t1400__CustomAttributeCache, &t5067_TI, &t5067_0_0_0, &t5067_1_0_0, NULL, &t5067_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3746_TI;

#include "t597.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.SecuritySafeCriticalAttribute>
extern MethodInfo m29589_MI;
static PropertyInfo t3746____Current_PropertyInfo = 
{
	&t3746_TI, "Current", &m29589_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3746_PIs[] =
{
	&t3746____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3746_TI;
extern Il2CppType t597_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29589_MI = 
{
	"get_Current", NULL, &t3746_TI, &t597_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3746_MIs[] =
{
	&m29589_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3746_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3746_0_0_0;
extern Il2CppType t3746_1_0_0;
struct t3746;
extern TypeInfo t3746_TI;
extern Il2CppGenericClass t3746_GC;
TypeInfo t3746_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3746_MIs, t3746_PIs, NULL, NULL, NULL, NULL, NULL, &t3746_TI, t3746_ITIs, NULL, &EmptyCustomAttributesCache, &t3746_TI, &t3746_0_0_0, &t3746_1_0_0, NULL, &t3746_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2870.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2870_TI;
#include "t2870MD.h"

extern TypeInfo t2870_TI;
extern TypeInfo t597_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16645_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22619_MI;
struct t14;
#define m22619(__this, p0, method) (t597 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22619_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2870_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2870_TI, offsetof(t2870, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2870_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2870_TI, offsetof(t2870, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2870_FIs[] =
{
	&t2870_f0_FieldInfo,
	&t2870_f1_FieldInfo,
	NULL
};
extern MethodInfo m16642_MI;
static PropertyInfo t2870____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2870_TI, "System.Collections.IEnumerator.Current", &m16642_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16645_MI;
static PropertyInfo t2870____Current_PropertyInfo = 
{
	&t2870_TI, "Current", &m16645_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2870_PIs[] =
{
	&t2870____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2870____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2870_m16641_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2870_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16641_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2870_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2870_m16641_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2870_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16642_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2870_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2870_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16643_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2870_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2870_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16644_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2870_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2870_TI;
extern Il2CppType t597_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16645_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2870_TI, &t597_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2870_MIs[] =
{
	&m16641_MI,
	&m16642_MI,
	&m16643_MI,
	&m16644_MI,
	&m16645_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16642_MI;
extern MethodInfo m16644_MI;
extern MethodInfo m16643_MI;
extern MethodInfo m16645_MI;
static MethodInfo* t2870_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16642_MI,
	&m16644_MI,
	&m16643_MI,
	&m16645_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3746_TI;
static TypeInfo* t2870_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3746_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3746_TI;
static Il2CppInterfaceOffsetPair t2870_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3746_TI, 7},
};
extern MethodInfo m16645_MI;
extern TypeInfo t597_TI;
extern MethodInfo m22619_MI;
static void* t2870_RGCTXData[3] = 
{
	&m16645_MI,
	&t597_TI,
	&m22619_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2870_0_0_0;
extern Il2CppType t2870_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2870_TI;
extern Il2CppGenericClass t2870_GC;
extern TypeInfo t14_TI;
TypeInfo t2870_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2870_MIs, t2870_PIs, t2870_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2870_TI, t2870_ITIs, t2870_VT, &EmptyCustomAttributesCache, &t2870_TI, &t2870_0_0_0, &t2870_1_0_0, t2870_IOs, &t2870_GC, NULL, NULL, NULL, t2870_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2870)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5069_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>
extern MethodInfo m29590_MI;
static PropertyInfo t5069____Count_PropertyInfo = 
{
	&t5069_TI, "Count", &m29590_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29591_MI;
static PropertyInfo t5069____IsReadOnly_PropertyInfo = 
{
	&t5069_TI, "IsReadOnly", &m29591_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5069_PIs[] =
{
	&t5069____Count_PropertyInfo,
	&t5069____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5069_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29590_MI = 
{
	"get_Count", NULL, &t5069_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5069_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29591_MI = 
{
	"get_IsReadOnly", NULL, &t5069_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t597_0_0_0;
static ParameterInfo t5069_m29592_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t597_0_0_0},
};
extern TypeInfo t5069_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29592_MI = 
{
	"Add", NULL, &t5069_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t5069_m29592_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5069_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29593_MI = 
{
	"Clear", NULL, &t5069_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t597_0_0_0;
static ParameterInfo t5069_m29594_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t597_0_0_0},
};
extern TypeInfo t5069_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29594_MI = 
{
	"Contains", NULL, &t5069_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5069_m29594_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3086_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5069_m29595_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3086_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5069_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29595_MI = 
{
	"CopyTo", NULL, &t5069_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5069_m29595_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t597_0_0_0;
static ParameterInfo t5069_m29596_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t597_0_0_0},
};
extern TypeInfo t5069_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29596_MI = 
{
	"Remove", NULL, &t5069_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5069_m29596_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5069_MIs[] =
{
	&m29590_MI,
	&m29591_MI,
	&m29592_MI,
	&m29593_MI,
	&m29594_MI,
	&m29595_MI,
	&m29596_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5071_TI;
static TypeInfo* t5069_ITIs[] = 
{
	&t591_TI,
	&t5071_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5069_0_0_0;
extern Il2CppType t5069_1_0_0;
struct t5069;
extern TypeInfo t5069_TI;
extern Il2CppGenericClass t5069_GC;
TypeInfo t5069_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5069_MIs, t5069_PIs, NULL, NULL, NULL, NULL, NULL, &t5069_TI, t5069_ITIs, NULL, &EmptyCustomAttributesCache, &t5069_TI, &t5069_0_0_0, &t5069_1_0_0, NULL, &t5069_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5071_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.SecuritySafeCriticalAttribute>
extern TypeInfo t5071_TI;
extern Il2CppType t3746_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29597_MI = 
{
	"GetEnumerator", NULL, &t5071_TI, &t3746_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5071_MIs[] =
{
	&m29597_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5071_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5071_0_0_0;
extern Il2CppType t5071_1_0_0;
struct t5071;
extern TypeInfo t5071_TI;
extern Il2CppGenericClass t5071_GC;
TypeInfo t5071_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5071_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5071_TI, t5071_ITIs, NULL, &EmptyCustomAttributesCache, &t5071_TI, &t5071_0_0_0, &t5071_1_0_0, NULL, &t5071_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5070_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>
extern MethodInfo m29598_MI;
extern MethodInfo m29599_MI;
static PropertyInfo t5070____Item_PropertyInfo = 
{
	&t5070_TI, "Item", &m29598_MI, &m29599_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5070_PIs[] =
{
	&t5070____Item_PropertyInfo,
	NULL
};
extern Il2CppType t597_0_0_0;
static ParameterInfo t5070_m29600_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t597_0_0_0},
};
extern TypeInfo t5070_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29600_MI = 
{
	"IndexOf", NULL, &t5070_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5070_m29600_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t597_0_0_0;
static ParameterInfo t5070_m29601_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t597_0_0_0},
};
extern TypeInfo t5070_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29601_MI = 
{
	"Insert", NULL, &t5070_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5070_m29601_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5070_m29602_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5070_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29602_MI = 
{
	"RemoveAt", NULL, &t5070_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5070_m29602_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5070_m29598_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5070_TI;
extern Il2CppType t597_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29598_MI = 
{
	"get_Item", NULL, &t5070_TI, &t597_0_0_0, RuntimeInvoker_t4_t16, t5070_m29598_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t597_0_0_0;
static ParameterInfo t5070_m29599_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t597_0_0_0},
};
extern TypeInfo t5070_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29599_MI = 
{
	"set_Item", NULL, &t5070_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5070_m29599_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5070_MIs[] =
{
	&m29600_MI,
	&m29601_MI,
	&m29602_MI,
	&m29598_MI,
	&m29599_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5069_TI;
extern TypeInfo t5071_TI;
static TypeInfo* t5070_ITIs[] = 
{
	&t591_TI,
	&t5069_TI,
	&t5071_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5070_0_0_0;
extern Il2CppType t5070_1_0_0;
struct t5070;
extern TypeInfo t5070_TI;
extern Il2CppGenericClass t5070_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5070_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5070_MIs, t5070_PIs, NULL, NULL, NULL, NULL, NULL, &t5070_TI, t5070_ITIs, NULL, &t1400__CustomAttributeCache, &t5070_TI, &t5070_0_0_0, &t5070_1_0_0, NULL, &t5070_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3747_TI;

#include "t1180.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern MethodInfo m29603_MI;
static PropertyInfo t3747____Current_PropertyInfo = 
{
	&t3747_TI, "Current", &m29603_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3747_PIs[] =
{
	&t3747____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3747_TI;
extern Il2CppType t1180_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29603_MI = 
{
	"get_Current", NULL, &t3747_TI, &t1180_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3747_MIs[] =
{
	&m29603_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3747_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3747_0_0_0;
extern Il2CppType t3747_1_0_0;
struct t3747;
extern TypeInfo t3747_TI;
extern Il2CppGenericClass t3747_GC;
TypeInfo t3747_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3747_MIs, t3747_PIs, NULL, NULL, NULL, NULL, NULL, &t3747_TI, t3747_ITIs, NULL, &EmptyCustomAttributesCache, &t3747_TI, &t3747_0_0_0, &t3747_1_0_0, NULL, &t3747_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2871.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2871_TI;
#include "t2871MD.h"

extern TypeInfo t2871_TI;
extern TypeInfo t1180_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16650_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22630_MI;
struct t14;
#define m22630(__this, p0, method) (t1180 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22630_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2871_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2871_TI, offsetof(t2871, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2871_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2871_TI, offsetof(t2871, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2871_FIs[] =
{
	&t2871_f0_FieldInfo,
	&t2871_f1_FieldInfo,
	NULL
};
extern MethodInfo m16647_MI;
static PropertyInfo t2871____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2871_TI, "System.Collections.IEnumerator.Current", &m16647_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16650_MI;
static PropertyInfo t2871____Current_PropertyInfo = 
{
	&t2871_TI, "Current", &m16650_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2871_PIs[] =
{
	&t2871____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2871____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2871_m16646_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2871_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16646_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2871_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2871_m16646_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2871_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16647_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2871_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2871_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16648_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2871_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2871_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16649_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2871_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2871_TI;
extern Il2CppType t1180_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16650_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2871_TI, &t1180_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2871_MIs[] =
{
	&m16646_MI,
	&m16647_MI,
	&m16648_MI,
	&m16649_MI,
	&m16650_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16647_MI;
extern MethodInfo m16649_MI;
extern MethodInfo m16648_MI;
extern MethodInfo m16650_MI;
static MethodInfo* t2871_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16647_MI,
	&m16649_MI,
	&m16648_MI,
	&m16650_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3747_TI;
static TypeInfo* t2871_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3747_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3747_TI;
static Il2CppInterfaceOffsetPair t2871_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3747_TI, 7},
};
extern MethodInfo m16650_MI;
extern TypeInfo t1180_TI;
extern MethodInfo m22630_MI;
static void* t2871_RGCTXData[3] = 
{
	&m16650_MI,
	&t1180_TI,
	&m22630_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2871_0_0_0;
extern Il2CppType t2871_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2871_TI;
extern Il2CppGenericClass t2871_GC;
extern TypeInfo t14_TI;
TypeInfo t2871_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2871_MIs, t2871_PIs, t2871_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2871_TI, t2871_ITIs, t2871_VT, &EmptyCustomAttributesCache, &t2871_TI, &t2871_0_0_0, &t2871_1_0_0, t2871_IOs, &t2871_GC, NULL, NULL, NULL, t2871_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2871)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5072_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern MethodInfo m29604_MI;
static PropertyInfo t5072____Count_PropertyInfo = 
{
	&t5072_TI, "Count", &m29604_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29605_MI;
static PropertyInfo t5072____IsReadOnly_PropertyInfo = 
{
	&t5072_TI, "IsReadOnly", &m29605_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5072_PIs[] =
{
	&t5072____Count_PropertyInfo,
	&t5072____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5072_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29604_MI = 
{
	"get_Count", NULL, &t5072_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5072_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29605_MI = 
{
	"get_IsReadOnly", NULL, &t5072_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1180_0_0_0;
static ParameterInfo t5072_m29606_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1180_0_0_0},
};
extern TypeInfo t5072_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29606_MI = 
{
	"Add", NULL, &t5072_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t5072_m29606_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5072_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29607_MI = 
{
	"Clear", NULL, &t5072_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1180_0_0_0;
static ParameterInfo t5072_m29608_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1180_0_0_0},
};
extern TypeInfo t5072_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29608_MI = 
{
	"Contains", NULL, &t5072_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5072_m29608_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3087_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5072_m29609_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3087_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5072_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29609_MI = 
{
	"CopyTo", NULL, &t5072_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5072_m29609_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1180_0_0_0;
static ParameterInfo t5072_m29610_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1180_0_0_0},
};
extern TypeInfo t5072_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29610_MI = 
{
	"Remove", NULL, &t5072_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5072_m29610_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5072_MIs[] =
{
	&m29604_MI,
	&m29605_MI,
	&m29606_MI,
	&m29607_MI,
	&m29608_MI,
	&m29609_MI,
	&m29610_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5074_TI;
static TypeInfo* t5072_ITIs[] = 
{
	&t591_TI,
	&t5074_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5072_0_0_0;
extern Il2CppType t5072_1_0_0;
struct t5072;
extern TypeInfo t5072_TI;
extern Il2CppGenericClass t5072_GC;
TypeInfo t5072_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5072_MIs, t5072_PIs, NULL, NULL, NULL, NULL, NULL, &t5072_TI, t5072_ITIs, NULL, &EmptyCustomAttributesCache, &t5072_TI, &t5072_0_0_0, &t5072_1_0_0, NULL, &t5072_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5074_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern TypeInfo t5074_TI;
extern Il2CppType t3747_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29611_MI = 
{
	"GetEnumerator", NULL, &t5074_TI, &t3747_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5074_MIs[] =
{
	&m29611_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5074_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5074_0_0_0;
extern Il2CppType t5074_1_0_0;
struct t5074;
extern TypeInfo t5074_TI;
extern Il2CppGenericClass t5074_GC;
TypeInfo t5074_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5074_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5074_TI, t5074_ITIs, NULL, &EmptyCustomAttributesCache, &t5074_TI, &t5074_0_0_0, &t5074_1_0_0, NULL, &t5074_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5073_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern MethodInfo m29612_MI;
extern MethodInfo m29613_MI;
static PropertyInfo t5073____Item_PropertyInfo = 
{
	&t5073_TI, "Item", &m29612_MI, &m29613_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5073_PIs[] =
{
	&t5073____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1180_0_0_0;
static ParameterInfo t5073_m29614_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1180_0_0_0},
};
extern TypeInfo t5073_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29614_MI = 
{
	"IndexOf", NULL, &t5073_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5073_m29614_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1180_0_0_0;
static ParameterInfo t5073_m29615_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1180_0_0_0},
};
extern TypeInfo t5073_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29615_MI = 
{
	"Insert", NULL, &t5073_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5073_m29615_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5073_m29616_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5073_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29616_MI = 
{
	"RemoveAt", NULL, &t5073_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5073_m29616_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5073_m29612_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5073_TI;
extern Il2CppType t1180_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29612_MI = 
{
	"get_Item", NULL, &t5073_TI, &t1180_0_0_0, RuntimeInvoker_t4_t16, t5073_m29612_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1180_0_0_0;
static ParameterInfo t5073_m29613_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1180_0_0_0},
};
extern TypeInfo t5073_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29613_MI = 
{
	"set_Item", NULL, &t5073_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5073_m29613_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5073_MIs[] =
{
	&m29614_MI,
	&m29615_MI,
	&m29616_MI,
	&m29612_MI,
	&m29613_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5072_TI;
extern TypeInfo t5074_TI;
static TypeInfo* t5073_ITIs[] = 
{
	&t591_TI,
	&t5072_TI,
	&t5074_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5073_0_0_0;
extern Il2CppType t5073_1_0_0;
struct t5073;
extern TypeInfo t5073_TI;
extern Il2CppGenericClass t5073_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5073_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5073_MIs, t5073_PIs, NULL, NULL, NULL, NULL, NULL, &t5073_TI, t5073_ITIs, NULL, &t1400__CustomAttributeCache, &t5073_TI, &t5073_0_0_0, &t5073_1_0_0, NULL, &t5073_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3748_TI;

#include "t1181.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.UnverifiableCodeAttribute>
extern MethodInfo m29617_MI;
static PropertyInfo t3748____Current_PropertyInfo = 
{
	&t3748_TI, "Current", &m29617_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3748_PIs[] =
{
	&t3748____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3748_TI;
extern Il2CppType t1181_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29617_MI = 
{
	"get_Current", NULL, &t3748_TI, &t1181_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3748_MIs[] =
{
	&m29617_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3748_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3748_0_0_0;
extern Il2CppType t3748_1_0_0;
struct t3748;
extern TypeInfo t3748_TI;
extern Il2CppGenericClass t3748_GC;
TypeInfo t3748_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3748_MIs, t3748_PIs, NULL, NULL, NULL, NULL, NULL, &t3748_TI, t3748_ITIs, NULL, &EmptyCustomAttributesCache, &t3748_TI, &t3748_0_0_0, &t3748_1_0_0, NULL, &t3748_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2872.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2872_TI;
#include "t2872MD.h"

extern TypeInfo t2872_TI;
extern TypeInfo t1181_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16655_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22641_MI;
struct t14;
#define m22641(__this, p0, method) (t1181 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m22641_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2872_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2872_TI, offsetof(t2872, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2872_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2872_TI, offsetof(t2872, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2872_FIs[] =
{
	&t2872_f0_FieldInfo,
	&t2872_f1_FieldInfo,
	NULL
};
extern MethodInfo m16652_MI;
static PropertyInfo t2872____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2872_TI, "System.Collections.IEnumerator.Current", &m16652_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16655_MI;
static PropertyInfo t2872____Current_PropertyInfo = 
{
	&t2872_TI, "Current", &m16655_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2872_PIs[] =
{
	&t2872____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2872____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2872_m16651_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16651_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2872_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2872_m16651_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2872_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16652_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2872_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16653_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2872_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2872_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16654_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2872_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2872_TI;
extern Il2CppType t1181_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16655_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2872_TI, &t1181_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2872_MIs[] =
{
	&m16651_MI,
	&m16652_MI,
	&m16653_MI,
	&m16654_MI,
	&m16655_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16652_MI;
extern MethodInfo m16654_MI;
extern MethodInfo m16653_MI;
extern MethodInfo m16655_MI;
static MethodInfo* t2872_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16652_MI,
	&m16654_MI,
	&m16653_MI,
	&m16655_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3748_TI;
static TypeInfo* t2872_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3748_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3748_TI;
static Il2CppInterfaceOffsetPair t2872_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3748_TI, 7},
};
extern MethodInfo m16655_MI;
extern TypeInfo t1181_TI;
extern MethodInfo m22641_MI;
static void* t2872_RGCTXData[3] = 
{
	&m16655_MI,
	&t1181_TI,
	&m22641_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2872_0_0_0;
extern Il2CppType t2872_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2872_TI;
extern Il2CppGenericClass t2872_GC;
extern TypeInfo t14_TI;
TypeInfo t2872_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2872_MIs, t2872_PIs, t2872_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2872_TI, t2872_ITIs, t2872_VT, &EmptyCustomAttributesCache, &t2872_TI, &t2872_0_0_0, &t2872_1_0_0, t2872_IOs, &t2872_GC, NULL, NULL, NULL, t2872_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2872)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5075_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>
extern MethodInfo m29618_MI;
static PropertyInfo t5075____Count_PropertyInfo = 
{
	&t5075_TI, "Count", &m29618_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29619_MI;
static PropertyInfo t5075____IsReadOnly_PropertyInfo = 
{
	&t5075_TI, "IsReadOnly", &m29619_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5075_PIs[] =
{
	&t5075____Count_PropertyInfo,
	&t5075____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5075_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29618_MI = 
{
	"get_Count", NULL, &t5075_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5075_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29619_MI = 
{
	"get_IsReadOnly", NULL, &t5075_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1181_0_0_0;
static ParameterInfo t5075_m29620_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1181_0_0_0},
};
extern TypeInfo t5075_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29620_MI = 
{
	"Add", NULL, &t5075_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t5075_m29620_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5075_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29621_MI = 
{
	"Clear", NULL, &t5075_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1181_0_0_0;
static ParameterInfo t5075_m29622_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1181_0_0_0},
};
extern TypeInfo t5075_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29622_MI = 
{
	"Contains", NULL, &t5075_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5075_m29622_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3088_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5075_m29623_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3088_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5075_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29623_MI = 
{
	"CopyTo", NULL, &t5075_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5075_m29623_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1181_0_0_0;
static ParameterInfo t5075_m29624_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1181_0_0_0},
};
extern TypeInfo t5075_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29624_MI = 
{
	"Remove", NULL, &t5075_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5075_m29624_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5075_MIs[] =
{
	&m29618_MI,
	&m29619_MI,
	&m29620_MI,
	&m29621_MI,
	&m29622_MI,
	&m29623_MI,
	&m29624_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5077_TI;
static TypeInfo* t5075_ITIs[] = 
{
	&t591_TI,
	&t5077_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5075_0_0_0;
extern Il2CppType t5075_1_0_0;
struct t5075;
extern TypeInfo t5075_TI;
extern Il2CppGenericClass t5075_GC;
TypeInfo t5075_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5075_MIs, t5075_PIs, NULL, NULL, NULL, NULL, NULL, &t5075_TI, t5075_ITIs, NULL, &EmptyCustomAttributesCache, &t5075_TI, &t5075_0_0_0, &t5075_1_0_0, NULL, &t5075_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5077_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.UnverifiableCodeAttribute>
extern TypeInfo t5077_TI;
extern Il2CppType t3748_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29625_MI = 
{
	"GetEnumerator", NULL, &t5077_TI, &t3748_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5077_MIs[] =
{
	&m29625_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5077_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5077_0_0_0;
extern Il2CppType t5077_1_0_0;
struct t5077;
extern TypeInfo t5077_TI;
extern Il2CppGenericClass t5077_GC;
TypeInfo t5077_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5077_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5077_TI, t5077_ITIs, NULL, &EmptyCustomAttributesCache, &t5077_TI, &t5077_0_0_0, &t5077_1_0_0, NULL, &t5077_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5076_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>
extern MethodInfo m29626_MI;
extern MethodInfo m29627_MI;
static PropertyInfo t5076____Item_PropertyInfo = 
{
	&t5076_TI, "Item", &m29626_MI, &m29627_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5076_PIs[] =
{
	&t5076____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1181_0_0_0;
static ParameterInfo t5076_m29628_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1181_0_0_0},
};
extern TypeInfo t5076_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29628_MI = 
{
	"IndexOf", NULL, &t5076_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5076_m29628_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1181_0_0_0;
static ParameterInfo t5076_m29629_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1181_0_0_0},
};
extern TypeInfo t5076_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29629_MI = 
{
	"Insert", NULL, &t5076_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5076_m29629_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5076_m29630_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5076_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29630_MI = 
{
	"RemoveAt", NULL, &t5076_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5076_m29630_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5076_m29626_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5076_TI;
extern Il2CppType t1181_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29626_MI = 
{
	"get_Item", NULL, &t5076_TI, &t1181_0_0_0, RuntimeInvoker_t4_t16, t5076_m29626_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1181_0_0_0;
static ParameterInfo t5076_m29627_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1181_0_0_0},
};
extern TypeInfo t5076_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29627_MI = 
{
	"set_Item", NULL, &t5076_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t5076_m29627_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5076_MIs[] =
{
	&m29628_MI,
	&m29629_MI,
	&m29630_MI,
	&m29626_MI,
	&m29627_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5075_TI;
extern TypeInfo t5077_TI;
static TypeInfo* t5076_ITIs[] = 
{
	&t591_TI,
	&t5075_TI,
	&t5077_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5076_0_0_0;
extern Il2CppType t5076_1_0_0;
struct t5076;
extern TypeInfo t5076_TI;
extern Il2CppGenericClass t5076_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5076_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5076_MIs, t5076_PIs, NULL, NULL, NULL, NULL, NULL, &t5076_TI, t5076_ITIs, NULL, &t1400__CustomAttributeCache, &t5076_TI, &t5076_0_0_0, &t5076_1_0_0, NULL, &t5076_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3749_TI;

#include "t1208.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Threading.EventResetMode>
extern MethodInfo m29631_MI;
static PropertyInfo t3749____Current_PropertyInfo = 
{
	&t3749_TI, "Current", &m29631_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3749_PIs[] =
{
	&t3749____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3749_TI;
extern Il2CppType t1208_0_0_0;
extern void* RuntimeInvoker_t1208 (MethodInfo* method, void* obj, void** args);
MethodInfo m29631_MI = 
{
	"get_Current", NULL, &t3749_TI, &t1208_0_0_0, RuntimeInvoker_t1208, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3749_MIs[] =
{
	&m29631_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3749_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3749_0_0_0;
extern Il2CppType t3749_1_0_0;
struct t3749;
extern TypeInfo t3749_TI;
extern Il2CppGenericClass t3749_GC;
TypeInfo t3749_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3749_MIs, t3749_PIs, NULL, NULL, NULL, NULL, NULL, &t3749_TI, t3749_ITIs, NULL, &EmptyCustomAttributesCache, &t3749_TI, &t3749_0_0_0, &t3749_1_0_0, NULL, &t3749_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2873.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2873_TI;
#include "t2873MD.h"

extern TypeInfo t2873_TI;
extern TypeInfo t1208_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16660_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22652_MI;
struct t14;
 int32_t m22652 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22652_MI;


extern MethodInfo m16656_MI;
 void m16656 (t2873 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16657_MI;
 t4 * m16657 (t2873 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16660(__this, &m16660_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1208_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16658_MI;
 void m16658 (t2873 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16659_MI;
 bool m16659 (t2873 * __this, MethodInfo* method){
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
extern MethodInfo m16660_MI;
 int32_t m16660 (t2873 * __this, MethodInfo* method){
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
		int32_t L_8 = m22652(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22652_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Threading.EventResetMode>
extern Il2CppType t14_0_0_1;
FieldInfo t2873_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2873_TI, offsetof(t2873, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2873_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2873_TI, offsetof(t2873, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2873_FIs[] =
{
	&t2873_f0_FieldInfo,
	&t2873_f1_FieldInfo,
	NULL
};
extern MethodInfo m16657_MI;
static PropertyInfo t2873____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2873_TI, "System.Collections.IEnumerator.Current", &m16657_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16660_MI;
static PropertyInfo t2873____Current_PropertyInfo = 
{
	&t2873_TI, "Current", &m16660_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2873_PIs[] =
{
	&t2873____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2873____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2873_m16656_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2873_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16656_MI = 
{
	".ctor", (methodPointerType)&m16656, &t2873_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2873_m16656_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2873_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16657_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16657, &t2873_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2873_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16658_MI = 
{
	"Dispose", (methodPointerType)&m16658, &t2873_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2873_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16659_MI = 
{
	"MoveNext", (methodPointerType)&m16659, &t2873_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2873_TI;
extern Il2CppType t1208_0_0_0;
extern void* RuntimeInvoker_t1208 (MethodInfo* method, void* obj, void** args);
MethodInfo m16660_MI = 
{
	"get_Current", (methodPointerType)&m16660, &t2873_TI, &t1208_0_0_0, RuntimeInvoker_t1208, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2873_MIs[] =
{
	&m16656_MI,
	&m16657_MI,
	&m16658_MI,
	&m16659_MI,
	&m16660_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16657_MI;
extern MethodInfo m16659_MI;
extern MethodInfo m16658_MI;
extern MethodInfo m16660_MI;
static MethodInfo* t2873_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16657_MI,
	&m16659_MI,
	&m16658_MI,
	&m16660_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3749_TI;
static TypeInfo* t2873_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3749_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3749_TI;
static Il2CppInterfaceOffsetPair t2873_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3749_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2873_0_0_0;
extern Il2CppType t2873_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2873_TI;
extern Il2CppGenericClass t2873_GC;
extern TypeInfo t14_TI;
TypeInfo t2873_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2873_MIs, t2873_PIs, t2873_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2873_TI, t2873_ITIs, t2873_VT, &EmptyCustomAttributesCache, &t2873_TI, &t2873_0_0_0, &t2873_1_0_0, t2873_IOs, &t2873_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2873)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5078_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>
extern MethodInfo m29632_MI;
static PropertyInfo t5078____Count_PropertyInfo = 
{
	&t5078_TI, "Count", &m29632_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29633_MI;
static PropertyInfo t5078____IsReadOnly_PropertyInfo = 
{
	&t5078_TI, "IsReadOnly", &m29633_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5078_PIs[] =
{
	&t5078____Count_PropertyInfo,
	&t5078____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5078_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29632_MI = 
{
	"get_Count", NULL, &t5078_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5078_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29633_MI = 
{
	"get_IsReadOnly", NULL, &t5078_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1208_0_0_0;
static ParameterInfo t5078_m29634_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1208_0_0_0},
};
extern TypeInfo t5078_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29634_MI = 
{
	"Add", NULL, &t5078_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5078_m29634_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5078_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29635_MI = 
{
	"Clear", NULL, &t5078_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1208_0_0_0;
static ParameterInfo t5078_m29636_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1208_0_0_0},
};
extern TypeInfo t5078_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29636_MI = 
{
	"Contains", NULL, &t5078_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5078_m29636_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3089_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5078_m29637_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3089_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5078_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29637_MI = 
{
	"CopyTo", NULL, &t5078_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5078_m29637_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1208_0_0_0;
static ParameterInfo t5078_m29638_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1208_0_0_0},
};
extern TypeInfo t5078_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29638_MI = 
{
	"Remove", NULL, &t5078_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5078_m29638_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5078_MIs[] =
{
	&m29632_MI,
	&m29633_MI,
	&m29634_MI,
	&m29635_MI,
	&m29636_MI,
	&m29637_MI,
	&m29638_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5080_TI;
static TypeInfo* t5078_ITIs[] = 
{
	&t591_TI,
	&t5080_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5078_0_0_0;
extern Il2CppType t5078_1_0_0;
struct t5078;
extern TypeInfo t5078_TI;
extern Il2CppGenericClass t5078_GC;
TypeInfo t5078_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5078_MIs, t5078_PIs, NULL, NULL, NULL, NULL, NULL, &t5078_TI, t5078_ITIs, NULL, &EmptyCustomAttributesCache, &t5078_TI, &t5078_0_0_0, &t5078_1_0_0, NULL, &t5078_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5080_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Threading.EventResetMode>
extern TypeInfo t5080_TI;
extern Il2CppType t3749_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29639_MI = 
{
	"GetEnumerator", NULL, &t5080_TI, &t3749_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5080_MIs[] =
{
	&m29639_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5080_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5080_0_0_0;
extern Il2CppType t5080_1_0_0;
struct t5080;
extern TypeInfo t5080_TI;
extern Il2CppGenericClass t5080_GC;
TypeInfo t5080_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5080_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5080_TI, t5080_ITIs, NULL, &EmptyCustomAttributesCache, &t5080_TI, &t5080_0_0_0, &t5080_1_0_0, NULL, &t5080_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5079_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Threading.EventResetMode>
extern MethodInfo m29640_MI;
extern MethodInfo m29641_MI;
static PropertyInfo t5079____Item_PropertyInfo = 
{
	&t5079_TI, "Item", &m29640_MI, &m29641_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5079_PIs[] =
{
	&t5079____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1208_0_0_0;
static ParameterInfo t5079_m29642_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1208_0_0_0},
};
extern TypeInfo t5079_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29642_MI = 
{
	"IndexOf", NULL, &t5079_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t5079_m29642_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1208_0_0_0;
static ParameterInfo t5079_m29643_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1208_0_0_0},
};
extern TypeInfo t5079_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29643_MI = 
{
	"Insert", NULL, &t5079_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5079_m29643_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5079_m29644_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5079_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29644_MI = 
{
	"RemoveAt", NULL, &t5079_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5079_m29644_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5079_m29640_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5079_TI;
extern Il2CppType t1208_0_0_0;
extern void* RuntimeInvoker_t1208_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29640_MI = 
{
	"get_Item", NULL, &t5079_TI, &t1208_0_0_0, RuntimeInvoker_t1208_t16, t5079_m29640_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1208_0_0_0;
static ParameterInfo t5079_m29641_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1208_0_0_0},
};
extern TypeInfo t5079_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29641_MI = 
{
	"set_Item", NULL, &t5079_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5079_m29641_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5079_MIs[] =
{
	&m29642_MI,
	&m29643_MI,
	&m29644_MI,
	&m29640_MI,
	&m29641_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5078_TI;
extern TypeInfo t5080_TI;
static TypeInfo* t5079_ITIs[] = 
{
	&t591_TI,
	&t5078_TI,
	&t5080_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5079_0_0_0;
extern Il2CppType t5079_1_0_0;
struct t5079;
extern TypeInfo t5079_TI;
extern Il2CppGenericClass t5079_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5079_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5079_MIs, t5079_PIs, NULL, NULL, NULL, NULL, NULL, &t5079_TI, t5079_ITIs, NULL, &t1400__CustomAttributeCache, &t5079_TI, &t5079_0_0_0, &t5079_1_0_0, NULL, &t5079_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3750_TI;

#include "t1216.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Threading.ThreadState>
extern MethodInfo m29645_MI;
static PropertyInfo t3750____Current_PropertyInfo = 
{
	&t3750_TI, "Current", &m29645_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3750_PIs[] =
{
	&t3750____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3750_TI;
extern Il2CppType t1216_0_0_0;
extern void* RuntimeInvoker_t1216 (MethodInfo* method, void* obj, void** args);
MethodInfo m29645_MI = 
{
	"get_Current", NULL, &t3750_TI, &t1216_0_0_0, RuntimeInvoker_t1216, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3750_MIs[] =
{
	&m29645_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3750_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3750_0_0_0;
extern Il2CppType t3750_1_0_0;
struct t3750;
extern TypeInfo t3750_TI;
extern Il2CppGenericClass t3750_GC;
TypeInfo t3750_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3750_MIs, t3750_PIs, NULL, NULL, NULL, NULL, NULL, &t3750_TI, t3750_ITIs, NULL, &EmptyCustomAttributesCache, &t3750_TI, &t3750_0_0_0, &t3750_1_0_0, NULL, &t3750_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2874.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2874_TI;
#include "t2874MD.h"

extern TypeInfo t2874_TI;
extern TypeInfo t1216_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16665_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22663_MI;
struct t14;
 int32_t m22663 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22663_MI;


extern MethodInfo m16661_MI;
 void m16661 (t2874 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16662_MI;
 t4 * m16662 (t2874 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16665(__this, &m16665_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1216_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16663_MI;
 void m16663 (t2874 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16664_MI;
 bool m16664 (t2874 * __this, MethodInfo* method){
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
extern MethodInfo m16665_MI;
 int32_t m16665 (t2874 * __this, MethodInfo* method){
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
		int32_t L_8 = m22663(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22663_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Threading.ThreadState>
extern Il2CppType t14_0_0_1;
FieldInfo t2874_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2874_TI, offsetof(t2874, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2874_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2874_TI, offsetof(t2874, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2874_FIs[] =
{
	&t2874_f0_FieldInfo,
	&t2874_f1_FieldInfo,
	NULL
};
extern MethodInfo m16662_MI;
static PropertyInfo t2874____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2874_TI, "System.Collections.IEnumerator.Current", &m16662_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16665_MI;
static PropertyInfo t2874____Current_PropertyInfo = 
{
	&t2874_TI, "Current", &m16665_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2874_PIs[] =
{
	&t2874____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2874____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2874_m16661_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2874_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16661_MI = 
{
	".ctor", (methodPointerType)&m16661, &t2874_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2874_m16661_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2874_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16662_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16662, &t2874_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2874_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16663_MI = 
{
	"Dispose", (methodPointerType)&m16663, &t2874_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2874_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16664_MI = 
{
	"MoveNext", (methodPointerType)&m16664, &t2874_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2874_TI;
extern Il2CppType t1216_0_0_0;
extern void* RuntimeInvoker_t1216 (MethodInfo* method, void* obj, void** args);
MethodInfo m16665_MI = 
{
	"get_Current", (methodPointerType)&m16665, &t2874_TI, &t1216_0_0_0, RuntimeInvoker_t1216, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2874_MIs[] =
{
	&m16661_MI,
	&m16662_MI,
	&m16663_MI,
	&m16664_MI,
	&m16665_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16662_MI;
extern MethodInfo m16664_MI;
extern MethodInfo m16663_MI;
extern MethodInfo m16665_MI;
static MethodInfo* t2874_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16662_MI,
	&m16664_MI,
	&m16663_MI,
	&m16665_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3750_TI;
static TypeInfo* t2874_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3750_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3750_TI;
static Il2CppInterfaceOffsetPair t2874_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3750_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2874_0_0_0;
extern Il2CppType t2874_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2874_TI;
extern Il2CppGenericClass t2874_GC;
extern TypeInfo t14_TI;
TypeInfo t2874_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2874_MIs, t2874_PIs, t2874_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2874_TI, t2874_ITIs, t2874_VT, &EmptyCustomAttributesCache, &t2874_TI, &t2874_0_0_0, &t2874_1_0_0, t2874_IOs, &t2874_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2874)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5081_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Threading.ThreadState>
extern MethodInfo m29646_MI;
static PropertyInfo t5081____Count_PropertyInfo = 
{
	&t5081_TI, "Count", &m29646_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29647_MI;
static PropertyInfo t5081____IsReadOnly_PropertyInfo = 
{
	&t5081_TI, "IsReadOnly", &m29647_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5081_PIs[] =
{
	&t5081____Count_PropertyInfo,
	&t5081____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5081_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29646_MI = 
{
	"get_Count", NULL, &t5081_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5081_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29647_MI = 
{
	"get_IsReadOnly", NULL, &t5081_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1216_0_0_0;
static ParameterInfo t5081_m29648_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1216_0_0_0},
};
extern TypeInfo t5081_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29648_MI = 
{
	"Add", NULL, &t5081_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5081_m29648_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5081_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29649_MI = 
{
	"Clear", NULL, &t5081_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1216_0_0_0;
static ParameterInfo t5081_m29650_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1216_0_0_0},
};
extern TypeInfo t5081_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29650_MI = 
{
	"Contains", NULL, &t5081_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5081_m29650_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3090_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5081_m29651_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3090_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5081_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29651_MI = 
{
	"CopyTo", NULL, &t5081_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5081_m29651_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1216_0_0_0;
static ParameterInfo t5081_m29652_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1216_0_0_0},
};
extern TypeInfo t5081_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29652_MI = 
{
	"Remove", NULL, &t5081_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5081_m29652_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5081_MIs[] =
{
	&m29646_MI,
	&m29647_MI,
	&m29648_MI,
	&m29649_MI,
	&m29650_MI,
	&m29651_MI,
	&m29652_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5083_TI;
static TypeInfo* t5081_ITIs[] = 
{
	&t591_TI,
	&t5083_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5081_0_0_0;
extern Il2CppType t5081_1_0_0;
struct t5081;
extern TypeInfo t5081_TI;
extern Il2CppGenericClass t5081_GC;
TypeInfo t5081_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5081_MIs, t5081_PIs, NULL, NULL, NULL, NULL, NULL, &t5081_TI, t5081_ITIs, NULL, &EmptyCustomAttributesCache, &t5081_TI, &t5081_0_0_0, &t5081_1_0_0, NULL, &t5081_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5083_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Threading.ThreadState>
extern TypeInfo t5083_TI;
extern Il2CppType t3750_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29653_MI = 
{
	"GetEnumerator", NULL, &t5083_TI, &t3750_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5083_MIs[] =
{
	&m29653_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5083_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5083_0_0_0;
extern Il2CppType t5083_1_0_0;
struct t5083;
extern TypeInfo t5083_TI;
extern Il2CppGenericClass t5083_GC;
TypeInfo t5083_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5083_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5083_TI, t5083_ITIs, NULL, &EmptyCustomAttributesCache, &t5083_TI, &t5083_0_0_0, &t5083_1_0_0, NULL, &t5083_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5082_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Threading.ThreadState>
extern MethodInfo m29654_MI;
extern MethodInfo m29655_MI;
static PropertyInfo t5082____Item_PropertyInfo = 
{
	&t5082_TI, "Item", &m29654_MI, &m29655_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5082_PIs[] =
{
	&t5082____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1216_0_0_0;
static ParameterInfo t5082_m29656_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1216_0_0_0},
};
extern TypeInfo t5082_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29656_MI = 
{
	"IndexOf", NULL, &t5082_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t5082_m29656_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1216_0_0_0;
static ParameterInfo t5082_m29657_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1216_0_0_0},
};
extern TypeInfo t5082_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29657_MI = 
{
	"Insert", NULL, &t5082_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5082_m29657_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5082_m29658_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5082_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29658_MI = 
{
	"RemoveAt", NULL, &t5082_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5082_m29658_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5082_m29654_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5082_TI;
extern Il2CppType t1216_0_0_0;
extern void* RuntimeInvoker_t1216_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29654_MI = 
{
	"get_Item", NULL, &t5082_TI, &t1216_0_0_0, RuntimeInvoker_t1216_t16, t5082_m29654_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1216_0_0_0;
static ParameterInfo t5082_m29655_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1216_0_0_0},
};
extern TypeInfo t5082_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29655_MI = 
{
	"set_Item", NULL, &t5082_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5082_m29655_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5082_MIs[] =
{
	&m29656_MI,
	&m29657_MI,
	&m29658_MI,
	&m29654_MI,
	&m29655_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5081_TI;
extern TypeInfo t5083_TI;
static TypeInfo* t5082_ITIs[] = 
{
	&t591_TI,
	&t5081_TI,
	&t5083_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5082_0_0_0;
extern Il2CppType t5082_1_0_0;
struct t5082;
extern TypeInfo t5082_TI;
extern Il2CppGenericClass t5082_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5082_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5082_MIs, t5082_PIs, NULL, NULL, NULL, NULL, NULL, &t5082_TI, t5082_ITIs, NULL, &t1400__CustomAttributeCache, &t5082_TI, &t5082_0_0_0, &t5082_1_0_0, NULL, &t5082_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3751_TI;

#include "t698.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.AttributeTargets>
extern MethodInfo m29659_MI;
static PropertyInfo t3751____Current_PropertyInfo = 
{
	&t3751_TI, "Current", &m29659_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3751_PIs[] =
{
	&t3751____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3751_TI;
extern Il2CppType t698_0_0_0;
extern void* RuntimeInvoker_t698 (MethodInfo* method, void* obj, void** args);
MethodInfo m29659_MI = 
{
	"get_Current", NULL, &t3751_TI, &t698_0_0_0, RuntimeInvoker_t698, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3751_MIs[] =
{
	&m29659_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3751_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3751_0_0_0;
extern Il2CppType t3751_1_0_0;
struct t3751;
extern TypeInfo t3751_TI;
extern Il2CppGenericClass t3751_GC;
TypeInfo t3751_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3751_MIs, t3751_PIs, NULL, NULL, NULL, NULL, NULL, &t3751_TI, t3751_ITIs, NULL, &EmptyCustomAttributesCache, &t3751_TI, &t3751_0_0_0, &t3751_1_0_0, NULL, &t3751_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2875.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2875_TI;
#include "t2875MD.h"

extern TypeInfo t2875_TI;
extern TypeInfo t698_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16670_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22674_MI;
struct t14;
 int32_t m22674 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22674_MI;


extern MethodInfo m16666_MI;
 void m16666 (t2875 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16667_MI;
 t4 * m16667 (t2875 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16670(__this, &m16670_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t698_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16668_MI;
 void m16668 (t2875 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16669_MI;
 bool m16669 (t2875 * __this, MethodInfo* method){
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
extern MethodInfo m16670_MI;
 int32_t m16670 (t2875 * __this, MethodInfo* method){
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
		int32_t L_8 = m22674(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22674_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.AttributeTargets>
extern Il2CppType t14_0_0_1;
FieldInfo t2875_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2875_TI, offsetof(t2875, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2875_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2875_TI, offsetof(t2875, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2875_FIs[] =
{
	&t2875_f0_FieldInfo,
	&t2875_f1_FieldInfo,
	NULL
};
extern MethodInfo m16667_MI;
static PropertyInfo t2875____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2875_TI, "System.Collections.IEnumerator.Current", &m16667_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16670_MI;
static PropertyInfo t2875____Current_PropertyInfo = 
{
	&t2875_TI, "Current", &m16670_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2875_PIs[] =
{
	&t2875____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2875____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2875_m16666_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2875_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16666_MI = 
{
	".ctor", (methodPointerType)&m16666, &t2875_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2875_m16666_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2875_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16667_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16667, &t2875_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2875_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16668_MI = 
{
	"Dispose", (methodPointerType)&m16668, &t2875_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2875_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16669_MI = 
{
	"MoveNext", (methodPointerType)&m16669, &t2875_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2875_TI;
extern Il2CppType t698_0_0_0;
extern void* RuntimeInvoker_t698 (MethodInfo* method, void* obj, void** args);
MethodInfo m16670_MI = 
{
	"get_Current", (methodPointerType)&m16670, &t2875_TI, &t698_0_0_0, RuntimeInvoker_t698, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2875_MIs[] =
{
	&m16666_MI,
	&m16667_MI,
	&m16668_MI,
	&m16669_MI,
	&m16670_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16667_MI;
extern MethodInfo m16669_MI;
extern MethodInfo m16668_MI;
extern MethodInfo m16670_MI;
static MethodInfo* t2875_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16667_MI,
	&m16669_MI,
	&m16668_MI,
	&m16670_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3751_TI;
static TypeInfo* t2875_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3751_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3751_TI;
static Il2CppInterfaceOffsetPair t2875_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3751_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2875_0_0_0;
extern Il2CppType t2875_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2875_TI;
extern Il2CppGenericClass t2875_GC;
extern TypeInfo t14_TI;
TypeInfo t2875_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2875_MIs, t2875_PIs, t2875_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2875_TI, t2875_ITIs, t2875_VT, &EmptyCustomAttributesCache, &t2875_TI, &t2875_0_0_0, &t2875_1_0_0, t2875_IOs, &t2875_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2875)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5084_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.AttributeTargets>
extern MethodInfo m29660_MI;
static PropertyInfo t5084____Count_PropertyInfo = 
{
	&t5084_TI, "Count", &m29660_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29661_MI;
static PropertyInfo t5084____IsReadOnly_PropertyInfo = 
{
	&t5084_TI, "IsReadOnly", &m29661_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5084_PIs[] =
{
	&t5084____Count_PropertyInfo,
	&t5084____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5084_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29660_MI = 
{
	"get_Count", NULL, &t5084_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5084_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29661_MI = 
{
	"get_IsReadOnly", NULL, &t5084_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t698_0_0_0;
static ParameterInfo t5084_m29662_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t698_0_0_0},
};
extern TypeInfo t5084_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29662_MI = 
{
	"Add", NULL, &t5084_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5084_m29662_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5084_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29663_MI = 
{
	"Clear", NULL, &t5084_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t698_0_0_0;
static ParameterInfo t5084_m29664_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t698_0_0_0},
};
extern TypeInfo t5084_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29664_MI = 
{
	"Contains", NULL, &t5084_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5084_m29664_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3091_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5084_m29665_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3091_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5084_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29665_MI = 
{
	"CopyTo", NULL, &t5084_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5084_m29665_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t698_0_0_0;
static ParameterInfo t5084_m29666_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t698_0_0_0},
};
extern TypeInfo t5084_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29666_MI = 
{
	"Remove", NULL, &t5084_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5084_m29666_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5084_MIs[] =
{
	&m29660_MI,
	&m29661_MI,
	&m29662_MI,
	&m29663_MI,
	&m29664_MI,
	&m29665_MI,
	&m29666_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5086_TI;
static TypeInfo* t5084_ITIs[] = 
{
	&t591_TI,
	&t5086_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5084_0_0_0;
extern Il2CppType t5084_1_0_0;
struct t5084;
extern TypeInfo t5084_TI;
extern Il2CppGenericClass t5084_GC;
TypeInfo t5084_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5084_MIs, t5084_PIs, NULL, NULL, NULL, NULL, NULL, &t5084_TI, t5084_ITIs, NULL, &EmptyCustomAttributesCache, &t5084_TI, &t5084_0_0_0, &t5084_1_0_0, NULL, &t5084_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5086_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.AttributeTargets>
extern TypeInfo t5086_TI;
extern Il2CppType t3751_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29667_MI = 
{
	"GetEnumerator", NULL, &t5086_TI, &t3751_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5086_MIs[] =
{
	&m29667_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5086_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5086_0_0_0;
extern Il2CppType t5086_1_0_0;
struct t5086;
extern TypeInfo t5086_TI;
extern Il2CppGenericClass t5086_GC;
TypeInfo t5086_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5086_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5086_TI, t5086_ITIs, NULL, &EmptyCustomAttributesCache, &t5086_TI, &t5086_0_0_0, &t5086_1_0_0, NULL, &t5086_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5085_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.AttributeTargets>
extern MethodInfo m29668_MI;
extern MethodInfo m29669_MI;
static PropertyInfo t5085____Item_PropertyInfo = 
{
	&t5085_TI, "Item", &m29668_MI, &m29669_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5085_PIs[] =
{
	&t5085____Item_PropertyInfo,
	NULL
};
extern Il2CppType t698_0_0_0;
static ParameterInfo t5085_m29670_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t698_0_0_0},
};
extern TypeInfo t5085_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29670_MI = 
{
	"IndexOf", NULL, &t5085_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t5085_m29670_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t698_0_0_0;
static ParameterInfo t5085_m29671_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t698_0_0_0},
};
extern TypeInfo t5085_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29671_MI = 
{
	"Insert", NULL, &t5085_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5085_m29671_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5085_m29672_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5085_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29672_MI = 
{
	"RemoveAt", NULL, &t5085_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5085_m29672_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5085_m29668_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5085_TI;
extern Il2CppType t698_0_0_0;
extern void* RuntimeInvoker_t698_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29668_MI = 
{
	"get_Item", NULL, &t5085_TI, &t698_0_0_0, RuntimeInvoker_t698_t16, t5085_m29668_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t698_0_0_0;
static ParameterInfo t5085_m29669_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t698_0_0_0},
};
extern TypeInfo t5085_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29669_MI = 
{
	"set_Item", NULL, &t5085_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5085_m29669_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5085_MIs[] =
{
	&m29670_MI,
	&m29671_MI,
	&m29672_MI,
	&m29668_MI,
	&m29669_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5084_TI;
extern TypeInfo t5086_TI;
static TypeInfo* t5085_ITIs[] = 
{
	&t591_TI,
	&t5084_TI,
	&t5086_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5085_0_0_0;
extern Il2CppType t5085_1_0_0;
struct t5085;
extern TypeInfo t5085_TI;
extern Il2CppGenericClass t5085_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5085_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5085_MIs, t5085_PIs, NULL, NULL, NULL, NULL, NULL, &t5085_TI, t5085_ITIs, NULL, &t1400__CustomAttributeCache, &t5085_TI, &t5085_0_0_0, &t5085_1_0_0, NULL, &t5085_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1546.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1546_TI;
#include "t1546MD.h"

#include "t453.h"
extern TypeInfo t453_TI;
extern TypeInfo t1550_TI;
extern TypeInfo t16_TI;
#include "t2876MD.h"
extern MethodInfo m16672_MI;
extern MethodInfo m29253_MI;


extern MethodInfo m7810_MI;
 void m7810 (t1546 * __this, MethodInfo* method){
	{
		m16672(__this, &m16672_MI);
		return;
	}
}
extern MethodInfo m16671_MI;
 int32_t m16671 (t1546 * __this, t453  p0, t453  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t453  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t453_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t453  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t453_TI), &L_2);
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
		t453  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t453_TI), &L_4);
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
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, t453  >::Invoke(&m29253_MI, Box(InitializedTypeInfo(&t453_TI), &(*(&p0))), p1);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.DateTime>
extern TypeInfo t1546_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m7810_MI = 
{
	".ctor", (methodPointerType)&m7810, &t1546_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t453_0_0_0;
extern Il2CppType t453_0_0_0;
static ParameterInfo t1546_m16671_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t1546_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t453_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m16671_MI = 
{
	"Compare", (methodPointerType)&m16671, &t1546_TI, &t16_0_0_0, RuntimeInvoker_t16_t453_t453, t1546_m16671_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1546_MIs[] =
{
	&m7810_MI,
	&m16671_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m16671_MI;
extern MethodInfo m16674_MI;
extern MethodInfo m16671_MI;
static MethodInfo* t1546_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m16671_MI,
	&m16674_MI,
	&m16671_MI,
};
extern TypeInfo t5204_TI;
extern TypeInfo t716_TI;
static Il2CppInterfaceOffsetPair t1546_IOs[] = 
{
	{ &t5204_TI, 4},
	{ &t716_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1546_0_0_0;
extern Il2CppType t1546_1_0_0;
extern TypeInfo t2876_TI;
struct t1546;
extern TypeInfo t1546_TI;
extern Il2CppGenericClass t1546_GC;
TypeInfo t1546_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericComparer`1", "System.Collections.Generic", t1546_MIs, NULL, NULL, NULL, &t2876_TI, NULL, NULL, &t1546_TI, NULL, t1546_VT, &EmptyCustomAttributesCache, &t1546_TI, &t1546_0_0_0, &t1546_1_0_0, t1546_IOs, &t1546_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1546), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t2876.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2876_TI;

#include "t2877.h"
extern TypeInfo t2876_TI;
extern TypeInfo t1550_TI;
extern TypeInfo t290_TI;
extern TypeInfo t453_TI;
extern TypeInfo t17_TI;
extern TypeInfo t824_TI;
extern TypeInfo t525_TI;
extern TypeInfo t2877_TI;
extern TypeInfo t16_TI;
extern TypeInfo t303_TI;
#include "t2877MD.h"
extern Il2CppType t1550_0_0_0;
extern Il2CppType t453_0_0_0;
extern Il2CppType t824_0_0_0;
extern MethodInfo m15_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2958_MI;
extern MethodInfo m2956_MI;
extern MethodInfo m6421_MI;
extern MethodInfo m16676_MI;
extern MethodInfo m29673_MI;
extern MethodInfo m6443_MI;


extern MethodInfo m16672_MI;
 void m16672 (t2876 * __this, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		return;
	}
}
extern MethodInfo m16673_MI;
 void m16673 (t4 * __this, MethodInfo* method){
	t2877 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2877 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2877_TI));
	m16676(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m16676_MI);
	((t2876_SFs*)InitializedTypeInfo(&t2876_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m16674_MI;
 int32_t m16674 (t2876 * __this, t4 * p0, t4 * p1, MethodInfo* method){
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
		if (!((t4 *)IsInst(p0, InitializedTypeInfo(&t453_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t4 *)IsInst(p1, InitializedTypeInfo(&t453_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t453 , t453  >::Invoke(&m29673_MI, __this, ((*(t453 *)((t453 *)UnBox (p0, InitializedTypeInfo(&t453_TI))))), ((*(t453 *)((t453 *)UnBox (p1, InitializedTypeInfo(&t453_TI))))));
		return L_0;
	}

IL_0033:
	{
		t303 * L_1 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m6443(L_1, &m6443_MI);
		il2cpp_codegen_raise_exception (L_1);
	}
}
extern MethodInfo m16675_MI;
 t2876 * m16675 (t4 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2876_TI));
		return (((t2876_SFs*)InitializedTypeInfo(&t2876_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.DateTime>
extern Il2CppType t2876_0_0_49;
FieldInfo t2876_f0_FieldInfo = 
{
	"_default", &t2876_0_0_49, &t2876_TI, offsetof(t2876_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2876_FIs[] =
{
	&t2876_f0_FieldInfo,
	NULL
};
extern MethodInfo m16675_MI;
static PropertyInfo t2876____Default_PropertyInfo = 
{
	&t2876_TI, "Default", &m16675_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2876_PIs[] =
{
	&t2876____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2876_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16672_MI = 
{
	".ctor", (methodPointerType)&m16672, &t2876_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2876_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16673_MI = 
{
	".cctor", (methodPointerType)&m16673, &t2876_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2876_m16674_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2876_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16674_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m16674, &t2876_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t2876_m16674_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t453_0_0_0;
extern Il2CppType t453_0_0_0;
static ParameterInfo t2876_m29673_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t2876_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t453_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m29673_MI = 
{
	"Compare", NULL, &t2876_TI, &t16_0_0_0, RuntimeInvoker_t16_t453_t453, t2876_m29673_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2876_TI;
extern Il2CppType t2876_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16675_MI = 
{
	"get_Default", (methodPointerType)&m16675, &t2876_TI, &t2876_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2876_MIs[] =
{
	&m16672_MI,
	&m16673_MI,
	&m16674_MI,
	&m29673_MI,
	&m16675_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m29673_MI;
extern MethodInfo m16674_MI;
static MethodInfo* t2876_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m29673_MI,
	&m16674_MI,
	NULL,
};
extern TypeInfo t5204_TI;
extern TypeInfo t716_TI;
static TypeInfo* t2876_ITIs[] = 
{
	&t5204_TI,
	&t716_TI,
};
extern TypeInfo t5204_TI;
extern TypeInfo t716_TI;
static Il2CppInterfaceOffsetPair t2876_IOs[] = 
{
	{ &t5204_TI, 4},
	{ &t716_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2876_0_0_0;
extern Il2CppType t2876_1_0_0;
extern TypeInfo t4_TI;
struct t2876;
extern TypeInfo t2876_TI;
extern Il2CppGenericClass t2876_GC;
TypeInfo t2876_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2876_MIs, t2876_PIs, t2876_FIs, NULL, &t4_TI, NULL, NULL, &t2876_TI, t2876_ITIs, t2876_VT, &EmptyCustomAttributesCache, &t2876_TI, &t2876_0_0_0, &t2876_1_0_0, t2876_IOs, &t2876_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2876), 0, -1, sizeof(t2876_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5204_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.DateTime>
extern Il2CppType t453_0_0_0;
extern Il2CppType t453_0_0_0;
static ParameterInfo t5204_m29674_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t5204_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t453_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m29674_MI = 
{
	"Compare", NULL, &t5204_TI, &t16_0_0_0, RuntimeInvoker_t16_t453_t453, t5204_m29674_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5204_MIs[] =
{
	&m29674_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5204_0_0_0;
extern Il2CppType t5204_1_0_0;
struct t5204;
extern TypeInfo t5204_TI;
extern Il2CppGenericClass t5204_GC;
TypeInfo t5204_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t5204_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5204_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5204_TI, &t5204_0_0_0, &t5204_1_0_0, NULL, &t5204_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2877_TI;

extern TypeInfo t453_TI;
extern TypeInfo t1550_TI;
extern TypeInfo t16_TI;
extern TypeInfo t285_TI;
extern TypeInfo t4_TI;
extern TypeInfo t303_TI;
extern MethodInfo m16672_MI;
extern MethodInfo m29253_MI;
extern MethodInfo m7286_MI;
extern MethodInfo m1917_MI;


extern MethodInfo m16676_MI;
 void m16676 (t2877 * __this, MethodInfo* method){
	{
		m16672(__this, &m16672_MI);
		return;
	}
}
extern MethodInfo m16677_MI;
 int32_t m16677 (t2877 * __this, t453  p0, t453  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t453  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t453_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t453  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t453_TI), &L_2);
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
		t453  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t453_TI), &L_4);
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
		t453  L_6 = p0;
		t4 * L_7 = Box(InitializedTypeInfo(&t453_TI), &L_6);
		if (!((t4*)IsInst(L_7, InitializedTypeInfo(&t1550_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t453  L_8 = p0;
		t4 * L_9 = Box(InitializedTypeInfo(&t453_TI), &L_8);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t453  >::Invoke(&m29253_MI, ((t4*)Castclass(L_9, InitializedTypeInfo(&t1550_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t453  L_11 = p0;
		t4 * L_12 = Box(InitializedTypeInfo(&t453_TI), &L_11);
		if (!((t4 *)IsInst(L_12, InitializedTypeInfo(&t285_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t453  L_13 = p0;
		t4 * L_14 = Box(InitializedTypeInfo(&t453_TI), &L_13);
		t453  L_15 = p1;
		t4 * L_16 = Box(InitializedTypeInfo(&t453_TI), &L_15);
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
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
extern TypeInfo t2877_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16676_MI = 
{
	".ctor", (methodPointerType)&m16676, &t2877_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t453_0_0_0;
extern Il2CppType t453_0_0_0;
static ParameterInfo t2877_m16677_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t2877_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t453_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m16677_MI = 
{
	"Compare", (methodPointerType)&m16677, &t2877_TI, &t16_0_0_0, RuntimeInvoker_t16_t453_t453, t2877_m16677_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2877_MIs[] =
{
	&m16676_MI,
	&m16677_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m16677_MI;
extern MethodInfo m16674_MI;
extern MethodInfo m16677_MI;
static MethodInfo* t2877_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m16677_MI,
	&m16674_MI,
	&m16677_MI,
};
extern TypeInfo t5204_TI;
extern TypeInfo t716_TI;
static Il2CppInterfaceOffsetPair t2877_IOs[] = 
{
	{ &t5204_TI, 4},
	{ &t716_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2877_0_0_0;
extern Il2CppType t2877_1_0_0;
extern TypeInfo t2876_TI;
struct t2877;
extern TypeInfo t2877_TI;
extern Il2CppGenericClass t2877_GC;
extern TypeInfo t823_TI;
TypeInfo t2877_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2877_MIs, NULL, NULL, NULL, &t2876_TI, NULL, &t823_TI, &t2877_TI, NULL, t2877_VT, &EmptyCustomAttributesCache, &t2877_TI, &t2877_0_0_0, &t2877_1_0_0, t2877_IOs, &t2877_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2877), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t1547.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1547_TI;
#include "t1547MD.h"

extern TypeInfo t453_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern TypeInfo t1551_TI;
extern TypeInfo t17_TI;
#include "t2878MD.h"
extern MethodInfo m16680_MI;
extern MethodInfo m21_MI;
extern MethodInfo m29268_MI;


extern MethodInfo m7811_MI;
 void m7811 (t1547 * __this, MethodInfo* method){
	{
		m16680(__this, &m16680_MI);
		return;
	}
}
extern MethodInfo m16678_MI;
 int32_t m16678 (t1547 * __this, t453  p0, MethodInfo* method){
	{
		t453  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t453_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m21_MI, Box(InitializedTypeInfo(&t453_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m16679_MI;
 bool m16679 (t1547 * __this, t453  p0, t453  p1, MethodInfo* method){
	{
		t453  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t453_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t453  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t453_TI), &L_2);
		return ((((t4 *)L_3) == ((t4 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, t453  >::Invoke(&m29268_MI, Box(InitializedTypeInfo(&t453_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
extern TypeInfo t1547_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m7811_MI = 
{
	".ctor", (methodPointerType)&m7811, &t1547_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t453_0_0_0;
static ParameterInfo t1547_m16678_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t1547_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m16678_MI = 
{
	"GetHashCode", (methodPointerType)&m16678, &t1547_TI, &t16_0_0_0, RuntimeInvoker_t16_t453, t1547_m16678_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t453_0_0_0;
extern Il2CppType t453_0_0_0;
static ParameterInfo t1547_m16679_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t1547_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t453_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m16679_MI = 
{
	"Equals", (methodPointerType)&m16679, &t1547_TI, &t17_0_0_0, RuntimeInvoker_t17_t453_t453, t1547_m16679_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1547_MIs[] =
{
	&m7811_MI,
	&m16678_MI,
	&m16679_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m16679_MI;
extern MethodInfo m16678_MI;
extern MethodInfo m16683_MI;
extern MethodInfo m16682_MI;
extern MethodInfo m16678_MI;
extern MethodInfo m16679_MI;
static MethodInfo* t1547_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m16679_MI,
	&m16678_MI,
	&m16683_MI,
	&m16682_MI,
	&m16678_MI,
	&m16679_MI,
};
extern TypeInfo t5205_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t1547_IOs[] = 
{
	{ &t5205_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1547_0_0_0;
extern Il2CppType t1547_1_0_0;
extern TypeInfo t2878_TI;
struct t1547;
extern TypeInfo t1547_TI;
extern Il2CppGenericClass t1547_GC;
TypeInfo t1547_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t1547_MIs, NULL, NULL, NULL, &t2878_TI, NULL, NULL, &t1547_TI, NULL, t1547_VT, &EmptyCustomAttributesCache, &t1547_TI, &t1547_0_0_0, &t1547_1_0_0, t1547_IOs, &t1547_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1547), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t2878.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2878_TI;

#include "t2879.h"
extern TypeInfo t2878_TI;
extern TypeInfo t1551_TI;
extern TypeInfo t290_TI;
extern TypeInfo t453_TI;
extern TypeInfo t17_TI;
extern TypeInfo t836_TI;
extern TypeInfo t525_TI;
extern TypeInfo t2879_TI;
extern TypeInfo t16_TI;
#include "t2879MD.h"
extern Il2CppType t1551_0_0_0;
extern Il2CppType t453_0_0_0;
extern Il2CppType t836_0_0_0;
extern MethodInfo m15_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2958_MI;
extern MethodInfo m2956_MI;
extern MethodInfo m6421_MI;
extern MethodInfo m16685_MI;
extern MethodInfo m29675_MI;
extern MethodInfo m29676_MI;


extern MethodInfo m16680_MI;
 void m16680 (t2878 * __this, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		return;
	}
}
extern MethodInfo m16681_MI;
 void m16681 (t4 * __this, MethodInfo* method){
	t2879 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2879 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2879_TI));
	m16685(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m16685_MI);
	((t2878_SFs*)InitializedTypeInfo(&t2878_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m16682_MI;
 int32_t m16682 (t2878 * __this, t4 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t453  >::Invoke(&m29675_MI, __this, ((*(t453 *)((t453 *)UnBox (p0, InitializedTypeInfo(&t453_TI))))));
		return L_0;
	}
}
extern MethodInfo m16683_MI;
 bool m16683 (t2878 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t453 , t453  >::Invoke(&m29676_MI, __this, ((*(t453 *)((t453 *)UnBox (p0, InitializedTypeInfo(&t453_TI))))), ((*(t453 *)((t453 *)UnBox (p1, InitializedTypeInfo(&t453_TI))))));
		return L_0;
	}
}
extern MethodInfo m16684_MI;
 t2878 * m16684 (t4 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2878_TI));
		return (((t2878_SFs*)InitializedTypeInfo(&t2878_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.DateTime>
extern Il2CppType t2878_0_0_49;
FieldInfo t2878_f0_FieldInfo = 
{
	"_default", &t2878_0_0_49, &t2878_TI, offsetof(t2878_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2878_FIs[] =
{
	&t2878_f0_FieldInfo,
	NULL
};
extern MethodInfo m16684_MI;
static PropertyInfo t2878____Default_PropertyInfo = 
{
	&t2878_TI, "Default", &m16684_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2878_PIs[] =
{
	&t2878____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16680_MI = 
{
	".ctor", (methodPointerType)&m16680, &t2878_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16681_MI = 
{
	".cctor", (methodPointerType)&m16681, &t2878_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2878_m16682_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2878_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16682_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m16682, &t2878_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2878_m16682_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2878_m16683_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2878_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16683_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m16683, &t2878_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2878_m16683_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t453_0_0_0;
static ParameterInfo t2878_m29675_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t2878_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m29675_MI = 
{
	"GetHashCode", NULL, &t2878_TI, &t16_0_0_0, RuntimeInvoker_t16_t453, t2878_m29675_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t453_0_0_0;
extern Il2CppType t453_0_0_0;
static ParameterInfo t2878_m29676_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t2878_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t453_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m29676_MI = 
{
	"Equals", NULL, &t2878_TI, &t17_0_0_0, RuntimeInvoker_t17_t453_t453, t2878_m29676_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2878_TI;
extern Il2CppType t2878_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16684_MI = 
{
	"get_Default", (methodPointerType)&m16684, &t2878_TI, &t2878_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2878_MIs[] =
{
	&m16680_MI,
	&m16681_MI,
	&m16682_MI,
	&m16683_MI,
	&m29675_MI,
	&m29676_MI,
	&m16684_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m29676_MI;
extern MethodInfo m29675_MI;
extern MethodInfo m16683_MI;
extern MethodInfo m16682_MI;
static MethodInfo* t2878_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m29676_MI,
	&m29675_MI,
	&m16683_MI,
	&m16682_MI,
	NULL,
	NULL,
};
extern TypeInfo t5205_TI;
extern TypeInfo t859_TI;
static TypeInfo* t2878_ITIs[] = 
{
	&t5205_TI,
	&t859_TI,
};
extern TypeInfo t5205_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t2878_IOs[] = 
{
	{ &t5205_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2878_0_0_0;
extern Il2CppType t2878_1_0_0;
extern TypeInfo t4_TI;
struct t2878;
extern TypeInfo t2878_TI;
extern Il2CppGenericClass t2878_GC;
TypeInfo t2878_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2878_MIs, t2878_PIs, t2878_FIs, NULL, &t4_TI, NULL, NULL, &t2878_TI, t2878_ITIs, t2878_VT, &EmptyCustomAttributesCache, &t2878_TI, &t2878_0_0_0, &t2878_1_0_0, t2878_IOs, &t2878_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2878), 0, -1, sizeof(t2878_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5205_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.DateTime>
extern Il2CppType t453_0_0_0;
extern Il2CppType t453_0_0_0;
static ParameterInfo t5205_m29677_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t5205_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t453_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m29677_MI = 
{
	"Equals", NULL, &t5205_TI, &t17_0_0_0, RuntimeInvoker_t17_t453_t453, t5205_m29677_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t453_0_0_0;
static ParameterInfo t5205_m29678_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t5205_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m29678_MI = 
{
	"GetHashCode", NULL, &t5205_TI, &t16_0_0_0, RuntimeInvoker_t16_t453, t5205_m29678_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5205_MIs[] =
{
	&m29677_MI,
	&m29678_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5205_0_0_0;
extern Il2CppType t5205_1_0_0;
struct t5205;
extern TypeInfo t5205_TI;
extern Il2CppGenericClass t5205_GC;
TypeInfo t5205_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5205_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5205_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5205_TI, &t5205_0_0_0, &t5205_1_0_0, NULL, &t5205_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2879_TI;

extern TypeInfo t453_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern TypeInfo t17_TI;
extern MethodInfo m16680_MI;
extern MethodInfo m21_MI;
extern MethodInfo m19_MI;


extern MethodInfo m16685_MI;
 void m16685 (t2879 * __this, MethodInfo* method){
	{
		m16680(__this, &m16680_MI);
		return;
	}
}
extern MethodInfo m16686_MI;
 int32_t m16686 (t2879 * __this, t453  p0, MethodInfo* method){
	{
		t453  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t453_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m21_MI, Box(InitializedTypeInfo(&t453_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m16687_MI;
 bool m16687 (t2879 * __this, t453  p0, t453  p1, MethodInfo* method){
	{
		t453  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t453_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t453  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t453_TI), &L_2);
		return ((((t4 *)L_3) == ((t4 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t453  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t453_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t4 * >::Invoke(&m19_MI, Box(InitializedTypeInfo(&t453_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
extern TypeInfo t2879_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16685_MI = 
{
	".ctor", (methodPointerType)&m16685, &t2879_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t453_0_0_0;
static ParameterInfo t2879_m16686_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t2879_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m16686_MI = 
{
	"GetHashCode", (methodPointerType)&m16686, &t2879_TI, &t16_0_0_0, RuntimeInvoker_t16_t453, t2879_m16686_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t453_0_0_0;
extern Il2CppType t453_0_0_0;
static ParameterInfo t2879_m16687_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t453_0_0_0},
};
extern TypeInfo t2879_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t453_t453 (MethodInfo* method, void* obj, void** args);
MethodInfo m16687_MI = 
{
	"Equals", (methodPointerType)&m16687, &t2879_TI, &t17_0_0_0, RuntimeInvoker_t17_t453_t453, t2879_m16687_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2879_MIs[] =
{
	&m16685_MI,
	&m16686_MI,
	&m16687_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m16687_MI;
extern MethodInfo m16686_MI;
extern MethodInfo m16683_MI;
extern MethodInfo m16682_MI;
extern MethodInfo m16686_MI;
extern MethodInfo m16687_MI;
static MethodInfo* t2879_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m16687_MI,
	&m16686_MI,
	&m16683_MI,
	&m16682_MI,
	&m16686_MI,
	&m16687_MI,
};
extern TypeInfo t5205_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t2879_IOs[] = 
{
	{ &t5205_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2879_0_0_0;
extern Il2CppType t2879_1_0_0;
extern TypeInfo t2878_TI;
struct t2879;
extern TypeInfo t2879_TI;
extern Il2CppGenericClass t2879_GC;
extern TypeInfo t835_TI;
TypeInfo t2879_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2879_MIs, NULL, NULL, NULL, &t2878_TI, NULL, &t835_TI, &t2879_TI, NULL, t2879_VT, &EmptyCustomAttributesCache, &t2879_TI, &t2879_0_0_0, &t2879_1_0_0, t2879_IOs, &t2879_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2879), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3752_TI;

#include "t1243.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DateTime/Which>
extern MethodInfo m29679_MI;
static PropertyInfo t3752____Current_PropertyInfo = 
{
	&t3752_TI, "Current", &m29679_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3752_PIs[] =
{
	&t3752____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3752_TI;
extern Il2CppType t1243_0_0_0;
extern void* RuntimeInvoker_t1243 (MethodInfo* method, void* obj, void** args);
MethodInfo m29679_MI = 
{
	"get_Current", NULL, &t3752_TI, &t1243_0_0_0, RuntimeInvoker_t1243, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3752_MIs[] =
{
	&m29679_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3752_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3752_0_0_0;
extern Il2CppType t3752_1_0_0;
struct t3752;
extern TypeInfo t3752_TI;
extern Il2CppGenericClass t3752_GC;
TypeInfo t3752_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3752_MIs, t3752_PIs, NULL, NULL, NULL, NULL, NULL, &t3752_TI, t3752_ITIs, NULL, &EmptyCustomAttributesCache, &t3752_TI, &t3752_0_0_0, &t3752_1_0_0, NULL, &t3752_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2880.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2880_TI;
#include "t2880MD.h"

extern TypeInfo t2880_TI;
extern TypeInfo t1243_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16692_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22685_MI;
struct t14;
 int32_t m22685 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22685_MI;


extern MethodInfo m16688_MI;
 void m16688 (t2880 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16689_MI;
 t4 * m16689 (t2880 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16692(__this, &m16692_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1243_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16690_MI;
 void m16690 (t2880 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16691_MI;
 bool m16691 (t2880 * __this, MethodInfo* method){
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
extern MethodInfo m16692_MI;
 int32_t m16692 (t2880 * __this, MethodInfo* method){
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
		int32_t L_8 = m22685(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22685_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTime/Which>
extern Il2CppType t14_0_0_1;
FieldInfo t2880_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2880_TI, offsetof(t2880, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2880_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2880_TI, offsetof(t2880, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2880_FIs[] =
{
	&t2880_f0_FieldInfo,
	&t2880_f1_FieldInfo,
	NULL
};
extern MethodInfo m16689_MI;
static PropertyInfo t2880____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2880_TI, "System.Collections.IEnumerator.Current", &m16689_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16692_MI;
static PropertyInfo t2880____Current_PropertyInfo = 
{
	&t2880_TI, "Current", &m16692_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2880_PIs[] =
{
	&t2880____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2880____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2880_m16688_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2880_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16688_MI = 
{
	".ctor", (methodPointerType)&m16688, &t2880_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2880_m16688_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2880_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16689_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16689, &t2880_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2880_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16690_MI = 
{
	"Dispose", (methodPointerType)&m16690, &t2880_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2880_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16691_MI = 
{
	"MoveNext", (methodPointerType)&m16691, &t2880_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2880_TI;
extern Il2CppType t1243_0_0_0;
extern void* RuntimeInvoker_t1243 (MethodInfo* method, void* obj, void** args);
MethodInfo m16692_MI = 
{
	"get_Current", (methodPointerType)&m16692, &t2880_TI, &t1243_0_0_0, RuntimeInvoker_t1243, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2880_MIs[] =
{
	&m16688_MI,
	&m16689_MI,
	&m16690_MI,
	&m16691_MI,
	&m16692_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16689_MI;
extern MethodInfo m16691_MI;
extern MethodInfo m16690_MI;
extern MethodInfo m16692_MI;
static MethodInfo* t2880_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16689_MI,
	&m16691_MI,
	&m16690_MI,
	&m16692_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3752_TI;
static TypeInfo* t2880_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3752_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3752_TI;
static Il2CppInterfaceOffsetPair t2880_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3752_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2880_0_0_0;
extern Il2CppType t2880_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2880_TI;
extern Il2CppGenericClass t2880_GC;
extern TypeInfo t14_TI;
TypeInfo t2880_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2880_MIs, t2880_PIs, t2880_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2880_TI, t2880_ITIs, t2880_VT, &EmptyCustomAttributesCache, &t2880_TI, &t2880_0_0_0, &t2880_1_0_0, t2880_IOs, &t2880_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2880)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5087_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTime/Which>
extern MethodInfo m29680_MI;
static PropertyInfo t5087____Count_PropertyInfo = 
{
	&t5087_TI, "Count", &m29680_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29681_MI;
static PropertyInfo t5087____IsReadOnly_PropertyInfo = 
{
	&t5087_TI, "IsReadOnly", &m29681_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5087_PIs[] =
{
	&t5087____Count_PropertyInfo,
	&t5087____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5087_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29680_MI = 
{
	"get_Count", NULL, &t5087_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5087_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29681_MI = 
{
	"get_IsReadOnly", NULL, &t5087_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1243_0_0_0;
static ParameterInfo t5087_m29682_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1243_0_0_0},
};
extern TypeInfo t5087_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29682_MI = 
{
	"Add", NULL, &t5087_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5087_m29682_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5087_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29683_MI = 
{
	"Clear", NULL, &t5087_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1243_0_0_0;
static ParameterInfo t5087_m29684_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1243_0_0_0},
};
extern TypeInfo t5087_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29684_MI = 
{
	"Contains", NULL, &t5087_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5087_m29684_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3092_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5087_m29685_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3092_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5087_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29685_MI = 
{
	"CopyTo", NULL, &t5087_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5087_m29685_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1243_0_0_0;
static ParameterInfo t5087_m29686_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1243_0_0_0},
};
extern TypeInfo t5087_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29686_MI = 
{
	"Remove", NULL, &t5087_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5087_m29686_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5087_MIs[] =
{
	&m29680_MI,
	&m29681_MI,
	&m29682_MI,
	&m29683_MI,
	&m29684_MI,
	&m29685_MI,
	&m29686_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5089_TI;
static TypeInfo* t5087_ITIs[] = 
{
	&t591_TI,
	&t5089_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5087_0_0_0;
extern Il2CppType t5087_1_0_0;
struct t5087;
extern TypeInfo t5087_TI;
extern Il2CppGenericClass t5087_GC;
TypeInfo t5087_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5087_MIs, t5087_PIs, NULL, NULL, NULL, NULL, NULL, &t5087_TI, t5087_ITIs, NULL, &EmptyCustomAttributesCache, &t5087_TI, &t5087_0_0_0, &t5087_1_0_0, NULL, &t5087_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5089_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTime/Which>
extern TypeInfo t5089_TI;
extern Il2CppType t3752_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29687_MI = 
{
	"GetEnumerator", NULL, &t5089_TI, &t3752_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5089_MIs[] =
{
	&m29687_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5089_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5089_0_0_0;
extern Il2CppType t5089_1_0_0;
struct t5089;
extern TypeInfo t5089_TI;
extern Il2CppGenericClass t5089_GC;
TypeInfo t5089_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5089_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5089_TI, t5089_ITIs, NULL, &EmptyCustomAttributesCache, &t5089_TI, &t5089_0_0_0, &t5089_1_0_0, NULL, &t5089_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5088_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.DateTime/Which>
extern MethodInfo m29688_MI;
extern MethodInfo m29689_MI;
static PropertyInfo t5088____Item_PropertyInfo = 
{
	&t5088_TI, "Item", &m29688_MI, &m29689_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5088_PIs[] =
{
	&t5088____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1243_0_0_0;
static ParameterInfo t5088_m29690_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1243_0_0_0},
};
extern TypeInfo t5088_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29690_MI = 
{
	"IndexOf", NULL, &t5088_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t5088_m29690_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1243_0_0_0;
static ParameterInfo t5088_m29691_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1243_0_0_0},
};
extern TypeInfo t5088_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29691_MI = 
{
	"Insert", NULL, &t5088_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5088_m29691_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5088_m29692_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5088_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29692_MI = 
{
	"RemoveAt", NULL, &t5088_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5088_m29692_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t5088_m29688_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5088_TI;
extern Il2CppType t1243_0_0_0;
extern void* RuntimeInvoker_t1243_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29688_MI = 
{
	"get_Item", NULL, &t5088_TI, &t1243_0_0_0, RuntimeInvoker_t1243_t16, t5088_m29688_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1243_0_0_0;
static ParameterInfo t5088_m29689_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1243_0_0_0},
};
extern TypeInfo t5088_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29689_MI = 
{
	"set_Item", NULL, &t5088_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t5088_m29689_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5088_MIs[] =
{
	&m29690_MI,
	&m29691_MI,
	&m29692_MI,
	&m29688_MI,
	&m29689_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5087_TI;
extern TypeInfo t5089_TI;
static TypeInfo* t5088_ITIs[] = 
{
	&t591_TI,
	&t5087_TI,
	&t5089_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5088_0_0_0;
extern Il2CppType t5088_1_0_0;
struct t5088;
extern TypeInfo t5088_TI;
extern Il2CppGenericClass t5088_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t5088_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5088_MIs, t5088_PIs, NULL, NULL, NULL, NULL, NULL, &t5088_TI, t5088_ITIs, NULL, &t1400__CustomAttributeCache, &t5088_TI, &t5088_0_0_0, &t5088_1_0_0, NULL, &t5088_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3753_TI;

#include "t1244.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DateTimeKind>
extern MethodInfo m29693_MI;
static PropertyInfo t3753____Current_PropertyInfo = 
{
	&t3753_TI, "Current", &m29693_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3753_PIs[] =
{
	&t3753____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3753_TI;
extern Il2CppType t1244_0_0_0;
extern void* RuntimeInvoker_t1244 (MethodInfo* method, void* obj, void** args);
MethodInfo m29693_MI = 
{
	"get_Current", NULL, &t3753_TI, &t1244_0_0_0, RuntimeInvoker_t1244, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3753_MIs[] =
{
	&m29693_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3753_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3753_0_0_0;
extern Il2CppType t3753_1_0_0;
struct t3753;
extern TypeInfo t3753_TI;
extern Il2CppGenericClass t3753_GC;
TypeInfo t3753_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3753_MIs, t3753_PIs, NULL, NULL, NULL, NULL, NULL, &t3753_TI, t3753_ITIs, NULL, &EmptyCustomAttributesCache, &t3753_TI, &t3753_0_0_0, &t3753_1_0_0, NULL, &t3753_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2881.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2881_TI;
#include "t2881MD.h"

extern TypeInfo t2881_TI;
extern TypeInfo t1244_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m16697_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m22696_MI;
struct t14;
 int32_t m22696 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22696_MI;


extern MethodInfo m16693_MI;
 void m16693 (t2881 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16694_MI;
 t4 * m16694 (t2881 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16697(__this, &m16697_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1244_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16695_MI;
 void m16695 (t2881 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16696_MI;
 bool m16696 (t2881 * __this, MethodInfo* method){
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
extern MethodInfo m16697_MI;
 int32_t m16697 (t2881 * __this, MethodInfo* method){
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
		int32_t L_8 = m22696(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22696_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTimeKind>
extern Il2CppType t14_0_0_1;
FieldInfo t2881_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2881_TI, offsetof(t2881, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2881_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2881_TI, offsetof(t2881, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2881_FIs[] =
{
	&t2881_f0_FieldInfo,
	&t2881_f1_FieldInfo,
	NULL
};
extern MethodInfo m16694_MI;
static PropertyInfo t2881____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2881_TI, "System.Collections.IEnumerator.Current", &m16694_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16697_MI;
static PropertyInfo t2881____Current_PropertyInfo = 
{
	&t2881_TI, "Current", &m16697_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2881_PIs[] =
{
	&t2881____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2881____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2881_m16693_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2881_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16693_MI = 
{
	".ctor", (methodPointerType)&m16693, &t2881_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2881_m16693_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2881_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16694_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16694, &t2881_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2881_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m16695_MI = 
{
	"Dispose", (methodPointerType)&m16695, &t2881_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2881_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16696_MI = 
{
	"MoveNext", (methodPointerType)&m16696, &t2881_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2881_TI;
extern Il2CppType t1244_0_0_0;
extern void* RuntimeInvoker_t1244 (MethodInfo* method, void* obj, void** args);
MethodInfo m16697_MI = 
{
	"get_Current", (methodPointerType)&m16697, &t2881_TI, &t1244_0_0_0, RuntimeInvoker_t1244, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2881_MIs[] =
{
	&m16693_MI,
	&m16694_MI,
	&m16695_MI,
	&m16696_MI,
	&m16697_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m16694_MI;
extern MethodInfo m16696_MI;
extern MethodInfo m16695_MI;
extern MethodInfo m16697_MI;
static MethodInfo* t2881_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m16694_MI,
	&m16696_MI,
	&m16695_MI,
	&m16697_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3753_TI;
static TypeInfo* t2881_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3753_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3753_TI;
static Il2CppInterfaceOffsetPair t2881_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3753_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2881_0_0_0;
extern Il2CppType t2881_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2881_TI;
extern Il2CppGenericClass t2881_GC;
extern TypeInfo t14_TI;
TypeInfo t2881_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2881_MIs, t2881_PIs, t2881_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2881_TI, t2881_ITIs, t2881_VT, &EmptyCustomAttributesCache, &t2881_TI, &t2881_0_0_0, &t2881_1_0_0, t2881_IOs, &t2881_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2881)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5090_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTimeKind>
extern MethodInfo m29694_MI;
static PropertyInfo t5090____Count_PropertyInfo = 
{
	&t5090_TI, "Count", &m29694_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29695_MI;
static PropertyInfo t5090____IsReadOnly_PropertyInfo = 
{
	&t5090_TI, "IsReadOnly", &m29695_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5090_PIs[] =
{
	&t5090____Count_PropertyInfo,
	&t5090____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5090_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29694_MI = 
{
	"get_Count", NULL, &t5090_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5090_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29695_MI = 
{
	"get_IsReadOnly", NULL, &t5090_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1244_0_0_0;
static ParameterInfo t5090_m29696_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1244_0_0_0},
};
extern TypeInfo t5090_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29696_MI = 
{
	"Add", NULL, &t5090_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t5090_m29696_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5090_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m29697_MI = 
{
	"Clear", NULL, &t5090_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1244_0_0_0;
static ParameterInfo t5090_m29698_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1244_0_0_0},
};
extern TypeInfo t5090_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29698_MI = 
{
	"Contains", NULL, &t5090_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5090_m29698_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3093_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t5090_m29699_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3093_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t5090_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29699_MI = 
{
	"CopyTo", NULL, &t5090_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t5090_m29699_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1244_0_0_0;
static ParameterInfo t5090_m29700_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1244_0_0_0},
};
extern TypeInfo t5090_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m29700_MI = 
{
	"Remove", NULL, &t5090_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t5090_m29700_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5090_MIs[] =
{
	&m29694_MI,
	&m29695_MI,
	&m29696_MI,
	&m29697_MI,
	&m29698_MI,
	&m29699_MI,
	&m29700_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t5092_TI;
static TypeInfo* t5090_ITIs[] = 
{
	&t591_TI,
	&t5092_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5090_0_0_0;
extern Il2CppType t5090_1_0_0;
struct t5090;
extern TypeInfo t5090_TI;
extern Il2CppGenericClass t5090_GC;
TypeInfo t5090_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5090_MIs, t5090_PIs, NULL, NULL, NULL, NULL, NULL, &t5090_TI, t5090_ITIs, NULL, &EmptyCustomAttributesCache, &t5090_TI, &t5090_0_0_0, &t5090_1_0_0, NULL, &t5090_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5092_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTimeKind>
extern TypeInfo t5092_TI;
extern Il2CppType t3753_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29701_MI = 
{
	"GetEnumerator", NULL, &t5092_TI, &t3753_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5092_MIs[] =
{
	&m29701_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t5092_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5092_0_0_0;
extern Il2CppType t5092_1_0_0;
struct t5092;
extern TypeInfo t5092_TI;
extern Il2CppGenericClass t5092_GC;
TypeInfo t5092_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5092_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5092_TI, t5092_ITIs, NULL, &EmptyCustomAttributesCache, &t5092_TI, &t5092_0_0_0, &t5092_1_0_0, NULL, &t5092_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
