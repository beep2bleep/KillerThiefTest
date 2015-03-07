#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t33_TI;
#include "t33.h"
#include "t33MD.h"
extern MethodInfo m70_MI;
extern TypeInfo t418_TI;
#include "t418.h"
#include "t418MD.h"
extern MethodInfo m2048_MI;
extern TypeInfo t419_TI;
#include "t419.h"
#include "t419MD.h"
extern MethodInfo m2049_MI;
extern TypeInfo t420_TI;
#include "t420.h"
#include "t420MD.h"
extern MethodInfo m2050_MI;
extern TypeInfo t421_TI;
#include "t421.h"
#include "t421MD.h"
extern MethodInfo m2051_MI;
extern TypeInfo t422_TI;
#include "t422.h"
#include "t422MD.h"
extern MethodInfo m2052_MI;
extern TypeInfo t423_TI;
#include "t423.h"
#include "t423MD.h"
extern MethodInfo m2053_MI;
extern TypeInfo t424_TI;
#include "t424.h"
#include "t424MD.h"
extern MethodInfo m2054_MI;
extern TypeInfo t425_TI;
#include "t425.h"
#include "t425MD.h"
extern MethodInfo m2055_MI;
extern TypeInfo t426_TI;
#include "t426.h"
#include "t426MD.h"
extern MethodInfo m2056_MI;
extern TypeInfo t427_TI;
#include "t427.h"
#include "t427MD.h"
extern MethodInfo m2057_MI;
void g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t33 * tmp;
		tmp = (t33 *)il2cpp_codegen_object_new (&t33_TI);
		m70(tmp, &m70_MI);
		extern MethodInfo m71_MI;
		m71(tmp, true, &m71_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t418 * tmp;
		tmp = (t418 *)il2cpp_codegen_object_new (&t418_TI);
		m2048(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m2048_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t419 * tmp;
		tmp = (t419 *)il2cpp_codegen_object_new (&t419_TI);
		m2049(tmp, il2cpp_codegen_string_new_wrapper(""), &m2049_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t420 * tmp;
		tmp = (t420 *)il2cpp_codegen_object_new (&t420_TI);
		m2050(tmp, il2cpp_codegen_string_new_wrapper(""), &m2050_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t421 * tmp;
		tmp = (t421 *)il2cpp_codegen_object_new (&t421_TI);
		m2051(tmp, il2cpp_codegen_string_new_wrapper("Microsoft"), &m2051_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t422 * tmp;
		tmp = (t422 *)il2cpp_codegen_object_new (&t422_TI);
		m2052(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m2052_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t423 * tmp;
		tmp = (t423 *)il2cpp_codegen_object_new (&t423_TI);
		m2053(tmp, il2cpp_codegen_string_new_wrapper("1.0.0.0"), &m2053_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t424 * tmp;
		tmp = (t424 *)il2cpp_codegen_object_new (&t424_TI);
		m2054(tmp, il2cpp_codegen_string_new_wrapper("d4f464c7-9b15-460d-b4bc-2cacd1c1df73"), &m2054_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t425 * tmp;
		tmp = (t425 *)il2cpp_codegen_object_new (&t425_TI);
		m2055(tmp, false, &m2055_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t426 * tmp;
		tmp = (t426 *)il2cpp_codegen_object_new (&t426_TI);
		m2056(tmp, il2cpp_codegen_string_new_wrapper(""), &m2056_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t427 * tmp;
		tmp = (t427 *)il2cpp_codegen_object_new (&t427_TI);
		m2057(tmp, il2cpp_codegen_string_new_wrapper("Copyright © Microsoft 2013"), &m2057_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_UI_Assembly__CustomAttributeCache = {
11,
NULL,
&g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator
};
