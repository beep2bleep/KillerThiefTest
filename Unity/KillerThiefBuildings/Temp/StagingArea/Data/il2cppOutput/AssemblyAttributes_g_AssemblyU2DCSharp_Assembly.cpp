#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t27_TI;
#include "t27.h"
#include "t27MD.h"
extern MethodInfo m46_MI;
void g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
}
CustomAttributesCache g_AssemblyU2DCSharp_Assembly__CustomAttributeCache = {
1,
NULL,
&g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator
};
