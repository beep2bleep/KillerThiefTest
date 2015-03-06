#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t117.h"
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
extern TypeInfo t117_TI;
#include "t117MD.h"

#include "t15.h"
#include "mscorlib_ArrayTypes.h"
#include "t4.h"
#include "t120.h"
#include "t544.h"
#include "t545.h"
#include "t8.h"
#include "t290.h"
#include "t119.h"
#include "t291.h"
#include "t1905.h"
extern TypeInfo t305_TI;
extern TypeInfo t4_TI;
extern TypeInfo t117_TI;
extern TypeInfo t525_TI;
extern TypeInfo t290_TI;
extern TypeInfo t119_TI;
extern TypeInfo t1905_TI;
#include "t554MD.h"
#include "t343MD.h"
#include "t290MD.h"
#include "t1905MD.h"
extern Il2CppType t119_0_0_0;
extern MethodInfo m2792_MI;
extern MethodInfo m10423_MI;
extern MethodInfo m2797_MI;
extern MethodInfo m2930_MI;
extern MethodInfo m2928_MI;
extern MethodInfo m2798_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2800_MI;
extern MethodInfo m10427_MI;
extern MethodInfo m10428_MI;
extern MethodInfo m2799_MI;

#include "t14.h"

extern MethodInfo m1467_MI;
 void m1467 (t117 * __this, MethodInfo* method){
	{
		__this->f4 = ((t305*)SZArrayNew(InitializedTypeInfo(&t305_TI), 1));
		m2792(__this, &m2792_MI);
		return;
	}
}
extern MethodInfo m1472_MI;
 void m1472 (t117 * __this, t120 * p0, MethodInfo* method){
	{
		t544 * L_0 = m10423(NULL, p0, &m10423_MI);
		m2797(__this, L_0, &m2797_MI);
		return;
	}
}
extern MethodInfo m10422_MI;
 void m10422 (t117 * __this, t120 * p0, MethodInfo* method){
	{
		t4 * L_0 = m2930(p0, &m2930_MI);
		t545 * L_1 = m2928(p0, &m2928_MI);
		m2798(__this, L_0, L_1, &m2798_MI);
		return;
	}
}
extern MethodInfo m1468_MI;
 t545 * m1468 (t117 * __this, t8* p0, t4 * p1, MethodInfo* method){
	{
		t525* L_0 = ((t525*)SZArrayNew(InitializedTypeInfo(&t525_TI), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t290_TI));
		t290 * L_1 = m1528(NULL, LoadTypeToken(&t119_0_0_0), &m1528_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t290 **)(t290 **)SZArrayLdElema(L_0, 0)) = (t290 *)L_1;
		t545 * L_2 = m2800(NULL, p1, p0, L_0, &m2800_MI);
		return L_2;
	}
}
extern MethodInfo m1469_MI;
 t544 * m1469 (t117 * __this, t4 * p0, t545 * p1, MethodInfo* method){
	{
		t1905 * L_0 = (t1905 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1905_TI));
		m10427(L_0, p0, p1, &m10427_MI);
		return L_0;
	}
}
extern MethodInfo m10423_MI;
 t544 * m10423 (t4 * __this, t120 * p0, MethodInfo* method){
	{
		t1905 * L_0 = (t1905 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1905_TI));
		m10428(L_0, p0, &m10428_MI);
		return L_0;
	}
}
extern MethodInfo m1471_MI;
 void m1471 (t117 * __this, t119  p0, MethodInfo* method){
	{
		t305* L_0 = (__this->f4);
		t119  L_1 = p0;
		t4 * L_2 = Box(InitializedTypeInfo(&t119_TI), &L_1);
		ArrayElementTypeCheck (L_0, L_2);
		*((t4 **)(t4 **)SZArrayLdElema(L_0, 0)) = (t4 *)L_2;
		t305* L_3 = (__this->f4);
		m2799(__this, L_3, &m2799_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
extern Il2CppType t305_0_0_33;
FieldInfo t117_f4_FieldInfo = 
{
	"m_InvokeArray", &t305_0_0_33, &t117_TI, offsetof(t117, f4), &EmptyCustomAttributesCache};
static FieldInfo* t117_FIs[] =
{
	&t117_f4_FieldInfo,
	NULL
};
extern TypeInfo t117_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m1467_MI = 
{
	".ctor", (methodPointerType)&m1467, &t117_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t120_0_0_0;
static ParameterInfo t117_m1472_ParameterInfos[] = 
{
	{"call", 0, 134217728, &EmptyCustomAttributesCache, &t120_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1472_MI = 
{
	"AddListener", (methodPointerType)&m1472, &t117_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t117_m1472_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t120_0_0_0;
static ParameterInfo t117_m10422_ParameterInfos[] = 
{
	{"call", 0, 134217728, &EmptyCustomAttributesCache, &t120_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10422_MI = 
{
	"RemoveListener", (methodPointerType)&m10422, &t117_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t117_m10422_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t8_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t117_m1468_ParameterInfos[] = 
{
	{"name", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"targetObj", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t545_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1468_MI = 
{
	"FindMethod_Impl", (methodPointerType)&m1468, &t117_TI, &t545_0_0_0, RuntimeInvoker_t4_t4_t4, t117_m1468_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t117_m1469_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t544_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1469_MI = 
{
	"GetDelegate", (methodPointerType)&m1469, &t117_TI, &t544_0_0_0, RuntimeInvoker_t4_t4_t4, t117_m1469_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t120_0_0_0;
static ParameterInfo t117_m10423_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &t120_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t544_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10423_MI = 
{
	"GetDelegate", (methodPointerType)&m10423, &t117_TI, &t544_0_0_0, RuntimeInvoker_t4_t4, t117_m10423_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t119_0_0_0;
static ParameterInfo t117_m1471_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t119_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t119 (MethodInfo* method, void* obj, void** args);
MethodInfo m1471_MI = 
{
	"Invoke", (methodPointerType)&m1471, &t117_TI, &t15_0_0_0, RuntimeInvoker_t15_t119, t117_m1471_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t117_MIs[] =
{
	&m1467_MI,
	&m1472_MI,
	&m10422_MI,
	&m1468_MI,
	&m1469_MI,
	&m10423_MI,
	&m1471_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m1300_MI;
extern MethodInfo m1301_MI;
extern MethodInfo m1302_MI;
extern MethodInfo m1468_MI;
extern MethodInfo m1469_MI;
static MethodInfo* t117_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m1300_MI,
	&m1301_MI,
	&m1302_MI,
	&m1468_MI,
	&m1469_MI,
};
extern TypeInfo t299_TI;
static Il2CppInterfaceOffsetPair t117_IOs[] = 
{
	{ &t299_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t117_0_0_0;
extern Il2CppType t117_1_0_0;
extern TypeInfo t554_TI;
struct t117;
extern TypeInfo t117_TI;
extern Il2CppGenericClass t117_GC;
TypeInfo t117_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`1", "UnityEngine.Events", t117_MIs, NULL, t117_FIs, NULL, &t554_TI, NULL, NULL, &t117_TI, NULL, t117_VT, &EmptyCustomAttributesCache, &t117_TI, &t117_0_0_0, &t117_1_0_0, t117_IOs, &t117_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t117), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 0, 1, 0, 0, 8, 0, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t120_TI;
#include "t120MD.h"

#include "t50.h"
#include "t49.h"


extern MethodInfo m1568_MI;
 void m1568 (t120 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10424_MI;
 void m10424 (t120 * __this, t119  p0, MethodInfo* method){
	typedef  void (*FunctionPointerType) (t4 * __this, t119  p0, MethodInfo* method);
	if (__this->f9)
		m10424((t120 *)__this->f9,  p0, method);
	((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10425_MI;
 t4 * m10425 (t120 * __this, t119  p0, t49 * p1, t4 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t119_TI), &p0);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m10426_MI;
 void m10426 (t120 * __this, t4 * p0, MethodInfo* method){
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Color>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t120_m1568_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t120_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m1568_MI = 
{
	".ctor", (methodPointerType)&m1568, &t120_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t120_m1568_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t119_0_0_0;
static ParameterInfo t120_m10424_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t119_0_0_0},
};
extern TypeInfo t120_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t119 (MethodInfo* method, void* obj, void** args);
MethodInfo m10424_MI = 
{
	"Invoke", (methodPointerType)&m10424, &t120_TI, &t15_0_0_0, RuntimeInvoker_t15_t119, t120_m10424_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t119_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t120_m10425_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t119_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t120_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t119_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10425_MI = 
{
	"BeginInvoke", (methodPointerType)&m10425, &t120_TI, &t48_0_0_0, RuntimeInvoker_t4_t119_t4_t4, t120_m10425_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t120_m10426_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t120_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10426_MI = 
{
	"EndInvoke", (methodPointerType)&m10426, &t120_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t120_m10426_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t120_MIs[] =
{
	&m1568_MI,
	&m10424_MI,
	&m10425_MI,
	&m10426_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m10424_MI;
extern MethodInfo m10425_MI;
extern MethodInfo m10426_MI;
static MethodInfo* t120_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m10424_MI,
	&m10425_MI,
	&m10426_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t120_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t120_0_0_0;
extern Il2CppType t120_1_0_0;
extern TypeInfo t189_TI;
struct t120;
extern TypeInfo t120_TI;
extern Il2CppGenericClass t120_GC;
TypeInfo t120_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t120_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t120_TI, NULL, t120_VT, &EmptyCustomAttributesCache, &t120_TI, &t120_0_0_0, &t120_1_0_0, t120_IOs, &t120_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t120), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1905_TI;

#include "t343.h"
#include "t303.h"
#include "t17.h"
extern TypeInfo t1905_TI;
extern TypeInfo t120_TI;
extern TypeInfo t290_TI;
extern TypeInfo t303_TI;
extern TypeInfo t119_TI;
extern TypeInfo t15_TI;
#include "t544MD.h"
#include "t303MD.h"
extern Il2CppType t120_0_0_0;
extern MethodInfo m2771_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2934_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m17993_MI;
extern MethodInfo m2772_MI;
extern MethodInfo m10424_MI;
extern MethodInfo m2930_MI;
extern MethodInfo m2928_MI;
struct t544;
 void m17993 (t4 * __this, t4 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17993_MI;


extern MethodInfo m10427_MI;
 void m10427 (t1905 * __this, t4 * p0, t545 * p1, MethodInfo* method){
	{
		m2771(__this, p0, p1, &m2771_MI);
		t120 * L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t290_TI));
		t290 * L_1 = m1528(NULL, LoadTypeToken(&t120_0_0_0), &m1528_MI);
		t343 * L_2 = m2934(NULL, L_1, p0, p1, &m2934_MI);
		t343 * L_3 = m1571(NULL, L_0, ((t120 *)IsInst(L_2, InitializedTypeInfo(&t120_TI))), &m1571_MI);
		__this->f0 = ((t120 *)Castclass(L_3, InitializedTypeInfo(&t120_TI)));
		return;
	}
}
extern MethodInfo m10428_MI;
 void m10428 (t1905 * __this, t120 * p0, MethodInfo* method){
	{
		m2770(__this, &m2770_MI);
		t120 * L_0 = (__this->f0);
		t343 * L_1 = m1571(NULL, L_0, p0, &m1571_MI);
		__this->f0 = ((t120 *)Castclass(L_1, InitializedTypeInfo(&t120_TI)));
		return;
	}
}
extern MethodInfo m10429_MI;
 void m10429 (t1905 * __this, t305* p0, MethodInfo* method){
	{
		if ((((int32_t)(((int32_t)(((t14 *)p0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		t303 * L_0 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_0, (t8*) &_stringLiteral191, &m1917_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		m17993(NULL, (*(t4 **)(t4 **)SZArrayLdElema(p0, 0)), &m17993_MI);
		t120 * L_1 = (__this->f0);
		bool L_2 = m2772(NULL, L_1, &m2772_MI);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		t120 * L_3 = (__this->f0);
		VirtActionInvoker1< t119  >::Invoke(&m10424_MI, L_3, ((*(t119 *)((t119 *)UnBox ((*(t4 **)(t4 **)SZArrayLdElema(p0, 0)), InitializedTypeInfo(&t119_TI))))));
	}

IL_003f:
	{
		return;
	}
}
extern MethodInfo m10430_MI;
 bool m10430 (t1905 * __this, t4 * p0, t545 * p1, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		t120 * L_0 = (__this->f0);
		t4 * L_1 = m2930(L_0, &m2930_MI);
		if ((((t4 *)L_1) != ((t4 *)p0)))
		{
			goto IL_0021;
		}
	}
	{
		t120 * L_2 = (__this->f0);
		t545 * L_3 = m2928(L_2, &m2928_MI);
		G_B3_0 = ((((t545 *)L_3) == ((t545 *)p1))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
extern Il2CppType t120_0_0_1;
FieldInfo t1905_f0_FieldInfo = 
{
	"Delegate", &t120_0_0_1, &t1905_TI, offsetof(t1905, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1905_FIs[] =
{
	&t1905_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t1905_m10427_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t1905_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10427_MI = 
{
	".ctor", (methodPointerType)&m10427, &t1905_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t1905_m10427_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t120_0_0_0;
static ParameterInfo t1905_m10428_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t120_0_0_0},
};
extern TypeInfo t1905_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10428_MI = 
{
	".ctor", (methodPointerType)&m10428, &t1905_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1905_m10428_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1905_m10429_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t1905_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10429_MI = 
{
	"Invoke", (methodPointerType)&m10429, &t1905_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1905_m10429_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t1905_m10430_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t1905_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10430_MI = 
{
	"Find", (methodPointerType)&m10430, &t1905_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1905_m10430_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1905_MIs[] =
{
	&m10427_MI,
	&m10428_MI,
	&m10429_MI,
	&m10430_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10429_MI;
extern MethodInfo m10430_MI;
static MethodInfo* t1905_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10429_MI,
	&m10430_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1905_0_0_0;
extern Il2CppType t1905_1_0_0;
extern TypeInfo t544_TI;
struct t1905;
extern TypeInfo t1905_TI;
extern Il2CppGenericClass t1905_GC;
TypeInfo t1905_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t1905_MIs, NULL, t1905_FIs, NULL, &t544_TI, NULL, NULL, &t1905_TI, NULL, t1905_VT, &EmptyCustomAttributesCache, &t1905_TI, &t1905_0_0_0, &t1905_1_0_0, NULL, &t1905_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1905), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3363_TI;

#include "t115.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode>
extern MethodInfo m24066_MI;
static PropertyInfo t3363____Current_PropertyInfo = 
{
	&t3363_TI, "Current", &m24066_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3363_PIs[] =
{
	&t3363____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3363_TI;
extern Il2CppType t115_0_0_0;
extern void* RuntimeInvoker_t115 (MethodInfo* method, void* obj, void** args);
MethodInfo m24066_MI = 
{
	"get_Current", NULL, &t3363_TI, &t115_0_0_0, RuntimeInvoker_t115, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3363_MIs[] =
{
	&m24066_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3363_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3363_0_0_0;
extern Il2CppType t3363_1_0_0;
struct t3363;
extern TypeInfo t3363_TI;
extern Il2CppGenericClass t3363_GC;
TypeInfo t3363_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3363_MIs, t3363_PIs, NULL, NULL, NULL, NULL, NULL, &t3363_TI, t3363_ITIs, NULL, &EmptyCustomAttributesCache, &t3363_TI, &t3363_0_0_0, &t3363_1_0_0, NULL, &t3363_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1906.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1906_TI;
#include "t1906MD.h"

#include "t16.h"
#include "t1269.h"
extern TypeInfo t1906_TI;
extern TypeInfo t115_TI;
extern TypeInfo t1269_TI;
#include "t1269MD.h"
#include "t14MD.h"
extern MethodInfo m10435_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m17995_MI;
struct t14;
#include "t1233.h"
 int32_t m17995 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17995_MI;


extern MethodInfo m10431_MI;
 void m10431 (t1906 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10432_MI;
 t4 * m10432 (t1906 * __this, MethodInfo* method){
	{
		int32_t L_0 = m10435(__this, &m10435_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t115_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10433_MI;
 void m10433 (t1906 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10434_MI;
 bool m10434 (t1906 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t14 * L_1 = (__this->f0);
		int32_t L_2 = m3690(L_1, &m3690_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m10435_MI;
 int32_t m10435 (t1906 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral370, &m6887_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1269 * L_3 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_3, (t8*) &_stringLiteral371, &m6887_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t14 * L_4 = (__this->f0);
		t14 * L_5 = (__this->f0);
		int32_t L_6 = m3690(L_5, &m3690_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m17995(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m17995_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode>
extern Il2CppType t14_0_0_1;
FieldInfo t1906_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1906_TI, offsetof(t1906, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1906_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1906_TI, offsetof(t1906, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1906_FIs[] =
{
	&t1906_f0_FieldInfo,
	&t1906_f1_FieldInfo,
	NULL
};
extern MethodInfo m10432_MI;
static PropertyInfo t1906____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1906_TI, "System.Collections.IEnumerator.Current", &m10432_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10435_MI;
static PropertyInfo t1906____Current_PropertyInfo = 
{
	&t1906_TI, "Current", &m10435_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1906_PIs[] =
{
	&t1906____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1906____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1906_m10431_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10431_MI = 
{
	".ctor", (methodPointerType)&m10431, &t1906_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1906_m10431_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1906_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10432_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10432, &t1906_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1906_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10433_MI = 
{
	"Dispose", (methodPointerType)&m10433, &t1906_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1906_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10434_MI = 
{
	"MoveNext", (methodPointerType)&m10434, &t1906_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1906_TI;
extern Il2CppType t115_0_0_0;
extern void* RuntimeInvoker_t115 (MethodInfo* method, void* obj, void** args);
MethodInfo m10435_MI = 
{
	"get_Current", (methodPointerType)&m10435, &t1906_TI, &t115_0_0_0, RuntimeInvoker_t115, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1906_MIs[] =
{
	&m10431_MI,
	&m10432_MI,
	&m10433_MI,
	&m10434_MI,
	&m10435_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10432_MI;
extern MethodInfo m10434_MI;
extern MethodInfo m10433_MI;
extern MethodInfo m10435_MI;
static MethodInfo* t1906_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10432_MI,
	&m10434_MI,
	&m10433_MI,
	&m10435_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3363_TI;
static TypeInfo* t1906_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3363_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3363_TI;
static Il2CppInterfaceOffsetPair t1906_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3363_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1906_0_0_0;
extern Il2CppType t1906_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1906_TI;
extern Il2CppGenericClass t1906_GC;
extern TypeInfo t14_TI;
TypeInfo t1906_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1906_MIs, t1906_PIs, t1906_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1906_TI, t1906_ITIs, t1906_VT, &EmptyCustomAttributesCache, &t1906_TI, &t1906_0_0_0, &t1906_1_0_0, t1906_IOs, &t1906_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1906)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3974_TI;

#include "UnityEngine.UI_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode>
extern MethodInfo m24067_MI;
static PropertyInfo t3974____Count_PropertyInfo = 
{
	&t3974_TI, "Count", &m24067_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24068_MI;
static PropertyInfo t3974____IsReadOnly_PropertyInfo = 
{
	&t3974_TI, "IsReadOnly", &m24068_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3974_PIs[] =
{
	&t3974____Count_PropertyInfo,
	&t3974____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3974_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24067_MI = 
{
	"get_Count", NULL, &t3974_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3974_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24068_MI = 
{
	"get_IsReadOnly", NULL, &t3974_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t115_0_0_0;
static ParameterInfo t3974_m24069_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t115_0_0_0},
};
extern TypeInfo t3974_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24069_MI = 
{
	"Add", NULL, &t3974_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3974_m24069_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3974_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m24070_MI = 
{
	"Clear", NULL, &t3974_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t115_0_0_0;
static ParameterInfo t3974_m24071_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t115_0_0_0},
};
extern TypeInfo t3974_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24071_MI = 
{
	"Contains", NULL, &t3974_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t3974_m24071_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3204_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t3974_m24072_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3204_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3974_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24072_MI = 
{
	"CopyTo", NULL, &t3974_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t3974_m24072_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t115_0_0_0;
static ParameterInfo t3974_m24073_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t115_0_0_0},
};
extern TypeInfo t3974_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24073_MI = 
{
	"Remove", NULL, &t3974_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t3974_m24073_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3974_MIs[] =
{
	&m24067_MI,
	&m24068_MI,
	&m24069_MI,
	&m24070_MI,
	&m24071_MI,
	&m24072_MI,
	&m24073_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3976_TI;
static TypeInfo* t3974_ITIs[] = 
{
	&t591_TI,
	&t3976_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3974_0_0_0;
extern Il2CppType t3974_1_0_0;
struct t3974;
extern TypeInfo t3974_TI;
extern Il2CppGenericClass t3974_GC;
TypeInfo t3974_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3974_MIs, t3974_PIs, NULL, NULL, NULL, NULL, NULL, &t3974_TI, t3974_ITIs, NULL, &EmptyCustomAttributesCache, &t3974_TI, &t3974_0_0_0, &t3974_1_0_0, NULL, &t3974_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3976_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode>
extern TypeInfo t3976_TI;
extern Il2CppType t3363_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24074_MI = 
{
	"GetEnumerator", NULL, &t3976_TI, &t3363_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3976_MIs[] =
{
	&m24074_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t3976_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3976_0_0_0;
extern Il2CppType t3976_1_0_0;
struct t3976;
extern TypeInfo t3976_TI;
extern Il2CppGenericClass t3976_GC;
TypeInfo t3976_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3976_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3976_TI, t3976_ITIs, NULL, &EmptyCustomAttributesCache, &t3976_TI, &t3976_0_0_0, &t3976_1_0_0, NULL, &t3976_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3975_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode>
extern MethodInfo m24075_MI;
extern MethodInfo m24076_MI;
static PropertyInfo t3975____Item_PropertyInfo = 
{
	&t3975_TI, "Item", &m24075_MI, &m24076_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3975_PIs[] =
{
	&t3975____Item_PropertyInfo,
	NULL
};
extern Il2CppType t115_0_0_0;
static ParameterInfo t3975_m24077_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t115_0_0_0},
};
extern TypeInfo t3975_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24077_MI = 
{
	"IndexOf", NULL, &t3975_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t3975_m24077_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t115_0_0_0;
static ParameterInfo t3975_m24078_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t115_0_0_0},
};
extern TypeInfo t3975_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24078_MI = 
{
	"Insert", NULL, &t3975_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t3975_m24078_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3975_m24079_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3975_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24079_MI = 
{
	"RemoveAt", NULL, &t3975_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3975_m24079_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3975_m24075_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3975_TI;
extern Il2CppType t115_0_0_0;
extern void* RuntimeInvoker_t115_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24075_MI = 
{
	"get_Item", NULL, &t3975_TI, &t115_0_0_0, RuntimeInvoker_t115_t16, t3975_m24075_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t115_0_0_0;
static ParameterInfo t3975_m24076_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t115_0_0_0},
};
extern TypeInfo t3975_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24076_MI = 
{
	"set_Item", NULL, &t3975_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t3975_m24076_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3975_MIs[] =
{
	&m24077_MI,
	&m24078_MI,
	&m24079_MI,
	&m24075_MI,
	&m24076_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3974_TI;
extern TypeInfo t3976_TI;
static TypeInfo* t3975_ITIs[] = 
{
	&t591_TI,
	&t3974_TI,
	&t3976_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3975_0_0_0;
extern Il2CppType t3975_1_0_0;
struct t3975;
extern TypeInfo t3975_TI;
extern Il2CppGenericClass t3975_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3975_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3975_MIs, t3975_PIs, NULL, NULL, NULL, NULL, NULL, &t3975_TI, t3975_ITIs, NULL, &t1400__CustomAttributeCache, &t3975_TI, &t3975_0_0_0, &t3975_1_0_0, NULL, &t3975_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3364_TI;

#include "t128.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Button>
extern MethodInfo m24080_MI;
static PropertyInfo t3364____Current_PropertyInfo = 
{
	&t3364_TI, "Current", &m24080_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3364_PIs[] =
{
	&t3364____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3364_TI;
extern Il2CppType t128_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24080_MI = 
{
	"get_Current", NULL, &t3364_TI, &t128_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3364_MIs[] =
{
	&m24080_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3364_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3364_0_0_0;
extern Il2CppType t3364_1_0_0;
struct t3364;
extern TypeInfo t3364_TI;
extern Il2CppGenericClass t3364_GC;
TypeInfo t3364_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3364_MIs, t3364_PIs, NULL, NULL, NULL, NULL, NULL, &t3364_TI, t3364_ITIs, NULL, &EmptyCustomAttributesCache, &t3364_TI, &t3364_0_0_0, &t3364_1_0_0, NULL, &t3364_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1907.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1907_TI;
#include "t1907MD.h"

extern TypeInfo t1907_TI;
extern TypeInfo t128_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10440_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m18006_MI;
struct t14;
struct t14;
 t4 * m16794_gshared (t14 * __this, int32_t p0, MethodInfo* method);
#define m16794(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
#define m18006(__this, p0, method) (t128 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m18006_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Button>
extern Il2CppType t14_0_0_1;
FieldInfo t1907_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1907_TI, offsetof(t1907, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1907_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1907_TI, offsetof(t1907, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1907_FIs[] =
{
	&t1907_f0_FieldInfo,
	&t1907_f1_FieldInfo,
	NULL
};
extern MethodInfo m10437_MI;
static PropertyInfo t1907____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1907_TI, "System.Collections.IEnumerator.Current", &m10437_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10440_MI;
static PropertyInfo t1907____Current_PropertyInfo = 
{
	&t1907_TI, "Current", &m10440_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1907_PIs[] =
{
	&t1907____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1907____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1907_m10436_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1907_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10436_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t1907_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1907_m10436_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1907_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10437_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t1907_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1907_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10438_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t1907_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1907_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10439_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t1907_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1907_TI;
extern Il2CppType t128_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10440_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t1907_TI, &t128_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1907_MIs[] =
{
	&m10436_MI,
	&m10437_MI,
	&m10438_MI,
	&m10439_MI,
	&m10440_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10437_MI;
extern MethodInfo m10439_MI;
extern MethodInfo m10438_MI;
extern MethodInfo m10440_MI;
static MethodInfo* t1907_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10437_MI,
	&m10439_MI,
	&m10438_MI,
	&m10440_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3364_TI;
static TypeInfo* t1907_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3364_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3364_TI;
static Il2CppInterfaceOffsetPair t1907_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3364_TI, 7},
};
extern MethodInfo m10440_MI;
extern TypeInfo t128_TI;
extern MethodInfo m18006_MI;
static void* t1907_RGCTXData[3] = 
{
	&m10440_MI,
	&t128_TI,
	&m18006_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1907_0_0_0;
extern Il2CppType t1907_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1907_TI;
extern Il2CppGenericClass t1907_GC;
extern TypeInfo t14_TI;
TypeInfo t1907_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1907_MIs, t1907_PIs, t1907_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1907_TI, t1907_ITIs, t1907_VT, &EmptyCustomAttributesCache, &t1907_TI, &t1907_0_0_0, &t1907_1_0_0, t1907_IOs, &t1907_GC, NULL, NULL, NULL, t1907_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1907)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3977_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Button>
extern MethodInfo m24081_MI;
static PropertyInfo t3977____Count_PropertyInfo = 
{
	&t3977_TI, "Count", &m24081_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24082_MI;
static PropertyInfo t3977____IsReadOnly_PropertyInfo = 
{
	&t3977_TI, "IsReadOnly", &m24082_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3977_PIs[] =
{
	&t3977____Count_PropertyInfo,
	&t3977____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3977_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24081_MI = 
{
	"get_Count", NULL, &t3977_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3977_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24082_MI = 
{
	"get_IsReadOnly", NULL, &t3977_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t128_0_0_0;
static ParameterInfo t3977_m24083_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t128_0_0_0},
};
extern TypeInfo t3977_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24083_MI = 
{
	"Add", NULL, &t3977_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t3977_m24083_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3977_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m24084_MI = 
{
	"Clear", NULL, &t3977_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t128_0_0_0;
static ParameterInfo t3977_m24085_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t128_0_0_0},
};
extern TypeInfo t3977_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24085_MI = 
{
	"Contains", NULL, &t3977_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3977_m24085_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3205_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t3977_m24086_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3205_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3977_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24086_MI = 
{
	"CopyTo", NULL, &t3977_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t3977_m24086_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t128_0_0_0;
static ParameterInfo t3977_m24087_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t128_0_0_0},
};
extern TypeInfo t3977_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24087_MI = 
{
	"Remove", NULL, &t3977_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t3977_m24087_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3977_MIs[] =
{
	&m24081_MI,
	&m24082_MI,
	&m24083_MI,
	&m24084_MI,
	&m24085_MI,
	&m24086_MI,
	&m24087_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3979_TI;
static TypeInfo* t3977_ITIs[] = 
{
	&t591_TI,
	&t3979_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3977_0_0_0;
extern Il2CppType t3977_1_0_0;
struct t3977;
extern TypeInfo t3977_TI;
extern Il2CppGenericClass t3977_GC;
TypeInfo t3977_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3977_MIs, t3977_PIs, NULL, NULL, NULL, NULL, NULL, &t3977_TI, t3977_ITIs, NULL, &EmptyCustomAttributesCache, &t3977_TI, &t3977_0_0_0, &t3977_1_0_0, NULL, &t3977_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3979_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Button>
extern TypeInfo t3979_TI;
extern Il2CppType t3364_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24088_MI = 
{
	"GetEnumerator", NULL, &t3979_TI, &t3364_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3979_MIs[] =
{
	&m24088_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t3979_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3979_0_0_0;
extern Il2CppType t3979_1_0_0;
struct t3979;
extern TypeInfo t3979_TI;
extern Il2CppGenericClass t3979_GC;
TypeInfo t3979_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3979_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3979_TI, t3979_ITIs, NULL, &EmptyCustomAttributesCache, &t3979_TI, &t3979_0_0_0, &t3979_1_0_0, NULL, &t3979_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3978_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Button>
extern MethodInfo m24089_MI;
extern MethodInfo m24090_MI;
static PropertyInfo t3978____Item_PropertyInfo = 
{
	&t3978_TI, "Item", &m24089_MI, &m24090_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3978_PIs[] =
{
	&t3978____Item_PropertyInfo,
	NULL
};
extern Il2CppType t128_0_0_0;
static ParameterInfo t3978_m24091_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t128_0_0_0},
};
extern TypeInfo t3978_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24091_MI = 
{
	"IndexOf", NULL, &t3978_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t3978_m24091_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t128_0_0_0;
static ParameterInfo t3978_m24092_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t128_0_0_0},
};
extern TypeInfo t3978_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24092_MI = 
{
	"Insert", NULL, &t3978_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t3978_m24092_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3978_m24093_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3978_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24093_MI = 
{
	"RemoveAt", NULL, &t3978_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3978_m24093_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3978_m24089_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3978_TI;
extern Il2CppType t128_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24089_MI = 
{
	"get_Item", NULL, &t3978_TI, &t128_0_0_0, RuntimeInvoker_t4_t16, t3978_m24089_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t128_0_0_0;
static ParameterInfo t3978_m24090_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t128_0_0_0},
};
extern TypeInfo t3978_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24090_MI = 
{
	"set_Item", NULL, &t3978_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t3978_m24090_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3978_MIs[] =
{
	&m24091_MI,
	&m24092_MI,
	&m24093_MI,
	&m24089_MI,
	&m24090_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3977_TI;
extern TypeInfo t3979_TI;
static TypeInfo* t3978_ITIs[] = 
{
	&t591_TI,
	&t3977_TI,
	&t3979_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3978_0_0_0;
extern Il2CppType t3978_1_0_0;
struct t3978;
extern TypeInfo t3978_TI;
extern Il2CppGenericClass t3978_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3978_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3978_MIs, t3978_PIs, NULL, NULL, NULL, NULL, NULL, &t3978_TI, t3978_ITIs, NULL, &t1400__CustomAttributeCache, &t3978_TI, &t3978_0_0_0, &t3978_1_0_0, NULL, &t3978_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2142_TI;

#include "t129.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>
extern MethodInfo m24094_MI;
static PropertyInfo t2142____Count_PropertyInfo = 
{
	&t2142_TI, "Count", &m24094_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24095_MI;
static PropertyInfo t2142____IsReadOnly_PropertyInfo = 
{
	&t2142_TI, "IsReadOnly", &m24095_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2142_PIs[] =
{
	&t2142____Count_PropertyInfo,
	&t2142____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t2142_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24094_MI = 
{
	"get_Count", NULL, &t2142_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2142_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24095_MI = 
{
	"get_IsReadOnly", NULL, &t2142_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t129_0_0_0;
static ParameterInfo t2142_m24096_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t129_0_0_0},
};
extern TypeInfo t2142_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24096_MI = 
{
	"Add", NULL, &t2142_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2142_m24096_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2142_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m24097_MI = 
{
	"Clear", NULL, &t2142_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t129_0_0_0;
static ParameterInfo t2142_m24098_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t129_0_0_0},
};
extern TypeInfo t2142_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24098_MI = 
{
	"Contains", NULL, &t2142_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2142_m24098_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2140_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t2142_m24099_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2140_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2142_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24099_MI = 
{
	"CopyTo", NULL, &t2142_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t2142_m24099_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t129_0_0_0;
static ParameterInfo t2142_m24100_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t129_0_0_0},
};
extern TypeInfo t2142_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24100_MI = 
{
	"Remove", NULL, &t2142_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2142_m24100_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2142_MIs[] =
{
	&m24094_MI,
	&m24095_MI,
	&m24096_MI,
	&m24097_MI,
	&m24098_MI,
	&m24099_MI,
	&m24100_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t2143_TI;
static TypeInfo* t2142_ITIs[] = 
{
	&t591_TI,
	&t2143_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2142_0_0_0;
extern Il2CppType t2142_1_0_0;
struct t2142;
extern TypeInfo t2142_TI;
extern Il2CppGenericClass t2142_GC;
TypeInfo t2142_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t2142_MIs, t2142_PIs, NULL, NULL, NULL, NULL, NULL, &t2142_TI, t2142_ITIs, NULL, &EmptyCustomAttributesCache, &t2142_TI, &t2142_0_0_0, &t2142_1_0_0, NULL, &t2142_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2143_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable>
extern TypeInfo t2143_TI;
extern Il2CppType t2141_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24101_MI = 
{
	"GetEnumerator", NULL, &t2143_TI, &t2141_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2143_MIs[] =
{
	&m24101_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t2143_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2143_0_0_0;
extern Il2CppType t2143_1_0_0;
struct t2143;
extern TypeInfo t2143_TI;
extern Il2CppGenericClass t2143_GC;
TypeInfo t2143_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2143_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2143_TI, t2143_ITIs, NULL, &EmptyCustomAttributesCache, &t2143_TI, &t2143_0_0_0, &t2143_1_0_0, NULL, &t2143_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2141_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable>
extern MethodInfo m24102_MI;
static PropertyInfo t2141____Current_PropertyInfo = 
{
	&t2141_TI, "Current", &m24102_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2141_PIs[] =
{
	&t2141____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2141_TI;
extern Il2CppType t129_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24102_MI = 
{
	"get_Current", NULL, &t2141_TI, &t129_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2141_MIs[] =
{
	&m24102_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t2141_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2141_0_0_0;
extern Il2CppType t2141_1_0_0;
struct t2141;
extern TypeInfo t2141_TI;
extern Il2CppGenericClass t2141_GC;
TypeInfo t2141_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2141_MIs, t2141_PIs, NULL, NULL, NULL, NULL, NULL, &t2141_TI, t2141_ITIs, NULL, &EmptyCustomAttributesCache, &t2141_TI, &t2141_0_0_0, &t2141_1_0_0, NULL, &t2141_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1908.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1908_TI;
#include "t1908MD.h"

extern TypeInfo t1908_TI;
extern TypeInfo t129_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10445_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m18017_MI;
struct t14;
#define m18017(__this, p0, method) (t129 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m18017_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Selectable>
extern Il2CppType t14_0_0_1;
FieldInfo t1908_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1908_TI, offsetof(t1908, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1908_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1908_TI, offsetof(t1908, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1908_FIs[] =
{
	&t1908_f0_FieldInfo,
	&t1908_f1_FieldInfo,
	NULL
};
extern MethodInfo m10442_MI;
static PropertyInfo t1908____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1908_TI, "System.Collections.IEnumerator.Current", &m10442_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10445_MI;
static PropertyInfo t1908____Current_PropertyInfo = 
{
	&t1908_TI, "Current", &m10445_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1908_PIs[] =
{
	&t1908____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1908____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1908_m10441_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1908_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10441_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t1908_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1908_m10441_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1908_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10442_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t1908_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1908_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10443_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t1908_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1908_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10444_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t1908_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1908_TI;
extern Il2CppType t129_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10445_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t1908_TI, &t129_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1908_MIs[] =
{
	&m10441_MI,
	&m10442_MI,
	&m10443_MI,
	&m10444_MI,
	&m10445_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10442_MI;
extern MethodInfo m10444_MI;
extern MethodInfo m10443_MI;
extern MethodInfo m10445_MI;
static MethodInfo* t1908_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10442_MI,
	&m10444_MI,
	&m10443_MI,
	&m10445_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t2141_TI;
static TypeInfo* t1908_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t2141_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t2141_TI;
static Il2CppInterfaceOffsetPair t1908_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t2141_TI, 7},
};
extern MethodInfo m10445_MI;
extern TypeInfo t129_TI;
extern MethodInfo m18017_MI;
static void* t1908_RGCTXData[3] = 
{
	&m10445_MI,
	&t129_TI,
	&m18017_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1908_0_0_0;
extern Il2CppType t1908_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1908_TI;
extern Il2CppGenericClass t1908_GC;
extern TypeInfo t14_TI;
TypeInfo t1908_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1908_MIs, t1908_PIs, t1908_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1908_TI, t1908_ITIs, t1908_VT, &EmptyCustomAttributesCache, &t1908_TI, &t1908_0_0_0, &t1908_1_0_0, t1908_IOs, &t1908_GC, NULL, NULL, NULL, t1908_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1908)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2148_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Selectable>
extern MethodInfo m24103_MI;
extern MethodInfo m24104_MI;
static PropertyInfo t2148____Item_PropertyInfo = 
{
	&t2148_TI, "Item", &m24103_MI, &m24104_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2148_PIs[] =
{
	&t2148____Item_PropertyInfo,
	NULL
};
extern Il2CppType t129_0_0_0;
static ParameterInfo t2148_m24105_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t129_0_0_0},
};
extern TypeInfo t2148_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24105_MI = 
{
	"IndexOf", NULL, &t2148_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t2148_m24105_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t129_0_0_0;
static ParameterInfo t2148_m24106_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t129_0_0_0},
};
extern TypeInfo t2148_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24106_MI = 
{
	"Insert", NULL, &t2148_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2148_m24106_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2148_m24107_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2148_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24107_MI = 
{
	"RemoveAt", NULL, &t2148_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t2148_m24107_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2148_m24103_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2148_TI;
extern Il2CppType t129_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24103_MI = 
{
	"get_Item", NULL, &t2148_TI, &t129_0_0_0, RuntimeInvoker_t4_t16, t2148_m24103_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t129_0_0_0;
static ParameterInfo t2148_m24104_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t129_0_0_0},
};
extern TypeInfo t2148_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24104_MI = 
{
	"set_Item", NULL, &t2148_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t2148_m24104_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2148_MIs[] =
{
	&m24105_MI,
	&m24106_MI,
	&m24107_MI,
	&m24103_MI,
	&m24104_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t2142_TI;
extern TypeInfo t2143_TI;
static TypeInfo* t2148_ITIs[] = 
{
	&t591_TI,
	&t2142_TI,
	&t2143_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2148_0_0_0;
extern Il2CppType t2148_1_0_0;
struct t2148;
extern TypeInfo t2148_TI;
extern Il2CppGenericClass t2148_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t2148_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t2148_MIs, t2148_PIs, NULL, NULL, NULL, NULL, NULL, &t2148_TI, t2148_ITIs, NULL, &t1400__CustomAttributeCache, &t2148_TI, &t2148_0_0_0, &t2148_1_0_0, NULL, &t2148_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1909.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1909_TI;
#include "t1909MD.h"

#include "t23.h"
#include "t1910.h"
extern TypeInfo t305_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1909_TI;
extern TypeInfo t128_TI;
extern TypeInfo t1910_TI;
extern TypeInfo t15_TI;
#include "t1910MD.h"
extern MethodInfo m10448_MI;
extern MethodInfo m10450_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Button>
extern Il2CppType t305_0_0_33;
FieldInfo t1909_f1_FieldInfo = 
{
	"m_Arg1", &t305_0_0_33, &t1909_TI, offsetof(t1909, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1909_FIs[] =
{
	&t1909_f1_FieldInfo,
	NULL
};
extern Il2CppType t23_0_0_0;
extern Il2CppType t545_0_0_0;
extern Il2CppType t128_0_0_0;
static ParameterInfo t1909_m10446_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t23_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t128_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10446_MI = 
{
	".ctor", (methodPointerType)&m7873_gshared, &t1909_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4_t4, t1909_m10446_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1909_m10447_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10447_MI = 
{
	"Invoke", (methodPointerType)&m7875_gshared, &t1909_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1909_m10447_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1909_MIs[] =
{
	&m10446_MI,
	&m10447_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10447_MI;
extern MethodInfo m10451_MI;
static MethodInfo* t1909_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10447_MI,
	&m10451_MI,
};
extern Il2CppType t1911_0_0_0;
extern TypeInfo t1911_TI;
extern MethodInfo m18027_MI;
extern TypeInfo t128_TI;
extern MethodInfo m10453_MI;
extern MethodInfo m10448_MI;
extern TypeInfo t128_TI;
extern MethodInfo m10450_MI;
static void* t1909_RGCTXData[8] = 
{
	(void*)&t1911_0_0_0,
	&t1911_TI,
	&m18027_MI,
	&t128_TI,
	&m10453_MI,
	&m10448_MI,
	&t128_TI,
	&m10450_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1909_0_0_0;
extern Il2CppType t1909_1_0_0;
extern TypeInfo t1910_TI;
struct t1909;
extern TypeInfo t1909_TI;
extern Il2CppGenericClass t1909_GC;
TypeInfo t1909_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t1909_MIs, NULL, t1909_FIs, NULL, &t1910_TI, NULL, NULL, &t1909_TI, NULL, t1909_VT, &EmptyCustomAttributesCache, &t1909_TI, &t1909_0_0_0, &t1909_1_0_0, NULL, &t1909_GC, NULL, NULL, NULL, t1909_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1909), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1910_TI;

#include "t1911.h"
extern TypeInfo t1910_TI;
extern TypeInfo t1911_TI;
extern TypeInfo t290_TI;
extern TypeInfo t303_TI;
extern TypeInfo t128_TI;
extern TypeInfo t15_TI;
#include "t1911MD.h"
extern Il2CppType t1911_0_0_0;
extern MethodInfo m2771_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2934_MI;
extern MethodInfo m1571_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m18027_MI;
extern MethodInfo m2772_MI;
extern MethodInfo m10453_MI;
extern MethodInfo m2930_MI;
extern MethodInfo m2928_MI;
struct t544;
struct t544;
 void m16859_gshared (t4 * __this, t4 * p0, MethodInfo* method);
#define m16859(__this, p0, method) (void)m16859_gshared((t4 *)__this, (t4 *)p0, method)
#define m18027(__this, p0, method) (void)m16859_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m18027_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Button>
extern Il2CppType t1911_0_0_1;
FieldInfo t1910_f0_FieldInfo = 
{
	"Delegate", &t1911_0_0_1, &t1910_TI, offsetof(t1910, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1910_FIs[] =
{
	&t1910_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t1910_m10448_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t1910_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10448_MI = 
{
	".ctor", (methodPointerType)&m7876_gshared, &t1910_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t1910_m10448_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1911_0_0_0;
static ParameterInfo t1910_m10449_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t1911_0_0_0},
};
extern TypeInfo t1910_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10449_MI = 
{
	".ctor", (methodPointerType)&m7877_gshared, &t1910_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1910_m10449_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
static ParameterInfo t1910_m10450_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
};
extern TypeInfo t1910_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10450_MI = 
{
	"Invoke", (methodPointerType)&m7878_gshared, &t1910_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1910_m10450_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t1910_m10451_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t1910_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10451_MI = 
{
	"Find", (methodPointerType)&m7879_gshared, &t1910_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1910_m10451_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1910_MIs[] =
{
	&m10448_MI,
	&m10449_MI,
	&m10450_MI,
	&m10451_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10450_MI;
extern MethodInfo m10451_MI;
static MethodInfo* t1910_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10450_MI,
	&m10451_MI,
};
extern Il2CppType t1911_0_0_0;
extern TypeInfo t1911_TI;
extern MethodInfo m18027_MI;
extern TypeInfo t128_TI;
extern MethodInfo m10453_MI;
static void* t1910_RGCTXData[5] = 
{
	(void*)&t1911_0_0_0,
	&t1911_TI,
	&m18027_MI,
	&t128_TI,
	&m10453_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1910_0_0_0;
extern Il2CppType t1910_1_0_0;
extern TypeInfo t544_TI;
struct t1910;
extern TypeInfo t1910_TI;
extern Il2CppGenericClass t1910_GC;
TypeInfo t1910_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t1910_MIs, NULL, t1910_FIs, NULL, &t544_TI, NULL, NULL, &t1910_TI, NULL, t1910_VT, &EmptyCustomAttributesCache, &t1910_TI, &t1910_0_0_0, &t1910_1_0_0, NULL, &t1910_GC, NULL, NULL, NULL, t1910_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1910), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1911_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.Button>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1911_m10452_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1911_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10452_MI = 
{
	".ctor", (methodPointerType)&m7880_gshared, &t1911_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1911_m10452_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t128_0_0_0;
static ParameterInfo t1911_m10453_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t128_0_0_0},
};
extern TypeInfo t1911_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10453_MI = 
{
	"Invoke", (methodPointerType)&m7881_gshared, &t1911_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1911_m10453_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t128_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1911_m10454_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t128_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1911_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10454_MI = 
{
	"BeginInvoke", (methodPointerType)&m7882_gshared, &t1911_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t1911_m10454_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1911_m10455_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1911_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10455_MI = 
{
	"EndInvoke", (methodPointerType)&m7883_gshared, &t1911_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1911_m10455_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1911_MIs[] =
{
	&m10452_MI,
	&m10453_MI,
	&m10454_MI,
	&m10455_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m10453_MI;
extern MethodInfo m10454_MI;
extern MethodInfo m10455_MI;
static MethodInfo* t1911_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m10453_MI,
	&m10454_MI,
	&m10455_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1911_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1911_0_0_0;
extern Il2CppType t1911_1_0_0;
extern TypeInfo t189_TI;
struct t1911;
extern TypeInfo t1911_TI;
extern Il2CppGenericClass t1911_GC;
TypeInfo t1911_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t1911_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t1911_TI, NULL, t1911_VT, &EmptyCustomAttributesCache, &t1911_TI, &t1911_0_0_0, &t1911_1_0_0, t1911_IOs, &t1911_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1911), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3365_TI;

#include "t130.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.CanvasUpdate>
extern MethodInfo m24108_MI;
static PropertyInfo t3365____Current_PropertyInfo = 
{
	&t3365_TI, "Current", &m24108_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3365_PIs[] =
{
	&t3365____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3365_TI;
extern Il2CppType t130_0_0_0;
extern void* RuntimeInvoker_t130 (MethodInfo* method, void* obj, void** args);
MethodInfo m24108_MI = 
{
	"get_Current", NULL, &t3365_TI, &t130_0_0_0, RuntimeInvoker_t130, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3365_MIs[] =
{
	&m24108_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3365_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3365_0_0_0;
extern Il2CppType t3365_1_0_0;
struct t3365;
extern TypeInfo t3365_TI;
extern Il2CppGenericClass t3365_GC;
TypeInfo t3365_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3365_MIs, t3365_PIs, NULL, NULL, NULL, NULL, NULL, &t3365_TI, t3365_ITIs, NULL, &EmptyCustomAttributesCache, &t3365_TI, &t3365_0_0_0, &t3365_1_0_0, NULL, &t3365_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1912.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1912_TI;
#include "t1912MD.h"

extern TypeInfo t1912_TI;
extern TypeInfo t130_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10460_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m18029_MI;
struct t14;
 int32_t m18029 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18029_MI;


extern MethodInfo m10456_MI;
 void m10456 (t1912 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10457_MI;
 t4 * m10457 (t1912 * __this, MethodInfo* method){
	{
		int32_t L_0 = m10460(__this, &m10460_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t130_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10458_MI;
 void m10458 (t1912 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10459_MI;
 bool m10459 (t1912 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t14 * L_1 = (__this->f0);
		int32_t L_2 = m3690(L_1, &m3690_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m10460_MI;
 int32_t m10460 (t1912 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral370, &m6887_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1269 * L_3 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_3, (t8*) &_stringLiteral371, &m6887_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t14 * L_4 = (__this->f0);
		t14 * L_5 = (__this->f0);
		int32_t L_6 = m3690(L_5, &m3690_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m18029(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18029_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.CanvasUpdate>
extern Il2CppType t14_0_0_1;
FieldInfo t1912_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1912_TI, offsetof(t1912, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1912_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1912_TI, offsetof(t1912, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1912_FIs[] =
{
	&t1912_f0_FieldInfo,
	&t1912_f1_FieldInfo,
	NULL
};
extern MethodInfo m10457_MI;
static PropertyInfo t1912____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1912_TI, "System.Collections.IEnumerator.Current", &m10457_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10460_MI;
static PropertyInfo t1912____Current_PropertyInfo = 
{
	&t1912_TI, "Current", &m10460_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1912_PIs[] =
{
	&t1912____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1912____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1912_m10456_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1912_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10456_MI = 
{
	".ctor", (methodPointerType)&m10456, &t1912_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1912_m10456_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1912_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10457_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10457, &t1912_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1912_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10458_MI = 
{
	"Dispose", (methodPointerType)&m10458, &t1912_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1912_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10459_MI = 
{
	"MoveNext", (methodPointerType)&m10459, &t1912_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1912_TI;
extern Il2CppType t130_0_0_0;
extern void* RuntimeInvoker_t130 (MethodInfo* method, void* obj, void** args);
MethodInfo m10460_MI = 
{
	"get_Current", (methodPointerType)&m10460, &t1912_TI, &t130_0_0_0, RuntimeInvoker_t130, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1912_MIs[] =
{
	&m10456_MI,
	&m10457_MI,
	&m10458_MI,
	&m10459_MI,
	&m10460_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10457_MI;
extern MethodInfo m10459_MI;
extern MethodInfo m10458_MI;
extern MethodInfo m10460_MI;
static MethodInfo* t1912_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10457_MI,
	&m10459_MI,
	&m10458_MI,
	&m10460_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3365_TI;
static TypeInfo* t1912_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3365_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3365_TI;
static Il2CppInterfaceOffsetPair t1912_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3365_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1912_0_0_0;
extern Il2CppType t1912_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1912_TI;
extern Il2CppGenericClass t1912_GC;
extern TypeInfo t14_TI;
TypeInfo t1912_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1912_MIs, t1912_PIs, t1912_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1912_TI, t1912_ITIs, t1912_VT, &EmptyCustomAttributesCache, &t1912_TI, &t1912_0_0_0, &t1912_1_0_0, t1912_IOs, &t1912_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1912)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3980_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.CanvasUpdate>
extern MethodInfo m24109_MI;
static PropertyInfo t3980____Count_PropertyInfo = 
{
	&t3980_TI, "Count", &m24109_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24110_MI;
static PropertyInfo t3980____IsReadOnly_PropertyInfo = 
{
	&t3980_TI, "IsReadOnly", &m24110_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3980_PIs[] =
{
	&t3980____Count_PropertyInfo,
	&t3980____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3980_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24109_MI = 
{
	"get_Count", NULL, &t3980_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3980_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24110_MI = 
{
	"get_IsReadOnly", NULL, &t3980_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t130_0_0_0;
static ParameterInfo t3980_m24111_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t130_0_0_0},
};
extern TypeInfo t3980_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24111_MI = 
{
	"Add", NULL, &t3980_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3980_m24111_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3980_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m24112_MI = 
{
	"Clear", NULL, &t3980_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t130_0_0_0;
static ParameterInfo t3980_m24113_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t130_0_0_0},
};
extern TypeInfo t3980_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24113_MI = 
{
	"Contains", NULL, &t3980_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t3980_m24113_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3206_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t3980_m24114_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3206_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3980_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24114_MI = 
{
	"CopyTo", NULL, &t3980_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t3980_m24114_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t130_0_0_0;
static ParameterInfo t3980_m24115_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t130_0_0_0},
};
extern TypeInfo t3980_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24115_MI = 
{
	"Remove", NULL, &t3980_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t3980_m24115_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3980_MIs[] =
{
	&m24109_MI,
	&m24110_MI,
	&m24111_MI,
	&m24112_MI,
	&m24113_MI,
	&m24114_MI,
	&m24115_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3982_TI;
static TypeInfo* t3980_ITIs[] = 
{
	&t591_TI,
	&t3982_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3980_0_0_0;
extern Il2CppType t3980_1_0_0;
struct t3980;
extern TypeInfo t3980_TI;
extern Il2CppGenericClass t3980_GC;
TypeInfo t3980_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3980_MIs, t3980_PIs, NULL, NULL, NULL, NULL, NULL, &t3980_TI, t3980_ITIs, NULL, &EmptyCustomAttributesCache, &t3980_TI, &t3980_0_0_0, &t3980_1_0_0, NULL, &t3980_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3982_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.CanvasUpdate>
extern TypeInfo t3982_TI;
extern Il2CppType t3365_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24116_MI = 
{
	"GetEnumerator", NULL, &t3982_TI, &t3365_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3982_MIs[] =
{
	&m24116_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t3982_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3982_0_0_0;
extern Il2CppType t3982_1_0_0;
struct t3982;
extern TypeInfo t3982_TI;
extern Il2CppGenericClass t3982_GC;
TypeInfo t3982_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3982_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3982_TI, t3982_ITIs, NULL, &EmptyCustomAttributesCache, &t3982_TI, &t3982_0_0_0, &t3982_1_0_0, NULL, &t3982_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3981_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.CanvasUpdate>
extern MethodInfo m24117_MI;
extern MethodInfo m24118_MI;
static PropertyInfo t3981____Item_PropertyInfo = 
{
	&t3981_TI, "Item", &m24117_MI, &m24118_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3981_PIs[] =
{
	&t3981____Item_PropertyInfo,
	NULL
};
extern Il2CppType t130_0_0_0;
static ParameterInfo t3981_m24119_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t130_0_0_0},
};
extern TypeInfo t3981_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24119_MI = 
{
	"IndexOf", NULL, &t3981_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t3981_m24119_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t130_0_0_0;
static ParameterInfo t3981_m24120_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t130_0_0_0},
};
extern TypeInfo t3981_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24120_MI = 
{
	"Insert", NULL, &t3981_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t3981_m24120_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3981_m24121_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3981_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24121_MI = 
{
	"RemoveAt", NULL, &t3981_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3981_m24121_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3981_m24117_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3981_TI;
extern Il2CppType t130_0_0_0;
extern void* RuntimeInvoker_t130_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24117_MI = 
{
	"get_Item", NULL, &t3981_TI, &t130_0_0_0, RuntimeInvoker_t130_t16, t3981_m24117_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t130_0_0_0;
static ParameterInfo t3981_m24118_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t130_0_0_0},
};
extern TypeInfo t3981_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24118_MI = 
{
	"set_Item", NULL, &t3981_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t3981_m24118_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3981_MIs[] =
{
	&m24119_MI,
	&m24120_MI,
	&m24121_MI,
	&m24117_MI,
	&m24118_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3980_TI;
extern TypeInfo t3982_TI;
static TypeInfo* t3981_ITIs[] = 
{
	&t591_TI,
	&t3980_TI,
	&t3982_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3981_0_0_0;
extern Il2CppType t3981_1_0_0;
struct t3981;
extern TypeInfo t3981_TI;
extern Il2CppGenericClass t3981_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3981_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3981_MIs, t3981_PIs, NULL, NULL, NULL, NULL, NULL, &t3981_TI, t3981_ITIs, NULL, &t1400__CustomAttributeCache, &t3981_TI, &t3981_0_0_0, &t3981_1_0_0, NULL, &t3981_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t132.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t132_TI;
#include "t132MD.h"

#include "t1913.h"
#include "t355.h"
#include "t1283.h"
#include "t335.h"
#include "t134.h"
#include "t133.h"
extern TypeInfo t132_TI;
extern TypeInfo t1913_TI;
extern TypeInfo t16_TI;
extern TypeInfo t135_TI;
extern TypeInfo t355_TI;
extern TypeInfo t17_TI;
extern TypeInfo t15_TI;
extern TypeInfo t1914_TI;
extern TypeInfo t1283_TI;
extern TypeInfo t1915_TI;
extern TypeInfo t335_TI;
extern TypeInfo t134_TI;
#include "t1913MD.h"
#include "t355MD.h"
#include "t4MD.h"
#include "t1283MD.h"
#include "t335MD.h"
#include "t134MD.h"
extern MethodInfo m10635_MI;
extern MethodInfo m10636_MI;
extern MethodInfo m10761_MI;
extern MethodInfo m10637_MI;
extern MethodInfo m10755_MI;
extern MethodInfo m10589_MI;
extern MethodInfo m10730_MI;
extern MethodInfo m15_MI;
extern MethodInfo m10466_MI;
extern MethodInfo m10757_MI;
extern MethodInfo m10607_MI;
extern MethodInfo m10762_MI;
extern MethodInfo m10480_MI;
extern MethodInfo m6986_MI;
extern MethodInfo m10613_MI;
extern MethodInfo m10756_MI;
extern MethodInfo m10615_MI;
extern MethodInfo m6989_MI;
extern MethodInfo m10627_MI;
extern MethodInfo m10747_MI;
extern MethodInfo m10718_MI;
extern MethodInfo m1509_MI;
extern MethodInfo m10630_MI;


// Metadata Definition UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t1913_0_0_33;
FieldInfo t132_f0_FieldInfo = 
{
	"m_List", &t1913_0_0_33, &t132_TI, offsetof(t132, f0), &EmptyCustomAttributesCache};
extern Il2CppType t355_0_0_1;
FieldInfo t132_f1_FieldInfo = 
{
	"m_Dictionary", &t355_0_0_1, &t132_TI, offsetof(t132, f1), &EmptyCustomAttributesCache};
static FieldInfo* t132_FIs[] =
{
	&t132_f0_FieldInfo,
	&t132_f1_FieldInfo,
	NULL
};
extern MethodInfo m1505_MI;
static PropertyInfo t132____Count_PropertyInfo = 
{
	&t132_TI, "Count", &m1505_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10474_MI;
static PropertyInfo t132____IsReadOnly_PropertyInfo = 
{
	&t132_TI, "IsReadOnly", &m10474_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1503_MI;
extern MethodInfo m10483_MI;
static PropertyInfo t132____Item_PropertyInfo = 
{
	&t132_TI, "Item", &m1503_MI, &m10483_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t132_PIs[] =
{
	&t132____Count_PropertyInfo,
	&t132____IsReadOnly_PropertyInfo,
	&t132____Item_PropertyInfo,
	NULL
};
extern TypeInfo t132_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m1496_MI = 
{
	".ctor", (methodPointerType)&m10461_gshared, &t132_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t132_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10462_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10463_gshared, &t132_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t132_m1507_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t132_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1507_MI = 
{
	"Add", (methodPointerType)&m10464_gshared, &t132_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t132_m1507_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t132_m1509_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t132_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1509_MI = 
{
	"Remove", (methodPointerType)&m10465_gshared, &t132_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t132_m1509_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t132_TI;
extern Il2CppType t1914_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10466_MI = 
{
	"GetEnumerator", (methodPointerType)&m10467_gshared, &t132_TI, &t1914_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t132_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m1506_MI = 
{
	"Clear", (methodPointerType)&m10468_gshared, &t132_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t132_m10469_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t132_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10469_MI = 
{
	"Contains", (methodPointerType)&m10470_gshared, &t132_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t132_m10469_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1915_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t132_m10471_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1915_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t132_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10471_MI = 
{
	"CopyTo", (methodPointerType)&m10472_gshared, &t132_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t132_m10471_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t132_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m1505_MI = 
{
	"get_Count", (methodPointerType)&m10473_gshared, &t132_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t132_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10474_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m10475_gshared, &t132_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t132_m10476_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t132_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10476_MI = 
{
	"IndexOf", (methodPointerType)&m10477_gshared, &t132_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t132_m10476_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t132_m10478_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t132_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10478_MI = 
{
	"Insert", (methodPointerType)&m10479_gshared, &t132_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t132_m10478_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t132_m10480_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t132_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10480_MI = 
{
	"RemoveAt", (methodPointerType)&m10481_gshared, &t132_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t132_m10480_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t132_m1503_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t132_TI;
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m1503_MI = 
{
	"get_Item", (methodPointerType)&m10482_gshared, &t132_TI, &t135_0_0_0, RuntimeInvoker_t4_t16, t132_m1503_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t132_m10483_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t132_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10483_MI = 
{
	"set_Item", (methodPointerType)&m10484_gshared, &t132_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t132_m10483_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t132_m1501_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t132_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1501_MI = 
{
	"RemoveAll", (methodPointerType)&m10485_gshared, &t132_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t132_m1501_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t132_m1502_ParameterInfos[] = 
{
	{"sortLayoutFunction", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t132_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1502_MI = 
{
	"Sort", (methodPointerType)&m10486_gshared, &t132_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t132_m1502_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t132_MIs[] =
{
	&m1496_MI,
	&m10462_MI,
	&m1507_MI,
	&m1509_MI,
	&m10466_MI,
	&m1506_MI,
	&m10469_MI,
	&m10471_MI,
	&m1505_MI,
	&m10474_MI,
	&m10476_MI,
	&m10478_MI,
	&m10480_MI,
	&m1503_MI,
	&m10483_MI,
	&m1501_MI,
	&m1502_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10476_MI;
extern MethodInfo m10478_MI;
extern MethodInfo m10480_MI;
extern MethodInfo m1503_MI;
extern MethodInfo m10483_MI;
extern MethodInfo m1505_MI;
extern MethodInfo m10474_MI;
extern MethodInfo m1507_MI;
extern MethodInfo m1506_MI;
extern MethodInfo m10469_MI;
extern MethodInfo m10471_MI;
extern MethodInfo m1509_MI;
extern MethodInfo m10466_MI;
extern MethodInfo m10462_MI;
static MethodInfo* t132_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10476_MI,
	&m10478_MI,
	&m10480_MI,
	&m1503_MI,
	&m10483_MI,
	&m1505_MI,
	&m10474_MI,
	&m1507_MI,
	&m1506_MI,
	&m10469_MI,
	&m10471_MI,
	&m1509_MI,
	&m10466_MI,
	&m10462_MI,
};
extern TypeInfo t1936_TI;
extern TypeInfo t1932_TI;
extern TypeInfo t1933_TI;
extern TypeInfo t591_TI;
static TypeInfo* t132_ITIs[] = 
{
	&t1936_TI,
	&t1932_TI,
	&t1933_TI,
	&t591_TI,
};
extern TypeInfo t1936_TI;
extern TypeInfo t1932_TI;
extern TypeInfo t1933_TI;
extern TypeInfo t591_TI;
static Il2CppInterfaceOffsetPair t132_IOs[] = 
{
	{ &t1936_TI, 4},
	{ &t1932_TI, 9},
	{ &t1933_TI, 16},
	{ &t591_TI, 17},
};
extern TypeInfo t1913_TI;
extern MethodInfo m10589_MI;
extern TypeInfo t355_TI;
extern MethodInfo m10730_MI;
extern MethodInfo m10466_MI;
extern MethodInfo m10757_MI;
extern MethodInfo m10607_MI;
extern MethodInfo m10635_MI;
extern MethodInfo m10755_MI;
extern MethodInfo m10762_MI;
extern MethodInfo m10480_MI;
extern MethodInfo m10613_MI;
extern MethodInfo m10756_MI;
extern MethodInfo m10615_MI;
extern MethodInfo m10636_MI;
extern MethodInfo m10761_MI;
extern MethodInfo m10627_MI;
extern MethodInfo m10637_MI;
extern MethodInfo m10747_MI;
extern MethodInfo m10718_MI;
extern MethodInfo m1509_MI;
extern MethodInfo m10630_MI;
static void* t132_RGCTXData[22] = 
{
	&t1913_TI,
	&m10589_MI,
	&t355_TI,
	&m10730_MI,
	&m10466_MI,
	&m10757_MI,
	&m10607_MI,
	&m10635_MI,
	&m10755_MI,
	&m10762_MI,
	&m10480_MI,
	&m10613_MI,
	&m10756_MI,
	&m10615_MI,
	&m10636_MI,
	&m10761_MI,
	&m10627_MI,
	&m10637_MI,
	&m10747_MI,
	&m10718_MI,
	&m1509_MI,
	&m10630_MI,
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t132_0_0_0;
extern Il2CppType t132_1_0_0;
extern TypeInfo t4_TI;
struct t132;
extern TypeInfo t132_TI;
extern Il2CppGenericClass t132_GC;
extern CustomAttributesCache t269__CustomAttributeCache;
TypeInfo t132_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "IndexedSet`1", "UnityEngine.UI.Collections", t132_MIs, t132_PIs, t132_FIs, NULL, &t4_TI, NULL, NULL, &t132_TI, t132_ITIs, t132_VT, &t269__CustomAttributeCache, &t132_TI, &t132_0_0_0, &t132_1_0_0, t132_IOs, &t132_GC, NULL, NULL, NULL, t132_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t132), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 17, 3, 2, 0, 0, 18, 4, 4};
#include "t1916.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1916_TI;
#include "t1916MD.h"

#include "t292.h"
#include "t1917.h"
#include "t1606.h"
#include "t1607.h"
extern TypeInfo t1916_TI;
extern TypeInfo t292_TI;
extern TypeInfo t16_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1917_TI;
extern TypeInfo t17_TI;
extern TypeInfo t15_TI;
extern TypeInfo t336_TI;
extern TypeInfo t1283_TI;
extern TypeInfo t305_TI;
extern TypeInfo t335_TI;
extern TypeInfo t1606_TI;
#include "t292MD.h"
#include "t1917MD.h"
#include "t1606MD.h"
extern MethodInfo m7982_MI;
extern MethodInfo m7984_MI;
extern MethodInfo m10518_MI;
extern MethodInfo m7986_MI;
extern MethodInfo m10512_MI;
extern MethodInfo m7892_MI;
extern MethodInfo m10487_MI;
extern MethodInfo m15_MI;
extern MethodInfo m10467_MI;
extern MethodInfo m10514_MI;
extern MethodInfo m7927_MI;
extern MethodInfo m10519_MI;
extern MethodInfo m10481_MI;
extern MethodInfo m6986_MI;
extern MethodInfo m7939_MI;
extern MethodInfo m10513_MI;
extern MethodInfo m7943_MI;
extern MethodInfo m6989_MI;
extern MethodInfo m7966_MI;
extern MethodInfo m10504_MI;
extern MethodInfo m8099_MI;
extern MethodInfo m10465_MI;
extern MethodInfo m7972_MI;


extern MethodInfo m10461_MI;
 void m10461_gshared (t1916 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t292_TI));
		t292 * L_0 = (t292 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0));
		(( void (*) (t292 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		__this->f0 = L_0;
		t1917 * L_1 = (t1917 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2));
		(( void (*) (t1917 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->method)(L_1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		__this->f1 = L_1;
		m15(__this, &m15_MI);
		return;
	}
}
extern MethodInfo m10463_MI;
 t4 * m10463_gshared (t1916 * __this, MethodInfo* method)
{
	{
		t4* L_0 = (t4*)VirtFuncInvoker0< t4* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4), __this);
		return L_0;
	}
}
extern MethodInfo m10464_MI;
 void m10464_gshared (t1916 * __this, t4 * p0, MethodInfo* method)
{
	{
		t1917 * L_0 = (__this->f1);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5), L_0, p0);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		t292 * L_2 = (__this->f0);
		VirtActionInvoker1< t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6), L_2, p0);
		t1917 * L_3 = (__this->f1);
		t292 * L_4 = (__this->f0);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7), L_4);
		VirtActionInvoker2< t4 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8), L_3, p0, ((int32_t)(L_5-1)));
		return;
	}
}
extern MethodInfo m10465_MI;
 bool m10465_gshared (t1916 * __this, t4 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		t1917 * L_0 = (__this->f1);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t4 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9), L_0, p0, (&V_0));
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10), __this, V_0);
		return 1;
	}
}
extern MethodInfo m10467_MI;
 t4* m10467_gshared (t1916 * __this, MethodInfo* method)
{
	{
		t1283 * L_0 = (t1283 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1283_TI));
		m6986(L_0, &m6986_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10468_MI;
 void m10468_gshared (t1916 * __this, MethodInfo* method)
{
	{
		t292 * L_0 = (__this->f0);
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11), L_0);
		t1917 * L_1 = (__this->f1);
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 12), L_1);
		return;
	}
}
extern MethodInfo m10470_MI;
 bool m10470_gshared (t1916 * __this, t4 * p0, MethodInfo* method)
{
	{
		t1917 * L_0 = (__this->f1);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5), L_0, p0);
		return L_1;
	}
}
extern MethodInfo m10472_MI;
 void m10472_gshared (t1916 * __this, t305* p0, int32_t p1, MethodInfo* method)
{
	{
		t292 * L_0 = (__this->f0);
		VirtActionInvoker2< t305*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 13), L_0, p0, p1);
		return;
	}
}
extern MethodInfo m10473_MI;
 int32_t m10473_gshared (t1916 * __this, MethodInfo* method)
{
	{
		t292 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7), L_0);
		return L_1;
	}
}
extern MethodInfo m10475_MI;
 bool m10475_gshared (t1916 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m10477_MI;
 int32_t m10477_gshared (t1916 * __this, t4 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		t1917 * L_0 = (__this->f1);
		VirtFuncInvoker2< bool, t4 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9), L_0, p0, (&V_0));
		return V_0;
	}
}
extern MethodInfo m10479_MI;
 void m10479_gshared (t1916 * __this, int32_t p0, t4 * p1, MethodInfo* method)
{
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m6989(L_0, (t8*) &_stringLiteral65, &m6989_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10481_MI;
 void m10481_gshared (t1916 * __this, int32_t p0, MethodInfo* method)
{
	t4 * V_0 = {0};
	int32_t V_1 = 0;
	t4 * V_2 = {0};
	{
		t292 * L_0 = (__this->f0);
		t4 * L_1 = (t4 *)VirtFuncInvoker1< t4 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 14), L_0, p0);
		V_0 = L_1;
		t1917 * L_2 = (__this->f1);
		VirtFuncInvoker1< bool, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 15), L_2, V_0);
		t292 * L_3 = (__this->f0);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7), L_3);
		if ((((uint32_t)p0) != ((uint32_t)((int32_t)(L_4-1)))))
		{
			goto IL_003e;
		}
	}
	{
		t292 * L_5 = (__this->f0);
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16), L_5, p0);
		goto IL_007f;
	}

IL_003e:
	{
		t292 * L_6 = (__this->f0);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7), L_6);
		V_1 = ((int32_t)(L_7-1));
		t292 * L_8 = (__this->f0);
		t4 * L_9 = (t4 *)VirtFuncInvoker1< t4 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 14), L_8, V_1);
		V_2 = L_9;
		t292 * L_10 = (__this->f0);
		VirtActionInvoker2< int32_t, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 17), L_10, p0, V_2);
		t1917 * L_11 = (__this->f1);
		VirtActionInvoker2< t4 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 18), L_11, V_2, p0);
		t292 * L_12 = (__this->f0);
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16), L_12, V_1);
	}

IL_007f:
	{
		return;
	}
}
extern MethodInfo m10482_MI;
 t4 * m10482_gshared (t1916 * __this, int32_t p0, MethodInfo* method)
{
	{
		t292 * L_0 = (__this->f0);
		t4 * L_1 = (t4 *)VirtFuncInvoker1< t4 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 14), L_0, p0);
		return L_1;
	}
}
extern MethodInfo m10484_MI;
 void m10484_gshared (t1916 * __this, int32_t p0, t4 * p1, MethodInfo* method)
{
	t4 * V_0 = {0};
	{
		t292 * L_0 = (__this->f0);
		t4 * L_1 = (t4 *)VirtFuncInvoker1< t4 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 14), L_0, p0);
		V_0 = L_1;
		t1917 * L_2 = (__this->f1);
		VirtFuncInvoker1< bool, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 15), L_2, V_0);
		t292 * L_3 = (__this->f0);
		VirtActionInvoker2< int32_t, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 17), L_3, p0, p1);
		t1917 * L_4 = (__this->f1);
		VirtActionInvoker2< t4 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8), L_4, V_0, p0);
		return;
	}
}
extern MethodInfo m10485_MI;
 void m10485_gshared (t1916 * __this, t1606 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t4 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0031;
	}

IL_0007:
	{
		t292 * L_0 = (__this->f0);
		t4 * L_1 = (t4 *)VirtFuncInvoker1< t4 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 14), L_0, V_0);
		V_1 = L_1;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19), p0, V_1);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		VirtFuncInvoker1< bool, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 20), __this, V_1);
		goto IL_0031;
	}

IL_002d:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0031:
	{
		t292 * L_3 = (__this->f0);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7), L_3);
		if ((((int32_t)V_0) < ((int32_t)L_4)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
extern MethodInfo m10486_MI;
 void m10486_gshared (t1916 * __this, t1607 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t4 * V_1 = {0};
	{
		t292 * L_0 = (__this->f0);
		(( void (*) (t292 * __this, t1607 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 21)->method)(L_0, p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 21));
		V_0 = 0;
		goto IL_0031;
	}

IL_0013:
	{
		t292 * L_1 = (__this->f0);
		t4 * L_2 = (t4 *)VirtFuncInvoker1< t4 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 14), L_1, V_0);
		V_1 = L_2;
		t1917 * L_3 = (__this->f1);
		VirtActionInvoker2< t4 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 18), L_3, V_1, V_0);
		V_0 = ((int32_t)(V_0+1));
	}

IL_0031:
	{
		t292 * L_4 = (__this->f0);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7), L_4);
		if ((((int32_t)V_0) < ((int32_t)L_5)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// Metadata Definition UnityEngine.UI.Collections.IndexedSet`1<System.Object>
extern Il2CppType t292_0_0_33;
FieldInfo t1916_f0_FieldInfo = 
{
	"m_List", &t292_0_0_33, &t1916_TI, offsetof(t1916, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1917_0_0_1;
FieldInfo t1916_f1_FieldInfo = 
{
	"m_Dictionary", &t1917_0_0_1, &t1916_TI, offsetof(t1916, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1916_FIs[] =
{
	&t1916_f0_FieldInfo,
	&t1916_f1_FieldInfo,
	NULL
};
extern MethodInfo m10473_MI;
static PropertyInfo t1916____Count_PropertyInfo = 
{
	&t1916_TI, "Count", &m10473_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10475_MI;
static PropertyInfo t1916____IsReadOnly_PropertyInfo = 
{
	&t1916_TI, "IsReadOnly", &m10475_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10482_MI;
extern MethodInfo m10484_MI;
static PropertyInfo t1916____Item_PropertyInfo = 
{
	&t1916_TI, "Item", &m10482_MI, &m10484_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1916_PIs[] =
{
	&t1916____Count_PropertyInfo,
	&t1916____IsReadOnly_PropertyInfo,
	&t1916____Item_PropertyInfo,
	NULL
};
extern TypeInfo t1916_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10461_MI = 
{
	".ctor", (methodPointerType)&m10461_gshared, &t1916_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1916_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10463_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10463_gshared, &t1916_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1916_m10464_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10464_MI = 
{
	"Add", (methodPointerType)&m10464_gshared, &t1916_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1916_m10464_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1916_m10465_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10465_MI = 
{
	"Remove", (methodPointerType)&m10465_gshared, &t1916_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1916_m10465_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1916_TI;
extern Il2CppType t336_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10467_MI = 
{
	"GetEnumerator", (methodPointerType)&m10467_gshared, &t1916_TI, &t336_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1916_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10468_MI = 
{
	"Clear", (methodPointerType)&m10468_gshared, &t1916_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1916_m10470_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10470_MI = 
{
	"Contains", (methodPointerType)&m10470_gshared, &t1916_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1916_m10470_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1916_m10472_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10472_MI = 
{
	"CopyTo", (methodPointerType)&m10472_gshared, &t1916_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1916_m10472_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1916_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10473_MI = 
{
	"get_Count", (methodPointerType)&m10473_gshared, &t1916_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1916_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10475_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m10475_gshared, &t1916_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1916_m10477_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10477_MI = 
{
	"IndexOf", (methodPointerType)&m10477_gshared, &t1916_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1916_m10477_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1916_m10479_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10479_MI = 
{
	"Insert", (methodPointerType)&m10479_gshared, &t1916_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1916_m10479_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1916_m10481_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10481_MI = 
{
	"RemoveAt", (methodPointerType)&m10481_gshared, &t1916_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1916_m10481_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1916_m10482_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10482_MI = 
{
	"get_Item", (methodPointerType)&m10482_gshared, &t1916_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t1916_m10482_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1916_m10484_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10484_MI = 
{
	"set_Item", (methodPointerType)&m10484_gshared, &t1916_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1916_m10484_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1606_0_0_0;
static ParameterInfo t1916_m10485_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1606_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10485_MI = 
{
	"RemoveAll", (methodPointerType)&m10485_gshared, &t1916_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1916_m10485_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1607_0_0_0;
static ParameterInfo t1916_m10486_ParameterInfos[] = 
{
	{"sortLayoutFunction", 0, 134217728, &EmptyCustomAttributesCache, &t1607_0_0_0},
};
extern TypeInfo t1916_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10486_MI = 
{
	"Sort", (methodPointerType)&m10486_gshared, &t1916_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1916_m10486_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1916_MIs[] =
{
	&m10461_MI,
	&m10463_MI,
	&m10464_MI,
	&m10465_MI,
	&m10467_MI,
	&m10468_MI,
	&m10470_MI,
	&m10472_MI,
	&m10473_MI,
	&m10475_MI,
	&m10477_MI,
	&m10479_MI,
	&m10481_MI,
	&m10482_MI,
	&m10484_MI,
	&m10485_MI,
	&m10486_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10477_MI;
extern MethodInfo m10479_MI;
extern MethodInfo m10481_MI;
extern MethodInfo m10482_MI;
extern MethodInfo m10484_MI;
extern MethodInfo m10473_MI;
extern MethodInfo m10475_MI;
extern MethodInfo m10464_MI;
extern MethodInfo m10468_MI;
extern MethodInfo m10470_MI;
extern MethodInfo m10472_MI;
extern MethodInfo m10465_MI;
extern MethodInfo m10467_MI;
extern MethodInfo m10463_MI;
static MethodInfo* t1916_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10477_MI,
	&m10479_MI,
	&m10481_MI,
	&m10482_MI,
	&m10484_MI,
	&m10473_MI,
	&m10475_MI,
	&m10464_MI,
	&m10468_MI,
	&m10470_MI,
	&m10472_MI,
	&m10465_MI,
	&m10467_MI,
	&m10463_MI,
};
extern TypeInfo t1612_TI;
extern TypeInfo t1608_TI;
extern TypeInfo t1609_TI;
extern TypeInfo t591_TI;
static TypeInfo* t1916_ITIs[] = 
{
	&t1612_TI,
	&t1608_TI,
	&t1609_TI,
	&t591_TI,
};
extern TypeInfo t1612_TI;
extern TypeInfo t1608_TI;
extern TypeInfo t1609_TI;
extern TypeInfo t591_TI;
static Il2CppInterfaceOffsetPair t1916_IOs[] = 
{
	{ &t1612_TI, 4},
	{ &t1608_TI, 9},
	{ &t1609_TI, 16},
	{ &t591_TI, 17},
};
extern TypeInfo t292_TI;
extern MethodInfo m7892_MI;
extern TypeInfo t1917_TI;
extern MethodInfo m10487_MI;
extern MethodInfo m10467_MI;
extern MethodInfo m10514_MI;
extern MethodInfo m7927_MI;
extern MethodInfo m7982_MI;
extern MethodInfo m10512_MI;
extern MethodInfo m10519_MI;
extern MethodInfo m10481_MI;
extern MethodInfo m7939_MI;
extern MethodInfo m10513_MI;
extern MethodInfo m7943_MI;
extern MethodInfo m7984_MI;
extern MethodInfo m10518_MI;
extern MethodInfo m7966_MI;
extern MethodInfo m7986_MI;
extern MethodInfo m10504_MI;
extern MethodInfo m8099_MI;
extern MethodInfo m10465_MI;
extern MethodInfo m7972_MI;
static void* t1916_RGCTXData[22] = 
{
	&t292_TI,
	&m7892_MI,
	&t1917_TI,
	&m10487_MI,
	&m10467_MI,
	&m10514_MI,
	&m7927_MI,
	&m7982_MI,
	&m10512_MI,
	&m10519_MI,
	&m10481_MI,
	&m7939_MI,
	&m10513_MI,
	&m7943_MI,
	&m7984_MI,
	&m10518_MI,
	&m7966_MI,
	&m7986_MI,
	&m10504_MI,
	&m8099_MI,
	&m10465_MI,
	&m7972_MI,
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t1916_0_0_0;
extern Il2CppType t1916_1_0_0;
extern TypeInfo t4_TI;
struct t1916;
extern TypeInfo t1916_TI;
extern Il2CppGenericClass t1916_GC;
extern CustomAttributesCache t269__CustomAttributeCache;
TypeInfo t1916_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "IndexedSet`1", "UnityEngine.UI.Collections", t1916_MIs, t1916_PIs, t1916_FIs, NULL, &t4_TI, NULL, NULL, &t1916_TI, t1916_ITIs, t1916_VT, &t269__CustomAttributeCache, &t1916_TI, &t1916_0_0_0, &t1916_1_0_0, t1916_IOs, &t1916_GC, NULL, NULL, NULL, t1916_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1916), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 17, 3, 2, 0, 0, 18, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1917_TI;

#include "t328.h"
#include "t825.h"
#include "t1920.h"
#include "t705.h"
#include "t706.h"
#include "t1922.h"
#include "t827.h"
#include "t1919.h"
#include "t1929.h"
#include "t1924.h"
#include "t1930.h"
#include "t1485.h"
#include "t1863.h"
extern TypeInfo t1917_TI;
extern TypeInfo t15_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern TypeInfo t328_TI;
extern TypeInfo t1918_TI;
extern TypeInfo t825_TI;
extern TypeInfo t17_TI;
extern TypeInfo t1920_TI;
extern TypeInfo t1921_TI;
extern TypeInfo t1922_TI;
extern TypeInfo t2926_TI;
extern TypeInfo t827_TI;
extern TypeInfo t1919_TI;
extern TypeInfo t1929_TI;
extern TypeInfo t1924_TI;
extern TypeInfo t1930_TI;
extern TypeInfo t1233_TI;
extern TypeInfo t1485_TI;
extern TypeInfo t704_TI;
extern TypeInfo t1450_TI;
extern TypeInfo t305_TI;
extern TypeInfo t303_TI;
extern TypeInfo t854_TI;
extern TypeInfo t1863_TI;
extern TypeInfo t1846_TI;
extern TypeInfo t290_TI;
extern TypeInfo t8_TI;
#include "t328MD.h"
#include "t1920MD.h"
#include "t1922MD.h"
#include "t1919MD.h"
#include "t1929MD.h"
#include "t1924MD.h"
#include "t1930MD.h"
#include "t1233MD.h"
#include "t1485MD.h"
#include "t854MD.h"
#include "t1863MD.h"
#include "t705MD.h"
#include "t8MD.h"
#include "t827MD.h"
extern Il2CppType t1918_0_0_0;
extern Il2CppType t1921_0_0_0;
extern Il2CppType t4_0_0_0;
extern Il2CppType t16_0_0_0;
extern MethodInfo m10521_MI;
extern MethodInfo m10522_MI;
extern MethodInfo m10504_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m22884_MI;
extern MethodInfo m22883_MI;
extern MethodInfo m10511_MI;
extern MethodInfo m10537_MI;
extern MethodInfo m15_MI;
extern MethodInfo m10505_MI;
extern MethodInfo m10527_MI;
extern MethodInfo m10529_MI;
extern MethodInfo m10512_MI;
extern MethodInfo m10523_MI;
extern MethodInfo m10510_MI;
extern MethodInfo m10518_MI;
extern MethodInfo m10507_MI;
extern MethodInfo m10525_MI;
extern MethodInfo m10571_MI;
extern MethodInfo m18053_MI;
extern MethodInfo m10508_MI;
extern MethodInfo m10575_MI;
extern MethodInfo m18055_MI;
extern MethodInfo m10556_MI;
extern MethodInfo m10579_MI;
extern MethodInfo m6454_MI;
extern MethodInfo m8064_MI;
extern MethodInfo m10506_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m10503_MI;
extern MethodInfo m10526_MI;
extern MethodInfo m18056_MI;
extern MethodInfo m4390_MI;
extern MethodInfo m3739_MI;
extern MethodInfo m3735_MI;
extern MethodInfo m10175_MI;
extern MethodInfo m23810_MI;
extern MethodInfo m5720_MI;
extern MethodInfo m5726_MI;
extern MethodInfo m5729_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m5716_MI;
extern MethodInfo m3825_MI;
extern MethodInfo m1741_MI;
extern MethodInfo m6444_MI;
extern MethodInfo m3794_MI;
extern MethodInfo m10519_MI;
extern MethodInfo m23945_MI;
extern MethodInfo m4332_MI;
struct t1917;
 void m18053 (t1917 * __this, t2926* p0, int32_t p1, t1919 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18053_MI;
struct t1917;
#include "t26.h"
 void m18055 (t1917 * __this, t14 * p0, int32_t p1, t1929 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18055_MI;
struct t1917;
 void m18056 (t1917 * __this, t1921* p0, int32_t p1, t1929 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18056_MI;


extern MethodInfo m10487_MI;
 void m10487 (t1917 * __this, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		m10505(__this, ((int32_t)10), (t4*)NULL, &m10505_MI);
		return;
	}
}
extern MethodInfo m10488_MI;
 void m10488 (t1917 * __this, t4* p0, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		m10505(__this, ((int32_t)10), p0, &m10505_MI);
		return;
	}
}
extern MethodInfo m10489_MI;
 void m10489 (t1917 * __this, int32_t p0, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		m10505(__this, p0, (t4*)NULL, &m10505_MI);
		return;
	}
}
extern MethodInfo m10490_MI;
 void m10490 (t1917 * __this, t705 * p0, t706  p1, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		__this->f13 = p0;
		return;
	}
}
extern MethodInfo m10491_MI;
 void m10491 (t1917 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	{
		t4 * L_0 = m10521(__this, p0, &m10521_MI);
		int32_t L_1 = m10522(__this, p1, &m10522_MI);
		VirtActionInvoker2< t4 *, int32_t >::Invoke(&m10504_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10492_MI;
 bool m10492 (t1917 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m10493_MI;
 t4 * m10493 (t1917 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m10494_MI;
 bool m10494 (t1917 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m10495_MI;
 void m10495 (t1917 * __this, t1922  p0, MethodInfo* method){
	{
		t4 * L_0 = m10527((&p0), &m10527_MI);
		int32_t L_1 = m10529((&p0), &m10529_MI);
		VirtActionInvoker2< t4 *, int32_t >::Invoke(&m10512_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10496_MI;
 bool m10496 (t1917 * __this, t1922  p0, MethodInfo* method){
	{
		bool L_0 = m10523(__this, p0, &m10523_MI);
		return L_0;
	}
}
extern MethodInfo m10497_MI;
 void m10497 (t1917 * __this, t1921* p0, int32_t p1, MethodInfo* method){
	{
		m10510(__this, p0, p1, &m10510_MI);
		return;
	}
}
extern MethodInfo m10498_MI;
 bool m10498 (t1917 * __this, t1922  p0, MethodInfo* method){
	{
		bool L_0 = m10523(__this, p0, &m10523_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		t4 * L_1 = m10527((&p0), &m10527_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t4 * >::Invoke(&m10518_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m10499_MI;
 void m10499 (t1917 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	t1921* V_0 = {0};
	t2926* V_1 = {0};
	int32_t G_B5_0 = 0;
	t2926* G_B5_1 = {0};
	t1917 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t2926* G_B4_1 = {0};
	t1917 * G_B4_2 = {0};
	{
		V_0 = ((t1921*)IsInst(p0, InitializedTypeInfo(&t1921_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		m10510(__this, V_0, p1, &m10510_MI);
		return;
	}

IL_0013:
	{
		m10507(__this, p0, p1, &m10507_MI);
		V_1 = ((t2926*)IsInst(p0, InitializedTypeInfo(&t2926_TI)));
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		G_B4_0 = p1;
		G_B4_1 = V_1;
		G_B4_2 = ((t1917 *)(__this));
		if ((((t1917_SFs*)InitializedTypeInfo(&t1917_TI)->static_fields)->f15))
		{
			G_B5_0 = p1;
			G_B5_1 = V_1;
			G_B5_2 = ((t1917 *)(__this));
			goto IL_0040;
		}
	}
	{
		t50 L_0 = { &m10525_MI };
		t1919 * L_1 = (t1919 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1919_TI));
		m10571(L_1, NULL, L_0, &m10571_MI);
		((t1917_SFs*)InitializedTypeInfo(&t1917_TI)->static_fields)->f15 = L_1;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t1917 *)(G_B4_2));
	}

IL_0040:
	{
		m18053(G_B5_2, G_B5_1, G_B5_0, (((t1917_SFs*)InitializedTypeInfo(&t1917_TI)->static_fields)->f15), &m18053_MI);
		return;
	}

IL_004b:
	{
		t50 L_2 = { &m10508_MI };
		t1929 * L_3 = (t1929 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1929_TI));
		m10575(L_3, NULL, L_2, &m10575_MI);
		m18055(__this, p0, p1, L_3, &m18055_MI);
		return;
	}
}
extern MethodInfo m10500_MI;
 t4 * m10500 (t1917 * __this, MethodInfo* method){
	{
		t1924  L_0 = {0};
		m10556(&L_0, __this, &m10556_MI);
		t1924  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1924_TI), &L_1);
		return (t4 *)L_2;
	}
}
extern MethodInfo m10501_MI;
 t4* m10501 (t1917 * __this, MethodInfo* method){
	{
		t1924  L_0 = {0};
		m10556(&L_0, __this, &m10556_MI);
		t1924  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1924_TI), &L_1);
		return (t4*)L_2;
	}
}
extern MethodInfo m10502_MI;
 t4 * m10502 (t1917 * __this, MethodInfo* method){
	{
		t1930 * L_0 = (t1930 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1930_TI));
		m10579(L_0, __this, &m10579_MI);
		return L_0;
	}
}
extern MethodInfo m10503_MI;
 int32_t m10503 (t1917 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m10504_MI;
 void m10504 (t1917 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t4 * L_0 = p0;
		if (((t4 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t328 * L_1 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_1, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t4* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(&m22884_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t704* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_4)->max_length)))));
		t704* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		V_3 = (-1);
		if ((((int32_t)V_2) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t1450* L_6 = (__this->f5);
		int32_t L_7 = (((t825 *)(t825 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0078;
		}
	}
	{
		t4* L_8 = (__this->f12);
		t305* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t4 *, t4 * >::Invoke(&m22883_MI, L_8, (*(t4 **)(t4 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		V_3 = V_2;
		t1450* L_11 = (__this->f5);
		int32_t L_12 = (((t825 *)(t825 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_13 = (__this->f10);
		int32_t L_14 = ((int32_t)(L_13+1));
		V_4 = L_14;
		__this->f10 = L_14;
		int32_t L_15 = (__this->f11);
		if ((((int32_t)V_4) <= ((int32_t)L_15)))
		{
			goto IL_00c9;
		}
	}
	{
		m10511(__this, &m10511_MI);
		t704* L_16 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_16)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_17 = (__this->f9);
		V_2 = L_17;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_18 = (__this->f8);
		int32_t L_19 = L_18;
		V_4 = L_19;
		__this->f8 = ((int32_t)(L_19+1));
		V_2 = V_4;
		goto IL_0101;
	}

IL_00ea:
	{
		t1450* L_20 = (__this->f5);
		int32_t L_21 = (((t825 *)(t825 *)SZArrayLdElema(L_20, V_2))->f1);
		__this->f9 = L_21;
	}

IL_0101:
	{
		t1450* L_22 = (__this->f5);
		t704* L_23 = (__this->f4);
		((t825 *)(t825 *)SZArrayLdElema(L_22, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_23, V_1))-1));
		t704* L_24 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_1)) = (int32_t)((int32_t)(V_2+1));
		t1450* L_25 = (__this->f5);
		((t825 *)(t825 *)SZArrayLdElema(L_25, V_2))->f0 = V_0;
		t305* L_26 = (__this->f6);
		*((t4 **)(t4 **)SZArrayLdElema(L_26, V_2)) = (t4 *)p0;
		goto IL_0194;
	}

IL_0148:
	{
		if ((((int32_t)V_3) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		t1450* L_27 = (__this->f5);
		t1450* L_28 = (__this->f5);
		int32_t L_29 = (((t825 *)(t825 *)SZArrayLdElema(L_28, V_2))->f1);
		((t825 *)(t825 *)SZArrayLdElema(L_27, V_3))->f1 = L_29;
		t1450* L_30 = (__this->f5);
		t704* L_31 = (__this->f4);
		((t825 *)(t825 *)SZArrayLdElema(L_30, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_31, V_1))-1));
		t704* L_32 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_32, V_1)) = (int32_t)((int32_t)(V_2+1));
	}

IL_0194:
	{
		t704* L_33 = (__this->f7);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_33, V_2)) = (int32_t)p1;
		int32_t L_34 = (__this->f14);
		__this->f14 = ((int32_t)(L_34+1));
		return;
	}
}
extern MethodInfo m10505_MI;
 void m10505 (t1917 * __this, int32_t p0, t4* p1, MethodInfo* method){
	t4* V_0 = {0};
	t1917 * G_B4_0 = {0};
	t1917 * G_B3_0 = {0};
	t4* G_B5_0 = {0};
	t1917 * G_B5_1 = {0};
	{
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t1233 * L_0 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6454(L_0, (t8*) &_stringLiteral537, &m6454_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000f:
	{
		G_B3_0 = ((t1917 *)(__this));
		if (!p1)
		{
			G_B4_0 = ((t1917 *)(__this));
			goto IL_0018;
		}
	}
	{
		V_0 = p1;
		G_B5_0 = V_0;
		G_B5_1 = ((t1917 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1485_TI));
		t1485 * L_1 = m8064(NULL, &m8064_MI);
		G_B5_0 = ((t4*)(L_1));
		G_B5_1 = ((t1917 *)(G_B4_0));
	}

IL_001d:
	{
		G_B5_1->f12 = G_B5_0;
		if (p0)
		{
			goto IL_002b;
		}
	}
	{
		p0 = ((int32_t)10);
	}

IL_002b:
	{
		p0 = ((int32_t)((((int32_t)((float)((((float)p0))/(0.9f)))))+1));
		m10506(__this, p0, &m10506_MI);
		__this->f14 = 0;
		return;
	}
}
extern MethodInfo m10506_MI;
 void m10506 (t1917 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f4 = ((t704*)SZArrayNew(InitializedTypeInfo(&t704_TI), p0));
		__this->f5 = ((t1450*)SZArrayNew(InitializedTypeInfo(&t1450_TI), p0));
		__this->f9 = (-1);
		__this->f6 = ((t305*)SZArrayNew(InitializedTypeInfo(&t305_TI), p0));
		__this->f7 = ((t704*)SZArrayNew(InitializedTypeInfo(&t704_TI), p0));
		__this->f8 = 0;
		t704* L_0 = (__this->f4);
		__this->f11 = (((int32_t)((float)((((float)(((int32_t)(((t14 *)L_0)->max_length)))))*(0.9f)))));
		int32_t L_1 = (__this->f11);
		if (L_1)
		{
			goto IL_006e;
		}
	}
	{
		t704* L_2 = (__this->f4);
		if ((((int32_t)(((int32_t)(((t14 *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->f11 = 1;
	}

IL_006e:
	{
		return;
	}
}
extern MethodInfo m10507_MI;
 void m10507 (t1917 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral326, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t1233 * L_1 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6454(L_1, (t8*) &_stringLiteral323, &m6454_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001d:
	{
		int32_t L_2 = m3690(p0, &m3690_MI);
		if ((((int32_t)p1) <= ((int32_t)L_2)))
		{
			goto IL_0031;
		}
	}
	{
		t303 * L_3 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_3, (t8*) &_stringLiteral538, &m1917_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0031:
	{
		int32_t L_4 = m3690(p0, &m3690_MI);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m10503_MI, __this);
		if ((((int32_t)((int32_t)(L_4-p1))) >= ((int32_t)L_5)))
		{
			goto IL_004c;
		}
	}
	{
		t303 * L_6 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_6, (t8*) &_stringLiteral539, &m1917_MI);
		il2cpp_codegen_raise_exception (L_6);
	}

IL_004c:
	{
		return;
	}
}
extern MethodInfo m10508_MI;
 t1922  m10508 (t4 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	{
		t1922  L_0 = {0};
		m10526(&L_0, p0, p1, &m10526_MI);
		return L_0;
	}
}
extern MethodInfo m10509_MI;
 int32_t m10509 (t4 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	{
		return p1;
	}
}
extern MethodInfo m10510_MI;
 void m10510 (t1917 * __this, t1921* p0, int32_t p1, MethodInfo* method){
	{
		m10507(__this, (t14 *)(t14 *)p0, p1, &m10507_MI);
		t50 L_0 = { &m10508_MI };
		t1929 * L_1 = (t1929 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1929_TI));
		m10575(L_1, NULL, L_0, &m10575_MI);
		m18056(__this, p0, p1, L_1, &m18056_MI);
		return;
	}
}
extern MethodInfo m10511_MI;
 void m10511 (t1917 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t704* V_1 = {0};
	t1450* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t305* V_7 = {0};
	t704* V_8 = {0};
	int32_t V_9 = 0;
	{
		t704* L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t854_TI));
		int32_t L_1 = m4390(NULL, ((int32_t)(((int32_t)((((int32_t)(((t14 *)L_0)->max_length)))<<1))|1)), &m4390_MI);
		V_0 = L_1;
		V_1 = ((t704*)SZArrayNew(InitializedTypeInfo(&t704_TI), V_0));
		V_2 = ((t1450*)SZArrayNew(InitializedTypeInfo(&t1450_TI), V_0));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		t704* L_2 = (__this->f4);
		V_4 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_2, V_3))-1));
		goto IL_00a2;
	}

IL_0035:
	{
		t4* L_3 = (__this->f12);
		t305* L_4 = (__this->f6);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(&m22884_MI, L_3, (*(t4 **)(t4 **)SZArrayLdElema(L_4, V_4)));
		int32_t L_6 = ((int32_t)(L_5|((int32_t)-2147483648)));
		V_9 = L_6;
		((t825 *)(t825 *)SZArrayLdElema(V_2, V_4))->f0 = L_6;
		V_5 = V_9;
		V_6 = ((int32_t)(((int32_t)(V_5&((int32_t)2147483647)))%V_0));
		((t825 *)(t825 *)SZArrayLdElema(V_2, V_4))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6))-1));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6)) = (int32_t)((int32_t)(V_4+1));
		t1450* L_7 = (__this->f5);
		int32_t L_8 = (((t825 *)(t825 *)SZArrayLdElema(L_7, V_4))->f1);
		V_4 = L_8;
	}

IL_00a2:
	{
		if ((((uint32_t)V_4) != ((uint32_t)(-1))))
		{
			goto IL_0035;
		}
	}
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_00ab:
	{
		t704* L_9 = (__this->f4);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t14 *)L_9)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->f4 = V_1;
		__this->f5 = V_2;
		V_7 = ((t305*)SZArrayNew(InitializedTypeInfo(&t305_TI), V_0));
		V_8 = ((t704*)SZArrayNew(InitializedTypeInfo(&t704_TI), V_0));
		t305* L_10 = (__this->f6);
		int32_t L_11 = (__this->f8);
		m3739(NULL, (t14 *)(t14 *)L_10, 0, (t14 *)(t14 *)V_7, 0, L_11, &m3739_MI);
		t704* L_12 = (__this->f7);
		int32_t L_13 = (__this->f8);
		m3739(NULL, (t14 *)(t14 *)L_12, 0, (t14 *)(t14 *)V_8, 0, L_13, &m3739_MI);
		__this->f6 = V_7;
		__this->f7 = V_8;
		__this->f11 = (((int32_t)((float)((((float)V_0))*(0.9f)))));
		return;
	}
}
extern MethodInfo m10512_MI;
 void m10512 (t1917 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t4 * L_0 = p0;
		if (((t4 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t328 * L_1 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_1, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t4* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(&m22884_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t704* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_4)->max_length)))));
		t704* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		goto IL_008f;
	}

IL_0044:
	{
		t1450* L_6 = (__this->f5);
		int32_t L_7 = (((t825 *)(t825 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		t4* L_8 = (__this->f12);
		t305* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t4 *, t4 * >::Invoke(&m22883_MI, L_8, (*(t4 **)(t4 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		t303 * L_11 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_11, (t8*) &_stringLiteral541, &m1917_MI);
		il2cpp_codegen_raise_exception (L_11);
	}

IL_007d:
	{
		t1450* L_12 = (__this->f5);
		int32_t L_13 = (((t825 *)(t825 *)SZArrayLdElema(L_12, V_2))->f1);
		V_2 = L_13;
	}

IL_008f:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_14 = (__this->f10);
		int32_t L_15 = ((int32_t)(L_14+1));
		V_3 = L_15;
		__this->f10 = L_15;
		int32_t L_16 = (__this->f11);
		if ((((int32_t)V_3) <= ((int32_t)L_16)))
		{
			goto IL_00c3;
		}
	}
	{
		m10511(__this, &m10511_MI);
		t704* L_17 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_17)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_18 = (__this->f9);
		V_2 = L_18;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_19 = (__this->f8);
		int32_t L_20 = L_19;
		V_3 = L_20;
		__this->f8 = ((int32_t)(L_20+1));
		V_2 = V_3;
		goto IL_00f9;
	}

IL_00e2:
	{
		t1450* L_21 = (__this->f5);
		int32_t L_22 = (((t825 *)(t825 *)SZArrayLdElema(L_21, V_2))->f1);
		__this->f9 = L_22;
	}

IL_00f9:
	{
		t1450* L_23 = (__this->f5);
		((t825 *)(t825 *)SZArrayLdElema(L_23, V_2))->f0 = V_0;
		t1450* L_24 = (__this->f5);
		t704* L_25 = (__this->f4);
		((t825 *)(t825 *)SZArrayLdElema(L_24, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_25, V_1))-1));
		t704* L_26 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_26, V_1)) = (int32_t)((int32_t)(V_2+1));
		t305* L_27 = (__this->f6);
		*((t4 **)(t4 **)SZArrayLdElema(L_27, V_2)) = (t4 *)p0;
		t704* L_28 = (__this->f7);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_28, V_2)) = (int32_t)p1;
		int32_t L_29 = (__this->f14);
		__this->f14 = ((int32_t)(L_29+1));
		return;
	}
}
extern MethodInfo m10513_MI;
 void m10513 (t1917 * __this, MethodInfo* method){
	{
		__this->f10 = 0;
		t704* L_0 = (__this->f4);
		t704* L_1 = (__this->f4);
		m3735(NULL, (t14 *)(t14 *)L_0, 0, (((int32_t)(((t14 *)L_1)->max_length))), &m3735_MI);
		t305* L_2 = (__this->f6);
		t305* L_3 = (__this->f6);
		m3735(NULL, (t14 *)(t14 *)L_2, 0, (((int32_t)(((t14 *)L_3)->max_length))), &m3735_MI);
		t704* L_4 = (__this->f7);
		t704* L_5 = (__this->f7);
		m3735(NULL, (t14 *)(t14 *)L_4, 0, (((int32_t)(((t14 *)L_5)->max_length))), &m3735_MI);
		t1450* L_6 = (__this->f5);
		t1450* L_7 = (__this->f5);
		m3735(NULL, (t14 *)(t14 *)L_6, 0, (((int32_t)(((t14 *)L_7)->max_length))), &m3735_MI);
		__this->f9 = (-1);
		__this->f8 = 0;
		int32_t L_8 = (__this->f14);
		__this->f14 = ((int32_t)(L_8+1));
		return;
	}
}
extern MethodInfo m10514_MI;
 bool m10514 (t1917 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t4 * L_0 = p0;
		if (((t4 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t328 * L_1 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_1, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t4* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(&m22884_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t704* L_4 = (__this->f4);
		t704* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_5)->max_length)))))))-1));
		goto IL_0084;
	}

IL_0042:
	{
		t1450* L_6 = (__this->f5);
		int32_t L_7 = (((t825 *)(t825 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0072;
		}
	}
	{
		t4* L_8 = (__this->f12);
		t305* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t4 *, t4 * >::Invoke(&m22883_MI, L_8, (*(t4 **)(t4 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t1450* L_11 = (__this->f5);
		int32_t L_12 = (((t825 *)(t825 *)SZArrayLdElema(L_11, V_1))->f1);
		V_1 = L_12;
	}

IL_0084:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m10515_MI;
 bool m10515 (t1917 * __this, int32_t p0, MethodInfo* method){
	t4* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t1863 * L_0 = m10175(NULL, &m10175_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		t704* L_1 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_1, V_1))-1));
		goto IL_0040;
	}

IL_0017:
	{
		t704* L_2 = (__this->f7);
		bool L_3 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m23810_MI, V_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, V_2)), p0);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		t1450* L_4 = (__this->f5);
		int32_t L_5 = (((t825 *)(t825 *)SZArrayLdElema(L_4, V_2))->f1);
		V_2 = L_5;
	}

IL_0040:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0048:
	{
		t704* L_6 = (__this->f4);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t14 *)L_6)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m10516_MI;
 void m10516 (t1917 * __this, t705 * p0, t706  p1, MethodInfo* method){
	t1921* V_0 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral294, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = (__this->f14);
		m5720(p0, (t8*) &_stringLiteral542, L_1, &m5720_MI);
		t4* L_2 = (__this->f12);
		m5726(p0, (t8*) &_stringLiteral543, L_2, &m5726_MI);
		V_0 = (t1921*)NULL;
		int32_t L_3 = (__this->f10);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = (__this->f10);
		V_0 = ((t1921*)SZArrayNew(InitializedTypeInfo(&t1921_TI), L_4));
		m10510(__this, V_0, 0, &m10510_MI);
	}

IL_004f:
	{
		t704* L_5 = (__this->f4);
		m5720(p0, (t8*) &_stringLiteral544, (((int32_t)(((t14 *)L_5)->max_length))), &m5720_MI);
		m5726(p0, (t8*) &_stringLiteral545, (t4 *)(t4 *)V_0, &m5726_MI);
		return;
	}
}
extern MethodInfo m10517_MI;
 void m10517 (t1917 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t1921* V_1 = {0};
	int32_t V_2 = 0;
	{
		t705 * L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		t705 * L_1 = (__this->f13);
		int32_t L_2 = m5729(L_1, (t8*) &_stringLiteral542, &m5729_MI);
		__this->f14 = L_2;
		t705 * L_3 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t290_TI));
		t290 * L_4 = m1528(NULL, LoadTypeToken(&t1918_0_0_0), &m1528_MI);
		t4 * L_5 = m5716(L_3, (t8*) &_stringLiteral543, L_4, &m5716_MI);
		__this->f12 = ((t4*)Castclass(L_5, InitializedTypeInfo(&t1918_TI)));
		t705 * L_6 = (__this->f13);
		int32_t L_7 = m5729(L_6, (t8*) &_stringLiteral544, &m5729_MI);
		V_0 = L_7;
		t705 * L_8 = (__this->f13);
		t290 * L_9 = m1528(NULL, LoadTypeToken(&t1921_0_0_0), &m1528_MI);
		t4 * L_10 = m5716(L_8, (t8*) &_stringLiteral545, L_9, &m5716_MI);
		V_1 = ((t1921*)Castclass(L_10, InitializedTypeInfo(&t1921_TI)));
		if ((((int32_t)V_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		m10506(__this, V_0, &m10506_MI);
		__this->f10 = 0;
		if (!V_1)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		t4 * L_11 = m10527(((t1922 *)(t1922 *)SZArrayLdElema(V_1, V_2)), &m10527_MI);
		int32_t L_12 = m10529(((t1922 *)(t1922 *)SZArrayLdElema(V_1, V_2)), &m10529_MI);
		VirtActionInvoker2< t4 *, int32_t >::Invoke(&m10512_MI, __this, L_11, L_12);
		V_2 = ((int32_t)(V_2+1));
	}

IL_00b4:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t14 *)V_1)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_13 = (__this->f14);
		__this->f14 = ((int32_t)(L_13+1));
		__this->f13 = (t705 *)NULL;
		return;
	}
}
extern MethodInfo m10518_MI;
 bool m10518 (t1917 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t4 * V_4 = {0};
	int32_t V_5 = 0;
	{
		t4 * L_0 = p0;
		if (((t4 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t328 * L_1 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_1, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t4* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(&m22884_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t704* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_4)->max_length)))));
		t704* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		t1450* L_6 = (__this->f5);
		int32_t L_7 = (((t825 *)(t825 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007a;
		}
	}
	{
		t4* L_8 = (__this->f12);
		t305* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t4 *, t4 * >::Invoke(&m22883_MI, L_8, (*(t4 **)(t4 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		V_3 = V_2;
		t1450* L_11 = (__this->f5);
		int32_t L_12 = (((t825 *)(t825 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_13 = (__this->f10);
		__this->f10 = ((int32_t)(L_13-1));
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		t704* L_14 = (__this->f4);
		t1450* L_15 = (__this->f5);
		int32_t L_16 = (((t825 *)(t825 *)SZArrayLdElema(L_15, V_2))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_14, V_1)) = (int32_t)((int32_t)(L_16+1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t1450* L_17 = (__this->f5);
		t1450* L_18 = (__this->f5);
		int32_t L_19 = (((t825 *)(t825 *)SZArrayLdElema(L_18, V_2))->f1);
		((t825 *)(t825 *)SZArrayLdElema(L_17, V_3))->f1 = L_19;
	}

IL_00e9:
	{
		t1450* L_20 = (__this->f5);
		int32_t L_21 = (__this->f9);
		((t825 *)(t825 *)SZArrayLdElema(L_20, V_2))->f1 = L_21;
		__this->f9 = V_2;
		t1450* L_22 = (__this->f5);
		((t825 *)(t825 *)SZArrayLdElema(L_22, V_2))->f0 = 0;
		t305* L_23 = (__this->f6);
		Initobj (&t4_TI, (&V_4));
		*((t4 **)(t4 **)SZArrayLdElema(L_23, V_2)) = (t4 *)V_4;
		t704* L_24 = (__this->f7);
		Initobj (&t16_TI, (&V_5));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_2)) = (int32_t)V_5;
		int32_t L_25 = (__this->f14);
		__this->f14 = ((int32_t)(L_25+1));
		return 1;
	}
}
extern MethodInfo m10519_MI;
 bool m10519 (t1917 * __this, t4 * p0, int32_t* p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		t4 * L_0 = p0;
		if (((t4 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t328 * L_1 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_1, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t4* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(&m22884_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t704* L_4 = (__this->f4);
		t704* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_5)->max_length)))))))-1));
		goto IL_0096;
	}

IL_0042:
	{
		t1450* L_6 = (__this->f5);
		int32_t L_7 = (((t825 *)(t825 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0084;
		}
	}
	{
		t4* L_8 = (__this->f12);
		t305* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t4 *, t4 * >::Invoke(&m22883_MI, L_8, (*(t4 **)(t4 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		t704* L_11 = (__this->f7);
		*p1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, V_1));
		return 1;
	}

IL_0084:
	{
		t1450* L_12 = (__this->f5);
		int32_t L_13 = (((t825 *)(t825 *)SZArrayLdElema(L_12, V_1))->f1);
		V_1 = L_13;
	}

IL_0096:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		Initobj (&t16_TI, (&V_2));
		*p1 = V_2;
		return 0;
	}
}
extern MethodInfo m10520_MI;
 t1920 * m10520 (t1917 * __this, MethodInfo* method){
	{
		t1920 * L_0 = (t1920 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1920_TI));
		m10537(L_0, __this, &m10537_MI);
		return L_0;
	}
}
extern MethodInfo m10521_MI;
 t4 * m10521 (t1917 * __this, t4 * p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if (((t4 *)IsInst(p0, InitializedTypeInfo(&t4_TI))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t290_TI));
		t290 * L_1 = m1528(NULL, LoadTypeToken(&t4_0_0_0), &m1528_MI);
		t8* L_2 = (t8*)VirtFuncInvoker0< t8* >::Invoke(&m3825_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
		t8* L_3 = m1741(NULL, (t8*) &_stringLiteral546, L_2, &m1741_MI);
		t303 * L_4 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m6444(L_4, L_3, (t8*) &_stringLiteral536, &m6444_MI);
		il2cpp_codegen_raise_exception (L_4);
	}

IL_003a:
	{
		return ((t4 *)Castclass(p0, InitializedTypeInfo(&t4_TI)));
	}
}
extern MethodInfo m10522_MI;
 int32_t m10522 (t1917 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		if (p0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t290_TI));
		t290 * L_0 = m1528(NULL, LoadTypeToken(&t16_0_0_0), &m1528_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3794_MI, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (&t16_TI, (&V_0));
		return V_0;
	}

IL_001e:
	{
		if (((t4 *)IsInst(p0, InitializedTypeInfo(&t16_TI))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t290_TI));
		t290 * L_2 = m1528(NULL, LoadTypeToken(&t16_0_0_0), &m1528_MI);
		t8* L_3 = (t8*)VirtFuncInvoker0< t8* >::Invoke(&m3825_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
		t8* L_4 = m1741(NULL, (t8*) &_stringLiteral546, L_3, &m1741_MI);
		t303 * L_5 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m6444(L_5, L_4, (t8*) &_stringLiteral242, &m6444_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_004a:
	{
		return ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t16_TI)))));
	}
}
extern MethodInfo m10523_MI;
 bool m10523 (t1917 * __this, t1922  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t4 * L_0 = m10527((&p0), &m10527_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t4 *, int32_t* >::Invoke(&m10519_MI, __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t1863 * L_2 = m10175(NULL, &m10175_MI);
		int32_t L_3 = m10529((&p0), &m10529_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m23945_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m10524_MI;
 t1924  m10524 (t1917 * __this, MethodInfo* method){
	{
		t1924  L_0 = {0};
		m10556(&L_0, __this, &m10556_MI);
		return L_0;
	}
}
extern MethodInfo m10525_MI;
 t827  m10525 (t4 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	{
		t4 * L_0 = p0;
		int32_t L_1 = p1;
		t4 * L_2 = Box(InitializedTypeInfo(&t16_TI), &L_1);
		t827  L_3 = {0};
		m4332(&L_3, ((t4 *)L_0), L_2, &m4332_MI);
		return L_3;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
extern Il2CppType t16_0_0_32849;
FieldInfo t1917_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t16_0_0_32849, &t1917_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t20_0_0_32849;
FieldInfo t1917_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t20_0_0_32849, &t1917_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_32849;
FieldInfo t1917_f2_FieldInfo = 
{
	"NO_SLOT", &t16_0_0_32849, &t1917_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_32849;
FieldInfo t1917_f3_FieldInfo = 
{
	"HASH_FLAG", &t16_0_0_32849, &t1917_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t704_0_0_1;
FieldInfo t1917_f4_FieldInfo = 
{
	"table", &t704_0_0_1, &t1917_TI, offsetof(t1917, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1450_0_0_1;
FieldInfo t1917_f5_FieldInfo = 
{
	"linkSlots", &t1450_0_0_1, &t1917_TI, offsetof(t1917, f5), &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_1;
FieldInfo t1917_f6_FieldInfo = 
{
	"keySlots", &t305_0_0_1, &t1917_TI, offsetof(t1917, f6), &EmptyCustomAttributesCache};
extern Il2CppType t704_0_0_1;
FieldInfo t1917_f7_FieldInfo = 
{
	"valueSlots", &t704_0_0_1, &t1917_TI, offsetof(t1917, f7), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1917_f8_FieldInfo = 
{
	"touchedSlots", &t16_0_0_1, &t1917_TI, offsetof(t1917, f8), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1917_f9_FieldInfo = 
{
	"emptySlot", &t16_0_0_1, &t1917_TI, offsetof(t1917, f9), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1917_f10_FieldInfo = 
{
	"count", &t16_0_0_1, &t1917_TI, offsetof(t1917, f10), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1917_f11_FieldInfo = 
{
	"threshold", &t16_0_0_1, &t1917_TI, offsetof(t1917, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1918_0_0_1;
FieldInfo t1917_f12_FieldInfo = 
{
	"hcp", &t1918_0_0_1, &t1917_TI, offsetof(t1917, f12), &EmptyCustomAttributesCache};
extern Il2CppType t705_0_0_1;
FieldInfo t1917_f13_FieldInfo = 
{
	"serialization_info", &t705_0_0_1, &t1917_TI, offsetof(t1917, f13), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1917_f14_FieldInfo = 
{
	"generation", &t16_0_0_1, &t1917_TI, offsetof(t1917, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1919_0_0_17;
extern CustomAttributesCache t832__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t1917_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t1919_0_0_17, &t1917_TI, offsetof(t1917_SFs, f15), &t832__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t1917_FIs[] =
{
	&t1917_f0_FieldInfo,
	&t1917_f1_FieldInfo,
	&t1917_f2_FieldInfo,
	&t1917_f3_FieldInfo,
	&t1917_f4_FieldInfo,
	&t1917_f5_FieldInfo,
	&t1917_f6_FieldInfo,
	&t1917_f7_FieldInfo,
	&t1917_f8_FieldInfo,
	&t1917_f9_FieldInfo,
	&t1917_f10_FieldInfo,
	&t1917_f11_FieldInfo,
	&t1917_f12_FieldInfo,
	&t1917_f13_FieldInfo,
	&t1917_f14_FieldInfo,
	&t1917_f15_FieldInfo,
	NULL
};
static const int32_t t1917_f0_DefaultValueData = 10;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t1917_f0_DefaultValue = 
{
	&t1917_f0_FieldInfo, { (char*)&t1917_f0_DefaultValueData, &t16_0_0_0 }};
static const float t1917_f1_DefaultValueData = 0.9f;
extern Il2CppType t20_0_0_0;
static Il2CppFieldDefaultValueEntry t1917_f1_DefaultValue = 
{
	&t1917_f1_FieldInfo, { (char*)&t1917_f1_DefaultValueData, &t20_0_0_0 }};
static const int32_t t1917_f2_DefaultValueData = -1;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t1917_f2_DefaultValue = 
{
	&t1917_f2_FieldInfo, { (char*)&t1917_f2_DefaultValueData, &t16_0_0_0 }};
static const int32_t t1917_f3_DefaultValueData = -2147483648;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t1917_f3_DefaultValue = 
{
	&t1917_f3_FieldInfo, { (char*)&t1917_f3_DefaultValueData, &t16_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1917_FDVs[] = 
{
	&t1917_f0_DefaultValue,
	&t1917_f1_DefaultValue,
	&t1917_f2_DefaultValue,
	&t1917_f3_DefaultValue,
	NULL
};
extern MethodInfo m10491_MI;
static PropertyInfo t1917____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t1917_TI, "System.Collections.IDictionary.Item", NULL, &m10491_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10492_MI;
static PropertyInfo t1917____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1917_TI, "System.Collections.ICollection.IsSynchronized", &m10492_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10493_MI;
static PropertyInfo t1917____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1917_TI, "System.Collections.ICollection.SyncRoot", &m10493_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10494_MI;
static PropertyInfo t1917____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t1917_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m10494_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10503_MI;
static PropertyInfo t1917____Count_PropertyInfo = 
{
	&t1917_TI, "Count", &m10503_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10504_MI;
static PropertyInfo t1917____Item_PropertyInfo = 
{
	&t1917_TI, "Item", NULL, &m10504_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10520_MI;
static PropertyInfo t1917____Values_PropertyInfo = 
{
	&t1917_TI, "Values", &m10520_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1917_PIs[] =
{
	&t1917____System_Collections_IDictionary_Item_PropertyInfo,
	&t1917____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1917____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1917____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t1917____Count_PropertyInfo,
	&t1917____Item_PropertyInfo,
	&t1917____Values_PropertyInfo,
	NULL
};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10487_MI = 
{
	".ctor", (methodPointerType)&m10487, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1918_0_0_0;
static ParameterInfo t1917_m10488_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t1918_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10488_MI = 
{
	".ctor", (methodPointerType)&m10488, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1917_m10488_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1917_m10489_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10489_MI = 
{
	".ctor", (methodPointerType)&m10489, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1917_m10489_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t705_0_0_0;
extern Il2CppType t706_0_0_0;
static ParameterInfo t1917_m10490_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t705_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t706_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t706 (MethodInfo* method, void* obj, void** args);
MethodInfo m10490_MI = 
{
	".ctor", (methodPointerType)&m10490, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t706, t1917_m10490_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1917_m10491_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10491_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m10491, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t1917_m10491_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1917_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10492_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10492, &t1917_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1917_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10493_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10493, &t1917_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1917_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10494_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m10494, &t1917_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1922_0_0_0;
static ParameterInfo t1917_m10495_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1922_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t1922 (MethodInfo* method, void* obj, void** args);
MethodInfo m10495_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m10495, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15_t1922, t1917_m10495_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1922_0_0_0;
static ParameterInfo t1917_m10496_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1922_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1922 (MethodInfo* method, void* obj, void** args);
MethodInfo m10496_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m10496, &t1917_TI, &t17_0_0_0, RuntimeInvoker_t17_t1922, t1917_m10496_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1921_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1917_m10497_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1921_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10497_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m10497, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1917_m10497_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1922_0_0_0;
static ParameterInfo t1917_m10498_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1922_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1922 (MethodInfo* method, void* obj, void** args);
MethodInfo m10498_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m10498, &t1917_TI, &t17_0_0_0, RuntimeInvoker_t17_t1922, t1917_m10498_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1917_m10499_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10499_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10499, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1917_m10499_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1917_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10500_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10500, &t1917_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1917_TI;
extern Il2CppType t1923_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10501_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m10501, &t1917_TI, &t1923_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1917_TI;
extern Il2CppType t833_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10502_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m10502, &t1917_TI, &t833_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1917_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10503_MI = 
{
	"get_Count", (methodPointerType)&m10503, &t1917_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1917_m10504_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10504_MI = 
{
	"set_Item", (methodPointerType)&m10504, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1917_m10504_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1918_0_0_0;
static ParameterInfo t1917_m10505_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t1918_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10505_MI = 
{
	"Init", (methodPointerType)&m10505, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1917_m10505_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1917_m10506_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10506_MI = 
{
	"InitArrays", (methodPointerType)&m10506, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1917_m10506_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1917_m10507_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10507_MI = 
{
	"CopyToCheck", (methodPointerType)&m10507, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1917_m10507_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern Il2CppGenericContainer m24122_IGC;
extern TypeInfo m24122_gp_TRet_0_TI;
Il2CppGenericParamFull m24122_gp_TRet_0_TI_GenericParamFull = { { &m24122_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m24122_gp_TElem_1_TI;
Il2CppGenericParamFull m24122_gp_TElem_1_TI_GenericParamFull = { { &m24122_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m24122_IGPA[2] = 
{
	&m24122_gp_TRet_0_TI_GenericParamFull,
	&m24122_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m24122_MI;
Il2CppGenericContainer m24122_IGC = { { NULL, NULL }, NULL, &m24122_MI, 2, 1, m24122_IGPA };
MethodInfo m24122_MI = 
{
	"Do_CopyTo", NULL, &t1917_TI, &t15_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1917_m10508_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t1922_0_0_0;
extern void* RuntimeInvoker_t1922_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10508_MI = 
{
	"make_pair", (methodPointerType)&m10508, &t1917_TI, &t1922_0_0_0, RuntimeInvoker_t1922_t4_t16, t1917_m10508_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1917_m10509_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10509_MI = 
{
	"pick_value", (methodPointerType)&m10509, &t1917_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t16, t1917_m10509_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1921_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1917_m10510_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1921_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10510_MI = 
{
	"CopyTo", (methodPointerType)&m10510, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1917_m10510_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern Il2CppGenericContainer m24123_IGC;
extern TypeInfo m24123_gp_TRet_0_TI;
Il2CppGenericParamFull m24123_gp_TRet_0_TI_GenericParamFull = { { &m24123_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m24123_IGPA[1] = 
{
	&m24123_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m24123_MI;
Il2CppGenericContainer m24123_IGC = { { NULL, NULL }, NULL, &m24123_MI, 1, 1, m24123_IGPA };
MethodInfo m24123_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t1917_TI, &t15_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10511_MI = 
{
	"Resize", (methodPointerType)&m10511, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1917_m10512_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10512_MI = 
{
	"Add", (methodPointerType)&m10512, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1917_m10512_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10513_MI = 
{
	"Clear", (methodPointerType)&m10513, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1917_m10514_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10514_MI = 
{
	"ContainsKey", (methodPointerType)&m10514, &t1917_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1917_m10514_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1917_m10515_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10515_MI = 
{
	"ContainsValue", (methodPointerType)&m10515, &t1917_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t1917_m10515_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t705_0_0_0;
extern Il2CppType t706_0_0_0;
static ParameterInfo t1917_m10516_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t705_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t706_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t706 (MethodInfo* method, void* obj, void** args);
MethodInfo m10516_MI = 
{
	"GetObjectData", (methodPointerType)&m10516, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t706, t1917_m10516_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1917_m10517_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10517_MI = 
{
	"OnDeserialization", (methodPointerType)&m10517, &t1917_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1917_m10517_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1917_m10518_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10518_MI = 
{
	"Remove", (methodPointerType)&m10518, &t1917_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1917_m10518_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t16_1_0_0;
static ParameterInfo t1917_m10519_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_1_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t381 (MethodInfo* method, void* obj, void** args);
MethodInfo m10519_MI = 
{
	"TryGetValue", (methodPointerType)&m10519, &t1917_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t381, t1917_m10519_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1917_TI;
extern Il2CppType t1920_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10520_MI = 
{
	"get_Values", (methodPointerType)&m10520, &t1917_TI, &t1920_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1917_m10521_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10521_MI = 
{
	"ToTKey", (methodPointerType)&m10521, &t1917_TI, &t4_0_0_0, RuntimeInvoker_t4_t4, t1917_m10521_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1917_m10522_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10522_MI = 
{
	"ToTValue", (methodPointerType)&m10522, &t1917_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1917_m10522_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1922_0_0_0;
static ParameterInfo t1917_m10523_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t1922_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1922 (MethodInfo* method, void* obj, void** args);
MethodInfo m10523_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m10523, &t1917_TI, &t17_0_0_0, RuntimeInvoker_t17_t1922, t1917_m10523_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1917_TI;
extern Il2CppType t1924_0_0_0;
extern void* RuntimeInvoker_t1924 (MethodInfo* method, void* obj, void** args);
MethodInfo m10524_MI = 
{
	"GetEnumerator", (methodPointerType)&m10524, &t1917_TI, &t1924_0_0_0, RuntimeInvoker_t1924, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1917_m10525_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827_t4_t16 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t832__CustomAttributeCache_m7545;
MethodInfo m10525_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m10525, &t1917_TI, &t827_0_0_0, RuntimeInvoker_t827_t4_t16, t1917_m10525_ParameterInfos, &t832__CustomAttributeCache_m7545, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1917_MIs[] =
{
	&m10487_MI,
	&m10488_MI,
	&m10489_MI,
	&m10490_MI,
	&m10491_MI,
	&m10492_MI,
	&m10493_MI,
	&m10494_MI,
	&m10495_MI,
	&m10496_MI,
	&m10497_MI,
	&m10498_MI,
	&m10499_MI,
	&m10500_MI,
	&m10501_MI,
	&m10502_MI,
	&m10503_MI,
	&m10504_MI,
	&m10505_MI,
	&m10506_MI,
	&m10507_MI,
	&m24122_MI,
	&m10508_MI,
	&m10509_MI,
	&m10510_MI,
	&m24123_MI,
	&m10511_MI,
	&m10512_MI,
	&m10513_MI,
	&m10514_MI,
	&m10515_MI,
	&m10516_MI,
	&m10517_MI,
	&m10518_MI,
	&m10519_MI,
	&m10520_MI,
	&m10521_MI,
	&m10522_MI,
	&m10523_MI,
	&m10524_MI,
	&m10525_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10500_MI;
extern MethodInfo m10516_MI;
extern MethodInfo m10503_MI;
extern MethodInfo m10492_MI;
extern MethodInfo m10493_MI;
extern MethodInfo m10499_MI;
extern MethodInfo m10503_MI;
extern MethodInfo m10494_MI;
extern MethodInfo m10495_MI;
extern MethodInfo m10513_MI;
extern MethodInfo m10496_MI;
extern MethodInfo m10497_MI;
extern MethodInfo m10498_MI;
extern MethodInfo m10501_MI;
extern MethodInfo m10518_MI;
extern MethodInfo m10491_MI;
extern MethodInfo m10502_MI;
extern MethodInfo m10517_MI;
extern MethodInfo m10504_MI;
extern MethodInfo m10512_MI;
extern MethodInfo m10514_MI;
extern MethodInfo m10516_MI;
extern MethodInfo m10517_MI;
extern MethodInfo m10519_MI;
static MethodInfo* t1917_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10500_MI,
	&m10516_MI,
	&m10503_MI,
	&m10492_MI,
	&m10493_MI,
	&m10499_MI,
	&m10503_MI,
	&m10494_MI,
	&m10495_MI,
	&m10513_MI,
	&m10496_MI,
	&m10497_MI,
	&m10498_MI,
	&m10501_MI,
	&m10518_MI,
	&m10491_MI,
	&m10502_MI,
	&m10517_MI,
	&m10504_MI,
	&m10512_MI,
	&m10514_MI,
	&m10516_MI,
	&m10517_MI,
	&m10519_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t364_TI;
extern TypeInfo t640_TI;
extern TypeInfo t3983_TI;
extern TypeInfo t3985_TI;
extern TypeInfo t5144_TI;
extern TypeInfo t729_TI;
extern TypeInfo t1486_TI;
static TypeInfo* t1917_ITIs[] = 
{
	&t591_TI,
	&t364_TI,
	&t640_TI,
	&t3983_TI,
	&t3985_TI,
	&t5144_TI,
	&t729_TI,
	&t1486_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t364_TI;
extern TypeInfo t640_TI;
extern TypeInfo t3983_TI;
extern TypeInfo t3985_TI;
extern TypeInfo t5144_TI;
extern TypeInfo t729_TI;
extern TypeInfo t1486_TI;
static Il2CppInterfaceOffsetPair t1917_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t364_TI, 5},
	{ &t640_TI, 6},
	{ &t3983_TI, 10},
	{ &t3985_TI, 17},
	{ &t5144_TI, 18},
	{ &t729_TI, 19},
	{ &t1486_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1917_0_0_0;
extern Il2CppType t1917_1_0_0;
extern TypeInfo t4_TI;
struct t1917;
extern TypeInfo t1917_TI;
extern Il2CppGenericClass t1917_GC;
extern CustomAttributesCache t832__CustomAttributeCache;
extern CustomAttributesCache t832__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t832__CustomAttributeCache_m7545;
TypeInfo t1917_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t1917_MIs, t1917_PIs, t1917_FIs, NULL, &t4_TI, NULL, NULL, &t1917_TI, t1917_ITIs, t1917_VT, &t832__CustomAttributeCache, &t1917_TI, &t1917_0_0_0, &t1917_1_0_0, t1917_IOs, &t1917_GC, NULL, t1917_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1917), 0, -1, sizeof(t1917_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 41, 7, 16, 0, 0, 28, 8, 8};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3983_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
extern MethodInfo m24124_MI;
static PropertyInfo t3983____Count_PropertyInfo = 
{
	&t3983_TI, "Count", &m24124_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24125_MI;
static PropertyInfo t3983____IsReadOnly_PropertyInfo = 
{
	&t3983_TI, "IsReadOnly", &m24125_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3983_PIs[] =
{
	&t3983____Count_PropertyInfo,
	&t3983____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3983_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24124_MI = 
{
	"get_Count", NULL, &t3983_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3983_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24125_MI = 
{
	"get_IsReadOnly", NULL, &t3983_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1922_0_0_0;
static ParameterInfo t3983_m24126_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1922_0_0_0},
};
extern TypeInfo t3983_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t1922 (MethodInfo* method, void* obj, void** args);
MethodInfo m24126_MI = 
{
	"Add", NULL, &t3983_TI, &t15_0_0_0, RuntimeInvoker_t15_t1922, t3983_m24126_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3983_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m24127_MI = 
{
	"Clear", NULL, &t3983_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1922_0_0_0;
static ParameterInfo t3983_m24128_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1922_0_0_0},
};
extern TypeInfo t3983_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1922 (MethodInfo* method, void* obj, void** args);
MethodInfo m24128_MI = 
{
	"Contains", NULL, &t3983_TI, &t17_0_0_0, RuntimeInvoker_t17_t1922, t3983_m24128_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1921_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t3983_m24129_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1921_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3983_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24129_MI = 
{
	"CopyTo", NULL, &t3983_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t3983_m24129_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1922_0_0_0;
static ParameterInfo t3983_m24130_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1922_0_0_0},
};
extern TypeInfo t3983_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1922 (MethodInfo* method, void* obj, void** args);
MethodInfo m24130_MI = 
{
	"Remove", NULL, &t3983_TI, &t17_0_0_0, RuntimeInvoker_t17_t1922, t3983_m24130_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3983_MIs[] =
{
	&m24124_MI,
	&m24125_MI,
	&m24126_MI,
	&m24127_MI,
	&m24128_MI,
	&m24129_MI,
	&m24130_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3985_TI;
static TypeInfo* t3983_ITIs[] = 
{
	&t591_TI,
	&t3985_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3983_0_0_0;
extern Il2CppType t3983_1_0_0;
struct t3983;
extern TypeInfo t3983_TI;
extern Il2CppGenericClass t3983_GC;
TypeInfo t3983_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3983_MIs, t3983_PIs, NULL, NULL, NULL, NULL, NULL, &t3983_TI, t3983_ITIs, NULL, &EmptyCustomAttributesCache, &t3983_TI, &t3983_0_0_0, &t3983_1_0_0, NULL, &t3983_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3985_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
extern TypeInfo t3985_TI;
extern Il2CppType t1923_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24131_MI = 
{
	"GetEnumerator", NULL, &t3985_TI, &t1923_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3985_MIs[] =
{
	&m24131_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t3985_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3985_0_0_0;
extern Il2CppType t3985_1_0_0;
struct t3985;
extern TypeInfo t3985_TI;
extern Il2CppGenericClass t3985_GC;
TypeInfo t3985_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3985_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3985_TI, t3985_ITIs, NULL, &EmptyCustomAttributesCache, &t3985_TI, &t3985_0_0_0, &t3985_1_0_0, NULL, &t3985_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1923_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
extern MethodInfo m24132_MI;
static PropertyInfo t1923____Current_PropertyInfo = 
{
	&t1923_TI, "Current", &m24132_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1923_PIs[] =
{
	&t1923____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1923_TI;
extern Il2CppType t1922_0_0_0;
extern void* RuntimeInvoker_t1922 (MethodInfo* method, void* obj, void** args);
MethodInfo m24132_MI = 
{
	"get_Current", NULL, &t1923_TI, &t1922_0_0_0, RuntimeInvoker_t1922, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1923_MIs[] =
{
	&m24132_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t1923_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1923_0_0_0;
extern Il2CppType t1923_1_0_0;
struct t1923;
extern TypeInfo t1923_TI;
extern Il2CppGenericClass t1923_GC;
TypeInfo t1923_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1923_MIs, t1923_PIs, NULL, NULL, NULL, NULL, NULL, &t1923_TI, t1923_ITIs, NULL, &EmptyCustomAttributesCache, &t1923_TI, &t1923_0_0_0, &t1923_1_0_0, NULL, &t1923_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1922_TI;

extern TypeInfo t1922_TI;
extern TypeInfo t434_TI;
extern TypeInfo t8_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern MethodInfo m10528_MI;
extern MethodInfo m10530_MI;
extern MethodInfo m10527_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10529_MI;
extern MethodInfo m3401_MI;


extern MethodInfo m10526_MI;
 void m10526 (t1922 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	{
		m10528(__this, p0, &m10528_MI);
		m10530(__this, p1, &m10530_MI);
		return;
	}
}
extern MethodInfo m10527_MI;
 t4 * m10527 (t1922 * __this, MethodInfo* method){
	{
		t4 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m10528_MI;
 void m10528 (t1922 * __this, t4 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m10529_MI;
 int32_t m10529 (t1922 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10530_MI;
 void m10530 (t1922 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m10531_MI;
 t8* m10531 (t1922 * __this, MethodInfo* method){
	t4 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	t434* G_B2_1 = {0};
	t434* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	t434* G_B1_1 = {0};
	t434* G_B1_2 = {0};
	t8* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t434* G_B3_2 = {0};
	t434* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	t434* G_B5_1 = {0};
	t434* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t434* G_B4_1 = {0};
	t434* G_B4_2 = {0};
	t8* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t434* G_B6_2 = {0};
	t434* G_B6_3 = {0};
	{
		t434* L_0 = ((t434*)SZArrayNew(InitializedTypeInfo(&t434_TI), 5));
		ArrayElementTypeCheck (L_0, (t8*) &_stringLiteral174);
		*((t8**)(t8**)SZArrayLdElema(L_0, 0)) = (t8*)(t8*) &_stringLiteral174;
		t434* L_1 = L_0;
		t4 * L_2 = m10527(__this, &m10527_MI);
		t4 * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((t4 *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		t4 * L_4 = m10527(__this, &m10527_MI);
		V_0 = L_4;
		t8* L_5 = (t8*)VirtFuncInvoker0< t8* >::Invoke(&m22_MI, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
		G_B3_0 = (((t8_SFs*)(&t8_TI)->static_fields)->f2);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t8**)(t8**)SZArrayLdElema(G_B3_2, G_B3_1)) = (t8*)G_B3_0;
		t434* L_6 = G_B3_3;
		ArrayElementTypeCheck (L_6, (t8*) &_stringLiteral183);
		*((t8**)(t8**)SZArrayLdElema(L_6, 2)) = (t8*)(t8*) &_stringLiteral183;
		t434* L_7 = L_6;
		int32_t L_8 = m10529(__this, &m10529_MI);
		int32_t L_9 = L_8;
		t4 * L_10 = Box(InitializedTypeInfo(&t16_TI), &L_9);
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_10)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = m10529(__this, &m10529_MI);
		V_1 = L_11;
		t8* L_12 = (t8*)VirtFuncInvoker0< t8* >::Invoke(&m22_MI, Box(InitializedTypeInfo(&t16_TI), &(*(&V_1))));
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
		G_B6_0 = (((t8_SFs*)(&t8_TI)->static_fields)->f2);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t8**)(t8**)SZArrayLdElema(G_B6_2, G_B6_1)) = (t8*)G_B6_0;
		t434* L_13 = G_B6_3;
		ArrayElementTypeCheck (L_13, (t8*) &_stringLiteral175);
		*((t8**)(t8**)SZArrayLdElema(L_13, 4)) = (t8*)(t8*) &_stringLiteral175;
		IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
		t8* L_14 = m3401(NULL, L_13, &m3401_MI);
		return L_14;
	}
}
// Metadata Definition System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
extern Il2CppType t4_0_0_1;
FieldInfo t1922_f0_FieldInfo = 
{
	"key", &t4_0_0_1, &t1922_TI, offsetof(t1922, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1922_f1_FieldInfo = 
{
	"value", &t16_0_0_1, &t1922_TI, offsetof(t1922, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1922_FIs[] =
{
	&t1922_f0_FieldInfo,
	&t1922_f1_FieldInfo,
	NULL
};
extern MethodInfo m10527_MI;
extern MethodInfo m10528_MI;
static PropertyInfo t1922____Key_PropertyInfo = 
{
	&t1922_TI, "Key", &m10527_MI, &m10528_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10529_MI;
extern MethodInfo m10530_MI;
static PropertyInfo t1922____Value_PropertyInfo = 
{
	&t1922_TI, "Value", &m10529_MI, &m10530_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1922_PIs[] =
{
	&t1922____Key_PropertyInfo,
	&t1922____Value_PropertyInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1922_m10526_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1922_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10526_MI = 
{
	".ctor", (methodPointerType)&m10526, &t1922_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1922_m10526_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1922_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10527_MI = 
{
	"get_Key", (methodPointerType)&m10527, &t1922_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1922_m10528_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1922_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10528_MI = 
{
	"set_Key", (methodPointerType)&m10528, &t1922_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1922_m10528_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1922_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10529_MI = 
{
	"get_Value", (methodPointerType)&m10529, &t1922_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1922_m10530_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1922_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10530_MI = 
{
	"set_Value", (methodPointerType)&m10530, &t1922_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1922_m10530_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1922_TI;
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10531_MI = 
{
	"ToString", (methodPointerType)&m10531, &t1922_TI, &t8_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1922_MIs[] =
{
	&m10526_MI,
	&m10527_MI,
	&m10528_MI,
	&m10529_MI,
	&m10530_MI,
	&m10531_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m10531_MI;
static MethodInfo* t1922_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m10531_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1922_0_0_0;
extern Il2CppType t1922_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1922_TI;
extern Il2CppGenericClass t1922_GC;
extern CustomAttributesCache t837__CustomAttributeCache;
TypeInfo t1922_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t1922_MIs, t1922_PIs, t1922_FIs, NULL, &t95_TI, NULL, NULL, &t1922_TI, NULL, t1922_VT, &t837__CustomAttributeCache, &t1922_TI, &t1922_0_0_0, &t1922_1_0_0, NULL, &t1922_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1922)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t1925.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1925_TI;
#include "t1925MD.h"

extern TypeInfo t1925_TI;
extern TypeInfo t1922_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10536_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m18040_MI;
struct t14;
 t1922  m18040 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18040_MI;


extern MethodInfo m10532_MI;
 void m10532 (t1925 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10533_MI;
 t4 * m10533 (t1925 * __this, MethodInfo* method){
	{
		t1922  L_0 = m10536(__this, &m10536_MI);
		t1922  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1922_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10534_MI;
 void m10534 (t1925 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10535_MI;
 bool m10535 (t1925 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t14 * L_1 = (__this->f0);
		int32_t L_2 = m3690(L_1, &m3690_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m10536_MI;
 t1922  m10536 (t1925 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral370, &m6887_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1269 * L_3 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_3, (t8*) &_stringLiteral371, &m6887_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t14 * L_4 = (__this->f0);
		t14 * L_5 = (__this->f0);
		int32_t L_6 = m3690(L_5, &m3690_MI);
		int32_t L_7 = (__this->f1);
		t1922  L_8 = m18040(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18040_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
extern Il2CppType t14_0_0_1;
FieldInfo t1925_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1925_TI, offsetof(t1925, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1925_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1925_TI, offsetof(t1925, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1925_FIs[] =
{
	&t1925_f0_FieldInfo,
	&t1925_f1_FieldInfo,
	NULL
};
extern MethodInfo m10533_MI;
static PropertyInfo t1925____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1925_TI, "System.Collections.IEnumerator.Current", &m10533_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10536_MI;
static PropertyInfo t1925____Current_PropertyInfo = 
{
	&t1925_TI, "Current", &m10536_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1925_PIs[] =
{
	&t1925____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1925____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1925_m10532_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1925_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10532_MI = 
{
	".ctor", (methodPointerType)&m10532, &t1925_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1925_m10532_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1925_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10533_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10533, &t1925_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1925_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10534_MI = 
{
	"Dispose", (methodPointerType)&m10534, &t1925_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1925_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10535_MI = 
{
	"MoveNext", (methodPointerType)&m10535, &t1925_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1925_TI;
extern Il2CppType t1922_0_0_0;
extern void* RuntimeInvoker_t1922 (MethodInfo* method, void* obj, void** args);
MethodInfo m10536_MI = 
{
	"get_Current", (methodPointerType)&m10536, &t1925_TI, &t1922_0_0_0, RuntimeInvoker_t1922, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1925_MIs[] =
{
	&m10532_MI,
	&m10533_MI,
	&m10534_MI,
	&m10535_MI,
	&m10536_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10533_MI;
extern MethodInfo m10535_MI;
extern MethodInfo m10534_MI;
extern MethodInfo m10536_MI;
static MethodInfo* t1925_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10533_MI,
	&m10535_MI,
	&m10534_MI,
	&m10536_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1923_TI;
static TypeInfo* t1925_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t1923_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1923_TI;
static Il2CppInterfaceOffsetPair t1925_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t1923_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1925_0_0_0;
extern Il2CppType t1925_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1925_TI;
extern Il2CppGenericClass t1925_GC;
extern TypeInfo t14_TI;
TypeInfo t1925_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1925_MIs, t1925_PIs, t1925_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1925_TI, t1925_ITIs, t1925_VT, &EmptyCustomAttributesCache, &t1925_TI, &t1925_0_0_0, &t1925_1_0_0, t1925_IOs, &t1925_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1925)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3984_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
extern MethodInfo m24133_MI;
extern MethodInfo m24134_MI;
static PropertyInfo t3984____Item_PropertyInfo = 
{
	&t3984_TI, "Item", &m24133_MI, &m24134_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3984_PIs[] =
{
	&t3984____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1922_0_0_0;
static ParameterInfo t3984_m24135_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1922_0_0_0},
};
extern TypeInfo t3984_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t1922 (MethodInfo* method, void* obj, void** args);
MethodInfo m24135_MI = 
{
	"IndexOf", NULL, &t3984_TI, &t16_0_0_0, RuntimeInvoker_t16_t1922, t3984_m24135_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1922_0_0_0;
static ParameterInfo t3984_m24136_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1922_0_0_0},
};
extern TypeInfo t3984_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t1922 (MethodInfo* method, void* obj, void** args);
MethodInfo m24136_MI = 
{
	"Insert", NULL, &t3984_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t1922, t3984_m24136_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3984_m24137_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3984_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24137_MI = 
{
	"RemoveAt", NULL, &t3984_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3984_m24137_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3984_m24133_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3984_TI;
extern Il2CppType t1922_0_0_0;
extern void* RuntimeInvoker_t1922_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24133_MI = 
{
	"get_Item", NULL, &t3984_TI, &t1922_0_0_0, RuntimeInvoker_t1922_t16, t3984_m24133_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1922_0_0_0;
static ParameterInfo t3984_m24134_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1922_0_0_0},
};
extern TypeInfo t3984_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t1922 (MethodInfo* method, void* obj, void** args);
MethodInfo m24134_MI = 
{
	"set_Item", NULL, &t3984_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t1922, t3984_m24134_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3984_MIs[] =
{
	&m24135_MI,
	&m24136_MI,
	&m24137_MI,
	&m24133_MI,
	&m24134_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3983_TI;
extern TypeInfo t3985_TI;
static TypeInfo* t3984_ITIs[] = 
{
	&t591_TI,
	&t3983_TI,
	&t3985_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3984_0_0_0;
extern Il2CppType t3984_1_0_0;
struct t3984;
extern TypeInfo t3984_TI;
extern Il2CppGenericClass t3984_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3984_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3984_MIs, t3984_PIs, NULL, NULL, NULL, NULL, NULL, &t3984_TI, t3984_ITIs, NULL, &t1400__CustomAttributeCache, &t3984_TI, &t3984_0_0_0, &t3984_1_0_0, NULL, &t3984_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5144_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
extern Il2CppType t4_0_0_0;
static ParameterInfo t5144_m24138_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t5144_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24138_MI = 
{
	"Remove", NULL, &t5144_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5144_m24138_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5144_MIs[] =
{
	&m24138_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3983_TI;
extern TypeInfo t3985_TI;
static TypeInfo* t5144_ITIs[] = 
{
	&t591_TI,
	&t3983_TI,
	&t3985_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5144_0_0_0;
extern Il2CppType t5144_1_0_0;
struct t5144;
extern TypeInfo t5144_TI;
extern Il2CppGenericClass t5144_GC;
extern CustomAttributesCache t1460__CustomAttributeCache;
TypeInfo t5144_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5144_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5144_TI, t5144_ITIs, NULL, &t1460__CustomAttributeCache, &t5144_TI, &t5144_0_0_0, &t5144_1_0_0, NULL, &t5144_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1920_TI;

#include "t1927.h"
#include "t1928.h"
extern TypeInfo t1920_TI;
extern TypeInfo t640_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1917_TI;
extern TypeInfo t16_TI;
extern TypeInfo t328_TI;
extern TypeInfo t335_TI;
extern TypeInfo t1927_TI;
extern TypeInfo t704_TI;
extern TypeInfo t15_TI;
extern TypeInfo t1928_TI;
#include "t1928MD.h"
#include "t1927MD.h"
extern MethodInfo m7381_MI;
extern MethodInfo m10503_MI;
extern MethodInfo m15_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m6989_MI;
extern MethodInfo m10515_MI;
extern MethodInfo m10549_MI;
extern MethodInfo m10548_MI;
extern MethodInfo m10507_MI;
extern MethodInfo m10509_MI;
extern MethodInfo m10567_MI;
extern MethodInfo m18051_MI;
extern MethodInfo m18052_MI;
extern MethodInfo m10551_MI;
struct t1917;
 void m18051 (t1917 * __this, t14 * p0, int32_t p1, t1928 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18051_MI;
struct t1917;
 void m18052 (t1917 * __this, t704* p0, int32_t p1, t1928 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18052_MI;


extern MethodInfo m10537_MI;
 void m10537 (t1920 * __this, t1917 * p0, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral549, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m10538_MI;
 void m10538 (t1920 * __this, int32_t p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m6989(L_0, (t8*) &_stringLiteral550, &m6989_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10539_MI;
 void m10539 (t1920 * __this, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m6989(L_0, (t8*) &_stringLiteral550, &m6989_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10540_MI;
 bool m10540 (t1920 * __this, int32_t p0, MethodInfo* method){
	{
		t1917 * L_0 = (__this->f0);
		bool L_1 = m10515(L_0, p0, &m10515_MI);
		return L_1;
	}
}
extern MethodInfo m10541_MI;
 bool m10541 (t1920 * __this, int32_t p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m6989(L_0, (t8*) &_stringLiteral550, &m6989_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10542_MI;
 t4* m10542 (t1920 * __this, MethodInfo* method){
	{
		t1927  L_0 = m10549(__this, &m10549_MI);
		t1927  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1927_TI), &L_1);
		return (t4*)L_2;
	}
}
extern MethodInfo m10543_MI;
 void m10543 (t1920 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	t704* V_0 = {0};
	{
		V_0 = ((t704*)IsInst(p0, InitializedTypeInfo(&t704_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t704*, int32_t >::Invoke(&m10548_MI, __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t1917 * L_0 = (__this->f0);
		m10507(L_0, p0, p1, &m10507_MI);
		t1917 * L_1 = (__this->f0);
		t50 L_2 = { &m10509_MI };
		t1928 * L_3 = (t1928 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1928_TI));
		m10567(L_3, NULL, L_2, &m10567_MI);
		m18051(L_1, p0, p1, L_3, &m18051_MI);
		return;
	}
}
extern MethodInfo m10544_MI;
 t4 * m10544 (t1920 * __this, MethodInfo* method){
	{
		t1927  L_0 = m10549(__this, &m10549_MI);
		t1927  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1927_TI), &L_1);
		return (t4 *)L_2;
	}
}
extern MethodInfo m10545_MI;
 bool m10545 (t1920 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m10546_MI;
 bool m10546 (t1920 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m10547_MI;
 t4 * m10547 (t1920 * __this, MethodInfo* method){
	{
		t1917 * L_0 = (__this->f0);
		t4 * L_1 = (t4 *)InterfaceFuncInvoker0< t4 * >::Invoke(&m7381_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m10548_MI;
 void m10548 (t1920 * __this, t704* p0, int32_t p1, MethodInfo* method){
	{
		t1917 * L_0 = (__this->f0);
		m10507(L_0, (t14 *)(t14 *)p0, p1, &m10507_MI);
		t1917 * L_1 = (__this->f0);
		t50 L_2 = { &m10509_MI };
		t1928 * L_3 = (t1928 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1928_TI));
		m10567(L_3, NULL, L_2, &m10567_MI);
		m18052(L_1, p0, p1, L_3, &m18052_MI);
		return;
	}
}
extern MethodInfo m10549_MI;
 t1927  m10549 (t1920 * __this, MethodInfo* method){
	{
		t1917 * L_0 = (__this->f0);
		t1927  L_1 = {0};
		m10551(&L_1, L_0, &m10551_MI);
		return L_1;
	}
}
extern MethodInfo m10550_MI;
 int32_t m10550 (t1920 * __this, MethodInfo* method){
	{
		t1917 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m10503_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
extern Il2CppType t1917_0_0_1;
FieldInfo t1920_f0_FieldInfo = 
{
	"dictionary", &t1917_0_0_1, &t1920_TI, offsetof(t1920, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1920_FIs[] =
{
	&t1920_f0_FieldInfo,
	NULL
};
extern MethodInfo m10545_MI;
static PropertyInfo t1920____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t1920_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m10545_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10546_MI;
static PropertyInfo t1920____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1920_TI, "System.Collections.ICollection.IsSynchronized", &m10546_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10547_MI;
static PropertyInfo t1920____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1920_TI, "System.Collections.ICollection.SyncRoot", &m10547_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10550_MI;
static PropertyInfo t1920____Count_PropertyInfo = 
{
	&t1920_TI, "Count", &m10550_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1920_PIs[] =
{
	&t1920____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t1920____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1920____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1920____Count_PropertyInfo,
	NULL
};
extern Il2CppType t1917_0_0_0;
static ParameterInfo t1920_m10537_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t1917_0_0_0},
};
extern TypeInfo t1920_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10537_MI = 
{
	".ctor", (methodPointerType)&m10537, &t1920_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1920_m10537_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1920_m10538_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1920_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10538_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m10538, &t1920_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1920_m10538_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10539_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m10539, &t1920_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1920_m10540_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1920_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10540_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m10540, &t1920_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t1920_m10540_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1920_m10541_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1920_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10541_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m10541, &t1920_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t1920_m10541_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t1926_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10542_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m10542, &t1920_TI, &t1926_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1920_m10543_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1920_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10543_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10543, &t1920_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1920_m10543_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10544_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10544, &t1920_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10545_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m10545, &t1920_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10546_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10546, &t1920_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10547_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10547, &t1920_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t704_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1920_m10548_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t704_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1920_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10548_MI = 
{
	"CopyTo", (methodPointerType)&m10548, &t1920_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1920_m10548_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t1927_0_0_0;
extern void* RuntimeInvoker_t1927 (MethodInfo* method, void* obj, void** args);
MethodInfo m10549_MI = 
{
	"GetEnumerator", (methodPointerType)&m10549, &t1920_TI, &t1927_0_0_0, RuntimeInvoker_t1927, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1920_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10550_MI = 
{
	"get_Count", (methodPointerType)&m10550, &t1920_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1920_MIs[] =
{
	&m10537_MI,
	&m10538_MI,
	&m10539_MI,
	&m10540_MI,
	&m10541_MI,
	&m10542_MI,
	&m10543_MI,
	&m10544_MI,
	&m10545_MI,
	&m10546_MI,
	&m10547_MI,
	&m10548_MI,
	&m10549_MI,
	&m10550_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10544_MI;
extern MethodInfo m10550_MI;
extern MethodInfo m10546_MI;
extern MethodInfo m10547_MI;
extern MethodInfo m10543_MI;
extern MethodInfo m10550_MI;
extern MethodInfo m10545_MI;
extern MethodInfo m10538_MI;
extern MethodInfo m10539_MI;
extern MethodInfo m10540_MI;
extern MethodInfo m10548_MI;
extern MethodInfo m10541_MI;
extern MethodInfo m10542_MI;
static MethodInfo* t1920_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10544_MI,
	&m10550_MI,
	&m10546_MI,
	&m10547_MI,
	&m10543_MI,
	&m10550_MI,
	&m10545_MI,
	&m10538_MI,
	&m10539_MI,
	&m10540_MI,
	&m10548_MI,
	&m10541_MI,
	&m10542_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t3789_TI;
extern TypeInfo t3791_TI;
static TypeInfo* t1920_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t3789_TI,
	&t3791_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t3789_TI;
extern TypeInfo t3791_TI;
static Il2CppInterfaceOffsetPair t1920_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t3789_TI, 9},
	{ &t3791_TI, 16},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1920_0_0_0;
extern Il2CppType t1920_1_0_0;
extern TypeInfo t4_TI;
struct t1920;
extern TypeInfo t1920_TI;
extern Il2CppGenericClass t1920_GC;
extern TypeInfo t832_TI;
extern CustomAttributesCache t830__CustomAttributeCache;
TypeInfo t1920_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t1920_MIs, t1920_PIs, t1920_FIs, NULL, &t4_TI, NULL, &t832_TI, &t1920_TI, t1920_ITIs, t1920_VT, &t830__CustomAttributeCache, &t1920_TI, &t1920_0_0_0, &t1920_1_0_0, t1920_IOs, &t1920_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1920), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1927_TI;

extern TypeInfo t1927_TI;
extern TypeInfo t16_TI;
extern TypeInfo t1924_TI;
extern TypeInfo t15_TI;
extern TypeInfo t17_TI;
extern MethodInfo m10563_MI;
extern MethodInfo m10529_MI;
extern MethodInfo m10524_MI;
extern MethodInfo m10566_MI;
extern MethodInfo m10560_MI;


extern MethodInfo m10551_MI;
 void m10551 (t1927 * __this, t1917 * p0, MethodInfo* method){
	{
		t1924  L_0 = m10524(p0, &m10524_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10552_MI;
 t4 * m10552 (t1927 * __this, MethodInfo* method){
	{
		t1924 * L_0 = &(__this->f0);
		int32_t L_1 = m10563(L_0, &m10563_MI);
		int32_t L_2 = L_1;
		t4 * L_3 = Box(InitializedTypeInfo(&t16_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m10553_MI;
 void m10553 (t1927 * __this, MethodInfo* method){
	{
		t1924 * L_0 = &(__this->f0);
		m10566(L_0, &m10566_MI);
		return;
	}
}
extern MethodInfo m10554_MI;
 bool m10554 (t1927 * __this, MethodInfo* method){
	{
		t1924 * L_0 = &(__this->f0);
		bool L_1 = m10560(L_0, &m10560_MI);
		return L_1;
	}
}
extern MethodInfo m10555_MI;
 int32_t m10555 (t1927 * __this, MethodInfo* method){
	{
		t1924 * L_0 = &(__this->f0);
		t1922 * L_1 = &(L_0->f3);
		int32_t L_2 = m10529(L_1, &m10529_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
extern Il2CppType t1924_0_0_1;
FieldInfo t1927_f0_FieldInfo = 
{
	"host_enumerator", &t1924_0_0_1, &t1927_TI, offsetof(t1927, f0) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1927_FIs[] =
{
	&t1927_f0_FieldInfo,
	NULL
};
extern MethodInfo m10552_MI;
static PropertyInfo t1927____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1927_TI, "System.Collections.IEnumerator.Current", &m10552_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10555_MI;
static PropertyInfo t1927____Current_PropertyInfo = 
{
	&t1927_TI, "Current", &m10555_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1927_PIs[] =
{
	&t1927____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1927____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1917_0_0_0;
static ParameterInfo t1927_m10551_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t1917_0_0_0},
};
extern TypeInfo t1927_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10551_MI = 
{
	".ctor", (methodPointerType)&m10551, &t1927_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1927_m10551_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1927_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10552_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10552, &t1927_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1927_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10553_MI = 
{
	"Dispose", (methodPointerType)&m10553, &t1927_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1927_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10554_MI = 
{
	"MoveNext", (methodPointerType)&m10554, &t1927_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1927_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10555_MI = 
{
	"get_Current", (methodPointerType)&m10555, &t1927_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1927_MIs[] =
{
	&m10551_MI,
	&m10552_MI,
	&m10553_MI,
	&m10554_MI,
	&m10555_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10552_MI;
extern MethodInfo m10554_MI;
extern MethodInfo m10553_MI;
extern MethodInfo m10555_MI;
static MethodInfo* t1927_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10552_MI,
	&m10554_MI,
	&m10553_MI,
	&m10555_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1926_TI;
static TypeInfo* t1927_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t1926_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1926_TI;
static Il2CppInterfaceOffsetPair t1927_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t1926_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1927_0_0_0;
extern Il2CppType t1927_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1927_TI;
extern Il2CppGenericClass t1927_GC;
extern TypeInfo t830_TI;
TypeInfo t1927_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1927_MIs, t1927_PIs, t1927_FIs, NULL, &t95_TI, NULL, &t830_TI, &t1927_TI, t1927_ITIs, t1927_VT, &EmptyCustomAttributesCache, &t1927_TI, &t1927_0_0_0, &t1927_1_0_0, t1927_IOs, &t1927_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1927)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1924_TI;

#include "t1286.h"
extern TypeInfo t1924_TI;
extern TypeInfo t1922_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern TypeInfo t827_TI;
extern TypeInfo t1917_TI;
extern TypeInfo t825_TI;
extern TypeInfo t1286_TI;
extern TypeInfo t1269_TI;
#include "t1286MD.h"
extern MethodInfo m10565_MI;
extern MethodInfo m10527_MI;
extern MethodInfo m10529_MI;
extern MethodInfo m4332_MI;
extern MethodInfo m10562_MI;
extern MethodInfo m10564_MI;
extern MethodInfo m10526_MI;
extern MethodInfo m7091_MI;
extern MethodInfo m6887_MI;


extern MethodInfo m10556_MI;
 void m10556 (t1924 * __this, t1917 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m10557_MI;
 t4 * m10557 (t1924 * __this, MethodInfo* method){
	{
		m10565(__this, &m10565_MI);
		t1922  L_0 = (__this->f3);
		t1922  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1922_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10558_MI;
 t827  m10558 (t1924 * __this, MethodInfo* method){
	{
		m10565(__this, &m10565_MI);
		t1922 * L_0 = &(__this->f3);
		t4 * L_1 = m10527(L_0, &m10527_MI);
		t4 * L_2 = L_1;
		t1922 * L_3 = &(__this->f3);
		int32_t L_4 = m10529(L_3, &m10529_MI);
		int32_t L_5 = L_4;
		t4 * L_6 = Box(InitializedTypeInfo(&t16_TI), &L_5);
		t827  L_7 = {0};
		m4332(&L_7, ((t4 *)L_2), L_6, &m4332_MI);
		return L_7;
	}
}
extern MethodInfo m10559_MI;
 t4 * m10559 (t1924 * __this, MethodInfo* method){
	{
		t4 * L_0 = m10562(__this, &m10562_MI);
		t4 * L_1 = L_0;
		return ((t4 *)L_1);
	}
}
extern MethodInfo m10560_MI;
 bool m10560 (t1924 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m10564(__this, &m10564_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->f1 = ((int32_t)(L_2+1));
		V_0 = V_1;
		t1917 * L_3 = (__this->f0);
		t1450* L_4 = (L_3->f5);
		int32_t L_5 = (((t825 *)(t825 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)(L_5&((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t1917 * L_6 = (__this->f0);
		t305* L_7 = (L_6->f6);
		t1917 * L_8 = (__this->f0);
		t704* L_9 = (L_8->f7);
		t1922  L_10 = {0};
		m10526(&L_10, (*(t4 **)(t4 **)SZArrayLdElema(L_7, V_0)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, V_0)), &m10526_MI);
		__this->f3 = L_10;
		return 1;
	}

IL_0072:
	{
		int32_t L_11 = (__this->f1);
		t1917 * L_12 = (__this->f0);
		int32_t L_13 = (L_12->f8);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m10561_MI;
 t1922  m10561 (t1924 * __this, MethodInfo* method){
	{
		t1922  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10562_MI;
 t4 * m10562 (t1924 * __this, MethodInfo* method){
	{
		m10565(__this, &m10565_MI);
		t1922 * L_0 = &(__this->f3);
		t4 * L_1 = m10527(L_0, &m10527_MI);
		return L_1;
	}
}
extern MethodInfo m10563_MI;
 int32_t m10563 (t1924 * __this, MethodInfo* method){
	{
		m10565(__this, &m10565_MI);
		t1922 * L_0 = &(__this->f3);
		int32_t L_1 = m10529(L_0, &m10529_MI);
		return L_1;
	}
}
extern MethodInfo m10564_MI;
 void m10564 (t1924 * __this, MethodInfo* method){
	{
		t1917 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1286 * L_1 = (t1286 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1286_TI));
		m7091(L_1, (t8*)NULL, &m7091_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000f:
	{
		t1917 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f14);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1269 * L_5 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_5, (t8*) &_stringLiteral547, &m6887_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m10565_MI;
 void m10565 (t1924 * __this, MethodInfo* method){
	{
		m10564(__this, &m10564_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral548, &m6887_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001a:
	{
		return;
	}
}
extern MethodInfo m10566_MI;
 void m10566 (t1924 * __this, MethodInfo* method){
	{
		__this->f0 = (t1917 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
extern Il2CppType t1917_0_0_1;
FieldInfo t1924_f0_FieldInfo = 
{
	"dictionary", &t1917_0_0_1, &t1924_TI, offsetof(t1924, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1924_f1_FieldInfo = 
{
	"next", &t16_0_0_1, &t1924_TI, offsetof(t1924, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1924_f2_FieldInfo = 
{
	"stamp", &t16_0_0_1, &t1924_TI, offsetof(t1924, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t1922_0_0_3;
FieldInfo t1924_f3_FieldInfo = 
{
	"current", &t1922_0_0_3, &t1924_TI, offsetof(t1924, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1924_FIs[] =
{
	&t1924_f0_FieldInfo,
	&t1924_f1_FieldInfo,
	&t1924_f2_FieldInfo,
	&t1924_f3_FieldInfo,
	NULL
};
extern MethodInfo m10557_MI;
static PropertyInfo t1924____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1924_TI, "System.Collections.IEnumerator.Current", &m10557_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10558_MI;
static PropertyInfo t1924____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t1924_TI, "System.Collections.IDictionaryEnumerator.Entry", &m10558_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10559_MI;
static PropertyInfo t1924____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t1924_TI, "System.Collections.IDictionaryEnumerator.Key", &m10559_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10561_MI;
static PropertyInfo t1924____Current_PropertyInfo = 
{
	&t1924_TI, "Current", &m10561_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10562_MI;
static PropertyInfo t1924____CurrentKey_PropertyInfo = 
{
	&t1924_TI, "CurrentKey", &m10562_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10563_MI;
static PropertyInfo t1924____CurrentValue_PropertyInfo = 
{
	&t1924_TI, "CurrentValue", &m10563_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1924_PIs[] =
{
	&t1924____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1924____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t1924____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t1924____Current_PropertyInfo,
	&t1924____CurrentKey_PropertyInfo,
	&t1924____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t1917_0_0_0;
static ParameterInfo t1924_m10556_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t1917_0_0_0},
};
extern TypeInfo t1924_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10556_MI = 
{
	".ctor", (methodPointerType)&m10556, &t1924_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1924_m10556_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1924_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10557_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10557, &t1924_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1924_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827 (MethodInfo* method, void* obj, void** args);
MethodInfo m10558_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m10558, &t1924_TI, &t827_0_0_0, RuntimeInvoker_t827, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1924_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10559_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m10559, &t1924_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1924_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10560_MI = 
{
	"MoveNext", (methodPointerType)&m10560, &t1924_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1924_TI;
extern Il2CppType t1922_0_0_0;
extern void* RuntimeInvoker_t1922 (MethodInfo* method, void* obj, void** args);
MethodInfo m10561_MI = 
{
	"get_Current", (methodPointerType)&m10561, &t1924_TI, &t1922_0_0_0, RuntimeInvoker_t1922, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1924_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10562_MI = 
{
	"get_CurrentKey", (methodPointerType)&m10562, &t1924_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1924_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10563_MI = 
{
	"get_CurrentValue", (methodPointerType)&m10563, &t1924_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1924_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10564_MI = 
{
	"VerifyState", (methodPointerType)&m10564, &t1924_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1924_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10565_MI = 
{
	"VerifyCurrent", (methodPointerType)&m10565, &t1924_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1924_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10566_MI = 
{
	"Dispose", (methodPointerType)&m10566, &t1924_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1924_MIs[] =
{
	&m10556_MI,
	&m10557_MI,
	&m10558_MI,
	&m10559_MI,
	&m10560_MI,
	&m10561_MI,
	&m10562_MI,
	&m10563_MI,
	&m10564_MI,
	&m10565_MI,
	&m10566_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10557_MI;
extern MethodInfo m10560_MI;
extern MethodInfo m10566_MI;
extern MethodInfo m10561_MI;
extern MethodInfo m10558_MI;
extern MethodInfo m10559_MI;
static MethodInfo* t1924_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10557_MI,
	&m10560_MI,
	&m10566_MI,
	&m10561_MI,
	&m10558_MI,
	&m10559_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1923_TI;
extern TypeInfo t833_TI;
static TypeInfo* t1924_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t1923_TI,
	&t833_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1923_TI;
extern TypeInfo t833_TI;
static Il2CppInterfaceOffsetPair t1924_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t1923_TI, 7},
	{ &t833_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1924_0_0_0;
extern Il2CppType t1924_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1924_TI;
extern Il2CppGenericClass t1924_GC;
extern TypeInfo t832_TI;
TypeInfo t1924_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1924_MIs, t1924_PIs, t1924_FIs, NULL, &t95_TI, NULL, &t832_TI, &t1924_TI, t1924_ITIs, t1924_VT, &EmptyCustomAttributesCache, &t1924_TI, &t1924_0_0_0, &t1924_1_0_0, t1924_IOs, &t1924_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1924)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1928_TI;



extern MethodInfo m10567_MI;
 void m10567 (t1928 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10568_MI;
 int32_t m10568 (t1928 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	typedef  int32_t (*FunctionPointerType) (t4 * __this, t4 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m10568((t1928 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10569_MI;
 t4 * m10569 (t1928 * __this, t4 * p0, int32_t p1, t49 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t16_TI), &p1);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10570_MI;
 int32_t m10570 (t1928 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1928_m10567_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1928_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10567_MI = 
{
	".ctor", (methodPointerType)&m10567, &t1928_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1928_m10567_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1928_m10568_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1928_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10568_MI = 
{
	"Invoke", (methodPointerType)&m10568, &t1928_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t16, t1928_m10568_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t16_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1928_m10569_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1928_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10569_MI = 
{
	"BeginInvoke", (methodPointerType)&m10569, &t1928_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t16_t4_t4, t1928_m10569_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1928_m10570_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1928_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10570_MI = 
{
	"EndInvoke", (methodPointerType)&m10570, &t1928_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1928_m10570_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1928_MIs[] =
{
	&m10567_MI,
	&m10568_MI,
	&m10569_MI,
	&m10570_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m10568_MI;
extern MethodInfo m10569_MI;
extern MethodInfo m10570_MI;
static MethodInfo* t1928_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m10568_MI,
	&m10569_MI,
	&m10570_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1928_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1928_0_0_0;
extern Il2CppType t1928_1_0_0;
extern TypeInfo t189_TI;
struct t1928;
extern TypeInfo t1928_TI;
extern Il2CppGenericClass t1928_GC;
extern TypeInfo t832_TI;
TypeInfo t1928_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1928_MIs, NULL, NULL, NULL, &t189_TI, NULL, &t832_TI, &t1928_TI, NULL, t1928_VT, &EmptyCustomAttributesCache, &t1928_TI, &t1928_0_0_0, &t1928_1_0_0, t1928_IOs, &t1928_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1928), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1919_TI;



extern MethodInfo m10571_MI;
 void m10571 (t1919 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10572_MI;
 t827  m10572 (t1919 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	typedef  t827  (*FunctionPointerType) (t4 * __this, t4 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m10572((t1919 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10573_MI;
 t4 * m10573 (t1919 * __this, t4 * p0, int32_t p1, t49 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t16_TI), &p1);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10574_MI;
 t827  m10574 (t1919 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t827 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1919_m10571_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1919_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10571_MI = 
{
	".ctor", (methodPointerType)&m10571, &t1919_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1919_m10571_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1919_m10572_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1919_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10572_MI = 
{
	"Invoke", (methodPointerType)&m10572, &t1919_TI, &t827_0_0_0, RuntimeInvoker_t827_t4_t16, t1919_m10572_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t16_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1919_m10573_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1919_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10573_MI = 
{
	"BeginInvoke", (methodPointerType)&m10573, &t1919_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t16_t4_t4, t1919_m10573_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1919_m10574_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1919_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10574_MI = 
{
	"EndInvoke", (methodPointerType)&m10574, &t1919_TI, &t827_0_0_0, RuntimeInvoker_t827_t4, t1919_m10574_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1919_MIs[] =
{
	&m10571_MI,
	&m10572_MI,
	&m10573_MI,
	&m10574_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m10572_MI;
extern MethodInfo m10573_MI;
extern MethodInfo m10574_MI;
static MethodInfo* t1919_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m10572_MI,
	&m10573_MI,
	&m10574_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1919_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1919_0_0_0;
extern Il2CppType t1919_1_0_0;
extern TypeInfo t189_TI;
struct t1919;
extern TypeInfo t1919_TI;
extern Il2CppGenericClass t1919_GC;
extern TypeInfo t832_TI;
TypeInfo t1919_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1919_MIs, NULL, NULL, NULL, &t189_TI, NULL, &t832_TI, &t1919_TI, NULL, t1919_VT, &EmptyCustomAttributesCache, &t1919_TI, &t1919_0_0_0, &t1919_1_0_0, t1919_IOs, &t1919_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1919), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1929_TI;



extern MethodInfo m10575_MI;
 void m10575 (t1929 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10576_MI;
 t1922  m10576 (t1929 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	typedef  t1922  (*FunctionPointerType) (t4 * __this, t4 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m10576((t1929 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10577_MI;
 t4 * m10577 (t1929 * __this, t4 * p0, int32_t p1, t49 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t16_TI), &p1);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10578_MI;
 t1922  m10578 (t1929 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1922 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1929_m10575_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1929_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10575_MI = 
{
	".ctor", (methodPointerType)&m10575, &t1929_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1929_m10575_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1929_m10576_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1929_TI;
extern Il2CppType t1922_0_0_0;
extern void* RuntimeInvoker_t1922_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10576_MI = 
{
	"Invoke", (methodPointerType)&m10576, &t1929_TI, &t1922_0_0_0, RuntimeInvoker_t1922_t4_t16, t1929_m10576_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t16_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1929_m10577_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1929_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10577_MI = 
{
	"BeginInvoke", (methodPointerType)&m10577, &t1929_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t16_t4_t4, t1929_m10577_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1929_m10578_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1929_TI;
extern Il2CppType t1922_0_0_0;
extern void* RuntimeInvoker_t1922_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10578_MI = 
{
	"EndInvoke", (methodPointerType)&m10578, &t1929_TI, &t1922_0_0_0, RuntimeInvoker_t1922_t4, t1929_m10578_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1929_MIs[] =
{
	&m10575_MI,
	&m10576_MI,
	&m10577_MI,
	&m10578_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m10576_MI;
extern MethodInfo m10577_MI;
extern MethodInfo m10578_MI;
static MethodInfo* t1929_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m10576_MI,
	&m10577_MI,
	&m10578_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1929_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1929_0_0_0;
extern Il2CppType t1929_1_0_0;
extern TypeInfo t189_TI;
struct t1929;
extern TypeInfo t1929_TI;
extern Il2CppGenericClass t1929_GC;
extern TypeInfo t832_TI;
TypeInfo t1929_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1929_MIs, NULL, NULL, NULL, &t189_TI, NULL, &t832_TI, &t1929_TI, NULL, t1929_VT, &EmptyCustomAttributesCache, &t1929_TI, &t1929_0_0_0, &t1929_1_0_0, t1929_IOs, &t1929_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1929), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1930_TI;

extern TypeInfo t1930_TI;
extern TypeInfo t1924_TI;
extern TypeInfo t833_TI;
extern TypeInfo t827_TI;
extern TypeInfo t1922_TI;
extern TypeInfo t4_TI;
extern TypeInfo t17_TI;
extern MethodInfo m7691_MI;
extern MethodInfo m10561_MI;
extern MethodInfo m10527_MI;
extern MethodInfo m10581_MI;
extern MethodInfo m15_MI;
extern MethodInfo m10524_MI;
extern MethodInfo m10560_MI;


extern MethodInfo m10579_MI;
 void m10579 (t1930 * __this, t1917 * p0, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		t1924  L_0 = m10524(p0, &m10524_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10580_MI;
 bool m10580 (t1930 * __this, MethodInfo* method){
	{
		t1924 * L_0 = &(__this->f0);
		bool L_1 = m10560(L_0, &m10560_MI);
		return L_1;
	}
}
extern MethodInfo m10581_MI;
 t827  m10581 (t1930 * __this, MethodInfo* method){
	{
		t1924  L_0 = (__this->f0);
		t1924  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1924_TI), &L_1);
		t827  L_3 = (t827 )InterfaceFuncInvoker0< t827  >::Invoke(&m7691_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m10582_MI;
 t4 * m10582 (t1930 * __this, MethodInfo* method){
	t1922  V_0 = {0};
	{
		t1924 * L_0 = &(__this->f0);
		t1922  L_1 = m10561(L_0, &m10561_MI);
		V_0 = L_1;
		t4 * L_2 = m10527((&V_0), &m10527_MI);
		t4 * L_3 = L_2;
		return ((t4 *)L_3);
	}
}
extern MethodInfo m10583_MI;
 t4 * m10583 (t1930 * __this, MethodInfo* method){
	{
		t827  L_0 = (t827 )VirtFuncInvoker0< t827  >::Invoke(&m10581_MI, __this);
		t827  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t827_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
extern Il2CppType t1924_0_0_1;
FieldInfo t1930_f0_FieldInfo = 
{
	"host_enumerator", &t1924_0_0_1, &t1930_TI, offsetof(t1930, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1930_FIs[] =
{
	&t1930_f0_FieldInfo,
	NULL
};
extern MethodInfo m10581_MI;
static PropertyInfo t1930____Entry_PropertyInfo = 
{
	&t1930_TI, "Entry", &m10581_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10582_MI;
static PropertyInfo t1930____Key_PropertyInfo = 
{
	&t1930_TI, "Key", &m10582_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10583_MI;
static PropertyInfo t1930____Current_PropertyInfo = 
{
	&t1930_TI, "Current", &m10583_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1930_PIs[] =
{
	&t1930____Entry_PropertyInfo,
	&t1930____Key_PropertyInfo,
	&t1930____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1917_0_0_0;
static ParameterInfo t1930_m10579_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t1917_0_0_0},
};
extern TypeInfo t1930_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10579_MI = 
{
	".ctor", (methodPointerType)&m10579, &t1930_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1930_m10579_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1930_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10580_MI = 
{
	"MoveNext", (methodPointerType)&m10580, &t1930_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1930_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827 (MethodInfo* method, void* obj, void** args);
MethodInfo m10581_MI = 
{
	"get_Entry", (methodPointerType)&m10581, &t1930_TI, &t827_0_0_0, RuntimeInvoker_t827, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1930_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10582_MI = 
{
	"get_Key", (methodPointerType)&m10582, &t1930_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1930_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10583_MI = 
{
	"get_Current", (methodPointerType)&m10583, &t1930_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1930_MIs[] =
{
	&m10579_MI,
	&m10580_MI,
	&m10581_MI,
	&m10582_MI,
	&m10583_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10583_MI;
extern MethodInfo m10580_MI;
extern MethodInfo m10581_MI;
extern MethodInfo m10582_MI;
static MethodInfo* t1930_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10583_MI,
	&m10580_MI,
	&m10581_MI,
	&m10582_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t833_TI;
static TypeInfo* t1930_ITIs[] = 
{
	&t123_TI,
	&t833_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t833_TI;
static Il2CppInterfaceOffsetPair t1930_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t833_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1930_0_0_0;
extern Il2CppType t1930_1_0_0;
extern TypeInfo t4_TI;
struct t1930;
extern TypeInfo t1930_TI;
extern Il2CppGenericClass t1930_GC;
extern TypeInfo t832_TI;
TypeInfo t1930_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t1930_MIs, t1930_PIs, t1930_FIs, NULL, &t4_TI, NULL, &t832_TI, &t1930_TI, t1930_ITIs, t1930_VT, &EmptyCustomAttributesCache, &t1930_TI, &t1930_0_0_0, &t1930_1_0_0, t1930_IOs, &t1930_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1930), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1936_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>
extern MethodInfo m24139_MI;
extern MethodInfo m24140_MI;
static PropertyInfo t1936____Item_PropertyInfo = 
{
	&t1936_TI, "Item", &m24139_MI, &m24140_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1936_PIs[] =
{
	&t1936____Item_PropertyInfo,
	NULL
};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1936_m24141_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1936_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24141_MI = 
{
	"IndexOf", NULL, &t1936_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1936_m24141_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t1936_m24142_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1936_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24142_MI = 
{
	"Insert", NULL, &t1936_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1936_m24142_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1936_m24143_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1936_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24143_MI = 
{
	"RemoveAt", NULL, &t1936_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1936_m24143_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1936_m24139_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1936_TI;
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24139_MI = 
{
	"get_Item", NULL, &t1936_TI, &t135_0_0_0, RuntimeInvoker_t4_t16, t1936_m24139_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t1936_m24140_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1936_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24140_MI = 
{
	"set_Item", NULL, &t1936_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1936_m24140_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1936_MIs[] =
{
	&m24141_MI,
	&m24142_MI,
	&m24143_MI,
	&m24139_MI,
	&m24140_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t1932_TI;
extern TypeInfo t1933_TI;
static TypeInfo* t1936_ITIs[] = 
{
	&t591_TI,
	&t1932_TI,
	&t1933_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1936_0_0_0;
extern Il2CppType t1936_1_0_0;
struct t1936;
extern TypeInfo t1936_TI;
extern Il2CppGenericClass t1936_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t1936_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t1936_MIs, t1936_PIs, NULL, NULL, NULL, NULL, NULL, &t1936_TI, t1936_ITIs, NULL, &t1400__CustomAttributeCache, &t1936_TI, &t1936_0_0_0, &t1936_1_0_0, NULL, &t1936_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1932_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>
extern MethodInfo m24144_MI;
static PropertyInfo t1932____Count_PropertyInfo = 
{
	&t1932_TI, "Count", &m24144_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24145_MI;
static PropertyInfo t1932____IsReadOnly_PropertyInfo = 
{
	&t1932_TI, "IsReadOnly", &m24145_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1932_PIs[] =
{
	&t1932____Count_PropertyInfo,
	&t1932____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t1932_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24144_MI = 
{
	"get_Count", NULL, &t1932_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1932_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24145_MI = 
{
	"get_IsReadOnly", NULL, &t1932_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1932_m24146_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1932_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24146_MI = 
{
	"Add", NULL, &t1932_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1932_m24146_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1932_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m24147_MI = 
{
	"Clear", NULL, &t1932_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1932_m24148_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1932_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24148_MI = 
{
	"Contains", NULL, &t1932_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1932_m24148_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1915_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1932_m24149_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1915_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1932_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24149_MI = 
{
	"CopyTo", NULL, &t1932_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1932_m24149_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1932_m24150_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1932_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24150_MI = 
{
	"Remove", NULL, &t1932_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1932_m24150_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1932_MIs[] =
{
	&m24144_MI,
	&m24145_MI,
	&m24146_MI,
	&m24147_MI,
	&m24148_MI,
	&m24149_MI,
	&m24150_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t1933_TI;
static TypeInfo* t1932_ITIs[] = 
{
	&t591_TI,
	&t1933_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1932_0_0_0;
extern Il2CppType t1932_1_0_0;
struct t1932;
extern TypeInfo t1932_TI;
extern Il2CppGenericClass t1932_GC;
TypeInfo t1932_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t1932_MIs, t1932_PIs, NULL, NULL, NULL, NULL, NULL, &t1932_TI, t1932_ITIs, NULL, &EmptyCustomAttributesCache, &t1932_TI, &t1932_0_0_0, &t1932_1_0_0, NULL, &t1932_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1933_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ICanvasElement>
extern TypeInfo t1933_TI;
extern Il2CppType t1914_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24151_MI = 
{
	"GetEnumerator", NULL, &t1933_TI, &t1914_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1933_MIs[] =
{
	&m24151_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t1933_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1933_0_0_0;
extern Il2CppType t1933_1_0_0;
struct t1933;
extern TypeInfo t1933_TI;
extern Il2CppGenericClass t1933_GC;
TypeInfo t1933_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t1933_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1933_TI, t1933_ITIs, NULL, &EmptyCustomAttributesCache, &t1933_TI, &t1933_0_0_0, &t1933_1_0_0, NULL, &t1933_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1914_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ICanvasElement>
extern MethodInfo m24152_MI;
static PropertyInfo t1914____Current_PropertyInfo = 
{
	&t1914_TI, "Current", &m24152_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1914_PIs[] =
{
	&t1914____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1914_TI;
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24152_MI = 
{
	"get_Current", NULL, &t1914_TI, &t135_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1914_MIs[] =
{
	&m24152_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t1914_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1914_0_0_0;
extern Il2CppType t1914_1_0_0;
struct t1914;
extern TypeInfo t1914_TI;
extern Il2CppGenericClass t1914_GC;
TypeInfo t1914_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1914_MIs, t1914_PIs, NULL, NULL, NULL, NULL, NULL, &t1914_TI, t1914_ITIs, NULL, &EmptyCustomAttributesCache, &t1914_TI, &t1914_0_0_0, &t1914_1_0_0, NULL, &t1914_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1931.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1931_TI;
#include "t1931MD.h"

extern TypeInfo t1931_TI;
extern TypeInfo t135_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10588_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m18058_MI;
struct t14;
#define m18058(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m18058_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t14_0_0_1;
FieldInfo t1931_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1931_TI, offsetof(t1931, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1931_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1931_TI, offsetof(t1931, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1931_FIs[] =
{
	&t1931_f0_FieldInfo,
	&t1931_f1_FieldInfo,
	NULL
};
extern MethodInfo m10585_MI;
static PropertyInfo t1931____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1931_TI, "System.Collections.IEnumerator.Current", &m10585_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10588_MI;
static PropertyInfo t1931____Current_PropertyInfo = 
{
	&t1931_TI, "Current", &m10588_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1931_PIs[] =
{
	&t1931____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1931____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1931_m10584_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1931_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10584_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t1931_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1931_m10584_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1931_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10585_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t1931_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1931_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10586_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t1931_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1931_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10587_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t1931_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1931_TI;
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10588_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t1931_TI, &t135_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1931_MIs[] =
{
	&m10584_MI,
	&m10585_MI,
	&m10586_MI,
	&m10587_MI,
	&m10588_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10585_MI;
extern MethodInfo m10587_MI;
extern MethodInfo m10586_MI;
extern MethodInfo m10588_MI;
static MethodInfo* t1931_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10585_MI,
	&m10587_MI,
	&m10586_MI,
	&m10588_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1914_TI;
static TypeInfo* t1931_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t1914_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1914_TI;
static Il2CppInterfaceOffsetPair t1931_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t1914_TI, 7},
};
extern MethodInfo m10588_MI;
extern TypeInfo t135_TI;
extern MethodInfo m18058_MI;
static void* t1931_RGCTXData[3] = 
{
	&m10588_MI,
	&t135_TI,
	&m18058_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1931_0_0_0;
extern Il2CppType t1931_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1931_TI;
extern Il2CppGenericClass t1931_GC;
extern TypeInfo t14_TI;
TypeInfo t1931_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1931_MIs, t1931_PIs, t1931_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1931_TI, t1931_ITIs, t1931_VT, &EmptyCustomAttributesCache, &t1931_TI, &t1931_0_0_0, &t1931_1_0_0, t1931_IOs, &t1931_GC, NULL, NULL, NULL, t1931_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1931)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1913_TI;

#include "t1935.h"
#include "t1934.h"
#include "t1940.h"
extern TypeInfo t1913_TI;
extern TypeInfo t135_TI;
extern TypeInfo t16_TI;
extern TypeInfo t15_TI;
extern TypeInfo t303_TI;
extern TypeInfo t573_TI;
extern TypeInfo t1268_TI;
extern TypeInfo t1233_TI;
extern TypeInfo t1915_TI;
extern TypeInfo t1935_TI;
extern TypeInfo t17_TI;
extern TypeInfo t1932_TI;
extern TypeInfo t1933_TI;
extern TypeInfo t1914_TI;
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1934_TI;
extern TypeInfo t328_TI;
extern TypeInfo t134_TI;
extern TypeInfo t1940_TI;
#include "t590MD.h"
#include "t1934MD.h"
#include "t1935MD.h"
#include "t1940MD.h"
extern MethodInfo m10636_MI;
extern MethodInfo m10637_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m6453_MI;
extern MethodInfo m18069_MI;
extern MethodInfo m6454_MI;
extern MethodInfo m10622_MI;
extern MethodInfo m15_MI;
extern MethodInfo m10619_MI;
extern MethodInfo m3739_MI;
extern MethodInfo m10607_MI;
extern MethodInfo m10614_MI;
extern MethodInfo m10620_MI;
extern MethodInfo m10623_MI;
extern MethodInfo m10625_MI;
extern MethodInfo m10608_MI;
extern MethodInfo m10633_MI;
extern MethodInfo m6892_MI;
extern MethodInfo m10634_MI;
extern MethodInfo m24144_MI;
extern MethodInfo m24149_MI;
extern MethodInfo m24151_MI;
extern MethodInfo m24152_MI;
extern MethodInfo m7290_MI;
extern MethodInfo m42_MI;
extern MethodInfo m10624_MI;
extern MethodInfo m10609_MI;
extern MethodInfo m10610_MI;
extern MethodInfo m10644_MI;
extern MethodInfo m3735_MI;
extern MethodInfo m18071_MI;
extern MethodInfo m10617_MI;
extern MethodInfo m10618_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m10718_MI;
extern MethodInfo m10638_MI;
extern MethodInfo m10621_MI;
extern MethodInfo m10627_MI;
extern MethodInfo m3751_MI;
extern MethodInfo m10724_MI;
extern MethodInfo m18073_MI;
extern MethodInfo m18081_MI;
extern MethodInfo m3738_MI;
struct t14;
struct t14;
 void m16862_gshared (t4 * __this, t305** p0, int32_t p1, MethodInfo* method);
#define m16862(__this, p0, p1, method) (void)m16862_gshared((t4 *)__this, (t305**)p0, (int32_t)p1, method)
#define m18069(__this, p0, p1, method) (void)m16862_gshared((t4 *)__this, (t305**)p0, (int32_t)p1, method)
extern MethodInfo m18069_MI;
struct t14;
#include "t1938.h"
struct t14;
 int32_t m7690_gshared (t4 * __this, t305* p0, t4 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m7690(__this, p0, p1, p2, p3, method) (int32_t)m7690_gshared((t4 *)__this, (t305*)p0, (t4 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m18071(__this, p0, p1, p2, p3, method) (int32_t)m7690_gshared((t4 *)__this, (t305*)p0, (t4 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m18071_MI;
struct t14;
struct t14;
 void m16931_gshared (t4 * __this, t305* p0, int32_t p1, int32_t p2, t4* p3, MethodInfo* method);
#define m16931(__this, p0, p1, p2, p3, method) (void)m16931_gshared((t4 *)__this, (t305*)p0, (int32_t)p1, (int32_t)p2, (t4*)p3, method)
#define m18073(__this, p0, p1, p2, p3, method) (void)m16931_gshared((t4 *)__this, (t305*)p0, (int32_t)p1, (int32_t)p2, (t4*)p3, method)
extern MethodInfo m18073_MI;
struct t14;
struct t14;
 void m17082_gshared (t4 * __this, t305* p0, int32_t p1, t1607 * p2, MethodInfo* method);
#define m17082(__this, p0, p1, p2, method) (void)m17082_gshared((t4 *)__this, (t305*)p0, (int32_t)p1, (t1607 *)p2, method)
#define m18081(__this, p0, p1, p2, method) (void)m17082_gshared((t4 *)__this, (t305*)p0, (int32_t)p1, (t1607 *)p2, method)
extern MethodInfo m18081_MI;


extern MethodInfo m10619_MI;
 t1935  m10619 (t1913 * __this, MethodInfo* method){
	{
		t1935  L_0 = {0};
		m10638(&L_0, __this, &m10638_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t16_0_0_32849;
FieldInfo t1913_f0_FieldInfo = 
{
	"DefaultCapacity", &t16_0_0_32849, &t1913_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1915_0_0_1;
FieldInfo t1913_f1_FieldInfo = 
{
	"_items", &t1915_0_0_1, &t1913_TI, offsetof(t1913, f1), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1913_f2_FieldInfo = 
{
	"_size", &t16_0_0_1, &t1913_TI, offsetof(t1913, f2), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1913_f3_FieldInfo = 
{
	"_version", &t16_0_0_1, &t1913_TI, offsetof(t1913, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1915_0_0_49;
FieldInfo t1913_f4_FieldInfo = 
{
	"EmptyArray", &t1915_0_0_49, &t1913_TI, offsetof(t1913_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1913_FIs[] =
{
	&t1913_f0_FieldInfo,
	&t1913_f1_FieldInfo,
	&t1913_f2_FieldInfo,
	&t1913_f3_FieldInfo,
	&t1913_f4_FieldInfo,
	NULL
};
static const int32_t t1913_f0_DefaultValueData = 4;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t1913_f0_DefaultValue = 
{
	&t1913_f0_FieldInfo, { (char*)&t1913_f0_DefaultValueData, &t16_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1913_FDVs[] = 
{
	&t1913_f0_DefaultValue,
	NULL
};
extern MethodInfo m10600_MI;
static PropertyInfo t1913____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1913_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10600_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10601_MI;
static PropertyInfo t1913____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1913_TI, "System.Collections.ICollection.IsSynchronized", &m10601_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10602_MI;
static PropertyInfo t1913____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1913_TI, "System.Collections.ICollection.SyncRoot", &m10602_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10603_MI;
static PropertyInfo t1913____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1913_TI, "System.Collections.IList.IsFixedSize", &m10603_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10604_MI;
static PropertyInfo t1913____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1913_TI, "System.Collections.IList.IsReadOnly", &m10604_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10605_MI;
extern MethodInfo m10606_MI;
static PropertyInfo t1913____System_Collections_IList_Item_PropertyInfo = 
{
	&t1913_TI, "System.Collections.IList.Item", &m10605_MI, &m10606_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10633_MI;
extern MethodInfo m10634_MI;
static PropertyInfo t1913____Capacity_PropertyInfo = 
{
	&t1913_TI, "Capacity", &m10633_MI, &m10634_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10635_MI;
static PropertyInfo t1913____Count_PropertyInfo = 
{
	&t1913_TI, "Count", &m10635_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10636_MI;
extern MethodInfo m10637_MI;
static PropertyInfo t1913____Item_PropertyInfo = 
{
	&t1913_TI, "Item", &m10636_MI, &m10637_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1913_PIs[] =
{
	&t1913____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1913____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1913____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1913____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1913____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1913____System_Collections_IList_Item_PropertyInfo,
	&t1913____Capacity_PropertyInfo,
	&t1913____Count_PropertyInfo,
	&t1913____Item_PropertyInfo,
	NULL
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10589_MI = 
{
	".ctor", (methodPointerType)&m7892_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1913_m10590_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10590_MI = 
{
	".ctor", (methodPointerType)&m7894_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1913_m10590_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10591_MI = 
{
	".cctor", (methodPointerType)&m7896_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t1914_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10592_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m7898_gshared, &t1913_TI, &t1914_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1913_m10593_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10593_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m7900_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1913_m10593_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10594_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m7902_gshared, &t1913_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1913_m10595_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10595_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m7904_gshared, &t1913_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1913_m10595_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1913_m10596_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10596_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m7906_gshared, &t1913_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1913_m10596_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1913_m10597_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10597_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m7908_gshared, &t1913_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1913_m10597_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1913_m10598_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10598_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m7910_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1913_m10598_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1913_m10599_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10599_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m7912_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1913_m10599_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10600_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m7914_gshared, &t1913_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10601_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m7916_gshared, &t1913_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10602_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m7918_gshared, &t1913_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10603_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m7920_gshared, &t1913_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10604_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m7922_gshared, &t1913_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1913_m10605_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10605_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m7924_gshared, &t1913_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t1913_m10605_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1913_m10606_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10606_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m7926_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1913_m10606_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1913_m10607_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10607_MI = 
{
	"Add", (methodPointerType)&m7927_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1913_m10607_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1913_m10608_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10608_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m7929_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1913_m10608_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1932_0_0_0;
static ParameterInfo t1913_m10609_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1932_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10609_MI = 
{
	"AddCollection", (methodPointerType)&m7931_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1913_m10609_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1933_0_0_0;
static ParameterInfo t1913_m10610_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t1933_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10610_MI = 
{
	"AddEnumerable", (methodPointerType)&m7933_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1913_m10610_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1933_0_0_0;
static ParameterInfo t1913_m10611_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1933_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10611_MI = 
{
	"AddRange", (methodPointerType)&m7935_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1913_m10611_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t1934_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10612_MI = 
{
	"AsReadOnly", (methodPointerType)&m7937_gshared, &t1913_TI, &t1934_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10613_MI = 
{
	"Clear", (methodPointerType)&m7939_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1913_m10614_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10614_MI = 
{
	"Contains", (methodPointerType)&m7941_gshared, &t1913_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1913_m10614_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1915_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1913_m10615_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1915_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10615_MI = 
{
	"CopyTo", (methodPointerType)&m7943_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1913_m10615_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t1913_m10616_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10616_MI = 
{
	"Find", (methodPointerType)&m7945_gshared, &t1913_TI, &t135_0_0_0, RuntimeInvoker_t4_t4, t1913_m10616_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t1913_m10617_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10617_MI = 
{
	"CheckMatch", (methodPointerType)&m7947_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1913_m10617_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
extern Il2CppType t134_0_0_0;
static ParameterInfo t1913_m10618_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10618_MI = 
{
	"GetIndex", (methodPointerType)&m7949_gshared, &t1913_TI, &t16_0_0_0, RuntimeInvoker_t16_t16_t16_t4, t1913_m10618_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t1935_0_0_0;
extern void* RuntimeInvoker_t1935 (MethodInfo* method, void* obj, void** args);
MethodInfo m10619_MI = 
{
	"GetEnumerator", (methodPointerType)&m10619, &t1913_TI, &t1935_0_0_0, RuntimeInvoker_t1935, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1913_m10620_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10620_MI = 
{
	"IndexOf", (methodPointerType)&m7952_gshared, &t1913_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1913_m10620_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1913_m10621_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10621_MI = 
{
	"Shift", (methodPointerType)&m7954_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t1913_m10621_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1913_m10622_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10622_MI = 
{
	"CheckIndex", (methodPointerType)&m7956_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1913_m10622_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t1913_m10623_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10623_MI = 
{
	"Insert", (methodPointerType)&m7958_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1913_m10623_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1933_0_0_0;
static ParameterInfo t1913_m10624_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1933_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10624_MI = 
{
	"CheckCollection", (methodPointerType)&m7960_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1913_m10624_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1913_m10625_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10625_MI = 
{
	"Remove", (methodPointerType)&m7962_gshared, &t1913_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1913_m10625_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t134_0_0_0;
static ParameterInfo t1913_m10626_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10626_MI = 
{
	"RemoveAll", (methodPointerType)&m7964_gshared, &t1913_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1913_m10626_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1913_m10627_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10627_MI = 
{
	"RemoveAt", (methodPointerType)&m7966_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1913_m10627_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10628_MI = 
{
	"Reverse", (methodPointerType)&m7968_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10629_MI = 
{
	"Sort", (methodPointerType)&m7970_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t133_0_0_0;
static ParameterInfo t1913_m10630_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t133_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10630_MI = 
{
	"Sort", (methodPointerType)&m7972_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1913_m10630_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t1915_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10631_MI = 
{
	"ToArray", (methodPointerType)&m7974_gshared, &t1913_TI, &t1915_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10632_MI = 
{
	"TrimExcess", (methodPointerType)&m7976_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10633_MI = 
{
	"get_Capacity", (methodPointerType)&m7978_gshared, &t1913_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1913_m10634_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10634_MI = 
{
	"set_Capacity", (methodPointerType)&m7980_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1913_m10634_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1913_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10635_MI = 
{
	"get_Count", (methodPointerType)&m7982_gshared, &t1913_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1913_m10636_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10636_MI = 
{
	"get_Item", (methodPointerType)&m7984_gshared, &t1913_TI, &t135_0_0_0, RuntimeInvoker_t4_t16, t1913_m10636_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t1913_m10637_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10637_MI = 
{
	"set_Item", (methodPointerType)&m7986_gshared, &t1913_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1913_m10637_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1913_MIs[] =
{
	&m10589_MI,
	&m10590_MI,
	&m10591_MI,
	&m10592_MI,
	&m10593_MI,
	&m10594_MI,
	&m10595_MI,
	&m10596_MI,
	&m10597_MI,
	&m10598_MI,
	&m10599_MI,
	&m10600_MI,
	&m10601_MI,
	&m10602_MI,
	&m10603_MI,
	&m10604_MI,
	&m10605_MI,
	&m10606_MI,
	&m10607_MI,
	&m10608_MI,
	&m10609_MI,
	&m10610_MI,
	&m10611_MI,
	&m10612_MI,
	&m10613_MI,
	&m10614_MI,
	&m10615_MI,
	&m10616_MI,
	&m10617_MI,
	&m10618_MI,
	&m10619_MI,
	&m10620_MI,
	&m10621_MI,
	&m10622_MI,
	&m10623_MI,
	&m10624_MI,
	&m10625_MI,
	&m10626_MI,
	&m10627_MI,
	&m10628_MI,
	&m10629_MI,
	&m10630_MI,
	&m10631_MI,
	&m10632_MI,
	&m10633_MI,
	&m10634_MI,
	&m10635_MI,
	&m10636_MI,
	&m10637_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10594_MI;
extern MethodInfo m10635_MI;
extern MethodInfo m10601_MI;
extern MethodInfo m10602_MI;
extern MethodInfo m10593_MI;
extern MethodInfo m10603_MI;
extern MethodInfo m10604_MI;
extern MethodInfo m10605_MI;
extern MethodInfo m10606_MI;
extern MethodInfo m10595_MI;
extern MethodInfo m10613_MI;
extern MethodInfo m10596_MI;
extern MethodInfo m10597_MI;
extern MethodInfo m10598_MI;
extern MethodInfo m10599_MI;
extern MethodInfo m10627_MI;
extern MethodInfo m10635_MI;
extern MethodInfo m10600_MI;
extern MethodInfo m10607_MI;
extern MethodInfo m10613_MI;
extern MethodInfo m10614_MI;
extern MethodInfo m10615_MI;
extern MethodInfo m10625_MI;
extern MethodInfo m10592_MI;
extern MethodInfo m10620_MI;
extern MethodInfo m10623_MI;
extern MethodInfo m10627_MI;
extern MethodInfo m10636_MI;
extern MethodInfo m10637_MI;
static MethodInfo* t1913_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10594_MI,
	&m10635_MI,
	&m10601_MI,
	&m10602_MI,
	&m10593_MI,
	&m10603_MI,
	&m10604_MI,
	&m10605_MI,
	&m10606_MI,
	&m10595_MI,
	&m10613_MI,
	&m10596_MI,
	&m10597_MI,
	&m10598_MI,
	&m10599_MI,
	&m10627_MI,
	&m10635_MI,
	&m10600_MI,
	&m10607_MI,
	&m10613_MI,
	&m10614_MI,
	&m10615_MI,
	&m10625_MI,
	&m10592_MI,
	&m10620_MI,
	&m10623_MI,
	&m10627_MI,
	&m10636_MI,
	&m10637_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t1932_TI;
extern TypeInfo t1933_TI;
extern TypeInfo t1936_TI;
static TypeInfo* t1913_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1014_TI,
	&t1932_TI,
	&t1933_TI,
	&t1936_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t1932_TI;
extern TypeInfo t1933_TI;
extern TypeInfo t1936_TI;
static Il2CppInterfaceOffsetPair t1913_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1014_TI, 9},
	{ &t1932_TI, 20},
	{ &t1933_TI, 27},
	{ &t1936_TI, 28},
};
extern TypeInfo t1913_TI;
extern TypeInfo t1915_TI;
extern MethodInfo m10619_MI;
extern TypeInfo t1935_TI;
extern TypeInfo t135_TI;
extern MethodInfo m10607_MI;
extern MethodInfo m10614_MI;
extern MethodInfo m10620_MI;
extern MethodInfo m10622_MI;
extern MethodInfo m10623_MI;
extern MethodInfo m10625_MI;
extern MethodInfo m10636_MI;
extern MethodInfo m10637_MI;
extern MethodInfo m10608_MI;
extern MethodInfo m10633_MI;
extern MethodInfo m10634_MI;
extern MethodInfo m24144_MI;
extern MethodInfo m24149_MI;
extern MethodInfo m24151_MI;
extern MethodInfo m24152_MI;
extern MethodInfo m10624_MI;
extern TypeInfo t1932_TI;
extern MethodInfo m10609_MI;
extern MethodInfo m10610_MI;
extern TypeInfo t1934_TI;
extern MethodInfo m10644_MI;
extern MethodInfo m18071_MI;
extern MethodInfo m10617_MI;
extern MethodInfo m10618_MI;
extern MethodInfo m10718_MI;
extern MethodInfo m10638_MI;
extern MethodInfo m10621_MI;
extern MethodInfo m10627_MI;
extern MethodInfo m10724_MI;
extern MethodInfo m18073_MI;
extern MethodInfo m18081_MI;
extern MethodInfo m18069_MI;
static void* t1913_RGCTXData[37] = 
{
	&t1913_TI,
	&t1915_TI,
	&m10619_MI,
	&t1935_TI,
	&t135_TI,
	&m10607_MI,
	&m10614_MI,
	&m10620_MI,
	&m10622_MI,
	&m10623_MI,
	&m10625_MI,
	&m10636_MI,
	&m10637_MI,
	&m10608_MI,
	&m10633_MI,
	&m10634_MI,
	&m24144_MI,
	&m24149_MI,
	&m24151_MI,
	&m24152_MI,
	&m10624_MI,
	&t1932_TI,
	&m10609_MI,
	&m10610_MI,
	&t1934_TI,
	&m10644_MI,
	&m18071_MI,
	&m10617_MI,
	&m10618_MI,
	&m10718_MI,
	&m10638_MI,
	&m10621_MI,
	&m10627_MI,
	&m10724_MI,
	&m18073_MI,
	&m18081_MI,
	&m18069_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1913_0_0_0;
extern Il2CppType t1913_1_0_0;
extern TypeInfo t4_TI;
struct t1913;
extern TypeInfo t1913_TI;
extern Il2CppGenericClass t1913_GC;
extern CustomAttributesCache t839__CustomAttributeCache;
TypeInfo t1913_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t1913_MIs, t1913_PIs, t1913_FIs, NULL, &t4_TI, NULL, NULL, &t1913_TI, t1913_ITIs, t1913_VT, &t839__CustomAttributeCache, &t1913_TI, &t1913_0_0_0, &t1913_1_0_0, t1913_IOs, &t1913_GC, NULL, t1913_FDVs, NULL, t1913_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1913), 0, -1, sizeof(t1913_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1935_TI;

extern TypeInfo t1935_TI;
extern TypeInfo t1269_TI;
extern TypeInfo t135_TI;
extern TypeInfo t1913_TI;
extern TypeInfo t290_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1286_TI;
extern MethodInfo m10641_MI;
extern MethodInfo m6886_MI;
extern MethodInfo m1401_MI;
extern MethodInfo m2975_MI;
extern MethodInfo m7091_MI;
extern MethodInfo m6887_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>
extern Il2CppType t1913_0_0_1;
FieldInfo t1935_f0_FieldInfo = 
{
	"l", &t1913_0_0_1, &t1935_TI, offsetof(t1935, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1935_f1_FieldInfo = 
{
	"next", &t16_0_0_1, &t1935_TI, offsetof(t1935, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1935_f2_FieldInfo = 
{
	"ver", &t16_0_0_1, &t1935_TI, offsetof(t1935, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t135_0_0_1;
FieldInfo t1935_f3_FieldInfo = 
{
	"current", &t135_0_0_1, &t1935_TI, offsetof(t1935, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1935_FIs[] =
{
	&t1935_f0_FieldInfo,
	&t1935_f1_FieldInfo,
	&t1935_f2_FieldInfo,
	&t1935_f3_FieldInfo,
	NULL
};
extern MethodInfo m10639_MI;
static PropertyInfo t1935____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1935_TI, "System.Collections.IEnumerator.Current", &m10639_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10643_MI;
static PropertyInfo t1935____Current_PropertyInfo = 
{
	&t1935_TI, "Current", &m10643_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1935_PIs[] =
{
	&t1935____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1935____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1913_0_0_0;
static ParameterInfo t1935_m10638_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t1913_0_0_0},
};
extern TypeInfo t1935_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10638_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t1935_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1935_m10638_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10639_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7989_gshared, &t1935_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10640_MI = 
{
	"Dispose", (methodPointerType)&m7990_gshared, &t1935_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10641_MI = 
{
	"VerifyState", (methodPointerType)&m7991_gshared, &t1935_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10642_MI = 
{
	"MoveNext", (methodPointerType)&m7992_gshared, &t1935_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1935_TI;
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10643_MI = 
{
	"get_Current", (methodPointerType)&m7993_gshared, &t1935_TI, &t135_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1935_MIs[] =
{
	&m10638_MI,
	&m10639_MI,
	&m10640_MI,
	&m10641_MI,
	&m10642_MI,
	&m10643_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10639_MI;
extern MethodInfo m10642_MI;
extern MethodInfo m10640_MI;
extern MethodInfo m10643_MI;
static MethodInfo* t1935_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10639_MI,
	&m10642_MI,
	&m10640_MI,
	&m10643_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1914_TI;
static TypeInfo* t1935_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t1914_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1914_TI;
static Il2CppInterfaceOffsetPair t1935_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t1914_TI, 7},
};
extern MethodInfo m10641_MI;
extern TypeInfo t135_TI;
extern TypeInfo t1935_TI;
static void* t1935_RGCTXData[3] = 
{
	&m10641_MI,
	&t135_TI,
	&t1935_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1935_0_0_0;
extern Il2CppType t1935_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1935_TI;
extern Il2CppGenericClass t1935_GC;
extern TypeInfo t839_TI;
TypeInfo t1935_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1935_MIs, t1935_PIs, t1935_FIs, NULL, &t95_TI, NULL, &t839_TI, &t1935_TI, t1935_ITIs, t1935_VT, &EmptyCustomAttributesCache, &t1935_TI, &t1935_0_0_0, &t1935_1_0_0, t1935_IOs, &t1935_GC, NULL, NULL, NULL, t1935_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1935)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1934_TI;

extern TypeInfo t1934_TI;
extern TypeInfo t135_TI;
extern TypeInfo t16_TI;
extern TypeInfo t335_TI;
extern TypeInfo t1936_TI;
extern TypeInfo t1932_TI;
extern TypeInfo t328_TI;
extern TypeInfo t640_TI;
extern TypeInfo t15_TI;
extern TypeInfo t14_TI;
extern TypeInfo t591_TI;
extern TypeInfo t123_TI;
extern TypeInfo t17_TI;
extern TypeInfo t1915_TI;
extern TypeInfo t1933_TI;
extern TypeInfo t1914_TI;
#include "t1937MD.h"
extern MethodInfo m10673_MI;
extern MethodInfo m1489_MI;
extern MethodInfo m24139_MI;
extern MethodInfo m24144_MI;
extern MethodInfo m15_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m7382_MI;
extern MethodInfo m7291_MI;
extern MethodInfo m10705_MI;
extern MethodInfo m24148_MI;
extern MethodInfo m24141_MI;
extern MethodInfo m24149_MI;
extern MethodInfo m24151_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t1936_0_0_1;
FieldInfo t1934_f0_FieldInfo = 
{
	"list", &t1936_0_0_1, &t1934_TI, offsetof(t1934, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1934_FIs[] =
{
	&t1934_f0_FieldInfo,
	NULL
};
extern MethodInfo m10650_MI;
extern MethodInfo m10651_MI;
static PropertyInfo t1934____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t1934_TI, "System.Collections.Generic.IList<T>.Item", &m10650_MI, &m10651_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10652_MI;
static PropertyInfo t1934____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1934_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10652_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10662_MI;
static PropertyInfo t1934____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1934_TI, "System.Collections.ICollection.IsSynchronized", &m10662_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10663_MI;
static PropertyInfo t1934____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1934_TI, "System.Collections.ICollection.SyncRoot", &m10663_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10664_MI;
static PropertyInfo t1934____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1934_TI, "System.Collections.IList.IsFixedSize", &m10664_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10665_MI;
static PropertyInfo t1934____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1934_TI, "System.Collections.IList.IsReadOnly", &m10665_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10666_MI;
extern MethodInfo m10667_MI;
static PropertyInfo t1934____System_Collections_IList_Item_PropertyInfo = 
{
	&t1934_TI, "System.Collections.IList.Item", &m10666_MI, &m10667_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10672_MI;
static PropertyInfo t1934____Count_PropertyInfo = 
{
	&t1934_TI, "Count", &m10672_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10673_MI;
static PropertyInfo t1934____Item_PropertyInfo = 
{
	&t1934_TI, "Item", &m10673_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1934_PIs[] =
{
	&t1934____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t1934____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1934____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1934____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1934____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1934____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1934____System_Collections_IList_Item_PropertyInfo,
	&t1934____Count_PropertyInfo,
	&t1934____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1936_0_0_0;
static ParameterInfo t1934_m10644_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1936_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10644_MI = 
{
	".ctor", (methodPointerType)&m7994_gshared, &t1934_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1934_m10644_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1934_m10645_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10645_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m7995_gshared, &t1934_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1934_m10645_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1934_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10646_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m7996_gshared, &t1934_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t1934_m10647_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10647_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m7997_gshared, &t1934_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1934_m10647_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1934_m10648_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10648_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m7998_gshared, &t1934_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1934_m10648_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1934_m10649_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10649_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m7999_gshared, &t1934_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1934_m10649_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1934_m10650_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10650_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8000_gshared, &t1934_TI, &t135_0_0_0, RuntimeInvoker_t4_t16, t1934_m10650_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t1934_m10651_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10651_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8001_gshared, &t1934_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1934_m10651_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1934_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10652_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8002_gshared, &t1934_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1934_m10653_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10653_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8003_gshared, &t1934_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1934_m10653_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1934_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10654_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8004_gshared, &t1934_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1934_m10655_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10655_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8005_gshared, &t1934_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1934_m10655_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1934_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10656_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8006_gshared, &t1934_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1934_m10657_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10657_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8007_gshared, &t1934_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1934_m10657_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1934_m10658_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10658_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8008_gshared, &t1934_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1934_m10658_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1934_m10659_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10659_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8009_gshared, &t1934_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1934_m10659_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1934_m10660_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10660_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8010_gshared, &t1934_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1934_m10660_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1934_m10661_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10661_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8011_gshared, &t1934_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1934_m10661_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1934_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10662_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8012_gshared, &t1934_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1934_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10663_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8013_gshared, &t1934_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1934_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10664_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8014_gshared, &t1934_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1934_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10665_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8015_gshared, &t1934_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1934_m10666_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10666_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8016_gshared, &t1934_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t1934_m10666_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1934_m10667_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10667_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8017_gshared, &t1934_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1934_m10667_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1934_m10668_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10668_MI = 
{
	"Contains", (methodPointerType)&m8018_gshared, &t1934_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1934_m10668_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1915_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1934_m10669_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1915_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10669_MI = 
{
	"CopyTo", (methodPointerType)&m8019_gshared, &t1934_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1934_m10669_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1934_TI;
extern Il2CppType t1914_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10670_MI = 
{
	"GetEnumerator", (methodPointerType)&m8020_gshared, &t1934_TI, &t1914_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1934_m10671_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10671_MI = 
{
	"IndexOf", (methodPointerType)&m8021_gshared, &t1934_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1934_m10671_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1934_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10672_MI = 
{
	"get_Count", (methodPointerType)&m8022_gshared, &t1934_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1934_m10673_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1934_TI;
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10673_MI = 
{
	"get_Item", (methodPointerType)&m8023_gshared, &t1934_TI, &t135_0_0_0, RuntimeInvoker_t4_t16, t1934_m10673_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1934_MIs[] =
{
	&m10644_MI,
	&m10645_MI,
	&m10646_MI,
	&m10647_MI,
	&m10648_MI,
	&m10649_MI,
	&m10650_MI,
	&m10651_MI,
	&m10652_MI,
	&m10653_MI,
	&m10654_MI,
	&m10655_MI,
	&m10656_MI,
	&m10657_MI,
	&m10658_MI,
	&m10659_MI,
	&m10660_MI,
	&m10661_MI,
	&m10662_MI,
	&m10663_MI,
	&m10664_MI,
	&m10665_MI,
	&m10666_MI,
	&m10667_MI,
	&m10668_MI,
	&m10669_MI,
	&m10670_MI,
	&m10671_MI,
	&m10672_MI,
	&m10673_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10654_MI;
extern MethodInfo m10672_MI;
extern MethodInfo m10662_MI;
extern MethodInfo m10663_MI;
extern MethodInfo m10653_MI;
extern MethodInfo m10664_MI;
extern MethodInfo m10665_MI;
extern MethodInfo m10666_MI;
extern MethodInfo m10667_MI;
extern MethodInfo m10655_MI;
extern MethodInfo m10656_MI;
extern MethodInfo m10657_MI;
extern MethodInfo m10658_MI;
extern MethodInfo m10659_MI;
extern MethodInfo m10660_MI;
extern MethodInfo m10661_MI;
extern MethodInfo m10672_MI;
extern MethodInfo m10652_MI;
extern MethodInfo m10645_MI;
extern MethodInfo m10646_MI;
extern MethodInfo m10668_MI;
extern MethodInfo m10669_MI;
extern MethodInfo m10648_MI;
extern MethodInfo m10671_MI;
extern MethodInfo m10647_MI;
extern MethodInfo m10649_MI;
extern MethodInfo m10650_MI;
extern MethodInfo m10651_MI;
extern MethodInfo m10670_MI;
extern MethodInfo m10673_MI;
static MethodInfo* t1934_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10654_MI,
	&m10672_MI,
	&m10662_MI,
	&m10663_MI,
	&m10653_MI,
	&m10664_MI,
	&m10665_MI,
	&m10666_MI,
	&m10667_MI,
	&m10655_MI,
	&m10656_MI,
	&m10657_MI,
	&m10658_MI,
	&m10659_MI,
	&m10660_MI,
	&m10661_MI,
	&m10672_MI,
	&m10652_MI,
	&m10645_MI,
	&m10646_MI,
	&m10668_MI,
	&m10669_MI,
	&m10648_MI,
	&m10671_MI,
	&m10647_MI,
	&m10649_MI,
	&m10650_MI,
	&m10651_MI,
	&m10670_MI,
	&m10673_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t1932_TI;
extern TypeInfo t1936_TI;
extern TypeInfo t1933_TI;
static TypeInfo* t1934_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1014_TI,
	&t1932_TI,
	&t1936_TI,
	&t1933_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t1932_TI;
extern TypeInfo t1936_TI;
extern TypeInfo t1933_TI;
static Il2CppInterfaceOffsetPair t1934_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1014_TI, 9},
	{ &t1932_TI, 20},
	{ &t1936_TI, 27},
	{ &t1933_TI, 32},
};
extern MethodInfo m10673_MI;
extern MethodInfo m10705_MI;
extern TypeInfo t135_TI;
extern MethodInfo m24148_MI;
extern MethodInfo m24141_MI;
extern MethodInfo m24139_MI;
extern MethodInfo m24149_MI;
extern MethodInfo m24151_MI;
extern MethodInfo m24144_MI;
static void* t1934_RGCTXData[9] = 
{
	&m10673_MI,
	&m10705_MI,
	&t135_TI,
	&m24148_MI,
	&m24141_MI,
	&m24139_MI,
	&m24149_MI,
	&m24151_MI,
	&m24144_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1934_0_0_0;
extern Il2CppType t1934_1_0_0;
extern TypeInfo t4_TI;
struct t1934;
extern TypeInfo t1934_TI;
extern Il2CppGenericClass t1934_GC;
extern CustomAttributesCache t841__CustomAttributeCache;
TypeInfo t1934_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t1934_MIs, t1934_PIs, t1934_FIs, NULL, &t4_TI, NULL, NULL, &t1934_TI, t1934_ITIs, t1934_VT, &t841__CustomAttributeCache, &t1934_TI, &t1934_0_0_0, &t1934_1_0_0, t1934_IOs, &t1934_GC, NULL, NULL, NULL, t1934_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1934), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t1937.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1937_TI;

extern TypeInfo t1937_TI;
extern TypeInfo t1932_TI;
extern TypeInfo t17_TI;
extern TypeInfo t1936_TI;
extern TypeInfo t135_TI;
extern TypeInfo t16_TI;
extern TypeInfo t15_TI;
extern TypeInfo t1913_TI;
extern TypeInfo t640_TI;
extern TypeInfo t4_TI;
extern TypeInfo t14_TI;
extern TypeInfo t1933_TI;
extern TypeInfo t1914_TI;
extern TypeInfo t1915_TI;
extern TypeInfo t290_TI;
extern TypeInfo t303_TI;
extern TypeInfo t335_TI;
extern TypeInfo t1014_TI;
extern Il2CppType t135_0_0_0;
extern MethodInfo m24145_MI;
extern MethodInfo m10708_MI;
extern MethodInfo m10709_MI;
extern MethodInfo m24139_MI;
extern MethodInfo m10706_MI;
extern MethodInfo m10704_MI;
extern MethodInfo m24144_MI;
extern MethodInfo m15_MI;
extern MethodInfo m10589_MI;
extern MethodInfo m7381_MI;
extern MethodInfo m7382_MI;
extern MethodInfo m24151_MI;
extern MethodInfo m10697_MI;
extern MethodInfo m10705_MI;
extern MethodInfo m24148_MI;
extern MethodInfo m24141_MI;
extern MethodInfo m10707_MI;
extern MethodInfo m10695_MI;
extern MethodInfo m10700_MI;
extern MethodInfo m10691_MI;
extern MethodInfo m24147_MI;
extern MethodInfo m24149_MI;
extern MethodInfo m24142_MI;
extern MethodInfo m24143_MI;
extern MethodInfo m24140_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m3794_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m1489_MI;
extern MethodInfo m7380_MI;
extern MethodInfo m7383_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t1936_0_0_1;
FieldInfo t1937_f0_FieldInfo = 
{
	"list", &t1936_0_0_1, &t1937_TI, offsetof(t1937, f0), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t1937_f1_FieldInfo = 
{
	"syncRoot", &t4_0_0_1, &t1937_TI, offsetof(t1937, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1937_FIs[] =
{
	&t1937_f0_FieldInfo,
	&t1937_f1_FieldInfo,
	NULL
};
extern MethodInfo m10675_MI;
static PropertyInfo t1937____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1937_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10675_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10683_MI;
static PropertyInfo t1937____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1937_TI, "System.Collections.ICollection.IsSynchronized", &m10683_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10684_MI;
static PropertyInfo t1937____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1937_TI, "System.Collections.ICollection.SyncRoot", &m10684_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10685_MI;
static PropertyInfo t1937____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1937_TI, "System.Collections.IList.IsFixedSize", &m10685_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10686_MI;
static PropertyInfo t1937____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1937_TI, "System.Collections.IList.IsReadOnly", &m10686_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10687_MI;
extern MethodInfo m10688_MI;
static PropertyInfo t1937____System_Collections_IList_Item_PropertyInfo = 
{
	&t1937_TI, "System.Collections.IList.Item", &m10687_MI, &m10688_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10701_MI;
static PropertyInfo t1937____Count_PropertyInfo = 
{
	&t1937_TI, "Count", &m10701_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10702_MI;
extern MethodInfo m10703_MI;
static PropertyInfo t1937____Item_PropertyInfo = 
{
	&t1937_TI, "Item", &m10702_MI, &m10703_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1937_PIs[] =
{
	&t1937____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1937____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1937____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1937____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1937____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1937____System_Collections_IList_Item_PropertyInfo,
	&t1937____Count_PropertyInfo,
	&t1937____Item_PropertyInfo,
	NULL
};
extern TypeInfo t1937_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10674_MI = 
{
	".ctor", (methodPointerType)&m8024_gshared, &t1937_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1937_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10675_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8025_gshared, &t1937_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1937_m10676_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10676_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8026_gshared, &t1937_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1937_m10676_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1937_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10677_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8027_gshared, &t1937_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1937_m10678_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10678_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8028_gshared, &t1937_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1937_m10678_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1937_m10679_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10679_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8029_gshared, &t1937_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1937_m10679_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1937_m10680_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10680_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8030_gshared, &t1937_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1937_m10680_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1937_m10681_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10681_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8031_gshared, &t1937_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1937_m10681_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1937_m10682_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10682_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8032_gshared, &t1937_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1937_m10682_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1937_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10683_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8033_gshared, &t1937_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1937_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10684_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8034_gshared, &t1937_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1937_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10685_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8035_gshared, &t1937_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1937_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10686_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8036_gshared, &t1937_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1937_m10687_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10687_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8037_gshared, &t1937_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t1937_m10687_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1937_m10688_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10688_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8038_gshared, &t1937_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1937_m10688_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1937_m10689_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10689_MI = 
{
	"Add", (methodPointerType)&m8039_gshared, &t1937_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1937_m10689_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1937_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10690_MI = 
{
	"Clear", (methodPointerType)&m8040_gshared, &t1937_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1937_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10691_MI = 
{
	"ClearItems", (methodPointerType)&m8041_gshared, &t1937_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1937_m10692_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10692_MI = 
{
	"Contains", (methodPointerType)&m8042_gshared, &t1937_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1937_m10692_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1915_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1937_m10693_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1915_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10693_MI = 
{
	"CopyTo", (methodPointerType)&m8043_gshared, &t1937_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1937_m10693_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1937_TI;
extern Il2CppType t1914_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10694_MI = 
{
	"GetEnumerator", (methodPointerType)&m8044_gshared, &t1937_TI, &t1914_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1937_m10695_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10695_MI = 
{
	"IndexOf", (methodPointerType)&m8045_gshared, &t1937_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1937_m10695_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t1937_m10696_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10696_MI = 
{
	"Insert", (methodPointerType)&m8046_gshared, &t1937_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1937_m10696_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t1937_m10697_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10697_MI = 
{
	"InsertItem", (methodPointerType)&m8047_gshared, &t1937_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1937_m10697_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1937_m10698_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10698_MI = 
{
	"Remove", (methodPointerType)&m8048_gshared, &t1937_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1937_m10698_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1937_m10699_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10699_MI = 
{
	"RemoveAt", (methodPointerType)&m8049_gshared, &t1937_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1937_m10699_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1937_m10700_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10700_MI = 
{
	"RemoveItem", (methodPointerType)&m8050_gshared, &t1937_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1937_m10700_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1937_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10701_MI = 
{
	"get_Count", (methodPointerType)&m8051_gshared, &t1937_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1937_m10702_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10702_MI = 
{
	"get_Item", (methodPointerType)&m8052_gshared, &t1937_TI, &t135_0_0_0, RuntimeInvoker_t4_t16, t1937_m10702_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t1937_m10703_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10703_MI = 
{
	"set_Item", (methodPointerType)&m8053_gshared, &t1937_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1937_m10703_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t1937_m10704_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10704_MI = 
{
	"SetItem", (methodPointerType)&m8054_gshared, &t1937_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1937_m10704_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1937_m10705_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10705_MI = 
{
	"IsValidItem", (methodPointerType)&m8055_gshared, &t1937_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1937_m10705_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1937_m10706_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10706_MI = 
{
	"ConvertItem", (methodPointerType)&m8056_gshared, &t1937_TI, &t135_0_0_0, RuntimeInvoker_t4_t4, t1937_m10706_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1936_0_0_0;
static ParameterInfo t1937_m10707_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1936_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10707_MI = 
{
	"CheckWritable", (methodPointerType)&m8057_gshared, &t1937_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1937_m10707_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1936_0_0_0;
static ParameterInfo t1937_m10708_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1936_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10708_MI = 
{
	"IsSynchronized", (methodPointerType)&m8058_gshared, &t1937_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1937_m10708_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1936_0_0_0;
static ParameterInfo t1937_m10709_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1936_0_0_0},
};
extern TypeInfo t1937_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10709_MI = 
{
	"IsFixedSize", (methodPointerType)&m8059_gshared, &t1937_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1937_m10709_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1937_MIs[] =
{
	&m10674_MI,
	&m10675_MI,
	&m10676_MI,
	&m10677_MI,
	&m10678_MI,
	&m10679_MI,
	&m10680_MI,
	&m10681_MI,
	&m10682_MI,
	&m10683_MI,
	&m10684_MI,
	&m10685_MI,
	&m10686_MI,
	&m10687_MI,
	&m10688_MI,
	&m10689_MI,
	&m10690_MI,
	&m10691_MI,
	&m10692_MI,
	&m10693_MI,
	&m10694_MI,
	&m10695_MI,
	&m10696_MI,
	&m10697_MI,
	&m10698_MI,
	&m10699_MI,
	&m10700_MI,
	&m10701_MI,
	&m10702_MI,
	&m10703_MI,
	&m10704_MI,
	&m10705_MI,
	&m10706_MI,
	&m10707_MI,
	&m10708_MI,
	&m10709_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10677_MI;
extern MethodInfo m10701_MI;
extern MethodInfo m10683_MI;
extern MethodInfo m10684_MI;
extern MethodInfo m10676_MI;
extern MethodInfo m10685_MI;
extern MethodInfo m10686_MI;
extern MethodInfo m10687_MI;
extern MethodInfo m10688_MI;
extern MethodInfo m10678_MI;
extern MethodInfo m10690_MI;
extern MethodInfo m10679_MI;
extern MethodInfo m10680_MI;
extern MethodInfo m10681_MI;
extern MethodInfo m10682_MI;
extern MethodInfo m10699_MI;
extern MethodInfo m10701_MI;
extern MethodInfo m10675_MI;
extern MethodInfo m10689_MI;
extern MethodInfo m10690_MI;
extern MethodInfo m10692_MI;
extern MethodInfo m10693_MI;
extern MethodInfo m10698_MI;
extern MethodInfo m10695_MI;
extern MethodInfo m10696_MI;
extern MethodInfo m10699_MI;
extern MethodInfo m10702_MI;
extern MethodInfo m10703_MI;
extern MethodInfo m10694_MI;
extern MethodInfo m10691_MI;
extern MethodInfo m10697_MI;
extern MethodInfo m10700_MI;
extern MethodInfo m10704_MI;
static MethodInfo* t1937_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10677_MI,
	&m10701_MI,
	&m10683_MI,
	&m10684_MI,
	&m10676_MI,
	&m10685_MI,
	&m10686_MI,
	&m10687_MI,
	&m10688_MI,
	&m10678_MI,
	&m10690_MI,
	&m10679_MI,
	&m10680_MI,
	&m10681_MI,
	&m10682_MI,
	&m10699_MI,
	&m10701_MI,
	&m10675_MI,
	&m10689_MI,
	&m10690_MI,
	&m10692_MI,
	&m10693_MI,
	&m10698_MI,
	&m10695_MI,
	&m10696_MI,
	&m10699_MI,
	&m10702_MI,
	&m10703_MI,
	&m10694_MI,
	&m10691_MI,
	&m10697_MI,
	&m10700_MI,
	&m10704_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t1932_TI;
extern TypeInfo t1936_TI;
extern TypeInfo t1933_TI;
static TypeInfo* t1937_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1014_TI,
	&t1932_TI,
	&t1936_TI,
	&t1933_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t1932_TI;
extern TypeInfo t1936_TI;
extern TypeInfo t1933_TI;
static Il2CppInterfaceOffsetPair t1937_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1014_TI, 9},
	{ &t1932_TI, 20},
	{ &t1936_TI, 27},
	{ &t1933_TI, 32},
};
extern TypeInfo t1913_TI;
extern MethodInfo m10589_MI;
extern MethodInfo m24145_MI;
extern MethodInfo m24151_MI;
extern MethodInfo m24144_MI;
extern MethodInfo m10706_MI;
extern MethodInfo m10697_MI;
extern MethodInfo m10705_MI;
extern TypeInfo t135_TI;
extern MethodInfo m24148_MI;
extern MethodInfo m24141_MI;
extern MethodInfo m10707_MI;
extern MethodInfo m10695_MI;
extern MethodInfo m10700_MI;
extern MethodInfo m10708_MI;
extern MethodInfo m10709_MI;
extern MethodInfo m24139_MI;
extern MethodInfo m10704_MI;
extern MethodInfo m10691_MI;
extern MethodInfo m24147_MI;
extern MethodInfo m24149_MI;
extern MethodInfo m24142_MI;
extern MethodInfo m24143_MI;
extern MethodInfo m24140_MI;
extern Il2CppType t135_0_0_0;
static void* t1937_RGCTXData[25] = 
{
	&t1913_TI,
	&m10589_MI,
	&m24145_MI,
	&m24151_MI,
	&m24144_MI,
	&m10706_MI,
	&m10697_MI,
	&m10705_MI,
	&t135_TI,
	&m24148_MI,
	&m24141_MI,
	&m10707_MI,
	&m10695_MI,
	&m10700_MI,
	&m10708_MI,
	&m10709_MI,
	&m24139_MI,
	&m10704_MI,
	&m10691_MI,
	&m24147_MI,
	&m24149_MI,
	&m24142_MI,
	&m24143_MI,
	&m24140_MI,
	(void*)&t135_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1937_0_0_0;
extern Il2CppType t1937_1_0_0;
extern TypeInfo t4_TI;
struct t1937;
extern TypeInfo t1937_TI;
extern Il2CppGenericClass t1937_GC;
extern CustomAttributesCache t840__CustomAttributeCache;
TypeInfo t1937_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t1937_MIs, t1937_PIs, t1937_FIs, NULL, &t4_TI, NULL, NULL, &t1937_TI, t1937_ITIs, t1937_VT, &t840__CustomAttributeCache, &t1937_TI, &t1937_0_0_0, &t1937_1_0_0, t1937_IOs, &t1937_GC, NULL, NULL, NULL, t1937_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1937), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1938_TI;
#include "t1938MD.h"

#include "t836.h"
#include "t1939.h"
extern TypeInfo t1938_TI;
extern TypeInfo t5145_TI;
extern TypeInfo t290_TI;
extern TypeInfo t135_TI;
extern TypeInfo t17_TI;
extern TypeInfo t836_TI;
extern TypeInfo t525_TI;
extern TypeInfo t1939_TI;
extern TypeInfo t16_TI;
#include "t1222MD.h"
#include "t1939MD.h"
extern Il2CppType t5145_0_0_0;
extern Il2CppType t135_0_0_0;
extern Il2CppType t836_0_0_0;
extern MethodInfo m15_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2958_MI;
extern MethodInfo m2956_MI;
extern MethodInfo m6421_MI;
extern MethodInfo m10715_MI;
extern MethodInfo m24153_MI;
extern MethodInfo m18070_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t1938_0_0_49;
FieldInfo t1938_f0_FieldInfo = 
{
	"_default", &t1938_0_0_49, &t1938_TI, offsetof(t1938_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1938_FIs[] =
{
	&t1938_f0_FieldInfo,
	NULL
};
extern MethodInfo m10714_MI;
static PropertyInfo t1938____Default_PropertyInfo = 
{
	&t1938_TI, "Default", &m10714_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1938_PIs[] =
{
	&t1938____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1938_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10710_MI = 
{
	".ctor", (methodPointerType)&m8060_gshared, &t1938_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1938_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10711_MI = 
{
	".cctor", (methodPointerType)&m8061_gshared, &t1938_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1938_m10712_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1938_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10712_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8062_gshared, &t1938_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1938_m10712_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1938_m10713_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1938_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10713_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8063_gshared, &t1938_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1938_m10713_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1938_m24153_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1938_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24153_MI = 
{
	"GetHashCode", NULL, &t1938_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1938_m24153_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t1938_m18070_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1938_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m18070_MI = 
{
	"Equals", NULL, &t1938_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1938_m18070_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1938_TI;
extern Il2CppType t1938_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10714_MI = 
{
	"get_Default", (methodPointerType)&m8064_gshared, &t1938_TI, &t1938_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1938_MIs[] =
{
	&m10710_MI,
	&m10711_MI,
	&m10712_MI,
	&m10713_MI,
	&m24153_MI,
	&m18070_MI,
	&m10714_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m18070_MI;
extern MethodInfo m24153_MI;
extern MethodInfo m10713_MI;
extern MethodInfo m10712_MI;
static MethodInfo* t1938_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m18070_MI,
	&m24153_MI,
	&m10713_MI,
	&m10712_MI,
	NULL,
	NULL,
};
extern TypeInfo t1942_TI;
extern TypeInfo t859_TI;
static TypeInfo* t1938_ITIs[] = 
{
	&t1942_TI,
	&t859_TI,
};
extern TypeInfo t1942_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t1938_IOs[] = 
{
	{ &t1942_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppType t5145_0_0_0;
extern Il2CppType t135_0_0_0;
extern TypeInfo t1938_TI;
extern TypeInfo t1938_TI;
extern TypeInfo t1939_TI;
extern MethodInfo m10715_MI;
extern TypeInfo t135_TI;
extern MethodInfo m24153_MI;
extern MethodInfo m18070_MI;
static void* t1938_RGCTXData[9] = 
{
	(void*)&t5145_0_0_0,
	(void*)&t135_0_0_0,
	&t1938_TI,
	&t1938_TI,
	&t1939_TI,
	&m10715_MI,
	&t135_TI,
	&m24153_MI,
	&m18070_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1938_0_0_0;
extern Il2CppType t1938_1_0_0;
extern TypeInfo t4_TI;
struct t1938;
extern TypeInfo t1938_TI;
extern Il2CppGenericClass t1938_GC;
TypeInfo t1938_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t1938_MIs, t1938_PIs, t1938_FIs, NULL, &t4_TI, NULL, NULL, &t1938_TI, t1938_ITIs, t1938_VT, &EmptyCustomAttributesCache, &t1938_TI, &t1938_0_0_0, &t1938_1_0_0, t1938_IOs, &t1938_GC, NULL, NULL, NULL, t1938_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1938), 0, -1, sizeof(t1938_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1942_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t135_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t1942_m24154_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1942_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24154_MI = 
{
	"Equals", NULL, &t1942_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1942_m24154_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1942_m24155_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1942_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24155_MI = 
{
	"GetHashCode", NULL, &t1942_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1942_m24155_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1942_MIs[] =
{
	&m24154_MI,
	&m24155_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1942_0_0_0;
extern Il2CppType t1942_1_0_0;
struct t1942;
extern TypeInfo t1942_TI;
extern Il2CppGenericClass t1942_GC;
TypeInfo t1942_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t1942_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1942_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1942_TI, &t1942_0_0_0, &t1942_1_0_0, NULL, &t1942_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5145_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t135_0_0_0;
static ParameterInfo t5145_m24156_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t5145_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24156_MI = 
{
	"Equals", NULL, &t5145_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5145_m24156_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5145_MIs[] =
{
	&m24156_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5145_0_0_0;
extern Il2CppType t5145_1_0_0;
struct t5145;
extern TypeInfo t5145_TI;
extern Il2CppGenericClass t5145_GC;
TypeInfo t5145_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5145_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5145_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5145_TI, &t5145_0_0_0, &t5145_1_0_0, NULL, &t5145_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1939_TI;

extern TypeInfo t135_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern TypeInfo t17_TI;
extern MethodInfo m10710_MI;
extern MethodInfo m21_MI;
extern MethodInfo m19_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>
extern TypeInfo t1939_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10715_MI = 
{
	".ctor", (methodPointerType)&m8095_gshared, &t1939_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1939_m10716_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1939_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10716_MI = 
{
	"GetHashCode", (methodPointerType)&m8096_gshared, &t1939_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1939_m10716_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t1939_m10717_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1939_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10717_MI = 
{
	"Equals", (methodPointerType)&m8097_gshared, &t1939_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1939_m10717_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1939_MIs[] =
{
	&m10715_MI,
	&m10716_MI,
	&m10717_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10717_MI;
extern MethodInfo m10716_MI;
extern MethodInfo m10713_MI;
extern MethodInfo m10712_MI;
extern MethodInfo m10716_MI;
extern MethodInfo m10717_MI;
static MethodInfo* t1939_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10717_MI,
	&m10716_MI,
	&m10713_MI,
	&m10712_MI,
	&m10716_MI,
	&m10717_MI,
};
extern TypeInfo t1942_TI;
extern TypeInfo t859_TI;
static Il2CppInterfaceOffsetPair t1939_IOs[] = 
{
	{ &t1942_TI, 4},
	{ &t859_TI, 6},
};
extern Il2CppType t5145_0_0_0;
extern Il2CppType t135_0_0_0;
extern TypeInfo t1938_TI;
extern TypeInfo t1938_TI;
extern TypeInfo t1939_TI;
extern MethodInfo m10715_MI;
extern TypeInfo t135_TI;
extern MethodInfo m24153_MI;
extern MethodInfo m18070_MI;
extern MethodInfo m10710_MI;
extern TypeInfo t135_TI;
static void* t1939_RGCTXData[11] = 
{
	(void*)&t5145_0_0_0,
	(void*)&t135_0_0_0,
	&t1938_TI,
	&t1938_TI,
	&t1939_TI,
	&m10715_MI,
	&t135_TI,
	&m24153_MI,
	&m18070_MI,
	&m10710_MI,
	&t135_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1939_0_0_0;
extern Il2CppType t1939_1_0_0;
extern TypeInfo t1938_TI;
struct t1939;
extern TypeInfo t1939_TI;
extern Il2CppGenericClass t1939_GC;
extern TypeInfo t835_TI;
TypeInfo t1939_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1939_MIs, NULL, NULL, NULL, &t1938_TI, NULL, &t835_TI, &t1939_TI, NULL, t1939_VT, &EmptyCustomAttributesCache, &t1939_TI, &t1939_0_0_0, &t1939_1_0_0, t1939_IOs, &t1939_GC, NULL, NULL, NULL, t1939_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1939), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t134_TI;



// Metadata Definition System.Predicate`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t134_m1500_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m1500_MI = 
{
	".ctor", (methodPointerType)&m8098_gshared, &t134_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t134_m1500_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t134_m10718_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10718_MI = 
{
	"Invoke", (methodPointerType)&m8099_gshared, &t134_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t134_m10718_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t134_m10719_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10719_MI = 
{
	"BeginInvoke", (methodPointerType)&m8100_gshared, &t134_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t134_m10719_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t134_m10720_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10720_MI = 
{
	"EndInvoke", (methodPointerType)&m8101_gshared, &t134_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t134_m10720_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t134_MIs[] =
{
	&m1500_MI,
	&m10718_MI,
	&m10719_MI,
	&m10720_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m10718_MI;
extern MethodInfo m10719_MI;
extern MethodInfo m10720_MI;
static MethodInfo* t134_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m10718_MI,
	&m10719_MI,
	&m10720_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t134_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_1_0_0;
extern TypeInfo t189_TI;
struct t134;
extern TypeInfo t134_TI;
extern Il2CppGenericClass t134_GC;
TypeInfo t134_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t134_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t134_TI, NULL, t134_VT, &EmptyCustomAttributesCache, &t134_TI, &t134_0_0_0, &t134_1_0_0, t134_IOs, &t134_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t134), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1940_TI;

#include "t824.h"
#include "t1941.h"
extern TypeInfo t1940_TI;
extern TypeInfo t3367_TI;
extern TypeInfo t290_TI;
extern TypeInfo t135_TI;
extern TypeInfo t17_TI;
extern TypeInfo t824_TI;
extern TypeInfo t525_TI;
extern TypeInfo t1941_TI;
extern TypeInfo t16_TI;
extern TypeInfo t303_TI;
#include "t1941MD.h"
extern Il2CppType t3367_0_0_0;
extern Il2CppType t135_0_0_0;
extern Il2CppType t824_0_0_0;
extern MethodInfo m15_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m2958_MI;
extern MethodInfo m2956_MI;
extern MethodInfo m6421_MI;
extern MethodInfo m10725_MI;
extern MethodInfo m24157_MI;
extern MethodInfo m6443_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t1940_0_0_49;
FieldInfo t1940_f0_FieldInfo = 
{
	"_default", &t1940_0_0_49, &t1940_TI, offsetof(t1940_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1940_FIs[] =
{
	&t1940_f0_FieldInfo,
	NULL
};
extern MethodInfo m10724_MI;
static PropertyInfo t1940____Default_PropertyInfo = 
{
	&t1940_TI, "Default", &m10724_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1940_PIs[] =
{
	&t1940____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1940_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10721_MI = 
{
	".ctor", (methodPointerType)&m8102_gshared, &t1940_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1940_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10722_MI = 
{
	".cctor", (methodPointerType)&m8103_gshared, &t1940_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1940_m10723_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1940_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10723_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8104_gshared, &t1940_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t1940_m10723_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t1940_m24157_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1940_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24157_MI = 
{
	"Compare", NULL, &t1940_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t1940_m24157_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1940_TI;
extern Il2CppType t1940_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10724_MI = 
{
	"get_Default", (methodPointerType)&m8105_gshared, &t1940_TI, &t1940_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1940_MIs[] =
{
	&m10721_MI,
	&m10722_MI,
	&m10723_MI,
	&m24157_MI,
	&m10724_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m24157_MI;
extern MethodInfo m10723_MI;
static MethodInfo* t1940_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m24157_MI,
	&m10723_MI,
	NULL,
};
extern TypeInfo t3366_TI;
extern TypeInfo t716_TI;
static TypeInfo* t1940_ITIs[] = 
{
	&t3366_TI,
	&t716_TI,
};
extern TypeInfo t3366_TI;
extern TypeInfo t716_TI;
static Il2CppInterfaceOffsetPair t1940_IOs[] = 
{
	{ &t3366_TI, 4},
	{ &t716_TI, 5},
};
extern Il2CppType t3367_0_0_0;
extern Il2CppType t135_0_0_0;
extern TypeInfo t1940_TI;
extern TypeInfo t1940_TI;
extern TypeInfo t1941_TI;
extern MethodInfo m10725_MI;
extern TypeInfo t135_TI;
extern MethodInfo m24157_MI;
static void* t1940_RGCTXData[8] = 
{
	(void*)&t3367_0_0_0,
	(void*)&t135_0_0_0,
	&t1940_TI,
	&t1940_TI,
	&t1941_TI,
	&m10725_MI,
	&t135_TI,
	&m24157_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1940_0_0_0;
extern Il2CppType t1940_1_0_0;
extern TypeInfo t4_TI;
struct t1940;
extern TypeInfo t1940_TI;
extern Il2CppGenericClass t1940_GC;
TypeInfo t1940_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t1940_MIs, t1940_PIs, t1940_FIs, NULL, &t4_TI, NULL, NULL, &t1940_TI, t1940_ITIs, t1940_VT, &EmptyCustomAttributesCache, &t1940_TI, &t1940_0_0_0, &t1940_1_0_0, t1940_IOs, &t1940_GC, NULL, NULL, NULL, t1940_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1940), 0, -1, sizeof(t1940_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3366_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t135_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t3366_m18078_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t3366_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m18078_MI = 
{
	"Compare", NULL, &t3366_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t3366_m18078_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3366_MIs[] =
{
	&m18078_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3366_0_0_0;
extern Il2CppType t3366_1_0_0;
struct t3366;
extern TypeInfo t3366_TI;
extern Il2CppGenericClass t3366_GC;
TypeInfo t3366_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3366_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3366_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3366_TI, &t3366_0_0_0, &t3366_1_0_0, NULL, &t3366_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3367_TI;



// Metadata Definition System.IComparable`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t135_0_0_0;
static ParameterInfo t3367_m18079_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t3367_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m18079_MI = 
{
	"CompareTo", NULL, &t3367_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t3367_m18079_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3367_MIs[] =
{
	&m18079_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3367_0_0_0;
extern Il2CppType t3367_1_0_0;
struct t3367;
extern TypeInfo t3367_TI;
extern Il2CppGenericClass t3367_GC;
TypeInfo t3367_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3367_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3367_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3367_TI, &t3367_0_0_0, &t3367_1_0_0, NULL, &t3367_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1941_TI;

extern TypeInfo t135_TI;
extern TypeInfo t3367_TI;
extern TypeInfo t16_TI;
extern TypeInfo t285_TI;
extern TypeInfo t4_TI;
extern TypeInfo t303_TI;
extern MethodInfo m10721_MI;
extern MethodInfo m18079_MI;
extern MethodInfo m7286_MI;
extern MethodInfo m1917_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>
extern TypeInfo t1941_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10725_MI = 
{
	".ctor", (methodPointerType)&m8106_gshared, &t1941_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t1941_m10726_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1941_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10726_MI = 
{
	"Compare", (methodPointerType)&m8107_gshared, &t1941_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t1941_m10726_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1941_MIs[] =
{
	&m10725_MI,
	&m10726_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10726_MI;
extern MethodInfo m10723_MI;
extern MethodInfo m10726_MI;
static MethodInfo* t1941_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10726_MI,
	&m10723_MI,
	&m10726_MI,
};
extern TypeInfo t3366_TI;
extern TypeInfo t716_TI;
static Il2CppInterfaceOffsetPair t1941_IOs[] = 
{
	{ &t3366_TI, 4},
	{ &t716_TI, 5},
};
extern Il2CppType t3367_0_0_0;
extern Il2CppType t135_0_0_0;
extern TypeInfo t1940_TI;
extern TypeInfo t1940_TI;
extern TypeInfo t1941_TI;
extern MethodInfo m10725_MI;
extern TypeInfo t135_TI;
extern MethodInfo m24157_MI;
extern MethodInfo m10721_MI;
extern TypeInfo t135_TI;
extern TypeInfo t3367_TI;
extern MethodInfo m18079_MI;
static void* t1941_RGCTXData[12] = 
{
	(void*)&t3367_0_0_0,
	(void*)&t135_0_0_0,
	&t1940_TI,
	&t1940_TI,
	&t1941_TI,
	&m10725_MI,
	&t135_TI,
	&m24157_MI,
	&m10721_MI,
	&t135_TI,
	&t3367_TI,
	&m18079_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1941_0_0_0;
extern Il2CppType t1941_1_0_0;
extern TypeInfo t1940_TI;
struct t1941;
extern TypeInfo t1941_TI;
extern Il2CppGenericClass t1941_GC;
extern TypeInfo t823_TI;
TypeInfo t1941_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1941_MIs, NULL, NULL, NULL, &t1940_TI, NULL, &t823_TI, &t1941_TI, NULL, t1941_VT, &EmptyCustomAttributesCache, &t1941_TI, &t1941_0_0_0, &t1941_1_0_0, t1941_IOs, &t1941_GC, NULL, NULL, NULL, t1941_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1941), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t133_TI;
#include "t133MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.UI.ICanvasElement>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t133_m1499_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t133_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m1499_MI = 
{
	".ctor", (methodPointerType)&m8173_gshared, &t133_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t133_m1499_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t133_m10727_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t133_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10727_MI = 
{
	"Invoke", (methodPointerType)&m8174_gshared, &t133_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t4, t133_m10727_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t135_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t133_m10728_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t133_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10728_MI = 
{
	"BeginInvoke", (methodPointerType)&m8175_gshared, &t133_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4_t4, t133_m10728_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t133_m10729_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t133_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10729_MI = 
{
	"EndInvoke", (methodPointerType)&m8176_gshared, &t133_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t133_m10729_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t133_MIs[] =
{
	&m1499_MI,
	&m10727_MI,
	&m10728_MI,
	&m10729_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m10727_MI;
extern MethodInfo m10728_MI;
extern MethodInfo m10729_MI;
static MethodInfo* t133_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m10727_MI,
	&m10728_MI,
	&m10729_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t133_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t133_0_0_0;
extern Il2CppType t133_1_0_0;
extern TypeInfo t189_TI;
struct t133;
extern TypeInfo t133_TI;
extern Il2CppGenericClass t133_GC;
TypeInfo t133_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t133_MIs, NULL, NULL, NULL, &t189_TI, NULL, NULL, &t133_TI, NULL, t133_VT, &EmptyCustomAttributesCache, &t133_TI, &t133_0_0_0, &t133_1_0_0, t133_IOs, &t133_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t133), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t355_TI;

#include "t1944.h"
#include "t1946.h"
#include "t1943.h"
#include "t1952.h"
#include "t1948.h"
#include "t1953.h"
extern TypeInfo t355_TI;
extern TypeInfo t15_TI;
extern TypeInfo t135_TI;
extern TypeInfo t16_TI;
extern TypeInfo t328_TI;
extern TypeInfo t1942_TI;
extern TypeInfo t825_TI;
extern TypeInfo t17_TI;
extern TypeInfo t1944_TI;
extern TypeInfo t1945_TI;
extern TypeInfo t1946_TI;
extern TypeInfo t2926_TI;
extern TypeInfo t827_TI;
extern TypeInfo t1943_TI;
extern TypeInfo t1952_TI;
extern TypeInfo t1948_TI;
extern TypeInfo t1953_TI;
extern TypeInfo t1233_TI;
extern TypeInfo t1938_TI;
extern TypeInfo t704_TI;
extern TypeInfo t1450_TI;
extern TypeInfo t1915_TI;
extern TypeInfo t303_TI;
extern TypeInfo t854_TI;
extern TypeInfo t1863_TI;
extern TypeInfo t1846_TI;
extern TypeInfo t290_TI;
extern TypeInfo t8_TI;
#include "t1944MD.h"
#include "t1946MD.h"
#include "t1943MD.h"
#include "t1952MD.h"
#include "t1948MD.h"
#include "t1953MD.h"
extern Il2CppType t1942_0_0_0;
extern Il2CppType t1945_0_0_0;
extern Il2CppType t135_0_0_0;
extern Il2CppType t16_0_0_0;
extern MethodInfo m10764_MI;
extern MethodInfo m10765_MI;
extern MethodInfo m10747_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m24155_MI;
extern MethodInfo m24154_MI;
extern MethodInfo m10754_MI;
extern MethodInfo m10780_MI;
extern MethodInfo m15_MI;
extern MethodInfo m10748_MI;
extern MethodInfo m10770_MI;
extern MethodInfo m10772_MI;
extern MethodInfo m10755_MI;
extern MethodInfo m10766_MI;
extern MethodInfo m10753_MI;
extern MethodInfo m10761_MI;
extern MethodInfo m10750_MI;
extern MethodInfo m10768_MI;
extern MethodInfo m10814_MI;
extern MethodInfo m18097_MI;
extern MethodInfo m10751_MI;
extern MethodInfo m10818_MI;
extern MethodInfo m18099_MI;
extern MethodInfo m10799_MI;
extern MethodInfo m10822_MI;
extern MethodInfo m6454_MI;
extern MethodInfo m10714_MI;
extern MethodInfo m10749_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m10746_MI;
extern MethodInfo m10769_MI;
extern MethodInfo m18100_MI;
extern MethodInfo m4390_MI;
extern MethodInfo m3739_MI;
extern MethodInfo m3735_MI;
extern MethodInfo m10175_MI;
extern MethodInfo m23810_MI;
extern MethodInfo m5720_MI;
extern MethodInfo m5726_MI;
extern MethodInfo m5729_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m5716_MI;
extern MethodInfo m3825_MI;
extern MethodInfo m1741_MI;
extern MethodInfo m6444_MI;
extern MethodInfo m3794_MI;
extern MethodInfo m10762_MI;
extern MethodInfo m23945_MI;
extern MethodInfo m4332_MI;
struct t355;
 void m18097 (t355 * __this, t2926* p0, int32_t p1, t1943 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18097_MI;
struct t355;
 void m18099 (t355 * __this, t14 * p0, int32_t p1, t1952 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18099_MI;
struct t355;
 void m18100 (t355 * __this, t1945* p0, int32_t p1, t1952 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18100_MI;


extern MethodInfo m10730_MI;
 void m10730 (t355 * __this, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		m10748(__this, ((int32_t)10), (t4*)NULL, &m10748_MI);
		return;
	}
}
extern MethodInfo m10731_MI;
 void m10731 (t355 * __this, t4* p0, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		m10748(__this, ((int32_t)10), p0, &m10748_MI);
		return;
	}
}
extern MethodInfo m10732_MI;
 void m10732 (t355 * __this, int32_t p0, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		m10748(__this, p0, (t4*)NULL, &m10748_MI);
		return;
	}
}
extern MethodInfo m10733_MI;
 void m10733 (t355 * __this, t705 * p0, t706  p1, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		__this->f13 = p0;
		return;
	}
}
extern MethodInfo m10734_MI;
 void m10734 (t355 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	{
		t4 * L_0 = m10764(__this, p0, &m10764_MI);
		int32_t L_1 = m10765(__this, p1, &m10765_MI);
		VirtActionInvoker2< t4 *, int32_t >::Invoke(&m10747_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10735_MI;
 bool m10735 (t355 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m10736_MI;
 t4 * m10736 (t355 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m10737_MI;
 bool m10737 (t355 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m10738_MI;
 void m10738 (t355 * __this, t1946  p0, MethodInfo* method){
	{
		t4 * L_0 = m10770((&p0), &m10770_MI);
		int32_t L_1 = m10772((&p0), &m10772_MI);
		VirtActionInvoker2< t4 *, int32_t >::Invoke(&m10755_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10739_MI;
 bool m10739 (t355 * __this, t1946  p0, MethodInfo* method){
	{
		bool L_0 = m10766(__this, p0, &m10766_MI);
		return L_0;
	}
}
extern MethodInfo m10740_MI;
 void m10740 (t355 * __this, t1945* p0, int32_t p1, MethodInfo* method){
	{
		m10753(__this, p0, p1, &m10753_MI);
		return;
	}
}
extern MethodInfo m10741_MI;
 bool m10741 (t355 * __this, t1946  p0, MethodInfo* method){
	{
		bool L_0 = m10766(__this, p0, &m10766_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		t4 * L_1 = m10770((&p0), &m10770_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t4 * >::Invoke(&m10761_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m10742_MI;
 void m10742 (t355 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	t1945* V_0 = {0};
	t2926* V_1 = {0};
	int32_t G_B5_0 = 0;
	t2926* G_B5_1 = {0};
	t355 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t2926* G_B4_1 = {0};
	t355 * G_B4_2 = {0};
	{
		V_0 = ((t1945*)IsInst(p0, InitializedTypeInfo(&t1945_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		m10753(__this, V_0, p1, &m10753_MI);
		return;
	}

IL_0013:
	{
		m10750(__this, p0, p1, &m10750_MI);
		V_1 = ((t2926*)IsInst(p0, InitializedTypeInfo(&t2926_TI)));
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		G_B4_0 = p1;
		G_B4_1 = V_1;
		G_B4_2 = ((t355 *)(__this));
		if ((((t355_SFs*)InitializedTypeInfo(&t355_TI)->static_fields)->f15))
		{
			G_B5_0 = p1;
			G_B5_1 = V_1;
			G_B5_2 = ((t355 *)(__this));
			goto IL_0040;
		}
	}
	{
		t50 L_0 = { &m10768_MI };
		t1943 * L_1 = (t1943 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1943_TI));
		m10814(L_1, NULL, L_0, &m10814_MI);
		((t355_SFs*)InitializedTypeInfo(&t355_TI)->static_fields)->f15 = L_1;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t355 *)(G_B4_2));
	}

IL_0040:
	{
		m18097(G_B5_2, G_B5_1, G_B5_0, (((t355_SFs*)InitializedTypeInfo(&t355_TI)->static_fields)->f15), &m18097_MI);
		return;
	}

IL_004b:
	{
		t50 L_2 = { &m10751_MI };
		t1952 * L_3 = (t1952 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1952_TI));
		m10818(L_3, NULL, L_2, &m10818_MI);
		m18099(__this, p0, p1, L_3, &m18099_MI);
		return;
	}
}
extern MethodInfo m10743_MI;
 t4 * m10743 (t355 * __this, MethodInfo* method){
	{
		t1948  L_0 = {0};
		m10799(&L_0, __this, &m10799_MI);
		t1948  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1948_TI), &L_1);
		return (t4 *)L_2;
	}
}
extern MethodInfo m10744_MI;
 t4* m10744 (t355 * __this, MethodInfo* method){
	{
		t1948  L_0 = {0};
		m10799(&L_0, __this, &m10799_MI);
		t1948  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1948_TI), &L_1);
		return (t4*)L_2;
	}
}
extern MethodInfo m10745_MI;
 t4 * m10745 (t355 * __this, MethodInfo* method){
	{
		t1953 * L_0 = (t1953 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1953_TI));
		m10822(L_0, __this, &m10822_MI);
		return L_0;
	}
}
extern MethodInfo m10746_MI;
 int32_t m10746 (t355 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m10747_MI;
 void m10747 (t355 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t4 * L_0 = p0;
		if (((t4 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t328 * L_1 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_1, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t4* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(&m24155_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t704* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_4)->max_length)))));
		t704* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		V_3 = (-1);
		if ((((int32_t)V_2) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t1450* L_6 = (__this->f5);
		int32_t L_7 = (((t825 *)(t825 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0078;
		}
	}
	{
		t4* L_8 = (__this->f12);
		t1915* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t4 *, t4 * >::Invoke(&m24154_MI, L_8, (*(t4 **)(t4 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		V_3 = V_2;
		t1450* L_11 = (__this->f5);
		int32_t L_12 = (((t825 *)(t825 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_13 = (__this->f10);
		int32_t L_14 = ((int32_t)(L_13+1));
		V_4 = L_14;
		__this->f10 = L_14;
		int32_t L_15 = (__this->f11);
		if ((((int32_t)V_4) <= ((int32_t)L_15)))
		{
			goto IL_00c9;
		}
	}
	{
		m10754(__this, &m10754_MI);
		t704* L_16 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_16)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_17 = (__this->f9);
		V_2 = L_17;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_18 = (__this->f8);
		int32_t L_19 = L_18;
		V_4 = L_19;
		__this->f8 = ((int32_t)(L_19+1));
		V_2 = V_4;
		goto IL_0101;
	}

IL_00ea:
	{
		t1450* L_20 = (__this->f5);
		int32_t L_21 = (((t825 *)(t825 *)SZArrayLdElema(L_20, V_2))->f1);
		__this->f9 = L_21;
	}

IL_0101:
	{
		t1450* L_22 = (__this->f5);
		t704* L_23 = (__this->f4);
		((t825 *)(t825 *)SZArrayLdElema(L_22, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_23, V_1))-1));
		t704* L_24 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_1)) = (int32_t)((int32_t)(V_2+1));
		t1450* L_25 = (__this->f5);
		((t825 *)(t825 *)SZArrayLdElema(L_25, V_2))->f0 = V_0;
		t1915* L_26 = (__this->f6);
		*((t4 **)(t4 **)SZArrayLdElema(L_26, V_2)) = (t4 *)p0;
		goto IL_0194;
	}

IL_0148:
	{
		if ((((int32_t)V_3) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		t1450* L_27 = (__this->f5);
		t1450* L_28 = (__this->f5);
		int32_t L_29 = (((t825 *)(t825 *)SZArrayLdElema(L_28, V_2))->f1);
		((t825 *)(t825 *)SZArrayLdElema(L_27, V_3))->f1 = L_29;
		t1450* L_30 = (__this->f5);
		t704* L_31 = (__this->f4);
		((t825 *)(t825 *)SZArrayLdElema(L_30, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_31, V_1))-1));
		t704* L_32 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_32, V_1)) = (int32_t)((int32_t)(V_2+1));
	}

IL_0194:
	{
		t704* L_33 = (__this->f7);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_33, V_2)) = (int32_t)p1;
		int32_t L_34 = (__this->f14);
		__this->f14 = ((int32_t)(L_34+1));
		return;
	}
}
extern MethodInfo m10748_MI;
 void m10748 (t355 * __this, int32_t p0, t4* p1, MethodInfo* method){
	t4* V_0 = {0};
	t355 * G_B4_0 = {0};
	t355 * G_B3_0 = {0};
	t4* G_B5_0 = {0};
	t355 * G_B5_1 = {0};
	{
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t1233 * L_0 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6454(L_0, (t8*) &_stringLiteral537, &m6454_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000f:
	{
		G_B3_0 = ((t355 *)(__this));
		if (!p1)
		{
			G_B4_0 = ((t355 *)(__this));
			goto IL_0018;
		}
	}
	{
		V_0 = p1;
		G_B5_0 = V_0;
		G_B5_1 = ((t355 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1938_TI));
		t1938 * L_1 = m10714(NULL, &m10714_MI);
		G_B5_0 = ((t4*)(L_1));
		G_B5_1 = ((t355 *)(G_B4_0));
	}

IL_001d:
	{
		G_B5_1->f12 = G_B5_0;
		if (p0)
		{
			goto IL_002b;
		}
	}
	{
		p0 = ((int32_t)10);
	}

IL_002b:
	{
		p0 = ((int32_t)((((int32_t)((float)((((float)p0))/(0.9f)))))+1));
		m10749(__this, p0, &m10749_MI);
		__this->f14 = 0;
		return;
	}
}
extern MethodInfo m10749_MI;
 void m10749 (t355 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f4 = ((t704*)SZArrayNew(InitializedTypeInfo(&t704_TI), p0));
		__this->f5 = ((t1450*)SZArrayNew(InitializedTypeInfo(&t1450_TI), p0));
		__this->f9 = (-1);
		__this->f6 = ((t1915*)SZArrayNew(InitializedTypeInfo(&t1915_TI), p0));
		__this->f7 = ((t704*)SZArrayNew(InitializedTypeInfo(&t704_TI), p0));
		__this->f8 = 0;
		t704* L_0 = (__this->f4);
		__this->f11 = (((int32_t)((float)((((float)(((int32_t)(((t14 *)L_0)->max_length)))))*(0.9f)))));
		int32_t L_1 = (__this->f11);
		if (L_1)
		{
			goto IL_006e;
		}
	}
	{
		t704* L_2 = (__this->f4);
		if ((((int32_t)(((int32_t)(((t14 *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->f11 = 1;
	}

IL_006e:
	{
		return;
	}
}
extern MethodInfo m10750_MI;
 void m10750 (t355 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral326, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t1233 * L_1 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6454(L_1, (t8*) &_stringLiteral323, &m6454_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001d:
	{
		int32_t L_2 = m3690(p0, &m3690_MI);
		if ((((int32_t)p1) <= ((int32_t)L_2)))
		{
			goto IL_0031;
		}
	}
	{
		t303 * L_3 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_3, (t8*) &_stringLiteral538, &m1917_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0031:
	{
		int32_t L_4 = m3690(p0, &m3690_MI);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m10746_MI, __this);
		if ((((int32_t)((int32_t)(L_4-p1))) >= ((int32_t)L_5)))
		{
			goto IL_004c;
		}
	}
	{
		t303 * L_6 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_6, (t8*) &_stringLiteral539, &m1917_MI);
		il2cpp_codegen_raise_exception (L_6);
	}

IL_004c:
	{
		return;
	}
}
extern MethodInfo m10751_MI;
 t1946  m10751 (t4 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	{
		t1946  L_0 = {0};
		m10769(&L_0, p0, p1, &m10769_MI);
		return L_0;
	}
}
extern MethodInfo m10752_MI;
 int32_t m10752 (t4 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	{
		return p1;
	}
}
extern MethodInfo m10753_MI;
 void m10753 (t355 * __this, t1945* p0, int32_t p1, MethodInfo* method){
	{
		m10750(__this, (t14 *)(t14 *)p0, p1, &m10750_MI);
		t50 L_0 = { &m10751_MI };
		t1952 * L_1 = (t1952 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1952_TI));
		m10818(L_1, NULL, L_0, &m10818_MI);
		m18100(__this, p0, p1, L_1, &m18100_MI);
		return;
	}
}
extern MethodInfo m10754_MI;
 void m10754 (t355 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t704* V_1 = {0};
	t1450* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t1915* V_7 = {0};
	t704* V_8 = {0};
	int32_t V_9 = 0;
	{
		t704* L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t854_TI));
		int32_t L_1 = m4390(NULL, ((int32_t)(((int32_t)((((int32_t)(((t14 *)L_0)->max_length)))<<1))|1)), &m4390_MI);
		V_0 = L_1;
		V_1 = ((t704*)SZArrayNew(InitializedTypeInfo(&t704_TI), V_0));
		V_2 = ((t1450*)SZArrayNew(InitializedTypeInfo(&t1450_TI), V_0));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		t704* L_2 = (__this->f4);
		V_4 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_2, V_3))-1));
		goto IL_00a2;
	}

IL_0035:
	{
		t4* L_3 = (__this->f12);
		t1915* L_4 = (__this->f6);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(&m24155_MI, L_3, (*(t4 **)(t4 **)SZArrayLdElema(L_4, V_4)));
		int32_t L_6 = ((int32_t)(L_5|((int32_t)-2147483648)));
		V_9 = L_6;
		((t825 *)(t825 *)SZArrayLdElema(V_2, V_4))->f0 = L_6;
		V_5 = V_9;
		V_6 = ((int32_t)(((int32_t)(V_5&((int32_t)2147483647)))%V_0));
		((t825 *)(t825 *)SZArrayLdElema(V_2, V_4))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6))-1));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6)) = (int32_t)((int32_t)(V_4+1));
		t1450* L_7 = (__this->f5);
		int32_t L_8 = (((t825 *)(t825 *)SZArrayLdElema(L_7, V_4))->f1);
		V_4 = L_8;
	}

IL_00a2:
	{
		if ((((uint32_t)V_4) != ((uint32_t)(-1))))
		{
			goto IL_0035;
		}
	}
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_00ab:
	{
		t704* L_9 = (__this->f4);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t14 *)L_9)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->f4 = V_1;
		__this->f5 = V_2;
		V_7 = ((t1915*)SZArrayNew(InitializedTypeInfo(&t1915_TI), V_0));
		V_8 = ((t704*)SZArrayNew(InitializedTypeInfo(&t704_TI), V_0));
		t1915* L_10 = (__this->f6);
		int32_t L_11 = (__this->f8);
		m3739(NULL, (t14 *)(t14 *)L_10, 0, (t14 *)(t14 *)V_7, 0, L_11, &m3739_MI);
		t704* L_12 = (__this->f7);
		int32_t L_13 = (__this->f8);
		m3739(NULL, (t14 *)(t14 *)L_12, 0, (t14 *)(t14 *)V_8, 0, L_13, &m3739_MI);
		__this->f6 = V_7;
		__this->f7 = V_8;
		__this->f11 = (((int32_t)((float)((((float)V_0))*(0.9f)))));
		return;
	}
}
extern MethodInfo m10755_MI;
 void m10755 (t355 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t4 * L_0 = p0;
		if (((t4 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t328 * L_1 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_1, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t4* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(&m24155_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t704* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_4)->max_length)))));
		t704* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		goto IL_008f;
	}

IL_0044:
	{
		t1450* L_6 = (__this->f5);
		int32_t L_7 = (((t825 *)(t825 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		t4* L_8 = (__this->f12);
		t1915* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t4 *, t4 * >::Invoke(&m24154_MI, L_8, (*(t4 **)(t4 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		t303 * L_11 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_11, (t8*) &_stringLiteral541, &m1917_MI);
		il2cpp_codegen_raise_exception (L_11);
	}

IL_007d:
	{
		t1450* L_12 = (__this->f5);
		int32_t L_13 = (((t825 *)(t825 *)SZArrayLdElema(L_12, V_2))->f1);
		V_2 = L_13;
	}

IL_008f:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_14 = (__this->f10);
		int32_t L_15 = ((int32_t)(L_14+1));
		V_3 = L_15;
		__this->f10 = L_15;
		int32_t L_16 = (__this->f11);
		if ((((int32_t)V_3) <= ((int32_t)L_16)))
		{
			goto IL_00c3;
		}
	}
	{
		m10754(__this, &m10754_MI);
		t704* L_17 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_17)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_18 = (__this->f9);
		V_2 = L_18;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_19 = (__this->f8);
		int32_t L_20 = L_19;
		V_3 = L_20;
		__this->f8 = ((int32_t)(L_20+1));
		V_2 = V_3;
		goto IL_00f9;
	}

IL_00e2:
	{
		t1450* L_21 = (__this->f5);
		int32_t L_22 = (((t825 *)(t825 *)SZArrayLdElema(L_21, V_2))->f1);
		__this->f9 = L_22;
	}

IL_00f9:
	{
		t1450* L_23 = (__this->f5);
		((t825 *)(t825 *)SZArrayLdElema(L_23, V_2))->f0 = V_0;
		t1450* L_24 = (__this->f5);
		t704* L_25 = (__this->f4);
		((t825 *)(t825 *)SZArrayLdElema(L_24, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_25, V_1))-1));
		t704* L_26 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_26, V_1)) = (int32_t)((int32_t)(V_2+1));
		t1915* L_27 = (__this->f6);
		*((t4 **)(t4 **)SZArrayLdElema(L_27, V_2)) = (t4 *)p0;
		t704* L_28 = (__this->f7);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_28, V_2)) = (int32_t)p1;
		int32_t L_29 = (__this->f14);
		__this->f14 = ((int32_t)(L_29+1));
		return;
	}
}
extern MethodInfo m10756_MI;
 void m10756 (t355 * __this, MethodInfo* method){
	{
		__this->f10 = 0;
		t704* L_0 = (__this->f4);
		t704* L_1 = (__this->f4);
		m3735(NULL, (t14 *)(t14 *)L_0, 0, (((int32_t)(((t14 *)L_1)->max_length))), &m3735_MI);
		t1915* L_2 = (__this->f6);
		t1915* L_3 = (__this->f6);
		m3735(NULL, (t14 *)(t14 *)L_2, 0, (((int32_t)(((t14 *)L_3)->max_length))), &m3735_MI);
		t704* L_4 = (__this->f7);
		t704* L_5 = (__this->f7);
		m3735(NULL, (t14 *)(t14 *)L_4, 0, (((int32_t)(((t14 *)L_5)->max_length))), &m3735_MI);
		t1450* L_6 = (__this->f5);
		t1450* L_7 = (__this->f5);
		m3735(NULL, (t14 *)(t14 *)L_6, 0, (((int32_t)(((t14 *)L_7)->max_length))), &m3735_MI);
		__this->f9 = (-1);
		__this->f8 = 0;
		int32_t L_8 = (__this->f14);
		__this->f14 = ((int32_t)(L_8+1));
		return;
	}
}
extern MethodInfo m10757_MI;
 bool m10757 (t355 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t4 * L_0 = p0;
		if (((t4 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t328 * L_1 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_1, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t4* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(&m24155_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t704* L_4 = (__this->f4);
		t704* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_5)->max_length)))))))-1));
		goto IL_0084;
	}

IL_0042:
	{
		t1450* L_6 = (__this->f5);
		int32_t L_7 = (((t825 *)(t825 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0072;
		}
	}
	{
		t4* L_8 = (__this->f12);
		t1915* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t4 *, t4 * >::Invoke(&m24154_MI, L_8, (*(t4 **)(t4 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t1450* L_11 = (__this->f5);
		int32_t L_12 = (((t825 *)(t825 *)SZArrayLdElema(L_11, V_1))->f1);
		V_1 = L_12;
	}

IL_0084:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m10758_MI;
 bool m10758 (t355 * __this, int32_t p0, MethodInfo* method){
	t4* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t1863 * L_0 = m10175(NULL, &m10175_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		t704* L_1 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_1, V_1))-1));
		goto IL_0040;
	}

IL_0017:
	{
		t704* L_2 = (__this->f7);
		bool L_3 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m23810_MI, V_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, V_2)), p0);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		t1450* L_4 = (__this->f5);
		int32_t L_5 = (((t825 *)(t825 *)SZArrayLdElema(L_4, V_2))->f1);
		V_2 = L_5;
	}

IL_0040:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0048:
	{
		t704* L_6 = (__this->f4);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t14 *)L_6)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m10759_MI;
 void m10759 (t355 * __this, t705 * p0, t706  p1, MethodInfo* method){
	t1945* V_0 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral294, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = (__this->f14);
		m5720(p0, (t8*) &_stringLiteral542, L_1, &m5720_MI);
		t4* L_2 = (__this->f12);
		m5726(p0, (t8*) &_stringLiteral543, L_2, &m5726_MI);
		V_0 = (t1945*)NULL;
		int32_t L_3 = (__this->f10);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = (__this->f10);
		V_0 = ((t1945*)SZArrayNew(InitializedTypeInfo(&t1945_TI), L_4));
		m10753(__this, V_0, 0, &m10753_MI);
	}

IL_004f:
	{
		t704* L_5 = (__this->f4);
		m5720(p0, (t8*) &_stringLiteral544, (((int32_t)(((t14 *)L_5)->max_length))), &m5720_MI);
		m5726(p0, (t8*) &_stringLiteral545, (t4 *)(t4 *)V_0, &m5726_MI);
		return;
	}
}
extern MethodInfo m10760_MI;
 void m10760 (t355 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t1945* V_1 = {0};
	int32_t V_2 = 0;
	{
		t705 * L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		t705 * L_1 = (__this->f13);
		int32_t L_2 = m5729(L_1, (t8*) &_stringLiteral542, &m5729_MI);
		__this->f14 = L_2;
		t705 * L_3 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t290_TI));
		t290 * L_4 = m1528(NULL, LoadTypeToken(&t1942_0_0_0), &m1528_MI);
		t4 * L_5 = m5716(L_3, (t8*) &_stringLiteral543, L_4, &m5716_MI);
		__this->f12 = ((t4*)Castclass(L_5, InitializedTypeInfo(&t1942_TI)));
		t705 * L_6 = (__this->f13);
		int32_t L_7 = m5729(L_6, (t8*) &_stringLiteral544, &m5729_MI);
		V_0 = L_7;
		t705 * L_8 = (__this->f13);
		t290 * L_9 = m1528(NULL, LoadTypeToken(&t1945_0_0_0), &m1528_MI);
		t4 * L_10 = m5716(L_8, (t8*) &_stringLiteral545, L_9, &m5716_MI);
		V_1 = ((t1945*)Castclass(L_10, InitializedTypeInfo(&t1945_TI)));
		if ((((int32_t)V_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		m10749(__this, V_0, &m10749_MI);
		__this->f10 = 0;
		if (!V_1)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		t4 * L_11 = m10770(((t1946 *)(t1946 *)SZArrayLdElema(V_1, V_2)), &m10770_MI);
		int32_t L_12 = m10772(((t1946 *)(t1946 *)SZArrayLdElema(V_1, V_2)), &m10772_MI);
		VirtActionInvoker2< t4 *, int32_t >::Invoke(&m10755_MI, __this, L_11, L_12);
		V_2 = ((int32_t)(V_2+1));
	}

IL_00b4:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t14 *)V_1)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_13 = (__this->f14);
		__this->f14 = ((int32_t)(L_13+1));
		__this->f13 = (t705 *)NULL;
		return;
	}
}
extern MethodInfo m10761_MI;
 bool m10761 (t355 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t4 * V_4 = {0};
	int32_t V_5 = 0;
	{
		t4 * L_0 = p0;
		if (((t4 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t328 * L_1 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_1, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t4* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(&m24155_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t704* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_4)->max_length)))));
		t704* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		t1450* L_6 = (__this->f5);
		int32_t L_7 = (((t825 *)(t825 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007a;
		}
	}
	{
		t4* L_8 = (__this->f12);
		t1915* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t4 *, t4 * >::Invoke(&m24154_MI, L_8, (*(t4 **)(t4 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		V_3 = V_2;
		t1450* L_11 = (__this->f5);
		int32_t L_12 = (((t825 *)(t825 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_13 = (__this->f10);
		__this->f10 = ((int32_t)(L_13-1));
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		t704* L_14 = (__this->f4);
		t1450* L_15 = (__this->f5);
		int32_t L_16 = (((t825 *)(t825 *)SZArrayLdElema(L_15, V_2))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_14, V_1)) = (int32_t)((int32_t)(L_16+1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t1450* L_17 = (__this->f5);
		t1450* L_18 = (__this->f5);
		int32_t L_19 = (((t825 *)(t825 *)SZArrayLdElema(L_18, V_2))->f1);
		((t825 *)(t825 *)SZArrayLdElema(L_17, V_3))->f1 = L_19;
	}

IL_00e9:
	{
		t1450* L_20 = (__this->f5);
		int32_t L_21 = (__this->f9);
		((t825 *)(t825 *)SZArrayLdElema(L_20, V_2))->f1 = L_21;
		__this->f9 = V_2;
		t1450* L_22 = (__this->f5);
		((t825 *)(t825 *)SZArrayLdElema(L_22, V_2))->f0 = 0;
		t1915* L_23 = (__this->f6);
		Initobj (&t135_TI, (&V_4));
		*((t4 **)(t4 **)SZArrayLdElema(L_23, V_2)) = (t4 *)V_4;
		t704* L_24 = (__this->f7);
		Initobj (&t16_TI, (&V_5));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_2)) = (int32_t)V_5;
		int32_t L_25 = (__this->f14);
		__this->f14 = ((int32_t)(L_25+1));
		return 1;
	}
}
extern MethodInfo m10762_MI;
 bool m10762 (t355 * __this, t4 * p0, int32_t* p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		t4 * L_0 = p0;
		if (((t4 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t328 * L_1 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_1, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t4* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(&m24155_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t704* L_4 = (__this->f4);
		t704* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_5)->max_length)))))))-1));
		goto IL_0096;
	}

IL_0042:
	{
		t1450* L_6 = (__this->f5);
		int32_t L_7 = (((t825 *)(t825 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0084;
		}
	}
	{
		t4* L_8 = (__this->f12);
		t1915* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t4 *, t4 * >::Invoke(&m24154_MI, L_8, (*(t4 **)(t4 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		t704* L_11 = (__this->f7);
		*p1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, V_1));
		return 1;
	}

IL_0084:
	{
		t1450* L_12 = (__this->f5);
		int32_t L_13 = (((t825 *)(t825 *)SZArrayLdElema(L_12, V_1))->f1);
		V_1 = L_13;
	}

IL_0096:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		Initobj (&t16_TI, (&V_2));
		*p1 = V_2;
		return 0;
	}
}
extern MethodInfo m10763_MI;
 t1944 * m10763 (t355 * __this, MethodInfo* method){
	{
		t1944 * L_0 = (t1944 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1944_TI));
		m10780(L_0, __this, &m10780_MI);
		return L_0;
	}
}
extern MethodInfo m10764_MI;
 t4 * m10764 (t355 * __this, t4 * p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if (((t4 *)IsInst(p0, InitializedTypeInfo(&t135_TI))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t290_TI));
		t290 * L_1 = m1528(NULL, LoadTypeToken(&t135_0_0_0), &m1528_MI);
		t8* L_2 = (t8*)VirtFuncInvoker0< t8* >::Invoke(&m3825_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
		t8* L_3 = m1741(NULL, (t8*) &_stringLiteral546, L_2, &m1741_MI);
		t303 * L_4 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m6444(L_4, L_3, (t8*) &_stringLiteral536, &m6444_MI);
		il2cpp_codegen_raise_exception (L_4);
	}

IL_003a:
	{
		return ((t4 *)Castclass(p0, InitializedTypeInfo(&t135_TI)));
	}
}
extern MethodInfo m10765_MI;
 int32_t m10765 (t355 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		if (p0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t290_TI));
		t290 * L_0 = m1528(NULL, LoadTypeToken(&t16_0_0_0), &m1528_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3794_MI, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (&t16_TI, (&V_0));
		return V_0;
	}

IL_001e:
	{
		if (((t4 *)IsInst(p0, InitializedTypeInfo(&t16_TI))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t290_TI));
		t290 * L_2 = m1528(NULL, LoadTypeToken(&t16_0_0_0), &m1528_MI);
		t8* L_3 = (t8*)VirtFuncInvoker0< t8* >::Invoke(&m3825_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
		t8* L_4 = m1741(NULL, (t8*) &_stringLiteral546, L_3, &m1741_MI);
		t303 * L_5 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m6444(L_5, L_4, (t8*) &_stringLiteral242, &m6444_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_004a:
	{
		return ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t16_TI)))));
	}
}
extern MethodInfo m10766_MI;
 bool m10766 (t355 * __this, t1946  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t4 * L_0 = m10770((&p0), &m10770_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t4 *, int32_t* >::Invoke(&m10762_MI, __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t1863 * L_2 = m10175(NULL, &m10175_MI);
		int32_t L_3 = m10772((&p0), &m10772_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m23945_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m10767_MI;
 t1948  m10767 (t355 * __this, MethodInfo* method){
	{
		t1948  L_0 = {0};
		m10799(&L_0, __this, &m10799_MI);
		return L_0;
	}
}
extern MethodInfo m10768_MI;
 t827  m10768 (t4 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	{
		t4 * L_0 = p0;
		int32_t L_1 = p1;
		t4 * L_2 = Box(InitializedTypeInfo(&t16_TI), &L_1);
		t827  L_3 = {0};
		m4332(&L_3, ((t4 *)L_0), L_2, &m4332_MI);
		return L_3;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t16_0_0_32849;
FieldInfo t355_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t16_0_0_32849, &t355_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t20_0_0_32849;
FieldInfo t355_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t20_0_0_32849, &t355_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_32849;
FieldInfo t355_f2_FieldInfo = 
{
	"NO_SLOT", &t16_0_0_32849, &t355_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_32849;
FieldInfo t355_f3_FieldInfo = 
{
	"HASH_FLAG", &t16_0_0_32849, &t355_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t704_0_0_1;
FieldInfo t355_f4_FieldInfo = 
{
	"table", &t704_0_0_1, &t355_TI, offsetof(t355, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1450_0_0_1;
FieldInfo t355_f5_FieldInfo = 
{
	"linkSlots", &t1450_0_0_1, &t355_TI, offsetof(t355, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1915_0_0_1;
FieldInfo t355_f6_FieldInfo = 
{
	"keySlots", &t1915_0_0_1, &t355_TI, offsetof(t355, f6), &EmptyCustomAttributesCache};
extern Il2CppType t704_0_0_1;
FieldInfo t355_f7_FieldInfo = 
{
	"valueSlots", &t704_0_0_1, &t355_TI, offsetof(t355, f7), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t355_f8_FieldInfo = 
{
	"touchedSlots", &t16_0_0_1, &t355_TI, offsetof(t355, f8), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t355_f9_FieldInfo = 
{
	"emptySlot", &t16_0_0_1, &t355_TI, offsetof(t355, f9), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t355_f10_FieldInfo = 
{
	"count", &t16_0_0_1, &t355_TI, offsetof(t355, f10), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t355_f11_FieldInfo = 
{
	"threshold", &t16_0_0_1, &t355_TI, offsetof(t355, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1942_0_0_1;
FieldInfo t355_f12_FieldInfo = 
{
	"hcp", &t1942_0_0_1, &t355_TI, offsetof(t355, f12), &EmptyCustomAttributesCache};
extern Il2CppType t705_0_0_1;
FieldInfo t355_f13_FieldInfo = 
{
	"serialization_info", &t705_0_0_1, &t355_TI, offsetof(t355, f13), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t355_f14_FieldInfo = 
{
	"generation", &t16_0_0_1, &t355_TI, offsetof(t355, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1943_0_0_17;
extern CustomAttributesCache t832__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t355_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t1943_0_0_17, &t355_TI, offsetof(t355_SFs, f15), &t832__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t355_FIs[] =
{
	&t355_f0_FieldInfo,
	&t355_f1_FieldInfo,
	&t355_f2_FieldInfo,
	&t355_f3_FieldInfo,
	&t355_f4_FieldInfo,
	&t355_f5_FieldInfo,
	&t355_f6_FieldInfo,
	&t355_f7_FieldInfo,
	&t355_f8_FieldInfo,
	&t355_f9_FieldInfo,
	&t355_f10_FieldInfo,
	&t355_f11_FieldInfo,
	&t355_f12_FieldInfo,
	&t355_f13_FieldInfo,
	&t355_f14_FieldInfo,
	&t355_f15_FieldInfo,
	NULL
};
static const int32_t t355_f0_DefaultValueData = 10;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t355_f0_DefaultValue = 
{
	&t355_f0_FieldInfo, { (char*)&t355_f0_DefaultValueData, &t16_0_0_0 }};
static const float t355_f1_DefaultValueData = 0.9f;
extern Il2CppType t20_0_0_0;
static Il2CppFieldDefaultValueEntry t355_f1_DefaultValue = 
{
	&t355_f1_FieldInfo, { (char*)&t355_f1_DefaultValueData, &t20_0_0_0 }};
static const int32_t t355_f2_DefaultValueData = -1;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t355_f2_DefaultValue = 
{
	&t355_f2_FieldInfo, { (char*)&t355_f2_DefaultValueData, &t16_0_0_0 }};
static const int32_t t355_f3_DefaultValueData = -2147483648;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t355_f3_DefaultValue = 
{
	&t355_f3_FieldInfo, { (char*)&t355_f3_DefaultValueData, &t16_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t355_FDVs[] = 
{
	&t355_f0_DefaultValue,
	&t355_f1_DefaultValue,
	&t355_f2_DefaultValue,
	&t355_f3_DefaultValue,
	NULL
};
extern MethodInfo m10734_MI;
static PropertyInfo t355____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t355_TI, "System.Collections.IDictionary.Item", NULL, &m10734_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10735_MI;
static PropertyInfo t355____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t355_TI, "System.Collections.ICollection.IsSynchronized", &m10735_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10736_MI;
static PropertyInfo t355____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t355_TI, "System.Collections.ICollection.SyncRoot", &m10736_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10737_MI;
static PropertyInfo t355____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t355_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m10737_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10746_MI;
static PropertyInfo t355____Count_PropertyInfo = 
{
	&t355_TI, "Count", &m10746_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10747_MI;
static PropertyInfo t355____Item_PropertyInfo = 
{
	&t355_TI, "Item", NULL, &m10747_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10763_MI;
static PropertyInfo t355____Values_PropertyInfo = 
{
	&t355_TI, "Values", &m10763_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t355_PIs[] =
{
	&t355____System_Collections_IDictionary_Item_PropertyInfo,
	&t355____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t355____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t355____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t355____Count_PropertyInfo,
	&t355____Item_PropertyInfo,
	&t355____Values_PropertyInfo,
	NULL
};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10730_MI = 
{
	".ctor", (methodPointerType)&m10730, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1942_0_0_0;
static ParameterInfo t355_m10731_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t1942_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10731_MI = 
{
	".ctor", (methodPointerType)&m10731, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t355_m10731_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t355_m10732_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10732_MI = 
{
	".ctor", (methodPointerType)&m10732, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t355_m10732_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t705_0_0_0;
extern Il2CppType t706_0_0_0;
static ParameterInfo t355_m10733_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t705_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t706_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t706 (MethodInfo* method, void* obj, void** args);
MethodInfo m10733_MI = 
{
	".ctor", (methodPointerType)&m10733, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t706, t355_m10733_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t355_m10734_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10734_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m10734, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t355_m10734_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t355_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10735_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10735, &t355_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t355_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10736_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10736, &t355_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t355_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10737_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m10737, &t355_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1946_0_0_0;
static ParameterInfo t355_m10738_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1946_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t1946 (MethodInfo* method, void* obj, void** args);
MethodInfo m10738_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m10738, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15_t1946, t355_m10738_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1946_0_0_0;
static ParameterInfo t355_m10739_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1946_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1946 (MethodInfo* method, void* obj, void** args);
MethodInfo m10739_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m10739, &t355_TI, &t17_0_0_0, RuntimeInvoker_t17_t1946, t355_m10739_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1945_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t355_m10740_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1945_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10740_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m10740, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t355_m10740_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1946_0_0_0;
static ParameterInfo t355_m10741_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1946_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1946 (MethodInfo* method, void* obj, void** args);
MethodInfo m10741_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m10741, &t355_TI, &t17_0_0_0, RuntimeInvoker_t17_t1946, t355_m10741_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t355_m10742_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10742_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10742, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t355_m10742_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t355_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10743_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10743, &t355_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t355_TI;
extern Il2CppType t1947_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10744_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m10744, &t355_TI, &t1947_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t355_TI;
extern Il2CppType t833_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10745_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m10745, &t355_TI, &t833_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t355_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10746_MI = 
{
	"get_Count", (methodPointerType)&m10746, &t355_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t355_m10747_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10747_MI = 
{
	"set_Item", (methodPointerType)&m10747, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t355_m10747_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1942_0_0_0;
static ParameterInfo t355_m10748_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t1942_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10748_MI = 
{
	"Init", (methodPointerType)&m10748, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t355_m10748_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t355_m10749_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10749_MI = 
{
	"InitArrays", (methodPointerType)&m10749, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t355_m10749_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t355_m10750_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10750_MI = 
{
	"CopyToCheck", (methodPointerType)&m10750, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t355_m10750_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern Il2CppGenericContainer m24158_IGC;
extern TypeInfo m24158_gp_TRet_0_TI;
Il2CppGenericParamFull m24158_gp_TRet_0_TI_GenericParamFull = { { &m24158_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m24158_gp_TElem_1_TI;
Il2CppGenericParamFull m24158_gp_TElem_1_TI_GenericParamFull = { { &m24158_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m24158_IGPA[2] = 
{
	&m24158_gp_TRet_0_TI_GenericParamFull,
	&m24158_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m24158_MI;
Il2CppGenericContainer m24158_IGC = { { NULL, NULL }, NULL, &m24158_MI, 2, 1, m24158_IGPA };
MethodInfo m24158_MI = 
{
	"Do_CopyTo", NULL, &t355_TI, &t15_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t355_m10751_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t1946_0_0_0;
extern void* RuntimeInvoker_t1946_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10751_MI = 
{
	"make_pair", (methodPointerType)&m10751, &t355_TI, &t1946_0_0_0, RuntimeInvoker_t1946_t4_t16, t355_m10751_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t355_m10752_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10752_MI = 
{
	"pick_value", (methodPointerType)&m10752, &t355_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t16, t355_m10752_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1945_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t355_m10753_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1945_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10753_MI = 
{
	"CopyTo", (methodPointerType)&m10753, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t355_m10753_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern Il2CppGenericContainer m24159_IGC;
extern TypeInfo m24159_gp_TRet_0_TI;
Il2CppGenericParamFull m24159_gp_TRet_0_TI_GenericParamFull = { { &m24159_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m24159_IGPA[1] = 
{
	&m24159_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m24159_MI;
Il2CppGenericContainer m24159_IGC = { { NULL, NULL }, NULL, &m24159_MI, 1, 1, m24159_IGPA };
MethodInfo m24159_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t355_TI, &t15_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10754_MI = 
{
	"Resize", (methodPointerType)&m10754, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t355_m10755_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10755_MI = 
{
	"Add", (methodPointerType)&m10755, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t355_m10755_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10756_MI = 
{
	"Clear", (methodPointerType)&m10756, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t355_m10757_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10757_MI = 
{
	"ContainsKey", (methodPointerType)&m10757, &t355_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t355_m10757_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t355_m10758_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10758_MI = 
{
	"ContainsValue", (methodPointerType)&m10758, &t355_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t355_m10758_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t705_0_0_0;
extern Il2CppType t706_0_0_0;
static ParameterInfo t355_m10759_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t705_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t706_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t706 (MethodInfo* method, void* obj, void** args);
MethodInfo m10759_MI = 
{
	"GetObjectData", (methodPointerType)&m10759, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t706, t355_m10759_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t355_m10760_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10760_MI = 
{
	"OnDeserialization", (methodPointerType)&m10760, &t355_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t355_m10760_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t355_m10761_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10761_MI = 
{
	"Remove", (methodPointerType)&m10761, &t355_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t355_m10761_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t16_1_0_0;
static ParameterInfo t355_m10762_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_1_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t381 (MethodInfo* method, void* obj, void** args);
MethodInfo m10762_MI = 
{
	"TryGetValue", (methodPointerType)&m10762, &t355_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t381, t355_m10762_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t355_TI;
extern Il2CppType t1944_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10763_MI = 
{
	"get_Values", (methodPointerType)&m10763, &t355_TI, &t1944_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t355_m10764_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10764_MI = 
{
	"ToTKey", (methodPointerType)&m10764, &t355_TI, &t135_0_0_0, RuntimeInvoker_t4_t4, t355_m10764_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t355_m10765_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10765_MI = 
{
	"ToTValue", (methodPointerType)&m10765, &t355_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t355_m10765_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1946_0_0_0;
static ParameterInfo t355_m10766_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t1946_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1946 (MethodInfo* method, void* obj, void** args);
MethodInfo m10766_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m10766, &t355_TI, &t17_0_0_0, RuntimeInvoker_t17_t1946, t355_m10766_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t355_TI;
extern Il2CppType t1948_0_0_0;
extern void* RuntimeInvoker_t1948 (MethodInfo* method, void* obj, void** args);
MethodInfo m10767_MI = 
{
	"GetEnumerator", (methodPointerType)&m10767, &t355_TI, &t1948_0_0_0, RuntimeInvoker_t1948, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t355_m10768_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t355_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827_t4_t16 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t832__CustomAttributeCache_m7545;
MethodInfo m10768_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m10768, &t355_TI, &t827_0_0_0, RuntimeInvoker_t827_t4_t16, t355_m10768_ParameterInfos, &t832__CustomAttributeCache_m7545, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t355_MIs[] =
{
	&m10730_MI,
	&m10731_MI,
	&m10732_MI,
	&m10733_MI,
	&m10734_MI,
	&m10735_MI,
	&m10736_MI,
	&m10737_MI,
	&m10738_MI,
	&m10739_MI,
	&m10740_MI,
	&m10741_MI,
	&m10742_MI,
	&m10743_MI,
	&m10744_MI,
	&m10745_MI,
	&m10746_MI,
	&m10747_MI,
	&m10748_MI,
	&m10749_MI,
	&m10750_MI,
	&m24158_MI,
	&m10751_MI,
	&m10752_MI,
	&m10753_MI,
	&m24159_MI,
	&m10754_MI,
	&m10755_MI,
	&m10756_MI,
	&m10757_MI,
	&m10758_MI,
	&m10759_MI,
	&m10760_MI,
	&m10761_MI,
	&m10762_MI,
	&m10763_MI,
	&m10764_MI,
	&m10765_MI,
	&m10766_MI,
	&m10767_MI,
	&m10768_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10743_MI;
extern MethodInfo m10759_MI;
extern MethodInfo m10746_MI;
extern MethodInfo m10735_MI;
extern MethodInfo m10736_MI;
extern MethodInfo m10742_MI;
extern MethodInfo m10746_MI;
extern MethodInfo m10737_MI;
extern MethodInfo m10738_MI;
extern MethodInfo m10756_MI;
extern MethodInfo m10739_MI;
extern MethodInfo m10740_MI;
extern MethodInfo m10741_MI;
extern MethodInfo m10744_MI;
extern MethodInfo m10761_MI;
extern MethodInfo m10734_MI;
extern MethodInfo m10745_MI;
extern MethodInfo m10760_MI;
extern MethodInfo m10747_MI;
extern MethodInfo m10755_MI;
extern MethodInfo m10757_MI;
extern MethodInfo m10759_MI;
extern MethodInfo m10760_MI;
extern MethodInfo m10762_MI;
static MethodInfo* t355_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10743_MI,
	&m10759_MI,
	&m10746_MI,
	&m10735_MI,
	&m10736_MI,
	&m10742_MI,
	&m10746_MI,
	&m10737_MI,
	&m10738_MI,
	&m10756_MI,
	&m10739_MI,
	&m10740_MI,
	&m10741_MI,
	&m10744_MI,
	&m10761_MI,
	&m10734_MI,
	&m10745_MI,
	&m10760_MI,
	&m10747_MI,
	&m10755_MI,
	&m10757_MI,
	&m10759_MI,
	&m10760_MI,
	&m10762_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t364_TI;
extern TypeInfo t640_TI;
extern TypeInfo t3986_TI;
extern TypeInfo t3988_TI;
extern TypeInfo t5146_TI;
extern TypeInfo t729_TI;
extern TypeInfo t1486_TI;
static TypeInfo* t355_ITIs[] = 
{
	&t591_TI,
	&t364_TI,
	&t640_TI,
	&t3986_TI,
	&t3988_TI,
	&t5146_TI,
	&t729_TI,
	&t1486_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t364_TI;
extern TypeInfo t640_TI;
extern TypeInfo t3986_TI;
extern TypeInfo t3988_TI;
extern TypeInfo t5146_TI;
extern TypeInfo t729_TI;
extern TypeInfo t1486_TI;
static Il2CppInterfaceOffsetPair t355_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t364_TI, 5},
	{ &t640_TI, 6},
	{ &t3986_TI, 10},
	{ &t3988_TI, 17},
	{ &t5146_TI, 18},
	{ &t729_TI, 19},
	{ &t1486_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t355_0_0_0;
extern Il2CppType t355_1_0_0;
extern TypeInfo t4_TI;
struct t355;
extern TypeInfo t355_TI;
extern Il2CppGenericClass t355_GC;
extern CustomAttributesCache t832__CustomAttributeCache;
extern CustomAttributesCache t832__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t832__CustomAttributeCache_m7545;
TypeInfo t355_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t355_MIs, t355_PIs, t355_FIs, NULL, &t4_TI, NULL, NULL, &t355_TI, t355_ITIs, t355_VT, &t832__CustomAttributeCache, &t355_TI, &t355_0_0_0, &t355_1_0_0, t355_IOs, &t355_GC, NULL, t355_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t355), 0, -1, sizeof(t355_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 41, 7, 16, 0, 0, 28, 8, 8};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3986_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
extern MethodInfo m24160_MI;
static PropertyInfo t3986____Count_PropertyInfo = 
{
	&t3986_TI, "Count", &m24160_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24161_MI;
static PropertyInfo t3986____IsReadOnly_PropertyInfo = 
{
	&t3986_TI, "IsReadOnly", &m24161_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3986_PIs[] =
{
	&t3986____Count_PropertyInfo,
	&t3986____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3986_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24160_MI = 
{
	"get_Count", NULL, &t3986_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3986_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24161_MI = 
{
	"get_IsReadOnly", NULL, &t3986_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1946_0_0_0;
static ParameterInfo t3986_m24162_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1946_0_0_0},
};
extern TypeInfo t3986_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t1946 (MethodInfo* method, void* obj, void** args);
MethodInfo m24162_MI = 
{
	"Add", NULL, &t3986_TI, &t15_0_0_0, RuntimeInvoker_t15_t1946, t3986_m24162_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3986_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m24163_MI = 
{
	"Clear", NULL, &t3986_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1946_0_0_0;
static ParameterInfo t3986_m24164_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1946_0_0_0},
};
extern TypeInfo t3986_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1946 (MethodInfo* method, void* obj, void** args);
MethodInfo m24164_MI = 
{
	"Contains", NULL, &t3986_TI, &t17_0_0_0, RuntimeInvoker_t17_t1946, t3986_m24164_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1945_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t3986_m24165_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1945_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3986_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24165_MI = 
{
	"CopyTo", NULL, &t3986_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t3986_m24165_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1946_0_0_0;
static ParameterInfo t3986_m24166_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1946_0_0_0},
};
extern TypeInfo t3986_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1946 (MethodInfo* method, void* obj, void** args);
MethodInfo m24166_MI = 
{
	"Remove", NULL, &t3986_TI, &t17_0_0_0, RuntimeInvoker_t17_t1946, t3986_m24166_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3986_MIs[] =
{
	&m24160_MI,
	&m24161_MI,
	&m24162_MI,
	&m24163_MI,
	&m24164_MI,
	&m24165_MI,
	&m24166_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3988_TI;
static TypeInfo* t3986_ITIs[] = 
{
	&t591_TI,
	&t3988_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3986_0_0_0;
extern Il2CppType t3986_1_0_0;
struct t3986;
extern TypeInfo t3986_TI;
extern Il2CppGenericClass t3986_GC;
TypeInfo t3986_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3986_MIs, t3986_PIs, NULL, NULL, NULL, NULL, NULL, &t3986_TI, t3986_ITIs, NULL, &EmptyCustomAttributesCache, &t3986_TI, &t3986_0_0_0, &t3986_1_0_0, NULL, &t3986_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3988_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
extern TypeInfo t3988_TI;
extern Il2CppType t1947_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24167_MI = 
{
	"GetEnumerator", NULL, &t3988_TI, &t1947_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3988_MIs[] =
{
	&m24167_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t3988_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3988_0_0_0;
extern Il2CppType t3988_1_0_0;
struct t3988;
extern TypeInfo t3988_TI;
extern Il2CppGenericClass t3988_GC;
TypeInfo t3988_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3988_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3988_TI, t3988_ITIs, NULL, &EmptyCustomAttributesCache, &t3988_TI, &t3988_0_0_0, &t3988_1_0_0, NULL, &t3988_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1947_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
extern MethodInfo m24168_MI;
static PropertyInfo t1947____Current_PropertyInfo = 
{
	&t1947_TI, "Current", &m24168_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1947_PIs[] =
{
	&t1947____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1947_TI;
extern Il2CppType t1946_0_0_0;
extern void* RuntimeInvoker_t1946 (MethodInfo* method, void* obj, void** args);
MethodInfo m24168_MI = 
{
	"get_Current", NULL, &t1947_TI, &t1946_0_0_0, RuntimeInvoker_t1946, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1947_MIs[] =
{
	&m24168_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t1947_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1947_0_0_0;
extern Il2CppType t1947_1_0_0;
struct t1947;
extern TypeInfo t1947_TI;
extern Il2CppGenericClass t1947_GC;
TypeInfo t1947_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1947_MIs, t1947_PIs, NULL, NULL, NULL, NULL, NULL, &t1947_TI, t1947_ITIs, NULL, &EmptyCustomAttributesCache, &t1947_TI, &t1947_0_0_0, &t1947_1_0_0, NULL, &t1947_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1946_TI;

extern TypeInfo t1946_TI;
extern TypeInfo t434_TI;
extern TypeInfo t8_TI;
extern TypeInfo t135_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern MethodInfo m10771_MI;
extern MethodInfo m10773_MI;
extern MethodInfo m10770_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10772_MI;
extern MethodInfo m3401_MI;


extern MethodInfo m10769_MI;
 void m10769 (t1946 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	{
		m10771(__this, p0, &m10771_MI);
		m10773(__this, p1, &m10773_MI);
		return;
	}
}
extern MethodInfo m10770_MI;
 t4 * m10770 (t1946 * __this, MethodInfo* method){
	{
		t4 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m10771_MI;
 void m10771 (t1946 * __this, t4 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m10772_MI;
 int32_t m10772 (t1946 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10773_MI;
 void m10773 (t1946 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m10774_MI;
 t8* m10774 (t1946 * __this, MethodInfo* method){
	t4 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	t434* G_B2_1 = {0};
	t434* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	t434* G_B1_1 = {0};
	t434* G_B1_2 = {0};
	t8* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t434* G_B3_2 = {0};
	t434* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	t434* G_B5_1 = {0};
	t434* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t434* G_B4_1 = {0};
	t434* G_B4_2 = {0};
	t8* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t434* G_B6_2 = {0};
	t434* G_B6_3 = {0};
	{
		t434* L_0 = ((t434*)SZArrayNew(InitializedTypeInfo(&t434_TI), 5));
		ArrayElementTypeCheck (L_0, (t8*) &_stringLiteral174);
		*((t8**)(t8**)SZArrayLdElema(L_0, 0)) = (t8*)(t8*) &_stringLiteral174;
		t434* L_1 = L_0;
		t4 * L_2 = m10770(__this, &m10770_MI);
		t4 * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((t4 *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		t4 * L_4 = m10770(__this, &m10770_MI);
		V_0 = L_4;
		t8* L_5 = (t8*)VirtFuncInvoker0< t8* >::Invoke(&m22_MI, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
		G_B3_0 = (((t8_SFs*)(&t8_TI)->static_fields)->f2);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t8**)(t8**)SZArrayLdElema(G_B3_2, G_B3_1)) = (t8*)G_B3_0;
		t434* L_6 = G_B3_3;
		ArrayElementTypeCheck (L_6, (t8*) &_stringLiteral183);
		*((t8**)(t8**)SZArrayLdElema(L_6, 2)) = (t8*)(t8*) &_stringLiteral183;
		t434* L_7 = L_6;
		int32_t L_8 = m10772(__this, &m10772_MI);
		int32_t L_9 = L_8;
		t4 * L_10 = Box(InitializedTypeInfo(&t16_TI), &L_9);
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_10)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = m10772(__this, &m10772_MI);
		V_1 = L_11;
		t8* L_12 = (t8*)VirtFuncInvoker0< t8* >::Invoke(&m22_MI, Box(InitializedTypeInfo(&t16_TI), &(*(&V_1))));
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
		G_B6_0 = (((t8_SFs*)(&t8_TI)->static_fields)->f2);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t8**)(t8**)SZArrayLdElema(G_B6_2, G_B6_1)) = (t8*)G_B6_0;
		t434* L_13 = G_B6_3;
		ArrayElementTypeCheck (L_13, (t8*) &_stringLiteral175);
		*((t8**)(t8**)SZArrayLdElema(L_13, 4)) = (t8*)(t8*) &_stringLiteral175;
		IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
		t8* L_14 = m3401(NULL, L_13, &m3401_MI);
		return L_14;
	}
}
// Metadata Definition System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t135_0_0_1;
FieldInfo t1946_f0_FieldInfo = 
{
	"key", &t135_0_0_1, &t1946_TI, offsetof(t1946, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1946_f1_FieldInfo = 
{
	"value", &t16_0_0_1, &t1946_TI, offsetof(t1946, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1946_FIs[] =
{
	&t1946_f0_FieldInfo,
	&t1946_f1_FieldInfo,
	NULL
};
extern MethodInfo m10770_MI;
extern MethodInfo m10771_MI;
static PropertyInfo t1946____Key_PropertyInfo = 
{
	&t1946_TI, "Key", &m10770_MI, &m10771_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10772_MI;
extern MethodInfo m10773_MI;
static PropertyInfo t1946____Value_PropertyInfo = 
{
	&t1946_TI, "Value", &m10772_MI, &m10773_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1946_PIs[] =
{
	&t1946____Key_PropertyInfo,
	&t1946____Value_PropertyInfo,
	NULL
};
extern Il2CppType t135_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1946_m10769_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1946_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10769_MI = 
{
	".ctor", (methodPointerType)&m10769, &t1946_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1946_m10769_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1946_TI;
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10770_MI = 
{
	"get_Key", (methodPointerType)&m10770, &t1946_TI, &t135_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
static ParameterInfo t1946_m10771_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t1946_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10771_MI = 
{
	"set_Key", (methodPointerType)&m10771, &t1946_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1946_m10771_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1946_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10772_MI = 
{
	"get_Value", (methodPointerType)&m10772, &t1946_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1946_m10773_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1946_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10773_MI = 
{
	"set_Value", (methodPointerType)&m10773, &t1946_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1946_m10773_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1946_TI;
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10774_MI = 
{
	"ToString", (methodPointerType)&m10774, &t1946_TI, &t8_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1946_MIs[] =
{
	&m10769_MI,
	&m10770_MI,
	&m10771_MI,
	&m10772_MI,
	&m10773_MI,
	&m10774_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m10774_MI;
static MethodInfo* t1946_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m10774_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1946_0_0_0;
extern Il2CppType t1946_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1946_TI;
extern Il2CppGenericClass t1946_GC;
extern CustomAttributesCache t837__CustomAttributeCache;
TypeInfo t1946_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t1946_MIs, t1946_PIs, t1946_FIs, NULL, &t95_TI, NULL, NULL, &t1946_TI, NULL, t1946_VT, &t837__CustomAttributeCache, &t1946_TI, &t1946_0_0_0, &t1946_1_0_0, NULL, &t1946_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1946)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t1949.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1949_TI;
#include "t1949MD.h"

extern TypeInfo t1949_TI;
extern TypeInfo t1946_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10779_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m18084_MI;
struct t14;
 t1946  m18084 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18084_MI;


extern MethodInfo m10775_MI;
 void m10775 (t1949 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10776_MI;
 t4 * m10776 (t1949 * __this, MethodInfo* method){
	{
		t1946  L_0 = m10779(__this, &m10779_MI);
		t1946  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1946_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10777_MI;
 void m10777 (t1949 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10778_MI;
 bool m10778 (t1949 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t14 * L_1 = (__this->f0);
		int32_t L_2 = m3690(L_1, &m3690_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m10779_MI;
 t1946  m10779 (t1949 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral370, &m6887_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1269 * L_3 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_3, (t8*) &_stringLiteral371, &m6887_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t14 * L_4 = (__this->f0);
		t14 * L_5 = (__this->f0);
		int32_t L_6 = m3690(L_5, &m3690_MI);
		int32_t L_7 = (__this->f1);
		t1946  L_8 = m18084(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18084_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
extern Il2CppType t14_0_0_1;
FieldInfo t1949_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1949_TI, offsetof(t1949, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1949_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1949_TI, offsetof(t1949, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1949_FIs[] =
{
	&t1949_f0_FieldInfo,
	&t1949_f1_FieldInfo,
	NULL
};
extern MethodInfo m10776_MI;
static PropertyInfo t1949____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1949_TI, "System.Collections.IEnumerator.Current", &m10776_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10779_MI;
static PropertyInfo t1949____Current_PropertyInfo = 
{
	&t1949_TI, "Current", &m10779_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1949_PIs[] =
{
	&t1949____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1949____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1949_m10775_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1949_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10775_MI = 
{
	".ctor", (methodPointerType)&m10775, &t1949_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1949_m10775_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1949_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10776_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10776, &t1949_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1949_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10777_MI = 
{
	"Dispose", (methodPointerType)&m10777, &t1949_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1949_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10778_MI = 
{
	"MoveNext", (methodPointerType)&m10778, &t1949_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1949_TI;
extern Il2CppType t1946_0_0_0;
extern void* RuntimeInvoker_t1946 (MethodInfo* method, void* obj, void** args);
MethodInfo m10779_MI = 
{
	"get_Current", (methodPointerType)&m10779, &t1949_TI, &t1946_0_0_0, RuntimeInvoker_t1946, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1949_MIs[] =
{
	&m10775_MI,
	&m10776_MI,
	&m10777_MI,
	&m10778_MI,
	&m10779_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10776_MI;
extern MethodInfo m10778_MI;
extern MethodInfo m10777_MI;
extern MethodInfo m10779_MI;
static MethodInfo* t1949_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10776_MI,
	&m10778_MI,
	&m10777_MI,
	&m10779_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1947_TI;
static TypeInfo* t1949_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t1947_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1947_TI;
static Il2CppInterfaceOffsetPair t1949_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t1947_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1949_0_0_0;
extern Il2CppType t1949_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1949_TI;
extern Il2CppGenericClass t1949_GC;
extern TypeInfo t14_TI;
TypeInfo t1949_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1949_MIs, t1949_PIs, t1949_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1949_TI, t1949_ITIs, t1949_VT, &EmptyCustomAttributesCache, &t1949_TI, &t1949_0_0_0, &t1949_1_0_0, t1949_IOs, &t1949_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1949)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3987_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
extern MethodInfo m24169_MI;
extern MethodInfo m24170_MI;
static PropertyInfo t3987____Item_PropertyInfo = 
{
	&t3987_TI, "Item", &m24169_MI, &m24170_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3987_PIs[] =
{
	&t3987____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1946_0_0_0;
static ParameterInfo t3987_m24171_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1946_0_0_0},
};
extern TypeInfo t3987_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t1946 (MethodInfo* method, void* obj, void** args);
MethodInfo m24171_MI = 
{
	"IndexOf", NULL, &t3987_TI, &t16_0_0_0, RuntimeInvoker_t16_t1946, t3987_m24171_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1946_0_0_0;
static ParameterInfo t3987_m24172_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1946_0_0_0},
};
extern TypeInfo t3987_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t1946 (MethodInfo* method, void* obj, void** args);
MethodInfo m24172_MI = 
{
	"Insert", NULL, &t3987_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t1946, t3987_m24172_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3987_m24173_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3987_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24173_MI = 
{
	"RemoveAt", NULL, &t3987_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3987_m24173_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3987_m24169_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3987_TI;
extern Il2CppType t1946_0_0_0;
extern void* RuntimeInvoker_t1946_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24169_MI = 
{
	"get_Item", NULL, &t3987_TI, &t1946_0_0_0, RuntimeInvoker_t1946_t16, t3987_m24169_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1946_0_0_0;
static ParameterInfo t3987_m24170_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1946_0_0_0},
};
extern TypeInfo t3987_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t1946 (MethodInfo* method, void* obj, void** args);
MethodInfo m24170_MI = 
{
	"set_Item", NULL, &t3987_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t1946, t3987_m24170_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3987_MIs[] =
{
	&m24171_MI,
	&m24172_MI,
	&m24173_MI,
	&m24169_MI,
	&m24170_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3986_TI;
extern TypeInfo t3988_TI;
static TypeInfo* t3987_ITIs[] = 
{
	&t591_TI,
	&t3986_TI,
	&t3988_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3987_0_0_0;
extern Il2CppType t3987_1_0_0;
struct t3987;
extern TypeInfo t3987_TI;
extern Il2CppGenericClass t3987_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3987_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3987_MIs, t3987_PIs, NULL, NULL, NULL, NULL, NULL, &t3987_TI, t3987_ITIs, NULL, &t1400__CustomAttributeCache, &t3987_TI, &t3987_0_0_0, &t3987_1_0_0, NULL, &t3987_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5146_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t135_0_0_0;
static ParameterInfo t5146_m24174_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern TypeInfo t5146_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24174_MI = 
{
	"Remove", NULL, &t5146_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5146_m24174_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5146_MIs[] =
{
	&m24174_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3986_TI;
extern TypeInfo t3988_TI;
static TypeInfo* t5146_ITIs[] = 
{
	&t591_TI,
	&t3986_TI,
	&t3988_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5146_0_0_0;
extern Il2CppType t5146_1_0_0;
struct t5146;
extern TypeInfo t5146_TI;
extern Il2CppGenericClass t5146_GC;
extern CustomAttributesCache t1460__CustomAttributeCache;
TypeInfo t5146_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5146_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5146_TI, t5146_ITIs, NULL, &t1460__CustomAttributeCache, &t5146_TI, &t5146_0_0_0, &t5146_1_0_0, NULL, &t5146_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1944_TI;

#include "t1950.h"
#include "t1951.h"
extern TypeInfo t1944_TI;
extern TypeInfo t640_TI;
extern TypeInfo t4_TI;
extern TypeInfo t355_TI;
extern TypeInfo t16_TI;
extern TypeInfo t328_TI;
extern TypeInfo t335_TI;
extern TypeInfo t1950_TI;
extern TypeInfo t704_TI;
extern TypeInfo t15_TI;
extern TypeInfo t1951_TI;
#include "t1951MD.h"
#include "t1950MD.h"
extern MethodInfo m7381_MI;
extern MethodInfo m10746_MI;
extern MethodInfo m15_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m6989_MI;
extern MethodInfo m10758_MI;
extern MethodInfo m10792_MI;
extern MethodInfo m10791_MI;
extern MethodInfo m10750_MI;
extern MethodInfo m10752_MI;
extern MethodInfo m10810_MI;
extern MethodInfo m18095_MI;
extern MethodInfo m18096_MI;
extern MethodInfo m10794_MI;
struct t355;
 void m18095 (t355 * __this, t14 * p0, int32_t p1, t1951 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18095_MI;
struct t355;
 void m18096 (t355 * __this, t704* p0, int32_t p1, t1951 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18096_MI;


extern MethodInfo m10780_MI;
 void m10780 (t1944 * __this, t355 * p0, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral549, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m10781_MI;
 void m10781 (t1944 * __this, int32_t p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m6989(L_0, (t8*) &_stringLiteral550, &m6989_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10782_MI;
 void m10782 (t1944 * __this, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m6989(L_0, (t8*) &_stringLiteral550, &m6989_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10783_MI;
 bool m10783 (t1944 * __this, int32_t p0, MethodInfo* method){
	{
		t355 * L_0 = (__this->f0);
		bool L_1 = m10758(L_0, p0, &m10758_MI);
		return L_1;
	}
}
extern MethodInfo m10784_MI;
 bool m10784 (t1944 * __this, int32_t p0, MethodInfo* method){
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m6989(L_0, (t8*) &_stringLiteral550, &m6989_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10785_MI;
 t4* m10785 (t1944 * __this, MethodInfo* method){
	{
		t1950  L_0 = m10792(__this, &m10792_MI);
		t1950  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1950_TI), &L_1);
		return (t4*)L_2;
	}
}
extern MethodInfo m10786_MI;
 void m10786 (t1944 * __this, t14 * p0, int32_t p1, MethodInfo* method){
	t704* V_0 = {0};
	{
		V_0 = ((t704*)IsInst(p0, InitializedTypeInfo(&t704_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t704*, int32_t >::Invoke(&m10791_MI, __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t355 * L_0 = (__this->f0);
		m10750(L_0, p0, p1, &m10750_MI);
		t355 * L_1 = (__this->f0);
		t50 L_2 = { &m10752_MI };
		t1951 * L_3 = (t1951 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1951_TI));
		m10810(L_3, NULL, L_2, &m10810_MI);
		m18095(L_1, p0, p1, L_3, &m18095_MI);
		return;
	}
}
extern MethodInfo m10787_MI;
 t4 * m10787 (t1944 * __this, MethodInfo* method){
	{
		t1950  L_0 = m10792(__this, &m10792_MI);
		t1950  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1950_TI), &L_1);
		return (t4 *)L_2;
	}
}
extern MethodInfo m10788_MI;
 bool m10788 (t1944 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m10789_MI;
 bool m10789 (t1944 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m10790_MI;
 t4 * m10790 (t1944 * __this, MethodInfo* method){
	{
		t355 * L_0 = (__this->f0);
		t4 * L_1 = (t4 *)InterfaceFuncInvoker0< t4 * >::Invoke(&m7381_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m10791_MI;
 void m10791 (t1944 * __this, t704* p0, int32_t p1, MethodInfo* method){
	{
		t355 * L_0 = (__this->f0);
		m10750(L_0, (t14 *)(t14 *)p0, p1, &m10750_MI);
		t355 * L_1 = (__this->f0);
		t50 L_2 = { &m10752_MI };
		t1951 * L_3 = (t1951 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1951_TI));
		m10810(L_3, NULL, L_2, &m10810_MI);
		m18096(L_1, p0, p1, L_3, &m18096_MI);
		return;
	}
}
extern MethodInfo m10792_MI;
 t1950  m10792 (t1944 * __this, MethodInfo* method){
	{
		t355 * L_0 = (__this->f0);
		t1950  L_1 = {0};
		m10794(&L_1, L_0, &m10794_MI);
		return L_1;
	}
}
extern MethodInfo m10793_MI;
 int32_t m10793 (t1944 * __this, MethodInfo* method){
	{
		t355 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m10746_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t355_0_0_1;
FieldInfo t1944_f0_FieldInfo = 
{
	"dictionary", &t355_0_0_1, &t1944_TI, offsetof(t1944, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1944_FIs[] =
{
	&t1944_f0_FieldInfo,
	NULL
};
extern MethodInfo m10788_MI;
static PropertyInfo t1944____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t1944_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m10788_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10789_MI;
static PropertyInfo t1944____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1944_TI, "System.Collections.ICollection.IsSynchronized", &m10789_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10790_MI;
static PropertyInfo t1944____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1944_TI, "System.Collections.ICollection.SyncRoot", &m10790_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10793_MI;
static PropertyInfo t1944____Count_PropertyInfo = 
{
	&t1944_TI, "Count", &m10793_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1944_PIs[] =
{
	&t1944____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t1944____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1944____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1944____Count_PropertyInfo,
	NULL
};
extern Il2CppType t355_0_0_0;
static ParameterInfo t1944_m10780_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t355_0_0_0},
};
extern TypeInfo t1944_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10780_MI = 
{
	".ctor", (methodPointerType)&m10780, &t1944_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1944_m10780_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1944_m10781_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1944_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10781_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m10781, &t1944_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1944_m10781_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1944_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10782_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m10782, &t1944_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1944_m10783_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1944_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10783_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m10783, &t1944_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t1944_m10783_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1944_m10784_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1944_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10784_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m10784, &t1944_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t1944_m10784_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1944_TI;
extern Il2CppType t1926_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10785_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m10785, &t1944_TI, &t1926_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1944_m10786_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1944_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10786_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10786, &t1944_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1944_m10786_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1944_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10787_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10787, &t1944_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1944_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10788_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m10788, &t1944_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1944_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10789_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10789, &t1944_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1944_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10790_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10790, &t1944_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t704_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1944_m10791_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t704_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1944_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10791_MI = 
{
	"CopyTo", (methodPointerType)&m10791, &t1944_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1944_m10791_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1944_TI;
extern Il2CppType t1950_0_0_0;
extern void* RuntimeInvoker_t1950 (MethodInfo* method, void* obj, void** args);
MethodInfo m10792_MI = 
{
	"GetEnumerator", (methodPointerType)&m10792, &t1944_TI, &t1950_0_0_0, RuntimeInvoker_t1950, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1944_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10793_MI = 
{
	"get_Count", (methodPointerType)&m10793, &t1944_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1944_MIs[] =
{
	&m10780_MI,
	&m10781_MI,
	&m10782_MI,
	&m10783_MI,
	&m10784_MI,
	&m10785_MI,
	&m10786_MI,
	&m10787_MI,
	&m10788_MI,
	&m10789_MI,
	&m10790_MI,
	&m10791_MI,
	&m10792_MI,
	&m10793_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10787_MI;
extern MethodInfo m10793_MI;
extern MethodInfo m10789_MI;
extern MethodInfo m10790_MI;
extern MethodInfo m10786_MI;
extern MethodInfo m10793_MI;
extern MethodInfo m10788_MI;
extern MethodInfo m10781_MI;
extern MethodInfo m10782_MI;
extern MethodInfo m10783_MI;
extern MethodInfo m10791_MI;
extern MethodInfo m10784_MI;
extern MethodInfo m10785_MI;
static MethodInfo* t1944_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10787_MI,
	&m10793_MI,
	&m10789_MI,
	&m10790_MI,
	&m10786_MI,
	&m10793_MI,
	&m10788_MI,
	&m10781_MI,
	&m10782_MI,
	&m10783_MI,
	&m10791_MI,
	&m10784_MI,
	&m10785_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t3789_TI;
extern TypeInfo t3791_TI;
static TypeInfo* t1944_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t3789_TI,
	&t3791_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t3789_TI;
extern TypeInfo t3791_TI;
static Il2CppInterfaceOffsetPair t1944_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t3789_TI, 9},
	{ &t3791_TI, 16},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1944_0_0_0;
extern Il2CppType t1944_1_0_0;
extern TypeInfo t4_TI;
struct t1944;
extern TypeInfo t1944_TI;
extern Il2CppGenericClass t1944_GC;
extern TypeInfo t832_TI;
extern CustomAttributesCache t830__CustomAttributeCache;
TypeInfo t1944_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t1944_MIs, t1944_PIs, t1944_FIs, NULL, &t4_TI, NULL, &t832_TI, &t1944_TI, t1944_ITIs, t1944_VT, &t830__CustomAttributeCache, &t1944_TI, &t1944_0_0_0, &t1944_1_0_0, t1944_IOs, &t1944_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1944), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1950_TI;

extern TypeInfo t1950_TI;
extern TypeInfo t16_TI;
extern TypeInfo t1948_TI;
extern TypeInfo t15_TI;
extern TypeInfo t17_TI;
extern MethodInfo m10806_MI;
extern MethodInfo m10772_MI;
extern MethodInfo m10767_MI;
extern MethodInfo m10809_MI;
extern MethodInfo m10803_MI;


extern MethodInfo m10794_MI;
 void m10794 (t1950 * __this, t355 * p0, MethodInfo* method){
	{
		t1948  L_0 = m10767(p0, &m10767_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10795_MI;
 t4 * m10795 (t1950 * __this, MethodInfo* method){
	{
		t1948 * L_0 = &(__this->f0);
		int32_t L_1 = m10806(L_0, &m10806_MI);
		int32_t L_2 = L_1;
		t4 * L_3 = Box(InitializedTypeInfo(&t16_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m10796_MI;
 void m10796 (t1950 * __this, MethodInfo* method){
	{
		t1948 * L_0 = &(__this->f0);
		m10809(L_0, &m10809_MI);
		return;
	}
}
extern MethodInfo m10797_MI;
 bool m10797 (t1950 * __this, MethodInfo* method){
	{
		t1948 * L_0 = &(__this->f0);
		bool L_1 = m10803(L_0, &m10803_MI);
		return L_1;
	}
}
extern MethodInfo m10798_MI;
 int32_t m10798 (t1950 * __this, MethodInfo* method){
	{
		t1948 * L_0 = &(__this->f0);
		t1946 * L_1 = &(L_0->f3);
		int32_t L_2 = m10772(L_1, &m10772_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t1948_0_0_1;
FieldInfo t1950_f0_FieldInfo = 
{
	"host_enumerator", &t1948_0_0_1, &t1950_TI, offsetof(t1950, f0) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1950_FIs[] =
{
	&t1950_f0_FieldInfo,
	NULL
};
extern MethodInfo m10795_MI;
static PropertyInfo t1950____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1950_TI, "System.Collections.IEnumerator.Current", &m10795_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10798_MI;
static PropertyInfo t1950____Current_PropertyInfo = 
{
	&t1950_TI, "Current", &m10798_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1950_PIs[] =
{
	&t1950____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1950____Current_PropertyInfo,
	NULL
};
extern Il2CppType t355_0_0_0;
static ParameterInfo t1950_m10794_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t355_0_0_0},
};
extern TypeInfo t1950_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10794_MI = 
{
	".ctor", (methodPointerType)&m10794, &t1950_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1950_m10794_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1950_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10795_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10795, &t1950_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1950_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10796_MI = 
{
	"Dispose", (methodPointerType)&m10796, &t1950_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1950_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10797_MI = 
{
	"MoveNext", (methodPointerType)&m10797, &t1950_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1950_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10798_MI = 
{
	"get_Current", (methodPointerType)&m10798, &t1950_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1950_MIs[] =
{
	&m10794_MI,
	&m10795_MI,
	&m10796_MI,
	&m10797_MI,
	&m10798_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10795_MI;
extern MethodInfo m10797_MI;
extern MethodInfo m10796_MI;
extern MethodInfo m10798_MI;
static MethodInfo* t1950_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10795_MI,
	&m10797_MI,
	&m10796_MI,
	&m10798_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1926_TI;
static TypeInfo* t1950_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t1926_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1926_TI;
static Il2CppInterfaceOffsetPair t1950_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t1926_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1950_0_0_0;
extern Il2CppType t1950_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1950_TI;
extern Il2CppGenericClass t1950_GC;
extern TypeInfo t830_TI;
TypeInfo t1950_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1950_MIs, t1950_PIs, t1950_FIs, NULL, &t95_TI, NULL, &t830_TI, &t1950_TI, t1950_ITIs, t1950_VT, &EmptyCustomAttributesCache, &t1950_TI, &t1950_0_0_0, &t1950_1_0_0, t1950_IOs, &t1950_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1950)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1948_TI;

extern TypeInfo t1948_TI;
extern TypeInfo t1946_TI;
extern TypeInfo t135_TI;
extern TypeInfo t16_TI;
extern TypeInfo t827_TI;
extern TypeInfo t355_TI;
extern TypeInfo t825_TI;
extern TypeInfo t1286_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10808_MI;
extern MethodInfo m10770_MI;
extern MethodInfo m10772_MI;
extern MethodInfo m4332_MI;
extern MethodInfo m10805_MI;
extern MethodInfo m10807_MI;
extern MethodInfo m10769_MI;
extern MethodInfo m7091_MI;
extern MethodInfo m6887_MI;


extern MethodInfo m10799_MI;
 void m10799 (t1948 * __this, t355 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m10800_MI;
 t4 * m10800 (t1948 * __this, MethodInfo* method){
	{
		m10808(__this, &m10808_MI);
		t1946  L_0 = (__this->f3);
		t1946  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1946_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10801_MI;
 t827  m10801 (t1948 * __this, MethodInfo* method){
	{
		m10808(__this, &m10808_MI);
		t1946 * L_0 = &(__this->f3);
		t4 * L_1 = m10770(L_0, &m10770_MI);
		t4 * L_2 = L_1;
		t1946 * L_3 = &(__this->f3);
		int32_t L_4 = m10772(L_3, &m10772_MI);
		int32_t L_5 = L_4;
		t4 * L_6 = Box(InitializedTypeInfo(&t16_TI), &L_5);
		t827  L_7 = {0};
		m4332(&L_7, ((t4 *)L_2), L_6, &m4332_MI);
		return L_7;
	}
}
extern MethodInfo m10802_MI;
 t4 * m10802 (t1948 * __this, MethodInfo* method){
	{
		t4 * L_0 = m10805(__this, &m10805_MI);
		t4 * L_1 = L_0;
		return ((t4 *)L_1);
	}
}
extern MethodInfo m10803_MI;
 bool m10803 (t1948 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m10807(__this, &m10807_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->f1 = ((int32_t)(L_2+1));
		V_0 = V_1;
		t355 * L_3 = (__this->f0);
		t1450* L_4 = (L_3->f5);
		int32_t L_5 = (((t825 *)(t825 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)(L_5&((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t355 * L_6 = (__this->f0);
		t1915* L_7 = (L_6->f6);
		t355 * L_8 = (__this->f0);
		t704* L_9 = (L_8->f7);
		t1946  L_10 = {0};
		m10769(&L_10, (*(t4 **)(t4 **)SZArrayLdElema(L_7, V_0)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, V_0)), &m10769_MI);
		__this->f3 = L_10;
		return 1;
	}

IL_0072:
	{
		int32_t L_11 = (__this->f1);
		t355 * L_12 = (__this->f0);
		int32_t L_13 = (L_12->f8);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m10804_MI;
 t1946  m10804 (t1948 * __this, MethodInfo* method){
	{
		t1946  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10805_MI;
 t4 * m10805 (t1948 * __this, MethodInfo* method){
	{
		m10808(__this, &m10808_MI);
		t1946 * L_0 = &(__this->f3);
		t4 * L_1 = m10770(L_0, &m10770_MI);
		return L_1;
	}
}
extern MethodInfo m10806_MI;
 int32_t m10806 (t1948 * __this, MethodInfo* method){
	{
		m10808(__this, &m10808_MI);
		t1946 * L_0 = &(__this->f3);
		int32_t L_1 = m10772(L_0, &m10772_MI);
		return L_1;
	}
}
extern MethodInfo m10807_MI;
 void m10807 (t1948 * __this, MethodInfo* method){
	{
		t355 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1286 * L_1 = (t1286 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1286_TI));
		m7091(L_1, (t8*)NULL, &m7091_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000f:
	{
		t355 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f14);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1269 * L_5 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_5, (t8*) &_stringLiteral547, &m6887_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m10808_MI;
 void m10808 (t1948 * __this, MethodInfo* method){
	{
		m10807(__this, &m10807_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral548, &m6887_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001a:
	{
		return;
	}
}
extern MethodInfo m10809_MI;
 void m10809 (t1948 * __this, MethodInfo* method){
	{
		__this->f0 = (t355 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t355_0_0_1;
FieldInfo t1948_f0_FieldInfo = 
{
	"dictionary", &t355_0_0_1, &t1948_TI, offsetof(t1948, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1948_f1_FieldInfo = 
{
	"next", &t16_0_0_1, &t1948_TI, offsetof(t1948, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1948_f2_FieldInfo = 
{
	"stamp", &t16_0_0_1, &t1948_TI, offsetof(t1948, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t1946_0_0_3;
FieldInfo t1948_f3_FieldInfo = 
{
	"current", &t1946_0_0_3, &t1948_TI, offsetof(t1948, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1948_FIs[] =
{
	&t1948_f0_FieldInfo,
	&t1948_f1_FieldInfo,
	&t1948_f2_FieldInfo,
	&t1948_f3_FieldInfo,
	NULL
};
extern MethodInfo m10800_MI;
static PropertyInfo t1948____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1948_TI, "System.Collections.IEnumerator.Current", &m10800_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10801_MI;
static PropertyInfo t1948____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t1948_TI, "System.Collections.IDictionaryEnumerator.Entry", &m10801_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10802_MI;
static PropertyInfo t1948____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t1948_TI, "System.Collections.IDictionaryEnumerator.Key", &m10802_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10804_MI;
static PropertyInfo t1948____Current_PropertyInfo = 
{
	&t1948_TI, "Current", &m10804_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10805_MI;
static PropertyInfo t1948____CurrentKey_PropertyInfo = 
{
	&t1948_TI, "CurrentKey", &m10805_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10806_MI;
static PropertyInfo t1948____CurrentValue_PropertyInfo = 
{
	&t1948_TI, "CurrentValue", &m10806_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1948_PIs[] =
{
	&t1948____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1948____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t1948____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t1948____Current_PropertyInfo,
	&t1948____CurrentKey_PropertyInfo,
	&t1948____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t355_0_0_0;
static ParameterInfo t1948_m10799_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t355_0_0_0},
};
extern TypeInfo t1948_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10799_MI = 
{
	".ctor", (methodPointerType)&m10799, &t1948_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1948_m10799_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1948_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10800_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10800, &t1948_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1948_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827 (MethodInfo* method, void* obj, void** args);
MethodInfo m10801_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m10801, &t1948_TI, &t827_0_0_0, RuntimeInvoker_t827, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1948_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10802_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m10802, &t1948_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1948_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10803_MI = 
{
	"MoveNext", (methodPointerType)&m10803, &t1948_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1948_TI;
extern Il2CppType t1946_0_0_0;
extern void* RuntimeInvoker_t1946 (MethodInfo* method, void* obj, void** args);
MethodInfo m10804_MI = 
{
	"get_Current", (methodPointerType)&m10804, &t1948_TI, &t1946_0_0_0, RuntimeInvoker_t1946, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1948_TI;
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10805_MI = 
{
	"get_CurrentKey", (methodPointerType)&m10805, &t1948_TI, &t135_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1948_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10806_MI = 
{
	"get_CurrentValue", (methodPointerType)&m10806, &t1948_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1948_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10807_MI = 
{
	"VerifyState", (methodPointerType)&m10807, &t1948_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1948_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10808_MI = 
{
	"VerifyCurrent", (methodPointerType)&m10808, &t1948_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1948_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10809_MI = 
{
	"Dispose", (methodPointerType)&m10809, &t1948_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1948_MIs[] =
{
	&m10799_MI,
	&m10800_MI,
	&m10801_MI,
	&m10802_MI,
	&m10803_MI,
	&m10804_MI,
	&m10805_MI,
	&m10806_MI,
	&m10807_MI,
	&m10808_MI,
	&m10809_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10800_MI;
extern MethodInfo m10803_MI;
extern MethodInfo m10809_MI;
extern MethodInfo m10804_MI;
extern MethodInfo m10801_MI;
extern MethodInfo m10802_MI;
static MethodInfo* t1948_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10800_MI,
	&m10803_MI,
	&m10809_MI,
	&m10804_MI,
	&m10801_MI,
	&m10802_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1947_TI;
extern TypeInfo t833_TI;
static TypeInfo* t1948_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t1947_TI,
	&t833_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1947_TI;
extern TypeInfo t833_TI;
static Il2CppInterfaceOffsetPair t1948_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t1947_TI, 7},
	{ &t833_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1948_0_0_0;
extern Il2CppType t1948_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1948_TI;
extern Il2CppGenericClass t1948_GC;
extern TypeInfo t832_TI;
TypeInfo t1948_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1948_MIs, t1948_PIs, t1948_FIs, NULL, &t95_TI, NULL, &t832_TI, &t1948_TI, t1948_ITIs, t1948_VT, &EmptyCustomAttributesCache, &t1948_TI, &t1948_0_0_0, &t1948_1_0_0, t1948_IOs, &t1948_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1948)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1951_TI;



extern MethodInfo m10810_MI;
 void m10810 (t1951 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10811_MI;
 int32_t m10811 (t1951 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	typedef  int32_t (*FunctionPointerType) (t4 * __this, t4 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m10811((t1951 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10812_MI;
 t4 * m10812 (t1951 * __this, t4 * p0, int32_t p1, t49 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t16_TI), &p1);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10813_MI;
 int32_t m10813 (t1951 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1951_m10810_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10810_MI = 
{
	".ctor", (methodPointerType)&m10810, &t1951_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1951_m10810_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1951_m10811_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10811_MI = 
{
	"Invoke", (methodPointerType)&m10811, &t1951_TI, &t16_0_0_0, RuntimeInvoker_t16_t4_t16, t1951_m10811_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t16_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1951_m10812_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10812_MI = 
{
	"BeginInvoke", (methodPointerType)&m10812, &t1951_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t16_t4_t4, t1951_m10812_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1951_m10813_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1951_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10813_MI = 
{
	"EndInvoke", (methodPointerType)&m10813, &t1951_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t1951_m10813_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1951_MIs[] =
{
	&m10810_MI,
	&m10811_MI,
	&m10812_MI,
	&m10813_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m10811_MI;
extern MethodInfo m10812_MI;
extern MethodInfo m10813_MI;
static MethodInfo* t1951_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m10811_MI,
	&m10812_MI,
	&m10813_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1951_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1951_0_0_0;
extern Il2CppType t1951_1_0_0;
extern TypeInfo t189_TI;
struct t1951;
extern TypeInfo t1951_TI;
extern Il2CppGenericClass t1951_GC;
extern TypeInfo t832_TI;
TypeInfo t1951_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1951_MIs, NULL, NULL, NULL, &t189_TI, NULL, &t832_TI, &t1951_TI, NULL, t1951_VT, &EmptyCustomAttributesCache, &t1951_TI, &t1951_0_0_0, &t1951_1_0_0, t1951_IOs, &t1951_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1951), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1943_TI;



extern MethodInfo m10814_MI;
 void m10814 (t1943 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10815_MI;
 t827  m10815 (t1943 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	typedef  t827  (*FunctionPointerType) (t4 * __this, t4 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m10815((t1943 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10816_MI;
 t4 * m10816 (t1943 * __this, t4 * p0, int32_t p1, t49 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t16_TI), &p1);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10817_MI;
 t827  m10817 (t1943 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t827 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1943_m10814_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1943_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10814_MI = 
{
	".ctor", (methodPointerType)&m10814, &t1943_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1943_m10814_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1943_m10815_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1943_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10815_MI = 
{
	"Invoke", (methodPointerType)&m10815, &t1943_TI, &t827_0_0_0, RuntimeInvoker_t827_t4_t16, t1943_m10815_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t16_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1943_m10816_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1943_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10816_MI = 
{
	"BeginInvoke", (methodPointerType)&m10816, &t1943_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t16_t4_t4, t1943_m10816_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1943_m10817_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1943_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10817_MI = 
{
	"EndInvoke", (methodPointerType)&m10817, &t1943_TI, &t827_0_0_0, RuntimeInvoker_t827_t4, t1943_m10817_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1943_MIs[] =
{
	&m10814_MI,
	&m10815_MI,
	&m10816_MI,
	&m10817_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m10815_MI;
extern MethodInfo m10816_MI;
extern MethodInfo m10817_MI;
static MethodInfo* t1943_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m10815_MI,
	&m10816_MI,
	&m10817_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1943_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1943_0_0_0;
extern Il2CppType t1943_1_0_0;
extern TypeInfo t189_TI;
struct t1943;
extern TypeInfo t1943_TI;
extern Il2CppGenericClass t1943_GC;
extern TypeInfo t832_TI;
TypeInfo t1943_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1943_MIs, NULL, NULL, NULL, &t189_TI, NULL, &t832_TI, &t1943_TI, NULL, t1943_VT, &EmptyCustomAttributesCache, &t1943_TI, &t1943_0_0_0, &t1943_1_0_0, t1943_IOs, &t1943_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1943), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1952_TI;



extern MethodInfo m10818_MI;
 void m10818 (t1952 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10819_MI;
 t1946  m10819 (t1952 * __this, t4 * p0, int32_t p1, MethodInfo* method){
	typedef  t1946  (*FunctionPointerType) (t4 * __this, t4 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m10819((t1952 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10820_MI;
 t4 * m10820 (t1952 * __this, t4 * p0, int32_t p1, t49 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t16_TI), &p1);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10821_MI;
 t1946  m10821 (t1952 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1946 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1952_m10818_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1952_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10818_MI = 
{
	".ctor", (methodPointerType)&m10818, &t1952_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1952_m10818_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1952_m10819_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1952_TI;
extern Il2CppType t1946_0_0_0;
extern void* RuntimeInvoker_t1946_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10819_MI = 
{
	"Invoke", (methodPointerType)&m10819, &t1952_TI, &t1946_0_0_0, RuntimeInvoker_t1946_t4_t16, t1952_m10819_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t135_0_0_0;
extern Il2CppType t16_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1952_m10820_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1952_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t16_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10820_MI = 
{
	"BeginInvoke", (methodPointerType)&m10820, &t1952_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t16_t4_t4, t1952_m10820_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1952_m10821_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1952_TI;
extern Il2CppType t1946_0_0_0;
extern void* RuntimeInvoker_t1946_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10821_MI = 
{
	"EndInvoke", (methodPointerType)&m10821, &t1952_TI, &t1946_0_0_0, RuntimeInvoker_t1946_t4, t1952_m10821_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1952_MIs[] =
{
	&m10818_MI,
	&m10819_MI,
	&m10820_MI,
	&m10821_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m10819_MI;
extern MethodInfo m10820_MI;
extern MethodInfo m10821_MI;
static MethodInfo* t1952_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m10819_MI,
	&m10820_MI,
	&m10821_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1952_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1952_0_0_0;
extern Il2CppType t1952_1_0_0;
extern TypeInfo t189_TI;
struct t1952;
extern TypeInfo t1952_TI;
extern Il2CppGenericClass t1952_GC;
extern TypeInfo t832_TI;
TypeInfo t1952_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1952_MIs, NULL, NULL, NULL, &t189_TI, NULL, &t832_TI, &t1952_TI, NULL, t1952_VT, &EmptyCustomAttributesCache, &t1952_TI, &t1952_0_0_0, &t1952_1_0_0, t1952_IOs, &t1952_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1952), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1953_TI;

extern TypeInfo t1953_TI;
extern TypeInfo t1948_TI;
extern TypeInfo t833_TI;
extern TypeInfo t827_TI;
extern TypeInfo t1946_TI;
extern TypeInfo t135_TI;
extern TypeInfo t17_TI;
extern MethodInfo m7691_MI;
extern MethodInfo m10804_MI;
extern MethodInfo m10770_MI;
extern MethodInfo m10824_MI;
extern MethodInfo m15_MI;
extern MethodInfo m10767_MI;
extern MethodInfo m10803_MI;


extern MethodInfo m10822_MI;
 void m10822 (t1953 * __this, t355 * p0, MethodInfo* method){
	{
		m15(__this, &m15_MI);
		t1948  L_0 = m10767(p0, &m10767_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10823_MI;
 bool m10823 (t1953 * __this, MethodInfo* method){
	{
		t1948 * L_0 = &(__this->f0);
		bool L_1 = m10803(L_0, &m10803_MI);
		return L_1;
	}
}
extern MethodInfo m10824_MI;
 t827  m10824 (t1953 * __this, MethodInfo* method){
	{
		t1948  L_0 = (__this->f0);
		t1948  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1948_TI), &L_1);
		t827  L_3 = (t827 )InterfaceFuncInvoker0< t827  >::Invoke(&m7691_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m10825_MI;
 t4 * m10825 (t1953 * __this, MethodInfo* method){
	t1946  V_0 = {0};
	{
		t1948 * L_0 = &(__this->f0);
		t1946  L_1 = m10804(L_0, &m10804_MI);
		V_0 = L_1;
		t4 * L_2 = m10770((&V_0), &m10770_MI);
		t4 * L_3 = L_2;
		return ((t4 *)L_3);
	}
}
extern MethodInfo m10826_MI;
 t4 * m10826 (t1953 * __this, MethodInfo* method){
	{
		t827  L_0 = (t827 )VirtFuncInvoker0< t827  >::Invoke(&m10824_MI, __this);
		t827  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t827_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t1948_0_0_1;
FieldInfo t1953_f0_FieldInfo = 
{
	"host_enumerator", &t1948_0_0_1, &t1953_TI, offsetof(t1953, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1953_FIs[] =
{
	&t1953_f0_FieldInfo,
	NULL
};
extern MethodInfo m10824_MI;
static PropertyInfo t1953____Entry_PropertyInfo = 
{
	&t1953_TI, "Entry", &m10824_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10825_MI;
static PropertyInfo t1953____Key_PropertyInfo = 
{
	&t1953_TI, "Key", &m10825_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10826_MI;
static PropertyInfo t1953____Current_PropertyInfo = 
{
	&t1953_TI, "Current", &m10826_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1953_PIs[] =
{
	&t1953____Entry_PropertyInfo,
	&t1953____Key_PropertyInfo,
	&t1953____Current_PropertyInfo,
	NULL
};
extern Il2CppType t355_0_0_0;
static ParameterInfo t1953_m10822_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t355_0_0_0},
};
extern TypeInfo t1953_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10822_MI = 
{
	".ctor", (methodPointerType)&m10822, &t1953_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1953_m10822_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1953_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10823_MI = 
{
	"MoveNext", (methodPointerType)&m10823, &t1953_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1953_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827 (MethodInfo* method, void* obj, void** args);
MethodInfo m10824_MI = 
{
	"get_Entry", (methodPointerType)&m10824, &t1953_TI, &t827_0_0_0, RuntimeInvoker_t827, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1953_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10825_MI = 
{
	"get_Key", (methodPointerType)&m10825, &t1953_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1953_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10826_MI = 
{
	"get_Current", (methodPointerType)&m10826, &t1953_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1953_MIs[] =
{
	&m10822_MI,
	&m10823_MI,
	&m10824_MI,
	&m10825_MI,
	&m10826_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10826_MI;
extern MethodInfo m10823_MI;
extern MethodInfo m10824_MI;
extern MethodInfo m10825_MI;
static MethodInfo* t1953_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10826_MI,
	&m10823_MI,
	&m10824_MI,
	&m10825_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t833_TI;
static TypeInfo* t1953_ITIs[] = 
{
	&t123_TI,
	&t833_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t833_TI;
static Il2CppInterfaceOffsetPair t1953_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t833_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1953_0_0_0;
extern Il2CppType t1953_1_0_0;
extern TypeInfo t4_TI;
struct t1953;
extern TypeInfo t1953_TI;
extern Il2CppGenericClass t1953_GC;
extern TypeInfo t832_TI;
TypeInfo t1953_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t1953_MIs, t1953_PIs, t1953_FIs, NULL, &t4_TI, NULL, &t832_TI, &t1953_TI, t1953_ITIs, t1953_VT, &EmptyCustomAttributesCache, &t1953_TI, &t1953_0_0_0, &t1953_1_0_0, t1953_IOs, &t1953_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1953), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#include "t144.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t144_TI;
#include "t144MD.h"

#include "t138.h"
#include "t340.h"
#include "UnityEngine_ArrayTypes.h"
#include "t1958.h"
#include "t1960.h"
#include "t1957.h"
#include "t2000.h"
#include "t1962.h"
#include "t2001.h"
#include "t2002.h"
#include "t2004.h"
extern TypeInfo t144_TI;
extern TypeInfo t15_TI;
extern TypeInfo t138_TI;
extern TypeInfo t340_TI;
extern TypeInfo t328_TI;
extern TypeInfo t1956_TI;
extern TypeInfo t16_TI;
extern TypeInfo t825_TI;
extern TypeInfo t17_TI;
extern TypeInfo t1958_TI;
extern TypeInfo t1959_TI;
extern TypeInfo t1960_TI;
extern TypeInfo t2926_TI;
extern TypeInfo t827_TI;
extern TypeInfo t1957_TI;
extern TypeInfo t2000_TI;
extern TypeInfo t1962_TI;
extern TypeInfo t2001_TI;
extern TypeInfo t1233_TI;
extern TypeInfo t2002_TI;
extern TypeInfo t704_TI;
extern TypeInfo t1450_TI;
extern TypeInfo t1954_TI;
extern TypeInfo t1955_TI;
extern TypeInfo t303_TI;
extern TypeInfo t854_TI;
extern TypeInfo t2004_TI;
extern TypeInfo t5147_TI;
extern TypeInfo t290_TI;
extern TypeInfo t8_TI;
#include "t1958MD.h"
#include "t1960MD.h"
#include "t1957MD.h"
#include "t2000MD.h"
#include "t1962MD.h"
#include "t2001MD.h"
#include "t2002MD.h"
#include "t2004MD.h"
extern Il2CppType t1956_0_0_0;
extern Il2CppType t1959_0_0_0;
extern Il2CppType t138_0_0_0;
extern Il2CppType t340_0_0_0;
extern MethodInfo m10888_MI;
extern MethodInfo m10890_MI;
extern MethodInfo m10857_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m24175_MI;
extern MethodInfo m24176_MI;
extern MethodInfo m10870_MI;
extern MethodInfo m11144_MI;
extern MethodInfo m15_MI;
extern MethodInfo m10859_MI;
extern MethodInfo m10961_MI;
extern MethodInfo m10963_MI;
extern MethodInfo m1517_MI;
extern MethodInfo m10892_MI;
extern MethodInfo m10868_MI;
extern MethodInfo m10883_MI;
extern MethodInfo m10863_MI;
extern MethodInfo m10894_MI;
extern MethodInfo m11178_MI;
extern MethodInfo m18224_MI;
extern MethodInfo m10865_MI;
extern MethodInfo m11182_MI;
extern MethodInfo m18226_MI;
extern MethodInfo m11163_MI;
extern MethodInfo m11186_MI;
extern MethodInfo m6454_MI;
extern MethodInfo m11195_MI;
extern MethodInfo m10861_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m10855_MI;
extern MethodInfo m10960_MI;
extern MethodInfo m18227_MI;
extern MethodInfo m4390_MI;
extern MethodInfo m3739_MI;
extern MethodInfo m3735_MI;
extern MethodInfo m11203_MI;
extern MethodInfo m24177_MI;
extern MethodInfo m5720_MI;
extern MethodInfo m5726_MI;
extern MethodInfo m5729_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m5716_MI;
extern MethodInfo m3825_MI;
extern MethodInfo m1741_MI;
extern MethodInfo m6444_MI;
extern MethodInfo m3794_MI;
extern MethodInfo m1515_MI;
extern MethodInfo m24178_MI;
extern MethodInfo m4332_MI;
struct t144;
 void m18224 (t144 * __this, t2926* p0, int32_t p1, t1957 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18224_MI;
struct t144;
 void m18226 (t144 * __this, t14 * p0, int32_t p1, t2000 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18226_MI;
struct t144;
 void m18227 (t144 * __this, t1959* p0, int32_t p1, t2000 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18227_MI;


extern MethodInfo m10842_MI;
 void m10842 (t144 * __this, t1960  p0, MethodInfo* method){
	{
		t138 * L_0 = m10961((&p0), &m10961_MI);
		t340 * L_1 = m10963((&p0), &m10963_MI);
		VirtActionInvoker2< t138 *, t340 * >::Invoke(&m1517_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10843_MI;
 bool m10843 (t144 * __this, t1960  p0, MethodInfo* method){
	{
		bool L_0 = m10892(__this, p0, &m10892_MI);
		return L_0;
	}
}
extern MethodInfo m10846_MI;
 bool m10846 (t144 * __this, t1960  p0, MethodInfo* method){
	{
		bool L_0 = m10892(__this, p0, &m10892_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		t138 * L_1 = m10961((&p0), &m10961_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t138 * >::Invoke(&m10883_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m10865_MI;
 t1960  m10865 (t4 * __this, t138 * p0, t340 * p1, MethodInfo* method){
	{
		t1960  L_0 = {0};
		m10960(&L_0, p0, p1, &m10960_MI);
		return L_0;
	}
}
extern MethodInfo m10892_MI;
 bool m10892 (t144 * __this, t1960  p0, MethodInfo* method){
	t340 * V_0 = {0};
	{
		t138 * L_0 = m10961((&p0), &m10961_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t138 *, t340 ** >::Invoke(&m1515_MI, __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2004_TI));
		t2004 * L_2 = m11203(NULL, &m11203_MI);
		t340 * L_3 = m10963((&p0), &m10963_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, t340 *, t340 * >::Invoke(&m24178_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m10893_MI;
 t1962  m10893 (t144 * __this, MethodInfo* method){
	{
		t1962  L_0 = {0};
		m11163(&L_0, __this, &m11163_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t16_0_0_32849;
FieldInfo t144_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t16_0_0_32849, &t144_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t20_0_0_32849;
FieldInfo t144_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t20_0_0_32849, &t144_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_32849;
FieldInfo t144_f2_FieldInfo = 
{
	"NO_SLOT", &t16_0_0_32849, &t144_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_32849;
FieldInfo t144_f3_FieldInfo = 
{
	"HASH_FLAG", &t16_0_0_32849, &t144_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t704_0_0_1;
FieldInfo t144_f4_FieldInfo = 
{
	"table", &t704_0_0_1, &t144_TI, offsetof(t144, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1450_0_0_1;
FieldInfo t144_f5_FieldInfo = 
{
	"linkSlots", &t1450_0_0_1, &t144_TI, offsetof(t144, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1954_0_0_1;
FieldInfo t144_f6_FieldInfo = 
{
	"keySlots", &t1954_0_0_1, &t144_TI, offsetof(t144, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1955_0_0_1;
FieldInfo t144_f7_FieldInfo = 
{
	"valueSlots", &t1955_0_0_1, &t144_TI, offsetof(t144, f7), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t144_f8_FieldInfo = 
{
	"touchedSlots", &t16_0_0_1, &t144_TI, offsetof(t144, f8), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t144_f9_FieldInfo = 
{
	"emptySlot", &t16_0_0_1, &t144_TI, offsetof(t144, f9), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t144_f10_FieldInfo = 
{
	"count", &t16_0_0_1, &t144_TI, offsetof(t144, f10), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t144_f11_FieldInfo = 
{
	"threshold", &t16_0_0_1, &t144_TI, offsetof(t144, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1956_0_0_1;
FieldInfo t144_f12_FieldInfo = 
{
	"hcp", &t1956_0_0_1, &t144_TI, offsetof(t144, f12), &EmptyCustomAttributesCache};
extern Il2CppType t705_0_0_1;
FieldInfo t144_f13_FieldInfo = 
{
	"serialization_info", &t705_0_0_1, &t144_TI, offsetof(t144, f13), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t144_f14_FieldInfo = 
{
	"generation", &t16_0_0_1, &t144_TI, offsetof(t144, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1957_0_0_17;
extern CustomAttributesCache t832__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t144_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t1957_0_0_17, &t144_TI, offsetof(t144_SFs, f15), &t832__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t144_FIs[] =
{
	&t144_f0_FieldInfo,
	&t144_f1_FieldInfo,
	&t144_f2_FieldInfo,
	&t144_f3_FieldInfo,
	&t144_f4_FieldInfo,
	&t144_f5_FieldInfo,
	&t144_f6_FieldInfo,
	&t144_f7_FieldInfo,
	&t144_f8_FieldInfo,
	&t144_f9_FieldInfo,
	&t144_f10_FieldInfo,
	&t144_f11_FieldInfo,
	&t144_f12_FieldInfo,
	&t144_f13_FieldInfo,
	&t144_f14_FieldInfo,
	&t144_f15_FieldInfo,
	NULL
};
static const int32_t t144_f0_DefaultValueData = 10;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t144_f0_DefaultValue = 
{
	&t144_f0_FieldInfo, { (char*)&t144_f0_DefaultValueData, &t16_0_0_0 }};
static const float t144_f1_DefaultValueData = 0.9f;
extern Il2CppType t20_0_0_0;
static Il2CppFieldDefaultValueEntry t144_f1_DefaultValue = 
{
	&t144_f1_FieldInfo, { (char*)&t144_f1_DefaultValueData, &t20_0_0_0 }};
static const int32_t t144_f2_DefaultValueData = -1;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t144_f2_DefaultValue = 
{
	&t144_f2_FieldInfo, { (char*)&t144_f2_DefaultValueData, &t16_0_0_0 }};
static const int32_t t144_f3_DefaultValueData = -2147483648;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t144_f3_DefaultValue = 
{
	&t144_f3_FieldInfo, { (char*)&t144_f3_DefaultValueData, &t16_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t144_FDVs[] = 
{
	&t144_f0_DefaultValue,
	&t144_f1_DefaultValue,
	&t144_f2_DefaultValue,
	&t144_f3_DefaultValue,
	NULL
};
extern MethodInfo m10834_MI;
static PropertyInfo t144____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t144_TI, "System.Collections.IDictionary.Item", NULL, &m10834_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10836_MI;
static PropertyInfo t144____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t144_TI, "System.Collections.ICollection.IsSynchronized", &m10836_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10838_MI;
static PropertyInfo t144____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t144_TI, "System.Collections.ICollection.SyncRoot", &m10838_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10840_MI;
static PropertyInfo t144____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t144_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m10840_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10855_MI;
static PropertyInfo t144____Count_PropertyInfo = 
{
	&t144_TI, "Count", &m10855_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10857_MI;
static PropertyInfo t144____Item_PropertyInfo = 
{
	&t144_TI, "Item", NULL, &m10857_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10886_MI;
static PropertyInfo t144____Values_PropertyInfo = 
{
	&t144_TI, "Values", &m10886_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t144_PIs[] =
{
	&t144____System_Collections_IDictionary_Item_PropertyInfo,
	&t144____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t144____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t144____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t144____Count_PropertyInfo,
	&t144____Item_PropertyInfo,
	&t144____Values_PropertyInfo,
	NULL
};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m1514_MI = 
{
	".ctor", (methodPointerType)&m10827_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1956_0_0_0;
static ParameterInfo t144_m10828_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t1956_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10828_MI = 
{
	".ctor", (methodPointerType)&m10829_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t144_m10828_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t144_m10830_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10830_MI = 
{
	".ctor", (methodPointerType)&m10831_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t144_m10830_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t705_0_0_0;
extern Il2CppType t706_0_0_0;
static ParameterInfo t144_m10832_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t705_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t706_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t706 (MethodInfo* method, void* obj, void** args);
MethodInfo m10832_MI = 
{
	".ctor", (methodPointerType)&m10833_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t706, t144_m10832_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t144_m10834_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10834_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m10835_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t144_m10834_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t144_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10836_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10837_gshared, &t144_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t144_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10838_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10839_gshared, &t144_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t144_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10840_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m10841_gshared, &t144_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1960_0_0_0;
static ParameterInfo t144_m10842_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1960_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t1960 (MethodInfo* method, void* obj, void** args);
MethodInfo m10842_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m10842, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15_t1960, t144_m10842_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1960_0_0_0;
static ParameterInfo t144_m10843_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1960_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1960 (MethodInfo* method, void* obj, void** args);
MethodInfo m10843_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m10843, &t144_TI, &t17_0_0_0, RuntimeInvoker_t17_t1960, t144_m10843_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1959_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t144_m10844_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1959_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10844_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m10845_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t144_m10844_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1960_0_0_0;
static ParameterInfo t144_m10846_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1960_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1960 (MethodInfo* method, void* obj, void** args);
MethodInfo m10846_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m10846, &t144_TI, &t17_0_0_0, RuntimeInvoker_t17_t1960, t144_m10846_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t144_m10847_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10847_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10848_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t144_m10847_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t144_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10849_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10850_gshared, &t144_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t144_TI;
extern Il2CppType t1961_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10851_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m10852_gshared, &t144_TI, &t1961_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t144_TI;
extern Il2CppType t833_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10853_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m10854_gshared, &t144_TI, &t833_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t144_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10855_MI = 
{
	"get_Count", (methodPointerType)&m10856_gshared, &t144_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t340_0_0_0;
static ParameterInfo t144_m10857_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t340_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10857_MI = 
{
	"set_Item", (methodPointerType)&m10858_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t144_m10857_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1956_0_0_0;
static ParameterInfo t144_m10859_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t1956_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10859_MI = 
{
	"Init", (methodPointerType)&m10860_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t144_m10859_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t144_m10861_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10861_MI = 
{
	"InitArrays", (methodPointerType)&m10862_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t144_m10861_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t144_m10863_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10863_MI = 
{
	"CopyToCheck", (methodPointerType)&m10864_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t144_m10863_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern Il2CppGenericContainer m24179_IGC;
extern TypeInfo m24179_gp_TRet_0_TI;
Il2CppGenericParamFull m24179_gp_TRet_0_TI_GenericParamFull = { { &m24179_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m24179_gp_TElem_1_TI;
Il2CppGenericParamFull m24179_gp_TElem_1_TI_GenericParamFull = { { &m24179_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m24179_IGPA[2] = 
{
	&m24179_gp_TRet_0_TI_GenericParamFull,
	&m24179_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m24179_MI;
Il2CppGenericContainer m24179_IGC = { { NULL, NULL }, NULL, &m24179_MI, 2, 1, m24179_IGPA };
MethodInfo m24179_MI = 
{
	"Do_CopyTo", NULL, &t144_TI, &t15_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t340_0_0_0;
static ParameterInfo t144_m10865_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t340_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t1960_0_0_0;
extern void* RuntimeInvoker_t1960_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10865_MI = 
{
	"make_pair", (methodPointerType)&m10865, &t144_TI, &t1960_0_0_0, RuntimeInvoker_t1960_t4_t4, t144_m10865_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t340_0_0_0;
static ParameterInfo t144_m10866_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t340_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t340_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10866_MI = 
{
	"pick_value", (methodPointerType)&m10867_gshared, &t144_TI, &t340_0_0_0, RuntimeInvoker_t4_t4_t4, t144_m10866_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1959_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t144_m10868_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1959_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10868_MI = 
{
	"CopyTo", (methodPointerType)&m10869_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t144_m10868_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern Il2CppGenericContainer m24180_IGC;
extern TypeInfo m24180_gp_TRet_0_TI;
Il2CppGenericParamFull m24180_gp_TRet_0_TI_GenericParamFull = { { &m24180_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m24180_IGPA[1] = 
{
	&m24180_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m24180_MI;
Il2CppGenericContainer m24180_IGC = { { NULL, NULL }, NULL, &m24180_MI, 1, 1, m24180_IGPA };
MethodInfo m24180_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t144_TI, &t15_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10870_MI = 
{
	"Resize", (methodPointerType)&m10871_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t340_0_0_0;
static ParameterInfo t144_m1517_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t340_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1517_MI = 
{
	"Add", (methodPointerType)&m10872_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t144_m1517_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10873_MI = 
{
	"Clear", (methodPointerType)&m10874_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t138_0_0_0;
static ParameterInfo t144_m10875_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t138_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10875_MI = 
{
	"ContainsKey", (methodPointerType)&m10876_gshared, &t144_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t144_m10875_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t340_0_0_0;
static ParameterInfo t144_m10877_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t340_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10877_MI = 
{
	"ContainsValue", (methodPointerType)&m10878_gshared, &t144_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t144_m10877_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t705_0_0_0;
extern Il2CppType t706_0_0_0;
static ParameterInfo t144_m10879_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t705_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t706_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t706 (MethodInfo* method, void* obj, void** args);
MethodInfo m10879_MI = 
{
	"GetObjectData", (methodPointerType)&m10880_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t706, t144_m10879_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t144_m10881_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10881_MI = 
{
	"OnDeserialization", (methodPointerType)&m10882_gshared, &t144_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t144_m10881_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t138_0_0_0;
static ParameterInfo t144_m10883_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t138_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10883_MI = 
{
	"Remove", (methodPointerType)&m10884_gshared, &t144_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t144_m10883_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t340_1_0_0;
static ParameterInfo t144_m1515_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t340_1_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t5148 (MethodInfo* method, void* obj, void** args);
MethodInfo m1515_MI = 
{
	"TryGetValue", (methodPointerType)&m10885_gshared, &t144_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t5148, t144_m1515_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t144_TI;
extern Il2CppType t1958_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10886_MI = 
{
	"get_Values", (methodPointerType)&m10887_gshared, &t144_TI, &t1958_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t144_m10888_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10888_MI = 
{
	"ToTKey", (methodPointerType)&m10889_gshared, &t144_TI, &t138_0_0_0, RuntimeInvoker_t4_t4, t144_m10888_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t144_m10890_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t340_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10890_MI = 
{
	"ToTValue", (methodPointerType)&m10891_gshared, &t144_TI, &t340_0_0_0, RuntimeInvoker_t4_t4, t144_m10890_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1960_0_0_0;
static ParameterInfo t144_m10892_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t1960_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1960 (MethodInfo* method, void* obj, void** args);
MethodInfo m10892_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m10892, &t144_TI, &t17_0_0_0, RuntimeInvoker_t17_t1960, t144_m10892_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t144_TI;
extern Il2CppType t1962_0_0_0;
extern void* RuntimeInvoker_t1962 (MethodInfo* method, void* obj, void** args);
MethodInfo m10893_MI = 
{
	"GetEnumerator", (methodPointerType)&m10893, &t144_TI, &t1962_0_0_0, RuntimeInvoker_t1962, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t340_0_0_0;
static ParameterInfo t144_m10894_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t340_0_0_0},
};
extern TypeInfo t144_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827_t4_t4 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t832__CustomAttributeCache_m7545;
MethodInfo m10894_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m10895_gshared, &t144_TI, &t827_0_0_0, RuntimeInvoker_t827_t4_t4, t144_m10894_ParameterInfos, &t832__CustomAttributeCache_m7545, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t144_MIs[] =
{
	&m1514_MI,
	&m10828_MI,
	&m10830_MI,
	&m10832_MI,
	&m10834_MI,
	&m10836_MI,
	&m10838_MI,
	&m10840_MI,
	&m10842_MI,
	&m10843_MI,
	&m10844_MI,
	&m10846_MI,
	&m10847_MI,
	&m10849_MI,
	&m10851_MI,
	&m10853_MI,
	&m10855_MI,
	&m10857_MI,
	&m10859_MI,
	&m10861_MI,
	&m10863_MI,
	&m24179_MI,
	&m10865_MI,
	&m10866_MI,
	&m10868_MI,
	&m24180_MI,
	&m10870_MI,
	&m1517_MI,
	&m10873_MI,
	&m10875_MI,
	&m10877_MI,
	&m10879_MI,
	&m10881_MI,
	&m10883_MI,
	&m1515_MI,
	&m10886_MI,
	&m10888_MI,
	&m10890_MI,
	&m10892_MI,
	&m10893_MI,
	&m10894_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10849_MI;
extern MethodInfo m10879_MI;
extern MethodInfo m10855_MI;
extern MethodInfo m10836_MI;
extern MethodInfo m10838_MI;
extern MethodInfo m10847_MI;
extern MethodInfo m10855_MI;
extern MethodInfo m10840_MI;
extern MethodInfo m10842_MI;
extern MethodInfo m10873_MI;
extern MethodInfo m10843_MI;
extern MethodInfo m10844_MI;
extern MethodInfo m10846_MI;
extern MethodInfo m10851_MI;
extern MethodInfo m10883_MI;
extern MethodInfo m10834_MI;
extern MethodInfo m10853_MI;
extern MethodInfo m10881_MI;
extern MethodInfo m10857_MI;
extern MethodInfo m1517_MI;
extern MethodInfo m10875_MI;
extern MethodInfo m10879_MI;
extern MethodInfo m10881_MI;
extern MethodInfo m1515_MI;
static MethodInfo* t144_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10849_MI,
	&m10879_MI,
	&m10855_MI,
	&m10836_MI,
	&m10838_MI,
	&m10847_MI,
	&m10855_MI,
	&m10840_MI,
	&m10842_MI,
	&m10873_MI,
	&m10843_MI,
	&m10844_MI,
	&m10846_MI,
	&m10851_MI,
	&m10883_MI,
	&m10834_MI,
	&m10853_MI,
	&m10881_MI,
	&m10857_MI,
	&m1517_MI,
	&m10875_MI,
	&m10879_MI,
	&m10881_MI,
	&m1515_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t364_TI;
extern TypeInfo t640_TI;
extern TypeInfo t4001_TI;
extern TypeInfo t4003_TI;
extern TypeInfo t5149_TI;
extern TypeInfo t729_TI;
extern TypeInfo t1486_TI;
static TypeInfo* t144_ITIs[] = 
{
	&t591_TI,
	&t364_TI,
	&t640_TI,
	&t4001_TI,
	&t4003_TI,
	&t5149_TI,
	&t729_TI,
	&t1486_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t364_TI;
extern TypeInfo t640_TI;
extern TypeInfo t4001_TI;
extern TypeInfo t4003_TI;
extern TypeInfo t5149_TI;
extern TypeInfo t729_TI;
extern TypeInfo t1486_TI;
static Il2CppInterfaceOffsetPair t144_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t364_TI, 5},
	{ &t640_TI, 6},
	{ &t4001_TI, 10},
	{ &t4003_TI, 17},
	{ &t5149_TI, 18},
	{ &t729_TI, 19},
	{ &t1486_TI, 21},
};
extern MethodInfo m10859_MI;
extern MethodInfo m10888_MI;
extern MethodInfo m10890_MI;
extern MethodInfo m10857_MI;
extern MethodInfo m10961_MI;
extern MethodInfo m10963_MI;
extern MethodInfo m1517_MI;
extern MethodInfo m10892_MI;
extern MethodInfo m10868_MI;
extern MethodInfo m10883_MI;
extern TypeInfo t1959_TI;
extern MethodInfo m10863_MI;
extern TypeInfo t144_TI;
extern MethodInfo m10894_MI;
extern TypeInfo t1957_TI;
extern MethodInfo m11178_MI;
extern MethodInfo m18224_MI;
extern MethodInfo m10865_MI;
extern TypeInfo t2000_TI;
extern MethodInfo m11182_MI;
extern MethodInfo m18226_MI;
extern TypeInfo t1962_TI;
extern MethodInfo m11163_MI;
extern TypeInfo t2001_TI;
extern MethodInfo m11186_MI;
extern TypeInfo t138_TI;
extern MethodInfo m24175_MI;
extern MethodInfo m24176_MI;
extern MethodInfo m10870_MI;
extern MethodInfo m11195_MI;
extern MethodInfo m10861_MI;
extern TypeInfo t1954_TI;
extern TypeInfo t1955_TI;
extern MethodInfo m10855_MI;
extern TypeInfo t1960_TI;
extern MethodInfo m10960_MI;
extern MethodInfo m18227_MI;
extern MethodInfo m11203_MI;
extern MethodInfo m24177_MI;
extern TypeInfo t1959_TI;
extern Il2CppType t1956_0_0_0;
extern TypeInfo t1956_TI;
extern Il2CppType t1959_0_0_0;
extern TypeInfo t1958_TI;
extern MethodInfo m11144_MI;
extern Il2CppType t138_0_0_0;
extern Il2CppType t340_0_0_0;
extern TypeInfo t340_TI;
extern MethodInfo m1515_MI;
extern MethodInfo m24178_MI;
static void* t144_RGCTXData[50] = 
{
	&m10859_MI,
	&m10888_MI,
	&m10890_MI,
	&m10857_MI,
	&m10961_MI,
	&m10963_MI,
	&m1517_MI,
	&m10892_MI,
	&m10868_MI,
	&m10883_MI,
	&t1959_TI,
	&m10863_MI,
	&t144_TI,
	&m10894_MI,
	&t1957_TI,
	&m11178_MI,
	&m18224_MI,
	&m10865_MI,
	&t2000_TI,
	&m11182_MI,
	&m18226_MI,
	&t1962_TI,
	&m11163_MI,
	&t2001_TI,
	&m11186_MI,
	&t138_TI,
	&m24175_MI,
	&m24176_MI,
	&m10870_MI,
	&m11195_MI,
	&m10861_MI,
	&t1954_TI,
	&t1955_TI,
	&m10855_MI,
	&t1960_TI,
	&m10960_MI,
	&m18227_MI,
	&m11203_MI,
	&m24177_MI,
	&t1959_TI,
	(void*)&t1956_0_0_0,
	&t1956_TI,
	(void*)&t1959_0_0_0,
	&t1958_TI,
	&m11144_MI,
	(void*)&t138_0_0_0,
	(void*)&t340_0_0_0,
	&t340_TI,
	&m1515_MI,
	&m24178_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t144_0_0_0;
extern Il2CppType t144_1_0_0;
extern TypeInfo t4_TI;
struct t144;
extern TypeInfo t144_TI;
extern Il2CppGenericClass t144_GC;
extern CustomAttributesCache t832__CustomAttributeCache;
extern CustomAttributesCache t832__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t832__CustomAttributeCache_m7545;
TypeInfo t144_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t144_MIs, t144_PIs, t144_FIs, NULL, &t4_TI, NULL, NULL, &t144_TI, t144_ITIs, t144_VT, &t832__CustomAttributeCache, &t144_TI, &t144_0_0_0, &t144_1_0_0, t144_IOs, &t144_GC, NULL, t144_FDVs, NULL, t144_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t144), 0, -1, sizeof(t144_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 41, 7, 16, 0, 0, 28, 8, 8};
#include "t1963.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1963_TI;
#include "t1963MD.h"

#include "t1966.h"
#include "t1967.h"
#include "t1965.h"
#include "t1973.h"
#include "t1969.h"
#include "t1974.h"
extern TypeInfo t1963_TI;
extern TypeInfo t15_TI;
extern TypeInfo t4_TI;
extern TypeInfo t328_TI;
extern TypeInfo t1918_TI;
extern TypeInfo t16_TI;
extern TypeInfo t825_TI;
extern TypeInfo t17_TI;
extern TypeInfo t1966_TI;
extern TypeInfo t1964_TI;
extern TypeInfo t1967_TI;
extern TypeInfo t2926_TI;
extern TypeInfo t827_TI;
extern TypeInfo t1965_TI;
extern TypeInfo t1973_TI;
extern TypeInfo t1969_TI;
extern TypeInfo t1974_TI;
extern TypeInfo t1233_TI;
extern TypeInfo t1485_TI;
extern TypeInfo t704_TI;
extern TypeInfo t1450_TI;
extern TypeInfo t305_TI;
extern TypeInfo t303_TI;
extern TypeInfo t854_TI;
extern TypeInfo t290_TI;
extern TypeInfo t8_TI;
#include "t1966MD.h"
#include "t1967MD.h"
#include "t1965MD.h"
#include "t1973MD.h"
#include "t1969MD.h"
#include "t1974MD.h"
extern Il2CppType t1918_0_0_0;
extern Il2CppType t1964_0_0_0;
extern Il2CppType t4_0_0_0;
extern MethodInfo m10889_MI;
extern MethodInfo m10891_MI;
extern MethodInfo m10858_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m22884_MI;
extern MethodInfo m22883_MI;
extern MethodInfo m10871_MI;
extern MethodInfo m10913_MI;
extern MethodInfo m15_MI;
extern MethodInfo m10860_MI;
extern MethodInfo m10903_MI;
extern MethodInfo m10905_MI;
extern MethodInfo m10872_MI;
extern MethodInfo m10900_MI;
extern MethodInfo m10869_MI;
extern MethodInfo m10884_MI;
extern MethodInfo m10864_MI;
extern MethodInfo m10895_MI;
extern MethodInfo m10947_MI;
extern MethodInfo m18114_MI;
extern MethodInfo m10899_MI;
extern MethodInfo m10951_MI;
extern MethodInfo m18116_MI;
extern MethodInfo m10932_MI;
extern MethodInfo m10955_MI;
extern MethodInfo m6454_MI;
extern MethodInfo m8064_MI;
extern MethodInfo m10862_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m10856_MI;
extern MethodInfo m10902_MI;
extern MethodInfo m18117_MI;
extern MethodInfo m4390_MI;
extern MethodInfo m3739_MI;
extern MethodInfo m3735_MI;
extern MethodInfo m5720_MI;
extern MethodInfo m5726_MI;
extern MethodInfo m5729_MI;
extern MethodInfo m1528_MI;
extern MethodInfo m5716_MI;
extern MethodInfo m3825_MI;
extern MethodInfo m1741_MI;
extern MethodInfo m6444_MI;
extern MethodInfo m3794_MI;
extern MethodInfo m10885_MI;
extern MethodInfo m16863_MI;
extern MethodInfo m4332_MI;
struct t1963;
 void m18114 (t1963 * __this, t2926* p0, int32_t p1, t1965 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18114_MI;
struct t1963;
 void m18116 (t1963 * __this, t14 * p0, int32_t p1, t1973 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18116_MI;
struct t1963;
 void m18117 (t1963 * __this, t1964* p0, int32_t p1, t1973 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18117_MI;


extern MethodInfo m10827_MI;
 void m10827_gshared (t1963 * __this, MethodInfo* method)
{
	{
		m15(__this, &m15_MI);
		(( void (*) (t1963 * __this, int32_t p0, t4* p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, ((int32_t)10), (t4*)NULL, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return;
	}
}
extern MethodInfo m10829_MI;
 void m10829_gshared (t1963 * __this, t4* p0, MethodInfo* method)
{
	{
		m15(__this, &m15_MI);
		(( void (*) (t1963 * __this, int32_t p0, t4* p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, ((int32_t)10), p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return;
	}
}
extern MethodInfo m10831_MI;
 void m10831_gshared (t1963 * __this, int32_t p0, MethodInfo* method)
{
	{
		m15(__this, &m15_MI);
		(( void (*) (t1963 * __this, int32_t p0, t4* p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, p0, (t4*)NULL, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return;
	}
}
extern MethodInfo m10833_MI;
 void m10833_gshared (t1963 * __this, t705 * p0, t706  p1, MethodInfo* method)
{
	{
		m15(__this, &m15_MI);
		__this->f13 = p0;
		return;
	}
}
extern MethodInfo m10835_MI;
 void m10835_gshared (t1963 * __this, t4 * p0, t4 * p1, MethodInfo* method)
{
	{
		t4 * L_0 = (( t4 * (*) (t1963 * __this, t4 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(__this, p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		t4 * L_1 = (( t4 * (*) (t1963 * __this, t4 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(__this, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		VirtActionInvoker2< t4 *, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3), __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10837_MI;
 bool m10837_gshared (t1963 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m10839_MI;
 t4 * m10839_gshared (t1963 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m10841_MI;
 bool m10841_gshared (t1963 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m10896_MI;
 void m10896 (t1963 * __this, t1967  p0, MethodInfo* method){
	{
		t4 * L_0 = m10903((&p0), &m10903_MI);
		t4 * L_1 = m10905((&p0), &m10905_MI);
		VirtActionInvoker2< t4 *, t4 * >::Invoke(&m10872_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10897_MI;
 bool m10897 (t1963 * __this, t1967  p0, MethodInfo* method){
	{
		bool L_0 = m10900(__this, p0, &m10900_MI);
		return L_0;
	}
}
extern MethodInfo m10845_MI;
 void m10845_gshared (t1963 * __this, t1964* p0, int32_t p1, MethodInfo* method)
{
	{
		(( void (*) (t1963 * __this, t1964* p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(__this, p0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		return;
	}
}
extern MethodInfo m10898_MI;
 bool m10898 (t1963 * __this, t1967  p0, MethodInfo* method){
	{
		bool L_0 = m10900(__this, p0, &m10900_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		t4 * L_1 = m10903((&p0), &m10903_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t4 * >::Invoke(&m10884_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m10848_MI;
 void m10848_gshared (t1963 * __this, t14 * p0, int32_t p1, MethodInfo* method)
{
	t1964* V_0 = {0};
	t2926* V_1 = {0};
	int32_t G_B5_0 = 0;
	t2926* G_B5_1 = {0};
	t1963 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t2926* G_B4_1 = {0};
	t1963 * G_B4_2 = {0};
	{
		V_0 = ((t1964*)IsInst(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 10)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		(( void (*) (t1963 * __this, t1964* p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(__this, V_0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		return;
	}

IL_0013:
	{
		(( void (*) (t1963 * __this, t14 * p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11)->method)(__this, p0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11));
		V_1 = ((t2926*)IsInst(p0, InitializedTypeInfo(&t2926_TI)));
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		G_B4_0 = p1;
		G_B4_1 = V_1;
		G_B4_2 = ((t1963 *)(__this));
		if ((((t1963_SFs*)IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 12)->static_fields)->f15))
		{
			G_B5_0 = p1;
			G_B5_1 = V_1;
			G_B5_2 = ((t1963 *)(__this));
			goto IL_0040;
		}
	}
	{
		t50 L_0 = { IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 13) };
		t1965 * L_1 = (t1965 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 14));
		(( void (*) (t1965 * __this, t4 * p0, t50 p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 15)->method)(L_1, NULL, L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 15));
		((t1963_SFs*)IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 12)->static_fields)->f15 = L_1;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t1963 *)(G_B4_2));
	}

IL_0040:
	{
		(( void (*) (t1963 * __this, t2926* p0, int32_t p1, t1965 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16)->method)(G_B5_2, G_B5_1, G_B5_0, (((t1963_SFs*)IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 12)->static_fields)->f15), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16));
		return;
	}

IL_004b:
	{
		t50 L_2 = { IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 17) };
		t1973 * L_3 = (t1973 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 18));
		(( void (*) (t1973 * __this, t4 * p0, t50 p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19)->method)(L_3, NULL, L_2, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19));
		(( void (*) (t1963 * __this, t14 * p0, int32_t p1, t1973 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 20)->method)(__this, p0, p1, L_3, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 20));
		return;
	}
}
extern MethodInfo m10850_MI;
 t4 * m10850_gshared (t1963 * __this, MethodInfo* method)
{
	{
		t1969  L_0 = {0};
		(( void (*) (t1969 * __this, t1963 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 22)->method)(&L_0, __this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 22));
		t1969  L_1 = L_0;
		t4 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 21), &L_1);
		return (t4 *)L_2;
	}
}
extern MethodInfo m10852_MI;
 t4* m10852_gshared (t1963 * __this, MethodInfo* method)
{
	{
		t1969  L_0 = {0};
		(( void (*) (t1969 * __this, t1963 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 22)->method)(&L_0, __this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 22));
		t1969  L_1 = L_0;
		t4 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 21), &L_1);
		return (t4*)L_2;
	}
}
extern MethodInfo m10854_MI;
 t4 * m10854_gshared (t1963 * __this, MethodInfo* method)
{
	{
		t1974 * L_0 = (t1974 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 23));
		(( void (*) (t1974 * __this, t1963 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 24)->method)(L_0, __this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 24));
		return L_0;
	}
}
extern MethodInfo m10856_MI;
 int32_t m10856_gshared (t1963 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m10858_MI;
 void m10858_gshared (t1963 * __this, t4 * p0, t4 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t4 * L_0 = p0;
		if (((t4 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t328 * L_1 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_1, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t4* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t704* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_4)->max_length)))));
		t704* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		V_3 = (-1);
		if ((((int32_t)V_2) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t1450* L_6 = (__this->f5);
		int32_t L_7 = (((t825 *)(t825 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0078;
		}
	}
	{
		t4* L_8 = (__this->f12);
		t305* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t4 *, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 27), L_8, (*(t4 **)(t4 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		V_3 = V_2;
		t1450* L_11 = (__this->f5);
		int32_t L_12 = (((t825 *)(t825 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_13 = (__this->f10);
		int32_t L_14 = ((int32_t)(L_13+1));
		V_4 = L_14;
		__this->f10 = L_14;
		int32_t L_15 = (__this->f11);
		if ((((int32_t)V_4) <= ((int32_t)L_15)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (t1963 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 28)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 28));
		t704* L_16 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_16)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_17 = (__this->f9);
		V_2 = L_17;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_18 = (__this->f8);
		int32_t L_19 = L_18;
		V_4 = L_19;
		__this->f8 = ((int32_t)(L_19+1));
		V_2 = V_4;
		goto IL_0101;
	}

IL_00ea:
	{
		t1450* L_20 = (__this->f5);
		int32_t L_21 = (((t825 *)(t825 *)SZArrayLdElema(L_20, V_2))->f1);
		__this->f9 = L_21;
	}

IL_0101:
	{
		t1450* L_22 = (__this->f5);
		t704* L_23 = (__this->f4);
		((t825 *)(t825 *)SZArrayLdElema(L_22, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_23, V_1))-1));
		t704* L_24 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_1)) = (int32_t)((int32_t)(V_2+1));
		t1450* L_25 = (__this->f5);
		((t825 *)(t825 *)SZArrayLdElema(L_25, V_2))->f0 = V_0;
		t305* L_26 = (__this->f6);
		*((t4 **)(t4 **)SZArrayLdElema(L_26, V_2)) = (t4 *)p0;
		goto IL_0194;
	}

IL_0148:
	{
		if ((((int32_t)V_3) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		t1450* L_27 = (__this->f5);
		t1450* L_28 = (__this->f5);
		int32_t L_29 = (((t825 *)(t825 *)SZArrayLdElema(L_28, V_2))->f1);
		((t825 *)(t825 *)SZArrayLdElema(L_27, V_3))->f1 = L_29;
		t1450* L_30 = (__this->f5);
		t704* L_31 = (__this->f4);
		((t825 *)(t825 *)SZArrayLdElema(L_30, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_31, V_1))-1));
		t704* L_32 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_32, V_1)) = (int32_t)((int32_t)(V_2+1));
	}

IL_0194:
	{
		t305* L_33 = (__this->f7);
		*((t4 **)(t4 **)SZArrayLdElema(L_33, V_2)) = (t4 *)p1;
		int32_t L_34 = (__this->f14);
		__this->f14 = ((int32_t)(L_34+1));
		return;
	}
}
extern MethodInfo m10860_MI;
 void m10860_gshared (t1963 * __this, int32_t p0, t4* p1, MethodInfo* method)
{
	t4* V_0 = {0};
	t1963 * G_B4_0 = {0};
	t1963 * G_B3_0 = {0};
	t4* G_B5_0 = {0};
	t1963 * G_B5_1 = {0};
	{
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t1233 * L_0 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6454(L_0, (t8*) &_stringLiteral537, &m6454_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000f:
	{
		G_B3_0 = ((t1963 *)(__this));
		if (!p1)
		{
			G_B4_0 = ((t1963 *)(__this));
			goto IL_0018;
		}
	}
	{
		V_0 = p1;
		G_B5_0 = V_0;
		G_B5_1 = ((t1963 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1485_TI));
		t1485 * L_1 = (( t1485 * (*) (t4 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 29)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 29));
		G_B5_0 = ((t4*)(L_1));
		G_B5_1 = ((t1963 *)(G_B4_0));
	}

IL_001d:
	{
		G_B5_1->f12 = G_B5_0;
		if (p0)
		{
			goto IL_002b;
		}
	}
	{
		p0 = ((int32_t)10);
	}

IL_002b:
	{
		p0 = ((int32_t)((((int32_t)((float)((((float)p0))/(0.9f)))))+1));
		(( void (*) (t1963 * __this, int32_t p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 30)->method)(__this, p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 30));
		__this->f14 = 0;
		return;
	}
}
extern MethodInfo m10862_MI;
 void m10862_gshared (t1963 * __this, int32_t p0, MethodInfo* method)
{
	{
		__this->f4 = ((t704*)SZArrayNew(InitializedTypeInfo(&t704_TI), p0));
		__this->f5 = ((t1450*)SZArrayNew(InitializedTypeInfo(&t1450_TI), p0));
		__this->f9 = (-1);
		__this->f6 = ((t305*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 31), p0));
		__this->f7 = ((t305*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 32), p0));
		__this->f8 = 0;
		t704* L_0 = (__this->f4);
		__this->f11 = (((int32_t)((float)((((float)(((int32_t)(((t14 *)L_0)->max_length)))))*(0.9f)))));
		int32_t L_1 = (__this->f11);
		if (L_1)
		{
			goto IL_006e;
		}
	}
	{
		t704* L_2 = (__this->f4);
		if ((((int32_t)(((int32_t)(((t14 *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->f11 = 1;
	}

IL_006e:
	{
		return;
	}
}
extern MethodInfo m10864_MI;
 void m10864_gshared (t1963 * __this, t14 * p0, int32_t p1, MethodInfo* method)
{
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral326, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t1233 * L_1 = (t1233 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1233_TI));
		m6454(L_1, (t8*) &_stringLiteral323, &m6454_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001d:
	{
		int32_t L_2 = m3690(p0, &m3690_MI);
		if ((((int32_t)p1) <= ((int32_t)L_2)))
		{
			goto IL_0031;
		}
	}
	{
		t303 * L_3 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_3, (t8*) &_stringLiteral538, &m1917_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0031:
	{
		int32_t L_4 = m3690(p0, &m3690_MI);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 33), __this);
		if ((((int32_t)((int32_t)(L_4-p1))) >= ((int32_t)L_5)))
		{
			goto IL_004c;
		}
	}
	{
		t303 * L_6 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_6, (t8*) &_stringLiteral539, &m1917_MI);
		il2cpp_codegen_raise_exception (L_6);
	}

IL_004c:
	{
		return;
	}
}
extern MethodInfo m10899_MI;
 t1967  m10899 (t4 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	{
		t1967  L_0 = {0};
		m10902(&L_0, p0, p1, &m10902_MI);
		return L_0;
	}
}
extern MethodInfo m10867_MI;
 t4 * m10867_gshared (t4 * __this, t4 * p0, t4 * p1, MethodInfo* method)
{
	{
		return p1;
	}
}
extern MethodInfo m10869_MI;
 void m10869_gshared (t1963 * __this, t1964* p0, int32_t p1, MethodInfo* method)
{
	{
		(( void (*) (t1963 * __this, t14 * p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11)->method)(__this, (t14 *)(t14 *)p0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11));
		t50 L_0 = { IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 17) };
		t1973 * L_1 = (t1973 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 18));
		(( void (*) (t1973 * __this, t4 * p0, t50 p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19)->method)(L_1, NULL, L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19));
		(( void (*) (t1963 * __this, t1964* p0, int32_t p1, t1973 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 36)->method)(__this, p0, p1, L_1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 36));
		return;
	}
}
extern MethodInfo m10871_MI;
 void m10871_gshared (t1963 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	t704* V_1 = {0};
	t1450* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t305* V_7 = {0};
	t305* V_8 = {0};
	int32_t V_9 = 0;
	{
		t704* L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t854_TI));
		int32_t L_1 = m4390(NULL, ((int32_t)(((int32_t)((((int32_t)(((t14 *)L_0)->max_length)))<<1))|1)), &m4390_MI);
		V_0 = L_1;
		V_1 = ((t704*)SZArrayNew(InitializedTypeInfo(&t704_TI), V_0));
		V_2 = ((t1450*)SZArrayNew(InitializedTypeInfo(&t1450_TI), V_0));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		t704* L_2 = (__this->f4);
		V_4 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_2, V_3))-1));
		goto IL_00a2;
	}

IL_0035:
	{
		t4* L_3 = (__this->f12);
		t305* L_4 = (__this->f6);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_3, (*(t4 **)(t4 **)SZArrayLdElema(L_4, V_4)));
		int32_t L_6 = ((int32_t)(L_5|((int32_t)-2147483648)));
		V_9 = L_6;
		((t825 *)(t825 *)SZArrayLdElema(V_2, V_4))->f0 = L_6;
		V_5 = V_9;
		V_6 = ((int32_t)(((int32_t)(V_5&((int32_t)2147483647)))%V_0));
		((t825 *)(t825 *)SZArrayLdElema(V_2, V_4))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6))-1));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6)) = (int32_t)((int32_t)(V_4+1));
		t1450* L_7 = (__this->f5);
		int32_t L_8 = (((t825 *)(t825 *)SZArrayLdElema(L_7, V_4))->f1);
		V_4 = L_8;
	}

IL_00a2:
	{
		if ((((uint32_t)V_4) != ((uint32_t)(-1))))
		{
			goto IL_0035;
		}
	}
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_00ab:
	{
		t704* L_9 = (__this->f4);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t14 *)L_9)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->f4 = V_1;
		__this->f5 = V_2;
		V_7 = ((t305*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 31), V_0));
		V_8 = ((t305*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 32), V_0));
		t305* L_10 = (__this->f6);
		int32_t L_11 = (__this->f8);
		m3739(NULL, (t14 *)(t14 *)L_10, 0, (t14 *)(t14 *)V_7, 0, L_11, &m3739_MI);
		t305* L_12 = (__this->f7);
		int32_t L_13 = (__this->f8);
		m3739(NULL, (t14 *)(t14 *)L_12, 0, (t14 *)(t14 *)V_8, 0, L_13, &m3739_MI);
		__this->f6 = V_7;
		__this->f7 = V_8;
		__this->f11 = (((int32_t)((float)((((float)V_0))*(0.9f)))));
		return;
	}
}
extern MethodInfo m10872_MI;
 void m10872_gshared (t1963 * __this, t4 * p0, t4 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t4 * L_0 = p0;
		if (((t4 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t328 * L_1 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_1, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t4* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t704* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_4)->max_length)))));
		t704* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		goto IL_008f;
	}

IL_0044:
	{
		t1450* L_6 = (__this->f5);
		int32_t L_7 = (((t825 *)(t825 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		t4* L_8 = (__this->f12);
		t305* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t4 *, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 27), L_8, (*(t4 **)(t4 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		t303 * L_11 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m1917(L_11, (t8*) &_stringLiteral541, &m1917_MI);
		il2cpp_codegen_raise_exception (L_11);
	}

IL_007d:
	{
		t1450* L_12 = (__this->f5);
		int32_t L_13 = (((t825 *)(t825 *)SZArrayLdElema(L_12, V_2))->f1);
		V_2 = L_13;
	}

IL_008f:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_14 = (__this->f10);
		int32_t L_15 = ((int32_t)(L_14+1));
		V_3 = L_15;
		__this->f10 = L_15;
		int32_t L_16 = (__this->f11);
		if ((((int32_t)V_3) <= ((int32_t)L_16)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (t1963 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 28)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 28));
		t704* L_17 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_17)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_18 = (__this->f9);
		V_2 = L_18;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_19 = (__this->f8);
		int32_t L_20 = L_19;
		V_3 = L_20;
		__this->f8 = ((int32_t)(L_20+1));
		V_2 = V_3;
		goto IL_00f9;
	}

IL_00e2:
	{
		t1450* L_21 = (__this->f5);
		int32_t L_22 = (((t825 *)(t825 *)SZArrayLdElema(L_21, V_2))->f1);
		__this->f9 = L_22;
	}

IL_00f9:
	{
		t1450* L_23 = (__this->f5);
		((t825 *)(t825 *)SZArrayLdElema(L_23, V_2))->f0 = V_0;
		t1450* L_24 = (__this->f5);
		t704* L_25 = (__this->f4);
		((t825 *)(t825 *)SZArrayLdElema(L_24, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_25, V_1))-1));
		t704* L_26 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_26, V_1)) = (int32_t)((int32_t)(V_2+1));
		t305* L_27 = (__this->f6);
		*((t4 **)(t4 **)SZArrayLdElema(L_27, V_2)) = (t4 *)p0;
		t305* L_28 = (__this->f7);
		*((t4 **)(t4 **)SZArrayLdElema(L_28, V_2)) = (t4 *)p1;
		int32_t L_29 = (__this->f14);
		__this->f14 = ((int32_t)(L_29+1));
		return;
	}
}
extern MethodInfo m10874_MI;
 void m10874_gshared (t1963 * __this, MethodInfo* method)
{
	{
		__this->f10 = 0;
		t704* L_0 = (__this->f4);
		t704* L_1 = (__this->f4);
		m3735(NULL, (t14 *)(t14 *)L_0, 0, (((int32_t)(((t14 *)L_1)->max_length))), &m3735_MI);
		t305* L_2 = (__this->f6);
		t305* L_3 = (__this->f6);
		m3735(NULL, (t14 *)(t14 *)L_2, 0, (((int32_t)(((t14 *)L_3)->max_length))), &m3735_MI);
		t305* L_4 = (__this->f7);
		t305* L_5 = (__this->f7);
		m3735(NULL, (t14 *)(t14 *)L_4, 0, (((int32_t)(((t14 *)L_5)->max_length))), &m3735_MI);
		t1450* L_6 = (__this->f5);
		t1450* L_7 = (__this->f5);
		m3735(NULL, (t14 *)(t14 *)L_6, 0, (((int32_t)(((t14 *)L_7)->max_length))), &m3735_MI);
		__this->f9 = (-1);
		__this->f8 = 0;
		int32_t L_8 = (__this->f14);
		__this->f14 = ((int32_t)(L_8+1));
		return;
	}
}
extern MethodInfo m10876_MI;
 bool m10876_gshared (t1963 * __this, t4 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t4 * L_0 = p0;
		if (((t4 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t328 * L_1 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_1, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t4* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t704* L_4 = (__this->f4);
		t704* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_5)->max_length)))))))-1));
		goto IL_0084;
	}

IL_0042:
	{
		t1450* L_6 = (__this->f5);
		int32_t L_7 = (((t825 *)(t825 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0072;
		}
	}
	{
		t4* L_8 = (__this->f12);
		t305* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t4 *, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 27), L_8, (*(t4 **)(t4 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t1450* L_11 = (__this->f5);
		int32_t L_12 = (((t825 *)(t825 *)SZArrayLdElema(L_11, V_1))->f1);
		V_1 = L_12;
	}

IL_0084:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m10878_MI;
 bool m10878_gshared (t1963 * __this, t4 * p0, MethodInfo* method)
{
	t4* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1485_TI));
		t1485 * L_0 = (( t1485 * (*) (t4 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 37)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 37));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		t704* L_1 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_1, V_1))-1));
		goto IL_0040;
	}

IL_0017:
	{
		t305* L_2 = (__this->f7);
		bool L_3 = (bool)InterfaceFuncInvoker2< bool, t4 *, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 38), V_0, (*(t4 **)(t4 **)SZArrayLdElema(L_2, V_2)), p0);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		t1450* L_4 = (__this->f5);
		int32_t L_5 = (((t825 *)(t825 *)SZArrayLdElema(L_4, V_2))->f1);
		V_2 = L_5;
	}

IL_0040:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0048:
	{
		t704* L_6 = (__this->f4);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t14 *)L_6)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m10880_MI;
 void m10880_gshared (t1963 * __this, t705 * p0, t706  p1, MethodInfo* method)
{
	t1964* V_0 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral294, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = (__this->f14);
		m5720(p0, (t8*) &_stringLiteral542, L_1, &m5720_MI);
		t4* L_2 = (__this->f12);
		m5726(p0, (t8*) &_stringLiteral543, L_2, &m5726_MI);
		V_0 = (t1964*)NULL;
		int32_t L_3 = (__this->f10);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = (__this->f10);
		V_0 = ((t1964*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 39), L_4));
		(( void (*) (t1963 * __this, t1964* p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(__this, V_0, 0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
	}

IL_004f:
	{
		t704* L_5 = (__this->f4);
		m5720(p0, (t8*) &_stringLiteral544, (((int32_t)(((t14 *)L_5)->max_length))), &m5720_MI);
		m5726(p0, (t8*) &_stringLiteral545, (t4 *)(t4 *)V_0, &m5726_MI);
		return;
	}
}
extern MethodInfo m10882_MI;
 void m10882_gshared (t1963 * __this, t4 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t1964* V_1 = {0};
	int32_t V_2 = 0;
	{
		t705 * L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		t705 * L_1 = (__this->f13);
		int32_t L_2 = m5729(L_1, (t8*) &_stringLiteral542, &m5729_MI);
		__this->f14 = L_2;
		t705 * L_3 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t290_TI));
		t290 * L_4 = m1528(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 40)), &m1528_MI);
		t4 * L_5 = m5716(L_3, (t8*) &_stringLiteral543, L_4, &m5716_MI);
		__this->f12 = ((t4*)Castclass(L_5, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 41)));
		t705 * L_6 = (__this->f13);
		int32_t L_7 = m5729(L_6, (t8*) &_stringLiteral544, &m5729_MI);
		V_0 = L_7;
		t705 * L_8 = (__this->f13);
		t290 * L_9 = m1528(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 42)), &m1528_MI);
		t4 * L_10 = m5716(L_8, (t8*) &_stringLiteral545, L_9, &m5716_MI);
		V_1 = ((t1964*)Castclass(L_10, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 10)));
		if ((((int32_t)V_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		(( void (*) (t1963 * __this, int32_t p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 30)->method)(__this, V_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 30));
		__this->f10 = 0;
		if (!V_1)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		t4 * L_11 = (( t4 * (*) (t1967 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(((t1967 *)(t1967 *)SZArrayLdElema(V_1, V_2)), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		t4 * L_12 = (( t4 * (*) (t1967 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->method)(((t1967 *)(t1967 *)SZArrayLdElema(V_1, V_2)), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		VirtActionInvoker2< t4 *, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6), __this, L_11, L_12);
		V_2 = ((int32_t)(V_2+1));
	}

IL_00b4:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t14 *)V_1)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_13 = (__this->f14);
		__this->f14 = ((int32_t)(L_13+1));
		__this->f13 = (t705 *)NULL;
		return;
	}
}
extern MethodInfo m10884_MI;
 bool m10884_gshared (t1963 * __this, t4 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t4 * V_4 = {0};
	t4 * V_5 = {0};
	{
		t4 * L_0 = p0;
		if (((t4 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t328 * L_1 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_1, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t4* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t704* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_4)->max_length)))));
		t704* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		t1450* L_6 = (__this->f5);
		int32_t L_7 = (((t825 *)(t825 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007a;
		}
	}
	{
		t4* L_8 = (__this->f12);
		t305* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t4 *, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 27), L_8, (*(t4 **)(t4 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		V_3 = V_2;
		t1450* L_11 = (__this->f5);
		int32_t L_12 = (((t825 *)(t825 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_13 = (__this->f10);
		__this->f10 = ((int32_t)(L_13-1));
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		t704* L_14 = (__this->f4);
		t1450* L_15 = (__this->f5);
		int32_t L_16 = (((t825 *)(t825 *)SZArrayLdElema(L_15, V_2))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_14, V_1)) = (int32_t)((int32_t)(L_16+1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t1450* L_17 = (__this->f5);
		t1450* L_18 = (__this->f5);
		int32_t L_19 = (((t825 *)(t825 *)SZArrayLdElema(L_18, V_2))->f1);
		((t825 *)(t825 *)SZArrayLdElema(L_17, V_3))->f1 = L_19;
	}

IL_00e9:
	{
		t1450* L_20 = (__this->f5);
		int32_t L_21 = (__this->f9);
		((t825 *)(t825 *)SZArrayLdElema(L_20, V_2))->f1 = L_21;
		__this->f9 = V_2;
		t1450* L_22 = (__this->f5);
		((t825 *)(t825 *)SZArrayLdElema(L_22, V_2))->f0 = 0;
		t305* L_23 = (__this->f6);
		Initobj (&t4_TI, (&V_4));
		*((t4 **)(t4 **)SZArrayLdElema(L_23, V_2)) = (t4 *)V_4;
		t305* L_24 = (__this->f7);
		Initobj (&t4_TI, (&V_5));
		*((t4 **)(t4 **)SZArrayLdElema(L_24, V_2)) = (t4 *)V_5;
		int32_t L_25 = (__this->f14);
		__this->f14 = ((int32_t)(L_25+1));
		return 1;
	}
}
extern MethodInfo m10885_MI;
 bool m10885_gshared (t1963 * __this, t4 * p0, t4 ** p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t4 * V_2 = {0};
	{
		t4 * L_0 = p0;
		if (((t4 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t328 * L_1 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_1, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t4* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t704* L_4 = (__this->f4);
		t704* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t14 *)L_5)->max_length)))))))-1));
		goto IL_0096;
	}

IL_0042:
	{
		t1450* L_6 = (__this->f5);
		int32_t L_7 = (((t825 *)(t825 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0084;
		}
	}
	{
		t4* L_8 = (__this->f12);
		t305* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t4 *, t4 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 27), L_8, (*(t4 **)(t4 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		t305* L_11 = (__this->f7);
		*p1 = (*(t4 **)(t4 **)SZArrayLdElema(L_11, V_1));
		return 1;
	}

IL_0084:
	{
		t1450* L_12 = (__this->f5);
		int32_t L_13 = (((t825 *)(t825 *)SZArrayLdElema(L_12, V_1))->f1);
		V_1 = L_13;
	}

IL_0096:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		Initobj (&t4_TI, (&V_2));
		*p1 = V_2;
		return 0;
	}
}
extern MethodInfo m10887_MI;
 t1966 * m10887_gshared (t1963 * __this, MethodInfo* method)
{
	{
		t1966 * L_0 = (t1966 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 43));
		(( void (*) (t1966 * __this, t1963 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 44)->method)(L_0, __this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 44));
		return L_0;
	}
}
extern MethodInfo m10889_MI;
 t4 * m10889_gshared (t1963 * __this, t4 * p0, MethodInfo* method)
{
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral536, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if (((t4 *)IsInst(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 25))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t290_TI));
		t290 * L_1 = m1528(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 45)), &m1528_MI);
		t8* L_2 = (t8*)VirtFuncInvoker0< t8* >::Invoke(&m3825_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
		t8* L_3 = m1741(NULL, (t8*) &_stringLiteral546, L_2, &m1741_MI);
		t303 * L_4 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m6444(L_4, L_3, (t8*) &_stringLiteral536, &m6444_MI);
		il2cpp_codegen_raise_exception (L_4);
	}

IL_003a:
	{
		return ((t4 *)Castclass(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 25)));
	}
}
extern MethodInfo m10891_MI;
 t4 * m10891_gshared (t1963 * __this, t4 * p0, MethodInfo* method)
{
	t4 * V_0 = {0};
	{
		if (p0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t290_TI));
		t290 * L_0 = m1528(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 46)), &m1528_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3794_MI, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (&t4_TI, (&V_0));
		return V_0;
	}

IL_001e:
	{
		if (((t4 *)IsInst(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 47))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t290_TI));
		t290 * L_2 = m1528(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 46)), &m1528_MI);
		t8* L_3 = (t8*)VirtFuncInvoker0< t8* >::Invoke(&m3825_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
		t8* L_4 = m1741(NULL, (t8*) &_stringLiteral546, L_3, &m1741_MI);
		t303 * L_5 = (t303 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t303_TI));
		m6444(L_5, L_4, (t8*) &_stringLiteral242, &m6444_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_004a:
	{
		return ((t4 *)Castclass(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 47)));
	}
}
extern MethodInfo m10900_MI;
 bool m10900 (t1963 * __this, t1967  p0, MethodInfo* method){
	t4 * V_0 = {0};
	{
		t4 * L_0 = m10903((&p0), &m10903_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t4 *, t4 ** >::Invoke(&m10885_MI, __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1485_TI));
		t1485 * L_2 = m8064(NULL, &m8064_MI);
		t4 * L_3 = m10905((&p0), &m10905_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, t4 *, t4 * >::Invoke(&m16863_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m10901_MI;
 t1969  m10901 (t1963 * __this, MethodInfo* method){
	{
		t1969  L_0 = {0};
		m10932(&L_0, __this, &m10932_MI);
		return L_0;
	}
}
extern MethodInfo m10895_MI;
 t827  m10895_gshared (t4 * __this, t4 * p0, t4 * p1, MethodInfo* method)
{
	{
		t4 * L_0 = p0;
		t4 * L_1 = p1;
		t827  L_2 = {0};
		m4332(&L_2, ((t4 *)L_0), ((t4 *)L_1), &m4332_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<System.Object,System.Object>
extern Il2CppType t16_0_0_32849;
FieldInfo t1963_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t16_0_0_32849, &t1963_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t20_0_0_32849;
FieldInfo t1963_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t20_0_0_32849, &t1963_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_32849;
FieldInfo t1963_f2_FieldInfo = 
{
	"NO_SLOT", &t16_0_0_32849, &t1963_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_32849;
FieldInfo t1963_f3_FieldInfo = 
{
	"HASH_FLAG", &t16_0_0_32849, &t1963_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t704_0_0_1;
FieldInfo t1963_f4_FieldInfo = 
{
	"table", &t704_0_0_1, &t1963_TI, offsetof(t1963, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1450_0_0_1;
FieldInfo t1963_f5_FieldInfo = 
{
	"linkSlots", &t1450_0_0_1, &t1963_TI, offsetof(t1963, f5), &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_1;
FieldInfo t1963_f6_FieldInfo = 
{
	"keySlots", &t305_0_0_1, &t1963_TI, offsetof(t1963, f6), &EmptyCustomAttributesCache};
extern Il2CppType t305_0_0_1;
FieldInfo t1963_f7_FieldInfo = 
{
	"valueSlots", &t305_0_0_1, &t1963_TI, offsetof(t1963, f7), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1963_f8_FieldInfo = 
{
	"touchedSlots", &t16_0_0_1, &t1963_TI, offsetof(t1963, f8), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1963_f9_FieldInfo = 
{
	"emptySlot", &t16_0_0_1, &t1963_TI, offsetof(t1963, f9), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1963_f10_FieldInfo = 
{
	"count", &t16_0_0_1, &t1963_TI, offsetof(t1963, f10), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1963_f11_FieldInfo = 
{
	"threshold", &t16_0_0_1, &t1963_TI, offsetof(t1963, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1918_0_0_1;
FieldInfo t1963_f12_FieldInfo = 
{
	"hcp", &t1918_0_0_1, &t1963_TI, offsetof(t1963, f12), &EmptyCustomAttributesCache};
extern Il2CppType t705_0_0_1;
FieldInfo t1963_f13_FieldInfo = 
{
	"serialization_info", &t705_0_0_1, &t1963_TI, offsetof(t1963, f13), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1963_f14_FieldInfo = 
{
	"generation", &t16_0_0_1, &t1963_TI, offsetof(t1963, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1965_0_0_17;
extern CustomAttributesCache t832__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t1963_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t1965_0_0_17, &t1963_TI, offsetof(t1963_SFs, f15), &t832__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t1963_FIs[] =
{
	&t1963_f0_FieldInfo,
	&t1963_f1_FieldInfo,
	&t1963_f2_FieldInfo,
	&t1963_f3_FieldInfo,
	&t1963_f4_FieldInfo,
	&t1963_f5_FieldInfo,
	&t1963_f6_FieldInfo,
	&t1963_f7_FieldInfo,
	&t1963_f8_FieldInfo,
	&t1963_f9_FieldInfo,
	&t1963_f10_FieldInfo,
	&t1963_f11_FieldInfo,
	&t1963_f12_FieldInfo,
	&t1963_f13_FieldInfo,
	&t1963_f14_FieldInfo,
	&t1963_f15_FieldInfo,
	NULL
};
static const int32_t t1963_f0_DefaultValueData = 10;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t1963_f0_DefaultValue = 
{
	&t1963_f0_FieldInfo, { (char*)&t1963_f0_DefaultValueData, &t16_0_0_0 }};
static const float t1963_f1_DefaultValueData = 0.9f;
extern Il2CppType t20_0_0_0;
static Il2CppFieldDefaultValueEntry t1963_f1_DefaultValue = 
{
	&t1963_f1_FieldInfo, { (char*)&t1963_f1_DefaultValueData, &t20_0_0_0 }};
static const int32_t t1963_f2_DefaultValueData = -1;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t1963_f2_DefaultValue = 
{
	&t1963_f2_FieldInfo, { (char*)&t1963_f2_DefaultValueData, &t16_0_0_0 }};
static const int32_t t1963_f3_DefaultValueData = -2147483648;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t1963_f3_DefaultValue = 
{
	&t1963_f3_FieldInfo, { (char*)&t1963_f3_DefaultValueData, &t16_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1963_FDVs[] = 
{
	&t1963_f0_DefaultValue,
	&t1963_f1_DefaultValue,
	&t1963_f2_DefaultValue,
	&t1963_f3_DefaultValue,
	NULL
};
extern MethodInfo m10835_MI;
static PropertyInfo t1963____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t1963_TI, "System.Collections.IDictionary.Item", NULL, &m10835_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10837_MI;
static PropertyInfo t1963____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1963_TI, "System.Collections.ICollection.IsSynchronized", &m10837_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10839_MI;
static PropertyInfo t1963____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1963_TI, "System.Collections.ICollection.SyncRoot", &m10839_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10841_MI;
static PropertyInfo t1963____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t1963_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m10841_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10856_MI;
static PropertyInfo t1963____Count_PropertyInfo = 
{
	&t1963_TI, "Count", &m10856_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10858_MI;
static PropertyInfo t1963____Item_PropertyInfo = 
{
	&t1963_TI, "Item", NULL, &m10858_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10887_MI;
static PropertyInfo t1963____Values_PropertyInfo = 
{
	&t1963_TI, "Values", &m10887_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1963_PIs[] =
{
	&t1963____System_Collections_IDictionary_Item_PropertyInfo,
	&t1963____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1963____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1963____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t1963____Count_PropertyInfo,
	&t1963____Item_PropertyInfo,
	&t1963____Values_PropertyInfo,
	NULL
};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10827_MI = 
{
	".ctor", (methodPointerType)&m10827_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1918_0_0_0;
static ParameterInfo t1963_m10829_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t1918_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10829_MI = 
{
	".ctor", (methodPointerType)&m10829_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1963_m10829_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1963_m10831_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10831_MI = 
{
	".ctor", (methodPointerType)&m10831_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1963_m10831_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t705_0_0_0;
extern Il2CppType t706_0_0_0;
static ParameterInfo t1963_m10833_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t705_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t706_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t706 (MethodInfo* method, void* obj, void** args);
MethodInfo m10833_MI = 
{
	".ctor", (methodPointerType)&m10833_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t706, t1963_m10833_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1963_m10835_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10835_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m10835_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t1963_m10835_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10837_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10837_gshared, &t1963_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10839_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10839_gshared, &t1963_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10841_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m10841_gshared, &t1963_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1967_0_0_0;
static ParameterInfo t1963_m10896_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1967_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t1967 (MethodInfo* method, void* obj, void** args);
MethodInfo m10896_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m10896, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15_t1967, t1963_m10896_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1967_0_0_0;
static ParameterInfo t1963_m10897_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1967_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1967 (MethodInfo* method, void* obj, void** args);
MethodInfo m10897_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m10897, &t1963_TI, &t17_0_0_0, RuntimeInvoker_t17_t1967, t1963_m10897_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1964_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1963_m10845_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1964_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10845_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m10845_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1963_m10845_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1967_0_0_0;
static ParameterInfo t1963_m10898_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1967_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1967 (MethodInfo* method, void* obj, void** args);
MethodInfo m10898_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m10898, &t1963_TI, &t17_0_0_0, RuntimeInvoker_t17_t1967, t1963_m10898_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1963_m10848_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10848_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10848_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1963_m10848_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10850_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10850_gshared, &t1963_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t1968_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10852_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m10852_gshared, &t1963_TI, &t1968_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t833_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10854_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m10854_gshared, &t1963_TI, &t833_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10856_MI = 
{
	"get_Count", (methodPointerType)&m10856_gshared, &t1963_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1963_m10858_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10858_MI = 
{
	"set_Item", (methodPointerType)&m10858_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t1963_m10858_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1918_0_0_0;
static ParameterInfo t1963_m10860_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t1918_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10860_MI = 
{
	"Init", (methodPointerType)&m10860_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t1963_m10860_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1963_m10862_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10862_MI = 
{
	"InitArrays", (methodPointerType)&m10862_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t1963_m10862_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1963_m10864_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10864_MI = 
{
	"CopyToCheck", (methodPointerType)&m10864_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1963_m10864_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern Il2CppGenericContainer m24181_IGC;
extern TypeInfo m24181_gp_TRet_0_TI;
Il2CppGenericParamFull m24181_gp_TRet_0_TI_GenericParamFull = { { &m24181_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m24181_gp_TElem_1_TI;
Il2CppGenericParamFull m24181_gp_TElem_1_TI_GenericParamFull = { { &m24181_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m24181_IGPA[2] = 
{
	&m24181_gp_TRet_0_TI_GenericParamFull,
	&m24181_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m24181_MI;
Il2CppGenericContainer m24181_IGC = { { NULL, NULL }, NULL, &m24181_MI, 2, 1, m24181_IGPA };
MethodInfo m24181_MI = 
{
	"Do_CopyTo", NULL, &t1963_TI, &t15_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1963_m10899_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t1967_0_0_0;
extern void* RuntimeInvoker_t1967_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10899_MI = 
{
	"make_pair", (methodPointerType)&m10899, &t1963_TI, &t1967_0_0_0, RuntimeInvoker_t1967_t4_t4, t1963_m10899_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1963_m10867_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10867_MI = 
{
	"pick_value", (methodPointerType)&m10867_gshared, &t1963_TI, &t4_0_0_0, RuntimeInvoker_t4_t4_t4, t1963_m10867_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1964_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1963_m10869_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1964_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10869_MI = 
{
	"CopyTo", (methodPointerType)&m10869_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1963_m10869_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern Il2CppGenericContainer m24182_IGC;
extern TypeInfo m24182_gp_TRet_0_TI;
Il2CppGenericParamFull m24182_gp_TRet_0_TI_GenericParamFull = { { &m24182_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m24182_IGPA[1] = 
{
	&m24182_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m24182_MI;
Il2CppGenericContainer m24182_IGC = { { NULL, NULL }, NULL, &m24182_MI, 1, 1, m24182_IGPA };
MethodInfo m24182_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t1963_TI, &t15_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10871_MI = 
{
	"Resize", (methodPointerType)&m10871_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1963_m10872_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10872_MI = 
{
	"Add", (methodPointerType)&m10872_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t1963_m10872_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10874_MI = 
{
	"Clear", (methodPointerType)&m10874_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1963_m10876_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10876_MI = 
{
	"ContainsKey", (methodPointerType)&m10876_gshared, &t1963_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1963_m10876_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1963_m10878_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10878_MI = 
{
	"ContainsValue", (methodPointerType)&m10878_gshared, &t1963_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1963_m10878_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t705_0_0_0;
extern Il2CppType t706_0_0_0;
static ParameterInfo t1963_m10880_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t705_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t706_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t706 (MethodInfo* method, void* obj, void** args);
MethodInfo m10880_MI = 
{
	"GetObjectData", (methodPointerType)&m10880_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t706, t1963_m10880_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1963_m10882_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10882_MI = 
{
	"OnDeserialization", (methodPointerType)&m10882_gshared, &t1963_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1963_m10882_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1963_m10884_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10884_MI = 
{
	"Remove", (methodPointerType)&m10884_gshared, &t1963_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1963_m10884_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_1_0_0;
static ParameterInfo t1963_m10885_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_1_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t1507 (MethodInfo* method, void* obj, void** args);
MethodInfo m10885_MI = 
{
	"TryGetValue", (methodPointerType)&m10885_gshared, &t1963_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t1507, t1963_m10885_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t1966_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10887_MI = 
{
	"get_Values", (methodPointerType)&m10887_gshared, &t1963_TI, &t1966_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1963_m10889_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10889_MI = 
{
	"ToTKey", (methodPointerType)&m10889_gshared, &t1963_TI, &t4_0_0_0, RuntimeInvoker_t4_t4, t1963_m10889_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1963_m10891_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10891_MI = 
{
	"ToTValue", (methodPointerType)&m10891_gshared, &t1963_TI, &t4_0_0_0, RuntimeInvoker_t4_t4, t1963_m10891_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1967_0_0_0;
static ParameterInfo t1963_m10900_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t1967_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1967 (MethodInfo* method, void* obj, void** args);
MethodInfo m10900_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m10900, &t1963_TI, &t17_0_0_0, RuntimeInvoker_t17_t1967, t1963_m10900_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t1969_0_0_0;
extern void* RuntimeInvoker_t1969 (MethodInfo* method, void* obj, void** args);
MethodInfo m10901_MI = 
{
	"GetEnumerator", (methodPointerType)&m10901, &t1963_TI, &t1969_0_0_0, RuntimeInvoker_t1969, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1963_m10895_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827_t4_t4 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t832__CustomAttributeCache_m7545;
MethodInfo m10895_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m10895_gshared, &t1963_TI, &t827_0_0_0, RuntimeInvoker_t827_t4_t4, t1963_m10895_ParameterInfos, &t832__CustomAttributeCache_m7545, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1963_MIs[] =
{
	&m10827_MI,
	&m10829_MI,
	&m10831_MI,
	&m10833_MI,
	&m10835_MI,
	&m10837_MI,
	&m10839_MI,
	&m10841_MI,
	&m10896_MI,
	&m10897_MI,
	&m10845_MI,
	&m10898_MI,
	&m10848_MI,
	&m10850_MI,
	&m10852_MI,
	&m10854_MI,
	&m10856_MI,
	&m10858_MI,
	&m10860_MI,
	&m10862_MI,
	&m10864_MI,
	&m24181_MI,
	&m10899_MI,
	&m10867_MI,
	&m10869_MI,
	&m24182_MI,
	&m10871_MI,
	&m10872_MI,
	&m10874_MI,
	&m10876_MI,
	&m10878_MI,
	&m10880_MI,
	&m10882_MI,
	&m10884_MI,
	&m10885_MI,
	&m10887_MI,
	&m10889_MI,
	&m10891_MI,
	&m10900_MI,
	&m10901_MI,
	&m10895_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10850_MI;
extern MethodInfo m10880_MI;
extern MethodInfo m10856_MI;
extern MethodInfo m10837_MI;
extern MethodInfo m10839_MI;
extern MethodInfo m10848_MI;
extern MethodInfo m10856_MI;
extern MethodInfo m10841_MI;
extern MethodInfo m10896_MI;
extern MethodInfo m10874_MI;
extern MethodInfo m10897_MI;
extern MethodInfo m10845_MI;
extern MethodInfo m10898_MI;
extern MethodInfo m10852_MI;
extern MethodInfo m10884_MI;
extern MethodInfo m10835_MI;
extern MethodInfo m10854_MI;
extern MethodInfo m10882_MI;
extern MethodInfo m10858_MI;
extern MethodInfo m10872_MI;
extern MethodInfo m10876_MI;
extern MethodInfo m10880_MI;
extern MethodInfo m10882_MI;
extern MethodInfo m10885_MI;
static MethodInfo* t1963_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10850_MI,
	&m10880_MI,
	&m10856_MI,
	&m10837_MI,
	&m10839_MI,
	&m10848_MI,
	&m10856_MI,
	&m10841_MI,
	&m10896_MI,
	&m10874_MI,
	&m10897_MI,
	&m10845_MI,
	&m10898_MI,
	&m10852_MI,
	&m10884_MI,
	&m10835_MI,
	&m10854_MI,
	&m10882_MI,
	&m10858_MI,
	&m10872_MI,
	&m10876_MI,
	&m10880_MI,
	&m10882_MI,
	&m10885_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t364_TI;
extern TypeInfo t640_TI;
extern TypeInfo t3989_TI;
extern TypeInfo t3991_TI;
extern TypeInfo t5150_TI;
extern TypeInfo t729_TI;
extern TypeInfo t1486_TI;
static TypeInfo* t1963_ITIs[] = 
{
	&t591_TI,
	&t364_TI,
	&t640_TI,
	&t3989_TI,
	&t3991_TI,
	&t5150_TI,
	&t729_TI,
	&t1486_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t364_TI;
extern TypeInfo t640_TI;
extern TypeInfo t3989_TI;
extern TypeInfo t3991_TI;
extern TypeInfo t5150_TI;
extern TypeInfo t729_TI;
extern TypeInfo t1486_TI;
static Il2CppInterfaceOffsetPair t1963_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t364_TI, 5},
	{ &t640_TI, 6},
	{ &t3989_TI, 10},
	{ &t3991_TI, 17},
	{ &t5150_TI, 18},
	{ &t729_TI, 19},
	{ &t1486_TI, 21},
};
extern MethodInfo m10860_MI;
extern MethodInfo m10889_MI;
extern MethodInfo m10891_MI;
extern MethodInfo m10858_MI;
extern MethodInfo m10903_MI;
extern MethodInfo m10905_MI;
extern MethodInfo m10872_MI;
extern MethodInfo m10900_MI;
extern MethodInfo m10869_MI;
extern MethodInfo m10884_MI;
extern TypeInfo t1964_TI;
extern MethodInfo m10864_MI;
extern TypeInfo t1963_TI;
extern MethodInfo m10895_MI;
extern TypeInfo t1965_TI;
extern MethodInfo m10947_MI;
extern MethodInfo m18114_MI;
extern MethodInfo m10899_MI;
extern TypeInfo t1973_TI;
extern MethodInfo m10951_MI;
extern MethodInfo m18116_MI;
extern TypeInfo t1969_TI;
extern MethodInfo m10932_MI;
extern TypeInfo t1974_TI;
extern MethodInfo m10955_MI;
extern TypeInfo t4_TI;
extern MethodInfo m22884_MI;
extern MethodInfo m22883_MI;
extern MethodInfo m10871_MI;
extern MethodInfo m8064_MI;
extern MethodInfo m10862_MI;
extern TypeInfo t305_TI;
extern TypeInfo t305_TI;
extern MethodInfo m10856_MI;
extern TypeInfo t1967_TI;
extern MethodInfo m10902_MI;
extern MethodInfo m18117_MI;
extern MethodInfo m8064_MI;
extern MethodInfo m22883_MI;
extern TypeInfo t1964_TI;
extern Il2CppType t1918_0_0_0;
extern TypeInfo t1918_TI;
extern Il2CppType t1964_0_0_0;
extern TypeInfo t1966_TI;
extern MethodInfo m10913_MI;
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
extern TypeInfo t4_TI;
extern MethodInfo m10885_MI;
extern MethodInfo m16863_MI;
static void* t1963_RGCTXData[50] = 
{
	&m10860_MI,
	&m10889_MI,
	&m10891_MI,
	&m10858_MI,
	&m10903_MI,
	&m10905_MI,
	&m10872_MI,
	&m10900_MI,
	&m10869_MI,
	&m10884_MI,
	&t1964_TI,
	&m10864_MI,
	&t1963_TI,
	&m10895_MI,
	&t1965_TI,
	&m10947_MI,
	&m18114_MI,
	&m10899_MI,
	&t1973_TI,
	&m10951_MI,
	&m18116_MI,
	&t1969_TI,
	&m10932_MI,
	&t1974_TI,
	&m10955_MI,
	&t4_TI,
	&m22884_MI,
	&m22883_MI,
	&m10871_MI,
	&m8064_MI,
	&m10862_MI,
	&t305_TI,
	&t305_TI,
	&m10856_MI,
	&t1967_TI,
	&m10902_MI,
	&m18117_MI,
	&m8064_MI,
	&m22883_MI,
	&t1964_TI,
	(void*)&t1918_0_0_0,
	&t1918_TI,
	(void*)&t1964_0_0_0,
	&t1966_TI,
	&m10913_MI,
	(void*)&t4_0_0_0,
	(void*)&t4_0_0_0,
	&t4_TI,
	&m10885_MI,
	&m16863_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1963_0_0_0;
extern Il2CppType t1963_1_0_0;
extern TypeInfo t4_TI;
struct t1963;
extern TypeInfo t1963_TI;
extern Il2CppGenericClass t1963_GC;
extern CustomAttributesCache t832__CustomAttributeCache;
extern CustomAttributesCache t832__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t832__CustomAttributeCache_m7545;
TypeInfo t1963_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t1963_MIs, t1963_PIs, t1963_FIs, NULL, &t4_TI, NULL, NULL, &t1963_TI, t1963_ITIs, t1963_VT, &t832__CustomAttributeCache, &t1963_TI, &t1963_0_0_0, &t1963_1_0_0, t1963_IOs, &t1963_GC, NULL, t1963_FDVs, NULL, t1963_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1963), 0, -1, sizeof(t1963_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 41, 7, 16, 0, 0, 28, 8, 8};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3989_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern MethodInfo m24183_MI;
static PropertyInfo t3989____Count_PropertyInfo = 
{
	&t3989_TI, "Count", &m24183_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24184_MI;
static PropertyInfo t3989____IsReadOnly_PropertyInfo = 
{
	&t3989_TI, "IsReadOnly", &m24184_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3989_PIs[] =
{
	&t3989____Count_PropertyInfo,
	&t3989____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t3989_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24183_MI = 
{
	"get_Count", NULL, &t3989_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3989_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24184_MI = 
{
	"get_IsReadOnly", NULL, &t3989_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1967_0_0_0;
static ParameterInfo t3989_m24185_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1967_0_0_0},
};
extern TypeInfo t3989_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t1967 (MethodInfo* method, void* obj, void** args);
MethodInfo m24185_MI = 
{
	"Add", NULL, &t3989_TI, &t15_0_0_0, RuntimeInvoker_t15_t1967, t3989_m24185_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t3989_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m24186_MI = 
{
	"Clear", NULL, &t3989_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1967_0_0_0;
static ParameterInfo t3989_m24187_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1967_0_0_0},
};
extern TypeInfo t3989_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1967 (MethodInfo* method, void* obj, void** args);
MethodInfo m24187_MI = 
{
	"Contains", NULL, &t3989_TI, &t17_0_0_0, RuntimeInvoker_t17_t1967, t3989_m24187_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1964_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t3989_m24188_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1964_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3989_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24188_MI = 
{
	"CopyTo", NULL, &t3989_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t3989_m24188_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1967_0_0_0;
static ParameterInfo t3989_m24189_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1967_0_0_0},
};
extern TypeInfo t3989_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1967 (MethodInfo* method, void* obj, void** args);
MethodInfo m24189_MI = 
{
	"Remove", NULL, &t3989_TI, &t17_0_0_0, RuntimeInvoker_t17_t1967, t3989_m24189_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3989_MIs[] =
{
	&m24183_MI,
	&m24184_MI,
	&m24185_MI,
	&m24186_MI,
	&m24187_MI,
	&m24188_MI,
	&m24189_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3991_TI;
static TypeInfo* t3989_ITIs[] = 
{
	&t591_TI,
	&t3991_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3989_0_0_0;
extern Il2CppType t3989_1_0_0;
struct t3989;
extern TypeInfo t3989_TI;
extern Il2CppGenericClass t3989_GC;
TypeInfo t3989_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3989_MIs, t3989_PIs, NULL, NULL, NULL, NULL, NULL, &t3989_TI, t3989_ITIs, NULL, &EmptyCustomAttributesCache, &t3989_TI, &t3989_0_0_0, &t3989_1_0_0, NULL, &t3989_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3991_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern TypeInfo t3991_TI;
extern Il2CppType t1968_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24190_MI = 
{
	"GetEnumerator", NULL, &t3991_TI, &t1968_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3991_MIs[] =
{
	&m24190_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t3991_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3991_0_0_0;
extern Il2CppType t3991_1_0_0;
struct t3991;
extern TypeInfo t3991_TI;
extern Il2CppGenericClass t3991_GC;
TypeInfo t3991_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3991_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3991_TI, t3991_ITIs, NULL, &EmptyCustomAttributesCache, &t3991_TI, &t3991_0_0_0, &t3991_1_0_0, NULL, &t3991_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1968_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern MethodInfo m24191_MI;
static PropertyInfo t1968____Current_PropertyInfo = 
{
	&t1968_TI, "Current", &m24191_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1968_PIs[] =
{
	&t1968____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1968_TI;
extern Il2CppType t1967_0_0_0;
extern void* RuntimeInvoker_t1967 (MethodInfo* method, void* obj, void** args);
MethodInfo m24191_MI = 
{
	"get_Current", NULL, &t1968_TI, &t1967_0_0_0, RuntimeInvoker_t1967, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1968_MIs[] =
{
	&m24191_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t1968_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1968_0_0_0;
extern Il2CppType t1968_1_0_0;
struct t1968;
extern TypeInfo t1968_TI;
extern Il2CppGenericClass t1968_GC;
TypeInfo t1968_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1968_MIs, t1968_PIs, NULL, NULL, NULL, NULL, NULL, &t1968_TI, t1968_ITIs, NULL, &EmptyCustomAttributesCache, &t1968_TI, &t1968_0_0_0, &t1968_1_0_0, NULL, &t1968_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1967_TI;

extern TypeInfo t1967_TI;
extern TypeInfo t434_TI;
extern TypeInfo t8_TI;
extern TypeInfo t4_TI;
extern MethodInfo m10904_MI;
extern MethodInfo m10906_MI;
extern MethodInfo m10903_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10905_MI;
extern MethodInfo m3401_MI;


extern MethodInfo m10902_MI;
 void m10902_gshared (t1967 * __this, t4 * p0, t4 * p1, MethodInfo* method)
{
	{
		(( void (*) (t1967 * __this, t4 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		(( void (*) (t1967 * __this, t4 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(__this, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		return;
	}
}
extern MethodInfo m10903_MI;
 t4 * m10903_gshared (t1967 * __this, MethodInfo* method)
{
	{
		t4 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m10904_MI;
 void m10904_gshared (t1967 * __this, t4 * p0, MethodInfo* method)
{
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m10905_MI;
 t4 * m10905_gshared (t1967 * __this, MethodInfo* method)
{
	{
		t4 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10906_MI;
 void m10906_gshared (t1967 * __this, t4 * p0, MethodInfo* method)
{
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m10907_MI;
 t8* m10907_gshared (t1967 * __this, MethodInfo* method)
{
	t4 * V_0 = {0};
	t4 * V_1 = {0};
	int32_t G_B2_0 = 0;
	t434* G_B2_1 = {0};
	t434* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	t434* G_B1_1 = {0};
	t434* G_B1_2 = {0};
	t8* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t434* G_B3_2 = {0};
	t434* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	t434* G_B5_1 = {0};
	t434* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t434* G_B4_1 = {0};
	t434* G_B4_2 = {0};
	t8* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t434* G_B6_2 = {0};
	t434* G_B6_3 = {0};
	{
		t434* L_0 = ((t434*)SZArrayNew(InitializedTypeInfo(&t434_TI), 5));
		ArrayElementTypeCheck (L_0, (t8*) &_stringLiteral174);
		*((t8**)(t8**)SZArrayLdElema(L_0, 0)) = (t8*)(t8*) &_stringLiteral174;
		t434* L_1 = L_0;
		t4 * L_2 = (( t4 * (*) (t1967 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		t4 * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((t4 *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		t4 * L_4 = (( t4 * (*) (t1967 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		V_0 = L_4;
		t8* L_5 = (t8*)VirtFuncInvoker0< t8* >::Invoke(&m22_MI, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
		G_B3_0 = (((t8_SFs*)(&t8_TI)->static_fields)->f2);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t8**)(t8**)SZArrayLdElema(G_B3_2, G_B3_1)) = (t8*)G_B3_0;
		t434* L_6 = G_B3_3;
		ArrayElementTypeCheck (L_6, (t8*) &_stringLiteral183);
		*((t8**)(t8**)SZArrayLdElema(L_6, 2)) = (t8*)(t8*) &_stringLiteral183;
		t434* L_7 = L_6;
		t4 * L_8 = (( t4 * (*) (t1967 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		t4 * L_9 = L_8;
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!((t4 *)L_9))
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0066;
		}
	}
	{
		t4 * L_10 = (( t4 * (*) (t1967 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		V_1 = L_10;
		t8* L_11 = (t8*)VirtFuncInvoker0< t8* >::Invoke(&m22_MI, (*(&V_1)));
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
		G_B6_0 = (((t8_SFs*)(&t8_TI)->static_fields)->f2);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t8**)(t8**)SZArrayLdElema(G_B6_2, G_B6_1)) = (t8*)G_B6_0;
		t434* L_12 = G_B6_3;
		ArrayElementTypeCheck (L_12, (t8*) &_stringLiteral175);
		*((t8**)(t8**)SZArrayLdElema(L_12, 4)) = (t8*)(t8*) &_stringLiteral175;
		IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
		t8* L_13 = m3401(NULL, L_12, &m3401_MI);
		return L_13;
	}
}
// Metadata Definition System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
extern Il2CppType t4_0_0_1;
FieldInfo t1967_f0_FieldInfo = 
{
	"key", &t4_0_0_1, &t1967_TI, offsetof(t1967, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t1967_f1_FieldInfo = 
{
	"value", &t4_0_0_1, &t1967_TI, offsetof(t1967, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1967_FIs[] =
{
	&t1967_f0_FieldInfo,
	&t1967_f1_FieldInfo,
	NULL
};
extern MethodInfo m10903_MI;
extern MethodInfo m10904_MI;
static PropertyInfo t1967____Key_PropertyInfo = 
{
	&t1967_TI, "Key", &m10903_MI, &m10904_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10905_MI;
extern MethodInfo m10906_MI;
static PropertyInfo t1967____Value_PropertyInfo = 
{
	&t1967_TI, "Value", &m10905_MI, &m10906_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1967_PIs[] =
{
	&t1967____Key_PropertyInfo,
	&t1967____Value_PropertyInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1967_m10902_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1967_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10902_MI = 
{
	".ctor", (methodPointerType)&m10902_gshared, &t1967_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t1967_m10902_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10903_MI = 
{
	"get_Key", (methodPointerType)&m10903_gshared, &t1967_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1967_m10904_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1967_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10904_MI = 
{
	"set_Key", (methodPointerType)&m10904_gshared, &t1967_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1967_m10904_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10905_MI = 
{
	"get_Value", (methodPointerType)&m10905_gshared, &t1967_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1967_m10906_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1967_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10906_MI = 
{
	"set_Value", (methodPointerType)&m10906_gshared, &t1967_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1967_m10906_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10907_MI = 
{
	"ToString", (methodPointerType)&m10907_gshared, &t1967_TI, &t8_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1967_MIs[] =
{
	&m10902_MI,
	&m10903_MI,
	&m10904_MI,
	&m10905_MI,
	&m10906_MI,
	&m10907_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m10907_MI;
static MethodInfo* t1967_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m10907_MI,
};
extern MethodInfo m10904_MI;
extern MethodInfo m10906_MI;
extern MethodInfo m10903_MI;
extern TypeInfo t4_TI;
extern MethodInfo m10905_MI;
extern TypeInfo t4_TI;
static void* t1967_RGCTXData[6] = 
{
	&m10904_MI,
	&m10906_MI,
	&m10903_MI,
	&t4_TI,
	&m10905_MI,
	&t4_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1967_0_0_0;
extern Il2CppType t1967_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1967_TI;
extern Il2CppGenericClass t1967_GC;
extern CustomAttributesCache t837__CustomAttributeCache;
TypeInfo t1967_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t1967_MIs, t1967_PIs, t1967_FIs, NULL, &t95_TI, NULL, NULL, &t1967_TI, NULL, t1967_VT, &t837__CustomAttributeCache, &t1967_TI, &t1967_0_0_0, &t1967_1_0_0, NULL, &t1967_GC, NULL, NULL, NULL, t1967_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1967)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t1970.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1970_TI;
#include "t1970MD.h"

extern TypeInfo t1970_TI;
extern TypeInfo t1967_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10912_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m18102_MI;
struct t14;
 t1967  m18102 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18102_MI;


extern MethodInfo m10908_MI;
 void m10908 (t1970 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10909_MI;
 t4 * m10909 (t1970 * __this, MethodInfo* method){
	{
		t1967  L_0 = m10912(__this, &m10912_MI);
		t1967  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1967_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10910_MI;
 void m10910 (t1970 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10911_MI;
 bool m10911 (t1970 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t14 * L_1 = (__this->f0);
		int32_t L_2 = m3690(L_1, &m3690_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m10912_MI;
 t1967  m10912 (t1970 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral370, &m6887_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1269 * L_3 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_3, (t8*) &_stringLiteral371, &m6887_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t14 * L_4 = (__this->f0);
		t14 * L_5 = (__this->f0);
		int32_t L_6 = m3690(L_5, &m3690_MI);
		int32_t L_7 = (__this->f1);
		t1967  L_8 = m18102(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18102_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern Il2CppType t14_0_0_1;
FieldInfo t1970_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t1970_TI, offsetof(t1970, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1970_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t1970_TI, offsetof(t1970, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1970_FIs[] =
{
	&t1970_f0_FieldInfo,
	&t1970_f1_FieldInfo,
	NULL
};
extern MethodInfo m10909_MI;
static PropertyInfo t1970____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1970_TI, "System.Collections.IEnumerator.Current", &m10909_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10912_MI;
static PropertyInfo t1970____Current_PropertyInfo = 
{
	&t1970_TI, "Current", &m10912_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1970_PIs[] =
{
	&t1970____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1970____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t1970_m10908_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t1970_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10908_MI = 
{
	".ctor", (methodPointerType)&m10908, &t1970_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1970_m10908_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1970_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10909_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10909, &t1970_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1970_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10910_MI = 
{
	"Dispose", (methodPointerType)&m10910, &t1970_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1970_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10911_MI = 
{
	"MoveNext", (methodPointerType)&m10911, &t1970_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1970_TI;
extern Il2CppType t1967_0_0_0;
extern void* RuntimeInvoker_t1967 (MethodInfo* method, void* obj, void** args);
MethodInfo m10912_MI = 
{
	"get_Current", (methodPointerType)&m10912, &t1970_TI, &t1967_0_0_0, RuntimeInvoker_t1967, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1970_MIs[] =
{
	&m10908_MI,
	&m10909_MI,
	&m10910_MI,
	&m10911_MI,
	&m10912_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10909_MI;
extern MethodInfo m10911_MI;
extern MethodInfo m10910_MI;
extern MethodInfo m10912_MI;
static MethodInfo* t1970_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10909_MI,
	&m10911_MI,
	&m10910_MI,
	&m10912_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1968_TI;
static TypeInfo* t1970_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t1968_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1968_TI;
static Il2CppInterfaceOffsetPair t1970_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t1968_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1970_0_0_0;
extern Il2CppType t1970_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1970_TI;
extern Il2CppGenericClass t1970_GC;
extern TypeInfo t14_TI;
TypeInfo t1970_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1970_MIs, t1970_PIs, t1970_FIs, NULL, &t95_TI, NULL, &t14_TI, &t1970_TI, t1970_ITIs, t1970_VT, &EmptyCustomAttributesCache, &t1970_TI, &t1970_0_0_0, &t1970_1_0_0, t1970_IOs, &t1970_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1970)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3990_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern MethodInfo m24192_MI;
extern MethodInfo m24193_MI;
static PropertyInfo t3990____Item_PropertyInfo = 
{
	&t3990_TI, "Item", &m24192_MI, &m24193_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3990_PIs[] =
{
	&t3990____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1967_0_0_0;
static ParameterInfo t3990_m24194_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1967_0_0_0},
};
extern TypeInfo t3990_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t1967 (MethodInfo* method, void* obj, void** args);
MethodInfo m24194_MI = 
{
	"IndexOf", NULL, &t3990_TI, &t16_0_0_0, RuntimeInvoker_t16_t1967, t3990_m24194_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1967_0_0_0;
static ParameterInfo t3990_m24195_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1967_0_0_0},
};
extern TypeInfo t3990_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t1967 (MethodInfo* method, void* obj, void** args);
MethodInfo m24195_MI = 
{
	"Insert", NULL, &t3990_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t1967, t3990_m24195_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3990_m24196_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3990_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24196_MI = 
{
	"RemoveAt", NULL, &t3990_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t3990_m24196_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t3990_m24192_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t3990_TI;
extern Il2CppType t1967_0_0_0;
extern void* RuntimeInvoker_t1967_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24192_MI = 
{
	"get_Item", NULL, &t3990_TI, &t1967_0_0_0, RuntimeInvoker_t1967_t16, t3990_m24192_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t1967_0_0_0;
static ParameterInfo t3990_m24193_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1967_0_0_0},
};
extern TypeInfo t3990_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t1967 (MethodInfo* method, void* obj, void** args);
MethodInfo m24193_MI = 
{
	"set_Item", NULL, &t3990_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t1967, t3990_m24193_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3990_MIs[] =
{
	&m24194_MI,
	&m24195_MI,
	&m24196_MI,
	&m24192_MI,
	&m24193_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3989_TI;
extern TypeInfo t3991_TI;
static TypeInfo* t3990_ITIs[] = 
{
	&t591_TI,
	&t3989_TI,
	&t3991_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3990_0_0_0;
extern Il2CppType t3990_1_0_0;
struct t3990;
extern TypeInfo t3990_TI;
extern Il2CppGenericClass t3990_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t3990_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3990_MIs, t3990_PIs, NULL, NULL, NULL, NULL, NULL, &t3990_TI, t3990_ITIs, NULL, &t1400__CustomAttributeCache, &t3990_TI, &t3990_0_0_0, &t3990_1_0_0, NULL, &t3990_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5150_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<System.Object,System.Object>
extern Il2CppType t4_0_0_0;
static ParameterInfo t5150_m24197_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t5150_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24197_MI = 
{
	"Remove", NULL, &t5150_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5150_m24197_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5150_MIs[] =
{
	&m24197_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t3989_TI;
extern TypeInfo t3991_TI;
static TypeInfo* t5150_ITIs[] = 
{
	&t591_TI,
	&t3989_TI,
	&t3991_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5150_0_0_0;
extern Il2CppType t5150_1_0_0;
struct t5150;
extern TypeInfo t5150_TI;
extern Il2CppGenericClass t5150_GC;
extern CustomAttributesCache t1460__CustomAttributeCache;
TypeInfo t5150_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5150_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5150_TI, t5150_ITIs, NULL, &t1460__CustomAttributeCache, &t5150_TI, &t5150_0_0_0, &t5150_1_0_0, NULL, &t5150_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1966_TI;

#include "t1971.h"
#include "t1972.h"
extern TypeInfo t1966_TI;
extern TypeInfo t640_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1963_TI;
extern TypeInfo t16_TI;
extern TypeInfo t328_TI;
extern TypeInfo t335_TI;
extern TypeInfo t1971_TI;
extern TypeInfo t305_TI;
extern TypeInfo t15_TI;
extern TypeInfo t1972_TI;
#include "t1972MD.h"
#include "t1971MD.h"
extern MethodInfo m7381_MI;
extern MethodInfo m10856_MI;
extern MethodInfo m15_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m6989_MI;
extern MethodInfo m10878_MI;
extern MethodInfo m10925_MI;
extern MethodInfo m10924_MI;
extern MethodInfo m10864_MI;
extern MethodInfo m10867_MI;
extern MethodInfo m10943_MI;
extern MethodInfo m18113_MI;
extern MethodInfo m18112_MI;
extern MethodInfo m10927_MI;
struct t1963;
 void m18113_gshared (t1963 * __this, t14 * p0, int32_t p1, t1972 * p2, MethodInfo* method);
#define m18113(__this, p0, p1, p2, method) (void)m18113_gshared((t1963 *)__this, (t14 *)p0, (int32_t)p1, (t1972 *)p2, method)
extern MethodInfo m18113_MI;
struct t1963;
 void m18112 (t1963 * __this, t305* p0, int32_t p1, t1972 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18112_MI;


extern MethodInfo m10913_MI;
 void m10913_gshared (t1966 * __this, t1963 * p0, MethodInfo* method)
{
	{
		m15(__this, &m15_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2927(L_0, (t8*) &_stringLiteral549, &m2927_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m10914_MI;
 void m10914_gshared (t1966 * __this, t4 * p0, MethodInfo* method)
{
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m6989(L_0, (t8*) &_stringLiteral550, &m6989_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10915_MI;
 void m10915_gshared (t1966 * __this, MethodInfo* method)
{
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m6989(L_0, (t8*) &_stringLiteral550, &m6989_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10916_MI;
 bool m10916_gshared (t1966 * __this, t4 * p0, MethodInfo* method)
{
	{
		t1963 * L_0 = (__this->f0);
		bool L_1 = (( bool (*) (t1963 * __this, t4 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(L_0, p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return L_1;
	}
}
extern MethodInfo m10917_MI;
 bool m10917_gshared (t1966 * __this, t4 * p0, MethodInfo* method)
{
	{
		t335 * L_0 = (t335 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t335_TI));
		m6989(L_0, (t8*) &_stringLiteral550, &m6989_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10918_MI;
 t4* m10918_gshared (t1966 * __this, MethodInfo* method)
{
	{
		t1971  L_0 = (( t1971  (*) (t1966 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		t1971  L_1 = L_0;
		t4 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_1);
		return (t4*)L_2;
	}
}
extern MethodInfo m10919_MI;
 void m10919_gshared (t1966 * __this, t14 * p0, int32_t p1, MethodInfo* method)
{
	t305* V_0 = {0};
	{
		V_0 = ((t305*)IsInst(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t305*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4), __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t1963 * L_0 = (__this->f0);
		(( void (*) (t1963 * __this, t14 * p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->method)(L_0, p0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		t1963 * L_1 = (__this->f0);
		t50 L_2 = { IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6) };
		t1972 * L_3 = (t1972 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 7));
		(( void (*) (t1972 * __this, t4 * p0, t50 p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(L_3, NULL, L_2, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		(( void (*) (t1963 * __this, t14 * p0, int32_t p1, t1972 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9)->method)(L_1, p0, p1, L_3, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9));
		return;
	}
}
extern MethodInfo m10920_MI;
 t4 * m10920_gshared (t1966 * __this, MethodInfo* method)
{
	{
		t1971  L_0 = (( t1971  (*) (t1966 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		t1971  L_1 = L_0;
		t4 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_1);
		return (t4 *)L_2;
	}
}
extern MethodInfo m10921_MI;
 bool m10921_gshared (t1966 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m10922_MI;
 bool m10922_gshared (t1966 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m10923_MI;
 t4 * m10923_gshared (t1966 * __this, MethodInfo* method)
{
	{
		t1963 * L_0 = (__this->f0);
		t4 * L_1 = (t4 *)InterfaceFuncInvoker0< t4 * >::Invoke(&m7381_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m10924_MI;
 void m10924_gshared (t1966 * __this, t305* p0, int32_t p1, MethodInfo* method)
{
	{
		t1963 * L_0 = (__this->f0);
		(( void (*) (t1963 * __this, t14 * p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->method)(L_0, (t14 *)(t14 *)p0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		t1963 * L_1 = (__this->f0);
		t50 L_2 = { IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6) };
		t1972 * L_3 = (t1972 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 7));
		(( void (*) (t1972 * __this, t4 * p0, t50 p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(L_3, NULL, L_2, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		(( void (*) (t1963 * __this, t305* p0, int32_t p1, t1972 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10)->method)(L_1, p0, p1, L_3, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10));
		return;
	}
}
extern MethodInfo m10925_MI;
 t1971  m10925 (t1966 * __this, MethodInfo* method){
	{
		t1963 * L_0 = (__this->f0);
		t1971  L_1 = {0};
		m10927(&L_1, L_0, &m10927_MI);
		return L_1;
	}
}
extern MethodInfo m10926_MI;
 int32_t m10926_gshared (t1966 * __this, MethodInfo* method)
{
	{
		t1963 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 12), L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
extern Il2CppType t1963_0_0_1;
FieldInfo t1966_f0_FieldInfo = 
{
	"dictionary", &t1963_0_0_1, &t1966_TI, offsetof(t1966, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1966_FIs[] =
{
	&t1966_f0_FieldInfo,
	NULL
};
extern MethodInfo m10921_MI;
static PropertyInfo t1966____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t1966_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m10921_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10922_MI;
static PropertyInfo t1966____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1966_TI, "System.Collections.ICollection.IsSynchronized", &m10922_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10923_MI;
static PropertyInfo t1966____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1966_TI, "System.Collections.ICollection.SyncRoot", &m10923_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10926_MI;
static PropertyInfo t1966____Count_PropertyInfo = 
{
	&t1966_TI, "Count", &m10926_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1966_PIs[] =
{
	&t1966____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t1966____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1966____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1966____Count_PropertyInfo,
	NULL
};
extern Il2CppType t1963_0_0_0;
static ParameterInfo t1966_m10913_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern TypeInfo t1966_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10913_MI = 
{
	".ctor", (methodPointerType)&m10913_gshared, &t1966_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1966_m10913_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1966_m10914_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1966_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10914_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m10914_gshared, &t1966_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1966_m10914_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1966_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10915_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m10915_gshared, &t1966_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1966_m10916_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1966_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10916_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m10916_gshared, &t1966_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1966_m10916_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1966_m10917_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1966_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10917_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m10917_gshared, &t1966_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1966_m10917_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1966_TI;
extern Il2CppType t336_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10918_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m10918_gshared, &t1966_TI, &t336_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1966_m10919_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1966_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10919_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10919_gshared, &t1966_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1966_m10919_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1966_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10920_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10920_gshared, &t1966_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1966_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10921_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m10921_gshared, &t1966_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1966_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10922_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10922_gshared, &t1966_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1966_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10923_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10923_gshared, &t1966_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t305_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1966_m10924_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t305_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1966_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10924_MI = 
{
	"CopyTo", (methodPointerType)&m10924_gshared, &t1966_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1966_m10924_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1966_TI;
extern Il2CppType t1971_0_0_0;
extern void* RuntimeInvoker_t1971 (MethodInfo* method, void* obj, void** args);
MethodInfo m10925_MI = 
{
	"GetEnumerator", (methodPointerType)&m10925, &t1966_TI, &t1971_0_0_0, RuntimeInvoker_t1971, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1966_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10926_MI = 
{
	"get_Count", (methodPointerType)&m10926_gshared, &t1966_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1966_MIs[] =
{
	&m10913_MI,
	&m10914_MI,
	&m10915_MI,
	&m10916_MI,
	&m10917_MI,
	&m10918_MI,
	&m10919_MI,
	&m10920_MI,
	&m10921_MI,
	&m10922_MI,
	&m10923_MI,
	&m10924_MI,
	&m10925_MI,
	&m10926_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10920_MI;
extern MethodInfo m10926_MI;
extern MethodInfo m10922_MI;
extern MethodInfo m10923_MI;
extern MethodInfo m10919_MI;
extern MethodInfo m10926_MI;
extern MethodInfo m10921_MI;
extern MethodInfo m10914_MI;
extern MethodInfo m10915_MI;
extern MethodInfo m10916_MI;
extern MethodInfo m10924_MI;
extern MethodInfo m10917_MI;
extern MethodInfo m10918_MI;
static MethodInfo* t1966_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10920_MI,
	&m10926_MI,
	&m10922_MI,
	&m10923_MI,
	&m10919_MI,
	&m10926_MI,
	&m10921_MI,
	&m10914_MI,
	&m10915_MI,
	&m10916_MI,
	&m10924_MI,
	&m10917_MI,
	&m10918_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1608_TI;
extern TypeInfo t1609_TI;
static TypeInfo* t1966_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1608_TI,
	&t1609_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1608_TI;
extern TypeInfo t1609_TI;
static Il2CppInterfaceOffsetPair t1966_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1608_TI, 9},
	{ &t1609_TI, 16},
};
extern MethodInfo m10878_MI;
extern MethodInfo m10925_MI;
extern TypeInfo t1971_TI;
extern TypeInfo t305_TI;
extern MethodInfo m10924_MI;
extern MethodInfo m10864_MI;
extern MethodInfo m10867_MI;
extern TypeInfo t1972_TI;
extern MethodInfo m10943_MI;
extern MethodInfo m18113_MI;
extern MethodInfo m18112_MI;
extern MethodInfo m10927_MI;
extern MethodInfo m10856_MI;
static void* t1966_RGCTXData[13] = 
{
	&m10878_MI,
	&m10925_MI,
	&t1971_TI,
	&t305_TI,
	&m10924_MI,
	&m10864_MI,
	&m10867_MI,
	&t1972_TI,
	&m10943_MI,
	&m18113_MI,
	&m18112_MI,
	&m10927_MI,
	&m10856_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1966_0_0_0;
extern Il2CppType t1966_1_0_0;
extern TypeInfo t4_TI;
struct t1966;
extern TypeInfo t1966_TI;
extern Il2CppGenericClass t1966_GC;
extern TypeInfo t832_TI;
extern CustomAttributesCache t830__CustomAttributeCache;
TypeInfo t1966_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t1966_MIs, t1966_PIs, t1966_FIs, NULL, &t4_TI, NULL, &t832_TI, &t1966_TI, t1966_ITIs, t1966_VT, &t830__CustomAttributeCache, &t1966_TI, &t1966_0_0_0, &t1966_1_0_0, t1966_IOs, &t1966_GC, NULL, NULL, NULL, t1966_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1966), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1971_TI;

extern TypeInfo t1971_TI;
extern TypeInfo t4_TI;
extern TypeInfo t1969_TI;
extern TypeInfo t15_TI;
extern TypeInfo t17_TI;
extern MethodInfo m10939_MI;
extern MethodInfo m10905_MI;
extern MethodInfo m10901_MI;
extern MethodInfo m10942_MI;
extern MethodInfo m10936_MI;


extern MethodInfo m10927_MI;
 void m10927_gshared (t1971 * __this, t1963 * p0, MethodInfo* method)
{
	{
		t1969  L_0 = (( t1969  (*) (t1963 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10928_MI;
 t4 * m10928_gshared (t1971 * __this, MethodInfo* method)
{
	{
		t1969 * L_0 = &(__this->f0);
		t4 * L_1 = (( t4 * (*) (t1969 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		t4 * L_2 = L_1;
		return ((t4 *)L_2);
	}
}
extern MethodInfo m10929_MI;
 void m10929_gshared (t1971 * __this, MethodInfo* method)
{
	{
		t1969 * L_0 = &(__this->f0);
		(( void (*) (t1969 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		return;
	}
}
extern MethodInfo m10930_MI;
 bool m10930_gshared (t1971 * __this, MethodInfo* method)
{
	{
		t1969 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t1969 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		return L_1;
	}
}
extern MethodInfo m10931_MI;
 t4 * m10931_gshared (t1971 * __this, MethodInfo* method)
{
	{
		t1969 * L_0 = &(__this->f0);
		t1967 * L_1 = &(L_0->f3);
		t4 * L_2 = (( t4 * (*) (t1967 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->method)(L_1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
extern Il2CppType t1969_0_0_1;
FieldInfo t1971_f0_FieldInfo = 
{
	"host_enumerator", &t1969_0_0_1, &t1971_TI, offsetof(t1971, f0) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1971_FIs[] =
{
	&t1971_f0_FieldInfo,
	NULL
};
extern MethodInfo m10928_MI;
static PropertyInfo t1971____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1971_TI, "System.Collections.IEnumerator.Current", &m10928_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10931_MI;
static PropertyInfo t1971____Current_PropertyInfo = 
{
	&t1971_TI, "Current", &m10931_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1971_PIs[] =
{
	&t1971____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1971____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1963_0_0_0;
static ParameterInfo t1971_m10927_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern TypeInfo t1971_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10927_MI = 
{
	".ctor", (methodPointerType)&m10927_gshared, &t1971_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1971_m10927_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1971_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10928_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10928_gshared, &t1971_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1971_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10929_MI = 
{
	"Dispose", (methodPointerType)&m10929_gshared, &t1971_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1971_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10930_MI = 
{
	"MoveNext", (methodPointerType)&m10930_gshared, &t1971_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1971_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10931_MI = 
{
	"get_Current", (methodPointerType)&m10931_gshared, &t1971_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1971_MIs[] =
{
	&m10927_MI,
	&m10928_MI,
	&m10929_MI,
	&m10930_MI,
	&m10931_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10928_MI;
extern MethodInfo m10930_MI;
extern MethodInfo m10929_MI;
extern MethodInfo m10931_MI;
static MethodInfo* t1971_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10928_MI,
	&m10930_MI,
	&m10929_MI,
	&m10931_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t336_TI;
static TypeInfo* t1971_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t336_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t336_TI;
static Il2CppInterfaceOffsetPair t1971_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t336_TI, 7},
};
extern MethodInfo m10901_MI;
extern MethodInfo m10939_MI;
extern TypeInfo t4_TI;
extern MethodInfo m10942_MI;
extern MethodInfo m10936_MI;
extern MethodInfo m10905_MI;
static void* t1971_RGCTXData[6] = 
{
	&m10901_MI,
	&m10939_MI,
	&t4_TI,
	&m10942_MI,
	&m10936_MI,
	&m10905_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1971_0_0_0;
extern Il2CppType t1971_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1971_TI;
extern Il2CppGenericClass t1971_GC;
extern TypeInfo t830_TI;
TypeInfo t1971_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1971_MIs, t1971_PIs, t1971_FIs, NULL, &t95_TI, NULL, &t830_TI, &t1971_TI, t1971_ITIs, t1971_VT, &EmptyCustomAttributesCache, &t1971_TI, &t1971_0_0_0, &t1971_1_0_0, t1971_IOs, &t1971_GC, NULL, NULL, NULL, t1971_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1971)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1969_TI;

extern TypeInfo t1969_TI;
extern TypeInfo t1967_TI;
extern TypeInfo t4_TI;
extern TypeInfo t827_TI;
extern TypeInfo t1963_TI;
extern TypeInfo t825_TI;
extern TypeInfo t1286_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m10941_MI;
extern MethodInfo m10903_MI;
extern MethodInfo m10905_MI;
extern MethodInfo m4332_MI;
extern MethodInfo m10938_MI;
extern MethodInfo m10940_MI;
extern MethodInfo m10902_MI;
extern MethodInfo m7091_MI;
extern MethodInfo m6887_MI;


extern MethodInfo m10932_MI;
 void m10932_gshared (t1969 * __this, t1963 * p0, MethodInfo* method)
{
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m10933_MI;
 t4 * m10933_gshared (t1969 * __this, MethodInfo* method)
{
	{
		(( void (*) (t1969 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		t1967  L_0 = (__this->f3);
		t1967  L_1 = L_0;
		t4 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern MethodInfo m10934_MI;
 t827  m10934_gshared (t1969 * __this, MethodInfo* method)
{
	{
		(( void (*) (t1969 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		t1967 * L_0 = &(__this->f3);
		t4 * L_1 = (( t4 * (*) (t1967 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		t4 * L_2 = L_1;
		t1967 * L_3 = &(__this->f3);
		t4 * L_4 = (( t4 * (*) (t1967 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(L_3, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		t4 * L_5 = L_4;
		t827  L_6 = {0};
		m4332(&L_6, ((t4 *)L_2), ((t4 *)L_5), &m4332_MI);
		return L_6;
	}
}
extern MethodInfo m10935_MI;
 t4 * m10935_gshared (t1969 * __this, MethodInfo* method)
{
	{
		t4 * L_0 = (( t4 * (*) (t1969 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
		t4 * L_1 = L_0;
		return ((t4 *)L_1);
	}
}
extern MethodInfo m10936_MI;
 bool m10936_gshared (t1969 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (t1969 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7));
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->f1 = ((int32_t)(L_2+1));
		V_0 = V_1;
		t1963 * L_3 = (__this->f0);
		t1450* L_4 = (L_3->f5);
		int32_t L_5 = (((t825 *)(t825 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)(L_5&((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t1963 * L_6 = (__this->f0);
		t305* L_7 = (L_6->f6);
		t1963 * L_8 = (__this->f0);
		t305* L_9 = (L_8->f7);
		t1967  L_10 = {0};
		(( void (*) (t1967 * __this, t4 * p0, t4 * p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(&L_10, (*(t4 **)(t4 **)SZArrayLdElema(L_7, V_0)), (*(t4 **)(t4 **)SZArrayLdElema(L_9, V_0)), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		__this->f3 = L_10;
		return 1;
	}

IL_0072:
	{
		int32_t L_11 = (__this->f1);
		t1963 * L_12 = (__this->f0);
		int32_t L_13 = (L_12->f8);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m10937_MI;
 t1967  m10937 (t1969 * __this, MethodInfo* method){
	{
		t1967  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10938_MI;
 t4 * m10938_gshared (t1969 * __this, MethodInfo* method)
{
	{
		(( void (*) (t1969 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		t1967 * L_0 = &(__this->f3);
		t4 * L_1 = (( t4 * (*) (t1967 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		return L_1;
	}
}
extern MethodInfo m10939_MI;
 t4 * m10939_gshared (t1969 * __this, MethodInfo* method)
{
	{
		(( void (*) (t1969 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		t1967 * L_0 = &(__this->f3);
		t4 * L_1 = (( t4 * (*) (t1967 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		return L_1;
	}
}
extern MethodInfo m10940_MI;
 void m10940_gshared (t1969 * __this, MethodInfo* method)
{
	{
		t1963 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1286 * L_1 = (t1286 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1286_TI));
		m7091(L_1, (t8*)NULL, &m7091_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000f:
	{
		t1963 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f14);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1269 * L_5 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_5, (t8*) &_stringLiteral547, &m6887_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m10941_MI;
 void m10941_gshared (t1969 * __this, MethodInfo* method)
{
	{
		(( void (*) (t1969 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7));
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1269 * L_1 = (t1269 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1269_TI));
		m6887(L_1, (t8*) &_stringLiteral548, &m6887_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001a:
	{
		return;
	}
}
extern MethodInfo m10942_MI;
 void m10942_gshared (t1969 * __this, MethodInfo* method)
{
	{
		__this->f0 = (t1963 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
extern Il2CppType t1963_0_0_1;
FieldInfo t1969_f0_FieldInfo = 
{
	"dictionary", &t1963_0_0_1, &t1969_TI, offsetof(t1969, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1969_f1_FieldInfo = 
{
	"next", &t16_0_0_1, &t1969_TI, offsetof(t1969, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t1969_f2_FieldInfo = 
{
	"stamp", &t16_0_0_1, &t1969_TI, offsetof(t1969, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t1967_0_0_3;
FieldInfo t1969_f3_FieldInfo = 
{
	"current", &t1967_0_0_3, &t1969_TI, offsetof(t1969, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1969_FIs[] =
{
	&t1969_f0_FieldInfo,
	&t1969_f1_FieldInfo,
	&t1969_f2_FieldInfo,
	&t1969_f3_FieldInfo,
	NULL
};
extern MethodInfo m10933_MI;
static PropertyInfo t1969____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1969_TI, "System.Collections.IEnumerator.Current", &m10933_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10934_MI;
static PropertyInfo t1969____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t1969_TI, "System.Collections.IDictionaryEnumerator.Entry", &m10934_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10935_MI;
static PropertyInfo t1969____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t1969_TI, "System.Collections.IDictionaryEnumerator.Key", &m10935_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10937_MI;
static PropertyInfo t1969____Current_PropertyInfo = 
{
	&t1969_TI, "Current", &m10937_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10938_MI;
static PropertyInfo t1969____CurrentKey_PropertyInfo = 
{
	&t1969_TI, "CurrentKey", &m10938_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10939_MI;
static PropertyInfo t1969____CurrentValue_PropertyInfo = 
{
	&t1969_TI, "CurrentValue", &m10939_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1969_PIs[] =
{
	&t1969____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1969____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t1969____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t1969____Current_PropertyInfo,
	&t1969____CurrentKey_PropertyInfo,
	&t1969____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t1963_0_0_0;
static ParameterInfo t1969_m10932_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern TypeInfo t1969_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10932_MI = 
{
	".ctor", (methodPointerType)&m10932_gshared, &t1969_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1969_m10932_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1969_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10933_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10933_gshared, &t1969_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1969_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827 (MethodInfo* method, void* obj, void** args);
MethodInfo m10934_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m10934_gshared, &t1969_TI, &t827_0_0_0, RuntimeInvoker_t827, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1969_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10935_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m10935_gshared, &t1969_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1969_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10936_MI = 
{
	"MoveNext", (methodPointerType)&m10936_gshared, &t1969_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1969_TI;
extern Il2CppType t1967_0_0_0;
extern void* RuntimeInvoker_t1967 (MethodInfo* method, void* obj, void** args);
MethodInfo m10937_MI = 
{
	"get_Current", (methodPointerType)&m10937, &t1969_TI, &t1967_0_0_0, RuntimeInvoker_t1967, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1969_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10938_MI = 
{
	"get_CurrentKey", (methodPointerType)&m10938_gshared, &t1969_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1969_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10939_MI = 
{
	"get_CurrentValue", (methodPointerType)&m10939_gshared, &t1969_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1969_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10940_MI = 
{
	"VerifyState", (methodPointerType)&m10940_gshared, &t1969_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1969_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10941_MI = 
{
	"VerifyCurrent", (methodPointerType)&m10941_gshared, &t1969_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1969_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10942_MI = 
{
	"Dispose", (methodPointerType)&m10942_gshared, &t1969_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1969_MIs[] =
{
	&m10932_MI,
	&m10933_MI,
	&m10934_MI,
	&m10935_MI,
	&m10936_MI,
	&m10937_MI,
	&m10938_MI,
	&m10939_MI,
	&m10940_MI,
	&m10941_MI,
	&m10942_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m10933_MI;
extern MethodInfo m10936_MI;
extern MethodInfo m10942_MI;
extern MethodInfo m10937_MI;
extern MethodInfo m10934_MI;
extern MethodInfo m10935_MI;
static MethodInfo* t1969_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m10933_MI,
	&m10936_MI,
	&m10942_MI,
	&m10937_MI,
	&m10934_MI,
	&m10935_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1968_TI;
extern TypeInfo t833_TI;
static TypeInfo* t1969_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t1968_TI,
	&t833_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1968_TI;
extern TypeInfo t833_TI;
static Il2CppInterfaceOffsetPair t1969_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t1968_TI, 7},
	{ &t833_TI, 8},
};
extern MethodInfo m10941_MI;
extern TypeInfo t1967_TI;
extern MethodInfo m10903_MI;
extern TypeInfo t4_TI;
extern MethodInfo m10905_MI;
extern TypeInfo t4_TI;
extern MethodInfo m10938_MI;
extern MethodInfo m10940_MI;
extern MethodInfo m10902_MI;
static void* t1969_RGCTXData[9] = 
{
	&m10941_MI,
	&t1967_TI,
	&m10903_MI,
	&t4_TI,
	&m10905_MI,
	&t4_TI,
	&m10938_MI,
	&m10940_MI,
	&m10902_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1969_0_0_0;
extern Il2CppType t1969_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1969_TI;
extern Il2CppGenericClass t1969_GC;
extern TypeInfo t832_TI;
TypeInfo t1969_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1969_MIs, t1969_PIs, t1969_FIs, NULL, &t95_TI, NULL, &t832_TI, &t1969_TI, t1969_ITIs, t1969_VT, &EmptyCustomAttributesCache, &t1969_TI, &t1969_0_0_0, &t1969_1_0_0, t1969_IOs, &t1969_GC, NULL, NULL, NULL, t1969_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1969)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1972_TI;



extern MethodInfo m10943_MI;
 void m10943_gshared (t1972 * __this, t4 * p0, t50 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10944_MI;
 t4 * m10944_gshared (t1972 * __this, t4 * p0, t4 * p1, MethodInfo* method)
{
	typedef  t4 * (*FunctionPointerType) (t4 * __this, t4 * p0, t4 * p1, MethodInfo* method);
	if (__this->f9)
		m10944((t1972 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10945_MI;
 t4 * m10945_gshared (t1972 * __this, t4 * p0, t4 * p1, t49 * p2, t4 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10946_MI;
 t4 * m10946_gshared (t1972 * __this, t4 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t4 *)__result;
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1972_m10943_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10943_MI = 
{
	".ctor", (methodPointerType)&m10943_gshared, &t1972_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1972_m10943_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1972_m10944_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10944_MI = 
{
	"Invoke", (methodPointerType)&m10944_gshared, &t1972_TI, &t4_0_0_0, RuntimeInvoker_t4_t4_t4, t1972_m10944_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1972_m10945_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10945_MI = 
{
	"BeginInvoke", (methodPointerType)&m10945_gshared, &t1972_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4_t4, t1972_m10945_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1972_m10946_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10946_MI = 
{
	"EndInvoke", (methodPointerType)&m10946_gshared, &t1972_TI, &t4_0_0_0, RuntimeInvoker_t4_t4, t1972_m10946_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1972_MIs[] =
{
	&m10943_MI,
	&m10944_MI,
	&m10945_MI,
	&m10946_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m10944_MI;
extern MethodInfo m10945_MI;
extern MethodInfo m10946_MI;
static MethodInfo* t1972_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m10944_MI,
	&m10945_MI,
	&m10946_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1972_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1972_0_0_0;
extern Il2CppType t1972_1_0_0;
extern TypeInfo t189_TI;
struct t1972;
extern TypeInfo t1972_TI;
extern Il2CppGenericClass t1972_GC;
extern TypeInfo t832_TI;
TypeInfo t1972_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1972_MIs, NULL, NULL, NULL, &t189_TI, NULL, &t832_TI, &t1972_TI, NULL, t1972_VT, &EmptyCustomAttributesCache, &t1972_TI, &t1972_0_0_0, &t1972_1_0_0, t1972_IOs, &t1972_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1972), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1965_TI;



extern MethodInfo m10947_MI;
 void m10947 (t1965 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10948_MI;
 t827  m10948 (t1965 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	typedef  t827  (*FunctionPointerType) (t4 * __this, t4 * p0, t4 * p1, MethodInfo* method);
	if (__this->f9)
		m10948((t1965 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10949_MI;
 t4 * m10949 (t1965 * __this, t4 * p0, t4 * p1, t49 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10950_MI;
 t827  m10950 (t1965 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t827 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1965_m10947_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1965_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10947_MI = 
{
	".ctor", (methodPointerType)&m10947, &t1965_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1965_m10947_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1965_m10948_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1965_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10948_MI = 
{
	"Invoke", (methodPointerType)&m10948, &t1965_TI, &t827_0_0_0, RuntimeInvoker_t827_t4_t4, t1965_m10948_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1965_m10949_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1965_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10949_MI = 
{
	"BeginInvoke", (methodPointerType)&m10949, &t1965_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4_t4, t1965_m10949_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1965_m10950_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1965_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10950_MI = 
{
	"EndInvoke", (methodPointerType)&m10950, &t1965_TI, &t827_0_0_0, RuntimeInvoker_t827_t4, t1965_m10950_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1965_MIs[] =
{
	&m10947_MI,
	&m10948_MI,
	&m10949_MI,
	&m10950_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m10948_MI;
extern MethodInfo m10949_MI;
extern MethodInfo m10950_MI;
static MethodInfo* t1965_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m10948_MI,
	&m10949_MI,
	&m10950_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1965_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1965_0_0_0;
extern Il2CppType t1965_1_0_0;
extern TypeInfo t189_TI;
struct t1965;
extern TypeInfo t1965_TI;
extern Il2CppGenericClass t1965_GC;
extern TypeInfo t832_TI;
TypeInfo t1965_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1965_MIs, NULL, NULL, NULL, &t189_TI, NULL, &t832_TI, &t1965_TI, NULL, t1965_VT, &EmptyCustomAttributesCache, &t1965_TI, &t1965_0_0_0, &t1965_1_0_0, t1965_IOs, &t1965_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1965), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1973_TI;



extern MethodInfo m10951_MI;
 void m10951 (t1973 * __this, t4 * p0, t50 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10952_MI;
 t1967  m10952 (t1973 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	typedef  t1967  (*FunctionPointerType) (t4 * __this, t4 * p0, t4 * p1, MethodInfo* method);
	if (__this->f9)
		m10952((t1973 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10953_MI;
 t4 * m10953 (t1973 * __this, t4 * p0, t4 * p1, t49 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10954_MI;
 t1967  m10954 (t1973 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1967 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern Il2CppType t4_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t1973_m10951_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t1973_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m10951_MI = 
{
	".ctor", (methodPointerType)&m10951, &t1973_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t50, t1973_m10951_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1973_m10952_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1973_TI;
extern Il2CppType t1967_0_0_0;
extern void* RuntimeInvoker_t1967_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10952_MI = 
{
	"Invoke", (methodPointerType)&m10952, &t1973_TI, &t1967_0_0_0, RuntimeInvoker_t1967_t4_t4, t1973_m10952_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
extern Il2CppType t49_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1973_m10953_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1973_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10953_MI = 
{
	"BeginInvoke", (methodPointerType)&m10953, &t1973_TI, &t48_0_0_0, RuntimeInvoker_t4_t4_t4_t4_t4, t1973_m10953_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t1973_m10954_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t1973_TI;
extern Il2CppType t1967_0_0_0;
extern void* RuntimeInvoker_t1967_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10954_MI = 
{
	"EndInvoke", (methodPointerType)&m10954, &t1973_TI, &t1967_0_0_0, RuntimeInvoker_t1967_t4, t1973_m10954_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1973_MIs[] =
{
	&m10951_MI,
	&m10952_MI,
	&m10953_MI,
	&m10954_MI,
	NULL
};
extern MethodInfo m1674_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m22_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m1676_MI;
extern MethodInfo m1678_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1680_MI;
extern MethodInfo m10952_MI;
extern MethodInfo m10953_MI;
extern MethodInfo m10954_MI;
static MethodInfo* t1973_VT[] =
{
	&m1674_MI,
	&m20_MI,
	&m1675_MI,
	&m22_MI,
	&m1676_MI,
	&m1677_MI,
	&m1676_MI,
	&m1678_MI,
	&m1679_MI,
	&m1680_MI,
	&m10952_MI,
	&m10953_MI,
	&m10954_MI,
};
extern TypeInfo t363_TI;
extern TypeInfo t364_TI;
static Il2CppInterfaceOffsetPair t1973_IOs[] = 
{
	{ &t363_TI, 4},
	{ &t364_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1973_0_0_0;
extern Il2CppType t1973_1_0_0;
extern TypeInfo t189_TI;
struct t1973;
extern TypeInfo t1973_TI;
extern Il2CppGenericClass t1973_GC;
extern TypeInfo t832_TI;
TypeInfo t1973_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1973_MIs, NULL, NULL, NULL, &t189_TI, NULL, &t832_TI, &t1973_TI, NULL, t1973_VT, &EmptyCustomAttributesCache, &t1973_TI, &t1973_0_0_0, &t1973_1_0_0, t1973_IOs, &t1973_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1973), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1974_TI;

extern TypeInfo t1974_TI;
extern TypeInfo t1969_TI;
extern TypeInfo t833_TI;
extern TypeInfo t827_TI;
extern TypeInfo t1967_TI;
extern TypeInfo t4_TI;
extern TypeInfo t17_TI;
extern MethodInfo m7691_MI;
extern MethodInfo m10937_MI;
extern MethodInfo m10903_MI;
extern MethodInfo m10957_MI;
extern MethodInfo m15_MI;
extern MethodInfo m10901_MI;
extern MethodInfo m10936_MI;


extern MethodInfo m10955_MI;
 void m10955_gshared (t1974 * __this, t1963 * p0, MethodInfo* method)
{
	{
		m15(__this, &m15_MI);
		t1969  L_0 = (( t1969  (*) (t1963 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10956_MI;
 bool m10956_gshared (t1974 * __this, MethodInfo* method)
{
	{
		t1969 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t1969 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		return L_1;
	}
}
extern MethodInfo m10957_MI;
 t827  m10957_gshared (t1974 * __this, MethodInfo* method)
{
	{
		t1969  L_0 = (__this->f0);
		t1969  L_1 = L_0;
		t4 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_1);
		t827  L_3 = (t827 )InterfaceFuncInvoker0< t827  >::Invoke(&m7691_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m10958_MI;
 t4 * m10958_gshared (t1974 * __this, MethodInfo* method)
{
	t1967  V_0 = {0};
	{
		t1969 * L_0 = &(__this->f0);
		t1967  L_1 = (( t1967  (*) (t1969 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		V_0 = L_1;
		t4 * L_2 = (( t4 * (*) (t1967 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)((&V_0), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		t4 * L_3 = L_2;
		return ((t4 *)L_3);
	}
}
extern MethodInfo m10959_MI;
 t4 * m10959_gshared (t1974 * __this, MethodInfo* method)
{
	{
		t827  L_0 = (t827 )VirtFuncInvoker0< t827  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6), __this);
		t827  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t827_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
extern Il2CppType t1969_0_0_1;
FieldInfo t1974_f0_FieldInfo = 
{
	"host_enumerator", &t1969_0_0_1, &t1974_TI, offsetof(t1974, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1974_FIs[] =
{
	&t1974_f0_FieldInfo,
	NULL
};
extern MethodInfo m10957_MI;
static PropertyInfo t1974____Entry_PropertyInfo = 
{
	&t1974_TI, "Entry", &m10957_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10958_MI;
static PropertyInfo t1974____Key_PropertyInfo = 
{
	&t1974_TI, "Key", &m10958_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10959_MI;
static PropertyInfo t1974____Current_PropertyInfo = 
{
	&t1974_TI, "Current", &m10959_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1974_PIs[] =
{
	&t1974____Entry_PropertyInfo,
	&t1974____Key_PropertyInfo,
	&t1974____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1963_0_0_0;
static ParameterInfo t1974_m10955_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern TypeInfo t1974_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10955_MI = 
{
	".ctor", (methodPointerType)&m10955_gshared, &t1974_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1974_m10955_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1974_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10956_MI = 
{
	"MoveNext", (methodPointerType)&m10956_gshared, &t1974_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1974_TI;
extern Il2CppType t827_0_0_0;
extern void* RuntimeInvoker_t827 (MethodInfo* method, void* obj, void** args);
MethodInfo m10957_MI = 
{
	"get_Entry", (methodPointerType)&m10957_gshared, &t1974_TI, &t827_0_0_0, RuntimeInvoker_t827, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1974_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10958_MI = 
{
	"get_Key", (methodPointerType)&m10958_gshared, &t1974_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1974_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10959_MI = 
{
	"get_Current", (methodPointerType)&m10959_gshared, &t1974_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1974_MIs[] =
{
	&m10955_MI,
	&m10956_MI,
	&m10957_MI,
	&m10958_MI,
	&m10959_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10959_MI;
extern MethodInfo m10956_MI;
extern MethodInfo m10957_MI;
extern MethodInfo m10958_MI;
static MethodInfo* t1974_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10959_MI,
	&m10956_MI,
	&m10957_MI,
	&m10958_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t833_TI;
static TypeInfo* t1974_ITIs[] = 
{
	&t123_TI,
	&t833_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t833_TI;
static Il2CppInterfaceOffsetPair t1974_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t833_TI, 6},
};
extern MethodInfo m10901_MI;
extern MethodInfo m10936_MI;
extern TypeInfo t1969_TI;
extern MethodInfo m10937_MI;
extern MethodInfo m10903_MI;
extern TypeInfo t4_TI;
extern MethodInfo m10957_MI;
static void* t1974_RGCTXData[7] = 
{
	&m10901_MI,
	&m10936_MI,
	&t1969_TI,
	&m10937_MI,
	&m10903_MI,
	&t4_TI,
	&m10957_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1974_0_0_0;
extern Il2CppType t1974_1_0_0;
extern TypeInfo t4_TI;
struct t1974;
extern TypeInfo t1974_TI;
extern Il2CppGenericClass t1974_GC;
extern TypeInfo t832_TI;
TypeInfo t1974_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t1974_MIs, t1974_PIs, t1974_FIs, NULL, &t4_TI, NULL, &t832_TI, &t1974_TI, t1974_ITIs, t1974_VT, &EmptyCustomAttributesCache, &t1974_TI, &t1974_0_0_0, &t1974_1_0_0, t1974_IOs, &t1974_GC, NULL, NULL, NULL, t1974_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1974), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4001_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern MethodInfo m24198_MI;
static PropertyInfo t4001____Count_PropertyInfo = 
{
	&t4001_TI, "Count", &m24198_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24199_MI;
static PropertyInfo t4001____IsReadOnly_PropertyInfo = 
{
	&t4001_TI, "IsReadOnly", &m24199_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4001_PIs[] =
{
	&t4001____Count_PropertyInfo,
	&t4001____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4001_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24198_MI = 
{
	"get_Count", NULL, &t4001_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4001_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24199_MI = 
{
	"get_IsReadOnly", NULL, &t4001_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1960_0_0_0;
static ParameterInfo t4001_m24200_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1960_0_0_0},
};
extern TypeInfo t4001_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t1960 (MethodInfo* method, void* obj, void** args);
MethodInfo m24200_MI = 
{
	"Add", NULL, &t4001_TI, &t15_0_0_0, RuntimeInvoker_t15_t1960, t4001_m24200_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4001_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m24201_MI = 
{
	"Clear", NULL, &t4001_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1960_0_0_0;
static ParameterInfo t4001_m24202_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1960_0_0_0},
};
extern TypeInfo t4001_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1960 (MethodInfo* method, void* obj, void** args);
MethodInfo m24202_MI = 
{
	"Contains", NULL, &t4001_TI, &t17_0_0_0, RuntimeInvoker_t17_t1960, t4001_m24202_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1959_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4001_m24203_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1959_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4001_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24203_MI = 
{
	"CopyTo", NULL, &t4001_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4001_m24203_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1960_0_0_0;
static ParameterInfo t4001_m24204_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1960_0_0_0},
};
extern TypeInfo t4001_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1960 (MethodInfo* method, void* obj, void** args);
MethodInfo m24204_MI = 
{
	"Remove", NULL, &t4001_TI, &t17_0_0_0, RuntimeInvoker_t17_t1960, t4001_m24204_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4001_MIs[] =
{
	&m24198_MI,
	&m24199_MI,
	&m24200_MI,
	&m24201_MI,
	&m24202_MI,
	&m24203_MI,
	&m24204_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4003_TI;
static TypeInfo* t4001_ITIs[] = 
{
	&t591_TI,
	&t4003_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4001_0_0_0;
extern Il2CppType t4001_1_0_0;
struct t4001;
extern TypeInfo t4001_TI;
extern Il2CppGenericClass t4001_GC;
TypeInfo t4001_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4001_MIs, t4001_PIs, NULL, NULL, NULL, NULL, NULL, &t4001_TI, t4001_ITIs, NULL, &EmptyCustomAttributesCache, &t4001_TI, &t4001_0_0_0, &t4001_1_0_0, NULL, &t4001_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4003_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern TypeInfo t4003_TI;
extern Il2CppType t1961_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24205_MI = 
{
	"GetEnumerator", NULL, &t4003_TI, &t1961_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4003_MIs[] =
{
	&m24205_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4003_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4003_0_0_0;
extern Il2CppType t4003_1_0_0;
struct t4003;
extern TypeInfo t4003_TI;
extern Il2CppGenericClass t4003_GC;
TypeInfo t4003_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4003_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4003_TI, t4003_ITIs, NULL, &EmptyCustomAttributesCache, &t4003_TI, &t4003_0_0_0, &t4003_1_0_0, NULL, &t4003_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1961_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern MethodInfo m24206_MI;
static PropertyInfo t1961____Current_PropertyInfo = 
{
	&t1961_TI, "Current", &m24206_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1961_PIs[] =
{
	&t1961____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1961_TI;
extern Il2CppType t1960_0_0_0;
extern void* RuntimeInvoker_t1960 (MethodInfo* method, void* obj, void** args);
MethodInfo m24206_MI = 
{
	"get_Current", NULL, &t1961_TI, &t1960_0_0_0, RuntimeInvoker_t1960, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1961_MIs[] =
{
	&m24206_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t1961_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1961_0_0_0;
extern Il2CppType t1961_1_0_0;
struct t1961;
extern TypeInfo t1961_TI;
extern Il2CppGenericClass t1961_GC;
TypeInfo t1961_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1961_MIs, t1961_PIs, NULL, NULL, NULL, NULL, NULL, &t1961_TI, t1961_ITIs, NULL, &EmptyCustomAttributesCache, &t1961_TI, &t1961_0_0_0, &t1961_1_0_0, NULL, &t1961_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1960_TI;

extern TypeInfo t1960_TI;
extern TypeInfo t434_TI;
extern TypeInfo t8_TI;
extern TypeInfo t138_TI;
extern TypeInfo t4_TI;
extern TypeInfo t340_TI;
extern MethodInfo m10962_MI;
extern MethodInfo m10964_MI;
extern MethodInfo m10961_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10963_MI;
extern MethodInfo m3401_MI;


// Metadata Definition System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t138_0_0_1;
FieldInfo t1960_f0_FieldInfo = 
{
	"key", &t138_0_0_1, &t1960_TI, offsetof(t1960, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t340_0_0_1;
FieldInfo t1960_f1_FieldInfo = 
{
	"value", &t340_0_0_1, &t1960_TI, offsetof(t1960, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1960_FIs[] =
{
	&t1960_f0_FieldInfo,
	&t1960_f1_FieldInfo,
	NULL
};
extern MethodInfo m10961_MI;
extern MethodInfo m10962_MI;
static PropertyInfo t1960____Key_PropertyInfo = 
{
	&t1960_TI, "Key", &m10961_MI, &m10962_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10963_MI;
extern MethodInfo m10964_MI;
static PropertyInfo t1960____Value_PropertyInfo = 
{
	&t1960_TI, "Value", &m10963_MI, &m10964_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1960_PIs[] =
{
	&t1960____Key_PropertyInfo,
	&t1960____Value_PropertyInfo,
	NULL
};
extern Il2CppType t138_0_0_0;
extern Il2CppType t340_0_0_0;
static ParameterInfo t1960_m10960_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t340_0_0_0},
};
extern TypeInfo t1960_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10960_MI = 
{
	".ctor", (methodPointerType)&m10902_gshared, &t1960_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t4, t1960_m10960_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1960_TI;
extern Il2CppType t138_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10961_MI = 
{
	"get_Key", (methodPointerType)&m10903_gshared, &t1960_TI, &t138_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t138_0_0_0;
static ParameterInfo t1960_m10962_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t138_0_0_0},
};
extern TypeInfo t1960_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10962_MI = 
{
	"set_Key", (methodPointerType)&m10904_gshared, &t1960_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1960_m10962_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1960_TI;
extern Il2CppType t340_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10963_MI = 
{
	"get_Value", (methodPointerType)&m10905_gshared, &t1960_TI, &t340_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t340_0_0_0;
static ParameterInfo t1960_m10964_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t340_0_0_0},
};
extern TypeInfo t1960_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10964_MI = 
{
	"set_Value", (methodPointerType)&m10906_gshared, &t1960_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1960_m10964_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1960_TI;
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10965_MI = 
{
	"ToString", (methodPointerType)&m10907_gshared, &t1960_TI, &t8_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1960_MIs[] =
{
	&m10960_MI,
	&m10961_MI,
	&m10962_MI,
	&m10963_MI,
	&m10964_MI,
	&m10965_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m10965_MI;
static MethodInfo* t1960_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m10965_MI,
};
extern MethodInfo m10962_MI;
extern MethodInfo m10964_MI;
extern MethodInfo m10961_MI;
extern TypeInfo t138_TI;
extern MethodInfo m10963_MI;
extern TypeInfo t340_TI;
static void* t1960_RGCTXData[6] = 
{
	&m10962_MI,
	&m10964_MI,
	&m10961_MI,
	&t138_TI,
	&m10963_MI,
	&t340_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1960_0_0_0;
extern Il2CppType t1960_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t1960_TI;
extern Il2CppGenericClass t1960_GC;
extern CustomAttributesCache t837__CustomAttributeCache;
TypeInfo t1960_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t1960_MIs, t1960_PIs, t1960_FIs, NULL, &t95_TI, NULL, NULL, &t1960_TI, NULL, t1960_VT, &t837__CustomAttributeCache, &t1960_TI, &t1960_0_0_0, &t1960_1_0_0, NULL, &t1960_GC, NULL, NULL, NULL, t1960_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1960)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t340_TI;
#include "t340MD.h"

#include "t145.h"
#include "t1982.h"
#include "t1979.h"
#include "t1980.h"
#include "t1992.h"
#include "t1981.h"
extern TypeInfo t340_TI;
extern TypeInfo t145_TI;
extern TypeInfo t16_TI;
extern TypeInfo t15_TI;
extern TypeInfo t303_TI;
extern TypeInfo t573_TI;
extern TypeInfo t1268_TI;
extern TypeInfo t1233_TI;
extern TypeInfo t1975_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t17_TI;
extern TypeInfo t1977_TI;
extern TypeInfo t1978_TI;
extern TypeInfo t1976_TI;
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t1979_TI;
extern TypeInfo t328_TI;
extern TypeInfo t1980_TI;
extern TypeInfo t1992_TI;
#include "t1979MD.h"
#include "t1980MD.h"
#include "t1982MD.h"
#include "t1992MD.h"
extern MethodInfo m1520_MI;
extern MethodInfo m11009_MI;
extern MethodInfo m1917_MI;
extern MethodInfo m6453_MI;
extern MethodInfo m18174_MI;
extern MethodInfo m6454_MI;
extern MethodInfo m10997_MI;
extern MethodInfo m15_MI;
extern MethodInfo m10994_MI;
extern MethodInfo m3739_MI;
extern MethodInfo m1522_MI;
extern MethodInfo m10989_MI;
extern MethodInfo m10995_MI;
extern MethodInfo m10998_MI;
extern MethodInfo m1523_MI;
extern MethodInfo m10983_MI;
extern MethodInfo m11007_MI;
extern MethodInfo m6892_MI;
extern MethodInfo m11008_MI;
extern MethodInfo m24207_MI;
extern MethodInfo m24208_MI;
extern MethodInfo m24209_MI;
extern MethodInfo m24210_MI;
extern MethodInfo m7290_MI;
extern MethodInfo m42_MI;
extern MethodInfo m10999_MI;
extern MethodInfo m10984_MI;
extern MethodInfo m10985_MI;
extern MethodInfo m11041_MI;
extern MethodInfo m3735_MI;
extern MethodInfo m18176_MI;
extern MethodInfo m10992_MI;
extern MethodInfo m10993_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m11116_MI;
extern MethodInfo m11035_MI;
extern MethodInfo m10996_MI;
extern MethodInfo m11001_MI;
extern MethodInfo m3751_MI;
extern MethodInfo m11122_MI;
extern MethodInfo m18178_MI;
extern MethodInfo m18186_MI;
extern MethodInfo m3738_MI;
struct t14;
#define m18174(__this, p0, p1, method) (void)m16862_gshared((t4 *)__this, (t305**)p0, (int32_t)p1, method)
extern MethodInfo m18174_MI;
struct t14;
#include "t1990.h"
#define m18176(__this, p0, p1, p2, p3, method) (int32_t)m7690_gshared((t4 *)__this, (t305*)p0, (t4 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m18176_MI;
struct t14;
#define m18178(__this, p0, p1, p2, p3, method) (void)m16931_gshared((t4 *)__this, (t305*)p0, (int32_t)p1, (int32_t)p2, (t4*)p3, method)
extern MethodInfo m18178_MI;
struct t14;
#define m18186(__this, p0, p1, p2, method) (void)m17082_gshared((t4 *)__this, (t305*)p0, (int32_t)p1, (t1607 *)p2, method)
extern MethodInfo m18186_MI;


extern MethodInfo m10994_MI;
 t1982  m10994 (t340 * __this, MethodInfo* method){
	{
		t1982  L_0 = {0};
		m11035(&L_0, __this, &m11035_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.UI.Text>
extern Il2CppType t16_0_0_32849;
FieldInfo t340_f0_FieldInfo = 
{
	"DefaultCapacity", &t16_0_0_32849, &t340_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1975_0_0_1;
FieldInfo t340_f1_FieldInfo = 
{
	"_items", &t1975_0_0_1, &t340_TI, offsetof(t340, f1), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t340_f2_FieldInfo = 
{
	"_size", &t16_0_0_1, &t340_TI, offsetof(t340, f2), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t340_f3_FieldInfo = 
{
	"_version", &t16_0_0_1, &t340_TI, offsetof(t340, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1975_0_0_49;
FieldInfo t340_f4_FieldInfo = 
{
	"EmptyArray", &t1975_0_0_49, &t340_TI, offsetof(t340_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t340_FIs[] =
{
	&t340_f0_FieldInfo,
	&t340_f1_FieldInfo,
	&t340_f2_FieldInfo,
	&t340_f3_FieldInfo,
	&t340_f4_FieldInfo,
	NULL
};
static const int32_t t340_f0_DefaultValueData = 4;
extern Il2CppType t16_0_0_0;
static Il2CppFieldDefaultValueEntry t340_f0_DefaultValue = 
{
	&t340_f0_FieldInfo, { (char*)&t340_f0_DefaultValueData, &t16_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t340_FDVs[] = 
{
	&t340_f0_DefaultValue,
	NULL
};
extern MethodInfo m10976_MI;
static PropertyInfo t340____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t340_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10976_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10977_MI;
static PropertyInfo t340____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t340_TI, "System.Collections.ICollection.IsSynchronized", &m10977_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10978_MI;
static PropertyInfo t340____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t340_TI, "System.Collections.ICollection.SyncRoot", &m10978_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10979_MI;
static PropertyInfo t340____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t340_TI, "System.Collections.IList.IsFixedSize", &m10979_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10980_MI;
static PropertyInfo t340____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t340_TI, "System.Collections.IList.IsReadOnly", &m10980_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10981_MI;
extern MethodInfo m10982_MI;
static PropertyInfo t340____System_Collections_IList_Item_PropertyInfo = 
{
	&t340_TI, "System.Collections.IList.Item", &m10981_MI, &m10982_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11007_MI;
extern MethodInfo m11008_MI;
static PropertyInfo t340____Capacity_PropertyInfo = 
{
	&t340_TI, "Capacity", &m11007_MI, &m11008_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1521_MI;
static PropertyInfo t340____Count_PropertyInfo = 
{
	&t340_TI, "Count", &m1521_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1520_MI;
extern MethodInfo m11009_MI;
static PropertyInfo t340____Item_PropertyInfo = 
{
	&t340_TI, "Item", &m1520_MI, &m11009_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t340_PIs[] =
{
	&t340____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t340____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t340____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t340____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t340____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t340____System_Collections_IList_Item_PropertyInfo,
	&t340____Capacity_PropertyInfo,
	&t340____Count_PropertyInfo,
	&t340____Item_PropertyInfo,
	NULL
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m1516_MI = 
{
	".ctor", (methodPointerType)&m7892_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t340_m10966_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10966_MI = 
{
	".ctor", (methodPointerType)&m7894_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t340_m10966_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10967_MI = 
{
	".cctor", (methodPointerType)&m7896_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t1976_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10968_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m7898_gshared, &t340_TI, &t1976_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t14_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t340_m10969_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10969_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m7900_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t340_m10969_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t123_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10970_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m7902_gshared, &t340_TI, &t123_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t340_m10971_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10971_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m7904_gshared, &t340_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t340_m10971_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t340_m10972_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10972_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m7906_gshared, &t340_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t340_m10972_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t340_m10973_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10973_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m7908_gshared, &t340_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t340_m10973_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t340_m10974_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10974_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m7910_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t340_m10974_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t340_m10975_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10975_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m7912_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t340_m10975_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10976_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m7914_gshared, &t340_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10977_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m7916_gshared, &t340_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10978_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m7918_gshared, &t340_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10979_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m7920_gshared, &t340_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m10980_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m7922_gshared, &t340_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t340_m10981_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10981_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m7924_gshared, &t340_TI, &t4_0_0_0, RuntimeInvoker_t4_t16, t340_m10981_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t340_m10982_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10982_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m7926_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t340_m10982_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t145_0_0_0;
static ParameterInfo t340_m1522_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t145_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1522_MI = 
{
	"Add", (methodPointerType)&m7927_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t340_m1522_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t340_m10983_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10983_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m7929_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t340_m10983_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1977_0_0_0;
static ParameterInfo t340_m10984_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1977_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10984_MI = 
{
	"AddCollection", (methodPointerType)&m7931_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t340_m10984_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1978_0_0_0;
static ParameterInfo t340_m10985_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t1978_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10985_MI = 
{
	"AddEnumerable", (methodPointerType)&m7933_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t340_m10985_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1978_0_0_0;
static ParameterInfo t340_m10986_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1978_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10986_MI = 
{
	"AddRange", (methodPointerType)&m7935_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t340_m10986_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t1979_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10987_MI = 
{
	"AsReadOnly", (methodPointerType)&m7937_gshared, &t340_TI, &t1979_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m10988_MI = 
{
	"Clear", (methodPointerType)&m7939_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t145_0_0_0;
static ParameterInfo t340_m10989_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t145_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10989_MI = 
{
	"Contains", (methodPointerType)&m7941_gshared, &t340_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t340_m10989_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1975_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t340_m10990_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1975_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10990_MI = 
{
	"CopyTo", (methodPointerType)&m7943_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t340_m10990_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1980_0_0_0;
static ParameterInfo t340_m10991_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1980_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t145_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10991_MI = 
{
	"Find", (methodPointerType)&m7945_gshared, &t340_TI, &t145_0_0_0, RuntimeInvoker_t4_t4, t340_m10991_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1980_0_0_0;
static ParameterInfo t340_m10992_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1980_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10992_MI = 
{
	"CheckMatch", (methodPointerType)&m7947_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t340_m10992_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
extern Il2CppType t1980_0_0_0;
static ParameterInfo t340_m10993_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t1980_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10993_MI = 
{
	"GetIndex", (methodPointerType)&m7949_gshared, &t340_TI, &t16_0_0_0, RuntimeInvoker_t16_t16_t16_t4, t340_m10993_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t1982_0_0_0;
extern void* RuntimeInvoker_t1982 (MethodInfo* method, void* obj, void** args);
MethodInfo m10994_MI = 
{
	"GetEnumerator", (methodPointerType)&m10994, &t340_TI, &t1982_0_0_0, RuntimeInvoker_t1982, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t145_0_0_0;
static ParameterInfo t340_m10995_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t145_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10995_MI = 
{
	"IndexOf", (methodPointerType)&m7952_gshared, &t340_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t340_m10995_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t340_m10996_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10996_MI = 
{
	"Shift", (methodPointerType)&m7954_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t340_m10996_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t340_m10997_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m10997_MI = 
{
	"CheckIndex", (methodPointerType)&m7956_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t340_m10997_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t145_0_0_0;
static ParameterInfo t340_m10998_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t145_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10998_MI = 
{
	"Insert", (methodPointerType)&m7958_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t340_m10998_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1978_0_0_0;
static ParameterInfo t340_m10999_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1978_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10999_MI = 
{
	"CheckCollection", (methodPointerType)&m7960_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t340_m10999_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t145_0_0_0;
static ParameterInfo t340_m1523_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t145_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1523_MI = 
{
	"Remove", (methodPointerType)&m7962_gshared, &t340_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t340_m1523_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1980_0_0_0;
static ParameterInfo t340_m11000_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1980_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11000_MI = 
{
	"RemoveAll", (methodPointerType)&m7964_gshared, &t340_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t340_m11000_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t340_m11001_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m11001_MI = 
{
	"RemoveAt", (methodPointerType)&m7966_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t340_m11001_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m11002_MI = 
{
	"Reverse", (methodPointerType)&m7968_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m11003_MI = 
{
	"Sort", (methodPointerType)&m7970_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1981_0_0_0;
static ParameterInfo t340_m11004_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t1981_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11004_MI = 
{
	"Sort", (methodPointerType)&m7972_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t340_m11004_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t1975_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11005_MI = 
{
	"ToArray", (methodPointerType)&m7974_gshared, &t340_TI, &t1975_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m11006_MI = 
{
	"TrimExcess", (methodPointerType)&m7976_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m11007_MI = 
{
	"get_Capacity", (methodPointerType)&m7978_gshared, &t340_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t340_m11008_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m11008_MI = 
{
	"set_Capacity", (methodPointerType)&m7980_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t340_m11008_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t340_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m1521_MI = 
{
	"get_Count", (methodPointerType)&m7982_gshared, &t340_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t340_m1520_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t145_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m1520_MI = 
{
	"get_Item", (methodPointerType)&m7984_gshared, &t340_TI, &t145_0_0_0, RuntimeInvoker_t4_t16, t340_m1520_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t145_0_0_0;
static ParameterInfo t340_m11009_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t145_0_0_0},
};
extern TypeInfo t340_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11009_MI = 
{
	"set_Item", (methodPointerType)&m7986_gshared, &t340_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t340_m11009_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t340_MIs[] =
{
	&m1516_MI,
	&m10966_MI,
	&m10967_MI,
	&m10968_MI,
	&m10969_MI,
	&m10970_MI,
	&m10971_MI,
	&m10972_MI,
	&m10973_MI,
	&m10974_MI,
	&m10975_MI,
	&m10976_MI,
	&m10977_MI,
	&m10978_MI,
	&m10979_MI,
	&m10980_MI,
	&m10981_MI,
	&m10982_MI,
	&m1522_MI,
	&m10983_MI,
	&m10984_MI,
	&m10985_MI,
	&m10986_MI,
	&m10987_MI,
	&m10988_MI,
	&m10989_MI,
	&m10990_MI,
	&m10991_MI,
	&m10992_MI,
	&m10993_MI,
	&m10994_MI,
	&m10995_MI,
	&m10996_MI,
	&m10997_MI,
	&m10998_MI,
	&m10999_MI,
	&m1523_MI,
	&m11000_MI,
	&m11001_MI,
	&m11002_MI,
	&m11003_MI,
	&m11004_MI,
	&m11005_MI,
	&m11006_MI,
	&m11007_MI,
	&m11008_MI,
	&m1521_MI,
	&m1520_MI,
	&m11009_MI,
	NULL
};
extern MethodInfo m19_MI;
extern MethodInfo m20_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m10970_MI;
extern MethodInfo m1521_MI;
extern MethodInfo m10977_MI;
extern MethodInfo m10978_MI;
extern MethodInfo m10969_MI;
extern MethodInfo m10979_MI;
extern MethodInfo m10980_MI;
extern MethodInfo m10981_MI;
extern MethodInfo m10982_MI;
extern MethodInfo m10971_MI;
extern MethodInfo m10988_MI;
extern MethodInfo m10972_MI;
extern MethodInfo m10973_MI;
extern MethodInfo m10974_MI;
extern MethodInfo m10975_MI;
extern MethodInfo m11001_MI;
extern MethodInfo m1521_MI;
extern MethodInfo m10976_MI;
extern MethodInfo m1522_MI;
extern MethodInfo m10988_MI;
extern MethodInfo m10989_MI;
extern MethodInfo m10990_MI;
extern MethodInfo m1523_MI;
extern MethodInfo m10968_MI;
extern MethodInfo m10995_MI;
extern MethodInfo m10998_MI;
extern MethodInfo m11001_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m11009_MI;
static MethodInfo* t340_VT[] =
{
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m10970_MI,
	&m1521_MI,
	&m10977_MI,
	&m10978_MI,
	&m10969_MI,
	&m10979_MI,
	&m10980_MI,
	&m10981_MI,
	&m10982_MI,
	&m10971_MI,
	&m10988_MI,
	&m10972_MI,
	&m10973_MI,
	&m10974_MI,
	&m10975_MI,
	&m11001_MI,
	&m1521_MI,
	&m10976_MI,
	&m1522_MI,
	&m10988_MI,
	&m10989_MI,
	&m10990_MI,
	&m1523_MI,
	&m10968_MI,
	&m10995_MI,
	&m10998_MI,
	&m11001_MI,
	&m1520_MI,
	&m11009_MI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t1977_TI;
extern TypeInfo t1978_TI;
extern TypeInfo t1988_TI;
static TypeInfo* t340_ITIs[] = 
{
	&t591_TI,
	&t640_TI,
	&t1014_TI,
	&t1977_TI,
	&t1978_TI,
	&t1988_TI,
};
extern TypeInfo t591_TI;
extern TypeInfo t640_TI;
extern TypeInfo t1014_TI;
extern TypeInfo t1977_TI;
extern TypeInfo t1978_TI;
extern TypeInfo t1988_TI;
static Il2CppInterfaceOffsetPair t340_IOs[] = 
{
	{ &t591_TI, 4},
	{ &t640_TI, 5},
	{ &t1014_TI, 9},
	{ &t1977_TI, 20},
	{ &t1978_TI, 27},
	{ &t1988_TI, 28},
};
extern TypeInfo t340_TI;
extern TypeInfo t1975_TI;
extern MethodInfo m10994_MI;
extern TypeInfo t1982_TI;
extern TypeInfo t145_TI;
extern MethodInfo m1522_MI;
extern MethodInfo m10989_MI;
extern MethodInfo m10995_MI;
extern MethodInfo m10997_MI;
extern MethodInfo m10998_MI;
extern MethodInfo m1523_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m11009_MI;
extern MethodInfo m10983_MI;
extern MethodInfo m11007_MI;
extern MethodInfo m11008_MI;
extern MethodInfo m24207_MI;
extern MethodInfo m24208_MI;
extern MethodInfo m24209_MI;
extern MethodInfo m24210_MI;
extern MethodInfo m10999_MI;
extern TypeInfo t1977_TI;
extern MethodInfo m10984_MI;
extern MethodInfo m10985_MI;
extern TypeInfo t1979_TI;
extern MethodInfo m11041_MI;
extern MethodInfo m18176_MI;
extern MethodInfo m10992_MI;
extern MethodInfo m10993_MI;
extern MethodInfo m11116_MI;
extern MethodInfo m11035_MI;
extern MethodInfo m10996_MI;
extern MethodInfo m11001_MI;
extern MethodInfo m11122_MI;
extern MethodInfo m18178_MI;
extern MethodInfo m18186_MI;
extern MethodInfo m18174_MI;
static void* t340_RGCTXData[37] = 
{
	&t340_TI,
	&t1975_TI,
	&m10994_MI,
	&t1982_TI,
	&t145_TI,
	&m1522_MI,
	&m10989_MI,
	&m10995_MI,
	&m10997_MI,
	&m10998_MI,
	&m1523_MI,
	&m1520_MI,
	&m11009_MI,
	&m10983_MI,
	&m11007_MI,
	&m11008_MI,
	&m24207_MI,
	&m24208_MI,
	&m24209_MI,
	&m24210_MI,
	&m10999_MI,
	&t1977_TI,
	&m10984_MI,
	&m10985_MI,
	&t1979_TI,
	&m11041_MI,
	&m18176_MI,
	&m10992_MI,
	&m10993_MI,
	&m11116_MI,
	&m11035_MI,
	&m10996_MI,
	&m11001_MI,
	&m11122_MI,
	&m18178_MI,
	&m18186_MI,
	&m18174_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t340_0_0_0;
extern Il2CppType t340_1_0_0;
extern TypeInfo t4_TI;
struct t340;
extern TypeInfo t340_TI;
extern Il2CppGenericClass t340_GC;
extern CustomAttributesCache t839__CustomAttributeCache;
TypeInfo t340_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t340_MIs, t340_PIs, t340_FIs, NULL, &t4_TI, NULL, NULL, &t340_TI, t340_ITIs, t340_VT, &t839__CustomAttributeCache, &t340_TI, &t340_0_0_0, &t340_1_0_0, t340_IOs, &t340_GC, NULL, t340_FDVs, NULL, t340_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t340), 0, -1, sizeof(t340_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1977_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>
extern MethodInfo m24207_MI;
static PropertyInfo t1977____Count_PropertyInfo = 
{
	&t1977_TI, "Count", &m24207_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24211_MI;
static PropertyInfo t1977____IsReadOnly_PropertyInfo = 
{
	&t1977_TI, "IsReadOnly", &m24211_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1977_PIs[] =
{
	&t1977____Count_PropertyInfo,
	&t1977____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t1977_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24207_MI = 
{
	"get_Count", NULL, &t1977_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1977_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24211_MI = 
{
	"get_IsReadOnly", NULL, &t1977_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t145_0_0_0;
static ParameterInfo t1977_m24212_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t145_0_0_0},
};
extern TypeInfo t1977_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24212_MI = 
{
	"Add", NULL, &t1977_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t1977_m24212_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1977_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m24213_MI = 
{
	"Clear", NULL, &t1977_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t145_0_0_0;
static ParameterInfo t1977_m24214_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t145_0_0_0},
};
extern TypeInfo t1977_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24214_MI = 
{
	"Contains", NULL, &t1977_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1977_m24214_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1975_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t1977_m24208_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1975_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1977_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m24208_MI = 
{
	"CopyTo", NULL, &t1977_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t1977_m24208_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t145_0_0_0;
static ParameterInfo t1977_m24215_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t145_0_0_0},
};
extern TypeInfo t1977_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24215_MI = 
{
	"Remove", NULL, &t1977_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1977_m24215_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1977_MIs[] =
{
	&m24207_MI,
	&m24211_MI,
	&m24212_MI,
	&m24213_MI,
	&m24214_MI,
	&m24208_MI,
	&m24215_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t1978_TI;
static TypeInfo* t1977_ITIs[] = 
{
	&t591_TI,
	&t1978_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1977_0_0_0;
extern Il2CppType t1977_1_0_0;
struct t1977;
extern TypeInfo t1977_TI;
extern Il2CppGenericClass t1977_GC;
TypeInfo t1977_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t1977_MIs, t1977_PIs, NULL, NULL, NULL, NULL, NULL, &t1977_TI, t1977_ITIs, NULL, &EmptyCustomAttributesCache, &t1977_TI, &t1977_0_0_0, &t1977_1_0_0, NULL, &t1977_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1978_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Text>
extern TypeInfo t1978_TI;
extern Il2CppType t1976_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24209_MI = 
{
	"GetEnumerator", NULL, &t1978_TI, &t1976_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1978_MIs[] =
{
	&m24209_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t1978_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1978_0_0_0;
extern Il2CppType t1978_1_0_0;
struct t1978;
extern TypeInfo t1978_TI;
extern Il2CppGenericClass t1978_GC;
TypeInfo t1978_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t1978_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1978_TI, t1978_ITIs, NULL, &EmptyCustomAttributesCache, &t1978_TI, &t1978_0_0_0, &t1978_1_0_0, NULL, &t1978_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
