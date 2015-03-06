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
extern TypeInfo t3942_TI;

#include "t825.h"
#include "t16.h"
#include "t15.h"

#include "t14.h"

// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.Link>
extern MethodInfo m23897_MI;
extern MethodInfo m23898_MI;
static PropertyInfo t3942____Item_PropertyInfo = 
{
	&t3942_TI, "Item", &m23897_MI, &m23898_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3942_PIs[] =
{
	&t3942____Item_PropertyInfo,
	NULL
};
extern Il2CppType t825_0_0_0;
static ParameterInfo t3942_m23899_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t825_0_0_0},
};
extern TypeInfo t3942_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t825 (MethodInfo* method, void* obj, void** args);
MethodInfo m23899_MI = 
{
	"IndexOf", NULL, &t3942_TI, &t16_0_0_0, RuntimeInvoker_t16_t825, t3942_m23899_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t825_0_0_0;
static ParameterInfo t3942_m23900_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t825_0_0_0},
};
extern TypeInfo t3942_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t825 (MethodInfo* method, void* obj, void** args);
MethodInfo m23900_MI = 
{
	"Insert", NULL, &t3942_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t825, t3942_m23900_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3942_m23901_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3942_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23901_MI = 
{
	"RemoveAt", NULL, &t3942_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3942_m23901_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3942_m23897_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3942_TI;
extern Il2CppType t825_0_0_0;
extern void* RuntimeInvoker_t825_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23897_MI = 
{
	"get_Item", NULL, &t3942_TI, &t825_0_0_0, RuntimeInvoker_t825_t16, t3942_m23897_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t825_0_0_0;
static ParameterInfo t3942_m23898_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t825_0_0_0},
};
extern TypeInfo t3942_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t825 (MethodInfo* method, void* obj, void** args);
MethodInfo m23898_MI = 
{
	"set_Item", NULL, &t3942_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t825, t3942_m23898_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3942_MIs[] =
{
	&m23899_MI,
	&m23900_MI,
	&m23901_MI,
	&m23897_MI,
	&m23898_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3941_TI;
extern TypeInfo t3943_TI;
static TypeInfo* t3942_ITIs[] = 
{
	&t591_TI,
	&t3941_TI,
	&t3943_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3942_0_0_0;
extern Il2CppType t3942_1_0_0;
struct t3942;
extern TypeInfo t3942_TI;
extern Il2CppGenericClass t3942_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3942_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3942_MIs, t3942_PIs, NULL, NULL, NULL, NULL, NULL, &t3942_TI, t3942_ITIs, NULL, &t1400__CustomAttributeCache, &t3942_TI, &t3942_0_0_0, &t3942_1_0_0, NULL, &t3942_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1858_TI;

#include "t37.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PointerEventData>
extern MethodInfo m23902_MI;
static PropertyInfo t1858____Current_PropertyInfo = 
{
	&t1858_TI, "Current", &m23902_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1858_PIs[] =
{
	&t1858____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1858_TI;
extern Il2CppType t37_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23902_MI = 
{
	"get_Current", NULL, &t1858_TI, &t37_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1858_MIs[] =
{
	&m23902_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t1858_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1858_0_0_0;
extern Il2CppType t1858_1_0_0;
struct t1858;
extern TypeInfo t1858_TI;
extern Il2CppGenericClass t1858_GC;
TypeInfo t1858_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1858_MIs, t1858_PIs, NULL, NULL, NULL, NULL, NULL, &t1858_TI, t1858_ITIs, NULL, &EmptyCustomAttributesCache, &t1858_TI, &t1858_0_0_0, &t1858_1_0_0, NULL, &t1858_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1856.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1856_TI;
#include "t1856MD.h"

#include "t4.h"
#include "t8.h"
#include "t1269.h"
#include "t17.h"
extern TypeInfo t1856_TI;
extern TypeInfo t37_TI;
extern TypeInfo t1269_TI;
#include "t1269MD.h"
#include "t14MD.h"
extern MethodInfo m10118_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m17810_MI;
struct t14;
#include "t1233.h"
struct t14;
 t4 * m16794_gshared (t14 * __this, int32_t p0, MethodInfo* method);
#define m16794(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
#define m17810(__this, p0, method) (t37 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m17810_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t14_0_0_1;
FieldInfo t1856_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1856_TI, offsetof(t1856, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1856_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1856_TI, offsetof(t1856, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1856_FIs[] =
{
	&t1856_f0_FieldInfo,
	&t1856_f1_FieldInfo,
	NULL
};
extern MethodInfo m10115_MI;
static PropertyInfo t1856____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1856_TI, "System.Collections.IEnumerator.Current", &m10115_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10118_MI;
static PropertyInfo t1856____Current_PropertyInfo = 
{
	&t1856_TI, "Current", &m10118_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1856_PIs[] =
{
	&t1856____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1856____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1856_m10114_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1856_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10114_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t1856_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1856_m10114_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1856_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10115_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t1856_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1856_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10116_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t1856_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1856_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10117_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t1856_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1856_TI;
extern Il2CppType t37_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10118_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t1856_TI, &t37_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1856_MIs[] =
{
	&m10114_MI,
	&m10115_MI,
	&m10116_MI,
	&m10117_MI,
	&m10118_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10115_MI;
extern MethodInfo m10117_MI;
extern MethodInfo m10116_MI;
extern MethodInfo m10118_MI;
static MethodInfo* t1856_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10115_MI,
	&m10117_MI,
	&m10116_MI,
	&m10118_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1858_TI;
static TypeInfo* t1856_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t1858_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1858_TI;
static Il2CppInterfaceOffsetPair t1856_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t1858_TI, 7},
};
extern MethodInfo m10118_MI;
extern TypeInfo t37_TI;
extern MethodInfo m17810_MI;
static void* t1856_RGCTXData[3] = 
{
	&m10118_MI,
	&t37_TI,
	&m17810_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1856_0_0_0;
extern Il2CppType t1856_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1856_TI;
extern Il2CppGenericClass t1856_GC;
extern TypeInfo t14_TI;
TypeInfo t1856_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1856_MIs, t1856_PIs, t1856_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1856_TI, t1856_ITIs, t1856_VT, &EmptyCustomAttributesCache, &t1856_TI, &t1856_0_0_0, &t1856_1_0_0, t1856_IOs, &t1856_GC, NULL, NULL, NULL, t1856_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1856)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3944_TI;

#include "UnityEngine.UI_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>
extern MethodInfo m23903_MI;
static PropertyInfo t3944____Count_PropertyInfo = 
{
	&t3944_TI, "Count", &m23903_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23904_MI;
static PropertyInfo t3944____IsReadOnly_PropertyInfo = 
{
	&t3944_TI, "IsReadOnly", &m23904_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3944_PIs[] =
{
	&t3944____Count_PropertyInfo,
	&t3944____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3944_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23903_MI = 
{
	"get_Count", NULL, &t3944_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3944_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m23904_MI = 
{
	"get_IsReadOnly", NULL, &t3944_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t37_0_0_0;
static ParameterInfo t3944_m23905_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t3944_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23905_MI = 
{
	"Add", NULL, &t3944_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t3944_m23905_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3944_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m23906_MI = 
{
	"Clear", NULL, &t3944_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t37_0_0_0;
static ParameterInfo t3944_m23907_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t3944_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23907_MI = 
{
	"Contains", NULL, &t3944_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3944_m23907_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1845_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t3944_m23908_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1845_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3944_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23908_MI = 
{
	"CopyTo", NULL, &t3944_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t3944_m23908_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t37_0_0_0;
static ParameterInfo t3944_m23909_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t3944_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23909_MI = 
{
	"Remove", NULL, &t3944_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3944_m23909_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3944_MIs[] =
{
	&m23903_MI,
	&m23904_MI,
	&m23905_MI,
	&m23906_MI,
	&m23907_MI,
	&m23908_MI,
	&m23909_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3946_TI;
static TypeInfo* t3944_ITIs[] = 
{
	&t591_TI,
	&t3946_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3944_0_0_0;
extern Il2CppType t3944_1_0_0;
struct t3944;
extern TypeInfo t3944_TI;
extern Il2CppGenericClass t3944_GC;
TypeInfo t3944_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3944_MIs, t3944_PIs, NULL, NULL, NULL, NULL, NULL, &t3944_TI, t3944_ITIs, NULL, &EmptyCustomAttributesCache, &t3944_TI, &t3944_0_0_0, &t3944_1_0_0, NULL, &t3944_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3946_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.PointerEventData>
extern TypeInfo t3946_TI;
extern Il2CppType t1858_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23910_MI = 
{
	"GetEnumerator", NULL, &t3946_TI, &t1858_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3946_MIs[] =
{
	&m23910_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t3946_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3946_0_0_0;
extern Il2CppType t3946_1_0_0;
struct t3946;
extern TypeInfo t3946_TI;
extern Il2CppGenericClass t3946_GC;
TypeInfo t3946_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3946_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3946_TI, t3946_ITIs, NULL, &EmptyCustomAttributesCache, &t3946_TI, &t3946_0_0_0, &t3946_1_0_0, NULL, &t3946_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3945_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerEventData>
extern MethodInfo m23911_MI;
extern MethodInfo m23912_MI;
static PropertyInfo t3945____Item_PropertyInfo = 
{
	&t3945_TI, "Item", &m23911_MI, &m23912_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3945_PIs[] =
{
	&t3945____Item_PropertyInfo,
	NULL
};
extern Il2CppType t37_0_0_0;
static ParameterInfo t3945_m23913_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t3945_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23913_MI = 
{
	"IndexOf", NULL, &t3945_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t3945_m23913_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t37_0_0_0;
static ParameterInfo t3945_m23914_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t3945_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23914_MI = 
{
	"Insert", NULL, &t3945_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t3945_m23914_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3945_m23915_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3945_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23915_MI = 
{
	"RemoveAt", NULL, &t3945_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3945_m23915_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3945_m23911_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3945_TI;
extern Il2CppType t37_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23911_MI = 
{
	"get_Item", NULL, &t3945_TI, &t37_0_0_0, RuntimeInvoker_t4_t16, t3945_m23911_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t37_0_0_0;
static ParameterInfo t3945_m23912_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t3945_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23912_MI = 
{
	"set_Item", NULL, &t3945_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t3945_m23912_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3945_MIs[] =
{
	&m23913_MI,
	&m23914_MI,
	&m23915_MI,
	&m23911_MI,
	&m23912_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3944_TI;
extern TypeInfo t3946_TI;
static TypeInfo* t3945_ITIs[] = 
{
	&t591_TI,
	&t3944_TI,
	&t3946_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3945_0_0_0;
extern Il2CppType t3945_1_0_0;
struct t3945;
extern TypeInfo t3945_TI;
extern Il2CppGenericClass t3945_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3945_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3945_MIs, t3945_PIs, NULL, NULL, NULL, NULL, NULL, &t3945_TI, t3945_ITIs, NULL, &t1400__CustomAttributeCache, &t3945_TI, &t3945_0_0_0, &t3945_1_0_0, NULL, &t3945_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3947_TI;

#include "t34.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseEventData>
extern MethodInfo m23916_MI;
static PropertyInfo t3947____Count_PropertyInfo = 
{
	&t3947_TI, "Count", &m23916_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23917_MI;
static PropertyInfo t3947____IsReadOnly_PropertyInfo = 
{
	&t3947_TI, "IsReadOnly", &m23917_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3947_PIs[] =
{
	&t3947____Count_PropertyInfo,
	&t3947____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3947_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23916_MI = 
{
	"get_Count", NULL, &t3947_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3947_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m23917_MI = 
{
	"get_IsReadOnly", NULL, &t3947_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t3947_m23918_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t3947_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23918_MI = 
{
	"Add", NULL, &t3947_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t3947_m23918_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3947_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m23919_MI = 
{
	"Clear", NULL, &t3947_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t3947_m23920_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t3947_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23920_MI = 
{
	"Contains", NULL, &t3947_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3947_m23920_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3198_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t3947_m23921_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3198_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3947_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23921_MI = 
{
	"CopyTo", NULL, &t3947_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t3947_m23921_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t3947_m23922_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t3947_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23922_MI = 
{
	"Remove", NULL, &t3947_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3947_m23922_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3947_MIs[] =
{
	&m23916_MI,
	&m23917_MI,
	&m23918_MI,
	&m23919_MI,
	&m23920_MI,
	&m23921_MI,
	&m23922_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3949_TI;
static TypeInfo* t3947_ITIs[] = 
{
	&t591_TI,
	&t3949_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3947_0_0_0;
extern Il2CppType t3947_1_0_0;
struct t3947;
extern TypeInfo t3947_TI;
extern Il2CppGenericClass t3947_GC;
TypeInfo t3947_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3947_MIs, t3947_PIs, NULL, NULL, NULL, NULL, NULL, &t3947_TI, t3947_ITIs, NULL, &EmptyCustomAttributesCache, &t3947_TI, &t3947_0_0_0, &t3947_1_0_0, NULL, &t3947_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3949_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseEventData>
extern TypeInfo t3949_TI;
extern Il2CppType t3352_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23923_MI = 
{
	"GetEnumerator", NULL, &t3949_TI, &t3352_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3949_MIs[] =
{
	&m23923_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t3949_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3949_0_0_0;
extern Il2CppType t3949_1_0_0;
struct t3949;
extern TypeInfo t3949_TI;
extern Il2CppGenericClass t3949_GC;
TypeInfo t3949_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3949_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3949_TI, t3949_ITIs, NULL, &EmptyCustomAttributesCache, &t3949_TI, &t3949_0_0_0, &t3949_1_0_0, NULL, &t3949_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3352_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseEventData>
extern MethodInfo m23924_MI;
static PropertyInfo t3352____Current_PropertyInfo = 
{
	&t3352_TI, "Current", &m23924_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3352_PIs[] =
{
	&t3352____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3352_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23924_MI = 
{
	"get_Current", NULL, &t3352_TI, &t34_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3352_MIs[] =
{
	&m23924_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3352_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3352_0_0_0;
extern Il2CppType t3352_1_0_0;
struct t3352;
extern TypeInfo t3352_TI;
extern Il2CppGenericClass t3352_GC;
TypeInfo t3352_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3352_MIs, t3352_PIs, NULL, NULL, NULL, NULL, NULL, &t3352_TI, t3352_ITIs, NULL, &EmptyCustomAttributesCache, &t3352_TI, &t3352_0_0_0, &t3352_1_0_0, NULL, &t3352_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1857.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1857_TI;
#include "t1857MD.h"

extern TypeInfo t1857_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10123_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m17821_MI;
struct t14;
#define m17821(__this, p0, method) (t34 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m17821_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseEventData>
extern Il2CppType t14_0_0_1;
FieldInfo t1857_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1857_TI, offsetof(t1857, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1857_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1857_TI, offsetof(t1857, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1857_FIs[] =
{
	&t1857_f0_FieldInfo,
	&t1857_f1_FieldInfo,
	NULL
};
extern MethodInfo m10120_MI;
static PropertyInfo t1857____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1857_TI, "System.Collections.IEnumerator.Current", &m10120_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10123_MI;
static PropertyInfo t1857____Current_PropertyInfo = 
{
	&t1857_TI, "Current", &m10123_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1857_PIs[] =
{
	&t1857____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1857____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1857_m10119_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1857_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10119_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t1857_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1857_m10119_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1857_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10120_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t1857_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1857_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10121_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t1857_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1857_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10122_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t1857_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1857_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10123_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t1857_TI, &t34_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1857_MIs[] =
{
	&m10119_MI,
	&m10120_MI,
	&m10121_MI,
	&m10122_MI,
	&m10123_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10120_MI;
extern MethodInfo m10122_MI;
extern MethodInfo m10121_MI;
extern MethodInfo m10123_MI;
static MethodInfo* t1857_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10120_MI,
	&m10122_MI,
	&m10121_MI,
	&m10123_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3352_TI;
static TypeInfo* t1857_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3352_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3352_TI;
static Il2CppInterfaceOffsetPair t1857_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3352_TI, 7},
};
extern MethodInfo m10123_MI;
extern TypeInfo t34_TI;
extern MethodInfo m17821_MI;
static void* t1857_RGCTXData[3] = 
{
	&m10123_MI,
	&t34_TI,
	&m17821_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1857_0_0_0;
extern Il2CppType t1857_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1857_TI;
extern Il2CppGenericClass t1857_GC;
extern TypeInfo t14_TI;
TypeInfo t1857_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1857_MIs, t1857_PIs, t1857_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1857_TI, t1857_ITIs, t1857_VT, &EmptyCustomAttributesCache, &t1857_TI, &t1857_0_0_0, &t1857_1_0_0, t1857_IOs, &t1857_GC, NULL, NULL, NULL, t1857_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1857)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3948_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseEventData>
extern MethodInfo m23925_MI;
extern MethodInfo m23926_MI;
static PropertyInfo t3948____Item_PropertyInfo = 
{
	&t3948_TI, "Item", &m23925_MI, &m23926_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3948_PIs[] =
{
	&t3948____Item_PropertyInfo,
	NULL
};
extern Il2CppType t34_0_0_0;
static ParameterInfo t3948_m23927_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t3948_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23927_MI = 
{
	"IndexOf", NULL, &t3948_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t3948_m23927_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t34_0_0_0;
static ParameterInfo t3948_m23928_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t3948_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23928_MI = 
{
	"Insert", NULL, &t3948_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t3948_m23928_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3948_m23929_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3948_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23929_MI = 
{
	"RemoveAt", NULL, &t3948_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3948_m23929_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3948_m23925_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3948_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23925_MI = 
{
	"get_Item", NULL, &t3948_TI, &t34_0_0_0, RuntimeInvoker_t4_t16, t3948_m23925_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t34_0_0_0;
static ParameterInfo t3948_m23926_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t3948_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23926_MI = 
{
	"set_Item", NULL, &t3948_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t3948_m23926_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3948_MIs[] =
{
	&m23927_MI,
	&m23928_MI,
	&m23929_MI,
	&m23925_MI,
	&m23926_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3947_TI;
extern TypeInfo t3949_TI;
static TypeInfo* t3948_ITIs[] = 
{
	&t591_TI,
	&t3947_TI,
	&t3949_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3948_0_0_0;
extern Il2CppType t3948_1_0_0;
struct t3948;
extern TypeInfo t3948_TI;
extern Il2CppGenericClass t3948_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3948_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3948_MIs, t3948_PIs, NULL, NULL, NULL, NULL, NULL, &t3948_TI, t3948_ITIs, NULL, &t1400__CustomAttributeCache, &t3948_TI, &t3948_0_0_0, &t3948_1_0_0, NULL, &t3948_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t311.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t311_TI;
#include "t311MD.h"

#include "t105.h"
#include "t328.h"
#include "t335.h"
#include "t310.h"
#include "t1859.h"
#include "t50.h"
extern TypeInfo t311_TI;
extern TypeInfo t640_TI;
extern TypeInfo t4_TI;
extern TypeInfo t105_TI;
extern TypeInfo t16_TI;
extern TypeInfo t328_TI;
extern TypeInfo t335_TI;
extern TypeInfo t310_TI;
extern TypeInfo t1845_TI;
extern TypeInfo t37_TI;
extern TypeInfo t15_TI;
extern TypeInfo t1859_TI;
#include "t105MD.h"
#include "t4MD.h"
#include "t328MD.h"
#include "t335MD.h"
#include "t1859MD.h"
#include "t310MD.h"
extern MethodInfo m7381_MI;
extern MethodInfo m10064_MI;
extern MethodInfo m15_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m6989_MI;
extern MethodInfo m10074_MI;
extern MethodInfo m1397_MI;
extern MethodInfo m10135_MI;
extern MethodInfo m10068_MI;
extern MethodInfo m10070_MI;
extern MethodInfo m10149_MI;
extern MethodInfo m17832_MI;
extern MethodInfo m17833_MI;
extern MethodInfo m10137_MI;
struct t105;
#include "t290.h"
#include "t26.h"
#include "t291.h"
#include "mscorlib_ArrayTypes.h"
#include "t303.h"
 void m17832 (t105 * __this, t14 * p0, int32_t p1, t1859 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17832_MI;
struct t105;
 void m17833 (t105 * __this, t1845* p0, int32_t p1, t1859 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17833_MI;


extern MethodInfo m10124_MI;
 void m10124 (t311 * __this, t105 * p0, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral549, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m10125_MI;
 void m10125 (t311 * __this, t37 * p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m6989(L_0, (t8*) &_stringLiteral550, &m6989_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10126_MI;
 void m10126 (t311 * __this, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m6989(L_0, (t8*) &_stringLiteral550, &m6989_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10127_MI;
 bool m10127 (t311 * __this, t37 * p0, MethodInfo* method){
	{
		t105 * L_0 = (__this->f0);
		bool L_1 = m10074(L_0, p0, &m10074_MI);
		return L_1;
	}
}
extern MethodInfo m10128_MI;
 bool m10128 (t311 * __this, t37 * p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m6989(L_0, (t8*) &_stringLiteral550, &m6989_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10129_MI;
 t4* m10129 (t311 * __this, MethodInfo* method){
	{
		t310  L_0 = m1397(__this, &m1397_MI);
		t310  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t310_TI), &L_1);
		return (t4*)L_2;
	}
}
extern MethodInfo m10130_MI;
 void m10130 (t311 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	t1845* V_0 = {0};
	{
		V_0 = ((t1845*)IsInst(p0, InitializedTypeInfo(&t1845_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t1845*, int32_t >::Invoke(&m10135_MI, __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t105 * L_0 = (__this->f0);
		m10068(L_0, p0, p1, &m10068_MI);
		t105 * L_1 = (__this->f0);
		t50 L_2 = { &m10070_MI };
		t1859 * L_3 = (t1859 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1859_TI));
		m10149(L_3, NULL, L_2, &m10149_MI);
		m17832(L_1, p0, p1, L_3, &m17832_MI);
		return;
	}
}
extern MethodInfo m10131_MI;
 t4 * m10131 (t311 * __this, MethodInfo* method){
	{
		t310  L_0 = m1397(__this, &m1397_MI);
		t310  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t310_TI), &L_1);
		return (t4 *)L_2;
	}
}
extern MethodInfo m10132_MI;
 bool m10132 (t311 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m10133_MI;
 bool m10133 (t311 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m10134_MI;
 t4 * m10134 (t311 * __this, MethodInfo* method){
	{
		t105 * L_0 = (__this->f0);
		t4 * L_1 = (t4 *)InterfaceFuncInvoker0< t4 * >::Invoke(&m7381_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m10135_MI;
 void m10135 (t311 * __this, t1845* p0, int32_t p1, MethodInfo* method){
	{
		t105 * L_0 = (__this->f0);
		m10068(L_0, (t14 *)(t14 *)p0, p1, &m10068_MI);
		t105 * L_1 = (__this->f0);
		t50 L_2 = { &m10070_MI };
		t1859 * L_3 = (t1859 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1859_TI));
		m10149(L_3, NULL, L_2, &m10149_MI);
		m17833(L_1, p0, p1, L_3, &m17833_MI);
		return;
	}
}
extern MethodInfo m1397_MI;
 t310  m1397 (t311 * __this, MethodInfo* method){
	{
		t105 * L_0 = (__this->f0);
		t310  L_1 = {0};
		m10137(&L_1, L_0, &m10137_MI);
		return L_1;
	}
}
extern MethodInfo m10136_MI;
 int32_t m10136 (t311 * __this, MethodInfo* method){
	{
		t105 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m10064_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t105_0_0_1;
FieldInfo t311_f0_FieldInfo = 
{
	"dictionary", &t105_0_0_1, &t311_TI, offsetof(t311, f0), &EmptyCustomAttributesCache};
static FieldInfo* t311_FIs[] =
{
	&t311_f0_FieldInfo,
	NULL
};
extern MethodInfo m10132_MI;
static PropertyInfo t311____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t311_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m10132_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10133_MI;
static PropertyInfo t311____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t311_TI, "System.Collections.ICollection.IsSynchronized", &m10133_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10134_MI;
static PropertyInfo t311____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t311_TI, "System.Collections.ICollection.SyncRoot", &m10134_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10136_MI;
static PropertyInfo t311____Count_PropertyInfo = 
{
	&t311_TI, "Count", &m10136_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t311_PIs[] =
{
	&t311____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t311____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t311____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t311____Count_PropertyInfo,
	NULL
};
extern Il2CppType t105_0_0_0;
static ParameterInfo t311_m10124_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t311_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10124_MI = 
{
	".ctor", (methodPointerType)&m10124, &t311_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t311_m10124_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t37_0_0_0;
static ParameterInfo t311_m10125_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t311_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10125_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m10125, &t311_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t311_m10125_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t311_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10126_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m10126, &t311_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t37_0_0_0;
static ParameterInfo t311_m10127_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t311_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10127_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m10127, &t311_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t311_m10127_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t37_0_0_0;
static ParameterInfo t311_m10128_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t311_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10128_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m10128, &t311_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t311_m10128_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t311_TI;
extern Il2CppType t1858_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10129_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m10129, &t311_TI, &t1858_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t311_m10130_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t311_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10130_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10130, &t311_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t311_m10130_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t311_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10131_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10131, &t311_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t311_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10132_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m10132, &t311_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t311_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10133_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10133, &t311_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t311_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10134_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10134, &t311_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1845_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t311_m10135_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1845_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t311_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10135_MI = 
{
	"CopyTo", (methodPointerType)&m10135, &t311_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t311_m10135_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t311_TI;
extern Il2CppType t310_0_0_0;
extern void* RuntimeInvoker_t310 (MethodInfo* method, void* obj, void** args);
MethodInfo m1397_MI = 
{
	"GetEnumerator", (methodPointerType)&m1397, &t311_TI, &t310_0_0_0, RuntimeInvoker_t310, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t311_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10136_MI = 
{
	"get_Count", (methodPointerType)&m10136, &t311_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t311_MIs[] =
{
	&m10124_MI,
	&m10125_MI,
	&m10126_MI,
	&m10127_MI,
	&m10128_MI,
	&m10129_MI,
	&m10130_MI,
	&m10131_MI,
	&m10132_MI,
	&m10133_MI,
	&m10134_MI,
	&m10135_MI,
	&m1397_MI,
	&m10136_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10131_MI;
extern MethodInfo m10136_MI;
extern MethodInfo m10133_MI;
extern MethodInfo m10134_MI;
extern MethodInfo m10130_MI;
extern MethodInfo m10136_MI;
extern MethodInfo m10132_MI;
extern MethodInfo m10125_MI;
extern MethodInfo m10126_MI;
extern MethodInfo m10127_MI;
extern MethodInfo m10135_MI;
extern MethodInfo m10128_MI;
extern MethodInfo m10129_MI;
static MethodInfo* t311_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10131_MI,
	&m10136_MI,
	&m10133_MI,
	&m10134_MI,
	&m10130_MI,
	&m10136_MI,
	&m10132_MI,
	&m10125_MI,
	&m10126_MI,
	&m10127_MI,
	&m10135_MI,
	&m10128_MI,
	&m10129_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t3944_TI;
extern TypeInfo t3946_TI;
static TypeInfo* t311_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t3944_TI,
	&t3946_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t3944_TI;
extern TypeInfo t3946_TI;
static Il2CppInterfaceOffsetPair t311_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t3944_TI, 9},
	{ &t3946_TI, 16},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t311_0_0_0;
extern Il2CppType t311_1_0_0;
extern TypeInfo t4_TI;
struct t311;
extern TypeInfo t311_TI;
extern Il2CppGenericClass t311_GC;
extern TypeInfo t832_TI;
extern CustomAttributesCache t830__CustomAttributeCache;
TypeInfo t311_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t311_MIs, t311_PIs, t311_FIs, NULL, &t4_TI, NULL, &t832_TI, &t311_TI, t311_ITIs, t311_VT, &t830__CustomAttributeCache, &t311_TI, &t311_0_0_0, &t311_1_0_0, t311_IOs, &t311_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t311), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t310_TI;

#include "t313.h"
#include "t312.h"
extern TypeInfo t310_TI;
extern TypeInfo t37_TI;
extern TypeInfo t313_TI;
extern TypeInfo t15_TI;
extern TypeInfo t17_TI;
#include "t313MD.h"
#include "t312MD.h"
extern MethodInfo m10145_MI;
extern MethodInfo m1405_MI;
extern MethodInfo m1403_MI;
extern MethodInfo m10148_MI;
extern MethodInfo m1407_MI;


extern MethodInfo m10137_MI;
 void m10137 (t310 * __this, t105 * p0, MethodInfo* method){
	{
		t313  L_0 = m1403(p0, &m1403_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10138_MI;
 t4 * m10138 (t310 * __this, MethodInfo* method){
	{
		t313 * L_0 = &(__this->f0);
		t37 * L_1 = m10145(L_0, &m10145_MI);
		t37 * L_2 = L_1;
		return ((t37 *)L_2);
	}
}
extern MethodInfo m10139_MI;
 void m10139 (t310 * __this, MethodInfo* method){
	{
		t313 * L_0 = &(__this->f0);
		m10148(L_0, &m10148_MI);
		return;
	}
}
extern MethodInfo m1399_MI;
 bool m1399 (t310 * __this, MethodInfo* method){
	{
		t313 * L_0 = &(__this->f0);
		bool L_1 = m1407(L_0, &m1407_MI);
		return L_1;
	}
}
extern MethodInfo m1398_MI;
 t37 * m1398 (t310 * __this, MethodInfo* method){
	{
		t313 * L_0 = &(__this->f0);
		t312 * L_1 = &(L_0->f3);
		t37 * L_2 = m1405(L_1, &m1405_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t313_0_0_1;
FieldInfo t310_f0_FieldInfo = 
{
	"host_enumerator", &t313_0_0_1, &t310_TI, offsetof(t310, f0) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t310_FIs[] =
{
	&t310_f0_FieldInfo,
	NULL
};
extern MethodInfo m10138_MI;
static PropertyInfo t310____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t310_TI, "System.Collections.IEnumerator.Current", &m10138_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1398_MI;
static PropertyInfo t310____Current_PropertyInfo = 
{
	&t310_TI, "Current", &m1398_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t310_PIs[] =
{
	&t310____System_Collections_IEnumerator_Current_PropertyInfo,
	&t310____Current_PropertyInfo,
	NULL
};
extern Il2CppType t105_0_0_0;
static ParameterInfo t310_m10137_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t310_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10137_MI = 
{
	".ctor", (methodPointerType)&m10137, &t310_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t310_m10137_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t310_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10138_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10138, &t310_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t310_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10139_MI = 
{
	"Dispose", (methodPointerType)&m10139, &t310_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t310_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m1399_MI = 
{
	"MoveNext", (methodPointerType)&m1399, &t310_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t310_TI;
extern Il2CppType t37_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1398_MI = 
{
	"get_Current", (methodPointerType)&m1398, &t310_TI, &t37_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t310_MIs[] =
{
	&m10137_MI,
	&m10138_MI,
	&m10139_MI,
	&m1399_MI,
	&m1398_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10138_MI;
extern MethodInfo m1399_MI;
extern MethodInfo m10139_MI;
extern MethodInfo m1398_MI;
static MethodInfo* t310_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10138_MI,
	&m1399_MI,
	&m10139_MI,
	&m1398_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1858_TI;
static TypeInfo* t310_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t1858_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1858_TI;
static Il2CppInterfaceOffsetPair t310_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t1858_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t310_0_0_0;
extern Il2CppType t310_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t310_TI;
extern Il2CppGenericClass t310_GC;
extern TypeInfo t830_TI;
TypeInfo t310_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t310_MIs, t310_PIs, t310_FIs, NULL, &t95_TI, NULL, &t830_TI, &t310_TI, t310_ITIs, t310_VT, &EmptyCustomAttributesCache, &t310_TI, &t310_0_0_0, &t310_1_0_0, t310_IOs, &t310_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t310)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t313_TI;

#include "t827.h"
#include "t1286.h"
extern TypeInfo t313_TI;
extern TypeInfo t312_TI;
extern TypeInfo t16_TI;
extern TypeInfo t37_TI;
extern TypeInfo t827_TI;
extern TypeInfo t105_TI;
extern TypeInfo t825_TI;
extern TypeInfo t1286_TI;
extern TypeInfo t1269_TI;
#include "t827MD.h"
#include "t1286MD.h"
extern MethodInfo m10147_MI;
extern MethodInfo m1406_MI;
extern MethodInfo m1405_MI;
extern MethodInfo m4332_MI;
extern MethodInfo m10144_MI;
extern MethodInfo m10146_MI;
extern MethodInfo m10081_MI;
extern MethodInfo m7091_MI;
extern MethodInfo m6887_MI;


extern MethodInfo m10140_MI;
 void m10140 (t313 * __this, t105 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m10141_MI;
 t4 * m10141 (t313 * __this, MethodInfo* method){
	{
		m10147(__this, &m10147_MI);
		t312  L_0 = (__this->f3);
		t312  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t312_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10142_MI;
 t827  m10142 (t313 * __this, MethodInfo* method){
	{
		m10147(__this, &m10147_MI);
		t312 * L_0 = &(__this->f3);
		int32_t L_1 = m1406(L_0, &m1406_MI);
		int32_t L_2 = L_1;
		t4 * L_3 = Box(InitializedTypeInfo(&t16_TI), &L_2);
		t312 * L_4 = &(__this->f3);
		t37 * L_5 = m1405(L_4, &m1405_MI);
		t37 * L_6 = L_5;
		t827  L_7 = {0};
		m4332(&L_7, L_3, ((t37 *)L_6), &m4332_MI);
		return L_7;
	}
}
extern MethodInfo m10143_MI;
 t4 * m10143 (t313 * __this, MethodInfo* method){
	{
		int32_t L_0 = m10144(__this, &m10144_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t16_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m1407_MI;
 bool m1407 (t313 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m10146(__this, &m10146_MI);
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
		t105 * L_3 = (__this->f0);
		t1450* L_4 = (L_3->f5);
		int32_t L_5 = (((t825 *)(t825 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)(L_5&((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t105 * L_6 = (__this->f0);
		t704* L_7 = (L_6->f6);
		t105 * L_8 = (__this->f0);
		t1845* L_9 = (L_8->f7);
		t312  L_10 = {0};
		m10081(&L_10, (*(int32_t*)(int32_t*)SZArrayLdElema(L_7, V_0)), (*(t37 **)(t37 **)SZArrayLdElema(L_9, V_0)), &m10081_MI);
		__this->f3 = L_10;
		return 1;
	}

IL_0072:
	{
		int32_t L_11 = (__this->f1);
		t105 * L_12 = (__this->f0);
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
extern MethodInfo m1404_MI;
 t312  m1404 (t313 * __this, MethodInfo* method){
	{
		t312  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10144_MI;
 int32_t m10144 (t313 * __this, MethodInfo* method){
	{
		m10147(__this, &m10147_MI);
		t312 * L_0 = &(__this->f3);
		int32_t L_1 = m1406(L_0, &m1406_MI);
		return L_1;
	}
}
extern MethodInfo m10145_MI;
 t37 * m10145 (t313 * __this, MethodInfo* method){
	{
		m10147(__this, &m10147_MI);
		t312 * L_0 = &(__this->f3);
		t37 * L_1 = m1405(L_0, &m1405_MI);
		return L_1;
	}
}
extern MethodInfo m10146_MI;
 void m10146 (t313 * __this, MethodInfo* method){
	{
		t105 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1286 * L_1 = (t1286 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1286_TI));
		m7091(L_1, (t8*)NULL, &m7091_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000f:
	{
		t105 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f14);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1269 * L_5 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_5, (t8*) &_stringLiteral547, &m6887_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m10147_MI;
 void m10147 (t313 * __this, MethodInfo* method){
	{
		m10146(__this, &m10146_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral548, &m6887_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001a:
	{
		return;
	}
}
extern MethodInfo m10148_MI;
 void m10148 (t313 * __this, MethodInfo* method){
	{
		__this->f0 = (t105 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t105_0_0_1;
FieldInfo t313_f0_FieldInfo = 
{
	"dictionary", &t105_0_0_1, &t313_TI, offsetof(t313, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t313_f1_FieldInfo = 
{
	"next", &t16_0_0_1, &t313_TI, offsetof(t313, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t313_f2_FieldInfo = 
{
	"stamp", &t16_0_0_1, &t313_TI, offsetof(t313, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t312_0_0_3;
FieldInfo t313_f3_FieldInfo = 
{
	"current", &t312_0_0_3, &t313_TI, offsetof(t313, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t313_FIs[] =
{
	&t313_f0_FieldInfo,
	&t313_f1_FieldInfo,
	&t313_f2_FieldInfo,
	&t313_f3_FieldInfo,
	NULL
};
extern MethodInfo m10141_MI;
static PropertyInfo t313____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t313_TI, "System.Collections.IEnumerator.Current", &m10141_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10142_MI;
static PropertyInfo t313____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t313_TI, "System.Collections.IDictionaryEnumerator.Entry", &m10142_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10143_MI;
static PropertyInfo t313____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t313_TI, "System.Collections.IDictionaryEnumerator.Key", &m10143_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1404_MI;
static PropertyInfo t313____Current_PropertyInfo = 
{
	&t313_TI, "Current", &m1404_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10144_MI;
static PropertyInfo t313____CurrentKey_PropertyInfo = 
{
	&t313_TI, "CurrentKey", &m10144_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10145_MI;
static PropertyInfo t313____CurrentValue_PropertyInfo = 
{
	&t313_TI, "CurrentValue", &m10145_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t313_PIs[] =
{
	&t313____System_Collections_IEnumerator_Current_PropertyInfo,
	&t313____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t313____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t313____Current_PropertyInfo,
	&t313____CurrentKey_PropertyInfo,
	&t313____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t105_0_0_0;
static ParameterInfo t313_m10140_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t313_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10140_MI = 
{
	".ctor", (methodPointerType)&m10140, &t313_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t313_m10140_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t313_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10141_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10141, &t313_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t313_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827 (MethodInfo* method, void* obj, void** args);
MethodInfo m10142_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m10142, &t313_TI, &t827_0_0_0, RuntimeInvoker_t827, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t313_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10143_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m10143, &t313_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t313_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m1407_MI = 
{
	"MoveNext", (methodPointerType)&m1407, &t313_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t313_TI;
extern Il2CppType t312_0_0_0;
extern void* RuntimeInvoker_t312 (MethodInfo* method, void* obj, void** args);
MethodInfo m1404_MI = 
{
	"get_Current", (methodPointerType)&m1404, &t313_TI, &t312_0_0_0, RuntimeInvoker_t312, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t313_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10144_MI = 
{
	"get_CurrentKey", (methodPointerType)&m10144, &t313_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t313_TI;
extern Il2CppType t37_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10145_MI = 
{
	"get_CurrentValue", (methodPointerType)&m10145, &t313_TI, &t37_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t313_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10146_MI = 
{
	"VerifyState", (methodPointerType)&m10146, &t313_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t313_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10147_MI = 
{
	"VerifyCurrent", (methodPointerType)&m10147, &t313_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t313_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10148_MI = 
{
	"Dispose", (methodPointerType)&m10148, &t313_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t313_MIs[] =
{
	&m10140_MI,
	&m10141_MI,
	&m10142_MI,
	&m10143_MI,
	&m1407_MI,
	&m1404_MI,
	&m10144_MI,
	&m10145_MI,
	&m10146_MI,
	&m10147_MI,
	&m10148_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10141_MI;
extern MethodInfo m1407_MI;
extern MethodInfo m10148_MI;
extern MethodInfo m1404_MI;
extern MethodInfo m10142_MI;
extern MethodInfo m10143_MI;
static MethodInfo* t313_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10141_MI,
	&m1407_MI,
	&m10148_MI,
	&m1404_MI,
	&m10142_MI,
	&m10143_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1849_TI;
extern TypeInfo t833_TI;
static TypeInfo* t313_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t1849_TI,
	&t833_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1849_TI;
extern TypeInfo t833_TI;
static Il2CppInterfaceOffsetPair t313_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t1849_TI, 7},
	{ &t833_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t313_0_0_0;
extern Il2CppType t313_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t313_TI;
extern Il2CppGenericClass t313_GC;
extern TypeInfo t832_TI;
TypeInfo t313_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t313_MIs, t313_PIs, t313_FIs, NULL, &t95_TI, NULL, &t832_TI, &t313_TI, t313_ITIs, t313_VT, &EmptyCustomAttributesCache, &t313_TI, &t313_0_0_0, &t313_1_0_0, t313_IOs, &t313_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t313)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1859_TI;

#include "t49.h"


extern MethodInfo m10149_MI;
 void m10149 (t1859 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10150_MI;
 t37 * m10150 (t1859 * __this, int32_t p0, t37 * p1, MethodInfo* method){
	typedef  t37 * (*FunctionPointerType) (t4 * __this, int32_t p0, t37 * p1, MethodInfo* method);
	if (__this->f9)
		m10150((t1859 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10151_MI;
 t4 * m10151 (t1859 * __this, int32_t p0, t37 * p1, t49 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t16_TI), &p0);
	__d_args[1] = p1;
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10152_MI;
 t37 * m10152 (t1859 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t37 *)__result;
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1859_m10149_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1859_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10149_MI = 
{
	".ctor", (methodPointerType)&m10149, &t1859_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1859_m10149_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t37_0_0_0;
static ParameterInfo t1859_m10150_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t1859_TI;
extern Il2CppType t37_0_0_0;
extern void* RuntimeInvoker_t4_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10150_MI = 
{
	"Invoke", (methodPointerType)&m10150, &t1859_TI, &t37_0_0_0, RuntimeInvoker_t4_t16_t4, t1859_m10150_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t37_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1859_m10151_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1859_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t16_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10151_MI = 
{
	"BeginInvoke", (methodPointerType)&m10151, &t1859_TI, &t48_0_0_0, RuntimeInvoker_t4_t16_t4_t4_t4, t1859_m10151_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1859_m10152_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1859_TI;
extern Il2CppType t37_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10152_MI = 
{
	"EndInvoke", (methodPointerType)&m10152, &t1859_TI, &t37_0_0_0, RuntimeInvoker_t4_t4, t1859_m10152_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1859_MIs[] =
{
	&m10149_MI,
	&m10150_MI,
	&m10151_MI,
	&m10152_MI,
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
extern MethodInfo m10150_MI;
extern MethodInfo m10151_MI;
extern MethodInfo m10152_MI;
static MethodInfo* t1859_VT[] =
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
	&m10150_MI,
	&m10151_MI,
	&m10152_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1859_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1859_0_0_0;
extern Il2CppType t1859_1_0_0;
extern TypeInfo t189_TI;
struct t1859;
extern TypeInfo t1859_TI;
extern Il2CppGenericClass t1859_GC;
extern TypeInfo t832_TI;
TypeInfo t1859_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1859_MIs, NULL, NULL, NULL, &t189_TI, NULL, &t832_TI, &t1859_TI, NULL, t1859_VT, &EmptyCustomAttributesCache, &t1859_TI, &t1859_0_0_0, &t1859_1_0_0, t1859_IOs, &t1859_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1859), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1847.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1847_TI;
#include "t1847MD.h"



extern MethodInfo m10153_MI;
 void m10153 (t1847 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10154_MI;
 t827  m10154 (t1847 * __this, int32_t p0, t37 * p1, MethodInfo* method){
	typedef  t827  (*FunctionPointerType) (t4 * __this, int32_t p0, t37 * p1, MethodInfo* method);
	if (__this->f9)
		m10154((t1847 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10155_MI;
 t4 * m10155 (t1847 * __this, int32_t p0, t37 * p1, t49 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t16_TI), &p0);
	__d_args[1] = p1;
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10156_MI;
 t827  m10156 (t1847 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t827 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1847_m10153_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1847_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10153_MI = 
{
	".ctor", (methodPointerType)&m10153, &t1847_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1847_m10153_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t37_0_0_0;
static ParameterInfo t1847_m10154_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t1847_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10154_MI = 
{
	"Invoke", (methodPointerType)&m10154, &t1847_TI, &t827_0_0_0, RuntimeInvoker_t827_t16_t4, t1847_m10154_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t37_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1847_m10155_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1847_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t16_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10155_MI = 
{
	"BeginInvoke", (methodPointerType)&m10155, &t1847_TI, &t48_0_0_0, RuntimeInvoker_t4_t16_t4_t4_t4, t1847_m10155_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1847_m10156_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1847_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10156_MI = 
{
	"EndInvoke", (methodPointerType)&m10156, &t1847_TI, &t827_0_0_0, RuntimeInvoker_t827_t4, t1847_m10156_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1847_MIs[] =
{
	&m10153_MI,
	&m10154_MI,
	&m10155_MI,
	&m10156_MI,
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
extern MethodInfo m10154_MI;
extern MethodInfo m10155_MI;
extern MethodInfo m10156_MI;
static MethodInfo* t1847_VT[] =
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
	&m10154_MI,
	&m10155_MI,
	&m10156_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1847_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1847_0_0_0;
extern Il2CppType t1847_1_0_0;
extern TypeInfo t189_TI;
struct t1847;
extern TypeInfo t1847_TI;
extern Il2CppGenericClass t1847_GC;
extern TypeInfo t832_TI;
TypeInfo t1847_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1847_MIs, NULL, NULL, NULL, &t189_TI, NULL, &t832_TI, &t1847_TI, NULL, t1847_VT, &EmptyCustomAttributesCache, &t1847_TI, &t1847_0_0_0, &t1847_1_0_0, t1847_IOs, &t1847_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1847), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3353_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.DictionaryEntry>
extern MethodInfo m23930_MI;
static PropertyInfo t3353____Current_PropertyInfo = 
{
	&t3353_TI, "Current", &m23930_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3353_PIs[] =
{
	&t3353____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3353_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827 (MethodInfo* method, void* obj, void** args);
MethodInfo m23930_MI = 
{
	"get_Current", NULL, &t3353_TI, &t827_0_0_0, RuntimeInvoker_t827, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3353_MIs[] =
{
	&m23930_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3353_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3353_0_0_0;
extern Il2CppType t3353_1_0_0;
struct t3353;
extern TypeInfo t3353_TI;
extern Il2CppGenericClass t3353_GC;
TypeInfo t3353_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3353_MIs, t3353_PIs, NULL, NULL, NULL, NULL, NULL, &t3353_TI, t3353_ITIs, NULL, &EmptyCustomAttributesCache, &t3353_TI, &t3353_0_0_0, &t3353_1_0_0, NULL, &t3353_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1860.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1860_TI;
#include "t1860MD.h"

extern TypeInfo t1860_TI;
extern TypeInfo t827_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10161_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m17835_MI;
struct t14;
 t827  m17835 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17835_MI;


extern MethodInfo m10157_MI;
 void m10157 (t1860 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10158_MI;
 t4 * m10158 (t1860 * __this, MethodInfo* method){
	{
		t827  L_0 = m10161(__this, &m10161_MI);
		t827  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t827_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10159_MI;
 void m10159 (t1860 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10160_MI;
 bool m10160 (t1860 * __this, MethodInfo* method){
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
extern MethodInfo m10161_MI;
 t827  m10161 (t1860 * __this, MethodInfo* method){
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
		t827  L_8 = m17835(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m17835_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
extern Il2CppType t14_0_0_1;
FieldInfo t1860_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1860_TI, offsetof(t1860, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1860_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1860_TI, offsetof(t1860, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1860_FIs[] =
{
	&t1860_f0_FieldInfo,
	&t1860_f1_FieldInfo,
	NULL
};
extern MethodInfo m10158_MI;
static PropertyInfo t1860____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1860_TI, "System.Collections.IEnumerator.Current", &m10158_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10161_MI;
static PropertyInfo t1860____Current_PropertyInfo = 
{
	&t1860_TI, "Current", &m10161_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1860_PIs[] =
{
	&t1860____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1860____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1860_m10157_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1860_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10157_MI = 
{
	".ctor", (methodPointerType)&m10157, &t1860_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1860_m10157_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1860_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10158_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10158, &t1860_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1860_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10159_MI = 
{
	"Dispose", (methodPointerType)&m10159, &t1860_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1860_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10160_MI = 
{
	"MoveNext", (methodPointerType)&m10160, &t1860_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1860_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827 (MethodInfo* method, void* obj, void** args);
MethodInfo m10161_MI = 
{
	"get_Current", (methodPointerType)&m10161, &t1860_TI, &t827_0_0_0, RuntimeInvoker_t827, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1860_MIs[] =
{
	&m10157_MI,
	&m10158_MI,
	&m10159_MI,
	&m10160_MI,
	&m10161_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10158_MI;
extern MethodInfo m10160_MI;
extern MethodInfo m10159_MI;
extern MethodInfo m10161_MI;
static MethodInfo* t1860_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10158_MI,
	&m10160_MI,
	&m10159_MI,
	&m10161_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3353_TI;
static TypeInfo* t1860_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3353_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3353_TI;
static Il2CppInterfaceOffsetPair t1860_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3353_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1860_0_0_0;
extern Il2CppType t1860_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1860_TI;
extern Il2CppGenericClass t1860_GC;
extern TypeInfo t14_TI;
TypeInfo t1860_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1860_MIs, t1860_PIs, t1860_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1860_TI, t1860_ITIs, t1860_VT, &EmptyCustomAttributesCache, &t1860_TI, &t1860_0_0_0, &t1860_1_0_0, t1860_IOs, &t1860_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1860)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3950_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>
extern MethodInfo m23931_MI;
static PropertyInfo t3950____Count_PropertyInfo = 
{
	&t3950_TI, "Count", &m23931_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23932_MI;
static PropertyInfo t3950____IsReadOnly_PropertyInfo = 
{
	&t3950_TI, "IsReadOnly", &m23932_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3950_PIs[] =
{
	&t3950____Count_PropertyInfo,
	&t3950____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3950_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23931_MI = 
{
	"get_Count", NULL, &t3950_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3950_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m23932_MI = 
{
	"get_IsReadOnly", NULL, &t3950_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t827_0_0_0;
static ParameterInfo t3950_m23933_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t827_0_0_0},
};
extern TypeInfo t3950_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t827 (MethodInfo* method, void* obj, void** args);
MethodInfo m23933_MI = 
{
	"Add", NULL, &t3950_TI, &t15_0_0_0, RuntimeInvoker_t15_t827, t3950_m23933_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3950_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m23934_MI = 
{
	"Clear", NULL, &t3950_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t827_0_0_0;
static ParameterInfo t3950_m23935_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t827_0_0_0},
};
extern TypeInfo t3950_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t827 (MethodInfo* method, void* obj, void** args);
MethodInfo m23935_MI = 
{
	"Contains", NULL, &t3950_TI, &t17_0_0_0, RuntimeInvoker_t17_t827, t3950_m23935_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2926_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t3950_m23936_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2926_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3950_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23936_MI = 
{
	"CopyTo", NULL, &t3950_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t3950_m23936_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t827_0_0_0;
static ParameterInfo t3950_m23937_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t827_0_0_0},
};
extern TypeInfo t3950_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t827 (MethodInfo* method, void* obj, void** args);
MethodInfo m23937_MI = 
{
	"Remove", NULL, &t3950_TI, &t17_0_0_0, RuntimeInvoker_t17_t827, t3950_m23937_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3950_MIs[] =
{
	&m23931_MI,
	&m23932_MI,
	&m23933_MI,
	&m23934_MI,
	&m23935_MI,
	&m23936_MI,
	&m23937_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3952_TI;
static TypeInfo* t3950_ITIs[] = 
{
	&t591_TI,
	&t3952_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3950_0_0_0;
extern Il2CppType t3950_1_0_0;
struct t3950;
extern TypeInfo t3950_TI;
extern Il2CppGenericClass t3950_GC;
TypeInfo t3950_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3950_MIs, t3950_PIs, NULL, NULL, NULL, NULL, NULL, &t3950_TI, t3950_ITIs, NULL, &EmptyCustomAttributesCache, &t3950_TI, &t3950_0_0_0, &t3950_1_0_0, NULL, &t3950_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3952_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.DictionaryEntry>
extern TypeInfo t3952_TI;
extern Il2CppType t3353_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23938_MI = 
{
	"GetEnumerator", NULL, &t3952_TI, &t3353_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3952_MIs[] =
{
	&m23938_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t3952_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3952_0_0_0;
extern Il2CppType t3952_1_0_0;
struct t3952;
extern TypeInfo t3952_TI;
extern Il2CppGenericClass t3952_GC;
TypeInfo t3952_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3952_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3952_TI, t3952_ITIs, NULL, &EmptyCustomAttributesCache, &t3952_TI, &t3952_0_0_0, &t3952_1_0_0, NULL, &t3952_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3951_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>
extern MethodInfo m23939_MI;
extern MethodInfo m23940_MI;
static PropertyInfo t3951____Item_PropertyInfo = 
{
	&t3951_TI, "Item", &m23939_MI, &m23940_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3951_PIs[] =
{
	&t3951____Item_PropertyInfo,
	NULL
};
extern Il2CppType t827_0_0_0;
static ParameterInfo t3951_m23941_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t827_0_0_0},
};
extern TypeInfo t3951_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t827 (MethodInfo* method, void* obj, void** args);
MethodInfo m23941_MI = 
{
	"IndexOf", NULL, &t3951_TI, &t16_0_0_0, RuntimeInvoker_t16_t827, t3951_m23941_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t827_0_0_0;
static ParameterInfo t3951_m23942_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t827_0_0_0},
};
extern TypeInfo t3951_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t827 (MethodInfo* method, void* obj, void** args);
MethodInfo m23942_MI = 
{
	"Insert", NULL, &t3951_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t827, t3951_m23942_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3951_m23943_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3951_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23943_MI = 
{
	"RemoveAt", NULL, &t3951_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3951_m23943_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3951_m23939_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3951_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23939_MI = 
{
	"get_Item", NULL, &t3951_TI, &t827_0_0_0, RuntimeInvoker_t827_t16, t3951_m23939_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t827_0_0_0;
static ParameterInfo t3951_m23940_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t827_0_0_0},
};
extern TypeInfo t3951_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t827 (MethodInfo* method, void* obj, void** args);
MethodInfo m23940_MI = 
{
	"set_Item", NULL, &t3951_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t827, t3951_m23940_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3951_MIs[] =
{
	&m23941_MI,
	&m23942_MI,
	&m23943_MI,
	&m23939_MI,
	&m23940_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3950_TI;
extern TypeInfo t3952_TI;
static TypeInfo* t3951_ITIs[] = 
{
	&t591_TI,
	&t3950_TI,
	&t3952_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3951_0_0_0;
extern Il2CppType t3951_1_0_0;
struct t3951;
extern TypeInfo t3951_TI;
extern Il2CppGenericClass t3951_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3951_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3951_MIs, t3951_PIs, NULL, NULL, NULL, NULL, NULL, &t3951_TI, t3951_ITIs, NULL, &t1400__CustomAttributeCache, &t3951_TI, &t3951_0_0_0, &t3951_1_0_0, NULL, &t3951_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1861.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1861_TI;
#include "t1861MD.h"



extern MethodInfo m10162_MI;
 void m10162 (t1861 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10163_MI;
 t312  m10163 (t1861 * __this, int32_t p0, t37 * p1, MethodInfo* method){
	typedef  t312  (*FunctionPointerType) (t4 * __this, int32_t p0, t37 * p1, MethodInfo* method);
	if (__this->f9)
		m10163((t1861 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10164_MI;
 t4 * m10164 (t1861 * __this, int32_t p0, t37 * p1, t49 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t16_TI), &p0);
	__d_args[1] = p1;
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10165_MI;
 t312  m10165 (t1861 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t312 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1861_m10162_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1861_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10162_MI = 
{
	".ctor", (methodPointerType)&m10162, &t1861_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1861_m10162_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t37_0_0_0;
static ParameterInfo t1861_m10163_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t1861_TI;
extern Il2CppType t312_0_0_0;
extern void* RuntimeInvoker_t312_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10163_MI = 
{
	"Invoke", (methodPointerType)&m10163, &t1861_TI, &t312_0_0_0, RuntimeInvoker_t312_t16_t4, t1861_m10163_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t37_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1861_m10164_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1861_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t16_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10164_MI = 
{
	"BeginInvoke", (methodPointerType)&m10164, &t1861_TI, &t48_0_0_0, RuntimeInvoker_t4_t16_t4_t4_t4, t1861_m10164_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1861_m10165_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1861_TI;
extern Il2CppType t312_0_0_0;
extern void* RuntimeInvoker_t312_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10165_MI = 
{
	"EndInvoke", (methodPointerType)&m10165, &t1861_TI, &t312_0_0_0, RuntimeInvoker_t312_t4, t1861_m10165_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1861_MIs[] =
{
	&m10162_MI,
	&m10163_MI,
	&m10164_MI,
	&m10165_MI,
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
extern MethodInfo m10163_MI;
extern MethodInfo m10164_MI;
extern MethodInfo m10165_MI;
static MethodInfo* t1861_VT[] =
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
	&m10163_MI,
	&m10164_MI,
	&m10165_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1861_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1861_0_0_0;
extern Il2CppType t1861_1_0_0;
extern TypeInfo t189_TI;
struct t1861;
extern TypeInfo t1861_TI;
extern Il2CppGenericClass t1861_GC;
extern TypeInfo t832_TI;
TypeInfo t1861_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1861_MIs, NULL, NULL, NULL, &t189_TI, NULL, &t832_TI, &t1861_TI, NULL, t1861_VT, &EmptyCustomAttributesCache, &t1861_TI, &t1861_0_0_0, &t1861_1_0_0, t1861_IOs, &t1861_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1861), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1862.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1862_TI;
#include "t1862MD.h"

extern TypeInfo t1862_TI;
extern TypeInfo t313_TI;
extern TypeInfo t833_TI;
extern TypeInfo t827_TI;
extern TypeInfo t312_TI;
extern TypeInfo t16_TI;
extern TypeInfo t17_TI;
extern MethodInfo m7691_MI;
extern MethodInfo m1404_MI;
extern MethodInfo m1406_MI;
extern MethodInfo m10168_MI;
extern MethodInfo m15_MI;
extern MethodInfo m1403_MI;
extern MethodInfo m1407_MI;


extern MethodInfo m10166_MI;
 void m10166 (t1862 * __this, t105 * p0, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		t313  L_0 = m1403(p0, &m1403_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10167_MI;
 bool m10167 (t1862 * __this, MethodInfo* method){
	{
		t313 * L_0 = &(__this->f0);
		bool L_1 = m1407(L_0, &m1407_MI);
		return L_1;
	}
}
extern MethodInfo m10168_MI;
 t827  m10168 (t1862 * __this, MethodInfo* method){
	{
		t313  L_0 = (__this->f0);
		t313  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t313_TI), &L_1);
		t827  L_3 = (t827 )InterfaceFuncInvoker0< t827  >::Invoke(&m7691_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m10169_MI;
 t4 * m10169 (t1862 * __this, MethodInfo* method){
	t312  V_0 = {0};
	{
		t313 * L_0 = &(__this->f0);
		t312  L_1 = m1404(L_0, &m1404_MI);
		V_0 = L_1;
		int32_t L_2 = m1406((&V_0), &m1406_MI);
		int32_t L_3 = L_2;
		t4 * L_4 = Box(InitializedTypeInfo(&t16_TI), &L_3);
		return L_4;
	}
}
extern MethodInfo m10170_MI;
 t4 * m10170 (t1862 * __this, MethodInfo* method){
	{
		t827  L_0 = (t827 )VirtFuncInvoker0< t827  >::Invoke(&m10168_MI, __this);
		t827  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t827_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t313_0_0_1;
FieldInfo t1862_f0_FieldInfo = 
{
	"host_enumerator", &t313_0_0_1, &t1862_TI, offsetof(t1862, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1862_FIs[] =
{
	&t1862_f0_FieldInfo,
	NULL
};
extern MethodInfo m10168_MI;
static PropertyInfo t1862____Entry_PropertyInfo = 
{
	&t1862_TI, "Entry", &m10168_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10169_MI;
static PropertyInfo t1862____Key_PropertyInfo = 
{
	&t1862_TI, "Key", &m10169_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10170_MI;
static PropertyInfo t1862____Current_PropertyInfo = 
{
	&t1862_TI, "Current", &m10170_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1862_PIs[] =
{
	&t1862____Entry_PropertyInfo,
	&t1862____Key_PropertyInfo,
	&t1862____Current_PropertyInfo,
	NULL
};
extern Il2CppType t105_0_0_0;
static ParameterInfo t1862_m10166_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern TypeInfo t1862_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10166_MI = 
{
	".ctor", (methodPointerType)&m10166, &t1862_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1862_m10166_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1862_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10167_MI = 
{
	"MoveNext", (methodPointerType)&m10167, &t1862_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1862_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827 (MethodInfo* method, void* obj, void** args);
MethodInfo m10168_MI = 
{
	"get_Entry", (methodPointerType)&m10168, &t1862_TI, &t827_0_0_0, RuntimeInvoker_t827, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1862_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10169_MI = 
{
	"get_Key", (methodPointerType)&m10169, &t1862_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1862_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10170_MI = 
{
	"get_Current", (methodPointerType)&m10170, &t1862_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1862_MIs[] =
{
	&m10166_MI,
	&m10167_MI,
	&m10168_MI,
	&m10169_MI,
	&m10170_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10170_MI;
extern MethodInfo m10167_MI;
extern MethodInfo m10168_MI;
extern MethodInfo m10169_MI;
static MethodInfo* t1862_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10170_MI,
	&m10167_MI,
	&m10168_MI,
	&m10169_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t833_TI;
static TypeInfo* t1862_ITIs[] = 
{
	&t123_TI,
	&t833_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t833_TI;
static Il2CppInterfaceOffsetPair t1862_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t833_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1862_0_0_0;
extern Il2CppType t1862_1_0_0;
extern TypeInfo t4_TI;
struct t1862;
extern TypeInfo t1862_TI;
extern Il2CppGenericClass t1862_GC;
extern TypeInfo t832_TI;
TypeInfo t1862_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t1862_MIs, t1862_PIs, t1862_FIs, NULL, &t4_TI, NULL, &t832_TI, &t1862_TI, t1862_ITIs, t1862_VT, &EmptyCustomAttributesCache, &t1862_TI, &t1862_0_0_0, &t1862_1_0_0, t1862_IOs, &t1862_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1862), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#include "t1863.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1863_TI;
#include "t1863MD.h"

#include "t836.h"
#include "t1865.h"
extern TypeInfo t1863_TI;
extern TypeInfo t1329_TI;
extern TypeInfo t290_TI;
extern TypeInfo t16_TI;
extern TypeInfo t17_TI;
extern TypeInfo t836_TI;
extern TypeInfo t525_TI;
extern TypeInfo t1865_TI;
#include "t290MD.h"
#include "t1222MD.h"
#include "t1865MD.h"
extern Il2CppType t1329_0_0_0;
extern Il2CppType t16_0_0_0;
extern Il2CppType t836_0_0_0;
extern MethodInfo m15_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2958_MI;
extern MethodInfo m2956_MI;
extern MethodInfo m6421_MI;
extern MethodInfo m10179_MI;
extern MethodInfo m23944_MI;
extern MethodInfo m23945_MI;


extern MethodInfo m10171_MI;
 void m10171 (t1863 * __this, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		return;
	}
}
extern MethodInfo m10172_MI;
 void m10172 (t4 * __this, MethodInfo* method){
	t1865 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t1865 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t1865_TI));
	m10179(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m10179_MI);
	((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m10173_MI;
 int32_t m10173 (t1863 * __this, t4 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m23944_MI, __this, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t16_TI))))));
		return L_0;
	}
}
extern MethodInfo m10174_MI;
 bool m10174 (t1863 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m23945_MI, __this, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t16_TI))))), ((*(int32_t*)((int32_t*)UnBox (p1, InitializedTypeInfo(&t16_TI))))));
		return L_0;
	}
}
extern MethodInfo m10175_MI;
 t1863 * m10175 (t4 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		return (((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Int32>
extern Il2CppType t1863_0_0_49;
FieldInfo t1863_f0_FieldInfo = 
{
	"_default", &t1863_0_0_49, &t1863_TI, offsetof(t1863_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1863_FIs[] =
{
	&t1863_f0_FieldInfo,
	NULL
};
extern MethodInfo m10175_MI;
static PropertyInfo t1863____Default_PropertyInfo = 
{
	&t1863_TI, "Default", &m10175_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1863_PIs[] =
{
	&t1863____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1863_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10171_MI = 
{
	".ctor", (methodPointerType)&m10171, &t1863_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1863_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10172_MI = 
{
	".cctor", (methodPointerType)&m10172, &t1863_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1863_m10173_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1863_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10173_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m10173, &t1863_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1863_m10173_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1863_m10174_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1863_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10174_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m10174, &t1863_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1863_m10174_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1863_m23944_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1863_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23944_MI = 
{
	"GetHashCode", NULL, &t1863_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t1863_m23944_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1863_m23945_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1863_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23945_MI = 
{
	"Equals", NULL, &t1863_TI, &t17_0_0_0, RuntimeInvoker_t17_t16_t16, t1863_m23945_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1863_TI;
extern Il2CppType t1863_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10175_MI = 
{
	"get_Default", (methodPointerType)&m10175, &t1863_TI, &t1863_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1863_MIs[] =
{
	&m10171_MI,
	&m10172_MI,
	&m10173_MI,
	&m10174_MI,
	&m23944_MI,
	&m23945_MI,
	&m10175_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m23945_MI;
extern MethodInfo m23944_MI;
extern MethodInfo m10174_MI;
extern MethodInfo m10173_MI;
static MethodInfo* t1863_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m23945_MI,
	&m23944_MI,
	&m10174_MI,
	&m10173_MI,
	NULL,
	NULL,
};
extern TypeInfo t1846_TI;
extern TypeInfo t859_TI;
static TypeInfo* t1863_ITIs[] = 
{
	&t1846_TI,
	&t859_TI,
};
extern TypeInfo t1846_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t1863_IOs[] = 
{
	{ &t1846_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1863_0_0_0;
extern Il2CppType t1863_1_0_0;
extern TypeInfo t4_TI;
struct t1863;
extern TypeInfo t1863_TI;
extern Il2CppGenericClass t1863_GC;
TypeInfo t1863_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t1863_MIs, t1863_PIs, t1863_FIs, NULL, &t4_TI, NULL, NULL, &t1863_TI, t1863_ITIs, t1863_VT, &EmptyCustomAttributesCache, &t1863_TI, &t1863_0_0_0, &t1863_1_0_0, t1863_IOs, &t1863_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1863), 0, -1, sizeof(t1863_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#include "t1864.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1864_TI;
#include "t1864MD.h"

extern TypeInfo t16_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1329_TI;
extern TypeInfo t17_TI;
extern MethodInfo m10171_MI;
extern MethodInfo m21_MI;
extern MethodInfo m23051_MI;


extern MethodInfo m10176_MI;
 void m10176 (t1864 * __this, MethodInfo* method){
	{
		m10171(__this, &m10171_MI);
		return;
	}
}
extern MethodInfo m10177_MI;
 int32_t m10177 (t1864 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t16_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m21_MI, Box(InitializedTypeInfo(&t16_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m10178_MI;
 bool m10178 (t1864 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t16_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t16_TI), &L_2);
		return ((((t4 *)L_3) == ((t4 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(&m23051_MI, Box(InitializedTypeInfo(&t16_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.Int32>
extern TypeInfo t1864_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10176_MI = 
{
	".ctor", (methodPointerType)&m10176, &t1864_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1864_m10177_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1864_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10177_MI = 
{
	"GetHashCode", (methodPointerType)&m10177, &t1864_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t1864_m10177_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1864_m10178_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1864_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10178_MI = 
{
	"Equals", (methodPointerType)&m10178, &t1864_TI, &t17_0_0_0, RuntimeInvoker_t17_t16_t16, t1864_m10178_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1864_MIs[] =
{
	&m10176_MI,
	&m10177_MI,
	&m10178_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10178_MI;
extern MethodInfo m10177_MI;
extern MethodInfo m10174_MI;
extern MethodInfo m10173_MI;
extern MethodInfo m10177_MI;
extern MethodInfo m10178_MI;
static MethodInfo* t1864_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10178_MI,
	&m10177_MI,
	&m10174_MI,
	&m10173_MI,
	&m10177_MI,
	&m10178_MI,
};
extern TypeInfo t1846_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t1864_IOs[] = 
{
	{ &t1846_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1864_0_0_0;
extern Il2CppType t1864_1_0_0;
extern TypeInfo t1863_TI;
struct t1864;
extern TypeInfo t1864_TI;
extern Il2CppGenericClass t1864_GC;
TypeInfo t1864_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t1864_MIs, NULL, NULL, NULL, &t1863_TI, NULL, NULL, &t1864_TI, NULL, t1864_VT, &EmptyCustomAttributesCache, &t1864_TI, &t1864_0_0_0, &t1864_1_0_0, t1864_IOs, &t1864_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1864), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1865_TI;

extern TypeInfo t16_TI;
extern TypeInfo t4_TI;
extern TypeInfo t17_TI;
extern MethodInfo m10171_MI;
extern MethodInfo m21_MI;
extern MethodInfo m19_MI;


extern MethodInfo m10179_MI;
 void m10179 (t1865 * __this, MethodInfo* method){
	{
		m10171(__this, &m10171_MI);
		return;
	}
}
extern MethodInfo m10180_MI;
 int32_t m10180 (t1865 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t16_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m21_MI, Box(InitializedTypeInfo(&t16_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m10181_MI;
 bool m10181 (t1865 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t16_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t16_TI), &L_2);
		return ((((t4 *)L_3) == ((t4 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int32_t L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t16_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t4 * >::Invoke(&m19_MI, Box(InitializedTypeInfo(&t16_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
extern TypeInfo t1865_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10179_MI = 
{
	".ctor", (methodPointerType)&m10179, &t1865_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1865_m10180_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1865_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10180_MI = 
{
	"GetHashCode", (methodPointerType)&m10180, &t1865_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t1865_m10180_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1865_m10181_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1865_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10181_MI = 
{
	"Equals", (methodPointerType)&m10181, &t1865_TI, &t17_0_0_0, RuntimeInvoker_t17_t16_t16, t1865_m10181_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1865_MIs[] =
{
	&m10179_MI,
	&m10180_MI,
	&m10181_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10181_MI;
extern MethodInfo m10180_MI;
extern MethodInfo m10174_MI;
extern MethodInfo m10173_MI;
extern MethodInfo m10180_MI;
extern MethodInfo m10181_MI;
static MethodInfo* t1865_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10181_MI,
	&m10180_MI,
	&m10174_MI,
	&m10173_MI,
	&m10180_MI,
	&m10181_MI,
};
extern TypeInfo t1846_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t1865_IOs[] = 
{
	{ &t1846_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1865_0_0_0;
extern Il2CppType t1865_1_0_0;
extern TypeInfo t1863_TI;
struct t1865;
extern TypeInfo t1865_TI;
extern Il2CppGenericClass t1865_GC;
extern TypeInfo t835_TI;
TypeInfo t1865_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1865_MIs, NULL, NULL, NULL, &t1863_TI, NULL, &t835_TI, &t1865_TI, NULL, t1865_VT, &EmptyCustomAttributesCache, &t1865_TI, &t1865_0_0_0, &t1865_1_0_0, t1865_IOs, &t1865_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1865), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5139_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t37_0_0_0;
extern Il2CppType t37_0_0_0;
static ParameterInfo t5139_m23811_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t5139_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23811_MI = 
{
	"Equals", NULL, &t5139_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t5139_m23811_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t37_0_0_0;
static ParameterInfo t5139_m23946_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t5139_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23946_MI = 
{
	"GetHashCode", NULL, &t5139_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5139_m23946_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5139_MIs[] =
{
	&m23811_MI,
	&m23946_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5139_0_0_0;
extern Il2CppType t5139_1_0_0;
struct t5139;
extern TypeInfo t5139_TI;
extern Il2CppGenericClass t5139_GC;
TypeInfo t5139_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5139_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5139_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5139_TI, &t5139_0_0_0, &t5139_1_0_0, NULL, &t5139_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#include "t1866.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1866_TI;
#include "t1866MD.h"

#include "t1867.h"
extern TypeInfo t1866_TI;
extern TypeInfo t5141_TI;
extern TypeInfo t290_TI;
extern TypeInfo t37_TI;
extern TypeInfo t17_TI;
extern TypeInfo t836_TI;
extern TypeInfo t525_TI;
extern TypeInfo t1867_TI;
extern TypeInfo t16_TI;
#include "t1867MD.h"
extern Il2CppType t5141_0_0_0;
extern Il2CppType t37_0_0_0;
extern Il2CppType t836_0_0_0;
extern MethodInfo m15_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2958_MI;
extern MethodInfo m2956_MI;
extern MethodInfo m6421_MI;
extern MethodInfo m10187_MI;
extern MethodInfo m23947_MI;
extern MethodInfo m23812_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t1866_0_0_49;
FieldInfo t1866_f0_FieldInfo = 
{
	"_default", &t1866_0_0_49, &t1866_TI, offsetof(t1866_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1866_FIs[] =
{
	&t1866_f0_FieldInfo,
	NULL
};
extern MethodInfo m10186_MI;
static PropertyInfo t1866____Default_PropertyInfo = 
{
	&t1866_TI, "Default", &m10186_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1866_PIs[] =
{
	&t1866____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1866_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10182_MI = 
{
	".ctor", (methodPointerType)&m8060_gshared, &t1866_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1866_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10183_MI = 
{
	".cctor", (methodPointerType)&m8061_gshared, &t1866_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1866_m10184_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1866_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10184_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8062_gshared, &t1866_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1866_m10184_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1866_m10185_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1866_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10185_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8063_gshared, &t1866_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1866_m10185_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t37_0_0_0;
static ParameterInfo t1866_m23947_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t1866_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23947_MI = 
{
	"GetHashCode", NULL, &t1866_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1866_m23947_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t37_0_0_0;
extern Il2CppType t37_0_0_0;
static ParameterInfo t1866_m23812_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t1866_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23812_MI = 
{
	"Equals", NULL, &t1866_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1866_m23812_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1866_TI;
extern Il2CppType t1866_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10186_MI = 
{
	"get_Default", (methodPointerType)&m8064_gshared, &t1866_TI, &t1866_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1866_MIs[] =
{
	&m10182_MI,
	&m10183_MI,
	&m10184_MI,
	&m10185_MI,
	&m23947_MI,
	&m23812_MI,
	&m10186_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m23812_MI;
extern MethodInfo m23947_MI;
extern MethodInfo m10185_MI;
extern MethodInfo m10184_MI;
static MethodInfo* t1866_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m23812_MI,
	&m23947_MI,
	&m10185_MI,
	&m10184_MI,
	NULL,
	NULL,
};
extern TypeInfo t5139_TI;
extern TypeInfo t859_TI;
static TypeInfo* t1866_ITIs[] = 
{
	&t5139_TI,
	&t859_TI,
};
extern TypeInfo t5139_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t1866_IOs[] = 
{
	{ &t5139_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppType t5141_0_0_0;
extern Il2CppType t37_0_0_0;
extern TypeInfo t1866_TI;
extern TypeInfo t1866_TI;
extern TypeInfo t1867_TI;
extern MethodInfo m10187_MI;
extern TypeInfo t37_TI;
extern MethodInfo m23947_MI;
extern MethodInfo m23812_MI;
static void* t1866_RGCTXData[9] = 
{
	(void*)&t5141_0_0_0,
	(void*)&t37_0_0_0,
	&t1866_TI,
	&t1866_TI,
	&t1867_TI,
	&m10187_MI,
	&t37_TI,
	&m23947_MI,
	&m23812_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1866_0_0_0;
extern Il2CppType t1866_1_0_0;
extern TypeInfo t4_TI;
struct t1866;
extern TypeInfo t1866_TI;
extern Il2CppGenericClass t1866_GC;
TypeInfo t1866_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t1866_MIs, t1866_PIs, t1866_FIs, NULL, &t4_TI, NULL, NULL, &t1866_TI, t1866_ITIs, t1866_VT, &EmptyCustomAttributesCache, &t1866_TI, &t1866_0_0_0, &t1866_1_0_0, t1866_IOs, &t1866_GC, NULL, NULL, NULL, t1866_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1866), 0, -1, sizeof(t1866_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5141_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t37_0_0_0;
static ParameterInfo t5141_m23948_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t5141_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23948_MI = 
{
	"Equals", NULL, &t5141_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5141_m23948_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5141_MIs[] =
{
	&m23948_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5141_0_0_0;
extern Il2CppType t5141_1_0_0;
struct t5141;
extern TypeInfo t5141_TI;
extern Il2CppGenericClass t5141_GC;
TypeInfo t5141_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5141_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5141_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5141_TI, &t5141_0_0_0, &t5141_1_0_0, NULL, &t5141_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1867_TI;

extern TypeInfo t37_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern TypeInfo t17_TI;
extern MethodInfo m10182_MI;
extern MethodInfo m21_MI;
extern MethodInfo m19_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerEventData>
extern TypeInfo t1867_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10187_MI = 
{
	".ctor", (methodPointerType)&m8095_gshared, &t1867_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t37_0_0_0;
static ParameterInfo t1867_m10188_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t1867_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10188_MI = 
{
	"GetHashCode", (methodPointerType)&m8096_gshared, &t1867_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1867_m10188_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t37_0_0_0;
extern Il2CppType t37_0_0_0;
static ParameterInfo t1867_m10189_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern TypeInfo t1867_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10189_MI = 
{
	"Equals", (methodPointerType)&m8097_gshared, &t1867_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1867_m10189_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1867_MIs[] =
{
	&m10187_MI,
	&m10188_MI,
	&m10189_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10189_MI;
extern MethodInfo m10188_MI;
extern MethodInfo m10185_MI;
extern MethodInfo m10184_MI;
extern MethodInfo m10188_MI;
extern MethodInfo m10189_MI;
static MethodInfo* t1867_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10189_MI,
	&m10188_MI,
	&m10185_MI,
	&m10184_MI,
	&m10188_MI,
	&m10189_MI,
};
extern TypeInfo t5139_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t1867_IOs[] = 
{
	{ &t5139_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppType t5141_0_0_0;
extern Il2CppType t37_0_0_0;
extern TypeInfo t1866_TI;
extern TypeInfo t1866_TI;
extern TypeInfo t1867_TI;
extern MethodInfo m10187_MI;
extern TypeInfo t37_TI;
extern MethodInfo m23947_MI;
extern MethodInfo m23812_MI;
extern MethodInfo m10182_MI;
extern TypeInfo t37_TI;
static void* t1867_RGCTXData[11] = 
{
	(void*)&t5141_0_0_0,
	(void*)&t37_0_0_0,
	&t1866_TI,
	&t1866_TI,
	&t1867_TI,
	&m10187_MI,
	&t37_TI,
	&m23947_MI,
	&m23812_MI,
	&m10182_MI,
	&t37_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1867_0_0_0;
extern Il2CppType t1867_1_0_0;
extern TypeInfo t1866_TI;
struct t1867;
extern TypeInfo t1867_TI;
extern Il2CppGenericClass t1867_GC;
extern TypeInfo t835_TI;
TypeInfo t1867_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1867_MIs, NULL, NULL, NULL, &t1866_TI, NULL, &t835_TI, &t1867_TI, NULL, t1867_VT, &EmptyCustomAttributesCache, &t1867_TI, &t1867_0_0_0, &t1867_1_0_0, t1867_IOs, &t1867_GC, NULL, NULL, NULL, t1867_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1867), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t103.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t103_TI;
#include "t103MD.h"

#include "t100.h"
#include "t1875.h"
#include "t1872.h"
#include "t1873.h"
#include "t1881.h"
#include "t1874.h"
extern TypeInfo t103_TI;
extern TypeInfo t100_TI;
extern TypeInfo t16_TI;
extern TypeInfo t15_TI;
extern TypeInfo t303_TI;
extern TypeInfo t573_TI;
extern TypeInfo t1268_TI;
extern TypeInfo t1233_TI;
extern TypeInfo t1868_TI;
extern TypeInfo t1875_TI;
extern TypeInfo t17_TI;
extern TypeInfo t1870_TI;
extern TypeInfo t1871_TI;
extern TypeInfo t1869_TI;
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1872_TI;
extern TypeInfo t328_TI;
extern TypeInfo t1873_TI;
extern TypeInfo t1881_TI;
#include "t303MD.h"
#include "t1233MD.h"
#include "t590MD.h"
#include "t1872MD.h"
#include "t1873MD.h"
#include "t1875MD.h"
#include "t1881MD.h"
extern MethodInfo m1377_MI;
extern MethodInfo m10234_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m6453_MI;
extern MethodInfo m17868_MI;
extern MethodInfo m6454_MI;
extern MethodInfo m10221_MI;
extern MethodInfo m15_MI;
extern MethodInfo m10218_MI;
extern MethodInfo m3739_MI;
extern MethodInfo m1379_MI;
extern MethodInfo m10213_MI;
extern MethodInfo m10219_MI;
extern MethodInfo m10222_MI;
extern MethodInfo m10224_MI;
extern MethodInfo m10207_MI;
extern MethodInfo m10232_MI;
extern MethodInfo m6892_MI;
extern MethodInfo m10233_MI;
extern MethodInfo m23949_MI;
extern MethodInfo m23950_MI;
extern MethodInfo m23951_MI;
extern MethodInfo m23952_MI;
extern MethodInfo m7290_MI;
extern MethodInfo m42_MI;
extern MethodInfo m10223_MI;
extern MethodInfo m10208_MI;
extern MethodInfo m10209_MI;
extern MethodInfo m10246_MI;
extern MethodInfo m3735_MI;
extern MethodInfo m17870_MI;
extern MethodInfo m10216_MI;
extern MethodInfo m10217_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m10321_MI;
extern MethodInfo m10240_MI;
extern MethodInfo m10220_MI;
extern MethodInfo m10226_MI;
extern MethodInfo m3751_MI;
extern MethodInfo m10327_MI;
extern MethodInfo m17872_MI;
extern MethodInfo m17880_MI;
extern MethodInfo m3738_MI;
struct t14;
struct t14;
 void m16862_gshared (t4 * __this, t305** p0, int32_t p1, MethodInfo* method);
#define m16862(__this, p0, p1, method) (void)m16862_gshared((t4 *)__this, (t305**)p0, (int32_t)p1, method)
#define m17868(__this, p0, p1, method) (void)m16862_gshared((t4 *)__this, (t305**)p0, (int32_t)p1, method)
extern MethodInfo m17868_MI;
struct t14;
#include "t1879.h"
struct t14;
#include "t1485.h"
 int32_t m7690_gshared (t4 * __this, t305* p0, t4 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m7690(__this, p0, p1, p2, p3, method) (int32_t)m7690_gshared((t4 *)__this, (t305*)p0, (t4 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m17870(__this, p0, p1, p2, p3, method) (int32_t)m7690_gshared((t4 *)__this, (t305*)p0, (t4 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m17870_MI;
struct t14;
struct t14;
 void m16931_gshared (t4 * __this, t305* p0, int32_t p1, int32_t p2, t4* p3, MethodInfo* method);
#define m16931(__this, p0, p1, p2, p3, method) (void)m16931_gshared((t4 *)__this, (t305*)p0, (int32_t)p1, (int32_t)p2, (t4*)p3, method)
#define m17872(__this, p0, p1, p2, p3, method) (void)m16931_gshared((t4 *)__this, (t305*)p0, (int32_t)p1, (int32_t)p2, (t4*)p3, method)
extern MethodInfo m17872_MI;
struct t14;
struct t14;
#include "t1607.h"
 void m17082_gshared (t4 * __this, t305* p0, int32_t p1, t1607 * p2, MethodInfo* method);
#define m17082(__this, p0, p1, p2, method) (void)m17082_gshared((t4 *)__this, (t305*)p0, (int32_t)p1, (t1607 *)p2, method)
#define m17880(__this, p0, p1, p2, method) (void)m17082_gshared((t4 *)__this, (t305*)p0, (int32_t)p1, (t1607 *)p2, method)
extern MethodInfo m17880_MI;


extern MethodInfo m10218_MI;
 t1875  m10218 (t103 * __this, MethodInfo* method){
	{
		t1875  L_0 = {0};
		m10240(&L_0, __this, &m10240_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t16_0_0_32849;
FieldInfo t103_f0_FieldInfo = 
{
	"DefaultCapacity", &t16_0_0_32849, &t103_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1868_0_0_1;
FieldInfo t103_f1_FieldInfo = 
{
	"_items", &t1868_0_0_1, &t103_TI, offsetof(t103, f1), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t103_f2_FieldInfo = 
{
	"_size", &t16_0_0_1, &t103_TI, offsetof(t103, f2), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t103_f3_FieldInfo = 
{
	"_version", &t16_0_0_1, &t103_TI, offsetof(t103, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1868_0_0_49;
FieldInfo t103_f4_FieldInfo = 
{
	"EmptyArray", &t1868_0_0_49, &t103_TI, offsetof(t103_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t103_FIs[] =
{
	&t103_f0_FieldInfo,
	&t103_f1_FieldInfo,
	&t103_f2_FieldInfo,
	&t103_f3_FieldInfo,
	&t103_f4_FieldInfo,
	NULL
};
static const int32_t t103_f0_DefaultValueData = 4;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t103_f0_DefaultValue = 
{
	&t103_f0_FieldInfo, { (char*)&t103_f0_DefaultValueData, &t16_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t103_FDVs[] = 
{
	&t103_f0_DefaultValue,
	NULL
};
extern MethodInfo m10200_MI;
static PropertyInfo t103____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t103_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10200_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10201_MI;
static PropertyInfo t103____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t103_TI, "System.Collections.ICollection.IsSynchronized", &m10201_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10202_MI;
static PropertyInfo t103____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t103_TI, "System.Collections.ICollection.SyncRoot", &m10202_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10203_MI;
static PropertyInfo t103____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t103_TI, "System.Collections.IList.IsFixedSize", &m10203_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10204_MI;
static PropertyInfo t103____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t103_TI, "System.Collections.IList.IsReadOnly", &m10204_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10205_MI;
extern MethodInfo m10206_MI;
static PropertyInfo t103____System_Collections_IList_Item_PropertyInfo = 
{
	&t103_TI, "System.Collections.IList.Item", &m10205_MI, &m10206_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10232_MI;
extern MethodInfo m10233_MI;
static PropertyInfo t103____Capacity_PropertyInfo = 
{
	&t103_TI, "Capacity", &m10232_MI, &m10233_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1378_MI;
static PropertyInfo t103____Count_PropertyInfo = 
{
	&t103_TI, "Count", &m1378_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1377_MI;
extern MethodInfo m10234_MI;
static PropertyInfo t103____Item_PropertyInfo = 
{
	&t103_TI, "Item", &m1377_MI, &m10234_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t103_PIs[] =
{
	&t103____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t103____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t103____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t103____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t103____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t103____System_Collections_IList_Item_PropertyInfo,
	&t103____Capacity_PropertyInfo,
	&t103____Count_PropertyInfo,
	&t103____Item_PropertyInfo,
	NULL
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m1376_MI = 
{
	".ctor", (methodPointerType)&m7892_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t103_m10190_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10190_MI = 
{
	".ctor", (methodPointerType)&m7894_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t103_m10190_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10191_MI = 
{
	".cctor", (methodPointerType)&m7896_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t1869_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10192_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m7898_gshared, &t103_TI, &t1869_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t103_m10193_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10193_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m7900_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t103_m10193_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10194_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m7902_gshared, &t103_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t103_m10195_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10195_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m7904_gshared, &t103_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t103_m10195_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t103_m10196_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10196_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m7906_gshared, &t103_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t103_m10196_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t103_m10197_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10197_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m7908_gshared, &t103_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t103_m10197_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t103_m10198_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10198_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m7910_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t103_m10198_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t103_m10199_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10199_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m7912_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t103_m10199_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10200_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m7914_gshared, &t103_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10201_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m7916_gshared, &t103_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10202_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m7918_gshared, &t103_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10203_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m7920_gshared, &t103_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10204_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m7922_gshared, &t103_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t103_m10205_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10205_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m7924_gshared, &t103_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t103_m10205_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t103_m10206_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10206_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m7926_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t103_m10206_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t103_m1379_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1379_MI = 
{
	"Add", (methodPointerType)&m7927_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t103_m1379_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t103_m10207_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10207_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m7929_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t103_m10207_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1870_0_0_0;
static ParameterInfo t103_m10208_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1870_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10208_MI = 
{
	"AddCollection", (methodPointerType)&m7931_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t103_m10208_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1871_0_0_0;
static ParameterInfo t103_m10209_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t1871_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10209_MI = 
{
	"AddEnumerable", (methodPointerType)&m7933_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t103_m10209_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1871_0_0_0;
static ParameterInfo t103_m10210_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1871_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10210_MI = 
{
	"AddRange", (methodPointerType)&m7935_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t103_m10210_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t1872_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10211_MI = 
{
	"AsReadOnly", (methodPointerType)&m7937_gshared, &t103_TI, &t1872_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10212_MI = 
{
	"Clear", (methodPointerType)&m7939_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t103_m10213_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10213_MI = 
{
	"Contains", (methodPointerType)&m7941_gshared, &t103_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t103_m10213_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1868_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t103_m10214_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1868_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10214_MI = 
{
	"CopyTo", (methodPointerType)&m7943_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t103_m10214_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1873_0_0_0;
static ParameterInfo t103_m10215_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1873_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t100_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10215_MI = 
{
	"Find", (methodPointerType)&m7945_gshared, &t103_TI, &t100_0_0_0, RuntimeInvoker_t4_t4, t103_m10215_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1873_0_0_0;
static ParameterInfo t103_m10216_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1873_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10216_MI = 
{
	"CheckMatch", (methodPointerType)&m7947_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t103_m10216_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
extern Il2CppType t1873_0_0_0;
static ParameterInfo t103_m10217_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t1873_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10217_MI = 
{
	"GetIndex", (methodPointerType)&m7949_gshared, &t103_TI, &t16_0_0_0, RuntimeInvoker_t16_t16_t16_t4, t103_m10217_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t1875_0_0_0;
extern void* RuntimeInvoker_t1875 (MethodInfo* method, void* obj, void** args);
MethodInfo m10218_MI = 
{
	"GetEnumerator", (methodPointerType)&m10218, &t103_TI, &t1875_0_0_0, RuntimeInvoker_t1875, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t103_m10219_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10219_MI = 
{
	"IndexOf", (methodPointerType)&m7952_gshared, &t103_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t103_m10219_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t103_m10220_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10220_MI = 
{
	"Shift", (methodPointerType)&m7954_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t103_m10220_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t103_m10221_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10221_MI = 
{
	"CheckIndex", (methodPointerType)&m7956_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t103_m10221_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t103_m10222_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10222_MI = 
{
	"Insert", (methodPointerType)&m7958_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t103_m10222_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1871_0_0_0;
static ParameterInfo t103_m10223_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1871_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10223_MI = 
{
	"CheckCollection", (methodPointerType)&m7960_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t103_m10223_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t103_m10224_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10224_MI = 
{
	"Remove", (methodPointerType)&m7962_gshared, &t103_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t103_m10224_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1873_0_0_0;
static ParameterInfo t103_m10225_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1873_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10225_MI = 
{
	"RemoveAll", (methodPointerType)&m7964_gshared, &t103_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t103_m10225_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t103_m10226_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10226_MI = 
{
	"RemoveAt", (methodPointerType)&m7966_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t103_m10226_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10227_MI = 
{
	"Reverse", (methodPointerType)&m7968_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10228_MI = 
{
	"Sort", (methodPointerType)&m7970_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1874_0_0_0;
static ParameterInfo t103_m10229_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t1874_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10229_MI = 
{
	"Sort", (methodPointerType)&m7972_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t103_m10229_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t1868_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10230_MI = 
{
	"ToArray", (methodPointerType)&m7974_gshared, &t103_TI, &t1868_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10231_MI = 
{
	"TrimExcess", (methodPointerType)&m7976_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10232_MI = 
{
	"get_Capacity", (methodPointerType)&m7978_gshared, &t103_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t103_m10233_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10233_MI = 
{
	"set_Capacity", (methodPointerType)&m7980_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t103_m10233_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t103_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m1378_MI = 
{
	"get_Count", (methodPointerType)&m7982_gshared, &t103_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t103_m1377_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t100_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m1377_MI = 
{
	"get_Item", (methodPointerType)&m7984_gshared, &t103_TI, &t100_0_0_0, RuntimeInvoker_t4_t16, t103_m1377_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t103_m10234_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t103_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10234_MI = 
{
	"set_Item", (methodPointerType)&m7986_gshared, &t103_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t103_m10234_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t103_MIs[] =
{
	&m1376_MI,
	&m10190_MI,
	&m10191_MI,
	&m10192_MI,
	&m10193_MI,
	&m10194_MI,
	&m10195_MI,
	&m10196_MI,
	&m10197_MI,
	&m10198_MI,
	&m10199_MI,
	&m10200_MI,
	&m10201_MI,
	&m10202_MI,
	&m10203_MI,
	&m10204_MI,
	&m10205_MI,
	&m10206_MI,
	&m1379_MI,
	&m10207_MI,
	&m10208_MI,
	&m10209_MI,
	&m10210_MI,
	&m10211_MI,
	&m10212_MI,
	&m10213_MI,
	&m10214_MI,
	&m10215_MI,
	&m10216_MI,
	&m10217_MI,
	&m10218_MI,
	&m10219_MI,
	&m10220_MI,
	&m10221_MI,
	&m10222_MI,
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
	&m1378_MI,
	&m1377_MI,
	&m10234_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10194_MI;
extern MethodInfo m1378_MI;
extern MethodInfo m10201_MI;
extern MethodInfo m10202_MI;
extern MethodInfo m10193_MI;
extern MethodInfo m10203_MI;
extern MethodInfo m10204_MI;
extern MethodInfo m10205_MI;
extern MethodInfo m10206_MI;
extern MethodInfo m10195_MI;
extern MethodInfo m10212_MI;
extern MethodInfo m10196_MI;
extern MethodInfo m10197_MI;
extern MethodInfo m10198_MI;
extern MethodInfo m10199_MI;
extern MethodInfo m10226_MI;
extern MethodInfo m1378_MI;
extern MethodInfo m10200_MI;
extern MethodInfo m1379_MI;
extern MethodInfo m10212_MI;
extern MethodInfo m10213_MI;
extern MethodInfo m10214_MI;
extern MethodInfo m10224_MI;
extern MethodInfo m10192_MI;
extern MethodInfo m10219_MI;
extern MethodInfo m10222_MI;
extern MethodInfo m10226_MI;
extern MethodInfo m1377_MI;
extern MethodInfo m10234_MI;
static MethodInfo* t103_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10194_MI,
	&m1378_MI,
	&m10201_MI,
	&m10202_MI,
	&m10193_MI,
	&m10203_MI,
	&m10204_MI,
	&m10205_MI,
	&m10206_MI,
	&m10195_MI,
	&m10212_MI,
	&m10196_MI,
	&m10197_MI,
	&m10198_MI,
	&m10199_MI,
	&m10226_MI,
	&m1378_MI,
	&m10200_MI,
	&m1379_MI,
	&m10212_MI,
	&m10213_MI,
	&m10214_MI,
	&m10224_MI,
	&m10192_MI,
	&m10219_MI,
	&m10222_MI,
	&m10226_MI,
	&m1377_MI,
	&m10234_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t1870_TI;
extern TypeInfo t1871_TI;
extern TypeInfo t1877_TI;
static TypeInfo* t103_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1014_TI,
	&t1870_TI,
	&t1871_TI,
	&t1877_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t1870_TI;
extern TypeInfo t1871_TI;
extern TypeInfo t1877_TI;
static Il2CppInterfaceOffsetPair t103_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1014_TI, 9},
	{ &t1870_TI, 20},
	{ &t1871_TI, 27},
	{ &t1877_TI, 28},
};
extern TypeInfo t103_TI;
extern TypeInfo t1868_TI;
extern MethodInfo m10218_MI;
extern TypeInfo t1875_TI;
extern TypeInfo t100_TI;
extern MethodInfo m1379_MI;
extern MethodInfo m10213_MI;
extern MethodInfo m10219_MI;
extern MethodInfo m10221_MI;
extern MethodInfo m10222_MI;
extern MethodInfo m10224_MI;
extern MethodInfo m1377_MI;
extern MethodInfo m10234_MI;
extern MethodInfo m10207_MI;
extern MethodInfo m10232_MI;
extern MethodInfo m10233_MI;
extern MethodInfo m23949_MI;
extern MethodInfo m23950_MI;
extern MethodInfo m23951_MI;
extern MethodInfo m23952_MI;
extern MethodInfo m10223_MI;
extern TypeInfo t1870_TI;
extern MethodInfo m10208_MI;
extern MethodInfo m10209_MI;
extern TypeInfo t1872_TI;
extern MethodInfo m10246_MI;
extern MethodInfo m17870_MI;
extern MethodInfo m10216_MI;
extern MethodInfo m10217_MI;
extern MethodInfo m10321_MI;
extern MethodInfo m10240_MI;
extern MethodInfo m10220_MI;
extern MethodInfo m10226_MI;
extern MethodInfo m10327_MI;
extern MethodInfo m17872_MI;
extern MethodInfo m17880_MI;
extern MethodInfo m17868_MI;
static void* t103_RGCTXData[37] = 
{
	&t103_TI,
	&t1868_TI,
	&m10218_MI,
	&t1875_TI,
	&t100_TI,
	&m1379_MI,
	&m10213_MI,
	&m10219_MI,
	&m10221_MI,
	&m10222_MI,
	&m10224_MI,
	&m1377_MI,
	&m10234_MI,
	&m10207_MI,
	&m10232_MI,
	&m10233_MI,
	&m23949_MI,
	&m23950_MI,
	&m23951_MI,
	&m23952_MI,
	&m10223_MI,
	&t1870_TI,
	&m10208_MI,
	&m10209_MI,
	&t1872_TI,
	&m10246_MI,
	&m17870_MI,
	&m10216_MI,
	&m10217_MI,
	&m10321_MI,
	&m10240_MI,
	&m10220_MI,
	&m10226_MI,
	&m10327_MI,
	&m17872_MI,
	&m17880_MI,
	&m17868_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t103_0_0_0;
extern Il2CppType t103_1_0_0;
extern TypeInfo t4_TI;
struct t103;
extern TypeInfo t103_TI;
extern Il2CppGenericClass t103_GC;
extern CustomAttributesCache t839__CustomAttributeCache;
TypeInfo t103_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t103_MIs, t103_PIs, t103_FIs, NULL, &t4_TI, NULL, NULL, &t103_TI, t103_ITIs, t103_VT, &t839__CustomAttributeCache, &t103_TI, &t103_0_0_0, &t103_1_0_0, t103_IOs, &t103_GC, NULL, t103_FDVs, NULL, t103_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t103), 0, -1, sizeof(t103_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1870_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern MethodInfo m23949_MI;
static PropertyInfo t1870____Count_PropertyInfo = 
{
	&t1870_TI, "Count", &m23949_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23953_MI;
static PropertyInfo t1870____IsReadOnly_PropertyInfo = 
{
	&t1870_TI, "IsReadOnly", &m23953_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1870_PIs[] =
{
	&t1870____Count_PropertyInfo,
	&t1870____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t1870_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23949_MI = 
{
	"get_Count", NULL, &t1870_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1870_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m23953_MI = 
{
	"get_IsReadOnly", NULL, &t1870_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1870_m23954_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1870_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23954_MI = 
{
	"Add", NULL, &t1870_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1870_m23954_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1870_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m23955_MI = 
{
	"Clear", NULL, &t1870_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1870_m23956_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1870_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23956_MI = 
{
	"Contains", NULL, &t1870_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1870_m23956_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1868_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1870_m23950_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1868_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1870_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23950_MI = 
{
	"CopyTo", NULL, &t1870_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1870_m23950_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1870_m23957_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1870_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23957_MI = 
{
	"Remove", NULL, &t1870_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1870_m23957_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1870_MIs[] =
{
	&m23949_MI,
	&m23953_MI,
	&m23954_MI,
	&m23955_MI,
	&m23956_MI,
	&m23950_MI,
	&m23957_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t1871_TI;
static TypeInfo* t1870_ITIs[] = 
{
	&t591_TI,
	&t1871_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1870_0_0_0;
extern Il2CppType t1870_1_0_0;
struct t1870;
extern TypeInfo t1870_TI;
extern Il2CppGenericClass t1870_GC;
TypeInfo t1870_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t1870_MIs, t1870_PIs, NULL, NULL, NULL, NULL, NULL, &t1870_TI, t1870_ITIs, NULL, &EmptyCustomAttributesCache, &t1870_TI, &t1870_0_0_0, &t1870_1_0_0, NULL, &t1870_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1871_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern TypeInfo t1871_TI;
extern Il2CppType t1869_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23951_MI = 
{
	"GetEnumerator", NULL, &t1871_TI, &t1869_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1871_MIs[] =
{
	&m23951_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t1871_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1871_0_0_0;
extern Il2CppType t1871_1_0_0;
struct t1871;
extern TypeInfo t1871_TI;
extern Il2CppGenericClass t1871_GC;
TypeInfo t1871_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t1871_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1871_TI, t1871_ITIs, NULL, &EmptyCustomAttributesCache, &t1871_TI, &t1871_0_0_0, &t1871_1_0_0, NULL, &t1871_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1869_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern MethodInfo m23952_MI;
static PropertyInfo t1869____Current_PropertyInfo = 
{
	&t1869_TI, "Current", &m23952_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1869_PIs[] =
{
	&t1869____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1869_TI;
extern Il2CppType t100_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23952_MI = 
{
	"get_Current", NULL, &t1869_TI, &t100_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1869_MIs[] =
{
	&m23952_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t1869_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1869_0_0_0;
extern Il2CppType t1869_1_0_0;
struct t1869;
extern TypeInfo t1869_TI;
extern Il2CppGenericClass t1869_GC;
TypeInfo t1869_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1869_MIs, t1869_PIs, NULL, NULL, NULL, NULL, NULL, &t1869_TI, t1869_ITIs, NULL, &EmptyCustomAttributesCache, &t1869_TI, &t1869_0_0_0, &t1869_1_0_0, NULL, &t1869_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1876.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1876_TI;
#include "t1876MD.h"

extern TypeInfo t1876_TI;
extern TypeInfo t100_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10239_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m17857_MI;
struct t14;
#define m17857(__this, p0, method) (t100 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m17857_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t14_0_0_1;
FieldInfo t1876_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1876_TI, offsetof(t1876, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1876_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1876_TI, offsetof(t1876, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1876_FIs[] =
{
	&t1876_f0_FieldInfo,
	&t1876_f1_FieldInfo,
	NULL
};
extern MethodInfo m10236_MI;
static PropertyInfo t1876____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1876_TI, "System.Collections.IEnumerator.Current", &m10236_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10239_MI;
static PropertyInfo t1876____Current_PropertyInfo = 
{
	&t1876_TI, "Current", &m10239_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1876_PIs[] =
{
	&t1876____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1876____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1876_m10235_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1876_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10235_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t1876_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1876_m10235_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1876_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10236_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t1876_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1876_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10237_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t1876_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1876_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10238_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t1876_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1876_TI;
extern Il2CppType t100_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10239_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t1876_TI, &t100_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1876_MIs[] =
{
	&m10235_MI,
	&m10236_MI,
	&m10237_MI,
	&m10238_MI,
	&m10239_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10236_MI;
extern MethodInfo m10238_MI;
extern MethodInfo m10237_MI;
extern MethodInfo m10239_MI;
static MethodInfo* t1876_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10236_MI,
	&m10238_MI,
	&m10237_MI,
	&m10239_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1869_TI;
static TypeInfo* t1876_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t1869_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1869_TI;
static Il2CppInterfaceOffsetPair t1876_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t1869_TI, 7},
};
extern MethodInfo m10239_MI;
extern TypeInfo t100_TI;
extern MethodInfo m17857_MI;
static void* t1876_RGCTXData[3] = 
{
	&m10239_MI,
	&t100_TI,
	&m17857_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1876_0_0_0;
extern Il2CppType t1876_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1876_TI;
extern Il2CppGenericClass t1876_GC;
extern TypeInfo t14_TI;
TypeInfo t1876_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1876_MIs, t1876_PIs, t1876_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1876_TI, t1876_ITIs, t1876_VT, &EmptyCustomAttributesCache, &t1876_TI, &t1876_0_0_0, &t1876_1_0_0, t1876_IOs, &t1876_GC, NULL, NULL, NULL, t1876_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1876)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1877_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern MethodInfo m23958_MI;
extern MethodInfo m23959_MI;
static PropertyInfo t1877____Item_PropertyInfo = 
{
	&t1877_TI, "Item", &m23958_MI, &m23959_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1877_PIs[] =
{
	&t1877____Item_PropertyInfo,
	NULL
};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1877_m23960_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23960_MI = 
{
	"IndexOf", NULL, &t1877_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1877_m23960_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t1877_m23961_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23961_MI = 
{
	"Insert", NULL, &t1877_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1877_m23961_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1877_m23962_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23962_MI = 
{
	"RemoveAt", NULL, &t1877_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1877_m23962_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1877_m23958_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t100_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23958_MI = 
{
	"get_Item", NULL, &t1877_TI, &t100_0_0_0, RuntimeInvoker_t4_t16, t1877_m23958_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t1877_m23959_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1877_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23959_MI = 
{
	"set_Item", NULL, &t1877_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1877_m23959_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1877_MIs[] =
{
	&m23960_MI,
	&m23961_MI,
	&m23962_MI,
	&m23958_MI,
	&m23959_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t1870_TI;
extern TypeInfo t1871_TI;
static TypeInfo* t1877_ITIs[] = 
{
	&t591_TI,
	&t1870_TI,
	&t1871_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1877_0_0_0;
extern Il2CppType t1877_1_0_0;
struct t1877;
extern TypeInfo t1877_TI;
extern Il2CppGenericClass t1877_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t1877_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t1877_MIs, t1877_PIs, NULL, NULL, NULL, NULL, NULL, &t1877_TI, t1877_ITIs, NULL, &t1400__CustomAttributeCache, &t1877_TI, &t1877_0_0_0, &t1877_1_0_0, NULL, &t1877_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1875_TI;

extern TypeInfo t1875_TI;
extern TypeInfo t1269_TI;
extern TypeInfo t100_TI;
extern TypeInfo t103_TI;
extern TypeInfo t290_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1286_TI;
extern MethodInfo m10243_MI;
extern MethodInfo m6886_MI;
extern MethodInfo m1401_MI;
extern MethodInfo m2975_MI;
extern MethodInfo m7091_MI;
extern MethodInfo m6887_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t103_0_0_1;
FieldInfo t1875_f0_FieldInfo = 
{
	"l", &t103_0_0_1, &t1875_TI, offsetof(t1875, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1875_f1_FieldInfo = 
{
	"next", &t16_0_0_1, &t1875_TI, offsetof(t1875, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1875_f2_FieldInfo = 
{
	"ver", &t16_0_0_1, &t1875_TI, offsetof(t1875, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t100_0_0_1;
FieldInfo t1875_f3_FieldInfo = 
{
	"current", &t100_0_0_1, &t1875_TI, offsetof(t1875, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1875_FIs[] =
{
	&t1875_f0_FieldInfo,
	&t1875_f1_FieldInfo,
	&t1875_f2_FieldInfo,
	&t1875_f3_FieldInfo,
	NULL
};
extern MethodInfo m10241_MI;
static PropertyInfo t1875____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1875_TI, "System.Collections.IEnumerator.Current", &m10241_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10245_MI;
static PropertyInfo t1875____Current_PropertyInfo = 
{
	&t1875_TI, "Current", &m10245_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1875_PIs[] =
{
	&t1875____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1875____Current_PropertyInfo,
	NULL
};
extern Il2CppType t103_0_0_0;
static ParameterInfo t1875_m10240_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t103_0_0_0},
};
extern TypeInfo t1875_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10240_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t1875_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1875_m10240_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1875_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10241_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7989_gshared, &t1875_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1875_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10242_MI = 
{
	"Dispose", (methodPointerType)&m7990_gshared, &t1875_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1875_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10243_MI = 
{
	"VerifyState", (methodPointerType)&m7991_gshared, &t1875_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1875_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10244_MI = 
{
	"MoveNext", (methodPointerType)&m7992_gshared, &t1875_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1875_TI;
extern Il2CppType t100_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10245_MI = 
{
	"get_Current", (methodPointerType)&m7993_gshared, &t1875_TI, &t100_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1875_MIs[] =
{
	&m10240_MI,
	&m10241_MI,
	&m10242_MI,
	&m10243_MI,
	&m10244_MI,
	&m10245_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10241_MI;
extern MethodInfo m10244_MI;
extern MethodInfo m10242_MI;
extern MethodInfo m10245_MI;
static MethodInfo* t1875_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10241_MI,
	&m10244_MI,
	&m10242_MI,
	&m10245_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1869_TI;
static TypeInfo* t1875_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t1869_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1869_TI;
static Il2CppInterfaceOffsetPair t1875_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t1869_TI, 7},
};
extern MethodInfo m10243_MI;
extern TypeInfo t100_TI;
extern TypeInfo t1875_TI;
static void* t1875_RGCTXData[3] = 
{
	&m10243_MI,
	&t100_TI,
	&t1875_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1875_0_0_0;
extern Il2CppType t1875_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1875_TI;
extern Il2CppGenericClass t1875_GC;
extern TypeInfo t839_TI;
TypeInfo t1875_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1875_MIs, t1875_PIs, t1875_FIs, NULL, &t95_TI, NULL, &t839_TI, &t1875_TI, t1875_ITIs, t1875_VT, &EmptyCustomAttributesCache, &t1875_TI, &t1875_0_0_0, &t1875_1_0_0, t1875_IOs, &t1875_GC, NULL, NULL, NULL, t1875_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1875)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1872_TI;

extern TypeInfo t1872_TI;
extern TypeInfo t100_TI;
extern TypeInfo t16_TI;
extern TypeInfo t335_TI;
extern TypeInfo t1877_TI;
extern TypeInfo t1870_TI;
extern TypeInfo t328_TI;
extern TypeInfo t640_TI;
extern TypeInfo t15_TI;
extern TypeInfo t14_TI;
extern TypeInfo t591_TI;
extern TypeInfo t123_TI;
extern TypeInfo t17_TI;
extern TypeInfo t1868_TI;
extern TypeInfo t1871_TI;
extern TypeInfo t1869_TI;
#include "t1878MD.h"
extern MethodInfo m10275_MI;
extern MethodInfo m1489_MI;
extern MethodInfo m23958_MI;
extern MethodInfo m23949_MI;
extern MethodInfo m15_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m7382_MI;
extern MethodInfo m7291_MI;
extern MethodInfo m10307_MI;
extern MethodInfo m23956_MI;
extern MethodInfo m23960_MI;
extern MethodInfo m23950_MI;
extern MethodInfo m23951_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t1877_0_0_1;
FieldInfo t1872_f0_FieldInfo = 
{
	"list", &t1877_0_0_1, &t1872_TI, offsetof(t1872, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1872_FIs[] =
{
	&t1872_f0_FieldInfo,
	NULL
};
extern MethodInfo m10252_MI;
extern MethodInfo m10253_MI;
static PropertyInfo t1872____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t1872_TI, "System.Collections.Generic.IList<T>.Item", &m10252_MI, &m10253_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10254_MI;
static PropertyInfo t1872____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1872_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10254_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10264_MI;
static PropertyInfo t1872____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1872_TI, "System.Collections.ICollection.IsSynchronized", &m10264_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10265_MI;
static PropertyInfo t1872____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1872_TI, "System.Collections.ICollection.SyncRoot", &m10265_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10266_MI;
static PropertyInfo t1872____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1872_TI, "System.Collections.IList.IsFixedSize", &m10266_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10267_MI;
static PropertyInfo t1872____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1872_TI, "System.Collections.IList.IsReadOnly", &m10267_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10268_MI;
extern MethodInfo m10269_MI;
static PropertyInfo t1872____System_Collections_IList_Item_PropertyInfo = 
{
	&t1872_TI, "System.Collections.IList.Item", &m10268_MI, &m10269_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10274_MI;
static PropertyInfo t1872____Count_PropertyInfo = 
{
	&t1872_TI, "Count", &m10274_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10275_MI;
static PropertyInfo t1872____Item_PropertyInfo = 
{
	&t1872_TI, "Item", &m10275_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1872_PIs[] =
{
	&t1872____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t1872____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1872____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1872____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1872____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1872____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1872____System_Collections_IList_Item_PropertyInfo,
	&t1872____Count_PropertyInfo,
	&t1872____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1877_0_0_0;
static ParameterInfo t1872_m10246_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1877_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10246_MI = 
{
	".ctor", (methodPointerType)&m7994_gshared, &t1872_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1872_m10246_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1872_m10247_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10247_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m7995_gshared, &t1872_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1872_m10247_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10248_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m7996_gshared, &t1872_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t1872_m10249_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10249_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m7997_gshared, &t1872_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1872_m10249_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1872_m10250_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10250_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m7998_gshared, &t1872_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1872_m10250_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1872_m10251_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10251_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m7999_gshared, &t1872_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1872_m10251_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1872_m10252_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t100_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10252_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8000_gshared, &t1872_TI, &t100_0_0_0, RuntimeInvoker_t4_t16, t1872_m10252_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t1872_m10253_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10253_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8001_gshared, &t1872_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1872_m10253_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1872_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10254_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8002_gshared, &t1872_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1872_m10255_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10255_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8003_gshared, &t1872_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1872_m10255_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1872_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10256_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8004_gshared, &t1872_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1872_m10257_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10257_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8005_gshared, &t1872_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1872_m10257_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10258_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8006_gshared, &t1872_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1872_m10259_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10259_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8007_gshared, &t1872_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1872_m10259_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1872_m10260_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10260_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8008_gshared, &t1872_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1872_m10260_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1872_m10261_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10261_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8009_gshared, &t1872_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1872_m10261_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1872_m10262_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10262_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8010_gshared, &t1872_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1872_m10262_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1872_m10263_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10263_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8011_gshared, &t1872_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1872_m10263_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1872_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10264_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8012_gshared, &t1872_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1872_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10265_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8013_gshared, &t1872_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1872_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10266_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8014_gshared, &t1872_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1872_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10267_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8015_gshared, &t1872_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1872_m10268_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10268_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8016_gshared, &t1872_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t1872_m10268_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1872_m10269_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10269_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8017_gshared, &t1872_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1872_m10269_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1872_m10270_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10270_MI = 
{
	"Contains", (methodPointerType)&m8018_gshared, &t1872_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1872_m10270_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1868_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1872_m10271_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1868_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10271_MI = 
{
	"CopyTo", (methodPointerType)&m8019_gshared, &t1872_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1872_m10271_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1872_TI;
extern Il2CppType t1869_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10272_MI = 
{
	"GetEnumerator", (methodPointerType)&m8020_gshared, &t1872_TI, &t1869_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1872_m10273_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10273_MI = 
{
	"IndexOf", (methodPointerType)&m8021_gshared, &t1872_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1872_m10273_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1872_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10274_MI = 
{
	"get_Count", (methodPointerType)&m8022_gshared, &t1872_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1872_m10275_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1872_TI;
extern Il2CppType t100_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10275_MI = 
{
	"get_Item", (methodPointerType)&m8023_gshared, &t1872_TI, &t100_0_0_0, RuntimeInvoker_t4_t16, t1872_m10275_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1872_MIs[] =
{
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
	&m10267_MI,
	&m10268_MI,
	&m10269_MI,
	&m10270_MI,
	&m10271_MI,
	&m10272_MI,
	&m10273_MI,
	&m10274_MI,
	&m10275_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10256_MI;
extern MethodInfo m10274_MI;
extern MethodInfo m10264_MI;
extern MethodInfo m10265_MI;
extern MethodInfo m10255_MI;
extern MethodInfo m10266_MI;
extern MethodInfo m10267_MI;
extern MethodInfo m10268_MI;
extern MethodInfo m10269_MI;
extern MethodInfo m10257_MI;
extern MethodInfo m10258_MI;
extern MethodInfo m10259_MI;
extern MethodInfo m10260_MI;
extern MethodInfo m10261_MI;
extern MethodInfo m10262_MI;
extern MethodInfo m10263_MI;
extern MethodInfo m10274_MI;
extern MethodInfo m10254_MI;
extern MethodInfo m10247_MI;
extern MethodInfo m10248_MI;
extern MethodInfo m10270_MI;
extern MethodInfo m10271_MI;
extern MethodInfo m10250_MI;
extern MethodInfo m10273_MI;
extern MethodInfo m10249_MI;
extern MethodInfo m10251_MI;
extern MethodInfo m10252_MI;
extern MethodInfo m10253_MI;
extern MethodInfo m10272_MI;
extern MethodInfo m10275_MI;
static MethodInfo* t1872_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10256_MI,
	&m10274_MI,
	&m10264_MI,
	&m10265_MI,
	&m10255_MI,
	&m10266_MI,
	&m10267_MI,
	&m10268_MI,
	&m10269_MI,
	&m10257_MI,
	&m10258_MI,
	&m10259_MI,
	&m10260_MI,
	&m10261_MI,
	&m10262_MI,
	&m10263_MI,
	&m10274_MI,
	&m10254_MI,
	&m10247_MI,
	&m10248_MI,
	&m10270_MI,
	&m10271_MI,
	&m10250_MI,
	&m10273_MI,
	&m10249_MI,
	&m10251_MI,
	&m10252_MI,
	&m10253_MI,
	&m10272_MI,
	&m10275_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t1870_TI;
extern TypeInfo t1877_TI;
extern TypeInfo t1871_TI;
static TypeInfo* t1872_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1014_TI,
	&t1870_TI,
	&t1877_TI,
	&t1871_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t1870_TI;
extern TypeInfo t1877_TI;
extern TypeInfo t1871_TI;
static Il2CppInterfaceOffsetPair t1872_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1014_TI, 9},
	{ &t1870_TI, 20},
	{ &t1877_TI, 27},
	{ &t1871_TI, 32},
};
extern MethodInfo m10275_MI;
extern MethodInfo m10307_MI;
extern TypeInfo t100_TI;
extern MethodInfo m23956_MI;
extern MethodInfo m23960_MI;
extern MethodInfo m23958_MI;
extern MethodInfo m23950_MI;
extern MethodInfo m23951_MI;
extern MethodInfo m23949_MI;
static void* t1872_RGCTXData[9] = 
{
	&m10275_MI,
	&m10307_MI,
	&t100_TI,
	&m23956_MI,
	&m23960_MI,
	&m23958_MI,
	&m23950_MI,
	&m23951_MI,
	&m23949_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1872_0_0_0;
extern Il2CppType t1872_1_0_0;
extern TypeInfo t4_TI;
struct t1872;
extern TypeInfo t1872_TI;
extern Il2CppGenericClass t1872_GC;
extern CustomAttributesCache t841__CustomAttributeCache;
TypeInfo t1872_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t1872_MIs, t1872_PIs, t1872_FIs, NULL, &t4_TI, NULL, NULL, &t1872_TI, t1872_ITIs, t1872_VT, &t841__CustomAttributeCache, &t1872_TI, &t1872_0_0_0, &t1872_1_0_0, t1872_IOs, &t1872_GC, NULL, NULL, NULL, t1872_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1872), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t1878.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1878_TI;

extern TypeInfo t1878_TI;
extern TypeInfo t1870_TI;
extern TypeInfo t17_TI;
extern TypeInfo t1877_TI;
extern TypeInfo t100_TI;
extern TypeInfo t16_TI;
extern TypeInfo t15_TI;
extern TypeInfo t103_TI;
extern TypeInfo t640_TI;
extern TypeInfo t4_TI;
extern TypeInfo t14_TI;
extern TypeInfo t1871_TI;
extern TypeInfo t1869_TI;
extern TypeInfo t1868_TI;
extern TypeInfo t290_TI;
extern TypeInfo t303_TI;
extern TypeInfo t335_TI;
extern TypeInfo t1014_TI;
extern Il2CppType t100_0_0_0;
extern MethodInfo m23953_MI;
extern MethodInfo m10310_MI;
extern MethodInfo m10311_MI;
extern MethodInfo m23958_MI;
extern MethodInfo m10308_MI;
extern MethodInfo m10306_MI;
extern MethodInfo m23949_MI;
extern MethodInfo m15_MI;
extern MethodInfo m1376_MI;
extern MethodInfo m7381_MI;
extern MethodInfo m7382_MI;
extern MethodInfo m23951_MI;
extern MethodInfo m10299_MI;
extern MethodInfo m10307_MI;
extern MethodInfo m23956_MI;
extern MethodInfo m23960_MI;
extern MethodInfo m10309_MI;
extern MethodInfo m10297_MI;
extern MethodInfo m10302_MI;
extern MethodInfo m10293_MI;
extern MethodInfo m23955_MI;
extern MethodInfo m23950_MI;
extern MethodInfo m23961_MI;
extern MethodInfo m23962_MI;
extern MethodInfo m23959_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m3794_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m1489_MI;
extern MethodInfo m7380_MI;
extern MethodInfo m7383_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t1877_0_0_1;
FieldInfo t1878_f0_FieldInfo = 
{
	"list", &t1877_0_0_1, &t1878_TI, offsetof(t1878, f0), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t1878_f1_FieldInfo = 
{
	"syncRoot", &t4_0_0_1, &t1878_TI, offsetof(t1878, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1878_FIs[] =
{
	&t1878_f0_FieldInfo,
	&t1878_f1_FieldInfo,
	NULL
};
extern MethodInfo m10277_MI;
static PropertyInfo t1878____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1878_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10277_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10285_MI;
static PropertyInfo t1878____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1878_TI, "System.Collections.ICollection.IsSynchronized", &m10285_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10286_MI;
static PropertyInfo t1878____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1878_TI, "System.Collections.ICollection.SyncRoot", &m10286_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10287_MI;
static PropertyInfo t1878____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1878_TI, "System.Collections.IList.IsFixedSize", &m10287_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10288_MI;
static PropertyInfo t1878____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1878_TI, "System.Collections.IList.IsReadOnly", &m10288_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10289_MI;
extern MethodInfo m10290_MI;
static PropertyInfo t1878____System_Collections_IList_Item_PropertyInfo = 
{
	&t1878_TI, "System.Collections.IList.Item", &m10289_MI, &m10290_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10303_MI;
static PropertyInfo t1878____Count_PropertyInfo = 
{
	&t1878_TI, "Count", &m10303_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10304_MI;
extern MethodInfo m10305_MI;
static PropertyInfo t1878____Item_PropertyInfo = 
{
	&t1878_TI, "Item", &m10304_MI, &m10305_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1878_PIs[] =
{
	&t1878____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1878____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1878____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1878____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1878____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1878____System_Collections_IList_Item_PropertyInfo,
	&t1878____Count_PropertyInfo,
	&t1878____Item_PropertyInfo,
	NULL
};
extern TypeInfo t1878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10276_MI = 
{
	".ctor", (methodPointerType)&m8024_gshared, &t1878_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1878_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10277_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8025_gshared, &t1878_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1878_m10278_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10278_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8026_gshared, &t1878_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1878_m10278_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1878_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10279_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8027_gshared, &t1878_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1878_m10280_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10280_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8028_gshared, &t1878_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1878_m10280_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1878_m10281_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10281_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8029_gshared, &t1878_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1878_m10281_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1878_m10282_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10282_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8030_gshared, &t1878_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1878_m10282_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1878_m10283_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10283_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8031_gshared, &t1878_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1878_m10283_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1878_m10284_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10284_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8032_gshared, &t1878_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1878_m10284_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1878_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10285_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8033_gshared, &t1878_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1878_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10286_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8034_gshared, &t1878_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1878_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10287_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8035_gshared, &t1878_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1878_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10288_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8036_gshared, &t1878_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1878_m10289_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10289_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8037_gshared, &t1878_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t1878_m10289_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1878_m10290_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10290_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8038_gshared, &t1878_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1878_m10290_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1878_m10291_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10291_MI = 
{
	"Add", (methodPointerType)&m8039_gshared, &t1878_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1878_m10291_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10292_MI = 
{
	"Clear", (methodPointerType)&m8040_gshared, &t1878_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10293_MI = 
{
	"ClearItems", (methodPointerType)&m8041_gshared, &t1878_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1878_m10294_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10294_MI = 
{
	"Contains", (methodPointerType)&m8042_gshared, &t1878_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1878_m10294_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1868_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1878_m10295_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1868_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10295_MI = 
{
	"CopyTo", (methodPointerType)&m8043_gshared, &t1878_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1878_m10295_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1878_TI;
extern Il2CppType t1869_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10296_MI = 
{
	"GetEnumerator", (methodPointerType)&m8044_gshared, &t1878_TI, &t1869_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1878_m10297_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10297_MI = 
{
	"IndexOf", (methodPointerType)&m8045_gshared, &t1878_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1878_m10297_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t1878_m10298_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10298_MI = 
{
	"Insert", (methodPointerType)&m8046_gshared, &t1878_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1878_m10298_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t1878_m10299_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10299_MI = 
{
	"InsertItem", (methodPointerType)&m8047_gshared, &t1878_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1878_m10299_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1878_m10300_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10300_MI = 
{
	"Remove", (methodPointerType)&m8048_gshared, &t1878_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1878_m10300_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1878_m10301_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10301_MI = 
{
	"RemoveAt", (methodPointerType)&m8049_gshared, &t1878_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1878_m10301_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1878_m10302_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10302_MI = 
{
	"RemoveItem", (methodPointerType)&m8050_gshared, &t1878_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1878_m10302_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1878_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10303_MI = 
{
	"get_Count", (methodPointerType)&m8051_gshared, &t1878_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1878_m10304_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t100_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10304_MI = 
{
	"get_Item", (methodPointerType)&m8052_gshared, &t1878_TI, &t100_0_0_0, RuntimeInvoker_t4_t16, t1878_m10304_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t1878_m10305_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10305_MI = 
{
	"set_Item", (methodPointerType)&m8053_gshared, &t1878_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1878_m10305_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t1878_m10306_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10306_MI = 
{
	"SetItem", (methodPointerType)&m8054_gshared, &t1878_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1878_m10306_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1878_m10307_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10307_MI = 
{
	"IsValidItem", (methodPointerType)&m8055_gshared, &t1878_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1878_m10307_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1878_m10308_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t100_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10308_MI = 
{
	"ConvertItem", (methodPointerType)&m8056_gshared, &t1878_TI, &t100_0_0_0, RuntimeInvoker_t4_t4, t1878_m10308_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1877_0_0_0;
static ParameterInfo t1878_m10309_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1877_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10309_MI = 
{
	"CheckWritable", (methodPointerType)&m8057_gshared, &t1878_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1878_m10309_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1877_0_0_0;
static ParameterInfo t1878_m10310_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1877_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10310_MI = 
{
	"IsSynchronized", (methodPointerType)&m8058_gshared, &t1878_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1878_m10310_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1877_0_0_0;
static ParameterInfo t1878_m10311_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1877_0_0_0},
};
extern TypeInfo t1878_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10311_MI = 
{
	"IsFixedSize", (methodPointerType)&m8059_gshared, &t1878_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1878_m10311_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1878_MIs[] =
{
	&m10276_MI,
	&m10277_MI,
	&m10278_MI,
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
	&m10309_MI,
	&m10310_MI,
	&m10311_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10279_MI;
extern MethodInfo m10303_MI;
extern MethodInfo m10285_MI;
extern MethodInfo m10286_MI;
extern MethodInfo m10278_MI;
extern MethodInfo m10287_MI;
extern MethodInfo m10288_MI;
extern MethodInfo m10289_MI;
extern MethodInfo m10290_MI;
extern MethodInfo m10280_MI;
extern MethodInfo m10292_MI;
extern MethodInfo m10281_MI;
extern MethodInfo m10282_MI;
extern MethodInfo m10283_MI;
extern MethodInfo m10284_MI;
extern MethodInfo m10301_MI;
extern MethodInfo m10303_MI;
extern MethodInfo m10277_MI;
extern MethodInfo m10291_MI;
extern MethodInfo m10292_MI;
extern MethodInfo m10294_MI;
extern MethodInfo m10295_MI;
extern MethodInfo m10300_MI;
extern MethodInfo m10297_MI;
extern MethodInfo m10298_MI;
extern MethodInfo m10301_MI;
extern MethodInfo m10304_MI;
extern MethodInfo m10305_MI;
extern MethodInfo m10296_MI;
extern MethodInfo m10293_MI;
extern MethodInfo m10299_MI;
extern MethodInfo m10302_MI;
extern MethodInfo m10306_MI;
static MethodInfo* t1878_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10279_MI,
	&m10303_MI,
	&m10285_MI,
	&m10286_MI,
	&m10278_MI,
	&m10287_MI,
	&m10288_MI,
	&m10289_MI,
	&m10290_MI,
	&m10280_MI,
	&m10292_MI,
	&m10281_MI,
	&m10282_MI,
	&m10283_MI,
	&m10284_MI,
	&m10301_MI,
	&m10303_MI,
	&m10277_MI,
	&m10291_MI,
	&m10292_MI,
	&m10294_MI,
	&m10295_MI,
	&m10300_MI,
	&m10297_MI,
	&m10298_MI,
	&m10301_MI,
	&m10304_MI,
	&m10305_MI,
	&m10296_MI,
	&m10293_MI,
	&m10299_MI,
	&m10302_MI,
	&m10306_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t1870_TI;
extern TypeInfo t1877_TI;
extern TypeInfo t1871_TI;
static TypeInfo* t1878_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1014_TI,
	&t1870_TI,
	&t1877_TI,
	&t1871_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t1870_TI;
extern TypeInfo t1877_TI;
extern TypeInfo t1871_TI;
static Il2CppInterfaceOffsetPair t1878_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1014_TI, 9},
	{ &t1870_TI, 20},
	{ &t1877_TI, 27},
	{ &t1871_TI, 32},
};
extern TypeInfo t103_TI;
extern MethodInfo m1376_MI;
extern MethodInfo m23953_MI;
extern MethodInfo m23951_MI;
extern MethodInfo m23949_MI;
extern MethodInfo m10308_MI;
extern MethodInfo m10299_MI;
extern MethodInfo m10307_MI;
extern TypeInfo t100_TI;
extern MethodInfo m23956_MI;
extern MethodInfo m23960_MI;
extern MethodInfo m10309_MI;
extern MethodInfo m10297_MI;
extern MethodInfo m10302_MI;
extern MethodInfo m10310_MI;
extern MethodInfo m10311_MI;
extern MethodInfo m23958_MI;
extern MethodInfo m10306_MI;
extern MethodInfo m10293_MI;
extern MethodInfo m23955_MI;
extern MethodInfo m23950_MI;
extern MethodInfo m23961_MI;
extern MethodInfo m23962_MI;
extern MethodInfo m23959_MI;
extern Il2CppType t100_0_0_0;
static void* t1878_RGCTXData[25] = 
{
	&t103_TI,
	&m1376_MI,
	&m23953_MI,
	&m23951_MI,
	&m23949_MI,
	&m10308_MI,
	&m10299_MI,
	&m10307_MI,
	&t100_TI,
	&m23956_MI,
	&m23960_MI,
	&m10309_MI,
	&m10297_MI,
	&m10302_MI,
	&m10310_MI,
	&m10311_MI,
	&m23958_MI,
	&m10306_MI,
	&m10293_MI,
	&m23955_MI,
	&m23950_MI,
	&m23961_MI,
	&m23962_MI,
	&m23959_MI,
	(void*)&t100_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1878_0_0_0;
extern Il2CppType t1878_1_0_0;
extern TypeInfo t4_TI;
struct t1878;
extern TypeInfo t1878_TI;
extern Il2CppGenericClass t1878_GC;
extern CustomAttributesCache t840__CustomAttributeCache;
TypeInfo t1878_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t1878_MIs, t1878_PIs, t1878_FIs, NULL, &t4_TI, NULL, NULL, &t1878_TI, t1878_ITIs, t1878_VT, &t840__CustomAttributeCache, &t1878_TI, &t1878_0_0_0, &t1878_1_0_0, t1878_IOs, &t1878_GC, NULL, NULL, NULL, t1878_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1878), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1879_TI;
#include "t1879MD.h"

#include "t1880.h"
extern TypeInfo t1879_TI;
extern TypeInfo t5142_TI;
extern TypeInfo t290_TI;
extern TypeInfo t100_TI;
extern TypeInfo t17_TI;
extern TypeInfo t836_TI;
extern TypeInfo t525_TI;
extern TypeInfo t1880_TI;
extern TypeInfo t16_TI;
#include "t1880MD.h"
extern Il2CppType t5142_0_0_0;
extern Il2CppType t100_0_0_0;
extern Il2CppType t836_0_0_0;
extern MethodInfo m15_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2958_MI;
extern MethodInfo m2956_MI;
extern MethodInfo m6421_MI;
extern MethodInfo m10317_MI;
extern MethodInfo m23963_MI;
extern MethodInfo m17869_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t1879_0_0_49;
FieldInfo t1879_f0_FieldInfo = 
{
	"_default", &t1879_0_0_49, &t1879_TI, offsetof(t1879_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1879_FIs[] =
{
	&t1879_f0_FieldInfo,
	NULL
};
extern MethodInfo m10316_MI;
static PropertyInfo t1879____Default_PropertyInfo = 
{
	&t1879_TI, "Default", &m10316_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1879_PIs[] =
{
	&t1879____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1879_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10312_MI = 
{
	".ctor", (methodPointerType)&m8060_gshared, &t1879_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1879_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10313_MI = 
{
	".cctor", (methodPointerType)&m8061_gshared, &t1879_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1879_m10314_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1879_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10314_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8062_gshared, &t1879_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1879_m10314_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1879_m10315_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1879_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10315_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8063_gshared, &t1879_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1879_m10315_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1879_m23963_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1879_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23963_MI = 
{
	"GetHashCode", NULL, &t1879_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1879_m23963_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t1879_m17869_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1879_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m17869_MI = 
{
	"Equals", NULL, &t1879_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1879_m17869_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1879_TI;
extern Il2CppType t1879_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10316_MI = 
{
	"get_Default", (methodPointerType)&m8064_gshared, &t1879_TI, &t1879_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1879_MIs[] =
{
	&m10312_MI,
	&m10313_MI,
	&m10314_MI,
	&m10315_MI,
	&m23963_MI,
	&m17869_MI,
	&m10316_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m17869_MI;
extern MethodInfo m23963_MI;
extern MethodInfo m10315_MI;
extern MethodInfo m10314_MI;
static MethodInfo* t1879_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m17869_MI,
	&m23963_MI,
	&m10315_MI,
	&m10314_MI,
	NULL,
	NULL,
};
extern TypeInfo t5143_TI;
extern TypeInfo t859_TI;
static TypeInfo* t1879_ITIs[] = 
{
	&t5143_TI,
	&t859_TI,
};
extern TypeInfo t5143_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t1879_IOs[] = 
{
	{ &t5143_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppType t5142_0_0_0;
extern Il2CppType t100_0_0_0;
extern TypeInfo t1879_TI;
extern TypeInfo t1879_TI;
extern TypeInfo t1880_TI;
extern MethodInfo m10317_MI;
extern TypeInfo t100_TI;
extern MethodInfo m23963_MI;
extern MethodInfo m17869_MI;
static void* t1879_RGCTXData[9] = 
{
	(void*)&t5142_0_0_0,
	(void*)&t100_0_0_0,
	&t1879_TI,
	&t1879_TI,
	&t1880_TI,
	&m10317_MI,
	&t100_TI,
	&m23963_MI,
	&m17869_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1879_0_0_0;
extern Il2CppType t1879_1_0_0;
extern TypeInfo t4_TI;
struct t1879;
extern TypeInfo t1879_TI;
extern Il2CppGenericClass t1879_GC;
TypeInfo t1879_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t1879_MIs, t1879_PIs, t1879_FIs, NULL, &t4_TI, NULL, NULL, &t1879_TI, t1879_ITIs, t1879_VT, &EmptyCustomAttributesCache, &t1879_TI, &t1879_0_0_0, &t1879_1_0_0, t1879_IOs, &t1879_GC, NULL, NULL, NULL, t1879_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1879), 0, -1, sizeof(t1879_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5143_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t100_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t5143_m23964_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t5143_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23964_MI = 
{
	"Equals", NULL, &t5143_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t5143_m23964_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t5143_m23965_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t5143_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23965_MI = 
{
	"GetHashCode", NULL, &t5143_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t5143_m23965_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5143_MIs[] =
{
	&m23964_MI,
	&m23965_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5143_0_0_0;
extern Il2CppType t5143_1_0_0;
struct t5143;
extern TypeInfo t5143_TI;
extern Il2CppGenericClass t5143_GC;
TypeInfo t5143_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5143_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5143_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5143_TI, &t5143_0_0_0, &t5143_1_0_0, NULL, &t5143_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5142_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t100_0_0_0;
static ParameterInfo t5142_m23966_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t5142_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23966_MI = 
{
	"Equals", NULL, &t5142_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5142_m23966_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5142_MIs[] =
{
	&m23966_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5142_0_0_0;
extern Il2CppType t5142_1_0_0;
struct t5142;
extern TypeInfo t5142_TI;
extern Il2CppGenericClass t5142_GC;
TypeInfo t5142_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5142_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5142_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5142_TI, &t5142_0_0_0, &t5142_1_0_0, NULL, &t5142_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1880_TI;

extern TypeInfo t100_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern TypeInfo t17_TI;
extern MethodInfo m10312_MI;
extern MethodInfo m21_MI;
extern MethodInfo m19_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern TypeInfo t1880_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10317_MI = 
{
	".ctor", (methodPointerType)&m8095_gshared, &t1880_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1880_m10318_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1880_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10318_MI = 
{
	"GetHashCode", (methodPointerType)&m8096_gshared, &t1880_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1880_m10318_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t1880_m10319_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1880_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10319_MI = 
{
	"Equals", (methodPointerType)&m8097_gshared, &t1880_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1880_m10319_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1880_MIs[] =
{
	&m10317_MI,
	&m10318_MI,
	&m10319_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10319_MI;
extern MethodInfo m10318_MI;
extern MethodInfo m10315_MI;
extern MethodInfo m10314_MI;
extern MethodInfo m10318_MI;
extern MethodInfo m10319_MI;
static MethodInfo* t1880_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10319_MI,
	&m10318_MI,
	&m10315_MI,
	&m10314_MI,
	&m10318_MI,
	&m10319_MI,
};
extern TypeInfo t5143_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t1880_IOs[] = 
{
	{ &t5143_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppType t5142_0_0_0;
extern Il2CppType t100_0_0_0;
extern TypeInfo t1879_TI;
extern TypeInfo t1879_TI;
extern TypeInfo t1880_TI;
extern MethodInfo m10317_MI;
extern TypeInfo t100_TI;
extern MethodInfo m23963_MI;
extern MethodInfo m17869_MI;
extern MethodInfo m10312_MI;
extern TypeInfo t100_TI;
static void* t1880_RGCTXData[11] = 
{
	(void*)&t5142_0_0_0,
	(void*)&t100_0_0_0,
	&t1879_TI,
	&t1879_TI,
	&t1880_TI,
	&m10317_MI,
	&t100_TI,
	&m23963_MI,
	&m17869_MI,
	&m10312_MI,
	&t100_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1880_0_0_0;
extern Il2CppType t1880_1_0_0;
extern TypeInfo t1879_TI;
struct t1880;
extern TypeInfo t1880_TI;
extern Il2CppGenericClass t1880_GC;
extern TypeInfo t835_TI;
TypeInfo t1880_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1880_MIs, NULL, NULL, NULL, &t1879_TI, NULL, &t835_TI, &t1880_TI, NULL, t1880_VT, &EmptyCustomAttributesCache, &t1880_TI, &t1880_0_0_0, &t1880_1_0_0, t1880_IOs, &t1880_GC, NULL, NULL, NULL, t1880_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1880), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1873_TI;



// Metadata Definition System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1873_m10320_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1873_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10320_MI = 
{
	".ctor", (methodPointerType)&m8098_gshared, &t1873_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1873_m10320_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1873_m10321_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1873_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10321_MI = 
{
	"Invoke", (methodPointerType)&m8099_gshared, &t1873_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1873_m10321_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1873_m10322_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1873_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10322_MI = 
{
	"BeginInvoke", (methodPointerType)&m8100_gshared, &t1873_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t1873_m10322_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1873_m10323_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1873_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10323_MI = 
{
	"EndInvoke", (methodPointerType)&m8101_gshared, &t1873_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1873_m10323_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1873_MIs[] =
{
	&m10320_MI,
	&m10321_MI,
	&m10322_MI,
	&m10323_MI,
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
extern MethodInfo m10321_MI;
extern MethodInfo m10322_MI;
extern MethodInfo m10323_MI;
static MethodInfo* t1873_VT[] =
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
	&m10321_MI,
	&m10322_MI,
	&m10323_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1873_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1873_0_0_0;
extern Il2CppType t1873_1_0_0;
extern TypeInfo t189_TI;
struct t1873;
extern TypeInfo t1873_TI;
extern Il2CppGenericClass t1873_GC;
TypeInfo t1873_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t1873_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t1873_TI, NULL, t1873_VT, &EmptyCustomAttributesCache, &t1873_TI, &t1873_0_0_0, &t1873_1_0_0, t1873_IOs, &t1873_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1873), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1881_TI;

#include "t824.h"
#include "t1882.h"
extern TypeInfo t1881_TI;
extern TypeInfo t3355_TI;
extern TypeInfo t290_TI;
extern TypeInfo t100_TI;
extern TypeInfo t17_TI;
extern TypeInfo t824_TI;
extern TypeInfo t525_TI;
extern TypeInfo t1882_TI;
extern TypeInfo t16_TI;
extern TypeInfo t303_TI;
#include "t1882MD.h"
extern Il2CppType t3355_0_0_0;
extern Il2CppType t100_0_0_0;
extern Il2CppType t824_0_0_0;
extern MethodInfo m15_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2958_MI;
extern MethodInfo m2956_MI;
extern MethodInfo m6421_MI;
extern MethodInfo m10328_MI;
extern MethodInfo m23967_MI;
extern MethodInfo m6443_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t1881_0_0_49;
FieldInfo t1881_f0_FieldInfo = 
{
	"_default", &t1881_0_0_49, &t1881_TI, offsetof(t1881_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1881_FIs[] =
{
	&t1881_f0_FieldInfo,
	NULL
};
extern MethodInfo m10327_MI;
static PropertyInfo t1881____Default_PropertyInfo = 
{
	&t1881_TI, "Default", &m10327_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1881_PIs[] =
{
	&t1881____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1881_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10324_MI = 
{
	".ctor", (methodPointerType)&m8102_gshared, &t1881_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1881_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10325_MI = 
{
	".cctor", (methodPointerType)&m8103_gshared, &t1881_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1881_m10326_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1881_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10326_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8104_gshared, &t1881_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t1881_m10326_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t1881_m23967_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1881_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23967_MI = 
{
	"Compare", NULL, &t1881_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t1881_m23967_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1881_TI;
extern Il2CppType t1881_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10327_MI = 
{
	"get_Default", (methodPointerType)&m8105_gshared, &t1881_TI, &t1881_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1881_MIs[] =
{
	&m10324_MI,
	&m10325_MI,
	&m10326_MI,
	&m23967_MI,
	&m10327_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m23967_MI;
extern MethodInfo m10326_MI;
static MethodInfo* t1881_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m23967_MI,
	&m10326_MI,
	NULL,
};
extern TypeInfo t3354_TI;
extern TypeInfo t716_TI;
static TypeInfo* t1881_ITIs[] = 
{
	&t3354_TI,
	&t716_TI,
};
extern TypeInfo t3354_TI;
extern TypeInfo t716_TI;
static Il2CppInterfaceOffsetPair t1881_IOs[] = 
{
	{ &t3354_TI, 4},
	{ &t716_TI, 5},
};
extern Il2CppType t3355_0_0_0;
extern Il2CppType t100_0_0_0;
extern TypeInfo t1881_TI;
extern TypeInfo t1881_TI;
extern TypeInfo t1882_TI;
extern MethodInfo m10328_MI;
extern TypeInfo t100_TI;
extern MethodInfo m23967_MI;
static void* t1881_RGCTXData[8] = 
{
	(void*)&t3355_0_0_0,
	(void*)&t100_0_0_0,
	&t1881_TI,
	&t1881_TI,
	&t1882_TI,
	&m10328_MI,
	&t100_TI,
	&m23967_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1881_0_0_0;
extern Il2CppType t1881_1_0_0;
extern TypeInfo t4_TI;
struct t1881;
extern TypeInfo t1881_TI;
extern Il2CppGenericClass t1881_GC;
TypeInfo t1881_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t1881_MIs, t1881_PIs, t1881_FIs, NULL, &t4_TI, NULL, NULL, &t1881_TI, t1881_ITIs, t1881_VT, &EmptyCustomAttributesCache, &t1881_TI, &t1881_0_0_0, &t1881_1_0_0, t1881_IOs, &t1881_GC, NULL, NULL, NULL, t1881_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1881), 0, -1, sizeof(t1881_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3354_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t100_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t3354_m17877_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t3354_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m17877_MI = 
{
	"Compare", NULL, &t3354_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t3354_m17877_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3354_MIs[] =
{
	&m17877_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3354_0_0_0;
extern Il2CppType t3354_1_0_0;
struct t3354;
extern TypeInfo t3354_TI;
extern Il2CppGenericClass t3354_GC;
TypeInfo t3354_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3354_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3354_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3354_TI, &t3354_0_0_0, &t3354_1_0_0, NULL, &t3354_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3355_TI;



// Metadata Definition System.IComparable`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t100_0_0_0;
static ParameterInfo t3355_m17878_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t3355_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m17878_MI = 
{
	"CompareTo", NULL, &t3355_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t3355_m17878_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3355_MIs[] =
{
	&m17878_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3355_0_0_0;
extern Il2CppType t3355_1_0_0;
struct t3355;
extern TypeInfo t3355_TI;
extern Il2CppGenericClass t3355_GC;
TypeInfo t3355_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3355_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3355_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3355_TI, &t3355_0_0_0, &t3355_1_0_0, NULL, &t3355_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1882_TI;

extern TypeInfo t100_TI;
extern TypeInfo t3355_TI;
extern TypeInfo t16_TI;
extern TypeInfo t285_TI;
extern TypeInfo t4_TI;
extern TypeInfo t303_TI;
extern MethodInfo m10324_MI;
extern MethodInfo m17878_MI;
extern MethodInfo m7286_MI;
extern MethodInfo m1917_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern TypeInfo t1882_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10328_MI = 
{
	".ctor", (methodPointerType)&m8106_gshared, &t1882_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t1882_m10329_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1882_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10329_MI = 
{
	"Compare", (methodPointerType)&m8107_gshared, &t1882_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t1882_m10329_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1882_MIs[] =
{
	&m10328_MI,
	&m10329_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10329_MI;
extern MethodInfo m10326_MI;
extern MethodInfo m10329_MI;
static MethodInfo* t1882_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10329_MI,
	&m10326_MI,
	&m10329_MI,
};
extern TypeInfo t3354_TI;
extern TypeInfo t716_TI;
static Il2CppInterfaceOffsetPair t1882_IOs[] = 
{
	{ &t3354_TI, 4},
	{ &t716_TI, 5},
};
extern Il2CppType t3355_0_0_0;
extern Il2CppType t100_0_0_0;
extern TypeInfo t1881_TI;
extern TypeInfo t1881_TI;
extern TypeInfo t1882_TI;
extern MethodInfo m10328_MI;
extern TypeInfo t100_TI;
extern MethodInfo m23967_MI;
extern MethodInfo m10324_MI;
extern TypeInfo t100_TI;
extern TypeInfo t3355_TI;
extern MethodInfo m17878_MI;
static void* t1882_RGCTXData[12] = 
{
	(void*)&t3355_0_0_0,
	(void*)&t100_0_0_0,
	&t1881_TI,
	&t1881_TI,
	&t1882_TI,
	&m10328_MI,
	&t100_TI,
	&m23967_MI,
	&m10324_MI,
	&t100_TI,
	&t3355_TI,
	&m17878_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1882_0_0_0;
extern Il2CppType t1882_1_0_0;
extern TypeInfo t1881_TI;
struct t1882;
extern TypeInfo t1882_TI;
extern Il2CppGenericClass t1882_GC;
extern TypeInfo t823_TI;
TypeInfo t1882_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1882_MIs, NULL, NULL, NULL, &t1881_TI, NULL, &t823_TI, &t1882_TI, NULL, t1882_VT, &EmptyCustomAttributesCache, &t1882_TI, &t1882_0_0_0, &t1882_1_0_0, t1882_IOs, &t1882_GC, NULL, NULL, NULL, t1882_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1882), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1874_TI;
#include "t1874MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1874_m10330_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1874_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10330_MI = 
{
	".ctor", (methodPointerType)&m8173_gshared, &t1874_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1874_m10330_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t1874_m10331_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1874_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10331_MI = 
{
	"Invoke", (methodPointerType)&m8174_gshared, &t1874_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t1874_m10331_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
extern Il2CppType t100_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1874_m10332_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1874_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10332_MI = 
{
	"BeginInvoke", (methodPointerType)&m8175_gshared, &t1874_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4_t4, t1874_m10332_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1874_m10333_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1874_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10333_MI = 
{
	"EndInvoke", (methodPointerType)&m8176_gshared, &t1874_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1874_m10333_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1874_MIs[] =
{
	&m10330_MI,
	&m10331_MI,
	&m10332_MI,
	&m10333_MI,
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
extern MethodInfo m10331_MI;
extern MethodInfo m10332_MI;
extern MethodInfo m10333_MI;
static MethodInfo* t1874_VT[] =
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
	&m10331_MI,
	&m10332_MI,
	&m10333_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1874_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1874_0_0_0;
extern Il2CppType t1874_1_0_0;
extern TypeInfo t189_TI;
struct t1874;
extern TypeInfo t1874_TI;
extern Il2CppGenericClass t1874_GC;
TypeInfo t1874_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t1874_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t1874_TI, NULL, t1874_VT, &EmptyCustomAttributesCache, &t1874_TI, &t1874_0_0_0, &t1874_1_0_0, t1874_IOs, &t1874_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1874), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3356_TI;

#include "t108.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.StandaloneInputModule>
extern MethodInfo m23968_MI;
static PropertyInfo t3356____Current_PropertyInfo = 
{
	&t3356_TI, "Current", &m23968_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3356_PIs[] =
{
	&t3356____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3356_TI;
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23968_MI = 
{
	"get_Current", NULL, &t3356_TI, &t108_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3356_MIs[] =
{
	&m23968_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3356_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3356_0_0_0;
extern Il2CppType t3356_1_0_0;
struct t3356;
extern TypeInfo t3356_TI;
extern Il2CppGenericClass t3356_GC;
TypeInfo t3356_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3356_MIs, t3356_PIs, NULL, NULL, NULL, NULL, NULL, &t3356_TI, t3356_ITIs, NULL, &EmptyCustomAttributesCache, &t3356_TI, &t3356_0_0_0, &t3356_1_0_0, NULL, &t3356_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1883.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1883_TI;
#include "t1883MD.h"

extern TypeInfo t1883_TI;
extern TypeInfo t108_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10338_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m17883_MI;
struct t14;
#define m17883(__this, p0, method) (t108 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m17883_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.StandaloneInputModule>
extern Il2CppType t14_0_0_1;
FieldInfo t1883_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1883_TI, offsetof(t1883, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1883_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1883_TI, offsetof(t1883, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1883_FIs[] =
{
	&t1883_f0_FieldInfo,
	&t1883_f1_FieldInfo,
	NULL
};
extern MethodInfo m10335_MI;
static PropertyInfo t1883____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1883_TI, "System.Collections.IEnumerator.Current", &m10335_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10338_MI;
static PropertyInfo t1883____Current_PropertyInfo = 
{
	&t1883_TI, "Current", &m10338_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1883_PIs[] =
{
	&t1883____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1883____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1883_m10334_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1883_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10334_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t1883_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1883_m10334_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1883_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10335_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t1883_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1883_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10336_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t1883_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1883_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10337_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t1883_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1883_TI;
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10338_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t1883_TI, &t108_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1883_MIs[] =
{
	&m10334_MI,
	&m10335_MI,
	&m10336_MI,
	&m10337_MI,
	&m10338_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10335_MI;
extern MethodInfo m10337_MI;
extern MethodInfo m10336_MI;
extern MethodInfo m10338_MI;
static MethodInfo* t1883_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10335_MI,
	&m10337_MI,
	&m10336_MI,
	&m10338_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3356_TI;
static TypeInfo* t1883_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3356_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3356_TI;
static Il2CppInterfaceOffsetPair t1883_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3356_TI, 7},
};
extern MethodInfo m10338_MI;
extern TypeInfo t108_TI;
extern MethodInfo m17883_MI;
static void* t1883_RGCTXData[3] = 
{
	&m10338_MI,
	&t108_TI,
	&m17883_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1883_0_0_0;
extern Il2CppType t1883_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1883_TI;
extern Il2CppGenericClass t1883_GC;
extern TypeInfo t14_TI;
TypeInfo t1883_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1883_MIs, t1883_PIs, t1883_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1883_TI, t1883_ITIs, t1883_VT, &EmptyCustomAttributesCache, &t1883_TI, &t1883_0_0_0, &t1883_1_0_0, t1883_IOs, &t1883_GC, NULL, NULL, NULL, t1883_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1883)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3953_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.StandaloneInputModule>
extern MethodInfo m23969_MI;
static PropertyInfo t3953____Count_PropertyInfo = 
{
	&t3953_TI, "Count", &m23969_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23970_MI;
static PropertyInfo t3953____IsReadOnly_PropertyInfo = 
{
	&t3953_TI, "IsReadOnly", &m23970_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3953_PIs[] =
{
	&t3953____Count_PropertyInfo,
	&t3953____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3953_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23969_MI = 
{
	"get_Count", NULL, &t3953_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3953_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m23970_MI = 
{
	"get_IsReadOnly", NULL, &t3953_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t3953_m23971_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern TypeInfo t3953_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23971_MI = 
{
	"Add", NULL, &t3953_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t3953_m23971_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3953_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m23972_MI = 
{
	"Clear", NULL, &t3953_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t3953_m23973_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern TypeInfo t3953_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23973_MI = 
{
	"Contains", NULL, &t3953_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3953_m23973_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3199_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t3953_m23974_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3199_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3953_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23974_MI = 
{
	"CopyTo", NULL, &t3953_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t3953_m23974_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t3953_m23975_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern TypeInfo t3953_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23975_MI = 
{
	"Remove", NULL, &t3953_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3953_m23975_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3953_MIs[] =
{
	&m23969_MI,
	&m23970_MI,
	&m23971_MI,
	&m23972_MI,
	&m23973_MI,
	&m23974_MI,
	&m23975_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3955_TI;
static TypeInfo* t3953_ITIs[] = 
{
	&t591_TI,
	&t3955_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3953_0_0_0;
extern Il2CppType t3953_1_0_0;
struct t3953;
extern TypeInfo t3953_TI;
extern Il2CppGenericClass t3953_GC;
TypeInfo t3953_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3953_MIs, t3953_PIs, NULL, NULL, NULL, NULL, NULL, &t3953_TI, t3953_ITIs, NULL, &EmptyCustomAttributesCache, &t3953_TI, &t3953_0_0_0, &t3953_1_0_0, NULL, &t3953_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3955_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.StandaloneInputModule>
extern TypeInfo t3955_TI;
extern Il2CppType t3356_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23976_MI = 
{
	"GetEnumerator", NULL, &t3955_TI, &t3356_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3955_MIs[] =
{
	&m23976_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t3955_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3955_0_0_0;
extern Il2CppType t3955_1_0_0;
struct t3955;
extern TypeInfo t3955_TI;
extern Il2CppGenericClass t3955_GC;
TypeInfo t3955_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3955_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3955_TI, t3955_ITIs, NULL, &EmptyCustomAttributesCache, &t3955_TI, &t3955_0_0_0, &t3955_1_0_0, NULL, &t3955_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3954_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.StandaloneInputModule>
extern MethodInfo m23977_MI;
extern MethodInfo m23978_MI;
static PropertyInfo t3954____Item_PropertyInfo = 
{
	&t3954_TI, "Item", &m23977_MI, &m23978_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3954_PIs[] =
{
	&t3954____Item_PropertyInfo,
	NULL
};
extern Il2CppType t108_0_0_0;
static ParameterInfo t3954_m23979_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern TypeInfo t3954_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23979_MI = 
{
	"IndexOf", NULL, &t3954_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t3954_m23979_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t3954_m23980_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern TypeInfo t3954_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23980_MI = 
{
	"Insert", NULL, &t3954_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t3954_m23980_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3954_m23981_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3954_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23981_MI = 
{
	"RemoveAt", NULL, &t3954_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3954_m23981_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3954_m23977_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3954_TI;
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23977_MI = 
{
	"get_Item", NULL, &t3954_TI, &t108_0_0_0, RuntimeInvoker_t4_t16, t3954_m23977_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t3954_m23978_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern TypeInfo t3954_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23978_MI = 
{
	"set_Item", NULL, &t3954_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t3954_m23978_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3954_MIs[] =
{
	&m23979_MI,
	&m23980_MI,
	&m23981_MI,
	&m23977_MI,
	&m23978_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3953_TI;
extern TypeInfo t3955_TI;
static TypeInfo* t3954_ITIs[] = 
{
	&t591_TI,
	&t3953_TI,
	&t3955_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3954_0_0_0;
extern Il2CppType t3954_1_0_0;
struct t3954;
extern TypeInfo t3954_TI;
extern Il2CppGenericClass t3954_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3954_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3954_MIs, t3954_PIs, NULL, NULL, NULL, NULL, NULL, &t3954_TI, t3954_ITIs, NULL, &t1400__CustomAttributeCache, &t3954_TI, &t3954_0_0_0, &t3954_1_0_0, NULL, &t3954_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1884.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1884_TI;
#include "t1884MD.h"

#include "t23.h"
#include "t545.h"
#include "t1885.h"
extern TypeInfo t305_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1884_TI;
extern TypeInfo t108_TI;
extern TypeInfo t1885_TI;
extern TypeInfo t15_TI;
#include "t1885MD.h"
extern MethodInfo m10341_MI;
extern MethodInfo m10343_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.EventSystems.StandaloneInputModule>
extern Il2CppType t305_0_0_33;
FieldInfo t1884_f1_FieldInfo = 
{
	"m_Arg1", &t305_0_0_33, &t1884_TI, offsetof(t1884, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1884_FIs[] =
{
	&t1884_f1_FieldInfo,
	NULL
};
extern Il2CppType t23_0_0_0;
extern Il2CppType t545_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1884_m10339_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t23_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern TypeInfo t1884_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10339_MI = 
{
	".ctor", (methodPointerType)&m7873_gshared, &t1884_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4_t4, t1884_m10339_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1884_m10340_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t1884_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10340_MI = 
{
	"Invoke", (methodPointerType)&m7875_gshared, &t1884_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1884_m10340_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1884_MIs[] =
{
	&m10339_MI,
	&m10340_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10340_MI;
extern MethodInfo m10344_MI;
static MethodInfo* t1884_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10340_MI,
	&m10344_MI,
};
extern Il2CppType t1886_0_0_0;
extern TypeInfo t1886_TI;
extern MethodInfo m17893_MI;
extern TypeInfo t108_TI;
extern MethodInfo m10346_MI;
extern MethodInfo m10341_MI;
extern TypeInfo t108_TI;
extern MethodInfo m10343_MI;
static void* t1884_RGCTXData[8] = 
{
	(void*)&t1886_0_0_0,
	&t1886_TI,
	&m17893_MI,
	&t108_TI,
	&m10346_MI,
	&m10341_MI,
	&t108_TI,
	&m10343_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1884_0_0_0;
extern Il2CppType t1884_1_0_0;
extern TypeInfo t1885_TI;
struct t1884;
extern TypeInfo t1884_TI;
extern Il2CppGenericClass t1884_GC;
TypeInfo t1884_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t1884_MIs, NULL, t1884_FIs, NULL, &t1885_TI, NULL, NULL, &t1884_TI, NULL, t1884_VT, &EmptyCustomAttributesCache, &t1884_TI, &t1884_0_0_0, &t1884_1_0_0, NULL, &t1884_GC, NULL, NULL, NULL, t1884_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1884), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1885_TI;

#include "t1886.h"
#include "t343.h"
extern TypeInfo t1885_TI;
extern TypeInfo t1886_TI;
extern TypeInfo t290_TI;
extern TypeInfo t303_TI;
extern TypeInfo t108_TI;
extern TypeInfo t15_TI;
#include "t544MD.h"
#include "t343MD.h"
#include "t1886MD.h"
extern Il2CppType t1886_0_0_0;
extern MethodInfo m2771_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2934_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m17893_MI;
extern MethodInfo m2772_MI;
extern MethodInfo m10346_MI;
extern MethodInfo m2930_MI;
extern MethodInfo m2928_MI;
struct t544;
#include "t544.h"
struct t544;
 void m16859_gshared (t4 * __this, t4 * p0, MethodInfo* method);
#define m16859(__this, p0, method) (void)m16859_gshared((t4 *)__this, (t4 *)p0, method)
#define m17893(__this, p0, method) (void)m16859_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m17893_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.StandaloneInputModule>
extern Il2CppType t1886_0_0_1;
FieldInfo t1885_f0_FieldInfo = 
{
	"Delegate", &t1886_0_0_1, &t1885_TI, offsetof(t1885, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1885_FIs[] =
{
	&t1885_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t1885_m10341_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10341_MI = 
{
	".ctor", (methodPointerType)&m7876_gshared, &t1885_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t1885_m10341_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1886_0_0_0;
static ParameterInfo t1885_m10342_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t1886_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10342_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1885_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1885_m10342_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1885_m10343_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10343_MI = 
{
	"Invoke", (methodPointerType)&m7878_gshared, &t1885_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1885_m10343_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t1885_m10344_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t1885_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10344_MI = 
{
	"Find", (methodPointerType)&m7879_gshared, &t1885_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1885_m10344_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1885_MIs[] =
{
	&m10341_MI,
	&m10342_MI,
	&m10343_MI,
	&m10344_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10343_MI;
extern MethodInfo m10344_MI;
static MethodInfo* t1885_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10343_MI,
	&m10344_MI,
};
extern Il2CppType t1886_0_0_0;
extern TypeInfo t1886_TI;
extern MethodInfo m17893_MI;
extern TypeInfo t108_TI;
extern MethodInfo m10346_MI;
static void* t1885_RGCTXData[5] = 
{
	(void*)&t1886_0_0_0,
	&t1886_TI,
	&m17893_MI,
	&t108_TI,
	&m10346_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1885_0_0_0;
extern Il2CppType t1885_1_0_0;
extern TypeInfo t544_TI;
struct t1885;
extern TypeInfo t1885_TI;
extern Il2CppGenericClass t1885_GC;
TypeInfo t1885_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t1885_MIs, NULL, t1885_FIs, NULL, &t544_TI, NULL, NULL, &t1885_TI, NULL, t1885_VT, &EmptyCustomAttributesCache, &t1885_TI, &t1885_0_0_0, &t1885_1_0_0, NULL, &t1885_GC, NULL, NULL, NULL, t1885_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1885), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1886_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.StandaloneInputModule>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1886_m10345_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1886_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10345_MI = 
{
	".ctor", (methodPointerType)&m7880_gshared, &t1886_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1886_m10345_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1886_m10346_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern TypeInfo t1886_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10346_MI = 
{
	"Invoke", (methodPointerType)&m7881_gshared, &t1886_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1886_m10346_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t108_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1886_m10347_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1886_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10347_MI = 
{
	"BeginInvoke", (methodPointerType)&m7882_gshared, &t1886_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t1886_m10347_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1886_m10348_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1886_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10348_MI = 
{
	"EndInvoke", (methodPointerType)&m7883_gshared, &t1886_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1886_m10348_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1886_MIs[] =
{
	&m10345_MI,
	&m10346_MI,
	&m10347_MI,
	&m10348_MI,
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
extern MethodInfo m10346_MI;
extern MethodInfo m10347_MI;
extern MethodInfo m10348_MI;
static MethodInfo* t1886_VT[] =
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
	&m10346_MI,
	&m10347_MI,
	&m10348_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1886_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1886_0_0_0;
extern Il2CppType t1886_1_0_0;
extern TypeInfo t189_TI;
struct t1886;
extern TypeInfo t1886_TI;
extern Il2CppGenericClass t1886_GC;
TypeInfo t1886_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t1886_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t1886_TI, NULL, t1886_VT, &EmptyCustomAttributesCache, &t1886_TI, &t1886_0_0_0, &t1886_1_0_0, t1886_IOs, &t1886_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1886), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3357_TI;

#include "t107.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.StandaloneInputModule/InputMode>
extern MethodInfo m23982_MI;
static PropertyInfo t3357____Current_PropertyInfo = 
{
	&t3357_TI, "Current", &m23982_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3357_PIs[] =
{
	&t3357____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3357_TI;
extern Il2CppType t107_0_0_0;
extern void* RuntimeInvoker_t107 (MethodInfo* method, void* obj, void** args);
MethodInfo m23982_MI = 
{
	"get_Current", NULL, &t3357_TI, &t107_0_0_0, RuntimeInvoker_t107, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3357_MIs[] =
{
	&m23982_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3357_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3357_0_0_0;
extern Il2CppType t3357_1_0_0;
struct t3357;
extern TypeInfo t3357_TI;
extern Il2CppGenericClass t3357_GC;
TypeInfo t3357_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3357_MIs, t3357_PIs, NULL, NULL, NULL, NULL, NULL, &t3357_TI, t3357_ITIs, NULL, &EmptyCustomAttributesCache, &t3357_TI, &t3357_0_0_0, &t3357_1_0_0, NULL, &t3357_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1887.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1887_TI;
#include "t1887MD.h"

extern TypeInfo t1887_TI;
extern TypeInfo t107_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10353_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m17921_MI;
struct t14;
 int32_t m17921 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17921_MI;


extern MethodInfo m10349_MI;
 void m10349 (t1887 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10350_MI;
 t4 * m10350 (t1887 * __this, MethodInfo* method){
	{
		int32_t L_0 = m10353(__this, &m10353_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t107_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10351_MI;
 void m10351 (t1887 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10352_MI;
 bool m10352 (t1887 * __this, MethodInfo* method){
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
extern MethodInfo m10353_MI;
 int32_t m10353 (t1887 * __this, MethodInfo* method){
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
		int32_t L_8 = m17921(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m17921_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.StandaloneInputModule/InputMode>
extern Il2CppType t14_0_0_1;
FieldInfo t1887_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1887_TI, offsetof(t1887, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1887_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1887_TI, offsetof(t1887, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1887_FIs[] =
{
	&t1887_f0_FieldInfo,
	&t1887_f1_FieldInfo,
	NULL
};
extern MethodInfo m10350_MI;
static PropertyInfo t1887____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1887_TI, "System.Collections.IEnumerator.Current", &m10350_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10353_MI;
static PropertyInfo t1887____Current_PropertyInfo = 
{
	&t1887_TI, "Current", &m10353_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1887_PIs[] =
{
	&t1887____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1887____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1887_m10349_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1887_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10349_MI = 
{
	".ctor", (methodPointerType)&m10349, &t1887_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1887_m10349_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1887_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10350_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10350, &t1887_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1887_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10351_MI = 
{
	"Dispose", (methodPointerType)&m10351, &t1887_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1887_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10352_MI = 
{
	"MoveNext", (methodPointerType)&m10352, &t1887_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1887_TI;
extern Il2CppType t107_0_0_0;
extern void* RuntimeInvoker_t107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10353_MI = 
{
	"get_Current", (methodPointerType)&m10353, &t1887_TI, &t107_0_0_0, RuntimeInvoker_t107, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1887_MIs[] =
{
	&m10349_MI,
	&m10350_MI,
	&m10351_MI,
	&m10352_MI,
	&m10353_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10350_MI;
extern MethodInfo m10352_MI;
extern MethodInfo m10351_MI;
extern MethodInfo m10353_MI;
static MethodInfo* t1887_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10350_MI,
	&m10352_MI,
	&m10351_MI,
	&m10353_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3357_TI;
static TypeInfo* t1887_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3357_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3357_TI;
static Il2CppInterfaceOffsetPair t1887_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3357_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1887_0_0_0;
extern Il2CppType t1887_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1887_TI;
extern Il2CppGenericClass t1887_GC;
extern TypeInfo t14_TI;
TypeInfo t1887_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1887_MIs, t1887_PIs, t1887_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1887_TI, t1887_ITIs, t1887_VT, &EmptyCustomAttributesCache, &t1887_TI, &t1887_0_0_0, &t1887_1_0_0, t1887_IOs, &t1887_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1887)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3956_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.StandaloneInputModule/InputMode>
extern MethodInfo m23983_MI;
static PropertyInfo t3956____Count_PropertyInfo = 
{
	&t3956_TI, "Count", &m23983_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23984_MI;
static PropertyInfo t3956____IsReadOnly_PropertyInfo = 
{
	&t3956_TI, "IsReadOnly", &m23984_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3956_PIs[] =
{
	&t3956____Count_PropertyInfo,
	&t3956____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3956_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23983_MI = 
{
	"get_Count", NULL, &t3956_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3956_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m23984_MI = 
{
	"get_IsReadOnly", NULL, &t3956_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3956_m23985_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern TypeInfo t3956_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23985_MI = 
{
	"Add", NULL, &t3956_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3956_m23985_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3956_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m23986_MI = 
{
	"Clear", NULL, &t3956_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3956_m23987_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern TypeInfo t3956_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23987_MI = 
{
	"Contains", NULL, &t3956_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t3956_m23987_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3200_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t3956_m23988_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3200_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3956_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23988_MI = 
{
	"CopyTo", NULL, &t3956_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t3956_m23988_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3956_m23989_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern TypeInfo t3956_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23989_MI = 
{
	"Remove", NULL, &t3956_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t3956_m23989_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3956_MIs[] =
{
	&m23983_MI,
	&m23984_MI,
	&m23985_MI,
	&m23986_MI,
	&m23987_MI,
	&m23988_MI,
	&m23989_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3958_TI;
static TypeInfo* t3956_ITIs[] = 
{
	&t591_TI,
	&t3958_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3956_0_0_0;
extern Il2CppType t3956_1_0_0;
struct t3956;
extern TypeInfo t3956_TI;
extern Il2CppGenericClass t3956_GC;
TypeInfo t3956_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3956_MIs, t3956_PIs, NULL, NULL, NULL, NULL, NULL, &t3956_TI, t3956_ITIs, NULL, &EmptyCustomAttributesCache, &t3956_TI, &t3956_0_0_0, &t3956_1_0_0, NULL, &t3956_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3958_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.StandaloneInputModule/InputMode>
extern TypeInfo t3958_TI;
extern Il2CppType t3357_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23990_MI = 
{
	"GetEnumerator", NULL, &t3958_TI, &t3357_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3958_MIs[] =
{
	&m23990_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t3958_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3958_0_0_0;
extern Il2CppType t3958_1_0_0;
struct t3958;
extern TypeInfo t3958_TI;
extern Il2CppGenericClass t3958_GC;
TypeInfo t3958_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3958_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3958_TI, t3958_ITIs, NULL, &EmptyCustomAttributesCache, &t3958_TI, &t3958_0_0_0, &t3958_1_0_0, NULL, &t3958_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3957_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.StandaloneInputModule/InputMode>
extern MethodInfo m23991_MI;
extern MethodInfo m23992_MI;
static PropertyInfo t3957____Item_PropertyInfo = 
{
	&t3957_TI, "Item", &m23991_MI, &m23992_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3957_PIs[] =
{
	&t3957____Item_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3957_m23993_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern TypeInfo t3957_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23993_MI = 
{
	"IndexOf", NULL, &t3957_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t3957_m23993_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t107_0_0_0;
static ParameterInfo t3957_m23994_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern TypeInfo t3957_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23994_MI = 
{
	"Insert", NULL, &t3957_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t3957_m23994_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3957_m23995_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3957_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23995_MI = 
{
	"RemoveAt", NULL, &t3957_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3957_m23995_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3957_m23991_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3957_TI;
extern Il2CppType t107_0_0_0;
extern void* RuntimeInvoker_t107_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23991_MI = 
{
	"get_Item", NULL, &t3957_TI, &t107_0_0_0, RuntimeInvoker_t107_t16, t3957_m23991_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t107_0_0_0;
static ParameterInfo t3957_m23992_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern TypeInfo t3957_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23992_MI = 
{
	"set_Item", NULL, &t3957_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t3957_m23992_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3957_MIs[] =
{
	&m23993_MI,
	&m23994_MI,
	&m23995_MI,
	&m23991_MI,
	&m23992_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3956_TI;
extern TypeInfo t3958_TI;
static TypeInfo* t3957_ITIs[] = 
{
	&t591_TI,
	&t3956_TI,
	&t3958_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3957_0_0_0;
extern Il2CppType t3957_1_0_0;
struct t3957;
extern TypeInfo t3957_TI;
extern Il2CppGenericClass t3957_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3957_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3957_MIs, t3957_PIs, NULL, NULL, NULL, NULL, NULL, &t3957_TI, t3957_ITIs, NULL, &t1400__CustomAttributeCache, &t3957_TI, &t3957_0_0_0, &t3957_1_0_0, NULL, &t3957_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3358_TI;

#include "t109.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.TouchInputModule>
extern MethodInfo m23996_MI;
static PropertyInfo t3358____Current_PropertyInfo = 
{
	&t3358_TI, "Current", &m23996_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3358_PIs[] =
{
	&t3358____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3358_TI;
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23996_MI = 
{
	"get_Current", NULL, &t3358_TI, &t109_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3358_MIs[] =
{
	&m23996_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3358_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
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
#include "t1888.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1888_TI;
#include "t1888MD.h"

extern TypeInfo t1888_TI;
extern TypeInfo t109_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10358_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m17932_MI;
struct t14;
#define m17932(__this, p0, method) (t109 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m17932_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.TouchInputModule>
extern Il2CppType t14_0_0_1;
FieldInfo t1888_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1888_TI, offsetof(t1888, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1888_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1888_TI, offsetof(t1888, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1888_FIs[] =
{
	&t1888_f0_FieldInfo,
	&t1888_f1_FieldInfo,
	NULL
};
extern MethodInfo m10355_MI;
static PropertyInfo t1888____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1888_TI, "System.Collections.IEnumerator.Current", &m10355_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10358_MI;
static PropertyInfo t1888____Current_PropertyInfo = 
{
	&t1888_TI, "Current", &m10358_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1888_PIs[] =
{
	&t1888____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1888____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1888_m10354_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1888_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10354_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t1888_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1888_m10354_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1888_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10355_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t1888_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1888_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10356_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t1888_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1888_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10357_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t1888_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1888_TI;
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10358_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t1888_TI, &t109_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1888_MIs[] =
{
	&m10354_MI,
	&m10355_MI,
	&m10356_MI,
	&m10357_MI,
	&m10358_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10355_MI;
extern MethodInfo m10357_MI;
extern MethodInfo m10356_MI;
extern MethodInfo m10358_MI;
static MethodInfo* t1888_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10355_MI,
	&m10357_MI,
	&m10356_MI,
	&m10358_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3358_TI;
static TypeInfo* t1888_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3358_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3358_TI;
static Il2CppInterfaceOffsetPair t1888_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3358_TI, 7},
};
extern MethodInfo m10358_MI;
extern TypeInfo t109_TI;
extern MethodInfo m17932_MI;
static void* t1888_RGCTXData[3] = 
{
	&m10358_MI,
	&t109_TI,
	&m17932_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1888_0_0_0;
extern Il2CppType t1888_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1888_TI;
extern Il2CppGenericClass t1888_GC;
extern TypeInfo t14_TI;
TypeInfo t1888_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1888_MIs, t1888_PIs, t1888_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1888_TI, t1888_ITIs, t1888_VT, &EmptyCustomAttributesCache, &t1888_TI, &t1888_0_0_0, &t1888_1_0_0, t1888_IOs, &t1888_GC, NULL, NULL, NULL, t1888_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1888)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3959_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.TouchInputModule>
extern MethodInfo m23997_MI;
static PropertyInfo t3959____Count_PropertyInfo = 
{
	&t3959_TI, "Count", &m23997_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23998_MI;
static PropertyInfo t3959____IsReadOnly_PropertyInfo = 
{
	&t3959_TI, "IsReadOnly", &m23998_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3959_PIs[] =
{
	&t3959____Count_PropertyInfo,
	&t3959____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3959_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m23997_MI = 
{
	"get_Count", NULL, &t3959_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3959_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m23998_MI = 
{
	"get_IsReadOnly", NULL, &t3959_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t109_0_0_0;
static ParameterInfo t3959_m23999_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t109_0_0_0},
};
extern TypeInfo t3959_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m23999_MI = 
{
	"Add", NULL, &t3959_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t3959_m23999_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3959_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m24000_MI = 
{
	"Clear", NULL, &t3959_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t109_0_0_0;
static ParameterInfo t3959_m24001_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t109_0_0_0},
};
extern TypeInfo t3959_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24001_MI = 
{
	"Contains", NULL, &t3959_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3959_m24001_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3201_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t3959_m24002_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3201_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3959_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24002_MI = 
{
	"CopyTo", NULL, &t3959_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t3959_m24002_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t109_0_0_0;
static ParameterInfo t3959_m24003_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t109_0_0_0},
};
extern TypeInfo t3959_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24003_MI = 
{
	"Remove", NULL, &t3959_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3959_m24003_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3959_MIs[] =
{
	&m23997_MI,
	&m23998_MI,
	&m23999_MI,
	&m24000_MI,
	&m24001_MI,
	&m24002_MI,
	&m24003_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3961_TI;
static TypeInfo* t3959_ITIs[] = 
{
	&t591_TI,
	&t3961_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3959_0_0_0;
extern Il2CppType t3959_1_0_0;
struct t3959;
extern TypeInfo t3959_TI;
extern Il2CppGenericClass t3959_GC;
TypeInfo t3959_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3959_MIs, t3959_PIs, NULL, NULL, NULL, NULL, NULL, &t3959_TI, t3959_ITIs, NULL, &EmptyCustomAttributesCache, &t3959_TI, &t3959_0_0_0, &t3959_1_0_0, NULL, &t3959_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3961_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.TouchInputModule>
extern TypeInfo t3961_TI;
extern Il2CppType t3358_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24004_MI = 
{
	"GetEnumerator", NULL, &t3961_TI, &t3358_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3961_MIs[] =
{
	&m24004_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t3961_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3961_0_0_0;
extern Il2CppType t3961_1_0_0;
struct t3961;
extern TypeInfo t3961_TI;
extern Il2CppGenericClass t3961_GC;
TypeInfo t3961_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3961_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3961_TI, t3961_ITIs, NULL, &EmptyCustomAttributesCache, &t3961_TI, &t3961_0_0_0, &t3961_1_0_0, NULL, &t3961_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3960_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.TouchInputModule>
extern MethodInfo m24005_MI;
extern MethodInfo m24006_MI;
static PropertyInfo t3960____Item_PropertyInfo = 
{
	&t3960_TI, "Item", &m24005_MI, &m24006_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3960_PIs[] =
{
	&t3960____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
static ParameterInfo t3960_m24007_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t109_0_0_0},
};
extern TypeInfo t3960_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24007_MI = 
{
	"IndexOf", NULL, &t3960_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t3960_m24007_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t109_0_0_0;
static ParameterInfo t3960_m24008_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t109_0_0_0},
};
extern TypeInfo t3960_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24008_MI = 
{
	"Insert", NULL, &t3960_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t3960_m24008_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3960_m24009_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3960_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24009_MI = 
{
	"RemoveAt", NULL, &t3960_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3960_m24009_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3960_m24005_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3960_TI;
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24005_MI = 
{
	"get_Item", NULL, &t3960_TI, &t109_0_0_0, RuntimeInvoker_t4_t16, t3960_m24005_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t109_0_0_0;
static ParameterInfo t3960_m24006_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t109_0_0_0},
};
extern TypeInfo t3960_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24006_MI = 
{
	"set_Item", NULL, &t3960_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t3960_m24006_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3960_MIs[] =
{
	&m24007_MI,
	&m24008_MI,
	&m24009_MI,
	&m24005_MI,
	&m24006_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3959_TI;
extern TypeInfo t3961_TI;
static TypeInfo* t3960_ITIs[] = 
{
	&t591_TI,
	&t3959_TI,
	&t3961_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3960_0_0_0;
extern Il2CppType t3960_1_0_0;
struct t3960;
extern TypeInfo t3960_TI;
extern Il2CppGenericClass t3960_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3960_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3960_MIs, t3960_PIs, NULL, NULL, NULL, NULL, NULL, &t3960_TI, t3960_ITIs, NULL, &t1400__CustomAttributeCache, &t3960_TI, &t3960_0_0_0, &t3960_1_0_0, NULL, &t3960_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1889.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1889_TI;
#include "t1889MD.h"

#include "t1890.h"
extern TypeInfo t305_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1889_TI;
extern TypeInfo t109_TI;
extern TypeInfo t1890_TI;
extern TypeInfo t15_TI;
#include "t1890MD.h"
extern MethodInfo m10361_MI;
extern MethodInfo m10363_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.EventSystems.TouchInputModule>
extern Il2CppType t305_0_0_33;
FieldInfo t1889_f1_FieldInfo = 
{
	"m_Arg1", &t305_0_0_33, &t1889_TI, offsetof(t1889, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1889_FIs[] =
{
	&t1889_f1_FieldInfo,
	NULL
};
extern Il2CppType t23_0_0_0;
extern Il2CppType t545_0_0_0;
extern Il2CppType t109_0_0_0;
static ParameterInfo t1889_m10359_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t23_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t109_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10359_MI = 
{
	".ctor", (methodPointerType)&m7873_gshared, &t1889_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4_t4, t1889_m10359_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1889_m10360_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10360_MI = 
{
	"Invoke", (methodPointerType)&m7875_gshared, &t1889_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1889_m10360_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1889_MIs[] =
{
	&m10359_MI,
	&m10360_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10360_MI;
extern MethodInfo m10364_MI;
static MethodInfo* t1889_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10360_MI,
	&m10364_MI,
};
extern Il2CppType t1891_0_0_0;
extern TypeInfo t1891_TI;
extern MethodInfo m17942_MI;
extern TypeInfo t109_TI;
extern MethodInfo m10366_MI;
extern MethodInfo m10361_MI;
extern TypeInfo t109_TI;
extern MethodInfo m10363_MI;
static void* t1889_RGCTXData[8] = 
{
	(void*)&t1891_0_0_0,
	&t1891_TI,
	&m17942_MI,
	&t109_TI,
	&m10366_MI,
	&m10361_MI,
	&t109_TI,
	&m10363_MI,
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
extern TypeInfo t1890_TI;
extern TypeInfo t1891_TI;
extern TypeInfo t290_TI;
extern TypeInfo t303_TI;
extern TypeInfo t109_TI;
extern TypeInfo t15_TI;
#include "t1891MD.h"
extern Il2CppType t1891_0_0_0;
extern MethodInfo m2771_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2934_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m17942_MI;
extern MethodInfo m2772_MI;
extern MethodInfo m10366_MI;
extern MethodInfo m2930_MI;
extern MethodInfo m2928_MI;
struct t544;
#define m17942(__this, p0, method) (void)m16859_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m17942_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.TouchInputModule>
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
extern Il2CppType t545_0_0_0;
static ParameterInfo t1890_m10361_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t1890_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10361_MI = 
{
	".ctor", (methodPointerType)&m7876_gshared, &t1890_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t1890_m10361_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1891_0_0_0;
static ParameterInfo t1890_m10362_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t1891_0_0_0},
};
extern TypeInfo t1890_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10362_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1890_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1890_m10362_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1890_m10363_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t1890_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10363_MI = 
{
	"Invoke", (methodPointerType)&m7878_gshared, &t1890_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1890_m10363_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t1890_m10364_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t1890_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10364_MI = 
{
	"Find", (methodPointerType)&m7879_gshared, &t1890_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1890_m10364_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1890_MIs[] =
{
	&m10361_MI,
	&m10362_MI,
	&m10363_MI,
	&m10364_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10363_MI;
extern MethodInfo m10364_MI;
static MethodInfo* t1890_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10363_MI,
	&m10364_MI,
};
extern Il2CppType t1891_0_0_0;
extern TypeInfo t1891_TI;
extern MethodInfo m17942_MI;
extern TypeInfo t109_TI;
extern MethodInfo m10366_MI;
static void* t1890_RGCTXData[5] = 
{
	(void*)&t1891_0_0_0,
	&t1891_TI,
	&m17942_MI,
	&t109_TI,
	&m10366_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1890_0_0_0;
extern Il2CppType t1890_1_0_0;
extern TypeInfo t544_TI;
struct t1890;
extern TypeInfo t1890_TI;
extern Il2CppGenericClass t1890_GC;
TypeInfo t1890_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t1890_MIs, NULL, t1890_FIs, NULL, &t544_TI, NULL, NULL, &t1890_TI, NULL, t1890_VT, &EmptyCustomAttributesCache, &t1890_TI, &t1890_0_0_0, &t1890_1_0_0, NULL, &t1890_GC, NULL, NULL, NULL, t1890_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1890), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1891_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.TouchInputModule>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1891_m10365_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1891_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10365_MI = 
{
	".ctor", (methodPointerType)&m7880_gshared, &t1891_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1891_m10365_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t109_0_0_0;
static ParameterInfo t1891_m10366_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t109_0_0_0},
};
extern TypeInfo t1891_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10366_MI = 
{
	"Invoke", (methodPointerType)&m7881_gshared, &t1891_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1891_m10366_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t109_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1891_m10367_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t109_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1891_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10367_MI = 
{
	"BeginInvoke", (methodPointerType)&m7882_gshared, &t1891_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t1891_m10367_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1891_m10368_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1891_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10368_MI = 
{
	"EndInvoke", (methodPointerType)&m7883_gshared, &t1891_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1891_m10368_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1891_MIs[] =
{
	&m10365_MI,
	&m10366_MI,
	&m10367_MI,
	&m10368_MI,
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
extern MethodInfo m10366_MI;
extern MethodInfo m10367_MI;
extern MethodInfo m10368_MI;
static MethodInfo* t1891_VT[] =
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
	&m10366_MI,
	&m10367_MI,
	&m10368_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1891_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1891_0_0_0;
extern Il2CppType t1891_1_0_0;
extern TypeInfo t189_TI;
struct t1891;
extern TypeInfo t1891_TI;
extern Il2CppGenericClass t1891_GC;
TypeInfo t1891_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t1891_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t1891_TI, NULL, t1891_VT, &EmptyCustomAttributesCache, &t1891_TI, &t1891_0_0_0, &t1891_1_0_0, t1891_IOs, &t1891_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1891), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1892.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1892_TI;
#include "t1892MD.h"

#include "t94.h"
#include "t1893.h"
extern TypeInfo t305_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1892_TI;
extern TypeInfo t94_TI;
extern TypeInfo t1893_TI;
extern TypeInfo t15_TI;
#include "t1893MD.h"
extern MethodInfo m10371_MI;
extern MethodInfo m10373_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.EventSystems.BaseRaycaster>
extern Il2CppType t305_0_0_33;
FieldInfo t1892_f1_FieldInfo = 
{
	"m_Arg1", &t305_0_0_33, &t1892_TI, offsetof(t1892, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1892_FIs[] =
{
	&t1892_f1_FieldInfo,
	NULL
};
extern Il2CppType t23_0_0_0;
extern Il2CppType t545_0_0_0;
extern Il2CppType t94_0_0_0;
static ParameterInfo t1892_m10369_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t23_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t94_0_0_0},
};
extern TypeInfo t1892_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10369_MI = 
{
	".ctor", (methodPointerType)&m7873_gshared, &t1892_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4_t4, t1892_m10369_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1892_m10370_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t1892_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10370_MI = 
{
	"Invoke", (methodPointerType)&m7875_gshared, &t1892_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1892_m10370_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1892_MIs[] =
{
	&m10369_MI,
	&m10370_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10370_MI;
extern MethodInfo m10374_MI;
static MethodInfo* t1892_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10370_MI,
	&m10374_MI,
};
extern Il2CppType t1894_0_0_0;
extern TypeInfo t1894_TI;
extern MethodInfo m17943_MI;
extern TypeInfo t94_TI;
extern MethodInfo m10376_MI;
extern MethodInfo m10371_MI;
extern TypeInfo t94_TI;
extern MethodInfo m10373_MI;
static void* t1892_RGCTXData[8] = 
{
	(void*)&t1894_0_0_0,
	&t1894_TI,
	&m17943_MI,
	&t94_TI,
	&m10376_MI,
	&m10371_MI,
	&t94_TI,
	&m10373_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1892_0_0_0;
extern Il2CppType t1892_1_0_0;
extern TypeInfo t1893_TI;
struct t1892;
extern TypeInfo t1892_TI;
extern Il2CppGenericClass t1892_GC;
TypeInfo t1892_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t1892_MIs, NULL, t1892_FIs, NULL, &t1893_TI, NULL, NULL, &t1892_TI, NULL, t1892_VT, &EmptyCustomAttributesCache, &t1892_TI, &t1892_0_0_0, &t1892_1_0_0, NULL, &t1892_GC, NULL, NULL, NULL, t1892_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1892), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1893_TI;

#include "t1894.h"
extern TypeInfo t1893_TI;
extern TypeInfo t1894_TI;
extern TypeInfo t290_TI;
extern TypeInfo t303_TI;
extern TypeInfo t94_TI;
extern TypeInfo t15_TI;
#include "t1894MD.h"
extern Il2CppType t1894_0_0_0;
extern MethodInfo m2771_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2934_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m17943_MI;
extern MethodInfo m2772_MI;
extern MethodInfo m10376_MI;
extern MethodInfo m2930_MI;
extern MethodInfo m2928_MI;
struct t544;
#define m17943(__this, p0, method) (void)m16859_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m17943_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseRaycaster>
extern Il2CppType t1894_0_0_1;
FieldInfo t1893_f0_FieldInfo = 
{
	"Delegate", &t1894_0_0_1, &t1893_TI, offsetof(t1893, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1893_FIs[] =
{
	&t1893_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t1893_m10371_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10371_MI = 
{
	".ctor", (methodPointerType)&m7876_gshared, &t1893_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t1893_m10371_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1894_0_0_0;
static ParameterInfo t1893_m10372_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t1894_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10372_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1893_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1893_m10372_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1893_m10373_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10373_MI = 
{
	"Invoke", (methodPointerType)&m7878_gshared, &t1893_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1893_m10373_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t1893_m10374_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10374_MI = 
{
	"Find", (methodPointerType)&m7879_gshared, &t1893_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1893_m10374_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1893_MIs[] =
{
	&m10371_MI,
	&m10372_MI,
	&m10373_MI,
	&m10374_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10373_MI;
extern MethodInfo m10374_MI;
static MethodInfo* t1893_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10373_MI,
	&m10374_MI,
};
extern Il2CppType t1894_0_0_0;
extern TypeInfo t1894_TI;
extern MethodInfo m17943_MI;
extern TypeInfo t94_TI;
extern MethodInfo m10376_MI;
static void* t1893_RGCTXData[5] = 
{
	(void*)&t1894_0_0_0,
	&t1894_TI,
	&m17943_MI,
	&t94_TI,
	&m10376_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1893_0_0_0;
extern Il2CppType t1893_1_0_0;
extern TypeInfo t544_TI;
struct t1893;
extern TypeInfo t1893_TI;
extern Il2CppGenericClass t1893_GC;
TypeInfo t1893_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t1893_MIs, NULL, t1893_FIs, NULL, &t544_TI, NULL, NULL, &t1893_TI, NULL, t1893_VT, &EmptyCustomAttributesCache, &t1893_TI, &t1893_0_0_0, &t1893_1_0_0, NULL, &t1893_GC, NULL, NULL, NULL, t1893_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1893), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1894_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseRaycaster>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1894_m10375_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1894_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10375_MI = 
{
	".ctor", (methodPointerType)&m7880_gshared, &t1894_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1894_m10375_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t94_0_0_0;
static ParameterInfo t1894_m10376_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t94_0_0_0},
};
extern TypeInfo t1894_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10376_MI = 
{
	"Invoke", (methodPointerType)&m7881_gshared, &t1894_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1894_m10376_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t94_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1894_m10377_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t94_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1894_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10377_MI = 
{
	"BeginInvoke", (methodPointerType)&m7882_gshared, &t1894_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t1894_m10377_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1894_m10378_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1894_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10378_MI = 
{
	"EndInvoke", (methodPointerType)&m7883_gshared, &t1894_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1894_m10378_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1894_MIs[] =
{
	&m10375_MI,
	&m10376_MI,
	&m10377_MI,
	&m10378_MI,
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
extern MethodInfo m10376_MI;
extern MethodInfo m10377_MI;
extern MethodInfo m10378_MI;
static MethodInfo* t1894_VT[] =
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
	&m10376_MI,
	&m10377_MI,
	&m10378_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1894_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1894_0_0_0;
extern Il2CppType t1894_1_0_0;
extern TypeInfo t189_TI;
struct t1894;
extern TypeInfo t1894_TI;
extern Il2CppGenericClass t1894_GC;
TypeInfo t1894_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t1894_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t1894_TI, NULL, t1894_VT, &EmptyCustomAttributesCache, &t1894_TI, &t1894_0_0_0, &t1894_1_0_0, t1894_IOs, &t1894_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1894), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3359_TI;

#include "t110.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.Physics2DRaycaster>
extern MethodInfo m24010_MI;
static PropertyInfo t3359____Current_PropertyInfo = 
{
	&t3359_TI, "Current", &m24010_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3359_PIs[] =
{
	&t3359____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3359_TI;
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24010_MI = 
{
	"get_Current", NULL, &t3359_TI, &t110_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3359_MIs[] =
{
	&m24010_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3359_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
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
#include "t1895.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1895_TI;
#include "t1895MD.h"

extern TypeInfo t1895_TI;
extern TypeInfo t110_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10383_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m17945_MI;
struct t14;
#define m17945(__this, p0, method) (t110 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m17945_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.Physics2DRaycaster>
extern Il2CppType t14_0_0_1;
FieldInfo t1895_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1895_TI, offsetof(t1895, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1895_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1895_TI, offsetof(t1895, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1895_FIs[] =
{
	&t1895_f0_FieldInfo,
	&t1895_f1_FieldInfo,
	NULL
};
extern MethodInfo m10380_MI;
static PropertyInfo t1895____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1895_TI, "System.Collections.IEnumerator.Current", &m10380_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10383_MI;
static PropertyInfo t1895____Current_PropertyInfo = 
{
	&t1895_TI, "Current", &m10383_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1895_PIs[] =
{
	&t1895____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1895____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1895_m10379_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1895_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10379_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t1895_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1895_m10379_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1895_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10380_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t1895_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1895_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10381_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t1895_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1895_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10382_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t1895_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1895_TI;
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10383_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t1895_TI, &t110_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1895_MIs[] =
{
	&m10379_MI,
	&m10380_MI,
	&m10381_MI,
	&m10382_MI,
	&m10383_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10380_MI;
extern MethodInfo m10382_MI;
extern MethodInfo m10381_MI;
extern MethodInfo m10383_MI;
static MethodInfo* t1895_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10380_MI,
	&m10382_MI,
	&m10381_MI,
	&m10383_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3359_TI;
static TypeInfo* t1895_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3359_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3359_TI;
static Il2CppInterfaceOffsetPair t1895_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3359_TI, 7},
};
extern MethodInfo m10383_MI;
extern TypeInfo t110_TI;
extern MethodInfo m17945_MI;
static void* t1895_RGCTXData[3] = 
{
	&m10383_MI,
	&t110_TI,
	&m17945_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1895_0_0_0;
extern Il2CppType t1895_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1895_TI;
extern Il2CppGenericClass t1895_GC;
extern TypeInfo t14_TI;
TypeInfo t1895_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1895_MIs, t1895_PIs, t1895_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1895_TI, t1895_ITIs, t1895_VT, &EmptyCustomAttributesCache, &t1895_TI, &t1895_0_0_0, &t1895_1_0_0, t1895_IOs, &t1895_GC, NULL, NULL, NULL, t1895_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1895)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3962_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.Physics2DRaycaster>
extern MethodInfo m24011_MI;
static PropertyInfo t3962____Count_PropertyInfo = 
{
	&t3962_TI, "Count", &m24011_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24012_MI;
static PropertyInfo t3962____IsReadOnly_PropertyInfo = 
{
	&t3962_TI, "IsReadOnly", &m24012_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3962_PIs[] =
{
	&t3962____Count_PropertyInfo,
	&t3962____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3962_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24011_MI = 
{
	"get_Count", NULL, &t3962_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3962_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24012_MI = 
{
	"get_IsReadOnly", NULL, &t3962_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3962_m24013_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern TypeInfo t3962_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24013_MI = 
{
	"Add", NULL, &t3962_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t3962_m24013_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3962_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m24014_MI = 
{
	"Clear", NULL, &t3962_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3962_m24015_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern TypeInfo t3962_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24015_MI = 
{
	"Contains", NULL, &t3962_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3962_m24015_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3202_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t3962_m24016_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3202_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3962_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24016_MI = 
{
	"CopyTo", NULL, &t3962_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t3962_m24016_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3962_m24017_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern TypeInfo t3962_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24017_MI = 
{
	"Remove", NULL, &t3962_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3962_m24017_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3962_MIs[] =
{
	&m24011_MI,
	&m24012_MI,
	&m24013_MI,
	&m24014_MI,
	&m24015_MI,
	&m24016_MI,
	&m24017_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3964_TI;
static TypeInfo* t3962_ITIs[] = 
{
	&t591_TI,
	&t3964_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3962_0_0_0;
extern Il2CppType t3962_1_0_0;
struct t3962;
extern TypeInfo t3962_TI;
extern Il2CppGenericClass t3962_GC;
TypeInfo t3962_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3962_MIs, t3962_PIs, NULL, NULL, NULL, NULL, NULL, &t3962_TI, t3962_ITIs, NULL, &EmptyCustomAttributesCache, &t3962_TI, &t3962_0_0_0, &t3962_1_0_0, NULL, &t3962_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3964_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.Physics2DRaycaster>
extern TypeInfo t3964_TI;
extern Il2CppType t3359_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24018_MI = 
{
	"GetEnumerator", NULL, &t3964_TI, &t3359_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3964_MIs[] =
{
	&m24018_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t3964_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3964_0_0_0;
extern Il2CppType t3964_1_0_0;
struct t3964;
extern TypeInfo t3964_TI;
extern Il2CppGenericClass t3964_GC;
TypeInfo t3964_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3964_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3964_TI, t3964_ITIs, NULL, &EmptyCustomAttributesCache, &t3964_TI, &t3964_0_0_0, &t3964_1_0_0, NULL, &t3964_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3963_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.Physics2DRaycaster>
extern MethodInfo m24019_MI;
extern MethodInfo m24020_MI;
static PropertyInfo t3963____Item_PropertyInfo = 
{
	&t3963_TI, "Item", &m24019_MI, &m24020_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3963_PIs[] =
{
	&t3963____Item_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3963_m24021_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern TypeInfo t3963_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24021_MI = 
{
	"IndexOf", NULL, &t3963_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t3963_m24021_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3963_m24022_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern TypeInfo t3963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24022_MI = 
{
	"Insert", NULL, &t3963_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t3963_m24022_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3963_m24023_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24023_MI = 
{
	"RemoveAt", NULL, &t3963_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3963_m24023_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3963_m24019_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3963_TI;
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24019_MI = 
{
	"get_Item", NULL, &t3963_TI, &t110_0_0_0, RuntimeInvoker_t4_t16, t3963_m24019_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3963_m24020_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern TypeInfo t3963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24020_MI = 
{
	"set_Item", NULL, &t3963_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t3963_m24020_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3963_MIs[] =
{
	&m24021_MI,
	&m24022_MI,
	&m24023_MI,
	&m24019_MI,
	&m24020_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3962_TI;
extern TypeInfo t3964_TI;
static TypeInfo* t3963_ITIs[] = 
{
	&t591_TI,
	&t3962_TI,
	&t3964_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3963_0_0_0;
extern Il2CppType t3963_1_0_0;
struct t3963;
extern TypeInfo t3963_TI;
extern Il2CppGenericClass t3963_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3963_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3963_MIs, t3963_PIs, NULL, NULL, NULL, NULL, NULL, &t3963_TI, t3963_ITIs, NULL, &t1400__CustomAttributeCache, &t3963_TI, &t3963_0_0_0, &t3963_1_0_0, NULL, &t3963_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3965_TI;

#include "t111.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PhysicsRaycaster>
extern MethodInfo m24024_MI;
static PropertyInfo t3965____Count_PropertyInfo = 
{
	&t3965_TI, "Count", &m24024_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24025_MI;
static PropertyInfo t3965____IsReadOnly_PropertyInfo = 
{
	&t3965_TI, "IsReadOnly", &m24025_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3965_PIs[] =
{
	&t3965____Count_PropertyInfo,
	&t3965____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3965_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24024_MI = 
{
	"get_Count", NULL, &t3965_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3965_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24025_MI = 
{
	"get_IsReadOnly", NULL, &t3965_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t111_0_0_0;
static ParameterInfo t3965_m24026_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t111_0_0_0},
};
extern TypeInfo t3965_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24026_MI = 
{
	"Add", NULL, &t3965_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t3965_m24026_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3965_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m24027_MI = 
{
	"Clear", NULL, &t3965_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t111_0_0_0;
static ParameterInfo t3965_m24028_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t111_0_0_0},
};
extern TypeInfo t3965_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24028_MI = 
{
	"Contains", NULL, &t3965_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3965_m24028_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3203_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t3965_m24029_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3203_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3965_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24029_MI = 
{
	"CopyTo", NULL, &t3965_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t3965_m24029_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t111_0_0_0;
static ParameterInfo t3965_m24030_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t111_0_0_0},
};
extern TypeInfo t3965_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24030_MI = 
{
	"Remove", NULL, &t3965_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3965_m24030_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3965_MIs[] =
{
	&m24024_MI,
	&m24025_MI,
	&m24026_MI,
	&m24027_MI,
	&m24028_MI,
	&m24029_MI,
	&m24030_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3967_TI;
static TypeInfo* t3965_ITIs[] = 
{
	&t591_TI,
	&t3967_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3965_0_0_0;
extern Il2CppType t3965_1_0_0;
struct t3965;
extern TypeInfo t3965_TI;
extern Il2CppGenericClass t3965_GC;
TypeInfo t3965_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3965_MIs, t3965_PIs, NULL, NULL, NULL, NULL, NULL, &t3965_TI, t3965_ITIs, NULL, &EmptyCustomAttributesCache, &t3965_TI, &t3965_0_0_0, &t3965_1_0_0, NULL, &t3965_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3967_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.PhysicsRaycaster>
extern TypeInfo t3967_TI;
extern Il2CppType t3360_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24031_MI = 
{
	"GetEnumerator", NULL, &t3967_TI, &t3360_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3967_MIs[] =
{
	&m24031_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t3967_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3967_0_0_0;
extern Il2CppType t3967_1_0_0;
struct t3967;
extern TypeInfo t3967_TI;
extern Il2CppGenericClass t3967_GC;
TypeInfo t3967_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3967_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3967_TI, t3967_ITIs, NULL, &EmptyCustomAttributesCache, &t3967_TI, &t3967_0_0_0, &t3967_1_0_0, NULL, &t3967_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3360_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PhysicsRaycaster>
extern MethodInfo m24032_MI;
static PropertyInfo t3360____Current_PropertyInfo = 
{
	&t3360_TI, "Current", &m24032_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3360_PIs[] =
{
	&t3360____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3360_TI;
extern Il2CppType t111_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24032_MI = 
{
	"get_Current", NULL, &t3360_TI, &t111_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3360_MIs[] =
{
	&m24032_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3360_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
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
#include "t1896.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1896_TI;
#include "t1896MD.h"

extern TypeInfo t1896_TI;
extern TypeInfo t111_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10388_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m17956_MI;
struct t14;
#define m17956(__this, p0, method) (t111 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m17956_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PhysicsRaycaster>
extern Il2CppType t14_0_0_1;
FieldInfo t1896_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1896_TI, offsetof(t1896, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1896_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1896_TI, offsetof(t1896, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1896_FIs[] =
{
	&t1896_f0_FieldInfo,
	&t1896_f1_FieldInfo,
	NULL
};
extern MethodInfo m10385_MI;
static PropertyInfo t1896____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1896_TI, "System.Collections.IEnumerator.Current", &m10385_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10388_MI;
static PropertyInfo t1896____Current_PropertyInfo = 
{
	&t1896_TI, "Current", &m10388_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1896_PIs[] =
{
	&t1896____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1896____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1896_m10384_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1896_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10384_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t1896_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1896_m10384_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10385_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t1896_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10386_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t1896_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10387_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t1896_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t111_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10388_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t1896_TI, &t111_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1896_MIs[] =
{
	&m10384_MI,
	&m10385_MI,
	&m10386_MI,
	&m10387_MI,
	&m10388_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10385_MI;
extern MethodInfo m10387_MI;
extern MethodInfo m10386_MI;
extern MethodInfo m10388_MI;
static MethodInfo* t1896_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10385_MI,
	&m10387_MI,
	&m10386_MI,
	&m10388_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3360_TI;
static TypeInfo* t1896_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3360_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3360_TI;
static Il2CppInterfaceOffsetPair t1896_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3360_TI, 7},
};
extern MethodInfo m10388_MI;
extern TypeInfo t111_TI;
extern MethodInfo m17956_MI;
static void* t1896_RGCTXData[3] = 
{
	&m10388_MI,
	&t111_TI,
	&m17956_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1896_0_0_0;
extern Il2CppType t1896_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1896_TI;
extern Il2CppGenericClass t1896_GC;
extern TypeInfo t14_TI;
TypeInfo t1896_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1896_MIs, t1896_PIs, t1896_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1896_TI, t1896_ITIs, t1896_VT, &EmptyCustomAttributesCache, &t1896_TI, &t1896_0_0_0, &t1896_1_0_0, t1896_IOs, &t1896_GC, NULL, NULL, NULL, t1896_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1896)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3966_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.PhysicsRaycaster>
extern MethodInfo m24033_MI;
extern MethodInfo m24034_MI;
static PropertyInfo t3966____Item_PropertyInfo = 
{
	&t3966_TI, "Item", &m24033_MI, &m24034_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3966_PIs[] =
{
	&t3966____Item_PropertyInfo,
	NULL
};
extern Il2CppType t111_0_0_0;
static ParameterInfo t3966_m24035_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t111_0_0_0},
};
extern TypeInfo t3966_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24035_MI = 
{
	"IndexOf", NULL, &t3966_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t3966_m24035_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t111_0_0_0;
static ParameterInfo t3966_m24036_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t111_0_0_0},
};
extern TypeInfo t3966_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24036_MI = 
{
	"Insert", NULL, &t3966_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t3966_m24036_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3966_m24037_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3966_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24037_MI = 
{
	"RemoveAt", NULL, &t3966_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3966_m24037_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3966_m24033_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3966_TI;
extern Il2CppType t111_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24033_MI = 
{
	"get_Item", NULL, &t3966_TI, &t111_0_0_0, RuntimeInvoker_t4_t16, t3966_m24033_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t111_0_0_0;
static ParameterInfo t3966_m24034_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t111_0_0_0},
};
extern TypeInfo t3966_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24034_MI = 
{
	"set_Item", NULL, &t3966_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t3966_m24034_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3966_MIs[] =
{
	&m24035_MI,
	&m24036_MI,
	&m24037_MI,
	&m24033_MI,
	&m24034_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3965_TI;
extern TypeInfo t3967_TI;
static TypeInfo* t3966_ITIs[] = 
{
	&t591_TI,
	&t3965_TI,
	&t3967_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3966_0_0_0;
extern Il2CppType t3966_1_0_0;
struct t3966;
extern TypeInfo t3966_TI;
extern Il2CppGenericClass t3966_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3966_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3966_MIs, t3966_PIs, NULL, NULL, NULL, NULL, NULL, &t3966_TI, t3966_ITIs, NULL, &t1400__CustomAttributeCache, &t3966_TI, &t3966_0_0_0, &t3966_1_0_0, NULL, &t3966_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1897.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1897_TI;
#include "t1897MD.h"

#include "t1898.h"
extern TypeInfo t305_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1897_TI;
extern TypeInfo t110_TI;
extern TypeInfo t1898_TI;
extern TypeInfo t15_TI;
#include "t1898MD.h"
extern MethodInfo m10391_MI;
extern MethodInfo m10393_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.EventSystems.Physics2DRaycaster>
extern Il2CppType t305_0_0_33;
FieldInfo t1897_f1_FieldInfo = 
{
	"m_Arg1", &t305_0_0_33, &t1897_TI, offsetof(t1897, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1897_FIs[] =
{
	&t1897_f1_FieldInfo,
	NULL
};
extern Il2CppType t23_0_0_0;
extern Il2CppType t545_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1897_m10389_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t23_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern TypeInfo t1897_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10389_MI = 
{
	".ctor", (methodPointerType)&m7873_gshared, &t1897_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4_t4, t1897_m10389_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1897_m10390_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t1897_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10390_MI = 
{
	"Invoke", (methodPointerType)&m7875_gshared, &t1897_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1897_m10390_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1897_MIs[] =
{
	&m10389_MI,
	&m10390_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10390_MI;
extern MethodInfo m10394_MI;
static MethodInfo* t1897_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10390_MI,
	&m10394_MI,
};
extern Il2CppType t1899_0_0_0;
extern TypeInfo t1899_TI;
extern MethodInfo m17966_MI;
extern TypeInfo t110_TI;
extern MethodInfo m10396_MI;
extern MethodInfo m10391_MI;
extern TypeInfo t110_TI;
extern MethodInfo m10393_MI;
static void* t1897_RGCTXData[8] = 
{
	(void*)&t1899_0_0_0,
	&t1899_TI,
	&m17966_MI,
	&t110_TI,
	&m10396_MI,
	&m10391_MI,
	&t110_TI,
	&m10393_MI,
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
extern TypeInfo t290_TI;
extern TypeInfo t303_TI;
extern TypeInfo t110_TI;
extern TypeInfo t15_TI;
#include "t1899MD.h"
extern Il2CppType t1899_0_0_0;
extern MethodInfo m2771_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2934_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m17966_MI;
extern MethodInfo m2772_MI;
extern MethodInfo m10396_MI;
extern MethodInfo m2930_MI;
extern MethodInfo m2928_MI;
struct t544;
#define m17966(__this, p0, method) (void)m16859_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m17966_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.Physics2DRaycaster>
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
extern Il2CppType t545_0_0_0;
static ParameterInfo t1898_m10391_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10391_MI = 
{
	".ctor", (methodPointerType)&m7876_gshared, &t1898_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t1898_m10391_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1899_0_0_0;
static ParameterInfo t1898_m10392_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t1899_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10392_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1898_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1898_m10392_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1898_m10393_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10393_MI = 
{
	"Invoke", (methodPointerType)&m7878_gshared, &t1898_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1898_m10393_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t1898_m10394_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10394_MI = 
{
	"Find", (methodPointerType)&m7879_gshared, &t1898_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1898_m10394_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1898_MIs[] =
{
	&m10391_MI,
	&m10392_MI,
	&m10393_MI,
	&m10394_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10393_MI;
extern MethodInfo m10394_MI;
static MethodInfo* t1898_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10393_MI,
	&m10394_MI,
};
extern Il2CppType t1899_0_0_0;
extern TypeInfo t1899_TI;
extern MethodInfo m17966_MI;
extern TypeInfo t110_TI;
extern MethodInfo m10396_MI;
static void* t1898_RGCTXData[5] = 
{
	(void*)&t1899_0_0_0,
	&t1899_TI,
	&m17966_MI,
	&t110_TI,
	&m10396_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1898_0_0_0;
extern Il2CppType t1898_1_0_0;
extern TypeInfo t544_TI;
struct t1898;
extern TypeInfo t1898_TI;
extern Il2CppGenericClass t1898_GC;
TypeInfo t1898_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t1898_MIs, NULL, t1898_FIs, NULL, &t544_TI, NULL, NULL, &t1898_TI, NULL, t1898_VT, &EmptyCustomAttributesCache, &t1898_TI, &t1898_0_0_0, &t1898_1_0_0, NULL, &t1898_GC, NULL, NULL, NULL, t1898_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1898), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1899_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.Physics2DRaycaster>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1899_m10395_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1899_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10395_MI = 
{
	".ctor", (methodPointerType)&m7880_gshared, &t1899_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1899_m10395_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1899_m10396_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern TypeInfo t1899_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10396_MI = 
{
	"Invoke", (methodPointerType)&m7881_gshared, &t1899_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1899_m10396_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1899_m10397_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1899_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10397_MI = 
{
	"BeginInvoke", (methodPointerType)&m7882_gshared, &t1899_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t1899_m10397_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1899_m10398_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1899_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10398_MI = 
{
	"EndInvoke", (methodPointerType)&m7883_gshared, &t1899_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1899_m10398_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1899_MIs[] =
{
	&m10395_MI,
	&m10396_MI,
	&m10397_MI,
	&m10398_MI,
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
extern MethodInfo m10396_MI;
extern MethodInfo m10397_MI;
extern MethodInfo m10398_MI;
static MethodInfo* t1899_VT[] =
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
	&m10396_MI,
	&m10397_MI,
	&m10398_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1899_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1899_0_0_0;
extern Il2CppType t1899_1_0_0;
extern TypeInfo t189_TI;
struct t1899;
extern TypeInfo t1899_TI;
extern Il2CppGenericClass t1899_GC;
TypeInfo t1899_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t1899_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t1899_TI, NULL, t1899_VT, &EmptyCustomAttributesCache, &t1899_TI, &t1899_0_0_0, &t1899_1_0_0, t1899_IOs, &t1899_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1899), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3361_TI;

#include "t320.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit2D>
extern MethodInfo m24038_MI;
static PropertyInfo t3361____Current_PropertyInfo = 
{
	&t3361_TI, "Current", &m24038_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3361_PIs[] =
{
	&t3361____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3361_TI;
extern Il2CppType t320_0_0_0;
extern void* RuntimeInvoker_t320 (MethodInfo* method, void* obj, void** args);
MethodInfo m24038_MI = 
{
	"get_Current", NULL, &t3361_TI, &t320_0_0_0, RuntimeInvoker_t320, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3361_MIs[] =
{
	&m24038_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3361_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3361_0_0_0;
extern Il2CppType t3361_1_0_0;
struct t3361;
extern TypeInfo t3361_TI;
extern Il2CppGenericClass t3361_GC;
TypeInfo t3361_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3361_MIs, t3361_PIs, NULL, NULL, NULL, NULL, NULL, &t3361_TI, t3361_ITIs, NULL, &EmptyCustomAttributesCache, &t3361_TI, &t3361_0_0_0, &t3361_1_0_0, NULL, &t3361_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1900.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1900_TI;
#include "t1900MD.h"

extern TypeInfo t1900_TI;
extern TypeInfo t320_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10403_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m17968_MI;
struct t14;
 t320  m17968 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17968_MI;


extern MethodInfo m10399_MI;
 void m10399 (t1900 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10400_MI;
 t4 * m10400 (t1900 * __this, MethodInfo* method){
	{
		t320  L_0 = m10403(__this, &m10403_MI);
		t320  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t320_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10401_MI;
 void m10401 (t1900 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10402_MI;
 bool m10402 (t1900 * __this, MethodInfo* method){
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
extern MethodInfo m10403_MI;
 t320  m10403 (t1900 * __this, MethodInfo* method){
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
		t320  L_8 = m17968(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m17968_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>
extern Il2CppType t14_0_0_1;
FieldInfo t1900_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1900_TI, offsetof(t1900, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1900_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1900_TI, offsetof(t1900, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1900_FIs[] =
{
	&t1900_f0_FieldInfo,
	&t1900_f1_FieldInfo,
	NULL
};
extern MethodInfo m10400_MI;
static PropertyInfo t1900____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1900_TI, "System.Collections.IEnumerator.Current", &m10400_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10403_MI;
static PropertyInfo t1900____Current_PropertyInfo = 
{
	&t1900_TI, "Current", &m10403_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1900_PIs[] =
{
	&t1900____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1900____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1900_m10399_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1900_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10399_MI = 
{
	".ctor", (methodPointerType)&m10399, &t1900_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1900_m10399_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1900_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10400_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10400, &t1900_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1900_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10401_MI = 
{
	"Dispose", (methodPointerType)&m10401, &t1900_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1900_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10402_MI = 
{
	"MoveNext", (methodPointerType)&m10402, &t1900_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1900_TI;
extern Il2CppType t320_0_0_0;
extern void* RuntimeInvoker_t320 (MethodInfo* method, void* obj, void** args);
MethodInfo m10403_MI = 
{
	"get_Current", (methodPointerType)&m10403, &t1900_TI, &t320_0_0_0, RuntimeInvoker_t320, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1900_MIs[] =
{
	&m10399_MI,
	&m10400_MI,
	&m10401_MI,
	&m10402_MI,
	&m10403_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10400_MI;
extern MethodInfo m10402_MI;
extern MethodInfo m10401_MI;
extern MethodInfo m10403_MI;
static MethodInfo* t1900_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10400_MI,
	&m10402_MI,
	&m10401_MI,
	&m10403_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3361_TI;
static TypeInfo* t1900_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3361_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3361_TI;
static Il2CppInterfaceOffsetPair t1900_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3361_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1900_0_0_0;
extern Il2CppType t1900_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1900_TI;
extern Il2CppGenericClass t1900_GC;
extern TypeInfo t14_TI;
TypeInfo t1900_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1900_MIs, t1900_PIs, t1900_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1900_TI, t1900_ITIs, t1900_VT, &EmptyCustomAttributesCache, &t1900_TI, &t1900_0_0_0, &t1900_1_0_0, t1900_IOs, &t1900_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1900)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3968_TI;

#include "UnityEngine_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>
extern MethodInfo m24039_MI;
static PropertyInfo t3968____Count_PropertyInfo = 
{
	&t3968_TI, "Count", &m24039_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24040_MI;
static PropertyInfo t3968____IsReadOnly_PropertyInfo = 
{
	&t3968_TI, "IsReadOnly", &m24040_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3968_PIs[] =
{
	&t3968____Count_PropertyInfo,
	&t3968____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3968_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24039_MI = 
{
	"get_Count", NULL, &t3968_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3968_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24040_MI = 
{
	"get_IsReadOnly", NULL, &t3968_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t320_0_0_0;
static ParameterInfo t3968_m24041_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t320_0_0_0},
};
extern TypeInfo t3968_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t320 (MethodInfo* method, void* obj, void** args);
MethodInfo m24041_MI = 
{
	"Add", NULL, &t3968_TI, &t15_0_0_0, RuntimeInvoker_t15_t320, t3968_m24041_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3968_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m24042_MI = 
{
	"Clear", NULL, &t3968_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t320_0_0_0;
static ParameterInfo t3968_m24043_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t320_0_0_0},
};
extern TypeInfo t3968_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t320 (MethodInfo* method, void* obj, void** args);
MethodInfo m24043_MI = 
{
	"Contains", NULL, &t3968_TI, &t17_0_0_0, RuntimeInvoker_t17_t320, t3968_m24043_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t325_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t3968_m24044_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t325_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3968_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24044_MI = 
{
	"CopyTo", NULL, &t3968_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t3968_m24044_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t320_0_0_0;
static ParameterInfo t3968_m24045_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t320_0_0_0},
};
extern TypeInfo t3968_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t320 (MethodInfo* method, void* obj, void** args);
MethodInfo m24045_MI = 
{
	"Remove", NULL, &t3968_TI, &t17_0_0_0, RuntimeInvoker_t17_t320, t3968_m24045_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3968_MIs[] =
{
	&m24039_MI,
	&m24040_MI,
	&m24041_MI,
	&m24042_MI,
	&m24043_MI,
	&m24044_MI,
	&m24045_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3970_TI;
static TypeInfo* t3968_ITIs[] = 
{
	&t591_TI,
	&t3970_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3968_0_0_0;
extern Il2CppType t3968_1_0_0;
struct t3968;
extern TypeInfo t3968_TI;
extern Il2CppGenericClass t3968_GC;
TypeInfo t3968_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3968_MIs, t3968_PIs, NULL, NULL, NULL, NULL, NULL, &t3968_TI, t3968_ITIs, NULL, &EmptyCustomAttributesCache, &t3968_TI, &t3968_0_0_0, &t3968_1_0_0, NULL, &t3968_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3970_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit2D>
extern TypeInfo t3970_TI;
extern Il2CppType t3361_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24046_MI = 
{
	"GetEnumerator", NULL, &t3970_TI, &t3361_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3970_MIs[] =
{
	&m24046_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t3970_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3970_0_0_0;
extern Il2CppType t3970_1_0_0;
struct t3970;
extern TypeInfo t3970_TI;
extern Il2CppGenericClass t3970_GC;
TypeInfo t3970_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3970_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3970_TI, t3970_ITIs, NULL, &EmptyCustomAttributesCache, &t3970_TI, &t3970_0_0_0, &t3970_1_0_0, NULL, &t3970_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3969_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>
extern MethodInfo m24047_MI;
extern MethodInfo m24048_MI;
static PropertyInfo t3969____Item_PropertyInfo = 
{
	&t3969_TI, "Item", &m24047_MI, &m24048_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3969_PIs[] =
{
	&t3969____Item_PropertyInfo,
	NULL
};
extern Il2CppType t320_0_0_0;
static ParameterInfo t3969_m24049_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t320_0_0_0},
};
extern TypeInfo t3969_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t320 (MethodInfo* method, void* obj, void** args);
MethodInfo m24049_MI = 
{
	"IndexOf", NULL, &t3969_TI, &t16_0_0_0, RuntimeInvoker_t16_t320, t3969_m24049_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t320_0_0_0;
static ParameterInfo t3969_m24050_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t320_0_0_0},
};
extern TypeInfo t3969_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t320 (MethodInfo* method, void* obj, void** args);
MethodInfo m24050_MI = 
{
	"Insert", NULL, &t3969_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t320, t3969_m24050_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3969_m24051_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3969_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24051_MI = 
{
	"RemoveAt", NULL, &t3969_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3969_m24051_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3969_m24047_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3969_TI;
extern Il2CppType t320_0_0_0;
extern void* RuntimeInvoker_t320_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24047_MI = 
{
	"get_Item", NULL, &t3969_TI, &t320_0_0_0, RuntimeInvoker_t320_t16, t3969_m24047_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t320_0_0_0;
static ParameterInfo t3969_m24048_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t320_0_0_0},
};
extern TypeInfo t3969_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t320 (MethodInfo* method, void* obj, void** args);
MethodInfo m24048_MI = 
{
	"set_Item", NULL, &t3969_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t320, t3969_m24048_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3969_MIs[] =
{
	&m24049_MI,
	&m24050_MI,
	&m24051_MI,
	&m24047_MI,
	&m24048_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3968_TI;
extern TypeInfo t3970_TI;
static TypeInfo* t3969_ITIs[] = 
{
	&t591_TI,
	&t3968_TI,
	&t3970_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3969_0_0_0;
extern Il2CppType t3969_1_0_0;
struct t3969;
extern TypeInfo t3969_TI;
extern Il2CppGenericClass t3969_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3969_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3969_MIs, t3969_PIs, NULL, NULL, NULL, NULL, NULL, &t3969_TI, t3969_ITIs, NULL, &t1400__CustomAttributeCache, &t3969_TI, &t3969_0_0_0, &t3969_1_0_0, NULL, &t3969_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1901.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1901_TI;
#include "t1901MD.h"

#include "t1902.h"
extern TypeInfo t305_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1901_TI;
extern TypeInfo t111_TI;
extern TypeInfo t1902_TI;
extern TypeInfo t15_TI;
#include "t1902MD.h"
extern MethodInfo m10406_MI;
extern MethodInfo m10408_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.EventSystems.PhysicsRaycaster>
extern Il2CppType t305_0_0_33;
FieldInfo t1901_f1_FieldInfo = 
{
	"m_Arg1", &t305_0_0_33, &t1901_TI, offsetof(t1901, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1901_FIs[] =
{
	&t1901_f1_FieldInfo,
	NULL
};
extern Il2CppType t23_0_0_0;
extern Il2CppType t545_0_0_0;
extern Il2CppType t111_0_0_0;
static ParameterInfo t1901_m10404_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t23_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t111_0_0_0},
};
extern TypeInfo t1901_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10404_MI = 
{
	".ctor", (methodPointerType)&m7873_gshared, &t1901_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4_t4, t1901_m10404_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1901_m10405_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t1901_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10405_MI = 
{
	"Invoke", (methodPointerType)&m7875_gshared, &t1901_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1901_m10405_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1901_MIs[] =
{
	&m10404_MI,
	&m10405_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10405_MI;
extern MethodInfo m10409_MI;
static MethodInfo* t1901_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10405_MI,
	&m10409_MI,
};
extern Il2CppType t1903_0_0_0;
extern TypeInfo t1903_TI;
extern MethodInfo m17978_MI;
extern TypeInfo t111_TI;
extern MethodInfo m10411_MI;
extern MethodInfo m10406_MI;
extern TypeInfo t111_TI;
extern MethodInfo m10408_MI;
static void* t1901_RGCTXData[8] = 
{
	(void*)&t1903_0_0_0,
	&t1903_TI,
	&m17978_MI,
	&t111_TI,
	&m10411_MI,
	&m10406_MI,
	&t111_TI,
	&m10408_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1901_0_0_0;
extern Il2CppType t1901_1_0_0;
extern TypeInfo t1902_TI;
struct t1901;
extern TypeInfo t1901_TI;
extern Il2CppGenericClass t1901_GC;
TypeInfo t1901_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t1901_MIs, NULL, t1901_FIs, NULL, &t1902_TI, NULL, NULL, &t1901_TI, NULL, t1901_VT, &EmptyCustomAttributesCache, &t1901_TI, &t1901_0_0_0, &t1901_1_0_0, NULL, &t1901_GC, NULL, NULL, NULL, t1901_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1901), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1902_TI;

#include "t1903.h"
extern TypeInfo t1902_TI;
extern TypeInfo t1903_TI;
extern TypeInfo t290_TI;
extern TypeInfo t303_TI;
extern TypeInfo t111_TI;
extern TypeInfo t15_TI;
#include "t1903MD.h"
extern Il2CppType t1903_0_0_0;
extern MethodInfo m2771_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2934_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m17978_MI;
extern MethodInfo m2772_MI;
extern MethodInfo m10411_MI;
extern MethodInfo m2930_MI;
extern MethodInfo m2928_MI;
struct t544;
#define m17978(__this, p0, method) (void)m16859_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m17978_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.PhysicsRaycaster>
extern Il2CppType t1903_0_0_1;
FieldInfo t1902_f0_FieldInfo = 
{
	"Delegate", &t1903_0_0_1, &t1902_TI, offsetof(t1902, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1902_FIs[] =
{
	&t1902_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t1902_m10406_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t1902_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10406_MI = 
{
	".ctor", (methodPointerType)&m7876_gshared, &t1902_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t1902_m10406_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1903_0_0_0;
static ParameterInfo t1902_m10407_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t1903_0_0_0},
};
extern TypeInfo t1902_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10407_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1902_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1902_m10407_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1902_m10408_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t1902_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10408_MI = 
{
	"Invoke", (methodPointerType)&m7878_gshared, &t1902_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1902_m10408_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t1902_m10409_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t1902_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10409_MI = 
{
	"Find", (methodPointerType)&m7879_gshared, &t1902_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1902_m10409_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1902_MIs[] =
{
	&m10406_MI,
	&m10407_MI,
	&m10408_MI,
	&m10409_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10408_MI;
extern MethodInfo m10409_MI;
static MethodInfo* t1902_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10408_MI,
	&m10409_MI,
};
extern Il2CppType t1903_0_0_0;
extern TypeInfo t1903_TI;
extern MethodInfo m17978_MI;
extern TypeInfo t111_TI;
extern MethodInfo m10411_MI;
static void* t1902_RGCTXData[5] = 
{
	(void*)&t1903_0_0_0,
	&t1903_TI,
	&m17978_MI,
	&t111_TI,
	&m10411_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1902_0_0_0;
extern Il2CppType t1902_1_0_0;
extern TypeInfo t544_TI;
struct t1902;
extern TypeInfo t1902_TI;
extern Il2CppGenericClass t1902_GC;
TypeInfo t1902_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t1902_MIs, NULL, t1902_FIs, NULL, &t544_TI, NULL, NULL, &t1902_TI, NULL, t1902_VT, &EmptyCustomAttributesCache, &t1902_TI, &t1902_0_0_0, &t1902_1_0_0, NULL, &t1902_GC, NULL, NULL, NULL, t1902_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1902), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1903_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.PhysicsRaycaster>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1903_m10410_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1903_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10410_MI = 
{
	".ctor", (methodPointerType)&m7880_gshared, &t1903_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1903_m10410_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t111_0_0_0;
static ParameterInfo t1903_m10411_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t111_0_0_0},
};
extern TypeInfo t1903_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10411_MI = 
{
	"Invoke", (methodPointerType)&m7881_gshared, &t1903_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1903_m10411_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t111_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1903_m10412_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t111_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1903_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10412_MI = 
{
	"BeginInvoke", (methodPointerType)&m7882_gshared, &t1903_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t1903_m10412_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1903_m10413_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1903_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10413_MI = 
{
	"EndInvoke", (methodPointerType)&m7883_gshared, &t1903_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1903_m10413_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1903_MIs[] =
{
	&m10410_MI,
	&m10411_MI,
	&m10412_MI,
	&m10413_MI,
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
extern MethodInfo m10411_MI;
extern MethodInfo m10412_MI;
extern MethodInfo m10413_MI;
static MethodInfo* t1903_VT[] =
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
	&m10411_MI,
	&m10412_MI,
	&m10413_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1903_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1903_0_0_0;
extern Il2CppType t1903_1_0_0;
extern TypeInfo t189_TI;
struct t1903;
extern TypeInfo t1903_TI;
extern Il2CppGenericClass t1903_GC;
TypeInfo t1903_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t1903_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t1903_TI, NULL, t1903_VT, &EmptyCustomAttributesCache, &t1903_TI, &t1903_0_0_0, &t1903_1_0_0, t1903_IOs, &t1903_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1903), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t112.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t112_TI;
#include "t112MD.h"

#include "t114.h"


extern MethodInfo m1457_MI;
 void m1457 (t112 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10414_MI;
 int32_t m10414 (t112 * __this, t114  p0, t114  p1, MethodInfo* method){
	typedef  int32_t (*FunctionPointerType) (t4 * __this, t114  p0, t114  p1, MethodInfo* method);
	if (__this->f9)
		m10414((t112 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10415_MI;
 t4 * m10415 (t112 * __this, t114  p0, t114  p1, t49 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t114_TI), &p0);
	__d_args[1] = Box(InitializedTypeInfo(&t114_TI), &p1);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10416_MI;
 int32_t m10416 (t112 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Comparison`1<UnityEngine.RaycastHit>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t112_m1457_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t112_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m1457_MI = 
{
	".ctor", (methodPointerType)&m1457, &t112_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t112_m1457_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t112_m10414_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t112_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t114_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m10414_MI = 
{
	"Invoke", (methodPointerType)&m10414, &t112_TI, &t16_0_0_0, RuntimeInvoker_t16_t114_t114, t112_m10414_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t112_m10415_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t112_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t114_t114_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10415_MI = 
{
	"BeginInvoke", (methodPointerType)&m10415, &t112_TI, &t48_0_0_0, RuntimeInvoker_t4_t114_t114_t4_t4, t112_m10415_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t112_m10416_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t112_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10416_MI = 
{
	"EndInvoke", (methodPointerType)&m10416, &t112_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t112_m10416_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t112_MIs[] =
{
	&m1457_MI,
	&m10414_MI,
	&m10415_MI,
	&m10416_MI,
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
extern MethodInfo m10414_MI;
extern MethodInfo m10415_MI;
extern MethodInfo m10416_MI;
static MethodInfo* t112_VT[] =
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
	&m10414_MI,
	&m10415_MI,
	&m10416_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t112_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t112_0_0_0;
extern Il2CppType t112_1_0_0;
extern TypeInfo t189_TI;
struct t112;
extern TypeInfo t112_TI;
extern Il2CppGenericClass t112_GC;
TypeInfo t112_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t112_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t112_TI, NULL, t112_VT, &EmptyCustomAttributesCache, &t112_TI, &t112_0_0_0, &t112_1_0_0, t112_IOs, &t112_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t112), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3362_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit>
extern MethodInfo m24052_MI;
static PropertyInfo t3362____Current_PropertyInfo = 
{
	&t3362_TI, "Current", &m24052_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3362_PIs[] =
{
	&t3362____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3362_TI;
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m24052_MI = 
{
	"get_Current", NULL, &t3362_TI, &t114_0_0_0, RuntimeInvoker_t114, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3362_MIs[] =
{
	&m24052_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3362_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3362_0_0_0;
extern Il2CppType t3362_1_0_0;
struct t3362;
extern TypeInfo t3362_TI;
extern Il2CppGenericClass t3362_GC;
TypeInfo t3362_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3362_MIs, t3362_PIs, NULL, NULL, NULL, NULL, NULL, &t3362_TI, t3362_ITIs, NULL, &EmptyCustomAttributesCache, &t3362_TI, &t3362_0_0_0, &t3362_1_0_0, NULL, &t3362_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1904.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1904_TI;
#include "t1904MD.h"

extern TypeInfo t1904_TI;
extern TypeInfo t114_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10421_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m17980_MI;
struct t14;
 t114  m17980 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17980_MI;


extern MethodInfo m10417_MI;
 void m10417 (t1904 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10418_MI;
 t4 * m10418 (t1904 * __this, MethodInfo* method){
	{
		t114  L_0 = m10421(__this, &m10421_MI);
		t114  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t114_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10419_MI;
 void m10419 (t1904 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10420_MI;
 bool m10420 (t1904 * __this, MethodInfo* method){
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
extern MethodInfo m10421_MI;
 t114  m10421 (t1904 * __this, MethodInfo* method){
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
		t114  L_8 = m17980(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m17980_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
extern Il2CppType t14_0_0_1;
FieldInfo t1904_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1904_TI, offsetof(t1904, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1904_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1904_TI, offsetof(t1904, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1904_FIs[] =
{
	&t1904_f0_FieldInfo,
	&t1904_f1_FieldInfo,
	NULL
};
extern MethodInfo m10418_MI;
static PropertyInfo t1904____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1904_TI, "System.Collections.IEnumerator.Current", &m10418_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10421_MI;
static PropertyInfo t1904____Current_PropertyInfo = 
{
	&t1904_TI, "Current", &m10421_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1904_PIs[] =
{
	&t1904____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1904____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1904_m10417_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1904_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10417_MI = 
{
	".ctor", (methodPointerType)&m10417, &t1904_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1904_m10417_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1904_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10418_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10418, &t1904_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1904_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10419_MI = 
{
	"Dispose", (methodPointerType)&m10419, &t1904_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1904_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10420_MI = 
{
	"MoveNext", (methodPointerType)&m10420, &t1904_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1904_TI;
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m10421_MI = 
{
	"get_Current", (methodPointerType)&m10421, &t1904_TI, &t114_0_0_0, RuntimeInvoker_t114, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1904_MIs[] =
{
	&m10417_MI,
	&m10418_MI,
	&m10419_MI,
	&m10420_MI,
	&m10421_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10418_MI;
extern MethodInfo m10420_MI;
extern MethodInfo m10419_MI;
extern MethodInfo m10421_MI;
static MethodInfo* t1904_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10418_MI,
	&m10420_MI,
	&m10419_MI,
	&m10421_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3362_TI;
static TypeInfo* t1904_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3362_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3362_TI;
static Il2CppInterfaceOffsetPair t1904_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3362_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1904_0_0_0;
extern Il2CppType t1904_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1904_TI;
extern Il2CppGenericClass t1904_GC;
extern TypeInfo t14_TI;
TypeInfo t1904_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1904_MIs, t1904_PIs, t1904_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1904_TI, t1904_ITIs, t1904_VT, &EmptyCustomAttributesCache, &t1904_TI, &t1904_0_0_0, &t1904_1_0_0, t1904_IOs, &t1904_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1904)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3971_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>
extern MethodInfo m24053_MI;
static PropertyInfo t3971____Count_PropertyInfo = 
{
	&t3971_TI, "Count", &m24053_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24054_MI;
static PropertyInfo t3971____IsReadOnly_PropertyInfo = 
{
	&t3971_TI, "IsReadOnly", &m24054_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3971_PIs[] =
{
	&t3971____Count_PropertyInfo,
	&t3971____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3971_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24053_MI = 
{
	"get_Count", NULL, &t3971_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3971_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24054_MI = 
{
	"get_IsReadOnly", NULL, &t3971_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3971_m24055_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t3971_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m24055_MI = 
{
	"Add", NULL, &t3971_TI, &t15_0_0_0, RuntimeInvoker_t15_t114, t3971_m24055_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3971_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m24056_MI = 
{
	"Clear", NULL, &t3971_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3971_m24057_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t3971_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m24057_MI = 
{
	"Contains", NULL, &t3971_TI, &t17_0_0_0, RuntimeInvoker_t17_t114, t3971_m24057_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t329_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t3971_m24058_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t329_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3971_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24058_MI = 
{
	"CopyTo", NULL, &t3971_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t3971_m24058_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3971_m24059_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t3971_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m24059_MI = 
{
	"Remove", NULL, &t3971_TI, &t17_0_0_0, RuntimeInvoker_t17_t114, t3971_m24059_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3971_MIs[] =
{
	&m24053_MI,
	&m24054_MI,
	&m24055_MI,
	&m24056_MI,
	&m24057_MI,
	&m24058_MI,
	&m24059_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3973_TI;
static TypeInfo* t3971_ITIs[] = 
{
	&t591_TI,
	&t3973_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3971_0_0_0;
extern Il2CppType t3971_1_0_0;
struct t3971;
extern TypeInfo t3971_TI;
extern Il2CppGenericClass t3971_GC;
TypeInfo t3971_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3971_MIs, t3971_PIs, NULL, NULL, NULL, NULL, NULL, &t3971_TI, t3971_ITIs, NULL, &EmptyCustomAttributesCache, &t3971_TI, &t3971_0_0_0, &t3971_1_0_0, NULL, &t3971_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3973_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit>
extern TypeInfo t3973_TI;
extern Il2CppType t3362_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24060_MI = 
{
	"GetEnumerator", NULL, &t3973_TI, &t3362_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3973_MIs[] =
{
	&m24060_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t3973_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3973_0_0_0;
extern Il2CppType t3973_1_0_0;
struct t3973;
extern TypeInfo t3973_TI;
extern Il2CppGenericClass t3973_GC;
TypeInfo t3973_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3973_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3973_TI, t3973_ITIs, NULL, &EmptyCustomAttributesCache, &t3973_TI, &t3973_0_0_0, &t3973_1_0_0, NULL, &t3973_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3972_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.RaycastHit>
extern MethodInfo m24061_MI;
extern MethodInfo m24062_MI;
static PropertyInfo t3972____Item_PropertyInfo = 
{
	&t3972_TI, "Item", &m24061_MI, &m24062_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3972_PIs[] =
{
	&t3972____Item_PropertyInfo,
	NULL
};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3972_m24063_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t3972_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m24063_MI = 
{
	"IndexOf", NULL, &t3972_TI, &t16_0_0_0, RuntimeInvoker_t16_t114, t3972_m24063_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t3972_m24064_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t3972_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m24064_MI = 
{
	"Insert", NULL, &t3972_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t114, t3972_m24064_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3972_m24065_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3972_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24065_MI = 
{
	"RemoveAt", NULL, &t3972_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3972_m24065_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3972_m24061_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3972_TI;
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t114_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24061_MI = 
{
	"get_Item", NULL, &t3972_TI, &t114_0_0_0, RuntimeInvoker_t114_t16, t3972_m24061_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t3972_m24062_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t3972_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m24062_MI = 
{
	"set_Item", NULL, &t3972_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t114, t3972_m24062_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3972_MIs[] =
{
	&m24063_MI,
	&m24064_MI,
	&m24065_MI,
	&m24061_MI,
	&m24062_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3971_TI;
extern TypeInfo t3973_TI;
static TypeInfo* t3972_ITIs[] = 
{
	&t591_TI,
	&t3971_TI,
	&t3973_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3972_0_0_0;
extern Il2CppType t3972_1_0_0;
struct t3972;
extern TypeInfo t3972_TI;
extern Il2CppGenericClass t3972_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3972_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3972_MIs, t3972_PIs, NULL, NULL, NULL, NULL, NULL, &t3972_TI, t3972_ITIs, NULL, &t1400__CustomAttributeCache, &t3972_TI, &t3972_0_0_0, &t3972_1_0_0, NULL, &t3972_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
