#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t27_TI;
#include "t27.h"
#include "t27MD.h"
extern MethodInfo m46_MI;
extern TypeInfo t417_TI;
#include "t417.h"
#include "t417MD.h"
extern MethodInfo m2029_MI;
extern TypeInfo t418_TI;
#include "t418.h"
#include "t418MD.h"
extern MethodInfo m2030_MI;
extern TypeInfo t419_TI;
#include "t419.h"
#include "t419MD.h"
extern MethodInfo m2031_MI;
extern TypeInfo t420_TI;
#include "t420.h"
#include "t420MD.h"
extern MethodInfo m2032_MI;
extern TypeInfo t421_TI;
#include "t421.h"
#include "t421MD.h"
extern MethodInfo m2033_MI;
extern TypeInfo t422_TI;
#include "t422.h"
#include "t422MD.h"
extern MethodInfo m2034_MI;
extern TypeInfo t423_TI;
#include "t423.h"
#include "t423MD.h"
extern MethodInfo m2035_MI;
extern TypeInfo t424_TI;
#include "t424.h"
#include "t424MD.h"
extern MethodInfo m2036_MI;
extern TypeInfo t425_TI;
#include "t425.h"
#include "t425MD.h"
extern MethodInfo m2037_MI;
extern TypeInfo t426_TI;
#include "t426.h"
#include "t426MD.h"
extern MethodInfo m2038_MI;
void g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t27 * tmp;
		tmp = (t27 *)il2cpp_codegen_object_new (&t27_TI);
		m46(tmp, &m46_MI);
		extern MethodInfo m47_MI;
		m47(tmp, true, &m47_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t417 * tmp;
		tmp = (t417 *)il2cpp_codegen_object_new (&t417_TI);
		m2029(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m2029_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t418 * tmp;
		tmp = (t418 *)il2cpp_codegen_object_new (&t418_TI);
		m2030(tmp, il2cpp_codegen_string_new_wrapper(""), &m2030_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t419 * tmp;
		tmp = (t419 *)il2cpp_codegen_object_new (&t419_TI);
		m2031(tmp, il2cpp_codegen_string_new_wrapper(""), &m2031_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t420 * tmp;
		tmp = (t420 *)il2cpp_codegen_object_new (&t420_TI);
		m2032(tmp, il2cpp_codegen_string_new_wrapper("Microsoft"), &m2032_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t421 * tmp;
		tmp = (t421 *)il2cpp_codegen_object_new (&t421_TI);
		m2033(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m2033_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t422 * tmp;
		tmp = (t422 *)il2cpp_codegen_object_new (&t422_TI);
		m2034(tmp, il2cpp_codegen_string_new_wrapper("1.0.0.0"), &m2034_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t423 * tmp;
		tmp = (t423 *)il2cpp_codegen_object_new (&t423_TI);
		m2035(tmp, il2cpp_codegen_string_new_wrapper("d4f464c7-9b15-460d-b4bc-2cacd1c1df73"), &m2035_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t424 * tmp;
		tmp = (t424 *)il2cpp_codegen_object_new (&t424_TI);
		m2036(tmp, false, &m2036_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t425 * tmp;
		tmp = (t425 *)il2cpp_codegen_object_new (&t425_TI);
		m2037(tmp, il2cpp_codegen_string_new_wrapper(""), &m2037_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t426 * tmp;
		tmp = (t426 *)il2cpp_codegen_object_new (&t426_TI);
		m2038(tmp, il2cpp_codegen_string_new_wrapper("Copyright © Microsoft 2013"), &m2038_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_UI_Assembly__CustomAttributeCache = {
11,
NULL,
&g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator
};
