#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t652_TI;
#include "t652.h"
#include "t652MD.h"
extern MethodInfo m3038_MI;
extern TypeInfo t652_TI;
extern MethodInfo m3038_MI;
extern TypeInfo t652_TI;
extern MethodInfo m3038_MI;
extern TypeInfo t652_TI;
extern MethodInfo m3038_MI;
extern TypeInfo t652_TI;
extern MethodInfo m3038_MI;
extern TypeInfo t652_TI;
extern MethodInfo m3038_MI;
extern TypeInfo t652_TI;
extern MethodInfo m3038_MI;
extern TypeInfo t33_TI;
#include "t33.h"
#include "t33MD.h"
extern MethodInfo m70_MI;
extern TypeInfo t652_TI;
extern MethodInfo m3038_MI;
extern TypeInfo t653_TI;
#include "t653.h"
#include "t653MD.h"
extern MethodInfo m3039_MI;
extern TypeInfo t652_TI;
extern MethodInfo m3038_MI;
extern TypeInfo t652_TI;
extern MethodInfo m3038_MI;
extern TypeInfo t652_TI;
extern MethodInfo m3038_MI;
extern TypeInfo t652_TI;
extern MethodInfo m3038_MI;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t652 * tmp;
		tmp = (t652 *)il2cpp_codegen_object_new (&t652_TI);
		m3038(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), &m3038_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t652 * tmp;
		tmp = (t652 *)il2cpp_codegen_object_new (&t652_TI);
		m3038(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), &m3038_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t652 * tmp;
		tmp = (t652 *)il2cpp_codegen_object_new (&t652_TI);
		m3038(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), &m3038_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t652 * tmp;
		tmp = (t652 *)il2cpp_codegen_object_new (&t652_TI);
		m3038(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), &m3038_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t652 * tmp;
		tmp = (t652 *)il2cpp_codegen_object_new (&t652_TI);
		m3038(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), &m3038_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t652 * tmp;
		tmp = (t652 *)il2cpp_codegen_object_new (&t652_TI);
		m3038(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), &m3038_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t652 * tmp;
		tmp = (t652 *)il2cpp_codegen_object_new (&t652_TI);
		m3038(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), &m3038_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t33 * tmp;
		tmp = (t33 *)il2cpp_codegen_object_new (&t33_TI);
		m70(tmp, &m70_MI);
		extern MethodInfo m71_MI;
		m71(tmp, true, &m71_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t652 * tmp;
		tmp = (t652 *)il2cpp_codegen_object_new (&t652_TI);
		m3038(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), &m3038_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t653 * tmp;
		tmp = (t653 *)il2cpp_codegen_object_new (&t653_TI);
		m3039(tmp, &m3039_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t652 * tmp;
		tmp = (t652 *)il2cpp_codegen_object_new (&t652_TI);
		m3038(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), &m3038_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t652 * tmp;
		tmp = (t652 *)il2cpp_codegen_object_new (&t652_TI);
		m3038(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), &m3038_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		t652 * tmp;
		tmp = (t652 *)il2cpp_codegen_object_new (&t652_TI);
		m3038(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), &m3038_MI);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		t652 * tmp;
		tmp = (t652 *)il2cpp_codegen_object_new (&t652_TI);
		m3038(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), &m3038_MI);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_Assembly__CustomAttributeCache = {
14,
NULL,
&g_UnityEngine_Assembly_CustomAttributesCacheGenerator
};
