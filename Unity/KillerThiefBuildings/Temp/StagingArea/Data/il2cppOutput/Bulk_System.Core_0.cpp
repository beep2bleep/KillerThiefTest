#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t654.h"
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
extern TypeInfo t654_TI;
#include "t654MD.h"


#include "t16.h"

// Metadata Definition <Module>
static MethodInfo* t654_MIs[] =
{
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t654_0_0_0;
extern Il2CppType t654_1_0_0;
struct t654;
extern TypeInfo t654_TI;
TypeInfo t654_TI = 
{
	&g_System_Core_dll_Image, NULL, "<Module>", "", t654_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t654_TI, NULL, NULL, &EmptyCustomAttributesCache, &t654_TI, &t654_0_0_0, &t654_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t654), 0, -1, 0, 0, -1, 0, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t653.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t653_TI;
#include "t653MD.h"

#include "t17.h"
#include "t479MD.h"
extern MethodInfo m2880_MI;


extern MethodInfo m3039_MI;
 void m3039 (t653 * __this, MethodInfo* method){
	{
		m2880(__this, &m2880_MI);
		return;
	}
}
// Metadata Definition System.Runtime.CompilerServices.ExtensionAttribute
extern TypeInfo t653_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m3039_MI = 
{
	".ctor", (methodPointerType)&m3039, &t653_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1, NULL, (methodPointerType)NULL};
static MethodInfo* t653_MIs[] =
{
	&m3039_MI,
	NULL
};
extern MethodInfo m2881_MI;
extern MethodInfo m29_MI;
extern MethodInfo m2882_MI;
extern MethodInfo m31_MI;
static MethodInfo* t653_VT[] =
{
	&m2881_MI,
	&m29_MI,
	&m2882_MI,
	&m31_MI,
};
extern TypeInfo t593_TI;
static Il2CppInterfaceOffsetPair t653_IOs[] = 
{
	{ &t593_TI, 4},
};
extern TypeInfo t606_TI;
#include "t606.h"
#include "t606MD.h"
extern MethodInfo m2912_MI;
void t653_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t606 * tmp;
		tmp = (t606 *)il2cpp_codegen_object_new (&t606_TI);
		m2912(tmp, 69, &m2912_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t653__CustomAttributeCache = {
1,
NULL,
&t653_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t653_0_0_0;
extern Il2CppType t653_1_0_0;
extern TypeInfo t479_TI;
struct t653;
extern TypeInfo t653_TI;
extern CustomAttributesCache t653__CustomAttributeCache;
TypeInfo t653_TI = 
{
	&g_System_Core_dll_Image, NULL, "ExtensionAttribute", "System.Runtime.CompilerServices", t653_MIs, NULL, NULL, NULL, &t479_TI, NULL, NULL, &t653_TI, NULL, t653_VT, &t653__CustomAttributeCache, &t653_TI, &t653_0_0_0, &t653_1_0_0, t653_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t653), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t655.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t655_TI;
#include "t655MD.h"

#include "t4.h"
#include "t8.h"
#include "t330.h"
extern TypeInfo t330_TI;
#include "t330MD.h"
extern MethodInfo m2947_MI;


extern MethodInfo m3040_MI;
 void m3040 (t4 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_0011;
		}
	}
	{
		t330 * L_0 = (t330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t330_TI));
		m2947(L_0, (t8*) &_stringLiteral192, &m2947_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0011:
	{
		if (p1)
		{
			goto IL_0022;
		}
	}
	{
		t330 * L_1 = (t330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t330_TI));
		m2947(L_1, (t8*) &_stringLiteral193, &m2947_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0022:
	{
		return;
	}
}
// Metadata Definition System.Linq.Check
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t655_m3040_ParameterInfos[] = 
{
	{"source", 0, 134217729, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"predicate", 1, 134217730, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t655_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m3040_MI = 
{
	"SourceAndPredicate", (methodPointerType)&m3040, &t655_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t655_m3040_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2, NULL, (methodPointerType)NULL};
static MethodInfo* t655_MIs[] =
{
	&m3040_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
static MethodInfo* t655_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t655_0_0_0;
extern Il2CppType t655_1_0_0;
extern TypeInfo t4_TI;
struct t655;
extern TypeInfo t655_TI;
TypeInfo t655_TI = 
{
	&g_System_Core_dll_Image, NULL, "Check", "System.Linq", t655_MIs, NULL, NULL, NULL, &t4_TI, NULL, NULL, &t655_TI, NULL, t655_VT, &EmptyCustomAttributesCache, &t655_TI, &t655_0_0_0, &t655_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t655), 0, -1, 0, 0, -1, 1048960, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t656.h"
extern Il2CppGenericContainer t656_IGC;
extern TypeInfo t656_gp_TSource_0_TI;
Il2CppGenericParamFull t656_gp_TSource_0_TI_GenericParamFull = { { &t656_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* t656_IGPA[1] = 
{
	&t656_gp_TSource_0_TI_GenericParamFull,
};
extern TypeInfo t656_TI;
Il2CppGenericContainer t656_IGC = { { NULL, NULL }, NULL, &t656_TI, 1, 0, t656_IGPA };
extern TypeInfo t656_TI;
extern Il2CppType t17_0_0_0;
MethodInfo m3041_MI = 
{
	".ctor", NULL, &t656_TI, &t17_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 5, NULL, (methodPointerType)NULL};
extern TypeInfo t656_TI;
extern Il2CppType t656_gp_0_0_0_0;
extern CustomAttributesCache t656__CustomAttributeCache_m3042;
MethodInfo m3042_MI = 
{
	"System.Collections.Generic.IEnumerator<TSource>.get_Current", NULL, &t656_TI, &t656_gp_0_0_0_0, NULL, NULL, &t656__CustomAttributeCache_m3042, 2529, 0, 9, 0, false, false, 6, NULL, (methodPointerType)NULL};
extern TypeInfo t656_TI;
extern Il2CppType t4_0_0_0;
extern CustomAttributesCache t656__CustomAttributeCache_m3043;
MethodInfo m3043_MI = 
{
	"System.Collections.IEnumerator.get_Current", NULL, &t656_TI, &t4_0_0_0, NULL, NULL, &t656__CustomAttributeCache_m3043, 2529, 0, 4, 0, false, false, 7, NULL, (methodPointerType)NULL};
extern TypeInfo t656_TI;
extern Il2CppType t27_0_0_0;
extern CustomAttributesCache t656__CustomAttributeCache_m3044;
MethodInfo m3044_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", NULL, &t656_TI, &t27_0_0_0, NULL, NULL, &t656__CustomAttributeCache_m3044, 481, 0, 7, 0, false, false, 8, NULL, (methodPointerType)NULL};
extern TypeInfo t656_TI;
extern Il2CppType t659_0_0_0;
extern CustomAttributesCache t656__CustomAttributeCache_m3045;
MethodInfo m3045_MI = 
{
	"System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", NULL, &t656_TI, &t659_0_0_0, NULL, NULL, &t656__CustomAttributeCache_m3045, 481, 0, 8, 0, false, false, 9, NULL, (methodPointerType)NULL};
extern TypeInfo t656_TI;
extern Il2CppType t19_0_0_0;
MethodInfo m3046_MI = 
{
	"MoveNext", NULL, &t656_TI, &t19_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 10, NULL, (methodPointerType)NULL};
extern TypeInfo t656_TI;
extern Il2CppType t17_0_0_0;
extern CustomAttributesCache t656__CustomAttributeCache_m3047;
MethodInfo m3047_MI = 
{
	"Dispose", NULL, &t656_TI, &t17_0_0_0, NULL, NULL, &t656__CustomAttributeCache_m3047, 486, 0, 6, 0, false, false, 11, NULL, (methodPointerType)NULL};
static MethodInfo* t656_MIs[] =
{
	&m3041_MI,
	&m3042_MI,
	&m3043_MI,
	&m3044_MI,
	&m3045_MI,
	&m3046_MI,
	&m3047_MI,
	NULL
};
extern MethodInfo m3042_MI;
static PropertyInfo t656____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo = 
{
	&t656_TI, "System.Collections.Generic.IEnumerator<TSource>.Current", &m3042_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3043_MI;
static PropertyInfo t656____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t656_TI, "System.Collections.IEnumerator.Current", &m3043_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t656_PIs[] =
{
	&t656____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo,
	&t656____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType t660_0_0_3;
FieldInfo t656_f0_FieldInfo = 
{
	"source", &t660_0_0_3, &t656_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t659_0_0_3;
FieldInfo t656_f1_FieldInfo = 
{
	"<$s_92>__0", &t659_0_0_3, &t656_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t656_gp_0_0_0_3;
FieldInfo t656_f2_FieldInfo = 
{
	"<element>__1", &t656_gp_0_0_0_3, &t656_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t661_0_0_3;
FieldInfo t656_f3_FieldInfo = 
{
	"predicate", &t661_0_0_3, &t656_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_3;
FieldInfo t656_f4_FieldInfo = 
{
	"$PC", &t18_0_0_3, &t656_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t656_gp_0_0_0_3;
FieldInfo t656_f5_FieldInfo = 
{
	"$current", &t656_gp_0_0_0_3, &t656_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t660_0_0_3;
FieldInfo t656_f6_FieldInfo = 
{
	"<$>source", &t660_0_0_3, &t656_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t661_0_0_3;
FieldInfo t656_f7_FieldInfo = 
{
	"<$>predicate", &t661_0_0_3, &t656_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t656_FIs[] =
{
	&t656_f0_FieldInfo,
	&t656_f1_FieldInfo,
	&t656_f2_FieldInfo,
	&t656_f3_FieldInfo,
	&t656_f4_FieldInfo,
	&t656_f5_FieldInfo,
	&t656_f6_FieldInfo,
	&t656_f7_FieldInfo,
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t656_0_0_0;
extern Il2CppType t656_1_0_0;
struct t656;
extern TypeInfo t656_TI;
extern TypeInfo t396_TI;
TypeInfo t656_TI = 
{
	&g_System_Core_dll_Image, NULL, "<CreateWhereIterator>c__Iterator1D`1", "", t656_MIs, t656_PIs, t656_FIs, NULL, NULL, NULL, &t396_TI, &t656_TI, NULL, NULL, NULL, NULL, &t656_0_0_0, &t656_1_0_0, NULL, NULL, &t656_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 8, 0, 0, 0, 0, 0};
extern TypeInfo t302_TI;
#include "t302.h"
#include "t302MD.h"
extern MethodInfo m1322_MI;
void t656_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t302 * tmp;
		tmp = (t302 *)il2cpp_codegen_object_new (&t302_TI);
		m1322(tmp, &m1322_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t334_TI;
#include "t334.h"
#include "t334MD.h"
extern MethodInfo m1501_MI;
void t656_CustomAttributesCacheGenerator_m3042(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t334 * tmp;
		tmp = (t334 *)il2cpp_codegen_object_new (&t334_TI);
		m1501(tmp, &m1501_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t334_TI;
extern MethodInfo m1501_MI;
void t656_CustomAttributesCacheGenerator_m3043(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t334 * tmp;
		tmp = (t334 *)il2cpp_codegen_object_new (&t334_TI);
		m1501(tmp, &m1501_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t334_TI;
extern MethodInfo m1501_MI;
void t656_CustomAttributesCacheGenerator_m3044(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t334 * tmp;
		tmp = (t334 *)il2cpp_codegen_object_new (&t334_TI);
		m1501(tmp, &m1501_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t334_TI;
extern MethodInfo m1501_MI;
void t656_CustomAttributesCacheGenerator_m3045(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t334 * tmp;
		tmp = (t334 *)il2cpp_codegen_object_new (&t334_TI);
		m1501(tmp, &m1501_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t334_TI;
extern MethodInfo m1501_MI;
void t656_CustomAttributesCacheGenerator_m3047(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t334 * tmp;
		tmp = (t334 *)il2cpp_codegen_object_new (&t334_TI);
		m1501(tmp, &m1501_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t656__CustomAttributeCache = {
1,
NULL,
&t656_CustomAttributesCacheGenerator
};
CustomAttributesCache t656__CustomAttributeCache_m3042 = {
1,
NULL,
&t656_CustomAttributesCacheGenerator_m3042
};
CustomAttributesCache t656__CustomAttributeCache_m3043 = {
1,
NULL,
&t656_CustomAttributesCacheGenerator_m3043
};
CustomAttributesCache t656__CustomAttributeCache_m3044 = {
1,
NULL,
&t656_CustomAttributesCacheGenerator_m3044
};
CustomAttributesCache t656__CustomAttributeCache_m3045 = {
1,
NULL,
&t656_CustomAttributesCacheGenerator_m3045
};
CustomAttributesCache t656__CustomAttributeCache_m3047 = {
1,
NULL,
&t656_CustomAttributesCacheGenerator_m3047
};
#include "t396.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t396_TI;
#include "t396MD.h"



// Metadata Definition System.Linq.Enumerable
extern TypeInfo t396_TI;
extern Il2CppType t662_0_0_0;
extern Il2CppGenericContainer m3048_IGC;
extern TypeInfo m3048_gp_TSource_0_TI;
Il2CppGenericParamFull m3048_gp_TSource_0_TI_GenericParamFull = { { &m3048_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* m3048_IGPA[1] = 
{
	&m3048_gp_TSource_0_TI_GenericParamFull,
};
extern MethodInfo m3048_MI;
Il2CppGenericContainer m3048_IGC = { { NULL, NULL }, NULL, &m3048_MI, 1, 1, m3048_IGPA };
extern CustomAttributesCache t396__CustomAttributeCache_m3048;
MethodInfo m3048_MI = 
{
	"Where", NULL, &t396_TI, &t662_0_0_0, NULL, NULL, &t396__CustomAttributeCache_m3048, 150, 0, 255, 0, true, false, 3, NULL, (methodPointerType)NULL};
extern TypeInfo t396_TI;
extern Il2CppType t664_0_0_0;
extern Il2CppGenericContainer m3049_IGC;
extern TypeInfo m3049_gp_TSource_0_TI;
Il2CppGenericParamFull m3049_gp_TSource_0_TI_GenericParamFull = { { &m3049_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* m3049_IGPA[1] = 
{
	&m3049_gp_TSource_0_TI_GenericParamFull,
};
extern MethodInfo m3049_MI;
Il2CppGenericContainer m3049_IGC = { { NULL, NULL }, NULL, &m3049_MI, 1, 1, m3049_IGPA };
extern CustomAttributesCache t396__CustomAttributeCache_m3049;
MethodInfo m3049_MI = 
{
	"CreateWhereIterator", NULL, &t396_TI, &t664_0_0_0, NULL, NULL, &t396__CustomAttributeCache_m3049, 145, 0, 255, 0, true, false, 4, NULL, (methodPointerType)NULL};
static MethodInfo* t396_MIs[] =
{
	&m3048_MI,
	&m3049_MI,
	NULL
};
extern TypeInfo t656_TI;
static TypeInfo* t396_TI__nestedTypes[2] =
{
	&t656_TI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
static MethodInfo* t396_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
};
extern TypeInfo t653_TI;
extern MethodInfo m3039_MI;
void t396_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t653 * tmp;
		tmp = (t653 *)il2cpp_codegen_object_new (&t653_TI);
		m3039(tmp, &m3039_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t653_TI;
extern MethodInfo m3039_MI;
void t396_CustomAttributesCacheGenerator_m3048(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t653 * tmp;
		tmp = (t653 *)il2cpp_codegen_object_new (&t653_TI);
		m3039(tmp, &m3039_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t334_TI;
extern MethodInfo m1501_MI;
void t396_CustomAttributesCacheGenerator_m3049(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t334 * tmp;
		tmp = (t334 *)il2cpp_codegen_object_new (&t334_TI);
		m1501(tmp, &m1501_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t396__CustomAttributeCache = {
1,
NULL,
&t396_CustomAttributesCacheGenerator
};
CustomAttributesCache t396__CustomAttributeCache_m3048 = {
1,
NULL,
&t396_CustomAttributesCacheGenerator_m3048
};
CustomAttributesCache t396__CustomAttributeCache_m3049 = {
1,
NULL,
&t396_CustomAttributesCacheGenerator_m3049
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t396_0_0_0;
extern Il2CppType t396_1_0_0;
extern TypeInfo t4_TI;
struct t396;
extern TypeInfo t396_TI;
extern CustomAttributesCache t396__CustomAttributeCache;
extern CustomAttributesCache t396__CustomAttributeCache_m3048;
extern CustomAttributesCache t396__CustomAttributeCache_m3049;
TypeInfo t396_TI = 
{
	&g_System_Core_dll_Image, NULL, "Enumerable", "System.Linq", t396_MIs, NULL, NULL, NULL, &t4_TI, t396_TI__nestedTypes, NULL, &t396_TI, NULL, t396_VT, &t396__CustomAttributeCache, &t396_TI, &t396_0_0_0, &t396_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t396), 0, -1, 0, 0, -1, 1048961, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 1, 4, 0, 0};
#include "t657.h"
extern Il2CppGenericContainer t657_IGC;
extern TypeInfo t657_gp_T_0_TI;
Il2CppGenericParamFull t657_gp_T_0_TI_GenericParamFull = { { &t657_IGC, 0}, {NULL, "T", 0, 0, NULL} };
extern TypeInfo t657_gp_TResult_1_TI;
Il2CppGenericParamFull t657_gp_TResult_1_TI_GenericParamFull = { { &t657_IGC, 1}, {NULL, "TResult", 0, 0, NULL} };
static Il2CppGenericParamFull* t657_IGPA[2] = 
{
	&t657_gp_T_0_TI_GenericParamFull,
	&t657_gp_TResult_1_TI_GenericParamFull,
};
extern TypeInfo t657_TI;
Il2CppGenericContainer t657_IGC = { { NULL, NULL }, NULL, &t657_TI, 2, 0, t657_IGPA };
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t657_m3050_ParameterInfos[] = 
{
	{"object", 0, 134217735, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217736, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t657_TI;
extern Il2CppType t17_0_0_0;
MethodInfo m3050_MI = 
{
	".ctor", NULL, &t657_TI, &t17_0_0_0, NULL, t657_m3050_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 12, NULL, (methodPointerType)NULL};
extern Il2CppType t657_gp_0_0_0_0;
static ParameterInfo t657_m3051_ParameterInfos[] = 
{
	{"arg1", 0, 134217737, &EmptyCustomAttributesCache, &t657_gp_0_0_0_0},
};
extern TypeInfo t657_TI;
extern Il2CppType t657_gp_1_0_0_0;
MethodInfo m3051_MI = 
{
	"Invoke", NULL, &t657_TI, &t657_gp_1_0_0_0, NULL, t657_m3051_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 13, NULL, (methodPointerType)NULL};
extern Il2CppType t657_gp_0_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t657_m3052_ParameterInfos[] = 
{
	{"arg1", 0, 134217738, &EmptyCustomAttributesCache, &t657_gp_0_0_0_0},
	{"callback", 1, 134217739, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217740, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t657_TI;
extern Il2CppType t54_0_0_0;
MethodInfo m3052_MI = 
{
	"BeginInvoke", NULL, &t657_TI, &t54_0_0_0, NULL, t657_m3052_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 14, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t657_m3053_ParameterInfos[] = 
{
	{"result", 0, 134217741, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t657_TI;
extern Il2CppType t657_gp_1_0_0_0;
MethodInfo m3053_MI = 
{
	"EndInvoke", NULL, &t657_TI, &t657_gp_1_0_0_0, NULL, t657_m3053_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 15, NULL, (methodPointerType)NULL};
static MethodInfo* t657_MIs[] =
{
	&m3050_MI,
	&m3051_MI,
	&m3052_MI,
	&m3053_MI,
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t657_0_0_0;
extern Il2CppType t657_1_0_0;
struct t657;
extern TypeInfo t657_TI;
TypeInfo t657_TI = 
{
	&g_System_Core_dll_Image, NULL, "Func`2", "System", t657_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t657_TI, NULL, NULL, NULL, NULL, &t657_0_0_0, &t657_1_0_0, NULL, NULL, &t657_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
