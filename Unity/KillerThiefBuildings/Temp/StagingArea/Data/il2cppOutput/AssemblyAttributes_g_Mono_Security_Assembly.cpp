#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t424_TI;
#include "t424.h"
#include "t424MD.h"
extern MethodInfo m2036_MI;
extern TypeInfo t27_TI;
#include "t27.h"
#include "t27MD.h"
extern MethodInfo m46_MI;
extern TypeInfo t651_TI;
#include "t651.h"
#include "t651MD.h"
extern MethodInfo m3018_MI;
extern TypeInfo t673_TI;
#include "t673.h"
#include "t673MD.h"
extern MethodInfo m3040_MI;
extern TypeInfo t674_TI;
#include "t674.h"
#include "t674MD.h"
extern MethodInfo m3041_MI;
extern TypeInfo t426_TI;
#include "t426.h"
#include "t426MD.h"
extern MethodInfo m2038_MI;
extern TypeInfo t420_TI;
#include "t420.h"
#include "t420MD.h"
extern MethodInfo m2032_MI;
extern TypeInfo t670_TI;
#include "t670.h"
#include "t670MD.h"
extern MethodInfo m3037_MI;
extern TypeInfo t417_TI;
#include "t417.h"
#include "t417MD.h"
extern MethodInfo m2029_MI;
extern TypeInfo t421_TI;
#include "t421.h"
#include "t421MD.h"
extern MethodInfo m2033_MI;
extern TypeInfo t418_TI;
#include "t418.h"
#include "t418MD.h"
extern MethodInfo m2030_MI;
extern TypeInfo t669_TI;
#include "t669.h"
#include "t669MD.h"
extern MethodInfo m3036_MI;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t4 *) * cache->count, 0);
	{
		t424 * tmp;
		tmp = (t424 *)il2cpp_codegen_object_new (&t424_TI);
		m2036(tmp, false, &m2036_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t27 * tmp;
		tmp = (t27 *)il2cpp_codegen_object_new (&t27_TI);
		m46(tmp, &m46_MI);
		extern MethodInfo m47_MI;
		m47(tmp, true, &m47_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t651 * tmp;
		tmp = (t651 *)il2cpp_codegen_object_new (&t651_TI);
		m3018(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), &m3018_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t673 * tmp;
		tmp = (t673 *)il2cpp_codegen_object_new (&t673_TI);
		m3040(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), &m3040_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t674 * tmp;
		tmp = (t674 *)il2cpp_codegen_object_new (&t674_TI);
		m3041(tmp, true, &m3041_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t426 * tmp;
		tmp = (t426 *)il2cpp_codegen_object_new (&t426_TI);
		m2038(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), &m2038_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t420 * tmp;
		tmp = (t420 *)il2cpp_codegen_object_new (&t420_TI);
		m2032(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), &m2032_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t670 * tmp;
		tmp = (t670 *)il2cpp_codegen_object_new (&t670_TI);
		m3037(tmp, true, &m3037_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t417 * tmp;
		tmp = (t417 *)il2cpp_codegen_object_new (&t417_TI);
		m2029(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m2029_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t421 * tmp;
		tmp = (t421 *)il2cpp_codegen_object_new (&t421_TI);
		m2033(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), &m2033_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t418 * tmp;
		tmp = (t418 *)il2cpp_codegen_object_new (&t418_TI);
		m2030(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m2030_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t669 * tmp;
		tmp = (t669 *)il2cpp_codegen_object_new (&t669_TI);
		m3036(tmp, il2cpp_codegen_string_new_wrapper("en-US"), &m3036_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_Mono_Security_Assembly__CustomAttributeCache = {
12,
NULL,
&g_Mono_Security_Assembly_CustomAttributesCacheGenerator
};
