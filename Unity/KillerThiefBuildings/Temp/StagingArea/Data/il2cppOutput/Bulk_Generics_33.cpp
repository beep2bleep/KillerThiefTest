#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2885.h"
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
extern TypeInfo t2885_TI;
#include "t2885MD.h"

#include "t4.h"
#include "t1244.h"
#include "t18.h"
#include "t8.h"
#include "t1270.h"
#include "t17.h"
#include "t16.h"
#include "t19.h"
extern TypeInfo t2885_TI;
extern TypeInfo t1244_TI;
extern TypeInfo t1270_TI;
#include "t1270MD.h"
#include "t16MD.h"
extern MethodInfo m16725_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m22730_MI;
struct t16;
#include "t1234.h"
 int32_t m22730 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22730_MI;


extern MethodInfo m16721_MI;
 void m16721 (t2885 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16722_MI;
 t4 * m16722 (t2885 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16725(__this, &m16725_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1244_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16723_MI;
 void m16723 (t2885 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16724_MI;
 bool m16724 (t2885 * __this, MethodInfo* method){
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
extern MethodInfo m16725_MI;
 int32_t m16725 (t2885 * __this, MethodInfo* method){
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
		int32_t L_8 = m22730(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22730_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTime/Which>
extern Il2CppType t16_0_0_1;
FieldInfo t2885_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2885_TI, offsetof(t2885, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2885_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2885_TI, offsetof(t2885, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2885_FIs[] =
{
	&t2885_f0_FieldInfo,
	&t2885_f1_FieldInfo,
	NULL
};
extern MethodInfo m16722_MI;
static PropertyInfo t2885____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2885_TI, "System.Collections.IEnumerator.Current", &m16722_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16725_MI;
static PropertyInfo t2885____Current_PropertyInfo = 
{
	&t2885_TI, "Current", &m16725_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2885_PIs[] =
{
	&t2885____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2885____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2885_m16721_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2885_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16721_MI = 
{
	".ctor", (methodPointerType)&m16721, &t2885_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2885_m16721_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2885_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16722_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16722, &t2885_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2885_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16723_MI = 
{
	"Dispose", (methodPointerType)&m16723, &t2885_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2885_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m16724_MI = 
{
	"MoveNext", (methodPointerType)&m16724, &t2885_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2885_TI;
extern Il2CppType t1244_0_0_0;
extern void* RuntimeInvoker_t1244 (MethodInfo* method, void* obj, void** args);
MethodInfo m16725_MI = 
{
	"get_Current", (methodPointerType)&m16725, &t2885_TI, &t1244_0_0_0, RuntimeInvoker_t1244, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2885_MIs[] =
{
	&m16721_MI,
	&m16722_MI,
	&m16723_MI,
	&m16724_MI,
	&m16725_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m16722_MI;
extern MethodInfo m16724_MI;
extern MethodInfo m16723_MI;
extern MethodInfo m16725_MI;
static MethodInfo* t2885_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m16722_MI,
	&m16724_MI,
	&m16723_MI,
	&m16725_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3759_TI;
static TypeInfo* t2885_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3759_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3759_TI;
static Il2CppInterfaceOffsetPair t2885_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3759_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2885_0_0_0;
extern Il2CppType t2885_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2885_TI;
extern Il2CppGenericClass t2885_GC;
extern TypeInfo t16_TI;
TypeInfo t2885_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2885_MIs, t2885_PIs, t2885_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2885_TI, t2885_ITIs, t2885_VT, &EmptyCustomAttributesCache, &t2885_TI, &t2885_0_0_0, &t2885_1_0_0, t2885_IOs, &t2885_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2885)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5097_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTime/Which>
extern MethodInfo m29739_MI;
static PropertyInfo t5097____Count_PropertyInfo = 
{
	&t5097_TI, "Count", &m29739_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29740_MI;
static PropertyInfo t5097____IsReadOnly_PropertyInfo = 
{
	&t5097_TI, "IsReadOnly", &m29740_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5097_PIs[] =
{
	&t5097____Count_PropertyInfo,
	&t5097____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5097_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29739_MI = 
{
	"get_Count", NULL, &t5097_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5097_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m29740_MI = 
{
	"get_IsReadOnly", NULL, &t5097_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1244_0_0_0;
static ParameterInfo t5097_m29741_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1244_0_0_0},
};
extern TypeInfo t5097_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29741_MI = 
{
	"Add", NULL, &t5097_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5097_m29741_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5097_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29742_MI = 
{
	"Clear", NULL, &t5097_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1244_0_0_0;
static ParameterInfo t5097_m29743_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1244_0_0_0},
};
extern TypeInfo t5097_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29743_MI = 
{
	"Contains", NULL, &t5097_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t5097_m29743_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3098_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t5097_m29744_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3098_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5097_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29744_MI = 
{
	"CopyTo", NULL, &t5097_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t5097_m29744_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1244_0_0_0;
static ParameterInfo t5097_m29745_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1244_0_0_0},
};
extern TypeInfo t5097_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29745_MI = 
{
	"Remove", NULL, &t5097_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t5097_m29745_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5097_MIs[] =
{
	&m29739_MI,
	&m29740_MI,
	&m29741_MI,
	&m29742_MI,
	&m29743_MI,
	&m29744_MI,
	&m29745_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5099_TI;
static TypeInfo* t5097_ITIs[] = 
{
	&t592_TI,
	&t5099_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5097_0_0_0;
extern Il2CppType t5097_1_0_0;
struct t5097;
extern TypeInfo t5097_TI;
extern Il2CppGenericClass t5097_GC;
TypeInfo t5097_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5097_MIs, t5097_PIs, NULL, NULL, NULL, NULL, NULL, &t5097_TI, t5097_ITIs, NULL, &EmptyCustomAttributesCache, &t5097_TI, &t5097_0_0_0, &t5097_1_0_0, NULL, &t5097_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5099_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTime/Which>
extern TypeInfo t5099_TI;
extern Il2CppType t3759_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29746_MI = 
{
	"GetEnumerator", NULL, &t5099_TI, &t3759_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5099_MIs[] =
{
	&m29746_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t5099_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5099_0_0_0;
extern Il2CppType t5099_1_0_0;
struct t5099;
extern TypeInfo t5099_TI;
extern Il2CppGenericClass t5099_GC;
TypeInfo t5099_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5099_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5099_TI, t5099_ITIs, NULL, &EmptyCustomAttributesCache, &t5099_TI, &t5099_0_0_0, &t5099_1_0_0, NULL, &t5099_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5098_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.DateTime/Which>
extern MethodInfo m29747_MI;
extern MethodInfo m29748_MI;
static PropertyInfo t5098____Item_PropertyInfo = 
{
	&t5098_TI, "Item", &m29747_MI, &m29748_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5098_PIs[] =
{
	&t5098____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1244_0_0_0;
static ParameterInfo t5098_m29749_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1244_0_0_0},
};
extern TypeInfo t5098_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29749_MI = 
{
	"IndexOf", NULL, &t5098_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t5098_m29749_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1244_0_0_0;
static ParameterInfo t5098_m29750_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1244_0_0_0},
};
extern TypeInfo t5098_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29750_MI = 
{
	"Insert", NULL, &t5098_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t5098_m29750_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5098_m29751_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5098_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29751_MI = 
{
	"RemoveAt", NULL, &t5098_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5098_m29751_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5098_m29747_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5098_TI;
extern Il2CppType t1244_0_0_0;
extern void* RuntimeInvoker_t1244_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29747_MI = 
{
	"get_Item", NULL, &t5098_TI, &t1244_0_0_0, RuntimeInvoker_t1244_t18, t5098_m29747_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1244_0_0_0;
static ParameterInfo t5098_m29748_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1244_0_0_0},
};
extern TypeInfo t5098_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29748_MI = 
{
	"set_Item", NULL, &t5098_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t5098_m29748_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5098_MIs[] =
{
	&m29749_MI,
	&m29750_MI,
	&m29751_MI,
	&m29747_MI,
	&m29748_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5097_TI;
extern TypeInfo t5099_TI;
static TypeInfo* t5098_ITIs[] = 
{
	&t592_TI,
	&t5097_TI,
	&t5099_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5098_0_0_0;
extern Il2CppType t5098_1_0_0;
struct t5098;
extern TypeInfo t5098_TI;
extern Il2CppGenericClass t5098_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t5098_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5098_MIs, t5098_PIs, NULL, NULL, NULL, NULL, NULL, &t5098_TI, t5098_ITIs, NULL, &t1401__CustomAttributeCache, &t5098_TI, &t5098_0_0_0, &t5098_1_0_0, NULL, &t5098_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3760_TI;

#include "t1245.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DateTimeKind>
extern MethodInfo m29752_MI;
static PropertyInfo t3760____Current_PropertyInfo = 
{
	&t3760_TI, "Current", &m29752_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3760_PIs[] =
{
	&t3760____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3760_TI;
extern Il2CppType t1245_0_0_0;
extern void* RuntimeInvoker_t1245 (MethodInfo* method, void* obj, void** args);
MethodInfo m29752_MI = 
{
	"get_Current", NULL, &t3760_TI, &t1245_0_0_0, RuntimeInvoker_t1245, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3760_MIs[] =
{
	&m29752_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3760_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3760_0_0_0;
extern Il2CppType t3760_1_0_0;
struct t3760;
extern TypeInfo t3760_TI;
extern Il2CppGenericClass t3760_GC;
TypeInfo t3760_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3760_MIs, t3760_PIs, NULL, NULL, NULL, NULL, NULL, &t3760_TI, t3760_ITIs, NULL, &EmptyCustomAttributesCache, &t3760_TI, &t3760_0_0_0, &t3760_1_0_0, NULL, &t3760_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2886.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2886_TI;
#include "t2886MD.h"

extern TypeInfo t2886_TI;
extern TypeInfo t1245_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m16730_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m22741_MI;
struct t16;
 int32_t m22741 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22741_MI;


extern MethodInfo m16726_MI;
 void m16726 (t2886 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16727_MI;
 t4 * m16727 (t2886 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16730(__this, &m16730_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1245_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16728_MI;
 void m16728 (t2886 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16729_MI;
 bool m16729 (t2886 * __this, MethodInfo* method){
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
extern MethodInfo m16730_MI;
 int32_t m16730 (t2886 * __this, MethodInfo* method){
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
		int32_t L_8 = m22741(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22741_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTimeKind>
extern Il2CppType t16_0_0_1;
FieldInfo t2886_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2886_TI, offsetof(t2886, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2886_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2886_TI, offsetof(t2886, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2886_FIs[] =
{
	&t2886_f0_FieldInfo,
	&t2886_f1_FieldInfo,
	NULL
};
extern MethodInfo m16727_MI;
static PropertyInfo t2886____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2886_TI, "System.Collections.IEnumerator.Current", &m16727_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16730_MI;
static PropertyInfo t2886____Current_PropertyInfo = 
{
	&t2886_TI, "Current", &m16730_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2886_PIs[] =
{
	&t2886____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2886____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2886_m16726_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2886_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16726_MI = 
{
	".ctor", (methodPointerType)&m16726, &t2886_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2886_m16726_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2886_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16727_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16727, &t2886_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2886_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16728_MI = 
{
	"Dispose", (methodPointerType)&m16728, &t2886_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2886_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m16729_MI = 
{
	"MoveNext", (methodPointerType)&m16729, &t2886_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2886_TI;
extern Il2CppType t1245_0_0_0;
extern void* RuntimeInvoker_t1245 (MethodInfo* method, void* obj, void** args);
MethodInfo m16730_MI = 
{
	"get_Current", (methodPointerType)&m16730, &t2886_TI, &t1245_0_0_0, RuntimeInvoker_t1245, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2886_MIs[] =
{
	&m16726_MI,
	&m16727_MI,
	&m16728_MI,
	&m16729_MI,
	&m16730_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m16727_MI;
extern MethodInfo m16729_MI;
extern MethodInfo m16728_MI;
extern MethodInfo m16730_MI;
static MethodInfo* t2886_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m16727_MI,
	&m16729_MI,
	&m16728_MI,
	&m16730_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3760_TI;
static TypeInfo* t2886_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3760_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3760_TI;
static Il2CppInterfaceOffsetPair t2886_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3760_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2886_0_0_0;
extern Il2CppType t2886_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2886_TI;
extern Il2CppGenericClass t2886_GC;
extern TypeInfo t16_TI;
TypeInfo t2886_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2886_MIs, t2886_PIs, t2886_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2886_TI, t2886_ITIs, t2886_VT, &EmptyCustomAttributesCache, &t2886_TI, &t2886_0_0_0, &t2886_1_0_0, t2886_IOs, &t2886_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2886)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5100_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTimeKind>
extern MethodInfo m29753_MI;
static PropertyInfo t5100____Count_PropertyInfo = 
{
	&t5100_TI, "Count", &m29753_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29754_MI;
static PropertyInfo t5100____IsReadOnly_PropertyInfo = 
{
	&t5100_TI, "IsReadOnly", &m29754_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5100_PIs[] =
{
	&t5100____Count_PropertyInfo,
	&t5100____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5100_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29753_MI = 
{
	"get_Count", NULL, &t5100_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5100_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m29754_MI = 
{
	"get_IsReadOnly", NULL, &t5100_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1245_0_0_0;
static ParameterInfo t5100_m29755_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1245_0_0_0},
};
extern TypeInfo t5100_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29755_MI = 
{
	"Add", NULL, &t5100_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5100_m29755_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5100_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29756_MI = 
{
	"Clear", NULL, &t5100_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1245_0_0_0;
static ParameterInfo t5100_m29757_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1245_0_0_0},
};
extern TypeInfo t5100_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29757_MI = 
{
	"Contains", NULL, &t5100_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t5100_m29757_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3099_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t5100_m29758_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3099_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5100_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29758_MI = 
{
	"CopyTo", NULL, &t5100_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t5100_m29758_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1245_0_0_0;
static ParameterInfo t5100_m29759_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1245_0_0_0},
};
extern TypeInfo t5100_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29759_MI = 
{
	"Remove", NULL, &t5100_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t5100_m29759_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5100_MIs[] =
{
	&m29753_MI,
	&m29754_MI,
	&m29755_MI,
	&m29756_MI,
	&m29757_MI,
	&m29758_MI,
	&m29759_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5102_TI;
static TypeInfo* t5100_ITIs[] = 
{
	&t592_TI,
	&t5102_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5100_0_0_0;
extern Il2CppType t5100_1_0_0;
struct t5100;
extern TypeInfo t5100_TI;
extern Il2CppGenericClass t5100_GC;
TypeInfo t5100_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5100_MIs, t5100_PIs, NULL, NULL, NULL, NULL, NULL, &t5100_TI, t5100_ITIs, NULL, &EmptyCustomAttributesCache, &t5100_TI, &t5100_0_0_0, &t5100_1_0_0, NULL, &t5100_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5102_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTimeKind>
extern TypeInfo t5102_TI;
extern Il2CppType t3760_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29760_MI = 
{
	"GetEnumerator", NULL, &t5102_TI, &t3760_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5102_MIs[] =
{
	&m29760_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t5102_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5102_0_0_0;
extern Il2CppType t5102_1_0_0;
struct t5102;
extern TypeInfo t5102_TI;
extern Il2CppGenericClass t5102_GC;
TypeInfo t5102_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5102_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5102_TI, t5102_ITIs, NULL, &EmptyCustomAttributesCache, &t5102_TI, &t5102_0_0_0, &t5102_1_0_0, NULL, &t5102_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5101_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.DateTimeKind>
extern MethodInfo m29761_MI;
extern MethodInfo m29762_MI;
static PropertyInfo t5101____Item_PropertyInfo = 
{
	&t5101_TI, "Item", &m29761_MI, &m29762_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5101_PIs[] =
{
	&t5101____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1245_0_0_0;
static ParameterInfo t5101_m29763_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1245_0_0_0},
};
extern TypeInfo t5101_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29763_MI = 
{
	"IndexOf", NULL, &t5101_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t5101_m29763_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1245_0_0_0;
static ParameterInfo t5101_m29764_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1245_0_0_0},
};
extern TypeInfo t5101_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29764_MI = 
{
	"Insert", NULL, &t5101_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t5101_m29764_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5101_m29765_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5101_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29765_MI = 
{
	"RemoveAt", NULL, &t5101_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5101_m29765_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5101_m29761_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5101_TI;
extern Il2CppType t1245_0_0_0;
extern void* RuntimeInvoker_t1245_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29761_MI = 
{
	"get_Item", NULL, &t5101_TI, &t1245_0_0_0, RuntimeInvoker_t1245_t18, t5101_m29761_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1245_0_0_0;
static ParameterInfo t5101_m29762_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1245_0_0_0},
};
extern TypeInfo t5101_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29762_MI = 
{
	"set_Item", NULL, &t5101_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t5101_m29762_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5101_MIs[] =
{
	&m29763_MI,
	&m29764_MI,
	&m29765_MI,
	&m29761_MI,
	&m29762_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5100_TI;
extern TypeInfo t5102_TI;
static TypeInfo* t5101_ITIs[] = 
{
	&t592_TI,
	&t5100_TI,
	&t5102_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5101_0_0_0;
extern Il2CppType t5101_1_0_0;
struct t5101;
extern TypeInfo t5101_TI;
extern Il2CppGenericClass t5101_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t5101_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5101_MIs, t5101_PIs, NULL, NULL, NULL, NULL, NULL, &t5101_TI, t5101_ITIs, NULL, &t1401__CustomAttributeCache, &t5101_TI, &t5101_0_0_0, &t5101_1_0_0, NULL, &t5101_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1555_TI;

#include "t1246.h"


// Metadata Definition System.IComparable`1<System.DateTimeOffset>
extern Il2CppType t1246_0_0_0;
static ParameterInfo t1555_m29766_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
};
extern TypeInfo t1555_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1246 (MethodInfo* method, void* obj, void** args);
MethodInfo m29766_MI = 
{
	"CompareTo", NULL, &t1555_TI, &t18_0_0_0, RuntimeInvoker_t18_t1246, t1555_m29766_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1555_MIs[] =
{
	&m29766_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1555_0_0_0;
extern Il2CppType t1555_1_0_0;
struct t1555;
extern TypeInfo t1555_TI;
extern Il2CppGenericClass t1555_GC;
TypeInfo t1555_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1555_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1555_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1555_TI, &t1555_0_0_0, &t1555_1_0_0, NULL, &t1555_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1556_TI;



// Metadata Definition System.IEquatable`1<System.DateTimeOffset>
extern Il2CppType t1246_0_0_0;
static ParameterInfo t1556_m29767_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
};
extern TypeInfo t1556_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t1246 (MethodInfo* method, void* obj, void** args);
MethodInfo m29767_MI = 
{
	"Equals", NULL, &t1556_TI, &t19_0_0_0, RuntimeInvoker_t19_t1246, t1556_m29767_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1556_MIs[] =
{
	&m29767_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1556_0_0_0;
extern Il2CppType t1556_1_0_0;
struct t1556;
extern TypeInfo t1556_TI;
extern Il2CppGenericClass t1556_GC;
TypeInfo t1556_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1556_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1556_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1556_TI, &t1556_0_0_0, &t1556_1_0_0, NULL, &t1556_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1553.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1553_TI;
#include "t1553MD.h"

extern TypeInfo t1246_TI;
extern TypeInfo t1555_TI;
extern TypeInfo t18_TI;
#include "t2887MD.h"
extern MethodInfo m16732_MI;
extern MethodInfo m29766_MI;


extern MethodInfo m7831_MI;
 void m7831 (t1553 * __this, MethodInfo* method){
	{
		m16732(__this, &m16732_MI);
		return;
	}
}
extern MethodInfo m16731_MI;
 int32_t m16731 (t1553 * __this, t1246  p0, t1246  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t1246  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t1246_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t1246  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t1246_TI), &L_2);
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
		t1246  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t1246_TI), &L_4);
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
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, t1246  >::Invoke(&m29766_MI, Box(InitializedTypeInfo(&t1246_TI), &(*(&p0))), p1);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
extern TypeInfo t1553_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m7831_MI = 
{
	".ctor", (methodPointerType)&m7831, &t1553_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1246_0_0_0;
extern Il2CppType t1246_0_0_0;
static ParameterInfo t1553_m16731_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
};
extern TypeInfo t1553_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1246_t1246 (MethodInfo* method, void* obj, void** args);
MethodInfo m16731_MI = 
{
	"Compare", (methodPointerType)&m16731, &t1553_TI, &t18_0_0_0, RuntimeInvoker_t18_t1246_t1246, t1553_m16731_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1553_MIs[] =
{
	&m7831_MI,
	&m16731_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m16731_MI;
extern MethodInfo m16734_MI;
extern MethodInfo m16731_MI;
static MethodInfo* t1553_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m16731_MI,
	&m16734_MI,
	&m16731_MI,
};
extern TypeInfo t5216_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t1553_IOs[] = 
{
	{ &t5216_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1553_0_0_0;
extern Il2CppType t1553_1_0_0;
extern TypeInfo t2887_TI;
struct t1553;
extern TypeInfo t1553_TI;
extern Il2CppGenericClass t1553_GC;
TypeInfo t1553_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericComparer`1", "System.Collections.Generic", t1553_MIs, NULL, NULL, NULL, &t2887_TI, NULL, NULL, &t1553_TI, NULL, t1553_VT, &EmptyCustomAttributesCache, &t1553_TI, &t1553_0_0_0, &t1553_1_0_0, t1553_IOs, &t1553_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1553), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t2887.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2887_TI;

#include "t294.h"
#include "t295.h"
#include "t825.h"
#include "t2888.h"
#include "t307.h"
extern TypeInfo t2887_TI;
extern TypeInfo t1555_TI;
extern TypeInfo t294_TI;
extern TypeInfo t1246_TI;
extern TypeInfo t19_TI;
extern TypeInfo t825_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2888_TI;
extern TypeInfo t18_TI;
extern TypeInfo t307_TI;
#include "t4MD.h"
#include "t294MD.h"
#include "t1223MD.h"
#include "t2888MD.h"
#include "t307MD.h"
extern Il2CppType t1555_0_0_0;
extern Il2CppType t1246_0_0_0;
extern Il2CppType t825_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m16736_MI;
extern MethodInfo m29768_MI;
extern MethodInfo m6463_MI;


extern MethodInfo m16732_MI;
 void m16732 (t2887 * __this, MethodInfo* method){
	{
		m24(__this, &m24_MI);
		return;
	}
}
extern MethodInfo m16733_MI;
 void m16733 (t4 * __this, MethodInfo* method){
	t2888 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2888 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2888_TI));
	m16736(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m16736_MI);
	((t2887_SFs*)InitializedTypeInfo(&t2887_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m16734_MI;
 int32_t m16734 (t2887 * __this, t4 * p0, t4 * p1, MethodInfo* method){
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
		if (!((t4 *)IsInst(p0, InitializedTypeInfo(&t1246_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t4 *)IsInst(p1, InitializedTypeInfo(&t1246_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t1246 , t1246  >::Invoke(&m29768_MI, __this, ((*(t1246 *)((t1246 *)UnBox (p0, InitializedTypeInfo(&t1246_TI))))), ((*(t1246 *)((t1246 *)UnBox (p1, InitializedTypeInfo(&t1246_TI))))));
		return L_0;
	}

IL_0033:
	{
		t307 * L_1 = (t307 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t307_TI));
		m6463(L_1, &m6463_MI);
		il2cpp_codegen_raise_exception (L_1);
	}
}
extern MethodInfo m16735_MI;
 t2887 * m16735 (t4 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2887_TI));
		return (((t2887_SFs*)InitializedTypeInfo(&t2887_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.DateTimeOffset>
extern Il2CppType t2887_0_0_49;
FieldInfo t2887_f0_FieldInfo = 
{
	"_default", &t2887_0_0_49, &t2887_TI, offsetof(t2887_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2887_FIs[] =
{
	&t2887_f0_FieldInfo,
	NULL
};
extern MethodInfo m16735_MI;
static PropertyInfo t2887____Default_PropertyInfo = 
{
	&t2887_TI, "Default", &m16735_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2887_PIs[] =
{
	&t2887____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2887_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16732_MI = 
{
	".ctor", (methodPointerType)&m16732, &t2887_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2887_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16733_MI = 
{
	".cctor", (methodPointerType)&m16733, &t2887_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2887_m16734_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2887_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16734_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m16734, &t2887_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t2887_m16734_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1246_0_0_0;
extern Il2CppType t1246_0_0_0;
static ParameterInfo t2887_m29768_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
};
extern TypeInfo t2887_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1246_t1246 (MethodInfo* method, void* obj, void** args);
MethodInfo m29768_MI = 
{
	"Compare", NULL, &t2887_TI, &t18_0_0_0, RuntimeInvoker_t18_t1246_t1246, t2887_m29768_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2887_TI;
extern Il2CppType t2887_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16735_MI = 
{
	"get_Default", (methodPointerType)&m16735, &t2887_TI, &t2887_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2887_MIs[] =
{
	&m16732_MI,
	&m16733_MI,
	&m16734_MI,
	&m29768_MI,
	&m16735_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m29768_MI;
extern MethodInfo m16734_MI;
static MethodInfo* t2887_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m29768_MI,
	&m16734_MI,
	NULL,
};
extern TypeInfo t5216_TI;
extern TypeInfo t717_TI;
static TypeInfo* t2887_ITIs[] = 
{
	&t5216_TI,
	&t717_TI,
};
extern TypeInfo t5216_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t2887_IOs[] = 
{
	{ &t5216_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2887_0_0_0;
extern Il2CppType t2887_1_0_0;
extern TypeInfo t4_TI;
struct t2887;
extern TypeInfo t2887_TI;
extern Il2CppGenericClass t2887_GC;
TypeInfo t2887_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2887_MIs, t2887_PIs, t2887_FIs, NULL, &t4_TI, NULL, NULL, &t2887_TI, t2887_ITIs, t2887_VT, &EmptyCustomAttributesCache, &t2887_TI, &t2887_0_0_0, &t2887_1_0_0, t2887_IOs, &t2887_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2887), 0, -1, sizeof(t2887_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5216_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.DateTimeOffset>
extern Il2CppType t1246_0_0_0;
extern Il2CppType t1246_0_0_0;
static ParameterInfo t5216_m29769_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
};
extern TypeInfo t5216_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1246_t1246 (MethodInfo* method, void* obj, void** args);
MethodInfo m29769_MI = 
{
	"Compare", NULL, &t5216_TI, &t18_0_0_0, RuntimeInvoker_t18_t1246_t1246, t5216_m29769_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5216_MIs[] =
{
	&m29769_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5216_0_0_0;
extern Il2CppType t5216_1_0_0;
struct t5216;
extern TypeInfo t5216_TI;
extern Il2CppGenericClass t5216_GC;
TypeInfo t5216_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t5216_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5216_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5216_TI, &t5216_0_0_0, &t5216_1_0_0, NULL, &t5216_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2888_TI;

extern TypeInfo t1246_TI;
extern TypeInfo t1555_TI;
extern TypeInfo t18_TI;
extern TypeInfo t289_TI;
extern TypeInfo t4_TI;
extern TypeInfo t307_TI;
extern MethodInfo m16732_MI;
extern MethodInfo m29766_MI;
extern MethodInfo m7306_MI;
extern MethodInfo m1936_MI;


extern MethodInfo m16736_MI;
 void m16736 (t2888 * __this, MethodInfo* method){
	{
		m16732(__this, &m16732_MI);
		return;
	}
}
extern MethodInfo m16737_MI;
 int32_t m16737 (t2888 * __this, t1246  p0, t1246  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t1246  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t1246_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t1246  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t1246_TI), &L_2);
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
		t1246  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t1246_TI), &L_4);
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
		t1246  L_6 = p0;
		t4 * L_7 = Box(InitializedTypeInfo(&t1246_TI), &L_6);
		if (!((t4*)IsInst(L_7, InitializedTypeInfo(&t1555_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t1246  L_8 = p0;
		t4 * L_9 = Box(InitializedTypeInfo(&t1246_TI), &L_8);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t1246  >::Invoke(&m29766_MI, ((t4*)Castclass(L_9, InitializedTypeInfo(&t1555_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t1246  L_11 = p0;
		t4 * L_12 = Box(InitializedTypeInfo(&t1246_TI), &L_11);
		if (!((t4 *)IsInst(L_12, InitializedTypeInfo(&t289_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t1246  L_13 = p0;
		t4 * L_14 = Box(InitializedTypeInfo(&t1246_TI), &L_13);
		t1246  L_15 = p1;
		t4 * L_16 = Box(InitializedTypeInfo(&t1246_TI), &L_15);
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
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
extern TypeInfo t2888_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16736_MI = 
{
	".ctor", (methodPointerType)&m16736, &t2888_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1246_0_0_0;
extern Il2CppType t1246_0_0_0;
static ParameterInfo t2888_m16737_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
};
extern TypeInfo t2888_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1246_t1246 (MethodInfo* method, void* obj, void** args);
MethodInfo m16737_MI = 
{
	"Compare", (methodPointerType)&m16737, &t2888_TI, &t18_0_0_0, RuntimeInvoker_t18_t1246_t1246, t2888_m16737_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2888_MIs[] =
{
	&m16736_MI,
	&m16737_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m16737_MI;
extern MethodInfo m16734_MI;
extern MethodInfo m16737_MI;
static MethodInfo* t2888_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m16737_MI,
	&m16734_MI,
	&m16737_MI,
};
extern TypeInfo t5216_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t2888_IOs[] = 
{
	{ &t5216_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2888_0_0_0;
extern Il2CppType t2888_1_0_0;
extern TypeInfo t2887_TI;
struct t2888;
extern TypeInfo t2888_TI;
extern Il2CppGenericClass t2888_GC;
extern TypeInfo t824_TI;
TypeInfo t2888_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2888_MIs, NULL, NULL, NULL, &t2887_TI, NULL, &t824_TI, &t2888_TI, NULL, t2888_VT, &EmptyCustomAttributesCache, &t2888_TI, &t2888_0_0_0, &t2888_1_0_0, t2888_IOs, &t2888_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2888), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t1554.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1554_TI;
#include "t1554MD.h"

extern TypeInfo t1246_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
extern TypeInfo t1556_TI;
extern TypeInfo t19_TI;
#include "t2889MD.h"
extern MethodInfo m16740_MI;
extern MethodInfo m30_MI;
extern MethodInfo m29767_MI;


extern MethodInfo m7832_MI;
 void m7832 (t1554 * __this, MethodInfo* method){
	{
		m16740(__this, &m16740_MI);
		return;
	}
}
extern MethodInfo m16738_MI;
 int32_t m16738 (t1554 * __this, t1246  p0, MethodInfo* method){
	{
		t1246  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t1246_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m30_MI, Box(InitializedTypeInfo(&t1246_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m16739_MI;
 bool m16739 (t1554 * __this, t1246  p0, t1246  p1, MethodInfo* method){
	{
		t1246  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t1246_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t1246  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t1246_TI), &L_2);
		return ((((t4 *)L_3) == ((t4 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, t1246  >::Invoke(&m29767_MI, Box(InitializedTypeInfo(&t1246_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
extern TypeInfo t1554_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m7832_MI = 
{
	".ctor", (methodPointerType)&m7832, &t1554_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1246_0_0_0;
static ParameterInfo t1554_m16738_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
};
extern TypeInfo t1554_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1246 (MethodInfo* method, void* obj, void** args);
MethodInfo m16738_MI = 
{
	"GetHashCode", (methodPointerType)&m16738, &t1554_TI, &t18_0_0_0, RuntimeInvoker_t18_t1246, t1554_m16738_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1246_0_0_0;
extern Il2CppType t1246_0_0_0;
static ParameterInfo t1554_m16739_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
};
extern TypeInfo t1554_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t1246_t1246 (MethodInfo* method, void* obj, void** args);
MethodInfo m16739_MI = 
{
	"Equals", (methodPointerType)&m16739, &t1554_TI, &t19_0_0_0, RuntimeInvoker_t19_t1246_t1246, t1554_m16739_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1554_MIs[] =
{
	&m7832_MI,
	&m16738_MI,
	&m16739_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m16739_MI;
extern MethodInfo m16738_MI;
extern MethodInfo m16743_MI;
extern MethodInfo m16742_MI;
extern MethodInfo m16738_MI;
extern MethodInfo m16739_MI;
static MethodInfo* t1554_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m16739_MI,
	&m16738_MI,
	&m16743_MI,
	&m16742_MI,
	&m16738_MI,
	&m16739_MI,
};
extern TypeInfo t5217_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t1554_IOs[] = 
{
	{ &t5217_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1554_0_0_0;
extern Il2CppType t1554_1_0_0;
extern TypeInfo t2889_TI;
struct t1554;
extern TypeInfo t1554_TI;
extern Il2CppGenericClass t1554_GC;
TypeInfo t1554_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t1554_MIs, NULL, NULL, NULL, &t2889_TI, NULL, NULL, &t1554_TI, NULL, t1554_VT, &EmptyCustomAttributesCache, &t1554_TI, &t1554_0_0_0, &t1554_1_0_0, t1554_IOs, &t1554_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1554), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t2889.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2889_TI;

#include "t837.h"
#include "t2890.h"
extern TypeInfo t2889_TI;
extern TypeInfo t1556_TI;
extern TypeInfo t294_TI;
extern TypeInfo t1246_TI;
extern TypeInfo t19_TI;
extern TypeInfo t837_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2890_TI;
extern TypeInfo t18_TI;
#include "t2890MD.h"
extern Il2CppType t1556_0_0_0;
extern Il2CppType t1246_0_0_0;
extern Il2CppType t837_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m16745_MI;
extern MethodInfo m29770_MI;
extern MethodInfo m29771_MI;


extern MethodInfo m16740_MI;
 void m16740 (t2889 * __this, MethodInfo* method){
	{
		m24(__this, &m24_MI);
		return;
	}
}
extern MethodInfo m16741_MI;
 void m16741 (t4 * __this, MethodInfo* method){
	t2890 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2890 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2890_TI));
	m16745(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m16745_MI);
	((t2889_SFs*)InitializedTypeInfo(&t2889_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m16742_MI;
 int32_t m16742 (t2889 * __this, t4 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t1246  >::Invoke(&m29770_MI, __this, ((*(t1246 *)((t1246 *)UnBox (p0, InitializedTypeInfo(&t1246_TI))))));
		return L_0;
	}
}
extern MethodInfo m16743_MI;
 bool m16743 (t2889 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t1246 , t1246  >::Invoke(&m29771_MI, __this, ((*(t1246 *)((t1246 *)UnBox (p0, InitializedTypeInfo(&t1246_TI))))), ((*(t1246 *)((t1246 *)UnBox (p1, InitializedTypeInfo(&t1246_TI))))));
		return L_0;
	}
}
extern MethodInfo m16744_MI;
 t2889 * m16744 (t4 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2889_TI));
		return (((t2889_SFs*)InitializedTypeInfo(&t2889_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
extern Il2CppType t2889_0_0_49;
FieldInfo t2889_f0_FieldInfo = 
{
	"_default", &t2889_0_0_49, &t2889_TI, offsetof(t2889_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2889_FIs[] =
{
	&t2889_f0_FieldInfo,
	NULL
};
extern MethodInfo m16744_MI;
static PropertyInfo t2889____Default_PropertyInfo = 
{
	&t2889_TI, "Default", &m16744_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2889_PIs[] =
{
	&t2889____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2889_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16740_MI = 
{
	".ctor", (methodPointerType)&m16740, &t2889_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2889_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16741_MI = 
{
	".cctor", (methodPointerType)&m16741, &t2889_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2889_m16742_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2889_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16742_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m16742, &t2889_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2889_m16742_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2889_m16743_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2889_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16743_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m16743, &t2889_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2889_m16743_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1246_0_0_0;
static ParameterInfo t2889_m29770_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
};
extern TypeInfo t2889_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1246 (MethodInfo* method, void* obj, void** args);
MethodInfo m29770_MI = 
{
	"GetHashCode", NULL, &t2889_TI, &t18_0_0_0, RuntimeInvoker_t18_t1246, t2889_m29770_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1246_0_0_0;
extern Il2CppType t1246_0_0_0;
static ParameterInfo t2889_m29771_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
};
extern TypeInfo t2889_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t1246_t1246 (MethodInfo* method, void* obj, void** args);
MethodInfo m29771_MI = 
{
	"Equals", NULL, &t2889_TI, &t19_0_0_0, RuntimeInvoker_t19_t1246_t1246, t2889_m29771_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2889_TI;
extern Il2CppType t2889_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16744_MI = 
{
	"get_Default", (methodPointerType)&m16744, &t2889_TI, &t2889_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2889_MIs[] =
{
	&m16740_MI,
	&m16741_MI,
	&m16742_MI,
	&m16743_MI,
	&m29770_MI,
	&m29771_MI,
	&m16744_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m29771_MI;
extern MethodInfo m29770_MI;
extern MethodInfo m16743_MI;
extern MethodInfo m16742_MI;
static MethodInfo* t2889_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m29771_MI,
	&m29770_MI,
	&m16743_MI,
	&m16742_MI,
	NULL,
	NULL,
};
extern TypeInfo t5217_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2889_ITIs[] = 
{
	&t5217_TI,
	&t860_TI,
};
extern TypeInfo t5217_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2889_IOs[] = 
{
	{ &t5217_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2889_0_0_0;
extern Il2CppType t2889_1_0_0;
extern TypeInfo t4_TI;
struct t2889;
extern TypeInfo t2889_TI;
extern Il2CppGenericClass t2889_GC;
TypeInfo t2889_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2889_MIs, t2889_PIs, t2889_FIs, NULL, &t4_TI, NULL, NULL, &t2889_TI, t2889_ITIs, t2889_VT, &EmptyCustomAttributesCache, &t2889_TI, &t2889_0_0_0, &t2889_1_0_0, t2889_IOs, &t2889_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2889), 0, -1, sizeof(t2889_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5217_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>
extern Il2CppType t1246_0_0_0;
extern Il2CppType t1246_0_0_0;
static ParameterInfo t5217_m29772_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
};
extern TypeInfo t5217_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t1246_t1246 (MethodInfo* method, void* obj, void** args);
MethodInfo m29772_MI = 
{
	"Equals", NULL, &t5217_TI, &t19_0_0_0, RuntimeInvoker_t19_t1246_t1246, t5217_m29772_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1246_0_0_0;
static ParameterInfo t5217_m29773_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
};
extern TypeInfo t5217_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1246 (MethodInfo* method, void* obj, void** args);
MethodInfo m29773_MI = 
{
	"GetHashCode", NULL, &t5217_TI, &t18_0_0_0, RuntimeInvoker_t18_t1246, t5217_m29773_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5217_MIs[] =
{
	&m29772_MI,
	&m29773_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5217_0_0_0;
extern Il2CppType t5217_1_0_0;
struct t5217;
extern TypeInfo t5217_TI;
extern Il2CppGenericClass t5217_GC;
TypeInfo t5217_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5217_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5217_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5217_TI, &t5217_0_0_0, &t5217_1_0_0, NULL, &t5217_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2890_TI;

extern TypeInfo t1246_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
extern TypeInfo t19_TI;
extern MethodInfo m16740_MI;
extern MethodInfo m30_MI;
extern MethodInfo m28_MI;


extern MethodInfo m16745_MI;
 void m16745 (t2890 * __this, MethodInfo* method){
	{
		m16740(__this, &m16740_MI);
		return;
	}
}
extern MethodInfo m16746_MI;
 int32_t m16746 (t2890 * __this, t1246  p0, MethodInfo* method){
	{
		t1246  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t1246_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m30_MI, Box(InitializedTypeInfo(&t1246_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m16747_MI;
 bool m16747 (t2890 * __this, t1246  p0, t1246  p1, MethodInfo* method){
	{
		t1246  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t1246_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t1246  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t1246_TI), &L_2);
		return ((((t4 *)L_3) == ((t4 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t1246  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t1246_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t4 * >::Invoke(&m28_MI, Box(InitializedTypeInfo(&t1246_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
extern TypeInfo t2890_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16745_MI = 
{
	".ctor", (methodPointerType)&m16745, &t2890_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1246_0_0_0;
static ParameterInfo t2890_m16746_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
};
extern TypeInfo t2890_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1246 (MethodInfo* method, void* obj, void** args);
MethodInfo m16746_MI = 
{
	"GetHashCode", (methodPointerType)&m16746, &t2890_TI, &t18_0_0_0, RuntimeInvoker_t18_t1246, t2890_m16746_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1246_0_0_0;
extern Il2CppType t1246_0_0_0;
static ParameterInfo t2890_m16747_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1246_0_0_0},
};
extern TypeInfo t2890_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t1246_t1246 (MethodInfo* method, void* obj, void** args);
MethodInfo m16747_MI = 
{
	"Equals", (methodPointerType)&m16747, &t2890_TI, &t19_0_0_0, RuntimeInvoker_t19_t1246_t1246, t2890_m16747_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2890_MIs[] =
{
	&m16745_MI,
	&m16746_MI,
	&m16747_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m16747_MI;
extern MethodInfo m16746_MI;
extern MethodInfo m16743_MI;
extern MethodInfo m16742_MI;
extern MethodInfo m16746_MI;
extern MethodInfo m16747_MI;
static MethodInfo* t2890_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m16747_MI,
	&m16746_MI,
	&m16743_MI,
	&m16742_MI,
	&m16746_MI,
	&m16747_MI,
};
extern TypeInfo t5217_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2890_IOs[] = 
{
	{ &t5217_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2890_0_0_0;
extern Il2CppType t2890_1_0_0;
extern TypeInfo t2889_TI;
struct t2890;
extern TypeInfo t2890_TI;
extern Il2CppGenericClass t2890_GC;
extern TypeInfo t836_TI;
TypeInfo t2890_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2890_MIs, NULL, NULL, NULL, &t2889_TI, NULL, &t836_TI, &t2890_TI, NULL, t2890_VT, &EmptyCustomAttributesCache, &t2890_TI, &t2890_0_0_0, &t2890_1_0_0, t2890_IOs, &t2890_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2890), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t1248.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1248_TI;
#include "t1248MD.h"

#include "t879.h"
#include "t101.h"
extern TypeInfo t1248_TI;
extern TypeInfo t1270_TI;
extern TypeInfo t879_TI;
extern TypeInfo t101_TI;
extern TypeInfo t19_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
extern TypeInfo t8_TI;
#include "t101MD.h"
#include "t8MD.h"
extern MethodInfo m6907_MI;
extern MethodInfo m16749_MI;
extern MethodInfo m1381_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;


extern MethodInfo m7833_MI;
 void m7833 (t1248 * __this, t879  p0, MethodInfo* method){
	{
		__this->f1 = 1;
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m7834_MI;
 bool m7834 (t1248 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m7835_MI;
 t879  m7835 (t1248 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1270 * L_1 = (t1270 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1270_TI));
		m6907(L_1, (t8*) &_stringLiteral412, &m6907_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t879  L_2 = (__this->f0);
		return L_2;
	}
}
extern MethodInfo m16748_MI;
 bool m16748 (t1248 * __this, t4 * p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000d;
		}
	}
	{
		bool L_0 = (__this->f1);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		if (((t4 *)IsInst(p0, InitializedTypeInfo(&t1248_TI))))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		void* L_1 = alloca(sizeof(t1248 ));
		UnBoxNullable(p0, InitializedTypeInfo(&t1248_TI), L_1);
		bool L_2 = m16749(__this, ((*(t1248 *)((t1248 *)L_1))), &m16749_MI);
		return L_2;
	}
}
extern MethodInfo m16749_MI;
 bool m16749 (t1248 * __this, t1248  p0, MethodInfo* method){
	{
		bool L_0 = ((&p0)->f1);
		bool L_1 = (__this->f1);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		bool L_2 = (__this->f1);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		t879 * L_3 = &((&p0)->f0);
		t879  L_4 = (__this->f0);
		t879  L_5 = L_4;
		t4 * L_6 = Box(InitializedTypeInfo(&t879_TI), &L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, t4 * >::Invoke(&m1381_MI, Box(InitializedTypeInfo(&t879_TI), &(*L_3)), L_6);
		return L_7;
	}
}
extern MethodInfo m16750_MI;
 int32_t m16750 (t1248 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		t879 * L_1 = &(__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m1382_MI, Box(InitializedTypeInfo(&t879_TI), &(*L_1)));
		return L_2;
	}
}
extern MethodInfo m16751_MI;
 t8* m16751 (t1248 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t879 * L_1 = &(__this->f0);
		t8* L_2 = (t8*)VirtFuncInvoker0< t8* >::Invoke(&m1494_MI, Box(InitializedTypeInfo(&t879_TI), &(*L_1)));
		return L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t8_TI));
		return (((t8_SFs*)(&t8_TI)->static_fields)->f2);
	}
}
// Metadata Definition System.Nullable`1<System.TimeSpan>
extern Il2CppType t879_0_0_3;
FieldInfo t1248_f0_FieldInfo = 
{
	"value", &t879_0_0_3, &t1248_TI, offsetof(t1248, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t19_0_0_3;
FieldInfo t1248_f1_FieldInfo = 
{
	"has_value", &t19_0_0_3, &t1248_TI, offsetof(t1248, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t1248_FIs[] =
{
	&t1248_f0_FieldInfo,
	&t1248_f1_FieldInfo,
	NULL
};
extern MethodInfo m7834_MI;
static PropertyInfo t1248____HasValue_PropertyInfo = 
{
	&t1248_TI, "HasValue", &m7834_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7835_MI;
static PropertyInfo t1248____Value_PropertyInfo = 
{
	&t1248_TI, "Value", &m7835_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1248_PIs[] =
{
	&t1248____HasValue_PropertyInfo,
	&t1248____Value_PropertyInfo,
	NULL
};
extern Il2CppType t879_0_0_0;
static ParameterInfo t1248_m7833_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
};
extern TypeInfo t1248_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t879 (MethodInfo* method, void* obj, void** args);
MethodInfo m7833_MI = 
{
	".ctor", (methodPointerType)&m7833, &t1248_TI, &t17_0_0_0, RuntimeInvoker_t17_t879, t1248_m7833_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1248_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m7834_MI = 
{
	"get_HasValue", (methodPointerType)&m7834, &t1248_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1248_TI;
extern Il2CppType t879_0_0_0;
extern void* RuntimeInvoker_t879 (MethodInfo* method, void* obj, void** args);
MethodInfo m7835_MI = 
{
	"get_Value", (methodPointerType)&m7835, &t1248_TI, &t879_0_0_0, RuntimeInvoker_t879, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t1248_m16748_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t1248_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16748_MI = 
{
	"Equals", (methodPointerType)&m16748, &t1248_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1248_m16748_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1248_0_0_0;
static ParameterInfo t1248_m16749_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1248_0_0_0},
};
extern TypeInfo t1248_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t1248 (MethodInfo* method, void* obj, void** args);
MethodInfo m16749_MI = 
{
	"Equals", (methodPointerType)&m16749, &t1248_TI, &t19_0_0_0, RuntimeInvoker_t19_t1248, t1248_m16749_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1248_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m16750_MI = 
{
	"GetHashCode", (methodPointerType)&m16750, &t1248_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1248_TI;
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16751_MI = 
{
	"ToString", (methodPointerType)&m16751, &t1248_TI, &t8_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1248_MIs[] =
{
	&m7833_MI,
	&m7834_MI,
	&m7835_MI,
	&m16748_MI,
	&m16749_MI,
	&m16750_MI,
	&m16751_MI,
	NULL
};
extern MethodInfo m16748_MI;
extern MethodInfo m29_MI;
extern MethodInfo m16750_MI;
extern MethodInfo m16751_MI;
static MethodInfo* t1248_VT[] =
{
	&m16748_MI,
	&m29_MI,
	&m16750_MI,
	&m16751_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1248_0_0_0;
extern Il2CppType t1248_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t1248_TI;
extern Il2CppGenericClass t1248_GC;
TypeInfo t1248_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Nullable`1", "System", t1248_MIs, t1248_PIs, t1248_FIs, NULL, &t101_TI, NULL, NULL, &t1248_TI, NULL, t1248_VT, &EmptyCustomAttributesCache, &t1248_TI, &t1248_0_0_0, &t1248_1_0_0, NULL, &t1248_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1248)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3761_TI;

#include "t870.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DayOfWeek>
extern MethodInfo m29774_MI;
static PropertyInfo t3761____Current_PropertyInfo = 
{
	&t3761_TI, "Current", &m29774_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3761_PIs[] =
{
	&t3761____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3761_TI;
extern Il2CppType t870_0_0_0;
extern void* RuntimeInvoker_t870 (MethodInfo* method, void* obj, void** args);
MethodInfo m29774_MI = 
{
	"get_Current", NULL, &t3761_TI, &t870_0_0_0, RuntimeInvoker_t870, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3761_MIs[] =
{
	&m29774_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3761_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3761_0_0_0;
extern Il2CppType t3761_1_0_0;
struct t3761;
extern TypeInfo t3761_TI;
extern Il2CppGenericClass t3761_GC;
TypeInfo t3761_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3761_MIs, t3761_PIs, NULL, NULL, NULL, NULL, NULL, &t3761_TI, t3761_ITIs, NULL, &EmptyCustomAttributesCache, &t3761_TI, &t3761_0_0_0, &t3761_1_0_0, NULL, &t3761_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2891.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2891_TI;
#include "t2891MD.h"

extern TypeInfo t2891_TI;
extern TypeInfo t870_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m16756_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m22752_MI;
struct t16;
 int32_t m22752 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22752_MI;


extern MethodInfo m16752_MI;
 void m16752 (t2891 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16753_MI;
 t4 * m16753 (t2891 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16756(__this, &m16756_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t870_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16754_MI;
 void m16754 (t2891 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16755_MI;
 bool m16755 (t2891 * __this, MethodInfo* method){
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
extern MethodInfo m16756_MI;
 int32_t m16756 (t2891 * __this, MethodInfo* method){
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
		int32_t L_8 = m22752(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22752_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DayOfWeek>
extern Il2CppType t16_0_0_1;
FieldInfo t2891_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2891_TI, offsetof(t2891, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2891_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2891_TI, offsetof(t2891, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2891_FIs[] =
{
	&t2891_f0_FieldInfo,
	&t2891_f1_FieldInfo,
	NULL
};
extern MethodInfo m16753_MI;
static PropertyInfo t2891____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2891_TI, "System.Collections.IEnumerator.Current", &m16753_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16756_MI;
static PropertyInfo t2891____Current_PropertyInfo = 
{
	&t2891_TI, "Current", &m16756_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2891_PIs[] =
{
	&t2891____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2891____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2891_m16752_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2891_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16752_MI = 
{
	".ctor", (methodPointerType)&m16752, &t2891_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2891_m16752_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2891_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16753_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16753, &t2891_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2891_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16754_MI = 
{
	"Dispose", (methodPointerType)&m16754, &t2891_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2891_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m16755_MI = 
{
	"MoveNext", (methodPointerType)&m16755, &t2891_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2891_TI;
extern Il2CppType t870_0_0_0;
extern void* RuntimeInvoker_t870 (MethodInfo* method, void* obj, void** args);
MethodInfo m16756_MI = 
{
	"get_Current", (methodPointerType)&m16756, &t2891_TI, &t870_0_0_0, RuntimeInvoker_t870, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2891_MIs[] =
{
	&m16752_MI,
	&m16753_MI,
	&m16754_MI,
	&m16755_MI,
	&m16756_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m16753_MI;
extern MethodInfo m16755_MI;
extern MethodInfo m16754_MI;
extern MethodInfo m16756_MI;
static MethodInfo* t2891_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m16753_MI,
	&m16755_MI,
	&m16754_MI,
	&m16756_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3761_TI;
static TypeInfo* t2891_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3761_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3761_TI;
static Il2CppInterfaceOffsetPair t2891_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3761_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2891_0_0_0;
extern Il2CppType t2891_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2891_TI;
extern Il2CppGenericClass t2891_GC;
extern TypeInfo t16_TI;
TypeInfo t2891_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2891_MIs, t2891_PIs, t2891_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2891_TI, t2891_ITIs, t2891_VT, &EmptyCustomAttributesCache, &t2891_TI, &t2891_0_0_0, &t2891_1_0_0, t2891_IOs, &t2891_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2891)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5103_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.DayOfWeek>
extern MethodInfo m29775_MI;
static PropertyInfo t5103____Count_PropertyInfo = 
{
	&t5103_TI, "Count", &m29775_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29776_MI;
static PropertyInfo t5103____IsReadOnly_PropertyInfo = 
{
	&t5103_TI, "IsReadOnly", &m29776_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5103_PIs[] =
{
	&t5103____Count_PropertyInfo,
	&t5103____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5103_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29775_MI = 
{
	"get_Count", NULL, &t5103_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5103_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m29776_MI = 
{
	"get_IsReadOnly", NULL, &t5103_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t870_0_0_0;
static ParameterInfo t5103_m29777_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t870_0_0_0},
};
extern TypeInfo t5103_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29777_MI = 
{
	"Add", NULL, &t5103_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5103_m29777_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5103_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29778_MI = 
{
	"Clear", NULL, &t5103_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t870_0_0_0;
static ParameterInfo t5103_m29779_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t870_0_0_0},
};
extern TypeInfo t5103_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29779_MI = 
{
	"Contains", NULL, &t5103_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t5103_m29779_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3100_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t5103_m29780_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3100_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5103_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29780_MI = 
{
	"CopyTo", NULL, &t5103_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t5103_m29780_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t870_0_0_0;
static ParameterInfo t5103_m29781_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t870_0_0_0},
};
extern TypeInfo t5103_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29781_MI = 
{
	"Remove", NULL, &t5103_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t5103_m29781_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5103_MIs[] =
{
	&m29775_MI,
	&m29776_MI,
	&m29777_MI,
	&m29778_MI,
	&m29779_MI,
	&m29780_MI,
	&m29781_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5105_TI;
static TypeInfo* t5103_ITIs[] = 
{
	&t592_TI,
	&t5105_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5103_0_0_0;
extern Il2CppType t5103_1_0_0;
struct t5103;
extern TypeInfo t5103_TI;
extern Il2CppGenericClass t5103_GC;
TypeInfo t5103_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5103_MIs, t5103_PIs, NULL, NULL, NULL, NULL, NULL, &t5103_TI, t5103_ITIs, NULL, &EmptyCustomAttributesCache, &t5103_TI, &t5103_0_0_0, &t5103_1_0_0, NULL, &t5103_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5105_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DayOfWeek>
extern TypeInfo t5105_TI;
extern Il2CppType t3761_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29782_MI = 
{
	"GetEnumerator", NULL, &t5105_TI, &t3761_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5105_MIs[] =
{
	&m29782_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t5105_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5105_0_0_0;
extern Il2CppType t5105_1_0_0;
struct t5105;
extern TypeInfo t5105_TI;
extern Il2CppGenericClass t5105_GC;
TypeInfo t5105_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5105_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5105_TI, t5105_ITIs, NULL, &EmptyCustomAttributesCache, &t5105_TI, &t5105_0_0_0, &t5105_1_0_0, NULL, &t5105_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5104_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.DayOfWeek>
extern MethodInfo m29783_MI;
extern MethodInfo m29784_MI;
static PropertyInfo t5104____Item_PropertyInfo = 
{
	&t5104_TI, "Item", &m29783_MI, &m29784_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5104_PIs[] =
{
	&t5104____Item_PropertyInfo,
	NULL
};
extern Il2CppType t870_0_0_0;
static ParameterInfo t5104_m29785_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t870_0_0_0},
};
extern TypeInfo t5104_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29785_MI = 
{
	"IndexOf", NULL, &t5104_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t5104_m29785_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t870_0_0_0;
static ParameterInfo t5104_m29786_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t870_0_0_0},
};
extern TypeInfo t5104_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29786_MI = 
{
	"Insert", NULL, &t5104_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t5104_m29786_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5104_m29787_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5104_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29787_MI = 
{
	"RemoveAt", NULL, &t5104_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5104_m29787_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5104_m29783_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5104_TI;
extern Il2CppType t870_0_0_0;
extern void* RuntimeInvoker_t870_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29783_MI = 
{
	"get_Item", NULL, &t5104_TI, &t870_0_0_0, RuntimeInvoker_t870_t18, t5104_m29783_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t870_0_0_0;
static ParameterInfo t5104_m29784_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t870_0_0_0},
};
extern TypeInfo t5104_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29784_MI = 
{
	"set_Item", NULL, &t5104_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t5104_m29784_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5104_MIs[] =
{
	&m29785_MI,
	&m29786_MI,
	&m29787_MI,
	&m29783_MI,
	&m29784_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5103_TI;
extern TypeInfo t5105_TI;
static TypeInfo* t5104_ITIs[] = 
{
	&t592_TI,
	&t5103_TI,
	&t5105_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5104_0_0_0;
extern Il2CppType t5104_1_0_0;
struct t5104;
extern TypeInfo t5104_TI;
extern Il2CppGenericClass t5104_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t5104_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5104_MIs, t5104_PIs, NULL, NULL, NULL, NULL, NULL, &t5104_TI, t5104_ITIs, NULL, &t1401__CustomAttributeCache, &t5104_TI, &t5104_0_0_0, &t5104_1_0_0, NULL, &t5104_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1557_TI;

#include "t298.h"


// Metadata Definition System.Collections.Generic.IComparer`1<System.SByte>
extern Il2CppType t298_0_0_0;
extern Il2CppType t298_0_0_0;
static ParameterInfo t1557_m29788_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t298_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t298_0_0_0},
};
extern TypeInfo t1557_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t298_t298 (MethodInfo* method, void* obj, void** args);
MethodInfo m29788_MI = 
{
	"Compare", NULL, &t1557_TI, &t18_0_0_0, RuntimeInvoker_t18_t298_t298, t1557_m29788_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1557_MIs[] =
{
	&m29788_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1557_0_0_0;
extern Il2CppType t1557_1_0_0;
struct t1557;
extern TypeInfo t1557_TI;
extern Il2CppGenericClass t1557_GC;
TypeInfo t1557_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t1557_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1557_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1557_TI, &t1557_0_0_0, &t1557_1_0_0, NULL, &t1557_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1558_TI;

#include "t364.h"


// Metadata Definition System.Collections.Generic.IComparer`1<System.Int16>
extern Il2CppType t364_0_0_0;
extern Il2CppType t364_0_0_0;
static ParameterInfo t1558_m29789_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t364_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t364_0_0_0},
};
extern TypeInfo t1558_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t364_t364 (MethodInfo* method, void* obj, void** args);
MethodInfo m29789_MI = 
{
	"Compare", NULL, &t1558_TI, &t18_0_0_0, RuntimeInvoker_t18_t364_t364, t1558_m29789_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1558_MIs[] =
{
	&m29789_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1558_0_0_0;
extern Il2CppType t1558_1_0_0;
struct t1558;
extern TypeInfo t1558_TI;
extern Il2CppGenericClass t1558_GC;
TypeInfo t1558_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t1558_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1558_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1558_TI, &t1558_0_0_0, &t1558_1_0_0, NULL, &t1558_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1559_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.Int32>
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t1559_m29790_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t1559_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29790_MI = 
{
	"Compare", NULL, &t1559_TI, &t18_0_0_0, RuntimeInvoker_t18_t18_t18, t1559_m29790_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1559_MIs[] =
{
	&m29790_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1559_0_0_0;
extern Il2CppType t1559_1_0_0;
struct t1559;
extern TypeInfo t1559_TI;
extern Il2CppGenericClass t1559_GC;
TypeInfo t1559_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t1559_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1559_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1559_TI, &t1559_0_0_0, &t1559_1_0_0, NULL, &t1559_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1560_TI;

#include "t700.h"


// Metadata Definition System.Collections.Generic.IComparer`1<System.Int64>
extern Il2CppType t700_0_0_0;
extern Il2CppType t700_0_0_0;
static ParameterInfo t1560_m29791_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t700_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t700_0_0_0},
};
extern TypeInfo t1560_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t700_t700 (MethodInfo* method, void* obj, void** args);
MethodInfo m29791_MI = 
{
	"Compare", NULL, &t1560_TI, &t18_0_0_0, RuntimeInvoker_t18_t700_t700, t1560_m29791_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1560_MIs[] =
{
	&m29791_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1560_0_0_0;
extern Il2CppType t1560_1_0_0;
struct t1560;
extern TypeInfo t1560_TI;
extern Il2CppGenericClass t1560_GC;
TypeInfo t1560_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t1560_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1560_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1560_TI, &t1560_0_0_0, &t1560_1_0_0, NULL, &t1560_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3762_TI;

#include "t1260.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Environment/SpecialFolder>
extern MethodInfo m29792_MI;
static PropertyInfo t3762____Current_PropertyInfo = 
{
	&t3762_TI, "Current", &m29792_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3762_PIs[] =
{
	&t3762____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3762_TI;
extern Il2CppType t1260_0_0_0;
extern void* RuntimeInvoker_t1260 (MethodInfo* method, void* obj, void** args);
MethodInfo m29792_MI = 
{
	"get_Current", NULL, &t3762_TI, &t1260_0_0_0, RuntimeInvoker_t1260, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3762_MIs[] =
{
	&m29792_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3762_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3762_0_0_0;
extern Il2CppType t3762_1_0_0;
struct t3762;
extern TypeInfo t3762_TI;
extern Il2CppGenericClass t3762_GC;
TypeInfo t3762_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3762_MIs, t3762_PIs, NULL, NULL, NULL, NULL, NULL, &t3762_TI, t3762_ITIs, NULL, &EmptyCustomAttributesCache, &t3762_TI, &t3762_0_0_0, &t3762_1_0_0, NULL, &t3762_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2892.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2892_TI;
#include "t2892MD.h"

extern TypeInfo t2892_TI;
extern TypeInfo t1260_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m16761_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m22763_MI;
struct t16;
 int32_t m22763 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22763_MI;


extern MethodInfo m16757_MI;
 void m16757 (t2892 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16758_MI;
 t4 * m16758 (t2892 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16761(__this, &m16761_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1260_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16759_MI;
 void m16759 (t2892 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16760_MI;
 bool m16760 (t2892 * __this, MethodInfo* method){
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
extern MethodInfo m16761_MI;
 int32_t m16761 (t2892 * __this, MethodInfo* method){
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
		int32_t L_8 = m22763(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22763_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>
extern Il2CppType t16_0_0_1;
FieldInfo t2892_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2892_TI, offsetof(t2892, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2892_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2892_TI, offsetof(t2892, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2892_FIs[] =
{
	&t2892_f0_FieldInfo,
	&t2892_f1_FieldInfo,
	NULL
};
extern MethodInfo m16758_MI;
static PropertyInfo t2892____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2892_TI, "System.Collections.IEnumerator.Current", &m16758_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16761_MI;
static PropertyInfo t2892____Current_PropertyInfo = 
{
	&t2892_TI, "Current", &m16761_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2892_PIs[] =
{
	&t2892____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2892____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2892_m16757_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2892_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16757_MI = 
{
	".ctor", (methodPointerType)&m16757, &t2892_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2892_m16757_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2892_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16758_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16758, &t2892_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2892_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16759_MI = 
{
	"Dispose", (methodPointerType)&m16759, &t2892_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2892_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m16760_MI = 
{
	"MoveNext", (methodPointerType)&m16760, &t2892_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2892_TI;
extern Il2CppType t1260_0_0_0;
extern void* RuntimeInvoker_t1260 (MethodInfo* method, void* obj, void** args);
MethodInfo m16761_MI = 
{
	"get_Current", (methodPointerType)&m16761, &t2892_TI, &t1260_0_0_0, RuntimeInvoker_t1260, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2892_MIs[] =
{
	&m16757_MI,
	&m16758_MI,
	&m16759_MI,
	&m16760_MI,
	&m16761_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m16758_MI;
extern MethodInfo m16760_MI;
extern MethodInfo m16759_MI;
extern MethodInfo m16761_MI;
static MethodInfo* t2892_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m16758_MI,
	&m16760_MI,
	&m16759_MI,
	&m16761_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3762_TI;
static TypeInfo* t2892_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3762_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3762_TI;
static Il2CppInterfaceOffsetPair t2892_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3762_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2892_0_0_0;
extern Il2CppType t2892_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2892_TI;
extern Il2CppGenericClass t2892_GC;
extern TypeInfo t16_TI;
TypeInfo t2892_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2892_MIs, t2892_PIs, t2892_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2892_TI, t2892_ITIs, t2892_VT, &EmptyCustomAttributesCache, &t2892_TI, &t2892_0_0_0, &t2892_1_0_0, t2892_IOs, &t2892_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2892)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5106_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>
extern MethodInfo m29793_MI;
static PropertyInfo t5106____Count_PropertyInfo = 
{
	&t5106_TI, "Count", &m29793_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29794_MI;
static PropertyInfo t5106____IsReadOnly_PropertyInfo = 
{
	&t5106_TI, "IsReadOnly", &m29794_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5106_PIs[] =
{
	&t5106____Count_PropertyInfo,
	&t5106____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5106_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29793_MI = 
{
	"get_Count", NULL, &t5106_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5106_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m29794_MI = 
{
	"get_IsReadOnly", NULL, &t5106_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1260_0_0_0;
static ParameterInfo t5106_m29795_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1260_0_0_0},
};
extern TypeInfo t5106_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29795_MI = 
{
	"Add", NULL, &t5106_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5106_m29795_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5106_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29796_MI = 
{
	"Clear", NULL, &t5106_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1260_0_0_0;
static ParameterInfo t5106_m29797_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1260_0_0_0},
};
extern TypeInfo t5106_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29797_MI = 
{
	"Contains", NULL, &t5106_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t5106_m29797_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3101_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t5106_m29798_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3101_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5106_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29798_MI = 
{
	"CopyTo", NULL, &t5106_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t5106_m29798_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1260_0_0_0;
static ParameterInfo t5106_m29799_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1260_0_0_0},
};
extern TypeInfo t5106_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29799_MI = 
{
	"Remove", NULL, &t5106_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t5106_m29799_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5106_MIs[] =
{
	&m29793_MI,
	&m29794_MI,
	&m29795_MI,
	&m29796_MI,
	&m29797_MI,
	&m29798_MI,
	&m29799_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5108_TI;
static TypeInfo* t5106_ITIs[] = 
{
	&t592_TI,
	&t5108_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5106_0_0_0;
extern Il2CppType t5106_1_0_0;
struct t5106;
extern TypeInfo t5106_TI;
extern Il2CppGenericClass t5106_GC;
TypeInfo t5106_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5106_MIs, t5106_PIs, NULL, NULL, NULL, NULL, NULL, &t5106_TI, t5106_ITIs, NULL, &EmptyCustomAttributesCache, &t5106_TI, &t5106_0_0_0, &t5106_1_0_0, NULL, &t5106_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5108_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Environment/SpecialFolder>
extern TypeInfo t5108_TI;
extern Il2CppType t3762_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29800_MI = 
{
	"GetEnumerator", NULL, &t5108_TI, &t3762_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5108_MIs[] =
{
	&m29800_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t5108_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5108_0_0_0;
extern Il2CppType t5108_1_0_0;
struct t5108;
extern TypeInfo t5108_TI;
extern Il2CppGenericClass t5108_GC;
TypeInfo t5108_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5108_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5108_TI, t5108_ITIs, NULL, &EmptyCustomAttributesCache, &t5108_TI, &t5108_0_0_0, &t5108_1_0_0, NULL, &t5108_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5107_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Environment/SpecialFolder>
extern MethodInfo m29801_MI;
extern MethodInfo m29802_MI;
static PropertyInfo t5107____Item_PropertyInfo = 
{
	&t5107_TI, "Item", &m29801_MI, &m29802_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5107_PIs[] =
{
	&t5107____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1260_0_0_0;
static ParameterInfo t5107_m29803_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1260_0_0_0},
};
extern TypeInfo t5107_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29803_MI = 
{
	"IndexOf", NULL, &t5107_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t5107_m29803_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1260_0_0_0;
static ParameterInfo t5107_m29804_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1260_0_0_0},
};
extern TypeInfo t5107_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29804_MI = 
{
	"Insert", NULL, &t5107_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t5107_m29804_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5107_m29805_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5107_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29805_MI = 
{
	"RemoveAt", NULL, &t5107_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5107_m29805_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5107_m29801_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5107_TI;
extern Il2CppType t1260_0_0_0;
extern void* RuntimeInvoker_t1260_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29801_MI = 
{
	"get_Item", NULL, &t5107_TI, &t1260_0_0_0, RuntimeInvoker_t1260_t18, t5107_m29801_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1260_0_0_0;
static ParameterInfo t5107_m29802_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1260_0_0_0},
};
extern TypeInfo t5107_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29802_MI = 
{
	"set_Item", NULL, &t5107_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t5107_m29802_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5107_MIs[] =
{
	&m29803_MI,
	&m29804_MI,
	&m29805_MI,
	&m29801_MI,
	&m29802_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5106_TI;
extern TypeInfo t5108_TI;
static TypeInfo* t5107_ITIs[] = 
{
	&t592_TI,
	&t5106_TI,
	&t5108_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5107_0_0_0;
extern Il2CppType t5107_1_0_0;
struct t5107;
extern TypeInfo t5107_TI;
extern Il2CppGenericClass t5107_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t5107_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5107_MIs, t5107_PIs, NULL, NULL, NULL, NULL, NULL, &t5107_TI, t5107_ITIs, NULL, &t1401__CustomAttributeCache, &t5107_TI, &t5107_0_0_0, &t5107_1_0_0, NULL, &t5107_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1564_TI;

#include "t1268.h"


// Metadata Definition System.IComparable`1<System.Guid>
extern Il2CppType t1268_0_0_0;
static ParameterInfo t1564_m29806_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t1564_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1268 (MethodInfo* method, void* obj, void** args);
MethodInfo m29806_MI = 
{
	"CompareTo", NULL, &t1564_TI, &t18_0_0_0, RuntimeInvoker_t18_t1268, t1564_m29806_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1564_MIs[] =
{
	&m29806_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1564_0_0_0;
extern Il2CppType t1564_1_0_0;
struct t1564;
extern TypeInfo t1564_TI;
extern Il2CppGenericClass t1564_GC;
TypeInfo t1564_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1564_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1564_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1564_TI, &t1564_0_0_0, &t1564_1_0_0, NULL, &t1564_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1565_TI;



// Metadata Definition System.IEquatable`1<System.Guid>
extern Il2CppType t1268_0_0_0;
static ParameterInfo t1565_m29807_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t1565_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t1268 (MethodInfo* method, void* obj, void** args);
MethodInfo m29807_MI = 
{
	"Equals", NULL, &t1565_TI, &t19_0_0_0, RuntimeInvoker_t19_t1268, t1565_m29807_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1565_MIs[] =
{
	&m29807_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1565_0_0_0;
extern Il2CppType t1565_1_0_0;
struct t1565;
extern TypeInfo t1565_TI;
extern Il2CppGenericClass t1565_GC;
TypeInfo t1565_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1565_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1565_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1565_TI, &t1565_0_0_0, &t1565_1_0_0, NULL, &t1565_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1562.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1562_TI;
#include "t1562MD.h"

extern TypeInfo t1268_TI;
extern TypeInfo t1564_TI;
extern TypeInfo t18_TI;
#include "t2893MD.h"
extern MethodInfo m16763_MI;
extern MethodInfo m29806_MI;


extern MethodInfo m7836_MI;
 void m7836 (t1562 * __this, MethodInfo* method){
	{
		m16763(__this, &m16763_MI);
		return;
	}
}
extern MethodInfo m16762_MI;
 int32_t m16762 (t1562 * __this, t1268  p0, t1268  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t1268  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t1268_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t1268  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t1268_TI), &L_2);
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
		t1268  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t1268_TI), &L_4);
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
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, t1268  >::Invoke(&m29806_MI, Box(InitializedTypeInfo(&t1268_TI), &(*(&p0))), p1);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.Guid>
extern TypeInfo t1562_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m7836_MI = 
{
	".ctor", (methodPointerType)&m7836, &t1562_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1268_0_0_0;
extern Il2CppType t1268_0_0_0;
static ParameterInfo t1562_m16762_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1268_t1268 (MethodInfo* method, void* obj, void** args);
MethodInfo m16762_MI = 
{
	"Compare", (methodPointerType)&m16762, &t1562_TI, &t18_0_0_0, RuntimeInvoker_t18_t1268_t1268, t1562_m16762_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1562_MIs[] =
{
	&m7836_MI,
	&m16762_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m16762_MI;
extern MethodInfo m16765_MI;
extern MethodInfo m16762_MI;
static MethodInfo* t1562_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m16762_MI,
	&m16765_MI,
	&m16762_MI,
};
extern TypeInfo t5218_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t1562_IOs[] = 
{
	{ &t5218_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1562_0_0_0;
extern Il2CppType t1562_1_0_0;
extern TypeInfo t2893_TI;
struct t1562;
extern TypeInfo t1562_TI;
extern Il2CppGenericClass t1562_GC;
TypeInfo t1562_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericComparer`1", "System.Collections.Generic", t1562_MIs, NULL, NULL, NULL, &t2893_TI, NULL, NULL, &t1562_TI, NULL, t1562_VT, &EmptyCustomAttributesCache, &t1562_TI, &t1562_0_0_0, &t1562_1_0_0, t1562_IOs, &t1562_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1562), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t2893.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2893_TI;

#include "t2894.h"
extern TypeInfo t2893_TI;
extern TypeInfo t1564_TI;
extern TypeInfo t294_TI;
extern TypeInfo t1268_TI;
extern TypeInfo t19_TI;
extern TypeInfo t825_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2894_TI;
extern TypeInfo t18_TI;
extern TypeInfo t307_TI;
#include "t2894MD.h"
extern Il2CppType t1564_0_0_0;
extern Il2CppType t1268_0_0_0;
extern Il2CppType t825_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m16767_MI;
extern MethodInfo m29808_MI;
extern MethodInfo m6463_MI;


extern MethodInfo m16763_MI;
 void m16763 (t2893 * __this, MethodInfo* method){
	{
		m24(__this, &m24_MI);
		return;
	}
}
extern MethodInfo m16764_MI;
 void m16764 (t4 * __this, MethodInfo* method){
	t2894 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2894 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2894_TI));
	m16767(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m16767_MI);
	((t2893_SFs*)InitializedTypeInfo(&t2893_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m16765_MI;
 int32_t m16765 (t2893 * __this, t4 * p0, t4 * p1, MethodInfo* method){
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
		if (!((t4 *)IsInst(p0, InitializedTypeInfo(&t1268_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t4 *)IsInst(p1, InitializedTypeInfo(&t1268_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t1268 , t1268  >::Invoke(&m29808_MI, __this, ((*(t1268 *)((t1268 *)UnBox (p0, InitializedTypeInfo(&t1268_TI))))), ((*(t1268 *)((t1268 *)UnBox (p1, InitializedTypeInfo(&t1268_TI))))));
		return L_0;
	}

IL_0033:
	{
		t307 * L_1 = (t307 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t307_TI));
		m6463(L_1, &m6463_MI);
		il2cpp_codegen_raise_exception (L_1);
	}
}
extern MethodInfo m16766_MI;
 t2893 * m16766 (t4 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2893_TI));
		return (((t2893_SFs*)InitializedTypeInfo(&t2893_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.Guid>
extern Il2CppType t2893_0_0_49;
FieldInfo t2893_f0_FieldInfo = 
{
	"_default", &t2893_0_0_49, &t2893_TI, offsetof(t2893_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2893_FIs[] =
{
	&t2893_f0_FieldInfo,
	NULL
};
extern MethodInfo m16766_MI;
static PropertyInfo t2893____Default_PropertyInfo = 
{
	&t2893_TI, "Default", &m16766_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2893_PIs[] =
{
	&t2893____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2893_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16763_MI = 
{
	".ctor", (methodPointerType)&m16763, &t2893_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2893_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16764_MI = 
{
	".cctor", (methodPointerType)&m16764, &t2893_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2893_m16765_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2893_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16765_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m16765, &t2893_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t2893_m16765_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1268_0_0_0;
extern Il2CppType t1268_0_0_0;
static ParameterInfo t2893_m29808_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t2893_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1268_t1268 (MethodInfo* method, void* obj, void** args);
MethodInfo m29808_MI = 
{
	"Compare", NULL, &t2893_TI, &t18_0_0_0, RuntimeInvoker_t18_t1268_t1268, t2893_m29808_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2893_TI;
extern Il2CppType t2893_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16766_MI = 
{
	"get_Default", (methodPointerType)&m16766, &t2893_TI, &t2893_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2893_MIs[] =
{
	&m16763_MI,
	&m16764_MI,
	&m16765_MI,
	&m29808_MI,
	&m16766_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m29808_MI;
extern MethodInfo m16765_MI;
static MethodInfo* t2893_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m29808_MI,
	&m16765_MI,
	NULL,
};
extern TypeInfo t5218_TI;
extern TypeInfo t717_TI;
static TypeInfo* t2893_ITIs[] = 
{
	&t5218_TI,
	&t717_TI,
};
extern TypeInfo t5218_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t2893_IOs[] = 
{
	{ &t5218_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2893_0_0_0;
extern Il2CppType t2893_1_0_0;
extern TypeInfo t4_TI;
struct t2893;
extern TypeInfo t2893_TI;
extern Il2CppGenericClass t2893_GC;
TypeInfo t2893_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2893_MIs, t2893_PIs, t2893_FIs, NULL, &t4_TI, NULL, NULL, &t2893_TI, t2893_ITIs, t2893_VT, &EmptyCustomAttributesCache, &t2893_TI, &t2893_0_0_0, &t2893_1_0_0, t2893_IOs, &t2893_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2893), 0, -1, sizeof(t2893_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5218_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.Guid>
extern Il2CppType t1268_0_0_0;
extern Il2CppType t1268_0_0_0;
static ParameterInfo t5218_m29809_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t5218_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1268_t1268 (MethodInfo* method, void* obj, void** args);
MethodInfo m29809_MI = 
{
	"Compare", NULL, &t5218_TI, &t18_0_0_0, RuntimeInvoker_t18_t1268_t1268, t5218_m29809_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5218_MIs[] =
{
	&m29809_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5218_0_0_0;
extern Il2CppType t5218_1_0_0;
struct t5218;
extern TypeInfo t5218_TI;
extern Il2CppGenericClass t5218_GC;
TypeInfo t5218_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t5218_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5218_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5218_TI, &t5218_0_0_0, &t5218_1_0_0, NULL, &t5218_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2894_TI;

extern TypeInfo t1268_TI;
extern TypeInfo t1564_TI;
extern TypeInfo t18_TI;
extern TypeInfo t289_TI;
extern TypeInfo t4_TI;
extern TypeInfo t307_TI;
extern MethodInfo m16763_MI;
extern MethodInfo m29806_MI;
extern MethodInfo m7306_MI;
extern MethodInfo m1936_MI;


extern MethodInfo m16767_MI;
 void m16767 (t2894 * __this, MethodInfo* method){
	{
		m16763(__this, &m16763_MI);
		return;
	}
}
extern MethodInfo m16768_MI;
 int32_t m16768 (t2894 * __this, t1268  p0, t1268  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t1268  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t1268_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t1268  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t1268_TI), &L_2);
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
		t1268  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t1268_TI), &L_4);
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
		t1268  L_6 = p0;
		t4 * L_7 = Box(InitializedTypeInfo(&t1268_TI), &L_6);
		if (!((t4*)IsInst(L_7, InitializedTypeInfo(&t1564_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t1268  L_8 = p0;
		t4 * L_9 = Box(InitializedTypeInfo(&t1268_TI), &L_8);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t1268  >::Invoke(&m29806_MI, ((t4*)Castclass(L_9, InitializedTypeInfo(&t1564_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t1268  L_11 = p0;
		t4 * L_12 = Box(InitializedTypeInfo(&t1268_TI), &L_11);
		if (!((t4 *)IsInst(L_12, InitializedTypeInfo(&t289_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t1268  L_13 = p0;
		t4 * L_14 = Box(InitializedTypeInfo(&t1268_TI), &L_13);
		t1268  L_15 = p1;
		t4 * L_16 = Box(InitializedTypeInfo(&t1268_TI), &L_15);
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
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
extern TypeInfo t2894_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16767_MI = 
{
	".ctor", (methodPointerType)&m16767, &t2894_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1268_0_0_0;
extern Il2CppType t1268_0_0_0;
static ParameterInfo t2894_m16768_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t2894_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1268_t1268 (MethodInfo* method, void* obj, void** args);
MethodInfo m16768_MI = 
{
	"Compare", (methodPointerType)&m16768, &t2894_TI, &t18_0_0_0, RuntimeInvoker_t18_t1268_t1268, t2894_m16768_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2894_MIs[] =
{
	&m16767_MI,
	&m16768_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m16768_MI;
extern MethodInfo m16765_MI;
extern MethodInfo m16768_MI;
static MethodInfo* t2894_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m16768_MI,
	&m16765_MI,
	&m16768_MI,
};
extern TypeInfo t5218_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t2894_IOs[] = 
{
	{ &t5218_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2894_0_0_0;
extern Il2CppType t2894_1_0_0;
extern TypeInfo t2893_TI;
struct t2894;
extern TypeInfo t2894_TI;
extern Il2CppGenericClass t2894_GC;
extern TypeInfo t824_TI;
TypeInfo t2894_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2894_MIs, NULL, NULL, NULL, &t2893_TI, NULL, &t824_TI, &t2894_TI, NULL, t2894_VT, &EmptyCustomAttributesCache, &t2894_TI, &t2894_0_0_0, &t2894_1_0_0, t2894_IOs, &t2894_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2894), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t1563.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1563_TI;
#include "t1563MD.h"

extern TypeInfo t1268_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
extern TypeInfo t1565_TI;
extern TypeInfo t19_TI;
#include "t2895MD.h"
extern MethodInfo m16771_MI;
extern MethodInfo m30_MI;
extern MethodInfo m29807_MI;


extern MethodInfo m7837_MI;
 void m7837 (t1563 * __this, MethodInfo* method){
	{
		m16771(__this, &m16771_MI);
		return;
	}
}
extern MethodInfo m16769_MI;
 int32_t m16769 (t1563 * __this, t1268  p0, MethodInfo* method){
	{
		t1268  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t1268_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m30_MI, Box(InitializedTypeInfo(&t1268_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m16770_MI;
 bool m16770 (t1563 * __this, t1268  p0, t1268  p1, MethodInfo* method){
	{
		t1268  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t1268_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t1268  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t1268_TI), &L_2);
		return ((((t4 *)L_3) == ((t4 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, t1268  >::Invoke(&m29807_MI, Box(InitializedTypeInfo(&t1268_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
extern TypeInfo t1563_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m7837_MI = 
{
	".ctor", (methodPointerType)&m7837, &t1563_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1268_0_0_0;
static ParameterInfo t1563_m16769_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t1563_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1268 (MethodInfo* method, void* obj, void** args);
MethodInfo m16769_MI = 
{
	"GetHashCode", (methodPointerType)&m16769, &t1563_TI, &t18_0_0_0, RuntimeInvoker_t18_t1268, t1563_m16769_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1268_0_0_0;
extern Il2CppType t1268_0_0_0;
static ParameterInfo t1563_m16770_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t1563_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t1268_t1268 (MethodInfo* method, void* obj, void** args);
MethodInfo m16770_MI = 
{
	"Equals", (methodPointerType)&m16770, &t1563_TI, &t19_0_0_0, RuntimeInvoker_t19_t1268_t1268, t1563_m16770_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1563_MIs[] =
{
	&m7837_MI,
	&m16769_MI,
	&m16770_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m16770_MI;
extern MethodInfo m16769_MI;
extern MethodInfo m16774_MI;
extern MethodInfo m16773_MI;
extern MethodInfo m16769_MI;
extern MethodInfo m16770_MI;
static MethodInfo* t1563_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m16770_MI,
	&m16769_MI,
	&m16774_MI,
	&m16773_MI,
	&m16769_MI,
	&m16770_MI,
};
extern TypeInfo t5219_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t1563_IOs[] = 
{
	{ &t5219_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1563_0_0_0;
extern Il2CppType t1563_1_0_0;
extern TypeInfo t2895_TI;
struct t1563;
extern TypeInfo t1563_TI;
extern Il2CppGenericClass t1563_GC;
TypeInfo t1563_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t1563_MIs, NULL, NULL, NULL, &t2895_TI, NULL, NULL, &t1563_TI, NULL, t1563_VT, &EmptyCustomAttributesCache, &t1563_TI, &t1563_0_0_0, &t1563_1_0_0, t1563_IOs, &t1563_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1563), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t2895.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2895_TI;

#include "t2896.h"
extern TypeInfo t2895_TI;
extern TypeInfo t1565_TI;
extern TypeInfo t294_TI;
extern TypeInfo t1268_TI;
extern TypeInfo t19_TI;
extern TypeInfo t837_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2896_TI;
extern TypeInfo t18_TI;
#include "t2896MD.h"
extern Il2CppType t1565_0_0_0;
extern Il2CppType t1268_0_0_0;
extern Il2CppType t837_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m16776_MI;
extern MethodInfo m29810_MI;
extern MethodInfo m29811_MI;


extern MethodInfo m16771_MI;
 void m16771 (t2895 * __this, MethodInfo* method){
	{
		m24(__this, &m24_MI);
		return;
	}
}
extern MethodInfo m16772_MI;
 void m16772 (t4 * __this, MethodInfo* method){
	t2896 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2896 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2896_TI));
	m16776(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m16776_MI);
	((t2895_SFs*)InitializedTypeInfo(&t2895_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m16773_MI;
 int32_t m16773 (t2895 * __this, t4 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t1268  >::Invoke(&m29810_MI, __this, ((*(t1268 *)((t1268 *)UnBox (p0, InitializedTypeInfo(&t1268_TI))))));
		return L_0;
	}
}
extern MethodInfo m16774_MI;
 bool m16774 (t2895 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t1268 , t1268  >::Invoke(&m29811_MI, __this, ((*(t1268 *)((t1268 *)UnBox (p0, InitializedTypeInfo(&t1268_TI))))), ((*(t1268 *)((t1268 *)UnBox (p1, InitializedTypeInfo(&t1268_TI))))));
		return L_0;
	}
}
extern MethodInfo m16775_MI;
 t2895 * m16775 (t4 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2895_TI));
		return (((t2895_SFs*)InitializedTypeInfo(&t2895_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Guid>
extern Il2CppType t2895_0_0_49;
FieldInfo t2895_f0_FieldInfo = 
{
	"_default", &t2895_0_0_49, &t2895_TI, offsetof(t2895_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2895_FIs[] =
{
	&t2895_f0_FieldInfo,
	NULL
};
extern MethodInfo m16775_MI;
static PropertyInfo t2895____Default_PropertyInfo = 
{
	&t2895_TI, "Default", &m16775_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2895_PIs[] =
{
	&t2895____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2895_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16771_MI = 
{
	".ctor", (methodPointerType)&m16771, &t2895_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2895_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16772_MI = 
{
	".cctor", (methodPointerType)&m16772, &t2895_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2895_m16773_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2895_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16773_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m16773, &t2895_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2895_m16773_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2895_m16774_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2895_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16774_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m16774, &t2895_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2895_m16774_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1268_0_0_0;
static ParameterInfo t2895_m29810_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t2895_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1268 (MethodInfo* method, void* obj, void** args);
MethodInfo m29810_MI = 
{
	"GetHashCode", NULL, &t2895_TI, &t18_0_0_0, RuntimeInvoker_t18_t1268, t2895_m29810_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1268_0_0_0;
extern Il2CppType t1268_0_0_0;
static ParameterInfo t2895_m29811_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t2895_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t1268_t1268 (MethodInfo* method, void* obj, void** args);
MethodInfo m29811_MI = 
{
	"Equals", NULL, &t2895_TI, &t19_0_0_0, RuntimeInvoker_t19_t1268_t1268, t2895_m29811_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2895_TI;
extern Il2CppType t2895_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16775_MI = 
{
	"get_Default", (methodPointerType)&m16775, &t2895_TI, &t2895_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2895_MIs[] =
{
	&m16771_MI,
	&m16772_MI,
	&m16773_MI,
	&m16774_MI,
	&m29810_MI,
	&m29811_MI,
	&m16775_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m29811_MI;
extern MethodInfo m29810_MI;
extern MethodInfo m16774_MI;
extern MethodInfo m16773_MI;
static MethodInfo* t2895_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m29811_MI,
	&m29810_MI,
	&m16774_MI,
	&m16773_MI,
	NULL,
	NULL,
};
extern TypeInfo t5219_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2895_ITIs[] = 
{
	&t5219_TI,
	&t860_TI,
};
extern TypeInfo t5219_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2895_IOs[] = 
{
	{ &t5219_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2895_0_0_0;
extern Il2CppType t2895_1_0_0;
extern TypeInfo t4_TI;
struct t2895;
extern TypeInfo t2895_TI;
extern Il2CppGenericClass t2895_GC;
TypeInfo t2895_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2895_MIs, t2895_PIs, t2895_FIs, NULL, &t4_TI, NULL, NULL, &t2895_TI, t2895_ITIs, t2895_VT, &EmptyCustomAttributesCache, &t2895_TI, &t2895_0_0_0, &t2895_1_0_0, t2895_IOs, &t2895_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2895), 0, -1, sizeof(t2895_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5219_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Guid>
extern Il2CppType t1268_0_0_0;
extern Il2CppType t1268_0_0_0;
static ParameterInfo t5219_m29812_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t5219_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t1268_t1268 (MethodInfo* method, void* obj, void** args);
MethodInfo m29812_MI = 
{
	"Equals", NULL, &t5219_TI, &t19_0_0_0, RuntimeInvoker_t19_t1268_t1268, t5219_m29812_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1268_0_0_0;
static ParameterInfo t5219_m29813_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t5219_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1268 (MethodInfo* method, void* obj, void** args);
MethodInfo m29813_MI = 
{
	"GetHashCode", NULL, &t5219_TI, &t18_0_0_0, RuntimeInvoker_t18_t1268, t5219_m29813_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5219_MIs[] =
{
	&m29812_MI,
	&m29813_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5219_0_0_0;
extern Il2CppType t5219_1_0_0;
struct t5219;
extern TypeInfo t5219_TI;
extern Il2CppGenericClass t5219_GC;
TypeInfo t5219_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5219_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5219_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5219_TI, &t5219_0_0_0, &t5219_1_0_0, NULL, &t5219_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2896_TI;

extern TypeInfo t1268_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
extern TypeInfo t19_TI;
extern MethodInfo m16771_MI;
extern MethodInfo m30_MI;
extern MethodInfo m28_MI;


extern MethodInfo m16776_MI;
 void m16776 (t2896 * __this, MethodInfo* method){
	{
		m16771(__this, &m16771_MI);
		return;
	}
}
extern MethodInfo m16777_MI;
 int32_t m16777 (t2896 * __this, t1268  p0, MethodInfo* method){
	{
		t1268  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t1268_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m30_MI, Box(InitializedTypeInfo(&t1268_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m16778_MI;
 bool m16778 (t2896 * __this, t1268  p0, t1268  p1, MethodInfo* method){
	{
		t1268  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t1268_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t1268  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t1268_TI), &L_2);
		return ((((t4 *)L_3) == ((t4 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t1268  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t1268_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t4 * >::Invoke(&m28_MI, Box(InitializedTypeInfo(&t1268_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
extern TypeInfo t2896_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16776_MI = 
{
	".ctor", (methodPointerType)&m16776, &t2896_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1268_0_0_0;
static ParameterInfo t2896_m16777_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t2896_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t1268 (MethodInfo* method, void* obj, void** args);
MethodInfo m16777_MI = 
{
	"GetHashCode", (methodPointerType)&m16777, &t2896_TI, &t18_0_0_0, RuntimeInvoker_t18_t1268, t2896_m16777_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1268_0_0_0;
extern Il2CppType t1268_0_0_0;
static ParameterInfo t2896_m16778_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern TypeInfo t2896_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t1268_t1268 (MethodInfo* method, void* obj, void** args);
MethodInfo m16778_MI = 
{
	"Equals", (methodPointerType)&m16778, &t2896_TI, &t19_0_0_0, RuntimeInvoker_t19_t1268_t1268, t2896_m16778_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2896_MIs[] =
{
	&m16776_MI,
	&m16777_MI,
	&m16778_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m16778_MI;
extern MethodInfo m16777_MI;
extern MethodInfo m16774_MI;
extern MethodInfo m16773_MI;
extern MethodInfo m16777_MI;
extern MethodInfo m16778_MI;
static MethodInfo* t2896_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m16778_MI,
	&m16777_MI,
	&m16774_MI,
	&m16773_MI,
	&m16777_MI,
	&m16778_MI,
};
extern TypeInfo t5219_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2896_IOs[] = 
{
	{ &t5219_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2896_0_0_0;
extern Il2CppType t2896_1_0_0;
extern TypeInfo t2895_TI;
struct t2896;
extern TypeInfo t2896_TI;
extern Il2CppGenericClass t2896_GC;
extern TypeInfo t836_TI;
TypeInfo t2896_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2896_MIs, NULL, NULL, NULL, &t2895_TI, NULL, &t836_TI, &t2896_TI, NULL, t2896_VT, &EmptyCustomAttributesCache, &t2896_TI, &t2896_0_0_0, &t2896_1_0_0, t2896_IOs, &t2896_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2896), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3763_TI;

#include "t1233.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>
extern MethodInfo m29814_MI;
static PropertyInfo t3763____Current_PropertyInfo = 
{
	&t3763_TI, "Current", &m29814_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3763_PIs[] =
{
	&t3763____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3763_TI;
extern Il2CppType t1233_0_0_0;
extern void* RuntimeInvoker_t1233 (MethodInfo* method, void* obj, void** args);
MethodInfo m29814_MI = 
{
	"get_Current", NULL, &t3763_TI, &t1233_0_0_0, RuntimeInvoker_t1233, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3763_MIs[] =
{
	&m29814_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3763_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3763_0_0_0;
extern Il2CppType t3763_1_0_0;
struct t3763;
extern TypeInfo t3763_TI;
extern Il2CppGenericClass t3763_GC;
TypeInfo t3763_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3763_MIs, t3763_PIs, NULL, NULL, NULL, NULL, NULL, &t3763_TI, t3763_ITIs, NULL, &EmptyCustomAttributesCache, &t3763_TI, &t3763_0_0_0, &t3763_1_0_0, NULL, &t3763_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2897.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2897_TI;
#include "t2897MD.h"

extern TypeInfo t2897_TI;
extern TypeInfo t1233_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m16783_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m22774_MI;
struct t16;
 int32_t m22774 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22774_MI;


extern MethodInfo m16779_MI;
 void m16779 (t2897 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16780_MI;
 t4 * m16780 (t2897 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16783(__this, &m16783_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1233_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16781_MI;
 void m16781 (t2897 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16782_MI;
 bool m16782 (t2897 * __this, MethodInfo* method){
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
extern MethodInfo m16783_MI;
 int32_t m16783 (t2897 * __this, MethodInfo* method){
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
		int32_t L_8 = m22774(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22774_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.LoaderOptimization>
extern Il2CppType t16_0_0_1;
FieldInfo t2897_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2897_TI, offsetof(t2897, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2897_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2897_TI, offsetof(t2897, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2897_FIs[] =
{
	&t2897_f0_FieldInfo,
	&t2897_f1_FieldInfo,
	NULL
};
extern MethodInfo m16780_MI;
static PropertyInfo t2897____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2897_TI, "System.Collections.IEnumerator.Current", &m16780_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16783_MI;
static PropertyInfo t2897____Current_PropertyInfo = 
{
	&t2897_TI, "Current", &m16783_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2897_PIs[] =
{
	&t2897____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2897____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2897_m16779_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2897_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16779_MI = 
{
	".ctor", (methodPointerType)&m16779, &t2897_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2897_m16779_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2897_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16780_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16780, &t2897_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2897_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16781_MI = 
{
	"Dispose", (methodPointerType)&m16781, &t2897_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2897_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m16782_MI = 
{
	"MoveNext", (methodPointerType)&m16782, &t2897_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2897_TI;
extern Il2CppType t1233_0_0_0;
extern void* RuntimeInvoker_t1233 (MethodInfo* method, void* obj, void** args);
MethodInfo m16783_MI = 
{
	"get_Current", (methodPointerType)&m16783, &t2897_TI, &t1233_0_0_0, RuntimeInvoker_t1233, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2897_MIs[] =
{
	&m16779_MI,
	&m16780_MI,
	&m16781_MI,
	&m16782_MI,
	&m16783_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m16780_MI;
extern MethodInfo m16782_MI;
extern MethodInfo m16781_MI;
extern MethodInfo m16783_MI;
static MethodInfo* t2897_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m16780_MI,
	&m16782_MI,
	&m16781_MI,
	&m16783_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3763_TI;
static TypeInfo* t2897_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3763_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3763_TI;
static Il2CppInterfaceOffsetPair t2897_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3763_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2897_0_0_0;
extern Il2CppType t2897_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2897_TI;
extern Il2CppGenericClass t2897_GC;
extern TypeInfo t16_TI;
TypeInfo t2897_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2897_MIs, t2897_PIs, t2897_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2897_TI, t2897_ITIs, t2897_VT, &EmptyCustomAttributesCache, &t2897_TI, &t2897_0_0_0, &t2897_1_0_0, t2897_IOs, &t2897_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2897)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5109_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.LoaderOptimization>
extern MethodInfo m29815_MI;
static PropertyInfo t5109____Count_PropertyInfo = 
{
	&t5109_TI, "Count", &m29815_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29816_MI;
static PropertyInfo t5109____IsReadOnly_PropertyInfo = 
{
	&t5109_TI, "IsReadOnly", &m29816_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5109_PIs[] =
{
	&t5109____Count_PropertyInfo,
	&t5109____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5109_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29815_MI = 
{
	"get_Count", NULL, &t5109_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5109_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m29816_MI = 
{
	"get_IsReadOnly", NULL, &t5109_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1233_0_0_0;
static ParameterInfo t5109_m29817_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1233_0_0_0},
};
extern TypeInfo t5109_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29817_MI = 
{
	"Add", NULL, &t5109_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5109_m29817_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5109_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29818_MI = 
{
	"Clear", NULL, &t5109_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1233_0_0_0;
static ParameterInfo t5109_m29819_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1233_0_0_0},
};
extern TypeInfo t5109_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29819_MI = 
{
	"Contains", NULL, &t5109_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t5109_m29819_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3102_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t5109_m29820_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3102_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5109_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29820_MI = 
{
	"CopyTo", NULL, &t5109_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t5109_m29820_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1233_0_0_0;
static ParameterInfo t5109_m29821_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1233_0_0_0},
};
extern TypeInfo t5109_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29821_MI = 
{
	"Remove", NULL, &t5109_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t5109_m29821_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5109_MIs[] =
{
	&m29815_MI,
	&m29816_MI,
	&m29817_MI,
	&m29818_MI,
	&m29819_MI,
	&m29820_MI,
	&m29821_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5111_TI;
static TypeInfo* t5109_ITIs[] = 
{
	&t592_TI,
	&t5111_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5109_0_0_0;
extern Il2CppType t5109_1_0_0;
struct t5109;
extern TypeInfo t5109_TI;
extern Il2CppGenericClass t5109_GC;
TypeInfo t5109_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5109_MIs, t5109_PIs, NULL, NULL, NULL, NULL, NULL, &t5109_TI, t5109_ITIs, NULL, &EmptyCustomAttributesCache, &t5109_TI, &t5109_0_0_0, &t5109_1_0_0, NULL, &t5109_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5111_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>
extern TypeInfo t5111_TI;
extern Il2CppType t3763_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29822_MI = 
{
	"GetEnumerator", NULL, &t5111_TI, &t3763_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5111_MIs[] =
{
	&m29822_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t5111_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5111_0_0_0;
extern Il2CppType t5111_1_0_0;
struct t5111;
extern TypeInfo t5111_TI;
extern Il2CppGenericClass t5111_GC;
TypeInfo t5111_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5111_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5111_TI, t5111_ITIs, NULL, &EmptyCustomAttributesCache, &t5111_TI, &t5111_0_0_0, &t5111_1_0_0, NULL, &t5111_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5110_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.LoaderOptimization>
extern MethodInfo m29823_MI;
extern MethodInfo m29824_MI;
static PropertyInfo t5110____Item_PropertyInfo = 
{
	&t5110_TI, "Item", &m29823_MI, &m29824_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5110_PIs[] =
{
	&t5110____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1233_0_0_0;
static ParameterInfo t5110_m29825_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1233_0_0_0},
};
extern TypeInfo t5110_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29825_MI = 
{
	"IndexOf", NULL, &t5110_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t5110_m29825_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1233_0_0_0;
static ParameterInfo t5110_m29826_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1233_0_0_0},
};
extern TypeInfo t5110_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29826_MI = 
{
	"Insert", NULL, &t5110_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t5110_m29826_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5110_m29827_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5110_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29827_MI = 
{
	"RemoveAt", NULL, &t5110_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5110_m29827_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5110_m29823_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5110_TI;
extern Il2CppType t1233_0_0_0;
extern void* RuntimeInvoker_t1233_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29823_MI = 
{
	"get_Item", NULL, &t5110_TI, &t1233_0_0_0, RuntimeInvoker_t1233_t18, t5110_m29823_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1233_0_0_0;
static ParameterInfo t5110_m29824_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1233_0_0_0},
};
extern TypeInfo t5110_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29824_MI = 
{
	"set_Item", NULL, &t5110_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t5110_m29824_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5110_MIs[] =
{
	&m29825_MI,
	&m29826_MI,
	&m29827_MI,
	&m29823_MI,
	&m29824_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5109_TI;
extern TypeInfo t5111_TI;
static TypeInfo* t5110_ITIs[] = 
{
	&t592_TI,
	&t5109_TI,
	&t5111_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5110_0_0_0;
extern Il2CppType t5110_1_0_0;
struct t5110;
extern TypeInfo t5110_TI;
extern Il2CppGenericClass t5110_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t5110_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5110_MIs, t5110_PIs, NULL, NULL, NULL, NULL, NULL, &t5110_TI, t5110_ITIs, NULL, &t1401__CustomAttributeCache, &t5110_TI, &t5110_0_0_0, &t5110_1_0_0, NULL, &t5110_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3764_TI;

#include "t1283.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>
extern MethodInfo m29828_MI;
static PropertyInfo t3764____Current_PropertyInfo = 
{
	&t3764_TI, "Current", &m29828_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3764_PIs[] =
{
	&t3764____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3764_TI;
extern Il2CppType t1283_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29828_MI = 
{
	"get_Current", NULL, &t3764_TI, &t1283_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3764_MIs[] =
{
	&m29828_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3764_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3764_0_0_0;
extern Il2CppType t3764_1_0_0;
struct t3764;
extern TypeInfo t3764_TI;
extern Il2CppGenericClass t3764_GC;
TypeInfo t3764_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3764_MIs, t3764_PIs, NULL, NULL, NULL, NULL, NULL, &t3764_TI, t3764_ITIs, NULL, &EmptyCustomAttributesCache, &t3764_TI, &t3764_0_0_0, &t3764_1_0_0, NULL, &t3764_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2898.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2898_TI;
#include "t2898MD.h"

extern TypeInfo t2898_TI;
extern TypeInfo t1283_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m16788_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m22785_MI;
struct t16;
struct t16;
 t4 * m16827_gshared (t16 * __this, int32_t p0, MethodInfo* method);
#define m16827(__this, p0, method) (t4 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
#define m22785(__this, p0, method) (t1283 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m22785_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.NonSerializedAttribute>
extern Il2CppType t16_0_0_1;
FieldInfo t2898_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2898_TI, offsetof(t2898, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2898_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2898_TI, offsetof(t2898, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2898_FIs[] =
{
	&t2898_f0_FieldInfo,
	&t2898_f1_FieldInfo,
	NULL
};
extern MethodInfo m16785_MI;
static PropertyInfo t2898____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2898_TI, "System.Collections.IEnumerator.Current", &m16785_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16788_MI;
static PropertyInfo t2898____Current_PropertyInfo = 
{
	&t2898_TI, "Current", &m16788_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2898_PIs[] =
{
	&t2898____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2898____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2898_m16784_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2898_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16784_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2898_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2898_m16784_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2898_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16785_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2898_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2898_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16786_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2898_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2898_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m16787_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2898_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2898_TI;
extern Il2CppType t1283_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16788_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2898_TI, &t1283_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2898_MIs[] =
{
	&m16784_MI,
	&m16785_MI,
	&m16786_MI,
	&m16787_MI,
	&m16788_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m16785_MI;
extern MethodInfo m16787_MI;
extern MethodInfo m16786_MI;
extern MethodInfo m16788_MI;
static MethodInfo* t2898_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m16785_MI,
	&m16787_MI,
	&m16786_MI,
	&m16788_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3764_TI;
static TypeInfo* t2898_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3764_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3764_TI;
static Il2CppInterfaceOffsetPair t2898_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3764_TI, 7},
};
extern MethodInfo m16788_MI;
extern TypeInfo t1283_TI;
extern MethodInfo m22785_MI;
static void* t2898_RGCTXData[3] = 
{
	&m16788_MI,
	&t1283_TI,
	&m22785_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2898_0_0_0;
extern Il2CppType t2898_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2898_TI;
extern Il2CppGenericClass t2898_GC;
extern TypeInfo t16_TI;
TypeInfo t2898_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2898_MIs, t2898_PIs, t2898_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2898_TI, t2898_ITIs, t2898_VT, &EmptyCustomAttributesCache, &t2898_TI, &t2898_0_0_0, &t2898_1_0_0, t2898_IOs, &t2898_GC, NULL, NULL, NULL, t2898_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2898)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5112_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>
extern MethodInfo m29829_MI;
static PropertyInfo t5112____Count_PropertyInfo = 
{
	&t5112_TI, "Count", &m29829_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29830_MI;
static PropertyInfo t5112____IsReadOnly_PropertyInfo = 
{
	&t5112_TI, "IsReadOnly", &m29830_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5112_PIs[] =
{
	&t5112____Count_PropertyInfo,
	&t5112____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5112_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29829_MI = 
{
	"get_Count", NULL, &t5112_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5112_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m29830_MI = 
{
	"get_IsReadOnly", NULL, &t5112_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1283_0_0_0;
static ParameterInfo t5112_m29831_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1283_0_0_0},
};
extern TypeInfo t5112_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29831_MI = 
{
	"Add", NULL, &t5112_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5112_m29831_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5112_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29832_MI = 
{
	"Clear", NULL, &t5112_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1283_0_0_0;
static ParameterInfo t5112_m29833_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1283_0_0_0},
};
extern TypeInfo t5112_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29833_MI = 
{
	"Contains", NULL, &t5112_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t5112_m29833_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3103_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t5112_m29834_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3103_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5112_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29834_MI = 
{
	"CopyTo", NULL, &t5112_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t5112_m29834_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1283_0_0_0;
static ParameterInfo t5112_m29835_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1283_0_0_0},
};
extern TypeInfo t5112_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29835_MI = 
{
	"Remove", NULL, &t5112_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t5112_m29835_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5112_MIs[] =
{
	&m29829_MI,
	&m29830_MI,
	&m29831_MI,
	&m29832_MI,
	&m29833_MI,
	&m29834_MI,
	&m29835_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5114_TI;
static TypeInfo* t5112_ITIs[] = 
{
	&t592_TI,
	&t5114_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5112_0_0_0;
extern Il2CppType t5112_1_0_0;
struct t5112;
extern TypeInfo t5112_TI;
extern Il2CppGenericClass t5112_GC;
TypeInfo t5112_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5112_MIs, t5112_PIs, NULL, NULL, NULL, NULL, NULL, &t5112_TI, t5112_ITIs, NULL, &EmptyCustomAttributesCache, &t5112_TI, &t5112_0_0_0, &t5112_1_0_0, NULL, &t5112_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5114_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>
extern TypeInfo t5114_TI;
extern Il2CppType t3764_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29836_MI = 
{
	"GetEnumerator", NULL, &t5114_TI, &t3764_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5114_MIs[] =
{
	&m29836_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t5114_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5114_0_0_0;
extern Il2CppType t5114_1_0_0;
struct t5114;
extern TypeInfo t5114_TI;
extern Il2CppGenericClass t5114_GC;
TypeInfo t5114_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5114_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5114_TI, t5114_ITIs, NULL, &EmptyCustomAttributesCache, &t5114_TI, &t5114_0_0_0, &t5114_1_0_0, NULL, &t5114_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5113_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.NonSerializedAttribute>
extern MethodInfo m29837_MI;
extern MethodInfo m29838_MI;
static PropertyInfo t5113____Item_PropertyInfo = 
{
	&t5113_TI, "Item", &m29837_MI, &m29838_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5113_PIs[] =
{
	&t5113____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1283_0_0_0;
static ParameterInfo t5113_m29839_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1283_0_0_0},
};
extern TypeInfo t5113_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29839_MI = 
{
	"IndexOf", NULL, &t5113_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t5113_m29839_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1283_0_0_0;
static ParameterInfo t5113_m29840_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1283_0_0_0},
};
extern TypeInfo t5113_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29840_MI = 
{
	"Insert", NULL, &t5113_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t5113_m29840_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5113_m29841_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5113_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29841_MI = 
{
	"RemoveAt", NULL, &t5113_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5113_m29841_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5113_m29837_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5113_TI;
extern Il2CppType t1283_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29837_MI = 
{
	"get_Item", NULL, &t5113_TI, &t1283_0_0_0, RuntimeInvoker_t4_t18, t5113_m29837_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1283_0_0_0;
static ParameterInfo t5113_m29838_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1283_0_0_0},
};
extern TypeInfo t5113_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29838_MI = 
{
	"set_Item", NULL, &t5113_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t5113_m29838_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5113_MIs[] =
{
	&m29839_MI,
	&m29840_MI,
	&m29841_MI,
	&m29837_MI,
	&m29838_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5112_TI;
extern TypeInfo t5114_TI;
static TypeInfo* t5113_ITIs[] = 
{
	&t592_TI,
	&t5112_TI,
	&t5114_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5113_0_0_0;
extern Il2CppType t5113_1_0_0;
struct t5113;
extern TypeInfo t5113_TI;
extern Il2CppGenericClass t5113_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t5113_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5113_MIs, t5113_PIs, NULL, NULL, NULL, NULL, NULL, &t5113_TI, t5113_ITIs, NULL, &t1401__CustomAttributeCache, &t5113_TI, &t5113_0_0_0, &t5113_1_0_0, NULL, &t5113_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3765_TI;

#include "t1263.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.PlatformID>
extern MethodInfo m29842_MI;
static PropertyInfo t3765____Current_PropertyInfo = 
{
	&t3765_TI, "Current", &m29842_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3765_PIs[] =
{
	&t3765____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3765_TI;
extern Il2CppType t1263_0_0_0;
extern void* RuntimeInvoker_t1263 (MethodInfo* method, void* obj, void** args);
MethodInfo m29842_MI = 
{
	"get_Current", NULL, &t3765_TI, &t1263_0_0_0, RuntimeInvoker_t1263, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3765_MIs[] =
{
	&m29842_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3765_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3765_0_0_0;
extern Il2CppType t3765_1_0_0;
struct t3765;
extern TypeInfo t3765_TI;
extern Il2CppGenericClass t3765_GC;
TypeInfo t3765_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3765_MIs, t3765_PIs, NULL, NULL, NULL, NULL, NULL, &t3765_TI, t3765_ITIs, NULL, &EmptyCustomAttributesCache, &t3765_TI, &t3765_0_0_0, &t3765_1_0_0, NULL, &t3765_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2899.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2899_TI;
#include "t2899MD.h"

extern TypeInfo t2899_TI;
extern TypeInfo t1263_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m16793_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m22796_MI;
struct t16;
 int32_t m22796 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22796_MI;


extern MethodInfo m16789_MI;
 void m16789 (t2899 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16790_MI;
 t4 * m16790 (t2899 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16793(__this, &m16793_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1263_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16791_MI;
 void m16791 (t2899 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16792_MI;
 bool m16792 (t2899 * __this, MethodInfo* method){
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
extern MethodInfo m16793_MI;
 int32_t m16793 (t2899 * __this, MethodInfo* method){
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
		int32_t L_8 = m22796(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22796_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.PlatformID>
extern Il2CppType t16_0_0_1;
FieldInfo t2899_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2899_TI, offsetof(t2899, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2899_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2899_TI, offsetof(t2899, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2899_FIs[] =
{
	&t2899_f0_FieldInfo,
	&t2899_f1_FieldInfo,
	NULL
};
extern MethodInfo m16790_MI;
static PropertyInfo t2899____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2899_TI, "System.Collections.IEnumerator.Current", &m16790_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16793_MI;
static PropertyInfo t2899____Current_PropertyInfo = 
{
	&t2899_TI, "Current", &m16793_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2899_PIs[] =
{
	&t2899____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2899____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2899_m16789_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2899_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16789_MI = 
{
	".ctor", (methodPointerType)&m16789, &t2899_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2899_m16789_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2899_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16790_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16790, &t2899_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2899_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16791_MI = 
{
	"Dispose", (methodPointerType)&m16791, &t2899_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2899_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m16792_MI = 
{
	"MoveNext", (methodPointerType)&m16792, &t2899_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2899_TI;
extern Il2CppType t1263_0_0_0;
extern void* RuntimeInvoker_t1263 (MethodInfo* method, void* obj, void** args);
MethodInfo m16793_MI = 
{
	"get_Current", (methodPointerType)&m16793, &t2899_TI, &t1263_0_0_0, RuntimeInvoker_t1263, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2899_MIs[] =
{
	&m16789_MI,
	&m16790_MI,
	&m16791_MI,
	&m16792_MI,
	&m16793_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m16790_MI;
extern MethodInfo m16792_MI;
extern MethodInfo m16791_MI;
extern MethodInfo m16793_MI;
static MethodInfo* t2899_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m16790_MI,
	&m16792_MI,
	&m16791_MI,
	&m16793_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3765_TI;
static TypeInfo* t2899_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3765_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3765_TI;
static Il2CppInterfaceOffsetPair t2899_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3765_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2899_0_0_0;
extern Il2CppType t2899_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2899_TI;
extern Il2CppGenericClass t2899_GC;
extern TypeInfo t16_TI;
TypeInfo t2899_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2899_MIs, t2899_PIs, t2899_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2899_TI, t2899_ITIs, t2899_VT, &EmptyCustomAttributesCache, &t2899_TI, &t2899_0_0_0, &t2899_1_0_0, t2899_IOs, &t2899_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2899)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5115_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.PlatformID>
extern MethodInfo m29843_MI;
static PropertyInfo t5115____Count_PropertyInfo = 
{
	&t5115_TI, "Count", &m29843_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29844_MI;
static PropertyInfo t5115____IsReadOnly_PropertyInfo = 
{
	&t5115_TI, "IsReadOnly", &m29844_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5115_PIs[] =
{
	&t5115____Count_PropertyInfo,
	&t5115____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5115_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29843_MI = 
{
	"get_Count", NULL, &t5115_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5115_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m29844_MI = 
{
	"get_IsReadOnly", NULL, &t5115_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1263_0_0_0;
static ParameterInfo t5115_m29845_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1263_0_0_0},
};
extern TypeInfo t5115_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29845_MI = 
{
	"Add", NULL, &t5115_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5115_m29845_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5115_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29846_MI = 
{
	"Clear", NULL, &t5115_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1263_0_0_0;
static ParameterInfo t5115_m29847_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1263_0_0_0},
};
extern TypeInfo t5115_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29847_MI = 
{
	"Contains", NULL, &t5115_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t5115_m29847_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3104_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t5115_m29848_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3104_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5115_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29848_MI = 
{
	"CopyTo", NULL, &t5115_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t5115_m29848_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1263_0_0_0;
static ParameterInfo t5115_m29849_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1263_0_0_0},
};
extern TypeInfo t5115_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29849_MI = 
{
	"Remove", NULL, &t5115_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t5115_m29849_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5115_MIs[] =
{
	&m29843_MI,
	&m29844_MI,
	&m29845_MI,
	&m29846_MI,
	&m29847_MI,
	&m29848_MI,
	&m29849_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5117_TI;
static TypeInfo* t5115_ITIs[] = 
{
	&t592_TI,
	&t5117_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5115_0_0_0;
extern Il2CppType t5115_1_0_0;
struct t5115;
extern TypeInfo t5115_TI;
extern Il2CppGenericClass t5115_GC;
TypeInfo t5115_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5115_MIs, t5115_PIs, NULL, NULL, NULL, NULL, NULL, &t5115_TI, t5115_ITIs, NULL, &EmptyCustomAttributesCache, &t5115_TI, &t5115_0_0_0, &t5115_1_0_0, NULL, &t5115_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5117_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.PlatformID>
extern TypeInfo t5117_TI;
extern Il2CppType t3765_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29850_MI = 
{
	"GetEnumerator", NULL, &t5117_TI, &t3765_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5117_MIs[] =
{
	&m29850_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t5117_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5117_0_0_0;
extern Il2CppType t5117_1_0_0;
struct t5117;
extern TypeInfo t5117_TI;
extern Il2CppGenericClass t5117_GC;
TypeInfo t5117_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5117_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5117_TI, t5117_ITIs, NULL, &EmptyCustomAttributesCache, &t5117_TI, &t5117_0_0_0, &t5117_1_0_0, NULL, &t5117_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5116_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.PlatformID>
extern MethodInfo m29851_MI;
extern MethodInfo m29852_MI;
static PropertyInfo t5116____Item_PropertyInfo = 
{
	&t5116_TI, "Item", &m29851_MI, &m29852_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5116_PIs[] =
{
	&t5116____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1263_0_0_0;
static ParameterInfo t5116_m29853_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1263_0_0_0},
};
extern TypeInfo t5116_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29853_MI = 
{
	"IndexOf", NULL, &t5116_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t5116_m29853_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1263_0_0_0;
static ParameterInfo t5116_m29854_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1263_0_0_0},
};
extern TypeInfo t5116_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29854_MI = 
{
	"Insert", NULL, &t5116_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t5116_m29854_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5116_m29855_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5116_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29855_MI = 
{
	"RemoveAt", NULL, &t5116_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5116_m29855_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5116_m29851_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5116_TI;
extern Il2CppType t1263_0_0_0;
extern void* RuntimeInvoker_t1263_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29851_MI = 
{
	"get_Item", NULL, &t5116_TI, &t1263_0_0_0, RuntimeInvoker_t1263_t18, t5116_m29851_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1263_0_0_0;
static ParameterInfo t5116_m29852_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1263_0_0_0},
};
extern TypeInfo t5116_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29852_MI = 
{
	"set_Item", NULL, &t5116_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t5116_m29852_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5116_MIs[] =
{
	&m29853_MI,
	&m29854_MI,
	&m29855_MI,
	&m29851_MI,
	&m29852_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5115_TI;
extern TypeInfo t5117_TI;
static TypeInfo* t5116_ITIs[] = 
{
	&t592_TI,
	&t5115_TI,
	&t5117_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5116_0_0_0;
extern Il2CppType t5116_1_0_0;
struct t5116;
extern TypeInfo t5116_TI;
extern Il2CppGenericClass t5116_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t5116_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5116_MIs, t5116_PIs, NULL, NULL, NULL, NULL, NULL, &t5116_TI, t5116_ITIs, NULL, &t1401__CustomAttributeCache, &t5116_TI, &t5116_0_0_0, &t5116_1_0_0, NULL, &t5116_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1572_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.String>
extern Il2CppType t8_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t1572_m29856_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern TypeInfo t1572_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29856_MI = 
{
	"Compare", NULL, &t1572_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t1572_m29856_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1572_MIs[] =
{
	&m29856_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1572_0_0_0;
extern Il2CppType t1572_1_0_0;
struct t1572;
extern TypeInfo t1572_TI;
extern Il2CppGenericClass t1572_GC;
TypeInfo t1572_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t1572_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1572_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1572_TI, &t1572_0_0_0, &t1572_1_0_0, NULL, &t1572_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3766_TI;

#include "t1294.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ThreadStaticAttribute>
extern MethodInfo m29857_MI;
static PropertyInfo t3766____Current_PropertyInfo = 
{
	&t3766_TI, "Current", &m29857_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3766_PIs[] =
{
	&t3766____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3766_TI;
extern Il2CppType t1294_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29857_MI = 
{
	"get_Current", NULL, &t3766_TI, &t1294_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3766_MIs[] =
{
	&m29857_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3766_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3766_0_0_0;
extern Il2CppType t3766_1_0_0;
struct t3766;
extern TypeInfo t3766_TI;
extern Il2CppGenericClass t3766_GC;
TypeInfo t3766_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3766_MIs, t3766_PIs, NULL, NULL, NULL, NULL, NULL, &t3766_TI, t3766_ITIs, NULL, &EmptyCustomAttributesCache, &t3766_TI, &t3766_0_0_0, &t3766_1_0_0, NULL, &t3766_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2900.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2900_TI;
#include "t2900MD.h"

extern TypeInfo t2900_TI;
extern TypeInfo t1294_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m16798_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m22807_MI;
struct t16;
#define m22807(__this, p0, method) (t1294 *)m16827_gshared((t16 *)__this, (int32_t)p0, method)
extern MethodInfo m22807_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>
extern Il2CppType t16_0_0_1;
FieldInfo t2900_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2900_TI, offsetof(t2900, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2900_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2900_TI, offsetof(t2900, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2900_FIs[] =
{
	&t2900_f0_FieldInfo,
	&t2900_f1_FieldInfo,
	NULL
};
extern MethodInfo m16795_MI;
static PropertyInfo t2900____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2900_TI, "System.Collections.IEnumerator.Current", &m16795_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16798_MI;
static PropertyInfo t2900____Current_PropertyInfo = 
{
	&t2900_TI, "Current", &m16798_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2900_PIs[] =
{
	&t2900____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2900____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2900_m16794_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2900_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16794_MI = 
{
	".ctor", (methodPointerType)&m7861_gshared, &t2900_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2900_m16794_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2900_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16795_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7863_gshared, &t2900_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2900_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16796_MI = 
{
	"Dispose", (methodPointerType)&m7865_gshared, &t2900_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2900_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m16797_MI = 
{
	"MoveNext", (methodPointerType)&m7867_gshared, &t2900_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2900_TI;
extern Il2CppType t1294_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16798_MI = 
{
	"get_Current", (methodPointerType)&m7869_gshared, &t2900_TI, &t1294_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2900_MIs[] =
{
	&m16794_MI,
	&m16795_MI,
	&m16796_MI,
	&m16797_MI,
	&m16798_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m16795_MI;
extern MethodInfo m16797_MI;
extern MethodInfo m16796_MI;
extern MethodInfo m16798_MI;
static MethodInfo* t2900_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m16795_MI,
	&m16797_MI,
	&m16796_MI,
	&m16798_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3766_TI;
static TypeInfo* t2900_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3766_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3766_TI;
static Il2CppInterfaceOffsetPair t2900_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3766_TI, 7},
};
extern MethodInfo m16798_MI;
extern TypeInfo t1294_TI;
extern MethodInfo m22807_MI;
static void* t2900_RGCTXData[3] = 
{
	&m16798_MI,
	&t1294_TI,
	&m22807_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2900_0_0_0;
extern Il2CppType t2900_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2900_TI;
extern Il2CppGenericClass t2900_GC;
extern TypeInfo t16_TI;
TypeInfo t2900_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2900_MIs, t2900_PIs, t2900_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2900_TI, t2900_ITIs, t2900_VT, &EmptyCustomAttributesCache, &t2900_TI, &t2900_0_0_0, &t2900_1_0_0, t2900_IOs, &t2900_GC, NULL, NULL, NULL, t2900_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2900)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5118_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>
extern MethodInfo m29858_MI;
static PropertyInfo t5118____Count_PropertyInfo = 
{
	&t5118_TI, "Count", &m29858_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29859_MI;
static PropertyInfo t5118____IsReadOnly_PropertyInfo = 
{
	&t5118_TI, "IsReadOnly", &m29859_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5118_PIs[] =
{
	&t5118____Count_PropertyInfo,
	&t5118____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5118_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29858_MI = 
{
	"get_Count", NULL, &t5118_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5118_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m29859_MI = 
{
	"get_IsReadOnly", NULL, &t5118_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1294_0_0_0;
static ParameterInfo t5118_m29860_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1294_0_0_0},
};
extern TypeInfo t5118_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29860_MI = 
{
	"Add", NULL, &t5118_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t5118_m29860_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5118_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29861_MI = 
{
	"Clear", NULL, &t5118_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1294_0_0_0;
static ParameterInfo t5118_m29862_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1294_0_0_0},
};
extern TypeInfo t5118_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29862_MI = 
{
	"Contains", NULL, &t5118_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t5118_m29862_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3105_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t5118_m29863_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3105_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5118_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29863_MI = 
{
	"CopyTo", NULL, &t5118_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t5118_m29863_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1294_0_0_0;
static ParameterInfo t5118_m29864_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1294_0_0_0},
};
extern TypeInfo t5118_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29864_MI = 
{
	"Remove", NULL, &t5118_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t5118_m29864_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5118_MIs[] =
{
	&m29858_MI,
	&m29859_MI,
	&m29860_MI,
	&m29861_MI,
	&m29862_MI,
	&m29863_MI,
	&m29864_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5120_TI;
static TypeInfo* t5118_ITIs[] = 
{
	&t592_TI,
	&t5120_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5118_0_0_0;
extern Il2CppType t5118_1_0_0;
struct t5118;
extern TypeInfo t5118_TI;
extern Il2CppGenericClass t5118_GC;
TypeInfo t5118_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5118_MIs, t5118_PIs, NULL, NULL, NULL, NULL, NULL, &t5118_TI, t5118_ITIs, NULL, &EmptyCustomAttributesCache, &t5118_TI, &t5118_0_0_0, &t5118_1_0_0, NULL, &t5118_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5120_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ThreadStaticAttribute>
extern TypeInfo t5120_TI;
extern Il2CppType t3766_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29865_MI = 
{
	"GetEnumerator", NULL, &t5120_TI, &t3766_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5120_MIs[] =
{
	&m29865_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t5120_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5120_0_0_0;
extern Il2CppType t5120_1_0_0;
struct t5120;
extern TypeInfo t5120_TI;
extern Il2CppGenericClass t5120_GC;
TypeInfo t5120_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5120_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5120_TI, t5120_ITIs, NULL, &EmptyCustomAttributesCache, &t5120_TI, &t5120_0_0_0, &t5120_1_0_0, NULL, &t5120_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5119_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.ThreadStaticAttribute>
extern MethodInfo m29866_MI;
extern MethodInfo m29867_MI;
static PropertyInfo t5119____Item_PropertyInfo = 
{
	&t5119_TI, "Item", &m29866_MI, &m29867_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5119_PIs[] =
{
	&t5119____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1294_0_0_0;
static ParameterInfo t5119_m29868_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1294_0_0_0},
};
extern TypeInfo t5119_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29868_MI = 
{
	"IndexOf", NULL, &t5119_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t5119_m29868_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1294_0_0_0;
static ParameterInfo t5119_m29869_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1294_0_0_0},
};
extern TypeInfo t5119_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29869_MI = 
{
	"Insert", NULL, &t5119_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t5119_m29869_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5119_m29870_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5119_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29870_MI = 
{
	"RemoveAt", NULL, &t5119_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5119_m29870_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5119_m29866_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5119_TI;
extern Il2CppType t1294_0_0_0;
extern void* RuntimeInvoker_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29866_MI = 
{
	"get_Item", NULL, &t5119_TI, &t1294_0_0_0, RuntimeInvoker_t4_t18, t5119_m29866_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1294_0_0_0;
static ParameterInfo t5119_m29867_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1294_0_0_0},
};
extern TypeInfo t5119_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29867_MI = 
{
	"set_Item", NULL, &t5119_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t4, t5119_m29867_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5119_MIs[] =
{
	&m29868_MI,
	&m29869_MI,
	&m29870_MI,
	&m29866_MI,
	&m29867_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5118_TI;
extern TypeInfo t5120_TI;
static TypeInfo* t5119_ITIs[] = 
{
	&t592_TI,
	&t5118_TI,
	&t5120_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5119_0_0_0;
extern Il2CppType t5119_1_0_0;
struct t5119;
extern TypeInfo t5119_TI;
extern Il2CppGenericClass t5119_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t5119_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5119_MIs, t5119_PIs, NULL, NULL, NULL, NULL, NULL, &t5119_TI, t5119_ITIs, NULL, &t1401__CustomAttributeCache, &t5119_TI, &t5119_0_0_0, &t5119_1_0_0, NULL, &t5119_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1574.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1574_TI;
#include "t1574MD.h"

extern TypeInfo t879_TI;
extern TypeInfo t1576_TI;
extern TypeInfo t18_TI;
#include "t2901MD.h"
extern MethodInfo m16800_MI;
extern MethodInfo m29398_MI;


extern MethodInfo m7841_MI;
 void m7841 (t1574 * __this, MethodInfo* method){
	{
		m16800(__this, &m16800_MI);
		return;
	}
}
extern MethodInfo m16799_MI;
 int32_t m16799 (t1574 * __this, t879  p0, t879  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t879  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t879_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t879  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t879_TI), &L_2);
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
		t879  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t879_TI), &L_4);
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
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, t879  >::Invoke(&m29398_MI, Box(InitializedTypeInfo(&t879_TI), &(*(&p0))), p1);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.TimeSpan>
extern TypeInfo t1574_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m7841_MI = 
{
	".ctor", (methodPointerType)&m7841, &t1574_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t879_0_0_0;
extern Il2CppType t879_0_0_0;
static ParameterInfo t1574_m16799_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
};
extern TypeInfo t1574_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t879_t879 (MethodInfo* method, void* obj, void** args);
MethodInfo m16799_MI = 
{
	"Compare", (methodPointerType)&m16799, &t1574_TI, &t18_0_0_0, RuntimeInvoker_t18_t879_t879, t1574_m16799_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1574_MIs[] =
{
	&m7841_MI,
	&m16799_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m16799_MI;
extern MethodInfo m16802_MI;
extern MethodInfo m16799_MI;
static MethodInfo* t1574_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m16799_MI,
	&m16802_MI,
	&m16799_MI,
};
extern TypeInfo t5220_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t1574_IOs[] = 
{
	{ &t5220_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1574_0_0_0;
extern Il2CppType t1574_1_0_0;
extern TypeInfo t2901_TI;
struct t1574;
extern TypeInfo t1574_TI;
extern Il2CppGenericClass t1574_GC;
TypeInfo t1574_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericComparer`1", "System.Collections.Generic", t1574_MIs, NULL, NULL, NULL, &t2901_TI, NULL, NULL, &t1574_TI, NULL, t1574_VT, &EmptyCustomAttributesCache, &t1574_TI, &t1574_0_0_0, &t1574_1_0_0, t1574_IOs, &t1574_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1574), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t2901.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2901_TI;

#include "t2902.h"
extern TypeInfo t2901_TI;
extern TypeInfo t1576_TI;
extern TypeInfo t294_TI;
extern TypeInfo t879_TI;
extern TypeInfo t19_TI;
extern TypeInfo t825_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2902_TI;
extern TypeInfo t18_TI;
extern TypeInfo t307_TI;
#include "t2902MD.h"
extern Il2CppType t1576_0_0_0;
extern Il2CppType t879_0_0_0;
extern Il2CppType t825_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m16804_MI;
extern MethodInfo m29871_MI;
extern MethodInfo m6463_MI;


extern MethodInfo m16800_MI;
 void m16800 (t2901 * __this, MethodInfo* method){
	{
		m24(__this, &m24_MI);
		return;
	}
}
extern MethodInfo m16801_MI;
 void m16801 (t4 * __this, MethodInfo* method){
	t2902 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2902 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2902_TI));
	m16804(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m16804_MI);
	((t2901_SFs*)InitializedTypeInfo(&t2901_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m16802_MI;
 int32_t m16802 (t2901 * __this, t4 * p0, t4 * p1, MethodInfo* method){
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
		if (!((t4 *)IsInst(p0, InitializedTypeInfo(&t879_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t4 *)IsInst(p1, InitializedTypeInfo(&t879_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t879 , t879  >::Invoke(&m29871_MI, __this, ((*(t879 *)((t879 *)UnBox (p0, InitializedTypeInfo(&t879_TI))))), ((*(t879 *)((t879 *)UnBox (p1, InitializedTypeInfo(&t879_TI))))));
		return L_0;
	}

IL_0033:
	{
		t307 * L_1 = (t307 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t307_TI));
		m6463(L_1, &m6463_MI);
		il2cpp_codegen_raise_exception (L_1);
	}
}
extern MethodInfo m16803_MI;
 t2901 * m16803 (t4 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2901_TI));
		return (((t2901_SFs*)InitializedTypeInfo(&t2901_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.TimeSpan>
extern Il2CppType t2901_0_0_49;
FieldInfo t2901_f0_FieldInfo = 
{
	"_default", &t2901_0_0_49, &t2901_TI, offsetof(t2901_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2901_FIs[] =
{
	&t2901_f0_FieldInfo,
	NULL
};
extern MethodInfo m16803_MI;
static PropertyInfo t2901____Default_PropertyInfo = 
{
	&t2901_TI, "Default", &m16803_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2901_PIs[] =
{
	&t2901____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2901_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16800_MI = 
{
	".ctor", (methodPointerType)&m16800, &t2901_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2901_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16801_MI = 
{
	".cctor", (methodPointerType)&m16801, &t2901_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2901_m16802_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2901_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16802_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m16802, &t2901_TI, &t18_0_0_0, RuntimeInvoker_t18_t4_t4, t2901_m16802_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t879_0_0_0;
extern Il2CppType t879_0_0_0;
static ParameterInfo t2901_m29871_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
};
extern TypeInfo t2901_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t879_t879 (MethodInfo* method, void* obj, void** args);
MethodInfo m29871_MI = 
{
	"Compare", NULL, &t2901_TI, &t18_0_0_0, RuntimeInvoker_t18_t879_t879, t2901_m29871_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2901_TI;
extern Il2CppType t2901_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16803_MI = 
{
	"get_Default", (methodPointerType)&m16803, &t2901_TI, &t2901_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2901_MIs[] =
{
	&m16800_MI,
	&m16801_MI,
	&m16802_MI,
	&m29871_MI,
	&m16803_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m29871_MI;
extern MethodInfo m16802_MI;
static MethodInfo* t2901_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m29871_MI,
	&m16802_MI,
	NULL,
};
extern TypeInfo t5220_TI;
extern TypeInfo t717_TI;
static TypeInfo* t2901_ITIs[] = 
{
	&t5220_TI,
	&t717_TI,
};
extern TypeInfo t5220_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t2901_IOs[] = 
{
	{ &t5220_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2901_0_0_0;
extern Il2CppType t2901_1_0_0;
extern TypeInfo t4_TI;
struct t2901;
extern TypeInfo t2901_TI;
extern Il2CppGenericClass t2901_GC;
TypeInfo t2901_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2901_MIs, t2901_PIs, t2901_FIs, NULL, &t4_TI, NULL, NULL, &t2901_TI, t2901_ITIs, t2901_VT, &EmptyCustomAttributesCache, &t2901_TI, &t2901_0_0_0, &t2901_1_0_0, t2901_IOs, &t2901_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2901), 0, -1, sizeof(t2901_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5220_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.TimeSpan>
extern Il2CppType t879_0_0_0;
extern Il2CppType t879_0_0_0;
static ParameterInfo t5220_m29872_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
};
extern TypeInfo t5220_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t879_t879 (MethodInfo* method, void* obj, void** args);
MethodInfo m29872_MI = 
{
	"Compare", NULL, &t5220_TI, &t18_0_0_0, RuntimeInvoker_t18_t879_t879, t5220_m29872_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5220_MIs[] =
{
	&m29872_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5220_0_0_0;
extern Il2CppType t5220_1_0_0;
struct t5220;
extern TypeInfo t5220_TI;
extern Il2CppGenericClass t5220_GC;
TypeInfo t5220_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t5220_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5220_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5220_TI, &t5220_0_0_0, &t5220_1_0_0, NULL, &t5220_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2902_TI;

extern TypeInfo t879_TI;
extern TypeInfo t1576_TI;
extern TypeInfo t18_TI;
extern TypeInfo t289_TI;
extern TypeInfo t4_TI;
extern TypeInfo t307_TI;
extern MethodInfo m16800_MI;
extern MethodInfo m29398_MI;
extern MethodInfo m7306_MI;
extern MethodInfo m1936_MI;


extern MethodInfo m16804_MI;
 void m16804 (t2902 * __this, MethodInfo* method){
	{
		m16800(__this, &m16800_MI);
		return;
	}
}
extern MethodInfo m16805_MI;
 int32_t m16805 (t2902 * __this, t879  p0, t879  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t879  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t879_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t879  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t879_TI), &L_2);
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
		t879  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t879_TI), &L_4);
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
		t879  L_6 = p0;
		t4 * L_7 = Box(InitializedTypeInfo(&t879_TI), &L_6);
		if (!((t4*)IsInst(L_7, InitializedTypeInfo(&t1576_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t879  L_8 = p0;
		t4 * L_9 = Box(InitializedTypeInfo(&t879_TI), &L_8);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t879  >::Invoke(&m29398_MI, ((t4*)Castclass(L_9, InitializedTypeInfo(&t1576_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t879  L_11 = p0;
		t4 * L_12 = Box(InitializedTypeInfo(&t879_TI), &L_11);
		if (!((t4 *)IsInst(L_12, InitializedTypeInfo(&t289_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t879  L_13 = p0;
		t4 * L_14 = Box(InitializedTypeInfo(&t879_TI), &L_13);
		t879  L_15 = p1;
		t4 * L_16 = Box(InitializedTypeInfo(&t879_TI), &L_15);
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
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
extern TypeInfo t2902_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16804_MI = 
{
	".ctor", (methodPointerType)&m16804, &t2902_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t879_0_0_0;
extern Il2CppType t879_0_0_0;
static ParameterInfo t2902_m16805_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
};
extern TypeInfo t2902_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t879_t879 (MethodInfo* method, void* obj, void** args);
MethodInfo m16805_MI = 
{
	"Compare", (methodPointerType)&m16805, &t2902_TI, &t18_0_0_0, RuntimeInvoker_t18_t879_t879, t2902_m16805_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2902_MIs[] =
{
	&m16804_MI,
	&m16805_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m16805_MI;
extern MethodInfo m16802_MI;
extern MethodInfo m16805_MI;
static MethodInfo* t2902_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m16805_MI,
	&m16802_MI,
	&m16805_MI,
};
extern TypeInfo t5220_TI;
extern TypeInfo t717_TI;
static Il2CppInterfaceOffsetPair t2902_IOs[] = 
{
	{ &t5220_TI, 4},
	{ &t717_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2902_0_0_0;
extern Il2CppType t2902_1_0_0;
extern TypeInfo t2901_TI;
struct t2902;
extern TypeInfo t2902_TI;
extern Il2CppGenericClass t2902_GC;
extern TypeInfo t824_TI;
TypeInfo t2902_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2902_MIs, NULL, NULL, NULL, &t2901_TI, NULL, &t824_TI, &t2902_TI, NULL, t2902_VT, &EmptyCustomAttributesCache, &t2902_TI, &t2902_0_0_0, &t2902_1_0_0, t2902_IOs, &t2902_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2902), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t1575.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1575_TI;
#include "t1575MD.h"

extern TypeInfo t879_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
extern TypeInfo t1577_TI;
extern TypeInfo t19_TI;
#include "t2903MD.h"
extern MethodInfo m16808_MI;
extern MethodInfo m30_MI;
extern MethodInfo m29413_MI;


extern MethodInfo m7842_MI;
 void m7842 (t1575 * __this, MethodInfo* method){
	{
		m16808(__this, &m16808_MI);
		return;
	}
}
extern MethodInfo m16806_MI;
 int32_t m16806 (t1575 * __this, t879  p0, MethodInfo* method){
	{
		t879  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t879_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m30_MI, Box(InitializedTypeInfo(&t879_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m16807_MI;
 bool m16807 (t1575 * __this, t879  p0, t879  p1, MethodInfo* method){
	{
		t879  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t879_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t879  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t879_TI), &L_2);
		return ((((t4 *)L_3) == ((t4 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, t879  >::Invoke(&m29413_MI, Box(InitializedTypeInfo(&t879_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
extern TypeInfo t1575_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m7842_MI = 
{
	".ctor", (methodPointerType)&m7842, &t1575_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t879_0_0_0;
static ParameterInfo t1575_m16806_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
};
extern TypeInfo t1575_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t879 (MethodInfo* method, void* obj, void** args);
MethodInfo m16806_MI = 
{
	"GetHashCode", (methodPointerType)&m16806, &t1575_TI, &t18_0_0_0, RuntimeInvoker_t18_t879, t1575_m16806_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t879_0_0_0;
extern Il2CppType t879_0_0_0;
static ParameterInfo t1575_m16807_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
};
extern TypeInfo t1575_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t879_t879 (MethodInfo* method, void* obj, void** args);
MethodInfo m16807_MI = 
{
	"Equals", (methodPointerType)&m16807, &t1575_TI, &t19_0_0_0, RuntimeInvoker_t19_t879_t879, t1575_m16807_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1575_MIs[] =
{
	&m7842_MI,
	&m16806_MI,
	&m16807_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m16807_MI;
extern MethodInfo m16806_MI;
extern MethodInfo m16811_MI;
extern MethodInfo m16810_MI;
extern MethodInfo m16806_MI;
extern MethodInfo m16807_MI;
static MethodInfo* t1575_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m16807_MI,
	&m16806_MI,
	&m16811_MI,
	&m16810_MI,
	&m16806_MI,
	&m16807_MI,
};
extern TypeInfo t5221_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t1575_IOs[] = 
{
	{ &t5221_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1575_0_0_0;
extern Il2CppType t1575_1_0_0;
extern TypeInfo t2903_TI;
struct t1575;
extern TypeInfo t1575_TI;
extern Il2CppGenericClass t1575_GC;
TypeInfo t1575_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t1575_MIs, NULL, NULL, NULL, &t2903_TI, NULL, NULL, &t1575_TI, NULL, t1575_VT, &EmptyCustomAttributesCache, &t1575_TI, &t1575_0_0_0, &t1575_1_0_0, t1575_IOs, &t1575_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1575), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t2903.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2903_TI;

#include "t2904.h"
extern TypeInfo t2903_TI;
extern TypeInfo t1577_TI;
extern TypeInfo t294_TI;
extern TypeInfo t879_TI;
extern TypeInfo t19_TI;
extern TypeInfo t837_TI;
extern TypeInfo t526_TI;
extern TypeInfo t2904_TI;
extern TypeInfo t18_TI;
#include "t2904MD.h"
extern Il2CppType t1577_0_0_0;
extern Il2CppType t879_0_0_0;
extern Il2CppType t837_0_0_0;
extern MethodInfo m24_MI;
extern MethodInfo m1549_MI;
extern MethodInfo m2978_MI;
extern MethodInfo m2976_MI;
extern MethodInfo m6441_MI;
extern MethodInfo m16813_MI;
extern MethodInfo m29873_MI;
extern MethodInfo m29874_MI;


extern MethodInfo m16808_MI;
 void m16808 (t2903 * __this, MethodInfo* method){
	{
		m24(__this, &m24_MI);
		return;
	}
}
extern MethodInfo m16809_MI;
 void m16809 (t4 * __this, MethodInfo* method){
	t2904 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2904 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2904_TI));
	m16813(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m16813_MI);
	((t2903_SFs*)InitializedTypeInfo(&t2903_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m16810_MI;
 int32_t m16810 (t2903 * __this, t4 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t879  >::Invoke(&m29873_MI, __this, ((*(t879 *)((t879 *)UnBox (p0, InitializedTypeInfo(&t879_TI))))));
		return L_0;
	}
}
extern MethodInfo m16811_MI;
 bool m16811 (t2903 * __this, t4 * p0, t4 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t879 , t879  >::Invoke(&m29874_MI, __this, ((*(t879 *)((t879 *)UnBox (p0, InitializedTypeInfo(&t879_TI))))), ((*(t879 *)((t879 *)UnBox (p1, InitializedTypeInfo(&t879_TI))))));
		return L_0;
	}
}
extern MethodInfo m16812_MI;
 t2903 * m16812 (t4 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2903_TI));
		return (((t2903_SFs*)InitializedTypeInfo(&t2903_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
extern Il2CppType t2903_0_0_49;
FieldInfo t2903_f0_FieldInfo = 
{
	"_default", &t2903_0_0_49, &t2903_TI, offsetof(t2903_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2903_FIs[] =
{
	&t2903_f0_FieldInfo,
	NULL
};
extern MethodInfo m16812_MI;
static PropertyInfo t2903____Default_PropertyInfo = 
{
	&t2903_TI, "Default", &m16812_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2903_PIs[] =
{
	&t2903____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2903_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16808_MI = 
{
	".ctor", (methodPointerType)&m16808, &t2903_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2903_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16809_MI = 
{
	".cctor", (methodPointerType)&m16809, &t2903_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t2903_m16810_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2903_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16810_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m16810, &t2903_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t2903_m16810_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t2903_m16811_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern TypeInfo t2903_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16811_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m16811, &t2903_TI, &t19_0_0_0, RuntimeInvoker_t19_t4_t4, t2903_m16811_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t879_0_0_0;
static ParameterInfo t2903_m29873_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
};
extern TypeInfo t2903_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t879 (MethodInfo* method, void* obj, void** args);
MethodInfo m29873_MI = 
{
	"GetHashCode", NULL, &t2903_TI, &t18_0_0_0, RuntimeInvoker_t18_t879, t2903_m29873_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t879_0_0_0;
extern Il2CppType t879_0_0_0;
static ParameterInfo t2903_m29874_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
};
extern TypeInfo t2903_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t879_t879 (MethodInfo* method, void* obj, void** args);
MethodInfo m29874_MI = 
{
	"Equals", NULL, &t2903_TI, &t19_0_0_0, RuntimeInvoker_t19_t879_t879, t2903_m29874_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2903_TI;
extern Il2CppType t2903_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16812_MI = 
{
	"get_Default", (methodPointerType)&m16812, &t2903_TI, &t2903_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2903_MIs[] =
{
	&m16808_MI,
	&m16809_MI,
	&m16810_MI,
	&m16811_MI,
	&m29873_MI,
	&m29874_MI,
	&m16812_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m29874_MI;
extern MethodInfo m29873_MI;
extern MethodInfo m16811_MI;
extern MethodInfo m16810_MI;
static MethodInfo* t2903_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m29874_MI,
	&m29873_MI,
	&m16811_MI,
	&m16810_MI,
	NULL,
	NULL,
};
extern TypeInfo t5221_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2903_ITIs[] = 
{
	&t5221_TI,
	&t860_TI,
};
extern TypeInfo t5221_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2903_IOs[] = 
{
	{ &t5221_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2903_0_0_0;
extern Il2CppType t2903_1_0_0;
extern TypeInfo t4_TI;
struct t2903;
extern TypeInfo t2903_TI;
extern Il2CppGenericClass t2903_GC;
TypeInfo t2903_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2903_MIs, t2903_PIs, t2903_FIs, NULL, &t4_TI, NULL, NULL, &t2903_TI, t2903_ITIs, t2903_VT, &EmptyCustomAttributesCache, &t2903_TI, &t2903_0_0_0, &t2903_1_0_0, t2903_IOs, &t2903_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2903), 0, -1, sizeof(t2903_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5221_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>
extern Il2CppType t879_0_0_0;
extern Il2CppType t879_0_0_0;
static ParameterInfo t5221_m29875_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
};
extern TypeInfo t5221_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t879_t879 (MethodInfo* method, void* obj, void** args);
MethodInfo m29875_MI = 
{
	"Equals", NULL, &t5221_TI, &t19_0_0_0, RuntimeInvoker_t19_t879_t879, t5221_m29875_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t879_0_0_0;
static ParameterInfo t5221_m29876_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
};
extern TypeInfo t5221_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t879 (MethodInfo* method, void* obj, void** args);
MethodInfo m29876_MI = 
{
	"GetHashCode", NULL, &t5221_TI, &t18_0_0_0, RuntimeInvoker_t18_t879, t5221_m29876_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5221_MIs[] =
{
	&m29875_MI,
	&m29876_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5221_0_0_0;
extern Il2CppType t5221_1_0_0;
struct t5221;
extern TypeInfo t5221_TI;
extern Il2CppGenericClass t5221_GC;
TypeInfo t5221_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5221_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5221_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5221_TI, &t5221_0_0_0, &t5221_1_0_0, NULL, &t5221_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2904_TI;

extern TypeInfo t879_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
extern TypeInfo t19_TI;
extern MethodInfo m16808_MI;
extern MethodInfo m30_MI;
extern MethodInfo m28_MI;


extern MethodInfo m16813_MI;
 void m16813 (t2904 * __this, MethodInfo* method){
	{
		m16808(__this, &m16808_MI);
		return;
	}
}
extern MethodInfo m16814_MI;
 int32_t m16814 (t2904 * __this, t879  p0, MethodInfo* method){
	{
		t879  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t879_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m30_MI, Box(InitializedTypeInfo(&t879_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m16815_MI;
 bool m16815 (t2904 * __this, t879  p0, t879  p1, MethodInfo* method){
	{
		t879  L_0 = p0;
		t4 * L_1 = Box(InitializedTypeInfo(&t879_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t879  L_2 = p1;
		t4 * L_3 = Box(InitializedTypeInfo(&t879_TI), &L_2);
		return ((((t4 *)L_3) == ((t4 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t879  L_4 = p1;
		t4 * L_5 = Box(InitializedTypeInfo(&t879_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t4 * >::Invoke(&m28_MI, Box(InitializedTypeInfo(&t879_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
extern TypeInfo t2904_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16813_MI = 
{
	".ctor", (methodPointerType)&m16813, &t2904_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t879_0_0_0;
static ParameterInfo t2904_m16814_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
};
extern TypeInfo t2904_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t879 (MethodInfo* method, void* obj, void** args);
MethodInfo m16814_MI = 
{
	"GetHashCode", (methodPointerType)&m16814, &t2904_TI, &t18_0_0_0, RuntimeInvoker_t18_t879, t2904_m16814_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t879_0_0_0;
extern Il2CppType t879_0_0_0;
static ParameterInfo t2904_m16815_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t879_0_0_0},
};
extern TypeInfo t2904_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t879_t879 (MethodInfo* method, void* obj, void** args);
MethodInfo m16815_MI = 
{
	"Equals", (methodPointerType)&m16815, &t2904_TI, &t19_0_0_0, RuntimeInvoker_t19_t879_t879, t2904_m16815_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2904_MIs[] =
{
	&m16813_MI,
	&m16814_MI,
	&m16815_MI,
	NULL
};
extern MethodInfo m28_MI;
extern MethodInfo m29_MI;
extern MethodInfo m30_MI;
extern MethodInfo m31_MI;
extern MethodInfo m16815_MI;
extern MethodInfo m16814_MI;
extern MethodInfo m16811_MI;
extern MethodInfo m16810_MI;
extern MethodInfo m16814_MI;
extern MethodInfo m16815_MI;
static MethodInfo* t2904_VT[] =
{
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m16815_MI,
	&m16814_MI,
	&m16811_MI,
	&m16810_MI,
	&m16814_MI,
	&m16815_MI,
};
extern TypeInfo t5221_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2904_IOs[] = 
{
	{ &t5221_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2904_0_0_0;
extern Il2CppType t2904_1_0_0;
extern TypeInfo t2903_TI;
struct t2904;
extern TypeInfo t2904_TI;
extern Il2CppGenericClass t2904_GC;
extern TypeInfo t836_TI;
TypeInfo t2904_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2904_MIs, NULL, NULL, NULL, &t2903_TI, NULL, &t836_TI, &t2904_TI, NULL, t2904_VT, &EmptyCustomAttributesCache, &t2904_TI, &t2904_0_0_0, &t2904_1_0_0, t2904_IOs, &t2904_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2904), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3767_TI;

#include "t697.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.TypeCode>
extern MethodInfo m29877_MI;
static PropertyInfo t3767____Current_PropertyInfo = 
{
	&t3767_TI, "Current", &m29877_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3767_PIs[] =
{
	&t3767____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3767_TI;
extern Il2CppType t697_0_0_0;
extern void* RuntimeInvoker_t697 (MethodInfo* method, void* obj, void** args);
MethodInfo m29877_MI = 
{
	"get_Current", NULL, &t3767_TI, &t697_0_0_0, RuntimeInvoker_t697, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3767_MIs[] =
{
	&m29877_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3767_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3767_0_0_0;
extern Il2CppType t3767_1_0_0;
struct t3767;
extern TypeInfo t3767_TI;
extern Il2CppGenericClass t3767_GC;
TypeInfo t3767_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3767_MIs, t3767_PIs, NULL, NULL, NULL, NULL, NULL, &t3767_TI, t3767_ITIs, NULL, &EmptyCustomAttributesCache, &t3767_TI, &t3767_0_0_0, &t3767_1_0_0, NULL, &t3767_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2905.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2905_TI;
#include "t2905MD.h"

extern TypeInfo t2905_TI;
extern TypeInfo t697_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m16820_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m22818_MI;
struct t16;
 int32_t m22818 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22818_MI;


extern MethodInfo m16816_MI;
 void m16816 (t2905 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16817_MI;
 t4 * m16817 (t2905 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16820(__this, &m16820_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t697_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16818_MI;
 void m16818 (t2905 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16819_MI;
 bool m16819 (t2905 * __this, MethodInfo* method){
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
extern MethodInfo m16820_MI;
 int32_t m16820 (t2905 * __this, MethodInfo* method){
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
		int32_t L_8 = m22818(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22818_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.TypeCode>
extern Il2CppType t16_0_0_1;
FieldInfo t2905_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2905_TI, offsetof(t2905, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2905_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2905_TI, offsetof(t2905, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2905_FIs[] =
{
	&t2905_f0_FieldInfo,
	&t2905_f1_FieldInfo,
	NULL
};
extern MethodInfo m16817_MI;
static PropertyInfo t2905____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2905_TI, "System.Collections.IEnumerator.Current", &m16817_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16820_MI;
static PropertyInfo t2905____Current_PropertyInfo = 
{
	&t2905_TI, "Current", &m16820_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2905_PIs[] =
{
	&t2905____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2905____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2905_m16816_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2905_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16816_MI = 
{
	".ctor", (methodPointerType)&m16816, &t2905_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2905_m16816_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2905_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16817_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16817, &t2905_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2905_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16818_MI = 
{
	"Dispose", (methodPointerType)&m16818, &t2905_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2905_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m16819_MI = 
{
	"MoveNext", (methodPointerType)&m16819, &t2905_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2905_TI;
extern Il2CppType t697_0_0_0;
extern void* RuntimeInvoker_t697 (MethodInfo* method, void* obj, void** args);
MethodInfo m16820_MI = 
{
	"get_Current", (methodPointerType)&m16820, &t2905_TI, &t697_0_0_0, RuntimeInvoker_t697, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2905_MIs[] =
{
	&m16816_MI,
	&m16817_MI,
	&m16818_MI,
	&m16819_MI,
	&m16820_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m16817_MI;
extern MethodInfo m16819_MI;
extern MethodInfo m16818_MI;
extern MethodInfo m16820_MI;
static MethodInfo* t2905_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m16817_MI,
	&m16819_MI,
	&m16818_MI,
	&m16820_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3767_TI;
static TypeInfo* t2905_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3767_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3767_TI;
static Il2CppInterfaceOffsetPair t2905_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3767_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2905_0_0_0;
extern Il2CppType t2905_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2905_TI;
extern Il2CppGenericClass t2905_GC;
extern TypeInfo t16_TI;
TypeInfo t2905_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2905_MIs, t2905_PIs, t2905_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2905_TI, t2905_ITIs, t2905_VT, &EmptyCustomAttributesCache, &t2905_TI, &t2905_0_0_0, &t2905_1_0_0, t2905_IOs, &t2905_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2905)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5121_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.TypeCode>
extern MethodInfo m29878_MI;
static PropertyInfo t5121____Count_PropertyInfo = 
{
	&t5121_TI, "Count", &m29878_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29879_MI;
static PropertyInfo t5121____IsReadOnly_PropertyInfo = 
{
	&t5121_TI, "IsReadOnly", &m29879_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5121_PIs[] =
{
	&t5121____Count_PropertyInfo,
	&t5121____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5121_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29878_MI = 
{
	"get_Count", NULL, &t5121_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5121_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m29879_MI = 
{
	"get_IsReadOnly", NULL, &t5121_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t697_0_0_0;
static ParameterInfo t5121_m29880_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t697_0_0_0},
};
extern TypeInfo t5121_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29880_MI = 
{
	"Add", NULL, &t5121_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5121_m29880_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5121_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29881_MI = 
{
	"Clear", NULL, &t5121_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t697_0_0_0;
static ParameterInfo t5121_m29882_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t697_0_0_0},
};
extern TypeInfo t5121_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29882_MI = 
{
	"Contains", NULL, &t5121_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t5121_m29882_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3106_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t5121_m29883_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3106_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5121_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29883_MI = 
{
	"CopyTo", NULL, &t5121_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t5121_m29883_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t697_0_0_0;
static ParameterInfo t5121_m29884_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t697_0_0_0},
};
extern TypeInfo t5121_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29884_MI = 
{
	"Remove", NULL, &t5121_TI, &t19_0_0_0, RuntimeInvoker_t19_t18, t5121_m29884_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5121_MIs[] =
{
	&m29878_MI,
	&m29879_MI,
	&m29880_MI,
	&m29881_MI,
	&m29882_MI,
	&m29883_MI,
	&m29884_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5123_TI;
static TypeInfo* t5121_ITIs[] = 
{
	&t592_TI,
	&t5123_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5121_0_0_0;
extern Il2CppType t5121_1_0_0;
struct t5121;
extern TypeInfo t5121_TI;
extern Il2CppGenericClass t5121_GC;
TypeInfo t5121_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5121_MIs, t5121_PIs, NULL, NULL, NULL, NULL, NULL, &t5121_TI, t5121_ITIs, NULL, &EmptyCustomAttributesCache, &t5121_TI, &t5121_0_0_0, &t5121_1_0_0, NULL, &t5121_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5123_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.TypeCode>
extern TypeInfo t5123_TI;
extern Il2CppType t3767_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29885_MI = 
{
	"GetEnumerator", NULL, &t5123_TI, &t3767_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5123_MIs[] =
{
	&m29885_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t5123_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5123_0_0_0;
extern Il2CppType t5123_1_0_0;
struct t5123;
extern TypeInfo t5123_TI;
extern Il2CppGenericClass t5123_GC;
TypeInfo t5123_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5123_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5123_TI, t5123_ITIs, NULL, &EmptyCustomAttributesCache, &t5123_TI, &t5123_0_0_0, &t5123_1_0_0, NULL, &t5123_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5122_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.TypeCode>
extern MethodInfo m29886_MI;
extern MethodInfo m29887_MI;
static PropertyInfo t5122____Item_PropertyInfo = 
{
	&t5122_TI, "Item", &m29886_MI, &m29887_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5122_PIs[] =
{
	&t5122____Item_PropertyInfo,
	NULL
};
extern Il2CppType t697_0_0_0;
static ParameterInfo t5122_m29888_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t697_0_0_0},
};
extern TypeInfo t5122_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29888_MI = 
{
	"IndexOf", NULL, &t5122_TI, &t18_0_0_0, RuntimeInvoker_t18_t18, t5122_m29888_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t697_0_0_0;
static ParameterInfo t5122_m29889_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t697_0_0_0},
};
extern TypeInfo t5122_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29889_MI = 
{
	"Insert", NULL, &t5122_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t5122_m29889_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5122_m29890_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5122_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29890_MI = 
{
	"RemoveAt", NULL, &t5122_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5122_m29890_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5122_m29886_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5122_TI;
extern Il2CppType t697_0_0_0;
extern void* RuntimeInvoker_t697_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29886_MI = 
{
	"get_Item", NULL, &t5122_TI, &t697_0_0_0, RuntimeInvoker_t697_t18, t5122_m29886_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t697_0_0_0;
static ParameterInfo t5122_m29887_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t697_0_0_0},
};
extern TypeInfo t5122_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29887_MI = 
{
	"set_Item", NULL, &t5122_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t18, t5122_m29887_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5122_MIs[] =
{
	&m29888_MI,
	&m29889_MI,
	&m29890_MI,
	&m29886_MI,
	&m29887_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5121_TI;
extern TypeInfo t5123_TI;
static TypeInfo* t5122_ITIs[] = 
{
	&t592_TI,
	&t5121_TI,
	&t5123_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5122_0_0_0;
extern Il2CppType t5122_1_0_0;
struct t5122;
extern TypeInfo t5122_TI;
extern Il2CppGenericClass t5122_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t5122_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5122_MIs, t5122_PIs, NULL, NULL, NULL, NULL, NULL, &t5122_TI, t5122_ITIs, NULL, &t1401__CustomAttributeCache, &t5122_TI, &t5122_0_0_0, &t5122_1_0_0, NULL, &t5122_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3768_TI;

#include "t1300.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo m29891_MI;
static PropertyInfo t3768____Current_PropertyInfo = 
{
	&t3768_TI, "Current", &m29891_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3768_PIs[] =
{
	&t3768____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3768_TI;
extern Il2CppType t1300_0_0_0;
extern void* RuntimeInvoker_t1300 (MethodInfo* method, void* obj, void** args);
MethodInfo m29891_MI = 
{
	"get_Current", NULL, &t3768_TI, &t1300_0_0_0, RuntimeInvoker_t1300, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3768_MIs[] =
{
	&m29891_MI,
	NULL
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t3768_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3768_0_0_0;
extern Il2CppType t3768_1_0_0;
struct t3768;
extern TypeInfo t3768_TI;
extern Il2CppGenericClass t3768_GC;
TypeInfo t3768_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3768_MIs, t3768_PIs, NULL, NULL, NULL, NULL, NULL, &t3768_TI, t3768_ITIs, NULL, &EmptyCustomAttributesCache, &t3768_TI, &t3768_0_0_0, &t3768_1_0_0, NULL, &t3768_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2906.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2906_TI;
#include "t2906MD.h"

extern TypeInfo t2906_TI;
extern TypeInfo t1300_TI;
extern TypeInfo t1270_TI;
extern MethodInfo m16825_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m22829_MI;
struct t16;
 uint8_t m22829 (t16 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22829_MI;


extern MethodInfo m16821_MI;
 void m16821 (t2906 * __this, t16 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16822_MI;
 t4 * m16822 (t2906 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m16825(__this, &m16825_MI);
		uint8_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t1300_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16823_MI;
 void m16823 (t2906 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16824_MI;
 bool m16824 (t2906 * __this, MethodInfo* method){
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
extern MethodInfo m16825_MI;
 uint8_t m16825 (t2906 * __this, MethodInfo* method){
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
		uint8_t L_8 = m22829(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22829_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>
extern Il2CppType t16_0_0_1;
FieldInfo t2906_f0_FieldInfo = 
{
	"array", &t16_0_0_1, &t2906_TI, offsetof(t2906, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t2906_f1_FieldInfo = 
{
	"idx", &t18_0_0_1, &t2906_TI, offsetof(t2906, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2906_FIs[] =
{
	&t2906_f0_FieldInfo,
	&t2906_f1_FieldInfo,
	NULL
};
extern MethodInfo m16822_MI;
static PropertyInfo t2906____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2906_TI, "System.Collections.IEnumerator.Current", &m16822_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16825_MI;
static PropertyInfo t2906____Current_PropertyInfo = 
{
	&t2906_TI, "Current", &m16825_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2906_PIs[] =
{
	&t2906____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2906____Current_PropertyInfo,
	NULL
};
extern Il2CppType t16_0_0_0;
static ParameterInfo t2906_m16821_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t2906_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16821_MI = 
{
	".ctor", (methodPointerType)&m16821, &t2906_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t2906_m16821_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2906_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m16822_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16822, &t2906_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2906_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m16823_MI = 
{
	"Dispose", (methodPointerType)&m16823, &t2906_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2906_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m16824_MI = 
{
	"MoveNext", (methodPointerType)&m16824, &t2906_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2906_TI;
extern Il2CppType t1300_0_0_0;
extern void* RuntimeInvoker_t1300 (MethodInfo* method, void* obj, void** args);
MethodInfo m16825_MI = 
{
	"get_Current", (methodPointerType)&m16825, &t2906_TI, &t1300_0_0_0, RuntimeInvoker_t1300, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2906_MIs[] =
{
	&m16821_MI,
	&m16822_MI,
	&m16823_MI,
	&m16824_MI,
	&m16825_MI,
	NULL
};
extern MethodInfo m1381_MI;
extern MethodInfo m29_MI;
extern MethodInfo m1382_MI;
extern MethodInfo m1494_MI;
extern MethodInfo m16822_MI;
extern MethodInfo m16824_MI;
extern MethodInfo m16823_MI;
extern MethodInfo m16825_MI;
static MethodInfo* t2906_VT[] =
{
	&m1381_MI,
	&m29_MI,
	&m1382_MI,
	&m1494_MI,
	&m16822_MI,
	&m16824_MI,
	&m16823_MI,
	&m16825_MI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3768_TI;
static TypeInfo* t2906_ITIs[] = 
{
	&t27_TI,
	&t28_TI,
	&t3768_TI,
};
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
extern TypeInfo t3768_TI;
static Il2CppInterfaceOffsetPair t2906_IOs[] = 
{
	{ &t27_TI, 4},
	{ &t28_TI, 6},
	{ &t3768_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2906_0_0_0;
extern Il2CppType t2906_1_0_0;
extern TypeInfo t101_TI;
extern TypeInfo t2906_TI;
extern Il2CppGenericClass t2906_GC;
extern TypeInfo t16_TI;
TypeInfo t2906_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2906_MIs, t2906_PIs, t2906_FIs, NULL, &t101_TI, NULL, &t16_TI, &t2906_TI, t2906_ITIs, t2906_VT, &EmptyCustomAttributesCache, &t2906_TI, &t2906_0_0_0, &t2906_1_0_0, t2906_IOs, &t2906_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2906)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5124_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo m29892_MI;
static PropertyInfo t5124____Count_PropertyInfo = 
{
	&t5124_TI, "Count", &m29892_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29893_MI;
static PropertyInfo t5124____IsReadOnly_PropertyInfo = 
{
	&t5124_TI, "IsReadOnly", &m29893_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5124_PIs[] =
{
	&t5124____Count_PropertyInfo,
	&t5124____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5124_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29892_MI = 
{
	"get_Count", NULL, &t5124_TI, &t18_0_0_0, RuntimeInvoker_t18, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5124_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m29893_MI = 
{
	"get_IsReadOnly", NULL, &t5124_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1300_0_0_0;
static ParameterInfo t5124_m29894_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1300_0_0_0},
};
extern TypeInfo t5124_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t340 (MethodInfo* method, void* obj, void** args);
MethodInfo m29894_MI = 
{
	"Add", NULL, &t5124_TI, &t17_0_0_0, RuntimeInvoker_t17_t340, t5124_m29894_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5124_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m29895_MI = 
{
	"Clear", NULL, &t5124_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1300_0_0_0;
static ParameterInfo t5124_m29896_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1300_0_0_0},
};
extern TypeInfo t5124_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t340 (MethodInfo* method, void* obj, void** args);
MethodInfo m29896_MI = 
{
	"Contains", NULL, &t5124_TI, &t19_0_0_0, RuntimeInvoker_t19_t340, t5124_m29896_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3107_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t5124_m29897_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3107_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5124_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29897_MI = 
{
	"CopyTo", NULL, &t5124_TI, &t17_0_0_0, RuntimeInvoker_t17_t4_t18, t5124_m29897_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1300_0_0_0;
static ParameterInfo t5124_m29898_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1300_0_0_0},
};
extern TypeInfo t5124_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t340 (MethodInfo* method, void* obj, void** args);
MethodInfo m29898_MI = 
{
	"Remove", NULL, &t5124_TI, &t19_0_0_0, RuntimeInvoker_t19_t340, t5124_m29898_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5124_MIs[] =
{
	&m29892_MI,
	&m29893_MI,
	&m29894_MI,
	&m29895_MI,
	&m29896_MI,
	&m29897_MI,
	&m29898_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5126_TI;
static TypeInfo* t5124_ITIs[] = 
{
	&t592_TI,
	&t5126_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5124_0_0_0;
extern Il2CppType t5124_1_0_0;
struct t5124;
extern TypeInfo t5124_TI;
extern Il2CppGenericClass t5124_GC;
TypeInfo t5124_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5124_MIs, t5124_PIs, NULL, NULL, NULL, NULL, NULL, &t5124_TI, t5124_ITIs, NULL, &EmptyCustomAttributesCache, &t5124_TI, &t5124_0_0_0, &t5124_1_0_0, NULL, &t5124_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5126_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UnitySerializationHolder/UnityType>
extern TypeInfo t5126_TI;
extern Il2CppType t3768_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29899_MI = 
{
	"GetEnumerator", NULL, &t5126_TI, &t3768_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5126_MIs[] =
{
	&m29899_MI,
	NULL
};
extern TypeInfo t592_TI;
static TypeInfo* t5126_ITIs[] = 
{
	&t592_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5126_0_0_0;
extern Il2CppType t5126_1_0_0;
struct t5126;
extern TypeInfo t5126_TI;
extern Il2CppGenericClass t5126_GC;
TypeInfo t5126_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5126_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5126_TI, t5126_ITIs, NULL, &EmptyCustomAttributesCache, &t5126_TI, &t5126_0_0_0, &t5126_1_0_0, NULL, &t5126_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5125_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo m29900_MI;
extern MethodInfo m29901_MI;
static PropertyInfo t5125____Item_PropertyInfo = 
{
	&t5125_TI, "Item", &m29900_MI, &m29901_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5125_PIs[] =
{
	&t5125____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1300_0_0_0;
static ParameterInfo t5125_m29902_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1300_0_0_0},
};
extern TypeInfo t5125_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t340 (MethodInfo* method, void* obj, void** args);
MethodInfo m29902_MI = 
{
	"IndexOf", NULL, &t5125_TI, &t18_0_0_0, RuntimeInvoker_t18_t340, t5125_m29902_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1300_0_0_0;
static ParameterInfo t5125_m29903_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1300_0_0_0},
};
extern TypeInfo t5125_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t340 (MethodInfo* method, void* obj, void** args);
MethodInfo m29903_MI = 
{
	"Insert", NULL, &t5125_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t340, t5125_m29903_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5125_m29904_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5125_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29904_MI = 
{
	"RemoveAt", NULL, &t5125_TI, &t17_0_0_0, RuntimeInvoker_t17_t18, t5125_m29904_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5125_m29900_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5125_TI;
extern Il2CppType t1300_0_0_0;
extern void* RuntimeInvoker_t1300_t18 (MethodInfo* method, void* obj, void** args);
MethodInfo m29900_MI = 
{
	"get_Item", NULL, &t5125_TI, &t1300_0_0_0, RuntimeInvoker_t1300_t18, t5125_m29900_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t1300_0_0_0;
static ParameterInfo t5125_m29901_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1300_0_0_0},
};
extern TypeInfo t5125_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t18_t340 (MethodInfo* method, void* obj, void** args);
MethodInfo m29901_MI = 
{
	"set_Item", NULL, &t5125_TI, &t17_0_0_0, RuntimeInvoker_t17_t18_t340, t5125_m29901_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5125_MIs[] =
{
	&m29902_MI,
	&m29903_MI,
	&m29904_MI,
	&m29900_MI,
	&m29901_MI,
	NULL
};
extern TypeInfo t592_TI;
extern TypeInfo t5124_TI;
extern TypeInfo t5126_TI;
static TypeInfo* t5125_ITIs[] = 
{
	&t592_TI,
	&t5124_TI,
	&t5126_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5125_0_0_0;
extern Il2CppType t5125_1_0_0;
struct t5125;
extern TypeInfo t5125_TI;
extern Il2CppGenericClass t5125_GC;
extern CustomAttributesCache t1401__CustomAttributeCache;
TypeInfo t5125_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5125_MIs, t5125_PIs, NULL, NULL, NULL, NULL, NULL, &t5125_TI, t5125_ITIs, NULL, &t1401__CustomAttributeCache, &t5125_TI, &t5125_0_0_0, &t5125_1_0_0, NULL, &t5125_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1580_TI;

#include "t949.h"


// Metadata Definition System.IComparable`1<System.Version>
extern Il2CppType t949_0_0_0;
static ParameterInfo t1580_m29905_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t949_0_0_0},
};
extern TypeInfo t1580_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t18_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29905_MI = 
{
	"CompareTo", NULL, &t1580_TI, &t18_0_0_0, RuntimeInvoker_t18_t4, t1580_m29905_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1580_MIs[] =
{
	&m29905_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1580_0_0_0;
extern Il2CppType t1580_1_0_0;
struct t1580;
extern TypeInfo t1580_TI;
extern Il2CppGenericClass t1580_GC;
TypeInfo t1580_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1580_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1580_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1580_TI, &t1580_0_0_0, &t1580_1_0_0, NULL, &t1580_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1581_TI;



// Metadata Definition System.IEquatable`1<System.Version>
extern Il2CppType t949_0_0_0;
static ParameterInfo t1581_m29906_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t949_0_0_0},
};
extern TypeInfo t1581_TI;
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m29906_MI = 
{
	"Equals", NULL, &t1581_TI, &t19_0_0_0, RuntimeInvoker_t19_t4, t1581_m29906_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1581_MIs[] =
{
	&m29906_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1581_0_0_0;
extern Il2CppType t1581_1_0_0;
struct t1581;
extern TypeInfo t1581_TI;
extern Il2CppGenericClass t1581_GC;
TypeInfo t1581_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1581_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1581_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1581_TI, &t1581_0_0_0, &t1581_1_0_0, NULL, &t1581_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
