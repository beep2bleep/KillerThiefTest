#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1979.h"
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
extern TypeInfo t1979_TI;
#include "t1979MD.h"

#include "t828.h"
#include "t1974.h"
#include "t4.h"
#include "t1972.h"
#include "t17.h"
#include "t1968.h"
#include "t19.h"
extern TypeInfo t1979_TI;
extern TypeInfo t1974_TI;
extern TypeInfo t834_TI;
extern TypeInfo t828_TI;
extern TypeInfo t1972_TI;
extern TypeInfo t4_TI;
extern TypeInfo t19_TI;
#include "t1974MD.h"
#include "t1972MD.h"
#include "t4MD.h"
#include "t1968MD.h"
extern MethodInfo m7709_MI;
extern MethodInfo m10970_MI;
extern MethodInfo m10936_MI;
extern MethodInfo m10990_MI;
extern MethodInfo m24_MI;
extern MethodInfo m10934_MI;
extern MethodInfo m10969_MI;

#include "t16.h"

extern MethodInfo m10988_MI;
 void m10988_gshared (t1979 * __this, t1968 * p0, MethodInfo* method)
{
	{
		m24(__this, &m24_MI);
		t1974  L_0 = (( t1974  (*) (t1968 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10989_MI;
 bool m10989_gshared (t1979 * __this, MethodInfo* method)
{
	{
		t1974 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t1974 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		return L_1;
	}
}
extern MethodInfo m10990_MI;
 t828  m10990_gshared (t1979 * __this, MethodInfo* method)
{
	{
		t1974  L_0 = (__this->f0);
		t1974  L_1 = L_0;
		t4 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_1);
		t828  L_3 = (t828 )InterfaceFuncInvoker0< t828  >::Invoke(&m7709_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m10991_MI;
 t4 * m10991_gshared (t1979 * __this, MethodInfo* method)
{
	t1972  V_0 = {0};
	{
		t1974 * L_0 = &(__this->f0);
		t1972  L_1 = (( t1972  (*) (t1974 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		V_0 = L_1;
		t4 * L_2 = (( t4 * (*) (t1972 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)((&V_0), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		t4 * L_3 = L_2;
		return ((t4 *)L_3);
	}
}
extern MethodInfo m10992_MI;
 t4 * m10992_gshared (t1979 * __this, MethodInfo* method)
{
	{
		t828  L_0 = (t828 )VirtFuncInvoker0< t828  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6), __this);
		t828  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t828_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
extern Il2CppType t1974_0_0_1;
FieldInfo t1979_f0_FieldInfo = 
{
	"host_enumerator", &t1974_0_0_1, &t1979_TI, offsetof(t1979, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1979_FIs[] =
{
	&t1979_f0_FieldInfo,
	NULL
};
extern MethodInfo m10990_MI;
static PropertyInfo t1979____Entry_PropertyInfo = 
{
	&t1979_TI, "Entry", &m10990_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10991_MI;
static PropertyInfo t1979____Key_PropertyInfo = 
{
	&t1979_TI, "Key", &m10991_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10992_MI;
static PropertyInfo t1979____Current_PropertyInfo = 
{
	&t1979_TI, "Current", &m10992_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1979_PIs[] =
{
	&t1979____Entry_PropertyInfo,
	&t1979____Key_PropertyInfo,
	&t1979____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1968_0_0_0;
static ParameterInfo t1979_m10988_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t1968_0_0_0},
};
extern TypeInfo t1979_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10988_MI = 
{
	".ctor", (methodPointerType)&m10988_gshared, &t1979_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1979_m10988_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1979_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m10989_MI = 
{
	"MoveNext", (methodPointerType)&m10989_gshared, &t1979_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1979_TI;
extern Il2CppType t828_0_0_0;
extern void* RuntimeInvoker_t828 (MethodInfo* method, void* obj, void** args);
MethodInfo m10990_MI = 
{
	"get_Entry", (methodPointerType)&m10990_gshared, &t1979_TI, &t828_0_0_0, RuntimeInvoker_t828, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1979_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10991_MI = 
{
	"get_Key", (methodPointerType)&m10991_gshared, &t1979_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1979_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10992_MI = 
{
	"get_Current", (methodPointerType)&m10992_gshared, &t1979_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1979_MIs[] =
{
	&m10988_MI,
	&m10989_MI,
	&m10990_MI,
	&m10991_MI,
	&m10992_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10992_MI;
extern MethodInfo m10989_MI;
extern MethodInfo m10990_MI;
extern MethodInfo m10991_MI;
static MethodInfo* t1979_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m10992_MI,
	&m10989_MI,
	&m10990_MI,
	&m10991_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t834_TI;
static TypeInfo* t1979_ITIs[] = 
{
	&t27_TI,
	&t834_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t834_TI;
static Il2CppInterfaceOffsetPair t1979_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t834_TI, 6},
};
extern MethodInfo m10934_MI;
extern MethodInfo m10969_MI;
extern TypeInfo t1974_TI;
extern MethodInfo m10970_MI;
extern MethodInfo m10936_MI;
extern TypeInfo t4_TI;
extern MethodInfo m10990_MI;
static void* t1979_RGCTXData[7] = 
{
	&m10934_MI,
	&m10969_MI,
	&t1974_TI,
	&m10970_MI,
	&m10936_MI,
	&t4_TI,
	&m10990_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1979_0_0_0;
extern Il2CppType t1979_1_0_0;
extern TypeInfo t4_TI;
struct t1979;
extern TypeInfo t1979_TI;
extern Il2CppGenericClass t1979_GC;
extern TypeInfo t833_TI;
TypeInfo t1979_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t1979_MIs, t1979_PIs, t1979_FIs, NULL, &t4_TI, NULL, &t833_TI, &t1979_TI, t1979_ITIs, t1979_VT, &EmptyCustomAttributesCache, &t1979_TI, &t1979_0_0_0, &t1979_1_0_0, t1979_IOs, &t1979_GC, NULL, NULL, NULL, t1979_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1979), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4011_TI;

#include "t18.h"
#include "t1965.h"
#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern MethodInfo m24257_MI;
static PropertyInfo t4011____Count_PropertyInfo = 
{
	&t4011_TI, "Count", &m24257_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24258_MI;
static PropertyInfo t4011____IsReadOnly_PropertyInfo = 
{
	&t4011_TI, "IsReadOnly", &m24258_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4011_PIs[] =
{
	&t4011____Count_PropertyInfo,
	&t4011____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4011_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24257_MI = 
{
	"get_Count", NULL, &t4011_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4011_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24258_MI = 
{
	"get_IsReadOnly", NULL, &t4011_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1965_0_0_0;
static ParameterInfo t4011_m24259_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1965_0_0_0},
};
extern TypeInfo t4011_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t1965 (MethodInfo* method, void* obj, void** args);
MethodInfo m24259_MI = 
{
	"Add", NULL, &t4011_TI, &t17_0_0_0, RuntimeInvoker_t17_t1965, t4011_m24259_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4011_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24260_MI = 
{
	"Clear", NULL, &t4011_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1965_0_0_0;
static ParameterInfo t4011_m24261_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1965_0_0_0},
};
extern TypeInfo t4011_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t1965 (MethodInfo* method, void* obj, void** args);
MethodInfo m24261_MI = 
{
	"Contains", NULL, &t4011_TI, &t19_0_0_0, RuntimeInvoker_t19_t1965, t4011_m24261_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1964_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4011_m24262_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1964_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4011_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24262_MI = 
{
	"CopyTo", NULL, &t4011_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4011_m24262_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1965_0_0_0;
static ParameterInfo t4011_m24263_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1965_0_0_0},
};
extern TypeInfo t4011_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t1965 (MethodInfo* method, void* obj, void** args);
MethodInfo m24263_MI = 
{
	"Remove", NULL, &t4011_TI, &t19_0_0_0, RuntimeInvoker_t19_t1965, t4011_m24263_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4011_MIs[] =
{
	&m24257_MI,
	&m24258_MI,
	&m24259_MI,
	&m24260_MI,
	&m24261_MI,
	&m24262_MI,
	&m24263_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4013_TI;
static TypeInfo* t4011_ITIs[] = 
{
	&t592_TI,
	&t4013_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4011_0_0_0;
extern Il2CppType t4011_1_0_0;
struct t4011;
extern TypeInfo t4011_TI;
extern Il2CppGenericClass t4011_GC;
TypeInfo t4011_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4011_MIs, t4011_PIs, NULL, NULL, NULL, NULL, NULL, &t4011_TI, t4011_ITIs, NULL, &EmptyCustomAttributesCache, &t4011_TI, &t4011_0_0_0, &t4011_1_0_0, NULL, &t4011_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4013_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern TypeInfo t4013_TI;
extern Il2CppType t1966_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24264_MI = 
{
	"GetEnumerator", NULL, &t4013_TI, &t1966_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4013_MIs[] =
{
	&m24264_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4013_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4013_0_0_0;
extern Il2CppType t4013_1_0_0;
struct t4013;
extern TypeInfo t4013_TI;
extern Il2CppGenericClass t4013_GC;
TypeInfo t4013_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4013_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4013_TI, t4013_ITIs, NULL, &EmptyCustomAttributesCache, &t4013_TI, &t4013_0_0_0, &t4013_1_0_0, NULL, &t4013_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1966_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern MethodInfo m24265_MI;
static PropertyInfo t1966____Current_PropertyInfo = 
{
	&t1966_TI, "Current", &m24265_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1966_PIs[] =
{
	&t1966____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1966_TI;
extern Il2CppType t1965_0_0_0;
extern void* RuntimeInvoker_t1965 (MethodInfo* method, void* obj, void** args);
MethodInfo m24265_MI = 
{
	"get_Current", NULL, &t1966_TI, &t1965_0_0_0, RuntimeInvoker_t1965, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1966_MIs[] =
{
	&m24265_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t1966_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1966_0_0_0;
extern Il2CppType t1966_1_0_0;
struct t1966;
extern TypeInfo t1966_TI;
extern Il2CppGenericClass t1966_GC;
TypeInfo t1966_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1966_MIs, t1966_PIs, NULL, NULL, NULL, NULL, NULL, &t1966_TI, t1966_ITIs, NULL, &EmptyCustomAttributesCache, &t1966_TI, &t1966_0_0_0, &t1966_1_0_0, NULL, &t1966_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1965_TI;
#include "t1965MD.h"

#include "t142.h"
#include "t342.h"
#include "t8.h"
extern TypeInfo t1965_TI;
extern TypeInfo t435_TI;
extern TypeInfo t8_TI;
extern TypeInfo t142_TI;
extern TypeInfo t4_TI;
extern TypeInfo t342_TI;
#include "t8MD.h"
extern MethodInfo m10995_MI;
extern MethodInfo m10997_MI;
extern MethodInfo m10994_MI;
extern MethodInfo m31_MI;
extern MethodInfo m10996_MI;
extern MethodInfo m3421_MI;


// Metadata Definition System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t142_0_0_1;
FieldInfo t1965_f0_FieldInfo = 
{
	"key", &t142_0_0_1, &t1965_TI, offsetof(t1965, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t342_0_0_1;
FieldInfo t1965_f1_FieldInfo = 
{
	"value", &t342_0_0_1, &t1965_TI, offsetof(t1965, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1965_FIs[] =
{
	&t1965_f0_FieldInfo,
	&t1965_f1_FieldInfo,
	NULL
};
extern MethodInfo m10994_MI;
extern MethodInfo m10995_MI;
static PropertyInfo t1965____Key_PropertyInfo = 
{
	&t1965_TI, "Key", &m10994_MI, &m10995_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10996_MI;
extern MethodInfo m10997_MI;
static PropertyInfo t1965____Value_PropertyInfo = 
{
	&t1965_TI, "Value", &m10996_MI, &m10997_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1965_PIs[] =
{
	&t1965____Key_PropertyInfo,
	&t1965____Value_PropertyInfo,
	NULL
};
extern Il2CppType t142_0_0_0;
extern Il2CppType t342_0_0_0;
static ParameterInfo t1965_m10993_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t1965_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10993_MI = 
{
	".ctor", (methodPointerType)&m10935_gshared, &t1965_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t1965_m10993_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1965_TI;
extern Il2CppType t142_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10994_MI = 
{
	"get_Key", (methodPointerType)&m10936_gshared, &t1965_TI, &t142_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
static ParameterInfo t1965_m10995_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t1965_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10995_MI = 
{
	"set_Key", (methodPointerType)&m10937_gshared, &t1965_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1965_m10995_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1965_TI;
extern Il2CppType t342_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10996_MI = 
{
	"get_Value", (methodPointerType)&m10938_gshared, &t1965_TI, &t342_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t342_0_0_0;
static ParameterInfo t1965_m10997_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t1965_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10997_MI = 
{
	"set_Value", (methodPointerType)&m10939_gshared, &t1965_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1965_m10997_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1965_TI;
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m10998_MI = 
{
	"ToString", (methodPointerType)&m10940_gshared, &t1965_TI, &t8_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1965_MIs[] =
{
	&m10993_MI,
	&m10994_MI,
	&m10995_MI,
	&m10996_MI,
	&m10997_MI,
	&m10998_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m10998_MI;
static MethodInfo* t1965_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m10998_MI,
};
extern MethodInfo m10995_MI;
extern MethodInfo m10997_MI;
extern MethodInfo m10994_MI;
extern TypeInfo t142_TI;
extern MethodInfo m10996_MI;
extern TypeInfo t342_TI;
static void* t1965_RGCTXData[6] = 
{
	&m10995_MI,
	&m10997_MI,
	&m10994_MI,
	&t142_TI,
	&m10996_MI,
	&t342_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1965_0_0_0;
extern Il2CppType t1965_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1965_TI;
extern Il2CppGenericClass t1965_GC;
extern CustomAttributesCache t838__CustomAttributeCache;
TypeInfo t1965_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t1965_MIs, t1965_PIs, t1965_FIs, NULL, &t101_TI, NULL, NULL, &t1965_TI, NULL, t1965_VT, &t838__CustomAttributeCache, &t1965_TI, &t1965_0_0_0, &t1965_1_0_0, NULL, &t1965_GC, NULL, NULL, NULL, t1965_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1965)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t342_TI;
#include "t342MD.h"

#include "t149.h"
#include "t307.h"
#include "UnityEngine.UI_ArrayTypes.h"
#include "t1234.h"
#include "t1987.h"
#include "t1984.h"
#include "t1985.h"
#include "t330.h"
#include "t1997.h"
#include "t1986.h"
extern TypeInfo t342_TI;
extern TypeInfo t149_TI;
extern TypeInfo t18_TI;
extern TypeInfo t17_TI;
extern TypeInfo t307_TI;
extern TypeInfo t574_TI;
extern TypeInfo t1269_TI;
extern TypeInfo t1234_TI;
extern TypeInfo t1980_TI;
extern TypeInfo t1987_TI;
extern TypeInfo t19_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t1983_TI;
extern TypeInfo t1981_TI;
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1984_TI;
extern TypeInfo t330_TI;
extern TypeInfo t1985_TI;
extern TypeInfo t1997_TI;
#include "t307MD.h"
#include "t1234MD.h"
#include "t16MD.h"
#include "t591MD.h"
#include "t1984MD.h"
#include "t330MD.h"
#include "t1985MD.h"
#include "t1987MD.h"
#include "t1997MD.h"
extern MethodInfo m1541_MI;
extern MethodInfo m11042_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m6473_MI;
extern MethodInfo m18219_MI;
extern MethodInfo m6474_MI;
extern MethodInfo m11030_MI;
extern MethodInfo m24_MI;
extern MethodInfo m11027_MI;
extern MethodInfo m3759_MI;
extern MethodInfo m1543_MI;
extern MethodInfo m11022_MI;
extern MethodInfo m11028_MI;
extern MethodInfo m11031_MI;
extern MethodInfo m1544_MI;
extern MethodInfo m11016_MI;
extern MethodInfo m11040_MI;
extern MethodInfo m6912_MI;
extern MethodInfo m11041_MI;
extern MethodInfo m24266_MI;
extern MethodInfo m24267_MI;
extern MethodInfo m24268_MI;
extern MethodInfo m24269_MI;
extern MethodInfo m42_MI;
extern MethodInfo m43_MI;
extern MethodInfo m11032_MI;
extern MethodInfo m11017_MI;
extern MethodInfo m11018_MI;
extern MethodInfo m11074_MI;
extern MethodInfo m3755_MI;
extern MethodInfo m18221_MI;
extern MethodInfo m11025_MI;
extern MethodInfo m11026_MI;
extern MethodInfo m2947_MI;
extern MethodInfo m11149_MI;
extern MethodInfo m11068_MI;
extern MethodInfo m11029_MI;
extern MethodInfo m11034_MI;
extern MethodInfo m3771_MI;
extern MethodInfo m11155_MI;
extern MethodInfo m18223_MI;
extern MethodInfo m18231_MI;
extern MethodInfo m3758_MI;
struct t16;
struct t16;
 void m16895_gshared (t4 * __this, t309** p0, int32_t p1, MethodInfo* method);
#define m16895(__this, p0, p1, method) (void)m16895_gshared((t4 *)__this, (t309**)p0, (int32_t)p1, method)
#define m18219(__this, p0, p1, method) (void)m16895_gshared((t4 *)__this, (t309**)p0, (int32_t)p1, method)
extern MethodInfo m18219_MI;
struct t16;
#include "t1995.h"
struct t16;
#include "t1486.h"
 int32_t m7708_gshared (t4 * __this, t309* p0, t4 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m7708(__this, p0, p1, p2, p3, method) (int32_t)m7708_gshared((t4 *)__this, (t309*)p0, (t4 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m18221(__this, p0, p1, p2, p3, method) (int32_t)m7708_gshared((t4 *)__this, (t309*)p0, (t4 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m18221_MI;
struct t16;
struct t16;
 void m16964_gshared (t4 * __this, t309* p0, int32_t p1, int32_t p2, t4* p3, MethodInfo* method);
#define m16964(__this, p0, p1, p2, p3, method) (void)m16964_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (int32_t)p2, (t4*)p3, method)
#define m18223(__this, p0, p1, p2, p3, method) (void)m16964_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (int32_t)p2, (t4*)p3, method)
extern MethodInfo m18223_MI;
struct t16;
#include "t31.h"
#include "t1270.h"
struct t16;
#include "t1608.h"
 void m17115_gshared (t4 * __this, t309* p0, int32_t p1, t1608 * p2, MethodInfo* method);
#define m17115(__this, p0, p1, p2, method) (void)m17115_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (t1608 *)p2, method)
#define m18231(__this, p0, p1, p2, method) (void)m17115_gshared((t4 *)__this, (t309*)p0, (int32_t)p1, (t1608 *)p2, method)
extern MethodInfo m18231_MI;


extern MethodInfo m11027_MI;
 t1987  m11027 (t342 * __this, MethodInfo* method){
	{
		t1987  L_0 = {0};
		m11068(&L_0, __this, &m11068_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.UI.Text>
extern Il2CppType t18_0_0_32849;
FieldInfo t342_f0_FieldInfo = 
{
	"DefaultCapacity", &t18_0_0_32849, &t342_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1980_0_0_1;
FieldInfo t342_f1_FieldInfo = 
{
	"_items", &t1980_0_0_1, &t342_TI, offsetof(t342, f1), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t342_f2_FieldInfo = 
{
	"_size", &t18_0_0_1, &t342_TI, offsetof(t342, f2), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t342_f3_FieldInfo = 
{
	"_version", &t18_0_0_1, &t342_TI, offsetof(t342, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1980_0_0_49;
FieldInfo t342_f4_FieldInfo = 
{
	"EmptyArray", &t1980_0_0_49, &t342_TI, offsetof(t342_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t342_FIs[] =
{
	&t342_f0_FieldInfo,
	&t342_f1_FieldInfo,
	&t342_f2_FieldInfo,
	&t342_f3_FieldInfo,
	&t342_f4_FieldInfo,
	NULL
};
static const int32_t t342_f0_DefaultValueData = 4;
extern Il2CppType t18_0_0_0;
static Il2CppFieldDefaultValueEntry t342_f0_DefaultValue = 
{
	&t342_f0_FieldInfo, { (char*)&t342_f0_DefaultValueData, &t18_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t342_FDVs[] = 
{
	&t342_f0_DefaultValue,
	NULL
};
extern MethodInfo m11009_MI;
static PropertyInfo t342____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t342_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m11009_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11010_MI;
static PropertyInfo t342____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t342_TI, "System.Collections.ICollection.IsSynchronized", &m11010_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11011_MI;
static PropertyInfo t342____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t342_TI, "System.Collections.ICollection.SyncRoot", &m11011_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11012_MI;
static PropertyInfo t342____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t342_TI, "System.Collections.IList.IsFixedSize", &m11012_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11013_MI;
static PropertyInfo t342____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t342_TI, "System.Collections.IList.IsReadOnly", &m11013_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11014_MI;
extern MethodInfo m11015_MI;
static PropertyInfo t342____System_Collections_IList_Item_PropertyInfo = 
{
	&t342_TI, "System.Collections.IList.Item", &m11014_MI, &m11015_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11040_MI;
extern MethodInfo m11041_MI;
static PropertyInfo t342____Capacity_PropertyInfo = 
{
	&t342_TI, "Capacity", &m11040_MI, &m11041_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1542_MI;
static PropertyInfo t342____Count_PropertyInfo = 
{
	&t342_TI, "Count", &m1542_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1541_MI;
extern MethodInfo m11042_MI;
static PropertyInfo t342____Item_PropertyInfo = 
{
	&t342_TI, "Item", &m1541_MI, &m11042_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t342_PIs[] =
{
	&t342____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t342____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t342____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t342____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t342____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t342____System_Collections_IList_Item_PropertyInfo,
	&t342____Capacity_PropertyInfo,
	&t342____Count_PropertyInfo,
	&t342____Item_PropertyInfo,
	NULL
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m1537_MI = 
{
	".ctor", (methodPointerType)&m7910_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t342_m10999_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m10999_MI = 
{
	".ctor", (methodPointerType)&m7912_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t342_m10999_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11000_MI = 
{
	".cctor", (methodPointerType)&m7914_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t1981_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11001_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m7916_gshared, &t342_TI, &t1981_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t342_m11002_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11002_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m7918_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t342_m11002_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11003_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m7920_gshared, &t342_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t342_m11004_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11004_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m7922_gshared, &t342_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t342_m11004_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t342_m11005_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11005_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m7924_gshared, &t342_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t342_m11005_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t342_m11006_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11006_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m7926_gshared, &t342_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t342_m11006_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t342_m11007_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11007_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m7928_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t342_m11007_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t342_m11008_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11008_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m7930_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t342_m11008_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11009_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m7932_gshared, &t342_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11010_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m7934_gshared, &t342_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11011_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m7936_gshared, &t342_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11012_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m7938_gshared, &t342_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11013_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m7940_gshared, &t342_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t342_m11014_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11014_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m7942_gshared, &t342_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t342_m11014_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t342_m11015_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11015_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m7944_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t342_m11015_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t342_m1543_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1543_MI = 
{
	"Add", (methodPointerType)&m7945_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t342_m1543_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t342_m11016_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11016_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m7947_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t342_m11016_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1982_0_0_0;
static ParameterInfo t342_m11017_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1982_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11017_MI = 
{
	"AddCollection", (methodPointerType)&m7949_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t342_m11017_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1983_0_0_0;
static ParameterInfo t342_m11018_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t1983_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11018_MI = 
{
	"AddEnumerable", (methodPointerType)&m7951_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t342_m11018_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1983_0_0_0;
static ParameterInfo t342_m11019_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1983_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11019_MI = 
{
	"AddRange", (methodPointerType)&m7953_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t342_m11019_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t1984_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11020_MI = 
{
	"AsReadOnly", (methodPointerType)&m7955_gshared, &t342_TI, &t1984_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11021_MI = 
{
	"Clear", (methodPointerType)&m7957_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t342_m11022_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11022_MI = 
{
	"Contains", (methodPointerType)&m7959_gshared, &t342_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t342_m11022_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1980_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t342_m11023_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1980_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11023_MI = 
{
	"CopyTo", (methodPointerType)&m7961_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t342_m11023_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1985_0_0_0;
static ParameterInfo t342_m11024_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1985_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t149_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11024_MI = 
{
	"Find", (methodPointerType)&m7963_gshared, &t342_TI, &t149_0_0_0, RuntimeInvoker_t4_t4, t342_m11024_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1985_0_0_0;
static ParameterInfo t342_m11025_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1985_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11025_MI = 
{
	"CheckMatch", (methodPointerType)&m7965_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t342_m11025_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
extern Il2CppType t1985_0_0_0;
static ParameterInfo t342_m11026_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t1985_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11026_MI = 
{
	"GetIndex", (methodPointerType)&m7967_gshared, &t342_TI, &t18_0_0_0, RuntimeInvoker_t18_t18_t18_t4, t342_m11026_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t1987_0_0_0;
extern void* RuntimeInvoker_t1987 (MethodInfo* method, void* obj, void** args);
MethodInfo m11027_MI = 
{
	"GetEnumerator", (methodPointerType)&m11027, &t342_TI, &t1987_0_0_0, RuntimeInvoker_t1987, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t342_m11028_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11028_MI = 
{
	"IndexOf", (methodPointerType)&m7970_gshared, &t342_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t342_m11028_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t342_m11029_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11029_MI = 
{
	"Shift", (methodPointerType)&m7972_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t342_m11029_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t342_m11030_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11030_MI = 
{
	"CheckIndex", (methodPointerType)&m7974_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t342_m11030_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t342_m11031_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11031_MI = 
{
	"Insert", (methodPointerType)&m7976_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t342_m11031_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1983_0_0_0;
static ParameterInfo t342_m11032_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1983_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11032_MI = 
{
	"CheckCollection", (methodPointerType)&m7978_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t342_m11032_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t342_m1544_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1544_MI = 
{
	"Remove", (methodPointerType)&m7980_gshared, &t342_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t342_m1544_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1985_0_0_0;
static ParameterInfo t342_m11033_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1985_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11033_MI = 
{
	"RemoveAll", (methodPointerType)&m7982_gshared, &t342_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t342_m11033_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t342_m11034_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11034_MI = 
{
	"RemoveAt", (methodPointerType)&m7984_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t342_m11034_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11035_MI = 
{
	"Reverse", (methodPointerType)&m7986_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11036_MI = 
{
	"Sort", (methodPointerType)&m7988_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1986_0_0_0;
static ParameterInfo t342_m11037_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t1986_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11037_MI = 
{
	"Sort", (methodPointerType)&m7990_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t342_m11037_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t1980_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11038_MI = 
{
	"ToArray", (methodPointerType)&m7992_gshared, &t342_TI, &t1980_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11039_MI = 
{
	"TrimExcess", (methodPointerType)&m7994_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11040_MI = 
{
	"get_Capacity", (methodPointerType)&m7996_gshared, &t342_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t342_m11041_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11041_MI = 
{
	"set_Capacity", (methodPointerType)&m7998_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t342_m11041_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t342_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m1542_MI = 
{
	"get_Count", (methodPointerType)&m8000_gshared, &t342_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t342_m1541_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t149_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m1541_MI = 
{
	"get_Item", (methodPointerType)&m8002_gshared, &t342_TI, &t149_0_0_0, RuntimeInvoker_t4_t18, t342_m1541_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t342_m11042_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t342_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11042_MI = 
{
	"set_Item", (methodPointerType)&m8004_gshared, &t342_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t342_m11042_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t342_MIs[] =
{
	&m1537_MI,
	&m10999_MI,
	&m11000_MI,
	&m11001_MI,
	&m11002_MI,
	&m11003_MI,
	&m11004_MI,
	&m11005_MI,
	&m11006_MI,
	&m11007_MI,
	&m11008_MI,
	&m11009_MI,
	&m11010_MI,
	&m11011_MI,
	&m11012_MI,
	&m11013_MI,
	&m11014_MI,
	&m11015_MI,
	&m1543_MI,
	&m11016_MI,
	&m11017_MI,
	&m11018_MI,
	&m11019_MI,
	&m11020_MI,
	&m11021_MI,
	&m11022_MI,
	&m11023_MI,
	&m11024_MI,
	&m11025_MI,
	&m11026_MI,
	&m11027_MI,
	&m11028_MI,
	&m11029_MI,
	&m11030_MI,
	&m11031_MI,
	&m11032_MI,
	&m1544_MI,
	&m11033_MI,
	&m11034_MI,
	&m11035_MI,
	&m11036_MI,
	&m11037_MI,
	&m11038_MI,
	&m11039_MI,
	&m11040_MI,
	&m11041_MI,
	&m1542_MI,
	&m1541_MI,
	&m11042_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11003_MI;
extern MethodInfo m1542_MI;
extern MethodInfo m11010_MI;
extern MethodInfo m11011_MI;
extern MethodInfo m11002_MI;
extern MethodInfo m11012_MI;
extern MethodInfo m11013_MI;
extern MethodInfo m11014_MI;
extern MethodInfo m11015_MI;
extern MethodInfo m11004_MI;
extern MethodInfo m11021_MI;
extern MethodInfo m11005_MI;
extern MethodInfo m11006_MI;
extern MethodInfo m11007_MI;
extern MethodInfo m11008_MI;
extern MethodInfo m11034_MI;
extern MethodInfo m1542_MI;
extern MethodInfo m11009_MI;
extern MethodInfo m1543_MI;
extern MethodInfo m11021_MI;
extern MethodInfo m11022_MI;
extern MethodInfo m11023_MI;
extern MethodInfo m1544_MI;
extern MethodInfo m11001_MI;
extern MethodInfo m11028_MI;
extern MethodInfo m11031_MI;
extern MethodInfo m11034_MI;
extern MethodInfo m1541_MI;
extern MethodInfo m11042_MI;
static MethodInfo* t342_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11003_MI,
	&m1542_MI,
	&m11010_MI,
	&m11011_MI,
	&m11002_MI,
	&m11012_MI,
	&m11013_MI,
	&m11014_MI,
	&m11015_MI,
	&m11004_MI,
	&m11021_MI,
	&m11005_MI,
	&m11006_MI,
	&m11007_MI,
	&m11008_MI,
	&m11034_MI,
	&m1542_MI,
	&m11009_MI,
	&m1543_MI,
	&m11021_MI,
	&m11022_MI,
	&m11023_MI,
	&m1544_MI,
	&m11001_MI,
	&m11028_MI,
	&m11031_MI,
	&m11034_MI,
	&m1541_MI,
	&m11042_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t1983_TI;
extern TypeInfo t1993_TI;
static TypeInfo* t342_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t1982_TI,
	&t1983_TI,
	&t1993_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t1983_TI;
extern TypeInfo t1993_TI;
static Il2CppInterfaceOffsetPair t342_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t1982_TI, 20},
	{ &t1983_TI, 27},
	{ &t1993_TI, 28},
};
extern TypeInfo t342_TI;
extern TypeInfo t1980_TI;
extern MethodInfo m11027_MI;
extern TypeInfo t1987_TI;
extern TypeInfo t149_TI;
extern MethodInfo m1543_MI;
extern MethodInfo m11022_MI;
extern MethodInfo m11028_MI;
extern MethodInfo m11030_MI;
extern MethodInfo m11031_MI;
extern MethodInfo m1544_MI;
extern MethodInfo m1541_MI;
extern MethodInfo m11042_MI;
extern MethodInfo m11016_MI;
extern MethodInfo m11040_MI;
extern MethodInfo m11041_MI;
extern MethodInfo m24266_MI;
extern MethodInfo m24267_MI;
extern MethodInfo m24268_MI;
extern MethodInfo m24269_MI;
extern MethodInfo m11032_MI;
extern TypeInfo t1982_TI;
extern MethodInfo m11017_MI;
extern MethodInfo m11018_MI;
extern TypeInfo t1984_TI;
extern MethodInfo m11074_MI;
extern MethodInfo m18221_MI;
extern MethodInfo m11025_MI;
extern MethodInfo m11026_MI;
extern MethodInfo m11149_MI;
extern MethodInfo m11068_MI;
extern MethodInfo m11029_MI;
extern MethodInfo m11034_MI;
extern MethodInfo m11155_MI;
extern MethodInfo m18223_MI;
extern MethodInfo m18231_MI;
extern MethodInfo m18219_MI;
static void* t342_RGCTXData[37] = 
{
	&t342_TI,
	&t1980_TI,
	&m11027_MI,
	&t1987_TI,
	&t149_TI,
	&m1543_MI,
	&m11022_MI,
	&m11028_MI,
	&m11030_MI,
	&m11031_MI,
	&m1544_MI,
	&m1541_MI,
	&m11042_MI,
	&m11016_MI,
	&m11040_MI,
	&m11041_MI,
	&m24266_MI,
	&m24267_MI,
	&m24268_MI,
	&m24269_MI,
	&m11032_MI,
	&t1982_TI,
	&m11017_MI,
	&m11018_MI,
	&t1984_TI,
	&m11074_MI,
	&m18221_MI,
	&m11025_MI,
	&m11026_MI,
	&m11149_MI,
	&m11068_MI,
	&m11029_MI,
	&m11034_MI,
	&m11155_MI,
	&m18223_MI,
	&m18231_MI,
	&m18219_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t342_0_0_0;
extern Il2CppType t342_1_0_0;
extern TypeInfo t4_TI;
struct t342;
extern TypeInfo t342_TI;
extern Il2CppGenericClass t342_GC;
extern CustomAttributesCache t840__CustomAttributeCache;
TypeInfo t342_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t342_MIs, t342_PIs, t342_FIs, NULL, &t4_TI, NULL, NULL, &t342_TI, t342_ITIs, t342_VT, &t840__CustomAttributeCache, &t342_TI, &t342_0_0_0, &t342_1_0_0, t342_IOs, &t342_GC, NULL, t342_FDVs, NULL, t342_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t342), 0, -1, sizeof(t342_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1982_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>
extern MethodInfo m24266_MI;
static PropertyInfo t1982____Count_PropertyInfo = 
{
	&t1982_TI, "Count", &m24266_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24270_MI;
static PropertyInfo t1982____IsReadOnly_PropertyInfo = 
{
	&t1982_TI, "IsReadOnly", &m24270_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1982_PIs[] =
{
	&t1982____Count_PropertyInfo,
	&t1982____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t1982_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24266_MI = 
{
	"get_Count", NULL, &t1982_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1982_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24270_MI = 
{
	"get_IsReadOnly", NULL, &t1982_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t1982_m24271_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1982_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24271_MI = 
{
	"Add", NULL, &t1982_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1982_m24271_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1982_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24272_MI = 
{
	"Clear", NULL, &t1982_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t1982_m24273_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1982_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24273_MI = 
{
	"Contains", NULL, &t1982_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1982_m24273_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1980_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1982_m24267_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1980_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1982_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24267_MI = 
{
	"CopyTo", NULL, &t1982_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t1982_m24267_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t1982_m24274_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1982_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24274_MI = 
{
	"Remove", NULL, &t1982_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1982_m24274_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1982_MIs[] =
{
	&m24266_MI,
	&m24270_MI,
	&m24271_MI,
	&m24272_MI,
	&m24273_MI,
	&m24267_MI,
	&m24274_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t1983_TI;
static TypeInfo* t1982_ITIs[] = 
{
	&t592_TI,
	&t1983_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1982_0_0_0;
extern Il2CppType t1982_1_0_0;
struct t1982;
extern TypeInfo t1982_TI;
extern Il2CppGenericClass t1982_GC;
TypeInfo t1982_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t1982_MIs, t1982_PIs, NULL, NULL, NULL, NULL, NULL, &t1982_TI, t1982_ITIs, NULL, &EmptyCustomAttributesCache, &t1982_TI, &t1982_0_0_0, &t1982_1_0_0, NULL, &t1982_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1983_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Text>
extern TypeInfo t1983_TI;
extern Il2CppType t1981_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24268_MI = 
{
	"GetEnumerator", NULL, &t1983_TI, &t1981_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1983_MIs[] =
{
	&m24268_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t1983_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1983_0_0_0;
extern Il2CppType t1983_1_0_0;
struct t1983;
extern TypeInfo t1983_TI;
extern Il2CppGenericClass t1983_GC;
TypeInfo t1983_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t1983_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1983_TI, t1983_ITIs, NULL, &EmptyCustomAttributesCache, &t1983_TI, &t1983_0_0_0, &t1983_1_0_0, NULL, &t1983_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1981_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Text>
extern MethodInfo m24269_MI;
static PropertyInfo t1981____Current_PropertyInfo = 
{
	&t1981_TI, "Current", &m24269_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1981_PIs[] =
{
	&t1981____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1981_TI;
extern Il2CppType t149_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24269_MI = 
{
	"get_Current", NULL, &t1981_TI, &t149_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1981_MIs[] =
{
	&m24269_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t1981_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1981_0_0_0;
extern Il2CppType t1981_1_0_0;
struct t1981;
extern TypeInfo t1981_TI;
extern Il2CppGenericClass t1981_GC;
TypeInfo t1981_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1981_MIs, t1981_PIs, NULL, NULL, NULL, NULL, NULL, &t1981_TI, t1981_ITIs, NULL, &EmptyCustomAttributesCache, &t1981_TI, &t1981_0_0_0, &t1981_1_0_0, NULL, &t1981_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1988.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1988_TI;
#include "t1988MD.h"

extern TypeInfo t1988_TI;
extern TypeInfo t149_TI;
extern TypeInfo t1270_TI;
#include "t1270MD.h"
extern MethodInfo m11047_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18164_MI;
struct t16;
struct t16;
 t4 * m16827_gshared (t16 * __this, int32_t p0, MethodInfo* method);
#define m16827(__this, p0, method) (t4 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
#define m18164(__this, p0, method) (t149 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m18164_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Text>
extern Il2CppType t16_0_0_1;
FieldInfo t1988_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1988_TI, offsetof(t1988, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1988_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1988_TI, offsetof(t1988, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1988_FIs[] =
{
	&t1988_f0_FieldInfo,
	&t1988_f1_FieldInfo,
	NULL
};
extern MethodInfo m11044_MI;
static PropertyInfo t1988____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1988_TI, "System.Collections.IEnumerator.Current", &m11044_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11047_MI;
static PropertyInfo t1988____Current_PropertyInfo = 
{
	&t1988_TI, "Current", &m11047_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1988_PIs[] =
{
	&t1988____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1988____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1988_m11043_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11043_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t1988_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1988_m11043_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1988_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11044_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t1988_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1988_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11045_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t1988_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1988_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11046_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t1988_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1988_TI;
extern Il2CppType t149_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11047_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t1988_TI, &t149_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1988_MIs[] =
{
	&m11043_MI,
	&m11044_MI,
	&m11045_MI,
	&m11046_MI,
	&m11047_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m11044_MI;
extern MethodInfo m11046_MI;
extern MethodInfo m11045_MI;
extern MethodInfo m11047_MI;
static MethodInfo* t1988_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m11044_MI,
	&m11046_MI,
	&m11045_MI,
	&m11047_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1981_TI;
static TypeInfo* t1988_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t1981_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1981_TI;
static Il2CppInterfaceOffsetPair t1988_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t1981_TI, 7},
};
extern MethodInfo m11047_MI;
extern TypeInfo t149_TI;
extern MethodInfo m18164_MI;
static void* t1988_RGCTXData[3] = 
{
	&m11047_MI,
	&t149_TI,
	&m18164_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1988_0_0_0;
extern Il2CppType t1988_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1988_TI;
extern Il2CppGenericClass t1988_GC;
extern TypeInfo t16_TI;
TypeInfo t1988_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1988_MIs, t1988_PIs, t1988_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1988_TI, t1988_ITIs, t1988_VT, &EmptyCustomAttributesCache, &t1988_TI, &t1988_0_0_0, &t1988_1_0_0, t1988_IOs, &t1988_GC, NULL, NULL, NULL, t1988_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1988)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1993_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Text>
extern MethodInfo m24275_MI;
extern MethodInfo m24276_MI;
static PropertyInfo t1993____Item_PropertyInfo = 
{
	&t1993_TI, "Item", &m24275_MI, &m24276_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1993_PIs[] =
{
	&t1993____Item_PropertyInfo,
	NULL
};
extern Il2CppType t149_0_0_0;
static ParameterInfo t1993_m24277_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1993_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24277_MI = 
{
	"IndexOf", NULL, &t1993_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1993_m24277_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t1993_m24278_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1993_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24278_MI = 
{
	"Insert", NULL, &t1993_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1993_m24278_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1993_m24279_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1993_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24279_MI = 
{
	"RemoveAt", NULL, &t1993_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t1993_m24279_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1993_m24275_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1993_TI;
extern Il2CppType t149_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24275_MI = 
{
	"get_Item", NULL, &t1993_TI, &t149_0_0_0, RuntimeInvoker_t4_t18, t1993_m24275_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t1993_m24276_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1993_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24276_MI = 
{
	"set_Item", NULL, &t1993_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1993_m24276_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1993_MIs[] =
{
	&m24277_MI,
	&m24278_MI,
	&m24279_MI,
	&m24275_MI,
	&m24276_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t1983_TI;
static TypeInfo* t1993_ITIs[] = 
{
	&t592_TI,
	&t1982_TI,
	&t1983_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1993_0_0_0;
extern Il2CppType t1993_1_0_0;
struct t1993;
extern TypeInfo t1993_TI;
extern Il2CppGenericClass t1993_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t1993_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t1993_MIs, t1993_PIs, NULL, NULL, NULL, NULL, NULL, &t1993_TI, t1993_ITIs, NULL, &t1401__CustomAttributeCache, &t1993_TI, &t1993_0_0_0, &t1993_1_0_0, NULL, &t1993_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4002_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>
extern MethodInfo m24280_MI;
static PropertyInfo t4002____Count_PropertyInfo = 
{
	&t4002_TI, "Count", &m24280_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24281_MI;
static PropertyInfo t4002____IsReadOnly_PropertyInfo = 
{
	&t4002_TI, "IsReadOnly", &m24281_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4002_PIs[] =
{
	&t4002____Count_PropertyInfo,
	&t4002____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4002_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24280_MI = 
{
	"get_Count", NULL, &t4002_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4002_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24281_MI = 
{
	"get_IsReadOnly", NULL, &t4002_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t270_0_0_0;
static ParameterInfo t4002_m24282_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern TypeInfo t4002_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24282_MI = 
{
	"Add", NULL, &t4002_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4002_m24282_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4002_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24283_MI = 
{
	"Clear", NULL, &t4002_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t270_0_0_0;
static ParameterInfo t4002_m24284_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern TypeInfo t4002_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24284_MI = 
{
	"Contains", NULL, &t4002_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4002_m24284_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3213_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4002_m24285_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3213_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4002_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24285_MI = 
{
	"CopyTo", NULL, &t4002_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4002_m24285_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t270_0_0_0;
static ParameterInfo t4002_m24286_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern TypeInfo t4002_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24286_MI = 
{
	"Remove", NULL, &t4002_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4002_m24286_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4002_MIs[] =
{
	&m24280_MI,
	&m24281_MI,
	&m24282_MI,
	&m24283_MI,
	&m24284_MI,
	&m24285_MI,
	&m24286_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4004_TI;
static TypeInfo* t4002_ITIs[] = 
{
	&t592_TI,
	&t4004_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4002_0_0_0;
extern Il2CppType t4002_1_0_0;
struct t4002;
extern TypeInfo t4002_TI;
extern Il2CppGenericClass t4002_GC;
TypeInfo t4002_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4002_MIs, t4002_PIs, NULL, NULL, NULL, NULL, NULL, &t4002_TI, t4002_ITIs, NULL, &EmptyCustomAttributesCache, &t4002_TI, &t4002_0_0_0, &t4002_1_0_0, NULL, &t4002_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4004_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ILayoutElement>
extern TypeInfo t4004_TI;
extern Il2CppType t3375_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24287_MI = 
{
	"GetEnumerator", NULL, &t4004_TI, &t3375_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4004_MIs[] =
{
	&m24287_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4004_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4004_0_0_0;
extern Il2CppType t4004_1_0_0;
struct t4004;
extern TypeInfo t4004_TI;
extern Il2CppGenericClass t4004_GC;
TypeInfo t4004_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4004_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4004_TI, t4004_ITIs, NULL, &EmptyCustomAttributesCache, &t4004_TI, &t4004_0_0_0, &t4004_1_0_0, NULL, &t4004_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3375_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ILayoutElement>
extern MethodInfo m24288_MI;
static PropertyInfo t3375____Current_PropertyInfo = 
{
	&t3375_TI, "Current", &m24288_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3375_PIs[] =
{
	&t3375____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3375_TI;
extern Il2CppType t270_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24288_MI = 
{
	"get_Current", NULL, &t3375_TI, &t270_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3375_MIs[] =
{
	&m24288_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3375_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3375_0_0_0;
extern Il2CppType t3375_1_0_0;
struct t3375;
extern TypeInfo t3375_TI;
extern Il2CppGenericClass t3375_GC;
TypeInfo t3375_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3375_MIs, t3375_PIs, NULL, NULL, NULL, NULL, NULL, &t3375_TI, t3375_ITIs, NULL, &EmptyCustomAttributesCache, &t3375_TI, &t3375_0_0_0, &t3375_1_0_0, NULL, &t3375_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1989.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1989_TI;
#include "t1989MD.h"

extern TypeInfo t1989_TI;
extern TypeInfo t270_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m11052_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18175_MI;
struct t16;
#define m18175(__this, p0, method) (t4 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m18175_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>
extern Il2CppType t16_0_0_1;
FieldInfo t1989_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1989_TI, offsetof(t1989, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1989_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1989_TI, offsetof(t1989, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1989_FIs[] =
{
	&t1989_f0_FieldInfo,
	&t1989_f1_FieldInfo,
	NULL
};
extern MethodInfo m11049_MI;
static PropertyInfo t1989____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1989_TI, "System.Collections.IEnumerator.Current", &m11049_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11052_MI;
static PropertyInfo t1989____Current_PropertyInfo = 
{
	&t1989_TI, "Current", &m11052_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1989_PIs[] =
{
	&t1989____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1989____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1989_m11048_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1989_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11048_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t1989_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1989_m11048_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1989_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11049_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t1989_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1989_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11050_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t1989_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1989_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11051_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t1989_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1989_TI;
extern Il2CppType t270_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11052_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t1989_TI, &t270_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1989_MIs[] =
{
	&m11048_MI,
	&m11049_MI,
	&m11050_MI,
	&m11051_MI,
	&m11052_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m11049_MI;
extern MethodInfo m11051_MI;
extern MethodInfo m11050_MI;
extern MethodInfo m11052_MI;
static MethodInfo* t1989_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m11049_MI,
	&m11051_MI,
	&m11050_MI,
	&m11052_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3375_TI;
static TypeInfo* t1989_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3375_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3375_TI;
static Il2CppInterfaceOffsetPair t1989_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3375_TI, 7},
};
extern MethodInfo m11052_MI;
extern TypeInfo t270_TI;
extern MethodInfo m18175_MI;
static void* t1989_RGCTXData[3] = 
{
	&m11052_MI,
	&t270_TI,
	&m18175_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1989_0_0_0;
extern Il2CppType t1989_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1989_TI;
extern Il2CppGenericClass t1989_GC;
extern TypeInfo t16_TI;
TypeInfo t1989_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1989_MIs, t1989_PIs, t1989_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1989_TI, t1989_ITIs, t1989_VT, &EmptyCustomAttributesCache, &t1989_TI, &t1989_0_0_0, &t1989_1_0_0, t1989_IOs, &t1989_GC, NULL, NULL, NULL, t1989_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1989)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4003_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>
extern MethodInfo m24289_MI;
extern MethodInfo m24290_MI;
static PropertyInfo t4003____Item_PropertyInfo = 
{
	&t4003_TI, "Item", &m24289_MI, &m24290_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4003_PIs[] =
{
	&t4003____Item_PropertyInfo,
	NULL
};
extern Il2CppType t270_0_0_0;
static ParameterInfo t4003_m24291_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern TypeInfo t4003_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24291_MI = 
{
	"IndexOf", NULL, &t4003_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4003_m24291_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t270_0_0_0;
static ParameterInfo t4003_m24292_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern TypeInfo t4003_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24292_MI = 
{
	"Insert", NULL, &t4003_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4003_m24292_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4003_m24293_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4003_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24293_MI = 
{
	"RemoveAt", NULL, &t4003_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4003_m24293_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4003_m24289_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4003_TI;
extern Il2CppType t270_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24289_MI = 
{
	"get_Item", NULL, &t4003_TI, &t270_0_0_0, RuntimeInvoker_t4_t18, t4003_m24289_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t270_0_0_0;
static ParameterInfo t4003_m24290_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t270_0_0_0},
};
extern TypeInfo t4003_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24290_MI = 
{
	"set_Item", NULL, &t4003_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4003_m24290_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4003_MIs[] =
{
	&m24291_MI,
	&m24292_MI,
	&m24293_MI,
	&m24289_MI,
	&m24290_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4002_TI;
extern TypeInfo t4004_TI;
static TypeInfo* t4003_ITIs[] = 
{
	&t592_TI,
	&t4002_TI,
	&t4004_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4003_0_0_0;
extern Il2CppType t4003_1_0_0;
struct t4003;
extern TypeInfo t4003_TI;
extern Il2CppGenericClass t4003_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4003_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4003_MIs, t4003_PIs, NULL, NULL, NULL, NULL, NULL, &t4003_TI, t4003_ITIs, NULL, &t1401__CustomAttributeCache, &t4003_TI, &t4003_0_0_0, &t4003_1_0_0, NULL, &t4003_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4005_TI;

#include "t180.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>
extern MethodInfo m24294_MI;
static PropertyInfo t4005____Count_PropertyInfo = 
{
	&t4005_TI, "Count", &m24294_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24295_MI;
static PropertyInfo t4005____IsReadOnly_PropertyInfo = 
{
	&t4005_TI, "IsReadOnly", &m24295_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4005_PIs[] =
{
	&t4005____Count_PropertyInfo,
	&t4005____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4005_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24294_MI = 
{
	"get_Count", NULL, &t4005_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4005_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24295_MI = 
{
	"get_IsReadOnly", NULL, &t4005_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t4005_m24296_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t4005_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24296_MI = 
{
	"Add", NULL, &t4005_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4005_m24296_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4005_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24297_MI = 
{
	"Clear", NULL, &t4005_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t4005_m24298_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t4005_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24298_MI = 
{
	"Contains", NULL, &t4005_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4005_m24298_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3214_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4005_m24299_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3214_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4005_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24299_MI = 
{
	"CopyTo", NULL, &t4005_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4005_m24299_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t4005_m24300_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t4005_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24300_MI = 
{
	"Remove", NULL, &t4005_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4005_m24300_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4005_MIs[] =
{
	&m24294_MI,
	&m24295_MI,
	&m24296_MI,
	&m24297_MI,
	&m24298_MI,
	&m24299_MI,
	&m24300_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4007_TI;
static TypeInfo* t4005_ITIs[] = 
{
	&t592_TI,
	&t4007_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4005_0_0_0;
extern Il2CppType t4005_1_0_0;
struct t4005;
extern TypeInfo t4005_TI;
extern Il2CppGenericClass t4005_GC;
TypeInfo t4005_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4005_MIs, t4005_PIs, NULL, NULL, NULL, NULL, NULL, &t4005_TI, t4005_ITIs, NULL, &EmptyCustomAttributesCache, &t4005_TI, &t4005_0_0_0, &t4005_1_0_0, NULL, &t4005_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4007_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.MaskableGraphic>
extern TypeInfo t4007_TI;
extern Il2CppType t3376_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24301_MI = 
{
	"GetEnumerator", NULL, &t4007_TI, &t3376_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4007_MIs[] =
{
	&m24301_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4007_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4007_0_0_0;
extern Il2CppType t4007_1_0_0;
struct t4007;
extern TypeInfo t4007_TI;
extern Il2CppGenericClass t4007_GC;
TypeInfo t4007_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4007_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4007_TI, t4007_ITIs, NULL, &EmptyCustomAttributesCache, &t4007_TI, &t4007_0_0_0, &t4007_1_0_0, NULL, &t4007_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3376_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.MaskableGraphic>
extern MethodInfo m24302_MI;
static PropertyInfo t3376____Current_PropertyInfo = 
{
	&t3376_TI, "Current", &m24302_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3376_PIs[] =
{
	&t3376____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3376_TI;
extern Il2CppType t180_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24302_MI = 
{
	"get_Current", NULL, &t3376_TI, &t180_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3376_MIs[] =
{
	&m24302_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3376_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3376_0_0_0;
extern Il2CppType t3376_1_0_0;
struct t3376;
extern TypeInfo t3376_TI;
extern Il2CppGenericClass t3376_GC;
TypeInfo t3376_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3376_MIs, t3376_PIs, NULL, NULL, NULL, NULL, NULL, &t3376_TI, t3376_ITIs, NULL, &EmptyCustomAttributesCache, &t3376_TI, &t3376_0_0_0, &t3376_1_0_0, NULL, &t3376_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1990.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1990_TI;
#include "t1990MD.h"

extern TypeInfo t1990_TI;
extern TypeInfo t180_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m11057_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18186_MI;
struct t16;
#define m18186(__this, p0, method) (t180 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m18186_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>
extern Il2CppType t16_0_0_1;
FieldInfo t1990_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1990_TI, offsetof(t1990, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1990_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1990_TI, offsetof(t1990, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1990_FIs[] =
{
	&t1990_f0_FieldInfo,
	&t1990_f1_FieldInfo,
	NULL
};
extern MethodInfo m11054_MI;
static PropertyInfo t1990____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1990_TI, "System.Collections.IEnumerator.Current", &m11054_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11057_MI;
static PropertyInfo t1990____Current_PropertyInfo = 
{
	&t1990_TI, "Current", &m11057_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1990_PIs[] =
{
	&t1990____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1990____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1990_m11053_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1990_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11053_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t1990_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1990_m11053_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1990_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11054_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t1990_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1990_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11055_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t1990_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1990_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11056_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t1990_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1990_TI;
extern Il2CppType t180_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11057_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t1990_TI, &t180_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1990_MIs[] =
{
	&m11053_MI,
	&m11054_MI,
	&m11055_MI,
	&m11056_MI,
	&m11057_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m11054_MI;
extern MethodInfo m11056_MI;
extern MethodInfo m11055_MI;
extern MethodInfo m11057_MI;
static MethodInfo* t1990_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m11054_MI,
	&m11056_MI,
	&m11055_MI,
	&m11057_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3376_TI;
static TypeInfo* t1990_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3376_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3376_TI;
static Il2CppInterfaceOffsetPair t1990_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3376_TI, 7},
};
extern MethodInfo m11057_MI;
extern TypeInfo t180_TI;
extern MethodInfo m18186_MI;
static void* t1990_RGCTXData[3] = 
{
	&m11057_MI,
	&t180_TI,
	&m18186_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1990_0_0_0;
extern Il2CppType t1990_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1990_TI;
extern Il2CppGenericClass t1990_GC;
extern TypeInfo t16_TI;
TypeInfo t1990_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1990_MIs, t1990_PIs, t1990_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1990_TI, t1990_ITIs, t1990_VT, &EmptyCustomAttributesCache, &t1990_TI, &t1990_0_0_0, &t1990_1_0_0, t1990_IOs, &t1990_GC, NULL, NULL, NULL, t1990_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1990)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4006_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>
extern MethodInfo m24303_MI;
extern MethodInfo m24304_MI;
static PropertyInfo t4006____Item_PropertyInfo = 
{
	&t4006_TI, "Item", &m24303_MI, &m24304_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4006_PIs[] =
{
	&t4006____Item_PropertyInfo,
	NULL
};
extern Il2CppType t180_0_0_0;
static ParameterInfo t4006_m24305_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t4006_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24305_MI = 
{
	"IndexOf", NULL, &t4006_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4006_m24305_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t4006_m24306_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t4006_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24306_MI = 
{
	"Insert", NULL, &t4006_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4006_m24306_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4006_m24307_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4006_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24307_MI = 
{
	"RemoveAt", NULL, &t4006_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4006_m24307_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4006_m24303_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4006_TI;
extern Il2CppType t180_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24303_MI = 
{
	"get_Item", NULL, &t4006_TI, &t180_0_0_0, RuntimeInvoker_t4_t18, t4006_m24303_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t4006_m24304_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t4006_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24304_MI = 
{
	"set_Item", NULL, &t4006_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4006_m24304_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4006_MIs[] =
{
	&m24305_MI,
	&m24306_MI,
	&m24307_MI,
	&m24303_MI,
	&m24304_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4005_TI;
extern TypeInfo t4007_TI;
static TypeInfo* t4006_ITIs[] = 
{
	&t592_TI,
	&t4005_TI,
	&t4007_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4006_0_0_0;
extern Il2CppType t4006_1_0_0;
struct t4006;
extern TypeInfo t4006_TI;
extern Il2CppGenericClass t4006_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4006_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4006_MIs, t4006_PIs, NULL, NULL, NULL, NULL, NULL, &t4006_TI, t4006_ITIs, NULL, &t1401__CustomAttributeCache, &t4006_TI, &t4006_0_0_0, &t4006_1_0_0, NULL, &t4006_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4008_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>
extern MethodInfo m24308_MI;
static PropertyInfo t4008____Count_PropertyInfo = 
{
	&t4008_TI, "Count", &m24308_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24309_MI;
static PropertyInfo t4008____IsReadOnly_PropertyInfo = 
{
	&t4008_TI, "IsReadOnly", &m24309_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4008_PIs[] =
{
	&t4008____Count_PropertyInfo,
	&t4008____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4008_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24308_MI = 
{
	"get_Count", NULL, &t4008_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4008_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24309_MI = 
{
	"get_IsReadOnly", NULL, &t4008_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t361_0_0_0;
static ParameterInfo t4008_m24310_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t361_0_0_0},
};
extern TypeInfo t4008_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24310_MI = 
{
	"Add", NULL, &t4008_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4008_m24310_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4008_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24311_MI = 
{
	"Clear", NULL, &t4008_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t361_0_0_0;
static ParameterInfo t4008_m24312_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t361_0_0_0},
};
extern TypeInfo t4008_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24312_MI = 
{
	"Contains", NULL, &t4008_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4008_m24312_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3215_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4008_m24313_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3215_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4008_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24313_MI = 
{
	"CopyTo", NULL, &t4008_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4008_m24313_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t361_0_0_0;
static ParameterInfo t4008_m24314_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t361_0_0_0},
};
extern TypeInfo t4008_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24314_MI = 
{
	"Remove", NULL, &t4008_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4008_m24314_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4008_MIs[] =
{
	&m24308_MI,
	&m24309_MI,
	&m24310_MI,
	&m24311_MI,
	&m24312_MI,
	&m24313_MI,
	&m24314_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4010_TI;
static TypeInfo* t4008_ITIs[] = 
{
	&t592_TI,
	&t4010_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4008_0_0_0;
extern Il2CppType t4008_1_0_0;
struct t4008;
extern TypeInfo t4008_TI;
extern Il2CppGenericClass t4008_GC;
TypeInfo t4008_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4008_MIs, t4008_PIs, NULL, NULL, NULL, NULL, NULL, &t4008_TI, t4008_ITIs, NULL, &EmptyCustomAttributesCache, &t4008_TI, &t4008_0_0_0, &t4008_1_0_0, NULL, &t4008_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4010_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.IMaskable>
extern TypeInfo t4010_TI;
extern Il2CppType t3377_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24315_MI = 
{
	"GetEnumerator", NULL, &t4010_TI, &t3377_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4010_MIs[] =
{
	&m24315_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4010_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4010_0_0_0;
extern Il2CppType t4010_1_0_0;
struct t4010;
extern TypeInfo t4010_TI;
extern Il2CppGenericClass t4010_GC;
TypeInfo t4010_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4010_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4010_TI, t4010_ITIs, NULL, &EmptyCustomAttributesCache, &t4010_TI, &t4010_0_0_0, &t4010_1_0_0, NULL, &t4010_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3377_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.IMaskable>
extern MethodInfo m24316_MI;
static PropertyInfo t3377____Current_PropertyInfo = 
{
	&t3377_TI, "Current", &m24316_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3377_PIs[] =
{
	&t3377____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3377_TI;
extern Il2CppType t361_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24316_MI = 
{
	"get_Current", NULL, &t3377_TI, &t361_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3377_MIs[] =
{
	&m24316_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3377_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3377_0_0_0;
extern Il2CppType t3377_1_0_0;
struct t3377;
extern TypeInfo t3377_TI;
extern Il2CppGenericClass t3377_GC;
TypeInfo t3377_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3377_MIs, t3377_PIs, NULL, NULL, NULL, NULL, NULL, &t3377_TI, t3377_ITIs, NULL, &EmptyCustomAttributesCache, &t3377_TI, &t3377_0_0_0, &t3377_1_0_0, NULL, &t3377_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1991.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1991_TI;
#include "t1991MD.h"

extern TypeInfo t1991_TI;
extern TypeInfo t361_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m11062_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18197_MI;
struct t16;
#define m18197(__this, p0, method) (t4 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m18197_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>
extern Il2CppType t16_0_0_1;
FieldInfo t1991_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1991_TI, offsetof(t1991, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1991_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1991_TI, offsetof(t1991, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1991_FIs[] =
{
	&t1991_f0_FieldInfo,
	&t1991_f1_FieldInfo,
	NULL
};
extern MethodInfo m11059_MI;
static PropertyInfo t1991____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1991_TI, "System.Collections.IEnumerator.Current", &m11059_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11062_MI;
static PropertyInfo t1991____Current_PropertyInfo = 
{
	&t1991_TI, "Current", &m11062_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1991_PIs[] =
{
	&t1991____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1991____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1991_m11058_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1991_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11058_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t1991_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1991_m11058_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1991_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11059_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t1991_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1991_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11060_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t1991_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1991_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11061_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t1991_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1991_TI;
extern Il2CppType t361_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11062_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t1991_TI, &t361_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1991_MIs[] =
{
	&m11058_MI,
	&m11059_MI,
	&m11060_MI,
	&m11061_MI,
	&m11062_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m11059_MI;
extern MethodInfo m11061_MI;
extern MethodInfo m11060_MI;
extern MethodInfo m11062_MI;
static MethodInfo* t1991_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m11059_MI,
	&m11061_MI,
	&m11060_MI,
	&m11062_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3377_TI;
static TypeInfo* t1991_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3377_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3377_TI;
static Il2CppInterfaceOffsetPair t1991_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3377_TI, 7},
};
extern MethodInfo m11062_MI;
extern TypeInfo t361_TI;
extern MethodInfo m18197_MI;
static void* t1991_RGCTXData[3] = 
{
	&m11062_MI,
	&t361_TI,
	&m18197_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1991_0_0_0;
extern Il2CppType t1991_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1991_TI;
extern Il2CppGenericClass t1991_GC;
extern TypeInfo t16_TI;
TypeInfo t1991_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1991_MIs, t1991_PIs, t1991_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1991_TI, t1991_ITIs, t1991_VT, &EmptyCustomAttributesCache, &t1991_TI, &t1991_0_0_0, &t1991_1_0_0, t1991_IOs, &t1991_GC, NULL, NULL, NULL, t1991_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1991)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4009_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>
extern MethodInfo m24317_MI;
extern MethodInfo m24318_MI;
static PropertyInfo t4009____Item_PropertyInfo = 
{
	&t4009_TI, "Item", &m24317_MI, &m24318_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4009_PIs[] =
{
	&t4009____Item_PropertyInfo,
	NULL
};
extern Il2CppType t361_0_0_0;
static ParameterInfo t4009_m24319_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t361_0_0_0},
};
extern TypeInfo t4009_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24319_MI = 
{
	"IndexOf", NULL, &t4009_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4009_m24319_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t361_0_0_0;
static ParameterInfo t4009_m24320_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t361_0_0_0},
};
extern TypeInfo t4009_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24320_MI = 
{
	"Insert", NULL, &t4009_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4009_m24320_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4009_m24321_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4009_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24321_MI = 
{
	"RemoveAt", NULL, &t4009_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4009_m24321_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4009_m24317_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4009_TI;
extern Il2CppType t361_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24317_MI = 
{
	"get_Item", NULL, &t4009_TI, &t361_0_0_0, RuntimeInvoker_t4_t18, t4009_m24317_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t361_0_0_0;
static ParameterInfo t4009_m24318_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t361_0_0_0},
};
extern TypeInfo t4009_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24318_MI = 
{
	"set_Item", NULL, &t4009_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4009_m24318_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4009_MIs[] =
{
	&m24319_MI,
	&m24320_MI,
	&m24321_MI,
	&m24317_MI,
	&m24318_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4008_TI;
extern TypeInfo t4010_TI;
static TypeInfo* t4009_ITIs[] = 
{
	&t592_TI,
	&t4008_TI,
	&t4010_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4009_0_0_0;
extern Il2CppType t4009_1_0_0;
struct t4009;
extern TypeInfo t4009_TI;
extern Il2CppGenericClass t4009_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4009_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4009_MIs, t4009_PIs, NULL, NULL, NULL, NULL, NULL, &t4009_TI, t4009_ITIs, NULL, &t1401__CustomAttributeCache, &t4009_TI, &t4009_0_0_0, &t4009_1_0_0, NULL, &t4009_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t354_TI;

#include "t150.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>
extern MethodInfo m1624_MI;
static PropertyInfo t354____Count_PropertyInfo = 
{
	&t354_TI, "Count", &m1624_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24322_MI;
static PropertyInfo t354____IsReadOnly_PropertyInfo = 
{
	&t354_TI, "IsReadOnly", &m24322_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t354_PIs[] =
{
	&t354____Count_PropertyInfo,
	&t354____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t354_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m1624_MI = 
{
	"get_Count", NULL, &t354_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t354_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24322_MI = 
{
	"get_IsReadOnly", NULL, &t354_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t150_0_0_0;
static ParameterInfo t354_m24323_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t150_0_0_0},
};
extern TypeInfo t354_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24323_MI = 
{
	"Add", NULL, &t354_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t354_m24323_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t354_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24324_MI = 
{
	"Clear", NULL, &t354_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t150_0_0_0;
static ParameterInfo t354_m24325_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t150_0_0_0},
};
extern TypeInfo t354_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24325_MI = 
{
	"Contains", NULL, &t354_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t354_m24325_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2052_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t354_m24326_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2052_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t354_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24326_MI = 
{
	"CopyTo", NULL, &t354_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t354_m24326_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t150_0_0_0;
static ParameterInfo t354_m24327_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t150_0_0_0},
};
extern TypeInfo t354_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24327_MI = 
{
	"Remove", NULL, &t354_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t354_m24327_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t354_MIs[] =
{
	&m1624_MI,
	&m24322_MI,
	&m24323_MI,
	&m24324_MI,
	&m24325_MI,
	&m24326_MI,
	&m24327_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t2054_TI;
static TypeInfo* t354_ITIs[] = 
{
	&t592_TI,
	&t2054_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t354_0_0_0;
extern Il2CppType t354_1_0_0;
struct t354;
extern TypeInfo t354_TI;
extern Il2CppGenericClass t354_GC;
TypeInfo t354_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t354_MIs, t354_PIs, NULL, NULL, NULL, NULL, NULL, &t354_TI, t354_ITIs, NULL, &EmptyCustomAttributesCache, &t354_TI, &t354_0_0_0, &t354_1_0_0, NULL, &t354_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2054_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Graphic>
extern TypeInfo t2054_TI;
extern Il2CppType t2053_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24328_MI = 
{
	"GetEnumerator", NULL, &t2054_TI, &t2053_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2054_MIs[] =
{
	&m24328_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t2054_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2054_0_0_0;
extern Il2CppType t2054_1_0_0;
struct t2054;
extern TypeInfo t2054_TI;
extern Il2CppGenericClass t2054_GC;
TypeInfo t2054_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2054_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2054_TI, t2054_ITIs, NULL, &EmptyCustomAttributesCache, &t2054_TI, &t2054_0_0_0, &t2054_1_0_0, NULL, &t2054_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2053_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
extern MethodInfo m24329_MI;
static PropertyInfo t2053____Current_PropertyInfo = 
{
	&t2053_TI, "Current", &m24329_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2053_PIs[] =
{
	&t2053____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2053_TI;
extern Il2CppType t150_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24329_MI = 
{
	"get_Current", NULL, &t2053_TI, &t150_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2053_MIs[] =
{
	&m24329_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t2053_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2053_0_0_0;
extern Il2CppType t2053_1_0_0;
struct t2053;
extern TypeInfo t2053_TI;
extern Il2CppGenericClass t2053_GC;
TypeInfo t2053_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2053_MIs, t2053_PIs, NULL, NULL, NULL, NULL, NULL, &t2053_TI, t2053_ITIs, NULL, &EmptyCustomAttributesCache, &t2053_TI, &t2053_0_0_0, &t2053_1_0_0, NULL, &t2053_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1992.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1992_TI;
#include "t1992MD.h"

extern TypeInfo t1992_TI;
extern TypeInfo t150_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m11067_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18208_MI;
struct t16;
#define m18208(__this, p0, method) (t150 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m18208_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>
extern Il2CppType t16_0_0_1;
FieldInfo t1992_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1992_TI, offsetof(t1992, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1992_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1992_TI, offsetof(t1992, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1992_FIs[] =
{
	&t1992_f0_FieldInfo,
	&t1992_f1_FieldInfo,
	NULL
};
extern MethodInfo m11064_MI;
static PropertyInfo t1992____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1992_TI, "System.Collections.IEnumerator.Current", &m11064_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11067_MI;
static PropertyInfo t1992____Current_PropertyInfo = 
{
	&t1992_TI, "Current", &m11067_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1992_PIs[] =
{
	&t1992____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1992____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1992_m11063_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1992_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11063_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t1992_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1992_m11063_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1992_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11064_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t1992_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1992_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11065_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t1992_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1992_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11066_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t1992_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1992_TI;
extern Il2CppType t150_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11067_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t1992_TI, &t150_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1992_MIs[] =
{
	&m11063_MI,
	&m11064_MI,
	&m11065_MI,
	&m11066_MI,
	&m11067_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m11064_MI;
extern MethodInfo m11066_MI;
extern MethodInfo m11065_MI;
extern MethodInfo m11067_MI;
static MethodInfo* t1992_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m11064_MI,
	&m11066_MI,
	&m11065_MI,
	&m11067_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2053_TI;
static TypeInfo* t1992_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t2053_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2053_TI;
static Il2CppInterfaceOffsetPair t1992_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t2053_TI, 7},
};
extern MethodInfo m11067_MI;
extern TypeInfo t150_TI;
extern MethodInfo m18208_MI;
static void* t1992_RGCTXData[3] = 
{
	&m11067_MI,
	&t150_TI,
	&m18208_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1992_0_0_0;
extern Il2CppType t1992_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1992_TI;
extern Il2CppGenericClass t1992_GC;
extern TypeInfo t16_TI;
TypeInfo t1992_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1992_MIs, t1992_PIs, t1992_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1992_TI, t1992_ITIs, t1992_VT, &EmptyCustomAttributesCache, &t1992_TI, &t1992_0_0_0, &t1992_1_0_0, t1992_IOs, &t1992_GC, NULL, NULL, NULL, t1992_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1992)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t169_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>
extern MethodInfo m1621_MI;
extern MethodInfo m24330_MI;
static PropertyInfo t169____Item_PropertyInfo = 
{
	&t169_TI, "Item", &m1621_MI, &m24330_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t169_PIs[] =
{
	&t169____Item_PropertyInfo,
	NULL
};
extern Il2CppType t150_0_0_0;
static ParameterInfo t169_m24331_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t150_0_0_0},
};
extern TypeInfo t169_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24331_MI = 
{
	"IndexOf", NULL, &t169_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t169_m24331_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t150_0_0_0;
static ParameterInfo t169_m24332_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t150_0_0_0},
};
extern TypeInfo t169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24332_MI = 
{
	"Insert", NULL, &t169_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t169_m24332_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t169_m24333_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24333_MI = 
{
	"RemoveAt", NULL, &t169_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t169_m24333_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t169_m1621_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t169_TI;
extern Il2CppType t150_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m1621_MI = 
{
	"get_Item", NULL, &t169_TI, &t150_0_0_0, RuntimeInvoker_t4_t18, t169_m1621_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t150_0_0_0;
static ParameterInfo t169_m24330_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t150_0_0_0},
};
extern TypeInfo t169_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24330_MI = 
{
	"set_Item", NULL, &t169_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t169_m24330_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t169_MIs[] =
{
	&m24331_MI,
	&m24332_MI,
	&m24333_MI,
	&m1621_MI,
	&m24330_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t354_TI;
extern TypeInfo t2054_TI;
static TypeInfo* t169_ITIs[] = 
{
	&t592_TI,
	&t354_TI,
	&t2054_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t169_0_0_0;
extern Il2CppType t169_1_0_0;
struct t169;
extern TypeInfo t169_TI;
extern Il2CppGenericClass t169_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t169_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t169_MIs, t169_PIs, NULL, NULL, NULL, NULL, NULL, &t169_TI, t169_ITIs, NULL, &t1401__CustomAttributeCache, &t169_TI, &t169_0_0_0, &t169_1_0_0, NULL, &t169_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1987_TI;

#include "t294.h"
#include "t1287.h"
extern TypeInfo t1987_TI;
extern TypeInfo t1270_TI;
extern TypeInfo t149_TI;
extern TypeInfo t342_TI;
extern TypeInfo t294_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1287_TI;
#include "t294MD.h"
#include "t1287MD.h"
extern MethodInfo m11071_MI;
extern MethodInfo m6906_MI;
extern MethodInfo m1423_MI;
extern MethodInfo m2995_MI;
extern MethodInfo m7111_MI;
extern MethodInfo m6907_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>
extern Il2CppType t342_0_0_1;
FieldInfo t1987_f0_FieldInfo = 
{
	"l", &t342_0_0_1, &t1987_TI, offsetof(t1987, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1987_f1_FieldInfo = 
{
	"next", &t18_0_0_1, &t1987_TI, offsetof(t1987, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1987_f2_FieldInfo = 
{
	"ver", &t18_0_0_1, &t1987_TI, offsetof(t1987, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t149_0_0_1;
FieldInfo t1987_f3_FieldInfo = 
{
	"current", &t149_0_0_1, &t1987_TI, offsetof(t1987, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1987_FIs[] =
{
	&t1987_f0_FieldInfo,
	&t1987_f1_FieldInfo,
	&t1987_f2_FieldInfo,
	&t1987_f3_FieldInfo,
	NULL
};
extern MethodInfo m11069_MI;
static PropertyInfo t1987____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1987_TI, "System.Collections.IEnumerator.Current", &m11069_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11073_MI;
static PropertyInfo t1987____Current_PropertyInfo = 
{
	&t1987_TI, "Current", &m11073_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1987_PIs[] =
{
	&t1987____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1987____Current_PropertyInfo,
	NULL
};
extern Il2CppType t342_0_0_0;
static ParameterInfo t1987_m11068_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t1987_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11068_MI = 
{
	".ctor", (methodPointerType)&m8006_gshared, &t1987_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1987_m11068_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1987_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11069_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8007_gshared, &t1987_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1987_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11070_MI = 
{
	"Dispose", (methodPointerType)&m8008_gshared, &t1987_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1987_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11071_MI = 
{
	"VerifyState", (methodPointerType)&m8009_gshared, &t1987_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1987_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11072_MI = 
{
	"MoveNext", (methodPointerType)&m8010_gshared, &t1987_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1987_TI;
extern Il2CppType t149_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11073_MI = 
{
	"get_Current", (methodPointerType)&m8011_gshared, &t1987_TI, &t149_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1987_MIs[] =
{
	&m11068_MI,
	&m11069_MI,
	&m11070_MI,
	&m11071_MI,
	&m11072_MI,
	&m11073_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m11069_MI;
extern MethodInfo m11072_MI;
extern MethodInfo m11070_MI;
extern MethodInfo m11073_MI;
static MethodInfo* t1987_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m11069_MI,
	&m11072_MI,
	&m11070_MI,
	&m11073_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1981_TI;
static TypeInfo* t1987_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t1981_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1981_TI;
static Il2CppInterfaceOffsetPair t1987_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t1981_TI, 7},
};
extern MethodInfo m11071_MI;
extern TypeInfo t149_TI;
extern TypeInfo t1987_TI;
static void* t1987_RGCTXData[3] = 
{
	&m11071_MI,
	&t149_TI,
	&t1987_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1987_0_0_0;
extern Il2CppType t1987_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1987_TI;
extern Il2CppGenericClass t1987_GC;
extern TypeInfo t840_TI;
TypeInfo t1987_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1987_MIs, t1987_PIs, t1987_FIs, NULL, &t101_TI, NULL, &t840_TI, &t1987_TI, t1987_ITIs, t1987_VT, &EmptyCustomAttributesCache, &t1987_TI, &t1987_0_0_0, &t1987_1_0_0, t1987_IOs, &t1987_GC, NULL, NULL, NULL, t1987_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1987)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1984_TI;

#include "t337.h"
extern TypeInfo t1984_TI;
extern TypeInfo t149_TI;
extern TypeInfo t18_TI;
extern TypeInfo t337_TI;
extern TypeInfo t1993_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t330_TI;
extern TypeInfo t641_TI;
extern TypeInfo t17_TI;
extern TypeInfo t16_TI;
extern TypeInfo t592_TI;
extern TypeInfo t27_TI;
extern TypeInfo t19_TI;
extern TypeInfo t1980_TI;
extern TypeInfo t1983_TI;
extern TypeInfo t1981_TI;
#include "t337MD.h"
#include "t1994MD.h"
extern MethodInfo m11103_MI;
extern MethodInfo m1510_MI;
extern MethodInfo m24275_MI;
extern MethodInfo m24266_MI;
extern MethodInfo m24_MI;
extern MethodInfo m2947_MI;
extern MethodInfo m7400_MI;
extern MethodInfo m7309_MI;
extern MethodInfo m11135_MI;
extern MethodInfo m24273_MI;
extern MethodInfo m24277_MI;
extern MethodInfo m24267_MI;
extern MethodInfo m24268_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>
extern Il2CppType t1993_0_0_1;
FieldInfo t1984_f0_FieldInfo = 
{
	"list", &t1993_0_0_1, &t1984_TI, offsetof(t1984, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1984_FIs[] =
{
	&t1984_f0_FieldInfo,
	NULL
};
extern MethodInfo m11080_MI;
extern MethodInfo m11081_MI;
static PropertyInfo t1984____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t1984_TI, "System.Collections.Generic.IList<T>.Item", &m11080_MI, &m11081_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11082_MI;
static PropertyInfo t1984____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1984_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m11082_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11092_MI;
static PropertyInfo t1984____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1984_TI, "System.Collections.ICollection.IsSynchronized", &m11092_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11093_MI;
static PropertyInfo t1984____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1984_TI, "System.Collections.ICollection.SyncRoot", &m11093_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11094_MI;
static PropertyInfo t1984____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1984_TI, "System.Collections.IList.IsFixedSize", &m11094_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11095_MI;
static PropertyInfo t1984____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1984_TI, "System.Collections.IList.IsReadOnly", &m11095_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11096_MI;
extern MethodInfo m11097_MI;
static PropertyInfo t1984____System_Collections_IList_Item_PropertyInfo = 
{
	&t1984_TI, "System.Collections.IList.Item", &m11096_MI, &m11097_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11102_MI;
static PropertyInfo t1984____Count_PropertyInfo = 
{
	&t1984_TI, "Count", &m11102_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11103_MI;
static PropertyInfo t1984____Item_PropertyInfo = 
{
	&t1984_TI, "Item", &m11103_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1984_PIs[] =
{
	&t1984____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t1984____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1984____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1984____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1984____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1984____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1984____System_Collections_IList_Item_PropertyInfo,
	&t1984____Count_PropertyInfo,
	&t1984____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1993_0_0_0;
static ParameterInfo t1984_m11074_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1993_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11074_MI = 
{
	".ctor", (methodPointerType)&m8012_gshared, &t1984_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1984_m11074_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t1984_m11075_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11075_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m8013_gshared, &t1984_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1984_m11075_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1984_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11076_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m8014_gshared, &t1984_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t1984_m11077_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11077_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m8015_gshared, &t1984_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1984_m11077_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t1984_m11078_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11078_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m8016_gshared, &t1984_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1984_m11078_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1984_m11079_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11079_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m8017_gshared, &t1984_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t1984_m11079_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1984_m11080_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t149_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11080_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8018_gshared, &t1984_TI, &t149_0_0_0, RuntimeInvoker_t4_t18, t1984_m11080_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t1984_m11081_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11081_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8019_gshared, &t1984_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1984_m11081_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1984_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11082_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8020_gshared, &t1984_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1984_m11083_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11083_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8021_gshared, &t1984_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t1984_m11083_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1984_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11084_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8022_gshared, &t1984_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1984_m11085_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11085_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8023_gshared, &t1984_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1984_m11085_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1984_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11086_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8024_gshared, &t1984_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1984_m11087_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11087_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8025_gshared, &t1984_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1984_m11087_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1984_m11088_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11088_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8026_gshared, &t1984_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1984_m11088_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1984_m11089_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11089_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8027_gshared, &t1984_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1984_m11089_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1984_m11090_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11090_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8028_gshared, &t1984_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1984_m11090_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1984_m11091_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11091_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8029_gshared, &t1984_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t1984_m11091_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1984_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11092_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8030_gshared, &t1984_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1984_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11093_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8031_gshared, &t1984_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1984_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11094_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8032_gshared, &t1984_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1984_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11095_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8033_gshared, &t1984_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1984_m11096_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11096_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8034_gshared, &t1984_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t1984_m11096_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1984_m11097_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11097_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8035_gshared, &t1984_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1984_m11097_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t1984_m11098_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11098_MI = 
{
	"Contains", (methodPointerType)&m8036_gshared, &t1984_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1984_m11098_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1980_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1984_m11099_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1980_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11099_MI = 
{
	"CopyTo", (methodPointerType)&m8037_gshared, &t1984_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t1984_m11099_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1984_TI;
extern Il2CppType t1981_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11100_MI = 
{
	"GetEnumerator", (methodPointerType)&m8038_gshared, &t1984_TI, &t1981_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t1984_m11101_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11101_MI = 
{
	"IndexOf", (methodPointerType)&m8039_gshared, &t1984_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1984_m11101_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1984_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11102_MI = 
{
	"get_Count", (methodPointerType)&m8040_gshared, &t1984_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1984_m11103_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1984_TI;
extern Il2CppType t149_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11103_MI = 
{
	"get_Item", (methodPointerType)&m8041_gshared, &t1984_TI, &t149_0_0_0, RuntimeInvoker_t4_t18, t1984_m11103_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1984_MIs[] =
{
	&m11074_MI,
	&m11075_MI,
	&m11076_MI,
	&m11077_MI,
	&m11078_MI,
	&m11079_MI,
	&m11080_MI,
	&m11081_MI,
	&m11082_MI,
	&m11083_MI,
	&m11084_MI,
	&m11085_MI,
	&m11086_MI,
	&m11087_MI,
	&m11088_MI,
	&m11089_MI,
	&m11090_MI,
	&m11091_MI,
	&m11092_MI,
	&m11093_MI,
	&m11094_MI,
	&m11095_MI,
	&m11096_MI,
	&m11097_MI,
	&m11098_MI,
	&m11099_MI,
	&m11100_MI,
	&m11101_MI,
	&m11102_MI,
	&m11103_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11084_MI;
extern MethodInfo m11102_MI;
extern MethodInfo m11092_MI;
extern MethodInfo m11093_MI;
extern MethodInfo m11083_MI;
extern MethodInfo m11094_MI;
extern MethodInfo m11095_MI;
extern MethodInfo m11096_MI;
extern MethodInfo m11097_MI;
extern MethodInfo m11085_MI;
extern MethodInfo m11086_MI;
extern MethodInfo m11087_MI;
extern MethodInfo m11088_MI;
extern MethodInfo m11089_MI;
extern MethodInfo m11090_MI;
extern MethodInfo m11091_MI;
extern MethodInfo m11102_MI;
extern MethodInfo m11082_MI;
extern MethodInfo m11075_MI;
extern MethodInfo m11076_MI;
extern MethodInfo m11098_MI;
extern MethodInfo m11099_MI;
extern MethodInfo m11078_MI;
extern MethodInfo m11101_MI;
extern MethodInfo m11077_MI;
extern MethodInfo m11079_MI;
extern MethodInfo m11080_MI;
extern MethodInfo m11081_MI;
extern MethodInfo m11100_MI;
extern MethodInfo m11103_MI;
static MethodInfo* t1984_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11084_MI,
	&m11102_MI,
	&m11092_MI,
	&m11093_MI,
	&m11083_MI,
	&m11094_MI,
	&m11095_MI,
	&m11096_MI,
	&m11097_MI,
	&m11085_MI,
	&m11086_MI,
	&m11087_MI,
	&m11088_MI,
	&m11089_MI,
	&m11090_MI,
	&m11091_MI,
	&m11102_MI,
	&m11082_MI,
	&m11075_MI,
	&m11076_MI,
	&m11098_MI,
	&m11099_MI,
	&m11078_MI,
	&m11101_MI,
	&m11077_MI,
	&m11079_MI,
	&m11080_MI,
	&m11081_MI,
	&m11100_MI,
	&m11103_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t1993_TI;
extern TypeInfo t1983_TI;
static TypeInfo* t1984_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t1982_TI,
	&t1993_TI,
	&t1983_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t1993_TI;
extern TypeInfo t1983_TI;
static Il2CppInterfaceOffsetPair t1984_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t1982_TI, 20},
	{ &t1993_TI, 27},
	{ &t1983_TI, 32},
};
extern MethodInfo m11103_MI;
extern MethodInfo m11135_MI;
extern TypeInfo t149_TI;
extern MethodInfo m24273_MI;
extern MethodInfo m24277_MI;
extern MethodInfo m24275_MI;
extern MethodInfo m24267_MI;
extern MethodInfo m24268_MI;
extern MethodInfo m24266_MI;
static void* t1984_RGCTXData[9] = 
{
	&m11103_MI,
	&m11135_MI,
	&t149_TI,
	&m24273_MI,
	&m24277_MI,
	&m24275_MI,
	&m24267_MI,
	&m24268_MI,
	&m24266_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1984_0_0_0;
extern Il2CppType t1984_1_0_0;
extern TypeInfo t4_TI;
struct t1984;
extern TypeInfo t1984_TI;
extern Il2CppGenericClass t1984_GC;
extern CustomAttributesCache t842__CustomAttributeCache;
TypeInfo t1984_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t1984_MIs, t1984_PIs, t1984_FIs, NULL, &t4_TI, NULL, NULL, &t1984_TI, t1984_ITIs, t1984_VT, &t842__CustomAttributeCache, &t1984_TI, &t1984_0_0_0, &t1984_1_0_0, t1984_IOs, &t1984_GC, NULL, NULL, NULL, t1984_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1984), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t1994.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1994_TI;

#include "t295.h"
extern TypeInfo t1994_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t19_TI;
extern TypeInfo t1993_TI;
extern TypeInfo t149_TI;
extern TypeInfo t18_TI;
extern TypeInfo t17_TI;
extern TypeInfo t342_TI;
extern TypeInfo t641_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern TypeInfo t1983_TI;
extern TypeInfo t1981_TI;
extern TypeInfo t1980_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t337_TI;
extern TypeInfo t1015_TI;
extern Il2CppType t149_0_0_0;
extern MethodInfo m24270_MI;
extern MethodInfo m11138_MI;
extern MethodInfo m11139_MI;
extern MethodInfo m24275_MI;
extern MethodInfo m11136_MI;
extern MethodInfo m11134_MI;
extern MethodInfo m24266_MI;
extern MethodInfo m24_MI;
extern MethodInfo m1537_MI;
extern MethodInfo m7399_MI;
extern MethodInfo m7400_MI;
extern MethodInfo m24268_MI;
extern MethodInfo m11127_MI;
extern MethodInfo m11135_MI;
extern MethodInfo m24273_MI;
extern MethodInfo m24277_MI;
extern MethodInfo m11137_MI;
extern MethodInfo m11125_MI;
extern MethodInfo m11130_MI;
extern MethodInfo m11121_MI;
extern MethodInfo m24272_MI;
extern MethodInfo m24267_MI;
extern MethodInfo m24278_MI;
extern MethodInfo m24279_MI;
extern MethodInfo m24276_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m3814_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m1510_MI;
extern MethodInfo m7398_MI;
extern MethodInfo m7401_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>
extern Il2CppType t1993_0_0_1;
FieldInfo t1994_f0_FieldInfo = 
{
	"list", &t1993_0_0_1, &t1994_TI, offsetof(t1994, f0), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t1994_f1_FieldInfo = 
{
	"syncRoot", &t4_0_0_1, &t1994_TI, offsetof(t1994, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1994_FIs[] =
{
	&t1994_f0_FieldInfo,
	&t1994_f1_FieldInfo,
	NULL
};
extern MethodInfo m11105_MI;
static PropertyInfo t1994____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1994_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m11105_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11113_MI;
static PropertyInfo t1994____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1994_TI, "System.Collections.ICollection.IsSynchronized", &m11113_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11114_MI;
static PropertyInfo t1994____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1994_TI, "System.Collections.ICollection.SyncRoot", &m11114_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11115_MI;
static PropertyInfo t1994____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1994_TI, "System.Collections.IList.IsFixedSize", &m11115_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11116_MI;
static PropertyInfo t1994____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1994_TI, "System.Collections.IList.IsReadOnly", &m11116_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11117_MI;
extern MethodInfo m11118_MI;
static PropertyInfo t1994____System_Collections_IList_Item_PropertyInfo = 
{
	&t1994_TI, "System.Collections.IList.Item", &m11117_MI, &m11118_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11131_MI;
static PropertyInfo t1994____Count_PropertyInfo = 
{
	&t1994_TI, "Count", &m11131_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11132_MI;
extern MethodInfo m11133_MI;
static PropertyInfo t1994____Item_PropertyInfo = 
{
	&t1994_TI, "Item", &m11132_MI, &m11133_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1994_PIs[] =
{
	&t1994____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1994____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1994____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1994____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1994____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1994____System_Collections_IList_Item_PropertyInfo,
	&t1994____Count_PropertyInfo,
	&t1994____Item_PropertyInfo,
	NULL
};
extern TypeInfo t1994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11104_MI = 
{
	".ctor", (methodPointerType)&m8042_gshared, &t1994_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1994_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11105_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8043_gshared, &t1994_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1994_m11106_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11106_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8044_gshared, &t1994_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t1994_m11106_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1994_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11107_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8045_gshared, &t1994_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1994_m11108_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11108_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8046_gshared, &t1994_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1994_m11108_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1994_m11109_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11109_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8047_gshared, &t1994_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1994_m11109_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1994_m11110_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11110_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8048_gshared, &t1994_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1994_m11110_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1994_m11111_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11111_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8049_gshared, &t1994_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1994_m11111_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1994_m11112_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11112_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8050_gshared, &t1994_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1994_m11112_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1994_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11113_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8051_gshared, &t1994_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1994_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11114_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8052_gshared, &t1994_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1994_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11115_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8053_gshared, &t1994_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1994_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11116_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8054_gshared, &t1994_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1994_m11117_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11117_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8055_gshared, &t1994_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t1994_m11117_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1994_m11118_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11118_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8056_gshared, &t1994_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1994_m11118_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t1994_m11119_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11119_MI = 
{
	"Add", (methodPointerType)&m8057_gshared, &t1994_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1994_m11119_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11120_MI = 
{
	"Clear", (methodPointerType)&m8058_gshared, &t1994_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11121_MI = 
{
	"ClearItems", (methodPointerType)&m8059_gshared, &t1994_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t1994_m11122_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11122_MI = 
{
	"Contains", (methodPointerType)&m8060_gshared, &t1994_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1994_m11122_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1980_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1994_m11123_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1980_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11123_MI = 
{
	"CopyTo", (methodPointerType)&m8061_gshared, &t1994_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t1994_m11123_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1994_TI;
extern Il2CppType t1981_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11124_MI = 
{
	"GetEnumerator", (methodPointerType)&m8062_gshared, &t1994_TI, &t1981_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t1994_m11125_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11125_MI = 
{
	"IndexOf", (methodPointerType)&m8063_gshared, &t1994_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1994_m11125_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t1994_m11126_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11126_MI = 
{
	"Insert", (methodPointerType)&m8064_gshared, &t1994_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1994_m11126_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t1994_m11127_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11127_MI = 
{
	"InsertItem", (methodPointerType)&m8065_gshared, &t1994_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1994_m11127_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t1994_m11128_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11128_MI = 
{
	"Remove", (methodPointerType)&m8066_gshared, &t1994_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1994_m11128_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1994_m11129_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11129_MI = 
{
	"RemoveAt", (methodPointerType)&m8067_gshared, &t1994_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t1994_m11129_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1994_m11130_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11130_MI = 
{
	"RemoveItem", (methodPointerType)&m8068_gshared, &t1994_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t1994_m11130_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1994_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11131_MI = 
{
	"get_Count", (methodPointerType)&m8069_gshared, &t1994_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t1994_m11132_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t149_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11132_MI = 
{
	"get_Item", (methodPointerType)&m8070_gshared, &t1994_TI, &t149_0_0_0, RuntimeInvoker_t4_t18, t1994_m11132_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t1994_m11133_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11133_MI = 
{
	"set_Item", (methodPointerType)&m8071_gshared, &t1994_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1994_m11133_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t1994_m11134_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11134_MI = 
{
	"SetItem", (methodPointerType)&m8072_gshared, &t1994_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t1994_m11134_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1994_m11135_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11135_MI = 
{
	"IsValidItem", (methodPointerType)&m8073_gshared, &t1994_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1994_m11135_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1994_m11136_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t149_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11136_MI = 
{
	"ConvertItem", (methodPointerType)&m8074_gshared, &t1994_TI, &t149_0_0_0, RuntimeInvoker_t4_t4, t1994_m11136_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1993_0_0_0;
static ParameterInfo t1994_m11137_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1993_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11137_MI = 
{
	"CheckWritable", (methodPointerType)&m8075_gshared, &t1994_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1994_m11137_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1993_0_0_0;
static ParameterInfo t1994_m11138_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1993_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11138_MI = 
{
	"IsSynchronized", (methodPointerType)&m8076_gshared, &t1994_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1994_m11138_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1993_0_0_0;
static ParameterInfo t1994_m11139_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1993_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11139_MI = 
{
	"IsFixedSize", (methodPointerType)&m8077_gshared, &t1994_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1994_m11139_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1994_MIs[] =
{
	&m11104_MI,
	&m11105_MI,
	&m11106_MI,
	&m11107_MI,
	&m11108_MI,
	&m11109_MI,
	&m11110_MI,
	&m11111_MI,
	&m11112_MI,
	&m11113_MI,
	&m11114_MI,
	&m11115_MI,
	&m11116_MI,
	&m11117_MI,
	&m11118_MI,
	&m11119_MI,
	&m11120_MI,
	&m11121_MI,
	&m11122_MI,
	&m11123_MI,
	&m11124_MI,
	&m11125_MI,
	&m11126_MI,
	&m11127_MI,
	&m11128_MI,
	&m11129_MI,
	&m11130_MI,
	&m11131_MI,
	&m11132_MI,
	&m11133_MI,
	&m11134_MI,
	&m11135_MI,
	&m11136_MI,
	&m11137_MI,
	&m11138_MI,
	&m11139_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11107_MI;
extern MethodInfo m11131_MI;
extern MethodInfo m11113_MI;
extern MethodInfo m11114_MI;
extern MethodInfo m11106_MI;
extern MethodInfo m11115_MI;
extern MethodInfo m11116_MI;
extern MethodInfo m11117_MI;
extern MethodInfo m11118_MI;
extern MethodInfo m11108_MI;
extern MethodInfo m11120_MI;
extern MethodInfo m11109_MI;
extern MethodInfo m11110_MI;
extern MethodInfo m11111_MI;
extern MethodInfo m11112_MI;
extern MethodInfo m11129_MI;
extern MethodInfo m11131_MI;
extern MethodInfo m11105_MI;
extern MethodInfo m11119_MI;
extern MethodInfo m11120_MI;
extern MethodInfo m11122_MI;
extern MethodInfo m11123_MI;
extern MethodInfo m11128_MI;
extern MethodInfo m11125_MI;
extern MethodInfo m11126_MI;
extern MethodInfo m11129_MI;
extern MethodInfo m11132_MI;
extern MethodInfo m11133_MI;
extern MethodInfo m11124_MI;
extern MethodInfo m11121_MI;
extern MethodInfo m11127_MI;
extern MethodInfo m11130_MI;
extern MethodInfo m11134_MI;
static MethodInfo* t1994_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11107_MI,
	&m11131_MI,
	&m11113_MI,
	&m11114_MI,
	&m11106_MI,
	&m11115_MI,
	&m11116_MI,
	&m11117_MI,
	&m11118_MI,
	&m11108_MI,
	&m11120_MI,
	&m11109_MI,
	&m11110_MI,
	&m11111_MI,
	&m11112_MI,
	&m11129_MI,
	&m11131_MI,
	&m11105_MI,
	&m11119_MI,
	&m11120_MI,
	&m11122_MI,
	&m11123_MI,
	&m11128_MI,
	&m11125_MI,
	&m11126_MI,
	&m11129_MI,
	&m11132_MI,
	&m11133_MI,
	&m11124_MI,
	&m11121_MI,
	&m11127_MI,
	&m11130_MI,
	&m11134_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t1993_TI;
extern TypeInfo t1983_TI;
static TypeInfo* t1994_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t1982_TI,
	&t1993_TI,
	&t1983_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t1993_TI;
extern TypeInfo t1983_TI;
static Il2CppInterfaceOffsetPair t1994_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t1982_TI, 20},
	{ &t1993_TI, 27},
	{ &t1983_TI, 32},
};
extern TypeInfo t342_TI;
extern MethodInfo m1537_MI;
extern MethodInfo m24270_MI;
extern MethodInfo m24268_MI;
extern MethodInfo m24266_MI;
extern MethodInfo m11136_MI;
extern MethodInfo m11127_MI;
extern MethodInfo m11135_MI;
extern TypeInfo t149_TI;
extern MethodInfo m24273_MI;
extern MethodInfo m24277_MI;
extern MethodInfo m11137_MI;
extern MethodInfo m11125_MI;
extern MethodInfo m11130_MI;
extern MethodInfo m11138_MI;
extern MethodInfo m11139_MI;
extern MethodInfo m24275_MI;
extern MethodInfo m11134_MI;
extern MethodInfo m11121_MI;
extern MethodInfo m24272_MI;
extern MethodInfo m24267_MI;
extern MethodInfo m24278_MI;
extern MethodInfo m24279_MI;
extern MethodInfo m24276_MI;
extern Il2CppType t149_0_0_0;
static void* t1994_RGCTXData[25] = 
{
	&t342_TI,
	&m1537_MI,
	&m24270_MI,
	&m24268_MI,
	&m24266_MI,
	&m11136_MI,
	&m11127_MI,
	&m11135_MI,
	&t149_TI,
	&m24273_MI,
	&m24277_MI,
	&m11137_MI,
	&m11125_MI,
	&m11130_MI,
	&m11138_MI,
	&m11139_MI,
	&m24275_MI,
	&m11134_MI,
	&m11121_MI,
	&m24272_MI,
	&m24267_MI,
	&m24278_MI,
	&m24279_MI,
	&m24276_MI,
	(void*)&t149_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1994_0_0_0;
extern Il2CppType t1994_1_0_0;
extern TypeInfo t4_TI;
struct t1994;
extern TypeInfo t1994_TI;
extern Il2CppGenericClass t1994_GC;
extern CustomAttributesCache t841__CustomAttributeCache;
TypeInfo t1994_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t1994_MIs, t1994_PIs, t1994_FIs, NULL, &t4_TI, NULL, NULL, &t1994_TI, t1994_ITIs, t1994_VT, &t841__CustomAttributeCache, &t1994_TI, &t1994_0_0_0, &t1994_1_0_0, t1994_IOs, &t1994_GC, NULL, NULL, NULL, t1994_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1994), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1995_TI;
#include "t1995MD.h"

#include "t837.h"
#include "t1996.h"
extern TypeInfo t1995_TI;
extern TypeInfo t5161_TI;
extern TypeInfo t294_TI;
extern TypeInfo t149_TI;
extern TypeInfo t19_TI;
extern TypeInfo t837_TI;
extern TypeInfo t526_TI;
extern TypeInfo t1996_TI;
extern TypeInfo t18_TI;
#include "t1223MD.h"
#include "t1996MD.h"
extern Il2CppType t5161_0_0_0;
extern Il2CppType t149_0_0_0;
extern Il2CppType t837_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m11145_MI;
extern MethodInfo m24334_MI;
extern MethodInfo m18220_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>
extern Il2CppType t1995_0_0_49;
FieldInfo t1995_f0_FieldInfo = 
{
	"_default", &t1995_0_0_49, &t1995_TI, offsetof(t1995_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1995_FIs[] =
{
	&t1995_f0_FieldInfo,
	NULL
};
extern MethodInfo m11144_MI;
static PropertyInfo t1995____Default_PropertyInfo = 
{
	&t1995_TI, "Default", &m11144_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1995_PIs[] =
{
	&t1995____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1995_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11140_MI = 
{
	".ctor", (methodPointerType)&m8078_gshared, &t1995_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1995_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11141_MI = 
{
	".cctor", (methodPointerType)&m8079_gshared, &t1995_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1995_m11142_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1995_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11142_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8080_gshared, &t1995_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1995_m11142_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1995_m11143_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1995_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11143_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8081_gshared, &t1995_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t1995_m11143_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t1995_m24334_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1995_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24334_MI = 
{
	"GetHashCode", NULL, &t1995_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1995_m24334_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t1995_m18220_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1995_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m18220_MI = 
{
	"Equals", NULL, &t1995_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t1995_m18220_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1995_TI;
extern Il2CppType t1995_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11144_MI = 
{
	"get_Default", (methodPointerType)&m8082_gshared, &t1995_TI, &t1995_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1995_MIs[] =
{
	&m11140_MI,
	&m11141_MI,
	&m11142_MI,
	&m11143_MI,
	&m24334_MI,
	&m18220_MI,
	&m11144_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m18220_MI;
extern MethodInfo m24334_MI;
extern MethodInfo m11143_MI;
extern MethodInfo m11142_MI;
static MethodInfo* t1995_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m18220_MI,
	&m24334_MI,
	&m11143_MI,
	&m11142_MI,
	NULL,
	NULL,
};
extern TypeInfo t5162_TI;
extern TypeInfo t860_TI;
static TypeInfo* t1995_ITIs[] = 
{
	&t5162_TI,
	&t860_TI,
};
extern TypeInfo t5162_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t1995_IOs[] = 
{
	{ &t5162_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppType t5161_0_0_0;
extern Il2CppType t149_0_0_0;
extern TypeInfo t1995_TI;
extern TypeInfo t1995_TI;
extern TypeInfo t1996_TI;
extern MethodInfo m11145_MI;
extern TypeInfo t149_TI;
extern MethodInfo m24334_MI;
extern MethodInfo m18220_MI;
static void* t1995_RGCTXData[9] = 
{
	(void*)&t5161_0_0_0,
	(void*)&t149_0_0_0,
	&t1995_TI,
	&t1995_TI,
	&t1996_TI,
	&m11145_MI,
	&t149_TI,
	&m24334_MI,
	&m18220_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1995_0_0_0;
extern Il2CppType t1995_1_0_0;
extern TypeInfo t4_TI;
struct t1995;
extern TypeInfo t1995_TI;
extern Il2CppGenericClass t1995_GC;
TypeInfo t1995_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t1995_MIs, t1995_PIs, t1995_FIs, NULL, &t4_TI, NULL, NULL, &t1995_TI, t1995_ITIs, t1995_VT, &EmptyCustomAttributesCache, &t1995_TI, &t1995_0_0_0, &t1995_1_0_0, t1995_IOs, &t1995_GC, NULL, NULL, NULL, t1995_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1995), 0, -1, sizeof(t1995_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5162_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Text>
extern Il2CppType t149_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t5162_m24335_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t5162_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24335_MI = 
{
	"Equals", NULL, &t5162_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t5162_m24335_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t5162_m24336_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t5162_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24336_MI = 
{
	"GetHashCode", NULL, &t5162_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t5162_m24336_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5162_MIs[] =
{
	&m24335_MI,
	&m24336_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5162_0_0_0;
extern Il2CppType t5162_1_0_0;
struct t5162;
extern TypeInfo t5162_TI;
extern Il2CppGenericClass t5162_GC;
TypeInfo t5162_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5162_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5162_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5162_TI, &t5162_0_0_0, &t5162_1_0_0, NULL, &t5162_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5161_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.UI.Text>
extern Il2CppType t149_0_0_0;
static ParameterInfo t5161_m24337_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t5161_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24337_MI = 
{
	"Equals", NULL, &t5161_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t5161_m24337_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5161_MIs[] =
{
	&m24337_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5161_0_0_0;
extern Il2CppType t5161_1_0_0;
struct t5161;
extern TypeInfo t5161_TI;
extern Il2CppGenericClass t5161_GC;
TypeInfo t5161_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5161_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5161_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5161_TI, &t5161_0_0_0, &t5161_1_0_0, NULL, &t5161_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1996_TI;

extern TypeInfo t149_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
extern TypeInfo t19_TI;
extern MethodInfo m11140_MI;
extern MethodInfo m30_MI;
extern MethodInfo m28_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Text>
extern TypeInfo t1996_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11145_MI = 
{
	".ctor", (methodPointerType)&m8113_gshared, &t1996_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t1996_m11146_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1996_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11146_MI = 
{
	"GetHashCode", (methodPointerType)&m8114_gshared, &t1996_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1996_m11146_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t1996_m11147_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1996_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11147_MI = 
{
	"Equals", (methodPointerType)&m8115_gshared, &t1996_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t1996_m11147_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1996_MIs[] =
{
	&m11145_MI,
	&m11146_MI,
	&m11147_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11147_MI;
extern MethodInfo m11146_MI;
extern MethodInfo m11143_MI;
extern MethodInfo m11142_MI;
extern MethodInfo m11146_MI;
extern MethodInfo m11147_MI;
static MethodInfo* t1996_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11147_MI,
	&m11146_MI,
	&m11143_MI,
	&m11142_MI,
	&m11146_MI,
	&m11147_MI,
};
extern TypeInfo t5162_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t1996_IOs[] = 
{
	{ &t5162_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppType t5161_0_0_0;
extern Il2CppType t149_0_0_0;
extern TypeInfo t1995_TI;
extern TypeInfo t1995_TI;
extern TypeInfo t1996_TI;
extern MethodInfo m11145_MI;
extern TypeInfo t149_TI;
extern MethodInfo m24334_MI;
extern MethodInfo m18220_MI;
extern MethodInfo m11140_MI;
extern TypeInfo t149_TI;
static void* t1996_RGCTXData[11] = 
{
	(void*)&t5161_0_0_0,
	(void*)&t149_0_0_0,
	&t1995_TI,
	&t1995_TI,
	&t1996_TI,
	&m11145_MI,
	&t149_TI,
	&m24334_MI,
	&m18220_MI,
	&m11140_MI,
	&t149_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1996_0_0_0;
extern Il2CppType t1996_1_0_0;
extern TypeInfo t1995_TI;
struct t1996;
extern TypeInfo t1996_TI;
extern Il2CppGenericClass t1996_GC;
extern TypeInfo t836_TI;
TypeInfo t1996_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1996_MIs, NULL, NULL, NULL, &t1995_TI, NULL, &t836_TI, &t1996_TI, NULL, t1996_VT, &EmptyCustomAttributesCache, &t1996_TI, &t1996_0_0_0, &t1996_1_0_0, t1996_IOs, &t1996_GC, NULL, NULL, NULL, t1996_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1996), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1985_TI;

#include "t56.h"
#include "t55.h"


// Metadata Definition System.Predicate`1<UnityEngine.UI.Text>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t1985_m11148_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t1985_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m11148_MI = 
{
	".ctor", (methodPointerType)&m8116_gshared, &t1985_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t1985_m11148_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
static ParameterInfo t1985_m11149_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1985_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11149_MI = 
{
	"Invoke", (methodPointerType)&m8117_gshared, &t1985_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1985_m11149_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1985_m11150_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1985_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11150_MI = 
{
	"BeginInvoke", (methodPointerType)&m8118_gshared, &t1985_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t1985_m11150_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t1985_m11151_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t1985_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11151_MI = 
{
	"EndInvoke", (methodPointerType)&m8119_gshared, &t1985_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1985_m11151_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1985_MIs[] =
{
	&m11148_MI,
	&m11149_MI,
	&m11150_MI,
	&m11151_MI,
	NULL
};
extern MethodInfo m1695_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1696_MI;
extern MethodInfo m31_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m1700_MI;
extern MethodInfo m1701_MI;
extern MethodInfo m11149_MI;
extern MethodInfo m11150_MI;
extern MethodInfo m11151_MI;
static MethodInfo* t1985_VT[] =
{
	&m1695_MI,
	&m29_MI,
	&m1696_MI,
	&m31_MI,
	&m1697_MI,
	&m1698_MI,
	&m1697_MI,
	&m1699_MI,
	&m1700_MI,
	&m1701_MI,
	&m11149_MI,
	&m11150_MI,
	&m11151_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t1985_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1985_0_0_0;
extern Il2CppType t1985_1_0_0;
extern TypeInfo t193_TI;
struct t1985;
extern TypeInfo t1985_TI;
extern Il2CppGenericClass t1985_GC;
TypeInfo t1985_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t1985_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t1985_TI, NULL, t1985_VT, &EmptyCustomAttributesCache, &t1985_TI, &t1985_0_0_0, &t1985_1_0_0, t1985_IOs, &t1985_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1985), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1997_TI;

#include "t825.h"
#include "t1998.h"
extern TypeInfo t1997_TI;
extern TypeInfo t3379_TI;
extern TypeInfo t294_TI;
extern TypeInfo t149_TI;
extern TypeInfo t19_TI;
extern TypeInfo t825_TI;
extern TypeInfo t526_TI;
extern TypeInfo t1998_TI;
extern TypeInfo t18_TI;
extern TypeInfo t307_TI;
#include "t1998MD.h"
extern Il2CppType t3379_0_0_0;
extern Il2CppType t149_0_0_0;
extern Il2CppType t825_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m11156_MI;
extern MethodInfo m24338_MI;
extern MethodInfo m6463_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.UI.Text>
extern Il2CppType t1997_0_0_49;
FieldInfo t1997_f0_FieldInfo = 
{
	"_default", &t1997_0_0_49, &t1997_TI, offsetof(t1997_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1997_FIs[] =
{
	&t1997_f0_FieldInfo,
	NULL
};
extern MethodInfo m11155_MI;
static PropertyInfo t1997____Default_PropertyInfo = 
{
	&t1997_TI, "Default", &m11155_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1997_PIs[] =
{
	&t1997____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1997_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11152_MI = 
{
	".ctor", (methodPointerType)&m8120_gshared, &t1997_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1997_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11153_MI = 
{
	".cctor", (methodPointerType)&m8121_gshared, &t1997_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1997_m11154_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1997_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11154_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8122_gshared, &t1997_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t1997_m11154_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t1997_m24338_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1997_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24338_MI = 
{
	"Compare", NULL, &t1997_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t1997_m24338_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1997_TI;
extern Il2CppType t1997_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11155_MI = 
{
	"get_Default", (methodPointerType)&m8123_gshared, &t1997_TI, &t1997_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1997_MIs[] =
{
	&m11152_MI,
	&m11153_MI,
	&m11154_MI,
	&m24338_MI,
	&m11155_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m24338_MI;
extern MethodInfo m11154_MI;
static MethodInfo* t1997_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m24338_MI,
	&m11154_MI,
	NULL,
};
extern TypeInfo t3378_TI;
extern TypeInfo t717_TI;
static TypeInfo* t1997_ITIs[] = 
{
	&t3378_TI,
	&t717_TI,
};
extern TypeInfo t3378_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t1997_IOs[] = 
{
	{ &t3378_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppType t3379_0_0_0;
extern Il2CppType t149_0_0_0;
extern TypeInfo t1997_TI;
extern TypeInfo t1997_TI;
extern TypeInfo t1998_TI;
extern MethodInfo m11156_MI;
extern TypeInfo t149_TI;
extern MethodInfo m24338_MI;
static void* t1997_RGCTXData[8] = 
{
	(void*)&t3379_0_0_0,
	(void*)&t149_0_0_0,
	&t1997_TI,
	&t1997_TI,
	&t1998_TI,
	&m11156_MI,
	&t149_TI,
	&m24338_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1997_0_0_0;
extern Il2CppType t1997_1_0_0;
extern TypeInfo t4_TI;
struct t1997;
extern TypeInfo t1997_TI;
extern Il2CppGenericClass t1997_GC;
TypeInfo t1997_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t1997_MIs, t1997_PIs, t1997_FIs, NULL, &t4_TI, NULL, NULL, &t1997_TI, t1997_ITIs, t1997_VT, &EmptyCustomAttributesCache, &t1997_TI, &t1997_0_0_0, &t1997_1_0_0, t1997_IOs, &t1997_GC, NULL, NULL, NULL, t1997_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1997), 0, -1, sizeof(t1997_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3378_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.UI.Text>
extern Il2CppType t149_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t3378_m18228_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t3378_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m18228_MI = 
{
	"Compare", NULL, &t3378_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t3378_m18228_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3378_MIs[] =
{
	&m18228_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3378_0_0_0;
extern Il2CppType t3378_1_0_0;
struct t3378;
extern TypeInfo t3378_TI;
extern Il2CppGenericClass t3378_GC;
TypeInfo t3378_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3378_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3378_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3378_TI, &t3378_0_0_0, &t3378_1_0_0, NULL, &t3378_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3379_TI;



// Metadata Definition System.IComparable`1<UnityEngine.UI.Text>
extern Il2CppType t149_0_0_0;
static ParameterInfo t3379_m18229_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t3379_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m18229_MI = 
{
	"CompareTo", NULL, &t3379_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t3379_m18229_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3379_MIs[] =
{
	&m18229_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3379_0_0_0;
extern Il2CppType t3379_1_0_0;
struct t3379;
extern TypeInfo t3379_TI;
extern Il2CppGenericClass t3379_GC;
TypeInfo t3379_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3379_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3379_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3379_TI, &t3379_0_0_0, &t3379_1_0_0, NULL, &t3379_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1998_TI;

extern TypeInfo t149_TI;
extern TypeInfo t3379_TI;
extern TypeInfo t18_TI;
extern TypeInfo t289_TI;
extern TypeInfo t4_TI;
extern TypeInfo t307_TI;
extern MethodInfo m11152_MI;
extern MethodInfo m18229_MI;
extern MethodInfo m7306_MI;
extern MethodInfo m1936_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Text>
extern TypeInfo t1998_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11156_MI = 
{
	".ctor", (methodPointerType)&m8124_gshared, &t1998_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t1998_m11157_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11157_MI = 
{
	"Compare", (methodPointerType)&m8125_gshared, &t1998_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t1998_m11157_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1998_MIs[] =
{
	&m11156_MI,
	&m11157_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11157_MI;
extern MethodInfo m11154_MI;
extern MethodInfo m11157_MI;
static MethodInfo* t1998_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11157_MI,
	&m11154_MI,
	&m11157_MI,
};
extern TypeInfo t3378_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t1998_IOs[] = 
{
	{ &t3378_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppType t3379_0_0_0;
extern Il2CppType t149_0_0_0;
extern TypeInfo t1997_TI;
extern TypeInfo t1997_TI;
extern TypeInfo t1998_TI;
extern MethodInfo m11156_MI;
extern TypeInfo t149_TI;
extern MethodInfo m24338_MI;
extern MethodInfo m11152_MI;
extern TypeInfo t149_TI;
extern TypeInfo t3379_TI;
extern MethodInfo m18229_MI;
static void* t1998_RGCTXData[12] = 
{
	(void*)&t3379_0_0_0,
	(void*)&t149_0_0_0,
	&t1997_TI,
	&t1997_TI,
	&t1998_TI,
	&m11156_MI,
	&t149_TI,
	&m24338_MI,
	&m11152_MI,
	&t149_TI,
	&t3379_TI,
	&m18229_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1998_0_0_0;
extern Il2CppType t1998_1_0_0;
extern TypeInfo t1997_TI;
struct t1998;
extern TypeInfo t1998_TI;
extern Il2CppGenericClass t1998_GC;
extern TypeInfo t824_TI;
TypeInfo t1998_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1998_MIs, NULL, NULL, NULL, &t1997_TI, NULL, &t824_TI, &t1998_TI, NULL, t1998_VT, &EmptyCustomAttributesCache, &t1998_TI, &t1998_0_0_0, &t1998_1_0_0, t1998_IOs, &t1998_GC, NULL, NULL, NULL, t1998_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1998), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1986_TI;
#include "t1986MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.UI.Text>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t1986_m11158_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t1986_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m11158_MI = 
{
	".ctor", (methodPointerType)&m8191_gshared, &t1986_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t1986_m11158_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
extern Il2CppType t149_0_0_0;
static ParameterInfo t1986_m11159_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
};
extern TypeInfo t1986_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11159_MI = 
{
	"Invoke", (methodPointerType)&m8192_gshared, &t1986_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t1986_m11159_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t149_0_0_0;
extern Il2CppType t149_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1986_m11160_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t149_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1986_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11160_MI = 
{
	"BeginInvoke", (methodPointerType)&m8193_gshared, &t1986_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4_t4, t1986_m11160_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t1986_m11161_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t1986_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11161_MI = 
{
	"EndInvoke", (methodPointerType)&m8194_gshared, &t1986_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1986_m11161_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1986_MIs[] =
{
	&m11158_MI,
	&m11159_MI,
	&m11160_MI,
	&m11161_MI,
	NULL
};
extern MethodInfo m1695_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1696_MI;
extern MethodInfo m31_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m1700_MI;
extern MethodInfo m1701_MI;
extern MethodInfo m11159_MI;
extern MethodInfo m11160_MI;
extern MethodInfo m11161_MI;
static MethodInfo* t1986_VT[] =
{
	&m1695_MI,
	&m29_MI,
	&m1696_MI,
	&m31_MI,
	&m1697_MI,
	&m1698_MI,
	&m1697_MI,
	&m1699_MI,
	&m1700_MI,
	&m1701_MI,
	&m11159_MI,
	&m11160_MI,
	&m11161_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t1986_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1986_0_0_0;
extern Il2CppType t1986_1_0_0;
extern TypeInfo t193_TI;
struct t1986;
extern TypeInfo t1986_TI;
extern Il2CppGenericClass t1986_GC;
TypeInfo t1986_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t1986_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t1986_TI, NULL, t1986_VT, &EmptyCustomAttributesCache, &t1986_TI, &t1986_0_0_0, &t1986_1_0_0, t1986_IOs, &t1986_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1986), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1999.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1999_TI;
#include "t1999MD.h"

extern TypeInfo t1999_TI;
extern TypeInfo t1965_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m11166_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18234_MI;
struct t16;
 t1965  m18234 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18234_MI;


extern MethodInfo m11162_MI;
 void m11162 (t1999 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m11163_MI;
 t4 * m11163 (t1999 * __this, MethodInfo* method){
	{
		t1965  L_0 = m11166(__this, &m11166_MI);
		t1965  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1965_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m11164_MI;
 void m11164 (t1999 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m11165_MI;
 bool m11165 (t1999 * __this, MethodInfo* method){
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
		t16 * L_1 = (__this->f0);
		int32_t L_2 = m3710(L_1, &m3710_MI);
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
extern MethodInfo m11166_MI;
 t1965  m11166 (t1999 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1270 * L_1 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6907(L_1, (t8*) &_stringLiteral370, &m6907_MI);
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
		t1270 * L_3 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6907(L_3, (t8*) &_stringLiteral371, &m6907_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t16 * L_4 = (__this->f0);
		t16 * L_5 = (__this->f0);
		int32_t L_6 = m3710(L_5, &m3710_MI);
		int32_t L_7 = (__this->f1);
		t1965  L_8 = m18234(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18234_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern Il2CppType t16_0_0_1;
FieldInfo t1999_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t1999_TI, offsetof(t1999, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1999_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t1999_TI, offsetof(t1999, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1999_FIs[] =
{
	&t1999_f0_FieldInfo,
	&t1999_f1_FieldInfo,
	NULL
};
extern MethodInfo m11163_MI;
static PropertyInfo t1999____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1999_TI, "System.Collections.IEnumerator.Current", &m11163_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11166_MI;
static PropertyInfo t1999____Current_PropertyInfo = 
{
	&t1999_TI, "Current", &m11166_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1999_PIs[] =
{
	&t1999____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1999____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t1999_m11162_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t1999_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11162_MI = 
{
	".ctor", (methodPointerType)&m11162, &t1999_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1999_m11162_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1999_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11163_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11163, &t1999_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1999_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11164_MI = 
{
	"Dispose", (methodPointerType)&m11164, &t1999_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1999_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11165_MI = 
{
	"MoveNext", (methodPointerType)&m11165, &t1999_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1999_TI;
extern Il2CppType t1965_0_0_0;
extern void* RuntimeInvoker_t1965 (MethodInfo* method, void* obj, void** args);
MethodInfo m11166_MI = 
{
	"get_Current", (methodPointerType)&m11166, &t1999_TI, &t1965_0_0_0, RuntimeInvoker_t1965, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1999_MIs[] =
{
	&m11162_MI,
	&m11163_MI,
	&m11164_MI,
	&m11165_MI,
	&m11166_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m11163_MI;
extern MethodInfo m11165_MI;
extern MethodInfo m11164_MI;
extern MethodInfo m11166_MI;
static MethodInfo* t1999_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m11163_MI,
	&m11165_MI,
	&m11164_MI,
	&m11166_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1966_TI;
static TypeInfo* t1999_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t1966_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1966_TI;
static Il2CppInterfaceOffsetPair t1999_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t1966_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1999_0_0_0;
extern Il2CppType t1999_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1999_TI;
extern Il2CppGenericClass t1999_GC;
extern TypeInfo t16_TI;
TypeInfo t1999_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1999_MIs, t1999_PIs, t1999_FIs, NULL, &t101_TI, NULL, &t16_TI, &t1999_TI, t1999_ITIs, t1999_VT, &EmptyCustomAttributesCache, &t1999_TI, &t1999_0_0_0, &t1999_1_0_0, t1999_IOs, &t1999_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1999)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4012_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern MethodInfo m24339_MI;
extern MethodInfo m24340_MI;
static PropertyInfo t4012____Item_PropertyInfo = 
{
	&t4012_TI, "Item", &m24339_MI, &m24340_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4012_PIs[] =
{
	&t4012____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1965_0_0_0;
static ParameterInfo t4012_m24341_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1965_0_0_0},
};
extern TypeInfo t4012_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1965 (MethodInfo* method, void* obj, void** args);
MethodInfo m24341_MI = 
{
	"IndexOf", NULL, &t4012_TI, &t18_0_0_0, RuntimeInvoker_t18_t1965, t4012_m24341_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1965_0_0_0;
static ParameterInfo t4012_m24342_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1965_0_0_0},
};
extern TypeInfo t4012_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t1965 (MethodInfo* method, void* obj, void** args);
MethodInfo m24342_MI = 
{
	"Insert", NULL, &t4012_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t1965, t4012_m24342_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4012_m24343_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4012_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24343_MI = 
{
	"RemoveAt", NULL, &t4012_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4012_m24343_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4012_m24339_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4012_TI;
extern Il2CppType t1965_0_0_0;
extern void* RuntimeInvoker_t1965_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24339_MI = 
{
	"get_Item", NULL, &t4012_TI, &t1965_0_0_0, RuntimeInvoker_t1965_t18, t4012_m24339_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1965_0_0_0;
static ParameterInfo t4012_m24340_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1965_0_0_0},
};
extern TypeInfo t4012_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t1965 (MethodInfo* method, void* obj, void** args);
MethodInfo m24340_MI = 
{
	"set_Item", NULL, &t4012_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t1965, t4012_m24340_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4012_MIs[] =
{
	&m24341_MI,
	&m24342_MI,
	&m24343_MI,
	&m24339_MI,
	&m24340_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4011_TI;
extern TypeInfo t4013_TI;
static TypeInfo* t4012_ITIs[] = 
{
	&t592_TI,
	&t4011_TI,
	&t4013_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4012_0_0_0;
extern Il2CppType t4012_1_0_0;
struct t4012;
extern TypeInfo t4012_TI;
extern Il2CppGenericClass t4012_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4012_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4012_MIs, t4012_PIs, NULL, NULL, NULL, NULL, NULL, &t4012_TI, t4012_ITIs, NULL, &t1401__CustomAttributeCache, &t4012_TI, &t4012_0_0_0, &t4012_1_0_0, NULL, &t4012_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5159_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t142_0_0_0;
static ParameterInfo t5159_m24344_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t5159_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24344_MI = 
{
	"Remove", NULL, &t5159_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t5159_m24344_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5159_MIs[] =
{
	&m24344_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4011_TI;
extern TypeInfo t4013_TI;
static TypeInfo* t5159_ITIs[] = 
{
	&t592_TI,
	&t4011_TI,
	&t4013_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5159_0_0_0;
extern Il2CppType t5159_1_0_0;
struct t5159;
extern TypeInfo t5159_TI;
extern Il2CppGenericClass t5159_GC;
extern CustomAttributesCache t1461__CustomAttributeCache;
TypeInfo t5159_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5159_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5159_TI, t5159_ITIs, NULL, &t1461__CustomAttributeCache, &t5159_TI, &t5159_0_0_0, &t5159_1_0_0, NULL, &t5159_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1961_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.Font>
extern Il2CppType t142_0_0_0;
extern Il2CppType t142_0_0_0;
static ParameterInfo t1961_m24235_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24235_MI = 
{
	"Equals", NULL, &t1961_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t1961_m24235_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
static ParameterInfo t1961_m24234_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24234_MI = 
{
	"GetHashCode", NULL, &t1961_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1961_m24234_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1961_MIs[] =
{
	&m24235_MI,
	&m24234_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1961_0_0_0;
extern Il2CppType t1961_1_0_0;
struct t1961;
extern TypeInfo t1961_TI;
extern Il2CppGenericClass t1961_GC;
TypeInfo t1961_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t1961_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1961_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1961_TI, &t1961_0_0_0, &t1961_1_0_0, NULL, &t1961_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3380_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Font>
extern MethodInfo m24345_MI;
static PropertyInfo t3380____Current_PropertyInfo = 
{
	&t3380_TI, "Current", &m24345_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3380_PIs[] =
{
	&t3380____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3380_TI;
extern Il2CppType t142_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24345_MI = 
{
	"get_Current", NULL, &t3380_TI, &t142_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3380_MIs[] =
{
	&m24345_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3380_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3380_0_0_0;
extern Il2CppType t3380_1_0_0;
struct t3380;
extern TypeInfo t3380_TI;
extern Il2CppGenericClass t3380_GC;
TypeInfo t3380_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3380_MIs, t3380_PIs, NULL, NULL, NULL, NULL, NULL, &t3380_TI, t3380_ITIs, NULL, &EmptyCustomAttributesCache, &t3380_TI, &t3380_0_0_0, &t3380_1_0_0, NULL, &t3380_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2000.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2000_TI;
#include "t2000MD.h"

extern TypeInfo t2000_TI;
extern TypeInfo t142_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m11171_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18245_MI;
struct t16;
#define m18245(__this, p0, method) (t142 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m18245_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Font>
extern Il2CppType t16_0_0_1;
FieldInfo t2000_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2000_TI, offsetof(t2000, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2000_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2000_TI, offsetof(t2000, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2000_FIs[] =
{
	&t2000_f0_FieldInfo,
	&t2000_f1_FieldInfo,
	NULL
};
extern MethodInfo m11168_MI;
static PropertyInfo t2000____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2000_TI, "System.Collections.IEnumerator.Current", &m11168_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11171_MI;
static PropertyInfo t2000____Current_PropertyInfo = 
{
	&t2000_TI, "Current", &m11171_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2000_PIs[] =
{
	&t2000____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2000____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2000_m11167_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2000_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11167_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2000_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2000_m11167_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2000_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11168_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2000_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2000_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11169_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2000_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2000_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11170_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2000_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2000_TI;
extern Il2CppType t142_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11171_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2000_TI, &t142_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2000_MIs[] =
{
	&m11167_MI,
	&m11168_MI,
	&m11169_MI,
	&m11170_MI,
	&m11171_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m11168_MI;
extern MethodInfo m11170_MI;
extern MethodInfo m11169_MI;
extern MethodInfo m11171_MI;
static MethodInfo* t2000_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m11168_MI,
	&m11170_MI,
	&m11169_MI,
	&m11171_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3380_TI;
static TypeInfo* t2000_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3380_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3380_TI;
static Il2CppInterfaceOffsetPair t2000_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3380_TI, 7},
};
extern MethodInfo m11171_MI;
extern TypeInfo t142_TI;
extern MethodInfo m18245_MI;
static void* t2000_RGCTXData[3] = 
{
	&m11171_MI,
	&t142_TI,
	&m18245_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2000_0_0_0;
extern Il2CppType t2000_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2000_TI;
extern Il2CppGenericClass t2000_GC;
extern TypeInfo t16_TI;
TypeInfo t2000_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2000_MIs, t2000_PIs, t2000_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2000_TI, t2000_ITIs, t2000_VT, &EmptyCustomAttributesCache, &t2000_TI, &t2000_0_0_0, &t2000_1_0_0, t2000_IOs, &t2000_GC, NULL, NULL, NULL, t2000_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2000)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4014_TI;

#include "UnityEngine_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Font>
extern MethodInfo m24346_MI;
static PropertyInfo t4014____Count_PropertyInfo = 
{
	&t4014_TI, "Count", &m24346_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24347_MI;
static PropertyInfo t4014____IsReadOnly_PropertyInfo = 
{
	&t4014_TI, "IsReadOnly", &m24347_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4014_PIs[] =
{
	&t4014____Count_PropertyInfo,
	&t4014____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4014_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24346_MI = 
{
	"get_Count", NULL, &t4014_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4014_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24347_MI = 
{
	"get_IsReadOnly", NULL, &t4014_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
static ParameterInfo t4014_m24348_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t4014_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24348_MI = 
{
	"Add", NULL, &t4014_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4014_m24348_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4014_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24349_MI = 
{
	"Clear", NULL, &t4014_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
static ParameterInfo t4014_m24350_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t4014_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24350_MI = 
{
	"Contains", NULL, &t4014_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4014_m24350_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1959_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4014_m24351_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1959_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4014_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24351_MI = 
{
	"CopyTo", NULL, &t4014_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4014_m24351_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
static ParameterInfo t4014_m24352_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t4014_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24352_MI = 
{
	"Remove", NULL, &t4014_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4014_m24352_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4014_MIs[] =
{
	&m24346_MI,
	&m24347_MI,
	&m24348_MI,
	&m24349_MI,
	&m24350_MI,
	&m24351_MI,
	&m24352_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4016_TI;
static TypeInfo* t4014_ITIs[] = 
{
	&t592_TI,
	&t4016_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4014_0_0_0;
extern Il2CppType t4014_1_0_0;
struct t4014;
extern TypeInfo t4014_TI;
extern Il2CppGenericClass t4014_GC;
TypeInfo t4014_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4014_MIs, t4014_PIs, NULL, NULL, NULL, NULL, NULL, &t4014_TI, t4014_ITIs, NULL, &EmptyCustomAttributesCache, &t4014_TI, &t4014_0_0_0, &t4014_1_0_0, NULL, &t4014_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4016_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Font>
extern TypeInfo t4016_TI;
extern Il2CppType t3380_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24353_MI = 
{
	"GetEnumerator", NULL, &t4016_TI, &t3380_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4016_MIs[] =
{
	&m24353_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4016_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4016_0_0_0;
extern Il2CppType t4016_1_0_0;
struct t4016;
extern TypeInfo t4016_TI;
extern Il2CppGenericClass t4016_GC;
TypeInfo t4016_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4016_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4016_TI, t4016_ITIs, NULL, &EmptyCustomAttributesCache, &t4016_TI, &t4016_0_0_0, &t4016_1_0_0, NULL, &t4016_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4015_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Font>
extern MethodInfo m24354_MI;
extern MethodInfo m24355_MI;
static PropertyInfo t4015____Item_PropertyInfo = 
{
	&t4015_TI, "Item", &m24354_MI, &m24355_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4015_PIs[] =
{
	&t4015____Item_PropertyInfo,
	NULL
};
extern Il2CppType t142_0_0_0;
static ParameterInfo t4015_m24356_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t4015_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24356_MI = 
{
	"IndexOf", NULL, &t4015_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4015_m24356_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t142_0_0_0;
static ParameterInfo t4015_m24357_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t4015_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24357_MI = 
{
	"Insert", NULL, &t4015_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4015_m24357_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4015_m24358_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4015_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24358_MI = 
{
	"RemoveAt", NULL, &t4015_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4015_m24358_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4015_m24354_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4015_TI;
extern Il2CppType t142_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24354_MI = 
{
	"get_Item", NULL, &t4015_TI, &t142_0_0_0, RuntimeInvoker_t4_t18, t4015_m24354_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t142_0_0_0;
static ParameterInfo t4015_m24355_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t4015_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24355_MI = 
{
	"set_Item", NULL, &t4015_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4015_m24355_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4015_MIs[] =
{
	&m24356_MI,
	&m24357_MI,
	&m24358_MI,
	&m24354_MI,
	&m24355_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4014_TI;
extern TypeInfo t4016_TI;
static TypeInfo* t4015_ITIs[] = 
{
	&t592_TI,
	&t4014_TI,
	&t4016_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4015_0_0_0;
extern Il2CppType t4015_1_0_0;
struct t4015;
extern TypeInfo t4015_TI;
extern Il2CppGenericClass t4015_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4015_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4015_MIs, t4015_PIs, NULL, NULL, NULL, NULL, NULL, &t4015_TI, t4015_ITIs, NULL, &t1401__CustomAttributeCache, &t4015_TI, &t4015_0_0_0, &t4015_1_0_0, NULL, &t4015_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2002_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern MethodInfo m24359_MI;
static PropertyInfo t2002____Current_PropertyInfo = 
{
	&t2002_TI, "Current", &m24359_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2002_PIs[] =
{
	&t2002____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2002_TI;
extern Il2CppType t342_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24359_MI = 
{
	"get_Current", NULL, &t2002_TI, &t342_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2002_MIs[] =
{
	&m24359_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t2002_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2002_0_0_0;
extern Il2CppType t2002_1_0_0;
struct t2002;
extern TypeInfo t2002_TI;
extern Il2CppGenericClass t2002_GC;
TypeInfo t2002_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2002_MIs, t2002_PIs, NULL, NULL, NULL, NULL, NULL, &t2002_TI, t2002_ITIs, NULL, &EmptyCustomAttributesCache, &t2002_TI, &t2002_0_0_0, &t2002_1_0_0, NULL, &t2002_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2001.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2001_TI;
#include "t2001MD.h"

extern TypeInfo t2001_TI;
extern TypeInfo t342_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m11176_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18256_MI;
struct t16;
#define m18256(__this, p0, method) (t342 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m18256_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t16_0_0_1;
FieldInfo t2001_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2001_TI, offsetof(t2001, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2001_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2001_TI, offsetof(t2001, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2001_FIs[] =
{
	&t2001_f0_FieldInfo,
	&t2001_f1_FieldInfo,
	NULL
};
extern MethodInfo m11173_MI;
static PropertyInfo t2001____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2001_TI, "System.Collections.IEnumerator.Current", &m11173_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11176_MI;
static PropertyInfo t2001____Current_PropertyInfo = 
{
	&t2001_TI, "Current", &m11176_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2001_PIs[] =
{
	&t2001____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2001____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2001_m11172_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2001_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11172_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2001_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2001_m11172_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2001_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11173_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2001_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2001_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11174_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2001_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2001_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11175_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2001_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2001_TI;
extern Il2CppType t342_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11176_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2001_TI, &t342_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2001_MIs[] =
{
	&m11172_MI,
	&m11173_MI,
	&m11174_MI,
	&m11175_MI,
	&m11176_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m11173_MI;
extern MethodInfo m11175_MI;
extern MethodInfo m11174_MI;
extern MethodInfo m11176_MI;
static MethodInfo* t2001_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m11173_MI,
	&m11175_MI,
	&m11174_MI,
	&m11176_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2002_TI;
static TypeInfo* t2001_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t2002_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2002_TI;
static Il2CppInterfaceOffsetPair t2001_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t2002_TI, 7},
};
extern MethodInfo m11176_MI;
extern TypeInfo t342_TI;
extern MethodInfo m18256_MI;
static void* t2001_RGCTXData[3] = 
{
	&m11176_MI,
	&t342_TI,
	&m18256_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2001_0_0_0;
extern Il2CppType t2001_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2001_TI;
extern Il2CppGenericClass t2001_GC;
extern TypeInfo t16_TI;
TypeInfo t2001_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2001_MIs, t2001_PIs, t2001_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2001_TI, t2001_ITIs, t2001_VT, &EmptyCustomAttributesCache, &t2001_TI, &t2001_0_0_0, &t2001_1_0_0, t2001_IOs, &t2001_GC, NULL, NULL, NULL, t2001_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2001)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4017_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern MethodInfo m24360_MI;
static PropertyInfo t4017____Count_PropertyInfo = 
{
	&t4017_TI, "Count", &m24360_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24361_MI;
static PropertyInfo t4017____IsReadOnly_PropertyInfo = 
{
	&t4017_TI, "IsReadOnly", &m24361_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4017_PIs[] =
{
	&t4017____Count_PropertyInfo,
	&t4017____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4017_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24360_MI = 
{
	"get_Count", NULL, &t4017_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4017_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24361_MI = 
{
	"get_IsReadOnly", NULL, &t4017_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t342_0_0_0;
static ParameterInfo t4017_m24362_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t4017_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24362_MI = 
{
	"Add", NULL, &t4017_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4017_m24362_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4017_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24363_MI = 
{
	"Clear", NULL, &t4017_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t342_0_0_0;
static ParameterInfo t4017_m24364_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t4017_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24364_MI = 
{
	"Contains", NULL, &t4017_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4017_m24364_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1960_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t4017_m24365_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1960_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4017_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24365_MI = 
{
	"CopyTo", NULL, &t4017_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t4017_m24365_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t342_0_0_0;
static ParameterInfo t4017_m24366_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t4017_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24366_MI = 
{
	"Remove", NULL, &t4017_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t4017_m24366_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4017_MIs[] =
{
	&m24360_MI,
	&m24361_MI,
	&m24362_MI,
	&m24363_MI,
	&m24364_MI,
	&m24365_MI,
	&m24366_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4019_TI;
static TypeInfo* t4017_ITIs[] = 
{
	&t592_TI,
	&t4019_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4017_0_0_0;
extern Il2CppType t4017_1_0_0;
struct t4017;
extern TypeInfo t4017_TI;
extern Il2CppGenericClass t4017_GC;
TypeInfo t4017_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4017_MIs, t4017_PIs, NULL, NULL, NULL, NULL, NULL, &t4017_TI, t4017_ITIs, NULL, &EmptyCustomAttributesCache, &t4017_TI, &t4017_0_0_0, &t4017_1_0_0, NULL, &t4017_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4019_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern TypeInfo t4019_TI;
extern Il2CppType t2002_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24367_MI = 
{
	"GetEnumerator", NULL, &t4019_TI, &t2002_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4019_MIs[] =
{
	&m24367_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4019_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4019_0_0_0;
extern Il2CppType t4019_1_0_0;
struct t4019;
extern TypeInfo t4019_TI;
extern Il2CppGenericClass t4019_GC;
TypeInfo t4019_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4019_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4019_TI, t4019_ITIs, NULL, &EmptyCustomAttributesCache, &t4019_TI, &t4019_0_0_0, &t4019_1_0_0, NULL, &t4019_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4018_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern MethodInfo m24368_MI;
extern MethodInfo m24369_MI;
static PropertyInfo t4018____Item_PropertyInfo = 
{
	&t4018_TI, "Item", &m24368_MI, &m24369_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4018_PIs[] =
{
	&t4018____Item_PropertyInfo,
	NULL
};
extern Il2CppType t342_0_0_0;
static ParameterInfo t4018_m24370_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t4018_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24370_MI = 
{
	"IndexOf", NULL, &t4018_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t4018_m24370_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t342_0_0_0;
static ParameterInfo t4018_m24371_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t4018_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24371_MI = 
{
	"Insert", NULL, &t4018_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4018_m24371_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4018_m24372_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4018_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24372_MI = 
{
	"RemoveAt", NULL, &t4018_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t4018_m24372_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t4018_m24368_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t4018_TI;
extern Il2CppType t342_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24368_MI = 
{
	"get_Item", NULL, &t4018_TI, &t342_0_0_0, RuntimeInvoker_t4_t18, t4018_m24368_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t342_0_0_0;
static ParameterInfo t4018_m24369_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t4018_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24369_MI = 
{
	"set_Item", NULL, &t4018_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t4018_m24369_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4018_MIs[] =
{
	&m24370_MI,
	&m24371_MI,
	&m24372_MI,
	&m24368_MI,
	&m24369_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t4017_TI;
extern TypeInfo t4019_TI;
static TypeInfo* t4018_ITIs[] = 
{
	&t592_TI,
	&t4017_TI,
	&t4019_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4018_0_0_0;
extern Il2CppType t4018_1_0_0;
struct t4018;
extern TypeInfo t4018_TI;
extern Il2CppGenericClass t4018_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t4018_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4018_MIs, t4018_PIs, NULL, NULL, NULL, NULL, NULL, &t4018_TI, t4018_ITIs, NULL, &t1401__CustomAttributeCache, &t4018_TI, &t4018_0_0_0, &t4018_1_0_0, NULL, &t4018_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1963.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1963_TI;
#include "t1963MD.h"

#include "t148.h"
#include "t2003.h"
#include "t2004.h"
extern TypeInfo t1963_TI;
extern TypeInfo t641_TI;
extern TypeInfo t4_TI;
extern TypeInfo t148_TI;
extern TypeInfo t18_TI;
extern TypeInfo t330_TI;
extern TypeInfo t337_TI;
extern TypeInfo t2003_TI;
extern TypeInfo t1960_TI;
extern TypeInfo t342_TI;
extern TypeInfo t17_TI;
extern TypeInfo t2004_TI;
#include "t148MD.h"
#include "t2004MD.h"
#include "t2003MD.h"
extern MethodInfo m7399_MI;
extern MethodInfo m10888_MI;
extern MethodInfo m24_MI;
extern MethodInfo m2947_MI;
extern MethodInfo m7009_MI;
extern MethodInfo m10910_MI;
extern MethodInfo m11189_MI;
extern MethodInfo m11188_MI;
extern MethodInfo m10896_MI;
extern MethodInfo m10899_MI;
extern MethodInfo m11207_MI;
extern MethodInfo m18267_MI;
extern MethodInfo m18268_MI;
extern MethodInfo m11191_MI;
struct t148;
struct t1968;
#include "t1977.h"
 void m18158_gshared (t1968 * __this, t16 * p0, int32_t p1, t1977 * p2, MethodInfo* method);
#define m18158(__this, p0, p1, p2, method) (void)m18158_gshared((t1968 *)__this, (t16 *)p0, (int32_t)p1, (t1977 *)p2, method)
#define m18267(__this, p0, p1, p2, method) (void)m18158_gshared((t1968 *)__this, (t16 *)p0, (int32_t)p1, (t1977 *)p2, method)
extern MethodInfo m18267_MI;
struct t148;
#include "t826.h"
 void m18268 (t148 * __this, t1960* p0, int32_t p1, t2004 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18268_MI;


extern MethodInfo m11189_MI;
 t2003  m11189 (t1963 * __this, MethodInfo* method){
	{
		t148 * L_0 = (__this->f0);
		t2003  L_1 = {0};
		m11191(&L_1, L_0, &m11191_MI);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t148_0_0_1;
FieldInfo t1963_f0_FieldInfo = 
{
	"dictionary", &t148_0_0_1, &t1963_TI, offsetof(t1963, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1963_FIs[] =
{
	&t1963_f0_FieldInfo,
	NULL
};
extern MethodInfo m11185_MI;
static PropertyInfo t1963____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t1963_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m11185_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11186_MI;
static PropertyInfo t1963____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1963_TI, "System.Collections.ICollection.IsSynchronized", &m11186_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11187_MI;
static PropertyInfo t1963____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1963_TI, "System.Collections.ICollection.SyncRoot", &m11187_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11190_MI;
static PropertyInfo t1963____Count_PropertyInfo = 
{
	&t1963_TI, "Count", &m11190_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1963_PIs[] =
{
	&t1963____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t1963____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1963____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1963____Count_PropertyInfo,
	NULL
};
extern Il2CppType t148_0_0_0;
static ParameterInfo t1963_m11177_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t148_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11177_MI = 
{
	".ctor", (methodPointerType)&m10946_gshared, &t1963_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1963_m11177_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t342_0_0_0;
static ParameterInfo t1963_m11178_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11178_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m10947_gshared, &t1963_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1963_m11178_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11179_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m10948_gshared, &t1963_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t342_0_0_0;
static ParameterInfo t1963_m11180_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11180_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m10949_gshared, &t1963_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1963_m11180_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t342_0_0_0;
static ParameterInfo t1963_m11181_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11181_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m10950_gshared, &t1963_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1963_m11181_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t2002_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11182_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m10951_gshared, &t1963_TI, &t2002_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1963_m11183_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11183_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10952_gshared, &t1963_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t1963_m11183_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11184_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10953_gshared, &t1963_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11185_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m10954_gshared, &t1963_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11186_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10955_gshared, &t1963_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11187_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10956_gshared, &t1963_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1960_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1963_m11188_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1960_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1963_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11188_MI = 
{
	"CopyTo", (methodPointerType)&m10957_gshared, &t1963_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t1963_m11188_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t2003_0_0_0;
extern void* RuntimeInvoker_t2003 (MethodInfo* method, void* obj, void** args);
MethodInfo m11189_MI = 
{
	"GetEnumerator", (methodPointerType)&m11189, &t1963_TI, &t2003_0_0_0, RuntimeInvoker_t2003, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1963_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11190_MI = 
{
	"get_Count", (methodPointerType)&m10959_gshared, &t1963_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1963_MIs[] =
{
	&m11177_MI,
	&m11178_MI,
	&m11179_MI,
	&m11180_MI,
	&m11181_MI,
	&m11182_MI,
	&m11183_MI,
	&m11184_MI,
	&m11185_MI,
	&m11186_MI,
	&m11187_MI,
	&m11188_MI,
	&m11189_MI,
	&m11190_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11184_MI;
extern MethodInfo m11190_MI;
extern MethodInfo m11186_MI;
extern MethodInfo m11187_MI;
extern MethodInfo m11183_MI;
extern MethodInfo m11190_MI;
extern MethodInfo m11185_MI;
extern MethodInfo m11178_MI;
extern MethodInfo m11179_MI;
extern MethodInfo m11180_MI;
extern MethodInfo m11188_MI;
extern MethodInfo m11181_MI;
extern MethodInfo m11182_MI;
static MethodInfo* t1963_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11184_MI,
	&m11190_MI,
	&m11186_MI,
	&m11187_MI,
	&m11183_MI,
	&m11190_MI,
	&m11185_MI,
	&m11178_MI,
	&m11179_MI,
	&m11180_MI,
	&m11188_MI,
	&m11181_MI,
	&m11182_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t4017_TI;
extern TypeInfo t4019_TI;
static TypeInfo* t1963_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t4017_TI,
	&t4019_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t4017_TI;
extern TypeInfo t4019_TI;
static Il2CppInterfaceOffsetPair t1963_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t4017_TI, 9},
	{ &t4019_TI, 16},
};
extern MethodInfo m10910_MI;
extern MethodInfo m11189_MI;
extern TypeInfo t2003_TI;
extern TypeInfo t1960_TI;
extern MethodInfo m11188_MI;
extern MethodInfo m10896_MI;
extern MethodInfo m10899_MI;
extern TypeInfo t2004_TI;
extern MethodInfo m11207_MI;
extern MethodInfo m18267_MI;
extern MethodInfo m18268_MI;
extern MethodInfo m11191_MI;
extern MethodInfo m10888_MI;
static void* t1963_RGCTXData[13] = 
{
	&m10910_MI,
	&m11189_MI,
	&t2003_TI,
	&t1960_TI,
	&m11188_MI,
	&m10896_MI,
	&m10899_MI,
	&t2004_TI,
	&m11207_MI,
	&m18267_MI,
	&m18268_MI,
	&m11191_MI,
	&m10888_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1963_0_0_0;
extern Il2CppType t1963_1_0_0;
extern TypeInfo t4_TI;
struct t1963;
extern TypeInfo t1963_TI;
extern Il2CppGenericClass t1963_GC;
extern TypeInfo t833_TI;
extern CustomAttributesCache t831__CustomAttributeCache;
TypeInfo t1963_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t1963_MIs, t1963_PIs, t1963_FIs, NULL, &t4_TI, NULL, &t833_TI, &t1963_TI, t1963_ITIs, t1963_VT, &t831__CustomAttributeCache, &t1963_TI, &t1963_0_0_0, &t1963_1_0_0, t1963_IOs, &t1963_GC, NULL, NULL, NULL, t1963_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1963), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2003_TI;

#include "t1967.h"
extern TypeInfo t2003_TI;
extern TypeInfo t342_TI;
extern TypeInfo t1967_TI;
extern TypeInfo t17_TI;
extern TypeInfo t19_TI;
#include "t1967MD.h"
extern MethodInfo m11203_MI;
extern MethodInfo m10996_MI;
extern MethodInfo m10926_MI;
extern MethodInfo m11206_MI;
extern MethodInfo m11200_MI;


// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t1967_0_0_1;
FieldInfo t2003_f0_FieldInfo = 
{
	"host_enumerator", &t1967_0_0_1, &t2003_TI, offsetof(t2003, f0) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2003_FIs[] =
{
	&t2003_f0_FieldInfo,
	NULL
};
extern MethodInfo m11192_MI;
static PropertyInfo t2003____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2003_TI, "System.Collections.IEnumerator.Current", &m11192_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11195_MI;
static PropertyInfo t2003____Current_PropertyInfo = 
{
	&t2003_TI, "Current", &m11195_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2003_PIs[] =
{
	&t2003____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2003____Current_PropertyInfo,
	NULL
};
extern Il2CppType t148_0_0_0;
static ParameterInfo t2003_m11191_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t148_0_0_0},
};
extern TypeInfo t2003_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11191_MI = 
{
	".ctor", (methodPointerType)&m10960_gshared, &t2003_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2003_m11191_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2003_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11192_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10961_gshared, &t2003_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2003_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11193_MI = 
{
	"Dispose", (methodPointerType)&m10962_gshared, &t2003_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2003_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11194_MI = 
{
	"MoveNext", (methodPointerType)&m10963_gshared, &t2003_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2003_TI;
extern Il2CppType t342_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11195_MI = 
{
	"get_Current", (methodPointerType)&m10964_gshared, &t2003_TI, &t342_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2003_MIs[] =
{
	&m11191_MI,
	&m11192_MI,
	&m11193_MI,
	&m11194_MI,
	&m11195_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m11192_MI;
extern MethodInfo m11194_MI;
extern MethodInfo m11193_MI;
extern MethodInfo m11195_MI;
static MethodInfo* t2003_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m11192_MI,
	&m11194_MI,
	&m11193_MI,
	&m11195_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2002_TI;
static TypeInfo* t2003_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t2002_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2002_TI;
static Il2CppInterfaceOffsetPair t2003_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t2002_TI, 7},
};
extern MethodInfo m10926_MI;
extern MethodInfo m11203_MI;
extern TypeInfo t342_TI;
extern MethodInfo m11206_MI;
extern MethodInfo m11200_MI;
extern MethodInfo m10996_MI;
static void* t2003_RGCTXData[6] = 
{
	&m10926_MI,
	&m11203_MI,
	&t342_TI,
	&m11206_MI,
	&m11200_MI,
	&m10996_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2003_0_0_0;
extern Il2CppType t2003_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2003_TI;
extern Il2CppGenericClass t2003_GC;
extern TypeInfo t831_TI;
TypeInfo t2003_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2003_MIs, t2003_PIs, t2003_FIs, NULL, &t101_TI, NULL, &t831_TI, &t2003_TI, t2003_ITIs, t2003_VT, &EmptyCustomAttributesCache, &t2003_TI, &t2003_0_0_0, &t2003_1_0_0, t2003_IOs, &t2003_GC, NULL, NULL, NULL, t2003_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2003)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1967_TI;

extern TypeInfo t1967_TI;
extern TypeInfo t1965_TI;
extern TypeInfo t142_TI;
extern TypeInfo t342_TI;
extern TypeInfo t828_TI;
extern TypeInfo t148_TI;
extern TypeInfo t826_TI;
extern TypeInfo t1287_TI;
extern TypeInfo t1270_TI;
#include "t828MD.h"
extern MethodInfo m11205_MI;
extern MethodInfo m10994_MI;
extern MethodInfo m10996_MI;
extern MethodInfo m4352_MI;
extern MethodInfo m11202_MI;
extern MethodInfo m11204_MI;
extern MethodInfo m10993_MI;
extern MethodInfo m7111_MI;
extern MethodInfo m6907_MI;


extern MethodInfo m11201_MI;
 t1965  m11201 (t1967 * __this, MethodInfo* method){
	{
		t1965  L_0 = (__this->f3);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t148_0_0_1;
FieldInfo t1967_f0_FieldInfo = 
{
	"dictionary", &t148_0_0_1, &t1967_TI, offsetof(t1967, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1967_f1_FieldInfo = 
{
	"next", &t18_0_0_1, &t1967_TI, offsetof(t1967, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t1967_f2_FieldInfo = 
{
	"stamp", &t18_0_0_1, &t1967_TI, offsetof(t1967, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t1965_0_0_3;
FieldInfo t1967_f3_FieldInfo = 
{
	"current", &t1965_0_0_3, &t1967_TI, offsetof(t1967, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1967_FIs[] =
{
	&t1967_f0_FieldInfo,
	&t1967_f1_FieldInfo,
	&t1967_f2_FieldInfo,
	&t1967_f3_FieldInfo,
	NULL
};
extern MethodInfo m11197_MI;
static PropertyInfo t1967____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1967_TI, "System.Collections.IEnumerator.Current", &m11197_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11198_MI;
static PropertyInfo t1967____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t1967_TI, "System.Collections.IDictionaryEnumerator.Entry", &m11198_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11199_MI;
static PropertyInfo t1967____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t1967_TI, "System.Collections.IDictionaryEnumerator.Key", &m11199_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11201_MI;
static PropertyInfo t1967____Current_PropertyInfo = 
{
	&t1967_TI, "Current", &m11201_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11202_MI;
static PropertyInfo t1967____CurrentKey_PropertyInfo = 
{
	&t1967_TI, "CurrentKey", &m11202_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11203_MI;
static PropertyInfo t1967____CurrentValue_PropertyInfo = 
{
	&t1967_TI, "CurrentValue", &m11203_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1967_PIs[] =
{
	&t1967____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1967____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t1967____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t1967____Current_PropertyInfo,
	&t1967____CurrentKey_PropertyInfo,
	&t1967____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t148_0_0_0;
static ParameterInfo t1967_m11196_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t148_0_0_0},
};
extern TypeInfo t1967_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11196_MI = 
{
	".ctor", (methodPointerType)&m10965_gshared, &t1967_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t1967_m11196_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11197_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10966_gshared, &t1967_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t828_0_0_0;
extern void* RuntimeInvoker_t828 (MethodInfo* method, void* obj, void** args);
MethodInfo m11198_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m10967_gshared, &t1967_TI, &t828_0_0_0, RuntimeInvoker_t828, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11199_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m10968_gshared, &t1967_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11200_MI = 
{
	"MoveNext", (methodPointerType)&m10969_gshared, &t1967_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t1965_0_0_0;
extern void* RuntimeInvoker_t1965 (MethodInfo* method, void* obj, void** args);
MethodInfo m11201_MI = 
{
	"get_Current", (methodPointerType)&m11201, &t1967_TI, &t1965_0_0_0, RuntimeInvoker_t1965, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t142_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11202_MI = 
{
	"get_CurrentKey", (methodPointerType)&m10971_gshared, &t1967_TI, &t142_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t342_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11203_MI = 
{
	"get_CurrentValue", (methodPointerType)&m10972_gshared, &t1967_TI, &t342_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11204_MI = 
{
	"VerifyState", (methodPointerType)&m10973_gshared, &t1967_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11205_MI = 
{
	"VerifyCurrent", (methodPointerType)&m10974_gshared, &t1967_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11206_MI = 
{
	"Dispose", (methodPointerType)&m10975_gshared, &t1967_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1967_MIs[] =
{
	&m11196_MI,
	&m11197_MI,
	&m11198_MI,
	&m11199_MI,
	&m11200_MI,
	&m11201_MI,
	&m11202_MI,
	&m11203_MI,
	&m11204_MI,
	&m11205_MI,
	&m11206_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m11197_MI;
extern MethodInfo m11200_MI;
extern MethodInfo m11206_MI;
extern MethodInfo m11201_MI;
extern MethodInfo m11198_MI;
extern MethodInfo m11199_MI;
static MethodInfo* t1967_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m11197_MI,
	&m11200_MI,
	&m11206_MI,
	&m11201_MI,
	&m11198_MI,
	&m11199_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1966_TI;
extern TypeInfo t834_TI;
static TypeInfo* t1967_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t1966_TI,
	&t834_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1966_TI;
extern TypeInfo t834_TI;
static Il2CppInterfaceOffsetPair t1967_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t1966_TI, 7},
	{ &t834_TI, 8},
};
extern MethodInfo m11205_MI;
extern TypeInfo t1965_TI;
extern MethodInfo m10994_MI;
extern TypeInfo t142_TI;
extern MethodInfo m10996_MI;
extern TypeInfo t342_TI;
extern MethodInfo m11202_MI;
extern MethodInfo m11204_MI;
extern MethodInfo m10993_MI;
static void* t1967_RGCTXData[9] = 
{
	&m11205_MI,
	&t1965_TI,
	&m10994_MI,
	&t142_TI,
	&m10996_MI,
	&t342_TI,
	&m11202_MI,
	&m11204_MI,
	&m10993_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1967_0_0_0;
extern Il2CppType t1967_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1967_TI;
extern Il2CppGenericClass t1967_GC;
extern TypeInfo t833_TI;
TypeInfo t1967_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1967_MIs, t1967_PIs, t1967_FIs, NULL, &t101_TI, NULL, &t833_TI, &t1967_TI, t1967_ITIs, t1967_VT, &EmptyCustomAttributesCache, &t1967_TI, &t1967_0_0_0, &t1967_1_0_0, t1967_IOs, &t1967_GC, NULL, NULL, NULL, t1967_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1967)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2004_TI;



// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2004_m11207_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2004_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m11207_MI = 
{
	".ctor", (methodPointerType)&m10976_gshared, &t2004_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2004_m11207_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
extern Il2CppType t342_0_0_0;
static ParameterInfo t2004_m11208_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t2004_TI;
extern Il2CppType t342_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11208_MI = 
{
	"Invoke", (methodPointerType)&m10977_gshared, &t2004_TI, &t342_0_0_0, RuntimeInvoker_t4_t4_t4, t2004_m11208_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
extern Il2CppType t342_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2004_m11209_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2004_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11209_MI = 
{
	"BeginInvoke", (methodPointerType)&m10978_gshared, &t2004_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4_t4, t2004_m11209_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2004_m11210_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2004_TI;
extern Il2CppType t342_0_0_0;
extern void* RuntimeInvoker_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11210_MI = 
{
	"EndInvoke", (methodPointerType)&m10979_gshared, &t2004_TI, &t342_0_0_0, RuntimeInvoker_t4_t4, t2004_m11210_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2004_MIs[] =
{
	&m11207_MI,
	&m11208_MI,
	&m11209_MI,
	&m11210_MI,
	NULL
};
extern MethodInfo m1695_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1696_MI;
extern MethodInfo m31_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m1700_MI;
extern MethodInfo m1701_MI;
extern MethodInfo m11208_MI;
extern MethodInfo m11209_MI;
extern MethodInfo m11210_MI;
static MethodInfo* t2004_VT[] =
{
	&m1695_MI,
	&m29_MI,
	&m1696_MI,
	&m31_MI,
	&m1697_MI,
	&m1698_MI,
	&m1697_MI,
	&m1699_MI,
	&m1700_MI,
	&m1701_MI,
	&m11208_MI,
	&m11209_MI,
	&m11210_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2004_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2004_0_0_0;
extern Il2CppType t2004_1_0_0;
extern TypeInfo t193_TI;
struct t2004;
extern TypeInfo t2004_TI;
extern Il2CppGenericClass t2004_GC;
extern TypeInfo t833_TI;
TypeInfo t2004_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2004_MIs, NULL, NULL, NULL, &t193_TI, NULL, &t833_TI, &t2004_TI, NULL, t2004_VT, &EmptyCustomAttributesCache, &t2004_TI, &t2004_0_0_0, &t2004_1_0_0, t2004_IOs, &t2004_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2004), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1962.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1962_TI;
#include "t1962MD.h"



extern MethodInfo m11211_MI;
 void m11211 (t1962 * __this, t4 * p0, t56 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11212_MI;
 t828  m11212 (t1962 * __this, t142 * p0, t342 * p1, MethodInfo* method){
	typedef  t828  (*FunctionPointerType) (t4 * __this, t142 * p0, t342 * p1, MethodInfo* method);
	if (__this->f9)
		m11212((t1962 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m11213_MI;
 t4 * m11213 (t1962 * __this, t142 * p0, t342 * p1, t55 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11214_MI;
 t828  m11214 (t1962 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t828 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t1962_m11211_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t1962_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m11211_MI = 
{
	".ctor", (methodPointerType)&m11211, &t1962_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t1962_m11211_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
extern Il2CppType t342_0_0_0;
static ParameterInfo t1962_m11212_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t1962_TI;
extern Il2CppType t828_0_0_0;
extern void* RuntimeInvoker_t828_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11212_MI = 
{
	"Invoke", (methodPointerType)&m11212, &t1962_TI, &t828_0_0_0, RuntimeInvoker_t828_t4_t4, t1962_m11212_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
extern Il2CppType t342_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1962_m11213_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1962_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11213_MI = 
{
	"BeginInvoke", (methodPointerType)&m11213, &t1962_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4_t4, t1962_m11213_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t1962_m11214_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t1962_TI;
extern Il2CppType t828_0_0_0;
extern void* RuntimeInvoker_t828_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11214_MI = 
{
	"EndInvoke", (methodPointerType)&m11214, &t1962_TI, &t828_0_0_0, RuntimeInvoker_t828_t4, t1962_m11214_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1962_MIs[] =
{
	&m11211_MI,
	&m11212_MI,
	&m11213_MI,
	&m11214_MI,
	NULL
};
extern MethodInfo m1695_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1696_MI;
extern MethodInfo m31_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m1700_MI;
extern MethodInfo m1701_MI;
extern MethodInfo m11212_MI;
extern MethodInfo m11213_MI;
extern MethodInfo m11214_MI;
static MethodInfo* t1962_VT[] =
{
	&m1695_MI,
	&m29_MI,
	&m1696_MI,
	&m31_MI,
	&m1697_MI,
	&m1698_MI,
	&m1697_MI,
	&m1699_MI,
	&m1700_MI,
	&m1701_MI,
	&m11212_MI,
	&m11213_MI,
	&m11214_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t1962_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1962_0_0_0;
extern Il2CppType t1962_1_0_0;
extern TypeInfo t193_TI;
struct t1962;
extern TypeInfo t1962_TI;
extern Il2CppGenericClass t1962_GC;
extern TypeInfo t833_TI;
TypeInfo t1962_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1962_MIs, NULL, NULL, NULL, &t193_TI, NULL, &t833_TI, &t1962_TI, NULL, t1962_VT, &EmptyCustomAttributesCache, &t1962_TI, &t1962_0_0_0, &t1962_1_0_0, t1962_IOs, &t1962_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1962), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2005.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2005_TI;
#include "t2005MD.h"



extern MethodInfo m11215_MI;
 void m11215 (t2005 * __this, t4 * p0, t56 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11216_MI;
 t1965  m11216 (t2005 * __this, t142 * p0, t342 * p1, MethodInfo* method){
	typedef  t1965  (*FunctionPointerType) (t4 * __this, t142 * p0, t342 * p1, MethodInfo* method);
	if (__this->f9)
		m11216((t2005 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m11217_MI;
 t4 * m11217 (t2005 * __this, t142 * p0, t342 * p1, t55 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11218_MI;
 t1965  m11218 (t2005 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1965 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2005_m11215_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2005_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m11215_MI = 
{
	".ctor", (methodPointerType)&m11215, &t2005_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2005_m11215_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
extern Il2CppType t342_0_0_0;
static ParameterInfo t2005_m11216_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t2005_TI;
extern Il2CppType t1965_0_0_0;
extern void* RuntimeInvoker_t1965_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11216_MI = 
{
	"Invoke", (methodPointerType)&m11216, &t2005_TI, &t1965_0_0_0, RuntimeInvoker_t1965_t4_t4, t2005_m11216_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
extern Il2CppType t342_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2005_m11217_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2005_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11217_MI = 
{
	"BeginInvoke", (methodPointerType)&m11217, &t2005_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4_t4, t2005_m11217_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2005_m11218_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2005_TI;
extern Il2CppType t1965_0_0_0;
extern void* RuntimeInvoker_t1965_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11218_MI = 
{
	"EndInvoke", (methodPointerType)&m11218, &t2005_TI, &t1965_0_0_0, RuntimeInvoker_t1965_t4, t2005_m11218_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2005_MIs[] =
{
	&m11215_MI,
	&m11216_MI,
	&m11217_MI,
	&m11218_MI,
	NULL
};
extern MethodInfo m1695_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1696_MI;
extern MethodInfo m31_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m1700_MI;
extern MethodInfo m1701_MI;
extern MethodInfo m11216_MI;
extern MethodInfo m11217_MI;
extern MethodInfo m11218_MI;
static MethodInfo* t2005_VT[] =
{
	&m1695_MI,
	&m29_MI,
	&m1696_MI,
	&m31_MI,
	&m1697_MI,
	&m1698_MI,
	&m1697_MI,
	&m1699_MI,
	&m1700_MI,
	&m1701_MI,
	&m11216_MI,
	&m11217_MI,
	&m11218_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2005_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2005_0_0_0;
extern Il2CppType t2005_1_0_0;
extern TypeInfo t193_TI;
struct t2005;
extern TypeInfo t2005_TI;
extern Il2CppGenericClass t2005_GC;
extern TypeInfo t833_TI;
TypeInfo t2005_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2005_MIs, NULL, NULL, NULL, &t193_TI, NULL, &t833_TI, &t2005_TI, NULL, t2005_VT, &EmptyCustomAttributesCache, &t2005_TI, &t2005_0_0_0, &t2005_1_0_0, t2005_IOs, &t2005_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2005), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2006.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2006_TI;
#include "t2006MD.h"

extern TypeInfo t2006_TI;
extern TypeInfo t1967_TI;
extern TypeInfo t834_TI;
extern TypeInfo t828_TI;
extern TypeInfo t1965_TI;
extern TypeInfo t142_TI;
extern TypeInfo t19_TI;
extern MethodInfo m7709_MI;
extern MethodInfo m11201_MI;
extern MethodInfo m10994_MI;
extern MethodInfo m11221_MI;
extern MethodInfo m24_MI;
extern MethodInfo m10926_MI;
extern MethodInfo m11200_MI;


// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t1967_0_0_1;
FieldInfo t2006_f0_FieldInfo = 
{
	"host_enumerator", &t1967_0_0_1, &t2006_TI, offsetof(t2006, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2006_FIs[] =
{
	&t2006_f0_FieldInfo,
	NULL
};
extern MethodInfo m11221_MI;
static PropertyInfo t2006____Entry_PropertyInfo = 
{
	&t2006_TI, "Entry", &m11221_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11222_MI;
static PropertyInfo t2006____Key_PropertyInfo = 
{
	&t2006_TI, "Key", &m11222_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11223_MI;
static PropertyInfo t2006____Current_PropertyInfo = 
{
	&t2006_TI, "Current", &m11223_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2006_PIs[] =
{
	&t2006____Entry_PropertyInfo,
	&t2006____Key_PropertyInfo,
	&t2006____Current_PropertyInfo,
	NULL
};
extern Il2CppType t148_0_0_0;
static ParameterInfo t2006_m11219_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t148_0_0_0},
};
extern TypeInfo t2006_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11219_MI = 
{
	".ctor", (methodPointerType)&m10988_gshared, &t2006_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2006_m11219_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2006_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11220_MI = 
{
	"MoveNext", (methodPointerType)&m10989_gshared, &t2006_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2006_TI;
extern Il2CppType t828_0_0_0;
extern void* RuntimeInvoker_t828 (MethodInfo* method, void* obj, void** args);
MethodInfo m11221_MI = 
{
	"get_Entry", (methodPointerType)&m10990_gshared, &t2006_TI, &t828_0_0_0, RuntimeInvoker_t828, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2006_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11222_MI = 
{
	"get_Key", (methodPointerType)&m10991_gshared, &t2006_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2006_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11223_MI = 
{
	"get_Current", (methodPointerType)&m10992_gshared, &t2006_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2006_MIs[] =
{
	&m11219_MI,
	&m11220_MI,
	&m11221_MI,
	&m11222_MI,
	&m11223_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11223_MI;
extern MethodInfo m11220_MI;
extern MethodInfo m11221_MI;
extern MethodInfo m11222_MI;
static MethodInfo* t2006_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11223_MI,
	&m11220_MI,
	&m11221_MI,
	&m11222_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t834_TI;
static TypeInfo* t2006_ITIs[] = 
{
	&t27_TI,
	&t834_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t834_TI;
static Il2CppInterfaceOffsetPair t2006_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t834_TI, 6},
};
extern MethodInfo m10926_MI;
extern MethodInfo m11200_MI;
extern TypeInfo t1967_TI;
extern MethodInfo m11201_MI;
extern MethodInfo m10994_MI;
extern TypeInfo t142_TI;
extern MethodInfo m11221_MI;
static void* t2006_RGCTXData[7] = 
{
	&m10926_MI,
	&m11200_MI,
	&t1967_TI,
	&m11201_MI,
	&m10994_MI,
	&t142_TI,
	&m11221_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2006_0_0_0;
extern Il2CppType t2006_1_0_0;
extern TypeInfo t4_TI;
struct t2006;
extern TypeInfo t2006_TI;
extern Il2CppGenericClass t2006_GC;
extern TypeInfo t833_TI;
TypeInfo t2006_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t2006_MIs, t2006_PIs, t2006_FIs, NULL, &t4_TI, NULL, &t833_TI, &t2006_TI, t2006_ITIs, t2006_VT, &EmptyCustomAttributesCache, &t2006_TI, &t2006_0_0_0, &t2006_1_0_0, t2006_IOs, &t2006_GC, NULL, NULL, NULL, t2006_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2006), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#include "t2007.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2007_TI;
#include "t2007MD.h"

#include "t2008.h"
extern TypeInfo t2007_TI;
extern TypeInfo t5163_TI;
extern TypeInfo t294_TI;
extern TypeInfo t142_TI;
extern TypeInfo t19_TI;
extern TypeInfo t837_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2008_TI;
extern TypeInfo t18_TI;
#include "t2008MD.h"
extern Il2CppType t5163_0_0_0;
extern Il2CppType t142_0_0_0;
extern Il2CppType t837_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m11229_MI;
extern MethodInfo m24373_MI;
extern MethodInfo m24374_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.Font>
extern Il2CppType t2007_0_0_49;
FieldInfo t2007_f0_FieldInfo = 
{
	"_default", &t2007_0_0_49, &t2007_TI, offsetof(t2007_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2007_FIs[] =
{
	&t2007_f0_FieldInfo,
	NULL
};
extern MethodInfo m11228_MI;
static PropertyInfo t2007____Default_PropertyInfo = 
{
	&t2007_TI, "Default", &m11228_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2007_PIs[] =
{
	&t2007____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2007_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11224_MI = 
{
	".ctor", (methodPointerType)&m8078_gshared, &t2007_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2007_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11225_MI = 
{
	".cctor", (methodPointerType)&m8079_gshared, &t2007_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2007_m11226_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2007_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11226_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8080_gshared, &t2007_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2007_m11226_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2007_m11227_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2007_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11227_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8081_gshared, &t2007_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2007_m11227_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
static ParameterInfo t2007_m24373_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t2007_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24373_MI = 
{
	"GetHashCode", NULL, &t2007_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2007_m24373_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
extern Il2CppType t142_0_0_0;
static ParameterInfo t2007_m24374_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t2007_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24374_MI = 
{
	"Equals", NULL, &t2007_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2007_m24374_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2007_TI;
extern Il2CppType t2007_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11228_MI = 
{
	"get_Default", (methodPointerType)&m8082_gshared, &t2007_TI, &t2007_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2007_MIs[] =
{
	&m11224_MI,
	&m11225_MI,
	&m11226_MI,
	&m11227_MI,
	&m24373_MI,
	&m24374_MI,
	&m11228_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m24374_MI;
extern MethodInfo m24373_MI;
extern MethodInfo m11227_MI;
extern MethodInfo m11226_MI;
static MethodInfo* t2007_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m24374_MI,
	&m24373_MI,
	&m11227_MI,
	&m11226_MI,
	NULL,
	NULL,
};
extern TypeInfo t1961_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2007_ITIs[] = 
{
	&t1961_TI,
	&t860_TI,
};
extern TypeInfo t1961_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2007_IOs[] = 
{
	{ &t1961_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppType t5163_0_0_0;
extern Il2CppType t142_0_0_0;
extern TypeInfo t2007_TI;
extern TypeInfo t2007_TI;
extern TypeInfo t2008_TI;
extern MethodInfo m11229_MI;
extern TypeInfo t142_TI;
extern MethodInfo m24373_MI;
extern MethodInfo m24374_MI;
static void* t2007_RGCTXData[9] = 
{
	(void*)&t5163_0_0_0,
	(void*)&t142_0_0_0,
	&t2007_TI,
	&t2007_TI,
	&t2008_TI,
	&m11229_MI,
	&t142_TI,
	&m24373_MI,
	&m24374_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2007_0_0_0;
extern Il2CppType t2007_1_0_0;
extern TypeInfo t4_TI;
struct t2007;
extern TypeInfo t2007_TI;
extern Il2CppGenericClass t2007_GC;
TypeInfo t2007_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2007_MIs, t2007_PIs, t2007_FIs, NULL, &t4_TI, NULL, NULL, &t2007_TI, t2007_ITIs, t2007_VT, &EmptyCustomAttributesCache, &t2007_TI, &t2007_0_0_0, &t2007_1_0_0, t2007_IOs, &t2007_GC, NULL, NULL, NULL, t2007_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2007), 0, -1, sizeof(t2007_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5163_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.Font>
extern Il2CppType t142_0_0_0;
static ParameterInfo t5163_m24375_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t5163_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24375_MI = 
{
	"Equals", NULL, &t5163_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t5163_m24375_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5163_MIs[] =
{
	&m24375_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5163_0_0_0;
extern Il2CppType t5163_1_0_0;
struct t5163;
extern TypeInfo t5163_TI;
extern Il2CppGenericClass t5163_GC;
TypeInfo t5163_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5163_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5163_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5163_TI, &t5163_0_0_0, &t5163_1_0_0, NULL, &t5163_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2008_TI;

extern TypeInfo t142_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
extern TypeInfo t19_TI;
extern MethodInfo m11224_MI;
extern MethodInfo m30_MI;
extern MethodInfo m28_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Font>
extern TypeInfo t2008_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11229_MI = 
{
	".ctor", (methodPointerType)&m8113_gshared, &t2008_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
static ParameterInfo t2008_m11230_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t2008_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11230_MI = 
{
	"GetHashCode", (methodPointerType)&m8114_gshared, &t2008_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2008_m11230_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
extern Il2CppType t142_0_0_0;
static ParameterInfo t2008_m11231_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t2008_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11231_MI = 
{
	"Equals", (methodPointerType)&m8115_gshared, &t2008_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2008_m11231_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2008_MIs[] =
{
	&m11229_MI,
	&m11230_MI,
	&m11231_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11231_MI;
extern MethodInfo m11230_MI;
extern MethodInfo m11227_MI;
extern MethodInfo m11226_MI;
extern MethodInfo m11230_MI;
extern MethodInfo m11231_MI;
static MethodInfo* t2008_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11231_MI,
	&m11230_MI,
	&m11227_MI,
	&m11226_MI,
	&m11230_MI,
	&m11231_MI,
};
extern TypeInfo t1961_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2008_IOs[] = 
{
	{ &t1961_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppType t5163_0_0_0;
extern Il2CppType t142_0_0_0;
extern TypeInfo t2007_TI;
extern TypeInfo t2007_TI;
extern TypeInfo t2008_TI;
extern MethodInfo m11229_MI;
extern TypeInfo t142_TI;
extern MethodInfo m24373_MI;
extern MethodInfo m24374_MI;
extern MethodInfo m11224_MI;
extern TypeInfo t142_TI;
static void* t2008_RGCTXData[11] = 
{
	(void*)&t5163_0_0_0,
	(void*)&t142_0_0_0,
	&t2007_TI,
	&t2007_TI,
	&t2008_TI,
	&m11229_MI,
	&t142_TI,
	&m24373_MI,
	&m24374_MI,
	&m11224_MI,
	&t142_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2008_0_0_0;
extern Il2CppType t2008_1_0_0;
extern TypeInfo t2007_TI;
struct t2008;
extern TypeInfo t2008_TI;
extern Il2CppGenericClass t2008_GC;
extern TypeInfo t836_TI;
TypeInfo t2008_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2008_MIs, NULL, NULL, NULL, &t2007_TI, NULL, &t836_TI, &t2008_TI, NULL, t2008_VT, &EmptyCustomAttributesCache, &t2008_TI, &t2008_0_0_0, &t2008_1_0_0, t2008_IOs, &t2008_GC, NULL, NULL, NULL, t2008_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2008), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5157_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t342_0_0_0;
extern Il2CppType t342_0_0_0;
static ParameterInfo t5157_m24236_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t5157_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24236_MI = 
{
	"Equals", NULL, &t5157_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t5157_m24236_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t342_0_0_0;
static ParameterInfo t5157_m24376_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t5157_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24376_MI = 
{
	"GetHashCode", NULL, &t5157_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t5157_m24376_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5157_MIs[] =
{
	&m24236_MI,
	&m24376_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5157_0_0_0;
extern Il2CppType t5157_1_0_0;
struct t5157;
extern TypeInfo t5157_TI;
extern Il2CppGenericClass t5157_GC;
TypeInfo t5157_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5157_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5157_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5157_TI, &t5157_0_0_0, &t5157_1_0_0, NULL, &t5157_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#include "t2009.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2009_TI;
#include "t2009MD.h"

#include "t2010.h"
extern TypeInfo t2009_TI;
extern TypeInfo t5164_TI;
extern TypeInfo t294_TI;
extern TypeInfo t342_TI;
extern TypeInfo t19_TI;
extern TypeInfo t837_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2010_TI;
extern TypeInfo t18_TI;
#include "t2010MD.h"
extern Il2CppType t5164_0_0_0;
extern Il2CppType t342_0_0_0;
extern Il2CppType t837_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m11237_MI;
extern MethodInfo m24377_MI;
extern MethodInfo m24237_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t2009_0_0_49;
FieldInfo t2009_f0_FieldInfo = 
{
	"_default", &t2009_0_0_49, &t2009_TI, offsetof(t2009_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2009_FIs[] =
{
	&t2009_f0_FieldInfo,
	NULL
};
extern MethodInfo m11236_MI;
static PropertyInfo t2009____Default_PropertyInfo = 
{
	&t2009_TI, "Default", &m11236_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2009_PIs[] =
{
	&t2009____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2009_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11232_MI = 
{
	".ctor", (methodPointerType)&m8078_gshared, &t2009_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2009_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11233_MI = 
{
	".cctor", (methodPointerType)&m8079_gshared, &t2009_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2009_m11234_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2009_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11234_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8080_gshared, &t2009_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2009_m11234_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2009_m11235_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2009_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11235_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8081_gshared, &t2009_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2009_m11235_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t342_0_0_0;
static ParameterInfo t2009_m24377_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t2009_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24377_MI = 
{
	"GetHashCode", NULL, &t2009_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2009_m24377_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t342_0_0_0;
extern Il2CppType t342_0_0_0;
static ParameterInfo t2009_m24237_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t2009_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24237_MI = 
{
	"Equals", NULL, &t2009_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2009_m24237_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2009_TI;
extern Il2CppType t2009_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11236_MI = 
{
	"get_Default", (methodPointerType)&m8082_gshared, &t2009_TI, &t2009_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2009_MIs[] =
{
	&m11232_MI,
	&m11233_MI,
	&m11234_MI,
	&m11235_MI,
	&m24377_MI,
	&m24237_MI,
	&m11236_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m24237_MI;
extern MethodInfo m24377_MI;
extern MethodInfo m11235_MI;
extern MethodInfo m11234_MI;
static MethodInfo* t2009_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m24237_MI,
	&m24377_MI,
	&m11235_MI,
	&m11234_MI,
	NULL,
	NULL,
};
extern TypeInfo t5157_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2009_ITIs[] = 
{
	&t5157_TI,
	&t860_TI,
};
extern TypeInfo t5157_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2009_IOs[] = 
{
	{ &t5157_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppType t5164_0_0_0;
extern Il2CppType t342_0_0_0;
extern TypeInfo t2009_TI;
extern TypeInfo t2009_TI;
extern TypeInfo t2010_TI;
extern MethodInfo m11237_MI;
extern TypeInfo t342_TI;
extern MethodInfo m24377_MI;
extern MethodInfo m24237_MI;
static void* t2009_RGCTXData[9] = 
{
	(void*)&t5164_0_0_0,
	(void*)&t342_0_0_0,
	&t2009_TI,
	&t2009_TI,
	&t2010_TI,
	&m11237_MI,
	&t342_TI,
	&m24377_MI,
	&m24237_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2009_0_0_0;
extern Il2CppType t2009_1_0_0;
extern TypeInfo t4_TI;
struct t2009;
extern TypeInfo t2009_TI;
extern Il2CppGenericClass t2009_GC;
TypeInfo t2009_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2009_MIs, t2009_PIs, t2009_FIs, NULL, &t4_TI, NULL, NULL, &t2009_TI, t2009_ITIs, t2009_VT, &EmptyCustomAttributesCache, &t2009_TI, &t2009_0_0_0, &t2009_1_0_0, t2009_IOs, &t2009_GC, NULL, NULL, NULL, t2009_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2009), 0, -1, sizeof(t2009_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5164_TI;



// Metadata Definition System.IEquatable`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t342_0_0_0;
static ParameterInfo t5164_m24378_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t5164_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24378_MI = 
{
	"Equals", NULL, &t5164_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t5164_m24378_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5164_MIs[] =
{
	&m24378_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5164_0_0_0;
extern Il2CppType t5164_1_0_0;
struct t5164;
extern TypeInfo t5164_TI;
extern Il2CppGenericClass t5164_GC;
TypeInfo t5164_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5164_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5164_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5164_TI, &t5164_0_0_0, &t5164_1_0_0, NULL, &t5164_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2010_TI;

extern TypeInfo t342_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
extern TypeInfo t19_TI;
extern MethodInfo m11232_MI;
extern MethodInfo m30_MI;
extern MethodInfo m28_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern TypeInfo t2010_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11237_MI = 
{
	".ctor", (methodPointerType)&m8113_gshared, &t2010_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t342_0_0_0;
static ParameterInfo t2010_m11238_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t2010_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11238_MI = 
{
	"GetHashCode", (methodPointerType)&m8114_gshared, &t2010_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2010_m11238_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t342_0_0_0;
extern Il2CppType t342_0_0_0;
static ParameterInfo t2010_m11239_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t342_0_0_0},
};
extern TypeInfo t2010_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11239_MI = 
{
	"Equals", (methodPointerType)&m8115_gshared, &t2010_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2010_m11239_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2010_MIs[] =
{
	&m11237_MI,
	&m11238_MI,
	&m11239_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11239_MI;
extern MethodInfo m11238_MI;
extern MethodInfo m11235_MI;
extern MethodInfo m11234_MI;
extern MethodInfo m11238_MI;
extern MethodInfo m11239_MI;
static MethodInfo* t2010_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11239_MI,
	&m11238_MI,
	&m11235_MI,
	&m11234_MI,
	&m11238_MI,
	&m11239_MI,
};
extern TypeInfo t5157_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2010_IOs[] = 
{
	{ &t5157_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppType t5164_0_0_0;
extern Il2CppType t342_0_0_0;
extern TypeInfo t2009_TI;
extern TypeInfo t2009_TI;
extern TypeInfo t2010_TI;
extern MethodInfo m11237_MI;
extern TypeInfo t342_TI;
extern MethodInfo m24377_MI;
extern MethodInfo m24237_MI;
extern MethodInfo m11232_MI;
extern TypeInfo t342_TI;
static void* t2010_RGCTXData[11] = 
{
	(void*)&t5164_0_0_0,
	(void*)&t342_0_0_0,
	&t2009_TI,
	&t2009_TI,
	&t2010_TI,
	&m11237_MI,
	&t342_TI,
	&m24377_MI,
	&m24237_MI,
	&m11232_MI,
	&t342_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2010_0_0_0;
extern Il2CppType t2010_1_0_0;
extern TypeInfo t2009_TI;
struct t2010;
extern TypeInfo t2010_TI;
extern Il2CppGenericClass t2010_GC;
extern TypeInfo t836_TI;
TypeInfo t2010_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2010_MIs, NULL, NULL, NULL, &t2009_TI, NULL, &t836_TI, &t2010_TI, NULL, t2010_VT, &EmptyCustomAttributesCache, &t2010_TI, &t2010_0_0_0, &t2010_1_0_0, t2010_IOs, &t2010_GC, NULL, NULL, NULL, t2010_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2010), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t343.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t343_TI;
#include "t343MD.h"



// Metadata Definition System.Action`1<UnityEngine.Font>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t343_m1539_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t343_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m1539_MI = 
{
	".ctor", (methodPointerType)&m11240_gshared, &t343_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t343_m1539_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
static ParameterInfo t343_m2899_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern TypeInfo t343_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m2899_MI = 
{
	"Invoke", (methodPointerType)&m11241_gshared, &t343_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t343_m2899_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t343_m11242_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t343_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11242_MI = 
{
	"BeginInvoke", (methodPointerType)&m11243_gshared, &t343_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t343_m11242_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t343_m11244_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t343_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11244_MI = 
{
	"EndInvoke", (methodPointerType)&m11245_gshared, &t343_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t343_m11244_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t343_MIs[] =
{
	&m1539_MI,
	&m2899_MI,
	&m11242_MI,
	&m11244_MI,
	NULL
};
extern MethodInfo m1695_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1696_MI;
extern MethodInfo m31_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m1700_MI;
extern MethodInfo m1701_MI;
extern MethodInfo m2899_MI;
extern MethodInfo m11242_MI;
extern MethodInfo m11244_MI;
static MethodInfo* t343_VT[] =
{
	&m1695_MI,
	&m29_MI,
	&m1696_MI,
	&m31_MI,
	&m1697_MI,
	&m1698_MI,
	&m1697_MI,
	&m1699_MI,
	&m1700_MI,
	&m1701_MI,
	&m2899_MI,
	&m11242_MI,
	&m11244_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t343_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t343_0_0_0;
extern Il2CppType t343_1_0_0;
extern TypeInfo t193_TI;
struct t343;
extern TypeInfo t343_TI;
extern Il2CppGenericClass t343_GC;
TypeInfo t343_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t343_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t343_TI, NULL, t343_VT, &EmptyCustomAttributesCache, &t343_TI, &t343_0_0_0, &t343_1_0_0, t343_IOs, &t343_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t343), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2011.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2011_TI;
#include "t2011MD.h"



extern MethodInfo m11240_MI;
 void m11240_gshared (t2011 * __this, t4 * p0, t56 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11241_MI;
 void m11241_gshared (t2011 * __this, t4 * p0, MethodInfo* method)
{
	typedef  void (*FunctionPointerType) (t4 * __this, t4 * p0, MethodInfo* method);
	if (__this->f9)
		m11241((t2011 *)__this->f9,  p0, method);
	((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m11243_MI;
 t4 * m11243_gshared (t2011 * __this, t4 * p0, t55 * p1, t4 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m11245_MI;
 void m11245_gshared (t2011 * __this, t4 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition System.Action`1<System.Object>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2011_m11240_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2011_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m11240_MI = 
{
	".ctor", (methodPointerType)&m11240_gshared, &t2011_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2011_m11240_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2011_m11241_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2011_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11241_MI = 
{
	"Invoke", (methodPointerType)&m11241_gshared, &t2011_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2011_m11241_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2011_m11243_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2011_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11243_MI = 
{
	"BeginInvoke", (methodPointerType)&m11243_gshared, &t2011_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2011_m11243_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2011_m11245_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2011_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11245_MI = 
{
	"EndInvoke", (methodPointerType)&m11245_gshared, &t2011_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2011_m11245_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2011_MIs[] =
{
	&m11240_MI,
	&m11241_MI,
	&m11243_MI,
	&m11245_MI,
	NULL
};
extern MethodInfo m1695_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1696_MI;
extern MethodInfo m31_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m1700_MI;
extern MethodInfo m1701_MI;
extern MethodInfo m11241_MI;
extern MethodInfo m11243_MI;
extern MethodInfo m11245_MI;
static MethodInfo* t2011_VT[] =
{
	&m1695_MI,
	&m29_MI,
	&m1696_MI,
	&m31_MI,
	&m1697_MI,
	&m1698_MI,
	&m1697_MI,
	&m1699_MI,
	&m1700_MI,
	&m1701_MI,
	&m11241_MI,
	&m11243_MI,
	&m11245_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2011_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2011_0_0_0;
extern Il2CppType t2011_1_0_0;
extern TypeInfo t193_TI;
struct t2011;
extern TypeInfo t2011_TI;
extern Il2CppGenericClass t2011_GC;
TypeInfo t2011_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t2011_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2011_TI, NULL, t2011_VT, &EmptyCustomAttributesCache, &t2011_TI, &t2011_0_0_0, &t2011_1_0_0, t2011_IOs, &t2011_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2011), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2012.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2012_TI;
#include "t2012MD.h"

#include "t22.h"
#include "t546.h"
#include "t2013.h"
extern TypeInfo t309_TI;
extern TypeInfo t4_TI;
extern TypeInfo t2012_TI;
extern TypeInfo t150_TI;
extern TypeInfo t2013_TI;
extern TypeInfo t17_TI;
#include "t2013MD.h"
extern MethodInfo m11248_MI;
extern MethodInfo m11250_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Graphic>
extern Il2CppType t309_0_0_33;
FieldInfo t2012_f1_FieldInfo = 
{
	"m_Arg1", &t309_0_0_33, &t2012_TI, offsetof(t2012, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2012_FIs[] =
{
	&t2012_f1_FieldInfo,
	NULL
};
extern Il2CppType t22_0_0_0;
extern Il2CppType t546_0_0_0;
extern Il2CppType t150_0_0_0;
static ParameterInfo t2012_m11246_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t22_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t150_0_0_0},
};
extern TypeInfo t2012_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11246_MI = 
{
	".ctor", (methodPointerType)&m7891_gshared, &t2012_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4_t4, t2012_m11246_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2012_m11247_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2012_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11247_MI = 
{
	"Invoke", (methodPointerType)&m7893_gshared, &t2012_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2012_m11247_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2012_MIs[] =
{
	&m11246_MI,
	&m11247_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11247_MI;
extern MethodInfo m11251_MI;
static MethodInfo* t2012_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11247_MI,
	&m11251_MI,
};
extern Il2CppType t2014_0_0_0;
extern TypeInfo t2014_TI;
extern MethodInfo m18273_MI;
extern TypeInfo t150_TI;
extern MethodInfo m11253_MI;
extern MethodInfo m11248_MI;
extern TypeInfo t150_TI;
extern MethodInfo m11250_MI;
static void* t2012_RGCTXData[8] = 
{
	(void*)&t2014_0_0_0,
	&t2014_TI,
	&m18273_MI,
	&t150_TI,
	&m11253_MI,
	&m11248_MI,
	&t150_TI,
	&m11250_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2012_0_0_0;
extern Il2CppType t2012_1_0_0;
extern TypeInfo t2013_TI;
struct t2012;
extern TypeInfo t2012_TI;
extern Il2CppGenericClass t2012_GC;
TypeInfo t2012_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2012_MIs, NULL, t2012_FIs, NULL, &t2013_TI, NULL, NULL, &t2012_TI, NULL, t2012_VT, &EmptyCustomAttributesCache, &t2012_TI, &t2012_0_0_0, &t2012_1_0_0, NULL, &t2012_GC, NULL, NULL, NULL, t2012_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2012), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2013_TI;

#include "t2014.h"
#include "t345.h"
extern TypeInfo t2013_TI;
extern TypeInfo t2014_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t150_TI;
extern TypeInfo t17_TI;
#include "t545MD.h"
#include "t345MD.h"
#include "t2014MD.h"
extern Il2CppType t2014_0_0_0;
extern MethodInfo m2791_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2954_MI;
extern MethodInfo m1592_MI;
extern MethodInfo m2790_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m18273_MI;
extern MethodInfo m2792_MI;
extern MethodInfo m11253_MI;
extern MethodInfo m2950_MI;
extern MethodInfo m2948_MI;
struct t545;
#include "t545.h"
struct t545;
 void m16892_gshared (t4 * __this, t4 * p0, MethodInfo* method);
#define m16892(__this, p0, method) (void)m16892_gshared((t4 *)__this, (t4 *)p0, method)
#define m18273(__this, p0, method) (void)m16892_gshared((t4 *)__this, (t4 *)p0, method)
extern MethodInfo m18273_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Graphic>
extern Il2CppType t2014_0_0_1;
FieldInfo t2013_f0_FieldInfo = 
{
	"Delegate", &t2014_0_0_1, &t2013_TI, offsetof(t2013, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2013_FIs[] =
{
	&t2013_f0_FieldInfo,
	NULL
};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2013_m11248_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2013_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11248_MI = 
{
	".ctor", (methodPointerType)&m7894_gshared, &t2013_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t2013_m11248_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2014_0_0_0;
static ParameterInfo t2013_m11249_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2014_0_0_0},
};
extern TypeInfo t2013_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11249_MI = 
{
	".ctor", (methodPointerType)&m7895_gshared, &t2013_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2013_m11249_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t2013_m11250_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2013_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11250_MI = 
{
	"Invoke", (methodPointerType)&m7896_gshared, &t2013_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2013_m11250_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t546_0_0_0;
static ParameterInfo t2013_m11251_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t546_0_0_0},
};
extern TypeInfo t2013_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11251_MI = 
{
	"Find", (methodPointerType)&m7897_gshared, &t2013_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2013_m11251_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2013_MIs[] =
{
	&m11248_MI,
	&m11249_MI,
	&m11250_MI,
	&m11251_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11250_MI;
extern MethodInfo m11251_MI;
static MethodInfo* t2013_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11250_MI,
	&m11251_MI,
};
extern Il2CppType t2014_0_0_0;
extern TypeInfo t2014_TI;
extern MethodInfo m18273_MI;
extern TypeInfo t150_TI;
extern MethodInfo m11253_MI;
static void* t2013_RGCTXData[5] = 
{
	(void*)&t2014_0_0_0,
	&t2014_TI,
	&m18273_MI,
	&t150_TI,
	&m11253_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2013_0_0_0;
extern Il2CppType t2013_1_0_0;
extern TypeInfo t545_TI;
struct t2013;
extern TypeInfo t2013_TI;
extern Il2CppGenericClass t2013_GC;
TypeInfo t2013_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2013_MIs, NULL, t2013_FIs, NULL, &t545_TI, NULL, NULL, &t2013_TI, NULL, t2013_VT, &EmptyCustomAttributesCache, &t2013_TI, &t2013_0_0_0, &t2013_1_0_0, NULL, &t2013_GC, NULL, NULL, NULL, t2013_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2013), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2014_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.Graphic>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2014_m11252_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2014_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m11252_MI = 
{
	".ctor", (methodPointerType)&m7898_gshared, &t2014_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2014_m11252_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t150_0_0_0;
static ParameterInfo t2014_m11253_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t150_0_0_0},
};
extern TypeInfo t2014_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11253_MI = 
{
	"Invoke", (methodPointerType)&m7899_gshared, &t2014_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2014_m11253_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t150_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2014_m11254_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t150_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2014_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t4_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11254_MI = 
{
	"BeginInvoke", (methodPointerType)&m7900_gshared, &t2014_TI, &t54_0_0_0, RuntimeInvoker_t4_t4_t4_t4, t2014_m11254_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2014_m11255_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2014_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11255_MI = 
{
	"EndInvoke", (methodPointerType)&m7901_gshared, &t2014_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2014_m11255_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2014_MIs[] =
{
	&m11252_MI,
	&m11253_MI,
	&m11254_MI,
	&m11255_MI,
	NULL
};
extern MethodInfo m1695_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1696_MI;
extern MethodInfo m31_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m1700_MI;
extern MethodInfo m1701_MI;
extern MethodInfo m11253_MI;
extern MethodInfo m11254_MI;
extern MethodInfo m11255_MI;
static MethodInfo* t2014_VT[] =
{
	&m1695_MI,
	&m29_MI,
	&m1696_MI,
	&m31_MI,
	&m1697_MI,
	&m1698_MI,
	&m1697_MI,
	&m1699_MI,
	&m1700_MI,
	&m1701_MI,
	&m11253_MI,
	&m11254_MI,
	&m11255_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2014_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2014_0_0_0;
extern Il2CppType t2014_1_0_0;
extern TypeInfo t193_TI;
struct t2014;
extern TypeInfo t2014_TI;
extern Il2CppGenericClass t2014_GC;
TypeInfo t2014_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2014_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2014_TI, NULL, t2014_VT, &EmptyCustomAttributesCache, &t2014_TI, &t2014_0_0_0, &t2014_1_0_0, t2014_IOs, &t2014_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2014), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t153.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t153_TI;
#include "t153MD.h"

#include "t2015.h"
#include "t159.h"
#include "t161.h"
extern TypeInfo t153_TI;
extern TypeInfo t2015_TI;
extern TypeInfo t18_TI;
extern TypeInfo t161_TI;
extern TypeInfo t159_TI;
extern TypeInfo t17_TI;
#include "t2015MD.h"
#include "t159MD.h"
#include "t293MD.h"
extern MethodInfo m11256_MI;
extern MethodInfo m11259_MI;
extern MethodInfo m11269_MI;
extern MethodInfo m11260_MI;
extern MethodInfo m24_MI;
extern MethodInfo m18313_MI;
extern MethodInfo m11257_MI;
extern MethodInfo m11267_MI;
extern MethodInfo m11419_MI;
extern MethodInfo m11266_MI;
extern MethodInfo m2867_MI;
extern MethodInfo m1298_MI;
extern MethodInfo m11268_MI;
struct t1223;
#include "t1223.h"
struct t1223;
 t4 * m17353_gshared (t4 * __this, MethodInfo* method);
#define m17353(__this, method) (t4 *)m17353_gshared((t4 *)__this, method)
#define m18313(__this, method) (t161 *)m17353_gshared((t4 *)__this, method)
extern MethodInfo m18313_MI;


// Metadata Definition UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
extern Il2CppType t2015_0_0_33;
FieldInfo t153_f0_FieldInfo = 
{
	"m_Stack", &t2015_0_0_33, &t153_TI, offsetof(t153, f0), &EmptyCustomAttributesCache};
extern Il2CppType t159_0_0_33;
FieldInfo t153_f1_FieldInfo = 
{
	"m_ActionOnGet", &t159_0_0_33, &t153_TI, offsetof(t153, f1), &EmptyCustomAttributesCache};
extern Il2CppType t159_0_0_33;
FieldInfo t153_f2_FieldInfo = 
{
	"m_ActionOnRelease", &t159_0_0_33, &t153_TI, offsetof(t153, f2), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
extern CustomAttributesCache t281__CustomAttributeCache_U3CcountAllU3Ek__BackingField;
FieldInfo t153_f3_FieldInfo = 
{
	"<countAll>k__BackingField", &t18_0_0_1, &t153_TI, offsetof(t153, f3), &t281__CustomAttributeCache_U3CcountAllU3Ek__BackingField};
static FieldInfo* t153_FIs[] =
{
	&t153_f0_FieldInfo,
	&t153_f1_FieldInfo,
	&t153_f2_FieldInfo,
	&t153_f3_FieldInfo,
	NULL
};
extern MethodInfo m11256_MI;
extern MethodInfo m11257_MI;
static PropertyInfo t153____countAll_PropertyInfo = 
{
	&t153_TI, "countAll", &m11256_MI, &m11257_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11258_MI;
static PropertyInfo t153____countActive_PropertyInfo = 
{
	&t153_TI, "countActive", &m11258_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11259_MI;
static PropertyInfo t153____countInactive_PropertyInfo = 
{
	&t153_TI, "countInactive", &m11259_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t153_PIs[] =
{
	&t153____countAll_PropertyInfo,
	&t153____countActive_PropertyInfo,
	&t153____countInactive_PropertyInfo,
	NULL
};
extern Il2CppType t159_0_0_0;
extern Il2CppType t159_0_0_0;
static ParameterInfo t153_m1558_ParameterInfos[] = 
{
	{"actionOnGet", 0, 134217728, &EmptyCustomAttributesCache, &t159_0_0_0},
	{"actionOnRelease", 1, 134217728, &EmptyCustomAttributesCache, &t159_0_0_0},
};
extern TypeInfo t153_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1558_MI = 
{
	".ctor", (methodPointerType)&m9085_gshared, &t153_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t4, t153_m1558_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t153_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t281__CustomAttributeCache_m2038;
MethodInfo m11256_MI = 
{
	"get_countAll", (methodPointerType)&m9087_gshared, &t153_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &t281__CustomAttributeCache_m2038, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t153_m11257_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t153_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t281__CustomAttributeCache_m2039;
MethodInfo m11257_MI = 
{
	"set_countAll", (methodPointerType)&m9089_gshared, &t153_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t153_m11257_ParameterInfos, &t281__CustomAttributeCache_m2039, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t153_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11258_MI = 
{
	"get_countActive", (methodPointerType)&m9091_gshared, &t153_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t153_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11259_MI = 
{
	"get_countInactive", (methodPointerType)&m9093_gshared, &t153_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t153_TI;
extern Il2CppType t161_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1566_MI = 
{
	"Get", (methodPointerType)&m9095_gshared, &t153_TI, &t161_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t161_0_0_0;
static ParameterInfo t153_m1572_ParameterInfos[] = 
{
	{"element", 0, 134217728, &EmptyCustomAttributesCache, &t161_0_0_0},
};
extern TypeInfo t153_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1572_MI = 
{
	"Release", (methodPointerType)&m9097_gshared, &t153_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t153_m1572_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t153_MIs[] =
{
	&m1558_MI,
	&m11256_MI,
	&m11257_MI,
	&m11258_MI,
	&m11259_MI,
	&m1566_MI,
	&m1572_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
static MethodInfo* t153_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
};
extern TypeInfo t2015_TI;
extern MethodInfo m11260_MI;
extern MethodInfo m11256_MI;
extern MethodInfo m11259_MI;
extern MethodInfo m11269_MI;
extern TypeInfo t161_TI;
extern MethodInfo m18313_MI;
extern MethodInfo m11257_MI;
extern MethodInfo m11267_MI;
extern MethodInfo m11419_MI;
extern MethodInfo m11266_MI;
extern MethodInfo m11268_MI;
static void* t153_RGCTXData[12] = 
{
	&t2015_TI,
	&m11260_MI,
	&m11256_MI,
	&m11259_MI,
	&m11269_MI,
	&t161_TI,
	&m18313_MI,
	&m11257_MI,
	&m11267_MI,
	&m11419_MI,
	&m11266_MI,
	&m11268_MI,
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t153_0_0_0;
extern Il2CppType t153_1_0_0;
extern TypeInfo t4_TI;
struct t153;
extern TypeInfo t153_TI;
extern Il2CppGenericClass t153_GC;
extern CustomAttributesCache t281__CustomAttributeCache_U3CcountAllU3Ek__BackingField;
extern CustomAttributesCache t281__CustomAttributeCache_m2038;
extern CustomAttributesCache t281__CustomAttributeCache_m2039;
TypeInfo t153_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "ObjectPool`1", "UnityEngine.UI", t153_MIs, t153_PIs, t153_FIs, NULL, &t4_TI, NULL, NULL, &t153_TI, NULL, t153_VT, &EmptyCustomAttributesCache, &t153_TI, &t153_0_0_0, &t153_1_0_0, NULL, &t153_GC, NULL, NULL, NULL, t153_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t153), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 3, 4, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2015_TI;

#include "t2018.h"
extern TypeInfo t2015_TI;
extern TypeInfo t16_TI;
extern TypeInfo t17_TI;
extern TypeInfo t18_TI;
extern TypeInfo t307_TI;
extern TypeInfo t1236_TI;
extern TypeInfo t2018_TI;
extern TypeInfo t1270_TI;
extern TypeInfo t161_TI;
#include "t2018MD.h"
extern MethodInfo m24_MI;
extern MethodInfo m3791_MI;
extern MethodInfo m3771_MI;
extern MethodInfo m6463_MI;
extern MethodInfo m11270_MI;
extern MethodInfo m6906_MI;
extern MethodInfo m18312_MI;
extern MethodInfo m11414_MI;
struct t16;
#define m18312(__this, p0, p1, method) (void)m16895_gshared((t4 *)__this, (t309**)p0, (int32_t)p1, method)
extern MethodInfo m18312_MI;


extern MethodInfo m11270_MI;
 t2018  m11270 (t2015 * __this, MethodInfo* method){
	{
		t2018  L_0 = {0};
		m11414(&L_0, __this, &m11414_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
extern Il2CppType t18_0_0_32849;
FieldInfo t2015_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t18_0_0_32849, &t2015_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2016_0_0_1;
FieldInfo t2015_f1_FieldInfo = 
{
	"_array", &t2016_0_0_1, &t2015_TI, offsetof(t2015, f1), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2015_f2_FieldInfo = 
{
	"_size", &t18_0_0_1, &t2015_TI, offsetof(t2015, f2), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2015_f3_FieldInfo = 
{
	"_version", &t18_0_0_1, &t2015_TI, offsetof(t2015, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2015_FIs[] =
{
	&t2015_f0_FieldInfo,
	&t2015_f1_FieldInfo,
	&t2015_f2_FieldInfo,
	&t2015_f3_FieldInfo,
	NULL
};
static const int32_t t2015_f0_DefaultValueData = 16;
extern Il2CppType t18_0_0_0;
static Il2CppFieldDefaultValueEntry t2015_f0_DefaultValue = 
{
	&t2015_f0_FieldInfo, { (char*)&t2015_f0_DefaultValueData, &t18_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2015_FDVs[] = 
{
	&t2015_f0_DefaultValue,
	NULL
};
extern MethodInfo m11261_MI;
static PropertyInfo t2015____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2015_TI, "System.Collections.ICollection.IsSynchronized", &m11261_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11262_MI;
static PropertyInfo t2015____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2015_TI, "System.Collections.ICollection.SyncRoot", &m11262_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11269_MI;
static PropertyInfo t2015____Count_PropertyInfo = 
{
	&t2015_TI, "Count", &m11269_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2015_PIs[] =
{
	&t2015____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2015____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2015____Count_PropertyInfo,
	NULL
};
extern TypeInfo t2015_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11260_MI = 
{
	".ctor", (methodPointerType)&m9098_gshared, &t2015_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2015_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11261_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m9099_gshared, &t2015_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2015_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11262_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m9100_gshared, &t2015_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2015_m11263_ParameterInfos[] = 
{
	{"dest", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"idx", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2015_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11263_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m9101_gshared, &t2015_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2015_m11263_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2015_TI;
extern Il2CppType t2017_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11264_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m9102_gshared, &t2015_TI, &t2017_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2015_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11265_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m9103_gshared, &t2015_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2015_TI;
extern Il2CppType t161_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11266_MI = 
{
	"Peek", (methodPointerType)&m9104_gshared, &t2015_TI, &t161_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2015_TI;
extern Il2CppType t161_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11267_MI = 
{
	"Pop", (methodPointerType)&m9105_gshared, &t2015_TI, &t161_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t161_0_0_0;
static ParameterInfo t2015_m11268_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t161_0_0_0},
};
extern TypeInfo t2015_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11268_MI = 
{
	"Push", (methodPointerType)&m9106_gshared, &t2015_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2015_m11268_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2015_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11269_MI = 
{
	"get_Count", (methodPointerType)&m9107_gshared, &t2015_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2015_TI;
extern Il2CppType t2018_0_0_0;
extern void* RuntimeInvoker_t2018 (MethodInfo* method, void* obj, void** args);
MethodInfo m11270_MI = 
{
	"GetEnumerator", (methodPointerType)&m11270, &t2015_TI, &t2018_0_0_0, RuntimeInvoker_t2018, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2015_MIs[] =
{
	&m11260_MI,
	&m11261_MI,
	&m11262_MI,
	&m11263_MI,
	&m11264_MI,
	&m11265_MI,
	&m11266_MI,
	&m11267_MI,
	&m11268_MI,
	&m11269_MI,
	&m11270_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11269_MI;
extern MethodInfo m11261_MI;
extern MethodInfo m11262_MI;
extern MethodInfo m11263_MI;
extern MethodInfo m11265_MI;
extern MethodInfo m11264_MI;
static MethodInfo* t2015_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11269_MI,
	&m11261_MI,
	&m11262_MI,
	&m11263_MI,
	&m11265_MI,
	&m11264_MI,
};
extern TypeInfo t641_TI;
extern TypeInfo t592_TI;
extern TypeInfo t4022_TI;
static TypeInfo* t2015_ITIs[] = 
{
	&t641_TI,
	&t592_TI,
	&t4022_TI,
};
extern TypeInfo t641_TI;
extern TypeInfo t592_TI;
extern TypeInfo t4022_TI;
static Il2CppInterfaceOffsetPair t2015_IOs[] = 
{
	{ &t641_TI, 4},
	{ &t592_TI, 8},
	{ &t4022_TI, 9},
};
extern MethodInfo m11270_MI;
extern TypeInfo t2018_TI;
extern MethodInfo m18312_MI;
extern MethodInfo m11414_MI;
static void* t2015_RGCTXData[4] = 
{
	&m11270_MI,
	&t2018_TI,
	&m18312_MI,
	&m11414_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t2015_0_0_0;
extern Il2CppType t2015_1_0_0;
extern TypeInfo t4_TI;
struct t2015;
extern TypeInfo t2015_TI;
extern Il2CppGenericClass t2015_GC;
extern CustomAttributesCache t679__CustomAttributeCache;
TypeInfo t2015_TI = 
{
	&g_System_dll_Image, NULL, "Stack`1", "System.Collections.Generic", t2015_MIs, t2015_PIs, t2015_FIs, NULL, &t4_TI, NULL, NULL, &t2015_TI, t2015_ITIs, t2015_VT, &t679__CustomAttributeCache, &t2015_TI, &t2015_0_0_0, &t2015_1_0_0, t2015_IOs, &t2015_GC, NULL, t2015_FDVs, NULL, t2015_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2015), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 11, 3, 4, 0, 0, 10, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4022_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
extern TypeInfo t4022_TI;
extern Il2CppType t2017_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24379_MI = 
{
	"GetEnumerator", NULL, &t4022_TI, &t2017_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4022_MIs[] =
{
	&m24379_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t4022_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4022_0_0_0;
extern Il2CppType t4022_1_0_0;
struct t4022;
extern TypeInfo t4022_TI;
extern Il2CppGenericClass t4022_GC;
TypeInfo t4022_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4022_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4022_TI, t4022_ITIs, NULL, &EmptyCustomAttributesCache, &t4022_TI, &t4022_0_0_0, &t4022_1_0_0, NULL, &t4022_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2017_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
extern MethodInfo m24380_MI;
static PropertyInfo t2017____Current_PropertyInfo = 
{
	&t2017_TI, "Current", &m24380_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2017_PIs[] =
{
	&t2017____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2017_TI;
extern Il2CppType t161_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24380_MI = 
{
	"get_Current", NULL, &t2017_TI, &t161_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2017_MIs[] =
{
	&m24380_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t2017_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2017_0_0_0;
extern Il2CppType t2017_1_0_0;
struct t2017;
extern TypeInfo t2017_TI;
extern Il2CppGenericClass t2017_GC;
TypeInfo t2017_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2017_MIs, t2017_PIs, NULL, NULL, NULL, NULL, NULL, &t2017_TI, t2017_ITIs, NULL, &EmptyCustomAttributesCache, &t2017_TI, &t2017_0_0_0, &t2017_1_0_0, NULL, &t2017_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t161_TI;
#include "t161MD.h"

#include "t182.h"
#include "t2024.h"
#include "t2021.h"
#include "t2022.h"
#include "t2029.h"
#include "t2023.h"
extern TypeInfo t161_TI;
extern TypeInfo t182_TI;
extern TypeInfo t18_TI;
extern TypeInfo t17_TI;
extern TypeInfo t307_TI;
extern TypeInfo t574_TI;
extern TypeInfo t1269_TI;
extern TypeInfo t1234_TI;
extern TypeInfo t199_TI;
extern TypeInfo t2024_TI;
extern TypeInfo t19_TI;
extern TypeInfo t394_TI;
extern TypeInfo t2020_TI;
extern TypeInfo t2019_TI;
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2021_TI;
extern TypeInfo t330_TI;
extern TypeInfo t2022_TI;
extern TypeInfo t2029_TI;
#include "t2021MD.h"
#include "t2022MD.h"
#include "t2024MD.h"
#include "t2029MD.h"
extern MethodInfo m2045_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m6473_MI;
extern MethodInfo m18286_MI;
extern MethodInfo m6474_MI;
extern MethodInfo m11300_MI;
extern MethodInfo m24_MI;
extern MethodInfo m11297_MI;
extern MethodInfo m3759_MI;
extern MethodInfo m1579_MI;
extern MethodInfo m11292_MI;
extern MethodInfo m11298_MI;
extern MethodInfo m11301_MI;
extern MethodInfo m11303_MI;
extern MethodInfo m11287_MI;
extern MethodInfo m1594_MI;
extern MethodInfo m6912_MI;
extern MethodInfo m1595_MI;
extern MethodInfo m1927_MI;
extern MethodInfo m24381_MI;
extern MethodInfo m24382_MI;
extern MethodInfo m24383_MI;
extern MethodInfo m42_MI;
extern MethodInfo m43_MI;
extern MethodInfo m11302_MI;
extern MethodInfo m11288_MI;
extern MethodInfo m11289_MI;
extern MethodInfo m11321_MI;
extern MethodInfo m3755_MI;
extern MethodInfo m18288_MI;
extern MethodInfo m11295_MI;
extern MethodInfo m11296_MI;
extern MethodInfo m2947_MI;
extern MethodInfo m11396_MI;
extern MethodInfo m11315_MI;
extern MethodInfo m11299_MI;
extern MethodInfo m11305_MI;
extern MethodInfo m3771_MI;
extern MethodInfo m11402_MI;
extern MethodInfo m18290_MI;
extern MethodInfo m18298_MI;
extern MethodInfo m3758_MI;
struct t16;
 void m18286 (t4 * __this, t199** p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18286_MI;
struct t16;
#include "t2027.h"
 int32_t m18288 (t4 * __this, t199* p0, t182  p1, int32_t p2, int32_t p3, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18288_MI;
struct t16;
 void m18290 (t4 * __this, t199* p0, int32_t p1, int32_t p2, t4* p3, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18290_MI;
struct t16;
 void m18298 (t4 * __this, t199* p0, int32_t p1, t2023 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18298_MI;


extern MethodInfo m1730_MI;
 void m1730 (t161 * __this, MethodInfo* method){
	{
		m24(__this, &m24_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t161_TI));
		__this->f1 = (((t161_SFs*)InitializedTypeInfo(&t161_TI)->static_fields)->f4);
		return;
	}
}
extern MethodInfo m2900_MI;
 void m2900 (t161 * __this, int32_t p0, MethodInfo* method){
	{
		m24(__this, &m24_MI);
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t1234 * L_0 = (t1234 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1234_TI));
		m6474(L_0, (t8*) &_stringLiteral537, &m6474_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0015:
	{
		__this->f1 = ((t199*)SZArrayNew(InitializedTypeInfo(&t199_TI), p0));
		return;
	}
}
extern MethodInfo m11271_MI;
 void m11271 (t4 * __this, MethodInfo* method){
	{
		((t161_SFs*)InitializedTypeInfo(&t161_TI)->static_fields)->f4 = ((t199*)SZArrayNew(InitializedTypeInfo(&t199_TI), 0));
		return;
	}
}
extern MethodInfo m11272_MI;
 t4* m11272 (t161 * __this, MethodInfo* method){
	{
		t2024  L_0 = m11297(__this, &m11297_MI);
		t2024  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t2024_TI), &L_1);
		return (t4*)L_2;
	}
}
extern MethodInfo m11273_MI;
 void m11273 (t161 * __this, t16 * p0, int32_t p1, MethodInfo* method){
	{
		t199* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		m3759(NULL, (t16 *)(t16 *)L_0, 0, p0, p1, L_1, &m3759_MI);
		return;
	}
}
extern MethodInfo m11274_MI;
 t4 * m11274 (t161 * __this, MethodInfo* method){
	{
		t2024  L_0 = m11297(__this, &m11297_MI);
		t2024  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t2024_TI), &L_1);
		return (t4 *)L_2;
	}
}
extern MethodInfo m11275_MI;
 int32_t m11275 (t161 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t31 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t31 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			VirtActionInvoker1< t182  >::Invoke(&m1579_MI, __this, ((*(t182 *)((t182 *)UnBox (p0, InitializedTypeInfo(&t182_TI))))));
			int32_t L_0 = (__this->f2);
			V_0 = ((int32_t)(L_0-1));
			// IL_0015: leave.s IL_002a
			goto IL_002a;
		}

IL_0017:
		{
			// IL_0017: leave.s IL_001f
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t31 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t574_TI, e.ex->object.klass))
			goto IL_0019;
		if(il2cpp_codegen_class_is_assignable_from (&t1269_TI, e.ex->object.klass))
			goto IL_001c;
		throw e;
	}

IL_0019:
	{ // begin catch(System.NullReferenceException)
		// IL_001a: leave.s IL_001f
		goto IL_001f;
	} // end catch (depth: 1)

IL_001c:
	{ // begin catch(System.InvalidCastException)
		// IL_001d: leave.s IL_001f
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		t307 * L_1 = (t307 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t307_TI));
		m1936(L_1, (t8*) &_stringLiteral551, &m1936_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_002a:
	{
		return V_0;
	}
}
extern MethodInfo m11276_MI;
 bool m11276 (t161 * __this, t4 * p0, MethodInfo* method){
	bool V_0 = false;
	t31 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t31 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = (bool)VirtFuncInvoker1< bool, t182  >::Invoke(&m11292_MI, __this, ((*(t182 *)((t182 *)UnBox (p0, InitializedTypeInfo(&t182_TI))))));
			V_0 = L_0;
			// IL_000d: leave.s IL_0019
			goto IL_0019;
		}

IL_000f:
		{
			// IL_000f: leave.s IL_0017
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t31 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t574_TI, e.ex->object.klass))
			goto IL_0011;
		if(il2cpp_codegen_class_is_assignable_from (&t1269_TI, e.ex->object.klass))
			goto IL_0014;
		throw e;
	}

IL_0011:
	{ // begin catch(System.NullReferenceException)
		// IL_0012: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0014:
	{ // begin catch(System.InvalidCastException)
		// IL_0015: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		return V_0;
	}
}
extern MethodInfo m11277_MI;
 int32_t m11277 (t161 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t31 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t31 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t182  >::Invoke(&m11298_MI, __this, ((*(t182 *)((t182 *)UnBox (p0, InitializedTypeInfo(&t182_TI))))));
			V_0 = L_0;
			// IL_000d: leave.s IL_0019
			goto IL_0019;
		}

IL_000f:
		{
			// IL_000f: leave.s IL_0017
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t31 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t574_TI, e.ex->object.klass))
			goto IL_0011;
		if(il2cpp_codegen_class_is_assignable_from (&t1269_TI, e.ex->object.klass))
			goto IL_0014;
		throw e;
	}

IL_0011:
	{ // begin catch(System.NullReferenceException)
		// IL_0012: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0014:
	{ // begin catch(System.InvalidCastException)
		// IL_0015: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		return V_0;
	}
}
extern MethodInfo m11278_MI;
 void m11278 (t161 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	t31 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t31 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		m11300(__this, p0, &m11300_MI);
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			VirtActionInvoker2< int32_t, t182  >::Invoke(&m11301_MI, __this, p0, ((*(t182 *)((t182 *)UnBox (p1, InitializedTypeInfo(&t182_TI))))));
			// IL_0014: leave.s IL_0029
			goto IL_0029;
		}

IL_0016:
		{
			// IL_0016: leave.s IL_001e
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t31 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t574_TI, e.ex->object.klass))
			goto IL_0018;
		if(il2cpp_codegen_class_is_assignable_from (&t1269_TI, e.ex->object.klass))
			goto IL_001b;
		throw e;
	}

IL_0018:
	{ // begin catch(System.NullReferenceException)
		// IL_0019: leave.s IL_001e
		goto IL_001e;
	} // end catch (depth: 1)

IL_001b:
	{ // begin catch(System.InvalidCastException)
		// IL_001c: leave.s IL_001e
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		t307 * L_0 = (t307 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t307_TI));
		m1936(L_0, (t8*) &_stringLiteral551, &m1936_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0029:
	{
		return;
	}
}
extern MethodInfo m11279_MI;
 void m11279 (t161 * __this, t4 * p0, MethodInfo* method){
	t31 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t31 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			VirtFuncInvoker1< bool, t182  >::Invoke(&m11303_MI, __this, ((*(t182 *)((t182 *)UnBox (p0, InitializedTypeInfo(&t182_TI))))));
			// IL_000d: leave.s IL_0017
			goto IL_0017;
		}

IL_000f:
		{
			// IL_000f: leave.s IL_0017
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t31 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t574_TI, e.ex->object.klass))
			goto IL_0011;
		if(il2cpp_codegen_class_is_assignable_from (&t1269_TI, e.ex->object.klass))
			goto IL_0014;
		throw e;
	}

IL_0011:
	{ // begin catch(System.NullReferenceException)
		// IL_0012: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0014:
	{ // begin catch(System.InvalidCastException)
		// IL_0015: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
extern MethodInfo m11280_MI;
 bool m11280 (t161 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m11281_MI;
 bool m11281 (t161 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m11282_MI;
 t4 * m11282 (t161 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m11283_MI;
 bool m11283 (t161 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m11284_MI;
 bool m11284 (t161 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m11285_MI;
 t4 * m11285 (t161 * __this, int32_t p0, MethodInfo* method){
	{
		t182  L_0 = (t182 )VirtFuncInvoker1< t182 , int32_t >::Invoke(&m2045_MI, __this, p0);
		t182  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t182_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m11286_MI;
 void m11286 (t161 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	t31 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t31 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			VirtActionInvoker2< int32_t, t182  >::Invoke(&m2046_MI, __this, p0, ((*(t182 *)((t182 *)UnBox (p1, InitializedTypeInfo(&t182_TI))))));
			// IL_000d: leave.s IL_0022
			goto IL_0022;
		}

IL_000f:
		{
			// IL_000f: leave.s IL_0017
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t31 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t574_TI, e.ex->object.klass))
			goto IL_0011;
		if(il2cpp_codegen_class_is_assignable_from (&t1269_TI, e.ex->object.klass))
			goto IL_0014;
		throw e;
	}

IL_0011:
	{ // begin catch(System.NullReferenceException)
		// IL_0012: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0014:
	{ // begin catch(System.InvalidCastException)
		// IL_0015: leave.s IL_0017
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		t307 * L_0 = (t307 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t307_TI));
		m1936(L_0, (t8*) &_stringLiteral242, &m1936_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0022:
	{
		return;
	}
}
extern MethodInfo m1579_MI;
 void m1579 (t161 * __this, t182  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f2);
		t199* L_1 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)(((int32_t)(((t16 *)L_1)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		m11287(__this, 1, &m11287_MI);
	}

IL_0017:
	{
		t199* L_2 = (__this->f1);
		int32_t L_3 = (__this->f2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->f2 = ((int32_t)(L_4+1));
		*((t182 *)(t182 *)SZArrayLdElema(L_2, V_0)) = (t182 )p0;
		int32_t L_5 = (__this->f3);
		__this->f3 = ((int32_t)(L_5+1));
		return;
	}
}
extern MethodInfo m11287_MI;
 void m11287 (t161 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f2);
		V_0 = ((int32_t)(L_0+p0));
		t199* L_1 = (__this->f1);
		if ((((int32_t)V_0) <= ((int32_t)(((int32_t)(((t16 *)L_1)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = m1594(__this, &m1594_MI);
		int32_t L_3 = m6912(NULL, ((int32_t)(L_2*2)), 4, &m6912_MI);
		int32_t L_4 = m6912(NULL, L_3, V_0, &m6912_MI);
		m1595(__this, L_4, &m1595_MI);
	}

IL_002e:
	{
		return;
	}
}
extern MethodInfo m11288_MI;
 void m11288 (t161 * __this, t4* p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m1927_MI, p0);
		V_0 = L_0;
		if (V_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		m11287(__this, V_0, &m11287_MI);
		t199* L_1 = (__this->f1);
		int32_t L_2 = (__this->f2);
		InterfaceActionInvoker2< t199*, int32_t >::Invoke(&m24381_MI, p0, L_1, L_2);
		int32_t L_3 = (__this->f2);
		__this->f2 = ((int32_t)(L_3+V_0));
		return;
	}
}
extern MethodInfo m11289_MI;
 void m11289 (t161 * __this, t4* p0, MethodInfo* method){
	t182  V_0 = {0};
	t4* V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t31 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t31 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t4* L_0 = (t4*)InterfaceFuncInvoker0< t4* >::Invoke(&m24382_MI, p0);
		V_1 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			t182  L_1 = (t182 )InterfaceFuncInvoker0< t182  >::Invoke(&m24383_MI, V_1);
			V_0 = L_1;
			VirtActionInvoker1< t182  >::Invoke(&m1579_MI, __this, V_0);
		}

IL_0017:
		{
			bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m42_MI, V_1);
			if (L_2)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			// IL_001f: leave.s IL_002c
			leaveInstructions[0] = 0x2C; // 1
			THROW_SENTINEL(IL_002c);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0021;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t31 *)e.ex;
		goto IL_0021;
	}

IL_0021:
	{ // begin finally (depth: 1)
		{
			if (V_1)
			{
				goto IL_0025;
			}
		}

IL_0024:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x2C:
					goto IL_002c;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t31 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}

IL_0025:
		{
			InterfaceActionInvoker0::Invoke(&m43_MI, V_1);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x2C:
					goto IL_002c;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t31 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_002c:
	{
		return;
	}
}
extern MethodInfo m11290_MI;
 void m11290 (t161 * __this, t4* p0, MethodInfo* method){
	t4* V_0 = {0};
	{
		m11302(__this, p0, &m11302_MI);
		V_0 = ((t4*)IsInst(p0, InitializedTypeInfo(&t394_TI)));
		if (!V_0)
		{
			goto IL_001a;
		}
	}
	{
		m11288(__this, V_0, &m11288_MI);
		goto IL_0021;
	}

IL_001a:
	{
		m11289(__this, p0, &m11289_MI);
	}

IL_0021:
	{
		int32_t L_0 = (__this->f3);
		__this->f3 = ((int32_t)(L_0+1));
		return;
	}
}
extern MethodInfo m11291_MI;
 t2021 * m11291 (t161 * __this, MethodInfo* method){
	{
		t2021 * L_0 = (t2021 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2021_TI));
		m11321(L_0, __this, &m11321_MI);
		return L_0;
	}
}
extern MethodInfo m1596_MI;
 void m1596 (t161 * __this, MethodInfo* method){
	{
		t199* L_0 = (__this->f1);
		t199* L_1 = (__this->f1);
		m3755(NULL, (t16 *)(t16 *)L_0, 0, (((int32_t)(((t16 *)L_1)->max_length))), &m3755_MI);
		__this->f2 = 0;
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)(L_2+1));
		return;
	}
}
extern MethodInfo m11292_MI;
 bool m11292 (t161 * __this, t182  p0, MethodInfo* method){
	{
		t199* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		int32_t L_2 = m18288(NULL, L_0, p0, 0, L_1, &m18288_MI);
		return ((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11293_MI;
 void m11293 (t161 * __this, t199* p0, int32_t p1, MethodInfo* method){
	{
		t199* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		m3759(NULL, (t16 *)(t16 *)L_0, 0, (t16 *)(t16 *)p0, p1, L_1, &m3759_MI);
		return;
	}
}
extern MethodInfo m11294_MI;
 t182  m11294 (t161 * __this, t2022 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t182  V_1 = {0};
	t182  G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t161_TI));
		m11295(NULL, p0, &m11295_MI);
		int32_t L_0 = (__this->f2);
		int32_t L_1 = m11296(__this, 0, L_0, p0, &m11296_MI);
		V_0 = L_1;
		if ((((int32_t)V_0) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		t199* L_2 = (__this->f1);
		G_B3_0 = (*(t182 *)(t182 *)SZArrayLdElema(L_2, V_0));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (&t182_TI, (&V_1));
		G_B3_0 = V_1;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
extern MethodInfo m11295_MI;
 void m11295 (t4 * __this, t2022 * p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t330 * L_0 = (t330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t330_TI));
		m2947(L_0, (t8*) &_stringLiteral367, &m2947_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		return;
	}
}
extern MethodInfo m11296_MI;
 int32_t m11296 (t161 * __this, int32_t p0, int32_t p1, t2022 * p2, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)(p0+p1));
		V_1 = p0;
		goto IL_0022;
	}

IL_0008:
	{
		t199* L_0 = (__this->f1);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t182  >::Invoke(&m11396_MI, p2, (*(t182 *)(t182 *)SZArrayLdElema(L_0, V_1)));
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		return V_1;
	}

IL_001e:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0022:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
extern MethodInfo m11297_MI;
 t2024  m11297 (t161 * __this, MethodInfo* method){
	{
		t2024  L_0 = {0};
		m11315(&L_0, __this, &m11315_MI);
		return L_0;
	}
}
extern MethodInfo m11298_MI;
 int32_t m11298 (t161 * __this, t182  p0, MethodInfo* method){
	{
		t199* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		int32_t L_2 = m18288(NULL, L_0, p0, 0, L_1, &m18288_MI);
		return L_2;
	}
}
extern MethodInfo m11299_MI;
 void m11299 (t161 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		p0 = ((int32_t)(p0-p1));
	}

IL_000b:
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)p0) >= ((int32_t)L_0)))
		{
			goto IL_0031;
		}
	}
	{
		t199* L_1 = (__this->f1);
		t199* L_2 = (__this->f1);
		int32_t L_3 = (__this->f2);
		m3759(NULL, (t16 *)(t16 *)L_1, p0, (t16 *)(t16 *)L_2, ((int32_t)(p0+p1)), ((int32_t)(L_3-p0)), &m3759_MI);
	}

IL_0031:
	{
		int32_t L_4 = (__this->f2);
		__this->f2 = ((int32_t)(L_4+p1));
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		t199* L_5 = (__this->f1);
		int32_t L_6 = (__this->f2);
		m3755(NULL, (t16 *)(t16 *)L_5, L_6, ((-p1)), &m3755_MI);
	}

IL_0056:
	{
		return;
	}
}
extern MethodInfo m11300_MI;
 void m11300 (t161 * __this, int32_t p0, MethodInfo* method){
	{
		if ((((int32_t)p0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) <= ((uint32_t)L_0)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		t1234 * L_1 = (t1234 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1234_TI));
		m6474(L_1, (t8*) &_stringLiteral323, &m6474_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0018:
	{
		return;
	}
}
extern MethodInfo m11301_MI;
 void m11301 (t161 * __this, int32_t p0, t182  p1, MethodInfo* method){
	{
		m11300(__this, p0, &m11300_MI);
		int32_t L_0 = (__this->f2);
		t199* L_1 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)(((int32_t)(((t16 *)L_1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		m11287(__this, 1, &m11287_MI);
	}

IL_001e:
	{
		m11299(__this, p0, 1, &m11299_MI);
		t199* L_2 = (__this->f1);
		*((t182 *)(t182 *)SZArrayLdElema(L_2, p0)) = (t182 )p1;
		int32_t L_3 = (__this->f3);
		__this->f3 = ((int32_t)(L_3+1));
		return;
	}
}
extern MethodInfo m11302_MI;
 void m11302 (t161 * __this, t4* p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t330 * L_0 = (t330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t330_TI));
		m2947(L_0, (t8*) &_stringLiteral552, &m2947_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		return;
	}
}
extern MethodInfo m11303_MI;
 bool m11303 (t161 * __this, t182  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t182  >::Invoke(&m11298_MI, __this, p0);
		V_0 = L_0;
		if ((((int32_t)V_0) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker1< int32_t >::Invoke(&m11305_MI, __this, V_0);
	}

IL_0013:
	{
		return ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11304_MI;
 int32_t m11304 (t161 * __this, t2022 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t161_TI));
		m11295(NULL, p0, &m11295_MI);
		V_0 = 0;
		V_1 = 0;
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		t199* L_0 = (__this->f1);
		bool L_1 = (bool)VirtFuncInvoker1< bool, t182  >::Invoke(&m11396_MI, p0, (*(t182 *)(t182 *)SZArrayLdElema(L_0, V_0)));
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0031;
	}

IL_0024:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0028:
	{
		int32_t L_2 = (__this->f2);
		if ((((int32_t)V_0) < ((int32_t)L_2)))
		{
			goto IL_000e;
		}
	}

IL_0031:
	{
		int32_t L_3 = (__this->f2);
		if ((((uint32_t)V_0) != ((uint32_t)L_3)))
		{
			goto IL_003c;
		}
	}
	{
		return 0;
	}

IL_003c:
	{
		int32_t L_4 = (__this->f3);
		__this->f3 = ((int32_t)(L_4+1));
		V_1 = ((int32_t)(V_0+1));
		goto IL_0084;
	}

IL_0050:
	{
		t199* L_5 = (__this->f1);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t182  >::Invoke(&m11396_MI, p0, (*(t182 *)(t182 *)SZArrayLdElema(L_5, V_1)));
		if (L_6)
		{
			goto IL_0080;
		}
	}
	{
		t199* L_7 = (__this->f1);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)(L_8+1));
		t199* L_9 = (__this->f1);
		*((t182 *)(t182 *)SZArrayLdElema(L_7, L_8)) = (t182 )(*(t182 *)(t182 *)SZArrayLdElema(L_9, V_1));
	}

IL_0080:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0084:
	{
		int32_t L_10 = (__this->f2);
		if ((((int32_t)V_1) < ((int32_t)L_10)))
		{
			goto IL_0050;
		}
	}
	{
		if ((((int32_t)((int32_t)(V_1-V_0))) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		t199* L_11 = (__this->f1);
		m3755(NULL, (t16 *)(t16 *)L_11, V_0, ((int32_t)(V_1-V_0)), &m3755_MI);
	}

IL_00a2:
	{
		__this->f2 = V_0;
		return ((int32_t)(V_1-V_0));
	}
}
extern MethodInfo m11305_MI;
 void m11305 (t161 * __this, int32_t p0, MethodInfo* method){
	{
		if ((((int32_t)p0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		t1234 * L_1 = (t1234 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1234_TI));
		m6474(L_1, (t8*) &_stringLiteral323, &m6474_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0018:
	{
		m11299(__this, p0, (-1), &m11299_MI);
		t199* L_2 = (__this->f1);
		int32_t L_3 = (__this->f2);
		m3755(NULL, (t16 *)(t16 *)L_2, L_3, 1, &m3755_MI);
		int32_t L_4 = (__this->f3);
		__this->f3 = ((int32_t)(L_4+1));
		return;
	}
}
extern MethodInfo m11306_MI;
 void m11306 (t161 * __this, MethodInfo* method){
	{
		t199* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		m3771(NULL, (t16 *)(t16 *)L_0, 0, L_1, &m3771_MI);
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)(L_2+1));
		return;
	}
}
extern MethodInfo m11307_MI;
 void m11307 (t161 * __this, MethodInfo* method){
	{
		t199* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2029_TI));
		t2029 * L_2 = m11402(NULL, &m11402_MI);
		m18290(NULL, L_0, 0, L_1, L_2, &m18290_MI);
		int32_t L_3 = (__this->f3);
		__this->f3 = ((int32_t)(L_3+1));
		return;
	}
}
extern MethodInfo m11308_MI;
 void m11308 (t161 * __this, t2023 * p0, MethodInfo* method){
	{
		t199* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		m18298(NULL, L_0, L_1, p0, &m18298_MI);
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)(L_2+1));
		return;
	}
}
extern MethodInfo m1784_MI;
 t199* m1784 (t161 * __this, MethodInfo* method){
	t199* V_0 = {0};
	{
		int32_t L_0 = (__this->f2);
		V_0 = ((t199*)SZArrayNew(InitializedTypeInfo(&t199_TI), L_0));
		t199* L_1 = (__this->f1);
		int32_t L_2 = (__this->f2);
		m3758(NULL, (t16 *)(t16 *)L_1, (t16 *)(t16 *)V_0, L_2, &m3758_MI);
		return V_0;
	}
}
extern MethodInfo m11309_MI;
 void m11309 (t161 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		m1595(__this, L_0, &m1595_MI);
		return;
	}
}
extern MethodInfo m1594_MI;
 int32_t m1594 (t161 * __this, MethodInfo* method){
	{
		t199* L_0 = (__this->f1);
		return (((int32_t)(((t16 *)L_0)->max_length)));
	}
}
extern MethodInfo m1595_MI;
 void m1595 (t161 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) >= ((uint32_t)L_0)))
		{
			goto IL_000f;
		}
	}
	{
		t1234 * L_1 = (t1234 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1234_TI));
		m6473(L_1, &m6473_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000f:
	{
		t199** L_2 = &(__this->f1);
		m18286(NULL, L_2, p0, &m18286_MI);
		return;
	}
}
extern MethodInfo m1783_MI;
 int32_t m1783 (t161 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m2045_MI;
 t182  m2045 (t161 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t1234 * L_1 = (t1234 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1234_TI));
		m6474(L_1, (t8*) &_stringLiteral323, &m6474_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		t199* L_2 = (__this->f1);
		return (*(t182 *)(t182 *)SZArrayLdElema(L_2, p0));
	}
}
extern MethodInfo m2046_MI;
 void m2046 (t161 * __this, int32_t p0, t182  p1, MethodInfo* method){
	{
		m11300(__this, p0, &m11300_MI);
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) != ((uint32_t)L_0)))
		{
			goto IL_001b;
		}
	}
	{
		t1234 * L_1 = (t1234 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1234_TI));
		m6474(L_1, (t8*) &_stringLiteral323, &m6474_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001b:
	{
		t199* L_2 = (__this->f1);
		*((t182 *)(t182 *)SZArrayLdElema(L_2, p0)) = (t182 )p1;
		return;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.UIVertex>
extern Il2CppType t18_0_0_32849;
FieldInfo t161_f0_FieldInfo = 
{
	"DefaultCapacity", &t18_0_0_32849, &t161_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t199_0_0_1;
FieldInfo t161_f1_FieldInfo = 
{
	"_items", &t199_0_0_1, &t161_TI, offsetof(t161, f1), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t161_f2_FieldInfo = 
{
	"_size", &t18_0_0_1, &t161_TI, offsetof(t161, f2), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t161_f3_FieldInfo = 
{
	"_version", &t18_0_0_1, &t161_TI, offsetof(t161, f3), &EmptyCustomAttributesCache};
extern Il2CppType t199_0_0_49;
FieldInfo t161_f4_FieldInfo = 
{
	"EmptyArray", &t199_0_0_49, &t161_TI, offsetof(t161_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t161_FIs[] =
{
	&t161_f0_FieldInfo,
	&t161_f1_FieldInfo,
	&t161_f2_FieldInfo,
	&t161_f3_FieldInfo,
	&t161_f4_FieldInfo,
	NULL
};
static const int32_t t161_f0_DefaultValueData = 4;
extern Il2CppType t18_0_0_0;
static Il2CppFieldDefaultValueEntry t161_f0_DefaultValue = 
{
	&t161_f0_FieldInfo, { (char*)&t161_f0_DefaultValueData, &t18_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t161_FDVs[] = 
{
	&t161_f0_DefaultValue,
	NULL
};
extern MethodInfo m11280_MI;
static PropertyInfo t161____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t161_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m11280_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11281_MI;
static PropertyInfo t161____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t161_TI, "System.Collections.ICollection.IsSynchronized", &m11281_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11282_MI;
static PropertyInfo t161____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t161_TI, "System.Collections.ICollection.SyncRoot", &m11282_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11283_MI;
static PropertyInfo t161____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t161_TI, "System.Collections.IList.IsFixedSize", &m11283_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11284_MI;
static PropertyInfo t161____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t161_TI, "System.Collections.IList.IsReadOnly", &m11284_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11285_MI;
extern MethodInfo m11286_MI;
static PropertyInfo t161____System_Collections_IList_Item_PropertyInfo = 
{
	&t161_TI, "System.Collections.IList.Item", &m11285_MI, &m11286_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1594_MI;
extern MethodInfo m1595_MI;
static PropertyInfo t161____Capacity_PropertyInfo = 
{
	&t161_TI, "Capacity", &m1594_MI, &m1595_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1783_MI;
static PropertyInfo t161____Count_PropertyInfo = 
{
	&t161_TI, "Count", &m1783_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2045_MI;
extern MethodInfo m2046_MI;
static PropertyInfo t161____Item_PropertyInfo = 
{
	&t161_TI, "Item", &m2045_MI, &m2046_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t161_PIs[] =
{
	&t161____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t161____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t161____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t161____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t161____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t161____System_Collections_IList_Item_PropertyInfo,
	&t161____Capacity_PropertyInfo,
	&t161____Count_PropertyInfo,
	&t161____Item_PropertyInfo,
	NULL
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m1730_MI = 
{
	".ctor", (methodPointerType)&m1730, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t161_m2900_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m2900_MI = 
{
	".ctor", (methodPointerType)&m2900, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t161_m2900_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11271_MI = 
{
	".cctor", (methodPointerType)&m11271, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t2019_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11272_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m11272, &t161_TI, &t2019_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t161_m11273_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11273_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11273, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t161_m11273_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11274_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11274, &t161_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t161_m11275_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11275_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11275, &t161_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t161_m11275_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t161_m11276_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11276_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11276, &t161_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t161_m11276_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t161_m11277_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11277_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11277, &t161_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t161_m11277_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t161_m11278_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11278_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11278, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t161_m11278_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t161_m11279_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11279_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11279, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t161_m11279_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11280_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11280, &t161_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11281_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11281, &t161_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11282_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11282, &t161_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11283_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11283, &t161_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11284_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11284, &t161_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t161_m11285_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11285_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11285, &t161_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t161_m11285_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t161_m11286_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11286_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11286, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t161_m11286_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t161_m1579_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m1579_MI = 
{
	"Add", (methodPointerType)&m1579, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t182, t161_m1579_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t161_m11287_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11287_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m11287, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t161_m11287_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t394_0_0_0;
static ParameterInfo t161_m11288_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t394_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11288_MI = 
{
	"AddCollection", (methodPointerType)&m11288, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t161_m11288_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2020_0_0_0;
static ParameterInfo t161_m11289_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2020_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11289_MI = 
{
	"AddEnumerable", (methodPointerType)&m11289, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t161_m11289_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2020_0_0_0;
static ParameterInfo t161_m11290_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2020_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11290_MI = 
{
	"AddRange", (methodPointerType)&m11290, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t161_m11290_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t2021_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11291_MI = 
{
	"AsReadOnly", (methodPointerType)&m11291, &t161_TI, &t2021_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m1596_MI = 
{
	"Clear", (methodPointerType)&m1596, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t161_m11292_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11292_MI = 
{
	"Contains", (methodPointerType)&m11292, &t161_TI, &t19_0_0_0, RuntimeInvoker_t19_t182, t161_m11292_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t199_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t161_m11293_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t199_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11293_MI = 
{
	"CopyTo", (methodPointerType)&m11293, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t161_m11293_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2022_0_0_0;
static ParameterInfo t161_m11294_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2022_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t182_0_0_0;
extern void* RuntimeInvoker_t182_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11294_MI = 
{
	"Find", (methodPointerType)&m11294, &t161_TI, &t182_0_0_0, RuntimeInvoker_t182_t4, t161_m11294_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2022_0_0_0;
static ParameterInfo t161_m11295_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2022_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11295_MI = 
{
	"CheckMatch", (methodPointerType)&m11295, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t161_m11295_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
extern Il2CppType t2022_0_0_0;
static ParameterInfo t161_m11296_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2022_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11296_MI = 
{
	"GetIndex", (methodPointerType)&m11296, &t161_TI, &t18_0_0_0, RuntimeInvoker_t18_t18_t18_t4, t161_m11296_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t2024_0_0_0;
extern void* RuntimeInvoker_t2024 (MethodInfo* method, void* obj, void** args);
MethodInfo m11297_MI = 
{
	"GetEnumerator", (methodPointerType)&m11297, &t161_TI, &t2024_0_0_0, RuntimeInvoker_t2024, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t161_m11298_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11298_MI = 
{
	"IndexOf", (methodPointerType)&m11298, &t161_TI, &t18_0_0_0, RuntimeInvoker_t18_t182, t161_m11298_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t161_m11299_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11299_MI = 
{
	"Shift", (methodPointerType)&m11299, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t161_m11299_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t161_m11300_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11300_MI = 
{
	"CheckIndex", (methodPointerType)&m11300, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t161_m11300_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t161_m11301_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11301_MI = 
{
	"Insert", (methodPointerType)&m11301, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t182, t161_m11301_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2020_0_0_0;
static ParameterInfo t161_m11302_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2020_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11302_MI = 
{
	"CheckCollection", (methodPointerType)&m11302, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t161_m11302_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t161_m11303_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11303_MI = 
{
	"Remove", (methodPointerType)&m11303, &t161_TI, &t19_0_0_0, RuntimeInvoker_t19_t182, t161_m11303_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2022_0_0_0;
static ParameterInfo t161_m11304_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2022_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11304_MI = 
{
	"RemoveAll", (methodPointerType)&m11304, &t161_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t161_m11304_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t161_m11305_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11305_MI = 
{
	"RemoveAt", (methodPointerType)&m11305, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t161_m11305_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11306_MI = 
{
	"Reverse", (methodPointerType)&m11306, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11307_MI = 
{
	"Sort", (methodPointerType)&m11307, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2023_0_0_0;
static ParameterInfo t161_m11308_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2023_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11308_MI = 
{
	"Sort", (methodPointerType)&m11308, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t161_m11308_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t199_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m1784_MI = 
{
	"ToArray", (methodPointerType)&m1784, &t161_TI, &t199_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11309_MI = 
{
	"TrimExcess", (methodPointerType)&m11309, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m1594_MI = 
{
	"get_Capacity", (methodPointerType)&m1594, &t161_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t161_m1595_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m1595_MI = 
{
	"set_Capacity", (methodPointerType)&m1595, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t161_m1595_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m1783_MI = 
{
	"get_Count", (methodPointerType)&m1783, &t161_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t161_m2045_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t182_0_0_0;
extern void* RuntimeInvoker_t182_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m2045_MI = 
{
	"get_Item", (methodPointerType)&m2045, &t161_TI, &t182_0_0_0, RuntimeInvoker_t182_t18, t161_m2045_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t161_m2046_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m2046_MI = 
{
	"set_Item", (methodPointerType)&m2046, &t161_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t182, t161_m2046_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t161_MIs[] =
{
	&m1730_MI,
	&m2900_MI,
	&m11271_MI,
	&m11272_MI,
	&m11273_MI,
	&m11274_MI,
	&m11275_MI,
	&m11276_MI,
	&m11277_MI,
	&m11278_MI,
	&m11279_MI,
	&m11280_MI,
	&m11281_MI,
	&m11282_MI,
	&m11283_MI,
	&m11284_MI,
	&m11285_MI,
	&m11286_MI,
	&m1579_MI,
	&m11287_MI,
	&m11288_MI,
	&m11289_MI,
	&m11290_MI,
	&m11291_MI,
	&m1596_MI,
	&m11292_MI,
	&m11293_MI,
	&m11294_MI,
	&m11295_MI,
	&m11296_MI,
	&m11297_MI,
	&m11298_MI,
	&m11299_MI,
	&m11300_MI,
	&m11301_MI,
	&m11302_MI,
	&m11303_MI,
	&m11304_MI,
	&m11305_MI,
	&m11306_MI,
	&m11307_MI,
	&m11308_MI,
	&m1784_MI,
	&m11309_MI,
	&m1594_MI,
	&m1595_MI,
	&m1783_MI,
	&m2045_MI,
	&m2046_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11274_MI;
extern MethodInfo m1783_MI;
extern MethodInfo m11281_MI;
extern MethodInfo m11282_MI;
extern MethodInfo m11273_MI;
extern MethodInfo m11283_MI;
extern MethodInfo m11284_MI;
extern MethodInfo m11285_MI;
extern MethodInfo m11286_MI;
extern MethodInfo m11275_MI;
extern MethodInfo m1596_MI;
extern MethodInfo m11276_MI;
extern MethodInfo m11277_MI;
extern MethodInfo m11278_MI;
extern MethodInfo m11279_MI;
extern MethodInfo m11305_MI;
extern MethodInfo m1783_MI;
extern MethodInfo m11280_MI;
extern MethodInfo m1579_MI;
extern MethodInfo m1596_MI;
extern MethodInfo m11292_MI;
extern MethodInfo m11293_MI;
extern MethodInfo m11303_MI;
extern MethodInfo m11272_MI;
extern MethodInfo m11298_MI;
extern MethodInfo m11301_MI;
extern MethodInfo m11305_MI;
extern MethodInfo m2045_MI;
extern MethodInfo m2046_MI;
static MethodInfo* t161_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11274_MI,
	&m1783_MI,
	&m11281_MI,
	&m11282_MI,
	&m11273_MI,
	&m11283_MI,
	&m11284_MI,
	&m11285_MI,
	&m11286_MI,
	&m11275_MI,
	&m1596_MI,
	&m11276_MI,
	&m11277_MI,
	&m11278_MI,
	&m11279_MI,
	&m11305_MI,
	&m1783_MI,
	&m11280_MI,
	&m1579_MI,
	&m1596_MI,
	&m11292_MI,
	&m11293_MI,
	&m11303_MI,
	&m11272_MI,
	&m11298_MI,
	&m11301_MI,
	&m11305_MI,
	&m2045_MI,
	&m2046_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t394_TI;
extern TypeInfo t2020_TI;
extern TypeInfo t393_TI;
static TypeInfo* t161_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t394_TI,
	&t2020_TI,
	&t393_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t394_TI;
extern TypeInfo t2020_TI;
extern TypeInfo t393_TI;
static Il2CppInterfaceOffsetPair t161_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t394_TI, 20},
	{ &t2020_TI, 27},
	{ &t393_TI, 28},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t161_0_0_0;
extern Il2CppType t161_1_0_0;
extern TypeInfo t4_TI;
struct t161;
extern TypeInfo t161_TI;
extern Il2CppGenericClass t161_GC;
extern CustomAttributesCache t840__CustomAttributeCache;
TypeInfo t161_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t161_MIs, t161_PIs, t161_FIs, NULL, &t4_TI, NULL, NULL, &t161_TI, t161_ITIs, t161_VT, &t840__CustomAttributeCache, &t161_TI, &t161_0_0_0, &t161_1_0_0, t161_IOs, &t161_GC, NULL, t161_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t161), 0, -1, sizeof(t161_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t394_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
extern MethodInfo m1927_MI;
static PropertyInfo t394____Count_PropertyInfo = 
{
	&t394_TI, "Count", &m1927_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24384_MI;
static PropertyInfo t394____IsReadOnly_PropertyInfo = 
{
	&t394_TI, "IsReadOnly", &m24384_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t394_PIs[] =
{
	&t394____Count_PropertyInfo,
	&t394____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t394_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m1927_MI = 
{
	"get_Count", NULL, &t394_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t394_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m24384_MI = 
{
	"get_IsReadOnly", NULL, &t394_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t394_m24385_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t394_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m24385_MI = 
{
	"Add", NULL, &t394_TI, &t17_0_0_0, RuntimeInvoker_t17_t182, t394_m24385_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t394_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m24386_MI = 
{
	"Clear", NULL, &t394_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t394_m24387_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t394_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m24387_MI = 
{
	"Contains", NULL, &t394_TI, &t19_0_0_0, RuntimeInvoker_t19_t182, t394_m24387_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t199_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t394_m24381_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t199_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t394_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24381_MI = 
{
	"CopyTo", NULL, &t394_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t394_m24381_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t394_m24388_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t394_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m24388_MI = 
{
	"Remove", NULL, &t394_TI, &t19_0_0_0, RuntimeInvoker_t19_t182, t394_m24388_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t394_MIs[] =
{
	&m1927_MI,
	&m24384_MI,
	&m24385_MI,
	&m24386_MI,
	&m24387_MI,
	&m24381_MI,
	&m24388_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t2020_TI;
static TypeInfo* t394_ITIs[] = 
{
	&t592_TI,
	&t2020_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t394_0_0_0;
extern Il2CppType t394_1_0_0;
struct t394;
extern TypeInfo t394_TI;
extern Il2CppGenericClass t394_GC;
TypeInfo t394_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t394_MIs, t394_PIs, NULL, NULL, NULL, NULL, NULL, &t394_TI, t394_ITIs, NULL, &EmptyCustomAttributesCache, &t394_TI, &t394_0_0_0, &t394_1_0_0, NULL, &t394_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2020_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
extern TypeInfo t2020_TI;
extern Il2CppType t2019_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m24382_MI = 
{
	"GetEnumerator", NULL, &t2020_TI, &t2019_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2020_MIs[] =
{
	&m24382_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t2020_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2020_0_0_0;
extern Il2CppType t2020_1_0_0;
struct t2020;
extern TypeInfo t2020_TI;
extern Il2CppGenericClass t2020_GC;
TypeInfo t2020_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2020_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2020_TI, t2020_ITIs, NULL, &EmptyCustomAttributesCache, &t2020_TI, &t2020_0_0_0, &t2020_1_0_0, NULL, &t2020_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2019_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
extern MethodInfo m24383_MI;
static PropertyInfo t2019____Current_PropertyInfo = 
{
	&t2019_TI, "Current", &m24383_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2019_PIs[] =
{
	&t2019____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2019_TI;
extern Il2CppType t182_0_0_0;
extern void* RuntimeInvoker_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m24383_MI = 
{
	"get_Current", NULL, &t2019_TI, &t182_0_0_0, RuntimeInvoker_t182, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2019_MIs[] =
{
	&m24383_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t2019_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2019_0_0_0;
extern Il2CppType t2019_1_0_0;
struct t2019;
extern TypeInfo t2019_TI;
extern Il2CppGenericClass t2019_GC;
TypeInfo t2019_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2019_MIs, t2019_PIs, NULL, NULL, NULL, NULL, NULL, &t2019_TI, t2019_ITIs, NULL, &EmptyCustomAttributesCache, &t2019_TI, &t2019_0_0_0, &t2019_1_0_0, NULL, &t2019_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2025.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2025_TI;
#include "t2025MD.h"

extern TypeInfo t2025_TI;
extern TypeInfo t182_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m11314_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m18275_MI;
struct t16;
 t182  m18275 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18275_MI;


extern MethodInfo m11310_MI;
 void m11310 (t2025 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m11311_MI;
 t4 * m11311 (t2025 * __this, MethodInfo* method){
	{
		t182  L_0 = m11314(__this, &m11314_MI);
		t182  L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t182_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m11312_MI;
 void m11312 (t2025 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m11313_MI;
 bool m11313 (t2025 * __this, MethodInfo* method){
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
		t16 * L_1 = (__this->f0);
		int32_t L_2 = m3710(L_1, &m3710_MI);
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
extern MethodInfo m11314_MI;
 t182  m11314 (t2025 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1270 * L_1 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6907(L_1, (t8*) &_stringLiteral370, &m6907_MI);
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
		t1270 * L_3 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6907(L_3, (t8*) &_stringLiteral371, &m6907_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t16 * L_4 = (__this->f0);
		t16 * L_5 = (__this->f0);
		int32_t L_6 = m3710(L_5, &m3710_MI);
		int32_t L_7 = (__this->f1);
		t182  L_8 = m18275(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18275_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UIVertex>
extern Il2CppType t16_0_0_1;
FieldInfo t2025_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2025_TI, offsetof(t2025, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2025_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2025_TI, offsetof(t2025, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2025_FIs[] =
{
	&t2025_f0_FieldInfo,
	&t2025_f1_FieldInfo,
	NULL
};
extern MethodInfo m11311_MI;
static PropertyInfo t2025____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2025_TI, "System.Collections.IEnumerator.Current", &m11311_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11314_MI;
static PropertyInfo t2025____Current_PropertyInfo = 
{
	&t2025_TI, "Current", &m11314_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2025_PIs[] =
{
	&t2025____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2025____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2025_m11310_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2025_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11310_MI = 
{
	".ctor", (methodPointerType)&m11310, &t2025_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2025_m11310_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2025_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11311_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11311, &t2025_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2025_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11312_MI = 
{
	"Dispose", (methodPointerType)&m11312, &t2025_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2025_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11313_MI = 
{
	"MoveNext", (methodPointerType)&m11313, &t2025_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2025_TI;
extern Il2CppType t182_0_0_0;
extern void* RuntimeInvoker_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11314_MI = 
{
	"get_Current", (methodPointerType)&m11314, &t2025_TI, &t182_0_0_0, RuntimeInvoker_t182, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2025_MIs[] =
{
	&m11310_MI,
	&m11311_MI,
	&m11312_MI,
	&m11313_MI,
	&m11314_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m11311_MI;
extern MethodInfo m11313_MI;
extern MethodInfo m11312_MI;
extern MethodInfo m11314_MI;
static MethodInfo* t2025_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m11311_MI,
	&m11313_MI,
	&m11312_MI,
	&m11314_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2019_TI;
static TypeInfo* t2025_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t2019_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2019_TI;
static Il2CppInterfaceOffsetPair t2025_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t2019_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2025_0_0_0;
extern Il2CppType t2025_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2025_TI;
extern Il2CppGenericClass t2025_GC;
extern TypeInfo t16_TI;
TypeInfo t2025_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2025_MIs, t2025_PIs, t2025_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2025_TI, t2025_ITIs, t2025_VT, &EmptyCustomAttributesCache, &t2025_TI, &t2025_0_0_0, &t2025_1_0_0, t2025_IOs, &t2025_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2025)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t393_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UIVertex>
extern MethodInfo m1925_MI;
extern MethodInfo m24389_MI;
static PropertyInfo t393____Item_PropertyInfo = 
{
	&t393_TI, "Item", &m1925_MI, &m24389_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t393_PIs[] =
{
	&t393____Item_PropertyInfo,
	NULL
};
extern Il2CppType t182_0_0_0;
static ParameterInfo t393_m24390_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t393_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m24390_MI = 
{
	"IndexOf", NULL, &t393_TI, &t18_0_0_0, RuntimeInvoker_t18_t182, t393_m24390_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t393_m24391_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t393_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m24391_MI = 
{
	"Insert", NULL, &t393_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t182, t393_m24391_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t393_m24392_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t393_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m24392_MI = 
{
	"RemoveAt", NULL, &t393_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t393_m24392_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t393_m1925_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t393_TI;
extern Il2CppType t182_0_0_0;
extern void* RuntimeInvoker_t182_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m1925_MI = 
{
	"get_Item", NULL, &t393_TI, &t182_0_0_0, RuntimeInvoker_t182_t18, t393_m1925_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t393_m24389_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t393_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m24389_MI = 
{
	"set_Item", NULL, &t393_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t182, t393_m24389_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t393_MIs[] =
{
	&m24390_MI,
	&m24391_MI,
	&m24392_MI,
	&m1925_MI,
	&m24389_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t394_TI;
extern TypeInfo t2020_TI;
static TypeInfo* t393_ITIs[] = 
{
	&t592_TI,
	&t394_TI,
	&t2020_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t393_0_0_0;
extern Il2CppType t393_1_0_0;
struct t393;
extern TypeInfo t393_TI;
extern Il2CppGenericClass t393_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t393_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t393_MIs, t393_PIs, NULL, NULL, NULL, NULL, NULL, &t393_TI, t393_ITIs, NULL, &t1401__CustomAttributeCache, &t393_TI, &t393_0_0_0, &t393_1_0_0, NULL, &t393_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2024_TI;

extern TypeInfo t2024_TI;
extern TypeInfo t1270_TI;
extern TypeInfo t182_TI;
extern TypeInfo t161_TI;
extern TypeInfo t294_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m11318_MI;
extern MethodInfo m6906_MI;
extern MethodInfo m1423_MI;
extern MethodInfo m2995_MI;
extern MethodInfo m7111_MI;
extern MethodInfo m6907_MI;


extern MethodInfo m11315_MI;
 void m11315 (t2024 * __this, t161 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f3);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m11316_MI;
 t4 * m11316 (t2024 * __this, MethodInfo* method){
	{
		m11318(__this, &m11318_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t1270 * L_1 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6906(L_1, &m6906_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		t182  L_2 = (__this->f3);
		t182  L_3 = L_2;
		t4 * L_4 = Box(InitializedTypeInfo(&t182_TI), &L_3);
		return L_4;
	}
}
extern MethodInfo m11317_MI;
 void m11317 (t2024 * __this, MethodInfo* method){
	{
		__this->f0 = (t161 *)NULL;
		return;
	}
}
extern MethodInfo m11318_MI;
 void m11318 (t2024 * __this, MethodInfo* method){
	{
		t161 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		t2024  L_1 = (*(t2024 *)__this);
		t4 * L_2 = Box(InitializedTypeInfo(&t2024_TI), &L_1);
		t294 * L_3 = m1423(L_2, &m1423_MI);
		t8* L_4 = (t8*)VirtFuncInvoker0< t8* >::Invoke(&m2995_MI, L_3);
		t1287 * L_5 = (t1287 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1287_TI));
		m7111(L_5, L_4, &m7111_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_0023:
	{
		int32_t L_6 = (__this->f2);
		t161 * L_7 = (__this->f0);
		int32_t L_8 = (L_7->f3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		t1270 * L_9 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6907(L_9, (t8*) &_stringLiteral553, &m6907_MI);
		il2cpp_codegen_raise_exception (L_9);
	}

IL_0041:
	{
		return;
	}
}
extern MethodInfo m11319_MI;
 bool m11319 (t2024 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	{
		m11318(__this, &m11318_MI);
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
		int32_t L_1 = (__this->f1);
		t161 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		t161 * L_4 = (__this->f0);
		t199* L_5 = (L_4->f1);
		int32_t L_6 = (__this->f1);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f1 = ((int32_t)(L_7+1));
		__this->f3 = (*(t182 *)(t182 *)SZArrayLdElema(L_5, V_0));
		return 1;
	}

IL_004d:
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m11320_MI;
 t182  m11320 (t2024 * __this, MethodInfo* method){
	{
		t182  L_0 = (__this->f3);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
extern Il2CppType t161_0_0_1;
FieldInfo t2024_f0_FieldInfo = 
{
	"l", &t161_0_0_1, &t2024_TI, offsetof(t2024, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2024_f1_FieldInfo = 
{
	"next", &t18_0_0_1, &t2024_TI, offsetof(t2024, f1) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2024_f2_FieldInfo = 
{
	"ver", &t18_0_0_1, &t2024_TI, offsetof(t2024, f2) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t182_0_0_1;
FieldInfo t2024_f3_FieldInfo = 
{
	"current", &t182_0_0_1, &t2024_TI, offsetof(t2024, f3) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2024_FIs[] =
{
	&t2024_f0_FieldInfo,
	&t2024_f1_FieldInfo,
	&t2024_f2_FieldInfo,
	&t2024_f3_FieldInfo,
	NULL
};
extern MethodInfo m11316_MI;
static PropertyInfo t2024____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2024_TI, "System.Collections.IEnumerator.Current", &m11316_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11320_MI;
static PropertyInfo t2024____Current_PropertyInfo = 
{
	&t2024_TI, "Current", &m11320_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2024_PIs[] =
{
	&t2024____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2024____Current_PropertyInfo,
	NULL
};
extern Il2CppType t161_0_0_0;
static ParameterInfo t2024_m11315_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t161_0_0_0},
};
extern TypeInfo t2024_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11315_MI = 
{
	".ctor", (methodPointerType)&m11315, &t2024_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2024_m11315_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2024_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11316_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11316, &t2024_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2024_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11317_MI = 
{
	"Dispose", (methodPointerType)&m11317, &t2024_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2024_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11318_MI = 
{
	"VerifyState", (methodPointerType)&m11318, &t2024_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2024_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11319_MI = 
{
	"MoveNext", (methodPointerType)&m11319, &t2024_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2024_TI;
extern Il2CppType t182_0_0_0;
extern void* RuntimeInvoker_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11320_MI = 
{
	"get_Current", (methodPointerType)&m11320, &t2024_TI, &t182_0_0_0, RuntimeInvoker_t182, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2024_MIs[] =
{
	&m11315_MI,
	&m11316_MI,
	&m11317_MI,
	&m11318_MI,
	&m11319_MI,
	&m11320_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m11316_MI;
extern MethodInfo m11319_MI;
extern MethodInfo m11317_MI;
extern MethodInfo m11320_MI;
static MethodInfo* t2024_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m11316_MI,
	&m11319_MI,
	&m11317_MI,
	&m11320_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2019_TI;
static TypeInfo* t2024_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t2019_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2019_TI;
static Il2CppInterfaceOffsetPair t2024_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t2019_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2024_0_0_0;
extern Il2CppType t2024_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2024_TI;
extern Il2CppGenericClass t2024_GC;
extern TypeInfo t840_TI;
TypeInfo t2024_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2024_MIs, t2024_PIs, t2024_FIs, NULL, &t101_TI, NULL, &t840_TI, &t2024_TI, t2024_ITIs, t2024_VT, &EmptyCustomAttributesCache, &t2024_TI, &t2024_0_0_0, &t2024_1_0_0, t2024_IOs, &t2024_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2024)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2021_TI;

extern TypeInfo t2021_TI;
extern TypeInfo t182_TI;
extern TypeInfo t18_TI;
extern TypeInfo t337_TI;
extern TypeInfo t393_TI;
extern TypeInfo t394_TI;
extern TypeInfo t330_TI;
extern TypeInfo t641_TI;
extern TypeInfo t17_TI;
extern TypeInfo t16_TI;
extern TypeInfo t592_TI;
extern TypeInfo t27_TI;
extern TypeInfo t19_TI;
extern TypeInfo t199_TI;
extern TypeInfo t2020_TI;
extern TypeInfo t2019_TI;
#include "t2026MD.h"
extern MethodInfo m11350_MI;
extern MethodInfo m1510_MI;
extern MethodInfo m1925_MI;
extern MethodInfo m1927_MI;
extern MethodInfo m24_MI;
extern MethodInfo m2947_MI;
extern MethodInfo m7400_MI;
extern MethodInfo m7309_MI;
extern MethodInfo m11382_MI;
extern MethodInfo m24387_MI;
extern MethodInfo m24390_MI;
extern MethodInfo m24381_MI;
extern MethodInfo m24382_MI;


extern MethodInfo m11321_MI;
 void m11321 (t2021 * __this, t4* p0, MethodInfo* method){
	{
		m24(__this, &m24_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t330 * L_0 = (t330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t330_TI));
		m2947(L_0, (t8*) &_stringLiteral554, &m2947_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m11322_MI;
 void m11322 (t2021 * __this, t182  p0, MethodInfo* method){
	{
		t337 * L_0 = (t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t337_TI));
		m1510(L_0, &m1510_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m11323_MI;
 void m11323 (t2021 * __this, MethodInfo* method){
	{
		t337 * L_0 = (t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t337_TI));
		m1510(L_0, &m1510_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m11324_MI;
 void m11324 (t2021 * __this, int32_t p0, t182  p1, MethodInfo* method){
	{
		t337 * L_0 = (t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t337_TI));
		m1510(L_0, &m1510_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m11325_MI;
 bool m11325 (t2021 * __this, t182  p0, MethodInfo* method){
	{
		t337 * L_0 = (t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t337_TI));
		m1510(L_0, &m1510_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m11326_MI;
 void m11326 (t2021 * __this, int32_t p0, MethodInfo* method){
	{
		t337 * L_0 = (t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t337_TI));
		m1510(L_0, &m1510_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m11327_MI;
 t182  m11327 (t2021 * __this, int32_t p0, MethodInfo* method){
	{
		t182  L_0 = (t182 )VirtFuncInvoker1< t182 , int32_t >::Invoke(&m11350_MI, __this, p0);
		return L_0;
	}
}
extern MethodInfo m11328_MI;
 void m11328 (t2021 * __this, int32_t p0, t182  p1, MethodInfo* method){
	{
		t337 * L_0 = (t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t337_TI));
		m1510(L_0, &m1510_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m11329_MI;
 bool m11329 (t2021 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m11330_MI;
 void m11330 (t2021 * __this, t16 * p0, int32_t p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< t16 *, int32_t >::Invoke(&m7400_MI, ((t4 *)Castclass(L_0, InitializedTypeInfo(&t641_TI))), p0, p1);
		return;
	}
}
extern MethodInfo m11331_MI;
 t4 * m11331 (t2021 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t4 * L_1 = (t4 *)InterfaceFuncInvoker0< t4 * >::Invoke(&m7309_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m11332_MI;
 int32_t m11332 (t2021 * __this, t4 * p0, MethodInfo* method){
	{
		t337 * L_0 = (t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t337_TI));
		m1510(L_0, &m1510_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m11333_MI;
 void m11333 (t2021 * __this, MethodInfo* method){
	{
		t337 * L_0 = (t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t337_TI));
		m1510(L_0, &m1510_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m11334_MI;
 bool m11334 (t2021 * __this, t4 * p0, MethodInfo* method){
	{
		bool L_0 = m11382(NULL, p0, &m11382_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t4* L_1 = (__this->f0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, t182  >::Invoke(&m24387_MI, L_1, ((*(t182 *)((t182 *)UnBox (p0, InitializedTypeInfo(&t182_TI))))));
		return L_2;
	}

IL_001a:
	{
		return 0;
	}
}
extern MethodInfo m11335_MI;
 int32_t m11335 (t2021 * __this, t4 * p0, MethodInfo* method){
	{
		bool L_0 = m11382(NULL, p0, &m11382_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t4* L_1 = (__this->f0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t182  >::Invoke(&m24390_MI, L_1, ((*(t182 *)((t182 *)UnBox (p0, InitializedTypeInfo(&t182_TI))))));
		return L_2;
	}

IL_001a:
	{
		return (-1);
	}
}
extern MethodInfo m11336_MI;
 void m11336 (t2021 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	{
		t337 * L_0 = (t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t337_TI));
		m1510(L_0, &m1510_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m11337_MI;
 void m11337 (t2021 * __this, t4 * p0, MethodInfo* method){
	{
		t337 * L_0 = (t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t337_TI));
		m1510(L_0, &m1510_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m11338_MI;
 void m11338 (t2021 * __this, int32_t p0, MethodInfo* method){
	{
		t337 * L_0 = (t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t337_TI));
		m1510(L_0, &m1510_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m11339_MI;
 bool m11339 (t2021 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m11340_MI;
 t4 * m11340 (t2021 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m11341_MI;
 bool m11341 (t2021 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m11342_MI;
 bool m11342 (t2021 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m11343_MI;
 t4 * m11343 (t2021 * __this, int32_t p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t182  L_1 = (t182 )InterfaceFuncInvoker1< t182 , int32_t >::Invoke(&m1925_MI, L_0, p0);
		t182  L_2 = L_1;
		t4 * L_3 = Box(InitializedTypeInfo(&t182_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m11344_MI;
 void m11344 (t2021 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	{
		t337 * L_0 = (t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t337_TI));
		m1510(L_0, &m1510_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m11345_MI;
 bool m11345 (t2021 * __this, t182  p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker1< bool, t182  >::Invoke(&m24387_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m11346_MI;
 void m11346 (t2021 * __this, t199* p0, int32_t p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< t199*, int32_t >::Invoke(&m24381_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m11347_MI;
 t4* m11347 (t2021 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t4* L_1 = (t4*)InterfaceFuncInvoker0< t4* >::Invoke(&m24382_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m11348_MI;
 int32_t m11348 (t2021 * __this, t182  p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker1< int32_t, t182  >::Invoke(&m24390_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m11349_MI;
 int32_t m11349 (t2021 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m1927_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m11350_MI;
 t182  m11350 (t2021 * __this, int32_t p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t182  L_1 = (t182 )InterfaceFuncInvoker1< t182 , int32_t >::Invoke(&m1925_MI, L_0, p0);
		return L_1;
	}
}
// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
extern Il2CppType t393_0_0_1;
FieldInfo t2021_f0_FieldInfo = 
{
	"list", &t393_0_0_1, &t2021_TI, offsetof(t2021, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2021_FIs[] =
{
	&t2021_f0_FieldInfo,
	NULL
};
extern MethodInfo m11327_MI;
extern MethodInfo m11328_MI;
static PropertyInfo t2021____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2021_TI, "System.Collections.Generic.IList<T>.Item", &m11327_MI, &m11328_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11329_MI;
static PropertyInfo t2021____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2021_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m11329_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11339_MI;
static PropertyInfo t2021____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2021_TI, "System.Collections.ICollection.IsSynchronized", &m11339_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11340_MI;
static PropertyInfo t2021____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2021_TI, "System.Collections.ICollection.SyncRoot", &m11340_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11341_MI;
static PropertyInfo t2021____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2021_TI, "System.Collections.IList.IsFixedSize", &m11341_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11342_MI;
static PropertyInfo t2021____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2021_TI, "System.Collections.IList.IsReadOnly", &m11342_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11343_MI;
extern MethodInfo m11344_MI;
static PropertyInfo t2021____System_Collections_IList_Item_PropertyInfo = 
{
	&t2021_TI, "System.Collections.IList.Item", &m11343_MI, &m11344_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11349_MI;
static PropertyInfo t2021____Count_PropertyInfo = 
{
	&t2021_TI, "Count", &m11349_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11350_MI;
static PropertyInfo t2021____Item_PropertyInfo = 
{
	&t2021_TI, "Item", &m11350_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2021_PIs[] =
{
	&t2021____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2021____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2021____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2021____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2021____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2021____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2021____System_Collections_IList_Item_PropertyInfo,
	&t2021____Count_PropertyInfo,
	&t2021____Item_PropertyInfo,
	NULL
};
extern Il2CppType t393_0_0_0;
static ParameterInfo t2021_m11321_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t393_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11321_MI = 
{
	".ctor", (methodPointerType)&m11321, &t2021_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2021_m11321_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t2021_m11322_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11322_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m11322, &t2021_TI, &t17_0_0_0, RuntimeInvoker_t17_t182, t2021_m11322_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2021_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11323_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m11323, &t2021_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t2021_m11324_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11324_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m11324, &t2021_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t182, t2021_m11324_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t2021_m11325_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11325_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m11325, &t2021_TI, &t19_0_0_0, RuntimeInvoker_t19_t182, t2021_m11325_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2021_m11326_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11326_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m11326, &t2021_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2021_m11326_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2021_m11327_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t182_0_0_0;
extern void* RuntimeInvoker_t182_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11327_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m11327, &t2021_TI, &t182_0_0_0, RuntimeInvoker_t182_t18, t2021_m11327_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t2021_m11328_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11328_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m11328, &t2021_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t182, t2021_m11328_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2021_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11329_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11329, &t2021_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2021_m11330_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11330_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11330, &t2021_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2021_m11330_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2021_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11331_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11331, &t2021_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2021_m11332_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11332_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11332, &t2021_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2021_m11332_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2021_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11333_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m11333, &t2021_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2021_m11334_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11334_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11334, &t2021_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2021_m11334_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2021_m11335_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11335_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11335, &t2021_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2021_m11335_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2021_m11336_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11336_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11336, &t2021_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2021_m11336_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2021_m11337_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11337_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11337, &t2021_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2021_m11337_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2021_m11338_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11338_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m11338, &t2021_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2021_m11338_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2021_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11339_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11339, &t2021_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2021_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11340_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11340, &t2021_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2021_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11341_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11341, &t2021_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2021_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11342_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11342, &t2021_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2021_m11343_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11343_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11343, &t2021_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t2021_m11343_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2021_m11344_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11344_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11344, &t2021_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2021_m11344_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t2021_m11345_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11345_MI = 
{
	"Contains", (methodPointerType)&m11345, &t2021_TI, &t19_0_0_0, RuntimeInvoker_t19_t182, t2021_m11345_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t199_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2021_m11346_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t199_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11346_MI = 
{
	"CopyTo", (methodPointerType)&m11346, &t2021_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2021_m11346_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2021_TI;
extern Il2CppType t2019_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11347_MI = 
{
	"GetEnumerator", (methodPointerType)&m11347, &t2021_TI, &t2019_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t2021_m11348_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11348_MI = 
{
	"IndexOf", (methodPointerType)&m11348, &t2021_TI, &t18_0_0_0, RuntimeInvoker_t18_t182, t2021_m11348_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2021_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11349_MI = 
{
	"get_Count", (methodPointerType)&m11349, &t2021_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2021_m11350_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2021_TI;
extern Il2CppType t182_0_0_0;
extern void* RuntimeInvoker_t182_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11350_MI = 
{
	"get_Item", (methodPointerType)&m11350, &t2021_TI, &t182_0_0_0, RuntimeInvoker_t182_t18, t2021_m11350_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2021_MIs[] =
{
	&m11321_MI,
	&m11322_MI,
	&m11323_MI,
	&m11324_MI,
	&m11325_MI,
	&m11326_MI,
	&m11327_MI,
	&m11328_MI,
	&m11329_MI,
	&m11330_MI,
	&m11331_MI,
	&m11332_MI,
	&m11333_MI,
	&m11334_MI,
	&m11335_MI,
	&m11336_MI,
	&m11337_MI,
	&m11338_MI,
	&m11339_MI,
	&m11340_MI,
	&m11341_MI,
	&m11342_MI,
	&m11343_MI,
	&m11344_MI,
	&m11345_MI,
	&m11346_MI,
	&m11347_MI,
	&m11348_MI,
	&m11349_MI,
	&m11350_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11331_MI;
extern MethodInfo m11349_MI;
extern MethodInfo m11339_MI;
extern MethodInfo m11340_MI;
extern MethodInfo m11330_MI;
extern MethodInfo m11341_MI;
extern MethodInfo m11342_MI;
extern MethodInfo m11343_MI;
extern MethodInfo m11344_MI;
extern MethodInfo m11332_MI;
extern MethodInfo m11333_MI;
extern MethodInfo m11334_MI;
extern MethodInfo m11335_MI;
extern MethodInfo m11336_MI;
extern MethodInfo m11337_MI;
extern MethodInfo m11338_MI;
extern MethodInfo m11349_MI;
extern MethodInfo m11329_MI;
extern MethodInfo m11322_MI;
extern MethodInfo m11323_MI;
extern MethodInfo m11345_MI;
extern MethodInfo m11346_MI;
extern MethodInfo m11325_MI;
extern MethodInfo m11348_MI;
extern MethodInfo m11324_MI;
extern MethodInfo m11326_MI;
extern MethodInfo m11327_MI;
extern MethodInfo m11328_MI;
extern MethodInfo m11347_MI;
extern MethodInfo m11350_MI;
static MethodInfo* t2021_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11331_MI,
	&m11349_MI,
	&m11339_MI,
	&m11340_MI,
	&m11330_MI,
	&m11341_MI,
	&m11342_MI,
	&m11343_MI,
	&m11344_MI,
	&m11332_MI,
	&m11333_MI,
	&m11334_MI,
	&m11335_MI,
	&m11336_MI,
	&m11337_MI,
	&m11338_MI,
	&m11349_MI,
	&m11329_MI,
	&m11322_MI,
	&m11323_MI,
	&m11345_MI,
	&m11346_MI,
	&m11325_MI,
	&m11348_MI,
	&m11324_MI,
	&m11326_MI,
	&m11327_MI,
	&m11328_MI,
	&m11347_MI,
	&m11350_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t394_TI;
extern TypeInfo t393_TI;
extern TypeInfo t2020_TI;
static TypeInfo* t2021_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t394_TI,
	&t393_TI,
	&t2020_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t394_TI;
extern TypeInfo t393_TI;
extern TypeInfo t2020_TI;
static Il2CppInterfaceOffsetPair t2021_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t394_TI, 20},
	{ &t393_TI, 27},
	{ &t2020_TI, 32},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2021_0_0_0;
extern Il2CppType t2021_1_0_0;
extern TypeInfo t4_TI;
struct t2021;
extern TypeInfo t2021_TI;
extern Il2CppGenericClass t2021_GC;
extern CustomAttributesCache t842__CustomAttributeCache;
TypeInfo t2021_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2021_MIs, t2021_PIs, t2021_FIs, NULL, &t4_TI, NULL, NULL, &t2021_TI, t2021_ITIs, t2021_VT, &t842__CustomAttributeCache, &t2021_TI, &t2021_0_0_0, &t2021_1_0_0, t2021_IOs, &t2021_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2021), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2026.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2026_TI;

extern TypeInfo t2026_TI;
extern TypeInfo t394_TI;
extern TypeInfo t19_TI;
extern TypeInfo t393_TI;
extern TypeInfo t182_TI;
extern TypeInfo t18_TI;
extern TypeInfo t17_TI;
extern TypeInfo t161_TI;
extern TypeInfo t641_TI;
extern TypeInfo t4_TI;
extern TypeInfo t16_TI;
extern TypeInfo t2020_TI;
extern TypeInfo t2019_TI;
extern TypeInfo t199_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t337_TI;
extern TypeInfo t1015_TI;
extern Il2CppType t182_0_0_0;
extern MethodInfo m24384_MI;
extern MethodInfo m11385_MI;
extern MethodInfo m11386_MI;
extern MethodInfo m1925_MI;
extern MethodInfo m11383_MI;
extern MethodInfo m11381_MI;
extern MethodInfo m1927_MI;
extern MethodInfo m24_MI;
extern MethodInfo m1730_MI;
extern MethodInfo m7399_MI;
extern MethodInfo m7400_MI;
extern MethodInfo m24382_MI;
extern MethodInfo m11374_MI;
extern MethodInfo m11382_MI;
extern MethodInfo m24387_MI;
extern MethodInfo m24390_MI;
extern MethodInfo m11384_MI;
extern MethodInfo m11372_MI;
extern MethodInfo m11377_MI;
extern MethodInfo m11368_MI;
extern MethodInfo m24386_MI;
extern MethodInfo m24381_MI;
extern MethodInfo m24391_MI;
extern MethodInfo m24392_MI;
extern MethodInfo m24389_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m3814_MI;
extern MethodInfo m1936_MI;
extern MethodInfo m1510_MI;
extern MethodInfo m7398_MI;
extern MethodInfo m7401_MI;


extern MethodInfo m11351_MI;
 void m11351 (t2026 * __this, MethodInfo* method){
	t161 * V_0 = {0};
	t4 * V_1 = {0};
	{
		m24(__this, &m24_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t161_TI));
		t161 * L_0 = (t161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t161_TI));
		m1730(L_0, &m1730_MI);
		V_0 = L_0;
		V_1 = V_0;
		t4 * L_1 = (t4 *)InterfaceFuncInvoker0< t4 * >::Invoke(&m7399_MI, V_1);
		__this->f1 = L_1;
		__this->f0 = V_0;
		return;
	}
}
extern MethodInfo m11352_MI;
 bool m11352 (t2026 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m24384_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m11353_MI;
 void m11353 (t2026 * __this, t16 * p0, int32_t p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< t16 *, int32_t >::Invoke(&m7400_MI, ((t4 *)Castclass(L_0, InitializedTypeInfo(&t641_TI))), p0, p1);
		return;
	}
}
extern MethodInfo m11354_MI;
 t4 * m11354 (t2026 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t4* L_1 = (t4*)InterfaceFuncInvoker0< t4* >::Invoke(&m24382_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m11355_MI;
 int32_t m11355 (t2026 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m1927_MI, L_0);
		V_0 = L_1;
		t182  L_2 = m11383(NULL, p0, &m11383_MI);
		VirtActionInvoker2< int32_t, t182  >::Invoke(&m11374_MI, __this, V_0, L_2);
		return V_0;
	}
}
extern MethodInfo m11356_MI;
 bool m11356 (t2026 * __this, t4 * p0, MethodInfo* method){
	{
		bool L_0 = m11382(NULL, p0, &m11382_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t4* L_1 = (__this->f0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, t182  >::Invoke(&m24387_MI, L_1, ((*(t182 *)((t182 *)UnBox (p0, InitializedTypeInfo(&t182_TI))))));
		return L_2;
	}

IL_001a:
	{
		return 0;
	}
}
extern MethodInfo m11357_MI;
 int32_t m11357 (t2026 * __this, t4 * p0, MethodInfo* method){
	{
		bool L_0 = m11382(NULL, p0, &m11382_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t4* L_1 = (__this->f0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t182  >::Invoke(&m24390_MI, L_1, ((*(t182 *)((t182 *)UnBox (p0, InitializedTypeInfo(&t182_TI))))));
		return L_2;
	}

IL_001a:
	{
		return (-1);
	}
}
extern MethodInfo m11358_MI;
 void m11358 (t2026 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	{
		t182  L_0 = m11383(NULL, p1, &m11383_MI);
		VirtActionInvoker2< int32_t, t182  >::Invoke(&m11374_MI, __this, p0, L_0);
		return;
	}
}
extern MethodInfo m11359_MI;
 void m11359 (t2026 * __this, t4 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t4* L_0 = (__this->f0);
		m11384(NULL, L_0, &m11384_MI);
		t182  L_1 = m11383(NULL, p0, &m11383_MI);
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, t182  >::Invoke(&m11372_MI, __this, L_1);
		V_0 = L_2;
		VirtActionInvoker1< int32_t >::Invoke(&m11377_MI, __this, V_0);
		return;
	}
}
extern MethodInfo m11360_MI;
 bool m11360 (t2026 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = m11385(NULL, L_0, &m11385_MI);
		return L_1;
	}
}
extern MethodInfo m11361_MI;
 t4 * m11361 (t2026 * __this, MethodInfo* method){
	{
		t4 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m11362_MI;
 bool m11362 (t2026 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = m11386(NULL, L_0, &m11386_MI);
		return L_1;
	}
}
extern MethodInfo m11363_MI;
 bool m11363 (t2026 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m24384_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m11364_MI;
 t4 * m11364 (t2026 * __this, int32_t p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t182  L_1 = (t182 )InterfaceFuncInvoker1< t182 , int32_t >::Invoke(&m1925_MI, L_0, p0);
		t182  L_2 = L_1;
		t4 * L_3 = Box(InitializedTypeInfo(&t182_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m11365_MI;
 void m11365 (t2026 * __this, int32_t p0, t4 * p1, MethodInfo* method){
	{
		t182  L_0 = m11383(NULL, p1, &m11383_MI);
		VirtActionInvoker2< int32_t, t182  >::Invoke(&m11381_MI, __this, p0, L_0);
		return;
	}
}
extern MethodInfo m11366_MI;
 void m11366 (t2026 * __this, t182  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m1927_MI, L_0);
		V_0 = L_1;
		VirtActionInvoker2< int32_t, t182  >::Invoke(&m11374_MI, __this, V_0, p0);
		return;
	}
}
extern MethodInfo m11367_MI;
 void m11367 (t2026 * __this, MethodInfo* method){
	{
		VirtActionInvoker0::Invoke(&m11368_MI, __this);
		return;
	}
}
extern MethodInfo m11368_MI;
 void m11368 (t2026 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker0::Invoke(&m24386_MI, L_0);
		return;
	}
}
extern MethodInfo m11369_MI;
 bool m11369 (t2026 * __this, t182  p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker1< bool, t182  >::Invoke(&m24387_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m11370_MI;
 void m11370 (t2026 * __this, t199* p0, int32_t p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< t199*, int32_t >::Invoke(&m24381_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m11371_MI;
 t4* m11371 (t2026 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t4* L_1 = (t4*)InterfaceFuncInvoker0< t4* >::Invoke(&m24382_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m11372_MI;
 int32_t m11372 (t2026 * __this, t182  p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker1< int32_t, t182  >::Invoke(&m24390_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m11373_MI;
 void m11373 (t2026 * __this, int32_t p0, t182  p1, MethodInfo* method){
	{
		VirtActionInvoker2< int32_t, t182  >::Invoke(&m11374_MI, __this, p0, p1);
		return;
	}
}
extern MethodInfo m11374_MI;
 void m11374 (t2026 * __this, int32_t p0, t182  p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< int32_t, t182  >::Invoke(&m24391_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m11375_MI;
 bool m11375 (t2026 * __this, t182  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t182  >::Invoke(&m11372_MI, __this, p0);
		V_0 = L_0;
		if ((((uint32_t)V_0) != ((uint32_t)(-1))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		VirtActionInvoker1< int32_t >::Invoke(&m11377_MI, __this, V_0);
		return 1;
	}
}
extern MethodInfo m11376_MI;
 void m11376 (t2026 * __this, int32_t p0, MethodInfo* method){
	{
		VirtActionInvoker1< int32_t >::Invoke(&m11377_MI, __this, p0);
		return;
	}
}
extern MethodInfo m11377_MI;
 void m11377 (t2026 * __this, int32_t p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker1< int32_t >::Invoke(&m24392_MI, L_0, p0);
		return;
	}
}
extern MethodInfo m11378_MI;
 int32_t m11378 (t2026 * __this, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m1927_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m11379_MI;
 t182  m11379 (t2026 * __this, int32_t p0, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		t182  L_1 = (t182 )InterfaceFuncInvoker1< t182 , int32_t >::Invoke(&m1925_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m11380_MI;
 void m11380 (t2026 * __this, int32_t p0, t182  p1, MethodInfo* method){
	{
		VirtActionInvoker2< int32_t, t182  >::Invoke(&m11381_MI, __this, p0, p1);
		return;
	}
}
extern MethodInfo m11381_MI;
 void m11381 (t2026 * __this, int32_t p0, t182  p1, MethodInfo* method){
	{
		t4* L_0 = (__this->f0);
		InterfaceActionInvoker2< int32_t, t182  >::Invoke(&m24389_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m11382_MI;
 bool m11382 (t4 * __this, t4 * p0, MethodInfo* method){
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		if (((t4 *)IsInst(p0, InitializedTypeInfo(&t182_TI))))
		{
			goto IL_0022;
		}
	}
	{
		if (p0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t294_TI));
		t294 * L_0 = m1549(NULL, LoadTypeToken(&t182_0_0_0), &m1549_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3814_MI, L_0);
		G_B4_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		G_B6_0 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 1;
	}

IL_0023:
	{
		return G_B6_0;
	}
}
extern MethodInfo m11383_MI;
 t182  m11383 (t4 * __this, t4 * p0, MethodInfo* method){
	{
		bool L_0 = m11382(NULL, p0, &m11382_MI);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((*(t182 *)((t182 *)UnBox (p0, InitializedTypeInfo(&t182_TI)))));
	}

IL_000f:
	{
		t307 * L_1 = (t307 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t307_TI));
		m1936(L_1, (t8*) &_stringLiteral551, &m1936_MI);
		il2cpp_codegen_raise_exception (L_1);
	}
}
extern MethodInfo m11384_MI;
 void m11384 (t4 * __this, t4* p0, MethodInfo* method){
	{
		bool L_0 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m24384_MI, p0);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		t337 * L_1 = (t337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t337_TI));
		m1510(L_1, &m1510_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000e:
	{
		return;
	}
}
extern MethodInfo m11385_MI;
 bool m11385 (t4 * __this, t4* p0, MethodInfo* method){
	t4 * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		V_0 = ((t4 *)IsInst(p0, InitializedTypeInfo(&t641_TI)));
		if (!V_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_0 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m7398_MI, V_0);
		G_B3_0 = ((int32_t)(L_0));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
extern MethodInfo m11386_MI;
 bool m11386 (t4 * __this, t4* p0, MethodInfo* method){
	t4 * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		V_0 = ((t4 *)IsInst(p0, InitializedTypeInfo(&t1015_TI)));
		if (!V_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_0 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m7401_MI, V_0);
		G_B3_0 = ((int32_t)(L_0));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>
extern Il2CppType t393_0_0_1;
FieldInfo t2026_f0_FieldInfo = 
{
	"list", &t393_0_0_1, &t2026_TI, offsetof(t2026, f0), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t2026_f1_FieldInfo = 
{
	"syncRoot", &t4_0_0_1, &t2026_TI, offsetof(t2026, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2026_FIs[] =
{
	&t2026_f0_FieldInfo,
	&t2026_f1_FieldInfo,
	NULL
};
extern MethodInfo m11352_MI;
static PropertyInfo t2026____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2026_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m11352_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11360_MI;
static PropertyInfo t2026____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2026_TI, "System.Collections.ICollection.IsSynchronized", &m11360_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11361_MI;
static PropertyInfo t2026____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2026_TI, "System.Collections.ICollection.SyncRoot", &m11361_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11362_MI;
static PropertyInfo t2026____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2026_TI, "System.Collections.IList.IsFixedSize", &m11362_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11363_MI;
static PropertyInfo t2026____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2026_TI, "System.Collections.IList.IsReadOnly", &m11363_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11364_MI;
extern MethodInfo m11365_MI;
static PropertyInfo t2026____System_Collections_IList_Item_PropertyInfo = 
{
	&t2026_TI, "System.Collections.IList.Item", &m11364_MI, &m11365_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11378_MI;
static PropertyInfo t2026____Count_PropertyInfo = 
{
	&t2026_TI, "Count", &m11378_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11379_MI;
extern MethodInfo m11380_MI;
static PropertyInfo t2026____Item_PropertyInfo = 
{
	&t2026_TI, "Item", &m11379_MI, &m11380_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2026_PIs[] =
{
	&t2026____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2026____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2026____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2026____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2026____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2026____System_Collections_IList_Item_PropertyInfo,
	&t2026____Count_PropertyInfo,
	&t2026____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2026_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11351_MI = 
{
	".ctor", (methodPointerType)&m11351, &t2026_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2026_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11352_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11352, &t2026_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2026_m11353_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11353_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11353, &t2026_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2026_m11353_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2026_TI;
extern Il2CppType t27_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11354_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11354, &t2026_TI, &t27_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2026_m11355_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11355_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11355, &t2026_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2026_m11355_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2026_m11356_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11356_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11356, &t2026_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2026_m11356_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2026_m11357_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11357_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11357, &t2026_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2026_m11357_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2026_m11358_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11358_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11358, &t2026_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2026_m11358_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2026_m11359_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11359_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11359, &t2026_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2026_m11359_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2026_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11360_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11360, &t2026_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2026_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11361_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11361, &t2026_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2026_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11362_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11362, &t2026_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2026_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m11363_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11363, &t2026_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2026_m11364_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11364_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11364, &t2026_TI, &t4_0_0_0, RuntimeInvoker_t4_t18, t2026_m11364_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2026_m11365_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11365_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11365, &t2026_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t2026_m11365_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t2026_m11366_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11366_MI = 
{
	"Add", (methodPointerType)&m11366, &t2026_TI, &t17_0_0_0, RuntimeInvoker_t17_t182, t2026_m11366_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2026_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11367_MI = 
{
	"Clear", (methodPointerType)&m11367, &t2026_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2026_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11368_MI = 
{
	"ClearItems", (methodPointerType)&m11368, &t2026_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t2026_m11369_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11369_MI = 
{
	"Contains", (methodPointerType)&m11369, &t2026_TI, &t19_0_0_0, RuntimeInvoker_t19_t182, t2026_m11369_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t199_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t2026_m11370_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t199_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11370_MI = 
{
	"CopyTo", (methodPointerType)&m11370, &t2026_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t2026_m11370_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2026_TI;
extern Il2CppType t2019_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11371_MI = 
{
	"GetEnumerator", (methodPointerType)&m11371, &t2026_TI, &t2019_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t2026_m11372_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11372_MI = 
{
	"IndexOf", (methodPointerType)&m11372, &t2026_TI, &t18_0_0_0, RuntimeInvoker_t18_t182, t2026_m11372_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t2026_m11373_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11373_MI = 
{
	"Insert", (methodPointerType)&m11373, &t2026_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t182, t2026_m11373_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t2026_m11374_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11374_MI = 
{
	"InsertItem", (methodPointerType)&m11374, &t2026_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t182, t2026_m11374_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t2026_m11375_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11375_MI = 
{
	"Remove", (methodPointerType)&m11375, &t2026_TI, &t19_0_0_0, RuntimeInvoker_t19_t182, t2026_m11375_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2026_m11376_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11376_MI = 
{
	"RemoveAt", (methodPointerType)&m11376, &t2026_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2026_m11376_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2026_m11377_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11377_MI = 
{
	"RemoveItem", (methodPointerType)&m11377, &t2026_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t2026_m11377_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2026_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11378_MI = 
{
	"get_Count", (methodPointerType)&m11378, &t2026_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t2026_m11379_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t182_0_0_0;
extern void* RuntimeInvoker_t182_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m11379_MI = 
{
	"get_Item", (methodPointerType)&m11379, &t2026_TI, &t182_0_0_0, RuntimeInvoker_t182_t18, t2026_m11379_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t2026_m11380_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11380_MI = 
{
	"set_Item", (methodPointerType)&m11380, &t2026_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t182, t2026_m11380_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t2026_m11381_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11381_MI = 
{
	"SetItem", (methodPointerType)&m11381, &t2026_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t182, t2026_m11381_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2026_m11382_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11382_MI = 
{
	"IsValidItem", (methodPointerType)&m11382, &t2026_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2026_m11382_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2026_m11383_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t182_0_0_0;
extern void* RuntimeInvoker_t182_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11383_MI = 
{
	"ConvertItem", (methodPointerType)&m11383, &t2026_TI, &t182_0_0_0, RuntimeInvoker_t182_t4, t2026_m11383_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t393_0_0_0;
static ParameterInfo t2026_m11384_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t393_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11384_MI = 
{
	"CheckWritable", (methodPointerType)&m11384, &t2026_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2026_m11384_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t393_0_0_0;
static ParameterInfo t2026_m11385_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t393_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11385_MI = 
{
	"IsSynchronized", (methodPointerType)&m11385, &t2026_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2026_m11385_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t393_0_0_0;
static ParameterInfo t2026_m11386_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t393_0_0_0},
};
extern TypeInfo t2026_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11386_MI = 
{
	"IsFixedSize", (methodPointerType)&m11386, &t2026_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2026_m11386_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2026_MIs[] =
{
	&m11351_MI,
	&m11352_MI,
	&m11353_MI,
	&m11354_MI,
	&m11355_MI,
	&m11356_MI,
	&m11357_MI,
	&m11358_MI,
	&m11359_MI,
	&m11360_MI,
	&m11361_MI,
	&m11362_MI,
	&m11363_MI,
	&m11364_MI,
	&m11365_MI,
	&m11366_MI,
	&m11367_MI,
	&m11368_MI,
	&m11369_MI,
	&m11370_MI,
	&m11371_MI,
	&m11372_MI,
	&m11373_MI,
	&m11374_MI,
	&m11375_MI,
	&m11376_MI,
	&m11377_MI,
	&m11378_MI,
	&m11379_MI,
	&m11380_MI,
	&m11381_MI,
	&m11382_MI,
	&m11383_MI,
	&m11384_MI,
	&m11385_MI,
	&m11386_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11354_MI;
extern MethodInfo m11378_MI;
extern MethodInfo m11360_MI;
extern MethodInfo m11361_MI;
extern MethodInfo m11353_MI;
extern MethodInfo m11362_MI;
extern MethodInfo m11363_MI;
extern MethodInfo m11364_MI;
extern MethodInfo m11365_MI;
extern MethodInfo m11355_MI;
extern MethodInfo m11367_MI;
extern MethodInfo m11356_MI;
extern MethodInfo m11357_MI;
extern MethodInfo m11358_MI;
extern MethodInfo m11359_MI;
extern MethodInfo m11376_MI;
extern MethodInfo m11378_MI;
extern MethodInfo m11352_MI;
extern MethodInfo m11366_MI;
extern MethodInfo m11367_MI;
extern MethodInfo m11369_MI;
extern MethodInfo m11370_MI;
extern MethodInfo m11375_MI;
extern MethodInfo m11372_MI;
extern MethodInfo m11373_MI;
extern MethodInfo m11376_MI;
extern MethodInfo m11379_MI;
extern MethodInfo m11380_MI;
extern MethodInfo m11371_MI;
extern MethodInfo m11368_MI;
extern MethodInfo m11374_MI;
extern MethodInfo m11377_MI;
extern MethodInfo m11381_MI;
static MethodInfo* t2026_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11354_MI,
	&m11378_MI,
	&m11360_MI,
	&m11361_MI,
	&m11353_MI,
	&m11362_MI,
	&m11363_MI,
	&m11364_MI,
	&m11365_MI,
	&m11355_MI,
	&m11367_MI,
	&m11356_MI,
	&m11357_MI,
	&m11358_MI,
	&m11359_MI,
	&m11376_MI,
	&m11378_MI,
	&m11352_MI,
	&m11366_MI,
	&m11367_MI,
	&m11369_MI,
	&m11370_MI,
	&m11375_MI,
	&m11372_MI,
	&m11373_MI,
	&m11376_MI,
	&m11379_MI,
	&m11380_MI,
	&m11371_MI,
	&m11368_MI,
	&m11374_MI,
	&m11377_MI,
	&m11381_MI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t394_TI;
extern TypeInfo t393_TI;
extern TypeInfo t2020_TI;
static TypeInfo* t2026_ITIs[] = 
{
	&t592_TI,
	&t641_TI,
	&t1015_TI,
	&t394_TI,
	&t393_TI,
	&t2020_TI,
};
extern TypeInfo t592_TI;
extern TypeInfo t641_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t394_TI;
extern TypeInfo t393_TI;
extern TypeInfo t2020_TI;
static Il2CppInterfaceOffsetPair t2026_IOs[] = 
{
	{ &t592_TI, 4},
	{ &t641_TI, 5},
	{ &t1015_TI, 9},
	{ &t394_TI, 20},
	{ &t393_TI, 27},
	{ &t2020_TI, 32},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2026_0_0_0;
extern Il2CppType t2026_1_0_0;
extern TypeInfo t4_TI;
struct t2026;
extern TypeInfo t2026_TI;
extern Il2CppGenericClass t2026_GC;
extern CustomAttributesCache t841__CustomAttributeCache;
TypeInfo t2026_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2026_MIs, t2026_PIs, t2026_FIs, NULL, &t4_TI, NULL, NULL, &t2026_TI, t2026_ITIs, t2026_VT, &t841__CustomAttributeCache, &t2026_TI, &t2026_0_0_0, &t2026_1_0_0, t2026_IOs, &t2026_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2026), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2027_TI;
#include "t2027MD.h"

#include "t2028.h"
extern TypeInfo t2027_TI;
extern TypeInfo t5165_TI;
extern TypeInfo t294_TI;
extern TypeInfo t182_TI;
extern TypeInfo t19_TI;
extern TypeInfo t837_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2028_TI;
extern TypeInfo t18_TI;
#include "t2028MD.h"
extern Il2CppType t5165_0_0_0;
extern Il2CppType t182_0_0_0;
extern Il2CppType t837_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m11392_MI;
extern MethodInfo m24393_MI;
extern MethodInfo m18287_MI;


extern MethodInfo m11387_MI;
 void m11387 (t2027 * __this, MethodInfo* method){
	{
		m24(__this, &m24_MI);
		return;
	}
}
extern MethodInfo m11388_MI;
 void m11388 (t4 * __this, MethodInfo* method){
	t2028 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2028 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2028_TI));
	m11392(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m11392_MI);
	((t2027_SFs*)InitializedTypeInfo(&t2027_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m11389_MI;
 int32_t m11389 (t2027 * __this, t4 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t182  >::Invoke(&m24393_MI, __this, ((*(t182 *)((t182 *)UnBox (p0, InitializedTypeInfo(&t182_TI))))));
		return L_0;
	}
}
extern MethodInfo m11390_MI;
 bool m11390 (t2027 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t182 , t182  >::Invoke(&m18287_MI, __this, ((*(t182 *)((t182 *)UnBox (p0, InitializedTypeInfo(&t182_TI))))), ((*(t182 *)((t182 *)UnBox (p1, InitializedTypeInfo(&t182_TI))))));
		return L_0;
	}
}
extern MethodInfo m11391_MI;
 t2027 * m11391 (t4 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2027_TI));
		return (((t2027_SFs*)InitializedTypeInfo(&t2027_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>
extern Il2CppType t2027_0_0_49;
FieldInfo t2027_f0_FieldInfo = 
{
	"_default", &t2027_0_0_49, &t2027_TI, offsetof(t2027_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2027_FIs[] =
{
	&t2027_f0_FieldInfo,
	NULL
};
extern MethodInfo m11391_MI;
static PropertyInfo t2027____Default_PropertyInfo = 
{
	&t2027_TI, "Default", &m11391_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2027_PIs[] =
{
	&t2027____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2027_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11387_MI = 
{
	".ctor", (methodPointerType)&m11387, &t2027_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2027_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11388_MI = 
{
	".cctor", (methodPointerType)&m11388, &t2027_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2027_m11389_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2027_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11389_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m11389, &t2027_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2027_m11389_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2027_m11390_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2027_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11390_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m11390, &t2027_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2027_m11390_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t2027_m24393_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2027_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m24393_MI = 
{
	"GetHashCode", NULL, &t2027_TI, &t18_0_0_0, RuntimeInvoker_t18_t182, t2027_m24393_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t2027_m18287_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2027_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t182_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m18287_MI = 
{
	"Equals", NULL, &t2027_TI, &t19_0_0_0, RuntimeInvoker_t19_t182_t182, t2027_m18287_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2027_TI;
extern Il2CppType t2027_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11391_MI = 
{
	"get_Default", (methodPointerType)&m11391, &t2027_TI, &t2027_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2027_MIs[] =
{
	&m11387_MI,
	&m11388_MI,
	&m11389_MI,
	&m11390_MI,
	&m24393_MI,
	&m18287_MI,
	&m11391_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m18287_MI;
extern MethodInfo m24393_MI;
extern MethodInfo m11390_MI;
extern MethodInfo m11389_MI;
static MethodInfo* t2027_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m18287_MI,
	&m24393_MI,
	&m11390_MI,
	&m11389_MI,
	NULL,
	NULL,
};
extern TypeInfo t5166_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2027_ITIs[] = 
{
	&t5166_TI,
	&t860_TI,
};
extern TypeInfo t5166_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2027_IOs[] = 
{
	{ &t5166_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2027_0_0_0;
extern Il2CppType t2027_1_0_0;
extern TypeInfo t4_TI;
struct t2027;
extern TypeInfo t2027_TI;
extern Il2CppGenericClass t2027_GC;
TypeInfo t2027_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2027_MIs, t2027_PIs, t2027_FIs, NULL, &t4_TI, NULL, NULL, &t2027_TI, t2027_ITIs, t2027_VT, &EmptyCustomAttributesCache, &t2027_TI, &t2027_0_0_0, &t2027_1_0_0, t2027_IOs, &t2027_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2027), 0, -1, sizeof(t2027_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5166_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.UIVertex>
extern Il2CppType t182_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t5166_m24394_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t5166_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t182_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m24394_MI = 
{
	"Equals", NULL, &t5166_TI, &t19_0_0_0, RuntimeInvoker_t19_t182_t182, t5166_m24394_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t5166_m24395_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t5166_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m24395_MI = 
{
	"GetHashCode", NULL, &t5166_TI, &t18_0_0_0, RuntimeInvoker_t18_t182, t5166_m24395_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5166_MIs[] =
{
	&m24394_MI,
	&m24395_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5166_0_0_0;
extern Il2CppType t5166_1_0_0;
struct t5166;
extern TypeInfo t5166_TI;
extern Il2CppGenericClass t5166_GC;
TypeInfo t5166_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5166_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5166_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5166_TI, &t5166_0_0_0, &t5166_1_0_0, NULL, &t5166_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5165_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.UIVertex>
extern Il2CppType t182_0_0_0;
static ParameterInfo t5165_m24396_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t5165_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m24396_MI = 
{
	"Equals", NULL, &t5165_TI, &t19_0_0_0, RuntimeInvoker_t19_t182, t5165_m24396_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5165_MIs[] =
{
	&m24396_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5165_0_0_0;
extern Il2CppType t5165_1_0_0;
struct t5165;
extern TypeInfo t5165_TI;
extern Il2CppGenericClass t5165_GC;
TypeInfo t5165_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5165_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5165_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5165_TI, &t5165_0_0_0, &t5165_1_0_0, NULL, &t5165_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2028_TI;

extern TypeInfo t182_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
extern TypeInfo t19_TI;
extern MethodInfo m11387_MI;
extern MethodInfo m30_MI;
extern MethodInfo m28_MI;


extern MethodInfo m11392_MI;
 void m11392 (t2028 * __this, MethodInfo* method){
	{
		m11387(__this, &m11387_MI);
		return;
	}
}
extern MethodInfo m11393_MI;
 int32_t m11393 (t2028 * __this, t182  p0, MethodInfo* method){
	{
		t182  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t182_TI), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m30_MI, Box(InitializedTypeInfo(&t182_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m11394_MI;
 bool m11394 (t2028 * __this, t182  p0, t182  p1, MethodInfo* method){
	{
		t182  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t182_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t182  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t182_TI), &L_2);
		return ((((t4 *)L_3) == ((t4 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t182  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t182_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t4 * >::Invoke(&m28_MI, Box(InitializedTypeInfo(&t182_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
extern TypeInfo t2028_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11392_MI = 
{
	".ctor", (methodPointerType)&m11392, &t2028_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t2028_m11393_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2028_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11393_MI = 
{
	"GetHashCode", (methodPointerType)&m11393, &t2028_TI, &t18_0_0_0, RuntimeInvoker_t18_t182, t2028_m11393_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t2028_m11394_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2028_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t182_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11394_MI = 
{
	"Equals", (methodPointerType)&m11394, &t2028_TI, &t19_0_0_0, RuntimeInvoker_t19_t182_t182, t2028_m11394_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2028_MIs[] =
{
	&m11392_MI,
	&m11393_MI,
	&m11394_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11394_MI;
extern MethodInfo m11393_MI;
extern MethodInfo m11390_MI;
extern MethodInfo m11389_MI;
extern MethodInfo m11393_MI;
extern MethodInfo m11394_MI;
static MethodInfo* t2028_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11394_MI,
	&m11393_MI,
	&m11390_MI,
	&m11389_MI,
	&m11393_MI,
	&m11394_MI,
};
extern TypeInfo t5166_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2028_IOs[] = 
{
	{ &t5166_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2028_0_0_0;
extern Il2CppType t2028_1_0_0;
extern TypeInfo t2027_TI;
struct t2028;
extern TypeInfo t2028_TI;
extern Il2CppGenericClass t2028_GC;
extern TypeInfo t836_TI;
TypeInfo t2028_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2028_MIs, NULL, NULL, NULL, &t2027_TI, NULL, &t836_TI, &t2028_TI, NULL, t2028_VT, &EmptyCustomAttributesCache, &t2028_TI, &t2028_0_0_0, &t2028_1_0_0, t2028_IOs, &t2028_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2028), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2022_TI;



extern MethodInfo m11395_MI;
 void m11395 (t2022 * __this, t4 * p0, t56 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11396_MI;
 bool m11396 (t2022 * __this, t182  p0, MethodInfo* method){
	typedef  bool (*FunctionPointerType) (t4 * __this, t182  p0, MethodInfo* method);
	if (__this->f9)
		m11396((t2022 *)__this->f9,  p0, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m11397_MI;
 t4 * m11397 (t2022 * __this, t182  p0, t55 * p1, t4 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t182_TI), &p0);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m11398_MI;
 bool m11398 (t2022 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Predicate`1<UnityEngine.UIVertex>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2022_m11395_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2022_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m11395_MI = 
{
	".ctor", (methodPointerType)&m11395, &t2022_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2022_m11395_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
static ParameterInfo t2022_m11396_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2022_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11396_MI = 
{
	"Invoke", (methodPointerType)&m11396, &t2022_TI, &t19_0_0_0, RuntimeInvoker_t19_t182, t2022_m11396_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2022_m11397_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2022_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t182_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11397_MI = 
{
	"BeginInvoke", (methodPointerType)&m11397, &t2022_TI, &t54_0_0_0, RuntimeInvoker_t4_t182_t4_t4, t2022_m11397_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2022_m11398_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2022_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11398_MI = 
{
	"EndInvoke", (methodPointerType)&m11398, &t2022_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t2022_m11398_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2022_MIs[] =
{
	&m11395_MI,
	&m11396_MI,
	&m11397_MI,
	&m11398_MI,
	NULL
};
extern MethodInfo m1695_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1696_MI;
extern MethodInfo m31_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m1700_MI;
extern MethodInfo m1701_MI;
extern MethodInfo m11396_MI;
extern MethodInfo m11397_MI;
extern MethodInfo m11398_MI;
static MethodInfo* t2022_VT[] =
{
	&m1695_MI,
	&m29_MI,
	&m1696_MI,
	&m31_MI,
	&m1697_MI,
	&m1698_MI,
	&m1697_MI,
	&m1699_MI,
	&m1700_MI,
	&m1701_MI,
	&m11396_MI,
	&m11397_MI,
	&m11398_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2022_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2022_0_0_0;
extern Il2CppType t2022_1_0_0;
extern TypeInfo t193_TI;
struct t2022;
extern TypeInfo t2022_TI;
extern Il2CppGenericClass t2022_GC;
TypeInfo t2022_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2022_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2022_TI, NULL, t2022_VT, &EmptyCustomAttributesCache, &t2022_TI, &t2022_0_0_0, &t2022_1_0_0, t2022_IOs, &t2022_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2022), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2029_TI;

#include "t2030.h"
extern TypeInfo t2029_TI;
extern TypeInfo t3382_TI;
extern TypeInfo t294_TI;
extern TypeInfo t182_TI;
extern TypeInfo t19_TI;
extern TypeInfo t825_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2030_TI;
extern TypeInfo t18_TI;
extern TypeInfo t307_TI;
#include "t2030MD.h"
extern Il2CppType t3382_0_0_0;
extern Il2CppType t182_0_0_0;
extern Il2CppType t825_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m11403_MI;
extern MethodInfo m24397_MI;
extern MethodInfo m6463_MI;


extern MethodInfo m11399_MI;
 void m11399 (t2029 * __this, MethodInfo* method){
	{
		m24(__this, &m24_MI);
		return;
	}
}
extern MethodInfo m11400_MI;
 void m11400 (t4 * __this, MethodInfo* method){
	t2030 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2030 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2030_TI));
	m11403(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m11403_MI);
	((t2029_SFs*)InitializedTypeInfo(&t2029_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m11401_MI;
 int32_t m11401 (t2029 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if (p0)
		{
			goto IL_000b;
		}
	}
	{
		if (p1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (p1)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((t4 *)IsInst(p0, InitializedTypeInfo(&t182_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t4 *)IsInst(p1, InitializedTypeInfo(&t182_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t182 , t182  >::Invoke(&m24397_MI, __this, ((*(t182 *)((t182 *)UnBox (p0, InitializedTypeInfo(&t182_TI))))), ((*(t182 *)((t182 *)UnBox (p1, InitializedTypeInfo(&t182_TI))))));
		return L_0;
	}

IL_0033:
	{
		t307 * L_1 = (t307 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t307_TI));
		m6463(L_1, &m6463_MI);
		il2cpp_codegen_raise_exception (L_1);
	}
}
extern MethodInfo m11402_MI;
 t2029 * m11402 (t4 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2029_TI));
		return (((t2029_SFs*)InitializedTypeInfo(&t2029_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>
extern Il2CppType t2029_0_0_49;
FieldInfo t2029_f0_FieldInfo = 
{
	"_default", &t2029_0_0_49, &t2029_TI, offsetof(t2029_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2029_FIs[] =
{
	&t2029_f0_FieldInfo,
	NULL
};
extern MethodInfo m11402_MI;
static PropertyInfo t2029____Default_PropertyInfo = 
{
	&t2029_TI, "Default", &m11402_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2029_PIs[] =
{
	&t2029____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2029_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11399_MI = 
{
	".ctor", (methodPointerType)&m11399, &t2029_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2029_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11400_MI = 
{
	".cctor", (methodPointerType)&m11400, &t2029_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2029_m11401_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2029_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11401_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m11401, &t2029_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t2029_m11401_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t2029_m24397_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2029_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t182_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m24397_MI = 
{
	"Compare", NULL, &t2029_TI, &t18_0_0_0, RuntimeInvoker_t18_t182_t182, t2029_m24397_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2029_TI;
extern Il2CppType t2029_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11402_MI = 
{
	"get_Default", (methodPointerType)&m11402, &t2029_TI, &t2029_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2029_MIs[] =
{
	&m11399_MI,
	&m11400_MI,
	&m11401_MI,
	&m24397_MI,
	&m11402_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m24397_MI;
extern MethodInfo m11401_MI;
static MethodInfo* t2029_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m24397_MI,
	&m11401_MI,
	NULL,
};
extern TypeInfo t3381_TI;
extern TypeInfo t717_TI;
static TypeInfo* t2029_ITIs[] = 
{
	&t3381_TI,
	&t717_TI,
};
extern TypeInfo t3381_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t2029_IOs[] = 
{
	{ &t3381_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2029_0_0_0;
extern Il2CppType t2029_1_0_0;
extern TypeInfo t4_TI;
struct t2029;
extern TypeInfo t2029_TI;
extern Il2CppGenericClass t2029_GC;
TypeInfo t2029_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2029_MIs, t2029_PIs, t2029_FIs, NULL, &t4_TI, NULL, NULL, &t2029_TI, t2029_ITIs, t2029_VT, &EmptyCustomAttributesCache, &t2029_TI, &t2029_0_0_0, &t2029_1_0_0, t2029_IOs, &t2029_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2029), 0, -1, sizeof(t2029_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3381_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
extern Il2CppType t182_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t3381_m18295_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t3381_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t182_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m18295_MI = 
{
	"Compare", NULL, &t3381_TI, &t18_0_0_0, RuntimeInvoker_t18_t182_t182, t3381_m18295_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3381_MIs[] =
{
	&m18295_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3381_0_0_0;
extern Il2CppType t3381_1_0_0;
struct t3381;
extern TypeInfo t3381_TI;
extern Il2CppGenericClass t3381_GC;
TypeInfo t3381_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3381_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3381_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3381_TI, &t3381_0_0_0, &t3381_1_0_0, NULL, &t3381_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3382_TI;



// Metadata Definition System.IComparable`1<UnityEngine.UIVertex>
extern Il2CppType t182_0_0_0;
static ParameterInfo t3382_m18296_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t3382_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m18296_MI = 
{
	"CompareTo", NULL, &t3382_TI, &t18_0_0_0, RuntimeInvoker_t18_t182, t3382_m18296_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3382_MIs[] =
{
	&m18296_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3382_0_0_0;
extern Il2CppType t3382_1_0_0;
struct t3382;
extern TypeInfo t3382_TI;
extern Il2CppGenericClass t3382_GC;
TypeInfo t3382_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3382_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3382_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3382_TI, &t3382_0_0_0, &t3382_1_0_0, NULL, &t3382_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2030_TI;

extern TypeInfo t182_TI;
extern TypeInfo t3382_TI;
extern TypeInfo t18_TI;
extern TypeInfo t289_TI;
extern TypeInfo t4_TI;
extern TypeInfo t307_TI;
extern MethodInfo m11399_MI;
extern MethodInfo m18296_MI;
extern MethodInfo m7306_MI;
extern MethodInfo m1936_MI;


extern MethodInfo m11403_MI;
 void m11403 (t2030 * __this, MethodInfo* method){
	{
		m11399(__this, &m11399_MI);
		return;
	}
}
extern MethodInfo m11404_MI;
 int32_t m11404 (t2030 * __this, t182  p0, t182  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t182  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t182_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t182  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t182_TI), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		t182  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t182_TI), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		t182  L_6 = p0;
		t4 * L_7 = Box(InitializedTypeInfo(&t182_TI), &L_6);
		if (!((t4*)IsInst(L_7, InitializedTypeInfo(&t3382_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t182  L_8 = p0;
		t4 * L_9 = Box(InitializedTypeInfo(&t182_TI), &L_8);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t182  >::Invoke(&m18296_MI, ((t4*)Castclass(L_9, InitializedTypeInfo(&t3382_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t182  L_11 = p0;
		t4 * L_12 = Box(InitializedTypeInfo(&t182_TI), &L_11);
		if (!((t4 *)IsInst(L_12, InitializedTypeInfo(&t289_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t182  L_13 = p0;
		t4 * L_14 = Box(InitializedTypeInfo(&t182_TI), &L_13);
		t182  L_15 = p1;
		t4 * L_16 = Box(InitializedTypeInfo(&t182_TI), &L_15);
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, t4 * >::Invoke(&m7306_MI, ((t4 *)Castclass(L_14, InitializedTypeInfo(&t289_TI))), L_16);
		return L_17;
	}

IL_0062:
	{
		t307 * L_18 = (t307 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t307_TI));
		m1936(L_18, (t8*) &_stringLiteral535, &m1936_MI);
		il2cpp_codegen_raise_exception (L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UIVertex>
extern TypeInfo t2030_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m11403_MI = 
{
	".ctor", (methodPointerType)&m11403, &t2030_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t2030_m11404_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2030_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t182_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11404_MI = 
{
	"Compare", (methodPointerType)&m11404, &t2030_TI, &t18_0_0_0, RuntimeInvoker_t18_t182_t182, t2030_m11404_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2030_MIs[] =
{
	&m11403_MI,
	&m11404_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m11404_MI;
extern MethodInfo m11401_MI;
extern MethodInfo m11404_MI;
static MethodInfo* t2030_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m11404_MI,
	&m11401_MI,
	&m11404_MI,
};
extern TypeInfo t3381_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t2030_IOs[] = 
{
	{ &t3381_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2030_0_0_0;
extern Il2CppType t2030_1_0_0;
extern TypeInfo t2029_TI;
struct t2030;
extern TypeInfo t2030_TI;
extern Il2CppGenericClass t2030_GC;
extern TypeInfo t824_TI;
TypeInfo t2030_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2030_MIs, NULL, NULL, NULL, &t2029_TI, NULL, &t824_TI, &t2030_TI, NULL, t2030_VT, &EmptyCustomAttributesCache, &t2030_TI, &t2030_0_0_0, &t2030_1_0_0, t2030_IOs, &t2030_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2030), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2023_TI;
#include "t2023MD.h"



extern MethodInfo m11405_MI;
 void m11405 (t2023 * __this, t4 * p0, t56 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11406_MI;
 int32_t m11406 (t2023 * __this, t182  p0, t182  p1, MethodInfo* method){
	typedef  int32_t (*FunctionPointerType) (t4 * __this, t182  p0, t182  p1, MethodInfo* method);
	if (__this->f9)
		m11406((t2023 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m11407_MI;
 t4 * m11407 (t2023 * __this, t182  p0, t182  p1, t55 * p2, t4 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t182_TI), &p0);
	__d_args[1] = Box(InitializedTypeInfo(&t182_TI), &p1);
	return (t4 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11408_MI;
 int32_t m11408 (t2023 * __this, t4 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Comparison`1<UnityEngine.UIVertex>
extern Il2CppType t4_0_0_0;
extern Il2CppType t56_0_0_0;
static ParameterInfo t2023_m11405_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern TypeInfo t2023_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t56 (MethodInfo* method, void* obj, void** args);
MethodInfo m11405_MI = 
{
	".ctor", (methodPointerType)&m11405, &t2023_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t56, t2023_m11405_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
extern Il2CppType t182_0_0_0;
static ParameterInfo t2023_m11406_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
};
extern TypeInfo t2023_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t182_t182 (MethodInfo* method, void* obj, void** args);
MethodInfo m11406_MI = 
{
	"Invoke", (methodPointerType)&m11406, &t2023_TI, &t18_0_0_0, RuntimeInvoker_t18_t182_t182, t2023_m11406_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t182_0_0_0;
extern Il2CppType t182_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2023_m11407_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t182_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2023_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t4_t182_t182_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11407_MI = 
{
	"BeginInvoke", (methodPointerType)&m11407, &t2023_TI, &t54_0_0_0, RuntimeInvoker_t4_t182_t182_t4_t4, t2023_m11407_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t54_0_0_0;
static ParameterInfo t2023_m11408_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t2023_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m11408_MI = 
{
	"EndInvoke", (methodPointerType)&m11408, &t2023_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2023_m11408_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2023_MIs[] =
{
	&m11405_MI,
	&m11406_MI,
	&m11407_MI,
	&m11408_MI,
	NULL
};
extern MethodInfo m1695_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1696_MI;
extern MethodInfo m31_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m1700_MI;
extern MethodInfo m1701_MI;
extern MethodInfo m11406_MI;
extern MethodInfo m11407_MI;
extern MethodInfo m11408_MI;
static MethodInfo* t2023_VT[] =
{
	&m1695_MI,
	&m29_MI,
	&m1696_MI,
	&m31_MI,
	&m1697_MI,
	&m1698_MI,
	&m1697_MI,
	&m1699_MI,
	&m1700_MI,
	&m1701_MI,
	&m11406_MI,
	&m11407_MI,
	&m11408_MI,
};
extern TypeInfo t365_TI;
extern TypeInfo t366_TI;
static Il2CppInterfaceOffsetPair t2023_IOs[] = 
{
	{ &t365_TI, 4},
	{ &t366_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2023_0_0_0;
extern Il2CppType t2023_1_0_0;
extern TypeInfo t193_TI;
struct t2023;
extern TypeInfo t2023_TI;
extern Il2CppGenericClass t2023_GC;
TypeInfo t2023_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2023_MIs, NULL, NULL, NULL, &t193_TI, NULL, NULL, &t2023_TI, NULL, t2023_VT, &EmptyCustomAttributesCache, &t2023_TI, &t2023_0_0_0, &t2023_1_0_0, t2023_IOs, &t2023_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2023), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
