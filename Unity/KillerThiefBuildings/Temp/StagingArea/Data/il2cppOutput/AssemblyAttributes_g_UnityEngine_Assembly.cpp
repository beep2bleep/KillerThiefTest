#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t651_TI;
#include "t651.h"
#include "t651MD.h"
extern MethodInfo m3018_MI;
extern TypeInfo t651_TI;
extern MethodInfo m3018_MI;
extern TypeInfo t651_TI;
extern MethodInfo m3018_MI;
extern TypeInfo t651_TI;
extern MethodInfo m3018_MI;
extern TypeInfo t651_TI;
extern MethodInfo m3018_MI;
extern TypeInfo t651_TI;
extern MethodInfo m3018_MI;
extern TypeInfo t651_TI;
extern MethodInfo m3018_MI;
extern TypeInfo t27_TI;
#include "t27.h"
#include "t27MD.h"
extern MethodInfo m46_MI;
extern TypeInfo t651_TI;
extern MethodInfo m3018_MI;
extern TypeInfo t652_TI;
#include "t652.h"
#include "t652MD.h"
extern MethodInfo m3019_MI;
extern TypeInfo t651_TI;
extern MethodInfo m3018_MI;
extern TypeInfo t651_TI;
extern MethodInfo m3018_MI;
extern TypeInfo t651_TI;
extern MethodInfo m3018_MI;
extern TypeInfo t651_TI;
extern MethodInfo m3018_MI;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t651 * tmp;
		tmp = (t651 *)il2cpp_codegen_object_new (&t651_TI);
		m3018(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), &m3018_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t651 * tmp;
		tmp = (t651 *)il2cpp_codegen_object_new (&t651_TI);
		m3018(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), &m3018_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t651 * tmp;
		tmp = (t651 *)il2cpp_codegen_object_new (&t651_TI);
		m3018(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), &m3018_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t651 * tmp;
		tmp = (t651 *)il2cpp_codegen_object_new (&t651_TI);
		m3018(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), &m3018_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t651 * tmp;
		tmp = (t651 *)il2cpp_codegen_object_new (&t651_TI);
		m3018(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), &m3018_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t651 * tmp;
		tmp = (t651 *)il2cpp_codegen_object_new (&t651_TI);
		m3018(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), &m3018_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t651 * tmp;
		tmp = (t651 *)il2cpp_codegen_object_new (&t651_TI);
		m3018(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), &m3018_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t27 * tmp;
		tmp = (t27 *)il2cpp_codegen_object_new (&t27_TI);
		m46(tmp, &m46_MI);
		extern MethodInfo m47_MI;
		m47(tmp, true, &m47_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t651 * tmp;
		tmp = (t651 *)il2cpp_codegen_object_new (&t651_TI);
		m3018(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), &m3018_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t652 * tmp;
		tmp = (t652 *)il2cpp_codegen_object_new (&t652_TI);
		m3019(tmp, &m3019_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t651 * tmp;
		tmp = (t651 *)il2cpp_codegen_object_new (&t651_TI);
		m3018(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), &m3018_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t651 * tmp;
		tmp = (t651 *)il2cpp_codegen_object_new (&t651_TI);
		m3018(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), &m3018_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		t651 * tmp;
		tmp = (t651 *)il2cpp_codegen_object_new (&t651_TI);
		m3018(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), &m3018_MI);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		t651 * tmp;
		tmp = (t651 *)il2cpp_codegen_object_new (&t651_TI);
		m3018(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), &m3018_MI);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_Assembly__CustomAttributeCache = {
14,
NULL,
&g_UnityEngine_Assembly_CustomAttributesCacheGenerator
};
