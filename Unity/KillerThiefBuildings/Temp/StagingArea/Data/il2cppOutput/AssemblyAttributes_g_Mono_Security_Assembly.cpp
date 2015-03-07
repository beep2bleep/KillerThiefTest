#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t425_TI;
#include "t425.h"
#include "t425MD.h"
extern MethodInfo m2055_MI;
extern TypeInfo t33_TI;
#include "t33.h"
#include "t33MD.h"
extern MethodInfo m70_MI;
extern TypeInfo t652_TI;
#include "t652.h"
#include "t652MD.h"
extern MethodInfo m3038_MI;
extern TypeInfo t674_TI;
#include "t674.h"
#include "t674MD.h"
extern MethodInfo m3060_MI;
extern TypeInfo t675_TI;
#include "t675.h"
#include "t675MD.h"
extern MethodInfo m3061_MI;
extern TypeInfo t427_TI;
#include "t427.h"
#include "t427MD.h"
extern MethodInfo m2057_MI;
extern TypeInfo t421_TI;
#include "t421.h"
#include "t421MD.h"
extern MethodInfo m2051_MI;
extern TypeInfo t671_TI;
#include "t671.h"
#include "t671MD.h"
extern MethodInfo m3057_MI;
extern TypeInfo t418_TI;
#include "t418.h"
#include "t418MD.h"
extern MethodInfo m2048_MI;
extern TypeInfo t422_TI;
#include "t422.h"
#include "t422MD.h"
extern MethodInfo m2052_MI;
extern TypeInfo t419_TI;
#include "t419.h"
#include "t419MD.h"
extern MethodInfo m2049_MI;
extern TypeInfo t670_TI;
#include "t670.h"
#include "t670MD.h"
extern MethodInfo m3056_MI;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t425 * tmp;
		tmp = (t425 *)il2cpp_codegen_object_new (&t425_TI);
		m2055(tmp, false, &m2055_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t33 * tmp;
		tmp = (t33 *)il2cpp_codegen_object_new (&t33_TI);
		m70(tmp, &m70_MI);
		extern MethodInfo m71_MI;
		m71(tmp, true, &m71_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t652 * tmp;
		tmp = (t652 *)il2cpp_codegen_object_new (&t652_TI);
		m3038(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), &m3038_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t674 * tmp;
		tmp = (t674 *)il2cpp_codegen_object_new (&t674_TI);
		m3060(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), &m3060_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t675 * tmp;
		tmp = (t675 *)il2cpp_codegen_object_new (&t675_TI);
		m3061(tmp, true, &m3061_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t427 * tmp;
		tmp = (t427 *)il2cpp_codegen_object_new (&t427_TI);
		m2057(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), &m2057_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t421 * tmp;
		tmp = (t421 *)il2cpp_codegen_object_new (&t421_TI);
		m2051(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), &m2051_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t671 * tmp;
		tmp = (t671 *)il2cpp_codegen_object_new (&t671_TI);
		m3057(tmp, true, &m3057_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t418 * tmp;
		tmp = (t418 *)il2cpp_codegen_object_new (&t418_TI);
		m2048(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m2048_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t422 * tmp;
		tmp = (t422 *)il2cpp_codegen_object_new (&t422_TI);
		m2052(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), &m2052_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t419 * tmp;
		tmp = (t419 *)il2cpp_codegen_object_new (&t419_TI);
		m2049(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m2049_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3056(tmp, il2cpp_codegen_string_new_wrapper("en-US"), &m3056_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_Mono_Security_Assembly__CustomAttributeCache = {
12,
NULL,
&g_Mono_Security_Assembly_CustomAttributesCacheGenerator
};
