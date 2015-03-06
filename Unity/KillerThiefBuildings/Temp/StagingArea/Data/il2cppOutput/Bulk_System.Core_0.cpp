#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t653.h"
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
extern TypeInfo t653_TI;
#include "t653MD.h"


#include "t14.h"

// Metadata Definition <Module>
static MethodInfo* t653_MIs[] =
{
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t653_0_0_0;
extern Il2CppType t653_1_0_0;
struct t653;
extern TypeInfo t653_TI;
TypeInfo t653_TI = 
{
	&g_System_Core_dll_Image, NULL, "<Module>", "", t653_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t653_TI, NULL, NULL, &EmptyCustomAttributesCache, &t653_TI, &t653_0_0_0, &t653_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t653), 0, -1, 0, 0, -1, 0, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t652.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t652_TI;
#include "t652MD.h"

#include "t15.h"
#include "t478MD.h"
extern MethodInfo m2860_MI;


extern MethodInfo m3019_MI;
 void m3019 (t652 * __this, MethodInfo* method){
	{
		m2860(__this, &m2860_MI);
		return;
	}
}
// Metadata Definition System.Runtime.CompilerServices.ExtensionAttribute
extern TypeInfo t652_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m3019_MI = 
{
	".ctor", (methodPointerType)&m3019, &t652_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1, NULL, (methodPointerType)NULL};
static MethodInfo* t652_MIs[] =
{
	&m3019_MI,
	NULL
};
extern MethodInfo m2861_MI;
extern MethodInfo m20_MI;
extern MethodInfo m2862_MI;
extern MethodInfo m22_MI;
static MethodInfo* t652_VT[] =
{
	&m2861_MI,
	&m20_MI,
	&m2862_MI,
	&m22_MI,
};
extern TypeInfo t592_TI;
static Il2CppInterfaceOffsetPair t652_IOs[] = 
{
	{ &t592_TI, 4},
};
extern TypeInfo t605_TI;
#include "t605.h"
#include "t605MD.h"
extern MethodInfo m2892_MI;
void t652_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t605 * tmp;
		tmp = (t605 *)il2cpp_codegen_object_new (&t605_TI);
		m2892(tmp, 69, &m2892_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t652__CustomAttributeCache = {
1,
NULL,
&t652_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t652_0_0_0;
extern Il2CppType t652_1_0_0;
extern TypeInfo t478_TI;
struct t652;
extern TypeInfo t652_TI;
extern CustomAttributesCache t652__CustomAttributeCache;
TypeInfo t652_TI = 
{
	&g_System_Core_dll_Image, NULL, "ExtensionAttribute", "System.Runtime.CompilerServices", t652_MIs, NULL, NULL, NULL, &t478_TI, NULL, NULL, &t652_TI, NULL, t652_VT, &t652__CustomAttributeCache, &t652_TI, &t652_0_0_0, &t652_1_0_0, t652_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t652), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t654.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t654_TI;
#include "t654MD.h"

#include "t4.h"
#include "t8.h"
#include "t328.h"
extern TypeInfo t328_TI;
#include "t328MD.h"
extern MethodInfo m2927_MI;


extern MethodInfo m3020_MI;
 void m3020 (t4 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_0011;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral192, &m2927_MI);
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
		t328 * L_1 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_1, (t8*) &_stringLiteral193, &m2927_MI);
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
static ParameterInfo t654_m3020_ParameterInfos[] = 
{
	{"source", 0, 134217729, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"predicate", 1, 134217730, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t654_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m3020_MI = 
{
	"SourceAndPredicate", (methodPointerType)&m3020, &t654_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t654_m3020_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2, NULL, (methodPointerType)NULL};
static MethodInfo* t654_MIs[] =
{
	&m3020_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
static MethodInfo* t654_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t654_0_0_0;
extern Il2CppType t654_1_0_0;
extern TypeInfo t4_TI;
struct t654;
extern TypeInfo t654_TI;
TypeInfo t654_TI = 
{
	&g_System_Core_dll_Image, NULL, "Check", "System.Linq", t654_MIs, NULL, NULL, NULL, &t4_TI, NULL, NULL, &t654_TI, NULL, t654_VT, &EmptyCustomAttributesCache, &t654_TI, &t654_0_0_0, &t654_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t654), 0, -1, 0, 0, -1, 1048960, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t655.h"
extern Il2CppGenericContainer t655_IGC;
extern TypeInfo t655_gp_TSource_0_TI;
Il2CppGenericParamFull t655_gp_TSource_0_TI_GenericParamFull = { { &t655_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* t655_IGPA[1] = 
{
	&t655_gp_TSource_0_TI_GenericParamFull,
};
extern TypeInfo t655_TI;
Il2CppGenericContainer t655_IGC = { { NULL, NULL }, NULL, &t655_TI, 1, 0, t655_IGPA };
extern TypeInfo t655_TI;
extern Il2CppType t15_0_0_0;
MethodInfo m3021_MI = 
{
	".ctor", NULL, &t655_TI, &t15_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 5, NULL, (methodPointerType)NULL};
extern TypeInfo t655_TI;
extern Il2CppType t655_gp_0_0_0_0;
extern CustomAttributesCache t655__CustomAttributeCache_m3022;
MethodInfo m3022_MI = 
{
	"System.Collections.Generic.IEnumerator<TSource>.get_Current", NULL, &t655_TI, &t655_gp_0_0_0_0, NULL, NULL, &t655__CustomAttributeCache_m3022, 2529, 0, 9, 0, false, false, 6, NULL, (methodPointerType)NULL};
extern TypeInfo t655_TI;
extern Il2CppType t4_0_0_0;
extern CustomAttributesCache t655__CustomAttributeCache_m3023;
MethodInfo m3023_MI = 
{
	"System.Collections.IEnumerator.get_Current", NULL, &t655_TI, &t4_0_0_0, NULL, NULL, &t655__CustomAttributeCache_m3023, 2529, 0, 4, 0, false, false, 7, NULL, (methodPointerType)NULL};
extern TypeInfo t655_TI;
extern Il2CppType t123_0_0_0;
extern CustomAttributesCache t655__CustomAttributeCache_m3024;
MethodInfo m3024_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", NULL, &t655_TI, &t123_0_0_0, NULL, NULL, &t655__CustomAttributeCache_m3024, 481, 0, 7, 0, false, false, 8, NULL, (methodPointerType)NULL};
extern TypeInfo t655_TI;
extern Il2CppType t658_0_0_0;
extern CustomAttributesCache t655__CustomAttributeCache_m3025;
MethodInfo m3025_MI = 
{
	"System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", NULL, &t655_TI, &t658_0_0_0, NULL, NULL, &t655__CustomAttributeCache_m3025, 481, 0, 8, 0, false, false, 9, NULL, (methodPointerType)NULL};
extern TypeInfo t655_TI;
extern Il2CppType t17_0_0_0;
MethodInfo m3026_MI = 
{
	"MoveNext", NULL, &t655_TI, &t17_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 10, NULL, (methodPointerType)NULL};
extern TypeInfo t655_TI;
extern Il2CppType t15_0_0_0;
extern CustomAttributesCache t655__CustomAttributeCache_m3027;
MethodInfo m3027_MI = 
{
	"Dispose", NULL, &t655_TI, &t15_0_0_0, NULL, NULL, &t655__CustomAttributeCache_m3027, 486, 0, 6, 0, false, false, 11, NULL, (methodPointerType)NULL};
static MethodInfo* t655_MIs[] =
{
	&m3021_MI,
	&m3022_MI,
	&m3023_MI,
	&m3024_MI,
	&m3025_MI,
	&m3026_MI,
	&m3027_MI,
	NULL
};
extern MethodInfo m3022_MI;
static PropertyInfo t655____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo = 
{
	&t655_TI, "System.Collections.Generic.IEnumerator<TSource>.Current", &m3022_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3023_MI;
static PropertyInfo t655____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t655_TI, "System.Collections.IEnumerator.Current", &m3023_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t655_PIs[] =
{
	&t655____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo,
	&t655____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType t659_0_0_3;
FieldInfo t655_f0_FieldInfo = 
{
	"source", &t659_0_0_3, &t655_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t658_0_0_3;
FieldInfo t655_f1_FieldInfo = 
{
	"<$s_92>__0", &t658_0_0_3, &t655_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t655_gp_0_0_0_3;
FieldInfo t655_f2_FieldInfo = 
{
	"<element>__1", &t655_gp_0_0_0_3, &t655_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t660_0_0_3;
FieldInfo t655_f3_FieldInfo = 
{
	"predicate", &t660_0_0_3, &t655_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_3;
FieldInfo t655_f4_FieldInfo = 
{
	"$PC", &t16_0_0_3, &t655_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t655_gp_0_0_0_3;
FieldInfo t655_f5_FieldInfo = 
{
	"$current", &t655_gp_0_0_0_3, &t655_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t659_0_0_3;
FieldInfo t655_f6_FieldInfo = 
{
	"<$>source", &t659_0_0_3, &t655_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t660_0_0_3;
FieldInfo t655_f7_FieldInfo = 
{
	"<$>predicate", &t660_0_0_3, &t655_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t655_FIs[] =
{
	&t655_f0_FieldInfo,
	&t655_f1_FieldInfo,
	&t655_f2_FieldInfo,
	&t655_f3_FieldInfo,
	&t655_f4_FieldInfo,
	&t655_f5_FieldInfo,
	&t655_f6_FieldInfo,
	&t655_f7_FieldInfo,
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t655_0_0_0;
extern Il2CppType t655_1_0_0;
struct t655;
extern TypeInfo t655_TI;
extern TypeInfo t395_TI;
TypeInfo t655_TI = 
{
	&g_System_Core_dll_Image, NULL, "<CreateWhereIterator>c__Iterator1D`1", "", t655_MIs, t655_PIs, t655_FIs, NULL, NULL, NULL, &t395_TI, &t655_TI, NULL, NULL, NULL, NULL, &t655_0_0_0, &t655_1_0_0, NULL, NULL, &t655_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 8, 0, 0, 0, 0, 0};
extern TypeInfo t298_TI;
#include "t298.h"
#include "t298MD.h"
extern MethodInfo m1298_MI;
void t655_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t298 * tmp;
		tmp = (t298 *)il2cpp_codegen_object_new (&t298_TI);
		m1298(tmp, &m1298_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t332_TI;
#include "t332.h"
#include "t332MD.h"
extern MethodInfo m1480_MI;
void t655_CustomAttributesCacheGenerator_m3022(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t332 * tmp;
		tmp = (t332 *)il2cpp_codegen_object_new (&t332_TI);
		m1480(tmp, &m1480_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t332_TI;
extern MethodInfo m1480_MI;
void t655_CustomAttributesCacheGenerator_m3023(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t332 * tmp;
		tmp = (t332 *)il2cpp_codegen_object_new (&t332_TI);
		m1480(tmp, &m1480_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t332_TI;
extern MethodInfo m1480_MI;
void t655_CustomAttributesCacheGenerator_m3024(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t332 * tmp;
		tmp = (t332 *)il2cpp_codegen_object_new (&t332_TI);
		m1480(tmp, &m1480_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t332_TI;
extern MethodInfo m1480_MI;
void t655_CustomAttributesCacheGenerator_m3025(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t332 * tmp;
		tmp = (t332 *)il2cpp_codegen_object_new (&t332_TI);
		m1480(tmp, &m1480_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t332_TI;
extern MethodInfo m1480_MI;
void t655_CustomAttributesCacheGenerator_m3027(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t332 * tmp;
		tmp = (t332 *)il2cpp_codegen_object_new (&t332_TI);
		m1480(tmp, &m1480_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t655__CustomAttributeCache = {
1,
NULL,
&t655_CustomAttributesCacheGenerator
};
CustomAttributesCache t655__CustomAttributeCache_m3022 = {
1,
NULL,
&t655_CustomAttributesCacheGenerator_m3022
};
CustomAttributesCache t655__CustomAttributeCache_m3023 = {
1,
NULL,
&t655_CustomAttributesCacheGenerator_m3023
};
CustomAttributesCache t655__CustomAttributeCache_m3024 = {
1,
NULL,
&t655_CustomAttributesCacheGenerator_m3024
};
CustomAttributesCache t655__CustomAttributeCache_m3025 = {
1,
NULL,
&t655_CustomAttributesCacheGenerator_m3025
};
CustomAttributesCache t655__CustomAttributeCache_m3027 = {
1,
NULL,
&t655_CustomAttributesCacheGenerator_m3027
};
#include "t395.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t395_TI;
#include "t395MD.h"



// Metadata Definition System.Linq.Enumerable
extern TypeInfo t395_TI;
extern Il2CppType t661_0_0_0;
extern Il2CppGenericContainer m3028_IGC;
extern TypeInfo m3028_gp_TSource_0_TI;
Il2CppGenericParamFull m3028_gp_TSource_0_TI_GenericParamFull = { { &m3028_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* m3028_IGPA[1] = 
{
	&m3028_gp_TSource_0_TI_GenericParamFull,
};
extern MethodInfo m3028_MI;
Il2CppGenericContainer m3028_IGC = { { NULL, NULL }, NULL, &m3028_MI, 1, 1, m3028_IGPA };
extern CustomAttributesCache t395__CustomAttributeCache_m3028;
MethodInfo m3028_MI = 
{
	"Where", NULL, &t395_TI, &t661_0_0_0, NULL, NULL, &t395__CustomAttributeCache_m3028, 150, 0, 255, 0, true, false, 3, NULL, (methodPointerType)NULL};
extern TypeInfo t395_TI;
extern Il2CppType t663_0_0_0;
extern Il2CppGenericContainer m3029_IGC;
extern TypeInfo m3029_gp_TSource_0_TI;
Il2CppGenericParamFull m3029_gp_TSource_0_TI_GenericParamFull = { { &m3029_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* m3029_IGPA[1] = 
{
	&m3029_gp_TSource_0_TI_GenericParamFull,
};
extern MethodInfo m3029_MI;
Il2CppGenericContainer m3029_IGC = { { NULL, NULL }, NULL, &m3029_MI, 1, 1, m3029_IGPA };
extern CustomAttributesCache t395__CustomAttributeCache_m3029;
MethodInfo m3029_MI = 
{
	"CreateWhereIterator", NULL, &t395_TI, &t663_0_0_0, NULL, NULL, &t395__CustomAttributeCache_m3029, 145, 0, 255, 0, true, false, 4, NULL, (methodPointerType)NULL};
static MethodInfo* t395_MIs[] =
{
	&m3028_MI,
	&m3029_MI,
	NULL
};
extern TypeInfo t655_TI;
static TypeInfo* t395_TI__nestedTypes[2] =
{
	&t655_TI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
static MethodInfo* t395_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
};
extern TypeInfo t652_TI;
extern MethodInfo m3019_MI;
void t395_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t652 * tmp;
		tmp = (t652 *)il2cpp_codegen_object_new (&t652_TI);
		m3019(tmp, &m3019_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t652_TI;
extern MethodInfo m3019_MI;
void t395_CustomAttributesCacheGenerator_m3028(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t652 * tmp;
		tmp = (t652 *)il2cpp_codegen_object_new (&t652_TI);
		m3019(tmp, &m3019_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t332_TI;
extern MethodInfo m1480_MI;
void t395_CustomAttributesCacheGenerator_m3029(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t332 * tmp;
		tmp = (t332 *)il2cpp_codegen_object_new (&t332_TI);
		m1480(tmp, &m1480_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t395__CustomAttributeCache = {
1,
NULL,
&t395_CustomAttributesCacheGenerator
};
CustomAttributesCache t395__CustomAttributeCache_m3028 = {
1,
NULL,
&t395_CustomAttributesCacheGenerator_m3028
};
CustomAttributesCache t395__CustomAttributeCache_m3029 = {
1,
NULL,
&t395_CustomAttributesCacheGenerator_m3029
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t395_0_0_0;
extern Il2CppType t395_1_0_0;
extern TypeInfo t4_TI;
struct t395;
extern TypeInfo t395_TI;
extern CustomAttributesCache t395__CustomAttributeCache;
extern CustomAttributesCache t395__CustomAttributeCache_m3028;
extern CustomAttributesCache t395__CustomAttributeCache_m3029;
TypeInfo t395_TI = 
{
	&g_System_Core_dll_Image, NULL, "Enumerable", "System.Linq", t395_MIs, NULL, NULL, NULL, &t4_TI, t395_TI__nestedTypes, NULL, &t395_TI, NULL, t395_VT, &t395__CustomAttributeCache, &t395_TI, &t395_0_0_0, &t395_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t395), 0, -1, 0, 0, -1, 1048961, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 1, 4, 0, 0};
#include "t656.h"
extern Il2CppGenericContainer t656_IGC;
extern TypeInfo t656_gp_T_0_TI;
Il2CppGenericParamFull t656_gp_T_0_TI_GenericParamFull = { { &t656_IGC, 0}, {NULL, "T", 0, 0, NULL} };
extern TypeInfo t656_gp_TResult_1_TI;
Il2CppGenericParamFull t656_gp_TResult_1_TI_GenericParamFull = { { &t656_IGC, 1}, {NULL, "TResult", 0, 0, NULL} };
static Il2CppGenericParamFull* t656_IGPA[2] = 
{
	&t656_gp_T_0_TI_GenericParamFull,
	&t656_gp_TResult_1_TI_GenericParamFull,
};
extern TypeInfo t656_TI;
Il2CppGenericContainer t656_IGC = { { NULL, NULL }, NULL, &t656_TI, 2, 0, t656_IGPA };
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t656_m3030_ParameterInfos[] = 
{
	{"object", 0, 134217735, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217736, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t656_TI;
extern Il2CppType t15_0_0_0;
MethodInfo m3030_MI = 
{
	".ctor", NULL, &t656_TI, &t15_0_0_0, NULL, t656_m3030_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 12, NULL, (methodPointerType)NULL};
extern Il2CppType t656_gp_0_0_0_0;
static ParameterInfo t656_m3031_ParameterInfos[] = 
{
	{"arg1", 0, 134217737, &EmptyCustomAttributesCache, &t656_gp_0_0_0_0},
};
extern TypeInfo t656_TI;
extern Il2CppType t656_gp_1_0_0_0;
MethodInfo m3031_MI = 
{
	"Invoke", NULL, &t656_TI, &t656_gp_1_0_0_0, NULL, t656_m3031_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 13, NULL, (methodPointerType)NULL};
extern Il2CppType t656_gp_0_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t656_m3032_ParameterInfos[] = 
{
	{"arg1", 0, 134217738, &EmptyCustomAttributesCache, &t656_gp_0_0_0_0},
	{"callback", 1, 134217739, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217740, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t656_TI;
extern Il2CppType t48_0_0_0;
MethodInfo m3032_MI = 
{
	"BeginInvoke", NULL, &t656_TI, &t48_0_0_0, NULL, t656_m3032_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 14, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t656_m3033_ParameterInfos[] = 
{
	{"result", 0, 134217741, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t656_TI;
extern Il2CppType t656_gp_1_0_0_0;
MethodInfo m3033_MI = 
{
	"EndInvoke", NULL, &t656_TI, &t656_gp_1_0_0_0, NULL, t656_m3033_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 15, NULL, (methodPointerType)NULL};
static MethodInfo* t656_MIs[] =
{
	&m3030_MI,
	&m3031_MI,
	&m3032_MI,
	&m3033_MI,
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t656_0_0_0;
extern Il2CppType t656_1_0_0;
struct t656;
extern TypeInfo t656_TI;
TypeInfo t656_TI = 
{
	&g_System_Core_dll_Image, NULL, "Func`2", "System", t656_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t656_TI, NULL, NULL, NULL, NULL, &t656_0_0_0, &t656_1_0_0, NULL, NULL, &t656_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
