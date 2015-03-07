#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1859.h"
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
extern TypeInfo t1859_TI;
#include "t1859MD.h"

#include "t4.h"
#include "t316.h"
#include "t18.h"
#include "t8.h"
#include "t1270.h"
#include "t17.h"
#include "t16.h"
#include "t19.h"
extern TypeInfo t1859_TI;
extern TypeInfo t316_TI;
extern TypeInfo t1270_TI;
#include "t1270MD.h"
#include "t16MD.h"
extern MethodInfo m10141_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m17833_MI;
struct t16;
#include "t1234.h"
 t316  m17833 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17833_MI;


extern MethodInfo m10137_MI;
 void m10137 (t1859 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10138_MI;
 t4 * m10138 (t1859 * __this, MethodInfo* method){
	{
		t316  L_0 = m10141(__this, &m10141_MI);
		t316  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t316_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10139_MI;
 void m10139 (t1859 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10140_MI;
 bool m10140 (t1859 * __this, MethodInfo* method){
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
extern MethodInfo m10141_MI;
 t316  m10141 (t1859 * __this, MethodInfo* method){
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
		t316  L_8 = m17833(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m17833_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
extern Il2CppType t16_0_0_1;
FieldInfo t1859_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1859_TI, offsetof(t1859, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1859_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1859_TI, offsetof(t1859, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1859_FIs[] =
{
	&t1859_f0_FieldInfo,
	&t1859_f1_FieldInfo,
	NULL
};
extern MethodInfo m10138_MI;
static PropertyInfo t1859____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1859_TI, "System.Collections.IEnumerator.Current", &m10138_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10141_MI;
static PropertyInfo t1859____Current_PropertyInfo = 
{
	&t1859_TI, "Current", &m10141_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1859_PIs[] =
{
	&t1859____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1859____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1859_m10137_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1859_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10137_MI = 
{
	".ctor", (methodPointerType)&m10137, &t1859_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1859_m10137_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1859_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10138_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10138, &t1859_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1859_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10139_MI = 
{
	"Dispose", (methodPointerType)&m10139, &t1859_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1859_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10140_MI = 
{
	"MoveNext", (methodPointerType)&m10140, &t1859_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1859_TI;
extern Il2CppType t316_0_0_0;
extern void* RuntimeInvoker_t316 (MethodInfo* method, void* obj, void** args);
MethodInfo m10141_MI = 
{
	"get_Current", (methodPointerType)&m10141, &t1859_TI, &t316_0_0_0, RuntimeInvoker_t316, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1859_MIs[] =
{
	&m10137_MI,
	&m10138_MI,
	&m10139_MI,
	&m10140_MI,
	&m10141_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m10138_MI;
extern MethodInfo m10140_MI;
extern MethodInfo m10139_MI;
extern MethodInfo m10141_MI;
static MethodInfo* t1859_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m10138_MI,
	&m10140_MI,
	&m10139_MI,
	&m10141_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1854_TI;
static TypeInfo* t1859_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t1854_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1854_TI;
static Il2CppInterfaceOffsetPair t1859_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t1854_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1859_0_0_0;
extern Il2CppType t1859_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1859_TI;
extern Il2CppGenericClass t1859_GC;
extern TypeInfo t16_TI;
TypeInfo t1859_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1859_MIs, t1859_PIs, t1859_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1859_TI, t1859_ITIs, t1859_VT, &EmptyCustomAttributesCache, &t1859_TI, &t1859_0_0_0, &t1859_1_0_0, t1859_IOs, &t1859_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1859)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3949_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
extern MethodInfo m23941_MI;
extern MethodInfo m23942_MI;
static PropertyInfo t3949____Item_PropertyInfo = 
{
	&t3949_TI, "Item", &m23941_MI, &m23942_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3949_PIs[] =
{
	&t3949____Item_PropertyInfo,
	NULL
};
extern Il2CppType t316_0_0_0;
static ParameterInfo t3949_m23943_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern TypeInfo t3949_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t316 (MethodInfo* method, void* obj, void** args);
MethodInfo m23943_MI = 
{
	"IndexOf", NULL, &t3949_TI, &t18_0_0_0, RuntimeInvoker_t18_t316, t3949_m23943_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t316_0_0_0;
static ParameterInfo t3949_m23944_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern TypeInfo t3949_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t316 (MethodInfo* method, void* obj, void** args);
MethodInfo m23944_MI = 
{
	"Insert", NULL, &t3949_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t316, t3949_m23944_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3949_m23945_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3949_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23945_MI = 
{
	"RemoveAt", NULL, &t3949_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t3949_m23945_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3949_m23941_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3949_TI;
extern Il2CppType t316_0_0_0;
extern void* RuntimeInvoker_t316_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23941_MI = 
{
	"get_Item", NULL, &t3949_TI, &t316_0_0_0, RuntimeInvoker_t316_t18, t3949_m23941_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t316_0_0_0;
static ParameterInfo t3949_m23942_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern TypeInfo t3949_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t316 (MethodInfo* method, void* obj, void** args);
MethodInfo m23942_MI = 
{
	"set_Item", NULL, &t3949_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t316, t3949_m23942_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3949_MIs[] =
{
	&m23943_MI,
	&m23944_MI,
	&m23945_MI,
	&m23941_MI,
	&m23942_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3948_TI;
extern TypeInfo t3950_TI;
static TypeInfo* t3949_ITIs[] = 
{
	&t592_TI,
	&t3948_TI,
	&t3950_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3949_0_0_0;
extern Il2CppType t3949_1_0_0;
struct t3949;
extern TypeInfo t3949_TI;
extern Il2CppGenericClass t3949_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t3949_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3949_MIs, t3949_PIs, NULL, NULL, NULL, NULL, NULL, &t3949_TI, t3949_ITIs, NULL, &t1401__CustomAttributeCache, &t3949_TI, &t3949_0_0_0, &t3949_1_0_0, NULL, &t3949_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5150_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t18_0_0_0;
static ParameterInfo t5150_m23946_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5150_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23946_MI = 
{
	"Remove", NULL, &t5150_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t5150_m23946_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5150_MIs[] =
{
	&m23946_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3948_TI;
extern TypeInfo t3950_TI;
static TypeInfo* t5150_ITIs[] = 
{
	&t592_TI,
	&t3948_TI,
	&t3950_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5150_0_0_0;
extern Il2CppType t5150_1_0_0;
struct t5150;
extern TypeInfo t5150_TI;
extern Il2CppGenericClass t5150_GC;
extern CustomAttributesCache t1461__CustomAttributeCache;
TypeInfo t5150_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5150_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5150_TI, t5150_ITIs, NULL, &t1461__CustomAttributeCache, &t5150_TI, &t5150_0_0_0, &t5150_1_0_0, NULL, &t5150_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1851_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Int32>
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1851_m23869_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1851_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23869_MI = 
{
	"Equals", NULL, &t1851_TI, &t19_0_0_0, RuntimeInvoker_t19_t18_t18, t1851_m23869_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1851_m23868_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1851_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23868_MI = 
{
	"GetHashCode", NULL, &t1851_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t1851_m23868_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1851_MIs[] =
{
	&m23869_MI,
	&m23868_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1851_0_0_0;
extern Il2CppType t1851_1_0_0;
struct t1851;
extern TypeInfo t1851_TI;
extern Il2CppGenericClass t1851_GC;
TypeInfo t1851_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t1851_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1851_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1851_TI, &t1851_0_0_0, &t1851_1_0_0, NULL, &t1851_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3358_TI;

#include "t826.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.Link>
extern MethodInfo m23947_MI;
static PropertyInfo t3358____Current_PropertyInfo = 
{
	&t3358_TI, "Current", &m23947_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3358_PIs[] =
{
	&t3358____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3358_TI;
extern Il2CppType t826_0_0_0;
extern void* RuntimeInvoker_t826 (MethodInfo* method, void* obj, void** args);
MethodInfo m23947_MI = 
{
	"get_Current", NULL, &t3358_TI, &t826_0_0_0, RuntimeInvoker_t826, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3358_MIs[] =
{
	&m23947_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3358_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3358_0_0_0;
extern Il2CppType t3358_1_0_0;
struct t3358;
extern TypeInfo t3358_TI;
extern Il2CppGenericClass t3358_GC;
TypeInfo t3358_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3358_MIs, t3358_PIs, NULL, NULL, NULL, NULL, NULL, &t3358_TI, t3358_ITIs, NULL, &EmptyCustomAttributesCache, &t3358_TI, &t3358_0_0_0, &t3358_1_0_0, NULL, &t3358_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1860.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1860_TI;
#include "t1860MD.h"

extern TypeInfo t1860_TI;
extern TypeInfo t826_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m10146_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m17844_MI;
struct t16;
 t826  m17844 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17844_MI;


extern MethodInfo m10142_MI;
 void m10142 (t1860 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10143_MI;
 t4 * m10143 (t1860 * __this, MethodInfo* method){
	{
		t826  L_0 = m10146(__this, &m10146_MI);
		t826  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t826_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10144_MI;
 void m10144 (t1860 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10145_MI;
 bool m10145 (t1860 * __this, MethodInfo* method){
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
extern MethodInfo m10146_MI;
 t826  m10146 (t1860 * __this, MethodInfo* method){
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
		t826  L_8 = m17844(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m17844_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.Link>
extern Il2CppType t16_0_0_1;
FieldInfo t1860_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1860_TI, offsetof(t1860, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1860_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1860_TI, offsetof(t1860, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1860_FIs[] =
{
	&t1860_f0_FieldInfo,
	&t1860_f1_FieldInfo,
	NULL
};
extern MethodInfo m10143_MI;
static PropertyInfo t1860____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1860_TI, "System.Collections.IEnumerator.Current", &m10143_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10146_MI;
static PropertyInfo t1860____Current_PropertyInfo = 
{
	&t1860_TI, "Current", &m10146_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1860_PIs[] =
{
	&t1860____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1860____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1860_m10142_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1860_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10142_MI = 
{
	".ctor", (methodPointerType)&m10142, &t1860_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1860_m10142_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1860_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10143_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10143, &t1860_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1860_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10144_MI = 
{
	"Dispose", (methodPointerType)&m10144, &t1860_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1860_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10145_MI = 
{
	"MoveNext", (methodPointerType)&m10145, &t1860_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1860_TI;
extern Il2CppType t826_0_0_0;
extern void* RuntimeInvoker_t826 (MethodInfo* method, void* obj, void** args);
MethodInfo m10146_MI = 
{
	"get_Current", (methodPointerType)&m10146, &t1860_TI, &t826_0_0_0, RuntimeInvoker_t826, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1860_MIs[] =
{
	&m10142_MI,
	&m10143_MI,
	&m10144_MI,
	&m10145_MI,
	&m10146_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m10143_MI;
extern MethodInfo m10145_MI;
extern MethodInfo m10144_MI;
extern MethodInfo m10146_MI;
static MethodInfo* t1860_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m10143_MI,
	&m10145_MI,
	&m10144_MI,
	&m10146_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3358_TI;
static TypeInfo* t1860_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3358_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3358_TI;
static Il2CppInterfaceOffsetPair t1860_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3358_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1860_0_0_0;
extern Il2CppType t1860_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1860_TI;
extern Il2CppGenericClass t1860_GC;
extern TypeInfo t16_TI;
TypeInfo t1860_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1860_MIs, t1860_PIs, t1860_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1860_TI, t1860_ITIs, t1860_VT, &EmptyCustomAttributesCache, &t1860_TI, &t1860_0_0_0, &t1860_1_0_0, t1860_IOs, &t1860_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1860)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3951_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.Link>
extern MethodInfo m23948_MI;
static PropertyInfo t3951____Count_PropertyInfo = 
{
	&t3951_TI, "Count", &m23948_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23949_MI;
static PropertyInfo t3951____IsReadOnly_PropertyInfo = 
{
	&t3951_TI, "IsReadOnly", &m23949_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3951_PIs[] =
{
	&t3951____Count_PropertyInfo,
	&t3951____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3951_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23948_MI = 
{
	"get_Count", NULL, &t3951_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3951_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m23949_MI = 
{
	"get_IsReadOnly", NULL, &t3951_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t826_0_0_0;
static ParameterInfo t3951_m23950_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t826_0_0_0},
};
extern TypeInfo t3951_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t826 (MethodInfo* method, void* obj, void** args);
MethodInfo m23950_MI = 
{
	"Add", NULL, &t3951_TI, &t17_0_0_0, RuntimeInvoker_t17_t826, t3951_m23950_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3951_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m23951_MI = 
{
	"Clear", NULL, &t3951_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t826_0_0_0;
static ParameterInfo t3951_m23952_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t826_0_0_0},
};
extern TypeInfo t3951_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t826 (MethodInfo* method, void* obj, void** args);
MethodInfo m23952_MI = 
{
	"Contains", NULL, &t3951_TI, &t19_0_0_0, RuntimeInvoker_t19_t826, t3951_m23952_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1451_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t3951_m23953_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1451_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3951_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23953_MI = 
{
	"CopyTo", NULL, &t3951_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t3951_m23953_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t826_0_0_0;
static ParameterInfo t3951_m23954_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t826_0_0_0},
};
extern TypeInfo t3951_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t826 (MethodInfo* method, void* obj, void** args);
MethodInfo m23954_MI = 
{
	"Remove", NULL, &t3951_TI, &t19_0_0_0, RuntimeInvoker_t19_t826, t3951_m23954_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3951_MIs[] =
{
	&m23948_MI,
	&m23949_MI,
	&m23950_MI,
	&m23951_MI,
	&m23952_MI,
	&m23953_MI,
	&m23954_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3953_TI;
static TypeInfo* t3951_ITIs[] = 
{
	&t592_TI,
	&t3953_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3951_0_0_0;
extern Il2CppType t3951_1_0_0;
struct t3951;
extern TypeInfo t3951_TI;
extern Il2CppGenericClass t3951_GC;
TypeInfo t3951_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3951_MIs, t3951_PIs, NULL, NULL, NULL, NULL, NULL, &t3951_TI, t3951_ITIs, NULL, &EmptyCustomAttributesCache, &t3951_TI, &t3951_0_0_0, &t3951_1_0_0, NULL, &t3951_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3953_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.Link>
extern TypeInfo t3953_TI;
extern Il2CppType t3358_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23955_MI = 
{
	"GetEnumerator", NULL, &t3953_TI, &t3358_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3953_MIs[] =
{
	&m23955_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t3953_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3953_0_0_0;
extern Il2CppType t3953_1_0_0;
struct t3953;
extern TypeInfo t3953_TI;
extern Il2CppGenericClass t3953_GC;
TypeInfo t3953_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3953_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3953_TI, t3953_ITIs, NULL, &EmptyCustomAttributesCache, &t3953_TI, &t3953_0_0_0, &t3953_1_0_0, NULL, &t3953_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3952_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.Link>
extern MethodInfo m23956_MI;
extern MethodInfo m23957_MI;
static PropertyInfo t3952____Item_PropertyInfo = 
{
	&t3952_TI, "Item", &m23956_MI, &m23957_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3952_PIs[] =
{
	&t3952____Item_PropertyInfo,
	NULL
};
extern Il2CppType t826_0_0_0;
static ParameterInfo t3952_m23958_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t826_0_0_0},
};
extern TypeInfo t3952_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t826 (MethodInfo* method, void* obj, void** args);
MethodInfo m23958_MI = 
{
	"IndexOf", NULL, &t3952_TI, &t18_0_0_0, RuntimeInvoker_t18_t826, t3952_m23958_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t826_0_0_0;
static ParameterInfo t3952_m23959_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t826_0_0_0},
};
extern TypeInfo t3952_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t826 (MethodInfo* method, void* obj, void** args);
MethodInfo m23959_MI = 
{
	"Insert", NULL, &t3952_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t826, t3952_m23959_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3952_m23960_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3952_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23960_MI = 
{
	"RemoveAt", NULL, &t3952_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t3952_m23960_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3952_m23956_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3952_TI;
extern Il2CppType t826_0_0_0;
extern void* RuntimeInvoker_t826_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23956_MI = 
{
	"get_Item", NULL, &t3952_TI, &t826_0_0_0, RuntimeInvoker_t826_t18, t3952_m23956_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t826_0_0_0;
static ParameterInfo t3952_m23957_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t826_0_0_0},
};
extern TypeInfo t3952_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t826 (MethodInfo* method, void* obj, void** args);
MethodInfo m23957_MI = 
{
	"set_Item", NULL, &t3952_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t826, t3952_m23957_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3952_MIs[] =
{
	&m23958_MI,
	&m23959_MI,
	&m23960_MI,
	&m23956_MI,
	&m23957_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3951_TI;
extern TypeInfo t3953_TI;
static TypeInfo* t3952_ITIs[] = 
{
	&t592_TI,
	&t3951_TI,
	&t3953_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3952_0_0_0;
extern Il2CppType t3952_1_0_0;
struct t3952;
extern TypeInfo t3952_TI;
extern Il2CppGenericClass t3952_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t3952_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3952_MIs, t3952_PIs, NULL, NULL, NULL, NULL, NULL, &t3952_TI, t3952_ITIs, NULL, &t1401__CustomAttributeCache, &t3952_TI, &t3952_0_0_0, &t3952_1_0_0, NULL, &t3952_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1863_TI;

#include "t43.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PointerEventData>
extern MethodInfo m23961_MI;
static PropertyInfo t1863____Current_PropertyInfo = 
{
	&t1863_TI, "Current", &m23961_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1863_PIs[] =
{
	&t1863____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1863_TI;
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23961_MI = 
{
	"get_Current", NULL, &t1863_TI, &t43_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1863_MIs[] =
{
	&m23961_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t1863_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1863_0_0_0;
extern Il2CppType t1863_1_0_0;
struct t1863;
extern TypeInfo t1863_TI;
extern Il2CppGenericClass t1863_GC;
TypeInfo t1863_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1863_MIs, t1863_PIs, NULL, NULL, NULL, NULL, NULL, &t1863_TI, t1863_ITIs, NULL, &EmptyCustomAttributesCache, &t1863_TI, &t1863_0_0_0, &t1863_1_0_0, NULL, &t1863_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1861.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1861_TI;
#include "t1861MD.h"

extern TypeInfo t1861_TI;
extern TypeInfo t43_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m10151_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m17855_MI;
struct t16;
struct t16;
 t4 * m16827_gshared (t16 * __this, int32_t p0, MethodInfo* method);
#define m16827(__this, p0, method) (t4 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
#define m17855(__this, p0, method) (t43 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m17855_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t16_0_0_1;
FieldInfo t1861_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1861_TI, offsetof(t1861, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1861_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1861_TI, offsetof(t1861, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1861_FIs[] =
{
	&t1861_f0_FieldInfo,
	&t1861_f1_FieldInfo,
	NULL
};
extern MethodInfo m10148_MI;
static PropertyInfo t1861____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1861_TI, "System.Collections.IEnumerator.Current", &m10148_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10151_MI;
static PropertyInfo t1861____Current_PropertyInfo = 
{
	&t1861_TI, "Current", &m10151_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1861_PIs[] =
{
	&t1861____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1861____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1861_m10147_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1861_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10147_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t1861_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1861_m10147_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1861_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10148_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t1861_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1861_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10149_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t1861_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1861_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10150_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t1861_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1861_TI;
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10151_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t1861_TI, &t43_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1861_MIs[] =
{
	&m10147_MI,
	&m10148_MI,
	&m10149_MI,
	&m10150_MI,
	&m10151_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m10148_MI;
extern MethodInfo m10150_MI;
extern MethodInfo m10149_MI;
extern MethodInfo m10151_MI;
static MethodInfo* t1861_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m10148_MI,
	&m10150_MI,
	&m10149_MI,
	&m10151_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1863_TI;
static TypeInfo* t1861_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t1863_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1863_TI;
static Il2CppInterfaceOffsetPair t1861_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t1863_TI, 7},
};
extern MethodInfo m10151_MI;
extern TypeInfo t43_TI;
extern MethodInfo m17855_MI;
static void* t1861_RGCTXData[3] = 
{
	&m10151_MI,
	&t43_TI,
	&m17855_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1861_0_0_0;
extern Il2CppType t1861_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1861_TI;
extern Il2CppGenericClass t1861_GC;
extern TypeInfo t16_TI;
TypeInfo t1861_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1861_MIs, t1861_PIs, t1861_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1861_TI, t1861_ITIs, t1861_VT, &EmptyCustomAttributesCache, &t1861_TI, &t1861_0_0_0, &t1861_1_0_0, t1861_IOs, &t1861_GC, NULL, NULL, NULL, t1861_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1861)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3954_TI;

#include "UnityEngine.UI_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>
extern MethodInfo m23962_MI;
static PropertyInfo t3954____Count_PropertyInfo = 
{
	&t3954_TI, "Count", &m23962_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23963_MI;
static PropertyInfo t3954____IsReadOnly_PropertyInfo = 
{
	&t3954_TI, "IsReadOnly", &m23963_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3954_PIs[] =
{
	&t3954____Count_PropertyInfo,
	&t3954____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3954_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23962_MI = 
{
	"get_Count", NULL, &t3954_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3954_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m23963_MI = 
{
	"get_IsReadOnly", NULL, &t3954_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t3954_m23964_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t3954_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23964_MI = 
{
	"Add", NULL, &t3954_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3954_m23964_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3954_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m23965_MI = 
{
	"Clear", NULL, &t3954_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t3954_m23966_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t3954_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23966_MI = 
{
	"Contains", NULL, &t3954_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t3954_m23966_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1850_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t3954_m23967_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1850_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3954_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23967_MI = 
{
	"CopyTo", NULL, &t3954_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t3954_m23967_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t3954_m23968_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t3954_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23968_MI = 
{
	"Remove", NULL, &t3954_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t3954_m23968_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3954_MIs[] =
{
	&m23962_MI,
	&m23963_MI,
	&m23964_MI,
	&m23965_MI,
	&m23966_MI,
	&m23967_MI,
	&m23968_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3956_TI;
static TypeInfo* t3954_ITIs[] = 
{
	&t592_TI,
	&t3956_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3954_0_0_0;
extern Il2CppType t3954_1_0_0;
struct t3954;
extern TypeInfo t3954_TI;
extern Il2CppGenericClass t3954_GC;
TypeInfo t3954_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3954_MIs, t3954_PIs, NULL, NULL, NULL, NULL, NULL, &t3954_TI, t3954_ITIs, NULL, &EmptyCustomAttributesCache, &t3954_TI, &t3954_0_0_0, &t3954_1_0_0, NULL, &t3954_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3956_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.PointerEventData>
extern TypeInfo t3956_TI;
extern Il2CppType t1863_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23969_MI = 
{
	"GetEnumerator", NULL, &t3956_TI, &t1863_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3956_MIs[] =
{
	&m23969_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t3956_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3956_0_0_0;
extern Il2CppType t3956_1_0_0;
struct t3956;
extern TypeInfo t3956_TI;
extern Il2CppGenericClass t3956_GC;
TypeInfo t3956_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3956_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3956_TI, t3956_ITIs, NULL, &EmptyCustomAttributesCache, &t3956_TI, &t3956_0_0_0, &t3956_1_0_0, NULL, &t3956_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3955_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerEventData>
extern MethodInfo m23970_MI;
extern MethodInfo m23971_MI;
static PropertyInfo t3955____Item_PropertyInfo = 
{
	&t3955_TI, "Item", &m23970_MI, &m23971_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3955_PIs[] =
{
	&t3955____Item_PropertyInfo,
	NULL
};
extern Il2CppType t43_0_0_0;
static ParameterInfo t3955_m23972_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t3955_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23972_MI = 
{
	"IndexOf", NULL, &t3955_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t3955_m23972_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t43_0_0_0;
static ParameterInfo t3955_m23973_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t3955_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23973_MI = 
{
	"Insert", NULL, &t3955_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t3955_m23973_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3955_m23974_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3955_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23974_MI = 
{
	"RemoveAt", NULL, &t3955_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t3955_m23974_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3955_m23970_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3955_TI;
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23970_MI = 
{
	"get_Item", NULL, &t3955_TI, &t43_0_0_0, RuntimeInvoker_t4_t18, t3955_m23970_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t43_0_0_0;
static ParameterInfo t3955_m23971_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t3955_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23971_MI = 
{
	"set_Item", NULL, &t3955_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t3955_m23971_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3955_MIs[] =
{
	&m23972_MI,
	&m23973_MI,
	&m23974_MI,
	&m23970_MI,
	&m23971_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3954_TI;
extern TypeInfo t3956_TI;
static TypeInfo* t3955_ITIs[] = 
{
	&t592_TI,
	&t3954_TI,
	&t3956_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3955_0_0_0;
extern Il2CppType t3955_1_0_0;
struct t3955;
extern TypeInfo t3955_TI;
extern Il2CppGenericClass t3955_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t3955_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3955_MIs, t3955_PIs, NULL, NULL, NULL, NULL, NULL, &t3955_TI, t3955_ITIs, NULL, &t1401__CustomAttributeCache, &t3955_TI, &t3955_0_0_0, &t3955_1_0_0, NULL, &t3955_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3957_TI;

#include "t40.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseEventData>
extern MethodInfo m23975_MI;
static PropertyInfo t3957____Count_PropertyInfo = 
{
	&t3957_TI, "Count", &m23975_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23976_MI;
static PropertyInfo t3957____IsReadOnly_PropertyInfo = 
{
	&t3957_TI, "IsReadOnly", &m23976_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3957_PIs[] =
{
	&t3957____Count_PropertyInfo,
	&t3957____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3957_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23975_MI = 
{
	"get_Count", NULL, &t3957_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3957_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m23976_MI = 
{
	"get_IsReadOnly", NULL, &t3957_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t3957_m23977_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t3957_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23977_MI = 
{
	"Add", NULL, &t3957_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3957_m23977_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3957_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m23978_MI = 
{
	"Clear", NULL, &t3957_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t3957_m23979_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t3957_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23979_MI = 
{
	"Contains", NULL, &t3957_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t3957_m23979_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3204_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t3957_m23980_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3204_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3957_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23980_MI = 
{
	"CopyTo", NULL, &t3957_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t3957_m23980_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t40_0_0_0;
static ParameterInfo t3957_m23981_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t3957_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23981_MI = 
{
	"Remove", NULL, &t3957_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t3957_m23981_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3957_MIs[] =
{
	&m23975_MI,
	&m23976_MI,
	&m23977_MI,
	&m23978_MI,
	&m23979_MI,
	&m23980_MI,
	&m23981_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3959_TI;
static TypeInfo* t3957_ITIs[] = 
{
	&t592_TI,
	&t3959_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3957_0_0_0;
extern Il2CppType t3957_1_0_0;
struct t3957;
extern TypeInfo t3957_TI;
extern Il2CppGenericClass t3957_GC;
TypeInfo t3957_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3957_MIs, t3957_PIs, NULL, NULL, NULL, NULL, NULL, &t3957_TI, t3957_ITIs, NULL, &EmptyCustomAttributesCache, &t3957_TI, &t3957_0_0_0, &t3957_1_0_0, NULL, &t3957_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3959_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseEventData>
extern TypeInfo t3959_TI;
extern Il2CppType t3359_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23982_MI = 
{
	"GetEnumerator", NULL, &t3959_TI, &t3359_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3959_MIs[] =
{
	&m23982_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t3959_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3959_0_0_0;
extern Il2CppType t3959_1_0_0;
struct t3959;
extern TypeInfo t3959_TI;
extern Il2CppGenericClass t3959_GC;
TypeInfo t3959_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3959_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3959_TI, t3959_ITIs, NULL, &EmptyCustomAttributesCache, &t3959_TI, &t3959_0_0_0, &t3959_1_0_0, NULL, &t3959_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3359_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseEventData>
extern MethodInfo m23983_MI;
static PropertyInfo t3359____Current_PropertyInfo = 
{
	&t3359_TI, "Current", &m23983_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3359_PIs[] =
{
	&t3359____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3359_TI;
extern Il2CppType t40_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23983_MI = 
{
	"get_Current", NULL, &t3359_TI, &t40_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3359_MIs[] =
{
	&m23983_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3359_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3359_0_0_0;
extern Il2CppType t3359_1_0_0;
struct t3359;
extern TypeInfo t3359_TI;
extern Il2CppGenericClass t3359_GC;
TypeInfo t3359_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3359_MIs, t3359_PIs, NULL, NULL, NULL, NULL, NULL, &t3359_TI, t3359_ITIs, NULL, &EmptyCustomAttributesCache, &t3359_TI, &t3359_0_0_0, &t3359_1_0_0, NULL, &t3359_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1862.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1862_TI;
#include "t1862MD.h"

extern TypeInfo t1862_TI;
extern TypeInfo t40_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m10156_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m17866_MI;
struct t16;
#define m17866(__this, p0, method) (t40 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m17866_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseEventData>
extern Il2CppType t16_0_0_1;
FieldInfo t1862_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1862_TI, offsetof(t1862, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1862_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1862_TI, offsetof(t1862, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1862_FIs[] =
{
	&t1862_f0_FieldInfo,
	&t1862_f1_FieldInfo,
	NULL
};
extern MethodInfo m10153_MI;
static PropertyInfo t1862____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1862_TI, "System.Collections.IEnumerator.Current", &m10153_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10156_MI;
static PropertyInfo t1862____Current_PropertyInfo = 
{
	&t1862_TI, "Current", &m10156_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1862_PIs[] =
{
	&t1862____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1862____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1862_m10152_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1862_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10152_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t1862_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1862_m10152_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1862_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10153_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t1862_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1862_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10154_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t1862_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1862_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10155_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t1862_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1862_TI;
extern Il2CppType t40_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10156_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t1862_TI, &t40_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1862_MIs[] =
{
	&m10152_MI,
	&m10153_MI,
	&m10154_MI,
	&m10155_MI,
	&m10156_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m10153_MI;
extern MethodInfo m10155_MI;
extern MethodInfo m10154_MI;
extern MethodInfo m10156_MI;
static MethodInfo* t1862_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m10153_MI,
	&m10155_MI,
	&m10154_MI,
	&m10156_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3359_TI;
static TypeInfo* t1862_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3359_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3359_TI;
static Il2CppInterfaceOffsetPair t1862_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3359_TI, 7},
};
extern MethodInfo m10156_MI;
extern TypeInfo t40_TI;
extern MethodInfo m17866_MI;
static void* t1862_RGCTXData[3] = 
{
	&m10156_MI,
	&t40_TI,
	&m17866_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1862_0_0_0;
extern Il2CppType t1862_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1862_TI;
extern Il2CppGenericClass t1862_GC;
extern TypeInfo t16_TI;
TypeInfo t1862_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1862_MIs, t1862_PIs, t1862_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1862_TI, t1862_ITIs, t1862_VT, &EmptyCustomAttributesCache, &t1862_TI, &t1862_0_0_0, &t1862_1_0_0, t1862_IOs, &t1862_GC, NULL, NULL, NULL, t1862_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1862)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3958_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseEventData>
extern MethodInfo m23984_MI;
extern MethodInfo m23985_MI;
static PropertyInfo t3958____Item_PropertyInfo = 
{
	&t3958_TI, "Item", &m23984_MI, &m23985_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3958_PIs[] =
{
	&t3958____Item_PropertyInfo,
	NULL
};
extern Il2CppType t40_0_0_0;
static ParameterInfo t3958_m23986_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t3958_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23986_MI = 
{
	"IndexOf", NULL, &t3958_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t3958_m23986_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t40_0_0_0;
static ParameterInfo t3958_m23987_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t3958_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23987_MI = 
{
	"Insert", NULL, &t3958_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t3958_m23987_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3958_m23988_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3958_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23988_MI = 
{
	"RemoveAt", NULL, &t3958_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t3958_m23988_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3958_m23984_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3958_TI;
extern Il2CppType t40_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23984_MI = 
{
	"get_Item", NULL, &t3958_TI, &t40_0_0_0, RuntimeInvoker_t4_t18, t3958_m23984_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t40_0_0_0;
static ParameterInfo t3958_m23985_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t40_0_0_0},
};
extern TypeInfo t3958_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23985_MI = 
{
	"set_Item", NULL, &t3958_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t3958_m23985_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3958_MIs[] =
{
	&m23986_MI,
	&m23987_MI,
	&m23988_MI,
	&m23984_MI,
	&m23985_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3957_TI;
extern TypeInfo t3959_TI;
static TypeInfo* t3958_ITIs[] = 
{
	&t592_TI,
	&t3957_TI,
	&t3959_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3958_0_0_0;
extern Il2CppType t3958_1_0_0;
struct t3958;
extern TypeInfo t3958_TI;
extern Il2CppGenericClass t3958_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t3958_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3958_MIs, t3958_PIs, NULL, NULL, NULL, NULL, NULL, &t3958_TI, t3958_ITIs, NULL, &t1401__CustomAttributeCache, &t3958_TI, &t3958_0_0_0, &t3958_1_0_0, NULL, &t3958_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t315.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t315_TI;
#include "t315MD.h"

#include "t110.h"
#include "t330.h"
#include "t337.h"
#include "t314.h"
#include "t1864.h"
#include "t56.h"
extern TypeInfo t315_TI;
extern TypeInfo t641_TI;
extern TypeInfo t4_TI;
extern TypeInfo t110_TI;
extern TypeInfo t18_TI;
extern TypeInfo t330_TI;
extern TypeInfo t337_TI;
extern TypeInfo t314_TI;
extern TypeInfo t1850_TI;
extern TypeInfo t43_TI;
extern TypeInfo t17_TI;
extern TypeInfo t1864_TI;
#include "t110MD.h"
#include "t4MD.h"
#include "t330MD.h"
#include "t337MD.h"
#include "t1864MD.h"
#include "t314MD.h"
extern MethodInfo m7399_MI;
extern MethodInfo m10097_MI;
extern MethodInfo m24_MI;
extern MethodInfo m2947_MI;
extern MethodInfo m7009_MI;
extern MethodInfo m10107_MI;
extern MethodInfo m1419_MI;
extern MethodInfo m10168_MI;
extern MethodInfo m10101_MI;
extern MethodInfo m10103_MI;
extern MethodInfo m10182_MI;
extern MethodInfo m17877_MI;
extern MethodInfo m17878_MI;
extern MethodInfo m10170_MI;
struct t110;
#include "t294.h"
#include "t31.h"
#include "t295.h"
#include "t307.h"
 void m17877 (t110 * __this, t16 * p0, int32_t p1, t1864 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17877_MI;
struct t110;
 void m17878 (t110 * __this, t1850* p0, int32_t p1, t1864 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17878_MI;


extern MethodInfo m10157_MI;
 void m10157 (t315 * __this, t110 * p0, MethodInfo* method){
	{
		m24(__this, &m24_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t330 * L_0 = (t330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t330_TI));
		m2947(L_0, (t8*) &_stringLiteral549, &m2947_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m10158_MI;
 void m10158 (t315 * __this, t43 * p0, MethodInfo* method){
	{
		t337 * L_0 = (t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t337_TI));
		m7009(L_0, (t8*) &_stringLiteral550, &m7009_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10159_MI;
 void m10159 (t315 * __this, MethodInfo* method){
	{
		t337 * L_0 = (t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t337_TI));
		m7009(L_0, (t8*) &_stringLiteral550, &m7009_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10160_MI;
 bool m10160 (t315 * __this, t43 * p0, MethodInfo* method){
	{
		t110 * L_0 = (__this->f0);
		bool L_1 = m10107(L_0, p0, &m10107_MI);
		return L_1;
	}
}
extern MethodInfo m10161_MI;
 bool m10161 (t315 * __this, t43 * p0, MethodInfo* method){
	{
		t337 * L_0 = (t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t337_TI));
		m7009(L_0, (t8*) &_stringLiteral550, &m7009_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10162_MI;
 t4* m10162 (t315 * __this, MethodInfo* method){
	{
		t314  L_0 = m1419(__this, &m1419_MI);
		t314  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t314_TI), &L_1);
		return (t4*)L_2;
	}
}
extern MethodInfo m10163_MI;
 void m10163 (t315 * __this, t16 * p0, int32_t p1, MethodInfo* method){
	t1850* V_0 = {0};
	{
		V_0 = ((t1850*)IsInst(p0, InitializedTypeInfo(&t1850_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t1850*, int32_t >::Invoke(&m10168_MI, __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t110 * L_0 = (__this->f0);
		m10101(L_0, p0, p1, &m10101_MI);
		t110 * L_1 = (__this->f0);
		t56 L_2 = { &m10103_MI };
		t1864 * L_3 = (t1864 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1864_TI));
		m10182(L_3, NULL, L_2, &m10182_MI);
		m17877(L_1, p0, p1, L_3, &m17877_MI);
		return;
	}
}
extern MethodInfo m10164_MI;
 t4 * m10164 (t315 * __this, MethodInfo* method){
	{
		t314  L_0 = m1419(__this, &m1419_MI);
		t314  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t314_TI), &L_1);
		return (t4 *)L_2;
	}
}
extern MethodInfo m10165_MI;
 bool m10165 (t315 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m10166_MI;
 bool m10166 (t315 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m10167_MI;
 t4 * m10167 (t315 * __this, MethodInfo* method){
	{
		t110 * L_0 = (__this->f0);
		t4 * L_1 = (t4 *)InterfaceFuncInvoker0< t4 * >::Invoke(&m7399_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m10168_MI;
 void m10168 (t315 * __this, t1850* p0, int32_t p1, MethodInfo* method){
	{
		t110 * L_0 = (__this->f0);
		m10101(L_0, (t16 *)(t16 *)p0, p1, &m10101_MI);
		t110 * L_1 = (__this->f0);
		t56 L_2 = { &m10103_MI };
		t1864 * L_3 = (t1864 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1864_TI));
		m10182(L_3, NULL, L_2, &m10182_MI);
		m17878(L_1, p0, p1, L_3, &m17878_MI);
		return;
	}
}
extern MethodInfo m1419_MI;
 t314  m1419 (t315 * __this, MethodInfo* method){
	{
		t110 * L_0 = (__this->f0);
		t314  L_1 = {0};
		m10170(&L_1, L_0, &m10170_MI);
		return L_1;
	}
}
extern MethodInfo m10169_MI;
 int32_t m10169 (t315 * __this, MethodInfo* method){
	{
		t110 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m10097_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t110_0_0_1;
FieldInfo t315_f0_FieldInfo = 
{
	"dictionary", &t110_0_0_1, &t315_TI, offsetof(t315, f0), &EmptyCustomAttributesCache};
static FieldInfo* t315_FIs[] =
{
	&t315_f0_FieldInfo,
	NULL
};
extern MethodInfo m10165_MI;
static PropertyInfo t315____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t315_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m10165_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10166_MI;
static PropertyInfo t315____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t315_TI, "System.Collections.ICollection.IsSynchronized", &m10166_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10167_MI;
static PropertyInfo t315____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t315_TI, "System.Collections.ICollection.SyncRoot", &m10167_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10169_MI;
static PropertyInfo t315____Count_PropertyInfo = 
{
	&t315_TI, "Count", &m10169_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t315_PIs[] =
{
	&t315____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t315____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t315____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t315____Count_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
static ParameterInfo t315_m10157_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern TypeInfo t315_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10157_MI = 
{
	".ctor", (methodPointerType)&m10157, &t315_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t315_m10157_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t315_m10158_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t315_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10158_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m10158, &t315_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t315_m10158_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t315_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10159_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m10159, &t315_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t315_m10160_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t315_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10160_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m10160, &t315_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t315_m10160_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t315_m10161_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t315_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10161_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m10161, &t315_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t315_m10161_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t315_TI;
extern Il2CppType t1863_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10162_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m10162, &t315_TI, &t1863_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t315_m10163_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t315_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10163_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10163, &t315_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t315_m10163_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t315_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10164_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10164, &t315_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t315_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10165_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m10165, &t315_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t315_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10166_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10166, &t315_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t315_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10167_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10167, &t315_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1850_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t315_m10168_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1850_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t315_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10168_MI = 
{
	"CopyTo", (methodPointerType)&m10168, &t315_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t315_m10168_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t315_TI;
extern Il2CppType t314_0_0_0;
extern void* RuntimeInvoker_t314 (MethodInfo* method, void* obj, void** args);
MethodInfo m1419_MI = 
{
	"GetEnumerator", (methodPointerType)&m1419, &t315_TI, &t314_0_0_0, RuntimeInvoker_t314, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t315_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10169_MI = 
{
	"get_Count", (methodPointerType)&m10169, &t315_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t315_MIs[] =
{
	&m10157_MI,
	&m10158_MI,
	&m10159_MI,
	&m10160_MI,
	&m10161_MI,
	&m10162_MI,
	&m10163_MI,
	&m10164_MI,
	&m10165_MI,
	&m10166_MI,
	&m10167_MI,
	&m10168_MI,
	&m1419_MI,
	&m10169_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10164_MI;
extern MethodInfo m10169_MI;
extern MethodInfo m10166_MI;
extern MethodInfo m10167_MI;
extern MethodInfo m10163_MI;
extern MethodInfo m10169_MI;
extern MethodInfo m10165_MI;
extern MethodInfo m10158_MI;
extern MethodInfo m10159_MI;
extern MethodInfo m10160_MI;
extern MethodInfo m10168_MI;
extern MethodInfo m10161_MI;
extern MethodInfo m10162_MI;
static MethodInfo* t315_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10164_MI,
	&m10169_MI,
	&m10166_MI,
	&m10167_MI,
	&m10163_MI,
	&m10169_MI,
	&m10165_MI,
	&m10158_MI,
	&m10159_MI,
	&m10160_MI,
	&m10168_MI,
	&m10161_MI,
	&m10162_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t3954_TI;
extern TypeInfo t3956_TI;
static TypeInfo* t315_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t3954_TI,
	&t3956_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t3954_TI;
extern TypeInfo t3956_TI;
static Il2CppInterfaceOffsetPair t315_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t3954_TI, 9},
	{ &t3956_TI, 16},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t315_0_0_0;
extern Il2CppType t315_1_0_0;
extern TypeInfo t4_TI;
struct t315;
extern TypeInfo t315_TI;
extern Il2CppGenericClass t315_GC;
extern TypeInfo t833_TI;
extern CustomAttributesCache t831__CustomAttributeCache;
TypeInfo t315_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t315_MIs, t315_PIs, t315_FIs, NULL, &t4_TI, NULL, &t833_TI, &t315_TI, t315_ITIs, t315_VT, &t831__CustomAttributeCache, &t315_TI, &t315_0_0_0, &t315_1_0_0, t315_IOs, &t315_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t315), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t314_TI;

#include "t317.h"
extern TypeInfo t314_TI;
extern TypeInfo t43_TI;
extern TypeInfo t317_TI;
extern TypeInfo t17_TI;
extern TypeInfo t19_TI;
#include "t317MD.h"
#include "t316MD.h"
extern MethodInfo m10178_MI;
extern MethodInfo m1427_MI;
extern MethodInfo m1425_MI;
extern MethodInfo m10181_MI;
extern MethodInfo m1429_MI;


extern MethodInfo m10170_MI;
 void m10170 (t314 * __this, t110 * p0, MethodInfo* method){
	{
		t317  L_0 = m1425(p0, &m1425_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10171_MI;
 t4 * m10171 (t314 * __this, MethodInfo* method){
	{
		t317 * L_0 = &(__this->f0);
		t43 * L_1 = m10178(L_0, &m10178_MI);
		t43 * L_2 = L_1;
		return ((t43 *)L_2);
	}
}
extern MethodInfo m10172_MI;
 void m10172 (t314 * __this, MethodInfo* method){
	{
		t317 * L_0 = &(__this->f0);
		m10181(L_0, &m10181_MI);
		return;
	}
}
extern MethodInfo m1421_MI;
 bool m1421 (t314 * __this, MethodInfo* method){
	{
		t317 * L_0 = &(__this->f0);
		bool L_1 = m1429(L_0, &m1429_MI);
		return L_1;
	}
}
extern MethodInfo m1420_MI;
 t43 * m1420 (t314 * __this, MethodInfo* method){
	{
		t317 * L_0 = &(__this->f0);
		t316 * L_1 = &(L_0->f3);
		t43 * L_2 = m1427(L_1, &m1427_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t317_0_0_1;
FieldInfo t314_f0_FieldInfo = 
{
	"host_enumerator", &t317_0_0_1, &t314_TI, offsetof(t314, f0) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t314_FIs[] =
{
	&t314_f0_FieldInfo,
	NULL
};
extern MethodInfo m10171_MI;
static PropertyInfo t314____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t314_TI, "System.Collections.IEnumerator.Current", &m10171_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1420_MI;
static PropertyInfo t314____Current_PropertyInfo = 
{
	&t314_TI, "Current", &m1420_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t314_PIs[] =
{
	&t314____System_Collections_IEnumerator_Current_PropertyInfo,
	&t314____Current_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
static ParameterInfo t314_m10170_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern TypeInfo t314_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10170_MI = 
{
	".ctor", (methodPointerType)&m10170, &t314_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t314_m10170_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t314_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10171_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10171, &t314_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t314_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10172_MI = 
{
	"Dispose", (methodPointerType)&m10172, &t314_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t314_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m1421_MI = 
{
	"MoveNext", (methodPointerType)&m1421, &t314_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t314_TI;
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1420_MI = 
{
	"get_Current", (methodPointerType)&m1420, &t314_TI, &t43_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t314_MIs[] =
{
	&m10170_MI,
	&m10171_MI,
	&m10172_MI,
	&m1421_MI,
	&m1420_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m10171_MI;
extern MethodInfo m1421_MI;
extern MethodInfo m10172_MI;
extern MethodInfo m1420_MI;
static MethodInfo* t314_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m10171_MI,
	&m1421_MI,
	&m10172_MI,
	&m1420_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1863_TI;
static TypeInfo* t314_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t1863_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1863_TI;
static Il2CppInterfaceOffsetPair t314_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t1863_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t314_0_0_0;
extern Il2CppType t314_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t314_TI;
extern Il2CppGenericClass t314_GC;
extern TypeInfo t831_TI;
TypeInfo t314_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t314_MIs, t314_PIs, t314_FIs, NULL, &t101_TI, NULL, &t831_TI, &t314_TI, t314_ITIs, t314_VT, &EmptyCustomAttributesCache, &t314_TI, &t314_0_0_0, &t314_1_0_0, t314_IOs, &t314_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t314)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t317_TI;

#include "t828.h"
#include "t1287.h"
extern TypeInfo t317_TI;
extern TypeInfo t316_TI;
extern TypeInfo t18_TI;
extern TypeInfo t43_TI;
extern TypeInfo t828_TI;
extern TypeInfo t110_TI;
extern TypeInfo t826_TI;
extern TypeInfo t1287_TI;
extern TypeInfo t1270_TI;
#include "t828MD.h"
#include "t1287MD.h"
extern MethodInfo m10180_MI;
extern MethodInfo m1428_MI;
extern MethodInfo m1427_MI;
extern MethodInfo m4352_MI;
extern MethodInfo m10177_MI;
extern MethodInfo m10179_MI;
extern MethodInfo m10114_MI;
extern MethodInfo m7111_MI;
extern MethodInfo m6907_MI;


extern MethodInfo m10173_MI;
 void m10173 (t317 * __this, t110 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m10174_MI;
 t4 * m10174 (t317 * __this, MethodInfo* method){
	{
		m10180(__this, &m10180_MI);
		t316  L_0 = (__this->f3);
		t316  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t316_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10175_MI;
 t828  m10175 (t317 * __this, MethodInfo* method){
	{
		m10180(__this, &m10180_MI);
		t316 * L_0 = &(__this->f3);
		int32_t L_1 = m1428(L_0, &m1428_MI);
		int32_t L_2 = L_1;
		t4 * L_3 = Box(InitializedTypeInfo(&t18_TI), &L_2);
		t316 * L_4 = &(__this->f3);
		t43 * L_5 = m1427(L_4, &m1427_MI);
		t43 * L_6 = L_5;
		t828  L_7 = {0};
		m4352(&L_7, L_3, ((t43 *)L_6), &m4352_MI);
		return L_7;
	}
}
extern MethodInfo m10176_MI;
 t4 * m10176 (t317 * __this, MethodInfo* method){
	{
		int32_t L_0 = m10177(__this, &m10177_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t18_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m1429_MI;
 bool m1429 (t317 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m10179(__this, &m10179_MI);
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
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->f1 = ((int32_t)(L_2+1));
		V_0 = V_1;
		t110 * L_3 = (__this->f0);
		t1451* L_4 = (L_3->f5);
		int32_t L_5 = (((t826 *)(t826 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)(L_5&((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t110 * L_6 = (__this->f0);
		t705* L_7 = (L_6->f6);
		t110 * L_8 = (__this->f0);
		t1850* L_9 = (L_8->f7);
		t316  L_10 = {0};
		m10114(&L_10, (*(int32_t*)(int32_t*)SZArrayLdElema(L_7, V_0)), (*(t43 **)(t43 **)SZArrayLdElema(L_9, V_0)), &m10114_MI);
		__this->f3 = L_10;
		return 1;
	}

IL_0072:
	{
		int32_t L_11 = (__this->f1);
		t110 * L_12 = (__this->f0);
		int32_t L_13 = (L_12->f8);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m1426_MI;
 t316  m1426 (t317 * __this, MethodInfo* method){
	{
		t316  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10177_MI;
 int32_t m10177 (t317 * __this, MethodInfo* method){
	{
		m10180(__this, &m10180_MI);
		t316 * L_0 = &(__this->f3);
		int32_t L_1 = m1428(L_0, &m1428_MI);
		return L_1;
	}
}
extern MethodInfo m10178_MI;
 t43 * m10178 (t317 * __this, MethodInfo* method){
	{
		m10180(__this, &m10180_MI);
		t316 * L_0 = &(__this->f3);
		t43 * L_1 = m1427(L_0, &m1427_MI);
		return L_1;
	}
}
extern MethodInfo m10179_MI;
 void m10179 (t317 * __this, MethodInfo* method){
	{
		t110 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1287 * L_1 = (t1287 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1287_TI));
		m7111(L_1, (t8*)NULL, &m7111_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000f:
	{
		t110 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f14);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1270 * L_5 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6907(L_5, (t8*) &_stringLiteral547, &m6907_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m10180_MI;
 void m10180 (t317 * __this, MethodInfo* method){
	{
		m10179(__this, &m10179_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1270 * L_1 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6907(L_1, (t8*) &_stringLiteral548, &m6907_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001a:
	{
		return;
	}
}
extern MethodInfo m10181_MI;
 void m10181 (t317 * __this, MethodInfo* method){
	{
		__this->f0 = (t110 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t110_0_0_1;
FieldInfo t317_f0_FieldInfo = 
{
	"dictionary", &t110_0_0_1, &t317_TI, offsetof(t317, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t317_f1_FieldInfo = 
{
	"next", &t18_0_0_1, &t317_TI, offsetof(t317, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t317_f2_FieldInfo = 
{
	"stamp", &t18_0_0_1, &t317_TI, offsetof(t317, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t316_0_0_3;
FieldInfo t317_f3_FieldInfo = 
{
	"current", &t316_0_0_3, &t317_TI, offsetof(t317, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t317_FIs[] =
{
	&t317_f0_FieldInfo,
	&t317_f1_FieldInfo,
	&t317_f2_FieldInfo,
	&t317_f3_FieldInfo,
	NULL
};
extern MethodInfo m10174_MI;
static PropertyInfo t317____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t317_TI, "System.Collections.IEnumerator.Current", &m10174_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10175_MI;
static PropertyInfo t317____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t317_TI, "System.Collections.IDictionaryEnumerator.Entry", &m10175_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10176_MI;
static PropertyInfo t317____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t317_TI, "System.Collections.IDictionaryEnumerator.Key", &m10176_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1426_MI;
static PropertyInfo t317____Current_PropertyInfo = 
{
	&t317_TI, "Current", &m1426_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10177_MI;
static PropertyInfo t317____CurrentKey_PropertyInfo = 
{
	&t317_TI, "CurrentKey", &m10177_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10178_MI;
static PropertyInfo t317____CurrentValue_PropertyInfo = 
{
	&t317_TI, "CurrentValue", &m10178_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t317_PIs[] =
{
	&t317____System_Collections_IEnumerator_Current_PropertyInfo,
	&t317____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t317____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t317____Current_PropertyInfo,
	&t317____CurrentKey_PropertyInfo,
	&t317____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
static ParameterInfo t317_m10173_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern TypeInfo t317_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10173_MI = 
{
	".ctor", (methodPointerType)&m10173, &t317_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t317_m10173_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t317_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10174_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10174, &t317_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t317_TI;
extern Il2CppType t828_0_0_0;
extern void* RuntimeInvoker_t828 (MethodInfo* method, void* obj, void** args);
MethodInfo m10175_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m10175, &t317_TI, &t828_0_0_0, RuntimeInvoker_t828, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t317_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10176_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m10176, &t317_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t317_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m1429_MI = 
{
	"MoveNext", (methodPointerType)&m1429, &t317_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t317_TI;
extern Il2CppType t316_0_0_0;
extern void* RuntimeInvoker_t316 (MethodInfo* method, void* obj, void** args);
MethodInfo m1426_MI = 
{
	"get_Current", (methodPointerType)&m1426, &t317_TI, &t316_0_0_0, RuntimeInvoker_t316, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t317_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10177_MI = 
{
	"get_CurrentKey", (methodPointerType)&m10177, &t317_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t317_TI;
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10178_MI = 
{
	"get_CurrentValue", (methodPointerType)&m10178, &t317_TI, &t43_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t317_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10179_MI = 
{
	"VerifyState", (methodPointerType)&m10179, &t317_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t317_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10180_MI = 
{
	"VerifyCurrent", (methodPointerType)&m10180, &t317_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t317_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10181_MI = 
{
	"Dispose", (methodPointerType)&m10181, &t317_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t317_MIs[] =
{
	&m10173_MI,
	&m10174_MI,
	&m10175_MI,
	&m10176_MI,
	&m1429_MI,
	&m1426_MI,
	&m10177_MI,
	&m10178_MI,
	&m10179_MI,
	&m10180_MI,
	&m10181_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m10174_MI;
extern MethodInfo m1429_MI;
extern MethodInfo m10181_MI;
extern MethodInfo m1426_MI;
extern MethodInfo m10175_MI;
extern MethodInfo m10176_MI;
static MethodInfo* t317_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m10174_MI,
	&m1429_MI,
	&m10181_MI,
	&m1426_MI,
	&m10175_MI,
	&m10176_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1854_TI;
extern TypeInfo t834_TI;
static TypeInfo* t317_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t1854_TI,
	&t834_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1854_TI;
extern TypeInfo t834_TI;
static Il2CppInterfaceOffsetPair t317_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t1854_TI, 7},
	{ &t834_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t317_0_0_0;
extern Il2CppType t317_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t317_TI;
extern Il2CppGenericClass t317_GC;
extern TypeInfo t833_TI;
TypeInfo t317_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t317_MIs, t317_PIs, t317_FIs, NULL, &t101_TI, NULL, &t833_TI, &t317_TI, t317_ITIs, t317_VT, &EmptyCustomAttributesCache, &t317_TI, &t317_0_0_0, &t317_1_0_0, t317_IOs, &t317_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t317)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1864_TI;

#include "t55.h"


extern MethodInfo m10182_MI;
 void m10182 (t1864 * __this, t4 * p0, t56 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10183_MI;
 t43 * m10183 (t1864 * __this, int32_t p0, t43 * p1, MethodInfo* method){
	typedef  t43 * (*FunctionPointerType) (t4 * __this, int32_t p0, t43 * p1, MethodInfo* method);
	if (__this->f9)
		m10183((t1864 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10184_MI;
 t4 * m10184 (t1864 * __this, int32_t p0, t43 * p1, t55 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t18_TI), &p0);
	__d_args[1] = p1;
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10185_MI;
 t43 * m10185 (t1864 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t43 *)__result;
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t1864_m10182_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t1864_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m10182_MI = 
{
	".ctor", (methodPointerType)&m10182, &t1864_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t1864_m10182_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t43_0_0_0;
static ParameterInfo t1864_m10183_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t1864_TI;
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t4_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10183_MI = 
{
	"Invoke", (methodPointerType)&m10183, &t1864_TI, &t43_0_0_0, RuntimeInvoker_t4_t18_t4, t1864_m10183_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t43_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1864_m10184_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1864_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t18_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10184_MI = 
{
	"BeginInvoke", (methodPointerType)&m10184, &t1864_TI, &t54_0_0_0, RuntimeInvoker_t4_t18_t4_t4_t4, t1864_m10184_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t1864_m10185_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t1864_TI;
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10185_MI = 
{
	"EndInvoke", (methodPointerType)&m10185, &t1864_TI, &t43_0_0_0, RuntimeInvoker_t4_t4, t1864_m10185_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1864_MIs[] =
{
	&m10182_MI,
	&m10183_MI,
	&m10184_MI,
	&m10185_MI,
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
extern MethodInfo m10183_MI;
extern MethodInfo m10184_MI;
extern MethodInfo m10185_MI;
static MethodInfo* t1864_VT[] =
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
	&m10183_MI,
	&m10184_MI,
	&m10185_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t1864_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1864_0_0_0;
extern Il2CppType t1864_1_0_0;
extern TypeInfo t193_TI;
struct t1864;
extern TypeInfo t1864_TI;
extern Il2CppGenericClass t1864_GC;
extern TypeInfo t833_TI;
TypeInfo t1864_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1864_MIs, NULL, NULL, NULL, &t193_TI, NULL, &t833_TI, &t1864_TI, NULL, t1864_VT, &EmptyCustomAttributesCache, &t1864_TI, &t1864_0_0_0, &t1864_1_0_0, t1864_IOs, &t1864_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1864), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1852.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1852_TI;
#include "t1852MD.h"



extern MethodInfo m10186_MI;
 void m10186 (t1852 * __this, t4 * p0, t56 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10187_MI;
 t828  m10187 (t1852 * __this, int32_t p0, t43 * p1, MethodInfo* method){
	typedef  t828  (*FunctionPointerType) (t4 * __this, int32_t p0, t43 * p1, MethodInfo* method);
	if (__this->f9)
		m10187((t1852 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10188_MI;
 t4 * m10188 (t1852 * __this, int32_t p0, t43 * p1, t55 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t18_TI), &p0);
	__d_args[1] = p1;
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10189_MI;
 t828  m10189 (t1852 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t828 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t1852_m10186_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t1852_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m10186_MI = 
{
	".ctor", (methodPointerType)&m10186, &t1852_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t1852_m10186_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t43_0_0_0;
static ParameterInfo t1852_m10187_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t1852_TI;
extern Il2CppType t828_0_0_0;
extern void* RuntimeInvoker_t828_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10187_MI = 
{
	"Invoke", (methodPointerType)&m10187, &t1852_TI, &t828_0_0_0, RuntimeInvoker_t828_t18_t4, t1852_m10187_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t43_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1852_m10188_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1852_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t18_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10188_MI = 
{
	"BeginInvoke", (methodPointerType)&m10188, &t1852_TI, &t54_0_0_0, RuntimeInvoker_t4_t18_t4_t4_t4, t1852_m10188_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t1852_m10189_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t1852_TI;
extern Il2CppType t828_0_0_0;
extern void* RuntimeInvoker_t828_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10189_MI = 
{
	"EndInvoke", (methodPointerType)&m10189, &t1852_TI, &t828_0_0_0, RuntimeInvoker_t828_t4, t1852_m10189_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1852_MIs[] =
{
	&m10186_MI,
	&m10187_MI,
	&m10188_MI,
	&m10189_MI,
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
extern MethodInfo m10187_MI;
extern MethodInfo m10188_MI;
extern MethodInfo m10189_MI;
static MethodInfo* t1852_VT[] =
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
	&m10187_MI,
	&m10188_MI,
	&m10189_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t1852_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1852_0_0_0;
extern Il2CppType t1852_1_0_0;
extern TypeInfo t193_TI;
struct t1852;
extern TypeInfo t1852_TI;
extern Il2CppGenericClass t1852_GC;
extern TypeInfo t833_TI;
TypeInfo t1852_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1852_MIs, NULL, NULL, NULL, &t193_TI, NULL, &t833_TI, &t1852_TI, NULL, t1852_VT, &EmptyCustomAttributesCache, &t1852_TI, &t1852_0_0_0, &t1852_1_0_0, t1852_IOs, &t1852_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1852), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3360_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.DictionaryEntry>
extern MethodInfo m23989_MI;
static PropertyInfo t3360____Current_PropertyInfo = 
{
	&t3360_TI, "Current", &m23989_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3360_PIs[] =
{
	&t3360____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3360_TI;
extern Il2CppType t828_0_0_0;
extern void* RuntimeInvoker_t828 (MethodInfo* method, void* obj, void** args);
MethodInfo m23989_MI = 
{
	"get_Current", NULL, &t3360_TI, &t828_0_0_0, RuntimeInvoker_t828, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3360_MIs[] =
{
	&m23989_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3360_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3360_0_0_0;
extern Il2CppType t3360_1_0_0;
struct t3360;
extern TypeInfo t3360_TI;
extern Il2CppGenericClass t3360_GC;
TypeInfo t3360_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3360_MIs, t3360_PIs, NULL, NULL, NULL, NULL, NULL, &t3360_TI, t3360_ITIs, NULL, &EmptyCustomAttributesCache, &t3360_TI, &t3360_0_0_0, &t3360_1_0_0, NULL, &t3360_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1865.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1865_TI;
#include "t1865MD.h"

extern TypeInfo t1865_TI;
extern TypeInfo t828_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m10194_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m17880_MI;
struct t16;
 t828  m17880 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17880_MI;


extern MethodInfo m10190_MI;
 void m10190 (t1865 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10191_MI;
 t4 * m10191 (t1865 * __this, MethodInfo* method){
	{
		t828  L_0 = m10194(__this, &m10194_MI);
		t828  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t828_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10192_MI;
 void m10192 (t1865 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10193_MI;
 bool m10193 (t1865 * __this, MethodInfo* method){
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
extern MethodInfo m10194_MI;
 t828  m10194 (t1865 * __this, MethodInfo* method){
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
		t828  L_8 = m17880(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m17880_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
extern Il2CppType t16_0_0_1;
FieldInfo t1865_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1865_TI, offsetof(t1865, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1865_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1865_TI, offsetof(t1865, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1865_FIs[] =
{
	&t1865_f0_FieldInfo,
	&t1865_f1_FieldInfo,
	NULL
};
extern MethodInfo m10191_MI;
static PropertyInfo t1865____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1865_TI, "System.Collections.IEnumerator.Current", &m10191_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10194_MI;
static PropertyInfo t1865____Current_PropertyInfo = 
{
	&t1865_TI, "Current", &m10194_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1865_PIs[] =
{
	&t1865____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1865____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1865_m10190_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1865_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10190_MI = 
{
	".ctor", (methodPointerType)&m10190, &t1865_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1865_m10190_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1865_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10191_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10191, &t1865_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1865_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10192_MI = 
{
	"Dispose", (methodPointerType)&m10192, &t1865_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1865_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10193_MI = 
{
	"MoveNext", (methodPointerType)&m10193, &t1865_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1865_TI;
extern Il2CppType t828_0_0_0;
extern void* RuntimeInvoker_t828 (MethodInfo* method, void* obj, void** args);
MethodInfo m10194_MI = 
{
	"get_Current", (methodPointerType)&m10194, &t1865_TI, &t828_0_0_0, RuntimeInvoker_t828, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1865_MIs[] =
{
	&m10190_MI,
	&m10191_MI,
	&m10192_MI,
	&m10193_MI,
	&m10194_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m10191_MI;
extern MethodInfo m10193_MI;
extern MethodInfo m10192_MI;
extern MethodInfo m10194_MI;
static MethodInfo* t1865_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m10191_MI,
	&m10193_MI,
	&m10192_MI,
	&m10194_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3360_TI;
static TypeInfo* t1865_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3360_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3360_TI;
static Il2CppInterfaceOffsetPair t1865_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3360_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1865_0_0_0;
extern Il2CppType t1865_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1865_TI;
extern Il2CppGenericClass t1865_GC;
extern TypeInfo t16_TI;
TypeInfo t1865_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1865_MIs, t1865_PIs, t1865_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1865_TI, t1865_ITIs, t1865_VT, &EmptyCustomAttributesCache, &t1865_TI, &t1865_0_0_0, &t1865_1_0_0, t1865_IOs, &t1865_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1865)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3960_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>
extern MethodInfo m23990_MI;
static PropertyInfo t3960____Count_PropertyInfo = 
{
	&t3960_TI, "Count", &m23990_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23991_MI;
static PropertyInfo t3960____IsReadOnly_PropertyInfo = 
{
	&t3960_TI, "IsReadOnly", &m23991_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3960_PIs[] =
{
	&t3960____Count_PropertyInfo,
	&t3960____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3960_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23990_MI = 
{
	"get_Count", NULL, &t3960_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3960_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m23991_MI = 
{
	"get_IsReadOnly", NULL, &t3960_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t828_0_0_0;
static ParameterInfo t3960_m23992_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t828_0_0_0},
};
extern TypeInfo t3960_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t828 (MethodInfo* method, void* obj, void** args);
MethodInfo m23992_MI = 
{
	"Add", NULL, &t3960_TI, &t17_0_0_0, RuntimeInvoker_t17_t828, t3960_m23992_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3960_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m23993_MI = 
{
	"Clear", NULL, &t3960_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t828_0_0_0;
static ParameterInfo t3960_m23994_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t828_0_0_0},
};
extern TypeInfo t3960_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t828 (MethodInfo* method, void* obj, void** args);
MethodInfo m23994_MI = 
{
	"Contains", NULL, &t3960_TI, &t19_0_0_0, RuntimeInvoker_t19_t828, t3960_m23994_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2932_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t3960_m23995_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2932_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3960_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23995_MI = 
{
	"CopyTo", NULL, &t3960_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t3960_m23995_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t828_0_0_0;
static ParameterInfo t3960_m23996_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t828_0_0_0},
};
extern TypeInfo t3960_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t828 (MethodInfo* method, void* obj, void** args);
MethodInfo m23996_MI = 
{
	"Remove", NULL, &t3960_TI, &t19_0_0_0, RuntimeInvoker_t19_t828, t3960_m23996_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3960_MIs[] =
{
	&m23990_MI,
	&m23991_MI,
	&m23992_MI,
	&m23993_MI,
	&m23994_MI,
	&m23995_MI,
	&m23996_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3962_TI;
static TypeInfo* t3960_ITIs[] = 
{
	&t592_TI,
	&t3962_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3960_0_0_0;
extern Il2CppType t3960_1_0_0;
struct t3960;
extern TypeInfo t3960_TI;
extern Il2CppGenericClass t3960_GC;
TypeInfo t3960_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3960_MIs, t3960_PIs, NULL, NULL, NULL, NULL, NULL, &t3960_TI, t3960_ITIs, NULL, &EmptyCustomAttributesCache, &t3960_TI, &t3960_0_0_0, &t3960_1_0_0, NULL, &t3960_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3962_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.DictionaryEntry>
extern TypeInfo t3962_TI;
extern Il2CppType t3360_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23997_MI = 
{
	"GetEnumerator", NULL, &t3962_TI, &t3360_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3962_MIs[] =
{
	&m23997_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t3962_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3962_0_0_0;
extern Il2CppType t3962_1_0_0;
struct t3962;
extern TypeInfo t3962_TI;
extern Il2CppGenericClass t3962_GC;
TypeInfo t3962_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3962_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3962_TI, t3962_ITIs, NULL, &EmptyCustomAttributesCache, &t3962_TI, &t3962_0_0_0, &t3962_1_0_0, NULL, &t3962_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3961_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>
extern MethodInfo m23998_MI;
extern MethodInfo m23999_MI;
static PropertyInfo t3961____Item_PropertyInfo = 
{
	&t3961_TI, "Item", &m23998_MI, &m23999_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3961_PIs[] =
{
	&t3961____Item_PropertyInfo,
	NULL
};
extern Il2CppType t828_0_0_0;
static ParameterInfo t3961_m24000_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t828_0_0_0},
};
extern TypeInfo t3961_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t828 (MethodInfo* method, void* obj, void** args);
MethodInfo m24000_MI = 
{
	"IndexOf", NULL, &t3961_TI, &t18_0_0_0, RuntimeInvoker_t18_t828, t3961_m24000_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t828_0_0_0;
static ParameterInfo t3961_m24001_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t828_0_0_0},
};
extern TypeInfo t3961_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t828 (MethodInfo* method, void* obj, void** args);
MethodInfo m24001_MI = 
{
	"Insert", NULL, &t3961_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t828, t3961_m24001_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3961_m24002_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3961_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24002_MI = 
{
	"RemoveAt", NULL, &t3961_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t3961_m24002_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3961_m23998_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3961_TI;
extern Il2CppType t828_0_0_0;
extern void* RuntimeInvoker_t828_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m23998_MI = 
{
	"get_Item", NULL, &t3961_TI, &t828_0_0_0, RuntimeInvoker_t828_t18, t3961_m23998_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t828_0_0_0;
static ParameterInfo t3961_m23999_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t828_0_0_0},
};
extern TypeInfo t3961_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t828 (MethodInfo* method, void* obj, void** args);
MethodInfo m23999_MI = 
{
	"set_Item", NULL, &t3961_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t828, t3961_m23999_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3961_MIs[] =
{
	&m24000_MI,
	&m24001_MI,
	&m24002_MI,
	&m23998_MI,
	&m23999_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3960_TI;
extern TypeInfo t3962_TI;
static TypeInfo* t3961_ITIs[] = 
{
	&t592_TI,
	&t3960_TI,
	&t3962_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3961_0_0_0;
extern Il2CppType t3961_1_0_0;
struct t3961;
extern TypeInfo t3961_TI;
extern Il2CppGenericClass t3961_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t3961_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3961_MIs, t3961_PIs, NULL, NULL, NULL, NULL, NULL, &t3961_TI, t3961_ITIs, NULL, &t1401__CustomAttributeCache, &t3961_TI, &t3961_0_0_0, &t3961_1_0_0, NULL, &t3961_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1866.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1866_TI;
#include "t1866MD.h"



extern MethodInfo m10195_MI;
 void m10195 (t1866 * __this, t4 * p0, t56 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10196_MI;
 t316  m10196 (t1866 * __this, int32_t p0, t43 * p1, MethodInfo* method){
	typedef  t316  (*FunctionPointerType) (t4 * __this, int32_t p0, t43 * p1, MethodInfo* method);
	if (__this->f9)
		m10196((t1866 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10197_MI;
 t4 * m10197 (t1866 * __this, int32_t p0, t43 * p1, t55 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t18_TI), &p0);
	__d_args[1] = p1;
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10198_MI;
 t316  m10198 (t1866 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t316 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t1866_m10195_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t1866_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m10195_MI = 
{
	".ctor", (methodPointerType)&m10195, &t1866_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t1866_m10195_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t43_0_0_0;
static ParameterInfo t1866_m10196_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t1866_TI;
extern Il2CppType t316_0_0_0;
extern void* RuntimeInvoker_t316_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10196_MI = 
{
	"Invoke", (methodPointerType)&m10196, &t1866_TI, &t316_0_0_0, RuntimeInvoker_t316_t18_t4, t1866_m10196_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t43_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1866_m10197_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1866_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t18_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10197_MI = 
{
	"BeginInvoke", (methodPointerType)&m10197, &t1866_TI, &t54_0_0_0, RuntimeInvoker_t4_t18_t4_t4_t4, t1866_m10197_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t1866_m10198_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t1866_TI;
extern Il2CppType t316_0_0_0;
extern void* RuntimeInvoker_t316_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10198_MI = 
{
	"EndInvoke", (methodPointerType)&m10198, &t1866_TI, &t316_0_0_0, RuntimeInvoker_t316_t4, t1866_m10198_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1866_MIs[] =
{
	&m10195_MI,
	&m10196_MI,
	&m10197_MI,
	&m10198_MI,
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
extern MethodInfo m10196_MI;
extern MethodInfo m10197_MI;
extern MethodInfo m10198_MI;
static MethodInfo* t1866_VT[] =
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
	&m10196_MI,
	&m10197_MI,
	&m10198_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t1866_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1866_0_0_0;
extern Il2CppType t1866_1_0_0;
extern TypeInfo t193_TI;
struct t1866;
extern TypeInfo t1866_TI;
extern Il2CppGenericClass t1866_GC;
extern TypeInfo t833_TI;
TypeInfo t1866_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1866_MIs, NULL, NULL, NULL, &t193_TI, NULL, &t833_TI, &t1866_TI, NULL, t1866_VT, &EmptyCustomAttributesCache, &t1866_TI, &t1866_0_0_0, &t1866_1_0_0, t1866_IOs, &t1866_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1866), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1867.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1867_TI;
#include "t1867MD.h"

extern TypeInfo t1867_TI;
extern TypeInfo t317_TI;
extern TypeInfo t834_TI;
extern TypeInfo t828_TI;
extern TypeInfo t316_TI;
extern TypeInfo t18_TI;
extern TypeInfo t19_TI;
extern MethodInfo m7709_MI;
extern MethodInfo m1426_MI;
extern MethodInfo m1428_MI;
extern MethodInfo m10201_MI;
extern MethodInfo m24_MI;
extern MethodInfo m1425_MI;
extern MethodInfo m1429_MI;


extern MethodInfo m10199_MI;
 void m10199 (t1867 * __this, t110 * p0, MethodInfo* method){
	{
		m24(__this, &m24_MI);
		t317  L_0 = m1425(p0, &m1425_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10200_MI;
 bool m10200 (t1867 * __this, MethodInfo* method){
	{
		t317 * L_0 = &(__this->f0);
		bool L_1 = m1429(L_0, &m1429_MI);
		return L_1;
	}
}
extern MethodInfo m10201_MI;
 t828  m10201 (t1867 * __this, MethodInfo* method){
	{
		t317  L_0 = (__this->f0);
		t317  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t317_TI), &L_1);
		t828  L_3 = (t828 )InterfaceFuncInvoker0< t828  >::Invoke(&m7709_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m10202_MI;
 t4 * m10202 (t1867 * __this, MethodInfo* method){
	t316  V_0 = {0};
	{
		t317 * L_0 = &(__this->f0);
		t316  L_1 = m1426(L_0, &m1426_MI);
		V_0 = L_1;
		int32_t L_2 = m1428((&V_0), &m1428_MI);
		int32_t L_3 = L_2;
		t4 * L_4 = Box(InitializedTypeInfo(&t18_TI), &L_3);
		return L_4;
	}
}
extern MethodInfo m10203_MI;
 t4 * m10203 (t1867 * __this, MethodInfo* method){
	{
		t828  L_0 = (t828 )VirtFuncInvoker0< t828  >::Invoke(&m10201_MI, __this);
		t828  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t828_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t317_0_0_1;
FieldInfo t1867_f0_FieldInfo = 
{
	"host_enumerator", &t317_0_0_1, &t1867_TI, offsetof(t1867, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1867_FIs[] =
{
	&t1867_f0_FieldInfo,
	NULL
};
extern MethodInfo m10201_MI;
static PropertyInfo t1867____Entry_PropertyInfo = 
{
	&t1867_TI, "Entry", &m10201_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10202_MI;
static PropertyInfo t1867____Key_PropertyInfo = 
{
	&t1867_TI, "Key", &m10202_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10203_MI;
static PropertyInfo t1867____Current_PropertyInfo = 
{
	&t1867_TI, "Current", &m10203_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1867_PIs[] =
{
	&t1867____Entry_PropertyInfo,
	&t1867____Key_PropertyInfo,
	&t1867____Current_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1867_m10199_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern TypeInfo t1867_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10199_MI = 
{
	".ctor", (methodPointerType)&m10199, &t1867_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1867_m10199_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1867_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10200_MI = 
{
	"MoveNext", (methodPointerType)&m10200, &t1867_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1867_TI;
extern Il2CppType t828_0_0_0;
extern void* RuntimeInvoker_t828 (MethodInfo* method, void* obj, void** args);
MethodInfo m10201_MI = 
{
	"get_Entry", (methodPointerType)&m10201, &t1867_TI, &t828_0_0_0, RuntimeInvoker_t828, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1867_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10202_MI = 
{
	"get_Key", (methodPointerType)&m10202, &t1867_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1867_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10203_MI = 
{
	"get_Current", (methodPointerType)&m10203, &t1867_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1867_MIs[] =
{
	&m10199_MI,
	&m10200_MI,
	&m10201_MI,
	&m10202_MI,
	&m10203_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10203_MI;
extern MethodInfo m10200_MI;
extern MethodInfo m10201_MI;
extern MethodInfo m10202_MI;
static MethodInfo* t1867_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10203_MI,
	&m10200_MI,
	&m10201_MI,
	&m10202_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t834_TI;
static TypeInfo* t1867_ITIs[] = 
{
	&t27_TI,
	&t834_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t834_TI;
static Il2CppInterfaceOffsetPair t1867_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t834_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1867_0_0_0;
extern Il2CppType t1867_1_0_0;
extern TypeInfo t4_TI;
struct t1867;
extern TypeInfo t1867_TI;
extern Il2CppGenericClass t1867_GC;
extern TypeInfo t833_TI;
TypeInfo t1867_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t1867_MIs, t1867_PIs, t1867_FIs, NULL, &t4_TI, NULL, &t833_TI, &t1867_TI, t1867_ITIs, t1867_VT, &EmptyCustomAttributesCache, &t1867_TI, &t1867_0_0_0, &t1867_1_0_0, t1867_IOs, &t1867_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1867), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#include "t1868.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1868_TI;
#include "t1868MD.h"

#include "t837.h"
#include "t1870.h"
extern TypeInfo t1868_TI;
extern TypeInfo t1330_TI;
extern TypeInfo t294_TI;
extern TypeInfo t18_TI;
extern TypeInfo t19_TI;
extern TypeInfo t837_TI;
extern TypeInfo t526_TI;
extern TypeInfo t1870_TI;
#include "t294MD.h"
#include "t1223MD.h"
#include "t1870MD.h"
extern Il2CppType t1330_0_0_0;
extern Il2CppType t18_0_0_0;
extern Il2CppType t837_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m10212_MI;
extern MethodInfo m24003_MI;
extern MethodInfo m24004_MI;


extern MethodInfo m10204_MI;
 void m10204 (t1868 * __this, MethodInfo* method){
	{
		m24(__this, &m24_MI);
		return;
	}
}
extern MethodInfo m10205_MI;
 void m10205 (t4 * __this, MethodInfo* method){
	t1870 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t1870 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t1870_TI));
	m10212(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m10212_MI);
	((t1868_SFs*)InitializedTypeInfo(&t1868_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m10206_MI;
 int32_t m10206 (t1868 * __this, t4 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m24003_MI, __this, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t18_TI))))));
		return L_0;
	}
}
extern MethodInfo m10207_MI;
 bool m10207 (t1868 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24004_MI, __this, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t18_TI))))), ((*(int32_t*)((int32_t*)UnBox (p1, InitializedTypeInfo(&t18_TI))))));
		return L_0;
	}
}
extern MethodInfo m10208_MI;
 t1868 * m10208 (t4 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1868_TI));
		return (((t1868_SFs*)InitializedTypeInfo(&t1868_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Int32>
extern Il2CppType t1868_0_0_49;
FieldInfo t1868_f0_FieldInfo = 
{
	"_default", &t1868_0_0_49, &t1868_TI, offsetof(t1868_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1868_FIs[] =
{
	&t1868_f0_FieldInfo,
	NULL
};
extern MethodInfo m10208_MI;
static PropertyInfo t1868____Default_PropertyInfo = 
{
	&t1868_TI, "Default", &m10208_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1868_PIs[] =
{
	&t1868____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1868_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10204_MI = 
{
	".ctor", (methodPointerType)&m10204, &t1868_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1868_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10205_MI = 
{
	".cctor", (methodPointerType)&m10205, &t1868_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1868_m10206_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1868_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10206_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m10206, &t1868_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1868_m10206_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1868_m10207_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1868_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10207_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m10207, &t1868_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t1868_m10207_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1868_m24003_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1868_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24003_MI = 
{
	"GetHashCode", NULL, &t1868_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t1868_m24003_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1868_m24004_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1868_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24004_MI = 
{
	"Equals", NULL, &t1868_TI, &t19_0_0_0, RuntimeInvoker_t19_t18_t18, t1868_m24004_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1868_TI;
extern Il2CppType t1868_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10208_MI = 
{
	"get_Default", (methodPointerType)&m10208, &t1868_TI, &t1868_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1868_MIs[] =
{
	&m10204_MI,
	&m10205_MI,
	&m10206_MI,
	&m10207_MI,
	&m24003_MI,
	&m24004_MI,
	&m10208_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m24004_MI;
extern MethodInfo m24003_MI;
extern MethodInfo m10207_MI;
extern MethodInfo m10206_MI;
static MethodInfo* t1868_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m24004_MI,
	&m24003_MI,
	&m10207_MI,
	&m10206_MI,
	NULL,
	NULL,
};
extern TypeInfo t1851_TI;
extern TypeInfo t860_TI;
static TypeInfo* t1868_ITIs[] = 
{
	&t1851_TI,
	&t860_TI,
};
extern TypeInfo t1851_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t1868_IOs[] = 
{
	{ &t1851_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1868_0_0_0;
extern Il2CppType t1868_1_0_0;
extern TypeInfo t4_TI;
struct t1868;
extern TypeInfo t1868_TI;
extern Il2CppGenericClass t1868_GC;
TypeInfo t1868_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t1868_MIs, t1868_PIs, t1868_FIs, NULL, &t4_TI, NULL, NULL, &t1868_TI, t1868_ITIs, t1868_VT, &EmptyCustomAttributesCache, &t1868_TI, &t1868_0_0_0, &t1868_1_0_0, t1868_IOs, &t1868_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1868), 0, -1, sizeof(t1868_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#include "t1869.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1869_TI;
#include "t1869MD.h"

extern TypeInfo t18_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1330_TI;
extern TypeInfo t19_TI;
extern MethodInfo m10204_MI;
extern MethodInfo m30_MI;
extern MethodInfo m23096_MI;


extern MethodInfo m10209_MI;
 void m10209 (t1869 * __this, MethodInfo* method){
	{
		m10204(__this, &m10204_MI);
		return;
	}
}
extern MethodInfo m10210_MI;
 int32_t m10210 (t1869 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t18_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m30_MI, Box(InitializedTypeInfo(&t18_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m10211_MI;
 bool m10211 (t1869 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t18_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t18_TI), &L_2);
		return ((((t4 *)L_3) == ((t4 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(&m23096_MI, Box(InitializedTypeInfo(&t18_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.Int32>
extern TypeInfo t1869_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10209_MI = 
{
	".ctor", (methodPointerType)&m10209, &t1869_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1869_m10210_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1869_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10210_MI = 
{
	"GetHashCode", (methodPointerType)&m10210, &t1869_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t1869_m10210_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1869_m10211_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1869_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10211_MI = 
{
	"Equals", (methodPointerType)&m10211, &t1869_TI, &t19_0_0_0, RuntimeInvoker_t19_t18_t18, t1869_m10211_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1869_MIs[] =
{
	&m10209_MI,
	&m10210_MI,
	&m10211_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10211_MI;
extern MethodInfo m10210_MI;
extern MethodInfo m10207_MI;
extern MethodInfo m10206_MI;
extern MethodInfo m10210_MI;
extern MethodInfo m10211_MI;
static MethodInfo* t1869_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10211_MI,
	&m10210_MI,
	&m10207_MI,
	&m10206_MI,
	&m10210_MI,
	&m10211_MI,
};
extern TypeInfo t1851_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t1869_IOs[] = 
{
	{ &t1851_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1869_0_0_0;
extern Il2CppType t1869_1_0_0;
extern TypeInfo t1868_TI;
struct t1869;
extern TypeInfo t1869_TI;
extern Il2CppGenericClass t1869_GC;
TypeInfo t1869_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t1869_MIs, NULL, NULL, NULL, &t1868_TI, NULL, NULL, &t1869_TI, NULL, t1869_VT, &EmptyCustomAttributesCache, &t1869_TI, &t1869_0_0_0, &t1869_1_0_0, t1869_IOs, &t1869_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1869), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1870_TI;

extern TypeInfo t18_TI;
extern TypeInfo t4_TI;
extern TypeInfo t19_TI;
extern MethodInfo m10204_MI;
extern MethodInfo m30_MI;
extern MethodInfo m28_MI;


extern MethodInfo m10212_MI;
 void m10212 (t1870 * __this, MethodInfo* method){
	{
		m10204(__this, &m10204_MI);
		return;
	}
}
extern MethodInfo m10213_MI;
 int32_t m10213 (t1870 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t18_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m30_MI, Box(InitializedTypeInfo(&t18_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m10214_MI;
 bool m10214 (t1870 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t18_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t18_TI), &L_2);
		return ((((t4 *)L_3) == ((t4 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int32_t L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t18_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t4 * >::Invoke(&m28_MI, Box(InitializedTypeInfo(&t18_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
extern TypeInfo t1870_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10212_MI = 
{
	".ctor", (methodPointerType)&m10212, &t1870_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1870_m10213_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1870_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10213_MI = 
{
	"GetHashCode", (methodPointerType)&m10213, &t1870_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t1870_m10213_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1870_m10214_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1870_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10214_MI = 
{
	"Equals", (methodPointerType)&m10214, &t1870_TI, &t19_0_0_0, RuntimeInvoker_t19_t18_t18, t1870_m10214_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1870_MIs[] =
{
	&m10212_MI,
	&m10213_MI,
	&m10214_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10214_MI;
extern MethodInfo m10213_MI;
extern MethodInfo m10207_MI;
extern MethodInfo m10206_MI;
extern MethodInfo m10213_MI;
extern MethodInfo m10214_MI;
static MethodInfo* t1870_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10214_MI,
	&m10213_MI,
	&m10207_MI,
	&m10206_MI,
	&m10213_MI,
	&m10214_MI,
};
extern TypeInfo t1851_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t1870_IOs[] = 
{
	{ &t1851_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1870_0_0_0;
extern Il2CppType t1870_1_0_0;
extern TypeInfo t1868_TI;
struct t1870;
extern TypeInfo t1870_TI;
extern Il2CppGenericClass t1870_GC;
extern TypeInfo t836_TI;
TypeInfo t1870_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1870_MIs, NULL, NULL, NULL, &t1868_TI, NULL, &t836_TI, &t1870_TI, NULL, t1870_VT, &EmptyCustomAttributesCache, &t1870_TI, &t1870_0_0_0, &t1870_1_0_0, t1870_IOs, &t1870_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1870), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5149_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t43_0_0_0;
extern Il2CppType t43_0_0_0;
static ParameterInfo t5149_m23870_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t5149_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23870_MI = 
{
	"Equals", NULL, &t5149_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t5149_m23870_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t5149_m24005_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t5149_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24005_MI = 
{
	"GetHashCode", NULL, &t5149_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t5149_m24005_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5149_MIs[] =
{
	&m23870_MI,
	&m24005_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5149_0_0_0;
extern Il2CppType t5149_1_0_0;
struct t5149;
extern TypeInfo t5149_TI;
extern Il2CppGenericClass t5149_GC;
TypeInfo t5149_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5149_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5149_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5149_TI, &t5149_0_0_0, &t5149_1_0_0, NULL, &t5149_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#include "t1871.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1871_TI;
#include "t1871MD.h"

#include "t1872.h"
extern TypeInfo t1871_TI;
extern TypeInfo t5151_TI;
extern TypeInfo t294_TI;
extern TypeInfo t43_TI;
extern TypeInfo t19_TI;
extern TypeInfo t837_TI;
extern TypeInfo t526_TI;
extern TypeInfo t1872_TI;
extern TypeInfo t18_TI;
#include "t1872MD.h"
extern Il2CppType t5151_0_0_0;
extern Il2CppType t43_0_0_0;
extern Il2CppType t837_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m10220_MI;
extern MethodInfo m24006_MI;
extern MethodInfo m23871_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t1871_0_0_49;
FieldInfo t1871_f0_FieldInfo = 
{
	"_default", &t1871_0_0_49, &t1871_TI, offsetof(t1871_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1871_FIs[] =
{
	&t1871_f0_FieldInfo,
	NULL
};
extern MethodInfo m10219_MI;
static PropertyInfo t1871____Default_PropertyInfo = 
{
	&t1871_TI, "Default", &m10219_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1871_PIs[] =
{
	&t1871____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1871_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10215_MI = 
{
	".ctor", (methodPointerType)&m8078_gshared, &t1871_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1871_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10216_MI = 
{
	".cctor", (methodPointerType)&m8079_gshared, &t1871_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1871_m10217_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1871_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10217_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8080_gshared, &t1871_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1871_m10217_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1871_m10218_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1871_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10218_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8081_gshared, &t1871_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t1871_m10218_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t1871_m24006_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t1871_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24006_MI = 
{
	"GetHashCode", NULL, &t1871_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1871_m24006_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
extern Il2CppType t43_0_0_0;
static ParameterInfo t1871_m23871_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t1871_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23871_MI = 
{
	"Equals", NULL, &t1871_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t1871_m23871_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1871_TI;
extern Il2CppType t1871_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10219_MI = 
{
	"get_Default", (methodPointerType)&m8082_gshared, &t1871_TI, &t1871_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1871_MIs[] =
{
	&m10215_MI,
	&m10216_MI,
	&m10217_MI,
	&m10218_MI,
	&m24006_MI,
	&m23871_MI,
	&m10219_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m23871_MI;
extern MethodInfo m24006_MI;
extern MethodInfo m10218_MI;
extern MethodInfo m10217_MI;
static MethodInfo* t1871_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m23871_MI,
	&m24006_MI,
	&m10218_MI,
	&m10217_MI,
	NULL,
	NULL,
};
extern TypeInfo t5149_TI;
extern TypeInfo t860_TI;
static TypeInfo* t1871_ITIs[] = 
{
	&t5149_TI,
	&t860_TI,
};
extern TypeInfo t5149_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t1871_IOs[] = 
{
	{ &t5149_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppType t5151_0_0_0;
extern Il2CppType t43_0_0_0;
extern TypeInfo t1871_TI;
extern TypeInfo t1871_TI;
extern TypeInfo t1872_TI;
extern MethodInfo m10220_MI;
extern TypeInfo t43_TI;
extern MethodInfo m24006_MI;
extern MethodInfo m23871_MI;
static void* t1871_RGCTXData[9] = 
{
	(void*)&t5151_0_0_0,
	(void*)&t43_0_0_0,
	&t1871_TI,
	&t1871_TI,
	&t1872_TI,
	&m10220_MI,
	&t43_TI,
	&m24006_MI,
	&m23871_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1871_0_0_0;
extern Il2CppType t1871_1_0_0;
extern TypeInfo t4_TI;
struct t1871;
extern TypeInfo t1871_TI;
extern Il2CppGenericClass t1871_GC;
TypeInfo t1871_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t1871_MIs, t1871_PIs, t1871_FIs, NULL, &t4_TI, NULL, NULL, &t1871_TI, t1871_ITIs, t1871_VT, &EmptyCustomAttributesCache, &t1871_TI, &t1871_0_0_0, &t1871_1_0_0, t1871_IOs, &t1871_GC, NULL, NULL, NULL, t1871_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1871), 0, -1, sizeof(t1871_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5151_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t43_0_0_0;
static ParameterInfo t5151_m24007_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t5151_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24007_MI = 
{
	"Equals", NULL, &t5151_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t5151_m24007_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5151_MIs[] =
{
	&m24007_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5151_0_0_0;
extern Il2CppType t5151_1_0_0;
struct t5151;
extern TypeInfo t5151_TI;
extern Il2CppGenericClass t5151_GC;
TypeInfo t5151_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5151_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5151_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5151_TI, &t5151_0_0_0, &t5151_1_0_0, NULL, &t5151_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1872_TI;

extern TypeInfo t43_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
extern TypeInfo t19_TI;
extern MethodInfo m10215_MI;
extern MethodInfo m30_MI;
extern MethodInfo m28_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerEventData>
extern TypeInfo t1872_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10220_MI = 
{
	".ctor", (methodPointerType)&m8113_gshared, &t1872_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t1872_m10221_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10221_MI = 
{
	"GetHashCode", (methodPointerType)&m8114_gshared, &t1872_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1872_m10221_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
extern Il2CppType t43_0_0_0;
static ParameterInfo t1872_m10222_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10222_MI = 
{
	"Equals", (methodPointerType)&m8115_gshared, &t1872_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t1872_m10222_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1872_MIs[] =
{
	&m10220_MI,
	&m10221_MI,
	&m10222_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10222_MI;
extern MethodInfo m10221_MI;
extern MethodInfo m10218_MI;
extern MethodInfo m10217_MI;
extern MethodInfo m10221_MI;
extern MethodInfo m10222_MI;
static MethodInfo* t1872_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10222_MI,
	&m10221_MI,
	&m10218_MI,
	&m10217_MI,
	&m10221_MI,
	&m10222_MI,
};
extern TypeInfo t5149_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t1872_IOs[] = 
{
	{ &t5149_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppType t5151_0_0_0;
extern Il2CppType t43_0_0_0;
extern TypeInfo t1871_TI;
extern TypeInfo t1871_TI;
extern TypeInfo t1872_TI;
extern MethodInfo m10220_MI;
extern TypeInfo t43_TI;
extern MethodInfo m24006_MI;
extern MethodInfo m23871_MI;
extern MethodInfo m10215_MI;
extern TypeInfo t43_TI;
static void* t1872_RGCTXData[11] = 
{
	(void*)&t5151_0_0_0,
	(void*)&t43_0_0_0,
	&t1871_TI,
	&t1871_TI,
	&t1872_TI,
	&m10220_MI,
	&t43_TI,
	&m24006_MI,
	&m23871_MI,
	&m10215_MI,
	&t43_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1872_0_0_0;
extern Il2CppType t1872_1_0_0;
extern TypeInfo t1871_TI;
struct t1872;
extern TypeInfo t1872_TI;
extern Il2CppGenericClass t1872_GC;
extern TypeInfo t836_TI;
TypeInfo t1872_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1872_MIs, NULL, NULL, NULL, &t1871_TI, NULL, &t836_TI, &t1872_TI, NULL, t1872_VT, &EmptyCustomAttributesCache, &t1872_TI, &t1872_0_0_0, &t1872_1_0_0, t1872_IOs, &t1872_GC, NULL, NULL, NULL, t1872_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1872), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t108.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t108_TI;
#include "t108MD.h"

#include "t105.h"
#include "t1880.h"
#include "t1877.h"
#include "t1878.h"
#include "t1886.h"
#include "t1879.h"
extern TypeInfo t108_TI;
extern TypeInfo t105_TI;
extern TypeInfo t18_TI;
extern TypeInfo t17_TI;
extern TypeInfo t307_TI;
extern TypeInfo t574_TI;
extern TypeInfo t1269_TI;
extern TypeInfo t1234_TI;
extern TypeInfo t1873_TI;
extern TypeInfo t1880_TI;
extern TypeInfo t19_TI;
extern TypeInfo t1875_TI;
extern TypeInfo t1876_TI;
extern TypeInfo t1874_TI;
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1877_TI;
extern TypeInfo t330_TI;
extern TypeInfo t1878_TI;
extern TypeInfo t1886_TI;
#include "t307MD.h"
#include "t1234MD.h"
#include "t591MD.h"
#include "t1877MD.h"
#include "t1878MD.h"
#include "t1880MD.h"
#include "t1886MD.h"
extern MethodInfo m1399_MI;
extern MethodInfo m10267_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m6473_MI;
extern MethodInfo m17913_MI;
extern MethodInfo m6474_MI;
extern MethodInfo m10254_MI;
extern MethodInfo m24_MI;
extern MethodInfo m10251_MI;
extern MethodInfo m3759_MI;
extern MethodInfo m1401_MI;
extern MethodInfo m10246_MI;
extern MethodInfo m10252_MI;
extern MethodInfo m10255_MI;
extern MethodInfo m10257_MI;
extern MethodInfo m10240_MI;
extern MethodInfo m10265_MI;
extern MethodInfo m6912_MI;
extern MethodInfo m10266_MI;
extern MethodInfo m24008_MI;
extern MethodInfo m24009_MI;
extern MethodInfo m24010_MI;
extern MethodInfo m24011_MI;
extern MethodInfo m42_MI;
extern MethodInfo m43_MI;
extern MethodInfo m10256_MI;
extern MethodInfo m10241_MI;
extern MethodInfo m10242_MI;
extern MethodInfo m10279_MI;
extern MethodInfo m3755_MI;
extern MethodInfo m17915_MI;
extern MethodInfo m10249_MI;
extern MethodInfo m10250_MI;
extern MethodInfo m2947_MI;
extern MethodInfo m10354_MI;
extern MethodInfo m10273_MI;
extern MethodInfo m10253_MI;
extern MethodInfo m10259_MI;
extern MethodInfo m3771_MI;
extern MethodInfo m10360_MI;
extern MethodInfo m17917_MI;
extern MethodInfo m17925_MI;
extern MethodInfo m3758_MI;
struct t16;
struct t16;
 void m16895_gshared (t4 * __this, t309** p0, int32_t p1, MethodInfo* method);
#define m16895(__this, p0, p1, method) (void)m16895_gshared((t4 *)__this, (t309**)p0, (int32_t)p1, method)
#define m17913(__this, p0, p1, method) (void)m16895_gshared((t4 *)__this, (t309**)p0, (int32_t)p1, method)
extern MethodInfo m17913_MI;
struct t16;
#include "t1884.h"
struct t16;
#include "t1486.h"
 int32_t m7708_gshared (t4 * __this, t309* p0, t4 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m7708(__this, p0, p1, p2, p3, method) (int32_t)m7708_gshared((t4 *)__this, (t309*)p0, (t4 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m17915(__this, p0, p1, p2, p3, method) (int32_t)m7708_gshared((t4 *)__this, (t309*)p0, (t4 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m17915_MI;
struct t16;
struct t16;
 void m16964_gshared (t4 * __this, t309* p0, int32_t p1, int32_t p2, t4* p3, MethodInfo* method);
#define m16964(__this, p0, p1, p2, p3, method) (void)m16964_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (int32_t)p2, (t4*)p3, method)
#define m17917(__this, p0, p1, p2, p3, method) (void)m16964_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (int32_t)p2, (t4*)p3, method)
extern MethodInfo m17917_MI;
struct t16;
struct t16;
#include "t1608.h"
 void m17115_gshared (t4 * __this, t309* p0, int32_t p1, t1608 * p2, MethodInfo* method);
#define m17115(__this, p0, p1, p2, method) (void)m17115_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (t1608 *)p2, method)
#define m17925(__this, p0, p1, p2, method) (void)m17115_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (t1608 *)p2, method)
extern MethodInfo m17925_MI;


extern MethodInfo m10251_MI;
 t1880  m10251 (t108 * __this, MethodInfo* method){
	{
		t1880  L_0 = {0};
		m10273(&L_0, __this, &m10273_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t18_0_0_32849;
FieldInfo t108_f0_FieldInfo = 
{
	"DefaultCapacity", &t18_0_0_32849, &t108_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1873_0_0_1;
FieldInfo t108_f1_FieldInfo = 
{
	"_items", &t1873_0_0_1, &t108_TI, offsetof(t108, f1), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t108_f2_FieldInfo = 
{
	"_size", &t18_0_0_1, &t108_TI, offsetof(t108, f2), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t108_f3_FieldInfo = 
{
	"_version", &t18_0_0_1, &t108_TI, offsetof(t108, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1873_0_0_49;
FieldInfo t108_f4_FieldInfo = 
{
	"EmptyArray", &t1873_0_0_49, &t108_TI, offsetof(t108_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t108_FIs[] =
{
	&t108_f0_FieldInfo,
	&t108_f1_FieldInfo,
	&t108_f2_FieldInfo,
	&t108_f3_FieldInfo,
	&t108_f4_FieldInfo,
	NULL
};
static const int32_t t108_f0_DefaultValueData = 4;
extern Il2CppType t18_0_0_0;
static Il2CppFieldDefaultValueEntry t108_f0_DefaultValue = 
{
	&t108_f0_FieldInfo, { (char*)&t108_f0_DefaultValueData, &t18_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t108_FDVs[] = 
{
	&t108_f0_DefaultValue,
	NULL
};
extern MethodInfo m10233_MI;
static PropertyInfo t108____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t108_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10233_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10234_MI;
static PropertyInfo t108____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t108_TI, "System.Collections.ICollection.IsSynchronized", &m10234_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10235_MI;
static PropertyInfo t108____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t108_TI, "System.Collections.ICollection.SyncRoot", &m10235_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10236_MI;
static PropertyInfo t108____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t108_TI, "System.Collections.IList.IsFixedSize", &m10236_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10237_MI;
static PropertyInfo t108____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t108_TI, "System.Collections.IList.IsReadOnly", &m10237_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10238_MI;
extern MethodInfo m10239_MI;
static PropertyInfo t108____System_Collections_IList_Item_PropertyInfo = 
{
	&t108_TI, "System.Collections.IList.Item", &m10238_MI, &m10239_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10265_MI;
extern MethodInfo m10266_MI;
static PropertyInfo t108____Capacity_PropertyInfo = 
{
	&t108_TI, "Capacity", &m10265_MI, &m10266_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1400_MI;
static PropertyInfo t108____Count_PropertyInfo = 
{
	&t108_TI, "Count", &m1400_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1399_MI;
extern MethodInfo m10267_MI;
static PropertyInfo t108____Item_PropertyInfo = 
{
	&t108_TI, "Item", &m1399_MI, &m10267_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t108_PIs[] =
{
	&t108____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t108____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t108____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t108____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t108____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t108____System_Collections_IList_Item_PropertyInfo,
	&t108____Capacity_PropertyInfo,
	&t108____Count_PropertyInfo,
	&t108____Item_PropertyInfo,
	NULL
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m1398_MI = 
{
	".ctor", (methodPointerType)&m7910_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t108_m10223_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10223_MI = 
{
	".ctor", (methodPointerType)&m7912_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t108_m10223_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10224_MI = 
{
	".cctor", (methodPointerType)&m7914_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t1874_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10225_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m7916_gshared, &t108_TI, &t1874_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t108_m10226_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10226_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m7918_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t108_m10226_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10227_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m7920_gshared, &t108_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t108_m10228_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10228_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m7922_gshared, &t108_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t108_m10228_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t108_m10229_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10229_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m7924_gshared, &t108_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t108_m10229_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t108_m10230_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10230_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m7926_gshared, &t108_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t108_m10230_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t108_m10231_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10231_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m7928_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t108_m10231_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t108_m10232_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10232_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m7930_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t108_m10232_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10233_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m7932_gshared, &t108_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10234_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m7934_gshared, &t108_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10235_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m7936_gshared, &t108_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10236_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m7938_gshared, &t108_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10237_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m7940_gshared, &t108_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t108_m10238_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10238_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m7942_gshared, &t108_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t108_m10238_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t108_m10239_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10239_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m7944_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t108_m10239_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t108_m1401_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1401_MI = 
{
	"Add", (methodPointerType)&m7945_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t108_m1401_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t108_m10240_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10240_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m7947_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t108_m10240_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1875_0_0_0;
static ParameterInfo t108_m10241_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1875_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10241_MI = 
{
	"AddCollection", (methodPointerType)&m7949_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t108_m10241_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1876_0_0_0;
static ParameterInfo t108_m10242_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t1876_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10242_MI = 
{
	"AddEnumerable", (methodPointerType)&m7951_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t108_m10242_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1876_0_0_0;
static ParameterInfo t108_m10243_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1876_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10243_MI = 
{
	"AddRange", (methodPointerType)&m7953_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t108_m10243_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t1877_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10244_MI = 
{
	"AsReadOnly", (methodPointerType)&m7955_gshared, &t108_TI, &t1877_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10245_MI = 
{
	"Clear", (methodPointerType)&m7957_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t108_m10246_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10246_MI = 
{
	"Contains", (methodPointerType)&m7959_gshared, &t108_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t108_m10246_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1873_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t108_m10247_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1873_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10247_MI = 
{
	"CopyTo", (methodPointerType)&m7961_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t108_m10247_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1878_0_0_0;
static ParameterInfo t108_m10248_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1878_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t105_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10248_MI = 
{
	"Find", (methodPointerType)&m7963_gshared, &t108_TI, &t105_0_0_0, RuntimeInvoker_t4_t4, t108_m10248_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1878_0_0_0;
static ParameterInfo t108_m10249_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1878_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10249_MI = 
{
	"CheckMatch", (methodPointerType)&m7965_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t108_m10249_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
extern Il2CppType t1878_0_0_0;
static ParameterInfo t108_m10250_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t1878_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10250_MI = 
{
	"GetIndex", (methodPointerType)&m7967_gshared, &t108_TI, &t18_0_0_0, RuntimeInvoker_t18_t18_t18_t4, t108_m10250_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t1880_0_0_0;
extern void* RuntimeInvoker_t1880 (MethodInfo* method, void* obj, void** args);
MethodInfo m10251_MI = 
{
	"GetEnumerator", (methodPointerType)&m10251, &t108_TI, &t1880_0_0_0, RuntimeInvoker_t1880, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t108_m10252_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10252_MI = 
{
	"IndexOf", (methodPointerType)&m7970_gshared, &t108_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t108_m10252_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t108_m10253_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10253_MI = 
{
	"Shift", (methodPointerType)&m7972_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t108_m10253_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t108_m10254_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10254_MI = 
{
	"CheckIndex", (methodPointerType)&m7974_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t108_m10254_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t108_m10255_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10255_MI = 
{
	"Insert", (methodPointerType)&m7976_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t108_m10255_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1876_0_0_0;
static ParameterInfo t108_m10256_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1876_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10256_MI = 
{
	"CheckCollection", (methodPointerType)&m7978_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t108_m10256_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t108_m10257_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10257_MI = 
{
	"Remove", (methodPointerType)&m7980_gshared, &t108_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t108_m10257_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1878_0_0_0;
static ParameterInfo t108_m10258_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1878_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10258_MI = 
{
	"RemoveAll", (methodPointerType)&m7982_gshared, &t108_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t108_m10258_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t108_m10259_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10259_MI = 
{
	"RemoveAt", (methodPointerType)&m7984_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t108_m10259_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10260_MI = 
{
	"Reverse", (methodPointerType)&m7986_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10261_MI = 
{
	"Sort", (methodPointerType)&m7988_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1879_0_0_0;
static ParameterInfo t108_m10262_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t1879_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10262_MI = 
{
	"Sort", (methodPointerType)&m7990_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t108_m10262_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t1873_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10263_MI = 
{
	"ToArray", (methodPointerType)&m7992_gshared, &t108_TI, &t1873_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10264_MI = 
{
	"TrimExcess", (methodPointerType)&m7994_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10265_MI = 
{
	"get_Capacity", (methodPointerType)&m7996_gshared, &t108_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t108_m10266_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10266_MI = 
{
	"set_Capacity", (methodPointerType)&m7998_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t108_m10266_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t108_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m1400_MI = 
{
	"get_Count", (methodPointerType)&m8000_gshared, &t108_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t108_m1399_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t105_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m1399_MI = 
{
	"get_Item", (methodPointerType)&m8002_gshared, &t108_TI, &t105_0_0_0, RuntimeInvoker_t4_t18, t108_m1399_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t108_m10267_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t108_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10267_MI = 
{
	"set_Item", (methodPointerType)&m8004_gshared, &t108_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t108_m10267_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t108_MIs[] =
{
	&m1398_MI,
	&m10223_MI,
	&m10224_MI,
	&m10225_MI,
	&m10226_MI,
	&m10227_MI,
	&m10228_MI,
	&m10229_MI,
	&m10230_MI,
	&m10231_MI,
	&m10232_MI,
	&m10233_MI,
	&m10234_MI,
	&m10235_MI,
	&m10236_MI,
	&m10237_MI,
	&m10238_MI,
	&m10239_MI,
	&m1401_MI,
	&m10240_MI,
	&m10241_MI,
	&m10242_MI,
	&m10243_MI,
	&m10244_MI,
	&m10245_MI,
	&m10246_MI,
	&m10247_MI,
	&m10248_MI,
	&m10249_MI,
	&m10250_MI,
	&m10251_MI,
	&m10252_MI,
	&m10253_MI,
	&m10254_MI,
	&m10255_MI,
	&m10256_MI,
	&m10257_MI,
	&m10258_MI,
	&m10259_MI,
	&m10260_MI,
	&m10261_MI,
	&m10262_MI,
	&m10263_MI,
	&m10264_MI,
	&m10265_MI,
	&m10266_MI,
	&m1400_MI,
	&m1399_MI,
	&m10267_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10227_MI;
extern MethodInfo m1400_MI;
extern MethodInfo m10234_MI;
extern MethodInfo m10235_MI;
extern MethodInfo m10226_MI;
extern MethodInfo m10236_MI;
extern MethodInfo m10237_MI;
extern MethodInfo m10238_MI;
extern MethodInfo m10239_MI;
extern MethodInfo m10228_MI;
extern MethodInfo m10245_MI;
extern MethodInfo m10229_MI;
extern MethodInfo m10230_MI;
extern MethodInfo m10231_MI;
extern MethodInfo m10232_MI;
extern MethodInfo m10259_MI;
extern MethodInfo m1400_MI;
extern MethodInfo m10233_MI;
extern MethodInfo m1401_MI;
extern MethodInfo m10245_MI;
extern MethodInfo m10246_MI;
extern MethodInfo m10247_MI;
extern MethodInfo m10257_MI;
extern MethodInfo m10225_MI;
extern MethodInfo m10252_MI;
extern MethodInfo m10255_MI;
extern MethodInfo m10259_MI;
extern MethodInfo m1399_MI;
extern MethodInfo m10267_MI;
static MethodInfo* t108_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10227_MI,
	&m1400_MI,
	&m10234_MI,
	&m10235_MI,
	&m10226_MI,
	&m10236_MI,
	&m10237_MI,
	&m10238_MI,
	&m10239_MI,
	&m10228_MI,
	&m10245_MI,
	&m10229_MI,
	&m10230_MI,
	&m10231_MI,
	&m10232_MI,
	&m10259_MI,
	&m1400_MI,
	&m10233_MI,
	&m1401_MI,
	&m10245_MI,
	&m10246_MI,
	&m10247_MI,
	&m10257_MI,
	&m10225_MI,
	&m10252_MI,
	&m10255_MI,
	&m10259_MI,
	&m1399_MI,
	&m10267_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t1875_TI;
extern TypeInfo t1876_TI;
extern TypeInfo t1882_TI;
static TypeInfo* t108_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t1875_TI,
	&t1876_TI,
	&t1882_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t1875_TI;
extern TypeInfo t1876_TI;
extern TypeInfo t1882_TI;
static Il2CppInterfaceOffsetPair t108_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t1875_TI, 20},
	{ &t1876_TI, 27},
	{ &t1882_TI, 28},
};
extern TypeInfo t108_TI;
extern TypeInfo t1873_TI;
extern MethodInfo m10251_MI;
extern TypeInfo t1880_TI;
extern TypeInfo t105_TI;
extern MethodInfo m1401_MI;
extern MethodInfo m10246_MI;
extern MethodInfo m10252_MI;
extern MethodInfo m10254_MI;
extern MethodInfo m10255_MI;
extern MethodInfo m10257_MI;
extern MethodInfo m1399_MI;
extern MethodInfo m10267_MI;
extern MethodInfo m10240_MI;
extern MethodInfo m10265_MI;
extern MethodInfo m10266_MI;
extern MethodInfo m24008_MI;
extern MethodInfo m24009_MI;
extern MethodInfo m24010_MI;
extern MethodInfo m24011_MI;
extern MethodInfo m10256_MI;
extern TypeInfo t1875_TI;
extern MethodInfo m10241_MI;
extern MethodInfo m10242_MI;
extern TypeInfo t1877_TI;
extern MethodInfo m10279_MI;
extern MethodInfo m17915_MI;
extern MethodInfo m10249_MI;
extern MethodInfo m10250_MI;
extern MethodInfo m10354_MI;
extern MethodInfo m10273_MI;
extern MethodInfo m10253_MI;
extern MethodInfo m10259_MI;
extern MethodInfo m10360_MI;
extern MethodInfo m17917_MI;
extern MethodInfo m17925_MI;
extern MethodInfo m17913_MI;
static void* t108_RGCTXData[37] = 
{
	&t108_TI,
	&t1873_TI,
	&m10251_MI,
	&t1880_TI,
	&t105_TI,
	&m1401_MI,
	&m10246_MI,
	&m10252_MI,
	&m10254_MI,
	&m10255_MI,
	&m10257_MI,
	&m1399_MI,
	&m10267_MI,
	&m10240_MI,
	&m10265_MI,
	&m10266_MI,
	&m24008_MI,
	&m24009_MI,
	&m24010_MI,
	&m24011_MI,
	&m10256_MI,
	&t1875_TI,
	&m10241_MI,
	&m10242_MI,
	&t1877_TI,
	&m10279_MI,
	&m17915_MI,
	&m10249_MI,
	&m10250_MI,
	&m10354_MI,
	&m10273_MI,
	&m10253_MI,
	&m10259_MI,
	&m10360_MI,
	&m17917_MI,
	&m17925_MI,
	&m17913_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_1_0_0;
extern TypeInfo t4_TI;
struct t108;
extern TypeInfo t108_TI;
extern Il2CppGenericClass t108_GC;
extern CustomAttributesCache t840__CustomAttributeCache;
TypeInfo t108_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t108_MIs, t108_PIs, t108_FIs, NULL, &t4_TI, NULL, NULL, &t108_TI, t108_ITIs, t108_VT, &t840__CustomAttributeCache, &t108_TI, &t108_0_0_0, &t108_1_0_0, t108_IOs, &t108_GC, NULL, t108_FDVs, NULL, t108_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t108), 0, -1, sizeof(t108_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1875_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern MethodInfo m24008_MI;
static PropertyInfo t1875____Count_PropertyInfo = 
{
	&t1875_TI, "Count", &m24008_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24012_MI;
static PropertyInfo t1875____IsReadOnly_PropertyInfo = 
{
	&t1875_TI, "IsReadOnly", &m24012_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1875_PIs[] =
{
	&t1875____Count_PropertyInfo,
	&t1875____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t1875_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24008_MI = 
{
	"get_Count", NULL, &t1875_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1875_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24012_MI = 
{
	"get_IsReadOnly", NULL, &t1875_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t1875_m24013_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1875_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24013_MI = 
{
	"Add", NULL, &t1875_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1875_m24013_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1875_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24014_MI = 
{
	"Clear", NULL, &t1875_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t1875_m24015_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1875_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24015_MI = 
{
	"Contains", NULL, &t1875_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1875_m24015_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1873_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1875_m24009_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1873_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1875_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24009_MI = 
{
	"CopyTo", NULL, &t1875_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t1875_m24009_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t1875_m24016_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1875_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24016_MI = 
{
	"Remove", NULL, &t1875_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1875_m24016_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1875_MIs[] =
{
	&m24008_MI,
	&m24012_MI,
	&m24013_MI,
	&m24014_MI,
	&m24015_MI,
	&m24009_MI,
	&m24016_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t1876_TI;
static TypeInfo* t1875_ITIs[] = 
{
	&t592_TI,
	&t1876_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1875_0_0_0;
extern Il2CppType t1875_1_0_0;
struct t1875;
extern TypeInfo t1875_TI;
extern Il2CppGenericClass t1875_GC;
TypeInfo t1875_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t1875_MIs, t1875_PIs, NULL, NULL, NULL, NULL, NULL, &t1875_TI, t1875_ITIs, NULL, &EmptyCustomAttributesCache, &t1875_TI, &t1875_0_0_0, &t1875_1_0_0, NULL, &t1875_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1876_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern TypeInfo t1876_TI;
extern Il2CppType t1874_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24010_MI = 
{
	"GetEnumerator", NULL, &t1876_TI, &t1874_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1876_MIs[] =
{
	&m24010_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t1876_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1876_0_0_0;
extern Il2CppType t1876_1_0_0;
struct t1876;
extern TypeInfo t1876_TI;
extern Il2CppGenericClass t1876_GC;
TypeInfo t1876_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t1876_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1876_TI, t1876_ITIs, NULL, &EmptyCustomAttributesCache, &t1876_TI, &t1876_0_0_0, &t1876_1_0_0, NULL, &t1876_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1874_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern MethodInfo m24011_MI;
static PropertyInfo t1874____Current_PropertyInfo = 
{
	&t1874_TI, "Current", &m24011_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1874_PIs[] =
{
	&t1874____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1874_TI;
extern Il2CppType t105_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24011_MI = 
{
	"get_Current", NULL, &t1874_TI, &t105_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1874_MIs[] =
{
	&m24011_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t1874_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1874_0_0_0;
extern Il2CppType t1874_1_0_0;
struct t1874;
extern TypeInfo t1874_TI;
extern Il2CppGenericClass t1874_GC;
TypeInfo t1874_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1874_MIs, t1874_PIs, NULL, NULL, NULL, NULL, NULL, &t1874_TI, t1874_ITIs, NULL, &EmptyCustomAttributesCache, &t1874_TI, &t1874_0_0_0, &t1874_1_0_0, NULL, &t1874_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1881.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1881_TI;
#include "t1881MD.h"

extern TypeInfo t1881_TI;
extern TypeInfo t105_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m10272_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m17902_MI;
struct t16;
#define m17902(__this, p0, method) (t105 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m17902_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t16_0_0_1;
FieldInfo t1881_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1881_TI, offsetof(t1881, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1881_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1881_TI, offsetof(t1881, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1881_FIs[] =
{
	&t1881_f0_FieldInfo,
	&t1881_f1_FieldInfo,
	NULL
};
extern MethodInfo m10269_MI;
static PropertyInfo t1881____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1881_TI, "System.Collections.IEnumerator.Current", &m10269_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10272_MI;
static PropertyInfo t1881____Current_PropertyInfo = 
{
	&t1881_TI, "Current", &m10272_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1881_PIs[] =
{
	&t1881____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1881____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1881_m10268_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1881_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10268_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t1881_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1881_m10268_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1881_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10269_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t1881_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1881_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10270_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t1881_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1881_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10271_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t1881_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1881_TI;
extern Il2CppType t105_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10272_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t1881_TI, &t105_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1881_MIs[] =
{
	&m10268_MI,
	&m10269_MI,
	&m10270_MI,
	&m10271_MI,
	&m10272_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m10269_MI;
extern MethodInfo m10271_MI;
extern MethodInfo m10270_MI;
extern MethodInfo m10272_MI;
static MethodInfo* t1881_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m10269_MI,
	&m10271_MI,
	&m10270_MI,
	&m10272_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1874_TI;
static TypeInfo* t1881_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t1874_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1874_TI;
static Il2CppInterfaceOffsetPair t1881_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t1874_TI, 7},
};
extern MethodInfo m10272_MI;
extern TypeInfo t105_TI;
extern MethodInfo m17902_MI;
static void* t1881_RGCTXData[3] = 
{
	&m10272_MI,
	&t105_TI,
	&m17902_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1881_0_0_0;
extern Il2CppType t1881_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1881_TI;
extern Il2CppGenericClass t1881_GC;
extern TypeInfo t16_TI;
TypeInfo t1881_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1881_MIs, t1881_PIs, t1881_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1881_TI, t1881_ITIs, t1881_VT, &EmptyCustomAttributesCache, &t1881_TI, &t1881_0_0_0, &t1881_1_0_0, t1881_IOs, &t1881_GC, NULL, NULL, NULL, t1881_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1881)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1882_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern MethodInfo m24017_MI;
extern MethodInfo m24018_MI;
static PropertyInfo t1882____Item_PropertyInfo = 
{
	&t1882_TI, "Item", &m24017_MI, &m24018_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1882_PIs[] =
{
	&t1882____Item_PropertyInfo,
	NULL
};
extern Il2CppType t105_0_0_0;
static ParameterInfo t1882_m24019_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1882_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24019_MI = 
{
	"IndexOf", NULL, &t1882_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1882_m24019_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t1882_m24020_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1882_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24020_MI = 
{
	"Insert", NULL, &t1882_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1882_m24020_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1882_m24021_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1882_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24021_MI = 
{
	"RemoveAt", NULL, &t1882_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t1882_m24021_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1882_m24017_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1882_TI;
extern Il2CppType t105_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24017_MI = 
{
	"get_Item", NULL, &t1882_TI, &t105_0_0_0, RuntimeInvoker_t4_t18, t1882_m24017_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t1882_m24018_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1882_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24018_MI = 
{
	"set_Item", NULL, &t1882_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1882_m24018_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1882_MIs[] =
{
	&m24019_MI,
	&m24020_MI,
	&m24021_MI,
	&m24017_MI,
	&m24018_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t1875_TI;
extern TypeInfo t1876_TI;
static TypeInfo* t1882_ITIs[] = 
{
	&t592_TI,
	&t1875_TI,
	&t1876_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1882_0_0_0;
extern Il2CppType t1882_1_0_0;
struct t1882;
extern TypeInfo t1882_TI;
extern Il2CppGenericClass t1882_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t1882_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t1882_MIs, t1882_PIs, NULL, NULL, NULL, NULL, NULL, &t1882_TI, t1882_ITIs, NULL, &t1401__CustomAttributeCache, &t1882_TI, &t1882_0_0_0, &t1882_1_0_0, NULL, &t1882_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1880_TI;

extern TypeInfo t1880_TI;
extern TypeInfo t1270_TI;
extern TypeInfo t105_TI;
extern TypeInfo t108_TI;
extern TypeInfo t294_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m10276_MI;
extern MethodInfo m6906_MI;
extern MethodInfo m1423_MI;
extern MethodInfo m2995_MI;
extern MethodInfo m7111_MI;
extern MethodInfo m6907_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t108_0_0_1;
FieldInfo t1880_f0_FieldInfo = 
{
	"l", &t108_0_0_1, &t1880_TI, offsetof(t1880, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1880_f1_FieldInfo = 
{
	"next", &t18_0_0_1, &t1880_TI, offsetof(t1880, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1880_f2_FieldInfo = 
{
	"ver", &t18_0_0_1, &t1880_TI, offsetof(t1880, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t105_0_0_1;
FieldInfo t1880_f3_FieldInfo = 
{
	"current", &t105_0_0_1, &t1880_TI, offsetof(t1880, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1880_FIs[] =
{
	&t1880_f0_FieldInfo,
	&t1880_f1_FieldInfo,
	&t1880_f2_FieldInfo,
	&t1880_f3_FieldInfo,
	NULL
};
extern MethodInfo m10274_MI;
static PropertyInfo t1880____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1880_TI, "System.Collections.IEnumerator.Current", &m10274_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10278_MI;
static PropertyInfo t1880____Current_PropertyInfo = 
{
	&t1880_TI, "Current", &m10278_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1880_PIs[] =
{
	&t1880____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1880____Current_PropertyInfo,
	NULL
};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1880_m10273_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern TypeInfo t1880_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10273_MI = 
{
	".ctor", (methodPointerType)&m8006_gshared, &t1880_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1880_m10273_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1880_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10274_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8007_gshared, &t1880_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1880_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10275_MI = 
{
	"Dispose", (methodPointerType)&m8008_gshared, &t1880_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1880_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10276_MI = 
{
	"VerifyState", (methodPointerType)&m8009_gshared, &t1880_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1880_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10277_MI = 
{
	"MoveNext", (methodPointerType)&m8010_gshared, &t1880_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1880_TI;
extern Il2CppType t105_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10278_MI = 
{
	"get_Current", (methodPointerType)&m8011_gshared, &t1880_TI, &t105_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1880_MIs[] =
{
	&m10273_MI,
	&m10274_MI,
	&m10275_MI,
	&m10276_MI,
	&m10277_MI,
	&m10278_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m10274_MI;
extern MethodInfo m10277_MI;
extern MethodInfo m10275_MI;
extern MethodInfo m10278_MI;
static MethodInfo* t1880_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m10274_MI,
	&m10277_MI,
	&m10275_MI,
	&m10278_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1874_TI;
static TypeInfo* t1880_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t1874_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1874_TI;
static Il2CppInterfaceOffsetPair t1880_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t1874_TI, 7},
};
extern MethodInfo m10276_MI;
extern TypeInfo t105_TI;
extern TypeInfo t1880_TI;
static void* t1880_RGCTXData[3] = 
{
	&m10276_MI,
	&t105_TI,
	&t1880_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1880_0_0_0;
extern Il2CppType t1880_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1880_TI;
extern Il2CppGenericClass t1880_GC;
extern TypeInfo t840_TI;
TypeInfo t1880_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1880_MIs, t1880_PIs, t1880_FIs, NULL, &t101_TI, NULL, &t840_TI, &t1880_TI, t1880_ITIs, t1880_VT, &EmptyCustomAttributesCache, &t1880_TI, &t1880_0_0_0, &t1880_1_0_0, t1880_IOs, &t1880_GC, NULL, NULL, NULL, t1880_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1880)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1877_TI;

extern TypeInfo t1877_TI;
extern TypeInfo t105_TI;
extern TypeInfo t18_TI;
extern TypeInfo t337_TI;
extern TypeInfo t1882_TI;
extern TypeInfo t1875_TI;
extern TypeInfo t330_TI;
extern TypeInfo t641_TI;
extern TypeInfo t17_TI;
extern TypeInfo t16_TI;
extern TypeInfo t592_TI;
extern TypeInfo t27_TI;
extern TypeInfo t19_TI;
extern TypeInfo t1873_TI;
extern TypeInfo t1876_TI;
extern TypeInfo t1874_TI;
#include "t1883MD.h"
extern MethodInfo m10308_MI;
extern MethodInfo m1510_MI;
extern MethodInfo m24017_MI;
extern MethodInfo m24008_MI;
extern MethodInfo m24_MI;
extern MethodInfo m2947_MI;
extern MethodInfo m7400_MI;
extern MethodInfo m7309_MI;
extern MethodInfo m10340_MI;
extern MethodInfo m24015_MI;
extern MethodInfo m24019_MI;
extern MethodInfo m24009_MI;
extern MethodInfo m24010_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t1882_0_0_1;
FieldInfo t1877_f0_FieldInfo = 
{
	"list", &t1882_0_0_1, &t1877_TI, offsetof(t1877, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1877_FIs[] =
{
	&t1877_f0_FieldInfo,
	NULL
};
extern MethodInfo m10285_MI;
extern MethodInfo m10286_MI;
static PropertyInfo t1877____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t1877_TI, "System.Collections.Generic.IList<T>.Item", &m10285_MI, &m10286_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10287_MI;
static PropertyInfo t1877____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1877_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10287_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10297_MI;
static PropertyInfo t1877____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1877_TI, "System.Collections.ICollection.IsSynchronized", &m10297_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10298_MI;
static PropertyInfo t1877____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1877_TI, "System.Collections.ICollection.SyncRoot", &m10298_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10299_MI;
static PropertyInfo t1877____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1877_TI, "System.Collections.IList.IsFixedSize", &m10299_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10300_MI;
static PropertyInfo t1877____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1877_TI, "System.Collections.IList.IsReadOnly", &m10300_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10301_MI;
extern MethodInfo m10302_MI;
static PropertyInfo t1877____System_Collections_IList_Item_PropertyInfo = 
{
	&t1877_TI, "System.Collections.IList.Item", &m10301_MI, &m10302_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10307_MI;
static PropertyInfo t1877____Count_PropertyInfo = 
{
	&t1877_TI, "Count", &m10307_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10308_MI;
static PropertyInfo t1877____Item_PropertyInfo = 
{
	&t1877_TI, "Item", &m10308_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1877_PIs[] =
{
	&t1877____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t1877____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1877____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1877____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1877____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1877____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1877____System_Collections_IList_Item_PropertyInfo,
	&t1877____Count_PropertyInfo,
	&t1877____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1882_0_0_0;
static ParameterInfo t1877_m10279_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1882_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10279_MI = 
{
	".ctor", (methodPointerType)&m8012_gshared, &t1877_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1877_m10279_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t1877_m10280_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10280_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m8013_gshared, &t1877_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1877_m10280_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1877_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10281_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m8014_gshared, &t1877_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t1877_m10282_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10282_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m8015_gshared, &t1877_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1877_m10282_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t1877_m10283_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10283_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m8016_gshared, &t1877_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1877_m10283_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1877_m10284_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10284_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m8017_gshared, &t1877_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t1877_m10284_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1877_m10285_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t105_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10285_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8018_gshared, &t1877_TI, &t105_0_0_0, RuntimeInvoker_t4_t18, t1877_m10285_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t1877_m10286_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10286_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8019_gshared, &t1877_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1877_m10286_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1877_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10287_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8020_gshared, &t1877_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1877_m10288_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10288_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8021_gshared, &t1877_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t1877_m10288_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1877_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10289_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8022_gshared, &t1877_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1877_m10290_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10290_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8023_gshared, &t1877_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1877_m10290_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1877_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10291_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8024_gshared, &t1877_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1877_m10292_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10292_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8025_gshared, &t1877_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1877_m10292_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1877_m10293_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10293_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8026_gshared, &t1877_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1877_m10293_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1877_m10294_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10294_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8027_gshared, &t1877_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1877_m10294_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1877_m10295_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10295_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8028_gshared, &t1877_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1877_m10295_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1877_m10296_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10296_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8029_gshared, &t1877_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t1877_m10296_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1877_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10297_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8030_gshared, &t1877_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1877_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10298_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8031_gshared, &t1877_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1877_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10299_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8032_gshared, &t1877_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1877_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10300_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8033_gshared, &t1877_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1877_m10301_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10301_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8034_gshared, &t1877_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t1877_m10301_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1877_m10302_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10302_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8035_gshared, &t1877_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1877_m10302_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t1877_m10303_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10303_MI = 
{
	"Contains", (methodPointerType)&m8036_gshared, &t1877_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1877_m10303_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1873_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1877_m10304_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1873_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10304_MI = 
{
	"CopyTo", (methodPointerType)&m8037_gshared, &t1877_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t1877_m10304_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1877_TI;
extern Il2CppType t1874_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10305_MI = 
{
	"GetEnumerator", (methodPointerType)&m8038_gshared, &t1877_TI, &t1874_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t1877_m10306_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10306_MI = 
{
	"IndexOf", (methodPointerType)&m8039_gshared, &t1877_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1877_m10306_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1877_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10307_MI = 
{
	"get_Count", (methodPointerType)&m8040_gshared, &t1877_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1877_m10308_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t105_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10308_MI = 
{
	"get_Item", (methodPointerType)&m8041_gshared, &t1877_TI, &t105_0_0_0, RuntimeInvoker_t4_t18, t1877_m10308_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1877_MIs[] =
{
	&m10279_MI,
	&m10280_MI,
	&m10281_MI,
	&m10282_MI,
	&m10283_MI,
	&m10284_MI,
	&m10285_MI,
	&m10286_MI,
	&m10287_MI,
	&m10288_MI,
	&m10289_MI,
	&m10290_MI,
	&m10291_MI,
	&m10292_MI,
	&m10293_MI,
	&m10294_MI,
	&m10295_MI,
	&m10296_MI,
	&m10297_MI,
	&m10298_MI,
	&m10299_MI,
	&m10300_MI,
	&m10301_MI,
	&m10302_MI,
	&m10303_MI,
	&m10304_MI,
	&m10305_MI,
	&m10306_MI,
	&m10307_MI,
	&m10308_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10289_MI;
extern MethodInfo m10307_MI;
extern MethodInfo m10297_MI;
extern MethodInfo m10298_MI;
extern MethodInfo m10288_MI;
extern MethodInfo m10299_MI;
extern MethodInfo m10300_MI;
extern MethodInfo m10301_MI;
extern MethodInfo m10302_MI;
extern MethodInfo m10290_MI;
extern MethodInfo m10291_MI;
extern MethodInfo m10292_MI;
extern MethodInfo m10293_MI;
extern MethodInfo m10294_MI;
extern MethodInfo m10295_MI;
extern MethodInfo m10296_MI;
extern MethodInfo m10307_MI;
extern MethodInfo m10287_MI;
extern MethodInfo m10280_MI;
extern MethodInfo m10281_MI;
extern MethodInfo m10303_MI;
extern MethodInfo m10304_MI;
extern MethodInfo m10283_MI;
extern MethodInfo m10306_MI;
extern MethodInfo m10282_MI;
extern MethodInfo m10284_MI;
extern MethodInfo m10285_MI;
extern MethodInfo m10286_MI;
extern MethodInfo m10305_MI;
extern MethodInfo m10308_MI;
static MethodInfo* t1877_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10289_MI,
	&m10307_MI,
	&m10297_MI,
	&m10298_MI,
	&m10288_MI,
	&m10299_MI,
	&m10300_MI,
	&m10301_MI,
	&m10302_MI,
	&m10290_MI,
	&m10291_MI,
	&m10292_MI,
	&m10293_MI,
	&m10294_MI,
	&m10295_MI,
	&m10296_MI,
	&m10307_MI,
	&m10287_MI,
	&m10280_MI,
	&m10281_MI,
	&m10303_MI,
	&m10304_MI,
	&m10283_MI,
	&m10306_MI,
	&m10282_MI,
	&m10284_MI,
	&m10285_MI,
	&m10286_MI,
	&m10305_MI,
	&m10308_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t1875_TI;
extern TypeInfo t1882_TI;
extern TypeInfo t1876_TI;
static TypeInfo* t1877_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t1875_TI,
	&t1882_TI,
	&t1876_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t1875_TI;
extern TypeInfo t1882_TI;
extern TypeInfo t1876_TI;
static Il2CppInterfaceOffsetPair t1877_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t1875_TI, 20},
	{ &t1882_TI, 27},
	{ &t1876_TI, 32},
};
extern MethodInfo m10308_MI;
extern MethodInfo m10340_MI;
extern TypeInfo t105_TI;
extern MethodInfo m24015_MI;
extern MethodInfo m24019_MI;
extern MethodInfo m24017_MI;
extern MethodInfo m24009_MI;
extern MethodInfo m24010_MI;
extern MethodInfo m24008_MI;
static void* t1877_RGCTXData[9] = 
{
	&m10308_MI,
	&m10340_MI,
	&t105_TI,
	&m24015_MI,
	&m24019_MI,
	&m24017_MI,
	&m24009_MI,
	&m24010_MI,
	&m24008_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1877_0_0_0;
extern Il2CppType t1877_1_0_0;
extern TypeInfo t4_TI;
struct t1877;
extern TypeInfo t1877_TI;
extern Il2CppGenericClass t1877_GC;
extern CustomAttributesCache t842__CustomAttributeCache;
TypeInfo t1877_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t1877_MIs, t1877_PIs, t1877_FIs, NULL, &t4_TI, NULL, NULL, &t1877_TI, t1877_ITIs, t1877_VT, &t842__CustomAttributeCache, &t1877_TI, &t1877_0_0_0, &t1877_1_0_0, t1877_IOs, &t1877_GC, NULL, NULL, NULL, t1877_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1877), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t1883.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1883_TI;

extern TypeInfo t1883_TI;
extern TypeInfo t1875_TI;
extern TypeInfo t19_TI;
extern TypeInfo t1882_TI;
extern TypeInfo t105_TI;
extern TypeInfo t18_TI;
extern TypeInfo t17_TI;
extern TypeInfo t108_TI;
extern TypeInfo t641_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern TypeInfo t1876_TI;
extern TypeInfo t1874_TI;
extern TypeInfo t1873_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t337_TI;
extern TypeInfo t1015_TI;
extern Il2CppType t105_0_0_0;
extern MethodInfo m24012_MI;
extern MethodInfo m10343_MI;
extern MethodInfo m10344_MI;
extern MethodInfo m24017_MI;
extern MethodInfo m10341_MI;
extern MethodInfo m10339_MI;
extern MethodInfo m24008_MI;
extern MethodInfo m24_MI;
extern MethodInfo m1398_MI;
extern MethodInfo m7399_MI;
extern MethodInfo m7400_MI;
extern MethodInfo m24010_MI;
extern MethodInfo m10332_MI;
extern MethodInfo m10340_MI;
extern MethodInfo m24015_MI;
extern MethodInfo m24019_MI;
extern MethodInfo m10342_MI;
extern MethodInfo m10330_MI;
extern MethodInfo m10335_MI;
extern MethodInfo m10326_MI;
extern MethodInfo m24014_MI;
extern MethodInfo m24009_MI;
extern MethodInfo m24020_MI;
extern MethodInfo m24021_MI;
extern MethodInfo m24018_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m3814_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m1510_MI;
extern MethodInfo m7398_MI;
extern MethodInfo m7401_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t1882_0_0_1;
FieldInfo t1883_f0_FieldInfo = 
{
	"list", &t1882_0_0_1, &t1883_TI, offsetof(t1883, f0), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t1883_f1_FieldInfo = 
{
	"syncRoot", &t4_0_0_1, &t1883_TI, offsetof(t1883, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1883_FIs[] =
{
	&t1883_f0_FieldInfo,
	&t1883_f1_FieldInfo,
	NULL
};
extern MethodInfo m10310_MI;
static PropertyInfo t1883____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1883_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10310_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10318_MI;
static PropertyInfo t1883____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1883_TI, "System.Collections.ICollection.IsSynchronized", &m10318_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10319_MI;
static PropertyInfo t1883____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1883_TI, "System.Collections.ICollection.SyncRoot", &m10319_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10320_MI;
static PropertyInfo t1883____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1883_TI, "System.Collections.IList.IsFixedSize", &m10320_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10321_MI;
static PropertyInfo t1883____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1883_TI, "System.Collections.IList.IsReadOnly", &m10321_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10322_MI;
extern MethodInfo m10323_MI;
static PropertyInfo t1883____System_Collections_IList_Item_PropertyInfo = 
{
	&t1883_TI, "System.Collections.IList.Item", &m10322_MI, &m10323_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10336_MI;
static PropertyInfo t1883____Count_PropertyInfo = 
{
	&t1883_TI, "Count", &m10336_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10337_MI;
extern MethodInfo m10338_MI;
static PropertyInfo t1883____Item_PropertyInfo = 
{
	&t1883_TI, "Item", &m10337_MI, &m10338_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1883_PIs[] =
{
	&t1883____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1883____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1883____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1883____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1883____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1883____System_Collections_IList_Item_PropertyInfo,
	&t1883____Count_PropertyInfo,
	&t1883____Item_PropertyInfo,
	NULL
};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10309_MI = 
{
	".ctor", (methodPointerType)&m8042_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1883_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10310_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8043_gshared, &t1883_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1883_m10311_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10311_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8044_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t1883_m10311_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1883_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10312_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8045_gshared, &t1883_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1883_m10313_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10313_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8046_gshared, &t1883_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1883_m10313_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1883_m10314_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10314_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8047_gshared, &t1883_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1883_m10314_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1883_m10315_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10315_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8048_gshared, &t1883_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1883_m10315_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1883_m10316_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10316_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8049_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1883_m10316_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1883_m10317_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10317_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8050_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1883_m10317_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1883_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10318_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8051_gshared, &t1883_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1883_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10319_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8052_gshared, &t1883_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1883_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10320_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8053_gshared, &t1883_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1883_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10321_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8054_gshared, &t1883_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1883_m10322_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10322_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8055_gshared, &t1883_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t1883_m10322_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1883_m10323_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10323_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8056_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1883_m10323_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t1883_m10324_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10324_MI = 
{
	"Add", (methodPointerType)&m8057_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1883_m10324_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10325_MI = 
{
	"Clear", (methodPointerType)&m8058_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10326_MI = 
{
	"ClearItems", (methodPointerType)&m8059_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t1883_m10327_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10327_MI = 
{
	"Contains", (methodPointerType)&m8060_gshared, &t1883_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1883_m10327_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1873_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1883_m10328_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1873_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10328_MI = 
{
	"CopyTo", (methodPointerType)&m8061_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t1883_m10328_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1883_TI;
extern Il2CppType t1874_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10329_MI = 
{
	"GetEnumerator", (methodPointerType)&m8062_gshared, &t1883_TI, &t1874_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t1883_m10330_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10330_MI = 
{
	"IndexOf", (methodPointerType)&m8063_gshared, &t1883_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1883_m10330_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t1883_m10331_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10331_MI = 
{
	"Insert", (methodPointerType)&m8064_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1883_m10331_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t1883_m10332_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10332_MI = 
{
	"InsertItem", (methodPointerType)&m8065_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1883_m10332_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t1883_m10333_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10333_MI = 
{
	"Remove", (methodPointerType)&m8066_gshared, &t1883_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1883_m10333_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1883_m10334_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10334_MI = 
{
	"RemoveAt", (methodPointerType)&m8067_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t1883_m10334_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1883_m10335_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10335_MI = 
{
	"RemoveItem", (methodPointerType)&m8068_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t1883_m10335_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1883_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10336_MI = 
{
	"get_Count", (methodPointerType)&m8069_gshared, &t1883_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1883_m10337_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t105_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10337_MI = 
{
	"get_Item", (methodPointerType)&m8070_gshared, &t1883_TI, &t105_0_0_0, RuntimeInvoker_t4_t18, t1883_m10337_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t1883_m10338_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10338_MI = 
{
	"set_Item", (methodPointerType)&m8071_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1883_m10338_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t1883_m10339_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10339_MI = 
{
	"SetItem", (methodPointerType)&m8072_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1883_m10339_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1883_m10340_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10340_MI = 
{
	"IsValidItem", (methodPointerType)&m8073_gshared, &t1883_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1883_m10340_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1883_m10341_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t105_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10341_MI = 
{
	"ConvertItem", (methodPointerType)&m8074_gshared, &t1883_TI, &t105_0_0_0, RuntimeInvoker_t4_t4, t1883_m10341_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1882_0_0_0;
static ParameterInfo t1883_m10342_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1882_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10342_MI = 
{
	"CheckWritable", (methodPointerType)&m8075_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1883_m10342_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1882_0_0_0;
static ParameterInfo t1883_m10343_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1882_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10343_MI = 
{
	"IsSynchronized", (methodPointerType)&m8076_gshared, &t1883_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1883_m10343_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1882_0_0_0;
static ParameterInfo t1883_m10344_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1882_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10344_MI = 
{
	"IsFixedSize", (methodPointerType)&m8077_gshared, &t1883_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1883_m10344_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1883_MIs[] =
{
	&m10309_MI,
	&m10310_MI,
	&m10311_MI,
	&m10312_MI,
	&m10313_MI,
	&m10314_MI,
	&m10315_MI,
	&m10316_MI,
	&m10317_MI,
	&m10318_MI,
	&m10319_MI,
	&m10320_MI,
	&m10321_MI,
	&m10322_MI,
	&m10323_MI,
	&m10324_MI,
	&m10325_MI,
	&m10326_MI,
	&m10327_MI,
	&m10328_MI,
	&m10329_MI,
	&m10330_MI,
	&m10331_MI,
	&m10332_MI,
	&m10333_MI,
	&m10334_MI,
	&m10335_MI,
	&m10336_MI,
	&m10337_MI,
	&m10338_MI,
	&m10339_MI,
	&m10340_MI,
	&m10341_MI,
	&m10342_MI,
	&m10343_MI,
	&m10344_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10312_MI;
extern MethodInfo m10336_MI;
extern MethodInfo m10318_MI;
extern MethodInfo m10319_MI;
extern MethodInfo m10311_MI;
extern MethodInfo m10320_MI;
extern MethodInfo m10321_MI;
extern MethodInfo m10322_MI;
extern MethodInfo m10323_MI;
extern MethodInfo m10313_MI;
extern MethodInfo m10325_MI;
extern MethodInfo m10314_MI;
extern MethodInfo m10315_MI;
extern MethodInfo m10316_MI;
extern MethodInfo m10317_MI;
extern MethodInfo m10334_MI;
extern MethodInfo m10336_MI;
extern MethodInfo m10310_MI;
extern MethodInfo m10324_MI;
extern MethodInfo m10325_MI;
extern MethodInfo m10327_MI;
extern MethodInfo m10328_MI;
extern MethodInfo m10333_MI;
extern MethodInfo m10330_MI;
extern MethodInfo m10331_MI;
extern MethodInfo m10334_MI;
extern MethodInfo m10337_MI;
extern MethodInfo m10338_MI;
extern MethodInfo m10329_MI;
extern MethodInfo m10326_MI;
extern MethodInfo m10332_MI;
extern MethodInfo m10335_MI;
extern MethodInfo m10339_MI;
static MethodInfo* t1883_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10312_MI,
	&m10336_MI,
	&m10318_MI,
	&m10319_MI,
	&m10311_MI,
	&m10320_MI,
	&m10321_MI,
	&m10322_MI,
	&m10323_MI,
	&m10313_MI,
	&m10325_MI,
	&m10314_MI,
	&m10315_MI,
	&m10316_MI,
	&m10317_MI,
	&m10334_MI,
	&m10336_MI,
	&m10310_MI,
	&m10324_MI,
	&m10325_MI,
	&m10327_MI,
	&m10328_MI,
	&m10333_MI,
	&m10330_MI,
	&m10331_MI,
	&m10334_MI,
	&m10337_MI,
	&m10338_MI,
	&m10329_MI,
	&m10326_MI,
	&m10332_MI,
	&m10335_MI,
	&m10339_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t1875_TI;
extern TypeInfo t1882_TI;
extern TypeInfo t1876_TI;
static TypeInfo* t1883_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t1875_TI,
	&t1882_TI,
	&t1876_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t1875_TI;
extern TypeInfo t1882_TI;
extern TypeInfo t1876_TI;
static Il2CppInterfaceOffsetPair t1883_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t1875_TI, 20},
	{ &t1882_TI, 27},
	{ &t1876_TI, 32},
};
extern TypeInfo t108_TI;
extern MethodInfo m1398_MI;
extern MethodInfo m24012_MI;
extern MethodInfo m24010_MI;
extern MethodInfo m24008_MI;
extern MethodInfo m10341_MI;
extern MethodInfo m10332_MI;
extern MethodInfo m10340_MI;
extern TypeInfo t105_TI;
extern MethodInfo m24015_MI;
extern MethodInfo m24019_MI;
extern MethodInfo m10342_MI;
extern MethodInfo m10330_MI;
extern MethodInfo m10335_MI;
extern MethodInfo m10343_MI;
extern MethodInfo m10344_MI;
extern MethodInfo m24017_MI;
extern MethodInfo m10339_MI;
extern MethodInfo m10326_MI;
extern MethodInfo m24014_MI;
extern MethodInfo m24009_MI;
extern MethodInfo m24020_MI;
extern MethodInfo m24021_MI;
extern MethodInfo m24018_MI;
extern Il2CppType t105_0_0_0;
static void* t1883_RGCTXData[25] = 
{
	&t108_TI,
	&m1398_MI,
	&m24012_MI,
	&m24010_MI,
	&m24008_MI,
	&m10341_MI,
	&m10332_MI,
	&m10340_MI,
	&t105_TI,
	&m24015_MI,
	&m24019_MI,
	&m10342_MI,
	&m10330_MI,
	&m10335_MI,
	&m10343_MI,
	&m10344_MI,
	&m24017_MI,
	&m10339_MI,
	&m10326_MI,
	&m24014_MI,
	&m24009_MI,
	&m24020_MI,
	&m24021_MI,
	&m24018_MI,
	(void*)&t105_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1883_0_0_0;
extern Il2CppType t1883_1_0_0;
extern TypeInfo t4_TI;
struct t1883;
extern TypeInfo t1883_TI;
extern Il2CppGenericClass t1883_GC;
extern CustomAttributesCache t841__CustomAttributeCache;
TypeInfo t1883_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t1883_MIs, t1883_PIs, t1883_FIs, NULL, &t4_TI, NULL, NULL, &t1883_TI, t1883_ITIs, t1883_VT, &t841__CustomAttributeCache, &t1883_TI, &t1883_0_0_0, &t1883_1_0_0, t1883_IOs, &t1883_GC, NULL, NULL, NULL, t1883_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1883), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1884_TI;
#include "t1884MD.h"

#include "t1885.h"
extern TypeInfo t1884_TI;
extern TypeInfo t5152_TI;
extern TypeInfo t294_TI;
extern TypeInfo t105_TI;
extern TypeInfo t19_TI;
extern TypeInfo t837_TI;
extern TypeInfo t526_TI;
extern TypeInfo t1885_TI;
extern TypeInfo t18_TI;
#include "t1885MD.h"
extern Il2CppType t5152_0_0_0;
extern Il2CppType t105_0_0_0;
extern Il2CppType t837_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m10350_MI;
extern MethodInfo m24022_MI;
extern MethodInfo m17914_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t1884_0_0_49;
FieldInfo t1884_f0_FieldInfo = 
{
	"_default", &t1884_0_0_49, &t1884_TI, offsetof(t1884_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1884_FIs[] =
{
	&t1884_f0_FieldInfo,
	NULL
};
extern MethodInfo m10349_MI;
static PropertyInfo t1884____Default_PropertyInfo = 
{
	&t1884_TI, "Default", &m10349_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1884_PIs[] =
{
	&t1884____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1884_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10345_MI = 
{
	".ctor", (methodPointerType)&m8078_gshared, &t1884_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1884_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10346_MI = 
{
	".cctor", (methodPointerType)&m8079_gshared, &t1884_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1884_m10347_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1884_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10347_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8080_gshared, &t1884_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1884_m10347_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1884_m10348_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1884_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10348_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8081_gshared, &t1884_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t1884_m10348_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t1884_m24022_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1884_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24022_MI = 
{
	"GetHashCode", NULL, &t1884_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1884_m24022_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t1884_m17914_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1884_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m17914_MI = 
{
	"Equals", NULL, &t1884_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t1884_m17914_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1884_TI;
extern Il2CppType t1884_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10349_MI = 
{
	"get_Default", (methodPointerType)&m8082_gshared, &t1884_TI, &t1884_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1884_MIs[] =
{
	&m10345_MI,
	&m10346_MI,
	&m10347_MI,
	&m10348_MI,
	&m24022_MI,
	&m17914_MI,
	&m10349_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m17914_MI;
extern MethodInfo m24022_MI;
extern MethodInfo m10348_MI;
extern MethodInfo m10347_MI;
static MethodInfo* t1884_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m17914_MI,
	&m24022_MI,
	&m10348_MI,
	&m10347_MI,
	NULL,
	NULL,
};
extern TypeInfo t5153_TI;
extern TypeInfo t860_TI;
static TypeInfo* t1884_ITIs[] = 
{
	&t5153_TI,
	&t860_TI,
};
extern TypeInfo t5153_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t1884_IOs[] = 
{
	{ &t5153_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppType t5152_0_0_0;
extern Il2CppType t105_0_0_0;
extern TypeInfo t1884_TI;
extern TypeInfo t1884_TI;
extern TypeInfo t1885_TI;
extern MethodInfo m10350_MI;
extern TypeInfo t105_TI;
extern MethodInfo m24022_MI;
extern MethodInfo m17914_MI;
static void* t1884_RGCTXData[9] = 
{
	(void*)&t5152_0_0_0,
	(void*)&t105_0_0_0,
	&t1884_TI,
	&t1884_TI,
	&t1885_TI,
	&m10350_MI,
	&t105_TI,
	&m24022_MI,
	&m17914_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1884_0_0_0;
extern Il2CppType t1884_1_0_0;
extern TypeInfo t4_TI;
struct t1884;
extern TypeInfo t1884_TI;
extern Il2CppGenericClass t1884_GC;
TypeInfo t1884_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t1884_MIs, t1884_PIs, t1884_FIs, NULL, &t4_TI, NULL, NULL, &t1884_TI, t1884_ITIs, t1884_VT, &EmptyCustomAttributesCache, &t1884_TI, &t1884_0_0_0, &t1884_1_0_0, t1884_IOs, &t1884_GC, NULL, NULL, NULL, t1884_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1884), 0, -1, sizeof(t1884_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5153_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t105_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t5153_m24023_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t5153_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24023_MI = 
{
	"Equals", NULL, &t5153_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t5153_m24023_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t5153_m24024_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t5153_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24024_MI = 
{
	"GetHashCode", NULL, &t5153_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t5153_m24024_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5153_MIs[] =
{
	&m24023_MI,
	&m24024_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5153_0_0_0;
extern Il2CppType t5153_1_0_0;
struct t5153;
extern TypeInfo t5153_TI;
extern Il2CppGenericClass t5153_GC;
TypeInfo t5153_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5153_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5153_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5153_TI, &t5153_0_0_0, &t5153_1_0_0, NULL, &t5153_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5152_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t105_0_0_0;
static ParameterInfo t5152_m24025_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t5152_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24025_MI = 
{
	"Equals", NULL, &t5152_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t5152_m24025_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5152_MIs[] =
{
	&m24025_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5152_0_0_0;
extern Il2CppType t5152_1_0_0;
struct t5152;
extern TypeInfo t5152_TI;
extern Il2CppGenericClass t5152_GC;
TypeInfo t5152_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5152_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5152_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5152_TI, &t5152_0_0_0, &t5152_1_0_0, NULL, &t5152_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1885_TI;

extern TypeInfo t105_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
extern TypeInfo t19_TI;
extern MethodInfo m10345_MI;
extern MethodInfo m30_MI;
extern MethodInfo m28_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern TypeInfo t1885_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10350_MI = 
{
	".ctor", (methodPointerType)&m8113_gshared, &t1885_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t1885_m10351_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10351_MI = 
{
	"GetHashCode", (methodPointerType)&m8114_gshared, &t1885_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1885_m10351_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t1885_m10352_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10352_MI = 
{
	"Equals", (methodPointerType)&m8115_gshared, &t1885_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t1885_m10352_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1885_MIs[] =
{
	&m10350_MI,
	&m10351_MI,
	&m10352_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10352_MI;
extern MethodInfo m10351_MI;
extern MethodInfo m10348_MI;
extern MethodInfo m10347_MI;
extern MethodInfo m10351_MI;
extern MethodInfo m10352_MI;
static MethodInfo* t1885_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10352_MI,
	&m10351_MI,
	&m10348_MI,
	&m10347_MI,
	&m10351_MI,
	&m10352_MI,
};
extern TypeInfo t5153_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t1885_IOs[] = 
{
	{ &t5153_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppType t5152_0_0_0;
extern Il2CppType t105_0_0_0;
extern TypeInfo t1884_TI;
extern TypeInfo t1884_TI;
extern TypeInfo t1885_TI;
extern MethodInfo m10350_MI;
extern TypeInfo t105_TI;
extern MethodInfo m24022_MI;
extern MethodInfo m17914_MI;
extern MethodInfo m10345_MI;
extern TypeInfo t105_TI;
static void* t1885_RGCTXData[11] = 
{
	(void*)&t5152_0_0_0,
	(void*)&t105_0_0_0,
	&t1884_TI,
	&t1884_TI,
	&t1885_TI,
	&m10350_MI,
	&t105_TI,
	&m24022_MI,
	&m17914_MI,
	&m10345_MI,
	&t105_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1885_0_0_0;
extern Il2CppType t1885_1_0_0;
extern TypeInfo t1884_TI;
struct t1885;
extern TypeInfo t1885_TI;
extern Il2CppGenericClass t1885_GC;
extern TypeInfo t836_TI;
TypeInfo t1885_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1885_MIs, NULL, NULL, NULL, &t1884_TI, NULL, &t836_TI, &t1885_TI, NULL, t1885_VT, &EmptyCustomAttributesCache, &t1885_TI, &t1885_0_0_0, &t1885_1_0_0, t1885_IOs, &t1885_GC, NULL, NULL, NULL, t1885_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1885), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1878_TI;



// Metadata Definition System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t1878_m10353_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m10353_MI = 
{
	".ctor", (methodPointerType)&m8116_gshared, &t1878_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t1878_m10353_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t1878_m10354_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10354_MI = 
{
	"Invoke", (methodPointerType)&m8117_gshared, &t1878_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1878_m10354_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1878_m10355_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10355_MI = 
{
	"BeginInvoke", (methodPointerType)&m8118_gshared, &t1878_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t1878_m10355_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t1878_m10356_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10356_MI = 
{
	"EndInvoke", (methodPointerType)&m8119_gshared, &t1878_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1878_m10356_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1878_MIs[] =
{
	&m10353_MI,
	&m10354_MI,
	&m10355_MI,
	&m10356_MI,
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
extern MethodInfo m10354_MI;
extern MethodInfo m10355_MI;
extern MethodInfo m10356_MI;
static MethodInfo* t1878_VT[] =
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
	&m10354_MI,
	&m10355_MI,
	&m10356_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t1878_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1878_0_0_0;
extern Il2CppType t1878_1_0_0;
extern TypeInfo t193_TI;
struct t1878;
extern TypeInfo t1878_TI;
extern Il2CppGenericClass t1878_GC;
TypeInfo t1878_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t1878_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t1878_TI, NULL, t1878_VT, &EmptyCustomAttributesCache, &t1878_TI, &t1878_0_0_0, &t1878_1_0_0, t1878_IOs, &t1878_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1878), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1886_TI;

#include "t825.h"
#include "t1887.h"
extern TypeInfo t1886_TI;
extern TypeInfo t3362_TI;
extern TypeInfo t294_TI;
extern TypeInfo t105_TI;
extern TypeInfo t19_TI;
extern TypeInfo t825_TI;
extern TypeInfo t526_TI;
extern TypeInfo t1887_TI;
extern TypeInfo t18_TI;
extern TypeInfo t307_TI;
#include "t1887MD.h"
extern Il2CppType t3362_0_0_0;
extern Il2CppType t105_0_0_0;
extern Il2CppType t825_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m10361_MI;
extern MethodInfo m24026_MI;
extern MethodInfo m6463_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t1886_0_0_49;
FieldInfo t1886_f0_FieldInfo = 
{
	"_default", &t1886_0_0_49, &t1886_TI, offsetof(t1886_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1886_FIs[] =
{
	&t1886_f0_FieldInfo,
	NULL
};
extern MethodInfo m10360_MI;
static PropertyInfo t1886____Default_PropertyInfo = 
{
	&t1886_TI, "Default", &m10360_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1886_PIs[] =
{
	&t1886____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1886_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10357_MI = 
{
	".ctor", (methodPointerType)&m8120_gshared, &t1886_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1886_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10358_MI = 
{
	".cctor", (methodPointerType)&m8121_gshared, &t1886_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1886_m10359_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1886_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10359_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8122_gshared, &t1886_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t1886_m10359_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t1886_m24026_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1886_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24026_MI = 
{
	"Compare", NULL, &t1886_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t1886_m24026_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1886_TI;
extern Il2CppType t1886_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10360_MI = 
{
	"get_Default", (methodPointerType)&m8123_gshared, &t1886_TI, &t1886_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1886_MIs[] =
{
	&m10357_MI,
	&m10358_MI,
	&m10359_MI,
	&m24026_MI,
	&m10360_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m24026_MI;
extern MethodInfo m10359_MI;
static MethodInfo* t1886_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m24026_MI,
	&m10359_MI,
	NULL,
};
extern TypeInfo t3361_TI;
extern TypeInfo t717_TI;
static TypeInfo* t1886_ITIs[] = 
{
	&t3361_TI,
	&t717_TI,
};
extern TypeInfo t3361_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t1886_IOs[] = 
{
	{ &t3361_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppType t3362_0_0_0;
extern Il2CppType t105_0_0_0;
extern TypeInfo t1886_TI;
extern TypeInfo t1886_TI;
extern TypeInfo t1887_TI;
extern MethodInfo m10361_MI;
extern TypeInfo t105_TI;
extern MethodInfo m24026_MI;
static void* t1886_RGCTXData[8] = 
{
	(void*)&t3362_0_0_0,
	(void*)&t105_0_0_0,
	&t1886_TI,
	&t1886_TI,
	&t1887_TI,
	&m10361_MI,
	&t105_TI,
	&m24026_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1886_0_0_0;
extern Il2CppType t1886_1_0_0;
extern TypeInfo t4_TI;
struct t1886;
extern TypeInfo t1886_TI;
extern Il2CppGenericClass t1886_GC;
TypeInfo t1886_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t1886_MIs, t1886_PIs, t1886_FIs, NULL, &t4_TI, NULL, NULL, &t1886_TI, t1886_ITIs, t1886_VT, &EmptyCustomAttributesCache, &t1886_TI, &t1886_0_0_0, &t1886_1_0_0, t1886_IOs, &t1886_GC, NULL, NULL, NULL, t1886_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1886), 0, -1, sizeof(t1886_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3361_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t105_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t3361_m17922_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t3361_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m17922_MI = 
{
	"Compare", NULL, &t3361_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t3361_m17922_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3361_MIs[] =
{
	&m17922_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3361_0_0_0;
extern Il2CppType t3361_1_0_0;
struct t3361;
extern TypeInfo t3361_TI;
extern Il2CppGenericClass t3361_GC;
TypeInfo t3361_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3361_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3361_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3361_TI, &t3361_0_0_0, &t3361_1_0_0, NULL, &t3361_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3362_TI;



// Metadata Definition System.IComparable`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t105_0_0_0;
static ParameterInfo t3362_m17923_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t3362_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m17923_MI = 
{
	"CompareTo", NULL, &t3362_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t3362_m17923_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3362_MIs[] =
{
	&m17923_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3362_0_0_0;
extern Il2CppType t3362_1_0_0;
struct t3362;
extern TypeInfo t3362_TI;
extern Il2CppGenericClass t3362_GC;
TypeInfo t3362_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3362_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3362_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3362_TI, &t3362_0_0_0, &t3362_1_0_0, NULL, &t3362_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1887_TI;

extern TypeInfo t105_TI;
extern TypeInfo t3362_TI;
extern TypeInfo t18_TI;
extern TypeInfo t289_TI;
extern TypeInfo t4_TI;
extern TypeInfo t307_TI;
extern MethodInfo m10357_MI;
extern MethodInfo m17923_MI;
extern MethodInfo m7306_MI;
extern MethodInfo m1936_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern TypeInfo t1887_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10361_MI = 
{
	".ctor", (methodPointerType)&m8124_gshared, &t1887_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t1887_m10362_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1887_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10362_MI = 
{
	"Compare", (methodPointerType)&m8125_gshared, &t1887_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t1887_m10362_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1887_MIs[] =
{
	&m10361_MI,
	&m10362_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10362_MI;
extern MethodInfo m10359_MI;
extern MethodInfo m10362_MI;
static MethodInfo* t1887_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10362_MI,
	&m10359_MI,
	&m10362_MI,
};
extern TypeInfo t3361_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t1887_IOs[] = 
{
	{ &t3361_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppType t3362_0_0_0;
extern Il2CppType t105_0_0_0;
extern TypeInfo t1886_TI;
extern TypeInfo t1886_TI;
extern TypeInfo t1887_TI;
extern MethodInfo m10361_MI;
extern TypeInfo t105_TI;
extern MethodInfo m24026_MI;
extern MethodInfo m10357_MI;
extern TypeInfo t105_TI;
extern TypeInfo t3362_TI;
extern MethodInfo m17923_MI;
static void* t1887_RGCTXData[12] = 
{
	(void*)&t3362_0_0_0,
	(void*)&t105_0_0_0,
	&t1886_TI,
	&t1886_TI,
	&t1887_TI,
	&m10361_MI,
	&t105_TI,
	&m24026_MI,
	&m10357_MI,
	&t105_TI,
	&t3362_TI,
	&m17923_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1887_0_0_0;
extern Il2CppType t1887_1_0_0;
extern TypeInfo t1886_TI;
struct t1887;
extern TypeInfo t1887_TI;
extern Il2CppGenericClass t1887_GC;
extern TypeInfo t824_TI;
TypeInfo t1887_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1887_MIs, NULL, NULL, NULL, &t1886_TI, NULL, &t824_TI, &t1887_TI, NULL, t1887_VT, &EmptyCustomAttributesCache, &t1887_TI, &t1887_0_0_0, &t1887_1_0_0, t1887_IOs, &t1887_GC, NULL, NULL, NULL, t1887_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1887), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1879_TI;
#include "t1879MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t1879_m10363_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t1879_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m10363_MI = 
{
	".ctor", (methodPointerType)&m8191_gshared, &t1879_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t1879_m10363_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
extern Il2CppType t105_0_0_0;
static ParameterInfo t1879_m10364_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1879_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10364_MI = 
{
	"Invoke", (methodPointerType)&m8192_gshared, &t1879_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t1879_m10364_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t105_0_0_0;
extern Il2CppType t105_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1879_m10365_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1879_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10365_MI = 
{
	"BeginInvoke", (methodPointerType)&m8193_gshared, &t1879_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4_t4, t1879_m10365_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t1879_m10366_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t1879_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10366_MI = 
{
	"EndInvoke", (methodPointerType)&m8194_gshared, &t1879_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1879_m10366_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1879_MIs[] =
{
	&m10363_MI,
	&m10364_MI,
	&m10365_MI,
	&m10366_MI,
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
extern MethodInfo m10364_MI;
extern MethodInfo m10365_MI;
extern MethodInfo m10366_MI;
static MethodInfo* t1879_VT[] =
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
	&m10364_MI,
	&m10365_MI,
	&m10366_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t1879_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1879_0_0_0;
extern Il2CppType t1879_1_0_0;
extern TypeInfo t193_TI;
struct t1879;
extern TypeInfo t1879_TI;
extern Il2CppGenericClass t1879_GC;
TypeInfo t1879_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t1879_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t1879_TI, NULL, t1879_VT, &EmptyCustomAttributesCache, &t1879_TI, &t1879_0_0_0, &t1879_1_0_0, t1879_IOs, &t1879_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1879), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3363_TI;

#include "t113.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.StandaloneInputModule>
extern MethodInfo m24027_MI;
static PropertyInfo t3363____Current_PropertyInfo = 
{
	&t3363_TI, "Current", &m24027_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3363_PIs[] =
{
	&t3363____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3363_TI;
extern Il2CppType t113_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24027_MI = 
{
	"get_Current", NULL, &t3363_TI, &t113_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3363_MIs[] =
{
	&m24027_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3363_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3363_0_0_0;
extern Il2CppType t3363_1_0_0;
struct t3363;
extern TypeInfo t3363_TI;
extern Il2CppGenericClass t3363_GC;
TypeInfo t3363_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3363_MIs, t3363_PIs, NULL, NULL, NULL, NULL, NULL, &t3363_TI, t3363_ITIs, NULL, &EmptyCustomAttributesCache, &t3363_TI, &t3363_0_0_0, &t3363_1_0_0, NULL, &t3363_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1888.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1888_TI;
#include "t1888MD.h"

extern TypeInfo t1888_TI;
extern TypeInfo t113_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m10371_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m17928_MI;
struct t16;
#define m17928(__this, p0, method) (t113 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m17928_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.StandaloneInputModule>
extern Il2CppType t16_0_0_1;
FieldInfo t1888_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1888_TI, offsetof(t1888, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1888_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1888_TI, offsetof(t1888, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1888_FIs[] =
{
	&t1888_f0_FieldInfo,
	&t1888_f1_FieldInfo,
	NULL
};
extern MethodInfo m10368_MI;
static PropertyInfo t1888____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1888_TI, "System.Collections.IEnumerator.Current", &m10368_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10371_MI;
static PropertyInfo t1888____Current_PropertyInfo = 
{
	&t1888_TI, "Current", &m10371_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1888_PIs[] =
{
	&t1888____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1888____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1888_m10367_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1888_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10367_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t1888_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1888_m10367_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1888_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10368_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t1888_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1888_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10369_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t1888_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1888_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10370_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t1888_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1888_TI;
extern Il2CppType t113_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10371_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t1888_TI, &t113_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1888_MIs[] =
{
	&m10367_MI,
	&m10368_MI,
	&m10369_MI,
	&m10370_MI,
	&m10371_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m10368_MI;
extern MethodInfo m10370_MI;
extern MethodInfo m10369_MI;
extern MethodInfo m10371_MI;
static MethodInfo* t1888_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m10368_MI,
	&m10370_MI,
	&m10369_MI,
	&m10371_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3363_TI;
static TypeInfo* t1888_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3363_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3363_TI;
static Il2CppInterfaceOffsetPair t1888_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3363_TI, 7},
};
extern MethodInfo m10371_MI;
extern TypeInfo t113_TI;
extern MethodInfo m17928_MI;
static void* t1888_RGCTXData[3] = 
{
	&m10371_MI,
	&t113_TI,
	&m17928_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1888_0_0_0;
extern Il2CppType t1888_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1888_TI;
extern Il2CppGenericClass t1888_GC;
extern TypeInfo t16_TI;
TypeInfo t1888_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1888_MIs, t1888_PIs, t1888_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1888_TI, t1888_ITIs, t1888_VT, &EmptyCustomAttributesCache, &t1888_TI, &t1888_0_0_0, &t1888_1_0_0, t1888_IOs, &t1888_GC, NULL, NULL, NULL, t1888_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1888)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3963_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.StandaloneInputModule>
extern MethodInfo m24028_MI;
static PropertyInfo t3963____Count_PropertyInfo = 
{
	&t3963_TI, "Count", &m24028_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24029_MI;
static PropertyInfo t3963____IsReadOnly_PropertyInfo = 
{
	&t3963_TI, "IsReadOnly", &m24029_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3963_PIs[] =
{
	&t3963____Count_PropertyInfo,
	&t3963____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3963_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24028_MI = 
{
	"get_Count", NULL, &t3963_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3963_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24029_MI = 
{
	"get_IsReadOnly", NULL, &t3963_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t113_0_0_0;
static ParameterInfo t3963_m24030_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
};
extern TypeInfo t3963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24030_MI = 
{
	"Add", NULL, &t3963_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3963_m24030_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24031_MI = 
{
	"Clear", NULL, &t3963_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t113_0_0_0;
static ParameterInfo t3963_m24032_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
};
extern TypeInfo t3963_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24032_MI = 
{
	"Contains", NULL, &t3963_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t3963_m24032_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3205_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t3963_m24033_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3205_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24033_MI = 
{
	"CopyTo", NULL, &t3963_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t3963_m24033_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t113_0_0_0;
static ParameterInfo t3963_m24034_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
};
extern TypeInfo t3963_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24034_MI = 
{
	"Remove", NULL, &t3963_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t3963_m24034_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3963_MIs[] =
{
	&m24028_MI,
	&m24029_MI,
	&m24030_MI,
	&m24031_MI,
	&m24032_MI,
	&m24033_MI,
	&m24034_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3965_TI;
static TypeInfo* t3963_ITIs[] = 
{
	&t592_TI,
	&t3965_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3963_0_0_0;
extern Il2CppType t3963_1_0_0;
struct t3963;
extern TypeInfo t3963_TI;
extern Il2CppGenericClass t3963_GC;
TypeInfo t3963_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3963_MIs, t3963_PIs, NULL, NULL, NULL, NULL, NULL, &t3963_TI, t3963_ITIs, NULL, &EmptyCustomAttributesCache, &t3963_TI, &t3963_0_0_0, &t3963_1_0_0, NULL, &t3963_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3965_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.StandaloneInputModule>
extern TypeInfo t3965_TI;
extern Il2CppType t3363_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24035_MI = 
{
	"GetEnumerator", NULL, &t3965_TI, &t3363_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3965_MIs[] =
{
	&m24035_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t3965_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3965_0_0_0;
extern Il2CppType t3965_1_0_0;
struct t3965;
extern TypeInfo t3965_TI;
extern Il2CppGenericClass t3965_GC;
TypeInfo t3965_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3965_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3965_TI, t3965_ITIs, NULL, &EmptyCustomAttributesCache, &t3965_TI, &t3965_0_0_0, &t3965_1_0_0, NULL, &t3965_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3964_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.StandaloneInputModule>
extern MethodInfo m24036_MI;
extern MethodInfo m24037_MI;
static PropertyInfo t3964____Item_PropertyInfo = 
{
	&t3964_TI, "Item", &m24036_MI, &m24037_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3964_PIs[] =
{
	&t3964____Item_PropertyInfo,
	NULL
};
extern Il2CppType t113_0_0_0;
static ParameterInfo t3964_m24038_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
};
extern TypeInfo t3964_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24038_MI = 
{
	"IndexOf", NULL, &t3964_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t3964_m24038_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t113_0_0_0;
static ParameterInfo t3964_m24039_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
};
extern TypeInfo t3964_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24039_MI = 
{
	"Insert", NULL, &t3964_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t3964_m24039_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3964_m24040_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3964_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24040_MI = 
{
	"RemoveAt", NULL, &t3964_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t3964_m24040_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3964_m24036_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3964_TI;
extern Il2CppType t113_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24036_MI = 
{
	"get_Item", NULL, &t3964_TI, &t113_0_0_0, RuntimeInvoker_t4_t18, t3964_m24036_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t113_0_0_0;
static ParameterInfo t3964_m24037_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
};
extern TypeInfo t3964_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24037_MI = 
{
	"set_Item", NULL, &t3964_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t3964_m24037_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3964_MIs[] =
{
	&m24038_MI,
	&m24039_MI,
	&m24040_MI,
	&m24036_MI,
	&m24037_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3963_TI;
extern TypeInfo t3965_TI;
static TypeInfo* t3964_ITIs[] = 
{
	&t592_TI,
	&t3963_TI,
	&t3965_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3964_0_0_0;
extern Il2CppType t3964_1_0_0;
struct t3964;
extern TypeInfo t3964_TI;
extern Il2CppGenericClass t3964_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t3964_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3964_MIs, t3964_PIs, NULL, NULL, NULL, NULL, NULL, &t3964_TI, t3964_ITIs, NULL, &t1401__CustomAttributeCache, &t3964_TI, &t3964_0_0_0, &t3964_1_0_0, NULL, &t3964_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1889.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1889_TI;
#include "t1889MD.h"

#include "t22.h"
#include "t546.h"
#include "t1890.h"
extern TypeInfo t309_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1889_TI;
extern TypeInfo t113_TI;
extern TypeInfo t1890_TI;
extern TypeInfo t17_TI;
#include "t1890MD.h"
extern MethodInfo m10374_MI;
extern MethodInfo m10376_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.EventSystems.StandaloneInputModule>
extern Il2CppType t309_0_0_33;
FieldInfo t1889_f1_FieldInfo = 
{
	"m_Arg1", &t309_0_0_33, &t1889_TI, offsetof(t1889, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1889_FIs[] =
{
	&t1889_f1_FieldInfo,
	NULL
};
extern Il2CppType t22_0_0_0;
extern Il2CppType t546_0_0_0;
extern Il2CppType t113_0_0_0;
static ParameterInfo t1889_m10372_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t22_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10372_MI = 
{
	".ctor", (methodPointerType)&m7891_gshared, &t1889_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4_t4, t1889_m10372_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1889_m10373_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10373_MI = 
{
	"Invoke", (methodPointerType)&m7893_gshared, &t1889_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1889_m10373_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1889_MIs[] =
{
	&m10372_MI,
	&m10373_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10373_MI;
extern MethodInfo m10377_MI;
static MethodInfo* t1889_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10373_MI,
	&m10377_MI,
};
extern Il2CppType t1891_0_0_0;
extern TypeInfo t1891_TI;
extern MethodInfo m17938_MI;
extern TypeInfo t113_TI;
extern MethodInfo m10379_MI;
extern MethodInfo m10374_MI;
extern TypeInfo t113_TI;
extern MethodInfo m10376_MI;
static void* t1889_RGCTXData[8] = 
{
	(void*)&t1891_0_0_0,
	&t1891_TI,
	&m17938_MI,
	&t113_TI,
	&m10379_MI,
	&m10374_MI,
	&t113_TI,
	&m10376_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1889_0_0_0;
extern Il2CppType t1889_1_0_0;
extern TypeInfo t1890_TI;
struct t1889;
extern TypeInfo t1889_TI;
extern Il2CppGenericClass t1889_GC;
TypeInfo t1889_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t1889_MIs, NULL, t1889_FIs, NULL, &t1890_TI, NULL, NULL, &t1889_TI, NULL, t1889_VT, &EmptyCustomAttributesCache, &t1889_TI, &t1889_0_0_0, &t1889_1_0_0, NULL, &t1889_GC, NULL, NULL, NULL, t1889_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1889), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1890_TI;

#include "t1891.h"
#include "t345.h"
extern TypeInfo t1890_TI;
extern TypeInfo t1891_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t113_TI;
extern TypeInfo t17_TI;
#include "t545MD.h"
#include "t345MD.h"
#include "t1891MD.h"
extern Il2CppType t1891_0_0_0;
extern MethodInfo m2791_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2954_MI;
extern MethodInfo m1592_MI;
extern MethodInfo m2790_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m17938_MI;
extern MethodInfo m2792_MI;
extern MethodInfo m10379_MI;
extern MethodInfo m2950_MI;
extern MethodInfo m2948_MI;
struct t545;
#include "t545.h"
struct t545;
 void m16892_gshared (t4 * __this, t4 * p0, MethodInfo* method);
#define m16892(__this, p0, method) (void)m16892_gshared((t4 *)__this, (t4 *)p0, method)
#define m17938(__this, p0, method) (void)m16892_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m17938_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.StandaloneInputModule>
extern Il2CppType t1891_0_0_1;
FieldInfo t1890_f0_FieldInfo = 
{
	"Delegate", &t1891_0_0_1, &t1890_TI, offsetof(t1890, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1890_FIs[] =
{
	&t1890_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t1890_m10374_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t1890_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10374_MI = 
{
	".ctor", (methodPointerType)&m7894_gshared, &t1890_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1890_m10374_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1891_0_0_0;
static ParameterInfo t1890_m10375_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t1891_0_0_0},
};
extern TypeInfo t1890_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10375_MI = 
{
	".ctor", (methodPointerType)&m7895_gshared, &t1890_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1890_m10375_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1890_m10376_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t1890_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10376_MI = 
{
	"Invoke", (methodPointerType)&m7896_gshared, &t1890_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1890_m10376_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t1890_m10377_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t1890_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10377_MI = 
{
	"Find", (methodPointerType)&m7897_gshared, &t1890_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t1890_m10377_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1890_MIs[] =
{
	&m10374_MI,
	&m10375_MI,
	&m10376_MI,
	&m10377_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10376_MI;
extern MethodInfo m10377_MI;
static MethodInfo* t1890_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10376_MI,
	&m10377_MI,
};
extern Il2CppType t1891_0_0_0;
extern TypeInfo t1891_TI;
extern MethodInfo m17938_MI;
extern TypeInfo t113_TI;
extern MethodInfo m10379_MI;
static void* t1890_RGCTXData[5] = 
{
	(void*)&t1891_0_0_0,
	&t1891_TI,
	&m17938_MI,
	&t113_TI,
	&m10379_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1890_0_0_0;
extern Il2CppType t1890_1_0_0;
extern TypeInfo t545_TI;
struct t1890;
extern TypeInfo t1890_TI;
extern Il2CppGenericClass t1890_GC;
TypeInfo t1890_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t1890_MIs, NULL, t1890_FIs, NULL, &t545_TI, NULL, NULL, &t1890_TI, NULL, t1890_VT, &EmptyCustomAttributesCache, &t1890_TI, &t1890_0_0_0, &t1890_1_0_0, NULL, &t1890_GC, NULL, NULL, NULL, t1890_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1890), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1891_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.StandaloneInputModule>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t1891_m10378_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t1891_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m10378_MI = 
{
	".ctor", (methodPointerType)&m7898_gshared, &t1891_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t1891_m10378_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t113_0_0_0;
static ParameterInfo t1891_m10379_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
};
extern TypeInfo t1891_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10379_MI = 
{
	"Invoke", (methodPointerType)&m7899_gshared, &t1891_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1891_m10379_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t113_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1891_m10380_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1891_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10380_MI = 
{
	"BeginInvoke", (methodPointerType)&m7900_gshared, &t1891_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t1891_m10380_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t1891_m10381_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t1891_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10381_MI = 
{
	"EndInvoke", (methodPointerType)&m7901_gshared, &t1891_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1891_m10381_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1891_MIs[] =
{
	&m10378_MI,
	&m10379_MI,
	&m10380_MI,
	&m10381_MI,
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
extern MethodInfo m10379_MI;
extern MethodInfo m10380_MI;
extern MethodInfo m10381_MI;
static MethodInfo* t1891_VT[] =
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
	&m10379_MI,
	&m10380_MI,
	&m10381_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t1891_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1891_0_0_0;
extern Il2CppType t1891_1_0_0;
extern TypeInfo t193_TI;
struct t1891;
extern TypeInfo t1891_TI;
extern Il2CppGenericClass t1891_GC;
TypeInfo t1891_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t1891_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t1891_TI, NULL, t1891_VT, &EmptyCustomAttributesCache, &t1891_TI, &t1891_0_0_0, &t1891_1_0_0, t1891_IOs, &t1891_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1891), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3364_TI;

#include "t112.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.StandaloneInputModule/InputMode>
extern MethodInfo m24041_MI;
static PropertyInfo t3364____Current_PropertyInfo = 
{
	&t3364_TI, "Current", &m24041_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3364_PIs[] =
{
	&t3364____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3364_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t112 (MethodInfo* method, void* obj, void** args);
MethodInfo m24041_MI = 
{
	"get_Current", NULL, &t3364_TI, &t112_0_0_0, RuntimeInvoker_t112, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3364_MIs[] =
{
	&m24041_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3364_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3364_0_0_0;
extern Il2CppType t3364_1_0_0;
struct t3364;
extern TypeInfo t3364_TI;
extern Il2CppGenericClass t3364_GC;
TypeInfo t3364_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3364_MIs, t3364_PIs, NULL, NULL, NULL, NULL, NULL, &t3364_TI, t3364_ITIs, NULL, &EmptyCustomAttributesCache, &t3364_TI, &t3364_0_0_0, &t3364_1_0_0, NULL, &t3364_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1892.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1892_TI;
#include "t1892MD.h"

extern TypeInfo t1892_TI;
extern TypeInfo t112_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m10386_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m17966_MI;
struct t16;
 int32_t m17966 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17966_MI;


extern MethodInfo m10382_MI;
 void m10382 (t1892 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10383_MI;
 t4 * m10383 (t1892 * __this, MethodInfo* method){
	{
		int32_t L_0 = m10386(__this, &m10386_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t112_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10384_MI;
 void m10384 (t1892 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10385_MI;
 bool m10385 (t1892 * __this, MethodInfo* method){
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
extern MethodInfo m10386_MI;
 int32_t m10386 (t1892 * __this, MethodInfo* method){
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
		int32_t L_8 = m17966(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m17966_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.StandaloneInputModule/InputMode>
extern Il2CppType t16_0_0_1;
FieldInfo t1892_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1892_TI, offsetof(t1892, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1892_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1892_TI, offsetof(t1892, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1892_FIs[] =
{
	&t1892_f0_FieldInfo,
	&t1892_f1_FieldInfo,
	NULL
};
extern MethodInfo m10383_MI;
static PropertyInfo t1892____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1892_TI, "System.Collections.IEnumerator.Current", &m10383_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10386_MI;
static PropertyInfo t1892____Current_PropertyInfo = 
{
	&t1892_TI, "Current", &m10386_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1892_PIs[] =
{
	&t1892____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1892____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1892_m10382_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1892_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10382_MI = 
{
	".ctor", (methodPointerType)&m10382, &t1892_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1892_m10382_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1892_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10383_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10383, &t1892_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1892_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10384_MI = 
{
	"Dispose", (methodPointerType)&m10384, &t1892_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1892_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10385_MI = 
{
	"MoveNext", (methodPointerType)&m10385, &t1892_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1892_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t112 (MethodInfo* method, void* obj, void** args);
MethodInfo m10386_MI = 
{
	"get_Current", (methodPointerType)&m10386, &t1892_TI, &t112_0_0_0, RuntimeInvoker_t112, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1892_MIs[] =
{
	&m10382_MI,
	&m10383_MI,
	&m10384_MI,
	&m10385_MI,
	&m10386_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m10383_MI;
extern MethodInfo m10385_MI;
extern MethodInfo m10384_MI;
extern MethodInfo m10386_MI;
static MethodInfo* t1892_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m10383_MI,
	&m10385_MI,
	&m10384_MI,
	&m10386_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3364_TI;
static TypeInfo* t1892_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3364_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3364_TI;
static Il2CppInterfaceOffsetPair t1892_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3364_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1892_0_0_0;
extern Il2CppType t1892_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1892_TI;
extern Il2CppGenericClass t1892_GC;
extern TypeInfo t16_TI;
TypeInfo t1892_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1892_MIs, t1892_PIs, t1892_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1892_TI, t1892_ITIs, t1892_VT, &EmptyCustomAttributesCache, &t1892_TI, &t1892_0_0_0, &t1892_1_0_0, t1892_IOs, &t1892_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1892)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3966_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.StandaloneInputModule/InputMode>
extern MethodInfo m24042_MI;
static PropertyInfo t3966____Count_PropertyInfo = 
{
	&t3966_TI, "Count", &m24042_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24043_MI;
static PropertyInfo t3966____IsReadOnly_PropertyInfo = 
{
	&t3966_TI, "IsReadOnly", &m24043_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3966_PIs[] =
{
	&t3966____Count_PropertyInfo,
	&t3966____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3966_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24042_MI = 
{
	"get_Count", NULL, &t3966_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3966_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24043_MI = 
{
	"get_IsReadOnly", NULL, &t3966_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t3966_m24044_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t3966_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24044_MI = 
{
	"Add", NULL, &t3966_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t3966_m24044_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3966_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24045_MI = 
{
	"Clear", NULL, &t3966_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t3966_m24046_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t3966_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24046_MI = 
{
	"Contains", NULL, &t3966_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t3966_m24046_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3206_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t3966_m24047_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3206_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3966_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24047_MI = 
{
	"CopyTo", NULL, &t3966_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t3966_m24047_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t3966_m24048_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t3966_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24048_MI = 
{
	"Remove", NULL, &t3966_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t3966_m24048_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3966_MIs[] =
{
	&m24042_MI,
	&m24043_MI,
	&m24044_MI,
	&m24045_MI,
	&m24046_MI,
	&m24047_MI,
	&m24048_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3968_TI;
static TypeInfo* t3966_ITIs[] = 
{
	&t592_TI,
	&t3968_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3966_0_0_0;
extern Il2CppType t3966_1_0_0;
struct t3966;
extern TypeInfo t3966_TI;
extern Il2CppGenericClass t3966_GC;
TypeInfo t3966_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3966_MIs, t3966_PIs, NULL, NULL, NULL, NULL, NULL, &t3966_TI, t3966_ITIs, NULL, &EmptyCustomAttributesCache, &t3966_TI, &t3966_0_0_0, &t3966_1_0_0, NULL, &t3966_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3968_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.StandaloneInputModule/InputMode>
extern TypeInfo t3968_TI;
extern Il2CppType t3364_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24049_MI = 
{
	"GetEnumerator", NULL, &t3968_TI, &t3364_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3968_MIs[] =
{
	&m24049_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t3968_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3968_0_0_0;
extern Il2CppType t3968_1_0_0;
struct t3968;
extern TypeInfo t3968_TI;
extern Il2CppGenericClass t3968_GC;
TypeInfo t3968_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3968_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3968_TI, t3968_ITIs, NULL, &EmptyCustomAttributesCache, &t3968_TI, &t3968_0_0_0, &t3968_1_0_0, NULL, &t3968_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3967_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.StandaloneInputModule/InputMode>
extern MethodInfo m24050_MI;
extern MethodInfo m24051_MI;
static PropertyInfo t3967____Item_PropertyInfo = 
{
	&t3967_TI, "Item", &m24050_MI, &m24051_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3967_PIs[] =
{
	&t3967____Item_PropertyInfo,
	NULL
};
extern Il2CppType t112_0_0_0;
static ParameterInfo t3967_m24052_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t3967_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24052_MI = 
{
	"IndexOf", NULL, &t3967_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t3967_m24052_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t112_0_0_0;
static ParameterInfo t3967_m24053_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t3967_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24053_MI = 
{
	"Insert", NULL, &t3967_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t3967_m24053_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3967_m24054_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3967_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24054_MI = 
{
	"RemoveAt", NULL, &t3967_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t3967_m24054_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3967_m24050_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3967_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t112_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24050_MI = 
{
	"get_Item", NULL, &t3967_TI, &t112_0_0_0, RuntimeInvoker_t112_t18, t3967_m24050_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t112_0_0_0;
static ParameterInfo t3967_m24051_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t3967_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24051_MI = 
{
	"set_Item", NULL, &t3967_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t3967_m24051_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3967_MIs[] =
{
	&m24052_MI,
	&m24053_MI,
	&m24054_MI,
	&m24050_MI,
	&m24051_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3966_TI;
extern TypeInfo t3968_TI;
static TypeInfo* t3967_ITIs[] = 
{
	&t592_TI,
	&t3966_TI,
	&t3968_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3967_0_0_0;
extern Il2CppType t3967_1_0_0;
struct t3967;
extern TypeInfo t3967_TI;
extern Il2CppGenericClass t3967_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t3967_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3967_MIs, t3967_PIs, NULL, NULL, NULL, NULL, NULL, &t3967_TI, t3967_ITIs, NULL, &t1401__CustomAttributeCache, &t3967_TI, &t3967_0_0_0, &t3967_1_0_0, NULL, &t3967_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3365_TI;

#include "t114.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.TouchInputModule>
extern MethodInfo m24055_MI;
static PropertyInfo t3365____Current_PropertyInfo = 
{
	&t3365_TI, "Current", &m24055_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3365_PIs[] =
{
	&t3365____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3365_TI;
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24055_MI = 
{
	"get_Current", NULL, &t3365_TI, &t114_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3365_MIs[] =
{
	&m24055_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3365_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3365_0_0_0;
extern Il2CppType t3365_1_0_0;
struct t3365;
extern TypeInfo t3365_TI;
extern Il2CppGenericClass t3365_GC;
TypeInfo t3365_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3365_MIs, t3365_PIs, NULL, NULL, NULL, NULL, NULL, &t3365_TI, t3365_ITIs, NULL, &EmptyCustomAttributesCache, &t3365_TI, &t3365_0_0_0, &t3365_1_0_0, NULL, &t3365_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1893.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1893_TI;
#include "t1893MD.h"

extern TypeInfo t1893_TI;
extern TypeInfo t114_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m10391_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m17977_MI;
struct t16;
#define m17977(__this, p0, method) (t114 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m17977_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.TouchInputModule>
extern Il2CppType t16_0_0_1;
FieldInfo t1893_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1893_TI, offsetof(t1893, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1893_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1893_TI, offsetof(t1893, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1893_FIs[] =
{
	&t1893_f0_FieldInfo,
	&t1893_f1_FieldInfo,
	NULL
};
extern MethodInfo m10388_MI;
static PropertyInfo t1893____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1893_TI, "System.Collections.IEnumerator.Current", &m10388_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10391_MI;
static PropertyInfo t1893____Current_PropertyInfo = 
{
	&t1893_TI, "Current", &m10391_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1893_PIs[] =
{
	&t1893____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1893____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1893_m10387_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10387_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t1893_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1893_m10387_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1893_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10388_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t1893_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1893_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10389_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t1893_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1893_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10390_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t1893_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1893_TI;
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10391_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t1893_TI, &t114_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1893_MIs[] =
{
	&m10387_MI,
	&m10388_MI,
	&m10389_MI,
	&m10390_MI,
	&m10391_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m10388_MI;
extern MethodInfo m10390_MI;
extern MethodInfo m10389_MI;
extern MethodInfo m10391_MI;
static MethodInfo* t1893_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m10388_MI,
	&m10390_MI,
	&m10389_MI,
	&m10391_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3365_TI;
static TypeInfo* t1893_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3365_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3365_TI;
static Il2CppInterfaceOffsetPair t1893_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3365_TI, 7},
};
extern MethodInfo m10391_MI;
extern TypeInfo t114_TI;
extern MethodInfo m17977_MI;
static void* t1893_RGCTXData[3] = 
{
	&m10391_MI,
	&t114_TI,
	&m17977_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1893_0_0_0;
extern Il2CppType t1893_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1893_TI;
extern Il2CppGenericClass t1893_GC;
extern TypeInfo t16_TI;
TypeInfo t1893_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1893_MIs, t1893_PIs, t1893_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1893_TI, t1893_ITIs, t1893_VT, &EmptyCustomAttributesCache, &t1893_TI, &t1893_0_0_0, &t1893_1_0_0, t1893_IOs, &t1893_GC, NULL, NULL, NULL, t1893_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1893)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3969_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.TouchInputModule>
extern MethodInfo m24056_MI;
static PropertyInfo t3969____Count_PropertyInfo = 
{
	&t3969_TI, "Count", &m24056_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24057_MI;
static PropertyInfo t3969____IsReadOnly_PropertyInfo = 
{
	&t3969_TI, "IsReadOnly", &m24057_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3969_PIs[] =
{
	&t3969____Count_PropertyInfo,
	&t3969____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3969_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24056_MI = 
{
	"get_Count", NULL, &t3969_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3969_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24057_MI = 
{
	"get_IsReadOnly", NULL, &t3969_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3969_m24058_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t3969_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24058_MI = 
{
	"Add", NULL, &t3969_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3969_m24058_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3969_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24059_MI = 
{
	"Clear", NULL, &t3969_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3969_m24060_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t3969_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24060_MI = 
{
	"Contains", NULL, &t3969_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t3969_m24060_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3207_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t3969_m24061_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3207_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3969_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24061_MI = 
{
	"CopyTo", NULL, &t3969_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t3969_m24061_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3969_m24062_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t3969_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24062_MI = 
{
	"Remove", NULL, &t3969_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t3969_m24062_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3969_MIs[] =
{
	&m24056_MI,
	&m24057_MI,
	&m24058_MI,
	&m24059_MI,
	&m24060_MI,
	&m24061_MI,
	&m24062_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3971_TI;
static TypeInfo* t3969_ITIs[] = 
{
	&t592_TI,
	&t3971_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3969_0_0_0;
extern Il2CppType t3969_1_0_0;
struct t3969;
extern TypeInfo t3969_TI;
extern Il2CppGenericClass t3969_GC;
TypeInfo t3969_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3969_MIs, t3969_PIs, NULL, NULL, NULL, NULL, NULL, &t3969_TI, t3969_ITIs, NULL, &EmptyCustomAttributesCache, &t3969_TI, &t3969_0_0_0, &t3969_1_0_0, NULL, &t3969_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3971_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.TouchInputModule>
extern TypeInfo t3971_TI;
extern Il2CppType t3365_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24063_MI = 
{
	"GetEnumerator", NULL, &t3971_TI, &t3365_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3971_MIs[] =
{
	&m24063_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t3971_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3971_0_0_0;
extern Il2CppType t3971_1_0_0;
struct t3971;
extern TypeInfo t3971_TI;
extern Il2CppGenericClass t3971_GC;
TypeInfo t3971_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3971_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3971_TI, t3971_ITIs, NULL, &EmptyCustomAttributesCache, &t3971_TI, &t3971_0_0_0, &t3971_1_0_0, NULL, &t3971_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3970_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.TouchInputModule>
extern MethodInfo m24064_MI;
extern MethodInfo m24065_MI;
static PropertyInfo t3970____Item_PropertyInfo = 
{
	&t3970_TI, "Item", &m24064_MI, &m24065_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3970_PIs[] =
{
	&t3970____Item_PropertyInfo,
	NULL
};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3970_m24066_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t3970_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24066_MI = 
{
	"IndexOf", NULL, &t3970_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t3970_m24066_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t3970_m24067_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t3970_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24067_MI = 
{
	"Insert", NULL, &t3970_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t3970_m24067_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3970_m24068_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3970_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24068_MI = 
{
	"RemoveAt", NULL, &t3970_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t3970_m24068_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3970_m24064_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3970_TI;
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24064_MI = 
{
	"get_Item", NULL, &t3970_TI, &t114_0_0_0, RuntimeInvoker_t4_t18, t3970_m24064_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t3970_m24065_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t3970_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24065_MI = 
{
	"set_Item", NULL, &t3970_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t3970_m24065_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3970_MIs[] =
{
	&m24066_MI,
	&m24067_MI,
	&m24068_MI,
	&m24064_MI,
	&m24065_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3969_TI;
extern TypeInfo t3971_TI;
static TypeInfo* t3970_ITIs[] = 
{
	&t592_TI,
	&t3969_TI,
	&t3971_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3970_0_0_0;
extern Il2CppType t3970_1_0_0;
struct t3970;
extern TypeInfo t3970_TI;
extern Il2CppGenericClass t3970_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t3970_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3970_MIs, t3970_PIs, NULL, NULL, NULL, NULL, NULL, &t3970_TI, t3970_ITIs, NULL, &t1401__CustomAttributeCache, &t3970_TI, &t3970_0_0_0, &t3970_1_0_0, NULL, &t3970_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1894.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1894_TI;
#include "t1894MD.h"

#include "t1895.h"
extern TypeInfo t309_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1894_TI;
extern TypeInfo t114_TI;
extern TypeInfo t1895_TI;
extern TypeInfo t17_TI;
#include "t1895MD.h"
extern MethodInfo m10394_MI;
extern MethodInfo m10396_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.EventSystems.TouchInputModule>
extern Il2CppType t309_0_0_33;
FieldInfo t1894_f1_FieldInfo = 
{
	"m_Arg1", &t309_0_0_33, &t1894_TI, offsetof(t1894, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1894_FIs[] =
{
	&t1894_f1_FieldInfo,
	NULL
};
extern Il2CppType t22_0_0_0;
extern Il2CppType t546_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t1894_m10392_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t22_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t1894_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10392_MI = 
{
	".ctor", (methodPointerType)&m7891_gshared, &t1894_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4_t4, t1894_m10392_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1894_m10393_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t1894_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10393_MI = 
{
	"Invoke", (methodPointerType)&m7893_gshared, &t1894_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1894_m10393_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1894_MIs[] =
{
	&m10392_MI,
	&m10393_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10393_MI;
extern MethodInfo m10397_MI;
static MethodInfo* t1894_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10393_MI,
	&m10397_MI,
};
extern Il2CppType t1896_0_0_0;
extern TypeInfo t1896_TI;
extern MethodInfo m17987_MI;
extern TypeInfo t114_TI;
extern MethodInfo m10399_MI;
extern MethodInfo m10394_MI;
extern TypeInfo t114_TI;
extern MethodInfo m10396_MI;
static void* t1894_RGCTXData[8] = 
{
	(void*)&t1896_0_0_0,
	&t1896_TI,
	&m17987_MI,
	&t114_TI,
	&m10399_MI,
	&m10394_MI,
	&t114_TI,
	&m10396_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1894_0_0_0;
extern Il2CppType t1894_1_0_0;
extern TypeInfo t1895_TI;
struct t1894;
extern TypeInfo t1894_TI;
extern Il2CppGenericClass t1894_GC;
TypeInfo t1894_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t1894_MIs, NULL, t1894_FIs, NULL, &t1895_TI, NULL, NULL, &t1894_TI, NULL, t1894_VT, &EmptyCustomAttributesCache, &t1894_TI, &t1894_0_0_0, &t1894_1_0_0, NULL, &t1894_GC, NULL, NULL, NULL, t1894_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1894), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1895_TI;

#include "t1896.h"
extern TypeInfo t1895_TI;
extern TypeInfo t1896_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t114_TI;
extern TypeInfo t17_TI;
#include "t1896MD.h"
extern Il2CppType t1896_0_0_0;
extern MethodInfo m2791_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2954_MI;
extern MethodInfo m1592_MI;
extern MethodInfo m2790_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m17987_MI;
extern MethodInfo m2792_MI;
extern MethodInfo m10399_MI;
extern MethodInfo m2950_MI;
extern MethodInfo m2948_MI;
struct t545;
#define m17987(__this, p0, method) (void)m16892_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m17987_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.TouchInputModule>
extern Il2CppType t1896_0_0_1;
FieldInfo t1895_f0_FieldInfo = 
{
	"Delegate", &t1896_0_0_1, &t1895_TI, offsetof(t1895, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1895_FIs[] =
{
	&t1895_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t1895_m10394_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t1895_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10394_MI = 
{
	".ctor", (methodPointerType)&m7894_gshared, &t1895_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1895_m10394_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1896_0_0_0;
static ParameterInfo t1895_m10395_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t1896_0_0_0},
};
extern TypeInfo t1895_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10395_MI = 
{
	".ctor", (methodPointerType)&m7895_gshared, &t1895_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1895_m10395_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1895_m10396_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t1895_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10396_MI = 
{
	"Invoke", (methodPointerType)&m7896_gshared, &t1895_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1895_m10396_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t1895_m10397_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t1895_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10397_MI = 
{
	"Find", (methodPointerType)&m7897_gshared, &t1895_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t1895_m10397_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1895_MIs[] =
{
	&m10394_MI,
	&m10395_MI,
	&m10396_MI,
	&m10397_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10396_MI;
extern MethodInfo m10397_MI;
static MethodInfo* t1895_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10396_MI,
	&m10397_MI,
};
extern Il2CppType t1896_0_0_0;
extern TypeInfo t1896_TI;
extern MethodInfo m17987_MI;
extern TypeInfo t114_TI;
extern MethodInfo m10399_MI;
static void* t1895_RGCTXData[5] = 
{
	(void*)&t1896_0_0_0,
	&t1896_TI,
	&m17987_MI,
	&t114_TI,
	&m10399_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1895_0_0_0;
extern Il2CppType t1895_1_0_0;
extern TypeInfo t545_TI;
struct t1895;
extern TypeInfo t1895_TI;
extern Il2CppGenericClass t1895_GC;
TypeInfo t1895_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t1895_MIs, NULL, t1895_FIs, NULL, &t545_TI, NULL, NULL, &t1895_TI, NULL, t1895_VT, &EmptyCustomAttributesCache, &t1895_TI, &t1895_0_0_0, &t1895_1_0_0, NULL, &t1895_GC, NULL, NULL, NULL, t1895_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1895), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1896_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.TouchInputModule>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t1896_m10398_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t1896_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m10398_MI = 
{
	".ctor", (methodPointerType)&m7898_gshared, &t1896_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t1896_m10398_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t114_0_0_0;
static ParameterInfo t1896_m10399_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t1896_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10399_MI = 
{
	"Invoke", (methodPointerType)&m7899_gshared, &t1896_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1896_m10399_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1896_m10400_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1896_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10400_MI = 
{
	"BeginInvoke", (methodPointerType)&m7900_gshared, &t1896_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t1896_m10400_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t1896_m10401_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t1896_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10401_MI = 
{
	"EndInvoke", (methodPointerType)&m7901_gshared, &t1896_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1896_m10401_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1896_MIs[] =
{
	&m10398_MI,
	&m10399_MI,
	&m10400_MI,
	&m10401_MI,
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
extern MethodInfo m10399_MI;
extern MethodInfo m10400_MI;
extern MethodInfo m10401_MI;
static MethodInfo* t1896_VT[] =
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
	&m10399_MI,
	&m10400_MI,
	&m10401_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t1896_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1896_0_0_0;
extern Il2CppType t1896_1_0_0;
extern TypeInfo t193_TI;
struct t1896;
extern TypeInfo t1896_TI;
extern Il2CppGenericClass t1896_GC;
TypeInfo t1896_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t1896_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t1896_TI, NULL, t1896_VT, &EmptyCustomAttributesCache, &t1896_TI, &t1896_0_0_0, &t1896_1_0_0, t1896_IOs, &t1896_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1896), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1897.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1897_TI;
#include "t1897MD.h"

#include "t100.h"
#include "t1898.h"
extern TypeInfo t309_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1897_TI;
extern TypeInfo t100_TI;
extern TypeInfo t1898_TI;
extern TypeInfo t17_TI;
#include "t1898MD.h"
extern MethodInfo m10404_MI;
extern MethodInfo m10406_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.EventSystems.BaseRaycaster>
extern Il2CppType t309_0_0_33;
FieldInfo t1897_f1_FieldInfo = 
{
	"m_Arg1", &t309_0_0_33, &t1897_TI, offsetof(t1897, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1897_FIs[] =
{
	&t1897_f1_FieldInfo,
	NULL
};
extern Il2CppType t22_0_0_0;
extern Il2CppType t546_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t1897_m10402_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t22_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1897_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10402_MI = 
{
	".ctor", (methodPointerType)&m7891_gshared, &t1897_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4_t4, t1897_m10402_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1897_m10403_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t1897_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10403_MI = 
{
	"Invoke", (methodPointerType)&m7893_gshared, &t1897_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1897_m10403_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1897_MIs[] =
{
	&m10402_MI,
	&m10403_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10403_MI;
extern MethodInfo m10407_MI;
static MethodInfo* t1897_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10403_MI,
	&m10407_MI,
};
extern Il2CppType t1899_0_0_0;
extern TypeInfo t1899_TI;
extern MethodInfo m17988_MI;
extern TypeInfo t100_TI;
extern MethodInfo m10409_MI;
extern MethodInfo m10404_MI;
extern TypeInfo t100_TI;
extern MethodInfo m10406_MI;
static void* t1897_RGCTXData[8] = 
{
	(void*)&t1899_0_0_0,
	&t1899_TI,
	&m17988_MI,
	&t100_TI,
	&m10409_MI,
	&m10404_MI,
	&t100_TI,
	&m10406_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1897_0_0_0;
extern Il2CppType t1897_1_0_0;
extern TypeInfo t1898_TI;
struct t1897;
extern TypeInfo t1897_TI;
extern Il2CppGenericClass t1897_GC;
TypeInfo t1897_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t1897_MIs, NULL, t1897_FIs, NULL, &t1898_TI, NULL, NULL, &t1897_TI, NULL, t1897_VT, &EmptyCustomAttributesCache, &t1897_TI, &t1897_0_0_0, &t1897_1_0_0, NULL, &t1897_GC, NULL, NULL, NULL, t1897_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1897), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1898_TI;

#include "t1899.h"
extern TypeInfo t1898_TI;
extern TypeInfo t1899_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t100_TI;
extern TypeInfo t17_TI;
#include "t1899MD.h"
extern Il2CppType t1899_0_0_0;
extern MethodInfo m2791_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2954_MI;
extern MethodInfo m1592_MI;
extern MethodInfo m2790_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m17988_MI;
extern MethodInfo m2792_MI;
extern MethodInfo m10409_MI;
extern MethodInfo m2950_MI;
extern MethodInfo m2948_MI;
struct t545;
#define m17988(__this, p0, method) (void)m16892_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m17988_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseRaycaster>
extern Il2CppType t1899_0_0_1;
FieldInfo t1898_f0_FieldInfo = 
{
	"Delegate", &t1899_0_0_1, &t1898_TI, offsetof(t1898, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1898_FIs[] =
{
	&t1898_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t1898_m10404_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10404_MI = 
{
	".ctor", (methodPointerType)&m7894_gshared, &t1898_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1898_m10404_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1899_0_0_0;
static ParameterInfo t1898_m10405_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t1899_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10405_MI = 
{
	".ctor", (methodPointerType)&m7895_gshared, &t1898_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1898_m10405_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1898_m10406_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10406_MI = 
{
	"Invoke", (methodPointerType)&m7896_gshared, &t1898_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1898_m10406_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t1898_m10407_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10407_MI = 
{
	"Find", (methodPointerType)&m7897_gshared, &t1898_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t1898_m10407_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1898_MIs[] =
{
	&m10404_MI,
	&m10405_MI,
	&m10406_MI,
	&m10407_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10406_MI;
extern MethodInfo m10407_MI;
static MethodInfo* t1898_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10406_MI,
	&m10407_MI,
};
extern Il2CppType t1899_0_0_0;
extern TypeInfo t1899_TI;
extern MethodInfo m17988_MI;
extern TypeInfo t100_TI;
extern MethodInfo m10409_MI;
static void* t1898_RGCTXData[5] = 
{
	(void*)&t1899_0_0_0,
	&t1899_TI,
	&m17988_MI,
	&t100_TI,
	&m10409_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1898_0_0_0;
extern Il2CppType t1898_1_0_0;
extern TypeInfo t545_TI;
struct t1898;
extern TypeInfo t1898_TI;
extern Il2CppGenericClass t1898_GC;
TypeInfo t1898_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t1898_MIs, NULL, t1898_FIs, NULL, &t545_TI, NULL, NULL, &t1898_TI, NULL, t1898_VT, &EmptyCustomAttributesCache, &t1898_TI, &t1898_0_0_0, &t1898_1_0_0, NULL, &t1898_GC, NULL, NULL, NULL, t1898_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1898), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1899_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseRaycaster>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t1899_m10408_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t1899_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m10408_MI = 
{
	".ctor", (methodPointerType)&m7898_gshared, &t1899_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t1899_m10408_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1899_m10409_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1899_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10409_MI = 
{
	"Invoke", (methodPointerType)&m7899_gshared, &t1899_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1899_m10409_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1899_m10410_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1899_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10410_MI = 
{
	"BeginInvoke", (methodPointerType)&m7900_gshared, &t1899_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t1899_m10410_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t1899_m10411_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t1899_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10411_MI = 
{
	"EndInvoke", (methodPointerType)&m7901_gshared, &t1899_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1899_m10411_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1899_MIs[] =
{
	&m10408_MI,
	&m10409_MI,
	&m10410_MI,
	&m10411_MI,
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
extern MethodInfo m10409_MI;
extern MethodInfo m10410_MI;
extern MethodInfo m10411_MI;
static MethodInfo* t1899_VT[] =
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
	&m10409_MI,
	&m10410_MI,
	&m10411_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t1899_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1899_0_0_0;
extern Il2CppType t1899_1_0_0;
extern TypeInfo t193_TI;
struct t1899;
extern TypeInfo t1899_TI;
extern Il2CppGenericClass t1899_GC;
TypeInfo t1899_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t1899_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t1899_TI, NULL, t1899_VT, &EmptyCustomAttributesCache, &t1899_TI, &t1899_0_0_0, &t1899_1_0_0, t1899_IOs, &t1899_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1899), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3366_TI;

#include "t115.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.Physics2DRaycaster>
extern MethodInfo m24069_MI;
static PropertyInfo t3366____Current_PropertyInfo = 
{
	&t3366_TI, "Current", &m24069_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3366_PIs[] =
{
	&t3366____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3366_TI;
extern Il2CppType t115_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24069_MI = 
{
	"get_Current", NULL, &t3366_TI, &t115_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3366_MIs[] =
{
	&m24069_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3366_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3366_0_0_0;
extern Il2CppType t3366_1_0_0;
struct t3366;
extern TypeInfo t3366_TI;
extern Il2CppGenericClass t3366_GC;
TypeInfo t3366_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3366_MIs, t3366_PIs, NULL, NULL, NULL, NULL, NULL, &t3366_TI, t3366_ITIs, NULL, &EmptyCustomAttributesCache, &t3366_TI, &t3366_0_0_0, &t3366_1_0_0, NULL, &t3366_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1900.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1900_TI;
#include "t1900MD.h"

extern TypeInfo t1900_TI;
extern TypeInfo t115_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m10416_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m17990_MI;
struct t16;
#define m17990(__this, p0, method) (t115 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m17990_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.Physics2DRaycaster>
extern Il2CppType t16_0_0_1;
FieldInfo t1900_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1900_TI, offsetof(t1900, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1900_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1900_TI, offsetof(t1900, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1900_FIs[] =
{
	&t1900_f0_FieldInfo,
	&t1900_f1_FieldInfo,
	NULL
};
extern MethodInfo m10413_MI;
static PropertyInfo t1900____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1900_TI, "System.Collections.IEnumerator.Current", &m10413_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10416_MI;
static PropertyInfo t1900____Current_PropertyInfo = 
{
	&t1900_TI, "Current", &m10416_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1900_PIs[] =
{
	&t1900____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1900____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1900_m10412_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1900_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10412_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t1900_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1900_m10412_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1900_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10413_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t1900_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1900_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10414_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t1900_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1900_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10415_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t1900_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1900_TI;
extern Il2CppType t115_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10416_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t1900_TI, &t115_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1900_MIs[] =
{
	&m10412_MI,
	&m10413_MI,
	&m10414_MI,
	&m10415_MI,
	&m10416_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m10413_MI;
extern MethodInfo m10415_MI;
extern MethodInfo m10414_MI;
extern MethodInfo m10416_MI;
static MethodInfo* t1900_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m10413_MI,
	&m10415_MI,
	&m10414_MI,
	&m10416_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3366_TI;
static TypeInfo* t1900_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3366_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3366_TI;
static Il2CppInterfaceOffsetPair t1900_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3366_TI, 7},
};
extern MethodInfo m10416_MI;
extern TypeInfo t115_TI;
extern MethodInfo m17990_MI;
static void* t1900_RGCTXData[3] = 
{
	&m10416_MI,
	&t115_TI,
	&m17990_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1900_0_0_0;
extern Il2CppType t1900_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1900_TI;
extern Il2CppGenericClass t1900_GC;
extern TypeInfo t16_TI;
TypeInfo t1900_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1900_MIs, t1900_PIs, t1900_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1900_TI, t1900_ITIs, t1900_VT, &EmptyCustomAttributesCache, &t1900_TI, &t1900_0_0_0, &t1900_1_0_0, t1900_IOs, &t1900_GC, NULL, NULL, NULL, t1900_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1900)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3972_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.Physics2DRaycaster>
extern MethodInfo m24070_MI;
static PropertyInfo t3972____Count_PropertyInfo = 
{
	&t3972_TI, "Count", &m24070_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24071_MI;
static PropertyInfo t3972____IsReadOnly_PropertyInfo = 
{
	&t3972_TI, "IsReadOnly", &m24071_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3972_PIs[] =
{
	&t3972____Count_PropertyInfo,
	&t3972____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3972_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24070_MI = 
{
	"get_Count", NULL, &t3972_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3972_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24071_MI = 
{
	"get_IsReadOnly", NULL, &t3972_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t115_0_0_0;
static ParameterInfo t3972_m24072_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t115_0_0_0},
};
extern TypeInfo t3972_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24072_MI = 
{
	"Add", NULL, &t3972_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3972_m24072_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3972_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24073_MI = 
{
	"Clear", NULL, &t3972_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t115_0_0_0;
static ParameterInfo t3972_m24074_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t115_0_0_0},
};
extern TypeInfo t3972_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24074_MI = 
{
	"Contains", NULL, &t3972_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t3972_m24074_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3208_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t3972_m24075_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3208_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3972_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24075_MI = 
{
	"CopyTo", NULL, &t3972_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t3972_m24075_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t115_0_0_0;
static ParameterInfo t3972_m24076_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t115_0_0_0},
};
extern TypeInfo t3972_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24076_MI = 
{
	"Remove", NULL, &t3972_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t3972_m24076_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3972_MIs[] =
{
	&m24070_MI,
	&m24071_MI,
	&m24072_MI,
	&m24073_MI,
	&m24074_MI,
	&m24075_MI,
	&m24076_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3974_TI;
static TypeInfo* t3972_ITIs[] = 
{
	&t592_TI,
	&t3974_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3972_0_0_0;
extern Il2CppType t3972_1_0_0;
struct t3972;
extern TypeInfo t3972_TI;
extern Il2CppGenericClass t3972_GC;
TypeInfo t3972_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3972_MIs, t3972_PIs, NULL, NULL, NULL, NULL, NULL, &t3972_TI, t3972_ITIs, NULL, &EmptyCustomAttributesCache, &t3972_TI, &t3972_0_0_0, &t3972_1_0_0, NULL, &t3972_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3974_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.Physics2DRaycaster>
extern TypeInfo t3974_TI;
extern Il2CppType t3366_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24077_MI = 
{
	"GetEnumerator", NULL, &t3974_TI, &t3366_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3974_MIs[] =
{
	&m24077_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t3974_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3974_0_0_0;
extern Il2CppType t3974_1_0_0;
struct t3974;
extern TypeInfo t3974_TI;
extern Il2CppGenericClass t3974_GC;
TypeInfo t3974_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3974_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3974_TI, t3974_ITIs, NULL, &EmptyCustomAttributesCache, &t3974_TI, &t3974_0_0_0, &t3974_1_0_0, NULL, &t3974_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3973_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.Physics2DRaycaster>
extern MethodInfo m24078_MI;
extern MethodInfo m24079_MI;
static PropertyInfo t3973____Item_PropertyInfo = 
{
	&t3973_TI, "Item", &m24078_MI, &m24079_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3973_PIs[] =
{
	&t3973____Item_PropertyInfo,
	NULL
};
extern Il2CppType t115_0_0_0;
static ParameterInfo t3973_m24080_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t115_0_0_0},
};
extern TypeInfo t3973_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24080_MI = 
{
	"IndexOf", NULL, &t3973_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t3973_m24080_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t115_0_0_0;
static ParameterInfo t3973_m24081_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t115_0_0_0},
};
extern TypeInfo t3973_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24081_MI = 
{
	"Insert", NULL, &t3973_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t3973_m24081_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3973_m24082_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3973_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24082_MI = 
{
	"RemoveAt", NULL, &t3973_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t3973_m24082_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3973_m24078_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3973_TI;
extern Il2CppType t115_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24078_MI = 
{
	"get_Item", NULL, &t3973_TI, &t115_0_0_0, RuntimeInvoker_t4_t18, t3973_m24078_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t115_0_0_0;
static ParameterInfo t3973_m24079_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t115_0_0_0},
};
extern TypeInfo t3973_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24079_MI = 
{
	"set_Item", NULL, &t3973_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t3973_m24079_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3973_MIs[] =
{
	&m24080_MI,
	&m24081_MI,
	&m24082_MI,
	&m24078_MI,
	&m24079_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3972_TI;
extern TypeInfo t3974_TI;
static TypeInfo* t3973_ITIs[] = 
{
	&t592_TI,
	&t3972_TI,
	&t3974_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3973_0_0_0;
extern Il2CppType t3973_1_0_0;
struct t3973;
extern TypeInfo t3973_TI;
extern Il2CppGenericClass t3973_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t3973_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3973_MIs, t3973_PIs, NULL, NULL, NULL, NULL, NULL, &t3973_TI, t3973_ITIs, NULL, &t1401__CustomAttributeCache, &t3973_TI, &t3973_0_0_0, &t3973_1_0_0, NULL, &t3973_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3975_TI;

#include "t116.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PhysicsRaycaster>
extern MethodInfo m24083_MI;
static PropertyInfo t3975____Count_PropertyInfo = 
{
	&t3975_TI, "Count", &m24083_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24084_MI;
static PropertyInfo t3975____IsReadOnly_PropertyInfo = 
{
	&t3975_TI, "IsReadOnly", &m24084_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3975_PIs[] =
{
	&t3975____Count_PropertyInfo,
	&t3975____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3975_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24083_MI = 
{
	"get_Count", NULL, &t3975_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3975_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24084_MI = 
{
	"get_IsReadOnly", NULL, &t3975_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t116_0_0_0;
static ParameterInfo t3975_m24085_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t116_0_0_0},
};
extern TypeInfo t3975_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24085_MI = 
{
	"Add", NULL, &t3975_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3975_m24085_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3975_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24086_MI = 
{
	"Clear", NULL, &t3975_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t116_0_0_0;
static ParameterInfo t3975_m24087_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t116_0_0_0},
};
extern TypeInfo t3975_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24087_MI = 
{
	"Contains", NULL, &t3975_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t3975_m24087_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3209_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t3975_m24088_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3209_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3975_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24088_MI = 
{
	"CopyTo", NULL, &t3975_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t3975_m24088_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t116_0_0_0;
static ParameterInfo t3975_m24089_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t116_0_0_0},
};
extern TypeInfo t3975_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24089_MI = 
{
	"Remove", NULL, &t3975_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t3975_m24089_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3975_MIs[] =
{
	&m24083_MI,
	&m24084_MI,
	&m24085_MI,
	&m24086_MI,
	&m24087_MI,
	&m24088_MI,
	&m24089_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3977_TI;
static TypeInfo* t3975_ITIs[] = 
{
	&t592_TI,
	&t3977_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3975_0_0_0;
extern Il2CppType t3975_1_0_0;
struct t3975;
extern TypeInfo t3975_TI;
extern Il2CppGenericClass t3975_GC;
TypeInfo t3975_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3975_MIs, t3975_PIs, NULL, NULL, NULL, NULL, NULL, &t3975_TI, t3975_ITIs, NULL, &EmptyCustomAttributesCache, &t3975_TI, &t3975_0_0_0, &t3975_1_0_0, NULL, &t3975_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3977_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.PhysicsRaycaster>
extern TypeInfo t3977_TI;
extern Il2CppType t3367_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24090_MI = 
{
	"GetEnumerator", NULL, &t3977_TI, &t3367_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3977_MIs[] =
{
	&m24090_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t3977_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3977_0_0_0;
extern Il2CppType t3977_1_0_0;
struct t3977;
extern TypeInfo t3977_TI;
extern Il2CppGenericClass t3977_GC;
TypeInfo t3977_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3977_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3977_TI, t3977_ITIs, NULL, &EmptyCustomAttributesCache, &t3977_TI, &t3977_0_0_0, &t3977_1_0_0, NULL, &t3977_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3367_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PhysicsRaycaster>
extern MethodInfo m24091_MI;
static PropertyInfo t3367____Current_PropertyInfo = 
{
	&t3367_TI, "Current", &m24091_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3367_PIs[] =
{
	&t3367____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3367_TI;
extern Il2CppType t116_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24091_MI = 
{
	"get_Current", NULL, &t3367_TI, &t116_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3367_MIs[] =
{
	&m24091_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3367_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3367_0_0_0;
extern Il2CppType t3367_1_0_0;
struct t3367;
extern TypeInfo t3367_TI;
extern Il2CppGenericClass t3367_GC;
TypeInfo t3367_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3367_MIs, t3367_PIs, NULL, NULL, NULL, NULL, NULL, &t3367_TI, t3367_ITIs, NULL, &EmptyCustomAttributesCache, &t3367_TI, &t3367_0_0_0, &t3367_1_0_0, NULL, &t3367_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1901.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1901_TI;
#include "t1901MD.h"

extern TypeInfo t1901_TI;
extern TypeInfo t116_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m10421_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18001_MI;
struct t16;
#define m18001(__this, p0, method) (t116 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m18001_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PhysicsRaycaster>
extern Il2CppType t16_0_0_1;
FieldInfo t1901_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1901_TI, offsetof(t1901, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1901_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1901_TI, offsetof(t1901, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1901_FIs[] =
{
	&t1901_f0_FieldInfo,
	&t1901_f1_FieldInfo,
	NULL
};
extern MethodInfo m10418_MI;
static PropertyInfo t1901____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1901_TI, "System.Collections.IEnumerator.Current", &m10418_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10421_MI;
static PropertyInfo t1901____Current_PropertyInfo = 
{
	&t1901_TI, "Current", &m10421_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1901_PIs[] =
{
	&t1901____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1901____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1901_m10417_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1901_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10417_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t1901_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1901_m10417_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1901_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10418_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t1901_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1901_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10419_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t1901_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1901_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10420_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t1901_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1901_TI;
extern Il2CppType t116_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10421_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t1901_TI, &t116_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1901_MIs[] =
{
	&m10417_MI,
	&m10418_MI,
	&m10419_MI,
	&m10420_MI,
	&m10421_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m10418_MI;
extern MethodInfo m10420_MI;
extern MethodInfo m10419_MI;
extern MethodInfo m10421_MI;
static MethodInfo* t1901_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m10418_MI,
	&m10420_MI,
	&m10419_MI,
	&m10421_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3367_TI;
static TypeInfo* t1901_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3367_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3367_TI;
static Il2CppInterfaceOffsetPair t1901_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3367_TI, 7},
};
extern MethodInfo m10421_MI;
extern TypeInfo t116_TI;
extern MethodInfo m18001_MI;
static void* t1901_RGCTXData[3] = 
{
	&m10421_MI,
	&t116_TI,
	&m18001_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1901_0_0_0;
extern Il2CppType t1901_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1901_TI;
extern Il2CppGenericClass t1901_GC;
extern TypeInfo t16_TI;
TypeInfo t1901_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1901_MIs, t1901_PIs, t1901_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1901_TI, t1901_ITIs, t1901_VT, &EmptyCustomAttributesCache, &t1901_TI, &t1901_0_0_0, &t1901_1_0_0, t1901_IOs, &t1901_GC, NULL, NULL, NULL, t1901_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1901)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3976_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.PhysicsRaycaster>
extern MethodInfo m24092_MI;
extern MethodInfo m24093_MI;
static PropertyInfo t3976____Item_PropertyInfo = 
{
	&t3976_TI, "Item", &m24092_MI, &m24093_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3976_PIs[] =
{
	&t3976____Item_PropertyInfo,
	NULL
};
extern Il2CppType t116_0_0_0;
static ParameterInfo t3976_m24094_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t116_0_0_0},
};
extern TypeInfo t3976_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24094_MI = 
{
	"IndexOf", NULL, &t3976_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t3976_m24094_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t116_0_0_0;
static ParameterInfo t3976_m24095_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t116_0_0_0},
};
extern TypeInfo t3976_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24095_MI = 
{
	"Insert", NULL, &t3976_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t3976_m24095_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3976_m24096_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3976_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24096_MI = 
{
	"RemoveAt", NULL, &t3976_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t3976_m24096_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3976_m24092_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3976_TI;
extern Il2CppType t116_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24092_MI = 
{
	"get_Item", NULL, &t3976_TI, &t116_0_0_0, RuntimeInvoker_t4_t18, t3976_m24092_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t116_0_0_0;
static ParameterInfo t3976_m24093_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t116_0_0_0},
};
extern TypeInfo t3976_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24093_MI = 
{
	"set_Item", NULL, &t3976_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t3976_m24093_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3976_MIs[] =
{
	&m24094_MI,
	&m24095_MI,
	&m24096_MI,
	&m24092_MI,
	&m24093_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3975_TI;
extern TypeInfo t3977_TI;
static TypeInfo* t3976_ITIs[] = 
{
	&t592_TI,
	&t3975_TI,
	&t3977_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3976_0_0_0;
extern Il2CppType t3976_1_0_0;
struct t3976;
extern TypeInfo t3976_TI;
extern Il2CppGenericClass t3976_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t3976_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3976_MIs, t3976_PIs, NULL, NULL, NULL, NULL, NULL, &t3976_TI, t3976_ITIs, NULL, &t1401__CustomAttributeCache, &t3976_TI, &t3976_0_0_0, &t3976_1_0_0, NULL, &t3976_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1902.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1902_TI;
#include "t1902MD.h"

#include "t1903.h"
extern TypeInfo t309_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1902_TI;
extern TypeInfo t115_TI;
extern TypeInfo t1903_TI;
extern TypeInfo t17_TI;
#include "t1903MD.h"
extern MethodInfo m10424_MI;
extern MethodInfo m10426_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.EventSystems.Physics2DRaycaster>
extern Il2CppType t309_0_0_33;
FieldInfo t1902_f1_FieldInfo = 
{
	"m_Arg1", &t309_0_0_33, &t1902_TI, offsetof(t1902, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1902_FIs[] =
{
	&t1902_f1_FieldInfo,
	NULL
};
extern Il2CppType t22_0_0_0;
extern Il2CppType t546_0_0_0;
extern Il2CppType t115_0_0_0;
static ParameterInfo t1902_m10422_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t22_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t115_0_0_0},
};
extern TypeInfo t1902_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10422_MI = 
{
	".ctor", (methodPointerType)&m7891_gshared, &t1902_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4_t4, t1902_m10422_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1902_m10423_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t1902_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10423_MI = 
{
	"Invoke", (methodPointerType)&m7893_gshared, &t1902_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1902_m10423_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1902_MIs[] =
{
	&m10422_MI,
	&m10423_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10423_MI;
extern MethodInfo m10427_MI;
static MethodInfo* t1902_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10423_MI,
	&m10427_MI,
};
extern Il2CppType t1904_0_0_0;
extern TypeInfo t1904_TI;
extern MethodInfo m18011_MI;
extern TypeInfo t115_TI;
extern MethodInfo m10429_MI;
extern MethodInfo m10424_MI;
extern TypeInfo t115_TI;
extern MethodInfo m10426_MI;
static void* t1902_RGCTXData[8] = 
{
	(void*)&t1904_0_0_0,
	&t1904_TI,
	&m18011_MI,
	&t115_TI,
	&m10429_MI,
	&m10424_MI,
	&t115_TI,
	&m10426_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1902_0_0_0;
extern Il2CppType t1902_1_0_0;
extern TypeInfo t1903_TI;
struct t1902;
extern TypeInfo t1902_TI;
extern Il2CppGenericClass t1902_GC;
TypeInfo t1902_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t1902_MIs, NULL, t1902_FIs, NULL, &t1903_TI, NULL, NULL, &t1902_TI, NULL, t1902_VT, &EmptyCustomAttributesCache, &t1902_TI, &t1902_0_0_0, &t1902_1_0_0, NULL, &t1902_GC, NULL, NULL, NULL, t1902_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1902), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1903_TI;

#include "t1904.h"
extern TypeInfo t1903_TI;
extern TypeInfo t1904_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t115_TI;
extern TypeInfo t17_TI;
#include "t1904MD.h"
extern Il2CppType t1904_0_0_0;
extern MethodInfo m2791_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2954_MI;
extern MethodInfo m1592_MI;
extern MethodInfo m2790_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m18011_MI;
extern MethodInfo m2792_MI;
extern MethodInfo m10429_MI;
extern MethodInfo m2950_MI;
extern MethodInfo m2948_MI;
struct t545;
#define m18011(__this, p0, method) (void)m16892_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m18011_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.Physics2DRaycaster>
extern Il2CppType t1904_0_0_1;
FieldInfo t1903_f0_FieldInfo = 
{
	"Delegate", &t1904_0_0_1, &t1903_TI, offsetof(t1903, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1903_FIs[] =
{
	&t1903_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t1903_m10424_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t1903_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10424_MI = 
{
	".ctor", (methodPointerType)&m7894_gshared, &t1903_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1903_m10424_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1904_0_0_0;
static ParameterInfo t1903_m10425_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t1904_0_0_0},
};
extern TypeInfo t1903_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10425_MI = 
{
	".ctor", (methodPointerType)&m7895_gshared, &t1903_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1903_m10425_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1903_m10426_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t1903_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10426_MI = 
{
	"Invoke", (methodPointerType)&m7896_gshared, &t1903_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1903_m10426_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t1903_m10427_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t1903_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10427_MI = 
{
	"Find", (methodPointerType)&m7897_gshared, &t1903_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t1903_m10427_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1903_MIs[] =
{
	&m10424_MI,
	&m10425_MI,
	&m10426_MI,
	&m10427_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10426_MI;
extern MethodInfo m10427_MI;
static MethodInfo* t1903_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10426_MI,
	&m10427_MI,
};
extern Il2CppType t1904_0_0_0;
extern TypeInfo t1904_TI;
extern MethodInfo m18011_MI;
extern TypeInfo t115_TI;
extern MethodInfo m10429_MI;
static void* t1903_RGCTXData[5] = 
{
	(void*)&t1904_0_0_0,
	&t1904_TI,
	&m18011_MI,
	&t115_TI,
	&m10429_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1903_0_0_0;
extern Il2CppType t1903_1_0_0;
extern TypeInfo t545_TI;
struct t1903;
extern TypeInfo t1903_TI;
extern Il2CppGenericClass t1903_GC;
TypeInfo t1903_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t1903_MIs, NULL, t1903_FIs, NULL, &t545_TI, NULL, NULL, &t1903_TI, NULL, t1903_VT, &EmptyCustomAttributesCache, &t1903_TI, &t1903_0_0_0, &t1903_1_0_0, NULL, &t1903_GC, NULL, NULL, NULL, t1903_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1903), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1904_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.Physics2DRaycaster>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t1904_m10428_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t1904_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m10428_MI = 
{
	".ctor", (methodPointerType)&m7898_gshared, &t1904_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t1904_m10428_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t115_0_0_0;
static ParameterInfo t1904_m10429_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t115_0_0_0},
};
extern TypeInfo t1904_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10429_MI = 
{
	"Invoke", (methodPointerType)&m7899_gshared, &t1904_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1904_m10429_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t115_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1904_m10430_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t115_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1904_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10430_MI = 
{
	"BeginInvoke", (methodPointerType)&m7900_gshared, &t1904_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t1904_m10430_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t1904_m10431_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t1904_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10431_MI = 
{
	"EndInvoke", (methodPointerType)&m7901_gshared, &t1904_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1904_m10431_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1904_MIs[] =
{
	&m10428_MI,
	&m10429_MI,
	&m10430_MI,
	&m10431_MI,
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
extern MethodInfo m10429_MI;
extern MethodInfo m10430_MI;
extern MethodInfo m10431_MI;
static MethodInfo* t1904_VT[] =
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
	&m10429_MI,
	&m10430_MI,
	&m10431_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t1904_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1904_0_0_0;
extern Il2CppType t1904_1_0_0;
extern TypeInfo t193_TI;
struct t1904;
extern TypeInfo t1904_TI;
extern Il2CppGenericClass t1904_GC;
TypeInfo t1904_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t1904_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t1904_TI, NULL, t1904_VT, &EmptyCustomAttributesCache, &t1904_TI, &t1904_0_0_0, &t1904_1_0_0, t1904_IOs, &t1904_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1904), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3368_TI;

#include "t322.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit2D>
extern MethodInfo m24097_MI;
static PropertyInfo t3368____Current_PropertyInfo = 
{
	&t3368_TI, "Current", &m24097_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3368_PIs[] =
{
	&t3368____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3368_TI;
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t322 (MethodInfo* method, void* obj, void** args);
MethodInfo m24097_MI = 
{
	"get_Current", NULL, &t3368_TI, &t322_0_0_0, RuntimeInvoker_t322, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3368_MIs[] =
{
	&m24097_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3368_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3368_0_0_0;
extern Il2CppType t3368_1_0_0;
struct t3368;
extern TypeInfo t3368_TI;
extern Il2CppGenericClass t3368_GC;
TypeInfo t3368_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3368_MIs, t3368_PIs, NULL, NULL, NULL, NULL, NULL, &t3368_TI, t3368_ITIs, NULL, &EmptyCustomAttributesCache, &t3368_TI, &t3368_0_0_0, &t3368_1_0_0, NULL, &t3368_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1905.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1905_TI;
#include "t1905MD.h"

extern TypeInfo t1905_TI;
extern TypeInfo t322_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m10436_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18013_MI;
struct t16;
 t322  m18013 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18013_MI;


extern MethodInfo m10432_MI;
 void m10432 (t1905 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10433_MI;
 t4 * m10433 (t1905 * __this, MethodInfo* method){
	{
		t322  L_0 = m10436(__this, &m10436_MI);
		t322  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t322_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10434_MI;
 void m10434 (t1905 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10435_MI;
 bool m10435 (t1905 * __this, MethodInfo* method){
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
extern MethodInfo m10436_MI;
 t322  m10436 (t1905 * __this, MethodInfo* method){
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
		t322  L_8 = m18013(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18013_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>
extern Il2CppType t16_0_0_1;
FieldInfo t1905_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1905_TI, offsetof(t1905, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1905_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1905_TI, offsetof(t1905, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1905_FIs[] =
{
	&t1905_f0_FieldInfo,
	&t1905_f1_FieldInfo,
	NULL
};
extern MethodInfo m10433_MI;
static PropertyInfo t1905____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1905_TI, "System.Collections.IEnumerator.Current", &m10433_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10436_MI;
static PropertyInfo t1905____Current_PropertyInfo = 
{
	&t1905_TI, "Current", &m10436_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1905_PIs[] =
{
	&t1905____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1905____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1905_m10432_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1905_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10432_MI = 
{
	".ctor", (methodPointerType)&m10432, &t1905_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1905_m10432_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1905_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10433_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10433, &t1905_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1905_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10434_MI = 
{
	"Dispose", (methodPointerType)&m10434, &t1905_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1905_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10435_MI = 
{
	"MoveNext", (methodPointerType)&m10435, &t1905_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1905_TI;
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t322 (MethodInfo* method, void* obj, void** args);
MethodInfo m10436_MI = 
{
	"get_Current", (methodPointerType)&m10436, &t1905_TI, &t322_0_0_0, RuntimeInvoker_t322, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1905_MIs[] =
{
	&m10432_MI,
	&m10433_MI,
	&m10434_MI,
	&m10435_MI,
	&m10436_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m10433_MI;
extern MethodInfo m10435_MI;
extern MethodInfo m10434_MI;
extern MethodInfo m10436_MI;
static MethodInfo* t1905_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m10433_MI,
	&m10435_MI,
	&m10434_MI,
	&m10436_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3368_TI;
static TypeInfo* t1905_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3368_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3368_TI;
static Il2CppInterfaceOffsetPair t1905_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3368_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1905_0_0_0;
extern Il2CppType t1905_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1905_TI;
extern Il2CppGenericClass t1905_GC;
extern TypeInfo t16_TI;
TypeInfo t1905_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1905_MIs, t1905_PIs, t1905_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1905_TI, t1905_ITIs, t1905_VT, &EmptyCustomAttributesCache, &t1905_TI, &t1905_0_0_0, &t1905_1_0_0, t1905_IOs, &t1905_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1905)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3978_TI;

#include "UnityEngine_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>
extern MethodInfo m24098_MI;
static PropertyInfo t3978____Count_PropertyInfo = 
{
	&t3978_TI, "Count", &m24098_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24099_MI;
static PropertyInfo t3978____IsReadOnly_PropertyInfo = 
{
	&t3978_TI, "IsReadOnly", &m24099_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3978_PIs[] =
{
	&t3978____Count_PropertyInfo,
	&t3978____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3978_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24098_MI = 
{
	"get_Count", NULL, &t3978_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3978_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24099_MI = 
{
	"get_IsReadOnly", NULL, &t3978_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t322_0_0_0;
static ParameterInfo t3978_m24100_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t322_0_0_0},
};
extern TypeInfo t3978_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t322 (MethodInfo* method, void* obj, void** args);
MethodInfo m24100_MI = 
{
	"Add", NULL, &t3978_TI, &t17_0_0_0, RuntimeInvoker_t17_t322, t3978_m24100_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3978_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24101_MI = 
{
	"Clear", NULL, &t3978_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t322_0_0_0;
static ParameterInfo t3978_m24102_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t322_0_0_0},
};
extern TypeInfo t3978_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t322 (MethodInfo* method, void* obj, void** args);
MethodInfo m24102_MI = 
{
	"Contains", NULL, &t3978_TI, &t19_0_0_0, RuntimeInvoker_t19_t322, t3978_m24102_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t327_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t3978_m24103_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t327_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3978_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24103_MI = 
{
	"CopyTo", NULL, &t3978_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t3978_m24103_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t322_0_0_0;
static ParameterInfo t3978_m24104_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t322_0_0_0},
};
extern TypeInfo t3978_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t322 (MethodInfo* method, void* obj, void** args);
MethodInfo m24104_MI = 
{
	"Remove", NULL, &t3978_TI, &t19_0_0_0, RuntimeInvoker_t19_t322, t3978_m24104_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3978_MIs[] =
{
	&m24098_MI,
	&m24099_MI,
	&m24100_MI,
	&m24101_MI,
	&m24102_MI,
	&m24103_MI,
	&m24104_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3980_TI;
static TypeInfo* t3978_ITIs[] = 
{
	&t592_TI,
	&t3980_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3978_0_0_0;
extern Il2CppType t3978_1_0_0;
struct t3978;
extern TypeInfo t3978_TI;
extern Il2CppGenericClass t3978_GC;
TypeInfo t3978_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3978_MIs, t3978_PIs, NULL, NULL, NULL, NULL, NULL, &t3978_TI, t3978_ITIs, NULL, &EmptyCustomAttributesCache, &t3978_TI, &t3978_0_0_0, &t3978_1_0_0, NULL, &t3978_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3980_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit2D>
extern TypeInfo t3980_TI;
extern Il2CppType t3368_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24105_MI = 
{
	"GetEnumerator", NULL, &t3980_TI, &t3368_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3980_MIs[] =
{
	&m24105_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t3980_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3980_0_0_0;
extern Il2CppType t3980_1_0_0;
struct t3980;
extern TypeInfo t3980_TI;
extern Il2CppGenericClass t3980_GC;
TypeInfo t3980_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3980_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3980_TI, t3980_ITIs, NULL, &EmptyCustomAttributesCache, &t3980_TI, &t3980_0_0_0, &t3980_1_0_0, NULL, &t3980_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3979_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>
extern MethodInfo m24106_MI;
extern MethodInfo m24107_MI;
static PropertyInfo t3979____Item_PropertyInfo = 
{
	&t3979_TI, "Item", &m24106_MI, &m24107_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3979_PIs[] =
{
	&t3979____Item_PropertyInfo,
	NULL
};
extern Il2CppType t322_0_0_0;
static ParameterInfo t3979_m24108_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t322_0_0_0},
};
extern TypeInfo t3979_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t322 (MethodInfo* method, void* obj, void** args);
MethodInfo m24108_MI = 
{
	"IndexOf", NULL, &t3979_TI, &t18_0_0_0, RuntimeInvoker_t18_t322, t3979_m24108_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t322_0_0_0;
static ParameterInfo t3979_m24109_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t322_0_0_0},
};
extern TypeInfo t3979_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t322 (MethodInfo* method, void* obj, void** args);
MethodInfo m24109_MI = 
{
	"Insert", NULL, &t3979_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t322, t3979_m24109_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3979_m24110_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3979_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24110_MI = 
{
	"RemoveAt", NULL, &t3979_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t3979_m24110_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t3979_m24106_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t3979_TI;
extern Il2CppType t322_0_0_0;
extern void* RuntimeInvoker_t322_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24106_MI = 
{
	"get_Item", NULL, &t3979_TI, &t322_0_0_0, RuntimeInvoker_t322_t18, t3979_m24106_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t322_0_0_0;
static ParameterInfo t3979_m24107_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t322_0_0_0},
};
extern TypeInfo t3979_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t322 (MethodInfo* method, void* obj, void** args);
MethodInfo m24107_MI = 
{
	"set_Item", NULL, &t3979_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t322, t3979_m24107_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3979_MIs[] =
{
	&m24108_MI,
	&m24109_MI,
	&m24110_MI,
	&m24106_MI,
	&m24107_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t3978_TI;
extern TypeInfo t3980_TI;
static TypeInfo* t3979_ITIs[] = 
{
	&t592_TI,
	&t3978_TI,
	&t3980_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3979_0_0_0;
extern Il2CppType t3979_1_0_0;
struct t3979;
extern TypeInfo t3979_TI;
extern Il2CppGenericClass t3979_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t3979_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3979_MIs, t3979_PIs, NULL, NULL, NULL, NULL, NULL, &t3979_TI, t3979_ITIs, NULL, &t1401__CustomAttributeCache, &t3979_TI, &t3979_0_0_0, &t3979_1_0_0, NULL, &t3979_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1906.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1906_TI;
#include "t1906MD.h"

#include "t1907.h"
extern TypeInfo t309_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1906_TI;
extern TypeInfo t116_TI;
extern TypeInfo t1907_TI;
extern TypeInfo t17_TI;
#include "t1907MD.h"
extern MethodInfo m10439_MI;
extern MethodInfo m10441_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.EventSystems.PhysicsRaycaster>
extern Il2CppType t309_0_0_33;
FieldInfo t1906_f1_FieldInfo = 
{
	"m_Arg1", &t309_0_0_33, &t1906_TI, offsetof(t1906, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1906_FIs[] =
{
	&t1906_f1_FieldInfo,
	NULL
};
extern Il2CppType t22_0_0_0;
extern Il2CppType t546_0_0_0;
extern Il2CppType t116_0_0_0;
static ParameterInfo t1906_m10437_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t22_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t116_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10437_MI = 
{
	".ctor", (methodPointerType)&m7891_gshared, &t1906_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4_t4, t1906_m10437_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t1906_m10438_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10438_MI = 
{
	"Invoke", (methodPointerType)&m7893_gshared, &t1906_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1906_m10438_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1906_MIs[] =
{
	&m10437_MI,
	&m10438_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10438_MI;
extern MethodInfo m10442_MI;
static MethodInfo* t1906_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10438_MI,
	&m10442_MI,
};
extern Il2CppType t1908_0_0_0;
extern TypeInfo t1908_TI;
extern MethodInfo m18023_MI;
extern TypeInfo t116_TI;
extern MethodInfo m10444_MI;
extern MethodInfo m10439_MI;
extern TypeInfo t116_TI;
extern MethodInfo m10441_MI;
static void* t1906_RGCTXData[8] = 
{
	(void*)&t1908_0_0_0,
	&t1908_TI,
	&m18023_MI,
	&t116_TI,
	&m10444_MI,
	&m10439_MI,
	&t116_TI,
	&m10441_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1906_0_0_0;
extern Il2CppType t1906_1_0_0;
extern TypeInfo t1907_TI;
struct t1906;
extern TypeInfo t1906_TI;
extern Il2CppGenericClass t1906_GC;
TypeInfo t1906_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t1906_MIs, NULL, t1906_FIs, NULL, &t1907_TI, NULL, NULL, &t1906_TI, NULL, t1906_VT, &EmptyCustomAttributesCache, &t1906_TI, &t1906_0_0_0, &t1906_1_0_0, NULL, &t1906_GC, NULL, NULL, NULL, t1906_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1906), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
