#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t33_TI;
#include "t33.h"
#include "t33MD.h"
extern MethodInfo m70_MI;
void g_replacements_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
}
CustomAttributesCache g_replacements_Assembly__CustomAttributeCache = {
1,
NULL,
&g_replacements_Assembly_CustomAttributesCacheGenerator
};
